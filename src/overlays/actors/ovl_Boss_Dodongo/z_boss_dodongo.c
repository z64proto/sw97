#include "z_boss_dodongo.h"

#define FLAGS 0x00000035

#define THIS ((BossDodongo*)thisx)

#define CENTER_X 0.0f
#define CENTER_Y -1306.0f
#define CENTER_Z -4930.0f

void BossDodongo_Init(Actor* thisx, GlobalContext* globalCtx);
void BossDodongo_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BossDodongo_Update(Actor* thisx, GlobalContext* globalCtx);
void BossDodongo_Draw(Actor* thisx, GlobalContext* globalCtx);

void BossDodongo_SetupIntroCutscene(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_IntroCutscene(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_Walk(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_Inhale(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_BlowFire(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_Roll(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_SpawnFire(BossDodongo* this, GlobalContext* globalCtx, s16 arg2);
void BossDodongo_Explode(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_LayDown(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_Vulnerable(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_GetUp(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_SetupWalk(BossDodongo* this);
void BossDodongo_DeathCutscene(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_SetupDeathCutscene(BossDodongo* this);
void BossDodongo_Damaged(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_UpdateDamage(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_PlayerPosCheck(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_PlayerYawCheck(BossDodongo* this, GlobalContext* globalCtx);
f32 func_808C4F6C(BossDodongo* this, GlobalContext* globalCtx);
f32 func_808C50A8(BossDodongo* this, GlobalContext* globalCtx);
void BossDodongo_DrawEffects(GlobalContext* globalCtx);
void BossDodongo_UpdateEffects(GlobalContext* globalCtx);

const ActorInit Boss_Dodongo_InitVars = {
    ACTOR_EN_DODONGO,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_KINGDODONGO,
    sizeof(BossDodongo),
    (ActorFunc)BossDodongo_Init,
    (ActorFunc)BossDodongo_Destroy,
    (ActorFunc)BossDodongo_Update,
    (ActorFunc)BossDodongo_Draw,
};

#include "z_boss_dodongo_data.c"

static InitChainEntry sInitChain[] = {
    ICHAIN_U8(targetMode, 5, ICHAIN_CONTINUE),
    ICHAIN_S8(naviEnemyId, 12, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, -3000.0f, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 8200.0f, ICHAIN_STOP),
};

extern SkeletonHeader D_0601B310;
extern AnimationHeader D_0600F0D8;
extern UNK_PTR D_03002B98;
extern AnimationHeader D_06008EEC;
extern UNK_TYPE D_06017410; // Title card
extern AnimationHeader D_0601CAE0;
extern AnimationHeader D_06008EEC;
extern AnimationHeader D_060061D4;
extern AnimationHeader D_0600DF38;
extern AnimationHeader D_0600E848;
extern AnimationHeader D_06004E0C;
extern AnimationHeader D_060042A8;
extern AnimationHeader D_06009D10;
extern AnimationHeader D_0601D934;
extern AnimationHeader D_06002D0C;
extern AnimationHeader D_060042A8;
extern AnimationHeader D_06001074;
extern AnimationHeader D_06003CF8;
extern s16 D_06015890[];
extern s16 D_06017210[];
extern s16 D_06015D90[];
extern s16 D_06016390[];
extern s16 D_06016590[];
extern s16 D_06016790[];
extern s16 D_06015990[];
extern s16 D_06015F90[];
extern s16 D_06016990[];
extern s16 D_06016E10[];
extern Gfx* D_06009D50[];
extern Gfx* D_06009DD0[];

void func_808C1190(s16* arg0, u8* arg1, s16 arg2) {
    if (arg2[arg1] != 0) {
        arg0[arg2 / 2] = 0;
    }
}

void func_808C11D0(s16* arg0, u8* arg1, s16 arg2) {
    if (arg1[arg2] != 0) {
        arg0[arg2] = 0;
    }
}

void func_808C1200(s16* arg0, u8* arg1, s16 arg2) {
    if (arg1[arg2] != 0) {
        arg0[arg2] = 0;
    }
}

void func_808C1230(s16* arg0, u8* arg1, s16 arg2) {
    s16 index;

    if (arg1[arg2] != 0) {
        index = ((arg2 & 0xF) + ((arg2 & 0xF0) * 2));
        arg0[index + 16] = 0;
        arg0[index] = 0;
    }
}

void func_808C1278(s16* arg0, u8* arg1, s16 arg2) {
    s16 index;

    if (arg1[arg2] != 0) {
        index = ((arg2 & 0xF) * 2) + ((arg2 & 0xF0) * 2);
        arg0[index + 1] = 0;
        arg0[index] = 0;
    }
}

void func_808C12C4(void* arg1, s16 arg2) {
    func_808C1190(SEGMENTED_TO_VIRTUAL(D_06015890), arg1, arg2);
    func_808C1200(SEGMENTED_TO_VIRTUAL(D_06017210), arg1, arg2);
    func_808C11D0(SEGMENTED_TO_VIRTUAL(D_06015D90), arg1, arg2);
    func_808C11D0(SEGMENTED_TO_VIRTUAL(D_06016390), arg1, arg2);
    func_808C11D0(SEGMENTED_TO_VIRTUAL(D_06016590), arg1, arg2);
    func_808C11D0(SEGMENTED_TO_VIRTUAL(D_06016790), arg1, arg2);
    func_808C1230(SEGMENTED_TO_VIRTUAL(D_06015990), arg1, arg2);
    func_808C1230(SEGMENTED_TO_VIRTUAL(D_06015F90), arg1, arg2);
    func_808C1278(SEGMENTED_TO_VIRTUAL(D_06016990), arg1, arg2);
    func_808C1278(SEGMENTED_TO_VIRTUAL(D_06016E10), arg1, arg2);
}

void func_808C1554(void* D_03002B98, void* D_808C73C8, s32 arg2, f32 arg3) {
    u16* temp_s3 = SEGMENTED_TO_VIRTUAL(D_03002B98);
    u16* temp_s1 = SEGMENTED_TO_VIRTUAL(D_808C73C8);
    s16 i;
    s16 i2;
    u16 sp54[2048];
    s16 temp;
    s16 temp2;

    for (i = 0; i < 2048; i += 32) {
        temp = sinf((((i / 32) + (s16)((arg2 * 50.0f) / 100.0f)) & 0x1F) * (M_PI / 16)) * arg3;
        for (i2 = 0; i2 < 32; i2++) {
            sp54[i + ((temp + i2) & 0x1F)] = temp_s1[i + i2];
        }
    }
    for (i = 0; i < 32; i++) {
        temp = sinf(((i + (s16)((arg2 * 80.0f) / 100.0f)) & 0x1F) * (M_PI / 16)) * arg3;
        temp *= 32;
        for (i2 = 0; i2 < 2048; i2 += 32) {
            temp2 = (temp + i2) & 0x7FF;
            temp_s3[i + temp2] = sp54[i + i2];
        }
    }
}

void func_808C17C8(GlobalContext* globalCtx, Vec3f* arg1, Vec3f* arg2, Vec3f* arg3, f32 arg4, s16 arg5) {
    s16 i;
    BossDodongoEffect* eff = (BossDodongoEffect*)globalCtx->specialEffects;

    for (i = 0; i < arg5; i++, eff++) {
        if (eff->unk_24 == 0) {
            eff->unk_24 = 1;
            eff->unk_0 = *arg1;
            eff->unk_C = *arg2;
            eff->unk_18 = *arg3;
            eff->unk_2C = arg4 / 1000.0f;
            eff->alpha = 255;
            eff->unk_25 = (s16)Rand_ZeroFloat(10.0f);
            break;
        }
    }
}

s32 BossDodongo_AteExplosive(BossDodongo* this, GlobalContext* globalCtx) {
    f32 dx;
    f32 dy;
    f32 dz;
    Actor* currentExplosive = globalCtx->actorCtx.actorLists[ACTORCAT_EXPLOSIVE].head;
    Actor* thisx = &this->actor;

    while (currentExplosive != NULL) {
        if (currentExplosive == thisx) {
            currentExplosive = currentExplosive->next;
            continue;
        }

        dx = currentExplosive->world.pos.x - this->mouthPos.x;
        dy = currentExplosive->world.pos.y - this->mouthPos.y;
        dz = currentExplosive->world.pos.z - this->mouthPos.z;

        if ((fabsf(dx) < 40.0f) && (fabsf(dy) < 40.0f) && (fabsf(dz) < 40.0f)) {
            Actor_Kill(currentExplosive);
            return true;
        }

        currentExplosive = currentExplosive->next;
    }

    return false;
}

void BossDodongo_Init(Actor* thisx, GlobalContext* globalCtx) {
    BossDodongo* this = THIS;
    s16 temp_v1;
    u16* temp_s1_3;
    u16* temp_s2;
    u32 temp_v0;

    globalCtx->specialEffects = &this->effects;
    Actor_ProcessInitChain(&this->actor, sInitChain);
    ActorShape_Init(&this->actor.shape, 9200.0f, ActorShadow_DrawCircle, 250.0f);
    Actor_SetScale(&this->actor, 0.01f);
    SkelAnime_Init(globalCtx, &this->skelAnime, &D_0601B310, &D_0600F0D8, NULL, NULL, 0);
    Animation_PlayLoop(&this->skelAnime, &D_0600F0D8);
    this->unk_1F8 = 1.0f;
    BossDodongo_SetupIntroCutscene(this, globalCtx);
    this->health = 12;
    this->fogMin = 995.0f;
    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->fogMax = 1000.0f;
    this->unk_224 = 2.0f;
    this->unk_228 = 9200.0f;
    Collider_InitJntSph(globalCtx, &this->collider);
    Collider_SetJntSph(globalCtx, &this->collider, &this->actor, &sJntSphInit, this->items);

    if (Flags_GetClear(globalCtx, globalCtx->roomCtx.curRoom.num)) { // KD is dead
        temp_s1_3 = SEGMENTED_TO_VIRTUAL(&D_03002B98);
        temp_s2 = SEGMENTED_TO_VIRTUAL(D_808C93C8);

        Actor_Kill(&this->actor);
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_DOOR_WARP1, CENTER_X, CENTER_Y,
                           CENTER_Z, 0, 0, 0, 0);
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_BG_BREAKWALL, CENTER_X, CENTER_Y, CENTER_Z, 0, 0, 0, 0x0040);
        // Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_ITEM_B_HEART, CENTER_X - 30.0f, CENTER_Y, CENTER_Z, 0, 0,
        // 0,
        //            0);

        for (temp_v1 = 0; temp_v1 < 2048; temp_v1++) {
            temp_v0 = temp_v1;
            temp_s1_3[temp_v0] = temp_s2[temp_v0];
        }
    }

    this->actor.flags &= ~1;
}

void BossDodongo_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BossDodongo* this = THIS;

    SkelAnime_Free(&this->skelAnime, globalCtx);
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void BossDodongo_SetupIntroCutscene(BossDodongo* this, GlobalContext* globalCtx) {
    s16 frames = Animation_GetLastFrame(&D_0600F0D8);

    Animation_Change(&this->skelAnime, &D_0600F0D8, 1.0f, 0.0f, frames, 0, -10.0f);
    this->actionFunc = BossDodongo_IntroCutscene;
    this->csState = 0;
    this->unk_1BC = 1;
}

void BossDodongo_IntroCutscene(BossDodongo* this, GlobalContext* globalCtx) {
    f32 phi_f0;
    Camera* camera = Gameplay_GetCamera(globalCtx, 0);
    Player* player = PLAYER;
    Vec3f sp60;
    Vec3f sp54;
    Vec3f sp48;

    // Make Navi hover over KD in the intro cutscene
    if (Player_InCsMode(globalCtx)) {
        globalCtx->actorCtx.targetCtx.unk_8C = &this->actor; // targetRequestActor
    }

    if (this->unk_196 != 0) {
        this->unk_196--;
    }

    if (this->unk_198 != 0) {
        this->unk_198--;
    }

    switch (this->csState) {
        case KD_INTRO_WAIT:
            if (player->actor.world.pos.y < -300.0f) {
                this->csState = KD_INTRO_1;
                player->fallStartHeight = -1280 + 30;
                this->cornerIndex = 1;
            }
            break;
        case KD_INTRO_1:
            func_80064520(globalCtx, &globalCtx->csCtx);
            func_8002DF54(globalCtx, &this->actor, 1);
            Gameplay_ClearAllSubCameras(globalCtx);
            this->cutsceneCamera = Gameplay_CreateSubCamera(globalCtx);
            Gameplay_ChangeCameraStatus(globalCtx, 0, 1);
            Gameplay_ChangeCameraStatus(globalCtx, this->cutsceneCamera, 7);
            this->csState = KD_INTRO_2;
            this->unk_196 = 60 - 29;
            this->unk_198 = 160 - 29;
            player->actor.world.pos.x = 0.0f;
            player->actor.world.pos.y = -800.0f;
            player->actor.world.pos.z = -4412.0f;
            player->linearVelocity = 0.0f;
            this->cameraEye.y = -1200;
            // fallthrough
        case KD_INTRO_2:
            if (player->actor.bgCheckFlags & 1) {
                player->actor.world.pos.x = 0.0f;
                player->actor.world.pos.y = -1280.0f;
                player->actor.world.pos.z = -4412.0f;
            }

            if (this->unk_198 > 130) {
                player->actor.world.pos.x = -0.0f;
                player->actor.world.pos.z = -4412.0f;

                player->actor.speedXZ = 0.0f;
                player->actor.shape.rot.y = player->actor.world.rot.y = 0x8000;

                this->cameraEye.x = 0.0f;
                this->cameraEye.z = player->actor.world.pos.z - 100.0f;

                this->cameraAt.x = player->actor.world.pos.x;
                this->cameraAt.y = player->actor.world.pos.y + 20.0f;
                this->cameraAt.z = player->actor.world.pos.z;
            }

            if (this->unk_198 < 60) {
                this->unk_1BC = 1;
            } else {
                this->unk_1BC = 2;
            }

            BossDodongo_Walk(this, globalCtx);

            if (this->unk_196 == 1) {
                Audio_SetBGM(0x100100FF);
            }

            if (this->unk_196 == 0) {
                Math_SmoothStepToF(&this->cameraEye.x, this->vec.x + 30.0f, 0.2f, this->unk_204 * 20.0f, 0.0f);
                Math_SmoothStepToF(&this->cameraEye.y, this->vec.y, 0.2f, this->unk_204 * 20.0f, 0.0f);
                Math_SmoothStepToF(&this->cameraEye.z, this->vec.z + 10.0f, 0.2f, this->unk_204 * 20.0f, 0.0f);
                Math_SmoothStepToF(&this->unk_204, 1.0f, 1.0f, 0.02f, 0.0f);
            } else {
                this->cameraAt.x = player->actor.world.pos.x;
                this->cameraAt.y = player->actor.world.pos.y + 20.0f;
                this->cameraAt.z = player->actor.world.pos.z;
            }

            if (this->unk_198 == 0) {
                this->csState = KD_INTRO_3;
                this->unk_19E = 0x14;
                this->unk_204 = 0.0f;
            }
            break;
        case KD_INTRO_3:
            BossDodongo_Walk(this, globalCtx);
            Math_SmoothStepToF(&this->unk_20C, sinf(this->unk_19E * 0.05f) * 0.1f, 1.0f, 0.01f, 0.0f);
            Math_SmoothStepToF(&this->cameraEye.x, this->vec.x + 90.0f, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraEye.y, this->vec.y + 50.0f, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraEye.z, this->vec.z, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.y, this->vec.y - 10.0f, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->unk_204, 1.0f, 1.0f, 0.02f, 0.0f);
            if (fabsf(player->actor.world.pos.x - this->actor.world.pos.x) < 200.0f) {
                this->csState = KD_INTRO_4;
                this->unk_196 = 30;
                this->unk_198 = 150;
                this->unk_204 = 0.0f;
                Animation_Change(&this->skelAnime, &D_06008EEC, 1.0f, 0.0f, Animation_GetLastFrame(&D_06008EEC), 2,
                                 -5.0f);
            }
            break;
        case KD_INTRO_4:
            Math_SmoothStepToF(&this->unk_20C, 0.0f, 1.0f, 0.01f, 0.0f);

            if (gSaveContext.eventChkInf[7] & 2) {
                phi_f0 = -50.0f;
            } else {
                phi_f0 = 0.0f;
            }

            Math_SmoothStepToF(&this->cameraEye.x, player->actor.world.pos.x + phi_f0 + 70.0f, 0.2f,
                               this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraEye.y, player->actor.world.pos.y + 10.0f, 0.2f, this->unk_204 * 20.0f,
                               0.0f);
            Math_SmoothStepToF(&this->cameraEye.z, player->actor.world.pos.z - 60.0f, 0.2f, this->unk_204 * 20.0f,
                               0.0f);

            Math_SmoothStepToF(&this->cameraAt.x, this->vec.x, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.y, this->vec.y, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.z, this->vec.z, 0.2f, this->unk_204 * 20.0f, 0.0f);
            Math_SmoothStepToF(&this->unk_204, 1.0f, 1.0f, 0.02f, 0.0f);

            if (this->unk_196 == 0) {
                SkelAnime_Update(&this->skelAnime);
                Math_SmoothStepToF(&this->unk_208, 0.05f, 1.0f, 0.005f, 0.0f);
            }

            if (this->unk_198 == 100) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_OTAKEBI);
            }

            if (this->unk_198 == 90) {
                // if (!(gSaveContext.eventChkInf[7] & 2)) {
                //    TitleCard_InitBossName(globalCtx, &globalCtx->actorCtx.titleCtx,
                //    SEGMENTED_TO_VIRTUAL(&D_06017410),
                //                           0xA0, 0xB4, 0x80, 0x28);
                //}
                Audio_SetBGM(0x1B);
            }

            if (this->unk_198 == 0) {
                camera->eye = this->cameraEye;
                camera->eyeNext = this->cameraEye;
                camera->at = this->cameraAt;
                func_800C08AC(globalCtx, this->cutsceneCamera, 0);
                this->cutsceneCamera = 0;
                func_80064534(globalCtx, &globalCtx->csCtx);
                func_8002DF54(globalCtx, &this->actor, 7);
                BossDodongo_SetupWalk(this);
                this->unk_1DA = 50;
                this->unk_1BC = 0;
                player->actor.shape.rot.y = -0x4002;
                gSaveContext.eventChkInf[7] |= 2;
            }
            break;
    }

    if (this->cutsceneCamera != 0) {
        if (this->unk_1B6 != 0) {
            this->unk_1B6--;
        }

        sp60.x = this->cameraEye.x;
        phi_f0 = sinf((this->unk_1B6 * 3.1415f * 90.0f) / 180.0f);
        sp60.y = (this->unk_1B6 * phi_f0 * 0.7f) + this->cameraEye.y;
        sp60.z = this->cameraEye.z;

        sp54.x = this->cameraAt.x;
        phi_f0 = sinf((this->unk_1B6 * 3.1415f * 90.0f) / 180.0f);
        sp54.y = (this->unk_1B6 * phi_f0 * 0.7f) + this->cameraAt.y;
        sp54.z = this->cameraAt.z;

        sp48.x = this->unk_20C;
        sp48.y = 1.0f;
        sp48.z = this->unk_20C;

        Gameplay_CameraSetAtEyeUp(globalCtx, this->cutsceneCamera, &sp54, &sp60, &sp48);
    }
}

void BossDodongo_SetupDamaged(BossDodongo* this) {
    if (this->actionFunc != BossDodongo_Damaged) {
        Animation_Change(&this->skelAnime, &D_06001074, 1.0f, 0.0f, Animation_GetLastFrame(&D_06001074), 2, -5.0f);
        this->actionFunc = BossDodongo_Damaged;
    }

    this->unk_1DA = 100;
}

void BossDodongo_SetupExplode(BossDodongo* this) {
    Animation_Change(&this->skelAnime, &D_0600E848, 1.0f, 0.0f, Animation_GetLastFrame(&D_0600E848), 2, -5.0f);
    this->actionFunc = BossDodongo_Explode;
    this->unk_1B0 = 10;
    this->unk_1C0 = 2;
    this->unk_1DA = 35;
    this->unk_1FC = 50.0f;
    this->unk_200 = 300.0f;
}

void BossDodongo_SetupWalk(BossDodongo* this) {
    Animation_Change(&this->skelAnime, &D_0601D934, 1.0f, 0.0f, Animation_GetLastFrame(&D_0601D934), 2, -10.0f);
    this->unk_1AA = 0;
    this->actionFunc = BossDodongo_Walk;
    this->unk_1DA = 0;
    this->actor.flags |= 1;
    this->unk_1E4 = 0.0f;
}

void BossDodongo_SetupRoll(BossDodongo* this) {
    Animation_Change(&this->skelAnime, &D_0600DF38, 1.0f, 0.0f, 59.0f, 2, -5.0f);
    this->actionFunc = BossDodongo_Roll;
    this->numWallCollisions = 0;
    this->unk_1DA = 27;
}

void BossDodongo_SetupBlowFire(BossDodongo* this) {
    this->actor.speedXZ = 0.0f;
    this->unk_1E4 = 0.0f;
    Animation_Change(&this->skelAnime, &D_060061D4, 1.0f, 0.0f, Animation_GetLastFrame(&D_060061D4), 2, 0.0f);
    this->actionFunc = BossDodongo_BlowFire;
    this->unk_1DA = 50;
    this->unk_1AE = 0;
}

void BossDodongo_SetupInhale(BossDodongo* this) {
    this->actor.speedXZ = 0.0f;
    Animation_Change(&this->skelAnime, &D_06008EEC, 1.0f, 0.0f, Animation_GetLastFrame(&D_06008EEC), 2, -5.0f);
    this->actionFunc = BossDodongo_Inhale;
    this->unk_1DA = 100;
    this->unk_1AC = 0;
    this->unk_1E2 = 1;
}

void BossDodongo_Damaged(BossDodongo* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToF(&this->unk_1F8, 1.0f, 0.5f, 0.02f, 0.001f);
    Math_SmoothStepToF(&this->unk_208, 0.05f, 1.0f, 0.005f, 0.0f);

    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(&D_06001074))) {
        BossDodongo_SetupRoll(this);
    }
}

void BossDodongo_Explode(BossDodongo* this, GlobalContext* globalCtx) {
    static Color_RGBA8 dustPrimColor = { 255, 255, 0, 255 };
    static Color_RGBA8 dustEnvColor = { 255, 10, 0, 255 };
    s16 pad;
    Vec3f dustVel;
    Vec3f dustAcell;
    Vec3f dustPos;
    s16 i;

    Math_SmoothStepToF(&this->unk_208, 0.05f, 1.0f, 0.005f, 0.0f);
    SkelAnime_Update(&this->skelAnime);

    if (this->unk_1DA == 0) {
        for (i = 0; i < 30; i++) {
            dustVel.x = Rand_CenteredFloat(20.0f);
            dustVel.y = Rand_CenteredFloat(20.0f);
            dustVel.z = Rand_CenteredFloat(20.0f);

            dustAcell.x = dustVel.x * -0.1f;
            dustAcell.y = dustVel.y * -0.1f;
            dustAcell.z = dustVel.z * -0.1f;

            dustPos.x = this->actor.world.pos.x + (dustVel.x * 3.0f);
            dustPos.y = this->actor.world.pos.y + 90.0f + (dustVel.y * 3.0f);
            dustPos.z = this->actor.world.pos.z + (dustVel.z * 3.0f);

            func_8002836C(globalCtx, &dustPos, &dustVel, &dustAcell, &dustPrimColor, &dustEnvColor, 500, 10, 10);
        }

        Animation_Change(&this->skelAnime, &D_06004E0C, 1.0f, 0.0f, Animation_GetLastFrame(&D_06004E0C), 2, -5.0f);
        this->actionFunc = BossDodongo_LayDown;
        Audio_PlayActorSound2(&this->actor, NA_SE_IT_BOMB_EXPLOSION);
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_DAMAGE);
        func_80033E88(&this->actor, globalCtx, 4, 10);
        this->health -= 2;

        // make sure not to die from the bomb explosion
        if (this->health <= 0) {
            this->health = 1;
        }
    }
}

void BossDodongo_LayDown(BossDodongo* this, GlobalContext* globalCtx) {
    this->unk_1BE = 10;
    Math_SmoothStepToF(&this->unk_1F8, 1.3f, 1.0f, 0.1f, 0.001f);
    SkelAnime_Update(&this->skelAnime);

    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(&D_06004E0C))) {
        Animation_Change(&this->skelAnime, &D_060042A8, 1.0f, 0.0f, Animation_GetLastFrame(&D_060042A8), 0, -5.0f);
        this->actionFunc = BossDodongo_Vulnerable;
        this->unk_1DA = 100;
    }
}

void BossDodongo_Vulnerable(BossDodongo* this, GlobalContext* globalCtx) {
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_DOWN - SFX_FLAG);
    this->unk_1BE = 10;
    Math_SmoothStepToF(&this->unk_1F8, 1.0f, 0.5f, 0.02f, 0.001f);
    Math_SmoothStepToF(&this->unk_208, 0.05f, 1.0f, 0.005f, 0.0f);
    SkelAnime_Update(&this->skelAnime);

    if (this->unk_1DA == 0) {
        Animation_Change(&this->skelAnime, &D_06009D10, 1.0f, 0.0f, Animation_GetLastFrame(&D_06009D10), 2, -5.0f);
        this->actionFunc = BossDodongo_GetUp;
    }
}

void BossDodongo_GetUp(BossDodongo* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);

    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(&D_06009D10))) {
        BossDodongo_SetupRoll(this);
    }
}

void BossDodongo_BlowFire(BossDodongo* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);

    if (Animation_OnFrame(&this->skelAnime, 12.0f)) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_CRY);
    }

    if (Animation_OnFrame(&this->skelAnime, 17.0f)) {
        this->unk_1C8 = 28;
    }

    if ((this->skelAnime.curFrame > 17.0f) && (this->skelAnime.curFrame < 35.0f)) {
        BossDodongo_SpawnFire(this, globalCtx, this->unk_1AE);
        this->unk_1AE++;
        Math_SmoothStepToF(&this->unk_244, 0.0f, 1.0f, 8.0f, 0.0f);
    }

    if (this->unk_1DA == 0) {
        BossDodongo_SetupRoll(this);
    }
}

