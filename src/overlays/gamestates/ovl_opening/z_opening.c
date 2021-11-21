/*
 * File: z_opening.c
 * Overlay: ovl_opening
 * Description: Initializes the game into the title screen
 */

#include "global.h"

#define OPENING_SCENE SCENE_DEKU_TREE

void Opening_SetupTitleScreen(OpeningContext* this) {
#ifndef NDEBUG
    Save_InitDebug();
    gSaveContext.gameMode = 0;
    Inventory_ChangeEquipment(EQUIP_SHIELD, 1);
    Inventory_ChangeEquipment(EQUIP_SWORD, 1);
    gSaveContext.unk_13F6 = gSaveContext.magic;
    gSaveContext.dayTime = gSaveContext.environmentTime = 0x8000;
    gSaveContext.unk_13F4 = 0;
    gSaveContext.magicLevel = gSaveContext.magic = 0;
    gSaveContext.buttonStatus[4] = BTN_ENABLED;
    gSaveContext.buttonStatus[3] = BTN_ENABLED;
    gSaveContext.buttonStatus[2] = BTN_ENABLED;
    gSaveContext.buttonStatus[1] = BTN_ENABLED;
    gSaveContext.buttonStatus[0] = BTN_ENABLED;
    gSaveContext.unk_13E7 = gSaveContext.unk_13E8 = gSaveContext.unk_13EA = gSaveContext.unk_13EC = 0;
    Audio_SetBGM(NA_BGM_STOP);
    gSaveContext.entranceIndex = ENTRANCE(OPENING_SCENE, 0, 2, false, true);
    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[RESPAWN_MODE_DOWN].entranceIndex = -1;
    gSaveContext.seqIndex = 0xFF;
    gSaveContext.nightSeqIndex = 0xFF;
    gSaveContext.showTitleCard = false;
    D_8011FB30 = 0;
    gSaveContext.linkAge = 1;

    this->state.running = false;
    SET_NEXT_GAMESTATE(&this->state, Gameplay_Init, GlobalContext);
#else
    gSaveContext.gameMode = 1;
    this->state.running = false;
    gSaveContext.linkAge = 1;
    Save_InitSpaceWorld(SAVE_CHILD_DEFAULT);
    gSaveContext.entranceIndex = ENTRANCE(SCENE_HYRULE_FIELD, 0, 2, false, true);
    gSaveContext.cutsceneIndex = 0xFFF0;
    gSaveContext.sceneSetupIndex = 1;
    SET_NEXT_GAMESTATE(&this->state, Gameplay_Init, GlobalContext);
#endif
}

void func_80803C5C(OpeningContext* this) {
}

void Opening_Main(GameState* thisx) {
    OpeningContext* this = (OpeningContext*)thisx;

    func_80095248(this->state.gfxCtx, 0, 0, 0);
    Opening_SetupTitleScreen(this);
    func_80803C5C(this);
}

void Opening_Destroy(GameState* thisx) {
}

void Opening_Init(GameState* thisx) {
    OpeningContext* this = (OpeningContext*)thisx;

    R_UPDATE_RATE = 1;
    Matrix_Init(&this->state);
    View_Init(&this->view, this->state.gfxCtx);
    gSkipTitle = false;
    this->state.main = Opening_Main;
    this->state.destroy = Opening_Destroy;
}
