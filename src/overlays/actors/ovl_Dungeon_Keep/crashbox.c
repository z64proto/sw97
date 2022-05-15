#include "dungeon_keep_actors.h"
#include "objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"

#define FLAGS 0x00000030

#define THIS ((DungeonKeep*)thisx)

void Crashbox_Destroy(Actor* thisx, GlobalContext* globalCtx);
void Crashbox_Update(Actor* thisx, GlobalContext* globalCtx);
void Crashbox_Draw(Actor* thisx, GlobalContext* globalCtx);

void Crashbox_Wait(DungeonKeep* this, GlobalContext* globalCtx);

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_ALL,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK2,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_NONE,
    },
    { 50, 70, 0, { 0 } },
};

void Crashbox_InitDynapoly(DungeonKeep* this, GlobalContext* globalCtx, CollisionHeader* collision,
                           DynaPolyMoveFlag moveFlag) {
    s32 pad;
    CollisionHeader* colHeader = NULL;
    s32 pad2;

    DynaPolyActor_Init(&this->dyna, moveFlag);
    CollisionHeader_GetVirtual(collision, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, &this->dyna.actor, colHeader);

    if (this->dyna.bgId == BG_ACTOR_MAX) {
        osSyncPrintf("dynapoly is fucked\n");
    }
}

void Crashbox_Init(DungeonKeep* this, GlobalContext* globalCtx) {
    CollisionHeader* colHeader = NULL;

    this->dyna.actor.destroy = Crashbox_Destroy;
    this->dyna.actor.update = Crashbox_Update;
    this->dyna.actor.draw = Crashbox_Draw;

    this->timer = 5;

    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->dyna.actor, &sCylinderInit);

    Crashbox_InitDynapoly(this, globalCtx, &gCrashboxCol, DPM_PLAYER);
    this->dyna.actor.velocity.x = this->dyna.actor.velocity.y = this->dyna.actor.velocity.z = 0.0f;
    this->dyna.actor.gravity = -1.0f;

    switch (this->dyna.actor.params) {
        case DK_CRASHBOX_SMALL:
            Actor_SetScale(&this->dyna.actor, 0.5f);
            break;
        /*case DK_CRASHBOX_MED:
            this->collider.dim.radius = 25;
            this->collider.dim.height = 20;
            Actor_SetScale(&this->dyna.actor, 0.5f);
            break;*/
        case DK_CRASHBOX_LARGE:
            Actor_SetScale(&this->dyna.actor, 1.0f);
            break;
    }

    this->dyna.actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->actionFunc = Crashbox_Wait;
}

void Crashbox_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    Collider_DestroyCylinder(globalCtx, &this->collider);
}

static Vec3f posOffsets[] = {
    { 60.0f, 0.0f, 0.0f },   { -60.0f, 0.0f, 0.0f },   { 0.0f, 0.0f, 60.0f },   { 0.0f, 0.0f, -60.0f },
    { 60.0f, 60.0f, 0.0f },  { -60.0f, 60.0f, 0.0f },  { 0.0f, 60.0f, 60.0f },  { 0.0f, 60.0f, -60.0f },
    { 60.0f, 120.0f, 0.0f }, { -60.0f, 120.0f, 0.0f }, { 0.0f, 120.0f, 60.0f }, { 0.0f, 120.0f, -60.0f },
};

void Crashbox_Break(DungeonKeep* this, GlobalContext* globalCtx) {
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
    f32 scale;

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
            arg9 *= 0.75f;
            arg5 = (arg9 > 20) ? 32 : 64;

            if (Rand_ZeroOne() < 5.0f) {
                arg5 |= 1;
            }

            EffectSsKakera_Spawn(globalCtx, &pos, &velocity, &thisx->world.pos, -650, arg5, 20, 20, 0, arg9, 2, 32, 100,
                                 KAKERA_COLOR_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP, gBrownFragmentDL);
        }
    }

    for (i = 0; i < ARRAY_COUNT(posOffsets); i++) {
        Vec3f dustPos = this->dyna.actor.world.pos;
        Vec3f dustVel = { 0.0f, -4.0f, 0.0f };
        Vec3f dustAccel = { 0.0f, -0.1f, 0.0f };

        dustPos.x += posOffsets[i].x + (Rand_ZeroOne() * 10.0f);
        dustPos.y += posOffsets[i].y + (Rand_ZeroOne() * 10.0f);
        dustPos.z += posOffsets[i].z + (Rand_ZeroOne() * 10.0f);

        scale = (s16)((Rand_ZeroOne() * 1000) * 0.2f) + 1000;

        func_800287AC(globalCtx, &dustPos, &dustVel, &dustAccel, scale, 20, 100);
    }
}

void Crashbox_Wait(DungeonKeep* this, GlobalContext* globalCtx) {
    if (((this->collider.base.acFlags & AC_HIT) && (this->collider.info.acHitInfo->toucher.dmgFlags & DMG_EXPLOSIVE) &&
         (this->dyna.actor.bgCheckFlags & 1))) {
        Crashbox_Break(this, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &this->dyna.actor.world.pos, 80, NA_SE_EV_WOODBOX_BREAK);
        Actor_Kill(&this->dyna.actor);
    } else {
        this->collider.base.acFlags &= ~AC_HIT;
    }
}

void Crashbox_Update(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    if (this->timer > 0) {
        this->timer--;
    }

    if (this->actionFunc != NULL) {
        this->actionFunc(this, globalCtx);
    }

    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    Actor_MoveForwardXZ(&this->dyna.actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->dyna.actor, 7.5f, 35.0f, 0.0f, 0xC5);
    Collider_UpdateCylinder(&this->dyna.actor, &this->collider);

    if ((this->timer == 0) && (this->dyna.actor.bgCheckFlags & 2)) {
        Audio_PlayActorSound2(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
    }
}

void Crashbox_Draw(Actor* thisx, GlobalContext* globalCtx) {
    Gfx_DrawDListOpa(globalCtx, gCrashboxDL);
}
