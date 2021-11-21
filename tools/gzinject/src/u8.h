#ifndef U8_H_
#define U8_H_

#include <stdint.h>
#include "gzinject.h"

typedef struct {
	uint16_t type;
	uint16_t name_offset;
	uint32_t data_offset;
	uint32_t size;
}u8_node;

typedef struct
{
	uint32_t tag;
	uint32_t rootnode_offset;
	uint32_t header_size;
	uint32_t data_offset;
	uint8_t padding[16];
} u8_header;

typedef struct node_entry_s node_entry_t;

struct node_entry_s {
    u8_node node;
    char *filename;
    node_entry_t *directory;
};

int create_u8_archive(const char *dir, const char *output);
int extract_u8_archive(uint8_t *data, const char *outdir);

#endif