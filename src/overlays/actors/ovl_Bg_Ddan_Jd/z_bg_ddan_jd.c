/*
 * File: z_bg_ddan_jd.c
 * Overlay: ovl_Bg_Ddan_Jd
 * Description: Rising stone platform (Dodongo's Cavern)
 */

#include "z_bg_ddan_jd.h"
#include "z_bg_ddan_jd_gfx.c"

#define FLAGS 0x00000030

#define THIS ((BgDdanJd*)thisx)

void BgDdanJd_Init(Actor* thisx, GlobalContext* globalCtx);
void BgDdanJd_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgDdanJd_Update(Actor* thisx, GlobalContext* globalCtx);
void BgDdanJd_Draw(Actor* thisx, GlobalContext* globalCtx);

void BgDdanJd_Idle(BgDdanJd* this, GlobalContext* globalCtx);
void BgDdanJd_Move(BgDdanJd* this, GlobalContext* globalCtx);

// extern Gfx D_060037B8[];
extern CollisionHeader D_06003CE0;

const ActorInit Bg_Ddan_Jd_InitVars = {
    ACTOR_BG_DDAN_JD,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_DDAN_OBJECTS,
    sizeof(BgDdanJd),
    (ActorFunc)BgDdanJd_Init,
    (ActorFunc)BgDdanJd_Destroy,
    (ActorFunc)BgDdanJd_Update,
    (ActorFunc)BgDdanJd_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

typedef enum {
    /* 0 */ STATE_GO_BOTTOM,
    /* 1 */ STATE_GO_MIDDLE_FROM_BOTTOM,
    /* 2 */ STATE_GO_MIDDLE_FROM_TOP,
    /* 3 */ STATE_GO_TOP
} BgDdanJdState;

#define MOVE_HEIGHT_MIDDLE 100.0f // originally 140
#define MOVE_HEIGHT_TOP 700.0f

#define IDLE_FRAMES 100

// Since ySpeed is used to determine if the platform should rise to the top of the dungeon, these must be assigned
// different values in order for the shortcut to work correctly
#define DEFAULT_Y_SPEED 1
#define SHORTCUT_Y_SPEED 5

void BgDdanJd_Init(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    BgDdanJd* this = THIS;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, DPM_PLAYER);
    CollisionHeader_GetVirtual(&D_06003CE0, &colHeader);
    thisx->scale.x = thisx->scale.z = 0.16f;
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
    this->idleTimer = IDLE_FRAMES;
    this->state = STATE_GO_BOTTOM;
    this->ySpeed = DEFAULT_Y_SPEED;
    this->actionFunc = BgDdanJd_Idle;
}

void BgDdanJd_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgDdanJd* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgDdanJd_Idle(BgDdanJd* this, GlobalContext* globalCtx) {
    if (this->idleTimer != 0) {
        this->idleTimer--;
    }

    if (this->idleTimer == 0) {
        this->idleTimer = IDLE_FRAMES;
        if (this->state == STATE_GO_BOTTOM) {
            this->state = STATE_GO_MIDDLE_FROM_BOTTOM;
            this->targetY = this->dyna.actor.home.pos.y + MOVE_HEIGHT_MIDDLE;
        } else if (this->state == STATE_GO_MIDDLE_FROM_BOTTOM) {
            this->state = STATE_GO_BOTTOM;
            this->targetY = this->dyna.actor.home.pos.y;
        } else if (this->state == STATE_GO_MIDDLE_FROM_TOP) {
            this->state = STATE_GO_BOTTOM;
            this->targetY = this->dyna.actor.home.pos.y;
        } else if (this->state == STATE_GO_TOP) {
            this->state = STATE_GO_MIDDLE_FROM_TOP;
            this->targetY = this->dyna.actor.home.pos.y + MOVE_HEIGHT_MIDDLE;
        }
        this->actionFunc = BgDdanJd_Move;
    }
}

// Handles dust particles and sfx when moving
void BgDdanJd_MoveEffects(BgDdanJd* this, GlobalContext* globalCtx) {
    Vec3f dustPos;

    // Generate random dust particles at the platform's base.
    dustPos.y = this->dyna.actor.home.pos.y - 50.0f;

    if (globalCtx->gameplayFrames & 1) {
        dustPos.x = this->dyna.actor.world.pos.x + 65.0f;
        dustPos.z = Rand_CenteredFloat(110.0f) + this->dyna.actor.world.pos.z;
        Actor_SpawnFlyingDust(globalCtx, &dustPos, 5.0f, 1, 20, 60, 1);
        dustPos.x = this->dyna.actor.world.pos.x - 65.0f;
        dustPos.z = Rand_CenteredFloat(110.0f) + this->dyna.actor.world.pos.z;
        Actor_SpawnFlyingDust(globalCtx, &dustPos, 5.0f, 1, 20, 60, 1);
    } else {
        dustPos.x = Rand_CenteredFloat(110.0f) + this->dyna.actor.world.pos.x;
        dustPos.z = this->dyna.actor.world.pos.z + 65.0f;
        Actor_SpawnFlyingDust(globalCtx, &dustPos, 5.0f, 1, 20, 60, 1);
        dustPos.x = Rand_CenteredFloat(110.0f) + this->dyna.actor.world.pos.x;
        dustPos.z = this->dyna.actor.world.pos.z - 65.0f;
        Actor_SpawnFlyingDust(globalCtx, &dustPos, 5.0f, 1, 20, 60, 1);
    }
    if (this->ySpeed == SHORTCUT_Y_SPEED) {
        func_8002F974(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
    }
}

// Implements the platform's movement state
void BgDdanJd_Move(BgDdanJd* this, GlobalContext* globalCtx) {
    if (Math_StepToF(&this->dyna.actor.world.pos.y, this->targetY, this->ySpeed)) {
        Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_PILLAR_MOVE_STOP);
        this->actionFunc = BgDdanJd_Idle;
    }
    BgDdanJd_MoveEffects(this, globalCtx);
}

void BgDdanJd_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgDdanJd* this = THIS;

    this->actionFunc(this, globalCtx);
}

void BgDdanJd_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Gfx_DrawDListOpa(globalCtx, gDCPlat2DL);
}
