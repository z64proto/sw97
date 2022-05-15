#include "dungeon_keep_actors.h"
#include "objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"

#define FLAGS 0x00000030

#define THIS ((DungeonKeep*)thisx)

#define SCALE_UP 18.0f / 200.0f
#define SCALE_DOWN 10.0f / 2000.0f
#define SCALE_MOVE_DOWN 30.0f / 2000.0f
#define SCALE_MOVE_UP 50.0f / 2000.0f

void BetaFloorSwitch_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BetaFloorSwitch_Update(Actor* thisx, GlobalContext* globalCtx);
void BetaFloorSwitch_Draw(Actor* thisx, GlobalContext* globalCtx);

void BetaFloorSwitch_Wait(DungeonKeep* this, GlobalContext* globalCtx);
void BetaFloorSwitch_Press(DungeonKeep* this, GlobalContext* globalCtx);
void BetaFloorSwitch_Pressed(DungeonKeep* this, GlobalContext* globalCtx);
void BetaFloorSwitch_Rise(DungeonKeep* this, GlobalContext* globalCtx);

void BetaFloorSwitch_InitDynapoly(DungeonKeep* this, GlobalContext* globalCtx, CollisionHeader* collision,
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

void BetaFloorSwitch_SetupWait(DungeonKeep* this) {
    this->dyna.actor.scale.y = SCALE_UP;
    this->actionFunc = BetaFloorSwitch_Wait;
}

void BetaFloorSwitch_SetupPress(DungeonKeep* this) {
    this->actionFunc = BetaFloorSwitch_Press;
}

void BetaFloorSwitch_SetupPressed(DungeonKeep* this) {
    this->dyna.actor.scale.y = SCALE_DOWN;
    this->actionFunc = BetaFloorSwitch_Pressed;
}

void BetaFloorSwitch_Wait(DungeonKeep* this, GlobalContext* globalCtx) {
    if (func_8004356C(&this->dyna)) {
        Flags_SetSwitch(globalCtx, (this->dyna.actor.params >> 8 & 0xFF));
        OnePointCutscene_AttentionSetSfx(globalCtx, &this->dyna.actor, NA_SE_SY_CORRECT_CHIME);
        BetaFloorSwitch_SetupPress(this);
    }
}

void BetaFloorSwitch_Press(DungeonKeep* this, GlobalContext* globalCtx) {
    this->dyna.actor.scale.y -= SCALE_MOVE_DOWN;

    if (this->dyna.actor.scale.y <= SCALE_DOWN) {
        BetaFloorSwitch_SetupPressed(this);
        Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_FOOT_SWITCH);
        func_800AA000(this->dyna.actor.xyzDistToPlayerSq, 120, 20, 10);
    }
}

void BetaFloorSwitch_Pressed(DungeonKeep* this, GlobalContext* globalCtx) {
    if (!Flags_GetSwitch(globalCtx, (this->dyna.actor.params >> 8 & 0xFF))) {
        this->actionFunc = BetaFloorSwitch_Rise;
    }
}

void BetaFloorSwitch_Rise(DungeonKeep* this, GlobalContext* globalCtx) {
    this->dyna.actor.scale.y += SCALE_MOVE_UP;

    if (this->dyna.actor.scale.y >= SCALE_UP) {
        BetaFloorSwitch_SetupWait(this);
        Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_FOOT_SWITCH);
        func_800AA000(this->dyna.actor.xyzDistToPlayerSq, 120, 20, 10);
    }
}

void BetaFloorSwitch_Init(DungeonKeep* this, GlobalContext* globalCtx) {
    this->dyna.actor.destroy = BetaFloorSwitch_Destroy;
    this->dyna.actor.update = BetaFloorSwitch_Update;
    this->dyna.actor.draw = BetaFloorSwitch_Draw;

    Actor_SetScale(&this->dyna.actor, 0.1f);
    BetaFloorSwitch_InitDynapoly(this, globalCtx, &gBetaFloorSwitchCol, DPM_PLAYER);

    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 1.0f;
    this->dyna.actor.colChkInfo.mass = MASS_IMMOVABLE;

    if (Flags_GetSwitch(globalCtx, (this->dyna.actor.params >> 8 & 0xFF))) {
        BetaFloorSwitch_SetupPressed(this);
    } else {
        BetaFloorSwitch_SetupWait(this);
    }
}

void BetaFloorSwitch_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BetaFloorSwitch_Update(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    if (this->actionFunc != NULL) {
        this->actionFunc(this, globalCtx);
    }
}

void BetaFloorSwitch_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Gfx_DrawDListOpa(globalCtx, gBetaFloorSwitchDL);
}
