/*
 * File: z_en_slim.c
 * Overlay: ovl_En_Slim
 * Description: Tekslim
 */

#include "z_en_slim.h"
#include "overlays/actors/ovl_En_Encount1/z_en_encount1.h"
#include "overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.h"
#include "vt.h"
#include "../assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS 0x00000005

#define THIS ((EnSlim*)thisx)

// EnSlim_Idle
#define vIdleTimer actionVar1

//  EnSlim_FlipOnBack
#define vOnBackTimer actionVar1
#define vLegTwitchTimer actionVar2

typedef enum {
    /* 0x0 */ TEKSLIM_DEATH_CRY,
    /* 0x1 */ TEKSLIM_UNK_1,
    /* 0x2 */ TEKSLIM_UNK_2,
    /* 0x3 */ TEKSLIM_RECOIL,
    /* 0x4 */ TEKSLIM_UNK_4,
    /* 0x5 */ TEKSLIM_FALL_APART,
    /* 0x6 */ TEKSLIM_IDLE,
    /* 0x7 */ TEKSLIM_STUNNED,
    /* 0x8 */ TEKSLIM_UNK_8,
    /* 0x9 */ TEKSLIM_ATTACK,
    /* 0xA */ TEKSLIM_TURN_TOWARD_PLAYER,
    /* 0xB */ TEKSLIM_UNK9,
    /* 0xC */ TEKSLIM_MOVE_TOWARD_PLAYER
} EnSlimAction;

typedef enum {
    /* 0x0 */ TEKSLIM_BEGIN_LUNGE,
    /* 0x1 */ TEKSLIM_MID_LUNGE,
    /* 0x2 */ TEKSLIM_LANDED,
    /* 0x2 */ TEKSLIM_SUBMERGED
} EnSlimAttackState;

typedef enum {
    /* 0x0 */ TEKSLIM_INITIAL,
    /* 0x1 */ TEKSLIM_UNFLIPPED,
    /* 0x2 */ TEKSLIM_FLIPPED
} EnSlimFlipState;

void EnSlim_Init(Actor* thisx, GlobalContext* globalCtx);
void EnSlim_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnSlim_Update(Actor* thisx, GlobalContext* globalCtx);
void EnSlim_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnSlim_SetupIdle(EnSlim* this);
void EnSlim_SetupTurnTowardPlayer(EnSlim* this);
void EnSlim_SetupMoveTowardPlayer(EnSlim* this);
void EnSlim_SetupDeathCry(EnSlim* this);

void EnSlim_Idle(EnSlim* this, GlobalContext* globalCtx);
void EnSlim_TurnTowardPlayer(EnSlim* this, GlobalContext* globalCtx);
void EnSlim_Recoil(EnSlim* this, GlobalContext* globalCtx);
void EnSlim_Stunned(EnSlim* this, GlobalContext* globalCtx);
void EnSlim_DeathCry(EnSlim* this, GlobalContext* globalCtx);
void EnSlim_FallApart(EnSlim* this, GlobalContext* globalCtx);
/*
extern SkeletonHeader D_06003A20;
extern AnimationHeader D_060012E4; // Idle (14 frames)
extern AnimationHeader D_06000A14; // Turning (8 frames)
extern AnimationHeader D_0600083C; // Lunge (6 frames)
extern AnimationHeader D_06000C70; // Jump / travelling to player (11 frames)

// blue tekslim textures
extern u32 D_06001300;
extern u32 D_06001700;
extern u32 D_06001900;
// red tekslim textures
extern u32 D_06001B00;
extern u32 D_06001F00;
extern u32 D_06002100;
*/
const ActorInit En_Slim_InitVars = {
    ACTOR_SLIM,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnSlim),
    (ActorFunc)EnSlim_Init,
    (ActorFunc)EnSlim_Destroy,
    (ActorFunc)EnSlim_Update,
    (ActorFunc)EnSlim_Draw,
};

static ColliderJntSphElementInit sJntSphElementsInit[1] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x00, 0x08 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_ON,
        },
        { 0, { { 0, 1500, 0 }, 20 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COLTYPE_HIT5,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    1,
    sJntSphElementsInit,
};

static DamageTable sDamageTable[] = {
    /* Deku nut      */ DMG_ENTRY(1, 0x1),
    /* Deku stick    */ DMG_ENTRY(1, 0x0),
    /* Slingshot     */ DMG_ENTRY(1, 0x0),
    /* Explosive     */ DMG_ENTRY(1, 0x0),
    /* Boomerang     */ DMG_ENTRY(1, 0x1),
    /* Normal arrow  */ DMG_ENTRY(1, 0x0),
    /* Hammer swing  */ DMG_ENTRY(1, 0x0),
    /* Hookshot      */ DMG_ENTRY(1, 0x1),
    /* Kokiri sword  */ DMG_ENTRY(1, 0x0),
    /* Master sword  */ DMG_ENTRY(1, 0x0),
    /* Giant's Knife */ DMG_ENTRY(1, 0x0),
    /* Fire arrow    */ DMG_ENTRY(1, 0x0),
    /* Ice arrow     */ DMG_ENTRY(1, 0xF),
    /* Light arrow   */ DMG_ENTRY(1, 0x0),
    /* Unk arrow 1   */ DMG_ENTRY(1, 0x0),
    /* Unk arrow 2   */ DMG_ENTRY(1, 0x0),
    /* Unk arrow 3   */ DMG_ENTRY(1, 0x0),
    /* Fire magic    */ DMG_ENTRY(1, 0xE),
    /* Ice magic     */ DMG_ENTRY(1, 0xF),
    /* Light magic   */ DMG_ENTRY(1, 0xE),
    /* Shield        */ DMG_ENTRY(1, 0x0),
    /* Mirror Ray    */ DMG_ENTRY(1, 0x0),
    /* Kokiri spin   */ DMG_ENTRY(1, 0x0),
    /* Giant spin    */ DMG_ENTRY(1, 0x0),
    /* Master spin   */ DMG_ENTRY(1, 0x0),
    /* Kokiri jump   */ DMG_ENTRY(1, 0x0),
    /* Giant jump    */ DMG_ENTRY(1, 0x0),
    /* Master jump   */ DMG_ENTRY(1, 0x0),
    /* Unknown 1     */ DMG_ENTRY(1, 0x0),
    /* Unblockable   */ DMG_ENTRY(1, 0x0),
    /* Hammer jump   */ DMG_ENTRY(1, 0x0),
    /* Unknown 2     */ DMG_ENTRY(1, 0x0),
};

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, 69, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(minVelocityY, 65496, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, 64536, ICHAIN_STOP),
};
/*
static AnimationHeader* D_80B1B634[] = {
    0x0600083C, 0x060004F8, 0x0600069C, NULL, NULL, NULL,
};
*/
// Some kind of offset for the position of each tekslim foot
static Vec3f sFootOffset = { 2800.0f, -200.0f, 0.0f };

