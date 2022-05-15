#include "z_en_npc.h"

#define FLAGS 0x02000019

#define THIS ((EnNpc*)thisx)

void EnNpc_Init(Actor* thisx, GlobalContext* globalCtx);
void EnNpc_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnNpc_Update(Actor* thisx, GlobalContext* globalCtx);
void EnNpc_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnNpc_WaitForObject(EnNpc* this, GlobalContext* globalCtx);
void EnNpc_Wait(EnNpc* this, GlobalContext* globalCtx);

void EnNpc_FollowPath(EnNpc* this, GlobalContext* globalCtx);
void EnNpc_Posing(EnNpc* this, GlobalContext* globalCtx);
void EnNpc_Talk(EnNpc* this, GlobalContext* globalCtx);

const ActorInit En_Npc_InitVars = {
    ACTOR_EN_NPC,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnNpc),
    (ActorFunc)EnNpc_Init,
    (ActorFunc)EnNpc_Destroy,
    (ActorFunc)EnNpc_Update,
    NULL,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_ON,
    },
    { 10, 10, 0, { 0, 0, 0 } },
};

typedef struct {
    s32 count;
    Vec3s* waypoints;
} EnNpcPath;

typedef struct {
    AnimationHeader* animation;
    f32 playSpeed;
    f32 startFrame;
    f32 endFrame;
    u8 mode;
} EnNpcAnimation;

typedef struct {
    s16 params;
    s16 object;
    s16 headObject;
    s16 animObject;
    s16 useFlex;
    void* skel;
    s16 initAnim;
    s16 textId;
    f32 scale;
    f32 shadowRad;
    f32 height;
    u8 shadowType;
    f32 yOffset;
    s16 walkingAnim;
    s16 posingAnim;
    s16 walkType;
    f32 walkSpeed;
    EnNpcPath* path;
} EnNpcInfo;

typedef enum { NPC_SHADOW_FEET, NPC_SHADOW_CIRCLE } NpcShadowType;

// waypoints for actor parameter 0x1802 - Hylian man in a blue shirt and white pants
static Vec3s waypointPos1[] = {
    { 114, 0, -112 }, { 266, 0, -154 }, { 292, 0, -229 }, { 202, 0, -270 }, { 119, 0, -473 },
};
static EnNpcPath waypointPath1 = { ARRAY_COUNT(waypointPos1), waypointPos1 };

// waypoints for actor parameter 0x1D04 - Hylian woman in a white shirt and orange pants
static Vec3s waypointPos2[] = {
    { 224, 0, -477 },
    { 400, 0, -60 },
    { 361, 0, -234 },
};
static EnNpcPath waypointPath2 = { ARRAY_COUNT(waypointPos2), waypointPos2 };

// waypoints for actor parameter 0x1F05 - Old Man 1
static Vec3s waypointPos3[] = {
    { 320, 0, -10 }, { 240, 0, -115 }, { 330, 0, 135 }, { 400, 0, 310 }, { 424, 0, 144 },
};
static EnNpcPath waypointPath3 = { ARRAY_COUNT(waypointPos3), waypointPos3 };

// waypoints for actor parameter 0x1A03 - bearded Hylian man in a purple shirt and green pants
static Vec3s waypointPos4[] = {
    { 120, 0, 135 },
    { 95, 0, 310 },
    { 220, 0, -20 },
};
static EnNpcPath waypointPath4 = { ARRAY_COUNT(waypointPos4), waypointPos4 };

// waypoints for actor parameter 0x2307 - Hylian man in a blue shirt and orange pants
static Vec3s waypointPos5[] = {
    { -400, 0, -21 },
    { -260, 0, -110 },
    { -320, 0, -370 },
    { -490, 0, -300 },
};
static EnNpcPath waypointPath5 = { ARRAY_COUNT(waypointPos5), waypointPos5 };

// waypoints for actor parameter 0x1500 - Early Kakariko Rooftop Man
static Vec3s waypointPos6[] = {
    { -380, 0, 300 },
    { -100, 0, 500 },
    { -190, 0, 350 },
    { -80, 0, 180 },
};
static EnNpcPath waypointPath6 = { ARRAY_COUNT(waypointPos6), waypointPos6 };