void BossDodongo_Inhale(BossDodongo* this, GlobalContext* GlobalContext) {
    this->unk_1E2 = 1;

    if (this->unk_1AC > 20) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_BREATH - SFX_FLAG);
    }

    Math_SmoothStepToF(&this->unk_208, 0.05f, 1.0f, 0.005f, 0.0f);
    SkelAnime_Update(&this->skelAnime);

    if (this->unk_1DA == 0) {
        BossDodongo_SetupBlowFire(this);
    } else {
        this->unk_1AC++;

        if ((this->unk_1AC > 20) && (this->unk_1AC < 82) && BossDodongo_AteExplosive(this, GlobalContext)) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_DRINK);
            BossDodongo_SetupExplode(this);
        }
    }
}

Vec3f sCornerPos[] = {
    { -490.0f, 0.0f, -5430.0f },
    { -490.0f, 0.0f, -4430.0f }, // point in front of kd before cs
    { 490.0f, 0.0f, -4430.0f },
    { 490.0f, 0.0f, -5430.0f },
};

void BossDodongo_Walk(BossDodongo* this, GlobalContext* globalCtx) {
    Vec3f* sp4C;
    f32 sp48;
    f32 sp44;

    if (this->unk_1AA == 0) {
        if (Animation_OnFrame(&this->skelAnime, 14.0f)) {
            Animation_PlayLoop(&this->skelAnime, &D_0601CAE0);
            this->unk_1AA = 1;
        }
    } else if (this->unk_1BC != 2) {
        if (((s32)this->skelAnime.curFrame == 1) || ((s32)this->skelAnime.curFrame == 31)) {
            if ((s32)this->skelAnime.curFrame == 1) {
                Actor_SpawnFloorDust(globalCtx, &this->actor, &this->unk_410, 25.0f, 0xA, 8.0f, 0x1F4, 0xA, 0);
            } else {
                Actor_SpawnFloorDust(globalCtx, &this->actor, &this->unk_404, 25.0f, 0xA, 8.0f, 0x1F4, 0xA, 0);
            }

            if (this->unk_1BC != 0) {
                func_80078884(NA_SE_EN_DODO_K_WALK);
            } else {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_WALK);
            }

            if (this->cutsceneCamera == 0) {
                func_80033E88(&this->actor, globalCtx, 4, 10);
            } else {
                this->unk_1B6 = 10;
                func_800A9F6C(0.0f, 180, 20, 100);
            }
        }
    }

    SkelAnime_Update(&this->skelAnime);
    sp4C = &sCornerPos[this->cornerIndex];
    this->unk_1EC = 0.7f;
    Math_SmoothStepToF(&this->unk_1E4, this->unk_1EC * 4.0f, 1.0f, this->unk_1EC * 0.25f, 0.0f);
    Math_SmoothStepToF(&this->actor.world.pos.x, sp4C->x, 0.3f, this->unk_1E4, 0.0f);
    Math_SmoothStepToF(&this->actor.world.pos.z, sp4C->z, 0.3f, this->unk_1E4, 0.0f);
    sp48 = sp4C->x - this->actor.world.pos.x;
    sp44 = sp4C->z - this->actor.world.pos.z;
    Math_SmoothStepToF(&this->unk_1E8, 2000.0f, 1.0f, this->unk_1EC * 80.0f, 0.0f);
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(sp48, sp44) * 10430.378f, 5,
                       (this->unk_1EC * this->unk_1E8), 5);
    Math_SmoothStepToS(&this->unk_1C4, 0, 2, 2000, 0);

    if ((fabsf(sp48) <= 5.0f) && (fabsf(sp44) <= 5.0f)) {
        this->unk_1E8 = 0.0f;
        this->unk_1E4 = 0.0f;
        if (this->unk_1A2 == 0) {
            this->cornerIndex++;
            if (this->cornerIndex >= 4) {
                this->cornerIndex = 0;
            }
        } else {
            this->cornerIndex--;
            if (this->cornerIndex < 0) {
                this->cornerIndex = 3;
            }
        }
    }

    if ((this->unk_1DA == 0) && (this->unk_1BC == 0)) {
        if ((this->actor.xzDistToPlayer < 500.0f) && (this->unk_1A4 != 0) && !this->playerPosInRange) {
            BossDodongo_SetupInhale(this);
            BossDodongo_SpawnFire(this, globalCtx, -1);
        }

        if (!this->playerPosInRange && !this->playerYawInRange) {
            BossDodongo_SetupRoll(this);
        }
    }
}

