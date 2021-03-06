/*
 * File: z_en_light.c
 * Overlay: ovl_En_Light
 * Description: Flame
 */

#include "z_en_light.h"
#include "objects/gameplay_keep/gameplay_keep.h"

#define FLAGS 0x00000000

#define THIS ((EnLight*)thisx)

void EnLight_Init(Actor* thisx, GlobalContext* globalCtx);
void EnLight_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnLight_Update(Actor* thisx, GlobalContext* globalCtx);
void EnLight_Draw(Actor* thisx, GlobalContext* globalCtx);
void EnLight_UpdateSwitch(Actor* thisx, GlobalContext* globalCtx);

const ActorInit En_Light_InitVars = {
    ACTOR_EN_LIGHT,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_FIRE,
    sizeof(EnLight),
    (ActorFunc)EnLight_Init,
    (ActorFunc)EnLight_Destroy,
    (ActorFunc)EnLight_Update,
    (ActorFunc)EnLight_Draw,
};

typedef struct {
    /* 0x00 */ Color_RGBA8 primColor;
    /* 0x04 */ Color_RGB8 envColor;
    /* 0x07 */ u8 scale;
} FlameParams;

static FlameParams D_80A9E840[] = {
    { { 255, 200, 0, 255 }, { 255, 0, 0 }, 75 },     { { 255, 200, 0, 255 }, { 255, 0, 0 }, 75 },
    { { 0, 170, 255, 255 }, { 0, 0, 255 }, 75 },     { { 170, 255, 0, 255 }, { 0, 150, 0 }, 75 },
    { { 255, 200, 0, 255 }, { 255, 0, 0 }, 40 },     { { 255, 200, 0, 255 }, { 255, 0, 0 }, 75 },
    { { 170, 255, 0, 255 }, { 0, 150, 0 }, 75 },     { { 0, 170, 255, 255 }, { 0, 0, 255 }, 75 },
    { { 255, 0, 170, 255 }, { 200, 0, 0 }, 75 },     { { 255, 255, 170, 255 }, { 255, 50, 0 }, 75 },
    { { 255, 255, 170, 255 }, { 255, 255, 0 }, 75 }, { { 255, 255, 170, 255 }, { 100, 255, 0 }, 75 },
    { { 255, 170, 255, 255 }, { 255, 0, 100 }, 75 }, { { 255, 170, 255, 255 }, { 100, 0, 255 }, 75 },
    { { 170, 255, 255, 255 }, { 0, 0, 255 }, 75 },   { { 170, 255, 255, 255 }, { 0, 150, 255 }, 75 },
};

extern Gfx D_05000440[];

void EnLight_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnLight* this = THIS;
    s16 yOffset;

    yOffset = (this->actor.params < 0) ? 1 : 40;
    Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.world.pos.x, yOffset + (s16)this->actor.world.pos.y,
                              this->actor.world.pos.z, 255, 255, 180, -1);

    this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo);
    Actor_SetScale(&this->actor, D_80A9E840[this->actor.params & 0xF].scale * 0.0001f);
    this->timer = (s32)(Rand_ZeroOne() * 255.0f);
    this->flameFrame = (s32)(Rand_ZeroOne() * 8);

    if ((this->actor.params & 0x400) != 0) {
        this->actor.update = EnLight_UpdateSwitch;
    }
}

void EnLight_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnLight* this = THIS;

    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
}

void EnLight_UpdatePosRot(EnLight* this, GlobalContext* globalCtx) {
    // update yaw for billboard effect
    this->actor.shape.rot.y = Camera_GetCamDirYaw(ACTIVE_CAM) + 0x8000;

    if (this->actor.parent != NULL) {
        Math_Vec3f_Copy(&this->actor.world.pos, &(this->actor.parent)->world.pos);
        this->actor.world.pos.y += 17.0f;
    }

    this->timer++;
}

void EnLight_Update(Actor* thisx, GlobalContext* globalCtx) {
    f32 intensity;
    FlameParams* flameParams;
    s16 radius;
    EnLight* this = THIS;

    flameParams = &D_80A9E840[this->actor.params & 0xF];
    intensity = (Rand_ZeroOne() * 0.5f) + 0.5f;
    radius = (this->actor.params < 0) ? 100 : 300;
    Lights_PointSetColorAndRadius(&this->lightInfo, (flameParams->primColor.r * intensity),
                                  (flameParams->primColor.g * intensity), (flameParams->primColor.b * intensity),
                                  radius);
    EnLight_UpdatePosRot(this, globalCtx);

    if (this->actor.params >= 0) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_TORCH - SFX_FLAG);
    }
}

