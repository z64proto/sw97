/*
 * File: z_bg_ydan_hasi.c
 * Overlay: ovl_Bg_Ydan_Hasi
 * Description:
 */

#include "z_bg_ydan_hasi.h"
#include "objects/object_ydan_objects/object_ydan_objects.h"

#define FLAGS 0x00000030

#define THIS ((BgYdanHasi*)thisx)

// repurposing a gold skulltula flag since there are none in this mod
#define LOWERED_FLAG (gSaveContext.gsFlags[0] & 1)

void BgYdanHasi_Init(Actor* thisx, GlobalContext* globalCtx);
void BgYdanHasi_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgYdanHasi_Update(Actor* thisx, GlobalContext* globalCtx);
void BgYdanHasi_Draw(Actor* thisx, GlobalContext* globalCtx);

void BgYdanHasi_WaitForCs(BgYdanHasi* this, GlobalContext* globalCtx);
void BgYdanHasi_StartCs(BgYdanHasi* this, GlobalContext* globalCtx);
void BgYdanHasi_Shake(BgYdanHasi* this, GlobalContext* globalCtx);
void BgYdanHasi_Fall(BgYdanHasi* this, GlobalContext* globalCtx);
void BgYdanHasi_Land(BgYdanHasi* this, GlobalContext* globalCtx);
void BgYdanHasi_Finish(BgYdanHasi* this, GlobalContext* globalCtx);
void BgYdanHasi_DoNothing(BgYdanHasi* this, GlobalContext* globalCtx);

const ActorInit Bg_Ydan_Hasi_InitVars = {
    ACTOR_BG_YDAN_HASI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_YDAN_OBJECTS,
    sizeof(BgYdanHasi),
    (ActorFunc)BgYdanHasi_Init,
    (ActorFunc)BgYdanHasi_Destroy,
    (ActorFunc)BgYdanHasi_Update,
    (ActorFunc)BgYdanHasi_Draw,
};

void BgYdanHasi_InitDynapoly(BgYdanHasi* this, GlobalContext* globalCtx, CollisionHeader* collision, s32 moveFlag) {
    CollisionHeader* colHeader = NULL;

    DynaPolyActor_Init(&this->dyna, moveFlag);
    CollisionHeader_GetVirtual(collision, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);
}

void BgYdanHasi_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanHasi* this = THIS;

    BgYdanHasi_InitDynapoly(this, globalCtx, &gBridgePieceCollision_collisionHeader, DPM_PLAYER);

    if (LOWERED_FLAG) {
        thisx->world.pos.x = 548.0f;
        thisx->world.pos.y = 200.0f;
        thisx->world.pos.z = 906.0f;

        this->actionFunc = BgYdanHasi_DoNothing;
    } else {
        this->actionFunc = BgYdanHasi_WaitForCs;
    }
}

void BgYdanHasi_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanHasi* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgYdanHasi_WaitForCs(BgYdanHasi* this, GlobalContext* globalCtx) {
    if (this->dyna.unk_160 & 2) {
        this->actionFunc = BgYdanHasi_StartCs;
        this->timer = 5;
    }
}

void BgYdanHasi_StartCs(BgYdanHasi* this, GlobalContext* globalCtx) {
    Vec3f pos = { 395.0f, 1550.0f, 390.0f };
    Vec3f focus;

    func_8002DF54(globalCtx, &this->dyna.actor, 103);

    this->csCam = Gameplay_CreateSubCamera(globalCtx);
    Gameplay_ChangeCameraStatus(globalCtx, MAIN_CAM, CAM_STAT_WAIT);
    Gameplay_ChangeCameraStatus(globalCtx, this->csCam, CAM_STAT_ACTIVE);

    focus = this->dyna.actor.world.pos;

    Gameplay_CameraSetAtEye(globalCtx, this->csCam, &focus, &pos);

    Interface_ChangeAlpha(2);
    ShrinkWindow_SetVal(0x20);

    if (this->timer == 0) {
        this->timer = 25;
        this->homeRot = this->dyna.actor.shape.rot;
        this->actionFunc = BgYdanHasi_Shake;
    }
}

