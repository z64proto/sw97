/*
 * File: z_bg_spot07_taki.c
 * Overlay: ovl_Bg_Spot07_Taki
 * Description: Zora's Domain Waterfall and Ice
 */

#include "z_bg_spot07_taki.h"

#define FLAGS 0x00000030

#define THIS ((BgSpot07Taki*)thisx)

void BgSpot07Taki_Init(Actor* thisx, GlobalContext* globalCtx);
void BgSpot07Taki_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgSpot07Taki_Update(Actor* thisx, GlobalContext* globalCtx);
void BgSpot07Taki_Draw(Actor* thisx, GlobalContext* globalCtx);

void BgSpot07Taki_DoNothing(BgSpot07Taki* this, GlobalContext* globalCtx);

extern Gfx D_06000460[];
extern Gfx D_06000BE0[];
extern Gfx D_06001CF0[];
extern Gfx D_06001F68[];
extern CollisionHeader D_06002590;
extern Gfx D_06003210[];
extern Gfx D_060032D8[];
extern CollisionHeader D_060038FC;

const ActorInit Bg_Spot07_Taki_InitVars = {
    ACTOR_BG_SPOT07_TAKI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT07_OBJECT,
    sizeof(BgSpot07Taki),
    (ActorFunc)BgSpot07Taki_Init,
    (ActorFunc)BgSpot07Taki_Destroy,
    (ActorFunc)BgSpot07Taki_Update,
    (ActorFunc)BgSpot07Taki_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void BgSpot07Taki_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot07Taki* this = THIS;
    s32 pad;
    CollisionHeader* colHeader = NULL;

    DynaPolyActor_Init(&this->dyna, DPM_PLAYER);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    if (LINK_IS_ADULT) {
        if (this->dyna.actor.params == 0) {
            CollisionHeader_GetVirtual(&D_06002590, &colHeader);
        } else {
            CollisionHeader_GetVirtual(&D_060038FC, &colHeader);
        }
        this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
    }
    this->actionFunc = BgSpot07Taki_DoNothing;
}

void BgSpot07Taki_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot07Taki* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgSpot07Taki_DoNothing(BgSpot07Taki* this, GlobalContext* globalCtx) {
}

void BgSpot07Taki_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot07Taki* this = THIS;

    this->actionFunc(this, globalCtx);
}

void BgSpot07Taki_Draw(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot07Taki* this = THIS;
    u32 frames;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    frames = globalCtx->gameplayFrames;
    if (LINK_IS_ADULT) {
        func_80093D18(globalCtx->state.gfxCtx);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_bg_spot07_taki.c", 177),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        if (this->dyna.actor.params == 0) {
            gSPDisplayList(POLY_OPA_DISP++, D_06001CF0);
        } else {
            gSPDisplayList(POLY_OPA_DISP++, D_06003210);
        }
    }
    func_80093D84(globalCtx->state.gfxCtx);

    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_bg_spot07_taki.c", 191),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, ((frames * -1) & 0x7F), ((frames * 1) & 0x7F), 32, 32, 1,
                                ((frames * 1) & 0x7F), ((frames * 1) & 0x7F), 32, 32));

    if (LINK_IS_CHILD) {
        gDPSetEnvColor(POLY_XLU_DISP++, 255, 255, 255, 128);
        if (this->dyna.actor.params == 0) {
            gSPSegment(POLY_XLU_DISP++, 0x09,
                       Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, ((frames * -1) & 0x7F), ((frames * -3) & 0xFF), 64,
                                        64, 1, ((frames * 1) & 0x7F), ((frames * -3) & 0xFF), 64, 64));
            gSPSegment(POLY_XLU_DISP++, 0x0A,
                       Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, frames * 0, ((frames * 3) & 0x1FF), 32, 128, 1,
                                        frames * 0, ((frames * 3) & 0x1FF), 32, 128));
            gSPDisplayList(POLY_XLU_DISP++, D_06000460);
        } else {
            gSPSegment(POLY_XLU_DISP++, 0x09,
                       Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, frames * 0, ((frames * -1) & 0x7F), 32, 32, 1,
                                        frames * 0, ((frames * -1) & 0x7F), 32, 32));
            gSPSegment(POLY_XLU_DISP++, 0x0A,
                       Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, frames * 0, ((frames * 3) & 0x1FF), 32, 128, 1,
                                        frames * 0, ((frames * 3) & 0x1FF), 32, 128));
            gSPDisplayList(POLY_XLU_DISP++, &D_06000BE0);
        }
    } else if (this->dyna.actor.params == 0) {
        gSPDisplayList(POLY_XLU_DISP++, D_06001F68);
    } else {
        gSPDisplayList(POLY_XLU_DISP++, D_060032D8);
    }
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
