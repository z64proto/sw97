/*
 * File: z_bg_breakwall.c
 * Overlay: Bg_Breakwall
 * Description: Bombable Wall
 */

#include "z_bg_breakwall.h"
#include "objects/object_ddan_objects/object_ddan_objects.h"
#include "objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"

#define FLAGS 0x00000010

#define THIS ((BgBreakwall*)thisx)

typedef struct {
    CollisionHeader* colHeader;
    Gfx* dList;
    Gfx* tunnelDList;
    s8 colType;
} BombableWallInfo;

void BgBreakwall_Init(Actor* thisx, GlobalContext* globalCtx);
void BgBreakwall_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgBreakwall_Update(Actor* thisx, GlobalContext* globalCtx);
void BgBreakwall_Draw(Actor* thisx, GlobalContext* globalCtx);

void BgBreakwall_DoNothing(BgBreakwall* this, GlobalContext* globalCtx);
void BgBreakwall_SetupWait(BgBreakwall* this, GlobalContext* globalCtx);
void BgBreakwall_Wait(BgBreakwall* this, GlobalContext* globalCtx);
void BgBreakwall_LavaCoverMove(BgBreakwall* this, GlobalContext* globalCtx);

const ActorInit Bg_Breakwall_InitVars = {
    ACTOR_BG_BREAKWALL,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(BgBreakwall),
    (ActorFunc)BgBreakwall_Init,
    (ActorFunc)BgBreakwall_Destroy,
    (ActorFunc)BgBreakwall_Update,
    NULL,
};

static ColliderQuadInit sQuadInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER | AC_TYPE_OTHER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_QUAD,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000048, 0x00, 0x00 },
        { 0x00000048, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_NONE,
    },
    { { { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } } },
};

static BombableWallInfo sBombableWallInfo[] = {
    { &gDCBombableWallCol, gDCBombableWallDL, gDCTunnel1, 0 },
    { &gDCBombableWallCol, gDCBombableWallDL, gDCTunnel2, 0 },
    { &gDCBombableWallCol, gDCBombableWallDL, gDCTunnel3, 0 },
    { 0x060264A8, 0x06025BD0, NULL, 1 },
    { 0x06025B64, NULL, NULL, -1 },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 400, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 400, ICHAIN_STOP),
};

void BgBreakwall_SetupAction(BgBreakwall* this, BgBreakwallActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void BgBreakwall_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgBreakwall* this = THIS;
    s32 pad;
    s32 wallType = ((this->dyna.actor.params >> 13) & 3) & 0xFF;

    if ((this->dyna.actor.params >> 6) & 1) {
        wallType = BWALL_KD_LAVA_COVER;
    }

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, DPM_UNK);
    this->bombableWallDList = sBombableWallInfo[wallType].dList;
    this->tunnelDList = sBombableWallInfo[wallType].tunnelDList;
    this->colType = sBombableWallInfo[wallType].colType;

    if (wallType <= BWALL_DC_3) {
        Actor_SetScale(&this->dyna.actor, 1.0f);
    }

    if (this->colType == 1) {
        this->dyna.actor.world.rot.x = 0x4000;
    }

    if (this->bombableWallDList != NULL) {
        if (Flags_GetSwitch(globalCtx, this->dyna.actor.params & 0x3F)) {
            if (wallType > BWALL_DC_3) {
                Actor_Kill(&this->dyna.actor);
                return;
            }
        }

        ActorShape_Init(&this->dyna.actor.shape, 0.0f, NULL, 0.0f);
        Collider_InitQuad(globalCtx, &this->collider);
        Collider_SetQuad(globalCtx, &this->collider, &this->dyna.actor, &sQuadInit);
    } else {
        if (wallType != BWALL_KD_LAVA_COVER) {
            this->dyna.actor.world.pos.y -= 40.0f;
        }
    }

    this->bankIndex = (wallType >= BWALL_KD_FLOOR) ? Object_GetIndex(&globalCtx->objectCtx, OBJECT_KINGDODONGO)
                                                   : Object_GetIndex(&globalCtx->objectCtx, OBJECT_DDAN_OBJECTS);

    if (this->bankIndex < 0) {
        Actor_Kill(&this->dyna.actor);
    } else {
        BgBreakwall_SetupAction(this, BgBreakwall_SetupWait);
    }
}

