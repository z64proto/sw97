#ifndef _Z_ARROW_WIND_H_
#define _Z_ARROW_WIND_H_

#include "ultra64.h"
#include "global.h"

struct ArrowWind;

typedef void (*ArrowWindActionFunc)(struct ArrowWind*, GlobalContext*);

typedef struct ArrowWind {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ s16 radius;
    /* 0x014E */ u16 timer;
    /* 0x0150 */ u8 alpha;
    /* 0x0154 */ Vec3f unkPos;
    /* 0x0160 */ f32 unk_160;
    /* 0x0164 */ f32 unk_164;
    /* 0x0168 */ ArrowWindActionFunc actionFunc;
} ArrowWind; // size = 0x016C

extern const ActorInit Arrow_Wind_InitVars;

#endif
