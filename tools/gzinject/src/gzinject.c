#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <getopt.h>
#include <inttypes.h>
#include <errno.h>

#include "gzinject.h"
#include "lz77.h"
#include "u8.h"
#include "gzi.h"
#include "aes.h"
#include "sha1.h"
#include "md5.h"
#include "romchu.h"
#include "doltool.h"

static uint8_t key[16] = {0};
static uint8_t region = 0x03;

static int cleanup = 0;
static int content_num = 5;

int verbose = 0;
int dol_after = -1;

static char *wad = NULL;
static char *directory = NULL;
static char *keyfile = NULL;
static char    *workingdirectory = NULL;
static char *rom = NULL;
static char *outwad = NULL;
static patch_list_t *patch = NULL;
static patch_list_t **patch_link = &patch;
static dol_list_t *dol = NULL;
static dol_list_t **dol_link = &dol;
static dol_loading_list_t *dol_loading = NULL;
static dol_loading_list_t **dol_loading_link = &dol_loading;
static char *titleid = NULL;
static char *channelname = NULL;

uint16_t be16(const uint8_t *p)
{
    return (p[0] << 8) | p[1];
}

uint32_t be32(const uint8_t *p)
{
    return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

static const struct option cmdoptions[] = {
    { "action",required_argument,0,'a' },
    { "wad",required_argument,0,'w' },
    { "channelid",required_argument,0,'i' },
    { "channeltitle",required_argument,0,'t' },
    { "help",no_argument,0,'h' },
    { "key",required_argument,0,'k' },
    { "region",required_argument,0,'r' },
    { "verbose",no_argument,&verbose,1 },
    { "directory",required_argument,0,'d' },
    { "cleanup", no_argument,&cleanup,1},
    { "version",no_argument,0,'v'},
    { "rom",required_argument,0,'m'},
    { "outputwad",required_argument,0,'o'},
    { "patch-file",required_argument,0,'p'},
    { "content-num",required_argument,0,'c'},
    { "dol-inject",required_argument,0,'f'},
    { "dol-loading",required_argument,0,'l'},
    { "dol-after", required_argument,0,'e'},
    { 0,0,0,0}
};

const uint8_t newkey[16] = {
    0x47, 0x5a, 0x49, 0x73, 0x4c, 0x69, 0x66, 0x65, 0x41, 0x6e, 0x64, 0x42, 0x65, 0x65, 0x72, 0x21
};

static struct AES_ctx aes;
static SHA1_CTX sha1;
static MD5_CTX md5;

 static void do_encrypt(uint8_t *input, size_t size, const uint8_t *key, const uint8_t *iv) {
    AES_init_ctx_iv(&aes, key, iv);
    AES_CBC_encrypt_buffer(&aes, input, size);
}

 static void do_decrypt(uint8_t *input, size_t size, const uint8_t *key, const uint8_t *iv) {
    AES_init_ctx_iv(&aes, key, iv);
    AES_CBC_decrypt_buffer(&aes, input, size);
}

 static void do_sha1(uint8_t *input, uint8_t *output, size_t size) {
    SHA1Init(&sha1);
    SHA1Update(&sha1, input, size);
    SHA1Final(output, &sha1);
}

 static void do_md5(uint8_t *input, uint8_t *output, size_t size) {
    MD5_Init(&md5);
    MD5_Update(&md5, input, size);
    MD5_Final(output, &md5);
}

uint32_t addpadding(uint32_t inp, uint32_t padding) {
    int ret = inp;
    if (inp % padding != 0) {
        ret = inp + (padding - (inp % padding));
    }
    return ret;
}

static uint32_t getcontentlength(uint8_t *tmd, uint32_t contentnum) {
    uint32_t off = 0x1ec + (36 * contentnum);
    return tmd[off + 4] << 24 |
        tmd[off + 5] << 16 |
        tmd[off + 6] << 8 |
        tmd[off + 7];
}

static void setcontentlength(uint8_t *tmd, uint32_t contentnum, uint32_t size){
    uint32_t off = 0x1ec + (36 * contentnum) + 4;
    *((uint32_t*)(tmd + off)) = REVERSEENDIAN32(size);
}

static void removedir(const char *file);

static void removefile(const char* file) {
    struct stat sbuffer;
    if (stat(file, &sbuffer) == 0) {
        if ((sbuffer.st_mode & S_IFMT) == S_IFDIR) {
            removedir(file);
        }
        else if ((sbuffer.st_mode & S_IFMT) == S_IFREG) {
            if (verbose) {
                printf("Removing %s\n", file);
            }
            remove(file);
        }

    }
}

static void removedir(const char *file) {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(file)) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
                continue;
            char *path = malloc(1000);
            snprintf(path, 1000, "%s/%s", file, ent->d_name);
            removefile(path);
            free(path);
        }
        if (verbose) {
            printf("Removing %s\n", file);
        }
        rmdir(file);
    }

}