// Relative positions to spawn ice chunks when tekslim is frozen
static Vec3f sIceChunks[12] = {
    { 20.0f, 20.0f, 0.0f },   { 10.0f, 40.0f, 10.0f },   { -10.0f, 40.0f, 10.0f }, { -20.0f, 20.0f, 0.0f },
    { 10.0f, 40.0f, -10.0f }, { -10.0f, 40.0f, -10.0f }, { 0.0f, 20.0f, -20.0f },  { 10.0f, 0.0f, 10.0f },
    { 10.0f, 0.0f, -10.0f },  { 0.0f, 20.0f, 20.0f },    { -10.0f, 0.0f, 10.0f },  { -10.0f, 0.0f, -10.0f },
};

void EnSlim_SetupAction(EnSlim* this, EnSlimActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void EnSlim_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnSlim* this = THIS;

    Actor_ProcessInitChain(thisx, sInitChain);
    thisx->targetMode = 3;
    //    Actor_SetScale(thisx, 0.01f);
    Actor_SetScale(&this->actor, 0.0075f * 2.0f);
    //    SkelAnime_Init(globalCtx, &this->skelAnime, &D_06003A20, &D_060012E4, this->jointTable, this->morphTable, 25);
    ActorShape_Init(&thisx->shape, -200.0f, ActorShadow_DrawCircle, 35.0f);
    this->flipState = TEKSLIM_INITIAL;
    thisx->colChkInfo.damageTable = sDamageTable;
    this->actionVar1 = 0; // value immediately overwritten in SetupIdle
    this->unk_2C4.unk_10 = 0;
    thisx->focus.pos = thisx->world.pos;
    thisx->focus.pos.y += 20.0f;
    thisx->colChkInfo.health = 2;
    thisx->colChkInfo.mass = MASS_HEAVY;
    Collider_InitJntSph(globalCtx, &this->collider);
    Collider_SetJntSph(globalCtx, &this->collider, thisx, &sJntSphInit, &this->colliderItem);
    this->unk_2DC = 0x1D;
    if (this->actor.params == TEKSLIM_BLUE) {
        this->unk_2DC |= 0x40; // Don't use the actor engine's ripple spawning code
        thisx->colChkInfo.health = 4;
        thisx->naviEnemyId += 1;
    }
    EnSlim_SetupIdle(this);

    this->deformationCounter = 0;
}

void EnSlim_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnSlim* this = THIS;

    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void EnSlim_SetupIdle(EnSlim* this) {
    //    Animation_MorphToLoop(&this->skelAnime, &D_060012E4, 4.0f);
    this->action = TEKSLIM_IDLE;
    this->vIdleTimer = Rand_S16Offset(15, 30);
    this->actor.speedXZ = 0.0f;
    EnSlim_SetupAction(this, EnSlim_Idle);
}

void EnSlim_Idle(EnSlim* this, GlobalContext* globalCtx) {
    //    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f, 0.0f);
    if (this->actor.params == TEKSLIM_BLUE) {
        if (this->actor.bgCheckFlags & 0x20) {
            // Float on water surface
            this->actor.gravity = 0.0f;
            Math_SmoothStepToF(&this->actor.velocity.y, 0.0f, 1.0f, 2.0f, 0.0f);
            Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.world.pos.y + this->actor.yDistToWater, 1.0f, 2.0f,
                               0.0f);
        } else {
            this->actor.gravity = -1.0f;
        }
    }
    if ((this->actor.bgCheckFlags & 3) && (this->actor.velocity.y <= 0.0f)) {
        this->actor.velocity.y = 0.0f;
    }
    if (this->vIdleTimer > 0) {
        this->vIdleTimer--;
    } else if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.yDistToPlayer <= 80.0f)) {
        EnSlim_SetupTurnTowardPlayer(this);
    }
}

