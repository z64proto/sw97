/*
 * File: z_bg_spot00_hanebasi.c
 * Overlay: ovl_Bg_Spot00_Hanebasi
 * Description: Hyrule Field Drawbridge and Torches
 */

#include "z_bg_spot00_hanebasi.h"
#include "objects/gameplay_keep/gameplay_keep.h"

#define FLAGS 0x00000010

#define THIS ((BgSpot00Hanebasi*)thisx)

typedef enum {
    /* -1 */ DT_DRAWBRIDGE = -1,
    /*  0 */ DT_CHAIN_1,
    /*  1 */ DT_CHAIN_2
} DrawbridgeType;

void BgSpot00Hanebasi_Init(Actor* thisx, GlobalContext* globalCtx);
void BgSpot00Hanebasi_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgSpot00Hanebasi_Update(Actor* thisx, GlobalContext* globalCtx);
void BgSpot00Hanebasi_Draw(Actor* thisx, GlobalContext* globalCtx);

void BgSpot00Hanebasi_DrawBridgeWait(BgSpot00Hanebasi* this, GlobalContext* globalCtx);
void BgSpot00Hanebasi_DrawBridgeRiseAndFall(BgSpot00Hanebasi* this, GlobalContext* globalCtx);
void BgSpot00Hanebasi_SetTorchLightInfo(BgSpot00Hanebasi* this, GlobalContext* globalCtx);

extern Gfx D_060000C0[];           // bridge chains
extern CollisionHeader D_06000280; // chains collision
extern Gfx D_06000430[];           // drawbridge
extern CollisionHeader D_060005E0; // drawbridge collision

const ActorInit Bg_Spot00_Hanebasi_InitVars = {
    ACTOR_BG_SPOT00_HANEBASI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT00_OBJECTS,
    sizeof(BgSpot00Hanebasi),
    (ActorFunc)BgSpot00Hanebasi_Init,
    (ActorFunc)BgSpot00Hanebasi_Destroy,
    (ActorFunc)BgSpot00Hanebasi_Update,
    (ActorFunc)BgSpot00Hanebasi_Draw,
};

static f32 sTorchFlameScale = 0.0f;

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(uncullZoneScale, 550, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 5000, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_STOP),
};

void BgSpot00Hanebasi_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot00Hanebasi* this = THIS;
    s32 pad;
    Vec3f chainPos;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 1);

    if (this->dyna.actor.params == DT_DRAWBRIDGE) {
        CollisionHeader_GetVirtual(&D_060005E0, &colHeader);
    } else {
        CollisionHeader_GetVirtual(&D_06000280, &colHeader);
    }

    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);

    if (this->dyna.actor.params == DT_DRAWBRIDGE) {
        this->dyna.actor.shape.rot.x = -0x4000;

        chainPos.y =
            (10.0f * Math_CosS(this->dyna.actor.shape.rot.x)) - (Math_SinS(this->dyna.actor.shape.rot.x) * 400.0f);
        chainPos.z =
            (10.0f * Math_SinS(this->dyna.actor.shape.rot.x)) - (Math_CosS(this->dyna.actor.shape.rot.x) * 400.0f);
        chainPos.x =
            (158.0f * Math_CosS(this->dyna.actor.shape.rot.y)) + (Math_SinS(this->dyna.actor.shape.rot.y) * chainPos.z);
        chainPos.z = (-158.0f * Math_SinS(this->dyna.actor.shape.rot.y)) +
                     (Math_CosS(this->dyna.actor.shape.rot.y) * chainPos.z);

        if (Actor_SpawnAsChild(&globalCtx->actorCtx, &this->dyna.actor, globalCtx, ACTOR_BG_SPOT00_HANEBASI,
                               this->dyna.actor.world.pos.x + chainPos.x, this->dyna.actor.world.pos.y + chainPos.y,
                               this->dyna.actor.world.pos.z + chainPos.z,
                               ((this->dyna.actor.shape.rot.x == 0) ? 0 : 0xF020), this->dyna.actor.shape.rot.y, 0,
                               DT_CHAIN_1) == NULL) {
            Actor_Kill(&this->dyna.actor);
        }

        this->actionFunc = BgSpot00Hanebasi_DrawBridgeWait;
        this->destAngle = 40;
    } else if (this->dyna.actor.params == DT_CHAIN_1) {
        if (Actor_SpawnAsChild(&globalCtx->actorCtx, &this->dyna.actor, globalCtx, ACTOR_BG_SPOT00_HANEBASI,
                               this->dyna.actor.world.pos.x - (Math_CosS(this->dyna.actor.shape.rot.y) * 316.0f),
                               this->dyna.actor.world.pos.y,
                               this->dyna.actor.world.pos.z + (Math_SinS(this->dyna.actor.shape.rot.y) * 316.0f),
                               this->dyna.actor.shape.rot.x, this->dyna.actor.shape.rot.y, 0, DT_CHAIN_2) == NULL) {
            Actor_Kill(&this->dyna.actor);
            Actor_Kill(this->dyna.actor.parent);
        }

        this->actionFunc = BgSpot00Hanebasi_SetTorchLightInfo;
    } else {
        this->actionFunc = BgSpot00Hanebasi_SetTorchLightInfo;
    }

    if (this->dyna.actor.params >= DT_CHAIN_1) {
        this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo);
        Lights_PointNoGlowSetInfo(&this->lightInfo, ((this->dyna.actor.params == DT_CHAIN_1) ? 260.0f : -260.0f), 168,
                                  690, 255, 255, 0, 0);
    }
}

