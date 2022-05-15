/*
 * File: green_cube.c
 * Overlay: ovl_Green_Cube
 * Description: A cube, that is green, yeah.
 */

#include "green_cube.h"

#define FLAGS 0x00000031

#define THIS ((GreenCube*)thisx)

void GreenCube_Init(Actor* thisx, GlobalContext* globalCtx);
void GreenCube_Destroy(Actor* thisx, GlobalContext* globalCtx);
void GreenCube_Update(Actor* thisx, GlobalContext* globalCtx);
void GreenCube_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Green_Cube_InitVars = {
    ACTOR_GREEN_CUBE,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(GreenCube),
    (ActorFunc)GreenCube_Init,
    (ActorFunc)GreenCube_Destroy,
    (ActorFunc)GreenCube_Update,
    (ActorFunc)GreenCube_Draw,
};

#include "green_cube_gfx.c"

void GreenCube_Init(Actor* thisx, GlobalContext* globalCtx) {
    if (thisx->params != -1) {
        thisx->textId = 0x0204;
    } else {
        thisx->textId = 0x0202;
    }
}

void GreenCube_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void GreenCube_Update(Actor* thisx, GlobalContext* globalCtx) {
    GreenCube* this = THIS;

    Actor_RequestToTalkInRange(&this->actor, globalCtx, 75.0f);
    Actor_SetFocus(&this->actor, 20.0f);
}

void GreenCube_Draw(Actor* thisx, GlobalContext* globalCtx) {
    GreenCube* this = THIS;
    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    Matrix_Push();
    Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y + 10.0f, this->actor.world.pos.z, MTXMODE_NEW);
    Matrix_RotateY(thisx->shape.rot.y * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateX(thisx->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_Scale(0.01f, 0.01f, 0.01f, MTXMODE_APPLY);
    Gfx_CallSetupDL(gfxCtx->polyOpa.p++, 37);
    gSPMatrix(gfxCtx->polyOpa.p++, Matrix_NewMtx(gfxCtx, "../z_en_dog.c", UNK_LINE),
              G_MTX_MODELVIEW | G_MTX_NOPUSH | G_MTX_LOAD);

    if (thisx->params != -1) {
        // Red cube
        gDPSetPrimColor(gfxCtx->polyOpa.p++, 0, 0, 255, 0, 0, 255);
    } else {
        // Green cube
        gDPSetPrimColor(gfxCtx->polyOpa.p++, 0, 0, 0, 255, 0, 255);
    }

    gSPDisplayList(gfxCtx->polyOpa.p++, cubeDList);
    Matrix_Pop();

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
