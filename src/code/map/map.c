/*
 * Functions for the new minimap system.
 */

#include "global.h"
#include "vt.h"
#include "objects/gameplay_keep/gameplay_keep.h"

#define THIS &gMinimapState

/**
 * Gets the minimap ID for the current scene
 */
s32 Map_GetMapId(GlobalContext* globalCtx) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMapInfoTable); i++) {
        if (globalCtx->sceneNum == gMapInfoTable[i].sceneNum) {
            return i;
        }
    }
    return -1;
}

/**
 * Gets the current dungeon floor
 */
s32 Map_GetCurrentDungeonFloor(GlobalContext* globalCtx, MapState* this, MapInfo* info) {
    Player* player = PLAYER;
    s32 roomNum = globalCtx->roomCtx.curRoom.num;
    s32 curFloor;      // current floor being checked
    s32 curRoom;       // current room being checked
    s32 curMultiFloor; // current multifloor being checked

    if (info->mapType == MINIMAP_DUNGEON) {
        for (curFloor = 0; curFloor < info->dungeonInfo->floorCount; curFloor++) {
            MinimapDungeonFloorInfo* floorInfo = &info->dungeonInfo->floorInfo[curFloor];

            for (curRoom = 0; curRoom < floorInfo->roomCount; curRoom++) {
                if (floorInfo->roomInfo[curRoom].roomId == roomNum) {
                    if (floorInfo->roomInfo[curRoom].isMultiFloor) {
                        for (curMultiFloor = 0; curMultiFloor < info->dungeonInfo->floorCount; curMultiFloor++) {
                            if (((s32)player->actor.world.pos.y >= info->dungeonInfo->floorInfo[curMultiFloor].minY) &&
                                ((s32)player->actor.world.pos.y < info->dungeonInfo->floorInfo[curMultiFloor].maxY)) {
                                return INDEX_TO_FLOOR(curMultiFloor, info);
                            }
                        }
                    }
                    return INDEX_TO_FLOOR(curFloor, info);
                }
            }
        }
    }
    return MAP_FLOOR_F1;
}

/**
 * Clear a RGBA16 palette
 */
void Map_ClearPalette(s16* palette, s16 colorCount) {
    s32 i;

    for (i = 0; i < colorCount; i++) {
        palette[i] = GPACK_RGBA5551(0, 0, 0, 0);
    }
}

/**
 * Color the room outline in a palette
 */
void Map_ColorRoomOutline(s16* palette) {
    palette[15] = GPACK_RGBA5551(255, 255, 255, 255);
}

/**
 * Sets palette colors for dungeon maps
 */
void Map_SetPaletteData(GlobalContext* globalCtx, MapState* this, MapInfo* info) {
    s32 i;
    MinimapDungeonFloorInfo* floorInfo;

    // Get floor info
    floorInfo = &info->dungeonInfo->floorInfo[this->dungeonFloor];

    // Clear the current palette
    Map_ClearPalette(gDungeonMinimapPalette, ARRAY_COUNT(gDungeonMinimapPalette));

    // Set the palette to blue for the rooms in which the player has visited
    for (i = 0; i < floorInfo->roomCount; i++) {
        s16 room = floorInfo->roomInfo[i].roomId;
        s16 pal = floorInfo->roomInfo[i].palId;

        if (gSaveContext.sceneFlags[globalCtx->sceneNum].rooms & gBitFlags[room]) {
            gDungeonMinimapPalette[pal] =
                GPACK_RGBA5551(DUNGEON_SHADED_ROOM_R, DUNGEON_SHADED_ROOM_G, DUNGEON_SHADED_ROOM_B, 255);
        }
    }

    // Set the outline for the map if the player has the dungeon map
    if (CHECK_DUNGEON_ITEM(DUNGEON_MAP, gSaveContext.mapIndex)) {
        Map_ColorRoomOutline(gDungeonMinimapPalette);
    }
}

/**
 * Loads overworld minimap data
 */