void BossDodongo_Roll(BossDodongo* this, GlobalContext* globalCtx) {
    Vec3f* sp5C;
    Vec3f sp50;
    f32 sp4C;
    f32 sp48;

    this->actor.flags |= 0x1000000;
    SkelAnime_Update(&this->skelAnime);

    if (this->unk_1DA == 10) {
        this->actor.velocity.y = 15.0f;
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_CRY);
    }

    if (this->unk_1DA == 1) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_COLI2);
    }

    sp5C = &sCornerPos[this->cornerIndex];
    this->unk_1EC = 3.0f;

    if (this->unk_1DA == 0) {
        Math_SmoothStepToF(&this->unk_1E4, this->unk_1EC * 5.0f, 1.0f, this->unk_1EC * 0.25f, 0.0f);
        Math_SmoothStepToF(&this->actor.world.pos.x, sp5C->x, 1.0f, this->unk_1E4, 0.0f);
        Math_SmoothStepToF(&this->actor.world.pos.z, sp5C->z, 1.0f, this->unk_1E4, 0.0f);
        this->unk_1C4 += 2000;

        if (this->actor.bgCheckFlags & 1) {
            this->unk_228 = 7700.0f;
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_ROLL - SFX_FLAG);

            if ((this->unk_19E & 7) == 0) {
                Camera_AddQuake(&globalCtx->mainCamera, 2, 1, 8);
            }

            if ((this->unk_19E & 1) == 0) {
                Actor_SpawnFloorDust(globalCtx, &this->actor, &this->actor.world.pos, 40.0f, 3, 8.0f, 0x1F4, 0xA, 0);
            }
        }
    }

    sp4C = sp5C->x - this->actor.world.pos.x;
    sp48 = sp5C->z - this->actor.world.pos.z;
    Math_SmoothStepToF(&this->unk_1E8, 2000.0f, 1.0f, this->unk_1EC * 100.0f, 0.0f);
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_FAtan2F(sp4C, sp48) * 10430.378f, 5,
                       this->unk_1EC * this->unk_1E8, 0);

    if (fabsf(sp4C) <= 15.0f && fabsf(sp48) <= 15.0f) {
        this->numWallCollisions++;

        if (this->numWallCollisions >= 2) {
            if (this->unk_1A6 != 0) {
                this->unk_1A2 = 1 - this->unk_1A2;
            }

            this->unk_1E8 = 0.0f;
            this->unk_1E4 = 0.0f;
            BossDodongo_SetupWalk(this);
            this->unk_228 = 9200.0f;
            this->actor.velocity.y = 20.0f;
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_COLI);
            Camera_AddQuake(&globalCtx->mainCamera, 2, 6, 8);
            sp50.x = this->actor.world.pos.x;
            sp50.y = this->actor.world.pos.y + 60.0f;
            sp50.z = this->actor.world.pos.z;
            Actor_SpawnFlyingDust(globalCtx, &sp50, 250.0f, 40, 800, 10, 0);
            func_80033E88(&this->actor, globalCtx, 6, 15);
        } else {
            this->actor.velocity.y = 15.0f;
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_COLI2);
        }

        if (this->unk_1A2 == 0) {
            this->cornerIndex++;
            if (this->cornerIndex >= 4) {
                this->cornerIndex = 0;
            }
        } else {
            this->cornerIndex--;
            if (this->cornerIndex < 0) {
                this->cornerIndex = 3;
            }
        }
    }
}