static f32 slimeDeformation[118][4] = {
    { 1.000000, 1.000000, 1.000000, 0.000000 },    { 1.051000, 0.956300, 1.047800, 0.000000 },
    { 1.172500, 0.852200, 1.161900, 0.000000 },    { 1.317500, 0.727800, 1.298100, 0.000000 },
    { 1.439000, 0.623700, 1.412200, 0.000000 },    { 1.490000, 0.580000, 1.460000, 0.000000 },
    { 1.422300, 0.658300, 1.394800, 69.070000 },   { 1.253900, 0.853200, 1.232600, 254.169983 },
    { 1.037400, 1.104900, 1.024100, 522.149963 },  { 0.825100, 1.353800, 0.819500, 839.859985 },
    { 0.669300, 1.540000, 0.669300, 1174.140015 }, { 0.580900, 1.655700, 0.583800, 1491.849976 },
    { 0.529500, 1.734800, 0.533700, 1759.830078 }, { 0.505600, 1.780100, 0.510100, 1944.930054 },
    { 0.499700, 1.794600, 0.504200, 2014.000000 }, { 0.502400, 1.781600, 0.507100, 1699.309937 },
    { 0.521200, 1.738700, 0.525600, 1007.000000 }, { 0.571600, 1.660000, 0.574600, 314.690002 },
    { 0.669300, 1.540000, 0.669300, 0.000000 },    { 0.844700, 1.349200, 0.838800, 0.000000 },
    { 1.082300, 1.097700, 1.068400, 0.000000 },    { 1.329200, 0.838600, 1.306800, 0.000000 },
    { 1.532400, 0.625100, 1.503100, 0.000000 },    { 1.639000, 0.510400, 1.606000, 0.000000 },
    { 1.505500, 0.657500, 1.461800, 0.000000 },    { 1.201600, 0.980600, 1.153000, 0.000000 },
    { 0.994600, 1.159500, 0.982700, 0.000000 },    { 1.022600, 1.090600, 1.039400, 0.000000 },
    { 1.147400, 0.962600, 1.144800, 0.000000 },    { 1.221800, 0.893700, 1.201600, 0.000000 },
    { 1.182700, 0.939700, 1.162400, 0.000000 },    { 1.116400, 0.985600, 1.098500, 0.000000 },
    { 1.046800, 0.951600, 1.038700, 0.000000 },    { 1.000300, 0.999600, 1.000300, 0.000000 },
    { 1.009500, 0.992900, 1.009500, 0.000000 },    { 1.029300, 0.978200, 1.029300, 0.000000 },
    { 1.040200, 0.970000, 1.040200, 0.000000 },    { 1.017300, 0.988600, 1.018100, 0.000000 },
    { 0.985400, 1.013900, 0.987100, 0.000000 },    { 1.000000, 1.000000, 1.000000, 0.000000 },
    { 1.086900, 0.925100, 1.081400, 0.000000 },    { 1.213000, 0.817000, 1.199700, 0.000000 },
    { 1.344500, 0.704400, 1.323300, 0.000000 },    { 1.448000, 0.615900, 1.420600, 0.000000 },
    { 1.490000, 0.580000, 1.460000, 0.000000 },    { 1.422300, 0.658300, 1.394800, 69.070000 },
    { 1.253900, 0.853200, 1.232600, 254.169983 },  { 1.037400, 1.104900, 1.024100, 522.149963 },
    { 0.825100, 1.353800, 0.819500, 839.859985 },  { 0.669300, 1.540000, 0.669300, 1174.140015 },
    { 0.580900, 1.655700, 0.583800, 1491.849976 }, { 0.529500, 1.734800, 0.533700, 1759.830078 },
    { 0.505600, 1.780100, 0.510100, 1944.930054 }, { 0.499700, 1.794600, 0.504200, 2014.000000 },
    { 0.502400, 1.781600, 0.507100, 1699.309937 }, { 0.521200, 1.738700, 0.525600, 1007.000000 },
    { 0.571600, 1.660000, 0.574600, 314.690002 },  { 0.669300, 1.540000, 0.669300, 0.000000 },
    { 0.844700, 1.349200, 0.838800, 0.000000 },    { 1.082300, 1.097700, 1.068400, 0.000000 },
    { 1.329200, 0.838600, 1.306800, 0.000000 },    { 1.532400, 0.625100, 1.503100, 0.000000 },
    { 1.639000, 0.510400, 1.606000, 0.000000 },    { 1.505500, 0.657500, 1.461800, 0.000000 },
    { 1.201600, 0.980600, 1.153000, 0.000000 },    { 0.994600, 1.159500, 0.982700, 0.000000 },
    { 1.022600, 1.090600, 1.039400, 0.000000 },    { 1.147400, 0.962600, 1.144800, 0.000000 },
    { 1.221800, 0.893700, 1.201600, 0.000000 },    { 1.182700, 0.939700, 1.162400, 0.000000 },
    { 1.116400, 0.985600, 1.098500, 0.000000 },    { 1.044600, 0.938500, 1.036900, 0.000000 },
    { 1.000000, 1.000000, 1.000000, 0.000000 },    { 1.010400, 0.992200, 1.010400, 0.000000 },
    { 1.029800, 0.977800, 1.029800, 0.000000 },    { 1.040200, 0.970000, 1.040200, 0.000000 },
    { 1.017300, 0.988600, 1.018100, 0.000000 },    { 0.985400, 1.013900, 0.987100, 0.000000 },
    { 1.000000, 1.000000, 1.000000, 0.000000 },    { 1.086900, 0.925100, 1.081400, 0.000000 },
    { 1.213000, 0.817000, 1.199700, 0.000000 },    { 1.344500, 0.704400, 1.323300, 0.000000 },
    { 1.448000, 0.615900, 1.420600, 0.000000 },    { 1.490000, 0.580000, 1.460000, 0.000000 },
    { 1.422300, 0.658300, 1.394800, 69.070000 },   { 1.253900, 0.853200, 1.232600, 254.169983 },
    { 1.037400, 1.104900, 1.024100, 522.149963 },  { 0.825100, 1.353800, 0.819500, 839.859985 },
    { 0.669300, 1.540000, 0.669300, 1174.140015 }, { 0.580900, 1.655700, 0.583800, 1491.849976 },
    { 0.529500, 1.734800, 0.533700, 1759.830078 }, { 0.505600, 1.780100, 0.510100, 1944.930054 },
    { 0.499700, 1.794600, 0.504200, 2014.000000 }, { 0.502400, 1.781600, 0.507100, 1699.309937 },
    { 0.521200, 1.738700, 0.525600, 1007.000000 }, { 0.571600, 1.660000, 0.574600, 314.690002 },
    { 0.669300, 1.540000, 0.669300, 0.000000 },    { 0.844700, 1.349200, 0.838800, 0.000000 },
    { 1.082300, 1.097700, 1.068400, 0.000000 },    { 1.329200, 0.838600, 1.306800, 0.000000 },
    { 1.532400, 0.625100, 1.503100, 0.000000 },    { 1.639000, 0.510400, 1.606000, 0.000000 },
    { 1.505500, 0.657500, 1.461800, 0.000000 },    { 1.201600, 0.980600, 1.153000, 0.000000 },
    { 0.994600, 1.159500, 0.982700, 0.000000 },    { 1.022600, 1.090600, 1.039400, 0.000000 },
    { 1.147400, 0.962600, 1.144800, 0.000000 },    { 1.221800, 0.893700, 1.201600, 0.000000 },
    { 1.182700, 0.939700, 1.162400, 0.000000 },    { 1.116400, 0.985600, 1.098500, 0.000000 },
    { 1.044600, 0.938500, 1.036900, 0.000000 },    { 1.000000, 1.000000, 1.000000, 0.000000 },
    { 1.010400, 0.992200, 1.010400, 0.000000 },    { 1.029800, 0.977800, 1.029700, 0.000000 },
    { 1.040200, 0.970000, 1.040200, 0.000000 },    { 1.029900, 0.977800, 1.029800, 0.000000 },
    { 1.010700, 0.992200, 1.010600, 0.000000 },    { 1.000300, 1.000000, 1.000300, 0.000000 },
};

