/*
 * File: z_en_bdfire.c
 * Overlay: ovl_En_Bdfire
 * Description: King Dodongo's Fire Breath
 */

#include "z_en_bdfire.h"

#define FLAGS 0x00000030

#define THIS ((EnBdfire*)thisx)

void EnBdfire_Init(Actor* thisx, GlobalContext* globalCtx);
void EnBdfire_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnBdfire_Update(Actor* thisx, GlobalContext* globalCtx);
void EnBdfire_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnBdfire_DrawFire(EnBdfire* this, GlobalContext* globalCtx);
void func_809BC2A4(EnBdfire* this, GlobalContext* globalCtx);
void func_809BC598(EnBdfire* this, GlobalContext* globalCtx);

extern Gfx* D_0601D950[];

const ActorInit En_Bdfire_InitVars = {
    0,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_KINGDODONGO,
    sizeof(EnBdfire),
    (ActorFunc)EnBdfire_Init,
    (ActorFunc)EnBdfire_Destroy,
    (ActorFunc)EnBdfire_Update,
    (ActorFunc)EnBdfire_Draw,
};

void EnBdfire_SetupAction(EnBdfire* this, EnBdfireActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void EnbdFire_SetupDraw(EnBdfire* this, EnBdfireDrawFunc drawFunc) {
    this->drawFunc = drawFunc;
}

void EnBdfire_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnBdfire* this = THIS;

    Actor_SetScale(&this->actor, 0.6f);
    EnbdFire_SetupDraw(this, EnBdfire_DrawFire);
    if (this->actor.params < 0) {
        EnBdfire_SetupAction(this, func_809BC2A4);
        this->actor.scale.x = 2.8f;
        this->unk_154 = 90;
        Lights_PointNoGlowSetInfo(&this->lightInfoNoGlow, this->actor.world.pos.x, this->actor.world.pos.y,
                                  this->actor.world.pos.z, 255, 255, 255, 300);
        this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfoNoGlow);
    } else {
        EnBdfire_SetupAction(this, func_809BC598);
        ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 0.0f);
        this->actor.speedXZ = 30.0f;
        this->unk_154 = (25 - (s32)(this->actor.params * 0.8f));
        if (this->unk_154 < 0) {
            this->unk_154 = 0;
        }
        this->unk_188 = 4.2000003f - (this->actor.params * 0.25f * 0.6f);

        if (this->unk_188 < 0.90000004f) {
            this->unk_188 = 0.90000004f;
        }
        this->unk_18C = 255.0f - (this->actor.params * 10.0f);
        if (this->unk_18C < 20.0f) {
            this->unk_18C = 20.0f;
        }
        this->unk_156 = (Rand_ZeroOne() * 8.0f);
    }
}

void EnBdfire_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnBdfire* this = THIS;

    if (this->actor.params < 0) {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
    }
}

void func_809BC2A4(EnBdfire* this, GlobalContext* globalCtx) {
    BossDodongo* kingDodongo;
    s32 temp;

    kingDodongo = (BossDodongo*)this->actor.parent;
    this->actor.world.pos.x = kingDodongo->firePos.x;
    this->actor.world.pos.y = kingDodongo->firePos.y;
    this->actor.world.pos.z = kingDodongo->firePos.z;
    if (kingDodongo->unk_1E2 == 0) {
        Math_SmoothStepToF(&this->actor.scale.x, 0.0f, 1.0f, 0.6f, 0.0f);
        if (Math_SmoothStepToF(&this->unk_18C, 0.0f, 1.0f, 20.0f, 0.0f) == 0.0f) {
            Actor_Kill(&this->actor);
            return;
        }
    } else {
        if (this->unk_154 < 70) {
            Math_SmoothStepToF(&this->unk_18C, 128.0f, 0.1f, 1.5f, 0.0f);
            Math_SmoothStepToF(&this->unk_190, 255.0f, 1.0f, 3.8249998f, 0.0f);
            Math_SmoothStepToF(&this->unk_194, 100.0f, 1.0f, 1.5f, 0.0f);
        }
        if (this->unk_154 == 0) {
            temp = 0;
        } else {
            this->unk_154--;
            temp = this->unk_154;
        }
        if (temp == 0) {
            Math_SmoothStepToF(&this->actor.scale.x, 0.0f, 1.0f, 0.3f, 0.0f);
            Math_SmoothStepToF(&this->unk_190, 0.0f, 1.0f, 25.5f, 0.0f);
            Math_SmoothStepToF(&this->unk_194, 0.0f, 1.0f, 10.0f, 0.0f);
            if (Math_SmoothStepToF(&this->unk_18C, 0.0f, 1.0f, 10.0f, 0.0f) == 0.0f) {
                Actor_Kill(&this->actor);
            }
        }
        Actor_SetScale(&this->actor, this->actor.scale.x);
        Lights_PointSetColorAndRadius(&this->lightInfoNoGlow, this->unk_190, this->unk_194, 0, 300);
    }
}

