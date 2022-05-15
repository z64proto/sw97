#ifndef _PATCH_H_
#define _PATCH_H_

#include <stdint.h>

#define GZI_FILE_TMD    100
#define GZI_FILE_TIK    101
#define GZI_FILE_CERT   102

typedef struct {
    uint8_t     command;
    uint8_t     len;
    uint32_t    offset;
    uint32_t    data;
} gzi_code_t;

typedef struct{
    gzi_code_t     *codes;
    int             codecnt;
    int8_t          curfile;
    uint8_t       **file_ptrs;
    uint32_t       *file_sizes;
    uint8_t         filecnt;
    uint8_t        *tmd;
    uint8_t        *tik;
    uint8_t        *cert;
    uint32_t       *tmd_size;
    uint32_t       *tik_size;
    uint32_t       *cert_size;
} gzi_ctxt_t;

int gzi_parse_file(gzi_ctxt_t *ctxt, const char *file);
int gzi_run(gzi_ctxt_t *ctxt);
int gzi_init(gzi_ctxt_t *ctxt, uint8_t **files, uint32_t *filesizes, int filecnt, 
             uint8_t *tmd, uint8_t *tik, uint8_t *cert, 
             uint32_t *tmd_size, uint32_t *tik_size, uint32_t *cert_size);
int gzi_destroy(gzi_ctxt_t *ctxt);

#endif