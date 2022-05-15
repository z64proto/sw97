#include "dungeon_keep_actors.h"
#include "objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"

#define FLAGS 0x00000030

#define FLOATER_HEIGHT (f32)(this->dyna.actor.params >> 8 & 0xFF)

#define THIS ((DungeonKeep*)thisx)

void Floater_Destroy(Actor* thisx, GlobalContext* globalCtx);
void Floater_Update(Actor* thisx, GlobalContext* globalCtx);
void Floater_Draw(Actor* thisx, GlobalContext* globalCtx);

void Floater_WaitDown(DungeonKeep* this, GlobalContext* globalCtx);
void Floater_Rise(DungeonKeep* this, GlobalContext* globalCtx);
void Floater_WaitUp(DungeonKeep* this, GlobalContext* globalCtx);

void Floater_InitDynapoly(DungeonKeep* this, GlobalContext* globalCtx, CollisionHeader* collision,
                          DynaPolyMoveFlag moveFlag) {
    s32 pad;
    CollisionHeader* colHeader = NULL;
    s32 pad2;

    DynaPolyActor_Init(&this->dyna, moveFlag);
    CollisionHeader_GetVirtual(collision, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);

    if (this->dyna.bgId == BG_ACTOR_MAX) {
        // Warning : move BG registration failure
        osSyncPrintf("Warning : move BG 登録失敗(%s %d)(name %d)(arg_data 0x%04x)\n", "../z_obj_switch.c", 531,
                     this->dyna.actor.id, this->dyna.actor.params);
    }
}

void Floater_Init(DungeonKeep* this, GlobalContext* globalCtx) {
    CollisionHeader* colHeader = NULL;

    this->dyna.actor.destroy = Floater_Destroy;
    this->dyna.actor.update = Floater_Update;
    this->dyna.actor.draw = Floater_Draw;

    Floater_InitDynapoly(this, globalCtx, &gDLiftCol, DPM_PLAYER | DPM_ENEMY);
    Actor_SetScale(&this->dyna.actor, 0.1f);
    if (DK_TYPE(this->dyna.actor.params) == DK_FLOATER_BIG) {
        this->dyna.actor.scale.y = 0.2f;
    }
    this->dyna.actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->actionFunc = Floater_WaitDown;
}

void Floater_Fall(DungeonKeep* this, GlobalContext* globalCtx) {
    if (this->timer == 0) {
        if (this->dyna.actor.world.pos.y > this->dyna.actor.home.pos.y) {
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
            this->dyna.actor.velocity.y = -3.0f;
        } else if (this->dyna.actor.world.pos.y <= this->dyna.actor.home.pos.y) {
            this->dyna.actor.velocity.y = 0.0f;
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_ELEVATOR_STOP);
            this->actionFunc = Floater_WaitDown;
        }
    }
}

void Floater_WaitUp(DungeonKeep* this, GlobalContext* globalCtx) {
    if (!(this->dyna.unk_160 & 2)) {
        this->timer = 12;
        this->actionFunc = Floater_Fall;
    }
}

void Floater_Rise(DungeonKeep* this, GlobalContext* globalCtx) {
    f32 top = this->dyna.actor.home.pos.y + FLOATER_HEIGHT;

    if (!(this->dyna.unk_160 & 2)) {
        this->actionFunc = Floater_Fall;
        this->dyna.actor.velocity.y = 0.0f;
        this->timer = 3;
    }

    if (this->timer == 0) {
        if (this->dyna.actor.world.pos.y < top) {
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
            this->dyna.actor.velocity.y = 3.0f;
        } else if (this->dyna.actor.world.pos.y >= top) {
            this->dyna.actor.velocity.y = 0.0f;
            this->actionFunc = Floater_WaitUp;
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_ELEVATOR_STOP);
        }
    }
}

void Floater_WaitDown(DungeonKeep* this, GlobalContext* globalCtx) {
    if ((this->dyna.unk_160 & 2)) {
        this->actionFunc = Floater_Rise;
        this->timer = 12;
    }
}

void Floater_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void Floater_Update(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    if (this->timer > 0) {
        this->timer--;
    }

    if (this->actionFunc != NULL) {
        this->actionFunc(this, globalCtx);
    }

    Actor_MoveForwardXZ(&this->dyna.actor);
}

void Floater_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Gfx_DrawDListOpa(globalCtx, DK_TYPE(thisx->params) == DK_FLOATER_BIG ? gDLiftBigDL : gDLiftDL);
}
