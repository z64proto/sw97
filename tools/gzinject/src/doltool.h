#ifndef _DOLTOOL_H
#define _DOLTOOL_H

#include <stdint.h>

typedef struct {
    uint32_t    text_offset[7];     /* 0x000 */
    uint32_t    data_offset[11];    /* 0x01C */
    uint32_t    text_loading[7];    /* 0x048 */
    uint32_t    data_loading[11];   /* 0x064 */
    uint32_t    text_size[7];       /* 0x090 */
    uint32_t    data_size[11];      /* 0x0AC */
    uint32_t    bss_loading;        /* 0x0D8 */
    uint32_t    bss_size;           /* 0x0DC */
    uint32_t    entry;              /* 0x0E0 */
    char        padding[0x1C];      /* 0x0E4 */
} dol_hdr_t;                        /* 0x100 */

typedef struct{
    dol_hdr_t hdr;
    uint8_t *text_sections[7];
    uint8_t *data_sections[11];
    uint8_t **file_data;
    uint32_t *file_size;
} doltool_ctxt_t;

void dol_load(doltool_ctxt_t *ctxt, uint8_t **file_data, uint32_t *file_size);
void dol_inject(doltool_ctxt_t *ctxt, uint8_t *text, size_t size, uint32_t loading_addr);
size_t dol_save(doltool_ctxt_t *ctxt);

#endif