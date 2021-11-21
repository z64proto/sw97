/*
 * File: z_en_elf.c
 * Overlay: ovl_En_Elf
 * Description: Fairy
 */

#include "z_en_elf.h"
#include "objects/gameplay_keep/gameplay_keep.h"

// #define DEBUG_NAVI // uncomment to print out debug info

#define FLAGS 0x02000030

#define THIS ((EnElf*)thisx)

#define FAIRY_FLAG_TIMED (1 << 8)
#define FAIRY_FLAG_BIG (1 << 9)

void EnElf_Init(Actor* thisx, GlobalContext* globalCtx);
void EnElf_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnElf_Update(Actor* thisx, GlobalContext* globalCtx);
void EnElf_Draw(Actor* thisx, GlobalContext* globalCtx);
void En_Elf_actor_move_link(Actor* thisx, GlobalContext* globalCtx);
void En_Elf_actor_move_talk(Actor* thisx, GlobalContext* globalCtx);
void En_Elf_actor_move_talk_naby0(Actor* thisx, GlobalContext* globalCtx);
void En_Elf_actor_move_talk_saria0(Actor* thisx, GlobalContext* globalCtx);
void En_Elf_actor_move_talk_saria1(Actor* thisx, GlobalContext* globalCtx);
void En_Elf_actor_move_talk_saria2(Actor* thisx, GlobalContext* globalCtx);

// Navi
void move_normal(EnElf* this, GlobalContext* globalCtx);

// Healing Fairies
void move_floating(EnElf* this, GlobalContext* globalCtx);
void move_runaway(EnElf* this, GlobalContext* globalCtx);

// Healing Fairies Revive From Death
void move_regenerate(EnElf* this, GlobalContext* globalCtx);
void move_regenerate1(EnElf* this, GlobalContext* globalCtx);

// Kokiri Fairies
void move_option(EnElf* this, GlobalContext* globalCtx);

// Fairy Spawner
void move_stop(EnElf* this, GlobalContext* globalCtx);

// Move(?) functions
void floating_mode_check(EnElf* this, GlobalContext* globalCtx);
void check_revise_circle2(EnElf* this, GlobalContext* globalCtx);
void check_revise_circle(EnElf* this, GlobalContext* globalCtx);
void check_revise_omega(EnElf* this, GlobalContext* globalCtx);
void runaway_mode_check(EnElf* this, GlobalContext* globalCtx);
void interest_mode_check(EnElf* this, GlobalContext* globalCtx);

// misc
void elf_egg_color_check(EnElf* this, GlobalContext* globalCtx);
void check_mode_z_en_elf(EnElf* this, GlobalContext* globalCtx);
void EnElf_SpawnSparkles(EnElf* this, GlobalContext* globalCtx, s32 sparkleLife);
void EnElf_GetCutsceneNextPos(Vec3f* vec, GlobalContext* globalCtx, s32 action);

const ActorInit En_Elf_InitVars = {
    ACTOR_EN_ELF,
    ACTORCAT_MISC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnElf),
    (ActorFunc)EnElf_Init,
    (ActorFunc)EnElf_Destroy,
    (ActorFunc)EnElf_Update,
    (ActorFunc)EnElf_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 8, ICHAIN_STOP),
};

static Color_RGBAf sInnerColors[] = {
    { 255.0f, 255.0f, 255.0f, 255.0f },
    { 255.0f, 220.0f, 220.0f, 255.0f },
};

static Color_RGBAf sOuterColors[] = {
    { 255.0f, 255.0f, 255.0f, 255.0f },
    { 255.0f, 50.0f, 100.0f, 255.0f },
};

typedef struct {
    u8 r, g, b;
} FairyColorFlags;

static FairyColorFlags sColorFlags[] = {
    { 0, 0, 0 }, { 1, 0, 0 }, { 1, 2, 0 }, { 1, 0, 2 }, { 0, 1, 0 }, { 2, 1, 0 }, { 0, 1, 2 },
    { 0, 0, 1 }, { 2, 0, 1 }, { 0, 2, 1 }, { 1, 1, 0 }, { 1, 0, 1 }, { 0, 1, 1 },
};

