/*
 * File: z_arrow_dark.c
 * Overlay: ovl_Arrow_Dark
 * Description: Dark Arrow. Spawned as a child of a normal arrow.
 */

#include "z_arrow_dark.h"

#include "overlays/actors/ovl_En_Arrow/z_en_arrow.h"

#define FLAGS 0x02000010

#define THIS ((ArrowDark*)thisx)

void ArrowDark_Init(Actor* thisx, GlobalContext* globalCtx);
void ArrowDark_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ArrowDark_Update(Actor* thisx, GlobalContext* globalCtx);
void ArrowDark_Draw(Actor* thisx, GlobalContext* globalCtx);

void ArrowDark_Charge(ArrowDark* this, GlobalContext* globalCtx);
void ArrowDark_Fly(ArrowDark* this, GlobalContext* globalCtx);
void ArrowDark_Hit(ArrowDark* this, GlobalContext* globalCtx);

#include "z_arrow_dark_gfx.c"

const ActorInit Arrow_Dark_InitVars = {
    ACTOR_ARROW_DARK,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ArrowDark),
    (ActorFunc)ArrowDark_Init,
    (ActorFunc)ArrowDark_Destroy,
    (ActorFunc)ArrowDark_Update,
    (ActorFunc)ArrowDark_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(uncullZoneForward, 2000, ICHAIN_STOP),
};

void ArrowDark_SetupAction(ArrowDark* this, ArrowDarkActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void ArrowDark_Init(Actor* thisx, GlobalContext* globalCtx) {
    ArrowDark* this = THIS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->radius = 0;
    this->unk_160 = 1.0f;
    ArrowDark_SetupAction(this, ArrowDark_Charge);
    Actor_SetScale(&this->actor, 0.01f);
    this->alpha = 200;
    this->timer = 0;
    this->unk_164 = 0.0f;
}

void ArrowDark_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    func_800876C8(globalCtx);
    // Translates to: "Disappearance"
    LOG_STRING("消滅", "../z_arrow_dark.c", 415);
}

void ArrowDark_Charge(ArrowDark* this, GlobalContext* globalCtx) {
    EnArrow* arrow;

    arrow = (EnArrow*)this->actor.parent;
    if ((arrow == NULL) || (arrow->actor.update == NULL)) {
        Actor_Kill(&this->actor);
        return;
    }

    if (this->radius < 10) {
        this->radius += 1;
    }
    // copy position and rotation from arrow
    this->actor.world.pos = arrow->actor.world.pos;
    this->actor.shape.rot = arrow->actor.shape.rot;

    func_8002F974(&this->actor, NA_SE_EN_GANON_DARKWAVE_M - SFX_FLAG);

    // if arrow has no parent, player has fired the arrow
    if (arrow->actor.parent == NULL) {
        this->unkPos = this->actor.world.pos;
        this->radius = 10;
        ArrowDark_SetupAction(this, ArrowDark_Fly);
        this->alpha = 255;
    }
}

void ArrowDark_UnkFunc(Vec3f* unkPos, Vec3f* darkPos, f32 scale) {
    unkPos->x += ((darkPos->x - unkPos->x) * scale);
    unkPos->y += ((darkPos->y - unkPos->y) * scale);
    unkPos->z += ((darkPos->z - unkPos->z) * scale);
}

void ArrowDark_Hit(ArrowDark* this, GlobalContext* globalCtx) {
    f32 scale;
    f32 offset;
    u16 timer;

    if (this->actor.projectedW < 50.0f) {
        scale = 10.0f;
    } else {
        if (950.0f < this->actor.projectedW) {
            scale = 310.0f;
        } else {
            scale = this->actor.projectedW;
            scale = ((scale - 50.0f) * (1.0f / 3.0f)) + 10.0f;
        }
    }

    timer = this->timer;
    if (timer != 0) {
        this->timer -= 1;

        if (this->timer >= 8) {
            offset = ((this->timer - 8) * (1.0f / 24.0f));
            offset = SQ(offset);
            this->radius = (((1.0f - offset) * scale) + 10.0f);
            this->unk_160 += ((2.0f - this->unk_160) * 0.1f);
            if (this->timer < 16) {

                this->alpha = ((this->timer * 0x23) - 0x118);
            }
        }
    }

    if (this->timer >= 9) {
        if (this->unk_164 < 1.0f) {
            this->unk_164 += 0.25f;
        }
    } else {
        if (this->unk_164 > 0.0f) {
            this->unk_164 -= 0.125f;
        }
    }

    if (this->timer < 8) {
        this->alpha = 0;
    }

    if (this->timer == 0) {
        this->timer = 255;
        Actor_Kill(&this->actor);
    }
}