void BgBreakwall_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgBreakwall* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgBreakwall_FloorBreak(BgBreakwall* this, GlobalContext* globalCtx) {
    s32 i;
    s32 j;
    Vec3f velocity;
    Vec3f pos;
    s16 arg5;
    Actor* thisx = &this->dyna.actor;
    f32 sin = Math_SinS(thisx->shape.rot.y);
    f32 cos = Math_CosS(thisx->shape.rot.y);
    f32 tmp1;
    f32 tmp2;
    s16 arg9;

    pos.y = thisx->world.pos.y + 10.0f;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tmp1 = 24 * (i - 2);
            tmp2 = 24 * (j - 2);

            pos.x = (tmp2 * sin) + (tmp1 * cos) + thisx->world.pos.x;
            pos.z = (tmp2 * cos) - (tmp1 * sin) + thisx->world.pos.z;

            tmp1 = 8.0f * Rand_ZeroOne() * (i - 2);
            tmp2 = 8.0f * Rand_ZeroOne() * (j - 2);

            velocity.x = (tmp2 * sin) + (tmp1 * cos);
            velocity.y = 30.0f * Rand_ZeroOne();
            velocity.z = (tmp2 * cos) - (tmp1 * sin);

            arg9 = ((Rand_ZeroOne() - 0.5f) * 11.0f * 1.4f) + 11.0f;

            arg5 = (((i == 0) || (i == 4)) && ((j == 0) || (j == 4))) ? 65 : 64;

            EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &thisx->world.pos, -550, arg5, 15, 15, 0, arg9, 2, 16, 100,
                                 KAKERA_COLOR_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP, gBrownFragmentDL);
        }
    }
}

void BgBreakwall_LargeWallBreak(BgBreakwall* this, GlobalContext* globalCtx) {
    s32 i;
    s32 j;
    Vec3f velocity;
    Vec3f pos;
    s16 arg5;
    Actor* thisx = &this->dyna.actor;
    f32 sin = Math_SinS(thisx->shape.rot.y);
    f32 cos = Math_CosS(thisx->shape.rot.y);
    f32 tmp1;
    f32 tmp2;
    s16 arg9;

    for (i = 0; i < 5; i++) {
        pos.y = (24 * i) + thisx->world.pos.y;
        for (j = 0; j < 5; j++) {
            tmp1 = 28 * (j - 2);

            pos.x = (tmp1 * cos) + thisx->world.pos.x;
            pos.z = -(tmp1 * sin) + thisx->world.pos.z;

            tmp1 = 6.0f * Rand_ZeroOne() * (j - 2);
            tmp2 = 6.0f * Rand_ZeroOne();

            velocity.x = (tmp2 * sin) + (tmp1 * cos);
            velocity.y = 34.0f * Rand_ZeroOne();
            velocity.z = (tmp2 * cos) - (tmp1 * sin);

            arg9 = ((Rand_ZeroOne() - 0.5f) * 14.0f * 1.6f) + 14.0f;
            arg5 = (arg9 > 20) ? 32 : 64;

            if (Rand_ZeroOne() < 5.0f) {
                arg5 |= 1;
            }

            EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &thisx->world.pos, -650, arg5, 20, 20, 0, arg9, 2, 32, 100,
                                 KAKERA_COLOR_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP, gBrownFragmentDL);
        }
    }
}

void BgBreakwall_DoNothing(BgBreakwall* this, GlobalContext* globalCtx) {
}

/**
 * Sets up the collision model as well is the object dependency and action function to use.
 */
void BgBreakwall_SetupWait(BgBreakwall* this, GlobalContext* globalCtx) {
    if (Object_IsLoaded(&globalCtx->objectCtx, this->bankIndex)) {
        CollisionHeader* colHeader = NULL;
        s32 wallType = ((this->dyna.actor.params >> 13) & 3) & 0xFF;

        if ((this->dyna.actor.params >> 6) & 1) {
            wallType = BWALL_KD_LAVA_COVER;
        }

        this->dyna.actor.objBankIndex = this->bankIndex;
        Actor_SetObjectDependency(globalCtx, &this->dyna.actor);
        this->dyna.actor.flags &= ~0x10;
        this->dyna.actor.draw = BgBreakwall_Draw;

        if (wallType != BWALL_KD_LAVA_COVER && Flags_GetSwitch(globalCtx, this->dyna.actor.params & 0x3F)) {
            BgBreakwall_SetupAction(this, BgBreakwall_DoNothing);
        } else {
            CollisionHeader_GetVirtual(sBombableWallInfo[wallType].colHeader, &colHeader);
            this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);

            if (wallType == BWALL_KD_LAVA_COVER) {
                BgBreakwall_SetupAction(this, BgBreakwall_LavaCoverMove);
            } else {
                BgBreakwall_SetupAction(this, BgBreakwall_Wait);
            }
        }
    }
}