void EnElf_SetupAction(EnElf* this, EnElfActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void En_Elf_actor_set_status(EnElf* this, s32 arg1) {
    this->active_mode = arg1;

    switch (this->active_mode) {
        case 0:
            this->speed_rad_v = 0x400;
            this->speed_rad_h = 0x200;
            this->revise = check_revise_circle;
            this->disp_counter = 100;
            this->radius_v = 5.0f;
            this->radius_h = 20.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 12:
            this->speed_rad_v = 0x400;
            this->speed_rad_h = 0x200;
            this->revise = check_revise_circle;
            this->disp_counter = 100;
            this->radius_v = 1.0f;
            this->radius_h = 5.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 10:
            this->speed_rad_v = 0x400;
            this->speed_rad_h = 0;
            this->revise = check_revise_circle;
            this->radius_h = 0.0f;
            this->radius_v = 5.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 9:
            this->speed_rad_v = 0x1000;
            this->speed_rad_h = 0x200;
            this->revise = check_revise_circle;
            this->radius_v = 3.0f;
            this->radius_h = 10.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 7:
            if (this->spawnMode == 2) {
                this->revise = check_revise_circle;
                this->speed_rad_v = 0x1E;
                this->disp_counter = 1;
                this->radius_v = 0.0f;
                this->radius_h = 0.0f;
                this->skelAnime.playSpeed = 1.0f;
            } else {
                this->speed_rad_v = 0x400;
                this->speed_rad_h = 0x200;
                this->revise = check_revise_circle;
                this->disp_counter = 100;
                this->radius_v = 5.0f;
                this->radius_h = 20.0f;
                this->skelAnime.playSpeed = 1.0f;
            }
            break;
        case 8:
            this->speed_rad_v = 0x1000;
            this->speed_rad_h = 0x200;
            this->revise = check_revise_circle;
            this->radius_v = 0.0f;
            this->radius_h = 0.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 1:
            this->speed_rad_v = 0x1000;
            this->speed_rad_h = 0x800;
            this->revise = check_revise_circle;
            this->radius_v = 5.0f;
            this->radius_h = 7.5f;
            this->skelAnime.playSpeed = 2.0f;
            break;
        case 2:
            this->speed_rad_v = 0x400;
            this->speed_rad_h = 0x1000;
            this->revise = check_revise_circle2;
            this->radius_v = 10.0f;
            this->radius_h = 20.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 3:
            this->speed_rad_h = 0x600;
            this->revise = check_revise_omega;
            this->radius_h = 1.0f;
            this->radius_v = 1.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
        case 4:
            this->speed_rad_h = 0x800;
            this->revise = check_revise_omega;
            this->radius_v = 20.0f;
            this->radius_h = 10.0;
            this->skelAnime.playSpeed = 2.0f;
            break;
        case 5:
            this->speed_rad_h = 0x200;
            this->revise = check_revise_omega;
            this->radius_v = 10.0f;
            this->radius_h = 10.0f;
            this->skelAnime.playSpeed = 0.5f;
            break;
        case 6:
            this->speed_rad_v = 0x1000;
            this->speed_rad_h = 0x800;
            this->revise = check_revise_circle;
            this->radius_v = 60.0f;
            this->radius_h = 20.0f;
            this->skelAnime.playSpeed = 2.0f;
            break;
        case 11:
            this->speed_rad_v = 0x400;
            this->speed_rad_h = 0x2000;
            this->revise = check_revise_circle;
            this->disp_counter = 42;
            this->radius_v = 5.0f;
            this->radius_h = 1.0f;
            this->skelAnime.playSpeed = 1.0f;
            break;
    }
}

s32 goto_home_check(Vec3f* this, Vec3f* arg1, f32 arg2) {
    return SQ(arg2) < (SQ(arg1->x - this->x) + SQ(arg1->z - this->z));
}

void interest_mode_check(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if (!goto_home_check(&this->actor.world.pos, &player->actor.world.pos, 30.0f)) {
        this->radius_h = 0.5f;
    } else {
        this->radius_h = 2.0f;
    }

    if (this->disp_counter > 0) {
        this->disp_counter--;
    } else {
        this->active_mode = 1;
        this->rad_h = 0x80;
        this->radius_h = Rand_ZeroFloat(1.0f) + 0.5f;
        this->speed_rad_h = Rand_CenteredFloat(32767.0f);
        this->revise = floating_mode_check;
    }
}

void runaway_mode_check(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if (goto_home_check(&this->actor.world.pos, &player->actor.world.pos, 50.0f)) {
        if (this->disp_counter > 0) {
            this->disp_counter--;
        } else {
            this->active_mode = 1;
            this->rad_h = 0x80;
            this->radius_h = Rand_ZeroFloat(1.0f) + 0.5f;
            this->speed_rad_h = Rand_CenteredFloat(32767.0f);
            this->revise = floating_mode_check;
        }
    }
}

void floating_mode_check(EnElf* this, GlobalContext* globalCtx) {
    f32 xzDistToPlayer;

    if (this->disp_counter > 0) {
        this->disp_counter--;
    } else {
        xzDistToPlayer = this->actor.xzDistToPlayer;
        if (xzDistToPlayer < 50.0f) {
            if (Rand_ZeroOne() < 0.2f) {
                this->active_mode = 2;
                this->rad_h = 0x400;
                this->radius_h = 2.0f;
                this->revise = runaway_mode_check;
                this->actor.speedXZ = 1.5f;
                this->disp_counter = (s16)Rand_ZeroFloat(8.0f) + 4;
            } else {
                this->disp_counter = 10;
            }
        } else {
            if (xzDistToPlayer > 150.0f) {
                xzDistToPlayer = 150.0f;
            }

            xzDistToPlayer = ((xzDistToPlayer - 50.0f) * 0.95f) + 0.05f;

            if (Rand_ZeroOne() < xzDistToPlayer) {
                this->active_mode = 3;
                this->rad_h = 0x200;
                this->radius_h = (xzDistToPlayer * 2.0f) + 1.0f;
                this->revise = interest_mode_check;
                this->disp_counter = (s16)Rand_ZeroFloat(16.0f) + 0x10;
            } else {
                this->disp_counter = 10;
            }
        }
    }

    if (Rand_ZeroOne() < 0.1f) {
        this->active_mode = 1;
        this->rad_h = 0x80;
        this->radius_h = Rand_ZeroFloat(0.5f) + 0.5f;
        this->speed_rad_h = Rand_CenteredFloat(32767.0f);
    }
}

void elf_mode_change_floating(EnElf* this, GlobalContext* globalCtx) {
    if (goto_home_check(&this->unk_28C, &this->actor.world.pos, 100.0f)) {
        this->active_mode = 0;
        this->rad_h = 0x200;
        this->revise = floating_mode_check;
        this->radius_h = 1.5f;
    } else {
        this->revise(this, globalCtx);
    }
}

f32 EnElf_GetColorValue(s32 colorFlag) {
    switch (colorFlag) {
        case 1:
            return Rand_ZeroFloat(55.0f) + 200.0f;
        case 2:
            return Rand_ZeroFloat(255.0f);
        default:
            return 0.0f;
    }
}

void EnElf_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnElf* this = THIS;
    s32 pad;
    Player* player = PLAYER;
    s32 colorConfig;
    s32 i;

    Actor_ProcessInitChain(thisx, sInitChain);
    SkelAnime_Init(globalCtx, &this->skelAnime, &gFairySkel, &gFairyAnim, this->jointTable, this->morphTable, 15);
    ActorShape_Init(&thisx->shape, 0.0f, NULL, 15.0f);
    thisx->shape.shadowAlpha = 0xFF;

    this->fairyFlags = 0;
    this->disappearTimer = 600;
    this->kankyo = 0.0f;
    colorConfig = 0;

    switch (thisx->params) {
        case FAIRY_NAVI:
            thisx->room = -1;
            EnElf_SetupAction(this, move_normal);
            En_Elf_actor_set_status(this, 0);
            this->fairyFlags |= 4;
            thisx->update = En_Elf_actor_move_link;
            this->elfMsg = NULL;
            this->sound_stop = 0x14;
            if ((gSaveContext.naviTimer >= 25800) || (gSaveContext.naviTimer < 3000)) {
                gSaveContext.naviTimer = 0;
            }
            break;
        case FAIRY_REVIVE_BOTTLE:
            colorConfig = -1;
            EnElf_SetupAction(this, move_runaway);
            this->radius_h = Math_Vec3f_DistXZ(&thisx->world.pos, &player->actor.world.pos);
            this->rad_h = player->actor.shape.rot.y;
            this->speed_rad_h = -0x1000;
            this->unk_28C.y = thisx->world.pos.y - player->actor.world.pos.y;
            this->rad_v = 0;
            this->radius_v = 0.0f;
            break;
        case FAIRY_REVIVE_DEATH:
            colorConfig = -1;
            EnElf_SetupAction(this, move_regenerate);
            this->radius_h = 0.0f;
            this->rad_h = player->actor.shape.rot.y;
            this->speed_rad_h = 0;
            this->unk_28C.y = thisx->world.pos.y - player->actor.world.pos.y;
            this->rad_v = 0;
            this->radius_v = 7.0f;
            break;
        case FAIRY_HEAL_BIG:
            this->fairyFlags |= FAIRY_FLAG_BIG;
            thisx->shape.shadowDraw = ActorShadow_DrawWhiteCircle;
        case FAIRY_HEAL_TIMED:
            this->fairyFlags |= FAIRY_FLAG_TIMED;
        case FAIRY_HEAL:
            colorConfig = -1;
            EnElf_SetupAction(this, move_floating);
            this->radius_v = Rand_ZeroFloat(10.0f) + 10.0f;
            this->rad_v = 0;
            this->speed_rad_v = (s16)(Rand_ZeroFloat(1048.0f)) + 0x200;
            this->unk_28C = thisx->world.pos;
            this->spin_angle = Rand_CenteredFloat(32767.0f);
            this->revise = floating_mode_check;
            elf_mode_change_floating(this, globalCtx);
            this->disp_counter = 0;
            this->disappearTimer = 240;
            break;
        case FAIRY_KOKIRI:
            colorConfig = Rand_ZeroFloat(11.99f) + 1.0f;
            EnElf_SetupAction(this, move_option);
            En_Elf_actor_set_status(this, 0);
            break;
        case FAIRY_SPAWNER:
            EnElf_SetupAction(this, move_stop);
            En_Elf_actor_set_status(this, 8);

            for (i = 0; i < 8; i++) {
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_ELF, thisx->world.pos.x,
                            thisx->world.pos.y - 30.0f, thisx->world.pos.z, 0, 0, 0, FAIRY_HEAL);
            }
            break;
        default:
            ASSERT(0);
            break;
    }

    this->max_speedf = 3.0f;
    this->innerColor = sInnerColors[0];

    if (colorConfig > 0) {
        this->outerColor.r = EnElf_GetColorValue(sColorFlags[colorConfig].r);
        this->outerColor.g = EnElf_GetColorValue(sColorFlags[colorConfig].g);
        this->outerColor.b = EnElf_GetColorValue(sColorFlags[colorConfig].b);
        this->outerColor.a = 0.0f;
    } else {
        this->innerColor = sInnerColors[-colorConfig];
        this->outerColor = sOuterColors[-colorConfig];
    }

    if (thisx->params == FAIRY_KOKIRI) {
        this->innerColor = this->outerColor;
        this->innerColor.a = 255.0f;
    }
}