void EnSlim_CustomJumpAtPlayer(EnSlim* this, GlobalContext* globalCtx) {
    s16 angleToPlayer;
    s16 turnVelocity;

    if (slimeDeformation[this->deformationCounter][3] > 0.0f) {
        if (slimeDeformation[this->deformationCounter - 1][3] == 0.0f) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_AWA_BOUND);
        }
        this->actor.speedXZ = 4.0f;
    } else {
        this->actor.speedXZ = 0.0f;
    }

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 4000, 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;

    this->deformationCounter++;
    if (this->deformationCounter == 118) {
        this->deformationCounter = 0;
        EnSlim_SetupIdle(this);
    }
    if (this->actor.colChkInfo.health == 1 && slimeDeformation[this->deformationCounter][1] < 0.55f) {
        EnSlim_SetupDeathCry(this);
    }
}

void EnSlim_SetupAttack(EnSlim* this) {
    this->action = TEKSLIM_ATTACK;
    EnSlim_SetupAction(this, EnSlim_CustomJumpAtPlayer);
    return;
}

void EnSlim_SetupTurnTowardPlayer(EnSlim* this) {
    //    Animation_PlayLoop(&this->skelAnime, &D_06000A14);
    this->action = TEKSLIM_TURN_TOWARD_PLAYER;
    if ((this->actor.bgCheckFlags & 3) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20))) {
        if (this->actor.velocity.y <= 0.0f) {
            this->actor.gravity = 0.0f;
            this->actor.velocity.y = 0.0f;
            this->actor.speedXZ = 0.0f;
        }
    }
    EnSlim_SetupAction(this, EnSlim_TurnTowardPlayer);
}

void EnSlim_TurnTowardPlayer(EnSlim* this, GlobalContext* globalCtx) {
    s16 angleToPlayer;
    s16 turnVelocity;

    if (((this->actor.bgCheckFlags & 3) ||
         ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20))) &&
        (this->actor.velocity.y <= 0.0f)) {
        this->actor.gravity = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->actor.speedXZ = 0.0f;
    }
    // Calculate turn velocity and animation speed based on angle to player
    if ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20)) {
        this->actor.world.pos.y += this->actor.yDistToWater;
    }
    angleToPlayer = Actor_WorldYawTowardActor(&this->actor, &PLAYER->actor) - this->actor.world.rot.y;
    if (angleToPlayer > 0) {
        turnVelocity = (angleToPlayer / 42.0f) + 10.0f;
        this->actor.world.rot.y += (turnVelocity * 2);
    } else {
        turnVelocity = (angleToPlayer / 42.0f) - 10.0f;
        this->actor.world.rot.y += (turnVelocity * 2);
    }
    if (angleToPlayer > 0) {
        //        this->skelAnime.playSpeed = turnVelocity * 0.01f;
    } else {
        //        this->skelAnime.playSpeed = turnVelocity * 0.01f;
    }

    /**
     * Play sounds once every animation cycle
     */
    //    SkelAnime_Update(&this->skelAnime);
    //    if (((s16)this->skelAnime.curFrame & 7) == 0) {
    //        if ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20)) {
    //            Audio_PlayActorSound2(&this->actor, NA_SE_EN_TEKU_WALK_WATER);
    //        } else {
    //            Audio_PlayActorSound2(&this->actor, NA_SE_EN_TEKU_WALK);
    //        }
    //    }

    // Idle if player is far enough away from the tekslim, move or attack if almost facing player
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->actor.xzDistToPlayer > 300.0f) && (this->actor.yDistToPlayer > 80.0f)) {
        EnSlim_SetupIdle(this);
    } else if (Actor_IsFacingPlayer(&this->actor, 3640)) {
        if ((this->actor.xzDistToPlayer <= 180.0f) && (this->actor.yDistToPlayer <= 80.0f)) {
            EnSlim_SetupAttack(this);
        } else {
            EnSlim_SetupMoveTowardPlayer(this);
        }
    }
}

void EnSlim_SetupMoveTowardPlayer(EnSlim* this) {
    this->action = TEKSLIM_MOVE_TOWARD_PLAYER;
    EnSlim_SetupAction(this, EnSlim_CustomJumpAtPlayer);
    return;
}

void EnSlim_SetupRecoil(EnSlim* this) {
    this->action = TEKSLIM_RECOIL;
    //    Animation_MorphToLoop(&this->skelAnime, &D_060012E4, 4.0f);
    this->actor.speedXZ = -6.0f;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actor.gravity = -1.0f;
    EnSlim_SetupAction(this, EnSlim_Recoil);
}

/**
 * After tekslim hits or gets hit, recoils backwards and slides a bit upon landing
 */
