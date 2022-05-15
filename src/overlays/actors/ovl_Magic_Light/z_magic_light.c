/*
 * File: z_magic_light.c
 * Overlay: ovl_Magic_Light
 * Description: Sun's Song Effect
 */

#include "z_magic_light.h"
#include "vt.h"

#define FLAGS 0x02000010

#define THIS ((MagicLight*)thisx)

void MagicLight_Init(Actor* thisx, GlobalContext* globalCtx);
void MagicLight_Destroy(Actor* thisx, GlobalContext* globalCtx);
void MagicLight_Update(Actor* thisx, GlobalContext* globalCtx);
void MagicLight_Draw(Actor* thisx, GlobalContext* globalCtx);

void MagicLight_GrowCylinder(MagicLight* this, GlobalContext* globalCtx);

const ActorInit Magic_Light_InitVars = {
    ACTOR_MAGIC_LIGHT,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(MagicLight),
    (ActorFunc)MagicLight_Init,
    (ActorFunc)MagicLight_Destroy,
    (ActorFunc)MagicLight_Update,
    (ActorFunc)MagicLight_Draw,
};

#include "z_magic_light_gfx.c"

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_ON | AT_TYPE_PLAYER,
        AC_NONE,
        OC1_NONE,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { DMG_MAGIC_LIGHT, 0x00, 0x7F },
        { 0x00000000, 0x00, 0x00 },
        TOUCH_ON | TOUCH_SFX_NONE,
        BUMP_NONE,
        OCELEM_NONE,
    },
    { 3250.0f, 4500.0f, -2250.0f, { 0, 0, 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 0, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 1500, ICHAIN_STOP),
};

void MagicLight_SetupAction(MagicLight* this, MagicLightActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void MagicLight_Init(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    MagicLight* this = THIS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    MagicLight_SetupAction(this, MagicLight_GrowCylinder);

    Lights_PointNoGlowSetInfo(&this->lightInfo1, this->actor.world.pos.x, this->actor.world.pos.y,
                              this->actor.world.pos.z, 0, 0, 0, 0);
    this->lightNode1 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo1);

    Lights_PointNoGlowSetInfo(&this->lightInfo2, this->actor.world.pos.x, this->actor.world.pos.y,
                              this->actor.world.pos.z, 0, 0, 0, 0);
    this->lightNode2 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo2);
    if (YREG(15)) {
        this->actor.scale.y = 2.4f;
    } else {
        this->actor.scale.y = 0.3f;
    }

    this->unk_174 = -1.0f;

    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    Collider_UpdateCylinder(&this->actor, &this->collider);
}

void MagicLight_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    MagicLight* this = THIS;
    Player* player = PLAYER;

    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode1);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode2);
    func_800876C8(globalCtx);
    if ((gSaveContext.nayrusLoveTimer != 0) && (player != NULL)) {
        player->stateFlags3 |= 0x40;
    }
}

void MagicLight_End(MagicLight* this, GlobalContext* globalCtx) {
    if (this->unk_174 > 0) {
        this->unk_174 -= 0.05f;
    } else {
        Actor_Kill(&this->actor);
        // if (gTimeSpeed != 400 && globalCtx->msgCtx.unk_E40E == 0 && (gSaveContext.eventInf[0] & 0xF) != 1) {
        //     if (globalCtx->msgCtx.unk_E3F0 != 0x31 || globalCtx->msgCtx.unk_E3EE != 8) {
        //         gSaveContext.unk_1422 = 1;
        //         osSyncPrintf(VT_FGCOL(YELLOW));
        //         // Sun's Song Flag
        //         osSyncPrintf("z_magic_light  太陽の歌フラグ\n");
        //         osSyncPrintf(VT_RST);
        //     }
        // } else {
        //     globalCtx->msgCtx.unk_E3EE = 4;
        //     osSyncPrintf(VT_FGCOL(YELLOW));
        //     // Ocarina End
        //     osSyncPrintf("z_magic_light  オカリナ終了\n");
        //     osSyncPrintf(VT_RST);
        // }
    }
}

void MagicLight_Wait(MagicLight* this, GlobalContext* globalCtx) {
    if (this->timer > 0) {
        this->timer--;
    } else {
        MagicLight_SetupAction(this, MagicLight_End);
    }
}

void MagicLight_GrowCylinder(MagicLight* this, GlobalContext* globalCtx) {
    if (this->unk_174 < 1.0f) {
        this->unk_174 += 0.05f;
    } else {
        MagicLight_SetupAction(this, MagicLight_Wait);
        this->timer = 20;
    }
}

void MagicLight_Update(Actor* thisx, GlobalContext* globalCtx) {
    MagicLight* this = THIS;
    s32 pad;
    Player* player = PLAYER;
    f32 temp;

    if (this->unk_174 >= 0.0f) {
        func_8002F974(&this->actor, NA_SE_PL_ARROW_CHARGE_LIGHT - SFX_FLAG);

        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);

        temp = (1.0f - cosf(this->unk_174 * M_PI)) * 0.5f;
    } else {
        temp = 0.0f;
    }
    this->actionFunc(this, globalCtx);

    this->actor.scale.z = 0.42f * temp * 2.0f;
    this->actor.scale.x = 0.42f * temp * 2.0f;

    this->actor.world.pos = player->actor.world.pos;
    this->actor.world.pos.y += 5.0f;

    if (this->unk_174 >= 0.0f) {
        temp = (2.0f - this->unk_174) * this->unk_174;
    }
    func_800773A8(globalCtx, temp * 0.5F, 880.0f, 0.2f, 0.9f);

    Lights_PointNoGlowSetInfo(&this->lightInfo1, (s16)this->actor.world.pos.x, (s16)this->actor.world.pos.y + 55.0f,
                              (s16)this->actor.world.pos.z, (s32)(255.0f * temp), (s32)(255.0f * temp),
                              (s32)(200.0f * temp), (s16)(100.0f * temp));

    Lights_PointNoGlowSetInfo(&this->lightInfo2,
                              (s16)this->actor.world.pos.x + Math_SinS(player->actor.shape.rot.y) * 20.0f,
                              (s16)this->actor.world.pos.y + 20.0f,
                              (s16)this->actor.world.pos.z + Math_CosS(player->actor.shape.rot.y) * 20.0f,
                              (s32)(255.0f * temp), (s32)(255.0f * temp), (s32)(200.0f * temp), (s16)(100.0f * temp));
}

void MagicLight_Draw(Actor* thisx, GlobalContext* globalCtx) {
    MagicLight* this = THIS;
    u32 scroll = globalCtx->state.frames & 0xFFFF;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D84(globalCtx->state.gfxCtx);

    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_magic_light.c", 469),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_XLU_DISP++, sTextureDL);
    gSPDisplayList(POLY_XLU_DISP++, Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, scroll * 2, scroll * (-2), 32, 32, 1,
                                                     0, scroll * (-8), 32, 32));
    gSPDisplayList(POLY_XLU_DISP++, sCylinderDL);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