void BgSpot00Hanebasi_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot00Hanebasi* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);

    if (this->dyna.actor.params >= DT_CHAIN_1) {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
    }
}

void BgSpot00Hanebasi_DrawBridgeWait(BgSpot00Hanebasi* this, GlobalContext* globalCtx) {
    BgSpot00Hanebasi* child = (BgSpot00Hanebasi*)this->dyna.actor.child;

    if ((gSaveContext.sceneSetupIndex >= 1) || (gSaveContext.eventChkInf[8] & 1)) {
        if (this->dyna.actor.shape.rot.x != 0) {
            if (Flags_GetEnv(globalCtx, 0)) {
                this->actionFunc = BgSpot00Hanebasi_DrawBridgeRiseAndFall;
                this->destAngle = 0;
                child->destAngle = 0;
                return;
            }
        }

        if ((this->dyna.actor.shape.rot.x == 0) && (gSaveContext.sceneSetupIndex < 1)) {
            this->actionFunc = BgSpot00Hanebasi_DrawBridgeRiseAndFall;
            this->destAngle = -0x4000;
            child->destAngle = -0xFE0;
        }
    }
}

void BgSpot00Hanebasi_DoNothing(BgSpot00Hanebasi* this, GlobalContext* globalCtx) {
}

void BgSpot00Hanebasi_DrawBridgeRiseAndFall(BgSpot00Hanebasi* this, GlobalContext* globalCtx) {
    BgSpot00Hanebasi* child;
    Actor* childsChild;
    s16 angle = 80;

    if (Math_ScaledStepToS(&this->dyna.actor.shape.rot.x, this->destAngle, 80)) {
        this->actionFunc = BgSpot00Hanebasi_DrawBridgeWait;
    }

    if (this->dyna.actor.shape.rot.x >= -0x27D8) {
        child = (BgSpot00Hanebasi*)this->dyna.actor.child;
        angle *= 0.4f;
        Math_ScaledStepToS(&child->dyna.actor.shape.rot.x, child->destAngle, angle);
        childsChild = child->dyna.actor.child;
        Math_ScaledStepToS(&childsChild->shape.rot.x, child->destAngle, angle);
    }

    if (this->destAngle < 0) {
        if (this->actionFunc == BgSpot00Hanebasi_DrawBridgeWait) {
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_BRIDGE_CLOSE_STOP);
        } else {
            func_8002F974(&this->dyna.actor, NA_SE_EV_BRIDGE_CLOSE - SFX_FLAG);
        }
    } else {
        if (this->actionFunc == BgSpot00Hanebasi_DrawBridgeWait) {
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_BRIDGE_OPEN_STOP);
        } else {
            func_8002F974(&this->dyna.actor, NA_SE_EV_BRIDGE_OPEN - SFX_FLAG);
        }
    }
}

void BgSpot00Hanebasi_SetTorchLightInfo(BgSpot00Hanebasi* this, GlobalContext* globalCtx) {
}

void BgSpot00Hanebasi_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgSpot00Hanebasi* this = THIS;

    this->actionFunc(this, globalCtx);
}

void BgSpot00Hanebasi_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Vec3f basePos = { 158.0f, 10.0f, 400.0f };
    Vec3f newPos;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);

    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_bg_spot00_hanebasi.c", 702),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    if (thisx->params == DT_DRAWBRIDGE) {
        gSPDisplayList(POLY_OPA_DISP++, D_06000430);

        Matrix_MultVec3f(&basePos, &newPos);
        thisx->child->world.pos.x = newPos.x;
        thisx->child->world.pos.y = newPos.y;
        thisx->child->world.pos.z = newPos.z;
        basePos.x *= -1.0f;

        Matrix_MultVec3f(&basePos, &newPos);
        thisx->child->child->world.pos.x = newPos.x;
        thisx->child->child->world.pos.y = newPos.y;
        thisx->child->child->world.pos.z = newPos.z;
    } else {
        gSPDisplayList(POLY_OPA_DISP++, D_060000C0);
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