void down_tough(EnElf* this, s32 arg1) {
}

void up_tough(EnElf* this, s16 increment) {
    if (this->disappearTimer < 600) {
        this->disappearTimer += increment;
    }
}

void EnElf_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnElf* this = THIS;
}

void check_revise_circle(EnElf* this, GlobalContext* globalCtx) {
    this->unk_28C.x = Math_SinS(this->rad_h) * this->radius_h;
    this->unk_28C.y = Math_SinS(this->rad_v) * this->radius_v;
    this->unk_28C.z = Math_CosS(this->rad_h) * this->radius_h;
    this->rad_h += this->speed_rad_h;
    this->rad_v += this->speed_rad_v;
}

void check_revise_circle2(EnElf* this, GlobalContext* globalCtx) {
    f32 xzScale;

    xzScale = (Math_CosS(this->rad_v) * this->radius_v) + this->radius_h;

    this->unk_28C.x = Math_SinS(this->rad_h) * xzScale;
    this->unk_28C.y = 0.0f;
    this->unk_28C.z = Math_CosS(this->rad_h) * xzScale;

    this->rad_h += this->speed_rad_h;
    this->rad_v += this->speed_rad_v;
}

void check_revise_omega(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    this->rad_v = (this->rad_h * 2) & 0xFFFF;
    this->unk_28C.x = Math_SinS(this->rad_h) * this->radius_h;
    this->unk_28C.y = Math_SinS(this->rad_v) * this->radius_v;
    this->unk_28C.z = -Math_SinS(player->actor.shape.rot.y) * this->unk_28C.x;
    this->unk_28C.x = Math_CosS(player->actor.shape.rot.y) * this->unk_28C.x;
    this->rad_h += this->speed_rad_h;
}

void chase_position_y(EnElf* this, Vec3f* targetPos, f32 arg2) {
    f32 yVelTarget;
    f32 yVelDirection;

    yVelTarget = ((targetPos->y + this->unk_28C.y) - this->actor.world.pos.y) * arg2;
    yVelDirection = (yVelTarget >= 0.0f) ? 1.0f : -1.0f;
    yVelTarget = fabsf(yVelTarget);
    yVelTarget = CLAMP(yVelTarget, 0.0f, 20.0f) * yVelDirection;
    Math_StepToF(&this->actor.velocity.y, yVelTarget, 32.0f);
}

void chase_position(EnElf* this, Vec3f* targetPos, f32 arg2) {
    f32 xVelTarget;
    f32 zVelTarget;
    f32 xVelDirection;
    f32 zVelDirection;

    xVelTarget = ((targetPos->x + this->unk_28C.x) - this->actor.world.pos.x) * arg2;
    zVelTarget = ((targetPos->z + this->unk_28C.z) - this->actor.world.pos.z) * arg2;

    xVelDirection = (xVelTarget >= 0.0f) ? 1.0f : -1.0f;
    zVelDirection = (zVelTarget >= 0.0f) ? 1.0f : -1.0f;

    xVelTarget = fabsf(xVelTarget);
    zVelTarget = fabsf(zVelTarget);

    xVelTarget = CLAMP(xVelTarget, 0.0f, 20.0f) * xVelDirection;
    zVelTarget = CLAMP(zVelTarget, 0.0f, 20.0f) * zVelDirection;

    chase_position_y(this, targetPos, arg2);
    Math_StepToF(&this->actor.velocity.x, xVelTarget, 1.5f);
    Math_StepToF(&this->actor.velocity.z, zVelTarget, 1.5f);
    Actor_Move(&this->actor);
}

void chase_position5(EnElf* this, Vec3f* targetPos) {
    chase_position_y(this, targetPos, 0.2f);
    this->actor.velocity.x = (targetPos->x + this->unk_28C.x) - this->actor.world.pos.x;
    this->actor.velocity.z = (targetPos->z + this->unk_28C.z) - this->actor.world.pos.z;
    Actor_Move(&this->actor);
    this->actor.world.pos.x = targetPos->x + this->unk_28C.x;
    this->actor.world.pos.z = targetPos->z + this->unk_28C.z;
}

void chase_position2(EnElf* this, Vec3f* targetPos) {
    chase_position_y(this, targetPos, 0.2f);
    this->actor.velocity.x = this->actor.velocity.z = 0.0f;
    Actor_Move(&this->actor);
    this->actor.world.pos.x = targetPos->x + this->unk_28C.x;
    this->actor.world.pos.z = targetPos->z + this->unk_28C.z;
}

void chase_up_down_position(EnElf* this, Vec3f* targetPos) {
    f32 yVelTarget;
    f32 yVelDirection;

    yVelTarget = (((Math_SinS(this->rad_v) * this->radius_v) + targetPos->y) - this->actor.world.pos.y) * 0.2f;
    yVelDirection = (yVelTarget >= 0.0f) ? 1.0f : -1.0f;
    this->rad_v += this->speed_rad_v;
    yVelTarget = fabsf(yVelTarget);
    yVelTarget = CLAMP(yVelTarget, 0.0f, 20.0f) * yVelDirection;
    Math_StepToF(&this->actor.velocity.y, yVelTarget, 1.5f);
}

void chase_position3(EnElf* this, GlobalContext* globalCtx) {
    s32 pad[2];
    Player* player = PLAYER;
    s16 targetYaw;
    Vec3f* unk_28C = &this->unk_28C;

    Math_SmoothStepToF(&this->actor.speedXZ, this->radius_h, 0.2f, 0.5f, 0.01f);

    switch (this->active_mode) {
        case 0:
            targetYaw = Math_Atan2S(-(this->actor.world.pos.z - unk_28C->z), -(this->actor.world.pos.x - unk_28C->x));
            break;

        case 3:
            targetYaw = Math_Atan2S(-(this->actor.world.pos.z - player->actor.world.pos.z),
                                    -(this->actor.world.pos.x - player->actor.world.pos.x));
            break;

        case 2:
            targetYaw = Math_Atan2S(this->actor.world.pos.z - player->actor.world.pos.z,
                                    this->actor.world.pos.x - player->actor.world.pos.x);
            break;

        default:
            targetYaw = this->speed_rad_h;
            break;
    }

    Math_SmoothStepToS(&this->spin_angle, targetYaw, 10, this->rad_h, 0x20);
    this->actor.world.rot.y = this->spin_angle;
    Actor_MoveForwardXZ(&this->actor);
}

