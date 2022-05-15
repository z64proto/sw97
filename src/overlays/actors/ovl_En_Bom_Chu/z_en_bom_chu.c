/*
 * File: z_en_bom_chu.c
 * Overlay: ovl_En_Bom_Chu
 * Description: Bomb
 */

#include "z_en_bom_chu.h"
#include "overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.h"
#include "objects/gameplay_keep/gameplay_keep.h"

#define FLAGS 0x00000030

#define THIS ((EnBomChu*)thisx)

void EnBomChu_Init(Actor* thisx, GlobalContext* globalCtx);
void EnBomChu_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnBomChu_Update(Actor* thisx, GlobalContext* globalCtx);
void EnBomChu_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnBomChu_Move(EnBomChu* this, GlobalContext* globalCtx);
void EnBomChu_WaitForRelease(EnBomChu* this, GlobalContext* globalCtx);

const ActorInit En_Bom_Chu_InitVars = {
    ACTOR_EN_BOM_CHU,
    ACTORCAT_EXPLOSIVE,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnBomChu),
    (ActorFunc)EnBomChu_Init,
    (ActorFunc)EnBomChu_Destroy,
    (ActorFunc)EnBomChu_Update,
    (ActorFunc)EnBomChu_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_1 | OC1_TYPE_2,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_ON,
    },
    { 10, 15, 18, { 0, 0, 0 } },
};

static ColliderJntSphElementInit sJntSphElementsInit[1] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0x00000008, 0x00, 0x08 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NONE,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { 0, { { 0, 0, 0 }, 0 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COLTYPE_HIT0,
        AT_ON | AT_TYPE_ALL,
        AC_NONE,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_JNTSPH,
    },
    1,
    sJntSphElementsInit,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F(scale, 0, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, -4000, ICHAIN_STOP),
};

void EnBomChu_SetupAction(EnBomChu* this, EnBomChuActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

#define LANDMINE_TIMER 500

void EnBomChu_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnBomChu* this = THIS;

    Actor_ProcessInitChain(thisx, sInitChain);
    ActorShape_Init(&thisx->shape, 700.0f, ActorShadow_DrawCircle, 16.0f);
    thisx->colChkInfo.mass = 200;
    thisx->colChkInfo.cylRadius = 5;
    thisx->colChkInfo.cylHeight = 10;
    this->timer = LANDMINE_TIMER;
    this->flashSpeedScale = 7;
    Collider_InitCylinder(globalCtx, &this->bombCollider);
    Collider_InitJntSph(globalCtx, &this->explosionCollider);
    Collider_SetCylinder(globalCtx, &this->bombCollider, thisx, &sCylinderInit);
    Collider_SetJntSph(globalCtx, &this->explosionCollider, thisx, &sJntSphInit, &this->explosionColliderItems[0]);
    this->explosionColliderItems[0].info.toucher.damage += (thisx->shape.rot.z & 0xFF00) >> 8;

    thisx->shape.rot.z &= 0xFF;
    if (thisx->shape.rot.z & 0x80) {
        thisx->shape.rot.z |= 0xFF00;
    }

    EnBomChu_SetupAction(this, EnBomChu_Move);
}

void EnBomChu_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnBomChu* this = THIS;

    Collider_DestroyJntSph(globalCtx, &this->explosionCollider);
    Collider_DestroyCylinder(globalCtx, &this->bombCollider);
}

