/*
 * File: z_bg_ydan_maruta.c
 * Overlay: ovl_Bg_Ydan_Maruta
 * Description: In the original game this is: Rotating spike log in Deku Tree
 * Changed to: Rising platforms (similar to ydan_hasi)
 */
#include "z_bg_ydan_maruta.h"
#include "objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "objects/object_ydan_objects/object_ydan_objects.h"

#define FLAGS 0x00000030
#define SWITCH_FLAG(params) (params & 0xFF)

#define THIS ((BgYdanMaruta*)thisx)

void BgYdanMaruta_Init(Actor* thisx, GlobalContext* globalCtx);
void BgYdanMaruta_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgYdanMaruta_Update(Actor* thisx, GlobalContext* globalCtx);
void BgYdanMaruta_Draw(Actor* thisx, GlobalContext* globalCtx);

void BgYdanMaruta_Wait(BgYdanMaruta* this, GlobalContext* globalCtx);
void BgYdanHasi_Rise(BgYdanMaruta* this, GlobalContext* globalCtx);

const ActorInit Bg_Ydan_Maruta_InitVars = {
    ACTOR_BG_YDAN_MARUTA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(BgYdanMaruta),
    (ActorFunc)BgYdanMaruta_Init,
    (ActorFunc)BgYdanMaruta_Destroy,
    (ActorFunc)BgYdanMaruta_Update,
    (ActorFunc)BgYdanMaruta_Draw,
};

void BgYdanMaruta_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanMaruta* this = THIS;
    CollisionHeader* colHeader = NULL;

    Actor_SetScale(thisx, 1.0f);
    CollisionHeader_GetVirtual(&gDekuPlatformsCol, &colHeader);
    DynaPolyActor_Init(&this->dyna, DPM_PLAYER);
    thisx->world.pos.y -= 180.0f;
    thisx->draw = NULL;
    this->actionFunc = BgYdanMaruta_Wait;
    Actor_SetFocus(thisx, 40.0f);
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, thisx, colHeader);
    this->timer = 0;
}

void BgYdanMaruta_Wait(BgYdanMaruta* this, GlobalContext* globalCtx) {
    if (Flags_GetSwitch(globalCtx, SWITCH_FLAG(this->dyna.actor.params))) {
        this->timer = 340;
        this->dyna.actor.draw = BgYdanMaruta_Draw;
        this->actionFunc = BgYdanHasi_Rise;
        OnePointCutscene_Init(globalCtx, 3040, 30, &this->dyna.actor, MAIN_CAM);
    }
}

void BgYdanHasi_Rise(BgYdanMaruta* this, GlobalContext* globalCtx) {
    if (this->timer != 0) {
        this->timer--;
    }

    if (this->timer == 0) {
        if (Math_StepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y - 180.0f, 3.0f) != 0) {
            Flags_UnsetSwitch(globalCtx, SWITCH_FLAG(this->dyna.actor.params));
            this->dyna.actor.draw = NULL;
            this->actionFunc = BgYdanMaruta_Wait;
        } else {
            func_8002F948(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
        }
    } else if (Math_StepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y, 3.0f) == 0) {
        func_8002F948(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
    } else {
        func_8002F994(&this->dyna.actor, this->timer);
    }
}

void BgYdanMaruta_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanMaruta* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    Flags_UnsetSwitch(globalCtx, SWITCH_FLAG(this->dyna.actor.params));
}

void BgYdanMaruta_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanMaruta* this = THIS;

    if (this->actionFunc != NULL) {
        this->actionFunc(this, globalCtx);
    }
}

void BgYdanMaruta_Draw(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanMaruta* this = THIS;

    Gfx_DrawDListOpa(globalCtx, gDekuPlatformsDL);
}
