/*
 * File: z_select.c
 * Overlay: ovl_select
 * Description: Debug Scene Select Menu
 */

#include "ultra64.h"
#include "global.h"
#include "vt.h"
#include "alloca.h"

void Select_LoadTitle(SelectContext* this) {
    this->state.running = false;
    gSkipN64Logo = true; // skip logo when going to the title screen
    SET_NEXT_GAMESTATE(&this->state, Title_Init, TitleContext);
}

void Select_LoadGame(SelectContext* this, s32 entranceIndex) {
    Save_InitDebug();
    osSyncPrintf(VT_FGCOL(BLUE));
    osSyncPrintf("\n\n\nＦＩＬＥ＿ＮＯ＝%x\n\n\n", gSaveContext.fileNum);
    osSyncPrintf(VT_RST);
    gSaveContext.buttonStatus[4] = BTN_ENABLED;
    gSaveContext.buttonStatus[3] = BTN_ENABLED;
    gSaveContext.buttonStatus[2] = BTN_ENABLED;
    gSaveContext.buttonStatus[1] = BTN_ENABLED;
    gSaveContext.buttonStatus[0] = BTN_ENABLED;
    gSaveContext.unk_13E7 = gSaveContext.unk_13E8 = gSaveContext.unk_13EA = gSaveContext.unk_13EC = 0;
    Audio_SetBGM(NA_BGM_STOP);
    gSaveContext.entranceIndex = entranceIndex + (this->spawnId << 4);
    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[RESPAWN_MODE_DOWN].entranceIndex = -1;
    gSaveContext.seqIndex = 0xFF;
    gSaveContext.nightSeqIndex = 0xFF;
    gSaveContext.showTitleCard = true;
    D_8011FB30 = 0;
    this->state.running = false;

    switch (gSaveContext.entranceIndex) {
        case ENTRANCE(SCENE_HYRULE_FIELD, 0, 2, false, true):
        // case ENTRANCE(SCENE_OLD_KAKARIKO_VILLAGE, 0, 2, false, true):
        case ENTRANCE(SCENE_OLD_LAKE_HYLIA, 0, 2, false, true):
            AREG(6) = true; // start on horse
            break;
        default:
            AREG(6) = false; // don't start on horse
            break;
    }

    SET_NEXT_GAMESTATE(&this->state, Gameplay_Init, GlobalContext);
}

