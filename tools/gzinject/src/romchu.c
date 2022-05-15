#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/* romchu 0.6 */
/* a decompressor for type 2 romc */
/* reversed by hcs from the Wii VC wad for Super Smash Bros EU. */
/* this code is public domain, have at it */
/* Taken from https://forum.xentax.com/viewtopic.php?t=5364 */

#define VERSION "0.6"

struct bitstream;

struct bitstream *init_bitstream(const unsigned char *pool, unsigned long pool_size);
uint32_t get_bits(struct bitstream *bs, int bits);
int bitstream_eof(struct bitstream *bs);
void free_bitstream(struct bitstream *bs);

struct huftable;

struct huftable *load_table(struct bitstream *bs, int symbols);
int huf_lookup(struct bitstream *bs, struct huftable *ht);
void free_table(struct huftable *);

struct {
    unsigned int bits;
    unsigned int base;
} backref_len[0x1D], backref_disp[0x1E];

uint8_t *romchu_decompress(uint8_t *compressed, size_t comp_size, size_t *decomp_size){

    unsigned char head_buf[4];
    unsigned char payload_buf[0x10000];
    int block_count = 0;
    long out_offset = 0;
    uint8_t *decompressed;

    uint64_t nominal_size;
    int romc_type;
    uint8_t *comp = compressed;
    // read header
    {
        memcpy(head_buf,compressed,4);
        nominal_size = head_buf[0];
        nominal_size *= 0x100;
        nominal_size |= head_buf[1];
        nominal_size *= 0x100;
        nominal_size |= head_buf[2];
        nominal_size *= 0x40;
        nominal_size |= head_buf[3]>>2;
        romc_type = head_buf[3]&0x3;
        decompressed = malloc(nominal_size);
        if(decomp_size) *decomp_size = nominal_size;
        if (!decompressed)
        {
            perror("malloc big outbuf buffer");
            return NULL;
        }

        switch(romc_type) {
            case 0:
                memcpy(decompressed, compressed + 4, *decomp_size);
                return decompressed;
            case 2:
                break;
            default:
                fprintf(stderr, "Unsupported romc type. %d\n", romc_type);
                return NULL;

        }
    }

    // initialize backreference lookup tables
    {
        for (unsigned int i = 0; i < 8; i++)
        {
            backref_len[i].bits = 0;
            backref_len[i].base = i;
        }

        for (unsigned int i = 8, scale = 1; scale < 6; scale++)
        {
            for (unsigned int k = (1<<(scale+2));
                              k < (1<<(scale+3));
                              k += (1<<scale), i++)
            {
                backref_len[i].bits = scale;
                backref_len[i].base = k;
            }
        }

        backref_len[28].bits = 0;
        backref_len[28].base = 255;

        for (unsigned int i = 0; i < 4; i++)
        {
            backref_disp[i].bits = 0;
            backref_disp[i].base = i;
        }

        for (unsigned int i = 4, scale = 1, k = 4; scale < 14; scale ++)
        {
            for (unsigned int j = 0; j < 2; j ++, k += (1 << scale), i++)
            {
                backref_disp[i].bits = scale;
                backref_disp[i].base = k;
            }
        }
    }

    out_offset = 0;
    // decode each block
    compressed += 4;

    while (compressed - comp < comp_size)
    {
        memcpy(head_buf,compressed,4);
        compressed+=4;
        int compression_flag;
        uint32_t payload_bytes;
        int payload_bits;
        uint32_t read_size;

        struct bitstream *head_bs;



        head_bs = init_bitstream(head_buf, 4*8);

        compression_flag = get_bits(head_bs, 1);
        if (compression_flag)
        {
            /* compressed */

            uint32_t block_size;

            /* bits, including this header */
            block_size = get_bits(head_bs, 31) - 32;

            payload_bytes = block_size/8;
            payload_bits = block_size%8;
        }
        else
        {
            /* uncompressed */

            uint32_t block_size;

            /* bytes */
            block_size = get_bits(head_bs, 31);

            payload_bytes = block_size;
            payload_bits = 0;
        }

        free_bitstream(head_bs);
        head_bs = NULL;

        /* read payload */
        read_size = payload_bytes;
        if (payload_bits > 0)
        {
            read_size ++;
        }

        if (read_size > sizeof(payload_buf))
        {
            fprintf(stderr, "payload too large\n");
            free(decompressed);
            return NULL;
        }
        memcpy(payload_buf,compressed,read_size);
        compressed+=read_size;

        /* attempt to parse... */

        if (compression_flag)
        {
            uint16_t tab1_size, tab2_size;
            uint32_t body_size;
            unsigned long tab1_offset, tab2_offset, body_offset;
            struct bitstream *bs;
            struct huftable *table1, *table2;

            /* read table 1 size */
            tab1_offset = 0;
            bs = init_bitstream(payload_buf + tab1_offset, payload_bytes*8+payload_bits);
            tab1_size = get_bits(bs, 16);
            free_bitstream(bs);

            /* load table 1 */
            bs = init_bitstream(payload_buf + tab1_offset + 2, tab1_size);
            table1 = load_table(bs, 0x11D);
            free_bitstream(bs);

            /* read table 2 size */
            tab2_offset = tab1_offset + 2 + (tab1_size+7) / 8;
            bs = init_bitstream(payload_buf + tab2_offset, 2*8);
            tab2_size = get_bits(bs, 16);
            free_bitstream(bs);

            /* load table 2 */
            bs = init_bitstream(payload_buf + tab2_offset + 2, tab2_size);
            table2 = load_table(bs, 0x1E);
            free_bitstream(bs);

            /* decode body */
            body_offset = tab2_offset + 2 + (tab2_size+7) / 8;
            body_size = payload_bytes*8 + payload_bits - body_offset*8;
            bs = init_bitstream(payload_buf + body_offset, body_size);

            while (!bitstream_eof(bs))
            {
                int symbol = huf_lookup(bs, table1);

                if (symbol < 0x100)
                {
                    /* byte literal */
                    unsigned char b = symbol;
                    if (out_offset >= nominal_size)
                    {
                        fprintf(stderr, "generated too many bytes\n");
                        free(decompressed);
                        return NULL;
                    }
                    decompressed[out_offset++] = b;
                }
                else
                {
                    /* backreference */
                    unsigned int len_bits = backref_len[symbol-0x100].bits;
                    unsigned int len = backref_len[symbol-0x100].base;
                    if (len_bits > 0)
                    {
                        len += get_bits(bs, len_bits);
                    }
                    len += 3;

                    int symbol2 = huf_lookup(bs, table2);

                    unsigned int disp_bits = backref_disp[symbol2].bits;
                    unsigned int disp = backref_disp[symbol2].base;
                    if (disp_bits > 0)
                    {
                        disp += get_bits(bs, disp_bits);
                    }
                    disp ++;

                    if (disp > out_offset)
                    {
                        fprintf(stderr, "backreference too far\n");
                        free(decompressed);
                        return NULL;
                    }
                    if (out_offset+len > nominal_size)
                    {
                        fprintf(stderr, "generated too many bytes\n");
                        free(decompressed);
                        return NULL;
                    }
                    for (unsigned int i = 0; i < len; i++, out_offset++)
                    {
                        decompressed[out_offset] = decompressed[out_offset-disp];
                    }
                }
            }

            free_table(table1);
            free_table(table2);
            free_bitstream(bs);
        }
        else
        {
            if (out_offset + payload_bytes > nominal_size)
            {
                fprintf(stderr, "generated too many bytes\n");
                free(decompressed);
                return NULL;
            }
            memcpy(decompressed+out_offset, payload_buf, payload_bytes);
            out_offset += payload_bytes;
        }

        block_count ++;
    }
    return decompressed;
}

