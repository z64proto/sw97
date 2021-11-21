/*
 * File: field_keep_actors.c
 * Overlay: field_keep_actors
 * Description: Various actors used outside
 * This actor was orignally called En_F_Obj
 */

#include "field_keep_actors.h"
#include "objects/gameplay_keep/gameplay_keep.h"
#include "alloca.h"

#define FLAGS 0x00000000

#define THIS ((FieldKeep*)thisx)

void FieldKeep_Init(Actor* thisx, GlobalContext* globalCtx);
void FieldKeep_Destroy(Actor* thisx, GlobalContext* globalCtx);
void FieldKeep_Update(Actor* thisx, GlobalContext* globalCtx);
void FieldKeep_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Field_Keep_InitVars = {
    ACTOR_FIELD_KEEP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(FieldKeep),
    (ActorFunc)FieldKeep_Init,
    (ActorFunc)FieldKeep_Destroy,
    (ActorFunc)FieldKeep_Update,
    (ActorFunc)FieldKeep_Draw,
};

#include "field_keep_actors_gfx.c"
#include "gTunnelWoodCol.c"
#include "gSacredColumnsCol.c"
#include "gPyramidCol.c"
#include "wooden_signpost_sm64.c"

s32 FieldKeep_HasCollider(s16 params) {
    params &= 0x00FF;

    if (params == 0x0017 || params == 0x0006 || params == 0x0015 || params == 0x001A || params == 0x001F ||
        params == 0x0018 || params == 0x0020 || params == 0x0023 || params == 0x0005 || params == 0x0008 ||
        params == 0x0009) {
        return true;
    } else {
        return false;
    }
}

void FieldKeep_Init(Actor* thisx, GlobalContext* globalCtx) {
    FieldKeep* this = THIS;
    CollisionHeader* colHeader;

    this->dyna.actor.uncullZoneForward = 3000.0f;
    this->dyna.actor.uncullZoneScale = 1000.0f;
    this->dyna.actor.uncullZoneDownward = 1400.0f;

    switch (thisx->params & 0x00FF) {
        case 0x00:
        case 0x01:
        case 0x02:
            // Potion
            Actor_SetScale(thisx, 0.35f);
            thisx->world.pos.y += 10.0f;
            break;
        case 0x08:
        case 0x09: {
            // Mario sign stand in
            static ColliderCylinderInit marioSignCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 30, 44, 0, { 0, 0, 0 } }, // radius, height
            };
            Actor_SetScale(thisx, 0.10f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &marioSignCylinderInit);
        } break;
        case 0x1B:
            // Log tunnel
            DynaPolyActor_Init(&this->dyna, DPM_PLAYER);
            CollisionHeader_GetVirtual(&gTunnelWoodCol_collisionHeader, &colHeader);
            this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
            Actor_SetScale(thisx, 1.0f);
            break;
        case 0x1A: {
            // Huge tree without top
            static ColliderCylinderInit hugeTreeCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 100, 60, 0, { 0, 0, 0 } }, // radius, height
            };
            thisx->shape.yOffset = -28.0f;
            Actor_SetScale(thisx, 0.75f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &hugeTreeCylinderInit);
        } break;
        case 0x23: {
            // Beta tree stump
            static ColliderCylinderInit treeStumpCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 100, 60, 0, { 0, 0, 0 } },
            };
            thisx->shape.yOffset = -25.0f;
            Actor_SetScale(thisx, 1.0f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &treeStumpCylinderInit);
        } break;
        case 0x05: {
            // Stree bush
            static ColliderCylinderInit streeCylinderInit = {
                {
                    COLTYPE_NONE,
                    AT_NONE,
                    AC_ON | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_PLAYER | OC1_TYPE_2,
                    OC2_TYPE_2,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK0,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x4FC00758, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 30, 44, 0, { 0, 0, 0 } },
            };

            this->cut = false;

            Actor_SetScale(thisx, 0.025f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &streeCylinderInit);
        } break;
        case 0x06: {
            // Maruta Wooden Post
            static ColliderCylinderInit woodenPostCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 18, 50, 0, { 0, 0, 0 } },
            };

            Actor_SetScale(thisx, 0.004f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &woodenPostCylinderInit);
        } break;
        case 0x15: {
            // Porcino / Kakariko beta tree
            static ColliderCylinderInit kakarikoTreeCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 50, 60, 0, { 0, 0, 0 } },
            };

            thisx->shape.yOffset = -20.0f;
            Actor_SetScale(thisx, 0.3f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &kakarikoTreeCylinderInit);
        } break;
        case 0x22:
            // Bush01
            Actor_SetScale(thisx, 1.0f);
            break;
            // Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_KUSA, thisx->world.pos.x, thisx->world.pos.y,
            //             thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0);
            // Actor_Kill(thisx);
            // return;
        case 0x17: {
            // Hyrule Field Tree
            static ColliderCylinderInit treeCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 28, 60, 0, { 0, 0, 0 } },
            };

            Actor_SetScale(thisx, 1.25f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &treeCylinderInit);
        } break;
        case 0x18: {
            // Porcino / Kakariko beta tree large
            static ColliderCylinderInit largeKakarikoTreeCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 70, 60, 0, { 0, 0, 0 } },
            };

            thisx->shape.yOffset = -20.0f;
            Actor_SetScale(thisx, 0.4f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &largeKakarikoTreeCylinderInit);
        } break;
        case 0x19:
            // Bush03
            // Actor_SetScale(thisx, 0.1f);
            // break;
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_BOMBIWA, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 8);
            Actor_Kill(thisx);
            return;
        case 0x16:
            // Forest Temple fern
            Actor_SetScale(thisx, 1.0f);
            break;
        case 0x0C:
            // Sacred Forest Meadow - Forest Temple Columns
            DynaPolyActor_Init(&this->dyna, DPM_PLAYER);
            CollisionHeader_GetVirtual(&gSacredColumnsCol_collisionHeader, &colHeader);
            this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
            thisx->shape.yOffset = -25.0f;
            Actor_SetScale(thisx, 1.0f);
            break;
        case 0x1E:
            // Unused Gameplay Keep Pyramid
            DynaPolyActor_Init(&this->dyna, DPM_PLAYER);
            CollisionHeader_GetVirtual(&gPyramidCol_collisionHeader, &colHeader);
            this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
            thisx->shape.yOffset = -400.0f;
            Actor_SetScale(thisx, 0.1f);
            break;
        case 0x1F: {
            // Water Temple Tree
            static ColliderCylinderInit watertempletreeCylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 35, 60, 0, { 0, 0, 0 } },
            };

            Actor_SetScale(thisx, 1.6f); // Water Temple Tree 1.0f
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &watertempletreeCylinderInit);
        } break;
        case 0x20: {
            // Wood02 Tree 03
            static ColliderCylinderInit tree03CylinderInit = {
                {
                    COLTYPE_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEMTYPE_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    TOUCH_NONE,
                    BUMP_ON,
                    OCELEM_ON,
                },
                { 28, 60, 0, { 0, 0, 0 } },
            };

            Actor_SetScale(thisx, 1.25f);
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &tree03CylinderInit);
        } break;
        default:
            Actor_SetScale(thisx, 0.75f);
            break;
    }
}

