#include "global.h"

// Handle loading saves into Save Context.
// Note that all actual saving functionality to SRAM is entirely removed.

#include "save_presets.h"

s32 gActuallyHasGiantsKnife = false;

void Save_InitDebug(void) {
    SaveContext* temp = &gSaveContext;

    bzero(&SAVE_INFO, sizeof(SaveInfo));
    gSaveContext.numDays = 0;
    gSaveContext.unk_18 = 0;

    SAVE_PLAYER_DATA = sDebugSavePlayerData;
    gSaveContext.equips = sDebugSaveEquips;
    gSaveContext.inventory = sDebugSaveInventory;

    temp->checksum = sDebugSaveChecksum;
    gSaveContext.horseData.scene = SCENE_HYRULE_FIELD;
    gSaveContext.horseData.pos.x = -1840;
    gSaveContext.horseData.pos.y = 72;
    gSaveContext.horseData.pos.z = 5497;
    gSaveContext.horseData.angle = -0x6AD9;
    gSaveContext.infTable[0] |= 0x5009;
    gSaveContext.eventChkInf[0] |= 0x123F;
    gSaveContext.eventChkInf[8] |= 1;
    gSaveContext.eventChkInf[12] |= 0x10;
    gSaveContext.gsFlags[0] = 0;
    // Changed to hold in both save files targeting to match SW controls:
    // "Press Z and Link will target that enemy. Hold down the Z Button to center Link's movement on the foe."
    gSaveContext.zTargetSetting = 1;

    if (LINK_AGE_IN_YEARS == YEARS_CHILD) {
        gSaveContext.equips.buttonItems[0] = ITEM_SWORD_KOKIRI;
        gSaveContext.equips.equipment = 0x1111;
        gActuallyHasGiantsKnife = true; // has it in debug file!
    } else {
        gSaveContext.equips.buttonItems[0] = ITEM_SWORD_MASTER;
        gSaveContext.equips.equipment = 0x1122;
        gActuallyHasGiantsKnife = true;
    }

    gSaveContext.entranceIndex = ENTRANCE(SCENE_HYRULE_FIELD, 0, 2, false, true);
    gSaveContext.magicLevel = 0;
    gSaveContext.sceneFlags[5].swch = 0x40000000;
    gSaveContext.unk_13F6 = gSaveContext.magic;
    gSaveContext.nayrusLoveTimer = 0;
    gSaveContext.dayTime = gSaveContext.environmentTime = 0x8000;
    gSaveContext.nightFlag = 0;
}

void Save_InitSpaceWorld(u8 profile) {
    SaveContext* temp = &gSaveContext;

    bzero(&SAVE_INFO, sizeof(SaveInfo));
    gSaveContext.numDays = 0;
    gSaveContext.unk_18 = 0;

    SAVE_PLAYER_DATA = sSWPlayerData;

    switch (profile) {
        case SAVE_DEKU_TREE:
            Flags_SetEventChkInf(5); // disable deku tree cutscene
            // fall through
        case SAVE_CHILD_DEFAULT:
            gSaveContext.equips = sChildEquips;
            gSaveContext.inventory = sChildInventory;
            gActuallyHasGiantsKnife = false;
            break;

        case SAVE_CHILD_GOHMA:
            gSaveContext.equips = sChildGohmaEquips;
            gSaveContext.inventory = sChildGohmaInventory;
            gActuallyHasGiantsKnife = false;
            break;

        case SAVE_CHILD_KD:
            gSaveContext.equips = sChildKDEquips;
            gSaveContext.inventory = sChildKDInventory;
            // opens the jaw in dodongo's cavern
            gSaveContext.sceneFlags[SCENE_DODONGOS_CAVERN].swch = 1 << 0x18;
            gActuallyHasGiantsKnife = false;
            break;

        case SAVE_ADULT_DEFAULT:
            gSaveContext.equips = sAdultEquips;
            gSaveContext.inventory = sAdultInventory;
            gActuallyHasGiantsKnife = true;
            break;

        case SAVE_CHILD_CASTLE:
            gSaveContext.equips = sChildCastleEquips;
            gSaveContext.inventory = sChildCastleInventory;
            gActuallyHasGiantsKnife = false;
            break;

        case SAVE_CHILD_DC_DMT:
            gSaveContext.equips = sChildDCEquips;
            gSaveContext.inventory = sChildDCInventory;
            gActuallyHasGiantsKnife = false;
            break;
    }

    gStickState = STICK_WHOLE;
    gStickHealth = 3;
    gSaveContext.language = 0;
    gSaveContext.nextTransition = 0xFF;
    temp->checksum = sSWChecksum;
    gSaveContext.horseData.scene = SCENE_SPOT00;
    gSaveContext.gsFlags[0] = 0;
    gSaveContext.horseData.pos.x = -1840;
    gSaveContext.horseData.pos.y = 72;
    gSaveContext.horseData.pos.z = 5497;
    gSaveContext.horseData.angle = -0x6AD9;
    gSaveContext.magicLevel = 0;
    gSaveContext.nayrusLoveTimer = 0;
    gSaveContext.infTable[29] = 1;
    gSaveContext.dayTime = gSaveContext.environmentTime = 0x8000;
    gSaveContext.nightFlag = 0;
    gSaveContext.zTargetSetting = 1;
}