// animation list
// { animation header, playback speed, start frame, end frame, animation playback mode }
static EnNpcAnimation sAnimations[] = {
    // static single frames
    /* 0 */ { 0x060017B4, 0.0f, 0.0f, 10.0f, ANIMMODE_LOOP },        // standing 1
    /* 1 */ { 0x060017B4, 0.0f, 1.0f, 10.0f, ANIMMODE_LOOP },        // thinking
    /* 2 */ { 0x060017B4, 0.0f, 2.0f, 10.0f, ANIMMODE_LOOP },        // standing 2
    /* 3 */ { 0x060017B4, 0.0f, 3.0f, 10.0f, ANIMMODE_LOOP },        // leaning
    /* 4 */ { 0x060017B4, 0.0f, 4.0f, 10.0f, ANIMMODE_LOOP },        // sitting
    /* 5 */ { 0x060017B4, 0.0f, 5.0f, 10.0f, ANIMMODE_LOOP },        // standing 3
    /* 6 */ { 0x060017B4, 0.0f, 6.0f, 10.0f, ANIMMODE_LOOP },        // sitting and looking up
    /* 7 */ { 0x060017B4, 0.0f, 7.0f, 10.0f, ANIMMODE_LOOP },        // being wise
    /* 8 */ { 0x060017B4, 0.0f, 8.0f, 10.0f, ANIMMODE_LOOP },        // explaining
    /* 9 */ { 0x060017B4, 0.0f, 9.0f, 10.0f, ANIMMODE_LOOP },        // being cool
    /* 10 */ { 0x060018F0, 0.0f, 0.0f, 1.0f, ANIMMODE_LOOP },        // floating ghost
    /* 11 */ { 0x06000E78, 0.0f, 0.0f, 1.0f, ANIMMODE_LOOP },        // old man standing
                                                                     // regular animations
    /* 12 */ { 0x06001300, 1.0f, 0.0f, 39.0f, ANIMMODE_LOOP },       // idle
    /* 13 */ { 0x06000A1C, 1.0f, 0.0f, 38.0f, ANIMMODE_LOOP },       // walking
    /* 14 */ { 0x06000E78, 1.0f, 0.0f, 29.0f, ANIMMODE_LOOP },       // old man walking
    /* 15 */ { 0x06000E78, 0.1f, 0.0f, 5.0f, ANIMMODE_ONCE_INTERP }, // old man standing
    /* 16 */ { 0x06001E80, 1.0f, 0.0f, 39.0f, ANIMMODE_LOOP },       // shopkeeper idle
    /* 17 */ { 0x0600213C, 1.0f, 0.0f, 9.0f, ANIMMODE_LOOP },        // shopkeeper angry
};

