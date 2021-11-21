/*
 * File: z_magic_soul.c
 * Overlay: ovl_Magic_Soul
 * Description: Nayru's Love
 */

#include "z_magic_soul.h"
#include "objects/gameplay_keep/gameplay_keep.h"
#include "overlays/actors/ovl_En_Elf/z_en_elf.h"

#define FLAGS 0x02000030

#define THIS ((MagicSoul*)thisx)

void MagicSoul_Init(Actor* thisx, GlobalContext* globalCtx);
void MagicSoul_Destroy(Actor* thisx, GlobalContext* globalCtx);
void MagicSoul_OrbUpdate(Actor* thisx, GlobalContext* globalCtx);
void MagicSoul_OrbDraw(Actor* thisx, GlobalContext* globalCtx);
void MagicSoul_DiamondUpdate(Actor* thisx, GlobalContext* globalCtx);
void MagicSoul_DiamondDraw(Actor* thisx, GlobalContext* globalCtx);

void MagicSoul_DimLighting(GlobalContext* globalCtx, f32 intensity);
void MagicSoul_UpdateFlash(Actor* this, f32 intensity);

const ActorInit Magic_Soul_InitVars = {
    ACTOR_MAGIC_SOUL,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(MagicSoul),
    (ActorFunc)MagicSoul_Init,
    (ActorFunc)MagicSoul_Destroy,
    (ActorFunc)MagicSoul_OrbUpdate,
    (ActorFunc)MagicSoul_OrbDraw,
};

void MagicSoul_Init(Actor* thisx, GlobalContext* globalCtx) {
    MagicSoul* this = THIS;
    Player* player = PLAYER;

    if (LINK_IS_CHILD) {
        this->scale = 0.4f;
    } else {
        this->scale = 0.6f;
    }

    thisx->world.pos = player->actor.world.pos;
    Actor_SetScale(&this->actor, 0.0f);
    thisx->room = -1;

    if (gSaveContext.fairyTimer != 0) {
        thisx->update = MagicSoul_DiamondUpdate;
        thisx->draw = MagicSoul_DiamondDraw;
        thisx->scale.x = thisx->scale.z = this->scale * 1.6f;
        thisx->scale.y = this->scale * 0.8f;
        this->timer = 0;
        this->primAlpha = 0;
    } else {
        this->timer = 0;
        gSaveContext.fairyTimer = 0;
    }
}

void MagicSoul_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    Camera_ChangeSetting(Gameplay_GetCamera(globalCtx, MAIN_CAM), CAM_SET_NORMAL0);
    func_800876C8(globalCtx);
    Audio_PlayActorSound2(thisx, NA_SE_EV_TRIFORCE_FLASH);
    gSaveContext.fairyTimer = 1201;
}

