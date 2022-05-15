#include "z_kaleido_scope.h"
#include "textures/icon_item_static/icon_item_static.h"

u8 gAmmoItems[] = {
    ITEM_BOMB,  ITEM_NUT,  ITEM_BOMBCHU, ITEM_BOW,  ITEM_NONE, ITEM_NONE, ITEM_SLINGSHOT, ITEM_NONE,
    ITEM_STICK, ITEM_NONE, ITEM_NONE,    ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,      ITEM_NONE,
};

static s16 sEquipState = 0;
static s16 sEquipAnimTimer = 0;
static s16 sEquipMoveTimer = 10;

static s16 sAmmoVtxOffset[] = {
    4,  // ITEM_BOMB,           // ITEM_STICK, 0
    2,  // ITEM_NUT,            // ITEM_NUT, 2
    10, // ITEM_BOMBCHU,        // ITEM_BOMB, 4
    6,  // ITEM_BOW,            // ITEM_BOW, 6
    99, // ITEM_ARROW_FIRE,     // ITEM_ARROW_FIRE, 99
    99, // ITEM_DINS_FIRE,      // ITEM_DINS_FIRE, 99
    8,  // ITEM_SLINGSHOT,      // ITEM_SLINGSHOT, 8
    99, // ITEM_BOOMERANG,      // ITEM_OCARINA_FAIRY, 99
    99, // ITEM_BOOMERANG,      // ITEM_OCARINA_TIME, 99
    0,  // ITEM_STICK,          // ITEM_BOMBCHU, 10
    99, // ITEM_HOOKSHOT,       // ITEM_HOOKSHOT, 99
    99, // ITEM_HOOKSHOT,       // ITEM_LONGSHOT, 99
    99, // ITEM_ARROW_ICE,      // ITEM_ARROW_ICE, 99
    99, // ITEM_FARORES_WIND,   // ITEM_FARORES_WIND, 99
    99, // ITEM_LENS,           // ITEM_BOOMERANG, 99
    99, // ITEM_OCARINA_TIME,   // ITEM_LENS, 99
    99, // ITEM_HAMMER,         // ITEM_BEAN, 12
};

static void* sMedalBackdrops[] = {
    gMedalsTopTex,
    gMedalsMiddleTex,
    gMedalsBottomTex,
};

void KaleidoScope_DrawAmmoCount(PauseContext* pauseCtx, GraphicsContext* gfxCtx, s16 item) {
    s16 ammo;
    s16 i;

    // Spaceworld - Dont draw slingshot ammo count on the pause menu
    if (item == ITEM_SLINGSHOT) {
        return;
    }

    OPEN_DISPS(gfxCtx);

    ammo = AMMO(item);

    gDPPipeSync(POLY_OPA_DISP++);

    if ((gSaveContext.linkAge == 0 && item == ITEM_STICK) || (gSaveContext.linkAge == 1 && item == ITEM_BOW)) {
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 100, 100, 100, pauseCtx->alpha);
    } else {
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

        if (ammo == 0) {
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 130, 130, 130, pauseCtx->alpha);
        } else if ((item == ITEM_BOMB && AMMO(item) == CUR_CAPACITY(UPG_BOMB_BAG)) ||
                   (item == ITEM_BOW && AMMO(item) == CUR_CAPACITY(UPG_QUIVER)) ||
                   (item == ITEM_STICK && AMMO(item) == CUR_CAPACITY(UPG_STICKS)) ||
                   (item == ITEM_NUT && AMMO(item) == CUR_CAPACITY(UPG_NUTS)) || (item == ITEM_BOMBCHU && ammo == 50)) {
            // gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 120, 255, 0, pauseCtx->alpha);
            // Spaceworld - remove green ammo highlight
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
        }
    }

    if (item == ITEM_STICK) {
        // Use 1/2 ammo for stick
        if (gStickState == STICK_HALF) {
            static Vtx halfStickAmmoVertices[] = {
                VTX(-78 + 64, 34 - 32, 0, 496, -16, 255, 255, 255, 255),
                VTX(-94 + 64, 34 - 32, 0, -16, -16, 255, 255, 255, 255),
                VTX(-94 + 64, 26 - 32, 0, -16, 240, 255, 255, 255, 255),
                VTX(-78 + 64, 26 - 32, 0, 496, 240, 255, 255, 255, 255),
            };
            Vtx* vertices = Graph_Alloc(gfxCtx, sizeof(Vtx) * 4);
            s32 iterator;

            bcopy(halfStickAmmoVertices, vertices, sizeof(Vtx) * 4);

            for (iterator = 0; iterator < 4; iterator++) {
                // Set the y offset
                SET_VTX_Y(vertices[iterator], GET_VTX_Y(vertices[iterator]) + pauseCtx->offsetY);
            }

            gSPVertex(POLY_OPA_DISP++, vertices, 4, 0);
            gDPLoadTextureBlock(POLY_OPA_DISP++, gHUDUnusedAmmoHalf, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 8, 0,
                                G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);

            gSP2Triangles(POLY_OPA_DISP++, 0, 1, 2, 0, 0, 2, 3, 0);
        }
        return;
    }

    for (i = 0; ammo >= 10; i++) {
        ammo -= 10;
    }

    gDPPipeSync(POLY_OPA_DISP++);

    if (i != 0) {
        gSPVertex(POLY_OPA_DISP++, &pauseCtx->itemVtx[(sAmmoVtxOffset[item] + 27) * 4], 4, 0);

        gDPLoadTextureBlock(POLY_OPA_DISP++, D_020035C0[i], G_IM_FMT_IA, G_IM_SIZ_8b, 8, 8, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);

        gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
    }

    gSPVertex(POLY_OPA_DISP++, &pauseCtx->itemVtx[(sAmmoVtxOffset[item] + 28) * 4], 4, 0);

    gDPLoadTextureBlock(POLY_OPA_DISP++, D_020035C0[ammo], G_IM_FMT_IA, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);

    CLOSE_DISPS(gfxCtx);
}