static EnNpcInfo sEnNpcInfo[] = {
    // Hylian Actors
    {
        /* params           */ 0x000C,
        /* object           */ OBJECT_OB1, // Early Bazaar Shopkeeper
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 16,
        /* text id          */ 0x700E,
        /* scale            */ 0.014f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x000E,
        /* object           */ OBJECT_OB1, // Early Bazaar Shopkeeper (Jungle Gym Test)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 16,
        /* text id          */ 0x0000,
        /* scale            */ 0.014f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x1D04,
        /* object           */ OBJECT_OA7, // Hylian woman in a white shirt and orange pants
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x701D,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 500.0f,
        /* walking anim     */ 13,
        /* posing anim      */ 1,
        /* walk type        */ 2, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 1.0f,
        /* path list        */ &waypointPath2,
    },
    {
        /* params           */ 0x1802,
        /* object           */ OBJECT_OA4, // Hylian man in a blue shirt and white pants
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x7018,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 500.0f,
        /* walking anim     */ 13,
        /* posing anim      */ 1,
        /* walk type        */ 2, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 1.0f,
        /* path list        */ &waypointPath1,
    },
    {
        /* params           */ 0x0002,
        /* object           */ OBJECT_OA4, // Hylian man in a blue shirt and white pants (Kakariko)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 500.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x000B,
        /* object           */ OBJECT_OA4, // Hylian man in a red shirt and white pants (Kakariko and Archery)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 500.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x1500,
        /* object           */ OBJECT_OA1, // Early Kakariko Rooftop Man
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x7015,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 0.0f,
        /* walking anim     */ 13,
        /* posing anim      */ 1,
        /* walk type        */ 2, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 1.0f,
        /* path list        */ &waypointPath6,
    },
    {
        /* params           */ 0x000D,
        /* object           */ OBJECT_OA1, // Early Kakariko Rooftop Man (Jungle Gym Test)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x1601,
        /* object           */ OBJECT_OB3, // Early Carpenter Boss's Wife
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 7,
        /* text id          */ 0x7016,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 550.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x0001,
        /* object           */ OBJECT_OB3, // Early Carpenter Boss's Wife (Kakariko)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 7,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 550.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x2508,
        /* object           */ OBJECT_OB4, // Hylian woman wearing a blue smock and a white dress
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 8,
        /* text id          */ 0x7025,
        /* scale            */ 0.01f,
        /* shadow radius    */ 50.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x1A03,
        /* object           */ OBJECT_OB2, // bearded Hylian man in a purple shirt and green pants
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x701A,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 500.0f,
        /* walking anim     */ 13,
        /* posing anim      */ 12,
        /* walk type        */ 2, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 1.0f,
        /* path list        */ &waypointPath4,
    },
    {
        /* params           */ 0x0003,
        /* object           */ OBJECT_OB2, // bearded Hylian man in a purple shirt and green pants (Kakariko and
                                           // Archery)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 0,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 550.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x1F05,
        /* object           */ OBJECT_OA8, // Old Man 1
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 15,
        /* text id          */ 0x701F,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 0.0f,
        /* walking anim     */ 14,
        /* posing anim      */ -1,
        /* walk type        */ 1, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.4f,
        /* path list        */ &waypointPath3,
    },
    {
        /* params           */ 0x2106,
        /* object           */ OBJECT_OA8, // Old Man 2
        /* head object      */ OBJECT_OA9,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 15,
        /* text id          */ 0x7021,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        // OA6 - Got a wrong right arm, but it still exists at 1028 and 10B8
        /* params           */ 0x2307,
        /* object           */ OBJECT_OA6, // Hylian man in a blue shirt and orange pants
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x7023,
        /* scale            */ 0.01f,
        /* shadow radius    */ 90.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_FEET,
        /* yOffset          */ 300.0f,
        /* walking anim     */ 13,
        /* posing anim      */ 1,
        /* walk type        */ 2, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 1.0f,
        /* path list        */ &waypointPath5,
    },
    {
        /* params           */ 0x2709,
        /* object           */ OBJECT_OA5, // Hylian woman in a purple dress
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x7027,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x0032,
        /* object           */ OBJECT_OA5, // Hylian woman in a purple dress (chamber of sages)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
    {
        /* params           */ 0x000F,
        /* object           */ OBJECT_OA2, // Sheikah (Jungle Gym Test)
        /* head object      */ -1,
        /* animation object */ OBJECT_O_ANIME,
        /* use matrices     */ false,
        /* skel             */ 0x06000260,
        /* animation id     */ 12,
        /* text id          */ 0x0000,
        /* scale            */ 0.01f,
        /* shadow radius    */ 30.0f,
        /* z target height  */ 65.0f,
        /* shadow type      */ NPC_SHADOW_CIRCLE,
        /* yOffset          */ 0.0f,
        /* walking anim     */ -1,
        /* posing anim      */ -1,
        /* walk type        */ 0, // 0 = non-walking, 1 = walking, 2 = walking & posing
        /* walk speed       */ 0.0f,
        /* path list        */ NULL,
    },
};

void EnNpc_SetupWaitForObject(EnNpc* this, GlobalContext* globalCtx) {
    s32 i;
    ActorShadowFunc shadowFunc;

    for (i = 0; i < ARRAY_COUNT(sEnNpcInfo); i++) {
        if (this->actor.params == sEnNpcInfo[i].params) {
            // Set object bank
            this->objBankIndex = Object_GetIndex(&globalCtx->objectCtx, sEnNpcInfo[i].object);
            this->objHeadBankIndex =
                sEnNpcInfo[i].headObject == -1 ? -1 : Object_GetIndex(&globalCtx->objectCtx, sEnNpcInfo[i].headObject);
            this->objAnimBankIndex = Object_GetIndex(&globalCtx->objectCtx, sEnNpcInfo[i].animObject);

            this->npcId = i;
            this->useFlex = sEnNpcInfo[i].useFlex;

            // Setup text
            this->actor.textId = sEnNpcInfo[i].textId;

            // Set scale
            Actor_SetScale(&this->actor, sEnNpcInfo[i].scale);

            if (sEnNpcInfo[i].shadowType == NPC_SHADOW_CIRCLE) {
                shadowFunc = ActorShadow_DrawCircle;
            } else if (sEnNpcInfo[i].shadowType == NPC_SHADOW_FEET) {
                shadowFunc = ActorShadow_DrawFeet;
            }

            ActorShape_Init(&this->actor.shape, sEnNpcInfo[i].yOffset, shadowFunc, sEnNpcInfo[i].shadowRad);

            this->actionFunc = EnNpc_WaitForObject;
            return;
        }
    }

    Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_GREEN_CUBE, this->actor.world.pos.x, this->actor.world.pos.y,
                this->actor.world.pos.z, this->actor.world.rot.x, this->actor.world.rot.y, this->actor.world.rot.z,
                0xFFFF);

    Actor_Kill(&this->actor);
}