/**
 * Checks for an explosion using quad collision. If the wall or floor is exploded then it will spawn fragments and
 * despawn itself.
 */
void BgBreakwall_Wait(BgBreakwall* this, GlobalContext* globalCtx) {
    if (this->collider.base.acFlags & 2) {
        Vec3f effectPos;
        s32 wallType = ((this->dyna.actor.params >> 13) & 3) & 0xFF;

        if ((this->dyna.actor.params >> 6) & 1) {
            wallType = BWALL_KD_LAVA_COVER;
        }

        DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        effectPos.y = effectPos.z = effectPos.x = 0.0f;

        if (this->dyna.actor.world.rot.x == 0) {
            effectPos.y = 55.0f;
        } else {
            effectPos.z = 25.0f;
            effectPos.y = -10.0f;
        }

        if (wallType >= BWALL_DC_1 && wallType <= BWALL_DC_3) {
            BgBreakwall_FloorBreak(this, globalCtx);
        } else if (wallType == BWALL_KD_FLOOR) {
            BgBreakwall_LargeWallBreak(this, globalCtx);
        }

        Flags_SetSwitch(globalCtx, this->dyna.actor.params & 0x3F);

        if (wallType == BWALL_KD_FLOOR) {
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_EXPLOSION);
        } else {
            Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_WALL_BROKEN);
        }

        if (this->dyna.actor.params < 0) {
            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }

        if (wallType <= BWALL_DC_3) {
            this->actionFunc = BgBreakwall_DoNothing;
        } else {
            Actor_Kill(&this->dyna.actor);
        }
    }
}

/**
 * Moves the actor's y position to cover the lava floor in King Dodongo's lair after he is defeated so the player is no
 * longer hurt by the lava.
 */
void BgBreakwall_LavaCoverMove(BgBreakwall* this, GlobalContext* globalCtx) {
    Math_StepToF(&this->dyna.actor.world.pos.y, KREG(80) + this->dyna.actor.home.pos.y, 1.0f);
}

void BgBreakwall_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgBreakwall* this = THIS;

    this->actionFunc(this, globalCtx);
}

void BgBreakwall_DrawTunnels(BgBreakwall* this, GlobalContext* globalCtx) {
    if (this->tunnelDList != NULL) {
        OPEN_DISPS(globalCtx->state.gfxCtx);

        func_80093D18(globalCtx->state.gfxCtx);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, __FILE__, __LINE__),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, this->tunnelDList);

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
}

/**
 * These are the quads used for the wall and floor collision. These are used for the detecting when a bomb explosion has
 * collided with a wall, and can be adjusted for different wall or floor sizes.
 */
static Vec3f sColQuadList[][4] = {
    { { 80.0f, 160.0f, 10.0f }, { -80.0f, 160.0f, 10.0f }, { 80.0f, 0.0f, 10.0f }, { -80.0f, 0.0f, 10.0f } },
    { { 10.0f, 0.0f, 10.0f }, { -10.0f, 0.0f, 10.0f }, { 10.0f, 0.0f, -10.0f }, { -10.0f, 0.0f, -10.0f } },
};

void BgBreakwall_Draw(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    BgBreakwall* this = THIS;

    if (this->actionFunc == BgBreakwall_DoNothing) {
        BgBreakwall_DrawTunnels(this, globalCtx);
    } else if (this->bombableWallDList != NULL) {
        OPEN_DISPS(globalCtx->state.gfxCtx);

        func_80093D18(globalCtx->state.gfxCtx);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_bg_breakwall.c", 771),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, this->bombableWallDList);

        if (this->colType >= 0) {
            Vec3f colQuad[4];
            Vec3f* src = &sColQuadList[this->colType][0];
            Vec3f* dst = &colQuad[0];
            s32 i;

            for (i = 0; i < 4; i++) {
                Matrix_MultVec3f(src++, dst++);
            }

            Collider_SetQuadVertices(&this->collider, &colQuad[0], &colQuad[1], &colQuad[2], &colQuad[3]);
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
}