void Map_LoadOverworldData(GlobalContext* globalCtx, MapState* this, MapInfo* info, void* buffer) {
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    u32 segSize = (u32)info->overworldInfo->segmentEnd - (u32)info->overworldInfo->segmentStart;

    this->texture[0] = info->overworldInfo->texture;
    this->texture[1] = 0;
    this->dungeonEntranceX = info->overworldInfo->dungeonEntranceX;
    this->dungeonEntranceY = info->overworldInfo->dungeonEntranceY;
    DmaMgr_SendRequest1(buffer, info->overworldInfo->segmentStart, segSize, __FILE__, __LINE__);
}

/**
 * Loads dungeon minimap data
 */
void Map_LoadDungeonData(GlobalContext* globalCtx, MapState* this, MapInfo* info, void* buffer) {
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    MinimapDungeonFloorInfo* floorInfo = &info->dungeonInfo->floorInfo[this->dungeonFloor];
    u32 segSize;

    this->texture[0] = floorInfo->texture[0];
    this->texture[1] = floorInfo->texture[1];
    segSize = (u32)floorInfo->segmentEnd - (u32)floorInfo->segmentStart;
    DmaMgr_SendRequest1(buffer, floorInfo->segmentStart, segSize, __FILE__, __LINE__);
}

/**
 * Loads minimap data into ram and updates info based on the new map being loaded
 */
void Map_ConfigureMiniMap(GlobalContext* globalCtx, MapState* this) {
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    s32 newMapInfoId;
    s32 newFloorId;
    MapInfo* info;

    // Save that the current room in the scene has been visited
    gSaveContext.sceneFlags[globalCtx->sceneNum].rooms |= gBitFlags[globalCtx->roomCtx.curRoom.num];

    newMapInfoId = Map_GetMapId(globalCtx);

    // No minimap should be loaded
    if (newMapInfoId < 0) {
        this->mapInfoId = newMapInfoId;
        return;
    }

    // Get the new floor index
    info = &gMapInfoTable[newMapInfoId];
    newFloorId = FLOOR_TO_INDEX(Map_GetCurrentDungeonFloor(globalCtx, this, info), info);

    // Initialize a new minimap
    if ((newMapInfoId != this->mapInfoId) ||
        ((info->mapType == MINIMAP_DUNGEON) && (newFloorId != this->dungeonFloor))) {
        // Check if only the floor is changing. If so, skip updating the scale and offset to avoid conflicting with the
        // map editor.
        if (!((newMapInfoId == this->mapInfoId) && (info->mapType == MINIMAP_DUNGEON) &&
              (newFloorId != this->dungeonFloor))) {
            this->scaleX = info->scaleX;
            this->scaleY = info->scaleY;
            this->offsetX = info->offsetX;
            this->offsetY = info->offsetY;
        }

        // Update map info
        this->mapInfoId = newMapInfoId;
        this->mapType = info->mapType;
        this->dungeonFloor = newFloorId;
        this->mapWidth = info->width;
        this->mapHeight = info->height;
        this->mapPosX = info->posX;
        this->mapPosY = info->posY;
        this->dungeonEntranceX = this->dungeonEntranceY = -1;

        // A map ID less than 0 means to not render the map right now
        if (this->mapInfoId >= 0) {
            // Update info about the texture being loaded, and copy it into ram
            if (this->mapType == MINIMAP_DUNGEON) {
                Map_LoadDungeonData(globalCtx, this, info, gMinimapBuffer);
                Map_SetPaletteData(globalCtx, this, info);
            } else {
                Map_LoadOverworldData(globalCtx, this, info, gMinimapBuffer);
            }
        }
    }
}

/**
 * Generates a displaylist to load a CI4 texture with a palette
 */
