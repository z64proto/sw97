/*
 * File: z_bg_menkuri_kaiten.c
 * Overlay: Bg_Menkuri_Kaiten
 * Description: Large rotating stone ring used in Gerudo Training Grounds and Forest Temple.
 */

#include "z_bg_menkuri_kaiten.h"

#define FLAGS 0x00000030

#define THIS ((BgMenkuriKaiten*)thisx)

void BgMenkuriKaiten_Init(Actor* thisx, GlobalContext* globalCtx);
void BgMenkuriKaiten_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgMenkuriKaiten_Update(Actor* thisx, GlobalContext* globalCtx);
void BgMenkuriKaiten_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Bg_Menkuri_Kaiten_InitVars = {
    ACTOR_BG_MENKURI_KAITEN,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MENKURI_OBJECTS,
    sizeof(BgMenkuriKaiten),
    (ActorFunc)BgMenkuriKaiten_Init,
    (ActorFunc)BgMenkuriKaiten_Destroy,
    (ActorFunc)BgMenkuriKaiten_Update,
    (ActorFunc)BgMenkuriKaiten_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

extern Gfx D_060038D0[];
extern CollisionHeader D_060042D8;

void BgMenkuriKaiten_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgMenkuriKaiten* this = THIS;
    s32 pad;
    CollisionHeader* colHeader = NULL;

    if ((thisx->params & 0xFFC0) == 0x0100) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_BG_RELAY_OBJECTS, thisx->world.pos.x,
                    thisx->world.pos.y - 120.0f, thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y,
                    thisx->world.rot.z, thisx->params);
        Actor_Kill(thisx);
        return;
    }

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, DPM_UNK3);
    CollisionHeader_GetVirtual(&D_060042D8, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
}

void BgMenkuriKaiten_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgMenkuriKaiten* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgMenkuriKaiten_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgMenkuriKaiten* this = THIS;

    if (!Flags_GetSwitch(globalCtx, this->dyna.actor.params) && func_80043590(&this->dyna)) {
        func_8002F974(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
        this->dyna.actor.shape.rot.y += 0x80;
    }
}

void BgMenkuriKaiten_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Gfx_DrawDListOpa(globalCtx, D_060038D0);
}
