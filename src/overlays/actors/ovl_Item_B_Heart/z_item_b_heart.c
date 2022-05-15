/*
 * File: z_item_b_heart.c
 * Overlay: ovl_Item_B_Heart
 * Description: Heart Container
 */

#include "z_item_b_heart.h"
#include "objects/object_gi_hearts/object_gi_hearts.h"

#define FLAGS 0x00000000

#define THIS ((ItemBHeart*)thisx)

void ItemBHeart_Init(Actor* thisx, GlobalContext* globalCtx);
void ItemBHeart_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ItemBHeart_Update(Actor* thisx, GlobalContext* globalCtx);
void ItemBHeart_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80B85264(ItemBHeart* this, GlobalContext* globalCtx);

const ActorInit Item_B_Heart_InitVars = {
    ACTOR_ITEM_B_HEART,
    ACTORCAT_MISC,
    FLAGS,
    OBJECT_B_HEART,
    sizeof(ItemBHeart),
    (ActorFunc)ItemBHeart_Init,
    (ActorFunc)ItemBHeart_Destroy,
    (ActorFunc)ItemBHeart_Update,
    (ActorFunc)ItemBHeart_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 0, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 800, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 800, ICHAIN_STOP),
};

void ItemBHeart_Init(Actor* thisx, GlobalContext* globalCtx) {
    ItemBHeart* this = THIS;

    if (Flags_GetCollectible(globalCtx, 0x1F)) {
        Actor_Kill(&this->actor);
    } else {
        Actor_ProcessInitChain(&this->actor, sInitChain);
        ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.8f);
    }
}

void ItemBHeart_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void ItemBHeart_Update(Actor* thisx, GlobalContext* globalCtx) {
    ItemBHeart* this = THIS;

    func_80B85264(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4);
    if (func_8002F434(&this->actor, globalCtx, GI_HEART_CONTAINER_2, 30.0f, 40.0f)) {
        Audio_SetBGM(0x24);
        Flags_SetCollectible(globalCtx, 0x1F);
        Actor_Kill(&this->actor);
    }
}

void func_80B85264(ItemBHeart* this, GlobalContext* globalCtx) {
    f32 yOffset;

    this->unk_164++;
    yOffset = (Math_SinS(this->unk_164 * 0x60C) * 5.0f) + 20.0f;
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y + yOffset, 0.1f, this->unk_158);
    Math_ApproachF(&this->unk_158, 2.0f, 1.0f, 0.1f);
    this->actor.shape.rot.y += 0x400;

    Math_ApproachF(&this->actor.scale.x, 0.05f, 0.1f, 0.01f);
    this->actor.scale.y = this->actor.scale.z = this->actor.scale.x;
}

void ItemBHeart_Draw(Actor* thisx, GlobalContext* globalCtx) {
    ItemBHeart* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 0x20, 0x20, 1, 3 * globalCtx->gameplayFrames,
                                4 * globalCtx->gameplayFrames, 0x20, 0x20));

    POLY_XLU_DISP = Gfx_CallSetupDL(POLY_XLU_DISP, 0x19);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_item_b_heart.c", 551),
              G_MTX_MODELVIEW | G_MTX_LOAD);
    gDPSetEnvColor(POLY_XLU_DISP++, 0, 0, 255, 200);
    gSPDisplayList(POLY_XLU_DISP++, 0x06000240);

    POLY_XLU_DISP = Gfx_CallSetupDL(POLY_XLU_DISP, 0x2F);
    gDPSetEnvColor(POLY_XLU_DISP++, 200, 0, 0, 200);
    gSPDisplayList(POLY_XLU_DISP++, 0x06000348);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
