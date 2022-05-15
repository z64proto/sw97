#include "dungeon_keep_actors.h"
#include "objects/object_hidan_objects/object_hidan_objects.h"

#define THIS ((DungeonKeep*)thisx)

void FlameThrower_PreUpdate(Actor* thisx, GlobalContext* globalCtx);

static ColliderJntSphElementInit sJntSphElementsInit[] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0x20000000, 0x01, 0x04 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NONE,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 30, 40 }, 25 }, 100 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0x20000000, 0x01, 0x04 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NONE,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 32, 77 }, 32 }, 100 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0x20000000, 0x01, 0x04 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NONE,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 35, 130 }, 42 }, 100 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0x20000000, 0x01, 0x04 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NONE,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { 1, { { -0, 35, 181 }, 52 }, 100 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0x20000000, 0x01, 0x04 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NONE,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 35, 235 }, 62 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COLTYPE_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphElementsInit),
    sJntSphElementsInit,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 400, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 1500, ICHAIN_STOP),
};

static u64* sFireballsTexs[] = {
    gFireTempleFireball0Tex, gFireTempleFireball1Tex, gFireTempleFireball2Tex, gFireTempleFireball3Tex,
    gFireTempleFireball4Tex, gFireTempleFireball5Tex, gFireTempleFireball6Tex, gFireTempleFireball7Tex,
};

void FlameThrower_Init(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;
    s32 i;

    // Set the main functions
    this->dyna.actor.destroy = FlameThrower_Destroy;

    // Set the object to not be gameplay_dangeon_keep anymore
    this->bankIndex = Object_GetIndex(&globalCtx->objectCtx, OBJECT_HIDAN_OBJECTS);
    if (this->bankIndex < 0) {
        Actor_Kill(&this->dyna.actor);
    } else {
        this->dyna.actor.update = FlameThrower_PreUpdate;
    }

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Collider_InitJntSph(globalCtx, &this->colliderSph);
    Collider_SetJntSph(globalCtx, &this->colliderSph, &this->dyna.actor, &sJntSphInit, this->colliderItems);

    this->dyna.actor.flags = 0x00000030;

    for (i = 0; i < ARRAY_COUNT(this->colliderItems); i++) {
        this->colliderSph.elements[i].dim.worldSphere.radius = this->colliderSph.elements[i].dim.modelSphere.radius;
    }

    this->burnFrame = 0;

    this->timer = (this->dyna.actor.world.rot.y < 0x7FFF) ? 0 : FLAME_DURATION;
    this->timer2 = 0;
}

void FlameThrower_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    Collider_DestroyJntSph(globalCtx, &this->colliderSph);
}

void FlameThrower_PreUpdate(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->bankIndex)) {
        this->dyna.actor.objBankIndex = this->bankIndex;
        Actor_SetObjectDependency(globalCtx, &this->dyna.actor);
        this->dyna.actor.update = FlameThrower_Update;
        this->dyna.actor.draw = FlameThrower_Draw;
    }
}

void FlameThrower_Update(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;
    s32 i;
    ColliderJntSphElement* sphere;
    s32 pad;
    f32 yawSine;
    f32 yawCosine;

    // if the player is below the actor (in the lower room) dont update
    if (this->timer == 0) {
        // Is currently flaming
        this->timer2++;

        if (this->timer2 >= FLAME_DURATION) {
            this->timer = FLAME_DURATION;
            this->timer2 = 0;
        }
    } else {
        // Is currently waiting
        this->timer--;
    }

    this->burnFrame = (this->burnFrame + 1) % 8;

    yawSine = Math_SinS(this->dyna.actor.shape.rot.y);
    yawCosine = Math_CosS(this->dyna.actor.shape.rot.y);

    for (i = 0; i < ARRAY_COUNT(this->colliderItems); i++) {
        sphere = &this->colliderSph.elements[i];
        sphere->dim.worldSphere.center.x = this->dyna.actor.home.pos.x + yawCosine * sphere->dim.modelSphere.center.x +
                                           yawSine * sphere->dim.modelSphere.center.z;
        sphere->dim.worldSphere.center.y = (s16)this->dyna.actor.home.pos.y + sphere->dim.modelSphere.center.y;
        sphere->dim.worldSphere.center.z = (this->dyna.actor.home.pos.z - yawSine * sphere->dim.modelSphere.center.x) +
                                           yawCosine * sphere->dim.modelSphere.center.z;
    }

    // Set the current amount of spheres to use
    this->colliderSph.count = (this->timer > FLAME_COUNT) ? 0 : FLAME_COUNT - this->timer;
    if ((this->timer == 0) && (this->timer2 >= (FLAME_DURATION - FLAME_COUNT))) {
        this->colliderSph.count = FLAME_DURATION - this->timer2;
    }

    if (this->timer == 0) {
        Player* player = PLAYER;

        if (player->actor.world.pos.y >= this->dyna.actor.world.pos.y - 300.0f) {
            // Is currently flaming and player is on this floor
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->colliderSph.base);
            func_8002F974(&this->dyna.actor, NA_SE_EV_FIRE_PILLAR - SFX_FLAG);
        }
    }
}

Gfx* FlameThrower_DrawFireball(GlobalContext* globalCtx, DungeonKeep* this, s16 frame, MtxF* mf, s32 a,
                               Gfx* displayList) {
    s32 index = (((this->burnFrame + frame) % 8) * 7) * (1.0f / 7.0f);

    gSPSegment(displayList++, 0x09, SEGMENTED_TO_VIRTUAL(sFireballsTexs[index]));

    frame++;

    gDPSetPrimColor(displayList++, 0, 1, 255, 255, 0, 150);
    gDPSetEnvColor(displayList++, 255, 0, 0, 255);

    mf->xx = mf->yy = mf->zz = (0.7f * frame) + 0.5f;
    mf->wx = this->dyna.actor.world.pos.x + ((Math_CosS(this->dyna.actor.shape.rot.x) * (FLAME_DIST_FACTOR * frame)) *
                                             (Math_SinS(this->dyna.actor.shape.rot.y)));
    mf->wy = (this->dyna.actor.world.pos.y + Y_OFFSET) + ((7.0f / 10.0f) * frame);
    mf->wz = this->dyna.actor.world.pos.z + ((Math_CosS(this->dyna.actor.shape.rot.x) * (FLAME_DIST_FACTOR * frame)) *
                                             (Math_CosS(this->dyna.actor.shape.rot.y)));

    gSPMatrix(displayList++,
              Matrix_MtxFToMtx(Matrix_CheckFloats(mf, "", 0), Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Mtx))),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(displayList++, gFireTempleFireballDL);

    return displayList;
}

void FlameThrower_Draw(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;
    s32 i;
    MtxF mf;

    i = (this->timer > FLAME_COUNT) ? 0 : FLAME_COUNT - this->timer;

    if ((this->timer == 0) && (this->timer2 >= (FLAME_DURATION - FLAME_COUNT))) {
        i = FLAME_DURATION - this->timer2;
    }

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);

    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "", 0),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    Matrix_MtxFCopy(&mf, &gMtxFClear);

    POLY_XLU_DISP = Gfx_CallSetupDL(POLY_XLU_DISP, 0x14);

    if (i > 0) {
        for (; i >= 0; i--) {
            POLY_XLU_DISP = FlameThrower_DrawFireball(globalCtx, this, i, &mf, 1, POLY_XLU_DISP);
        }
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