void EnSlim_Recoil(EnSlim* this, GlobalContext* globalCtx) {
    s16 angleToPlayer;

    // Snap to ground or water surface upon landing
    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f, 0.0f);
    if (((this->actor.bgCheckFlags & 3) || (this->actor.params == TEKSLIM_BLUE && (this->actor.bgCheckFlags & 0x20))) &&
        (this->actor.velocity.y <= 0.0f)) {
        if ((this->actor.params != TEKSLIM_BLUE) || !(this->actor.bgCheckFlags & 0x20)) {
            if (this->actor.floorHeight > BGCHECK_Y_MIN) {
                this->actor.world.pos.y = this->actor.floorHeight;
            }
        } else {
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = 0.0f;
            this->actor.world.pos.y += this->actor.yDistToWater;
        }
    }

    // play sound and generate ripples
    if (this->actor.bgCheckFlags & 0x42) {
        if (!(this->actor.bgCheckFlags & 0x40)) {
            Actor_SpawnFlyingDust(globalCtx, &this->frontLeftFootPos, 1.0f, 2, 80, 15, 1);
            Actor_SpawnFlyingDust(globalCtx, &this->frontRightFootPos, 1.0f, 2, 80, 15, 1);
            Actor_SpawnFlyingDust(globalCtx, &this->backRightFootPos, 1.0f, 2, 80, 15, 1);
            Actor_SpawnFlyingDust(globalCtx, &this->backLeftFootPos, 1.0f, 2, 80, 15, 1);
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_M_GND);
        } else {
            this->actor.bgCheckFlags &= ~0x40;
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_TEKU_LAND_WATER2);
        }
    }

    // If player is far away, idle. Otherwise attack or move
    angleToPlayer = (this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
    if ((this->actor.speedXZ == 0.0f) && ((this->actor.bgCheckFlags & 1) || ((this->actor.params == TEKSLIM_BLUE) &&
                                                                             (this->actor.bgCheckFlags & 0x20)))) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        this->collider.base.atFlags &= ~AT_HIT;
        if ((this->actor.xzDistToPlayer > 300.0f) && (this->actor.yDistToPlayer > 80.0f) &&
            (ABS(this->actor.shape.rot.x) < 4000) && (ABS(this->actor.shape.rot.z) < 4000) &&
            ((this->actor.bgCheckFlags & 1) ||
             ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20)))) {
            EnSlim_SetupIdle(this);
        } else if ((this->actor.xzDistToPlayer < 180.0f) && (this->actor.yDistToPlayer <= 80.0f) &&
                   (ABS(angleToPlayer) <= 6000)) {
            EnSlim_SetupAttack(this);
        } else {
            EnSlim_SetupMoveTowardPlayer(this);
        }
    }
    //    SkelAnime_Update(&this->skelAnime);
}

void EnSlim_SetupStunned(EnSlim* this) {
    //    Animation_Change(&this->skelAnime, &D_060012E4, 0.0f, 0.0f, (f32)Animation_GetLastFrame(&D_060012E4),
    //    ANIMMODE_LOOP,
    //                     4.0f);
    this->action = TEKSLIM_STUNNED;
    this->actor.speedXZ = -6.0f;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    if (this->damageEffect == 0xF) {
        this->spawnIceTimer = 48;
    }
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_GOMA_JR_FREEZE);
    EnSlim_SetupAction(this, EnSlim_Stunned);
}

/**
 * stunned or frozen
 */
void EnSlim_Stunned(EnSlim* this, GlobalContext* globalCtx) {
    s16 angleToPlayer;

    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f, 0.0f);
    // Snap to ground or water
    if (((this->actor.bgCheckFlags & 3) ||
         ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20))) &&
        (this->actor.velocity.y <= 0.0f)) {
        if (((this->actor.params != TEKSLIM_BLUE) || !(this->actor.bgCheckFlags & 0x20))) {
            if (this->actor.floorHeight > BGCHECK_Y_MIN) {
                this->actor.world.pos.y = this->actor.floorHeight;
            }
        } else {
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = 0.0f;
            this->actor.world.pos.y += this->actor.yDistToWater;
        }
    }
    // Play sounds and spawn dirt effects upon landing
    if (this->actor.bgCheckFlags & 0x42) {
        if (!(this->actor.bgCheckFlags & 0x40)) {
            Actor_SpawnFlyingDust(globalCtx, &this->frontLeftFootPos, 1.0f, 2, 80, 15, 1);
            Actor_SpawnFlyingDust(globalCtx, &this->frontRightFootPos, 1.0f, 2, 80, 15, 1);
            Actor_SpawnFlyingDust(globalCtx, &this->backRightFootPos, 1.0f, 2, 80, 15, 1);
            Actor_SpawnFlyingDust(globalCtx, &this->backLeftFootPos, 1.0f, 2, 80, 15, 1);
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_M_GND);
        } else {
            this->actor.bgCheckFlags &= ~0x40;
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_TEKU_LAND_WATER2);
        }
    }
    // Decide on next action based on health, flip state and player distance
    angleToPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    if (((this->actor.colorFilterTimer == 0) && (this->actor.speedXZ == 0.0f)) &&
        ((this->actor.bgCheckFlags & 1) ||
         ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20)))) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (this->actor.colChkInfo.health == 0) {
            EnSlim_SetupDeathCry(this);
            /*} else if (this->flipState == TEKSLIM_FLIPPED) {
                EnSlim_SetupFlipUpright(this);*/
        } else if (((this->actor.xzDistToPlayer > 300.0f) && (this->actor.yDistToPlayer > 80.0f) &&
                    (ABS(this->actor.shape.rot.x) < 4000) && (ABS(this->actor.shape.rot.z) < 4000)) &&
                   ((this->actor.bgCheckFlags & 1) ||
                    ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & 0x20)))) {
            EnSlim_SetupIdle(this);
        } else if ((this->actor.xzDistToPlayer < 180.0f) && (this->actor.yDistToPlayer <= 80.0f) &&
                   (ABS(angleToPlayer) <= 6000)) {
            EnSlim_SetupAttack(this);
        } else {
            EnSlim_SetupMoveTowardPlayer(this);
        }
    }
    //    SkelAnime_Update(&this->skelAnime);
}

void EnSlim_SetupDeathCry(EnSlim* this) {
    this->action = TEKSLIM_DEATH_CRY;
    this->actor.colorFilterTimer = 0;
    this->actor.speedXZ = 0.0f;
    EnSlim_SetupAction(this, EnSlim_DeathCry);
}