Vec3f D_808CA428 = { 0.0f, 0.0f, 0.0f };
Vec3f D_808CA434 = { 0.0f, 0.0f, 0.0f };
Color_RGBA8 magmaPrimColor[] = { { 255, 255, 0, 255 }, { 0, 0, 0, 150 } };
Color_RGBA8 magmaEnvColor[] = { { 255, 0, 0, 255 }, { 0, 0, 0, 0 } };
Vec3f D_808CA450 = { 5000.0f, -2500.0f, 0.0f };

void BossDodongo_Update(Actor* thisx, GlobalContext* globalCtx) {
    BossDodongo* this = THIS;
    s16 new_var;
    u16* ptr1;
    u16* ptr2;
    Player* player = PLAYER;
    Player* player2 = PLAYER;
    s16 magmaScale;
    s16 i1;
    s16 phi_s0_3;
    s16 sp90;
    s16 magma2DrawMode;
    Vec3f sp84;
    f32 temp_f12;
    f32 temp_f10;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
    f32 sp50;
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f10_2;
    f32 temp_f12_2;
    GlobalContext* new_var2;
    this->unk_1E2 = 0;
    this->unk_19E++;

    if (this->unk_1DA != 0) {
        this->unk_1DA--;
    }

    if (this->unk_1DC != 0) {
        this->unk_1DC--;
    }

    if (this->unk_1DE != 0) {
        this->unk_1DE--;
    }

    if (this->unk_1C0 != 0) {
        this->unk_1C0--;
    }

    if (this->unk_1C8 != 0) {
        this->unk_1C8--;
    }

    temp_f0 = func_808C4F6C(this, globalCtx);

    if (temp_f0 > 0.0f) {
        this->unk_1A4 = temp_f0;
    } else {
        this->unk_1A4 = 0;
    }

    temp_f0 = func_808C50A8(this, globalCtx);

    if (temp_f0 > 0.0f) {
        this->unk_1A6 = temp_f0;
    } else {
        this->unk_1A6 = 0;
    }

    BossDodongo_PlayerYawCheck(this, globalCtx);
    BossDodongo_PlayerPosCheck(this, globalCtx);

    if (this->actionFunc == BossDodongo_Roll || this->actionFunc == BossDodongo_DeathCutscene) {
        this->isRolling = true;
    } else {
        this->isRolling = false;
    }

    this->actionFunc(this, globalCtx);

    thisx->shape.rot.y = thisx->world.rot.y;
    new_var2 = globalCtx;
    Math_SmoothStepToF(&thisx->shape.yOffset, this->unk_228, 1.0f, 100.0f, 0.0f);
    Actor_MoveForwardXZ(thisx);
    BossDodongo_UpdateDamage(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, thisx, 10.0f, 10.0f, 20.0f, 4);
    Math_SmoothStepToF(&this->unk_208, 0, 1, 0.001f, 0.0);
    Math_SmoothStepToF(&this->unk_20C, 0, 1, 0.001f, 0.0);

    if ((this->unk_19E % 128) == 0) {
        for (i1 = 0; i1 < 50; i1++) {
            this->unk_324[i1] = (Rand_ZeroOne() * 0.25f) + 0.5f;
        }
    }

    for (i1 = 0; i1 < 50; i1++) {
        this->unk_25C[i1] += this->unk_324[i1];
    }

    if (this->unk_1C8 != 0) {
        if (this->unk_1C8 >= 11) {
            Math_SmoothStepToF(&this->unk_240, (this->unk_1C8 & 1) ? (40.0f) : (60.0f), 1.0f, 50.0f, 0.0f);
        } else {
            Math_SmoothStepToF(&this->unk_240, 0.0f, 1, 10.0f, 0.0);
        }

        if ((globalCtx->envCtx.unk_8C[1][2] == 0) && (globalCtx->envCtx.unk_8C[0][2] == 0)) {
            globalCtx->envCtx.unk_8C[1][0] = (u8)this->unk_240;
            globalCtx->envCtx.unk_8C[1][1] = (u8)(this->unk_240 * 0.1f);
            new_var2->envCtx.unk_8C[0][0] = (u8)this->unk_240;
            new_var2->envCtx.unk_8C[0][1] = (u8)(this->unk_240 * 0.1f);
        }
    }

    if (this->unk_1BE != 0) {
        if (this->unk_1BE >= 1000) {
            Math_SmoothStepToF(&this->fogR, 30.0f, 1, 20.0f, 0.0);
            Math_SmoothStepToF(&this->fogG, 10.0f, 1, 20.0f, 0.0);
        } else {
            this->unk_1BE--;
            Math_SmoothStepToF(&this->fogR, 255.0f, 1, 20.0f, 0.0);
            Math_SmoothStepToF(&this->fogG, 0.0f, 1, 20.0f, 0.0);
        }

        Math_SmoothStepToF(&this->fogB, 0.0f, 1, 20.0f, 0.0);
        Math_SmoothStepToF(&this->fogMin, 900.0f, 1, 10.0f, 0.0);
        Math_SmoothStepToF(&this->fogMax, 1099.0f, 1, 10.0f, 0.0);
    } else {
        Math_SmoothStepToF(&this->fogR, new_var2->lightCtx.unk_07, 1, 5.0f, 0.0);
        Math_SmoothStepToF(&this->fogG, new_var2->lightCtx.unk_08, 1.0f, 5.0f, 0.0);
        Math_SmoothStepToF(&this->fogB, new_var2->lightCtx.unk_09, 1.0f, 5.0f, 0.0);
        Math_SmoothStepToF(&this->fogMin, globalCtx->lightCtx.unk_0A, 1.0, 5.0f, 0.0);
        Math_SmoothStepToF(&this->fogMax, 1000.0f, 1, 5.0f, 0.0);
    }

    if (player->actor.world.pos.y < -1000.0f) {
        magmaScale = 0;
        if (this->unk_224 > 1.9f) {
            phi_s0_3 = 1;
            magma2DrawMode = 0;
            sp90 = 0;
        } else if (this->unk_224 > 1.7f) {
            phi_s0_3 = 3;
            sp90 = 1;

            magma2DrawMode = 0;
        } else if (this->unk_224 > 1.4f) {
            phi_s0_3 = 7;
            sp90 = 3;
            magma2DrawMode = Rand_ZeroOne() * 1.9f;
        } else if (this->unk_224 > 1.1f) {
            phi_s0_3 = 7;
            sp90 = 4095;
            magma2DrawMode = Rand_ZeroOne() * 1.9f;
        } else {
            phi_s0_3 = 1;
            sp90 = -1;
            magma2DrawMode = 1;
            magmaScale = ((s16)(Rand_ZeroOne() * 50)) - 50;
        }

        if (player2->csMode >= 10) {
            phi_s0_3 = -1;
        }

        if ((this->unk_19E & phi_s0_3) == 0) {
            temp_f12 = Rand_ZeroOne() * 330.0f;
            temp_f10 = Rand_ZeroOne() * 6.28f;
            sp84.x = (sinf(temp_f10) * temp_f12) + CENTER_X;
            sp84.y = CENTER_Y;
            sp84.z = (cosf(temp_f10) * temp_f12) + CENTER_Z;
            EffectSsGMagma2_Spawn(globalCtx, &sp84, &magmaPrimColor[magma2DrawMode], &magmaEnvColor[magma2DrawMode],
                                  10 - (magma2DrawMode * 5), magma2DrawMode, magmaScale + 100);
        }

        if ((this->unk_19E & sp90) == 0) {
            sp6C = D_808CA428;
            sp60 = D_808CA434;
            sp50 = Rand_ZeroOne() * 330.0f;
            temp_f12_2 = Rand_ZeroOne() * 6.28f;
            temp_f10_2 = sinf(temp_f12_2) * sp50;
            sp54.x = temp_f10_2 + CENTER_X;
            sp54.y = CENTER_Y + 10.0f;
            sp54.z = (cosf(temp_f12_2) * sp50) + CENTER_Z;
            EffectSsGMagma_Spawn(globalCtx, &sp54);

            for (i1 = 0; i1 < 4; i1++) {
                sp60.y = 0.4f;
                sp60.x = Rand_CenteredFloat(0.5f);
                sp60.z = Rand_CenteredFloat(0.5f);
                sp50 = Rand_ZeroOne() * 330.0f;
                sp4C = Rand_ZeroOne() * 6.28f;
                sp54.x = (sinf(sp4C) * sp50) + CENTER_X;
                sp54.y = CENTER_Y;
                sp54.z = (cosf(sp4C) * sp50) + CENTER_Z;
                func_808C17C8(globalCtx, &sp54, &sp6C, &sp60, ((s16)Rand_ZeroFloat(2.0f)) + 6, 0x50);
            }
        }

        func_808C1554(&D_03002B98, D_808C73C8, this->unk_19E, this->unk_224);
    }

    if (this->unk_1C6 != 0) {
        ptr1 = SEGMENTED_TO_VIRTUAL(D_808C73C8);
        ptr2 = SEGMENTED_TO_VIRTUAL(D_808C93C8);
        // new_var = 20;
        for (i1 = -1; (i1 + 1) < 20; i1++) {
            new_var = this->unk_1C2 & 0x7FF;

            ptr1[new_var] = ptr2[new_var];
            this->unk_1C2 += 37;
        }

        Math_SmoothStepToF(&this->unk_224, 0.0f, 1.0f, 0.01f, 0.0f);
    }

    if (this->unk_1BC == 0) {
        if (this->actionFunc != BossDodongo_DeathCutscene) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }

        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);

        if (this->actionFunc == BossDodongo_Roll) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }
    }

    this->collider.elements[0].dim.scale = (this->actionFunc == BossDodongo_Inhale) ? 0.0f : 1.0f;

    for (i1 = 6; i1 < 19; i1++) {
        if (i1 != 12) {
            this->collider.elements[i1].dim.scale = (this->actionFunc == BossDodongo_Roll) ? 0.0f : 1.0f;
        }
    }

    if (this->unk_244 != 0) {
        gGameInfo->data[((5 * 6) * 16) + 64] = 1;
        gGameInfo->data[((5 * 6) * 16) + 65] = 255;
        gGameInfo->data[((5 * 6) * 16) + 66] = 80;
        gGameInfo->data[((5 * 6) * 16) + 67] = 0;
        gGameInfo->data[((5 * 6) * 16) + 68] = (u8)this->unk_244;
    } else {
        gGameInfo->data[((5 * 6) * 16) + 64] = 0;
    }

    Math_SmoothStepToF(&this->unk_244, 0.0f, 1.0f, 2.0f, 0.0f);
    BossDodongo_UpdateEffects(globalCtx);
}