/* bitstream reader */
struct bitstream
{
    const unsigned char *pool;
    long bits_left;
    uint8_t first_byte;
    int first_byte_bits;
};

struct bitstream *init_bitstream(const unsigned char *pool, unsigned long pool_size)
{
    struct bitstream *bs = malloc(sizeof(struct bitstream));
    if (!bs)
    {
        perror("bitstream malloc");
        exit(EXIT_FAILURE);
    }

    bs->pool = pool;
    bs->bits_left = pool_size;
    bs->first_byte_bits = 0;

    /* check that padding bits are 0 (to ensure we aren't ignoring anything) */
    if (pool_size%8)
    {
        if (pool[pool_size/8] & ~((1<<(pool_size%8))-1))
        {
            fprintf(stderr, "nonzero padding at end of bitstream\n");
            exit(EXIT_FAILURE);
        }
    }

    return bs;
}

uint32_t get_bits(struct bitstream *bs, int bits)
{
    uint32_t accum = 0;

    if (bits > 32)
    {
        fprintf(stderr, "get_bits() supports max 32\n");
        exit(EXIT_FAILURE);
    }
    if (bits > bs->bits_left + bs->first_byte_bits)
    {
        fprintf(stderr, "get_bits() underflow\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < bits; i++)
    {
        if (bs->first_byte_bits == 0)
        {
            bs->first_byte = *bs->pool;
            bs->pool ++;
            if (bs->bits_left >= 8)
            {
                bs->first_byte_bits = 8;
                bs->bits_left -= 8;
            }
            else
            {
                bs->first_byte_bits = bs->bits_left;
                bs->bits_left = 0;
            }
        }

        accum >>= 1;
        accum |= (bs->first_byte & 1)<<31;
        bs->first_byte >>= 1;
        bs->first_byte_bits --;
    }

    return accum>>(32-bits);
}

int bitstream_eof(struct bitstream *bs)
{
    return (bs->bits_left + bs->first_byte_bits == 0);
}

void free_bitstream(struct bitstream *bs)
{
    free(bs);
}

/* Huffman code handling */
struct hufnode {
    int is_leaf;
    union {
        struct {
            int left, right;
        } inner;
        struct {
            int symbol;
        } leaf;
    } u;
};
struct huftable {
    int symbols;
    struct hufnode *t;
};

struct huftable *load_table(struct bitstream *bs, int symbols)
{
    int len_count[32] = {0};
    uint32_t codes[32];
    int *length_of = malloc(sizeof(*length_of) * symbols);
    struct huftable *ht;
    int next_free_node;

    for (int i = 0; i < symbols; )
    {
        if (get_bits(bs, 1))
        {
            /* run of equal lengths */
            int count = get_bits(bs, 7) + 2;
            int length = get_bits(bs, 5);

            len_count[length] += count;
            for (int j = 0; j < count; j++, i++)
            {
                length_of[i] = length;
            }
        }
        else
        {
            /* set of inequal lengths */
            int count = get_bits(bs, 7) + 1;

            for (int j = 0; j < count; j++, i++)
            {
                int length = get_bits(bs, 5);
                length_of[i] = length;
                len_count[length] ++;
            }
        }
    }

    if (!bitstream_eof(bs))
    {
        fprintf(stderr, "did not exhaust bitstream reading table\n");
        exit(EXIT_FAILURE);
    }

    /* compute the first canonical Huffman code for each length */
    len_count[0] = 0; // not strictly necessary
    for (uint32_t i = 1, accum = 0; i < 32; i++)
    {
        accum = codes[i] = (accum + len_count[i-1]) << 1;
    }

    /* allocate space for the tree */
    ht = malloc(sizeof(struct huftable));
    if (!ht)
    {
        perror("malloc of huftable");
        exit(EXIT_FAILURE);
    }
    ht->symbols = symbols;
    ht->t = malloc(sizeof(struct hufnode) * symbols * 2);
    if (!ht->t)
    {
        perror("malloc of hufnodes");
        exit(EXIT_FAILURE);
    }

    /* determine codes and build a tree */
    for (int i = 0; i < symbols*2; i++)
    {
        ht->t[i].is_leaf = 0;
        ht->t[i].u.inner.left = ht->t[i].u.inner.right = 0;
    }
    next_free_node = 1;
    for (int i = 0; i < symbols; i++)
    {
        int cur = 0;
        if (0 == length_of[i])
        {
            // 0 length indicates absent symbol
            continue;
        }

        for (int j = length_of[i]-1; j >= 0; j --)
        {
            int next;
            if (ht->t[cur].is_leaf)
            {
                fprintf(stderr, "oops, walked onto a leaf\n");
                exit(EXIT_FAILURE);
            }

            if (codes[length_of[i]]&(1<<j))
            {
                // 1 == right
                next = ht->t[cur].u.inner.right;
                if (0 == next)
                {
                    next = ht->t[cur].u.inner.right = next_free_node ++;
                }
            }
            else
            {
                // 0 == left
                next = ht->t[cur].u.inner.left ;
                if (0 == next)
                {
                    next = ht->t[cur].u.inner.left = next_free_node ++;
                }
            }

            cur = next;
        }

        ht->t[cur].is_leaf = 1;
        ht->t[cur].u.leaf.symbol = i;

        codes[length_of[i]] ++;
    }
    free(length_of);
    return ht;
}

int huf_lookup(struct bitstream *bs, struct huftable *ht)
{
    int cur = 0;
    while (!ht->t[cur].is_leaf)
    {
        if (get_bits(bs, 1))
        {
            // 1 == right
            cur = ht->t[cur].u.inner.right;
        }
        else
        {
            // 0 == left
            cur = ht->t[cur].u.inner.left;
        }
    }

    return ht->t[cur].u.leaf.symbol;
}

void free_table(struct huftable *ht)
{
    if (ht)
    {
        free(ht->t);
    }
    free(ht);
}
