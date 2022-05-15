/*
 * File: z_en_mag.c
 * Overlay: ovl_En_Mag
 * Description: Title Screen Manager & Logo
 */

#include "z_en_mag.h"

#define FLAGS 0x00000030

#define THIS ((EnMag*)thisx)

void EnMag_Init(Actor* thisx, GlobalContext* globalCtx);
void EnMag_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnMag_Update(Actor* thisx, GlobalContext* globalCtx);
void EnMag_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit En_Mag_InitVars = {
    ACTOR_EN_MAG,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_MAG,
    sizeof(EnMag),
    (ActorFunc)EnMag_Init,
    (ActorFunc)EnMag_Destroy,
    (ActorFunc)EnMag_Update,
    (ActorFunc)EnMag_Draw,
};

void EnMag_Init(Actor* thisx, GlobalContext* globalCtx) {
}

void EnMag_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void EnMag_Update(Actor* thisx, GlobalContext* globalCtx) {
}

void EnMag_Draw(Actor* thisx, GlobalContext* globalCtx) {
}