s32 BossDodongo_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                 void* thisx) {
    f32 mtxScaleY;
    f32 mtxScaleZ;
    BossDodongo* this = THIS;

    if ((limbIndex == 6) || (limbIndex == 7)) {
        if (this->unk_25C) {}
        goto block_1;
    }
block_1:
    Matrix_JointPosition(pos, rot);

    if (*dList != NULL) {
        OPEN_DISPS(globalCtx->state.gfxCtx);

        mtxScaleZ = 1.0f;
        mtxScaleY = 1.0f;

        if ((limbIndex == 33) || (limbIndex == 48)) {
            mtxScaleY = mtxScaleZ = this->unk_1F8;
        }

        Matrix_Push();
        Matrix_Scale(1.0f, mtxScaleY, mtxScaleZ, MTXMODE_APPLY);

        if ((limbIndex != 6) && (limbIndex != 7)) {
            Matrix_RotateX(this->unk_25C[limbIndex] * 0.115f, MTXMODE_APPLY);
            Matrix_RotateY(this->unk_25C[limbIndex] * 0.13f, MTXMODE_APPLY);
            Matrix_RotateZ(this->unk_25C[limbIndex] * 0.1f, MTXMODE_APPLY);
            Matrix_Scale(1.0f - this->unk_208, this->unk_208 + 1.0f, 1.0f - this->unk_208, MTXMODE_APPLY);
            Matrix_RotateZ(-(this->unk_25C[limbIndex] * 0.1f), MTXMODE_APPLY);
            Matrix_RotateY(-(this->unk_25C[limbIndex] * 0.13f), MTXMODE_APPLY);
            Matrix_RotateX(-(this->unk_25C[limbIndex] * 0.115f), MTXMODE_APPLY);
        }

        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_boss_dodongo.c", 3822),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, *dList);
        Matrix_Pop();

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
    { s32 pad; } // Required to match
    return 1;
}

void BossDodongo_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    static Vec3f D_808CA45C = { 0.0f, 0.0f, 0.0f };
    static Vec3f D_808CA468 = { 11500.0f, -3000.0f, 0.0f };
    static Vec3f D_808CA474 = { 5000.0f, -2000.0f, 0.0f };
    static Vec3f D_808CA480 = { 8000.0f, 0.0f, 0.0f };
    static Vec3f D_808CA48C = { 8000.0f, 0.0f, 0.0f };
    BossDodongo* this = THIS;

    if (limbIndex == 6) {
        Matrix_MultVec3f(&D_808CA45C, &this->vec);
        Matrix_MultVec3f(&D_808CA450, &this->actor.focus.pos);
        Matrix_MultVec3f(&D_808CA468, &this->firePos);
        Matrix_MultVec3f(&D_808CA474, &this->mouthPos);
    } else if (limbIndex == 39) {
        Matrix_MultVec3f(&D_808CA480, &this->unk_410);
    } else if (limbIndex == 46) {
        Matrix_MultVec3f(&D_808CA48C, &this->unk_404);
    }
    Collider_UpdateSpheres(limbIndex, &this->collider);
}