void SpawnOE2(EnNpc* this, GlobalContext* globalCtx, s16 npcType) {
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_OE2, this->actor.world.pos.x, this->actor.world.pos.y,
                this->actor.world.pos.z, this->actor.world.rot.x, this->actor.world.rot.y, this->actor.world.rot.z,
                (npcType << 11) | (this->actor.params >> 8));
    Actor_Kill(&this->actor);
}

void EnNpc_ChangeAnimation(SkelAnime* skelAnime, EnNpcAnimation* animations, s32 index, f32 morphF) {
    animations += index;

    Animation_Change(skelAnime, animations->animation, animations->playSpeed, animations->startFrame,
                     animations->endFrame, animations->mode, morphF);
}

s32 EnNpc_UpdateSkelAnime(EnNpc* this) {
    s32 ret = SkelAnime_Update(&this->skelAnime);
    if (ret) {
        Animation_Reverse(&this->skelAnime);
    }
    return ret;
}

void EnNpc_LookAtPlayerSmoothStepMovement(EnNpc* this, GlobalContext* globalCtx) {
    s32 pad[2];
    Vec3s* vec1 = &this->npcInfo.neckAngle;
    Vec3s* vec2 = &this->npcInfo.WaistAngle;

    Math_SmoothStepToS(&vec1->x, 0, 20, 6200, 100);
    Math_SmoothStepToS(&vec1->y, 0, 20, 6200, 100);

    Math_SmoothStepToS(&vec2->x, 0, 20, 6200, 100);
    Math_SmoothStepToS(&vec2->y, 0, 20, 6200, 100);
}