// Moves Navi above target actor
void chase_position4(EnElf* this, Vec3f* arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 xVelTarget;
    f32 zVelTarget;
    f32 xzVelocity;
    f32 clampedXZ;

    if (gSaveContext.fairyTimer) {
        arg4 *= 1.5;
    }
    xVelTarget = ((arg1->x + this->unk_28C.x) - this->actor.world.pos.x) * arg4;
    zVelTarget = ((arg1->z + this->unk_28C.z) - this->actor.world.pos.z) * arg4;
    arg4 += 0.3f;
    arg3 += 30.0f;

    chase_position_y(this, arg1, arg4);

    xzVelocity = sqrtf(SQ(xVelTarget) + SQ(zVelTarget));

    this->actor.speedXZ = clampedXZ = CLAMP(xzVelocity, arg2, arg3);

    if ((xzVelocity != clampedXZ) && (xzVelocity != 0.0f)) {
        xzVelocity = clampedXZ / xzVelocity;
        xVelTarget *= xzVelocity;
        zVelTarget *= xzVelocity;
    }

    Math_StepToF(&this->actor.velocity.x, xVelTarget, 5.0f);
    Math_StepToF(&this->actor.velocity.z, zVelTarget, 5.0f);
    Actor_Move(&this->actor);
}

void move_floating(EnElf* this, GlobalContext* globalCtx) {
    Player* refActor = PLAYER;
    s32 pad;
    Player* player = PLAYER;
    f32 heightDiff;

    SkelAnime_Update(&this->skelAnime);

    if (Rand_ZeroOne() < 0.05f) {
        this->radius_v = Rand_ZeroFloat(10.0f) + 10.0f;
        this->speed_rad_v = (s16)(Rand_ZeroFloat(1024.0f)) + 0x200;
    }

    elf_mode_change_floating(this, globalCtx);
    this->unk_28C.y = player->bodyPartsPos[0].y;
    chase_up_down_position(this, &this->unk_28C);
    chase_position3(this, globalCtx);

    if ((this->active_mode == 2) || (this->active_mode == 3)) {
        EnElf_SpawnSparkles(this, globalCtx, 16);
    }

    if (Actor_HasParent(&this->actor, globalCtx)) {
        Actor_Kill(&this->actor);
        return;
    }

    if (!Player_InCsMode(globalCtx)) {
        heightDiff = this->actor.world.pos.y - refActor->actor.world.pos.y;

        if ((heightDiff > 0.0f) && (heightDiff < 60.0f)) {
            if (!goto_home_check(&this->actor.world.pos, &refActor->actor.world.pos, 10.0f)) {
                Health_ChangeBy(globalCtx, 128);
                if (this->fairyFlags & FAIRY_FLAG_BIG) {
                    Magic_Fill(globalCtx);
                }
                this->radius_h = 50.0f;
                this->rad_h = refActor->actor.shape.rot.y;
                this->speed_rad_h = -0x1000;
                this->unk_28C.y = 30.0f;
                this->radius_v = 0.0f;
                this->rad_v = 0;
                EnElf_SetupAction(this, move_runaway);
                return;
            }
        }

        if (this->fairyFlags & FAIRY_FLAG_TIMED) {
            if (this->disappearTimer > 0) {
                this->disappearTimer--;
            } else {
                this->disappearTimer--;

                if (this->disappearTimer > -10) {
                    Actor_SetScale(&this->actor, ((this->disappearTimer + 10) * 0.008f) * 0.1f);
                } else {
                    Actor_Kill(&this->actor);
                    return;
                }
            }
        }

        if (!(this->fairyFlags & FAIRY_FLAG_BIG)) {
            func_8002F434(&this->actor, globalCtx, GI_MAX, 80.0f, 60.0f);
        }
    }
}

void move_option(EnElf* this, GlobalContext* globalCtx) {
    Vec3f parentPos;
    Actor* parent;

    SkelAnime_Update(&this->skelAnime);
    check_revise_circle(this, globalCtx);
    parent = this->actor.parent;

    if ((parent != NULL) && (parent->update != NULL)) {
        parentPos = this->actor.parent->world.pos;
        parentPos.y += ((1500.0f * this->actor.scale.y) + 40.0f);
        chase_position(this, &parentPos, 0.2f);
    } else {
        Actor_Kill(&this->actor);
    }

    this->spin_angle = Math_Atan2S(this->actor.velocity.z, this->actor.velocity.x);
}

void move_stop(EnElf* this, GlobalContext* globalCtx) {
}

void move_runaway(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToF(&this->radius_h, 30.0f, 0.1f, 4.0f, 1.0f);

    this->unk_28C.x = Math_CosS(this->rad_h) * this->radius_h;
    this->unk_28C.y = this->unk_28C.y + this->radius_v;

    switch (this->rad_v) {
        case 0:
            if (this->radius_v < 2.0f) {
                this->radius_v += 0.1f;
            } else {
                this->rad_v++;
            }
            break;
        case 1:
            if (this->radius_v > -1.0f) {
                this->radius_v -= 0.2f;
            }
    }

    this->unk_28C.z = Math_SinS(this->rad_h) * -this->radius_h;
    this->rad_h += this->speed_rad_h;
    chase_position(this, &player->actor.world.pos, 0.2f);

    if (this->radius_v < 0.0f) {
        if ((this->unk_28C.y < 20.0f) && (this->unk_28C.y > 0.0f)) {
            Actor_SetScale(&this->actor, (this->unk_28C.y * 0.008f) * 0.05f);
        }
    }

    if (this->unk_28C.y < -10.0f) {
        Actor_Kill(&this->actor);
        return;
    }

    this->spin_angle = Math_Atan2S(this->actor.velocity.z, this->actor.velocity.x);
    EnElf_SpawnSparkles(this, globalCtx, 32);
    Audio_PlayActorSound2(&this->actor, NA_SE_EV_FIATY_HEAL - SFX_FLAG);
}

void move_regenerate1(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    SkelAnime_Update(&this->skelAnime);

    if (this->unk_28C.y > 200.0f) {
        Actor_Kill(&this->actor);
        return;
    }

    if (this->speed_rad_v >= 0x7E) {
        this->radius_h += 0.1f;
        this->radius_v += 0.5f;
        this->unk_28C.y += this->radius_v;
    } else {
        this->speed_rad_v++;

        if (this->radius_h < 30.0f) {
            this->radius_h += 0.5f;
        }

        if (this->unk_28C.y > 0.0f) {
            this->unk_28C.y -= 0.7f;
        }
    }

    this->unk_28C.x = Math_CosS(this->rad_h) * this->radius_h;
    this->unk_28C.z = Math_SinS(this->rad_h) * -this->radius_h;
    this->rad_h += this->speed_rad_h;
    chase_position5(this, &player->bodyPartsPos[0]);
    this->spin_angle = Math_Atan2S(this->actor.velocity.z, this->actor.velocity.x);
    EnElf_SpawnSparkles(this, globalCtx, 32);
    Audio_PlayActorSound2(&this->actor, NA_SE_EV_FIATY_HEAL - SFX_FLAG);
}