/**
 * First frame of death. Scream in pain and allocate memory for EnPart data
 */
void EnSlim_DeathCry(EnSlim* this, GlobalContext* globalCtx) {
    EffectSsDeadSound_SpawnStationary(globalCtx, &this->actor.projectedPos, NA_SE_EN_AWA_BREAK, true,
                                      DEADSOUND_REPEAT_MODE_OFF, 40);
    this->action = TEKSLIM_FALL_APART;
    EnSlim_SetupAction(this, EnSlim_FallApart);
    func_80032E24(&this->unk_2C4, 0x18, globalCtx);
}

/**
 * Spawn EnPart and drop items
 */
void EnSlim_FallApart(EnSlim* this, GlobalContext* globalCtx) {
    if (1 || func_8003305C(&this->actor, &this->unk_2C4, globalCtx, (this->actor.params + 0xB))) {
        if (this->actor.params == TEKSLIM_BLUE) {
            Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0xE0);
        } else {
            Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x40);
        }
        Actor_Kill(&this->actor);
    }
}

void EnSlim_CheckDamage(Actor* thisx, GlobalContext* globalCtx) {
    EnSlim* this = THIS;

    if ((this->collider.base.acFlags & AC_HIT) && (this->action >= TEKSLIM_IDLE)) {
        this->collider.base.acFlags &= ~AC_HIT;
        if (thisx->colChkInfo.damageEffect != 0xE) { // Immune to fire magic
            this->damageEffect = thisx->colChkInfo.damageEffect;
            Actor_SetDropFlag(thisx, &this->collider.elements[0].info, 0);
            // Stun if Tekslim hit by nut, boomerang, hookshot, ice arrow or ice magic
            if ((thisx->colChkInfo.damageEffect == 1) || (thisx->colChkInfo.damageEffect == 0xF)) {
                if (this->action != TEKSLIM_STUNNED) {
                    Actor_SetColorFilter(thisx, 0, 0x78, 0, 0x50);
                    Actor_ApplyDamage(thisx);
                    EnSlim_SetupStunned(this);
                }
                // Otherwise apply damage and handle death where necessary
            } else {
                if ((thisx->colorFilterTimer == 0) || ((thisx->colorFilterParams & 0x4000) == 0)) {
                    Actor_SetColorFilter(thisx, 0x4000, 0xFF, 0, 8);
                    Actor_ApplyDamage(thisx);
                    osSyncPrintf("damage detected, setting scale\n");
                    Actor_SetScale(&this->actor, 0.0075f);
                }
                if (thisx->colChkInfo.health == 0) {
                    EnSlim_SetupDeathCry(this);
                } else {
                    Actor* childSlime;
                    // Flip tekslim back up if it's on it's back
                    Audio_PlayActorSound2(thisx, NA_SE_EN_AWA_BREAK);
                    // if (this->flipState != TEKSLIM_FLIPPED) {
                    EnSlim_SetupRecoil(this);
                    //} else {
                    //    EnSlim_SetupFlipUpright(this);
                    //}
                    childSlime =
                        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_SLIM,
                                           thisx->world.pos.x, thisx->world.pos.y, thisx->world.pos.z,
                                           thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, thisx->params);

                    if (childSlime != NULL) {
                        childSlime->colChkInfo.health = thisx->colChkInfo.health;
                        Actor_SetScale(childSlime, 0.0075f);
                    }
                }
            }
        }
        // If hammer has recently hit the floor and player is close to tekslim, flip over
    } /*else if ((thisx->colChkInfo.health != 0) && (globalCtx->actorCtx.unk_02 != 0) &&
               (thisx->xzDistToPlayer <= 400.0f) && (thisx->bgCheckFlags & 1)) {
        if (this->flipState == TEKSLIM_FLIPPED) {
            EnSlim_SetupFlipUpright(this);
        } else if ((this->action >= TEKSLIM_IDLE) || (this->action >= TEKSLIM_IDLE)) {

            EnSlim_SetupFlipOnBack(this);
        }
    }*/
}