void func_809BC598(EnBdfire* this, GlobalContext* globalCtx) {
    s16 phi_v1_2;
    Player* player = PLAYER;
    BossDodongo* bossDodongo;
    s16 i;
    s16 phi_v1;
    s32 temp;

    bossDodongo = ((BossDodongo*)this->actor.parent);
    this->unk_158 = bossDodongo->unk_1A2;
    phi_v1_2 = 0;

    if (this->actor.params == 0) {
        Audio_PlaySoundGeneral(NA_SE_EN_DODO_K_FIRE - SFX_FLAG, &this->actor.projectedPos, 4, &D_801333E0, &D_801333E0,
                               &D_801333E8);
    }

    Math_SmoothStepToF(&this->actor.scale.x, this->unk_188, 0.3f, 0.5f, 0.0f);
    Actor_SetScale(&this->actor, this->actor.scale.x);

    // to the right of the 0-1 line (going oob)
    if (this->actor.world.pos.x < -490.0f) {
        if (this->actor.velocity.x < -10.0f) {
            this->actor.world.pos.x = -490.0f;
            phi_v1_2 = 1;
        }
    }

    // to the right of the 2-3 line (going in bounds)
    if ((this->actor.world.pos.x > 490.0f) && (this->actor.velocity.x > 10.0f)) {
        this->actor.world.pos.x = 490.0f;
        phi_v1_2 = 1;
    }

    // above the 1-2 line (going oob)
    if ((this->actor.world.pos.z > -4430.0f) && (this->actor.velocity.z > 10.0f)) {
        this->actor.world.pos.z = -4430.0f;
        phi_v1_2 = 1;
    }

    if ((this->actor.world.pos.z < -5430.0f) && (this->actor.velocity.z < -10.0f)) {
        this->actor.world.pos.z = -5430.0f;
        phi_v1_2 = 1;
    }

    if (phi_v1_2 != 0) {
        if (this->unk_158 == 0) {
            this->actor.world.rot.y += 0x4000;
        } else {
            this->actor.world.rot.y -= 0x4000;
        }
    }

    if (DECR(this->unk_154) == 0) {
        Math_SmoothStepToF(&this->unk_18C, 0.0f, 1.0f, 10.0f, 0.0f);
        if (this->unk_18C < 10.0f) {
            Actor_Kill(&this->actor);
        }
    } else if (!player->isBurning) {
        if (this->actor.params == 0) {
            if (this->actor.xyzDistToPlayerSq < SQ(70.0f)) {
                for (i = 0; i < 18; i++) {
                    player->flameTimers[i] = 0;
                }
                // player->isBurning = true;
                func_8002F6D4(globalCtx, &this->actor, 20.0f, this->actor.world.rot.y, 0.0f, 8);
                osSyncPrintf("POWER\n");
            }
        }
    }
}

void EnBdfire_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnBdfire* this = THIS;

    this->unk_156++;
    this->actionFunc(this, globalCtx);
    Actor_MoveForwardXZ(&this->actor);
}

void EnBdfire_DrawFire(EnBdfire* this, GlobalContext* globalCtx) {
    static Gfx* D_809BCB10[] = {
        0x060264E0, 0x060274E0, 0x060284E0, 0x060294E0, 0x0602A4E0, 0x0602B4E0, 0x0602C4E0, 0x0602D4E0,
    };
    s16 temp;
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    temp = this->unk_156 & 7;
    func_800D1FD4(&globalCtx->mf_11DA0);
    func_80094BC4(globalCtx->state.gfxCtx);
    POLY_XLU_DISP = func_80094968(POLY_XLU_DISP);
    gDPSetCombineLERP(POLY_XLU_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0,
                      ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0,
                      ENVIRONMENT);
    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 100, (s8)this->unk_18C);
    gDPSetEnvColor(POLY_XLU_DISP++, 200, 0, 0, 0);
    gSPSegment(POLY_XLU_DISP++, 8, SEGMENTED_TO_VIRTUAL(D_809BCB10[temp]));
    Matrix_Translate(0.0f, 11.0f, 0.0f, MTXMODE_APPLY);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_bdfire.c", 647),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_XLU_DISP++, D_0601D950);
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void EnBdfire_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnBdfire* this = THIS;

    this->drawFunc(this, globalCtx);
}