void move_regenerate(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    SkelAnime_Update(&this->skelAnime);

    this->unk_28C.z = 0.0f;
    this->unk_28C.x = 0.0f;
    this->unk_28C.y += this->radius_v;
    this->radius_v -= 0.35f;

    if (this->radius_v <= 0.0f) {
        EnElf_SetupAction(this, move_regenerate1);
        this->speed_rad_h = 0x800;
        this->speed_rad_v = 0;
        this->radius_v = 0.0f;
        this->radius_h = 1.0f;
    }

    chase_position5(this, &player->bodyPartsPos[0]);
    Actor_SetScale(&this->actor, (1.0f - (SQ(this->radius_v) * SQ(1.0f / 9.0f))) * 0.008f);
    this->spin_angle = Math_Atan2S(this->actor.velocity.z, this->actor.velocity.x);
    EnElf_SpawnSparkles(this, globalCtx, 32);
    Audio_PlayActorSound2(&this->actor, NA_SE_EV_FIATY_HEAL - SFX_FLAG);
}

void move_common_before(EnElf* this, GlobalContext* globalCtx) {
    if (this->fairyFlags & 4) {
        elf_egg_color_check(this, globalCtx);
    }

    SkelAnime_Update(&this->skelAnime);

    if (this->revise == NULL) {
        ASSERT(0);
    }

    this->revise(this, globalCtx);
}

// move_common_after
void move_common_after(EnElf* this, GlobalContext* globalCtx) {
    Player* player;

    this->spin_angle = Math_Atan2S(this->actor.velocity.z, this->actor.velocity.x);

    Actor_SetScale(&this->actor, this->actor.scale.x);
}

void move_normal(EnElf* this, GlobalContext* globalCtx) {
    Vec3f nextPos;
    Vec3f prevPos;
    Player* player = PLAYER;
    Actor* arrowPointedActor;
    f32 xScale;
    f32 distFromLinksHead;

    check_mode_z_en_elf(this, globalCtx);
    move_common_before(this, globalCtx);

    xScale = 0.0f;

    if ((globalCtx->csCtx.state != CS_STATE_IDLE) && (globalCtx->csCtx.npcActions[8] != NULL)) {
        EnElf_GetCutsceneNextPos(&nextPos, globalCtx, 8);

        if (globalCtx->csCtx.npcActions[8]->action == 5) {

            EnElf_SpawnSparkles(this, globalCtx, 16);
        }

        prevPos = this->actor.world.pos;

        if (this->active_mode == 10) {
            chase_position2(this, &nextPos);
        } else {
            chase_position(this, &nextPos, 0.2f);
        }

        if ((globalCtx->sceneNum == SCENE_LINK_HOME) && (gSaveContext.sceneSetupIndex == 4)) {
            // play dash sound as Navi enters Links house in the intro

            if (globalCtx->csCtx.frames == 55) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_FAIRY_DASH);
            }

            // play dash sound in intervals as Navi is waking up Link in the intro
            if (this->active_mode == 6) {
                if (this->fairyFlags & 0x40) {
                    if (prevPos.y < this->actor.world.pos.y) {
                        this->fairyFlags &= ~0x40;
                    }
                } else {
                    if (this->actor.world.pos.y < prevPos.y) {
                        this->fairyFlags |= 0x40;
                        Audio_PlayActorSound2(&this->actor, NA_SE_EV_FAIRY_DASH);
                    }
                }
            }
        }
    } else {
        distFromLinksHead = Math_Vec3f_DistXYZ(&player->bodyPartsPos[8], &this->actor.world.pos);

        switch (this->active_mode) {
            case 7:
                chase_position(this, &player->bodyPartsPos[8], 1.0f - this->speed_rad_v * (1.0f / 30.0f));
                xScale = 0.008f;

                break;
            case 8:
                chase_position(this, &player->bodyPartsPos[8], 0.2f);
                this->actor.world.pos = player->bodyPartsPos[8];
                up_tough(this, 1);
                break;
            case 11:
                nextPos = player->bodyPartsPos[8];
                nextPos.y += 1500.0f * this->actor.scale.y;
                chase_position5(this, &nextPos);
                EnElf_SpawnSparkles(this, globalCtx, 16);

                if (this->radius_h <= 19.0f) {
                    this->radius_h += 1.0f;
                }
                if (this->radius_h >= 21.0f) {
                    this->radius_h -= 1.0f;
                }

                if (this->disp_counter < 32) {
                    this->speed_rad_h = (this->disp_counter * 240) + 512;
                    down_tough(this, 1);
                }

                break;
            // case 12:
            //     nextPos = ACTIVE_CAM->eye;
            //     nextPos.y += (-2000.0f * this->actor.scale.y);
            //     chase_position4(this, &nextPos, 0.0f, 20.0f, 0.2f);
            //     break;
            default:
                up_tough(this, 1);
                // Directs Navi to the next actor to hover
                nextPos = globalCtx->actorCtx.targetCtx.naviRefPos;
                nextPos.y += (1500.0f * this->actor.scale.y);
                arrowPointedActor = globalCtx->actorCtx.targetCtx.arrowPointedActor;

                if (arrowPointedActor != NULL) {
                    chase_position4(this, &nextPos, 0.0f, 20.0f, 0.2f);
                    EnElf_SpawnSparkles(this, globalCtx, 16);

                } else {
                    if ((this->timer % 32) == 0) {
                        this->max_speedf = Rand_ZeroFloat(7.0f) + 3.0f;
                    }

                    if (this->fairyFlags & 2) {
                        if (distFromLinksHead < 30.0f) {
                            this->fairyFlags ^= 2;
                        }

                        chase_position4(this, &nextPos, 0.0f, 20.0f, 0.2f);
                        EnElf_SpawnSparkles(this, globalCtx, 16);
                    } else {
                        if (distFromLinksHead > 100.0f) {
                            this->fairyFlags |= 2;

                            if (this->sound_stop == 0) {
                                if (!this->spiritFlag) {
                                    Audio_PlayActorSound2(&this->actor, NA_SE_EV_FAIRY_DASH);
                                }
                            }

                            this->disp_counter = 0x64;
                        }
                        chase_position4(this, &nextPos, 0.0f, this->max_speedf, 0.2f);
                    }
                }
                break;
        }
    }

    if (this->active_mode == 7) {
        this->actor.scale.x = xScale;
    } else if (this->active_mode == 8) {
        this->actor.scale.x = 0.0f;
    } else {
        Math_SmoothStepToF(&this->actor.scale.x, 0.008f, 0.3f, 0.00080000004f, 0.000080000005f);
    }

    move_common_after(this, globalCtx);
}

// color_morph
void EnElf_ChangeColor(Color_RGBAf* dest, Color_RGBAf* newColor, Color_RGBAf* curColor, f32 rate) {
    Color_RGBAf rgbaDiff;

    rgbaDiff.r = (newColor->r - curColor->r);
    rgbaDiff.g = (newColor->g - curColor->g);
    rgbaDiff.b = (newColor->b - curColor->b);
    rgbaDiff.a = (newColor->a - curColor->a);

    dest->r += (rgbaDiff.r * rate);
    dest->g += (rgbaDiff.g * rate);
    dest->b += (rgbaDiff.b * rate);
    dest->a += (rgbaDiff.a * rate);
}

