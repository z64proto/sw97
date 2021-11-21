#ifndef _LZ77_H
#define _LZ77_H

#include <stdint.h>
#include <stddef.h>

int lz77_compressed_length(uint8_t *source);
int lz77_decompress(uint8_t *source, uint8_t *dest);
int lz77_decompressed_size(uint8_t *source);
int lz77_compress(uint8_t *src, uint8_t **dest, uint32_t len, uint32_t *intp);

#endif