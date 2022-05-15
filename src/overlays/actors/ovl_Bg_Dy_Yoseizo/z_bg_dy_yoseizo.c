/*
 * File: z_bg_dy_yoseizo.c
 * Overlay: ovl_Bg_Dy_Yoseizo
 * Description: A recreation of the beta Hylian soldier
 */

#include "z_bg_dy_yoseizo.h"
#include "vt.h"
#include "objects/object_beta_soldier/object_beta_soldier.h"

#define FLAGS 0x02000019

#define THIS ((BgDyYoseizo*)thisx)

void BgDyYoseizo_Init(Actor* thisx, GlobalContext* globalCtx);
void BgDyYoseizo_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgDyYoseizo_Update(Actor* thisx, GlobalContext* globalCtx);
void BgDyYoseizo_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Bg_Dy_Yoseizo_InitVars = {
    ACTOR_BG_DY_YOSEIZO,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DY_OBJ,
    sizeof(BgDyYoseizo),
    (ActorFunc)BgDyYoseizo_Init,
    (ActorFunc)BgDyYoseizo_Destroy,
    (ActorFunc)BgDyYoseizo_Update,
    (ActorFunc)BgDyYoseizo_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_NONE,
        OCELEM_ON,
    },
    { 33, 40, 0, { 0, 0, 0 } },
};

void BetaSolider_InitCollider(BgDyYoseizo* this, GlobalContext* globalCtx) {
    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    this->collider.dim.yShift = 0;
    this->collider.dim.radius = 15;
    this->collider.dim.height = 70;
}

void BgDyYoseizo_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgDyYoseizo* this = THIS;

    Actor_SetScale(&this->actor, 0.01f);
    SkelAnime_Init(globalCtx, &this->skelAnime, &gBetaSoldierSkel, &gBetaSoldierHitGroundAnim, this->jointTable,
                   this->morphTable, 39);
    Animation_Change(&this->skelAnime, &gBetaSoldierHitGroundAnim, 1.0f, 0.0f,
                     Animation_GetLastFrame(&gBetaSoldierHitGroundAnim), ANIMMODE_LOOP, 0.0f);

    this->actor.targetMode = 0;

    // ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 30.0f);
    ActorShape_Init(&thisx->shape, 0.0f, ActorShadow_DrawFeet, 90.0f);
    thisx->shape.shadowAlpha = 255;

    Actor_SetFocus(&this->actor, 65.0f);
    BetaSolider_InitCollider(this, globalCtx);
    this->initRotY = this->actor.home.rot.y;
    this->actor.textId = 0x091C; // temp!
}

void BgDyYoseizo_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgDyYoseizo* this = THIS;

    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void BetaSolider_LookTowardsPlayer(BgDyYoseizo* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;
    s16 angle = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

    this->npcInfo.focusPos = player->actor.world.pos;

    if (LINK_IS_CHILD) {
        this->npcInfo.focusPos.y = (player->actor.world.pos.y - 10.0f);
    }

    if ((angle < 14563) && (angle > -14563)) {
        Npc_TurnTowardsFocus(&this->actor, &this->npcInfo, 0, 2);
    } else {
        Npc_TurnTowardsFocus(&this->actor, &this->npcInfo, 0, 1);
    }

    this->headTrack = this->npcInfo.neckAngle;
    this->actor.world.rot.y = this->actor.home.rot.y = this->actor.shape.rot.y = this->initRotY;
}

void BgDyYoseizo_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgDyYoseizo* this = THIS;

    BetaSolider_LookTowardsPlayer(this, globalCtx);
    // SkelAnime_Update(&this->skelAnime);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, 10.0f, 30.0f, 0x1D);
    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    // talk
    Actor_RequestToTalk(&this->actor, globalCtx);
}

s32 BetaSoldier_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                 void* thisx) {
    BgDyYoseizo* this = THIS;

    if (limbIndex == 21) {
        rot->y -= this->headTrack.y;
        rot->z += this->headTrack.z;
    }

    return 0;
}

void BetaSoldier_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx,
                              Gfx** gfx) {
    BgDyYoseizo* this = THIS;
    static Vec3f footShadowOffset = { 100.0f, 0.0f, 0.0f }; // adjust this to move the shadow around

    Actor_SetFeetPos(&this->actor, limbIndex, 15 + 1, &footShadowOffset, 8 + 1, &footShadowOffset);
}

void BgDyYoseizo_Draw(Actor* thisx, GlobalContext* globalCtx) {
    BgDyYoseizo* this = THIS;

    SkelAnime_DrawOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable, BetaSoldier_OverrideLimbDraw,
                      BetaSoldier_PostLimbDraw, this);
}