void MagicSoul_DiamondUpdate(Actor* thisx, GlobalContext* globalCtx) {
    MagicSoul* this = THIS;
    u8 phi_a0;
    Player* player = PLAYER;
    EnElf* navi = (EnElf*)player->naviActor;
    s16 pad;
    s16 fairyTimer = gSaveContext.fairyTimer;
    s32 msgMode = globalCtx->msgCtx.msgMode;

    Camera_ChangeSetting(Gameplay_GetCamera(globalCtx, MAIN_CAM), CAM_SET_NAVI);
    player->stateFlags2 |= 0x100000; // keep navi out

    if ((msgMode == 0xD) || (msgMode == 0x11)) {
        Actor_Kill(thisx);
        return;
    }

    if (fairyTimer >= 1200) {
        player->invincibilityTimer = 0;
        gSaveContext.fairyTimer = 0;
        navi->spiritFlag = false;
        navi->active_mode = 7;
        this->flashIntensity = 0;
        Actor_Kill(thisx);
        return;
    }

    player->invincibilityTimer = -100;
    thisx->scale.x = thisx->scale.z = this->scale;

    if (this->timer < 20) {
        thisx->scale.x = thisx->scale.z = (1.6f - (this->timer * 0.03f)) * this->scale;
        thisx->scale.y = ((this->timer * 0.01f) + 0.8f) * this->scale;
    } else {
        thisx->scale.x = thisx->scale.z = this->scale;
        thisx->scale.y = this->scale;
    }

    thisx->scale.x *= 1.3f;
    thisx->scale.z *= 1.3f;

    phi_a0 = (this->timer < 20) ? (this->timer * 12) : 255;

    if (fairyTimer == 0) {
        navi->spiritFlag = true;
        player->actor.world.pos.y += 25;
        MagicSoul_DimLighting(globalCtx, 0);
    }

    if (fairyTimer >= 1190) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_TRIFORCE_FLASH);
        MagicSoul_UpdateFlash(&this->actor, 1);
    } else if (fairyTimer >= 1180) {
        this->primAlpha = 15595 - (fairyTimer * 13);
        if (fairyTimer & 1) {
            this->primAlpha = (u8)(this->primAlpha >> 1);
        }
    } else if (fairyTimer >= 1100) {
        this->primAlpha = (u8)(fairyTimer << 7) + 127;
    } else {
        MagicSoul_UpdateFlash(&this->actor, 0);
        this->primAlpha = 255;
    }

    if (this->primAlpha > phi_a0) {
        this->primAlpha = phi_a0;
    }

    thisx->world.rot.y += 0x3E8;
    thisx->shape.rot.y = thisx->world.rot.y + Camera_GetCamDirYaw(ACTIVE_CAM);
    this->timer++;
    gSaveContext.fairyTimer = fairyTimer + 1;

    if (fairyTimer < 1100) {
        func_8002F974(&player->actor, NA_SE_PL_MAGIC_SOUL_NORMAL - SFX_FLAG);
    } else {
        func_8002F974(&player->actor, NA_SE_PL_MAGIC_SOUL_FLASH - SFX_FLAG);
    }
}

void MagicSoul_DimLighting(GlobalContext* globalCtx, f32 intensity) {
    s32 i;
    f32 temp_f0;
    f32 phi_f0;

    if (globalCtx->roomCtx.curRoom.unk_03 != 5) {
        intensity = CLAMP_MIN(intensity, 0.0f);
        intensity = CLAMP_MAX(intensity, 1.0f);
        phi_f0 = intensity - 0.2f;
        if (intensity < 0.2f) {
            phi_f0 = 0.0f;
        }
        globalCtx->envCtx.unk_9E = (850.0f - globalCtx->envCtx.unk_D2) * phi_f0;
        if (intensity == 0.0f) {
            for (i = 0; i < ARRAY_COUNT(globalCtx->envCtx.unk_8C[2]); i++) {
                globalCtx->envCtx.unk_8C[2][i] = 0;
            }
        } else {
            temp_f0 = intensity * 5.0f;
            if (temp_f0 > 1.0f) {
                temp_f0 = 1.0f;
            }

            for (i = 0; i < ARRAY_COUNT(globalCtx->envCtx.unk_8C[2]); i++) {
                globalCtx->envCtx.unk_8C[2][i] = -(s16)(globalCtx->envCtx.unk_CF[i] * temp_f0);
            }
        }
    }
}

void MagicSoul_OrbUpdate(Actor* thisx, GlobalContext* globalCtx) {
    MagicSoul* this = THIS;
    s32 pad;
    Player* player = PLAYER;
    EnElf* navi = (EnElf*)player->naviActor;

    player->stateFlags2 |= 0x100000; // keep navi out

    if (this->timer == 35) {
        navi->active_mode = 8;
    }

    func_8002F974(&player->actor, NA_SE_PL_MAGIC_SOUL_BALL - SFX_FLAG);
    if (this->timer < 35) {
        MagicSoul_UpdateFlash(&this->actor, 1);
        MagicSoul_DimLighting(globalCtx, this->timer * (1 / 45.0f));
        Math_SmoothStepToF(&thisx->scale.x, this->scale * (1 / 12.000001f), 0.05f, 0.01f, 0.0001f);
        Actor_SetScale(&this->actor, thisx->scale.x);
    } else if (this->timer < 45) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_NABALL_VANISH);
    } else if (this->timer < 55) {
        Actor_SetScale(&this->actor, thisx->scale.x * 0.9f);
        Math_SmoothStepToF(&this->orbOffset.y, player->bodyPartsPos[0].y, 0.5f, 3.0f, 1.0f);
    } else {
        thisx->update = MagicSoul_DiamondUpdate;
        thisx->draw = MagicSoul_DiamondDraw;
        thisx->scale.x = thisx->scale.z = this->scale * 1.6f;
        thisx->scale.y = this->scale * 0.8f;
        this->timer = 0;
        this->primAlpha = 0;

        player->stateFlags1 &= ~0x30000000; // unfreeze actors
    }

    this->timer++;
}

