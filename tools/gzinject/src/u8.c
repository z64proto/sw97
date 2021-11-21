#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <getopt.h>
#include "u8.h"

void free_nodes(node_entry_t **nodes, uint8_t nodec){
    for(int i=0;i<nodec;i++){
        if(nodes[i]){
            if(nodes[i]->filename) free(nodes[i]->filename);
            free(nodes[i]);
        }
    }
}

void get_dir_contents_recursive(const char *dirname, node_entry_t ***nodes, uint8_t *idx, node_entry_t *directory, int recursion){
    struct stat sbuffer;
    node_entry_t **node_array = *nodes;
    DIR *dir;
	struct dirent *ent;
    chdir(dirname);
	if ((dir = opendir(".")) != NULL) {
		while ((ent = readdir(dir)) != NULL) {
            if(ent->d_name[0]=='.') continue;
            uint8_t this_idx = *idx;
            node_entry_t **new_nodes = realloc(node_array, ((this_idx+1) * sizeof(*node_array)));
            node_array = new_nodes;
            size_t len = strlen(ent->d_name);
            char *name = malloc(strlen(ent->d_name) + 1);
            strcpy(name,ent->d_name);
            name[len] = 0;
            node_entry_t *node = malloc(sizeof(node_entry_t));
            node->filename = name;
            node->directory = directory;
            stat(name, &sbuffer);
            node->node.size = sbuffer.st_size;
            (*idx)++;
            directory->node.size++;
			if ((sbuffer.st_mode & S_IFMT) == S_IFDIR) {
                node->node.type = 0x0001;
                node->node.data_offset=recursion;
                node->node.size = 0;
                get_dir_contents_recursive(name,&node_array,idx,node,recursion+1);    
                
			}else{
                node->node.type = 0x0000;
            }
            node_array[this_idx] = node;
		}
		closedir(dir);
	}
    chdir("..");
    *nodes = node_array;
}

void sort_dir(node_entry_t **src, node_entry_t **dest, node_entry_t *dir, size_t total_cnt,int start, int *pos){
    for(int i=start;i<total_cnt;i++){
        node_entry_t *node = src[i];
        if(node->directory == dir && node->node.type==0x0000){
            dest[(*pos)++] = node;
        }
    }
    for(int i=start;i<total_cnt;i++){
        node_entry_t *node = src[i];
        if(node->directory == dir && node->node.type==0x0001){
            dest[(*pos)++] = node;
            sort_dir(src,dest,node,total_cnt,start,pos);
            node->node.size = *pos;
        }
    }
}