void KaleidoScope_SetCursorVtx(PauseContext* pauseCtx, u16 index, Vtx* vtx) {
    pauseCtx->cursorVtx[0].v.ob[0] = vtx[index].v.ob[0];
    pauseCtx->cursorVtx[0].v.ob[1] = vtx[index].v.ob[1];
}

void KaleidoScope_SetItemCursorVtx(PauseContext* pauseCtx) {
    KaleidoScope_SetCursorVtx(pauseCtx, pauseCtx->cursorSlot[PAUSE_ITEM] * 4, pauseCtx->itemVtx);
}

static s16 sMagicArrowEffectsR[] = { 0, 0, 255, 255, 100, 255 };
static s16 sMagicArrowEffectsG[] = { 0, 200, 255, 0, 100, 255 };
static s16 sMagicArrowEffectsB[] = { 0, 0, 100, 0, 255, 255 };

void KaleidoScope_DrawItemSelect(GlobalContext* globalCtx) {
    Input* input = &globalCtx->state.input[0];
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    u16 i;
    u16 j;
    u16 cursorItem;
    u16 cursorSlot;
    u16 index;
    s16 cursorPoint;
    s16 cursorX;
    s16 cursorY;
    s16 oldCursorPoint;
    s16 moveCursorResult;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_800949A8(globalCtx->state.gfxCtx);

    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);

    pauseCtx->cursorColorSet = 0;
    pauseCtx->nameColorSet = 0;

    if ((pauseCtx->state == 6) && (pauseCtx->unk_1E4 == 0) && (pauseCtx->pageIndex == PAUSE_ITEM)) {
        moveCursorResult = 0;
        oldCursorPoint = pauseCtx->cursorPoint[PAUSE_ITEM];

        cursorItem = pauseCtx->cursorItem[PAUSE_ITEM];
        cursorSlot = pauseCtx->cursorSlot[PAUSE_ITEM];

        if (pauseCtx->cursorSpecialPos == 0) {
            pauseCtx->cursorColorSet = 4;

            if (cursorItem == PAUSE_ITEM_NONE) {
                pauseCtx->stickRelX = 40;
            }

            if (ABS(pauseCtx->stickRelX) > 30) {
                cursorPoint = pauseCtx->cursorPoint[PAUSE_ITEM];
                cursorX = pauseCtx->cursorX[PAUSE_ITEM];
                cursorY = pauseCtx->cursorY[PAUSE_ITEM];

                osSyncPrintf("now=%d  ccc=%d\n", cursorPoint, cursorItem);

                while (moveCursorResult == 0) {
                    if (pauseCtx->stickRelX < -30) {
                        if (pauseCtx->cursorX[PAUSE_ITEM] != 0) {
                            pauseCtx->cursorX[PAUSE_ITEM] -= 1;
                            pauseCtx->cursorPoint[PAUSE_ITEM] -= 1;
                            // Spaceworld - Allow to cursor to go over empty spaces
                            //  if (gSaveContext.inventory.items[pauseCtx->cursorPoint[PAUSE_ITEM]] != ITEM_NONE) {
                            moveCursorResult = 1;
                            //}
                        } else {
                            pauseCtx->cursorX[PAUSE_ITEM] = cursorX;
                            pauseCtx->cursorY[PAUSE_ITEM] += 1;

                            if (pauseCtx->cursorY[PAUSE_ITEM] >= 4) {
                                pauseCtx->cursorY[PAUSE_ITEM] = 0;
                            }

                            pauseCtx->cursorPoint[PAUSE_ITEM] =
                                pauseCtx->cursorX[PAUSE_ITEM] + (pauseCtx->cursorY[PAUSE_ITEM] * 6);

                            if (pauseCtx->cursorPoint[PAUSE_ITEM] >= 24) {
                                pauseCtx->cursorPoint[PAUSE_ITEM] = pauseCtx->cursorX[PAUSE_ITEM];
                            }

                            if (cursorY == pauseCtx->cursorY[PAUSE_ITEM]) {
                                pauseCtx->cursorX[PAUSE_ITEM] = cursorX;
                                pauseCtx->cursorPoint[PAUSE_ITEM] = cursorPoint;

                                KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_LEFT);

                                moveCursorResult = 2;
                            }
                        }
                    } else if (pauseCtx->stickRelX > 30) {
                        if (pauseCtx->cursorX[PAUSE_ITEM] < 5) {
                            pauseCtx->cursorX[PAUSE_ITEM] += 1;
                            pauseCtx->cursorPoint[PAUSE_ITEM] += 1;
                            // Spaceworld - Allow to cursor to go over empty spaces

                            //   if (gSaveContext.inventory.items[pauseCtx->cursorPoint[PAUSE_ITEM]] != ITEM_NONE) {
                            moveCursorResult = 1;
                            // }
                        } else {
                            pauseCtx->cursorX[PAUSE_ITEM] = cursorX;
                            pauseCtx->cursorY[PAUSE_ITEM] += 1;

                            if (pauseCtx->cursorY[PAUSE_ITEM] >= 4) {
                                pauseCtx->cursorY[PAUSE_ITEM] = 0;
                            }

                            pauseCtx->cursorPoint[PAUSE_ITEM] =
                                pauseCtx->cursorX[PAUSE_ITEM] + (pauseCtx->cursorY[PAUSE_ITEM] * 6);

                            if (pauseCtx->cursorPoint[PAUSE_ITEM] >= 24) {
                                pauseCtx->cursorPoint[PAUSE_ITEM] = pauseCtx->cursorX[PAUSE_ITEM];
                            }

                            if (cursorY == pauseCtx->cursorY[PAUSE_ITEM]) {
                                pauseCtx->cursorX[PAUSE_ITEM] = cursorX;
                                pauseCtx->cursorPoint[PAUSE_ITEM] = cursorPoint;

                                KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_RIGHT);

                                moveCursorResult = 2;
                            }
                        }
                    }
                }

                if (moveCursorResult == 1) {
                    cursorItem = gSaveContext.inventory.items[gPausePosToSlotIdMap[pauseCtx->cursorPoint[PAUSE_ITEM]]];
                }

                osSyncPrintf("【Ｘ cursor=%d(%) (cur_xpt=%d)(ok_fg=%d)(ccc=%d)(key_angle=%d)】\n  ",
                             pauseCtx->cursorPoint[PAUSE_ITEM], pauseCtx->cursorX[PAUSE_ITEM], moveCursorResult,
                             cursorItem, pauseCtx->cursorSpecialPos);
            }
        } else if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_LEFT) {
            if (pauseCtx->stickRelX > 30) {
                pauseCtx->nameDisplayTimer = 0;
                pauseCtx->cursorSpecialPos = 0;

                Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

                cursorPoint = cursorX = cursorY = 0;
                while (true) {
                    if (gSaveContext.inventory.items[gPausePosToSlotIdMap[cursorPoint]] != ITEM_NONE) {
                        pauseCtx->cursorPoint[PAUSE_ITEM] = cursorPoint;
                        pauseCtx->cursorX[PAUSE_ITEM] = cursorX;
                        pauseCtx->cursorY[PAUSE_ITEM] = cursorY;
                        moveCursorResult = 1;
                        break;
                    }

                    cursorY = cursorY + 1;
                    cursorPoint = cursorPoint + 6;
                    if (cursorY < 4) {
                        continue;
                    }

                    cursorY = 0;
                    cursorPoint = cursorX + 1;
                    cursorX = cursorPoint;
                    if (cursorX < 6) {
                        continue;
                    }

                    KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_RIGHT);
                    break;
                }
            }
        } else {
            if (pauseCtx->stickRelX < -30) {
                pauseCtx->nameDisplayTimer = 0;
                pauseCtx->cursorSpecialPos = 0;

                Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

                cursorPoint = cursorX = 5;
                cursorY = 0;
                while (true) {
                    if (gSaveContext.inventory.items[gPausePosToSlotIdMap[cursorPoint]] != ITEM_NONE) {
                        pauseCtx->cursorPoint[PAUSE_ITEM] = cursorPoint;
                        pauseCtx->cursorX[PAUSE_ITEM] = cursorX;
                        pauseCtx->cursorY[PAUSE_ITEM] = cursorY;
                        moveCursorResult = 1;
                        break;
                    }

                    cursorY = cursorY + 1;
                    cursorPoint = cursorPoint + 6;
                    if (cursorY < 4) {
                        continue;
                    }

                    cursorY = 0;
                    cursorPoint = cursorX - 1;
                    cursorX = cursorPoint;
                    if (cursorX >= 0) {
                        continue;
                    }

                    KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_LEFT);
                    break;
                }
            }
        }

        if (pauseCtx->cursorSpecialPos == 0) {
            if (cursorItem != PAUSE_ITEM_NONE) {
                if (ABS(pauseCtx->stickRelY) > 30) {
                    moveCursorResult = 0;

                    cursorPoint = pauseCtx->cursorPoint[PAUSE_ITEM];
                    cursorY = pauseCtx->cursorY[PAUSE_ITEM];
                    while (moveCursorResult == 0) {
                        if (pauseCtx->stickRelY > 30) {
                            if (pauseCtx->cursorY[PAUSE_ITEM] != 0) {
                                pauseCtx->cursorY[PAUSE_ITEM] -= 1;
                                pauseCtx->cursorPoint[PAUSE_ITEM] -= 6;
                                // Spaceworld - Allow to cursor to go over empty spaces

                                // if (gSaveContext.inventory.items[pauseCtx->cursorPoint[PAUSE_ITEM]] != ITEM_NONE) {
                                moveCursorResult = 1;
                                //}
                            } else {
                                pauseCtx->cursorY[PAUSE_ITEM] = cursorY;
                                pauseCtx->cursorPoint[PAUSE_ITEM] = cursorPoint;

                                moveCursorResult = 2;
                            }
                        } else if (pauseCtx->stickRelY < -30) {
                            if (pauseCtx->cursorY[PAUSE_ITEM] < 3) {
                                pauseCtx->cursorY[PAUSE_ITEM] += 1;
                                pauseCtx->cursorPoint[PAUSE_ITEM] += 6;
                                // Spaceworld - Allow to cursor to go over empty spaces

                                // if (gSaveContext.inventory.items[pauseCtx->cursorPoint[PAUSE_ITEM]] != ITEM_NONE) {
                                moveCursorResult = 1;
                                // }
                            } else {
                                pauseCtx->cursorY[PAUSE_ITEM] = cursorY;
                                pauseCtx->cursorPoint[PAUSE_ITEM] = cursorPoint;

                                moveCursorResult = 2;
                            }
                        }
                    }

                    cursorPoint = PAUSE_ITEM;
                    osSyncPrintf("【Ｙ cursor=%d(%) (cur_ypt=%d)(ok_fg=%d)(ccc=%d)】\n  ",
                                 pauseCtx->cursorPoint[cursorPoint], pauseCtx->cursorY[PAUSE_ITEM], moveCursorResult,
                                 cursorItem);
                }
            }

            cursorSlot = pauseCtx->cursorPoint[PAUSE_ITEM];

            pauseCtx->cursorColorSet = 4;

            if (moveCursorResult == 1) {
                cursorItem = gSaveContext.inventory.items[gPausePosToSlotIdMap[pauseCtx->cursorPoint[PAUSE_ITEM]]];
            } else if (moveCursorResult != 2) {
                cursorItem = gSaveContext.inventory.items[gPausePosToSlotIdMap[pauseCtx->cursorPoint[PAUSE_ITEM]]];
            }

            pauseCtx->cursorItem[PAUSE_ITEM] = cursorItem;
            pauseCtx->cursorSlot[PAUSE_ITEM] = cursorSlot;

            if (!((gSlotAgeReqs[cursorSlot] == 9) || (gSlotAgeReqs[cursorSlot] == ((void)0, gSaveContext.linkAge)))) {
                pauseCtx->nameColorSet = 1;
            }

            if (cursorItem != 999) {
                index = cursorSlot * 4; // required to match?
                KaleidoScope_SetCursorVtx(pauseCtx, index, pauseCtx->itemVtx);

                if ((pauseCtx->debugState == 0) && (pauseCtx->state == 6) && (pauseCtx->unk_1E4 == 0)) {
                    if (CHECK_BTN_ANY(input->press.button, BTN_CLEFT | BTN_CDOWN | BTN_CRIGHT)) {
                        if ((((gSlotAgeReqs[cursorSlot] == 9) ||
                              (gSlotAgeReqs[cursorSlot] == ((void)0, gSaveContext.linkAge))) &&
                             (cursorItem != ITEM_SOLD_OUT)) &&
                            (gSaveContext.inventory.items[gPausePosToSlotIdMap[pauseCtx->cursorPoint[PAUSE_ITEM]]] !=
                             ITEM_NONE)) {

                            u16 old_item;
                            u16 new_item;
                            s16 old_item_is_magic;
                            s16 new_item_is_magic;
                            s16 old_item_is_bow;
                            s16 new_item_is_bow;

                            if (CHECK_BTN_ALL(input->press.button, BTN_CLEFT)) {
                                pauseCtx->equipTargetCBtn = 0;
                            } else if (CHECK_BTN_ALL(input->press.button, BTN_CDOWN)) {
                                pauseCtx->equipTargetCBtn = 1;
                            } else if (CHECK_BTN_ALL(input->press.button, BTN_CRIGHT)) {
                                pauseCtx->equipTargetCBtn = 2;
                            }

                            pauseCtx->equipTargetItem = cursorItem;
                            pauseCtx->equipTargetSlot = cursorSlot;
                            pauseCtx->unk_1E4 = 3;
                            pauseCtx->equipAnimX = pauseCtx->itemVtx[index].v.ob[0] * 10;
                            pauseCtx->equipAnimY = pauseCtx->itemVtx[index].v.ob[1] * 10;
                            pauseCtx->equipAnimAlpha = 255;
                            sEquipAnimTimer = 0;
                            sEquipState = 3;
                            sEquipMoveTimer = 10;

                            old_item = gSaveContext.equips.buttonItems[1 + pauseCtx->equipTargetCBtn];
                            new_item = pauseCtx->equipTargetItem;
                            old_item_is_magic = old_item == ITEM_ARROW_FIRE || old_item == ITEM_DINS_FIRE ||
                                                old_item == ITEM_ARROW_LIGHT || old_item == ITEM_NAYRUS_LOVE ||
                                                old_item == ITEM_ARROW_ICE || old_item == ITEM_FARORES_WIND;
                            new_item_is_magic = new_item == ITEM_ARROW_FIRE || new_item == ITEM_DINS_FIRE ||
                                                new_item == ITEM_ARROW_LIGHT || new_item == ITEM_NAYRUS_LOVE ||
                                                new_item == ITEM_ARROW_ICE || new_item == ITEM_FARORES_WIND;
                            old_item_is_bow =
                                old_item == ITEM_BOW || (old_item >= ITEM_FROG && old_item <= ITEM_BOW_ARROW_LIGHT);
                            new_item_is_bow =
                                new_item == ITEM_BOW || (new_item >= ITEM_FROG && new_item <= ITEM_BOW_ARROW_LIGHT);

                            if ((old_item_is_bow && new_item_is_magic)
                                // || (old_item_is_magic && new_item_is_bow) // uncomment to allow equipping bow over
                                // medallions for magic
                            ) {

                                u16 test_item;

                                if (old_item_is_bow && new_item_is_magic) {
                                    test_item = new_item;
                                } else {
                                    test_item = old_item;
                                }

                                if (test_item == ITEM_ARROW_FIRE) { // ice
                                    index = 3;
                                    Audio_PlaySoundGeneral(NA_SE_SY_SET_FIRE_ARROW, &D_801333D4, 4, &D_801333E0,
                                                           &D_801333E0, &D_801333E8);
                                }
                                if (test_item == ITEM_DINS_FIRE) { // ice
                                    index = 4;
                                    Audio_PlaySoundGeneral(NA_SE_SY_SET_ICE_ARROW, &D_801333D4, 4, &D_801333E0,
                                                           &D_801333E0, &D_801333E8);
                                }
                                if (test_item == ITEM_ARROW_LIGHT) { // light
                                    index = 5;
                                    Audio_PlaySoundGeneral(NA_SE_SY_SET_LIGHT_ARROW, &D_801333D4, 4, &D_801333E0,
                                                           &D_801333E0, &D_801333E8);
                                }
                                if (test_item == ITEM_NAYRUS_LOVE) { // dark
                                    index = 0;
                                    Audio_PlaySoundGeneral(NA_SE_SY_SET_FIRE_ARROW, &D_801333D4, 4, &D_801333E0,
                                                           &D_801333E0, &D_801333E8);
                                }
                                if (test_item == ITEM_ARROW_ICE) { // wind
                                    index = 1;
                                    Audio_PlaySoundGeneral(NA_SE_SY_SET_ICE_ARROW, &D_801333D4, 4, &D_801333E0,
                                                           &D_801333E0, &D_801333E8);
                                }
                                if (test_item == ITEM_FARORES_WIND) { // soul
                                    index = 2;
                                    Audio_PlaySoundGeneral(NA_SE_SY_SET_LIGHT_ARROW, &D_801333D4, 4, &D_801333E0,
                                                           &D_801333E0, &D_801333E8);
                                }
                                pauseCtx->equipTargetItem = 0xBF + index;
                                sEquipState = 0;
                                pauseCtx->equipAnimAlpha = 0;
                                sEquipMoveTimer = 6;
                            } else {
                                Audio_PlaySoundGeneral(NA_SE_SY_DECIDE, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                                       &D_801333E8);
                            }
                        } else {
                            Audio_PlaySoundGeneral(NA_SE_SY_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                                   &D_801333E8);
                        }
                    }
                }
            } else {
                pauseCtx->cursorVtx[0].v.ob[0] = pauseCtx->cursorVtx[2].v.ob[0] = pauseCtx->cursorVtx[1].v.ob[0] =
                    pauseCtx->cursorVtx[3].v.ob[0] = 0;

                pauseCtx->cursorVtx[0].v.ob[1] = pauseCtx->cursorVtx[1].v.ob[1] = pauseCtx->cursorVtx[2].v.ob[1] =
                    pauseCtx->cursorVtx[3].v.ob[1] = -200;
            }
        } else {
            pauseCtx->cursorItem[0] = 999;
        }

        if (oldCursorPoint != pauseCtx->cursorPoint[0]) {
            Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
    } else if ((pauseCtx->unk_1E4 == 3) && (pauseCtx->pageIndex == 0)) {
        KaleidoScope_SetCursorVtx(pauseCtx, cursorSlot * 4, pauseCtx->itemVtx);
        pauseCtx->cursorColorSet = 4;
    }

    gDPSetCombineLERP(OVERLAY_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 0);

    // item medal background
    for (j = 180, i = 0; i < 3; j += 4, i++) {
        gSPVertex(POLY_OPA_DISP++, &pauseCtx->itemVtx[j], 4, 0);
        gDPLoadTextureBlock(POLY_OPA_DISP++, sMedalBackdrops[i], G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);
        gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
    }

    // Selected item border/frame
    for (i = 0, j = 24 * 4; i < 3; i++, j += 4) {
        if (gSaveContext.equips.buttonItems[i + 1] != ITEM_NONE) {
            gSPVertex(POLY_OPA_DISP++, &pauseCtx->itemVtx[j], 4, 0);
            POLY_OPA_DISP = KaleidoScope_QuadTextureIA8(POLY_OPA_DISP, D_02000A00[1], 32, 32, 0);
        }
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);

    for (i = j = 0; i < 24; i++, j += 4) {
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

        if (gSaveContext.inventory.items[gPausePosToSlotIdMap[i]] != ITEM_NONE) {
            if ((pauseCtx->unk_1E4 == 0) && (pauseCtx->pageIndex == PAUSE_ITEM) && (pauseCtx->cursorSpecialPos == 0)) {
                if ((gSlotAgeReqs[i] == 9) || (gSlotAgeReqs[i] == ((void)0, gSaveContext.linkAge))) {
                    if ((sEquipState == 2) && (i == 3)) {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, sMagicArrowEffectsR[pauseCtx->equipTargetItem - 0xBF],
                                        sMagicArrowEffectsG[pauseCtx->equipTargetItem - 0xBF],
                                        sMagicArrowEffectsB[pauseCtx->equipTargetItem - 0xBF], pauseCtx->alpha);

                        pauseCtx->itemVtx[j + 0].v.ob[0] = pauseCtx->itemVtx[j + 2].v.ob[0] =
                            pauseCtx->itemVtx[j + 0].v.ob[0] - 2;

                        pauseCtx->itemVtx[j + 1].v.ob[0] = pauseCtx->itemVtx[j + 3].v.ob[0] =
                            pauseCtx->itemVtx[j + 0].v.ob[0] + 32;

                        pauseCtx->itemVtx[j + 0].v.ob[1] = pauseCtx->itemVtx[j + 1].v.ob[1] =
                            pauseCtx->itemVtx[j + 0].v.ob[1] + 2;

                        pauseCtx->itemVtx[j + 2].v.ob[1] = pauseCtx->itemVtx[j + 3].v.ob[1] =
                            pauseCtx->itemVtx[j + 0].v.ob[1] - 32;
                    } else if (i == cursorSlot) {
                        pauseCtx->itemVtx[j + 0].v.ob[0] = pauseCtx->itemVtx[j + 2].v.ob[0] =
                            pauseCtx->itemVtx[j + 0].v.ob[0] - 2;

                        pauseCtx->itemVtx[j + 1].v.ob[0] = pauseCtx->itemVtx[j + 3].v.ob[0] =
                            pauseCtx->itemVtx[j + 0].v.ob[0] + 32;

                        pauseCtx->itemVtx[j + 0].v.ob[1] = pauseCtx->itemVtx[j + 1].v.ob[1] =
                            pauseCtx->itemVtx[j + 0].v.ob[1] + 2;

                        pauseCtx->itemVtx[j + 2].v.ob[1] = pauseCtx->itemVtx[j + 3].v.ob[1] =
                            pauseCtx->itemVtx[j + 0].v.ob[1] - 32;
                    }
                }
            }

            gSPVertex(POLY_OPA_DISP++, &pauseCtx->itemVtx[j + 0], 4, 0);
            KaleidoScope_DrawQuadTextureRGBA32(
                globalCtx->state.gfxCtx, gItemIcons[gSaveContext.inventory.items[gPausePosToSlotIdMap[i]]], 32, 32, 0);
        }
    }

    if (pauseCtx->cursorSpecialPos == 0) {
        KaleidoScope_DrawCursor(globalCtx, PAUSE_ITEM);
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

    for (i = 0; i < 15; i++) {
        if ((gAmmoItems[i] != ITEM_NONE) && (gSaveContext.inventory.items[i] != ITEM_NONE)) {
            KaleidoScope_DrawAmmoCount(pauseCtx, globalCtx->state.gfxCtx, gSaveContext.inventory.items[i]);
        }
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

static s16 sCButtonPosX[] = { 660, 900, 1140 };
static s16 sCButtonPosY[] = { 1100, 920, 1100 };

void KaleidoScope_UpdateItemEquip(GlobalContext* globalCtx) {
    static s16 D_8082A488 = 0;
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    Vtx* bowItemVtx;
    u16 offsetX;
    u16 offsetY;

    if (sEquipState == 0) {
        pauseCtx->equipAnimAlpha += 14;
        if (pauseCtx->equipAnimAlpha > 255) {
            pauseCtx->equipAnimAlpha = 254;
            sEquipState++;
        }
        sEquipAnimTimer = 5;
        return;
    }

    if (sEquipState == 2) {
        D_8082A488--;

        if (D_8082A488 == 0) {
            pauseCtx->equipTargetItem -= 0xC2 - ITEM_BOW_ARROW_FIRE;
            pauseCtx->equipTargetSlot = SLOT_BOW;
            sEquipMoveTimer = 6;
            WREG(90) = 320;
            WREG(87) = WREG(91);
            sEquipState++;
            Audio_PlaySoundGeneral(NA_SE_SY_SYNTH_MAGIC_ARROW, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
        return;
    }

    if (sEquipState == 1) {
        bowItemVtx = &pauseCtx->itemVtx[12];
        offsetX = ABS(pauseCtx->equipAnimX - bowItemVtx->v.ob[0] * 10) / sEquipMoveTimer;
        offsetY = ABS(pauseCtx->equipAnimY - bowItemVtx->v.ob[1] * 10) / sEquipMoveTimer;
    } else {
        offsetX = ABS(pauseCtx->equipAnimX - sCButtonPosX[pauseCtx->equipTargetCBtn]) / sEquipMoveTimer;
        offsetY = ABS(pauseCtx->equipAnimY - sCButtonPosY[pauseCtx->equipTargetCBtn]) / sEquipMoveTimer;
    }

    if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipAnimAlpha < 254)) {
        pauseCtx->equipAnimAlpha += 14;
        if (pauseCtx->equipAnimAlpha > 255) {
            pauseCtx->equipAnimAlpha = 254;
        }
        sEquipAnimTimer = 5;
        return;
    }

    if (sEquipAnimTimer == 0) {
        WREG(90) -= WREG(87) / sEquipMoveTimer;
        WREG(87) -= WREG(87) / sEquipMoveTimer;

        if (sEquipState == 1) {
            if (pauseCtx->equipAnimX >= (pauseCtx->itemVtx[12].v.ob[0] * 10)) {
                pauseCtx->equipAnimX -= offsetX;
            } else {
                pauseCtx->equipAnimX += offsetX;
            }

            if (pauseCtx->equipAnimY >= (pauseCtx->itemVtx[12].v.ob[1] * 10)) {
                pauseCtx->equipAnimY -= offsetY;
            } else {
                pauseCtx->equipAnimY += offsetY;
            }
        } else {
            if (pauseCtx->equipAnimX >= sCButtonPosX[pauseCtx->equipTargetCBtn]) {
                pauseCtx->equipAnimX -= offsetX;
            } else {
                pauseCtx->equipAnimX += offsetX;
            }

            if (pauseCtx->equipAnimY >= sCButtonPosY[pauseCtx->equipTargetCBtn]) {
                pauseCtx->equipAnimY -= offsetY;
            } else {
                pauseCtx->equipAnimY += offsetY;
            }
        }

        sEquipMoveTimer--;

        if (sEquipMoveTimer == 0) {
            if (sEquipState == 1) {
                sEquipState++;
                D_8082A488 = 4;
                return;
            }

            osSyncPrintf("\n＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝\n");

            if (pauseCtx->equipTargetCBtn == 0) {

                if (pauseCtx->equipTargetSlot == gSaveContext.equips.cButtonSlots[1]) {
                    if (gSaveContext.equips.buttonItems[1] != ITEM_NONE) {
                        if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4) &&
                            ((gSaveContext.equips.buttonItems[1] == ITEM_BOW) ||
                             ((gSaveContext.equips.buttonItems[1] >= ITEM_FROG) &&
                              (gSaveContext.equips.buttonItems[1] <= ITEM_BOW_ARROW_LIGHT)))) {
                            pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                            pauseCtx->equipTargetSlot = SLOT_BOW;
                        } else {
                            gSaveContext.equips.buttonItems[2] = gSaveContext.equips.buttonItems[1];
                            gSaveContext.equips.cButtonSlots[1] = gSaveContext.equips.cButtonSlots[0];
                            Interface_LoadItemIcon2(globalCtx, 2);
                        }
                    } else {
                        gSaveContext.equips.buttonItems[2] = ITEM_NONE;
                        gSaveContext.equips.cButtonSlots[1] = SLOT_NONE;
                    }
                } else if (pauseCtx->equipTargetSlot == gSaveContext.equips.cButtonSlots[2]) {
                    if (gSaveContext.equips.buttonItems[1] != ITEM_NONE) {
                        if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4) &&
                            ((gSaveContext.equips.buttonItems[1] == ITEM_BOW) ||
                             ((gSaveContext.equips.buttonItems[1] >= ITEM_FROG) &&
                              (gSaveContext.equips.buttonItems[1] <= ITEM_BOW_ARROW_LIGHT)))) {
                            pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                            pauseCtx->equipTargetSlot = SLOT_BOW;
                        } else {
                            gSaveContext.equips.buttonItems[3] = gSaveContext.equips.buttonItems[1];
                            gSaveContext.equips.cButtonSlots[2] = gSaveContext.equips.cButtonSlots[0];
                            Interface_LoadItemIcon2(globalCtx, 3);
                        }
                    } else {
                        gSaveContext.equips.buttonItems[3] = ITEM_NONE;
                        gSaveContext.equips.cButtonSlots[2] = SLOT_NONE;
                    }
                }

                if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4)) {
                    if ((gSaveContext.equips.buttonItems[1] == ITEM_BOW) ||
                        ((gSaveContext.equips.buttonItems[1] >= ITEM_FROG) &&
                         (gSaveContext.equips.buttonItems[1] <= ITEM_BOW_ARROW_LIGHT))) {
                        pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                        pauseCtx->equipTargetSlot = SLOT_BOW;
                    }
                } else if (pauseCtx->equipTargetItem == ITEM_BOW) {
                    if ((gSaveContext.equips.buttonItems[2] >= ITEM_FROG) &&
                        (gSaveContext.equips.buttonItems[2] <= ITEM_BOW_ARROW_LIGHT)) {
                        gSaveContext.equips.buttonItems[2] = gSaveContext.equips.buttonItems[1];
                        gSaveContext.equips.cButtonSlots[1] = gSaveContext.equips.cButtonSlots[0];
                        Interface_LoadItemIcon2(globalCtx, 2);
                    } else if ((gSaveContext.equips.buttonItems[3] >= ITEM_FROG) &&
                               (gSaveContext.equips.buttonItems[3] <= ITEM_BOW_ARROW_LIGHT)) {
                        gSaveContext.equips.buttonItems[3] = gSaveContext.equips.buttonItems[1];
                        gSaveContext.equips.cButtonSlots[2] = gSaveContext.equips.cButtonSlots[0];
                        Interface_LoadItemIcon2(globalCtx, 3);
                    }
                }

                gSaveContext.equips.buttonItems[1] = pauseCtx->equipTargetItem;
                gSaveContext.equips.cButtonSlots[0] = pauseCtx->equipTargetSlot;
                Interface_LoadItemIcon1(globalCtx, 1);

                osSyncPrintf("Ｃ左sl_item_no=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetItem,
                             gSaveContext.equips.buttonItems[1], gSaveContext.equips.buttonItems[2],
                             gSaveContext.equips.buttonItems[3]);
                osSyncPrintf("Ｃ左sl_number=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetSlot,
                             gSaveContext.equips.cButtonSlots[0], gSaveContext.equips.cButtonSlots[1],
                             gSaveContext.equips.cButtonSlots[2]);
            } else if (pauseCtx->equipTargetCBtn == 1) {
                osSyncPrintf("Ｃ下sl_item_no=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetItem,
                             gSaveContext.equips.buttonItems[1], gSaveContext.equips.buttonItems[2],
                             gSaveContext.equips.buttonItems[3]);
                osSyncPrintf("Ｃ下sl_number=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetSlot,
                             gSaveContext.equips.cButtonSlots[0], gSaveContext.equips.cButtonSlots[1],
                             gSaveContext.equips.cButtonSlots[2]);

                if (pauseCtx->equipTargetSlot == gSaveContext.equips.cButtonSlots[0]) {
                    if (gSaveContext.equips.buttonItems[2] != ITEM_NONE) {
                        if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4) &&
                            ((gSaveContext.equips.buttonItems[2] == ITEM_BOW) ||
                             ((gSaveContext.equips.buttonItems[2] >= ITEM_FROG) &&
                              (gSaveContext.equips.buttonItems[2] <= ITEM_BOW_ARROW_LIGHT)))) {
                            pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                            pauseCtx->equipTargetSlot = SLOT_BOW;
                        } else {
                            gSaveContext.equips.buttonItems[1] = gSaveContext.equips.buttonItems[2];
                            gSaveContext.equips.cButtonSlots[0] = gSaveContext.equips.cButtonSlots[1];
                            Interface_LoadItemIcon2(globalCtx, 1);
                        }
                    } else {
                        gSaveContext.equips.buttonItems[1] = ITEM_NONE;
                        gSaveContext.equips.cButtonSlots[0] = SLOT_NONE;
                    }
                } else if (pauseCtx->equipTargetSlot == gSaveContext.equips.cButtonSlots[2]) {
                    if (gSaveContext.equips.buttonItems[2] != ITEM_NONE) {
                        if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4) &&
                            ((gSaveContext.equips.buttonItems[2] == ITEM_BOW) ||
                             ((gSaveContext.equips.buttonItems[2] >= ITEM_FROG) &&
                              (gSaveContext.equips.buttonItems[2] <= ITEM_BOW_ARROW_LIGHT)))) {
                            pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                            pauseCtx->equipTargetSlot = SLOT_BOW;
                        } else {
                            gSaveContext.equips.buttonItems[3] = gSaveContext.equips.buttonItems[2];
                            gSaveContext.equips.cButtonSlots[2] = gSaveContext.equips.cButtonSlots[1];
                            Interface_LoadItemIcon2(globalCtx, 3);
                        }
                    } else {
                        gSaveContext.equips.buttonItems[3] = ITEM_NONE;
                        gSaveContext.equips.cButtonSlots[2] = SLOT_NONE;
                    }
                }

                if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4)) {
                    if ((gSaveContext.equips.buttonItems[2] == ITEM_BOW) ||
                        ((gSaveContext.equips.buttonItems[2] >= ITEM_FROG) &&
                         (gSaveContext.equips.buttonItems[2] <= ITEM_BOW_ARROW_LIGHT))) {
                        pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                        pauseCtx->equipTargetSlot = SLOT_BOW;
                    }
                } else if (pauseCtx->equipTargetItem == ITEM_BOW) {
                    if ((gSaveContext.equips.buttonItems[1] >= ITEM_BOW_ARROW_FIRE) &&
                        (gSaveContext.equips.buttonItems[1] <= ITEM_BOW_ARROW_LIGHT)) {
                        gSaveContext.equips.buttonItems[1] = gSaveContext.equips.buttonItems[2];
                        Interface_LoadItemIcon2(globalCtx, 1);
                    } else if ((gSaveContext.equips.buttonItems[3] >= ITEM_BOW_ARROW_FIRE) &&
                               (gSaveContext.equips.buttonItems[3] <= ITEM_BOW_ARROW_LIGHT)) {
                        gSaveContext.equips.buttonItems[3] = gSaveContext.equips.buttonItems[2];
                        Interface_LoadItemIcon2(globalCtx, 3);
                    }
                }

                gSaveContext.equips.buttonItems[2] = pauseCtx->equipTargetItem;
                gSaveContext.equips.cButtonSlots[1] = pauseCtx->equipTargetSlot;
                Interface_LoadItemIcon1(globalCtx, 2);

                osSyncPrintf("Ｃ下sl_item_no=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetItem,
                             gSaveContext.equips.buttonItems[1], gSaveContext.equips.buttonItems[2],
                             gSaveContext.equips.buttonItems[3]);
                osSyncPrintf("Ｃ下sl_number=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetSlot,
                             gSaveContext.equips.cButtonSlots[0], gSaveContext.equips.cButtonSlots[1],
                             gSaveContext.equips.cButtonSlots[2]);
            } else {
                osSyncPrintf("Ｃ右sl_item_no=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetItem,
                             gSaveContext.equips.buttonItems[1], gSaveContext.equips.buttonItems[2],
                             gSaveContext.equips.buttonItems[3]);
                osSyncPrintf("Ｃ右sl_number=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetSlot,
                             gSaveContext.equips.cButtonSlots[0], gSaveContext.equips.cButtonSlots[1],
                             gSaveContext.equips.cButtonSlots[2]);

                if (pauseCtx->equipTargetSlot == gSaveContext.equips.cButtonSlots[0]) {
                    if (gSaveContext.equips.buttonItems[3] != ITEM_NONE) {
                        if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4) &&
                            ((gSaveContext.equips.buttonItems[3] == ITEM_BOW) ||
                             ((gSaveContext.equips.buttonItems[3] >= ITEM_FROG) &&
                              (gSaveContext.equips.buttonItems[3] <= ITEM_BOW_ARROW_LIGHT)))) {
                            pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                            pauseCtx->equipTargetSlot = SLOT_BOW;
                        } else {
                            gSaveContext.equips.buttonItems[1] = gSaveContext.equips.buttonItems[3];
                            gSaveContext.equips.cButtonSlots[0] = gSaveContext.equips.cButtonSlots[2];
                            Interface_LoadItemIcon2(globalCtx, 1);
                        }
                    } else {
                        gSaveContext.equips.buttonItems[1] = ITEM_NONE;
                        gSaveContext.equips.cButtonSlots[0] = SLOT_NONE;
                    }
                } else if (pauseCtx->equipTargetSlot == gSaveContext.equips.cButtonSlots[1]) {
                    if (gSaveContext.equips.buttonItems[3] != ITEM_NONE) {
                        if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4) &&
                            ((gSaveContext.equips.buttonItems[3] == ITEM_BOW) ||
                             ((gSaveContext.equips.buttonItems[3] >= ITEM_FROG) &&
                              (gSaveContext.equips.buttonItems[3] <= ITEM_BOW_ARROW_LIGHT)))) {
                            pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                            pauseCtx->equipTargetSlot = SLOT_BOW;
                        } else {
                            gSaveContext.equips.buttonItems[2] = gSaveContext.equips.buttonItems[3];
                            gSaveContext.equips.cButtonSlots[1] = gSaveContext.equips.cButtonSlots[2];
                            Interface_LoadItemIcon2(globalCtx, 2);
                        }
                    } else {
                        gSaveContext.equips.buttonItems[2] = ITEM_NONE;
                        gSaveContext.equips.cButtonSlots[1] = SLOT_NONE;
                    }
                }

                if ((pauseCtx->equipTargetItem >= 0xBF) && (pauseCtx->equipTargetItem <= 0xC4)) {
                    if ((gSaveContext.equips.buttonItems[3] == ITEM_BOW) ||
                        ((gSaveContext.equips.buttonItems[3] >= ITEM_FROG) &&
                         (gSaveContext.equips.buttonItems[3] <= ITEM_BOW_ARROW_LIGHT))) {
                        pauseCtx->equipTargetItem -= 0xc2 - ITEM_BOW_ARROW_FIRE;
                        pauseCtx->equipTargetSlot = SLOT_BOW;
                    }
                } else if (pauseCtx->equipTargetItem == ITEM_BOW) {
                    if ((gSaveContext.equips.buttonItems[1] >= ITEM_FROG) &&
                        (gSaveContext.equips.buttonItems[1] <= ITEM_BOW_ARROW_LIGHT)) {
                        gSaveContext.equips.buttonItems[1] = gSaveContext.equips.buttonItems[3];
                        Interface_LoadItemIcon2(globalCtx, 1);
                    } else if ((gSaveContext.equips.buttonItems[2] >= ITEM_BOW_ARROW_FIRE) &&
                               (gSaveContext.equips.buttonItems[2] <= ITEM_BOW_ARROW_LIGHT)) {
                        gSaveContext.equips.buttonItems[2] = gSaveContext.equips.buttonItems[3];
                        Interface_LoadItemIcon2(globalCtx, 2);
                    }
                }

                gSaveContext.equips.buttonItems[3] = pauseCtx->equipTargetItem;
                gSaveContext.equips.cButtonSlots[2] = pauseCtx->equipTargetSlot;
                Interface_LoadItemIcon1(globalCtx, 3);

                osSyncPrintf("Ｃ右sl_item_no=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetItem,
                             gSaveContext.equips.buttonItems[1], gSaveContext.equips.buttonItems[2],
                             gSaveContext.equips.buttonItems[3]);
                osSyncPrintf("Ｃ右sl_number=%d (1)=%d (2)=%d (3)=%d\n", pauseCtx->equipTargetSlot,
                             gSaveContext.equips.cButtonSlots[0], gSaveContext.equips.cButtonSlots[1],
                             gSaveContext.equips.cButtonSlots[2]);
            }

            pauseCtx->unk_1E4 = 0;
            sEquipMoveTimer = 10;
            WREG(90) = 320;
            WREG(87) = WREG(91);
        }
    } else {
        sEquipAnimTimer--;
        if (sEquipAnimTimer == 0) {
            pauseCtx->equipAnimAlpha = 255;
        }
    }
}