void ArrowDark_Fly(ArrowDark* this, GlobalContext* globalCtx) {
    EnArrow* arrow;
    f32 distanceScaled;
    s32 pad;

    arrow = (EnArrow*)this->actor.parent;
    if ((arrow == NULL) || (arrow->actor.update == NULL)) {
        Actor_Kill(&this->actor);
        return;
    }
    // copy position and rotation from arrow
    this->actor.world.pos = arrow->actor.world.pos;
    this->actor.shape.rot = arrow->actor.shape.rot;
    distanceScaled = Math_Vec3f_DistXYZ(&this->unkPos, &this->actor.world.pos) * (1.0f / 24.0f);
    this->unk_160 = distanceScaled;
    if (distanceScaled < 1.0f) {
        this->unk_160 = 1.0f;
    }
    ArrowDark_UnkFunc(&this->unkPos, &this->actor.world.pos, 0.05f);

    if (arrow->hitFlags & 1) {
        Audio_PlayActorSound2(&this->actor, NA_SE_IT_EXPLOSION_FRAME);
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_TWINROBA_MASIC_SET);
        ArrowDark_SetupAction(this, ArrowDark_Hit);
        this->timer = 32;
        this->alpha = 255;
    } else if (arrow->timer < 34) {
        if (this->alpha < 35) {
            Actor_Kill(&this->actor);
        } else {
            this->alpha -= 0x19;
        }
    }
}

void ArrowDark_Update(Actor* thisx, GlobalContext* globalCtx) {
    ArrowDark* this = THIS;

    if (globalCtx->msgCtx.msgMode == 0xD || globalCtx->msgCtx.msgMode == 0x11) {
        Actor_Kill(&this->actor);
    } else {
        this->actionFunc(this, globalCtx);
    }
}

void ArrowDark_Draw(Actor* thisx, GlobalContext* globalCtx) {
    ArrowDark* this = THIS;
    s32 pad;
    u32 stateFrames;
    EnArrow* arrow;
    Actor* tranform;

    stateFrames = globalCtx->state.frames;
    arrow = (EnArrow*)this->actor.parent;

    if ((arrow != NULL) && (arrow->actor.update != NULL) && (this->timer < 255)) {

        tranform = (arrow->hitFlags & 2) ? &this->actor : &arrow->actor;

        OPEN_DISPS(globalCtx->state.gfxCtx);

        Matrix_Translate(tranform->world.pos.x, tranform->world.pos.y, tranform->world.pos.z, MTXMODE_NEW);
        Matrix_RotateY(tranform->shape.rot.y * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateX(tranform->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_RotateZ(tranform->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
        Matrix_Scale(0.01f, 0.01f, 0.01f, MTXMODE_APPLY);

        // Draw colored effect over the screen when arrow hits
        if (this->unk_164 > 0) {
            POLY_XLU_DISP = func_800937C0(POLY_XLU_DISP);
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, (s32)(25.0f * this->unk_164) & 0xFF,
                            (s32)(25.0f * this->unk_164) & 0xFF, (s32)(25.0f * this->unk_164) & 0xFF,
                            (s32)(150.0f * this->unk_164) & 0xFF);
            gDPSetAlphaDither(POLY_XLU_DISP++, G_AD_DISABLE);
            gDPSetColorDither(POLY_XLU_DISP++, G_CD_DISABLE);
            gDPFillRectangle(POLY_XLU_DISP++, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
        }

        // Draw dark on the arrow
        func_80093D84(globalCtx->state.gfxCtx);
        gDPSetPrimColor(POLY_XLU_DISP++, 0x80, 0x80, 0, 0, 0, this->alpha);
        gDPSetEnvColor(POLY_XLU_DISP++, 0, 0, 0, 128);
        Matrix_RotateRPY(0x4000, 0x0, 0x0, MTXMODE_APPLY);
        if (this->timer != 0) {
            Matrix_Translate(0.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        } else {
            Matrix_Translate(0.0f, 1500.0f, 0.0f, MTXMODE_APPLY);
        }
        Matrix_Scale(this->radius * 0.2f, this->unk_160 * 4.0f, this->radius * 0.2f, MTXMODE_APPLY);
        Matrix_Translate(0.0f, -700.0f, 0.0f, MTXMODE_APPLY);
        gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_arrow_dark.c", 660),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_XLU_DISP++, sTextureDL);
        gSPDisplayList(POLY_XLU_DISP++,
                       Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 511 - (stateFrames * 5) % 512, 0, 64, 32, 1,
                                        511 - (stateFrames * 20) % 512, 511 - (stateFrames * 5) % 512, 8, 16));
        gSPDisplayList(POLY_XLU_DISP++, sVertexDL);

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
}
