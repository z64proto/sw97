#ifndef _Z_MAGIC_ICE_H_
#define _Z_MAGIC_ICE_H_

#include "ultra64.h"
#include "global.h"

struct MagicIce;

typedef struct MagicIce {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ ColliderCylinder collider;
    /* 0x0198 */ f32 alphaMultiplier;
    /*        */ f32 scalingSpeed;
    /*        */ s16 action;
    /*        */ s16 actionTimer;
    /*        */ SkelAnimeCurve skelCurve;
    /*        */ Vec3f colliderScale;
} MagicIce; // size = ?

extern const ActorInit Magic_Ice_InitVars;

#endif
