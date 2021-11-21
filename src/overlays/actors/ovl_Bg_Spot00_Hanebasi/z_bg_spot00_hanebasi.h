#ifndef _Z_BG_SPOT00_HANEBASI_H_
#define _Z_BG_SPOT00_HANEBASI_H_

#include "ultra64.h"
#include "global.h"

struct BgSpot00Hanebasi;

typedef void (*BgSpot00HanebasiActionFunc)(struct BgSpot00Hanebasi*, GlobalContext*);

typedef struct BgSpot00Hanebasi {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgSpot00HanebasiActionFunc actionFunc;
    /* 0x0168 */ s16 destAngle;
    /* 0x016C */ LightNode* lightNode;
    /* 0x0170 */ LightInfo lightInfo;
} BgSpot00Hanebasi; // size = 0x0180

extern const ActorInit Bg_Spot00_Hanebasi_InitVars;

#endif