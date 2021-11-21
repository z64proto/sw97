#include "global.h"

u32 sSysCfbFbPtr[2];
u32 sSysCfbEnd;

void SysCfb_Init(s32 n64dd) {
    u32 screenSize;
    u32 tmpFbEnd;

    // Set Frame Buffer end depending on how much RAM exists
    sSysCfbEnd = (osMemSize >= 0x800000U) ? 0x80800000 : 0x80400000;

    screenSize = SCREEN_WIDTH * SCREEN_HEIGHT;
    sSysCfbEnd &= ~0x3f;
    sSysCfbFbPtr[0] = sSysCfbEnd - (screenSize * 4);
    sSysCfbFbPtr[1] = sSysCfbEnd - (screenSize * 2);
}

void SysCfb_Reset() {
    sSysCfbFbPtr[0] = 0;
    sSysCfbFbPtr[1] = 0;
    sSysCfbEnd = 0;
}

u32 SysCfb_GetFbPtr(s32 idx) {
    if (idx < 2) {
        return sSysCfbFbPtr[idx];
    }
    return 0;
}

u32 SysCfb_GetFbEnd() {
    return sSysCfbEnd;
}