// Related to Navi moving to a new target actor (sound and color change)
void elf_egg_color_check(EnElf* this, GlobalContext* globalCtx) {
    Actor* arrowPointedActor = globalCtx->actorCtx.targetCtx.arrowPointedActor;
    Player* player = PLAYER;
    f32 transitionRate;
    u16 targetSound;

    if (globalCtx->actorCtx.targetCtx.unk_40 != 0.0f) {
        this->color_change = 0;
        this->color_morf_ratio = 1.0f;

        if (this->sound_stop == 0) {
            if (!this->spiritFlag) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_FAIRY_DASH);
            }
        }

    } else {
        if (this->color_change == 0) {
            if ((arrowPointedActor == NULL) ||
                (Math_Vec3f_DistXYZ(&this->actor.world.pos, &globalCtx->actorCtx.targetCtx.naviRefPos) < 50.0f)) {
                this->color_change = 1;
            }
        } else if (this->color_morf_ratio != 0.0f) {
            if (Math_StepToF(&this->color_morf_ratio, 0.0f, 0.25f) != 0) {
                this->innerColor = globalCtx->actorCtx.targetCtx.naviInner;
                this->outerColor = globalCtx->actorCtx.targetCtx.naviOuter;
            } else {
                transitionRate = 0.25f / this->color_morf_ratio;
                EnElf_ChangeColor(&this->innerColor, &globalCtx->actorCtx.targetCtx.naviInner, &this->innerColor,
                                  transitionRate);
                EnElf_ChangeColor(&this->outerColor, &globalCtx->actorCtx.targetCtx.naviOuter, &this->outerColor,
                                  transitionRate);
            }
        }
    }

    if (this->fairyFlags & 1) {
        if ((arrowPointedActor == NULL) || (player->unk_664 == NULL)) {
            this->fairyFlags ^= 1;
        }
    } else {
        if ((arrowPointedActor != NULL) && (player->unk_664 != NULL)) {
            if (arrowPointedActor->category == ACTORCAT_NPC) {
                targetSound = NA_SE_VO_NAVY_HELLO;
            } else {
                targetSound =
                    (arrowPointedActor->category == ACTORCAT_ENEMY) ? NA_SE_VO_NAVY_ENEMY : NA_SE_VO_NAVY_HEAR;
            }

            if (this->sound_stop == 0) {
                Audio_PlayActorSound2(&this->actor, targetSound);
            }

            this->fairyFlags |= 1;
        }
    }
}

// useless branch near case 11/default in the switch for this->active_mode
void check_mode_z_en_elf(EnElf* this, GlobalContext* globalCtx) {
    s32 mode;
    Actor* arrowPointedActor;
    Player* player = PLAYER;

    if (globalCtx->csCtx.state != CS_STATE_IDLE) {
        if (globalCtx->csCtx.npcActions[8] != NULL) {
            switch (globalCtx->csCtx.npcActions[8]->action) {
                case 4:
                    mode = 9;
                    break;
                case 3:
                    mode = 6;
                    break;
                case 1:
                    mode = 10;
                    break;
                default:
                    mode = 0;
                    break;
            }
        } else {
            mode = 0;
            this->disp_counter = 100;
        }

    } else {
        arrowPointedActor = globalCtx->actorCtx.targetCtx.arrowPointedActor;

        if ((player->stateFlags1 & 0x400) || ((YREG(15) & 0x10) && func_800BC56C(globalCtx, 2))) {
            mode = 12;
            this->disp_counter = 100;
        } else if ((arrowPointedActor == NULL) || (mode = 1, (arrowPointedActor->category == ACTORCAT_NPC))) {
            if (arrowPointedActor != NULL) {
                this->disp_counter = 100;
                player->stateFlags2 |= 0x100000;
                mode = 0;
            } else {
                switch (this->active_mode) {
                    case 0:
                        // Changed for SW, makes Navi spawn at Link like normal with Farore's Wind
                        if (globalCtx->sceneLoadFlag == 0) {
                            this->spawnMode = 2;
                        }
                        mode = this->active_mode = 0;
                        break;
                    case 7:
                        // Don't spin if Link is entering a scene
                        if (globalCtx->sceneLoadFlag == 0) {
                            if (this->disp_counter != 0) {
                                if ((this->speed_rad_v > 0) && !(mode == this->active_mode)) {
                                    this->speed_rad_v--;
                                    // Navi to do the "Dash" action instead of going inside Link's hat. Original value=7
                                    mode = 11;
                                } else {
                                    player->stateFlags2 |= 0x100000;
                                    mode = 0;
                                }
                            } else {
                                mode = 8;
                                up_tough(this, 10);
                            }
                        } else {
                            this->spawnMode = 1;
                            player->stateFlags2 |= 0x100000;
                            mode = this->active_mode = 0;
                        }
                        break;
                    case 8:
                        mode = 8;
                        break;
                    case 11:
                        mode = this->active_mode;
                        if (this->disp_counter > 0) {
                            this->disp_counter--;
                        } else {
                            mode = 0;
                        }
                        break;
                    default:
                        mode = 0;
                        break;
                }
            }
        }

        switch (mode) {
            case 0:
                if (!(player->stateFlags2 & 0x100000) && this->spawnMode != 1) {
                    mode = 7;
                    if (this->sound_stop == 0) {
                        Audio_PlayActorSound2(&this->actor, NA_SE_EV_NAVY_VANISH);
                    }
                }
                break;
            case 8:
                if (player->stateFlags2 & 0x100000) {
                    down_tough(this, 0x32);
                    this->disp_counter = 42;
                    mode = 11;
                    if (this->sound_stop == 0) {
                        Audio_PlayActorSound2(&this->actor, NA_SE_EV_FAIRY_DASH);
                    }
                }
                break;
            case 7:
                player->stateFlags2 &= ~0x100000;
                break;
            default:
                player->stateFlags2 |= 0x100000;
                break;
        }
    }

    if (mode != this->active_mode) {
        En_Elf_actor_set_status(this, mode);

        if (mode == 11) {
            // Clamp the radius so Navi can't spin a ridiculous distance from Link's head
            this->radius_h = CLAMP(Math_Vec3f_DistXZ(&player->bodyPartsPos[8], &this->actor.world.pos), 0, 50);
            this->rad_h = Math_Vec3f_Yaw(&this->actor.world.pos, &player->bodyPartsPos[8]);
        }
    }
}

// En_Elf_set_kirakira
void EnElf_SpawnSparkles(EnElf* this, GlobalContext* globalCtx, s32 sparkleLife) {
    static Vec3f sparkleVelocity = { 0.0f, -0.05f, 0.0f };
    static Vec3f sparkleAccel = { 0.0f, -0.025f, 0.0f };
    s32 pad;
    Vec3f sparklePos;
    Color_RGBA8 primColor;
    Color_RGBA8 envColor;

    sparklePos.x = Rand_CenteredFloat(6.0f) + this->actor.world.pos.x;
    sparklePos.y = (Rand_ZeroOne() * 6.0f) + this->actor.world.pos.y;
    sparklePos.z = Rand_CenteredFloat(6.0f) + this->actor.world.pos.z;

    primColor.r = this->innerColor.r;
    primColor.g = this->innerColor.g;
    primColor.b = this->innerColor.b;

    envColor.r = this->outerColor.r;
    envColor.g = this->outerColor.g;
    envColor.b = this->outerColor.b;

    EffectSsKiraKira_SpawnDispersed(globalCtx, &sparklePos, &sparkleVelocity, &sparkleAccel, &primColor, &envColor,
                                    1000, sparkleLife);
}

void Elf_Shadow_Process(EnElf* this, GlobalContext* globalCtx) {
    s32 pad;
    s32 bgId;

    this->actor.floorHeight = BgCheck_EntityRaycastFloor5(globalCtx, &globalCtx->colCtx, &this->actor.floorPoly, &bgId,
                                                          &this->actor, &this->actor.world.pos);
    this->actor.shape.shadowAlpha = 0x32;
}