void MagicSoul_DiamondDraw(Actor* thisx, GlobalContext* globalCtx) {
    MagicSoul* this = THIS;

    if (this->flashIntensity > 0) {
        OPEN_DISPS(globalCtx->state.gfxCtx);

        POLY_XLU_DISP = func_800937C0(POLY_XLU_DISP);
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 200, (s32)(225.0f * this->flashIntensity) & 0xFF);
        gDPSetAlphaDither(POLY_XLU_DISP++, G_AD_DISABLE);
        gDPSetColorDither(POLY_XLU_DISP++, G_CD_DISABLE);
        gDPFillRectangle(POLY_XLU_DISP++, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
}

void MagicSoul_UpdateFlash(Actor* thisx, f32 intensity) {
    MagicSoul* this = THIS;

    if (this->flashIntensity < intensity) {
        this->flashIntensity += 0.10f;
    } else if (this->flashIntensity > intensity) {
        this->flashIntensity -= 0.10f;
    }

    this->flashIntensity = CLAMP_MIN(this->flashIntensity, 0.0f);
    this->flashIntensity = CLAMP_MAX(this->flashIntensity, 1.0f);
}

void MagicSoul_OrbDraw(Actor* thisx, GlobalContext* globalCtx) {
    MagicSoul* this = THIS;
    Vec3f pos;
    Player* player = PLAYER;
    s32 pad;
    f32 sp6C = globalCtx->state.frames & 0x1F;

    if (this->timer < 32) {
        pos.x = (player->bodyPartsPos[12].x + player->bodyPartsPos[15].x) * 0.5f;
        pos.y = (player->bodyPartsPos[12].y + player->bodyPartsPos[15].y) * 0.5f;
        pos.z = (player->bodyPartsPos[12].z + player->bodyPartsPos[15].z) * 0.5f;
        if (this->timer > 20) {
            pos.y += (this->timer - 20) * 1.4f;
        }
        this->orbOffset = pos;
    } else if (this->timer < 130) {
        pos = this->orbOffset;
    } else {
        return;
    }

    pos.x -= (this->actor.scale.x * 300.0f * Math_SinS(Camera_GetCamDirYaw(ACTIVE_CAM)) *
              Math_CosS(Camera_GetCamDirPitch(ACTIVE_CAM)));
    pos.y -= (this->actor.scale.x * 300.0f * Math_SinS(Camera_GetCamDirPitch(ACTIVE_CAM)));
    pos.z -= (this->actor.scale.x * 300.0f * Math_CosS(Camera_GetCamDirYaw(ACTIVE_CAM)) *
              Math_CosS(Camera_GetCamDirPitch(ACTIVE_CAM)));

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D84(globalCtx->state.gfxCtx);
    gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 255, 255, 170, 255);
    gDPSetEnvColor(POLY_XLU_DISP++, 255, 255, 0, 255);
    Matrix_Translate(pos.x, pos.y, pos.z, MTXMODE_NEW);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, MTXMODE_APPLY);
    Matrix_Mult(&globalCtx->mf_11DA0, MTXMODE_APPLY);
    Matrix_Push();
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_magic_soul.c", 632),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    Matrix_RotateZ(sp6C * (M_PI / 32), MTXMODE_APPLY);
    gSPDisplayList(POLY_XLU_DISP++, gEffFlash1DL);
    Matrix_Pop();
    Matrix_RotateZ(-sp6C * (M_PI / 32), MTXMODE_APPLY);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_magic_soul.c", 639),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_XLU_DISP++, gEffFlash1DL);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