void EnBomChu_Move(EnBomChu* this, GlobalContext* globalCtx) {
    // if bomb has a parent actor, the bomb hasnt been released yet
    if (Actor_HasParent(&this->actor, globalCtx)) {
        EnBomChu_SetupAction(this, EnBomChu_WaitForRelease);
        this->actor.room = -1;
        return;
    }

    if ((this->actor.velocity.y > 0.0f) && (this->actor.bgCheckFlags & 0x10)) {
        this->actor.velocity.y = -this->actor.velocity.y;
    }

    // rebound bomb off the wall it hits
    if ((this->actor.speedXZ != 0.0f) && (this->actor.bgCheckFlags & 8)) {
        if (ABS((s16)(this->actor.wallYaw - this->actor.world.rot.y)) > 0x4000) {
            this->actor.world.rot.y = ((this->actor.wallYaw - this->actor.world.rot.y) + this->actor.wallYaw) - 0x8000;
        }
        // Audio_PlayActorSound2(&this->actor, NA_SE_EV_BOMB_BOUND);
        Actor_MoveForwardXZ(&this->actor);
        this->actor.speedXZ *= 0.7f;
        this->actor.bgCheckFlags &= ~8;
        this->timer = 1;
    }

    if (!(this->actor.bgCheckFlags & 1)) {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.08f);
    } else {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f);
        if ((this->actor.bgCheckFlags & 2) && (this->actor.velocity.y < -3.0f)) {
            func_8002F850(globalCtx, &this->actor);
            this->actor.velocity.y *= -0.3f;
            this->actor.bgCheckFlags &= ~2;
        } else if (this->timer >= 4) {
            func_8002F580(&this->actor, globalCtx);
        }
    }

    Actor_MoveForwardXZ(&this->actor);
}

void EnBomChu_WaitForRelease(EnBomChu* this, GlobalContext* globalCtx) {
    // if parent is NULL bomb has been released
    if (Actor_HasNoParent(&this->actor, globalCtx)) {
        EnBomChu_SetupAction(this, EnBomChu_Move);
        EnBomChu_Move(this, globalCtx);
    }
}

void EnBomChu_Explode(EnBomChu* this, GlobalContext* globalCtx) {
    Player* player;

    if (this->explosionCollider.elements[0].dim.modelSphere.radius == 0) {
        this->actor.flags |= 0x20;
        func_800AA000(this->actor.xzDistToPlayer, 0xFF, 0x14, 0x96);
    }

    this->explosionCollider.elements[0].dim.worldSphere.radius += this->actor.shape.rot.z + 10;

    if (this->actor.params == BOMB_EXPLOSION) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->explosionCollider.base);
    }

    if (globalCtx->envCtx.unk_8C[1][0] != 0) {
        globalCtx->envCtx.unk_8C[1][0] -= 0x19;
    }

    if (globalCtx->envCtx.unk_8C[1][1] != 0) {
        globalCtx->envCtx.unk_8C[1][1] -= 0x19;
    }

    if (globalCtx->envCtx.unk_8C[1][2] != 0) {
        globalCtx->envCtx.unk_8C[1][2] -= 0x19;
    }

    if (globalCtx->envCtx.unk_8C[0][0] != 0) {
        globalCtx->envCtx.unk_8C[0][0] -= 0x19;
    }

    if (globalCtx->envCtx.unk_8C[0][1] != 0) {
        globalCtx->envCtx.unk_8C[0][1] -= 0x19;
    }

    if (globalCtx->envCtx.unk_8C[0][2] != 0) {
        globalCtx->envCtx.unk_8C[0][2] -= 0x19;
    }

    if (this->timer == 0) {
        player = PLAYER;

        if ((player->stateFlags1 & 0x800) && (player->heldActor == &this->actor)) {
            player->actor.child = NULL;
            player->heldActor = NULL;
            player->interactRangeActor = NULL;
            player->stateFlags1 &= ~0x800;
        }

        Actor_Kill(&this->actor);
    }
}