static char *removeext(char* mystr) {
    char *retstr;
    char *lastdot;
    if (mystr == NULL)
        return NULL;
    if ((retstr = malloc(strlen(mystr) + 1)) == NULL)
        return NULL;
    strcpy(retstr, mystr);
    lastdot = strrchr(retstr, '.');
    if (lastdot != NULL)
        *lastdot = '\0';
    return retstr;
}

static void print_usage() {
    puts("Usage:\n"
    "  gzinject -a extract -w SOURCEWAD [options]\n"
    "  gzinject -a pack -w DESTWAD [options]\n"
    "  gzinject -a inject -w SOURCEWAD -m ROM [options]\n"
    "  gzinject -a romc -m INROM -o OUTROM [options]\n"
    "  gzinject -a genkey [options]\n"
    "  gzinject --help\n"
    "  gzinject --version\n\n"
    "Actions:\n"
    "  extract      extracts SOURCEWAD to directory\n"
    "  pack         packs directory into DESTWAD\n"
    "  inject       injects rom into SOURCEWAD\n"
    "  romc         decompresses a romc compressed rom\n"
    "  genkey       generates wii common-key\n\n"
    "Options:\n"
    "  -i, --channelid=ID           New Channel ID For Pack and Inject actions (default: none)\n"
    "  -t, --title=title            New Channel name for pack and inject actions (default: none)\n"
    "  -h, --help                   Prints this help message\n"
    "  -k, --key=keyfile            Location of the common-key file (default: ./common-key.bin)\n"
    "  -r, --region=1-3             Region to use (default: 3)\n"
    "  --verbose                    Print out verbose program execution information\n"
    "  -d, --directory=directory    Directory to extract contents to, or directory to read contents from (default: ./wadextract)\n"
    "  --cleanup                    Remove files before performing actions\n"
    "  --version                    Prints the current version\n"
    "  -m, --rom=rom                Rom to inject for inject action (default: none), also rom to romc decompress\n"
    "  -o, --outputwad=outwad       The output wad for inject actions (default: SOURCEWAD-inject.wad), also output for romc decompression\n"
    "  -p, --patch-file=patchfile   gzi file to use for applying patches (default: none)\n"
    "  -c, --content=contentfile    the primary content file (default: 5)\n"
    "  --dol-inject                 Binary data to inject into the emulator program, requires --dol-loading\n"
    "  --dol-loading                The loading address for the binary specified by --dol-inject\n"
    "  --dol-after                  After which patch file to inject the dol, default: after all patches\n"
    );
}

static void print_version(const char* prog) {
    printf("%s Version ", prog);
    printf(GZINJECT_VERSION);
    printf("\n");
}

static void truchasign(uint8_t *data, uint8_t type, size_t len) {
    uint16_t pos = 0x1f2;
    if (type == W_TMD) {
        pos = 0x1d4;
    }

    uint8_t digest[20];
    do_sha1(data + 0x140, digest, len - 0x140);

    uint16_t i;
    if (digest[0] != 0x00) {
        for (i = 4; i < 260; i++) {
            data[i] = 0x00;
        }
        for (i = 0; i < 0xFFFF; i++) {
            uint16_t revi = REVERSEENDIAN16(i);
            memcpy(data + pos, &revi, 2);

            do_sha1(data + 0x140, digest, len - 0x140);

            if (digest[0] == 0x00) {
                break;
            }
        }
    }
}

