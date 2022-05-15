#ifndef _Z_MAGIC_LIGHT_H_
#define _Z_MAGIC_LIGHT_H_

#include "ultra64.h"
#include "global.h"

struct MagicLight;

typedef void (*MagicLightActionFunc)(struct MagicLight*, GlobalContext*);

typedef struct MagicLight {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ LightNode* lightNode1;
    /* 0x0150 */ LightInfo lightInfo1;
    /* 0x0160 */ LightNode* lightNode2;
    /* 0x0164 */ LightInfo lightInfo2;
    /* 0x0174 */ f32 unk_174;
    /* 0x0178 */ u16 timer;
    /* 0x017C */ MagicLightActionFunc actionFunc;
    /*        */ ColliderCylinder collider;
} MagicLight;

extern const ActorInit Magic_Light_InitVars;

#endif
