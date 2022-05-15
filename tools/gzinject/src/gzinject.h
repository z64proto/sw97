#ifndef _GZINJECT_H_
#define _GZINJECT_H_

#include <stddef.h>
#include <stdint.h>

#define REVERSEENDIAN32(X)  (((X) >> 24) & 0xff) | (((X)<<8) & 0xFF0000) | (((X) >> 8) & 0xff00) | (((X)<<24) & 0xff000000)
#define REVERSEENDIAN16(X) (((X)>>8) & 0xff) | (((X)<<8) & 0xFF00)

#define W_TIK 0x00
#define W_TMD 0x01
#define GZINJECT_VERSION "0.3.3"

#if _WIN32
#define mkdir(X,Y) mkdir(X)
#define getcwd(X,Y) _getcwd(X,Y)
#endif

typedef enum{
    FILE_DIRECTORY,
    FILE_NORMAL
}filetype_t;

typedef struct patch_list patch_list_t;
struct patch_list {
    const char     *filename;
    patch_list_t   *next;
};

typedef struct dol_list dol_list_t;
struct dol_list{
    const char *filename;
    dol_list_t *next;
};

typedef struct dol_loading_list dol_loading_list_t;
struct dol_loading_list{
    uint32_t            loading_address;
    dol_loading_list_t *next;
};

 uint16_t be16(const uint8_t *p);

 uint32_t be32(const uint8_t *p);

uint32_t addpadding(uint32_t inp, uint32_t padding);

extern int verbose;

#endif