static int do_extract() {
    struct stat sbuffer;

    if (stat(wad, &sbuffer) != 0) {
        printf("Could not open %s\n", wad);
        return 0;
    }

    if (verbose) {
        printf("Extracting %s to %s\n", wad, directory);
    }

    uint8_t *data = (uint8_t*)malloc(sbuffer.st_size);
    if(!data){
        fprintf(stderr,"Could not allocate %ld bytes for wad\n",sbuffer.st_size);
        return 0;
    }
    FILE *wadfile = fopen(wad, "rb");
    if(!wadfile){
        fprintf(stderr,"Could not open %s wad file\n",wad);
        free(data);
        return 0;
    }
    int bytesread = fread(data, 1, sbuffer.st_size, wadfile);
    if(bytesread!=sbuffer.st_size || ferror(wadfile)){
        fprintf(stderr,"Could not read total wad, or file error occured");
        free(data);
        fclose(wadfile);
        return 0;
    }
    fclose(wadfile);
    if (be32(&data[3]) != 0x20497300) {
        fprintf(stderr,"%s is an invalid wad file!\n",wad);
        free(data);
        return 0;
    }

    uint32_t certsize = be32(data + 0x08);
    uint32_t tiksize = be32(data + 0x10);
    uint32_t tmdsize = be32(data + 0x14);
    uint32_t datasize = be32(data + 0x18);
    uint32_t footersize = be32(data + 0x1C);

    uint32_t certpos = 0x40;
    uint32_t tikpos = 0x40 + addpadding(certsize, 64);
    uint32_t tmdpos = tikpos + addpadding(tiksize, 64);
    uint32_t datapos = tmdpos + addpadding(tmdsize, 64);
    uint32_t footerpos = datapos + addpadding(datasize,64);

    if (cleanup == 1) removedir(directory);

    stat(directory,&sbuffer);
    if(S_ISDIR(sbuffer.st_mode)){
        if(verbose){
            printf("%s exists, not creating.\n",directory);
        }
    }else{
        if(verbose)
            printf("Creating %s\n",directory);
        if(mkdir(directory, 0755)==-1){
            fprintf(stderr,"Could not mkdir %s\n",directory);
            free(data);
            return 0;
        }
    }

    if(chdir(directory)==-1){
        fprintf(stderr,"Could not chdir to %s\n",directory);
        free(data);
        return 0;
    }

    uint16_t contentcount = be16(data + tmdpos + 0x1de);

    if (verbose) {
        printf("Writing cert.cert.\n");
    }
    FILE* outfile = fopen("cert.cert", "wb");
    if(!outfile){
        perror("Could not open cert.cert for writing\n");
        free(data);
        return 0;
    }

    fwrite(data + certpos, 1, certsize, outfile);
    if(ferror(outfile)){
        perror("Could not write to cert.cert\n");
        free(data);
        return 0;
    }
    fclose(outfile);

    if (verbose) {
        printf("Writing ticket.tik.\n");
    }
    outfile = fopen("ticket.tik", "wb");
    if(!outfile){
        perror("Could not open ticket.tik for writing.\n");
        free(data);
        return 0;
    }
    fwrite(data + tikpos, 1, tiksize, outfile);
    if(ferror(outfile)){
        perror("Could not write to ticket.tik\n");
        free(data);
        return 0;
    }
    fclose(outfile);

    if (verbose) {
        printf("Writing metadata.tmd.\n");
    }
    outfile = fopen("metadata.tmd", "wb");
    if(!outfile){
        perror("Could not open metadata.tmd for writing\n");
        free(data);
        return 0;
    }
    fwrite(data + tmdpos, 1, tmdsize, outfile);
    if(ferror(outfile)){
        perror("Could not write to metadata.tmd\n");
        free(data);
        return 0;
    }
    fclose(outfile);

    if(verbose){
        printf("Writing footer.bin\n");
    }
    outfile = fopen("footer.bin","wb");
    if(!outfile){
        perror("Could not open footer.bin for writing.\n");
        free(data);
        return 0;
    }
    fwrite(data + footerpos, 1, footersize, outfile);
    if(ferror(outfile)){
        perror("Could not write to footer.bin\n");
        free(data);
        return 0;
    }
    fclose(outfile);

    uint8_t encryptedkey[16], iv[16];

    uint8_t i, j;
    for (i = 0; i < 16; i++) {
        encryptedkey[i] = data[tikpos + 0x1bf + i];
    }
    for (i = 0; i < 8; i++) {
        iv[i] = data[tikpos + 0x1dc + i];
        iv[i + 8] = 0x00;
    }
    ;
    do_decrypt(encryptedkey, 16, key, iv);

    for (j = 2; j < 16; j++) iv[j] = 0x00;

    uint8_t *contentpos = data + datapos;

    for (i = 0; i < contentcount; i++) {

        iv[0] = data[tmdpos + 0x1e8 + (0x24 * i)];
        iv[1] = data[tmdpos + 0x1e9 + (0x24 * i)];

        uint32_t size = addpadding(getcontentlength(data + tmdpos, i), 16);

        if (verbose) {
            printf("Decrypting contents %d.\n", i);
        }

        do_decrypt(contentpos, size, encryptedkey, iv);

        // Main rom content file
        if (i == content_num) {
            if (verbose) {
                printf("Extracting content %d uint8_t Archive.\n",content_num);
            }
            char dbuf[100];
            snprintf(dbuf,100,"content%d",content_num);
            if(!extract_u8_archive(contentpos,dbuf)){
                perror("Could not extract u8 archive");
                free(data);
                return 0;
            }
        }

        char contentname[100];
        snprintf(contentname, 100, "content%d.app", i);
        if (verbose) {
            printf("Writing %s.\n", contentname);
        }
        outfile = fopen(contentname, "wb");
        if(!outfile){
            fprintf(stderr,"Could not open %s for writing\n",contentname);
            free(data);
            return 0;
        }
        fwrite(contentpos, 1, getcontentlength(data + tmdpos, i), outfile);
        if(ferror(outfile)){
            fprintf(stderr,"Could not write to %s\n",contentname);
            free(data);
            return 0;
        }
        fclose(outfile);
        contentpos += addpadding(size, 64);
    }
    chdir("..");
    free(data);
    return 1;
}

