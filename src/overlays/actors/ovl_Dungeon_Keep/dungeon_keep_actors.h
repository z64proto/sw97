#ifndef _DUNGEON_KEEP_H_
#define _DUNGEON_KEEP_H_

#include "ultra64.h"
#include "global.h"

#define DK_TYPE(params) (params & 0xFF)

#define FLAME_COUNT 5
#define Y_OFFSET 50.0f
#define FLAME_DIST_FACTOR 40.0f
#define FLAME_DURATION 100

typedef enum {
    /* 0x03 */ DK_CRASHBOX_LARGE = 0x3,
    /* 0x12 */ DK_ROLLING_BOULDER = 0x12,
    /* 0x15 */ DK_FLOOR_SWITCH = 0x15,
    /* 0x16 */ DK_FLAME_THROWER = 0x16,
    /* 0x18 */ DK_CRYSTAL_SWITCH_18 = 0x18,
    /* 0x19 */ DK_CRYSTAL_SWITCH = 0x19,
    /* 0x1A */ DK_EYE_SWITCH = 0x1A,
    /* 0x1B */ DK_EYE_SWITCH_1B = 0x1B,
    /* 0x1E */ DK_EYE_SWITCH_1E = 0x1E,
    /* 0x1F */ DK_EYE_SWITCH_1F = 0x1F,
    /* 0x23 */ DK_PUSH_BLOCK = 0x23,
    /* 0x24 */ DK_PUSH_BLOCK_SMALL = 0x24,
    /* 0x27 */ DK_FLOATER = 0x27,
    /* 0x28 */ DK_FLOATER_BIG = 0x28,
    /* 0x23 */ DK_CRASHBOX_SMALL = 0x2B,
    /* 0x2C */ DK_FLOOR_SWITCH_DEKU_TIMER = 0x2C
} DkType;

struct DungeonKeep;

typedef void (*DungeonKeepActionFunc)(struct DungeonKeep*, GlobalContext*);

typedef struct DungeonKeep {
    DynaPolyActor dyna;
    DungeonKeepActionFunc actionFunc;
    s32 timer;
    s32 timer2;
    ColliderCylinder collider;
    // Flame Thrower
    s16 burnFrame;
    ColliderJntSph colliderSph;
    ColliderJntSphElement colliderItems[FLAME_COUNT];
    s16 bankIndex;
    //
} DungeonKeep; // size = 0x014C

extern void BetaFloorSwitch_Init(DungeonKeep* this, GlobalContext* globalCtx);
extern void Floater_Init(DungeonKeep* this, GlobalContext* globalCtx);
extern void Crashbox_Init(DungeonKeep* this, GlobalContext* globalCtx);
extern void FlameThrower_Init(Actor* thisx, GlobalContext* globalCtx);
extern void FlameThrower_Destroy(Actor* thisx, GlobalContext* globalCtx);
extern void FlameThrower_Update(Actor* thisx, GlobalContext* globalCtx);
extern void FlameThrower_Draw(Actor* thisx, GlobalContext* globalCtx);

extern const ActorInit Dungeon_Keep_InitVars;

#endif