void EnBomChu_Update(Actor* thisx, GlobalContext* globalCtx) {
    Vec3f effVelocity = { 0.0f, 0.0f, 0.0f };
    Vec3f bomb2Accel = { 0.0f, 0.1f, 0.0f };
    Vec3f effAccel = { 0.0f, 0.0f, 0.0f };
    Vec3f effPos;
    Color_RGBA8 dustColor = { 255, 255, 255, 255 };
    s32 pad[2];
    EnBomChu* this = THIS;

    thisx->gravity = -1.2f;

    if (this->timer != 0) {
        this->timer--;
    }

    if (this->timer == LANDMINE_TIMER - 3) {
        Audio_PlayActorSound2(thisx, NA_SE_PL_TAKE_OUT_SHIELD);
        Actor_SetScale(thisx, 0.01f);
    }

    if ((thisx->xzDistToPlayer >= 20.0f) || (ABS(thisx->yDistToPlayer) >= 80.0f)) {
        this->bumpOn = true;
    }

    this->actionFunc(this, globalCtx);

    Actor_UpdateBgCheckInfo(globalCtx, thisx, 5.0f, 10.0f, 15.0f, 0x1F);

    if (thisx->params == BOMB_BODY) {
        /*if (this->timer < LANDMINE_TIMER-7) {
            dustAccel.y = 0.2f;

            // spawn spark effect on even frames
            effPos = thisx->world.pos;
            effPos.y += 17.0f;
            if ((globalCtx->gameplayFrames % 2) == 0) {
                EffectSsGSpk_SpawnFuse(globalCtx, thisx, &effPos, &effVelocity, &effAccel);
            }

            Audio_PlayActorSound2(thisx, NA_SE_IT_BOMB_IGNIT - SFX_FLAG);

            effPos.y += 3.0f;
            func_8002829C(globalCtx, &effPos, &effVelocity, &dustAccel, &dustColor, &dustColor, 50, 5);
        }*/

        if ((this->bombCollider.base.acFlags & AC_HIT) || ((this->bombCollider.base.ocFlags1 & OC1_HIT) &&
                                                           (this->bombCollider.base.oc->category == ACTORCAT_ENEMY))) {
            this->timer = 0;
            thisx->shape.rot.z = 0;
        } else {
            // if a lit stick touches the bomb, set timer to 100
            // these bombs never have a timer over 70, so this isnt used
            if ((this->timer > 100) && Player_IsBurningStickInRange(globalCtx, &thisx->world.pos, 30.0f, 50.0f)) {
                this->timer = 100;
            }
        }

        effPos = thisx->world.pos;
        effPos.y += 10.0f;

        // double bomb flash speed and adjust red color at certain times during the countdown
        if ((this->timer == 3) || (this->timer == 20) || (this->timer == 40)) {
            thisx->shape.rot.z = 0;
            this->flashSpeedScale >>= 1;
        }

        if ((this->timer < 100) && ((this->timer & (this->flashSpeedScale + 1)) != 0)) {
            Math_SmoothStepToF(&this->flashIntensity, 140.0f, 1.0f, 140.0f / this->flashSpeedScale, 0.0f);
        } else {
            Math_SmoothStepToF(&this->flashIntensity, 0.0f, 1.0f, 140.0f / this->flashSpeedScale, 0.0f);
        }

        if (this->timer < 3) {
            Actor_SetScale(thisx, thisx->scale.x + 0.002f);
        }

        if ((this->timer == 0) || (this->bombCollider.base.acFlags & AC_HIT) ||
            ((this->bombCollider.base.ocFlags1 & OC1_HIT) &&
             (this->bombCollider.base.oc->category != ACTORCAT_PLAYER))) {
            effPos = thisx->world.pos;

            effPos.y += 10.0f;
            if (Actor_HasParent(thisx, globalCtx)) {
                effPos.y += 30.0f;
            }

            EffectSsBomb2_SpawnLayered(globalCtx, &effPos, &effVelocity, &bomb2Accel, 100,
                                       (thisx->shape.rot.z * 6) + 19);

            effPos.y = thisx->floorHeight;
            if (thisx->floorHeight > BGCHECK_Y_MIN) {
                EffectSsBlast_SpawnWhiteShockwave(globalCtx, &effPos, &effVelocity, &effAccel);
            }

            Audio_PlayActorSound2(thisx, NA_SE_IT_BOMB_EXPLOSION);
            ;
            globalCtx->envCtx.unk_8C[1][0] = globalCtx->envCtx.unk_8C[1][1] = globalCtx->envCtx.unk_8C[1][2] = 0xFA;
            globalCtx->envCtx.unk_8C[0][0] = globalCtx->envCtx.unk_8C[0][1] = globalCtx->envCtx.unk_8C[0][2] = 0xFA;
            Camera_AddQuake(&globalCtx->mainCamera, 2, 0xB, 8);
            thisx->params = BOMB_EXPLOSION;
            this->timer = 10;
            thisx->flags |= 0x20;
            EnBomChu_SetupAction(this, EnBomChu_Explode);
        }
    }

    Actor_SetFocus(thisx, 20.0f);

    if (thisx->params <= BOMB_BODY) {
        Collider_UpdateCylinder(thisx, &this->bombCollider);

        // if link is not holding the bomb anymore and bump conditions are met, subscribe to OC
        if (!Actor_HasParent(thisx, globalCtx) && this->bumpOn) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->bombCollider.base);
        }

        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->bombCollider.base);
    }

    if ((thisx->scale.x >= 0.01f) && (thisx->params != BOMB_EXPLOSION)) {
        if (thisx->yDistToWater >= 20.0f) {
            EffectSsDeadSound_SpawnStationary(globalCtx, &thisx->projectedPos, NA_SE_IT_BOMB_UNEXPLOSION, true,
                                              DEADSOUND_REPEAT_MODE_OFF, 10);
            Actor_Kill(thisx);
            return;
        }
        if (thisx->bgCheckFlags & 0x40) {
            thisx->bgCheckFlags &= ~0x40;
            Audio_PlayActorSound2(thisx, NA_SE_EV_BOMB_DROP_WATER);
        }
    }
}