void BossDodongo_Draw(Actor* thisx, GlobalContext* globalCtx) {
    BossDodongo* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);

    if ((this->actionFunc == BossDodongo_LayDown) || (this->actionFunc == BossDodongo_Vulnerable)) {
        POLY_OPA_DISP = Gfx_SetFog(POLY_OPA_DISP, 255, 0, 0, 0, 900, 1099);
    }

    Matrix_RotateZ(this->unk_23C, 1);
    Matrix_RotateX((this->unk_1C4 / 32768.0f) * 3.14159f, MTXMODE_APPLY);

    SkelAnime_DrawOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable, BossDodongo_OverrideLimbDraw,
                      BossDodongo_PostLimbDraw, this);

    POLY_OPA_DISP = func_800BC8A0(globalCtx, POLY_OPA_DISP);

    CLOSE_DISPS(globalCtx->state.gfxCtx);

    BossDodongo_DrawEffects(globalCtx);
}

f32 func_808C4F6C(BossDodongo* this, GlobalContext* globalCtx) {
    f32 xDiff;
    f32 zDiff;
    f32 sp2C;
    s32 pad;
    f32 temp_f2;
    f32 rotation;
    Player* player = PLAYER;

    xDiff = player->actor.world.pos.x - this->actor.world.pos.x;
    zDiff = player->actor.world.pos.z - this->actor.world.pos.z;

    rotation = Math_CosS(-this->actor.world.rot.y);
    sp2C = (Math_SinS(-this->actor.world.rot.y) * zDiff) + (rotation * xDiff);
    rotation = Math_SinS(-this->actor.world.rot.y);
    temp_f2 = (Math_CosS(-this->actor.world.rot.y) * zDiff) + (-rotation * xDiff);

    if ((fabsf(sp2C) < 150.0f) && (temp_f2 >= 100.0f) && (temp_f2 <= 2000.0f)) {
        return temp_f2;
    }
    return -1.0f;
}

f32 func_808C50A8(BossDodongo* this, GlobalContext* globalCtx) {
    f32 xDiff;
    f32 zDiff;
    f32 sp2C;
    s32 pad;
    f32 temp_f2;
    f32 rotation;
    Player* player = PLAYER;

    xDiff = player->actor.world.pos.x - this->actor.world.pos.x;
    zDiff = player->actor.world.pos.z - this->actor.world.pos.z;

    rotation = Math_CosS((-0x8000 - this->actor.world.rot.y));
    sp2C = (Math_SinS((-0x8000 - this->actor.world.rot.y)) * zDiff) + (rotation * xDiff);
    rotation = Math_SinS((-0x8000 - this->actor.world.rot.y));
    temp_f2 = (Math_CosS((-0x8000 - this->actor.world.rot.y)) * zDiff) + (-rotation * xDiff);

    if ((fabsf(sp2C) < 150.0f) && (100.0f <= temp_f2) && (temp_f2 <= 2000.0f)) {
        return temp_f2;
    }

    return -1.0f;
}

void BossDodongo_PlayerYawCheck(BossDodongo* this, GlobalContext* globalCtx) {
    s16 yawDiff = Actor_WorldYawTowardActor(&this->actor, &PLAYER->actor) - this->actor.world.rot.y;

    if ((yawDiff < 0x38E3) && (yawDiff >= -0x38E2)) {
        this->playerYawInRange = true;
    } else {
        this->playerYawInRange = false;
    }
}

void BossDodongo_PlayerPosCheck(BossDodongo* this, GlobalContext* globalCtx) {
    Vec3f* temp_v1;
    s16 i;

    this->playerPosInRange = false;

    for (i = 0; i < 4; i++) {
        temp_v1 = &sCornerPos[i];

        if ((fabsf(this->actor.world.pos.x - temp_v1->x) < 200.0f) &&
            (fabsf(this->actor.world.pos.z - temp_v1->z) < 200.0f)) {
            this->playerPosInRange = true;
            break;
        }
    }
}

void BossDodongo_SpawnFire(BossDodongo* this, GlobalContext* globalCtx, s16 params) {
    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_BDFIRE, this->vec.x, this->vec.y - 20.0f,
                       this->vec.z, 0, this->actor.shape.rot.y, 0, params);
}

void BossDodongo_UpdateDamage(BossDodongo* this, GlobalContext* globalCtx) {
    s32 pad;
    ColliderInfo* item1;
    u8 swordDamage;
    s32 damage;
    ColliderInfo* item2;
    s16 i;

    if ((this->health <= 0) && (this->actionFunc != BossDodongo_DeathCutscene)) {
        BossDodongo_SetupDeathCutscene(this);
        return;
    }

    if (this->unk_1C0 == 0) {
        if (this->actionFunc == BossDodongo_Inhale) {
            for (i = 0; i < 19; i++) {
                if (this->collider.elements[i].info.bumperFlags & 2) {
                    item1 = this->collider.elements[i].info.acHitInfo;
                    item2 = item1;

                    if ((item2->toucher.dmgFlags & 0x10) || (item2->toucher.dmgFlags & 4)) {
                        this->collider.elements[i].info.bumperFlags &= ~2;
                        this->unk_1C0 = 2;
                        BossDodongo_SetupWalk(this);
                        this->unk_1DA = 0x32;
                        return;
                    }
                }
            }
        }

        if (this->collider.elements->info.bumperFlags & 2) {
            this->collider.elements->info.bumperFlags &= ~2;
            item1 = this->collider.elements[0].info.acHitInfo;
            if ((this->actionFunc == BossDodongo_Vulnerable) || (this->actionFunc == BossDodongo_LayDown)) {
                swordDamage = damage = CollisionCheck_GetSwordDamage(item1->toucher.dmgFlags);

                if (damage != 0) {
                    Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_DAMAGE);
                    BossDodongo_SetupDamaged(this);
                    this->unk_1C0 = 12;
                    this->health -= swordDamage;
                }
            }
        }
    }
}

void BossDodongo_SetupDeathCutscene(BossDodongo* this) {
    this->actor.speedXZ = 0.0f;
    this->unk_1E4 = 0.0f;
    Animation_Change(&this->skelAnime, &D_06002D0C, 1.0f, 0.0f, Animation_GetLastFrame(&D_06002D0C), 2, -5.0f);
    this->actionFunc = BossDodongo_DeathCutscene;
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_DEAD);
    this->unk_1DA = 0;
    this->csState = 0;
    this->actor.flags = this->actor.flags & ~5;
    this->unk_1BC = 1;
    this->unk_1C0 = 48;
    Audio_SetBGM(0x100100FF);
}

#define END_X1 490.0f
#define END_X2 10.0f
#define END_Z1 4930.0f
#define END_Z2 5330.0f
#define END_Z3 4500.0f

#define END0 \
    { END_X1 + 60.0f, 0.0f, -END_Z1 - 20.0f }
#define END1 \
    { END_X2 + 20.0f, 0.0f, -END_Z2 - 60.0f }
#define END2 \
    { -END_X1 - 60.0f, 0.0f, -END_Z1 + 20.0f }
#define END3 \
    { END_X2 - 20.0f, 0.0f, -END_Z3 + 60.0f }

Vec3f EndSet1[] = { END0, END1, END2, END3 };
Vec3f EndSet0[] = { END3, END0, END1, END2 };

