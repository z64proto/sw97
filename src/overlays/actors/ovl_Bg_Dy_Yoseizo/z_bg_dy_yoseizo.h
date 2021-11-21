#ifndef _Z_BG_DY_YOSEIZO_H_
#define _Z_BG_DY_YOSEIZO_H_

#include "ultra64.h"
#include "global.h"

struct BgDyYoseizo;

typedef void (*BgDyYoseizoActionFunc)(struct BgDyYoseizo*, GlobalContext*);

typedef struct BgDyYoseizo {
    Actor actor;
    SkelAnime skelAnime;
    Vec3s jointTable[39];
    Vec3s morphTable[39];
    NpcInfo npcInfo;
    ColliderCylinder collider;
    Vec3s headTrack;
    s16 initRotY; // used to prevent always turning towards the player
} BgDyYoseizo;

extern const ActorInit Bg_Dy_Yoseizo_InitVars;

#endif