void EnNpc_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnNpc* this = THIS;

    switch (thisx->params) {
        // kokiris
        case 0x080A:
            SpawnOE2(this, globalCtx, 0);
            return;
        case 0x000A:
            SpawnOE2(this, globalCtx, 0);
            return; // Jungle Gym Test
        case 0x0A0B:
            SpawnOE2(this, globalCtx, 1);
            return;
        case 0x370B:
            SpawnOE2(this, globalCtx, 1);
            return; // Jungle Gym Test
        case 0x0028:
            SpawnOE2(this, globalCtx, 1);
            return; // Chamber of Sages
        case 0x020B:
            SpawnOE2(this, globalCtx, 2);
            return;
        case 0x150B:
            SpawnOE2(this, globalCtx, 2);
            return; // Special Course
        case 0x0E0A:
            SpawnOE2(this, globalCtx, 3);
            return;
        case 0x0B0B:
            SpawnOE2(this, globalCtx, 4);
            return;
        case 0x040B:
            SpawnOE2(this, globalCtx, 5);
            return;
        case 0x060A:
            SpawnOE2(this, globalCtx, 6);
            return;
        case 0x070B:
            SpawnOE2(this, globalCtx, 7);
            return;
        case 0x0D0A:
            SpawnOE2(this, globalCtx, 8);
            return;
        case 0x100A:
            SpawnOE2(this, globalCtx, 9);
            return;
        case 0x090A:
            SpawnOE2(this, globalCtx, 10);
            return;
        case 0x1D0B:
            SpawnOE2(this, globalCtx, 11);
            return;

        // Spot04_OLD
        case 0x004A:
            SpawnOE2(this, globalCtx, 0);
            return;
        case 0x014B:
            SpawnOE2(this, globalCtx, 1);
            return;
        case 0x024A:
            SpawnOE2(this, globalCtx, 0);
            return;
        case 0x034A:
            SpawnOE2(this, globalCtx, 0);
            return;
        case 0x084B:
            SpawnOE2(this, globalCtx, 1);
            return;
        case 0x0A4A:
            SpawnOE2(this, globalCtx, 0);
            return;
        case 0x0C4B:
            SpawnOE2(this, globalCtx, 1);
            return;
        case 0x0D4A:
            SpawnOE2(this, globalCtx, 0);
            return;
        case 0x0E4B:
            SpawnOE2(this, globalCtx, 1);
            return;

        // gorons
        case 0x1310:
            SpawnOE2(this, globalCtx, 12);
            return;
        case 0x1410:
            SpawnOE2(this, globalCtx, 12);
            return;
        case 0x0029:
            SpawnOE2(this, globalCtx, 12);
            return; // Chamber of Sages
    }

    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    this->collider.dim.yShift = 0;
    this->collider.dim.radius = 15;
    this->collider.dim.height = 70;
    this->actor.gravity = -3.0f;
    this->actor.colChkInfo.mass = MASS_IMMOVABLE;

    EnNpc_SetupWaitForObject(this, globalCtx);
}

void EnNpc_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnNpc* this = THIS;

    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnNpc_WaitForObject(EnNpc* this, GlobalContext* globalCtx) {
    if ((this->objBankIndex >= 0) && (this->objAnimBankIndex >= 0)) {
        this->actor.objBankIndex = this->objAnimBankIndex;

        gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objBankIndex].segment);

        // Initialize skeleton
        if (sEnNpcInfo[this->npcId].useFlex) {
            SkelAnime_InitFlex(globalCtx, &this->skelAnime, sEnNpcInfo[this->npcId].skel, NULL, NULL, NULL, 0);
        } else {
            SkelAnime_Init(globalCtx, &this->skelAnime, sEnNpcInfo[this->npcId].skel, NULL, NULL, NULL, 0);
        }

        // Initialize animation
        gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objAnimBankIndex].segment);

        if (sEnNpcInfo[this->npcId].initAnim != -1) {
            EnNpc_ChangeAnimation(&this->skelAnime, sAnimations, sEnNpcInfo[this->npcId].initAnim, 0.0f);
        }

        // check whether actor is walking via waypoints or not and switch actionFunc
        if (sEnNpcInfo[this->npcId].walkType != 0) {
            this->waypoint = 0;
            EnNpc_ChangeAnimation(&this->skelAnime, sAnimations, sEnNpcInfo[this->npcId].walkingAnim, 0.0f);

            this->actionFunc = EnNpc_FollowPath;
        } else {
            this->actionFunc = EnNpc_Wait;
        }

        gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objBankIndex].segment);

        this->actor.draw = EnNpc_Draw;
    } else {
        Actor_Kill(&this->actor);
    }
}

void EnNpc_LookAtPlayer(EnNpc* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;
    s16 angle = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

    if (this->actor.textId != 0) {
        Actor_RequestToTalkInRange(&this->actor, globalCtx, 100.0f);
    }

    // check to only look at player within certain distance and angle range, reset to default if player is out of range
    if ((angle < 14563) && (angle > -14563) && this->actor.xzDistToPlayer < 300.0f) {
        this->npcInfo.focusPos = player->actor.world.pos;

        if (LINK_IS_CHILD && sEnNpcInfo[this->npcId].object != OBJECT_OB1 &&
            sEnNpcInfo[this->npcId].object != OBJECT_OB2) {
            this->npcInfo.focusPos.y = (player->actor.world.pos.y - 10.0f);
        }

        this->npcInfo.eyeHeight = kREG(16) + 12.0f;

        Npc_TurnTowardsFocus(&this->actor, &this->npcInfo, kREG(17) + 0xC, 2);
        EnNpc_LookAtPlayerSmoothStepMovement(this, globalCtx);
    } else {
        Npc_TurnTowardsFocus(&this->actor, &this->npcInfo, 0, 1);
    }
}