static SceneSelectEntry sScenes[] = {
    // SPOT-Equivalent Maps
    { "Hyrule Field", Select_LoadGame, ENTRANCE(SCENE_HYRULE_FIELD, 0, 2, false, true), 7 },
    { "Kakariko Village", Select_LoadGame, ENTRANCE(SCENE_OLD_KAKARIKO_VILLAGE, 0, 2, false, true), 3 },
    { "Graveyard", Select_LoadGame, ENTRANCE(SCENE_OLD_GRAVEYARD, 0, 2, false, true), 1 },
    { "Lost Woods", Select_LoadGame, ENTRANCE(SCENE_OLD_LOST_WOODS, 0, 2, false, true), 5 },
    { "Kokiri Village", Select_LoadGame, ENTRANCE(SCENE_KOKIRI_FOREST, 0, 2, false, true), 6 },
    { "Sacred Forest Meadow", Select_LoadGame, ENTRANCE(SCENE_OLD_FOREST_MEADOW, 0, 2, false, true), 2 },
    { "Lake Hylia", Select_LoadGame, ENTRANCE(SCENE_OLD_LAKE_HYLIA, 0, 2, false, true), 3 },
    { "Zora's River", Select_LoadGame, ENTRANCE(SCENE_OLD_ZORAS_RIVER, 0, 2, false, true), 2 },
    { "Zora's Fountain", Select_LoadGame, ENTRANCE(SCENE_OLD_POND, 0, 2, false, true), 1 },
    { "Gerudo Valley", Select_LoadGame, ENTRANCE(SCENE_GERUDO_VALLEY, 0, 2, false, true), 4 },
    { "Hyrule Castle", Select_LoadGame, ENTRANCE(SCENE_HYRULE_CASTLE, 0, 2, false, true), 1 },
    { "Death Mountain Trail", Select_LoadGame, ENTRANCE(SCENE_DEATH_MOUNTAIN_TRAIL, 0, 2, false, true), 4 },
    { "Death Mountain Crater", Select_LoadGame, ENTRANCE(SCENE_DEATH_MOUNTAIN_CRATER, 0, 2, false, true), 1 },
    { "Death Mountain Entrance", Select_LoadGame, ENTRANCE(SCENE_UNK_0x16, 0, 2, false, true), 2 },
    { "Death Mountain Caverns", Select_LoadGame, ENTRANCE(SCENE_UNK_0x17, 0, 2, false, true), 2 },

    // Non-SPOT Overworld or Non-Dungeon Maps
    { "Market Entrance", Select_LoadGame, ENTRANCE(SCENE_UNK_0x33, 0, 2, false, true), 2 },
    { "Market (Day)", Select_LoadGame, ENTRANCE(SCENE_PR_MARKET_1, 0, 2, false, true), 3 },
    { "Market (Night)", Select_LoadGame, ENTRANCE(SCENE_PR_MARKET_2, 0, 2, false, true), 3 },
    { "Market Item Shop", Select_LoadGame, ENTRANCE(SCENE_I_SHOP, 0, 2, false, true), 1 },
    { "Outside Temple of Time", Select_LoadGame, ENTRANCE(SCENE_PR_OUTSIDE_TOT, 0, 2, false, true), 2 },
    { "Temple of Time", Select_LoadGame, ENTRANCE(SCENE_TEMPLE_OF_TIME, 0, 2, false, true), 1 },
    { "Chamber of Sages", Select_LoadGame, ENTRANCE(SCENE_CHAMBER_OF_SAGES, 0, 2, false, true), 1 },
    { "Hyrule Castle Garden", Select_LoadGame, ENTRANCE(SCENE_PR_BEHIND_TOT, 0, 2, false, true), 1 },
    { "Fairy Fountain", Select_LoadGame, ENTRANCE(SCENE_FAIRY_FOUNTAIN, 0, 2, false, true), 1 },
    { "Target Range", Select_LoadGame, ENTRANCE(SCENE_OLD_ARCHERY, 0, 2, false, true), 1 },
    { "Link's House", Select_LoadGame, ENTRANCE(SCENE_PR_LINKS_HOUSE, 0, 2, false, true), 2 },
    { "Kokiri Shop", Select_LoadGame, ENTRANCE(SCENE_PR_KOKIRI_HOUSE_1, 0, 2, false, true), 1 },
    { "Kokiri House", Select_LoadGame, ENTRANCE(SCENE_PR_KOKIRI_HOUSE_2, 0, 2, false, true), 1 },
    { "Grotto", Select_LoadGame, ENTRANCE(SCENE_GROTTOS, 0, 2, false, true), 1 },
    { "Water Cave", Select_LoadGame, ENTRANCE(SCENE_UNK_0x2E, 0, 2, false, true), 1 },
    { "Hyrule Field (Old)", Select_LoadGame, ENTRANCE(SCENE_OLD_HYRULE_FIELD, 0, 2, false, true), 1 },

    // Dungeon Maps
    { "Deku Tree Dungeon", Select_LoadGame, ENTRANCE(SCENE_DEKU_TREE, 0, 2, false, true), 2 },
    { "Deku Tree Dungeon (Test)", Select_LoadGame, ENTRANCE(SCENE_UNFINISHED_DEKU_TREE, 0, 2, false, true), 1 },
    { "Gohma Boss (Test)", Select_LoadGame, ENTRANCE(SCENE_UNFINISHED_GOHMA, 0, 2, false, true), 1 },
    { "Dodongo's Cavern Dungeon", Select_LoadGame, ENTRANCE(SCENE_DODONGOS_CAVERN, 0, 2, false, true), 2 },
    { "Jabu-Jabu Dungeon (Test)", Select_LoadGame, ENTRANCE(SCENE_JABU_TEST, 0, 2, false, true), 1 },
    { "Special Course", Select_LoadGame, ENTRANCE(SCENE_SPECIAL_COURSE, 0, 2, false, true), 1 },
    { "Forest Temple", Select_LoadGame, ENTRANCE(SCENE_FOREST_TEMPLE, 0, 2, false, true), 3 },
    { "Forest Temple (Test)", Select_LoadGame, ENTRANCE(SCENE_UNFINISHED_FOREST_TEMPLE, 0, 2, false, true), 1 },
    { "Fire Temple", Select_LoadGame, ENTRANCE(SCENE_FIRE_TEMPLE, 0, 2, false, true), 3 },
    { "Fire Temple (Test)", Select_LoadGame, ENTRANCE(SCENE_UNFINISHED_FIRE_TEMPLE, 0, 2, false, true), 1 },
    { "Water Temple", Select_LoadGame, ENTRANCE(SCENE_WATER_TEMPLE, 0, 2, false, true), 1 },
    { "Ganon's Tower", Select_LoadGame, ENTRANCE(SCENE_FSTDAN, 0, 2, false, true), 1 },
    { "Stalfos", Select_LoadGame, ENTRANCE(SCENE_OLD_SUTARU, 0, 2, false, true), 1 },

    // Test Maps
    { "Test Map", Select_LoadGame, ENTRANCE(SCENE_UNKNOWN_TEST_MAP, 0, 2, false, true), 1 },
    { "Depth Test", Select_LoadGame, ENTRANCE(SCENE_OLD_DEPTH_TEST, 0, 2, false, true), 1 },
    { "Sasaki's Test", Select_LoadGame, ENTRANCE(SCENE_OLD_SASATEST, 0, 2, false, true), 1 },
    { "Test Room", Select_LoadGame, ENTRANCE(SCENE_OLD_TESTROOM, 0, 2, false, true), 1 },
    { "LOD Test", Select_LoadGame, ENTRANCE(SCENE_LOD_TEST, 0, 2, false, true), 1 },
    { "Material Test", Select_LoadGame, ENTRANCE(SCENE_UNK_0x2C, 0, 2, false, true), 1 },
    { "Stalfos Miniboss Room", Select_LoadGame, ENTRANCE(SCENE_OLD_SYOTES, 0, 2, false, true), 1 },
    { "Stalfos Boss Room", Select_LoadGame, ENTRANCE(SCENE_OLD_SYOTES2, 0, 2, false, true), 1 },

    // Bonus Map
    { "BONUS: Kokiri Village (Old)", Select_LoadGame, ENTRANCE(SCENE_SPOT04_OLD, 0, 2, false, true), 5 },

    // Title
    { "Return to Title", Select_LoadTitle, 0x0000, 1 },
};

