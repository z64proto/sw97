#ifndef _Z_EN_NPC_H_
#define _Z_EN_NPC_H_

#include "ultra64.h"
#include "global.h"

struct EnNpc;

typedef void (*EnNpcActionFunc)(struct EnNpc*, GlobalContext*);

typedef struct EnNpc {
    Actor actor;
    EnNpcActionFunc actionFunc;
    ColliderCylinder collider;
    SkelAnime skelAnime;
    NpcInfo npcInfo;
    s16 npcId;
    s8 objBankIndex;
    s8 objHeadBankIndex;
    s8 objAnimBankIndex;
    s8 useFlex;
    s32 waypoint;
    s32 timer;
} EnNpc;

extern const ActorInit En_Npc_InitVars;

#endif