void EnNpc_FollowPath(EnNpc* this, GlobalContext* globalCtx) {
    EnNpcPath* path;
    Vec3s* pointPos;
    f32 dx;
    f32 dz;
    s32 pad;

    path = sEnNpcInfo[this->npcId].path;
    pointPos = path->waypoints;

    pointPos += this->waypoint;
    this->actor.speedXZ = sEnNpcInfo[this->npcId].walkSpeed;
    dx = pointPos->x - this->actor.world.pos.x;
    dz = pointPos->z - this->actor.world.pos.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(dx, dz) * (0x8000 / M_PI), 0xA, 0x7D0, 1);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (SQ(dx) + SQ(dz) < 600.0f) { // check distance to next point
        this->waypoint++;           // increase waypoint number by 1

        if (this->waypoint >= path->count) {
            this->waypoint = 0; // start again from waypoint number 0 after last waypoint is reached
        }

        // check if actor does posing and switch actionFunc
        if (sEnNpcInfo[this->npcId].walkType == 2) {
            EnNpc_ChangeAnimation(&this->skelAnime, sAnimations, sEnNpcInfo[this->npcId].posingAnim, 10.0f);
            this->timer = 180;

            this->actionFunc = EnNpc_Posing;
        }
    }

    EnNpc_LookAtPlayer(this, globalCtx);

    // Switch to talking
    if (Actor_IsTalking(&this->actor, globalCtx)) {
        EnNpc_ChangeAnimation(&this->skelAnime, sAnimations, sEnNpcInfo[this->npcId].initAnim, 10.0f);

        this->actionFunc = EnNpc_Talk;
    }
}

void EnNpc_Posing(EnNpc* this, GlobalContext* globalCtx) {
    this->timer--;
    this->actor.speedXZ = 0.0f;

    EnNpc_LookAtPlayer(this, globalCtx);

    if (Actor_IsTalking(&this->actor, globalCtx)) {
        EnNpc_ChangeAnimation(&this->skelAnime, sAnimations, sEnNpcInfo[this->npcId].initAnim, 10.0f);

        this->actionFunc = EnNpc_Talk;
    }

    else if (this->timer <= 1) {
        EnNpc_ChangeAnimation(&this->skelAnime, sAnimations, sEnNpcInfo[this->npcId].walkingAnim, 10.0f);

        this->actionFunc = EnNpc_FollowPath;
    }
}

void EnNpc_Talk(EnNpc* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;
    this->actor.speedXZ = 0.0f;

    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->npcInfo.focusPos = player->actor.world.pos;
    Npc_TurnTowardsFocus(&this->actor, &this->npcInfo, kREG(17) + 0xC, 4);

    // Switch back to walking after last message box with some delay
    if ((func_8010BDBC(&globalCtx->msgCtx) == 6) && func_80106BC8(globalCtx) && sEnNpcInfo[this->npcId].walkType != 0) {

        this->actionFunc = EnNpc_Posing;
        this->timer = 40;
    }
}

void EnNpc_Wait(EnNpc* this, GlobalContext* globalCtx) {
    this->actor.speedXZ = 0.0f;

    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 60.0f, 0x1D);

    EnNpc_LookAtPlayer(this, globalCtx);

    gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objBankIndex].segment);
}

// u16 curActor = 0x1802;
// s32 testIndex = 0;

void EnNpc_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnNpc* this = THIS;
    Input* cont1 = &globalCtx->state.input[0];

    // if (this->actor.params == curActor) {
    //     if (CHECK_BTN_ALL(cont1->press.button, BTN_DRIGHT)) {
    //         testIndex++;
    //         osSyncPrintf("limb index changed: %d\n", testIndex);
    //     }

    //     if (CHECK_BTN_ALL(cont1->press.button, BTN_DLEFT)) {
    //         testIndex--;
    //         osSyncPrintf("limb index changed: %d\n", testIndex);
    //     }
    // }

    this->actionFunc(this, globalCtx);

    // apply gravity
    Actor_MoveForwardXZ(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 60.0f, 0x1D);

    // Setup Z target height
    this->actor.targetMode = 0;
    Actor_SetFocus(&this->actor, sEnNpcInfo[this->npcId].height);

    gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objAnimBankIndex].segment);
    EnNpc_UpdateSkelAnime(this);

    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
}