Gfx* Gfx_TextureCI4(Gfx* dListHead, void* texture, void* tlut, s16 textureWidth, s16 textureHeight, s16 rectLeft,
                    s16 rectTop, s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy) {
    gSPSetOtherMode(dListHead++, G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, 0);
    gDPSetTextureImage(dListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, tlut);
    gDPTileSync(dListHead++);
    gDPSetTile(dListHead++, G_IM_FMT_RGBA, 0, 0, 0x100, G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
    gDPLoadSync(dListHead++);
    gDPLoadTLUTCmd(dListHead++, G_TX_LOADTILE, 15);
    gDPPipeSync(dListHead++);
    gSPSetOtherMode(dListHead++, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, 0x8000);
    gDPLoadMultiBlock_4b(dListHead++, texture, 0, G_TX_RENDERTILE, G_IM_FMT_CI, textureWidth, textureHeight, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD);
    gSPTextureRectangle(dListHead++, rectLeft << 2, rectTop << 2, (rectLeft + rectWidth) << 2,
                        (rectTop + rectHeight) << 2, G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    return dListHead;
}

/**
 * Generates a displaylist to load an I4 texture
 */
Gfx* Gfx_TextureI4(Gfx* dListHead, void* texture, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop,
                   s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy) {
    gDPLoadMultiBlock_4b(dListHead++, texture, 0, G_TX_RENDERTILE, G_IM_FMT_I, textureWidth, textureHeight, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD);
    gSPTextureRectangle(dListHead++, rectLeft * 4, rectTop * 4, (rectLeft + rectWidth) * 4, (rectTop + rectHeight) * 4,
                        G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    return dListHead;
}

/**
 * Generates a displaylist to load an RGBA16 texture
 */
Gfx* Gfx_TextureRGBA16(Gfx* dListHead, void* texture, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop,
                       s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy) {
    gDPLoadTextureBlock(dListHead++, texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, textureWidth, textureHeight, 0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOLOD);

    gSPTextureRectangle(dListHead++, rectLeft * 4, rectTop * 4, (rectLeft + rectWidth) * 4, (rectTop + rectHeight) * 4,
                        G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    return dListHead;
}

/**
 * Draw dungeon compass icons
 */
Gfx* Map_DrawDungeonCompassIcons(GlobalContext* globalCtx, Gfx* dListHead, MapState* this, MapInfo* info, s32 isPause) {
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    MinimapDungeonFloorInfo* floorInfo = &info->dungeonInfo->floorInfo[this->dungeonFloor];
    f32 scaleFactor = (isPause) ? MAP_PAUSE_SCALE : 1.0f;
    s32 i;

    dListHead = func_800944A0(dListHead);

    // Draw chest icons
    for (i = 0; i < floorInfo->chestCount; i++) {
        if (!(Flags_GetTreasure(globalCtx, floorInfo->chestInfo[i].chestFlag))) {
            // Unopened chests
            gDPSetPrimColor(dListHead++, 0, 0, 255, 255, 255, interfaceCtx->minimapAlpha);
            gDPSetEnvColor(dListHead++, 0, 0, 0, 255);

            dListHead = Gfx_TextureRGBA16(
                dListHead, gHUDTreasureMarkerTex, 8, 8, scaleFactor * (floorInfo->chestInfo[i].chestX + this->mapPosX),
                scaleFactor * (floorInfo->chestInfo[i].chestY + this->mapPosY), 8, 8, 1024, 1024);
        } else {
            // Opened chests
            gDPSetPrimColor(dListHead++, 0, 0, 0, 0, 0, interfaceCtx->minimapAlpha);
            gDPSetEnvColor(dListHead++, 0, 0, 0, 255);

            dListHead =
                Gfx_TextureIA8(dListHead, gHUDTreasureMarkerOpenedTex, 8, 8,
                               scaleFactor * (floorInfo->chestInfo[i].chestX + this->mapPosX),
                               scaleFactor * (floorInfo->chestInfo[i].chestY + this->mapPosY), 8, 8, 1024, 1024);
        }
    }

    // Draw boss skull
    if ((this->dungeonFloor == FLOOR_TO_INDEX(info->dungeonInfo->bossFloor, info)) &&
        (!(gSaveContext.sceneFlags[globalCtx->sceneNum].rooms & gBitFlags[info->dungeonInfo->bossRoom]))) {
        gDPSetPrimColor(dListHead++, 0, 0, 255, 255, 255, interfaceCtx->minimapAlpha);
        gDPSetEnvColor(dListHead++, 0, 0, 0, 255);

        dListHead =
            Gfx_TextureIA8(dListHead, gHUDBossMarkerTex, 8, 8, scaleFactor * (info->dungeonInfo->bossX + this->mapPosX),
                           scaleFactor * (info->dungeonInfo->bossY + this->mapPosY), 8, 8, 1024, 1024);
    }

    return dListHead;
}

/**
 * Draw overworld compass icons
 */
void Map_DrawOverworldCompassIcons(GlobalContext* globalCtx, MapState* this) {
    if (this->dungeonEntranceX >= 0 || this->dungeonEntranceY >= 0) {
        InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

        OPEN_DISPS(globalCtx->state.gfxCtx);

        func_80094520(globalCtx->state.gfxCtx);

        gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 255, this->mapTargetAlpha);
        gDPSetEnvColor(OVERLAY_DISP++, 0, 0, 0, 255);

        OVERLAY_DISP = Gfx_TextureRGBA16(OVERLAY_DISP, gHUDExitMarkerTex, 8, 8, this->dungeonEntranceX + this->mapPosX,
                                         this->dungeonEntranceY + this->mapPosY, 8, 8, 1024, 1024);

        CLOSE_DISPS(globalCtx->state.gfxCtx);
    }
}

/**
 * Draw the compass arrows
 */
void Map_DrawCompassArrow(GlobalContext* globalCtx, MapState* this) {
    s32 pad;
    Player* player = PLAYER;
    s16 tempX, tempZ;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    if (globalCtx->interfaceCtx.minimapAlpha >= 170) {
        func_80094A14(globalCtx->state.gfxCtx);

        gDPPipeSync(OVERLAY_DISP++);
        gSPMatrix(OVERLAY_DISP++, &gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gDPSetCombineLERP(OVERLAY_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
        gDPSetEnvColor(OVERLAY_DISP++, 0, 0, 0, 255);
        gDPSetCombineMode(OVERLAY_DISP++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);

        tempX = player->actor.world.pos.x;
        tempZ = player->actor.world.pos.z;
        tempX /= this->scaleX;
        tempZ /= this->scaleY;
        Matrix_Translate((this->offsetX + tempX) / 10.0f, (this->offsetY - tempZ) / 10.0f, 0.0f, MTXMODE_NEW);
        Matrix_Scale(0.4f, 0.4f, 0.4f, MTXMODE_APPLY);
        Matrix_RotateX(-1.6f, MTXMODE_APPLY);
        tempX = (0x7FFF - player->actor.shape.rot.y) / 0x400;
        Matrix_RotateY(tempX / 10.0f, MTXMODE_APPLY);
        gSPMatrix(OVERLAY_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, __FILE__, __LINE__),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

        gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 200, 255, 0, 255);
        gSPDisplayList(OVERLAY_DISP++, gCompassArrowDL);
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

/**
 * Dungeon minimap drawing routine
 */
void Map_DrawDungeon(GlobalContext* globalCtx, MapState* this) {
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // Kind of janky but this is intended for making sure the palette updates when the player gets a map from a chest,
    // but does not until the player has fully switched into another room
    if (interfaceCtx->minimapAlpha == 0 || func_8010BDBC(&globalCtx->msgCtx) != 0) {
        Map_SetPaletteData(globalCtx, this, &gMapInfoTable[this->mapInfoId]);
    }

    // Set a combiner preset so the minimap will render correctly
    func_80094520(globalCtx->state.gfxCtx);
    gDPPipeSync(OVERLAY_DISP++);
    gDPSetCombineLERP(OVERLAY_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

    // Set the color
    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, DUNGEON_MINIMAP_R, DUNGEON_MINIMAP_G, DUNGEON_MINIMAP_B,
                    interfaceCtx->minimapAlpha * (192.0f / 255.0f));
    gDPSetEnvColor(OVERLAY_DISP++, 0, 0, 0, 255);

    // Draw the minimap
    OVERLAY_DISP =
        Gfx_TextureCI4(OVERLAY_DISP, this->texture[0], gDungeonMinimapPalette, this->mapWidth, this->mapHeight,
                       this->mapPosX, this->mapPosY, this->mapWidth, this->mapHeight, 1024, 1024);
    OVERLAY_DISP =
        Gfx_TextureCI4(OVERLAY_DISP, this->texture[1], gDungeonMinimapPalette, this->mapWidth, this->mapHeight,
                       this->mapPosX + this->mapWidth, this->mapPosY, this->mapWidth, this->mapHeight, 1024, 1024);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

/**
 * Overworld minimap drawing routine
 */
void Map_DrawOverworld(GlobalContext* globalCtx, MapState* this) {
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // Set a combiner preset so the minimap will render correctly
    func_80094520(globalCtx->state.gfxCtx);
    gDPSetCombineLERP(OVERLAY_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPPipeSync(OVERLAY_DISP++);

    // Set the color
    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, OVERWORLD_MINIMAP_R, OVERWORLD_MINIMAP_G, OVERWORLD_MINIMAP_B,
                    this->mapTargetAlpha);
    gDPSetEnvColor(OVERLAY_DISP++, 0, 0, 0, 255);

    // Draw the minimap
    OVERLAY_DISP = Gfx_TextureI4(OVERLAY_DISP, this->texture[0], this->mapWidth, this->mapHeight, this->mapPosX,
                                 this->mapPosY, this->mapWidth, this->mapHeight, 1024, 1024);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void Map_Init(GlobalContext* globalCtx) {
    MapState* this = THIS;

    this->mapInfoId = -1;
}

/**
 * Main minimap drawing routine
 */
void Map_Draw(GlobalContext* globalCtx) {
    MapState* this = THIS;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gSPSegment(OVERLAY_DISP++, 0x0B, gMinimapBuffer);

    if (globalCtx->pauseCtx.state < 4) {
        // Load the textures if they get unloaded
        Map_ConfigureMiniMap(globalCtx, this);

        // A map ID less than 0 means to not render the map right now
        if (this->mapInfoId >= 0) {
            if (this->mapType == MINIMAP_DUNGEON) {
                if (!this->minimapToggled) {
                    // Draw a dungeon minimap
                    Map_DrawDungeon(globalCtx, this);

                    // Draw compass icons
                    if (CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.mapIndex)) {
                        OVERLAY_DISP = Map_DrawDungeonCompassIcons(globalCtx, OVERLAY_DISP, this,
                                                                   &gMapInfoTable[this->mapInfoId], false);
                    }
                }
            } else {
                if (this->minimapToggled) {
                    this->mapTargetAlpha = interfaceCtx->minimapAlpha >> 1;
                } else {
                    this->mapTargetAlpha = interfaceCtx->minimapAlpha;
                }
                // Draw an overworld map
                Map_DrawOverworld(globalCtx, this);

                // Draw compass icons
                Map_DrawOverworldCompassIcons(globalCtx, this);
            }

            // Draw compass arrow
            Map_DrawCompassArrow(globalCtx, this);
        }

        // Always update the palette if the map is hidden
        if ((this->mapInfoId >= 0) && (this->minimapToggled) && (this->mapType == MINIMAP_DUNGEON)) {
            Map_SetPaletteData(globalCtx, this, &gMapInfoTable[this->mapInfoId]);
        }

        // Check if the minimap should get toggled, play the sound effect if it should
        if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_L) && !Gameplay_InCsMode(globalCtx)) {
            if (!this->minimapToggled) {
                Audio_PlaySoundGeneral(NA_SE_SY_CAMERA_ZOOM_UP, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            } else {
                Audio_PlaySoundGeneral(NA_SE_SY_CAMERA_ZOOM_DOWN, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                       &D_801333E8);
            }
            this->minimapToggled ^= 1;
        }
    } else {
        // If the pause menu is loaded disable showing the minimap, and set it to be recopied into ram after the
        // player unpauses
        this->mapInfoId = -1;
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

// Note: Comment this line out to not use outlines for the pause
#define USE_ROOM_OUTLINES

/************ Pause menu ************/
void Map_SetPaletteDataPause(GlobalContext* globalCtx, MapState* this, MapInfo* info) {
    s32 i;
    MinimapDungeonFloorInfo* floorInfo;

    // Get floor info
    floorInfo = &info->dungeonInfo->floorInfo[this->dungeonFloor];

    // Clear the current palette
    Map_ClearPalette(gPauseDungeonMapPalette, ARRAY_COUNT(gPauseDungeonMapPalette));

    for (i = 0; i < floorInfo->roomCount; i++) {
        s16 room = floorInfo->roomInfo[i].roomId;
        s16 pal = floorInfo->roomInfo[i].palId;

#if defined USE_ROOM_OUTLINES
        // Set the palette to blue for the rooms in which the player has visited
        if (gSaveContext.sceneFlags[globalCtx->sceneNum].rooms & gBitFlags[room]) {
            gPauseDungeonMapPalette[pal] =
                GPACK_RGBA5551(DUNGEON_SHADED_ROOM_R, DUNGEON_SHADED_ROOM_G, DUNGEON_SHADED_ROOM_B, 255);
        }
        // Set the outline for the map if the player has the dungeon map
        if (CHECK_DUNGEON_ITEM(DUNGEON_MAP, gSaveContext.mapIndex)) {
            Map_ColorRoomOutline(gPauseDungeonMapPalette);
            // Note: uncomment to use any color for the outline
            // gPauseDungeonMapPalette[15] = GPACK_RGBA5551(0, 0, 0, 255);
        }
#else
        // Set the palette to blue for the rooms in which the player has visited, or all of them to blue if the player
        // has the map
        if (CHECK_DUNGEON_ITEM(DUNGEON_MAP, gSaveContext.mapIndex) ||
            (gSaveContext.sceneFlags[globalCtx->sceneNum].rooms & gBitFlags[room])) {
            gPauseDungeonMapPalette[pal] =
                GPACK_RGBA5551(DUNGEON_SHADED_ROOM_R, DUNGEON_SHADED_ROOM_G, DUNGEON_SHADED_ROOM_B, 255);
        }
#endif
        // Set the current room to red
        // Note: uncomment to make the red floor only show for the current floor, ignoring multi floor rooms, not sure
        // what makes the most sense yet...
        if (room == globalCtx->roomCtx.curRoom.num /**/ && (this->dungeonFloor == gMinimapState.dungeonFloor) /**/) {
            gPauseDungeonMapPalette[pal] = GPACK_RGBA5551(255, 0, 0, 255);
        }
    }
}

void Map_ConfigurePause(GlobalContext* globalCtx, MapState* this, s32 floorOverride) {
    s32 newMapInfoId = Map_GetMapId(globalCtx);
    s32 newFloorId;
    MapInfo* info;

    this->mapPosX = MAP_PAUSE_SCREEN_X;
    this->mapPosY = MAP_PAUSE_SCREEN_Y;

    // Stop if the map if there is no map to load (this shouldn't ever actually happen though anyways!)
    if (newMapInfoId < 0) {
        return;
    }

    // Get the new floor index
    info = &gMapInfoTable[newMapInfoId];

    // Only use dungeon map for pause (this shouldn't ever actually happen though anyways!)
    if (info->mapType != MINIMAP_DUNGEON) {
        return;
    }

    // Initialize a new minimap
    if ((newMapInfoId != this->mapInfoId) || (floorOverride != this->dungeonFloor)) {
        // Update map info
        this->mapInfoId = newMapInfoId;
        this->dungeonFloor = floorOverride;
        Map_LoadDungeonData(globalCtx, this, info, gPauseDungeonMapBuffer);
    }

    Map_SetPaletteDataPause(globalCtx, this, info);
}
