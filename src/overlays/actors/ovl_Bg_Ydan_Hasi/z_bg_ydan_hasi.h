#ifndef _Z_BG_YDAN_HASI_H_
#define _Z_BG_YDAN_HASI_H_

#include "ultra64.h"
#include "global.h"

struct BgYdanHasi;

typedef void (*BgYdanHasiActionFunc)(struct BgYdanHasi*, GlobalContext*);

typedef struct BgYdanHasi {
    DynaPolyActor dyna;
    BgYdanHasiActionFunc actionFunc;
    s16 gameplayCam;
    s16 csCam;
    s16 timer;
    s16 rotShake;
    s16 yShake;
    s16 xzShake;
    f32 fallAmount;
    Vec3s homeRot;
} BgYdanHasi; // size = 0x016C

extern const ActorInit Bg_Ydan_Hasi_InitVars;

#endif