void Select_UpdateMenu(SelectContext* this) {
    Input* controller1;
    s32 pad;
    SceneSelectEntry* selectedScene;

    controller1 = &this->state.input[0];

    if (this->unk_21C == 0) {

        if (CHECK_BTN_ALL(controller1->press.button, BTN_A) || CHECK_BTN_ALL(controller1->press.button, BTN_START)) {
            selectedScene = &this->scenes[this->currentScene];
            if (selectedScene->loadFunc != NULL) {
                selectedScene->loadFunc(this, selectedScene->entranceIndex);
            }
        }

        if (CHECK_BTN_ALL(controller1->press.button, BTN_B)) {
            if (LINK_IS_ADULT) {
                gSaveContext.linkAge = 1;
            } else {
                gSaveContext.linkAge = 0;
            }
        }

        if (CHECK_BTN_ALL(controller1->press.button, BTN_CDOWN)) {
            if (this->spawnId > 0) {
                this->spawnId--;
            }
        } else if (CHECK_BTN_ALL(controller1->press.button, BTN_CUP)) {
            this->spawnId++;
        }

        if (CHECK_BTN_ALL(controller1->press.button, BTN_DUP) ||
            (controller1->press.stick_y > 30 && controller1->rel.stick_y > 30)) {
            if (this->unk_22C == 1) {
                this->unk_224 = 0;
            }
            if (this->unk_224 == 0) {
                this->unk_224 = 0x14;
                this->unk_22C = 1;
                Audio_PlaySoundGeneral(NA_SE_IT_SWORD_IMPACT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                this->unk_220 = R_UPDATE_RATE;
            }
        }

        if ((CHECK_BTN_ALL(controller1->cur.button, BTN_DUP) || controller1->rel.stick_y > 30) && this->unk_224 == 0) {
            Audio_PlaySoundGeneral(NA_SE_IT_SWORD_IMPACT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            this->unk_220 = R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(controller1->press.button, BTN_DDOWN) ||
            (controller1->press.stick_y < -30 && controller1->rel.stick_y < -30)) {
            if (this->unk_230 == 1) {
                this->unk_228 = 0;
            }
            if (this->unk_228 == 0) {
                this->unk_228 = 0x14;
                this->unk_230 = 1;
                Audio_PlaySoundGeneral(NA_SE_IT_SWORD_IMPACT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                this->unk_220 = -R_UPDATE_RATE;
            }
        }

        if ((CHECK_BTN_ALL(controller1->cur.button, BTN_DDOWN) || controller1->rel.stick_y < -30) &&
            (this->unk_228 == 0)) {
            Audio_PlaySoundGeneral(NA_SE_IT_SWORD_IMPACT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            this->unk_220 = -R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(controller1->press.button, BTN_DLEFT) || CHECK_BTN_ALL(controller1->cur.button, BTN_DLEFT) ||
            controller1->rel.stick_x < -30) {
            Audio_PlaySoundGeneral(NA_SE_IT_SWORD_IMPACT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            this->unk_220 = R_UPDATE_RATE;
        }

        if (CHECK_BTN_ALL(controller1->press.button, BTN_DRIGHT) ||
            CHECK_BTN_ALL(controller1->cur.button, BTN_DRIGHT) || controller1->rel.stick_x > 30) {
            Audio_PlaySoundGeneral(NA_SE_IT_SWORD_IMPACT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            this->unk_220 = -R_UPDATE_RATE;
        }
    }

    if (CHECK_BTN_ALL(controller1->press.button, BTN_L)) {
        this->unk_1DC++;
        this->unk_1DC = (this->unk_1DC + 7) % 7;
        this->currentScene = this->unk_20C = this->unk_1E0[this->unk_1DC];
    }

    this->unk_21C += this->unk_220;

    if (this->unk_21C < -7) {
        this->unk_220 = 0;
        this->unk_21C = 0;

        this->currentScene++;
        this->currentScene = (this->currentScene + this->count) % this->count;

        if (this->currentScene == ((this->unk_20C + this->count + 0x13) % this->count)) {
            this->unk_20C++;
            this->unk_20C = (this->unk_20C + this->count) % this->count;
        }
    }

    if (this->unk_21C >= 8) {
        this->unk_220 = 0;
        this->unk_21C = 0;

        if (this->currentScene == this->unk_20C) {
            this->unk_20C -= 2;
            this->unk_20C = (this->unk_20C + this->count) % this->count;
        }

        this->currentScene--;
        this->currentScene = (this->currentScene + this->count) % this->count;

        if (this->currentScene == ((this->unk_20C + this->count) % this->count)) {
            this->unk_20C--;
            this->unk_20C = (this->unk_20C + this->count) % this->count;
        }
    }

    this->currentScene = (this->currentScene + this->count) % this->count;
    this->unk_20C = (this->unk_20C + this->count) % this->count;

    dREG(80) = this->currentScene;
    dREG(81) = this->unk_20C;
    dREG(82) = this->unk_1DC;

    if (this->unk_224 != 0) {
        this->unk_224--;
    }

    if (this->unk_224 == 0) {
        this->unk_22C = 0;
    }

    if (this->unk_228 != 0) {
        this->unk_228--;
    }

    if (this->unk_228 == 0) {
        this->unk_230 = 0;
    }

    if (this->spawnId >= this->scenes[this->currentScene].spawnCount) {
        this->spawnId = 0;
    }
}

void Select_PrintMenu(SelectContext* this, GfxPrint* printer) {
    s32 scene;
    s32 i;
    char* name;

    GfxPrint_SetColor(printer, 255, 155, 150, 255);
    GfxPrint_SetPos(printer, 12, 2);
    GfxPrint_Printf(printer, "ZELDA MAP SELECT");
    GfxPrint_SetColor(printer, 255, 255, 255, 255);

    for (i = 0; i < 20; i++) {
        s32 prefixNum; // prefix number to preprend to the map name

        GfxPrint_SetPos(printer, 9, i + 4);

        scene = ((this->unk_20C + i) + this->count) % this->count;
        if (scene == this->currentScene) {
            GfxPrint_SetColor(printer, 255, 20, 20, 255);
        } else {
            GfxPrint_SetColor(printer, 200, 200, 55, 255);
        }

        prefixNum = scene + 1; // index at 1

        name = this->scenes[scene].name;
        if (name == NULL) {
            name = "**Null**";
        }

        if (prefixNum < this->count) {
            GfxPrint_Printf(printer, "%2d:%s", prefixNum, name);
        } else {
            // Don't have a number prefix for the title option
            GfxPrint_Printf(printer, "%s", name);
        }
    };

    GfxPrint_SetColor(printer, 155, 55, 150, 255);
    GfxPrint_SetPos(printer, 18, 26);
    if (this->scenes[this->currentScene].spawnCount != 1) {
        GfxPrint_Printf(printer, "Spawn(C-UP/DOWN):%d/%d", this->spawnId + 1,
                        this->scenes[this->currentScene].spawnCount);
    }
}

static char* sLoadingMessages[] = { "loading..." };

void Select_PrintLoadingMessage(SelectContext* this, GfxPrint* printer) {
    GfxPrint_SetPos(printer, 0xA, 0xF);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);
    GfxPrint_Printf(printer, "%s", sLoadingMessages[0]);
}

static char* sAgeLabels[] = {
    "Adult",
    "Child",
};

void Select_PrintAgeSetting(SelectContext* this, GfxPrint* printer, s32 age) {
    GfxPrint_SetPos(printer, 4, 26);
    GfxPrint_SetColor(printer, 255, 255, 55, 255);
    GfxPrint_Printf(printer, "Age(B):%s", sAgeLabels[age]);
}

void Select_DrawMenu(SelectContext* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint* printer;

    OPEN_DISPS(gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    func_80095248(gfxCtx, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    func_800AAA50(&this->view, 0xF);
    func_80094140(gfxCtx);
    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);
    Select_PrintMenu(this, printer);
    Select_PrintAgeSetting(this, printer, ((void)0, gSaveContext.linkAge));
    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx);
}

void Select_DrawLoadingScreen(SelectContext* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint* printer;

    OPEN_DISPS(gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    func_80095248(gfxCtx, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    func_800AAA50(&this->view, 0xF);
    func_80094140(gfxCtx);
    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);
    Select_PrintLoadingMessage(this, printer);
    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx);
}

void Select_Draw(SelectContext* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;

    OPEN_DISPS(gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    func_80095248(gfxCtx, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    func_800AAA50(&this->view, 0xF);

    if (!this->state.running) {
        Select_DrawLoadingScreen(this);
    } else {
        Select_DrawMenu(this);
    }

    CLOSE_DISPS(gfxCtx);
}

void Select_Main(GameState* thisx) {
    SelectContext* this = (SelectContext*)thisx;

    Select_UpdateMenu(this);
    Select_Draw(this);
}

void Select_Destroy(GameState* thisx) {
    osSyncPrintf("%c", 7);
    // "view_cleanup will hang, so it won't be called"
    osSyncPrintf("*** view_cleanupはハングアップするので、呼ばない ***\n");
}

void Select_Init(GameState* thisx) {
    SelectContext* this = (SelectContext*)thisx;
    // u32 size;
    // ds32 pad;

    this->state.main = Select_Main;
    this->state.destroy = Select_Destroy;
    this->scenes = sScenes;
    this->unk_20C = 0;
    this->currentScene = 0;
    this->unk_1E0[0] = 0;
    this->unk_1E0[1] = 0x13;
    this->unk_1E0[2] = 0x25;
    this->unk_1E0[3] = 0x33;
    this->unk_1E0[4] = 0x3B;
    this->unk_1E0[5] = 0x49;
    this->unk_1E0[6] = 0x5B;
    this->unk_1DC = 0;
    this->spawnId = 0;
    this->count = ARRAY_COUNT(sScenes);
    View_Init(&this->view, this->state.gfxCtx);
    this->view.flags = 0xA;
    this->unk_21C = 0;
    this->unk_220 = 0;
    this->unk_224 = 0;
    this->unk_228 = 0;
    this->unk_22C = 0;
    this->unk_230 = 0;
    this->unk_234 = 0;

    // size = (u32)_z_select_staticSegmentRomEnd - (u32)_z_select_staticSegmentRomStart;

    if ((dREG(80) >= 0) && (dREG(80) < this->count)) {
        this->currentScene = dREG(80);
        this->unk_20C = dREG(81);
        this->unk_1DC = dREG(82);
    }
    R_UPDATE_RATE = 1;

    // this->staticSegment = GameState_Alloc(&this->state, size, "../z_select.c", 1114);
    // DmaMgr_SendRequest1(this->staticSegment, _z_select_staticSegmentRomStart, size, "../z_select.c", 1115);
    gSaveContext.cutsceneIndex = 0x8000;
    Audio_SetBGM(NA_BGM_STOP);
}