void EnLight_UpdateSwitch(Actor* thisx, GlobalContext* globalCtx) {
    f32 intensity;
    FlameParams* flameParams;
    EnLight* this = THIS;
    f32 scale;

    flameParams = &D_80A9E840[this->actor.params & 0xF];
    scale = this->actor.scale.x / ((f32)flameParams->scale * 0.0001);

    if ((this->actor.params & 0x800) != 0) {
        if (Flags_GetSwitch(globalCtx, (this->actor.params & 0x3F0) >> 4)) {
            Math_StepToF(&scale, 1.0f, 0.05f);
        } else {
            if (scale < 0.1f) {
                Actor_SetScale(&this->actor, 0.0f);
                return;
            }
            Math_StepToF(&scale, 0.0f, 0.05f);
        }
    } else {
        if (Flags_GetSwitch(globalCtx, (this->actor.params & 0x3F0) >> 4)) {
            if (scale < 0.1f) {
                Actor_SetScale(&this->actor, 0.0f);
                return;
            }
            Math_StepToF(&scale, 0.0f, 0.05f);
        } else {
            Math_StepToF(&scale, 1.0f, 0.05f);
        }
    }

    Actor_SetScale(&this->actor, ((f32)flameParams->scale * 0.0001) * scale);
    intensity = (Rand_ZeroOne() * 0.5f) + 0.5f;
    Lights_PointSetColorAndRadius(&this->lightInfo, (flameParams->primColor.r * intensity),
                                  (flameParams->primColor.g * intensity), (flameParams->primColor.b * intensity),
                                  300.0f * scale);
    EnLight_UpdatePosRot(this, globalCtx);

    if (this->actor.params >= 0) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EV_TORCH - SFX_FLAG);
    }
}

// Material displaylist for fixing the flame object
static Gfx sFlameMat[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 1, 1, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

// Flame animation frames
static u64* sFlameTextures[] = {
    0x060000A0, 0x060008A0, 0x060010A0, 0x060018A0, 0x060020A0, 0x060028A0, 0x060030A0, 0x060038A0,
};

void EnLight_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnLight* this = THIS;
    s32 pad;
    FlameParams* flameParams;
    Gfx* dList;

    flameParams = &D_80A9E840[this->actor.params & 0xF];

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D84(globalCtx->state.gfxCtx);

    if (this->actor.params >= 0) {
        dList = 0x06000040; // Hardcoded address for now

        if (this->flameFrame < 7) {
            this->flameFrame++;
        } else {
            this->flameFrame = 0;
        }

        gSPDisplayList(POLY_XLU_DISP++, sFlameMat);
        gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sFlameTextures[this->flameFrame]));
        gDPSetPrimColor(POLY_XLU_DISP++, 0x80, 0x80, flameParams->primColor.r, flameParams->primColor.g,
                        flameParams->primColor.b, flameParams->primColor.a);
        gDPSetEnvColor(POLY_XLU_DISP++, flameParams->envColor.r, flameParams->envColor.g, flameParams->envColor.b, 0);
    } else {
        gSPSegment(POLY_XLU_DISP++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 16, 32, 1, ((this->timer * 2) & 63),
                                    (this->timer * -6) & 127 * 1, 16, 32));

        dList = D_05000440;
        gDPSetPrimColor(POLY_XLU_DISP++, 192, 192, 255, 200, 0, 0);
        gDPSetEnvColor(POLY_XLU_DISP++, 255, 0, 0, 0);
    }

    Matrix_RotateY((s16)((Camera_GetCamDirYaw(ACTIVE_CAM) - this->actor.shape.rot.y) + 0x8000) * (M_PI / 32768.0f),
                   MTXMODE_APPLY);

    if (this->actor.params & 1) {
        Matrix_RotateY(M_PI, MTXMODE_APPLY);
    }

    switch (globalCtx->sceneNum) {
        case SCENE_FIRE_TEMPLE:
            if (this->actor.room == 7) {
                Matrix_Scale(0.5f, 0.5f, 0.5f, MTXMODE_APPLY);
            }
            break;
        case SCENE_FOREST_TEMPLE:
            if (this->actor.room == 4) {
                Matrix_Scale(0.5f, 0.5f, 0.5f, MTXMODE_APPLY);
            }
            break;
        default:
            Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
            break;
    }

    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_light.c", 488),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_XLU_DISP++, dList);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