static int apply_dol_patch(const char *dol_file, uint32_t loading_address, uint8_t **data, uint32_t *size){
    if(verbose){
        printf("Injecting dol file %s\n",dol_file);
    }
    struct stat sbuffer;
    chdir(workingdirectory);
    doltool_ctxt_t *dolctxt = calloc(1,sizeof(*dolctxt));
    if(!dolctxt){
        perror("Could not create dol ctxt");
        errno = ENOMEM;
        return -1;
    }
    dol_load(dolctxt,data,size);
    FILE *inject_file = fopen(dol_file,"rb");
    if(!inject_file){
        free(dolctxt);
        perror(dol_file);
        errno = ENOENT;
        return -1;
    }
    stat(dol_file,&sbuffer);
    uint8_t *inject_data = malloc(sbuffer.st_size);
    fread(inject_data,1,sbuffer.st_size,inject_file);
    fclose(inject_file);
    dol_inject(dolctxt,inject_data,sbuffer.st_size,loading_address);
    dol_save(dolctxt);
    free(dolctxt);
    free(inject_data);
    chdir(directory);
    return 0;
}

static int do_pack() {
    DIR *testdir = opendir(directory);
    if (testdir) {
        closedir(testdir);
    }
    else {
        fprintf(stderr,"%s doesn't exist, or is not a directory!\n", directory);
        return 0;
    }

    if (verbose) {
        printf("Packing %s into %s\n", directory, wad);
    }
    if(chdir(directory)==-1){
        fprintf(stderr,"Could not change directory to %s",directory);
        return 0;
    }

    if (verbose) {
        printf("Gathering WAD Header Information\n");
    }

    struct stat sbuffer;
    if(stat("cert.cert", &sbuffer)!=0){
        perror("Could not stat cert.cert\n");
        return 0;
    }
    uint32_t certsize = sbuffer.st_size;

    if(stat("ticket.tik", &sbuffer)!=0){
        perror("Could not stat ticket.tik\n");
        return 0;
    }
    uint32_t tiksize = sbuffer.st_size;

    if(stat("metadata.tmd", &sbuffer)!=0){
        perror("Could not stat metadata.tmd\n");
        return 0;
    }
    uint32_t tmdsize = sbuffer.st_size;

    if (verbose) {
        printf("Reading cert.cert\n");
    }
    FILE *infile = fopen("cert.cert", "rb");
    if(!infile){
        perror("Could not open cert.cert for reading\n");
        return 0;
    }
    uint8_t *cert = calloc(addpadding(certsize, 64), sizeof(uint8_t));
    if(!cert){
        fprintf(stderr,"Could not allocate %d bytes for cert\n",certsize);
        return 0;
    }
    int bytesread = fread(cert, 1, certsize, infile);
    if(bytesread!=certsize || ferror(infile)){
        perror("Error reading from cert.cert\n");
        free(cert);
        return 0;
    }
    fclose(infile);

    if (verbose) {
        printf("Reading ticket.cert\n");
    }
    infile = fopen("ticket.tik", "rb");
    if(!infile){
        perror("Could not open ticket.tik for reading\n");
        free(cert);
        return 0;
    }
    uint8_t *tik = calloc(addpadding(tiksize, 64), sizeof(uint8_t));
    if(!tik){
        fprintf(stderr,"Could not allocate %d bytes for ticket\n",tiksize);
        free(cert);
        return 0;
    }
    bytesread = fread(tik, 1, tiksize, infile);
    if(bytesread!=tiksize || ferror(infile)){
        perror("Error reading from ticket.tik\n");
        free(cert);
        free(tik);
        return 0;
    }
    fclose(infile);

    if (verbose) {
        printf("Reading metadata.tmd\n");
    }
    infile = fopen("metadata.tmd", "rb");
    if(!infile){
        perror("Could not open metadata.tmd for reading\n");
        free(cert);
        free(tik);
        return 0;
    }
    uint8_t *tmd = calloc(addpadding(tmdsize, 64), sizeof(uint8_t));
    if(!tmd){
        fprintf(stderr,"Could not allocate %d bytes for tmd\n",tmdsize);
        free(cert);
        free(tik);
        return 0;
    }
    bytesread = fread(tmd, 1, tmdsize, infile);
    if(bytesread!=tmdsize || ferror(infile)){
        perror("Error reading from tmddata.tmd\n");
        free(cert);
        free(tik);
        free(tmd);
        return 0;
    }
    fclose(infile);

    if (verbose) {
        printf("Generating Footer signature\n");
    }
    char footer[0x40] = {0};
    sprintf(footer,"gzinject v%s https://github.com/krimtonz/gzinject", GZINJECT_VERSION);
    uint32_t footersize = 0x40;

    // Build Content5 into a .app file first
    char dbuf[100], nbuf[100] = {0};
    snprintf(dbuf,100,"content%d",content_num);
    strcpy(nbuf,dbuf);
    strcat(nbuf,".app");
    if(verbose){
        printf("Generating %s u8 archive\n",nbuf);
    }

    int content5len = create_u8_archive(dbuf,nbuf);
    if(!content5len){
        fprintf(stderr,"Could not create u8 archive from %s into %s\n",dbuf,nbuf);
        free(cert);
        free(tik);
        free(tmd);
        return 0;
    }
    chdir(workingdirectory);
    chdir(directory);
    if (verbose) {
        printf("Modifying content metadata in the TMD\n");
    }
    uint16_t contentsc = be16(tmd + 0x1DE);
    int i;

    char cfname[100];
    uint8_t **fileptrs = malloc(sizeof(*fileptrs) * contentsc);
    if(!fileptrs){
        perror("Could not allocate filepointers.\n");
        free(cert);
        free(tik);
        free(tmd);
        return 0;
    }
    uint32_t *filesizes = malloc(sizeof(*filesizes) * contentsc);
    if(!filesizes){
        perror("Could not allocate filesizes\n");
        free(cert);
        free(tik);
        free(tmd);
        free(fileptrs);
        return 0;
    }

    for (i = 0; i < contentsc; i++) {
        snprintf(cfname, 30, "content%d.app", i);
        stat(cfname, &sbuffer);
        filesizes[i] = addpadding(sbuffer.st_size,16);
        fileptrs[i] = calloc(filesizes[i],1);
        if(!fileptrs[i]){
            fprintf(stderr,"Could not allocate %ld bytes for %s\n",sbuffer.st_size,cfname);
            goto error;
        }
        infile = fopen(cfname,"rb");
        if(!infile){
            fprintf(stderr,"Could not open %s for reading\n",cfname);
            goto error;
        }
        bytesread = fread(fileptrs[i],1,sbuffer.st_size,infile);
        if(bytesread!=sbuffer.st_size || ferror(infile)){
            fprintf(stderr,"Error reading from %s\n",cfname);
            goto error;
        }
        fclose(infile);
        setcontentlength(tmd,i,filesizes[i]);
    }

    int patch_idx = 0;
    int dol_applied = 0;
    if(dol_after>=101) dol_after-=101;

    while(patch){
        if(verbose){
            printf("Applying %s gzi patches\n",patch->filename);
        }

        if(chdir(workingdirectory)!=0){
            fprintf(stderr,"Could not change directory to %s",workingdirectory);
        }
        gzi_ctxt_t gzi;
        if(!gzi_init(&gzi,fileptrs,filesizes,contentsc,tmd,tik,cert,&tmdsize,&tiksize,&certsize)){
            perror("Could not initialize patch file");
            goto error;

        }
        if(!gzi_parse_file(&gzi,patch->filename)){
            perror("Could not parse gzi patch file");
            goto error;
        }
        if(!gzi_run(&gzi)){
            perror("Could not run gzi patch file");
            goto error;
        }
        if(chdir(directory)!=0){
            fprintf(stderr,"Could not change directory to %s",directory);
            goto error;
        }

        for(int i=0;i<contentsc;i++){
            setcontentlength(tmd,i,gzi.file_sizes[i]);
        }

        if(!gzi_destroy(&gzi)){
            perror("Could not destory gzi patch file");
            goto error;
        }
        patch_list_t *old_patch = patch;
        patch = patch->next;
        free(old_patch);
        if(dol_after == patch_idx){
            while(dol && dol_loading){
                if (apply_dol_patch(dol->filename,dol_loading->loading_address,&fileptrs[1],&filesizes[1]) != 0) {
                    fprintf(stderr, "Could not inject dol patch\n");
                    goto error;
                }
                dol_list_t *old_dol = dol;
                dol = dol->next;
                free(old_dol);
                dol_loading_list_t *old_loading = dol_loading;
                dol_loading = dol_loading->next;
                free(old_loading);
            }
            dol_applied = 1;
            setcontentlength(tmd,1,filesizes[1]);
        }
        patch_idx++;
    }

    if(!dol_applied && dol && dol_loading){
        while(dol && dol_loading){
            if (apply_dol_patch(dol->filename,dol_loading->loading_address,&fileptrs[1],&filesizes[1]) != 0) {
                fprintf(stderr, "Could not inject dol patch\n");
                goto error;
            }
            dol_list_t *old_dol = dol;
            dol = dol->next;
            free(old_dol);
            dol_loading_list_t *old_loading = dol_loading;
            dol_loading = dol_loading->next;
            free(old_loading);
        }
        setcontentlength(tmd,1,filesizes[1]);
    }

    // Change Title ID
    if (titleid != NULL) {
        if (verbose) {
            printf("Changing Channel ID\n");
        }
        memcpy(tik + 0x1e0, titleid, 4);
        memcpy(tmd + 0x190, titleid, 4);
    }

    if (verbose) {
        printf("Changing region in the TMD\n");
    }
    // Change the Region
    tmd[0x19d] = region;

    if (verbose) {
        printf("Changing encryption key in the ticket\n");
    }
    // New key
    memcpy(tik + 0x1bf, &newkey, 16);

    //Decrypt the new key
    uint8_t newenc[16];
    uint8_t iv[16];

    for (i = 0; i < 16; i++) {
        newenc[i] = *(tik + 0x1bf + i);
    }
    for (i = 0; i < 8; i++) {
        iv[i] = *(tik + 0x1dc + i);
        iv[i + 8] = 0x00;
    }

    do_decrypt(newenc, 16, key, iv);

    int j;

    for (j = 2; j < 15; j++) {
        iv[j] = 0x00;
    }

    for (i = 0; i < contentsc; i++) {
        uint8_t *contents = fileptrs[i];

        if (i == 0) {
            if (channelname != NULL) {
                if (verbose) {
                    printf("Changing the Channel Name in content0.app\n");
                }

                uint16_t imetpos = -1;
                for (j = 0; j < 400; j++) {
                    if (strcmp((char*)(contents + j),"IMET")==0) {
                        imetpos = j;
                        break;
                    }
                }
                if(imetpos!=-1){
                    uint16_t count = 0;
                    size_t cnamelen = strlen(channelname);
                    char namebuf[40] = {0};
                    for(j=0,count=0;count<cnamelen;j+=2,count++)
                        namebuf[j+1] = channelname[count];
                    char *names = (char*)contents + imetpos + 28;
                    for(j=0;j<8;j++){
                        memcpy(names + (j*84),namebuf,40);
                    }
                }else{
                    printf("Could not find IMET position to change title name.\n");
                    goto skipmd5;
                }

                if (verbose) {
                    printf("Signing the new Channel Name\n");
                }
                memset(contents + 0x630,0,16);
                uint8_t md5digest[16];
                do_md5(contents + 64, md5digest, 1536);

                for (j = 0; j < 16; j++) {
                    contents[0x630 + j] = md5digest[j];
                }
            }
        }

skipmd5:
        iv[0] = tmd[0x1e8 + (0x24 * i)];
        iv[1] = tmd[0x1e9 + (0x24 * i)];


        if (verbose) {
            printf("Generating signature for the content %d, and copying signature to the TMD\n", i);
        }

        uint8_t digest[20];
        do_sha1(contents, digest, getcontentlength(tmd, i));

        memcpy(tmd + 0x1f4 + (36 * i), &digest, 20);

        if (verbose) {
            printf("Encrypting content %d\n", i);
        }

        do_encrypt(contents, filesizes[i], newenc, iv);

    }

    chdir(workingdirectory);

    truchasign(tmd, W_TMD, tmdsize);
    truchasign(tik, W_TIK, tiksize);


    if (verbose) {
        printf("Generating WAD Header, and flipping endianness\n");
    }

    FILE *outwadfile = fopen(wad, "wb");
    if(!outwadfile){
        perror("Could not open output wad file\n");
        goto error;
    }
    char wadheader[8] = {
        0x00, 0x00, 0x00, 0x20, 0x49, 0x73, 0x00, 0x00
    };
    fwrite(wadheader,1,8,outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write wad header to wad\n");
        goto error;
    }

    uint32_t datasize = 0;
    for(i=0;i<contentsc;i++){
        datasize+=addpadding(filesizes[i],64);
    }
    uint32_t wadsizes[6];
    wadsizes[0] = REVERSEENDIAN32(certsize);
    wadsizes[1] = 0;
    wadsizes[2] = REVERSEENDIAN32(tiksize);
    wadsizes[3] = REVERSEENDIAN32(tmdsize);
    wadsizes[4] = REVERSEENDIAN32(datasize);
    wadsizes[5] = REVERSEENDIAN32(footersize);
    fwrite(wadsizes,sizeof(uint32_t),6,outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write header sizes to wad\n");
        goto error;
    }

    char headerpadding[32];
    memset(&headerpadding, 0, 32);
    fwrite(&headerpadding, 1, 32, outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write header padding to wad\n");
        goto error;
    }
    if (verbose) {
        printf("Writing certificate\n");
    }
    fwrite(cert, 1, addpadding(certsize, 64), outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write cert to wad\n");
        goto error;
    }
    if (verbose) {
        printf("Writing ticket\n");
    }
    fwrite(tik, 1, addpadding(tiksize, 64), outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write ticket to wad\n");
        goto error;
    }
    if (verbose) {
        printf("Writing medatadata\n");
    }
    fwrite(tmd, 1, addpadding(tmdsize, 64), outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write metadata to wad\n");
        goto error;
    }
    if (verbose) {
        printf("Writing data\n");
    }
    char padding[64] = {0};
    for(i=0;i<contentsc;i++){
        fwrite(fileptrs[i],1,filesizes[i],outwadfile);
        if(ferror(outwadfile)){
            fprintf(stderr,"Could not write content %d to wad\n",i);
            goto error;
        }
        int padcnt = addpadding(filesizes[i],64) - filesizes[i];
        if(padcnt>0){
            fwrite(&padding,1,padcnt,outwadfile);
            if(ferror(outwadfile)){
                perror("Could not write write content padding\n");
                goto error;
            }
        }
    }
    if (verbose) {
        printf("Writing footer\n");
    }
    fwrite(footer, 1, 0x40, outwadfile);
    if(ferror(outwadfile)){
        perror("Could not write footer\n");
        goto error;
    }
    fclose(outwadfile);


    free(cert);
    free(tik);
    free(tmd);
    for(i=0;i<contentsc;i++){
        if(fileptrs[i]) free(fileptrs[i]);
    }
    free(fileptrs);
    free(filesizes);

    if (cleanup)
        removedir(directory);

    return 1;

error:
    free(cert);
    free(tik);
    free(tmd);
    if(fileptrs){
        for(int i=0;i<contentsc;i++){
            if(fileptrs[i]) free(fileptrs[i]);
        }
        free(fileptrs);

    }
    if(filesizes) free(filesizes);
    return 0;
}

