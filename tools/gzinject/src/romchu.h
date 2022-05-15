#ifndef _ROMCHU_H
#define _ROMCHU_H

#include <stdint.h>

uint8_t *romchu_decompress(uint8_t *compressed, size_t comp_size, size_t *decomp_size);

#endif