void EnSlim_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnSlim* this = THIS;
    char pad[0x4];
    CollisionPoly* floorPoly;
    WaterBox* waterBox;
    f32 waterSurfaceY;

    this->colliderItem.dim.scale = this->actor.colChkInfo.health;

    EnSlim_CheckDamage(thisx, globalCtx);
    // Stay still if hit by immunity damage type this frame
    if (thisx->colChkInfo.damageEffect != 0xE) {
        this->actionFunc(this, globalCtx);
        Actor_MoveForwardXZ(thisx);
        Actor_UpdateBgCheckInfo(globalCtx, thisx, 25.0f, 40.0f, 20.0f, this->unk_2DC);
        // If on water, snap feet to surface and spawn ripples
        if ((this->actor.params == TEKSLIM_BLUE) && (thisx->bgCheckFlags & 0x20)) {
            floorPoly = thisx->floorPoly;
            if ((((globalCtx->gameplayFrames % 8) == 0) || (thisx->velocity.y < 0.0f)) &&
                (WaterBox_GetSurfaceImpl(globalCtx, &globalCtx->colCtx, this->backRightFootPos.x,
                                         this->backRightFootPos.z, &waterSurfaceY, &waterBox)) &&
                (this->backRightFootPos.y <= waterSurfaceY)) {
                this->backRightFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(globalCtx, &this->backRightFootPos, 0, 220, 0);
            }
            if (((((globalCtx->gameplayFrames + 2) % 8) == 0) || (thisx->velocity.y < 0.0f)) &&
                (WaterBox_GetSurfaceImpl(globalCtx, &globalCtx->colCtx, this->backLeftFootPos.x,
                                         this->backLeftFootPos.z, &waterSurfaceY, &waterBox)) &&
                (this->backLeftFootPos.y <= waterSurfaceY)) {
                this->backLeftFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(globalCtx, &this->backLeftFootPos, 0, 220, 0);
            }
            if (((((globalCtx->gameplayFrames + 4) % 8) == 0) || (thisx->velocity.y < 0.0f)) &&
                (WaterBox_GetSurfaceImpl(globalCtx, &globalCtx->colCtx, this->frontLeftFootPos.x,
                                         this->frontLeftFootPos.z, &waterSurfaceY, &waterBox)) &&
                (this->frontLeftFootPos.y <= waterSurfaceY)) {
                this->frontLeftFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(globalCtx, &this->frontLeftFootPos, 0, 220, 0);
            }
            if (((((globalCtx->gameplayFrames + 1) % 8) == 0) || (thisx->velocity.y < 0.0f)) &&
                (WaterBox_GetSurfaceImpl(globalCtx, &globalCtx->colCtx, this->frontRightFootPos.x,
                                         this->frontRightFootPos.z, &waterSurfaceY, &waterBox)) &&
                (this->frontRightFootPos.y <= waterSurfaceY)) {
                this->frontRightFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(globalCtx, &this->frontRightFootPos, 0, 220, 0);
            }
            thisx->floorPoly = floorPoly;
        }

        // If on ground and currently flipped over, set tekslim to be fully upside-down
        if (thisx->bgCheckFlags & 3) {
            func_800359B8(thisx, thisx->shape.rot.y, &thisx->shape.rot);
            // if (this->flipState >= TEKSLIM_FLIPPED) {
            //    thisx->shape.rot.z += 0x7FFF;
            //}
            // Otherwise ensure the tekslim is rotating back upright
        } else {
            Math_SmoothStepToS(&thisx->shape.rot.x, 0, 1, 1000, 0);
            if (this->flipState <= TEKSLIM_UNFLIPPED) {
                Math_SmoothStepToS(&thisx->shape.rot.z, 0, 1, 1000, 0);
                if (thisx->shape.yOffset > 0) {
                    thisx->shape.yOffset -= 400.0f;
                }
            }
        }
    }

    thisx->world.pos.y = thisx->floorHeight + slimeDeformation[this->deformationCounter][3] / 100.0f;

    thisx->focus.pos = thisx->world.pos;
    thisx->focus.pos.y += 20.0f;

    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
}

/**
 * Get the locations where the tekslim feet are rendered
 */
void EnSlim_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** limbDList, Vec3s* rot, void* thisx) {
    EnSlim* this = THIS;
    switch (limbIndex) {
        case 8:
            Matrix_MultVec3f(&sFootOffset, &this->backRightFootPos);
            break;
        case 0xD:
            Matrix_MultVec3f(&sFootOffset, &this->frontRightFootPos);
            break;
        case 0x12:
            Matrix_MultVec3f(&sFootOffset, &this->backLeftFootPos);
            break;
        case 0x17:
            Matrix_MultVec3f(&sFootOffset, &this->frontLeftFootPos);
            break;
    }
    func_80032F54(&this->unk_2C4, limbIndex, 0, 0x18, 0x18, limbDList, -1);
}

static Vtx slimeSubVertices[21] = {
    VTX(557, 531, 1766, 0, 0, 37, 213, 113, 0),    VTX(-1518, 531, 1091, 0, 0, 160, 213, 69, 0),
    VTX(-525, 1302, 1634, 0, 0, 220, 43, 113, 0),  VTX(-1014, 2006, 736, 0, 0, 189, 95, 48, 0),
    VTX(387, 2006, 1192, 0, 0, 26, 95, 79, 0),     VTX(0, 2377, 0, 0, 0, 0, 127, 0, 0),
    VTX(1253, 2006, 0, 0, 0, 84, 95, 0, 0),        VTX(1376, 1302, 1010, 0, 0, 96, 42, 70, 0),
    VTX(1840, 531, 0, 0, 0, 119, 213, 0, 0),       VTX(387, 2006, -1192, 0, 0, 26, 95, 177, 0),
    VTX(-1014, 2006, -736, 0, 0, 189, 95, 208, 0), VTX(1376, 1302, -1010, 0, 0, 96, 42, 186, 0),
    VTX(557, 531, -1766, 0, 0, 37, 213, 143, 0),   VTX(-1518, 531, -1091, 0, 0, 159, 214, 186, 0),
    VTX(-525, 1302, -1634, 0, 0, 220, 43, 143, 0), VTX(-1701, 1302, 0, 0, 0, 137, 43, 0, 0),
    VTX(-351, 0, -1043, 0, 0, 243, 137, 216, 0),   VTX(897, 0, 652, 0, 0, 29, 135, 21, 0),
    VTX(883, 0, -632, 0, 0, 43, 142, 225, 0),      VTX(-328, 0, 1036, 0, 0, 240, 141, 50, 0),
    VTX(-1101, 0, -12, 0, 0, 214, 137, 0, 0),
};