void romc(){
    if(outwad == NULL || rom == NULL){
        print_usage();
        exit(1);
    }
    printf("Decompressing %s\n",rom);
    struct stat sbuffer;
    stat(rom,&sbuffer);
    FILE *inrom = fopen(rom,"rb");
    if(!inrom){
        printf("Could not open %s\n",rom);
        exit(1);
    }
    uint8_t *comp = malloc(sbuffer.st_size);
    if(!comp){
        printf("Could not alloc %ld bytes\n",sbuffer.st_size);
    }
    fread(comp,1,sbuffer.st_size,inrom);
    fclose(inrom);
    size_t decomp_size;
    uint8_t *decomp = romchu_decompress(comp,sbuffer.st_size,&decomp_size);
    free(comp);
    if(!decomp){
        printf("Could not decompress %s\n",rom);
        exit(1);
    }
    FILE *outrom = fopen(outwad,"wb");
    if(!outrom){
        printf("Could not open %s for writing\n",outwad);
        exit(1);
    }
    fwrite(decomp,1,decomp_size,outrom);
    fclose(outrom);
    free(decomp);
}

static void genkey() {
    printf("Enter 45e and press enter: ");
    char *line = malloc(4);
    fgets(line, 4, stdin);

    uint8_t outkey[16] = { 0x26 ,0xC2 ,0x12 ,0xB3 ,0x60 ,0xDD ,0x2E ,0x04 ,0xCF ,0x9C ,0x12 ,0x51 ,0xAF ,0x99 ,0x88 ,0xE4 };

    uint8_t iv[16];
    iv[0] = line[0];
    iv[1] = line[1];
    iv[2] = line[2];

    int i;
    for (i = 3; i < 16; i++) iv[i] = 0x00;

    do_decrypt(outkey, 16, newkey, iv);

    free(line);

    if (keyfile == NULL)  keyfile = "common-key.bin";
    FILE *keyf = fopen(keyfile, "wb");
    fwrite(&outkey, 1, 16, keyf);
    fclose(keyf);

    printf("%s successfully generated\n", keyfile);
}