void EnBomChu_Draw(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnBomChu* this = THIS;
    Vec3s camDir;

    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;

    if (thisx->params == BOMB_BODY) {

        Camera_GetCamDir(&camDir, ACTIVE_CAM);

        OPEN_DISPS(globalCtx->state.gfxCtx);

        Matrix_Push();
        Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, MTXMODE_NEW);
        Matrix_RotateY(camDir.y * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateX(thisx->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_Scale(thisx->scale.x * 95, thisx->scale.y * 95, thisx->scale.z * 95, MTXMODE_APPLY);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(gfxCtx, "../z_en_dog.c", UNK_LINE),
                  G_MTX_MODELVIEW | G_MTX_NOPUSH | G_MTX_LOAD);

        gSPDisplayList(POLY_OPA_DISP++, gLandMineSphereDL);
        Matrix_Pop();

        CLOSE_DISPS(globalCtx->state.gfxCtx);

        OPEN_DISPS(globalCtx->state.gfxCtx);

        Matrix_Push();
        Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y + 5, this->actor.world.pos.z, MTXMODE_NEW);
        Matrix_RotateY(camDir.y * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateX(-camDir.x * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_Translate(0, -5, 0, MTXMODE_APPLY);
        Matrix_Scale(thisx->scale.x * 105, thisx->scale.y * 105, thisx->scale.z * 105, MTXMODE_APPLY);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(gfxCtx, "../z_en_dog.c", UNK_LINE),
                  G_MTX_MODELVIEW | G_MTX_NOPUSH | G_MTX_LOAD);

        gSPDisplayList(POLY_OPA_DISP++, gLandMinePlaneDL);
        Matrix_Pop();

        CLOSE_DISPS(globalCtx->state.gfxCtx);

        OPEN_DISPS(globalCtx->state.gfxCtx);

        Matrix_Push();
        Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, MTXMODE_NEW);
        Matrix_RotateY(thisx->shape.rot.y * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateX(thisx->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_Scale(thisx->scale.x * 1.05, thisx->scale.y * 1.05, thisx->scale.z * 1.05, MTXMODE_APPLY);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(gfxCtx, "../z_en_dog.c", UNK_LINE),
                  G_MTX_MODELVIEW | G_MTX_NOPUSH | G_MTX_LOAD);

        gSPDisplayList(POLY_OPA_DISP++, gLandMineSphere004DL);
        Matrix_Pop();

        CLOSE_DISPS(globalCtx->state.gfxCtx);

        Collider_UpdateSpheres(0, &this->explosionCollider);
    }
}