void BgYdanHasi_Shake(BgYdanHasi* this, GlobalContext* globalCtx) {
    this->rotShake += 0x2710;
    this->dyna.actor.world.rot.x = (Math_SinS(this->rotShake) * 300.0f) + this->dyna.actor.home.rot.x;
    this->dyna.actor.shape.rot.x = this->dyna.actor.world.rot.x;

    this->dyna.actor.world.rot.z = (Math_CosS(this->rotShake) * 300.0f) + this->dyna.actor.home.rot.z;
    this->dyna.actor.shape.rot.z = this->dyna.actor.world.rot.z;

    this->yShake += 0x4650;
    this->dyna.actor.world.pos.y = Math_SinS(this->yShake) + this->dyna.actor.home.pos.y;

    this->xzShake += 0x4650;
    this->dyna.actor.world.pos.x = (Math_SinS(this->xzShake) * 3.0f) + this->dyna.actor.home.pos.x;
    this->dyna.actor.world.pos.z = (Math_CosS(this->xzShake) * 3.0f) + this->dyna.actor.home.pos.z;

    if ((this->timer & 3) == 3) {
        Audio_PlaySoundAtPosition(globalCtx, &this->dyna.actor.world.pos, 16, NA_SE_EV_BLOCK_SHAKE);
    }

    if (this->timer == 0) {
        this->fallAmount = 0.0f;
        this->dyna.actor.shape.rot = this->homeRot;
        this->dyna.actor.world.rot = this->dyna.actor.shape.rot;
        this->actionFunc = BgYdanHasi_Fall;
    }
}

void BgYdanHasi_Fall(BgYdanHasi* this, GlobalContext* globalCtx) {
    Math_SmoothStepToF(&this->fallAmount, 40.0f, 2.0f, 1.0f, 1.0f);
    this->dyna.actor.world.pos.y -= this->fallAmount;

    if (this->dyna.actor.world.pos.y <= 1150.0f) {
        Vec3f pos = { 147.0f, 240.0f, 823.0f };
        Vec3f focus = { 548.0f, 200.0f, 906.0f };
        Player* player = PLAYER;

        Gameplay_CameraSetAtEye(globalCtx, this->csCam, &focus, &pos);

        this->dyna.actor.world.pos.x = 548.0f;
        this->dyna.actor.world.pos.y = 200.0f + 550.0f;
        this->dyna.actor.world.pos.z = 906.0f;

        player->actor.world.rot.y = player->actor.shape.rot.y = 0xA000;

        this->fallAmount = 35.0f;
        func_8002DF54(globalCtx, &this->dyna.actor, 7);
        this->actionFunc = BgYdanHasi_Land;
    }
}

static Vec3f dustPos[] = {
    { 570.0f, 200.0f, 780.0f },  { 628.0f, 200.0f, 839.0f }, { 669.0f, 200.0f, 879.0f },
    { 520.0f, 200.0f, 1026.0f }, { 474.0f, 200.0f, 980.0f }, { 421.0f, 200.0f, 926.0f },
};

void BgYdanHasi_Land(BgYdanHasi* this, GlobalContext* globalCtx) {
    this->dyna.actor.world.pos.y -= this->fallAmount;

    if (this->dyna.actor.world.pos.y <= 200.0f) {
        s32 i;
        s16 quakeIndex = Quake_Add(ACTIVE_CAM, 3);

        Quake_SetSpeed(quakeIndex, 28000);
        Quake_SetQuakeValues(quakeIndex, 16, 2, 120, 0);
        Quake_SetCountdown(quakeIndex, 30);

        for (i = 0; i < ARRAY_COUNT(dustPos); i++) {
            static Vec3f vel = { 0.0f, -1.0f, 0.0f };
            static Vec3f accel = { 0.0f, -1.0f, 0.0f };
            static Color_RGBA8 primColor = { 99, 72, 44, 255 };
            static Color_RGBA8 envColor = { 100, 60, 20, 255 };
            Vec3f pos = dustPos[i];

            func_8002843C(globalCtx, &pos, &vel, &accel, &primColor, &envColor, 500, 50,
                          (s32)Rand_ZeroFloat(20.0f) + 20);
        }

        this->dyna.actor.world.pos.y = 200.0f;
        Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_STONE_BOUND);
        this->timer = 70;

        this->actionFunc = BgYdanHasi_Finish;
    }
}

void BgYdanHasi_Finish(BgYdanHasi* this, GlobalContext* globalCtx) {
    if (this->timer == 40) {
        Audio_PlaySoundGeneral(NA_SE_SY_CORRECT_CHIME, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    }

    if (this->timer == 0) {
        Gameplay_ClearCamera(globalCtx, this->csCam);
        Gameplay_ChangeCameraStatus(globalCtx, MAIN_CAM, CAM_STAT_ACTIVE);
        func_8002DF54(globalCtx, &this->dyna.actor, 7);
        gSaveContext.gsFlags[0] |= 1;
        this->actionFunc = BgYdanHasi_DoNothing;
    }
}

void BgYdanHasi_DoNothing(BgYdanHasi* this, GlobalContext* globalCtx) {
}

void BgYdanHasi_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanHasi* this = THIS;

    if (this->timer > 0) {
        this->timer--;
    }

    if (this->actionFunc != NULL) {
        this->actionFunc(this, globalCtx);
    }
}

void BgYdanHasi_Draw(Actor* thisx, GlobalContext* globalCtx) {
    BgYdanHasi* this = THIS;

    Gfx_DrawDListOpa(globalCtx, gBridgePiece);
}