int main(int argc, char **argv) {
    setbuf(stdout, NULL);

    int opt;

    char *action = NULL;

    while (1) {
        int oi = 0;
        opt = getopt_long(argc, argv, "a:w:i:t:?k:r:d:vm:o:p:c:", cmdoptions, &oi);
        if (opt == -1) break;
        switch (opt) {
        case 'a':
            action = optarg;
            break;
        case 'w':
            wad = optarg;
            break;
        case 'i':
            titleid = optarg;
            break;
        case 't':
            channelname = optarg;
            break;
        case 'h':
        case '?':
            print_usage();
            exit(0);
            break;
        case 'k':
            keyfile = optarg;
            break;
        case 'r':
            if (optarg[0] == '0') region = 0;
            else if (optarg[0] == '1') region = 1;
            else if (optarg[0] == '2') region = 2;
            else region = 3;
            break;
        case 'd':
            directory = optarg;
            break;
        case 'v':
            print_version(argv[0]);
            exit(0);
            break;
        case 'm':
            rom = optarg;
            break;
        case 'o':
            outwad = optarg;
            break;
        case 'p': {
            patch_list_t *new_patch = malloc(sizeof(*new_patch));
            if (new_patch == NULL) {
                perror("Could not allocate patch list");
                exit(1);
            }
            new_patch->filename = optarg;
            new_patch->next = NULL;
            *patch_link = new_patch;
            patch_link = &new_patch->next;
            break;
        }
        case 'c':
            content_num = optarg[0] - 0x30;
            if(content_num<0 || content_num>9) content_num=5;
            break;
        case 'f':
        {
            dol_list_t *new_dol = malloc(sizeof(*new_dol));
            if(new_dol == NULL){
                perror("Could not allocate dol list");
                exit(1);
            }
            new_dol->filename = optarg;
            new_dol->next = NULL;
            *dol_link = new_dol;
            dol_link = &new_dol->next;
            break;
        }
        case 'l':{
            char loading_address[10];
            sscanf(optarg,"%9s",loading_address);
            uint32_t addr;
            sscanf(loading_address,"%"SCNx32,&addr);
            dol_loading_list_t *new_dol_loading = malloc(sizeof(*new_dol_loading));
            if(new_dol_loading == NULL){
                perror("Could not allocate dol loading address.");
                exit(1);
            }
            new_dol_loading->loading_address = addr;
            new_dol_loading->next = NULL;
            *dol_loading_link = new_dol_loading;
            dol_loading_link = &new_dol_loading->next;
            break;
        }
        case 'e': {
            char dol_after_str[10];
            sscanf(optarg, "%s", dol_after_str);
            sscanf(dol_after_str, "%"SCNu32, &dol_after);
            break;
        }
        default:
            break;
        }

    }

    if (action == NULL) {
        print_usage();
        exit(1);
    }

    if(strcmp(action, "romc") == 0){
        romc();
        return 0;
    }

    if (strcmp(action, "genkey") == 0){
        genkey();
        return 0;
    }

    if (strcmp(action, "extract") != 0 && strcmp(action, "pack") != 0 && strcmp(action, "inject") != 0) {
        print_usage();
        exit(1);
    }

    if (wad == NULL) {
        print_usage();
        exit(1);
    }

    if (directory == NULL) directory = "wadextract";

    struct stat sbuffer;
    if (keyfile == NULL) {
        if (stat("key.bin", &sbuffer) == 0) {
            keyfile = "key.bin";
        }
        else if (stat("common-key.bin", &sbuffer) == 0) {
            keyfile = "common-key.bin";
        }
        else {
            printf("Cannot find key.bin or common-key.bin.\n");
            exit(1);
        }
    }
    else {
        if (stat(keyfile, &sbuffer) != 0) {
            printf("Cannot find keyfile specified.\n");
            exit(1);
        }
    }

    FILE *fkeyfile = fopen(keyfile, "rb");
    if(!fkeyfile){
        perror("Could not open keyfile");
        exit(1);
    }

    fread(&key, 1, 16, fkeyfile);
    if(ferror(fkeyfile)){
        perror("Could not read from keyfile.");
        exit(1);
    }
    fclose(fkeyfile);

    workingdirectory = malloc(200);
    if(!workingdirectory){
        perror("Could not allocate for working directory");
        exit(1);
    }
    workingdirectory = getcwd(workingdirectory, 200);

    if (strcmp(action, "extract") == 0) {
        if(!do_extract()){
            exit(1);
        }
    }
    else if (strcmp(action, "pack") == 0) {
        if(!do_pack()){
            exit(1);
        }
    }
    else if (strcmp(action, "inject") == 0) {
        if (rom == NULL) {
            printf("-a inject specified, but no rom to inject\n");
            free(workingdirectory);
            exit(1);

        }
        if(!do_extract()){
            perror("Could not extract wad\n");
            free(workingdirectory);
            exit(1);
        }

        if (verbose) {
            printf("Copying %s to %s/content%d/rom\n", rom, directory,content_num);
        }
        FILE *from = fopen(rom, "rb");
        fseek(from, 0, SEEK_END);
        size_t fromlen = ftell(from);
        fseek(from, 0, SEEK_SET);
        uint8_t *inrom = malloc(fromlen);
        if(!inrom){
            perror("could not allocate input rom\n");
            free(workingdirectory);
            exit(1);
        }
        fread(inrom, 1, fromlen, from);
        fclose(from);

        char *orom = malloc(200);
        if(!orom){
            perror("Could not allocate output rom name\n");
            free(workingdirectory);
            free(inrom);
            exit(1);
        }
        snprintf(orom, 200, "%s/content%d/rom", directory,content_num);
        from = fopen(orom, "wb");
        fwrite(inrom, 1, fromlen, from);
        fclose(from);
        free(inrom);
        free(orom);


        char *wadname = removeext(wad),
            *outname = malloc(strlen(wadname) + 12);
        if(!outname){
            perror("could not allocate for output wad name\n");
            free(workingdirectory);
            exit(1);
        }
        sprintf(outname, "%s-inject.wad", wadname);
        free(wadname);
        if (outwad == NULL) {
            wad = outname;
        }
        else {
            wad = outwad;
        }

        if(!do_pack()){
            perror("Could not pack wad\n");
            free(outname);
            free(workingdirectory);
            exit(1);
        }
        free(outname);
    }

    free(workingdirectory);
    return 0;
}