// move to talk to player
void move_talk_before(EnElf* this, GlobalContext* globalCtx) {
    Vec3f headCopy;
    Player* player = PLAYER;
    Vec3f naviRefPos;

    if (this->fairyFlags & 0x10) {
        naviRefPos = globalCtx->actorCtx.targetCtx.naviRefPos;

        if ((player->unk_664 == NULL) || (&player->actor == player->unk_664) || (&this->actor == player->unk_664)) {
            naviRefPos.x = player->bodyPartsPos[7].x + (Math_SinS(player->actor.shape.rot.y) * 20.0f);
            naviRefPos.y = player->bodyPartsPos[7].y + 5.0f;
            naviRefPos.z = player->bodyPartsPos[7].z + (Math_CosS(player->actor.shape.rot.y) * 20.0f);
        }

        this->actor.focus.pos = naviRefPos;
        this->fairyFlags &= ~0x10;
    }

    move_common_before(this, globalCtx);
    headCopy = this->actor.focus.pos;

    chase_position4(this, &headCopy, 0, 20.0f, 0.2f);

    if (this->actor.speedXZ >= 5.0f) {
        EnElf_SpawnSparkles(this, globalCtx, 16);
    }

    Math_SmoothStepToF(&this->actor.scale.x, 0.008f, 0.3f, 0.00080000004f, 0.000080000005f);
    move_common_after(this, globalCtx);
}

// move after talking to player
void move_talk_after(EnElf* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->spin_angle, 5, 0x1000, 0x400);
    this->timer++;
    Math_StepToF(&this->kankyo, 1.0f, 0.05f);
    func_800773A8(globalCtx, SQ(this->kankyo), player->actor.projectedPos.z + 780.0f, 0.2f, 0.5f);
}

// ask to talk to saria again
void En_Elf_actor_move_talk_saria2(Actor* thisx, GlobalContext* globalCtx) {
    EnElf* this = THIS;

    move_talk_before(this, globalCtx);

    if ((func_8010BDBC(&globalCtx->msgCtx) == 4) && func_80106BC8(globalCtx)) {
        switch (globalCtx->msgCtx.choiceIndex) {
            case 0: // yes
                func_8010B720(globalCtx, ElfMessage_GetSariaText(globalCtx));
                this->actor.update = En_Elf_actor_move_talk_saria1;
                break;
            case 1: // no
                func_80106CCC(globalCtx);
                this->actor.update = En_Elf_actor_move_link;
                En_Elf_actor_set_status(this, 0);
                this->fairyFlags &= ~0x20;
                break;
        }
    }

    move_talk_after(this, globalCtx);
}

void En_Elf_actor_move_talk_saria1(Actor* thisx, GlobalContext* globalCtx) {
    EnElf* this = THIS;

    move_talk_before(this, globalCtx);

    if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
        func_8010B720(globalCtx, 0xE3);
        this->actor.update = En_Elf_actor_move_talk_saria2;
    }

    move_talk_after(this, globalCtx);
}

void En_Elf_actor_move_talk_saria0(Actor* thisx, GlobalContext* globalCtx) {
    EnElf* this = THIS;

    move_talk_before(this, globalCtx);

    if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && func_80106BC8(globalCtx)) {
        func_8010B720(globalCtx, ElfMessage_GetSariaText(globalCtx));
        this->actor.update = En_Elf_actor_move_talk_saria1;
    }

    move_talk_after(this, globalCtx);
}

// ask to talk to navi
void En_Elf_actor_move_talk_naby0(Actor* thisx, GlobalContext* globalCtx) {
    s32 naviCUpText;
    EnElf* this = THIS;

    move_talk_before(this, globalCtx);

    if ((func_8010BDBC(&globalCtx->msgCtx) == 4) && func_80106BC8(globalCtx)) {
        switch (globalCtx->msgCtx.choiceIndex) {
            case 0: // yes
                naviCUpText = ElfMessage_GetCUpText(globalCtx);

                if (naviCUpText != 0) {
                    func_8010B720(globalCtx, naviCUpText);
                } else {
                    func_8010B720(globalCtx, 0x15F);
                }

                this->actor.update = En_Elf_actor_move_talk;
                break;
            case 1: // no
                func_80106CCC(globalCtx);
                this->actor.update = En_Elf_actor_move_link;
                En_Elf_actor_set_status(this, 0);
                this->fairyFlags &= ~0x20;
                break;
        }
    }

    move_talk_after(this, globalCtx);
}

// ask to talk to saria
void En_Elf_actor_move_talk(Actor* thisx, GlobalContext* globalCtx) {
    EnElf* this = THIS;

    move_talk_before(this, globalCtx);

    if (func_8010BDBC(&globalCtx->msgCtx) == 4) {
        if (func_80106BC8(globalCtx)) {
            globalCtx->msgCtx.unk_E3F2 = 0xFF;

            switch (globalCtx->msgCtx.choiceIndex) {
                case 0: // yes
                    this->actor.update = En_Elf_actor_move_talk_saria0;
                    func_8010B720(globalCtx, 0xE2);
                    break;
                case 1: // no
                    this->actor.update = En_Elf_actor_move_talk_naby0;
                    func_8010B720(globalCtx, 0xE1);
                    break;
            }
        }
    } else if (Actor_HasFinishedTalking(thisx, globalCtx)) {
        this->actor.update = En_Elf_actor_move_link;
        En_Elf_actor_set_status(this, 0);
        this->fairyFlags &= ~0x20;
    }

    move_talk_after(this, globalCtx);
}

void En_Elf_actor_move_link(Actor* thisx, GlobalContext* globalCtx) {
    u8 unk2C7;
    s32 pad;
    Player* player = PLAYER;
    EnElf* this = THIS;

    if (player->naviTextId == 0) {
        if (player->unk_664 == NULL) {
            if (((gSaveContext.naviTimer >= 600) && (gSaveContext.naviTimer <= 3000)) || (nREG(89) != 0)) {
                player->naviTextId = ElfMessage_GetCUpText(globalCtx);

                if (player->naviTextId == 0x15F) {
                    player->naviTextId = 0;
                }
            }
        }
    } else if (player->naviTextId < 0) {
        // trigger dialog instantly for negative message IDs
        thisx->flags |= 0x10000;
    }

    if (Actor_IsTalking(thisx, globalCtx)) {
        func_800F4524(&D_801333D4, NA_SE_VO_SK_LAUGH, 0x20);
        thisx->focus.pos = thisx->world.pos;

        if (thisx->textId == ElfMessage_GetCUpText(globalCtx)) {
            this->fairyFlags |= 0x80;
            gSaveContext.naviTimer = 3001;
        }

        this->fairyFlags |= 0x10;
        this->fairyFlags |= 0x20;
        thisx->update = En_Elf_actor_move_talk;
        En_Elf_actor_set_status(this, 3);

        if (this->elfMsg != NULL) {
            this->elfMsg->actor.flags |= 0x100;
        }

        thisx->flags &= ~0x10000;
    } else {
        this->actionFunc(this, globalCtx);
        if (this->spiritFlag == false) {
            thisx->shape.rot.y = this->spin_angle;
        } else {
            thisx->shape.rot.y = player->actor.shape.rot.y;
            thisx->world.pos = player->actor.world.pos;
            thisx->world.pos.y = player->actor.world.pos.y + 10;
        }
        nREG(80) = gSaveContext.sceneFlags[127].chest;

        if (nREG(81) != 0) {
            if (gSaveContext.sceneFlags[127].chest) {
                LOG_NUM("z_common_data.memory.information.room_inf[127][ 0 ]", gSaveContext.sceneFlags[127].chest,
                        "../z_en_elf.c", 2595);
            }
        }

        if (!Gameplay_InCsMode(globalCtx)) {
            if (gSaveContext.naviTimer < 25800) {
                gSaveContext.naviTimer++;
            } else if (!(this->fairyFlags & 0x80)) {
                gSaveContext.naviTimer = 0;
            }
        }
    }

    this->elfMsg = NULL;
    this->timer++;

    if (this->kankyo > 0.0f) {
        Math_StepToF(&this->kankyo, 0.0f, 0.05f);
        func_800773A8(globalCtx, SQ(this->kankyo) * this->kankyo, player->actor.projectedPos.z + 780.0f, 0.2f, 0.5f);
    }

    // mode probably fake match
    unk2C7 = this->sound_stop;
    if (unk2C7 > 0) {
        this->sound_stop--;
    }

    if ((this->sound_stop == 0) && (globalCtx->csCtx.state != CS_STATE_IDLE)) {
        this->sound_stop = 1;
    }

    Elf_Shadow_Process(this, globalCtx);
}