void BossDodongo_DeathCutscene(BossDodongo* this, GlobalContext* globalCtx) {
    static Color_RGBA8 magmaPrimColor2[] = { { 255, 255, 0, 255 }, { 0, 0, 0, 100 } };
    static Color_RGBA8 magmaEnvColor2[] = { { 255, 0, 0, 255 }, { 0, 0, 0, 0 } };
    static Color_RGBA8 dustPrimColor = { 255, 255, 255, 255 };
    static Color_RGBA8 dustEnvColor = { 255, 100, 0, 255 };
    Vec3f* cornerPos;
    Player* player;
    Vec3f sp198;
    Vec3f sp184;
    Vec3f effectPos;
    Vec3f dustPos;
    Vec3f sp70;
    f32 sp50;
    Camera* camera;
    f32 distToCorner;
    f32 xDistToCorner;
    f32 xDistToCamera;
    f32 zDistToCorner;
    f32 zDistToCamera;
    s16 colorIndex;
    f32 phi_f2;
    s16 i;
    Vec3f* phi_v0_2;
    Vec3f* phi_v0_3;
    f32 tempSin;
    f32 tempCos;
    f32 temp;
    player = PLAYER;

    SkelAnime_Update(&this->skelAnime);

    switch (this->csState) {
        case 0:
            this->csState = 5;
            func_80064520(globalCtx, &globalCtx->csCtx);
            func_8002DF54(globalCtx, &this->actor, 1);
            this->cutsceneCamera = Gameplay_CreateSubCamera(globalCtx);
            Gameplay_ChangeCameraStatus(globalCtx, 0, 3);
            Gameplay_ChangeCameraStatus(globalCtx, this->cutsceneCamera, 7);
            camera = Gameplay_GetCamera(globalCtx, 0);
            this->cameraEye.x = camera->eye.x;
            this->cameraEye.y = camera->eye.y;
            this->cameraEye.z = camera->eye.z;
            this->cameraAt.x = camera->at.x;
            this->cameraAt.y = camera->at.y;
            this->cameraAt.z = camera->at.z;
            break;
        case 5:
            tempSin = Math_SinS(this->actor.shape.rot.y - 0x1388) * 150.0f;
            tempCos = Math_CosS(this->actor.shape.rot.y - 0x1388) * 150.0f;
            Math_SmoothStepToF(&player->actor.world.pos.x, this->actor.world.pos.x + tempSin, 0.5f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->actor.world.pos.z, this->actor.world.pos.z + tempCos, 0.5f, 5.0f, 0.0f);

            Math_SmoothStepToF(&this->unk_208, 0.07f, 1.0f, 0.005f, 0.0f);
            tempSin = Math_SinS(this->actor.world.rot.y) * 230.0f;
            tempCos = Math_CosS(this->actor.world.rot.y) * 230.0f;
            Math_SmoothStepToF(&this->cameraEye.x, this->actor.world.pos.x + tempSin, 0.2f, 50.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraEye.y, this->actor.world.pos.y + 20.0f, 0.2f, 50.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraEye.z, this->actor.world.pos.z + tempCos, 0.2f, 50.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraAt.x, this->actor.world.pos.x, 0.2f, 30.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraAt.y, this->actor.focus.pos.y - 70.0f, 0.2f, 30.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraAt.z, this->actor.world.pos.z, 0.2f, 30.0f, 0.1f);
            // D_06002D0C = roaring death thing
            // D_0600DF38 = begin roll
            if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(&D_06002D0C)) != 0) {
                Animation_Change(&this->skelAnime, &D_06003CF8, 1.0f, 0.0f, Animation_GetLastFrame(&D_06003CF8), 2,
                                 -1.0f);
                this->csState = 6;
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_BG_BREAKWALL, CENTER_X, CENTER_Y + 10.0f, CENTER_Z,
                            0, 0, 0, 0x0040);
            }
            break;
        case 6:
            Math_SmoothStepToF(&this->cameraAt.x, this->actor.world.pos.x, 0.2f, 30.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraAt.y, (this->actor.world.pos.y - 70.0f) + 130.0f, 0.2f, 20.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraAt.z, this->actor.world.pos.z, 0.2f, 30.0f, 0.1f);

            if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(&D_06003CF8))) {
                Animation_Change(&this->skelAnime, &D_0600DF38, 1.0f, 30.0f, 59.0f, 2, -1.0f);
                this->csState = 7;
                this->unk_228 = 7700.0f;
                this->unk_204 = 0.0f;
                this->unk_1E4 = 0.0f;
                this->unk_19E = 0;
                this->numWallCollisions = 0;
            }
            break;
        case 7:
            this->unk_1C4 += 0x7D0;
            Math_SmoothStepToF(&this->cameraAt.x, this->actor.world.pos.x, 0.2f, 30.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.y, (this->actor.world.pos.y - 70.0f) + 130.0f, 0.2f, 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.z, this->actor.world.pos.z, 0.2f, 30.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraEye.x, CENTER_X, 0.1f, this->unk_204 * 5.0f, 0.1f);
            Math_SmoothStepToF(&this->cameraEye.z, CENTER_Z, 0.1f, this->unk_204 * 5.0f, 0.1f);
            Math_SmoothStepToF(&this->unk_204, 1.0f, 1.0f, 0.1f, 0.0f);
            if (this->unk_1DA == 1) {
                this->csState = 8;
                this->actor.speedXZ = this->unk_1E4 / 1.5f;
                if (this->unk_1A2 == 0) {
                    this->unk_238 = 250.0f;
                } else {
                    this->unk_238 = -250.0f;
                }
                this->unk_1DA = 1000;
                this->unk_234 = 2000.0f;
            } else {
                cornerPos = &sCornerPos[this->cornerIndex];
                this->unk_1EC = 3.0f;
                Math_SmoothStepToF(&this->unk_1E4, this->unk_1EC * 5.0f, 1.0f, this->unk_1EC * 0.25f, 0.0f);
                xDistToCorner = cornerPos->x - this->actor.world.pos.x;
                zDistToCorner = cornerPos->z - this->actor.world.pos.z;
                distToCorner = sqrtf(SQ(xDistToCorner) + SQ(zDistToCorner));
                phi_f2 = distToCorner - 200.0f;
                if ((distToCorner < 200.0f) || (this->unk_1DA != 0)) {
                    phi_f2 = 0.0f;
                }
                phi_f2 = CLAMP_MAX(phi_f2, 70.0f);
                this->unk_23C = (Math_SinS(this->unk_19E * 1000) * -50.0f) / 100.0f;

                sp198.x = Math_SinS(this->unk_19E * 1000) * phi_f2;
                sp198.y = 0.0f;
                sp198.z = 0.0f;

                Matrix_RotateY(this->actor.shape.rot.y * (M_PI / 0x8000), MTXMODE_NEW); // 0.0000958738f
                Matrix_MultVec3f(&sp198, &sp184);

                Math_SmoothStepToF(&this->actor.world.pos.x, cornerPos->x + sp184.x, 1.0f, this->unk_1E4, 0.0f);
                Math_SmoothStepToF(&this->actor.world.pos.z, cornerPos->z + sp184.z, 1.0f, this->unk_1E4, 0.0f);
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_ROLL - SFX_FLAG);
                if ((this->unk_19E & 7) == 0) {
                    Camera_AddQuake(&globalCtx->mainCamera, 2, 1, 8);
                }
                if ((this->unk_19E & 1) == 0) {
                    Actor_SpawnFloorDust(globalCtx, &this->actor, &this->actor.world.pos, 40.0f, 3, 8.0f, 0x1F4, 0xA,
                                         0);
                }
                xDistToCorner = cornerPos->x - this->actor.world.pos.x;
                zDistToCorner = cornerPos->z - this->actor.world.pos.z;
                Math_SmoothStepToF(&this->unk_1E8, 1500.0f, 1.0f, this->unk_1EC * 100.0f, 0.0f);
                Math_SmoothStepToS(&this->actor.world.rot.y, (Math_FAtan2F(xDistToCorner, zDistToCorner) * 10430.378f),
                                   5, (this->unk_1EC * this->unk_1E8), 0);

                if ((fabsf(xDistToCorner) <= 15.0f) && (fabsf(zDistToCorner) <= 15.0f)) {
                    this->actor.velocity.y = 15.0f;
                    Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_COLI2); // ?
                    if (this->unk_1A2 == 0) {
                        this->cornerIndex = this->cornerIndex + 1;
                        if (this->cornerIndex >= 4) {
                            this->cornerIndex = 0;
                        }
                    } else {
                        this->cornerIndex--;
                        if (this->cornerIndex < 0) {
                            this->cornerIndex = 3;
                        }
                    }
                    this->unk_1DA = 0xA;
                    dustPos.x = this->actor.world.pos.x;
                    dustPos.y = this->actor.world.pos.y + 60.0f;
                    dustPos.z = this->actor.world.pos.z;
                    Actor_SpawnFlyingDust(globalCtx, &dustPos, 250.0f, 0x28, 0x320, 0xA, 0);
                }
            }
            break;
        case 8:
        case 9:
            if (this->unk_1DA == 884) {
                Animation_Change(&this->skelAnime, &D_060042A8, 1.0f, 0.0f, (f32)Animation_GetLastFrame(&D_060042A8), 0,
                                 -20.0f);
                xDistToCamera = this->cameraEye.x - this->actor.world.pos.x;
                zDistToCamera = this->cameraEye.z - this->actor.world.pos.z;
                this->unk_22C = sqrtf(SQ(xDistToCamera) + SQ(zDistToCamera));
                this->unk_230 = Math_FAtan2F(xDistToCamera, zDistToCamera);
                this->unk_1DC = 350;
                this->csState = 9;
            }
            if (this->unk_1DA < 854) {
                for (i = 0; i < 2; i++) {
                    func_808C12C4(D_808C7000, this->unk_1CC);
                    if (this->unk_1CC < 256) {
                        this->unk_1CC++;
                    }
                }
            }
            if (this->unk_1DA < 984) {
                Math_SmoothStepToS(&this->unk_1C4, -0x4000, 0xA, 0x12C, 0);
            }
            if (this->unk_1DA == 904) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_END);
            }
            if (this->unk_1DA < 854) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_LAST - SFX_FLAG);
            }
            if (this->unk_1DA == 960) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_LAVA);
            }
            if (this->unk_1DA < 960) {
                Math_SmoothStepToF(&this->actor.shape.shadowScale, 0.0f, 1.0f, 10.0f, 0.0f);
                if (this->unk_1DA >= 710) {

                    if (this->unk_1DA == 710) {
                        static Vec3f D_808CA498[] = {
                            { END_X1, -1280.0f, -END_Z1 },
                            { END_X2, -1280.0f, -END_Z2 },
                            { -END_X1, -1280.0f, -END_Z1 },
                            { END_X2, -1280.0f, -END_Z3 },
                        };
                        static Vec3f D_808CA4C8[] = {
                            { END_X2, -1280.0f, -END_Z3 },
                            { END_X1, -1280.0f, -END_Z1 },
                            { END_X2, -1280.0f, -END_Z2 },
                            { -END_X1, -1280.0f, -END_Z1 },
                        };
                        this->unk_1C6 = 1;
                        if (this->unk_1A2 == 0) {
                            phi_v0_2 = &D_808CA4C8[this->cornerIndex];
                        } else {
                            phi_v0_2 = &D_808CA498[this->cornerIndex];
                        }
                        player->actor.world.pos.x = phi_v0_2->x;
                        player->actor.world.pos.z = phi_v0_2->z;
                        this->unk_204 = 0.0f;
                    }
                    if (this->unk_1DA >= 885) {
                        Math_SmoothStepToF(&this->unk_228, 200.0, 0.2f, 100.0f, 0.0f);
                    } else {
                        Math_SmoothStepToF(&this->unk_228, -6600.0f, 0.2f, 30.0f, 0.0f);
                    }

                    {
                        static Vec3f dustVel = { 0.0f, 0.0f, 0.0f };
                        static Vec3f dustAcell = { 0.0f, 1.0f, 0.0f };
                        effectPos.x = Rand_CenteredFloat(120.0f) + this->actor.world.pos.x;
                        effectPos.y = Rand_ZeroFloat(50.0f) + this->actor.world.pos.y;
                        effectPos.z = Rand_CenteredFloat(120.0f) + this->actor.world.pos.z;
                        func_8002836C(globalCtx, &effectPos, &dustVel, &dustAcell, &dustPrimColor, &dustEnvColor, 0x1F4,
                                      0xA, 0xA);
                        effectPos.x = Rand_CenteredFloat(120.0f) + this->actor.world.pos.x;
                        effectPos.y = CENTER_Y;
                        effectPos.z = Rand_CenteredFloat(120.0f) + this->actor.world.pos.z;
                        colorIndex = (Rand_ZeroOne() * 1.9f);
                        EffectSsGMagma2_Spawn(globalCtx, &effectPos, &magmaPrimColor2[colorIndex],
                                              &magmaEnvColor2[colorIndex], 10 - (colorIndex * 5), colorIndex,
                                              (s16)(Rand_ZeroOne() * 100.0f) + 100);
                    }
                }
            } else {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_DODO_K_ROLL - SFX_FLAG);
                if ((this->unk_19E & 1) == 0) {
                    Actor_SpawnFloorDust(globalCtx, &this->actor, &this->actor.world.pos, 40.0f, 3, 8.0f, 0x1F4, 0xA,
                                         0);
                }
            }
            Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 0.2f, 0.1f, 0.0f);
            this->actor.world.rot.y += (s16)this->unk_238;
            this->unk_1C4 += (s16)this->unk_234;
            if (this->unk_1DA >= 0x367) {
                if (this->unk_1A2 == 0) {
                    if (this->unk_238 < 450.0f) {
                        this->unk_238 += 10.0f;
                    }
                } else if (-450.0f < this->unk_238) {
                    this->unk_238 -= 10.0f;
                }
            } else {
                Math_SmoothStepToF(&this->unk_238, 0.0f, 0.05f, 40.0f, 0.0f);
            }
            Math_SmoothStepToF(&this->unk_234, 0.0f, 0.2f, 17.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.x, this->actor.world.pos.x, 0.2f, 30.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.y, (this->actor.world.pos.y - 70.0f) + 130.0f, 0.2f, 20.0f, 0.0f);
            Math_SmoothStepToF(&this->cameraAt.z, this->actor.world.pos.z, 0.2f, 30.0f, 0.0f);
            if (this->csState == 9) {
                if (this->unk_1DA < 0x2C6) {
                    if (this->unk_1A2 == 0) {
                        phi_v0_3 = &EndSet0[this->cornerIndex];
                    } else {
                        phi_v0_3 = &EndSet1[this->cornerIndex];
                    }

                    Math_SmoothStepToF(&this->cameraEye.x, phi_v0_3->x, 0.2f, this->unk_204 * 20.0f, 0.0f);
                    Math_SmoothStepToF(&this->cameraEye.y, player->actor.world.pos.y + 30.0f, 0.1f,
                                       this->unk_204 * 20.0f, 0.0f);
                    Math_SmoothStepToF(&this->cameraEye.z, phi_v0_3->z, 0.1f, this->unk_204 * 20.0f, 0.0f);
                    Math_SmoothStepToF(&this->unk_204, 1.0f, 1.0f, 0.02f, 0.0f);
                } else {
                    f32 temp;
                    if (this->unk_1A2 == 0) {
                        this->unk_230 += 0.01f;
                    } else {
                        this->unk_230 -= 0.01f;
                    }
                    Math_SmoothStepToF(&this->unk_22C, 220.0f, 0.1f, 5.0f, 0.1f);
                    temp = sinf(this->unk_230);
                    tempSin = temp * this->unk_22C;
                    temp = cosf(this->unk_230);
                    tempCos = temp * this->unk_22C;
                    Math_SmoothStepToF(&this->cameraEye.x, this->actor.world.pos.x + tempSin, 0.2f, 50.0f, 0.0f);
                    Math_SmoothStepToF(&this->cameraEye.y, this->actor.world.pos.y + 20.0f, 0.2f, 50.0f, 0.0f);
                    Math_SmoothStepToF(&this->cameraEye.z, this->actor.world.pos.z + tempCos, 0.2f, 50.0f, 0.0f);
                    Math_SmoothStepToF(&this->unk_23C, 0.0f, 0.2f, 0.01f, 0.0f);
                }
            } else {

                if (this->unk_1A2 == 0) {
                    Math_SmoothStepToF(&this->unk_23C, -0.5f, 0.2f, 0.05f, 0.0f);
                } else {
                    Math_SmoothStepToF(&this->unk_23C, 0.5f, 0.2f, 0.05f, 0.0f);
                }

                Math_SmoothStepToF(&this->cameraEye.x, CENTER_X, 0.1f, this->unk_204 * 5.0f, 0.1f);
                Math_SmoothStepToF(&this->cameraEye.z, CENTER_Z, 0.1f, this->unk_204 * 5.0f, 0.1f);
                Math_SmoothStepToF(&this->unk_204, 1.0f, 1.0f, 0.05f, 0.0f);
            }

            if (this->unk_1DA == 820) {
                Audio_SetBGM(0x21);
                // Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_ITEM_B_HEART,
                //             Math_SinS(this->actor.shape.rot.y) * -50.0f + this->actor.world.pos.x,
                //             this->actor.world.pos.y,
                //             Math_CosS(this->actor.shape.rot.y) * -50.0f + this->actor.world.pos.z, 0, 0, 0, 0);
            }
            if (this->unk_1DA == 600) {
                camera = Gameplay_GetCamera(globalCtx, 0);
                camera->eye = this->cameraEye;
                camera->eyeNext = this->cameraEye;
                camera->at = this->cameraAt;
                func_800C08AC(globalCtx, this->cutsceneCamera, 0);
                this->unk_1BC = 0;
                this->cutsceneCamera = 0;
                this->csState = 100;
                Gameplay_ChangeCameraStatus(globalCtx, 0, 7);
                func_80064534(globalCtx, &globalCtx->csCtx);
                func_8002DF54(globalCtx, &this->actor, 7);
                Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_DOOR_WARP1, CENTER_X, CENTER_Y,
                                   CENTER_Z, 0, 0, 0, 0);
                this->skelAnime.playSpeed = 0.0f;
                Flags_SetClear(globalCtx, globalCtx->roomCtx.curRoom.num);
            }
        case 100:
            if ((this->unk_1DA < 0x2C6) && (Rand_ZeroOne() < 0.5f)) {
                static Color_RGBA8 D_808CA568 = { 0x00, 0x00, 0x00, 0x64 };
                static Color_RGBA8 D_808CA56C = { 0x00, 0x00, 0x00, 0x00 };
                sp70.x = Rand_CenteredFloat(60.0f) + this->actor.focus.pos.x;
                sp70.y = (Rand_ZeroOne() * 50.0f) + -1498.76f;
                sp70.z = Rand_CenteredFloat(60.0f) + this->actor.focus.pos.z;
                EffectSsGMagma2_Spawn(globalCtx, &sp70, &D_808CA568, &D_808CA56C, 5, 1,
                                      (s16)(Rand_ZeroOne() * 50.0f) + 50);
            }
            break;
    }
    if (this->cutsceneCamera != 0) {
        Gameplay_CameraSetAtEye(globalCtx, this->cutsceneCamera, &this->cameraAt, &this->cameraEye);
    }
}