int create_u8_archive(const char *dir, const char *output){
    // Root Directory node. 
    node_entry_t rootdirnode;
    rootdirnode.node.data_offset = 0;
    rootdirnode.node.type=0x0001;
    rootdirnode.node.name_offset=0;
    rootdirnode.node.size=0;
    rootdirnode.directory=NULL;
    rootdirnode.filename=".";

	uint8_t nodec = 1;

    node_entry_t **dirnodes = malloc(sizeof(*dirnodes));
    dirnodes[0] = &rootdirnode; 
    get_dir_contents_recursive(dir,&dirnodes,&nodec,dirnodes[0],0);
    dirnodes[0]->node.size = nodec+1;
    node_entry_t **sorted = malloc(sizeof(*sorted) * nodec);
    sorted[0] = dirnodes[0];
    int pos = 1;

    sort_dir(dirnodes,sorted,sorted[0],nodec,pos,&pos);
    free(dirnodes);
    uint8_t *string_table = malloc(1);
    string_table[0] = 0;

    int npos = 1 , dpos = 0, dirdepth = 0;

    uint8_t *data = NULL;
    chdir(dir);

    for(int i=0;i<nodec;i++){
        sorted[i]->node.name_offset = npos;
        size_t nlen = strlen(sorted[i]->filename) + 1;
        uint8_t *new_table = realloc(string_table,npos + nlen);
        if(new_table!=NULL){
            string_table = new_table;
        }
        
        memcpy(string_table + npos,sorted[i]->filename,nlen);
        string_table[npos+nlen-1]=0;
        npos+=nlen;
        if(sorted[i]->node.type==0x0001){
            chdir(sorted[i]->filename);
            dirdepth++;
        }else{
            uint32_t padlen = addpadding(sorted[i]->node.size,32);
            uint8_t *new_data = realloc(data,dpos + padlen);
            if(new_data!=NULL){
                data = new_data;
            }
            memset(data + dpos,0,padlen);
            FILE *fle = fopen(sorted[i]->filename, "rb");
            fread(data + dpos, 1, sorted[i]->node.size, fle);
            fclose(fle);
            sorted[i]->node.data_offset = dpos;
            dpos+=padlen;
        }
    }
    
    for(int i=0;i<dirdepth;i++) chdir("..");

	u8_header header;
	header.tag = 0x2D38AA55; // 0x55AA382D 
	header.rootnode_offset = 0x20; // 0x00000020
	header.header_size = npos + ((nodec+1) * sizeof(u8_node));
	header.data_offset = addpadding(header.rootnode_offset + header.header_size, 0x20);
	memset(header.padding, 0, 16);

	uint32_t dataoffset = header.data_offset;
	uint16_t padcount = header.data_offset - (header.header_size + header.rootnode_offset);

	FILE *foutfile = fopen(output, "wb");

	header.header_size = REVERSEENDIAN32(header.header_size);
	header.data_offset = REVERSEENDIAN32(header.data_offset);
	header.rootnode_offset = REVERSEENDIAN32(header.rootnode_offset);
	fwrite(&header, 1, sizeof(u8_header), foutfile);

	u8_node rootnode;
	rootnode.name_offset = 0x00;
	rootnode.data_offset = 0x00;
	rootnode.size = nodec+1;
	rootnode.type = 0x0001;
	rootnode.size = REVERSEENDIAN32(rootnode.size);
	fwrite(&rootnode, 1, sizeof(u8_node), foutfile);

    int j = 0;

	for (j = 0; j < nodec; j++) {
		u8_node node = sorted[j]->node;
        if(node.type==0x0000){
            node.data_offset+=dataoffset;
        }
		node.data_offset = REVERSEENDIAN32(node.data_offset);
		node.size = REVERSEENDIAN32(node.size);
		node.name_offset = REVERSEENDIAN16(node.name_offset);
        fwrite(&node, 1, sizeof(u8_node), foutfile);
	}
    free_nodes(sorted + 1,nodec - 1);
    free(sorted);
	fwrite(string_table, 1, npos, foutfile);
	free(string_table);

	uint8_t *padding = calloc(padcount, sizeof(uint8_t));
	fwrite(padding, 1, padcount, foutfile);
	free(padding);

	fwrite(data, 1, dpos, foutfile);
	free(data);

	fclose(foutfile);

    return 1;
}

int extract_u8_archive(uint8_t *data, const char *outdir){
    mkdir(outdir, 0755);
	chdir(outdir);
	u8_header header;
	uint32_t data_offset;
	uint8_t *string_table;
	size_t rest_size;

	memcpy(&header, data, sizeof(header));

	int curpos = sizeof(header);

	u8_node root_node;
	memcpy(&root_node, data + curpos, sizeof(u8_node));
	curpos += sizeof(u8_node);

	uint32_t nodec = be32((uint8_t*)&root_node.size) - 1;
	u8_node *nodes = malloc(sizeof(u8_node)*nodec);
	memcpy(nodes, data + curpos, sizeof(u8_node)*nodec);
	curpos += sizeof(u8_node)*nodec;

	data_offset = be32((uint8_t*)&header.data_offset);
	rest_size = data_offset - sizeof(header) - (nodec + 1) * sizeof(u8_node);
	string_table = malloc(rest_size);
	memcpy(string_table, data + curpos, rest_size);

	u8_node *node;
    int dir_depth = 0;
    FILE *outfile;
	for (int j = 0; j < nodec; j++) {
		node = &nodes[j];
		uint32_t doffset = be32((uint8_t*)&node->data_offset);
		uint32_t dsize = be32((uint8_t*)&node->size);
		uint16_t name_offset = be16((uint8_t*)&node->name_offset);
		uint16_t type = be16((uint8_t*)&node->type);
		char *name = (char*)&string_table[name_offset];
		if (type == 0x0000) { // Regular file 
			outfile = fopen(name, "wb");
			fwrite(data + doffset, 1, dsize, outfile);
			fclose(outfile);
		}else if(type==0x0100){ // Directory
            while(dir_depth>doffset+1){
                chdir("..");
                dir_depth--;
            }
            mkdir(name,0755);
            chdir(name);
            dir_depth++;
        }
    }
    do{
	    chdir("..");
        dir_depth--;
    }while(dir_depth>0);
	free(string_table);
	free(nodes);
    return 1;
}