s32 EnNpc_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnNpc* this = THIS;
    Vec3s* waistangle = &this->npcInfo.WaistAngle;
    Vec3s* neckangle = &this->npcInfo.neckAngle;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // head turning stuff
    /* Is current limb the head? */
    if (limbIndex == 23 && this->objHeadBankIndex >= 0) {

        /* Use secondary draw object, i.e. object of head */
        gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objHeadBankIndex].segment);
        gSPSegment(POLY_OPA_DISP++, 0x06, globalCtx->objectCtx.status[this->objHeadBankIndex].segment);

        /* Select correct head display list for object */
        switch (sEnNpcInfo[this->npcId].headObject) {
            case OBJECT_OA9:
                *dList = 0x06000250;
                break;
            default:
                *dList = NULL;
                break;
        }
    }
    // head and waist rotation to look at player
    switch (limbIndex) {
        case 21:
            // Don't do waist movement for oB1 shopkeeper because it looks weird
            if (this->actor.params != 0x000C) {
                rot->x += waistangle->y;
                rot->y -= waistangle->x;
            }
            break;
        case 23:
            rot->x += neckangle->y;
            rot->z += neckangle->x;
            break;
    }

    // color stuff

    switch (this->actor.params) {
        case 0x2106:
            if (limbIndex == 1) {
                gDPSetEnvColor(POLY_OPA_DISP++, 104, 104, 48, 255);
            }
            break;

        case 0x1500:
            if (limbIndex == 1) {
                gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);
            }
            break;

        case 0x1802:
            if (limbIndex == 19) {
                gDPSetEnvColor(POLY_OPA_DISP++, 106, 82, 213, 255);
            }
            break;

        case 0x000B:
            if (limbIndex == 19) {
                gDPSetEnvColor(POLY_OPA_DISP++, 237, 82, 82, 255);
            }
            break;

        case 0x1F05:
            if (limbIndex == 1) {
                gDPSetEnvColor(POLY_OPA_DISP++, 0, 55, 155, 255);
            }
            break;

        case 0x0002:
            if (limbIndex == 19) {
                gDPSetEnvColor(POLY_OPA_DISP++, 152, 237, 82, 255);
            }
            break;
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
    return false;
}

void EnNpc_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** limbDList, Vec3s* rot, void* thisx) {
    EnNpc* this = THIS;
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };

    Actor_SetFeetPos(&this->actor, limbIndex, 16, &zeroVec, 9, &zeroVec);

    /* Is current limb the head? */
    if (limbIndex == 23 && this->objHeadBankIndex >= 0) {

        OPEN_DISPS(globalCtx->state.gfxCtx);

        /* Restore primary draw object */
        gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objBankIndex].segment);
        gSPSegment(POLY_OPA_DISP++, 0x06, globalCtx->objectCtx.status[this->objBankIndex].segment);

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
}

void EnNpc_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnNpc* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093C80(globalCtx);
    func_80093D84(globalCtx->state.gfxCtx);

    gSegments[6] = VIRTUAL_TO_PHYSICAL(globalCtx->objectCtx.status[this->objBankIndex].segment);
    gSPSegment(POLY_OPA_DISP++, 0x06, globalCtx->objectCtx.status[this->objBankIndex].segment);

    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(POLY_OPA_DISP++, 106, 82, 213, 255);

    switch (this->actor.params) {
        case 0x1802:
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);
            break;
        case 0x000B:
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);
            break;
        case 0x0002:
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);
            break;
        default:
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
            break;
    }

    if (this->useFlex) {
        SkelAnime_DrawFlexOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable,
                              this->skelAnime.dListCount, EnNpc_OverrideLimbDraw, EnNpc_PostLimbDraw, &this->actor);
    } else {
        SkelAnime_DrawOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable, EnNpc_OverrideLimbDraw,
                          EnNpc_PostLimbDraw, &this->actor);
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