void BossDodongo_UpdateEffects(GlobalContext* globalCtx) {
    BossDodongoEffect* eff = (BossDodongoEffect*)globalCtx->specialEffects;
    static Color_RGB8 effectColors[] = { { 255, 128, 0 }, { 255, 0, 0 }, { 255, 255, 0 }, { 255, 0, 0 } };
    s16 colorIndex;
    s16 i;

    for (i = 0; i < 80; i++, eff++) {
        if (eff->unk_24 != 0) {
            eff->unk_0.x += eff->unk_C.x;
            eff->unk_0.y += eff->unk_C.y;
            eff->unk_0.z += eff->unk_C.z;
            eff->unk_25++;
            eff->unk_C.x += eff->unk_18.x;
            eff->unk_C.y += eff->unk_18.y;
            eff->unk_C.z += eff->unk_18.z;
            if (eff->unk_24 == 1) {
                colorIndex = eff->unk_25 % 4;
                eff->color.r = effectColors[colorIndex].r;
                eff->color.g = effectColors[colorIndex].g;
                eff->color.b = effectColors[colorIndex].b;
                eff->alpha -= 20;
                if (eff->alpha <= 0) {
                    eff->alpha = 0;
                    eff->unk_24 = 0;
                }
            }
        }
    }
}

void BossDodongo_DrawEffects(GlobalContext* globalCtx) {
    MtxF* unkMtx;
    s16 i;
    u8 phi_s3 = 0;
    BossDodongoEffect* eff;
    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;

    eff = (BossDodongoEffect*)globalCtx->specialEffects;

    OPEN_DISPS(gfxCtx);

    func_80093D84(globalCtx->state.gfxCtx);
    unkMtx = &globalCtx->mf_11DA0;

    for (i = 0; i < 80; i++, eff++) {
        if (eff->unk_24 == 1) {
            gDPPipeSync(POLY_XLU_DISP++);

            if (phi_s3 == 0) {
                gSPDisplayList(POLY_XLU_DISP++, D_06009D50);
                phi_s3++;
            }

            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, eff->color.r, eff->color.g, eff->color.b, eff->alpha);
            Matrix_Translate(eff->unk_0.x, eff->unk_0.y, eff->unk_0.z, MTXMODE_NEW);
            func_800D1FD4(unkMtx);
            Matrix_Scale(eff->unk_2C, eff->unk_2C, 1.0f, MTXMODE_APPLY);
            gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(gfxCtx, "../z_boss_dodongo.c", 5253),
                      G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gSPDisplayList(POLY_XLU_DISP++, D_06009DD0);
        }
    }

    CLOSE_DISPS(gfxCtx);
}
