/* <z64.me> & zel. adapted from lzo1x_d.ch */

#include "global.h"

extern s32 DmaMgr_DMARomToRam(u32 rom, u32 ram, u32 size);
extern u8 gLZODecodeBuf[];

// Negative indexing distance
#define NINDEX 2

// LZO max negative offset
#define M2_MAX_OFFSET 0x0800

// Block copy, with desired overlapping behavior
static u8* ocopy(void* _src, void* _dst, size_t n) {
    u8* src = _src;
    u8* dst = _dst;

    do {
        *dst++ = *src++;
    } while (--n);

    return dst;
}

void LZO_Decompress(u32 romStart, u8* dst, size_t size) {
    // Position of an "M" match
    u8* mPos;

    // Current position in the compressed file ("ip")
    u8* curPos = gLZODecodeBuf;

    // General "num" used for various purposes
    s32 num;

    // Copy the entirety of the compressed file into the buffer
    DmaMgr_DMARomToRam(romStart, curPos, size);

    // Skip LZO header
    curPos += 8;

    if (*curPos > 17) {
        num = *curPos++ - 17;
        if (num < 4) {
            goto MATCH_NEXT;
        }

        dst = ocopy(curPos, dst, num);
        curPos += num;

        goto FIRST_LITERAL_RUN;
    }

    for (;;) {
        num = *curPos++;
        if (num >= 16) {
            goto MATCH;
        }

        // A literal run
        if (num == 0) {
            while (*curPos == 0) {
                num += 255;
                curPos++;
            }
            num += 15 + *curPos++;
        }

        // Copy literals
        num += 3;

        // This loop can advance any number of bytes (4k+)
        dst = ocopy(curPos, dst, num);
        curPos += num;
        num = 0;

    FIRST_LITERAL_RUN:
        num = *curPos++;
        if (num >= 16) {
            goto MATCH;
        }

        mPos = dst - (1 + M2_MAX_OFFSET);
        mPos -= num >> 2;
        mPos -= curPos[0] << 2;
        curPos++;
        dst = ocopy(mPos, dst, 3);
        goto MATCH_DONE;

        // Handle matches
        for (;;) {
        MATCH:
            mPos = dst - 1;

            if (num >= 64) {
                // M2 match
                mPos -= (num >> 2) & 7;
                mPos -= curPos[0] << 3;
                curPos++;
                num = (num >> 5) - 1;
            } else if (num >= 32) {
                // M3 match
                num &= 31;

                // This never advances more than 8 bytes
                if (num == 0) {
                    while (*curPos == 0) {
                        num += 255;
                        curPos++;
                    }
                    num += 31 + *curPos++;
                }

                mPos -= (curPos[0] >> 2) + (curPos[1] << 6);
                curPos += 2;
            } else if (num >= 16) {
                // An M4 match
                mPos++;
                mPos -= (num & 8) << 11;
                num &= 7;

                // This never advances more than 8 bytes
                if (num == 0) {
                    while (*curPos == 0) {
                        num += 255;
                        curPos++;
                    }
                    num += 7 + *curPos++;
                }
                mPos -= (curPos[0] >> 2) + (curPos[1] << 6);

                // End of compressed file
                if (mPos == dst) {
                    return;
                }

                mPos -= 0x4000;
                curPos += 2;
            } else {
                // An M1 match
                mPos -= num >> 2;
                mPos -= curPos[0] << 2;
                curPos += 1;
                dst = ocopy(mPos, dst, 2);
                goto MATCH_DONE;
            }

            // Copy match
            num += 2;
            dst = ocopy(mPos, dst, num);

        MATCH_DONE:
            num = curPos[-NINDEX] & 3;
            if (num == 0) {
                break;
            }

        MATCH_NEXT:
            dst = ocopy(curPos, dst, num);
            curPos += num;
            num = *curPos++;
        }
    }
}