void FieldKeep_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    FieldKeep* this = THIS;

    if (thisx->params == 0x001B || thisx->params == 0x001E || thisx->params == 0x000C) {
        DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }

    if (FieldKeep_HasCollider(thisx->params)) {
        Collider_DestroyCylinder(globalCtx, &this->collider);
    }
}

static Vec3f D_80A9C23C_FKeep[] = {
    { 0.0f, 0.7071f, 0.7071f },
    { 0.7071f, 0.7071f, 0.0f },
    { 0.0f, 0.7071f, -0.7071f },
    { -0.7071f, 0.7071f, 0.0f },
};

static s16 D_80A9C26C_FKeep[] = { 108, 102, 96, 84, 66, 55, 42, 38 };

void FieldKeep_EnKusa_SpawnFragments(FieldKeep* this, GlobalContext* globalCtx) {
    Vec3f velocity;
    Vec3f pos;
    s32 i;
    s32 index;
    Vec3f* scale;
    s32 pad;

    for (i = 0; i < ARRAY_COUNT(D_80A9C23C_FKeep); i++) {
        scale = &D_80A9C23C_FKeep[i];

        pos.x = this->dyna.actor.world.pos.x + (scale->x * this->dyna.actor.scale.x * 20.0f);
        pos.y = this->dyna.actor.world.pos.y + (scale->y * this->dyna.actor.scale.y * 20.0f) + 10.0f;
        pos.z = this->dyna.actor.world.pos.z + (scale->z * this->dyna.actor.scale.z * 20.0f);

        velocity.x = (Rand_ZeroOne() - 0.5f) * 8.0f;
        velocity.y = Rand_ZeroOne() * 10.0f;
        velocity.z = (Rand_ZeroOne() - 0.5f) * 8.0f;

        index = (s32)(Rand_ZeroOne() * 111.1f) & 7;

        EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &pos, -100, 64, 40, 3, 0, D_80A9C26C_FKeep[index], 0, 0, 80,
                             -1, OBJECT_GAMEPLAY_KEEP, gStreeFragment);

        pos.x = this->dyna.actor.world.pos.x + (scale->x * this->dyna.actor.scale.x * 40.0f);
        pos.y = this->dyna.actor.world.pos.y + (scale->y * this->dyna.actor.scale.y * 40.0f) + 10.0f;
        pos.z = this->dyna.actor.world.pos.z + (scale->z * this->dyna.actor.scale.z * 40.0f);

        velocity.x = (Rand_ZeroOne() - 0.5f) * 6.0f;
        velocity.y = Rand_ZeroOne() * 10.0f;
        velocity.z = (Rand_ZeroOne() - 0.5f) * 6.0f;

        index = (s32)(Rand_ZeroOne() * 111.1f) % 7;

        EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &pos, -100, 64, 40, 3, 0, D_80A9C26C_FKeep[index], 0, 0, 80,
                             -1, OBJECT_GAMEPLAY_KEEP, gStreeFragment2);
    }
}