void EnElf_Update(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnElf* this = THIS;

    this->actionFunc(this, globalCtx);
    this->actor.shape.rot.y = this->spin_angle;
    this->timer++;

    if (this->fairyFlags & FAIRY_FLAG_BIG) {
        Elf_Shadow_Process(this, globalCtx);
    }
}

s32 EnElf_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx,
                           Gfx** gfx) {
    static Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    s32 pad;
    f32 scale;
    Vec3f mtxMult;
    EnElf* this = THIS;

    if (limbIndex == 8) {
        scale = ((Math_SinS(this->timer * 4096) * 0.1f) + 1.0f) * 0.012f;

        if (this->fairyFlags & FAIRY_FLAG_BIG) {
            scale *= 2.0f;
        }

        scale *= (this->actor.scale.x * 124.99999f);
        Matrix_MultVec3f(&zeroVec, &mtxMult);
        Matrix_Translate(mtxMult.x, mtxMult.y, mtxMult.z, MTXMODE_NEW);
        Matrix_Scale(scale, scale, scale, MTXMODE_APPLY);
    }

    // do not draw wings for big fairies
    if (this->fairyFlags & FAIRY_FLAG_BIG) {
        if (limbIndex == 4 || limbIndex == 7 || limbIndex == 11 || limbIndex == 14) {
            *dList = NULL;
        }
    }

    return false;
}

#ifdef DEBUG_NAVI
void EnElf_DrawDebugInfo(EnElf* this, GlobalContext* globalCtx) {
    GfxPrint printer;
    Gfx* prevDisplayList;
    Gfx* displayList;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // Open printer
    prevDisplayList = POLY_OPA_DISP;
    displayList = Graph_GfxPlusOne(POLY_OPA_DISP);
    gSPDisplayList(OVERLAY_DISP++, displayList);
    GfxPrint_Init(&printer);
    GfxPrint_Open(&printer, displayList);

    // Print debug info
    GfxPrint_SetColor(&printer, 255, 255, 255, 255);
    GfxPrint_SetPos(&printer, 3, 11);
    GfxPrint_Printf(&printer, "active_mode:%d", this->active_mode);
    GfxPrint_SetPos(&printer, 3, 12);
    GfxPrint_Printf(&printer, "arrowPointedActor:%08X", (u32)globalCtx->actorCtx.targetCtx.arrowPointedActor);
    GfxPrint_SetPos(&printer, 3, 13);
    GfxPrint_Printf(&printer, "&arrowPointedActor:%08X", (u32)&globalCtx->actorCtx.targetCtx.arrowPointedActor);
    GfxPrint_SetPos(&printer, 3, 14);
    GfxPrint_Printf(&printer, "spawnMode:%d", this->spawnMode);

    // Close printer
    displayList = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);
    gSPEndDisplayList(displayList++);
    Graph_BranchDlist(prevDisplayList, displayList);
    POLY_OPA_DISP = displayList;

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
#endif

void EnElf_Draw(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    f32 alphaScale;
    s32 envAlpha;
    EnElf* this = THIS;
    s32 pad1;
    Gfx* dListHead;
    Player* player = PLAYER;

#ifdef DEBUG_NAVI
    if (thisx->params == FAIRY_NAVI) {
        EnElf_DrawDebugInfo((EnElf*)this, globalCtx);
    }
#endif

    if ((this->active_mode != 8) && !(this->fairyFlags & 8)) {
        if (!(player->stateFlags1 & 0x100000) || (kREG(90) < this->actor.projectedPos.z)) {
            dListHead = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Gfx) * 4);

            OPEN_DISPS(globalCtx->state.gfxCtx);

            func_80094B58(globalCtx->state.gfxCtx);

            envAlpha = (this->timer * 50) & 0x1FF;
            envAlpha = (envAlpha > 255) ? 511 - envAlpha : envAlpha;

            alphaScale = this->disappearTimer < 0 ? (this->disappearTimer * (7.0f / 6000.0f)) + 1.0f : 1.0f;

            gSPSegment(POLY_XLU_DISP++, 0x08, dListHead);
            gDPPipeSync(dListHead++);
            gDPSetPrimColor(dListHead++, 0, 0x01, (u8)this->innerColor.r, (u8)this->innerColor.g,
                            (u8)this->innerColor.b, (u8)(this->innerColor.a * alphaScale));

            if (this->fairyFlags & 4) {
                gDPSetRenderMode(dListHead++, G_RM_PASS, G_RM_CLD_SURF2);
            } else {
                gDPSetRenderMode(dListHead++, G_RM_PASS, G_RM_ZB_CLD_SURF2);
            }

            gSPEndDisplayList(dListHead++);
            gDPSetEnvColor(POLY_XLU_DISP++, (u8)this->outerColor.r, (u8)this->outerColor.g, (u8)this->outerColor.b,
                           (u8)(envAlpha * alphaScale));
            POLY_XLU_DISP = SkelAnime_Draw(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable,
                                           EnElf_OverrideLimbDraw, NULL, this, POLY_XLU_DISP);

            CLOSE_DISPS(globalCtx->state.gfxCtx);
        }
    }
}

void EnElf_GetCutsceneNextPos(Vec3f* vec, GlobalContext* globalCtx, s32 action) {
    Vec3f startPos;
    Vec3f endPos;
    CsCmdActorAction* npcAction = globalCtx->csCtx.npcActions[action];
    f32 lerp;

    startPos.x = npcAction->startPos.x;
    startPos.y = npcAction->startPos.y;
    startPos.z = npcAction->startPos.z;

    endPos.x = npcAction->endPos.x;
    endPos.y = npcAction->endPos.y;
    endPos.z = npcAction->endPos.z;

    lerp = func_8006F93C(npcAction->endFrame, npcAction->startFrame, globalCtx->csCtx.frames);

    vec->x = ((endPos.x - startPos.x) * lerp) + startPos.x;
    vec->y = ((endPos.y - startPos.y) * lerp) + startPos.y;
    vec->z = ((endPos.z - startPos.z) * lerp) + startPos.z;
}