Gfx slimeSubDList[] = {
    gsSPVertex(&slimeSubVertices[0], 21, 0),
    gsSP2Triangles(0, 2, 1, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 4, 5, 0, 12, 11, 8, 0),
    gsSP2Triangles(12, 11, 8, 0, 12, 14, 9, 0),
    gsSP2Triangles(12, 14, 9, 0, 6, 9, 5, 0),
    gsSP2Triangles(6, 9, 5, 0, 8, 11, 6, 0),
    gsSP2Triangles(8, 11, 6, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 13, 15, 10, 0),
    gsSP2Triangles(13, 15, 10, 0, 9, 10, 5, 0),
    gsSP2Triangles(9, 10, 5, 0, 8, 7, 0, 0),
    gsSP2Triangles(8, 7, 0, 0, 1, 15, 13, 0),
    gsSP2Triangles(1, 15, 13, 0, 1, 2, 3, 0),
    gsSP2Triangles(1, 2, 3, 0, 10, 3, 5, 0),
    gsSP2Triangles(10, 3, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 0, 7, 4, 0),
    gsSP2Triangles(0, 7, 4, 0, 10, 9, 14, 0),
    gsSP2Triangles(10, 9, 14, 0, 3, 10, 15, 0),
    gsSP2Triangles(3, 10, 15, 0, 4, 3, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 6, 4, 7, 0),
    gsSP2Triangles(6, 4, 7, 0, 9, 6, 11, 0),
    gsSP1Triangle(9, 6, 11, 0),
    gsSP1Quadrangle(19, 20, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 0, 19, 17, 0),
    gsSP2Triangles(0, 19, 17, 0, 8, 17, 18, 0),
    gsSP2Triangles(8, 17, 18, 0, 12, 18, 16, 0),
    gsSP2Triangles(12, 18, 16, 0, 13, 16, 20, 0),
    gsSP2Triangles(13, 16, 20, 0, 1, 20, 19, 0),
    gsSP2Triangles(1, 20, 19, 0, 4, 2, 0, 0),
    gsSP2Triangles(4, 2, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 14, 13, 0),
    gsSP2Triangles(10, 14, 13, 0, 3, 15, 1, 0),
    gsSP2Triangles(3, 15, 1, 0, 8, 18, 12, 0),
    gsSP2Triangles(8, 18, 12, 0, 12, 16, 13, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 20, 1, 0),
    gsSP2Triangles(13, 20, 1, 0, 1, 19, 0, 0),
    gsSP2Triangles(1, 19, 0, 0, 0, 17, 8, 0),
    gsSP1Triangle(0, 17, 8, 0),
    gsSPEndDisplayList(),
};

static Vtx slimeVertices[1] = {
    VTX(0, 0, 0, 0, 0, 0, 0, 0, 0),
};

// gbi.h forgets to define this macro
#define FTOFIX32(x) (long)((x) * (float)0x00010000)

u64 slimeTexture[] = {
#include "assets/objects/gameplay_keep/slime_texture.rgb5a1.inc.c"
};

u64 slimeHiliteTexture[] = {
#include "assets/objects/gameplay_keep/slime_texture_2.i8.inc.c"
};

Gfx slimeDList[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_HILITERGBA2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPLoadMultiBlock(slimeHiliteTexture, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x07000000),
    gsDPLoadTextureBlock(slimeTexture, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(qu016(0.0390625), qu016(0.0390625), 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, qu08(0.00390625), 0xFF, 0xFF, 0xFF, 0xFF),
    gsDPSetEnvColor(0xFF, 0xFF, 0xFF, 0x00),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, PRIMITIVE, TEXEL0, 0, SHADE, PRIMITIVE, ENVIRONMENT, COMBINED, TEXEL0,
                       COMBINED, ENVIRONMENT, COMBINED, TEXEL0, COMBINED),
    gsSPVertex(&slimeVertices[0], 1, 0),
    gsDPSetPrimColor(0, 0, 255, 70, 131, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 50),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 100),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 100),
    gsDPSetPrimColor(0, 0, 0, 0, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 200),
    gsDPSetPrimColor(0, 0, 0, 100, 0, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 300),
    gsDPSetPrimColor(0, 0, 0, 100, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 400),
    gsDPSetPrimColor(0, 0, 100, 0, 0, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 500),
    gsDPSetPrimColor(0, 0, 100, 0, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 600),
    gsDPSetPrimColor(0, 0, 100, 100, 0, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 700),
    gsDPSetPrimColor(0, 0, 100, 100, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 800),
    gsSPEndDisplayList(),
};

void EnSlim_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnSlim* this = THIS;
    /*
        OPEN_DISPS(globalCtx->state.gfxCtx);
        func_80093D18(globalCtx->state.gfxCtx);
        Collider_UpdateSpheres(0, &this->collider);
        if (this->actor.params == TEKSLIM_BLUE) {
            gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(&D_06001300));
            gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(&D_06001700));
            gSPSegment(POLY_OPA_DISP++, 0x0A, SEGMENTED_TO_VIRTUAL(&D_06001900));
        } else {
            gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(&D_06001B00));
            gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(&D_06001F00));
            gSPSegment(POLY_OPA_DISP++, 0x0A, SEGMENTED_TO_VIRTUAL(&D_06002100));
        }
        SkelAnime_DrawOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable, NULL, EnSlim_PostLimbDraw,
                          thisx);
        CLOSE_DISPS(globalCtx->state.gfxCtx);

        if (this->spawnIceTimer != 0) {
            // Spawn chunks of ice all over the tekslim's body
            thisx->colorFilterTimer++;
            this->spawnIceTimer--;
            if ((this->spawnIceTimer & 3) == 0) {
                Vec3f iceChunk;
                s32 idx = this->spawnIceTimer >> 2;
                iceChunk.x = thisx->world.pos.x + sIceChunks[idx].x;
                iceChunk.y = thisx->world.pos.y + sIceChunks[idx].y;
                iceChunk.z = thisx->world.pos.z + sIceChunks[idx].z;
                EffectSsEnIce_SpawnFlyingVec3f(globalCtx, &this->actor, &iceChunk, 150, 150, 150, 250, 235, 245,
       255, 1.0f);
            }
        }
    */
    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093C80(globalCtx);
    func_80093D84(globalCtx->state.gfxCtx);

    Matrix_Push();
    Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, MTXMODE_NEW);
    Matrix_RotateY(thisx->shape.rot.y * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateX(thisx->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_Scale(thisx->scale.x * slimeDeformation[this->deformationCounter][0],
                 thisx->scale.y * slimeDeformation[this->deformationCounter][1],
                 thisx->scale.z * slimeDeformation[this->deformationCounter][2], MTXMODE_APPLY);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(gfxCtx, "../z_en_dog.c", UNK_LINE),
              G_MTX_MODELVIEW | G_MTX_NOPUSH | G_MTX_LOAD);

    Actor_DrawHiliteReflectionXlu(&this->actor, globalCtx, 1); // setup XLU hilite in segment 0x07
    gSPDisplayList(POLY_XLU_DISP++, slimeDList);
    Matrix_Pop();

    CLOSE_DISPS(globalCtx->state.gfxCtx);

    Collider_UpdateSpheres(0, &this->collider); // why is this in the draw function??
}