void FieldKeep_Update(Actor* thisx, GlobalContext* globalCtx) {
    FieldKeep* this = THIS;

    if (thisx->textId == 0x0203) {
        Actor_RequestToTalkInRange(&this->dyna.actor, globalCtx, 75.0f);
        thisx->flags |= 1;
        Actor_SetFocus(&this->dyna.actor, 20.0f);
    }

    if (thisx->params == 0x05 && !this->cut && this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        FieldKeep_EnKusa_SpawnFragments(this, globalCtx);
        Item_DropCollectibleRandom(globalCtx, NULL, &this->dyna.actor.world.pos, 0);
        Audio_PlaySoundAtPosition(globalCtx, &this->dyna.actor.world.pos, 20, NA_SE_EV_PLANT_BROKEN);

        this->cut = true;
        this->collider.dim.radius = 10;
    }

    if (FieldKeep_HasCollider(thisx->params) && (thisx->xzDistToPlayer < 600.0f)) {
        Collider_UpdateCylinder(thisx, &this->collider);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
}

void FieldKeep_Cube_Draw(Actor* thisx, GlobalContext* globalCtx, u8 red, u8 green, u8 blue) {
    FieldKeep* this = THIS;
    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    Matrix_Push();
    Matrix_Translate(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y + 10.0f, this->dyna.actor.world.pos.z,
                     MTXMODE_NEW);
    Matrix_RotateY(thisx->shape.rot.y * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateX(thisx->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_Scale(0.01f, 0.01f, 0.01f, MTXMODE_APPLY);
    Gfx_CallSetupDL(gfxCtx->polyOpa.p++, 37);
    gSPMatrix(gfxCtx->polyOpa.p++, Matrix_NewMtx(gfxCtx, "../z_en_dog.c", UNK_LINE),
              G_MTX_MODELVIEW | G_MTX_NOPUSH | G_MTX_LOAD);

    // Coloured cube
    gDPSetPrimColor(gfxCtx->polyOpa.p++, 0, 0, red, green, blue, 255);

    gSPDisplayList(gfxCtx->polyOpa.p++, cubeDList);
    Matrix_Pop();

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

static Gfx* sDrawPotionTable[3][6] = {
    {
        sFieldKeepPotionPotDL,
        sFieldKeepGreenPotColorDL,
        sFieldKeepGreenLiquidColorDL,
        sFieldKeepPotionLiquidDL,
        sFieldKeepGreenPatternColorDL,
        sFieldKeepPotionPatternDL,
    },
    {
        sFieldKeepPotionPotDL,
        sFieldKeepRedPotColorDL,
        sFieldKeepRedLiquidColorDL,
        sFieldKeepPotionLiquidDL,
        sFieldKeepRedPatternColorDL,
        sFieldKeepPotionPatternDL,
    },
    {
        sFieldKeepPotionPotDL,
        sFieldKeepBluePotColorDL,
        sFieldKeepBlueLiquidColorDL,
        sFieldKeepPotionLiquidDL,
        sFieldKeepBluePatternColorDL,
        sFieldKeepPotionPatternDL,
    },
};

void FieldKeep_DrawPotion(GlobalContext* globalCtx, s16 drawId) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, -1 * (globalCtx->state.frames * 1),
                                1 * (globalCtx->state.frames * 1), 32, 32, 1, -1 * (globalCtx->state.frames * 1),
                                1 * (globalCtx->state.frames * 1), 32, 32));
    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_draw.c", 845),
              G_MTX_MODELVIEW | G_MTX_LOAD);
    gSPDisplayList(POLY_OPA_DISP++, sDrawPotionTable[drawId][1]);
    gSPDisplayList(POLY_OPA_DISP++, sDrawPotionTable[drawId][0]);
    gSPDisplayList(POLY_OPA_DISP++, sDrawPotionTable[drawId][2]);
    gSPDisplayList(POLY_OPA_DISP++, sDrawPotionTable[drawId][3]);

    func_80093D84(globalCtx->state.gfxCtx);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_draw.c", 855),
              G_MTX_MODELVIEW | G_MTX_LOAD);
    gSPDisplayList(POLY_XLU_DISP++, sDrawPotionTable[drawId][4]);
    gSPDisplayList(POLY_XLU_DISP++, sDrawPotionTable[drawId][5]);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void FieldKeep_Draw(Actor* thisx, GlobalContext* globalCtx) {
    FieldKeep* this = THIS;

    // if (thisx->params == 0x1B) {
    //     BgCheck_DrawBgActor(globalCtx, &globalCtx->colCtx, this->dyna.bgId);
    // }

    switch (thisx->params & 0x00FF) {
        case 0x00:
        case 0x01:
        case 0x02:
            // Potion
            FieldKeep_DrawPotion(globalCtx, thisx->params & 0x00FF);
            break;
        case 0x1B:
            // Log tunnel
            Gfx_DrawDListOpa(globalCtx, sBetaLogTunnelDList);
            break;
        case 0x1A:
            // Huge tree without top
            Gfx_DrawDListOpa(globalCtx, sBetaTallTreeDList);
            break;
        case 0x23:
            // Beta tree stump
            Gfx_DrawDListOpa(globalCtx, sBetaStumpDList);
            break;
        case 0x05:
            // Stree bush
            if (this->cut) {
                Gfx_DrawDListOpa(globalCtx, treeato_model);
            } else {
                Gfx_DrawDListOpa(globalCtx, smalltree2_model);
            }
            break;
        case 0x06:
            // Maruta wooden post
            Gfx_DrawDListOpa(globalCtx, gMarutaDL);
            break;
        case 0x08:
        case 0x09:
            // Mario sign stand in
            Gfx_DrawDListOpa(globalCtx, wooden_signpost_sm64);
            break;
        case 0x15:
            // Porcino / Kakariko beta tree
            Gfx_DrawDListOpa(globalCtx, gBetaTree01);
            break;
        case 0x22:
            // Bush01
            Gfx_DrawDListXlu(globalCtx, gBush01DL);
            break;
        case 0x17:
            // Hyrule Field tree
            Gfx_DrawDListXlu(globalCtx, gPineGreenDL);
            Gfx_DrawDListOpa(globalCtx, gPineLogDL);
            break;
        case 0x18:
            // Porcino / Kakariko beta tree large
            Gfx_DrawDListOpa(globalCtx, gBetaTree01);
            break;
        // case 0x19:
        // Bush03
        // Gfx_DrawDListOpa(globalCtx, object_bombiwa_DL_0009E0);
        // break;
        case 0x16:
            // Forest Temple fern
            Gfx_DrawDListOpa(globalCtx, gFernDL);
            break;
        case 0x0C:
            // Sacred Forest Meadow - Forest Temple Columns
            Gfx_DrawDListOpa(globalCtx, gSacredColumns);
            break;
        case 0x1E:
            // Unused Gameplay Keep Pyramid
            Gfx_DrawDListOpa(globalCtx, gLiftableRockDL);
            break;
        case 0x1F:
            // Alpha Tree
            // Gfx_DrawDListOpa(globalCtx, gAlphaTreeGreenDL);
            // Gfx_DrawDListOpa(globalCtx, gAlphaTreeLogDL);
            // break;
            Gfx_DrawDListOpa(globalCtx, gIllusionTree);
            break;
        case 0x20:
            // Wood_02 tree03
            Gfx_DrawDListXlu(globalCtx, gTree03GreenDL);
            Gfx_DrawDListOpa(globalCtx, gTree03PostDL);
            break;
        default:
            // Blue cube
            thisx->textId = 0x0203;
            FieldKeep_Cube_Draw(thisx, globalCtx, 0, 0, 255);
            break;
    }
}
