#include "z_kaleido_scope.h"
#include "textures/icon_item_24_static/icon_item_24_static.h"
#include "textures/icon_item_nes_static/icon_item_nes_static.h"
#include "textures/icon_item_ger_static/icon_item_ger_static.h"
#include "textures/icon_item_fra_static/icon_item_fra_static.h"
#include "textures/icon_item_field_static/icon_item_field_static.h"
#include "textures/icon_item_dungeon_static/icon_item_dungeon_static.h"
#include "textures/icon_item_nes_static/icon_item_nes_static.h"
#include "textures/icon_item_static/icon_item_static.h"

// debug feature, makes the compass icons always display even if you don't have the compass
// #define DONT_REQUIRE_COMPASS

#define Gfx_ClearPauseAttributes(_gfxCtx, _pauseCtx)                             \
    do {                                                                         \
        func_800949A8(_gfxCtx);                                                  \
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA, G_CC_MODULATEIA);    \
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, _pauseCtx->alpha); \
        gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);                           \
    } while (0)

#define FLOOR_BUTTON_HEIGHT 14
#define FLOOR_BUTTON_TEX_WIDTH 24
#define FLOOR_BUTTON_TEX_HEIGHT 16

Gfx* KaleidoScope_DrawFloorButton(GlobalContext* globalCtx, Gfx* dListHead, s16 face, s16 floor, bool isHighlighted) {
    static void* floorButtonTextures[] = {
        gDungeonMapB8ButtonTex, gDungeonMapB7ButtonTex, gDungeonMapB6ButtonTex, gDungeonMapB5ButtonTex,
        gDungeonMapB4ButtonTex, gDungeonMapB3ButtonTex, gDungeonMapB2ButtonTex, gDungeonMapB1ButtonTex,
        gDungeonMap1FButtonTex, gDungeonMap2FButtonTex, gDungeonMap3FButtonTex, gDungeonMap4FButtonTex,
        gDungeonMap5FButtonTex, gDungeonMap6FButtonTex, gDungeonMap7FButtonTex, gDungeonMap8FButtonTex,
    };
    static Vtx floorButtonBaseVtx[4] = {
        VTX(114, -23, 0, 752, -16, 255, 255, 200, 255), // Lower right
        VTX(94, -23, 0, -16, -16, 255, 255, 200, 255),  // Upper left
        VTX(94, -37, 0, -16, 496, 255, 255, 200, 255),  // Lower left
        VTX(114, -37, 0, 752, 496, 255, 255, 200, 255), // Upper right
    };
    static Vtx floorButtonExpandedBaseVtx[4] = {
        VTX(117, -21, 0, 752, -16, 255, 255, 200, 255), // Lower right
        VTX(92, -21, 0, -16, -16, 255, 255, 200, 255),  // Upper left
        VTX(92, -38, 0, -16, 496, 255, 255, 200, 255),  // Lower left
        VTX(117, -38, 0, 752, 496, 255, 255, 200, 255), // Upper right
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    Vtx* vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Vtx) * 4);
    s32 i;

    // Copy the vertex data into the buffer
    bcopy(isHighlighted ? floorButtonExpandedBaseVtx : floorButtonBaseVtx, vertices, sizeof(Vtx) * 4);

    // Calculate vertex data
    for (i = 0; i < 4; i++) {
        // Set the y position of each vertex
        SET_VTX_Y(vertices[i], GET_VTX_Y(vertices[i]) + (FLOOR_BUTTON_HEIGHT * face) + pauseCtx->offsetY);

        // Set the color of each vertex
        if (isHighlighted) {
            SET_VTX_R(vertices[i], 150);
            SET_VTX_G(vertices[i], 150);
            SET_VTX_B(vertices[i], 255);
        }

        SET_VTX_A(vertices[i], pauseCtx->alpha);
    }

    // Draw button
    gDPPipeSync(dListHead++);

    gDPLoadTextureBlock(dListHead++, floorButtonTextures[floor], G_IM_FMT_IA, G_IM_SIZ_8b, FLOOR_BUTTON_TEX_WIDTH,
                        FLOOR_BUTTON_TEX_HEIGHT, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK,
                        G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    gSPVertex(dListHead++, vertices, 4, 0);
    gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);

    return dListHead;
}

Gfx* KaleidoScope_DrawDungeonMapTexture(GlobalContext* globalCtx, Gfx* dListHead) {
    static Vtx mapLeftBaseVtx[8] = {
        // Left side
        VTX(-10, 51, 0, 1520, -16, 255, 255, 255, 255),
        VTX(-74, 51, 0, -16, -16, 255, 255, 255, 255),
        VTX(-74, -61, 0, -16, 2704, 255, 255, 255, 255),
        VTX(-10, -61, 0, 1520, 2704, 255, 255, 255, 255),
        // Right Side
        VTX(53, 51, 0, 1520, -16, 255, 255, 255, 255),
        VTX(-10, 51, 0, -16, -16, 255, 255, 255, 255),
        VTX(-10, -61, 0, -16, 2704, 255, 255, 255, 255),
        VTX(53, -61, 0, 1520, 2704, 255, 255, 255, 255),
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    Vtx* vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Vtx) * 8);
    s32 i;

    // Copy the vertex data into the buffer
    bcopy(mapLeftBaseVtx, vertices, sizeof(Vtx) * 8);

    for (i = 0; i < 8; i++) {
        // Set the y position of each vertex
        SET_VTX_Y(vertices[i], GET_VTX_Y(vertices[i]) + pauseCtx->offsetY);
        // Set the color of each vertex
        SET_VTX_A(vertices[i], pauseCtx->alpha);
    }

    // Draw map
    gDPPipeSync(dListHead++);

    // Load palette
    gSPSetOtherMode(dListHead++, G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, 0);
    gDPSetTextureImage(dListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPauseDungeonMapPalette);
    gDPTileSync(dListHead++);
    gDPSetTile(dListHead++, G_IM_FMT_RGBA, 0, 0, 0x100, G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
    gDPLoadSync(dListHead++);
    gDPLoadTLUTCmd(dListHead++, G_TX_LOADTILE, 15);
    gDPPipeSync(dListHead++);
    gSPSetOtherMode(dListHead++, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, 0x8000);

    // Left side
    gDPLoadMultiBlock_4b(dListHead++, gPauseDungeonMapBuffer, 0, G_TX_RENDERTILE, G_IM_FMT_CI, DUNGEON_MINIMAP_WIDTH,
                         DUNGEON_MINIMAP_HEIGHT, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                         G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(dListHead++, vertices, 8, 0);
    gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);
    gDPPipeSync(dListHead++);

    // Right side
    gDPLoadMultiBlock_4b(
        dListHead++, (u32)gPauseDungeonMapBuffer + ((DUNGEON_MINIMAP_WIDTH * DUNGEON_MINIMAP_HEIGHT) / 2), 0,
        G_TX_RENDERTILE, G_IM_FMT_CI, DUNGEON_MINIMAP_WIDTH, DUNGEON_MINIMAP_HEIGHT, 0, G_TX_NOMIRROR | G_TX_WRAP,
        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSP2Triangles(dListHead++, 4, 5, 6, 0, 4, 6, 7, 0);
    gDPPipeSync(dListHead++);

    return dListHead;
}

#define MAP_ICON_HEIGHT 16
#define MAP_ICON_TEX_WIDTH 16
#define MAP_ICON_TEX_HEIGHT 16

Gfx* KaleidoScope_DrawDungeonMapItemIcon(GlobalContext* globalCtx, Gfx* dListHead) {
    static Vtx itemIconBaseVtx[] = {
        VTX(112, -54, 0, 496, -16, 255, 255, 255, 255),
        VTX(96, -54, 0, -16, -16, 255, 255, 255, 255),
        VTX(96, -70, 0, -16, 496, 255, 255, 255, 255),
        VTX(112, -70, 0, 496, 496, 255, 255, 255, 255),
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    Vtx* vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Vtx) * 8);
    s32 i;

    // Copy the vertex data into the buffer (twice for two icons)
    bcopy(itemIconBaseVtx, &vertices[0], sizeof(Vtx) * 4);
    bcopy(itemIconBaseVtx, &vertices[4], sizeof(Vtx) * 4);

    for (i = 0; i < 8; i++) {
        // Set the y position of each vertex
        SET_VTX_Y(vertices[i], GET_VTX_Y(vertices[i]) + pauseCtx->offsetY);
        // Set the color of each vertex
        SET_VTX_A(vertices[i], pauseCtx->alpha);
    }

    for (i = 0; i < 4; i++) {
        // Set the y position of each vertex for the map
        SET_VTX_Y(vertices[i + 4], GET_VTX_Y(vertices[i + 4]) + MAP_ICON_HEIGHT);
    }

    gSPVertex(dListHead++, vertices, 8, 0);

    if (CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.mapIndex)) {
        // Draw conpass icon
        gDPPipeSync(dListHead++);

        gDPLoadTextureBlock(dListHead++, gDungeonCompassIconSWTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, MAP_ICON_TEX_WIDTH,
                            MAP_ICON_TEX_HEIGHT, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK,
                            G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);
    }
    if (CHECK_DUNGEON_ITEM(DUNGEON_MAP, gSaveContext.mapIndex)) {
        // Draw map icon
        gDPPipeSync(dListHead++);

        gDPLoadTextureBlock(dListHead++, gDungeonMapIconSWTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, MAP_ICON_TEX_WIDTH,
                            MAP_ICON_TEX_HEIGHT, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK,
                            G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        gSP2Triangles(dListHead++, 4, 5, 6, 0, 4, 6, 7, 0);
    }

    return dListHead;
}

#define FLOOR_SIDE_ICON_WIDTH 13
#define FLOOR_SIDE_ICON_HEIGHT 14
#define FLOOR_SIDE_ICON_TEX_WIDTH 16
#define FLOOR_SIDE_ICON_TEX_HEIGHT 16

typedef enum {
    TYPE_LINK_AND_SKULL,
    TYPE_LINK,
    TYPE_SKULL //
} FloorIconType;

Gfx* KaleidoScope_DrawDungeonMapSideIcons(GlobalContext* globalCtx, Gfx* dListHead, s16 face, s16 type) {
    static Vtx iconBaseVtx[] = {
        VTX(88, -24, 0, 493, -14, 255, 255, 255, 255),
        VTX(76, -24, 0, -13, -14, 255, 255, 255, 255),
        VTX(76, -36, 0, -13, 494, 255, 255, 255, 255),
        VTX(88, -36, 0, 493, 494, 255, 255, 255, 255),
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    s16 vertexCount;
    Vtx* vertices;
    s32 i;

    // Don't draw the skull if the player doesn't have a compass!
    if (!CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.mapIndex)) {
        if (type == TYPE_LINK_AND_SKULL) {
            type = TYPE_LINK;
        } else if (type == TYPE_SKULL) {
            return dListHead;
        }
    }

    vertexCount = (type == TYPE_LINK_AND_SKULL) ? 8 : 4;
    vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Vtx) * vertexCount);

    // Copy the vertex data into the buffer
    bcopy(iconBaseVtx, &vertices[0], sizeof(Vtx) * 4);
    if (type == TYPE_LINK_AND_SKULL) {
        // Extra verts for second icon
        bcopy(iconBaseVtx, &vertices[4], sizeof(Vtx) * 4);
    }

    // Set vertex data
    for (i = 0; i < vertexCount; i++) {
        // Set the y position of each vertex
        SET_VTX_Y(vertices[i], GET_VTX_Y(vertices[i]) + pauseCtx->offsetY + (face * FLOOR_SIDE_ICON_HEIGHT));
        // Set the color of each vertex
        SET_VTX_A(vertices[i], pauseCtx->alpha);
        // Shift second icon to the left
        if ((type == TYPE_LINK_AND_SKULL) && (i >= 4)) {
            SET_VTX_X(vertices[i], GET_VTX_X(vertices[i]) - FLOOR_SIDE_ICON_WIDTH);
        }
    }

    // Draw first icon
    gDPPipeSync(dListHead++);
    gSPVertex(dListHead++, vertices, vertexCount, 0);
    gDPLoadTextureBlock(
        dListHead++,
        (((type == TYPE_SKULL) || (type == TYPE_LINK_AND_SKULL)) ? gDungeonMapSkullTex : gDungeonMapLinkHeadTex),
        G_IM_FMT_RGBA, G_IM_SIZ_16b, FLOOR_SIDE_ICON_TEX_WIDTH, FLOOR_SIDE_ICON_TEX_HEIGHT, 0,
        G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);

    // Draw second icon
    if (type == TYPE_LINK_AND_SKULL) {
        gDPPipeSync(dListHead++);
        gDPLoadTextureBlock(dListHead++, gDungeonMapLinkHeadTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, FLOOR_SIDE_ICON_TEX_WIDTH,
                            FLOOR_SIDE_ICON_TEX_HEIGHT, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSP2Triangles(dListHead++, 4, 5, 6, 0, 4, 6, 7, 0);
    }

    return dListHead;
}

#define FLOOR_BUTTON_CURSOR_HEIGHT 14
#define ITEM_ICON_CURSOR_HEIGHT 16
Gfx* KaleidoScope_DrawDungeonMapCursor(GlobalContext* globalCtx, Gfx* dListHead) {
    static Vtx cursorItemBaseVtx[] = {
        VTX(94, -52, 0, -16, -16, 255, 255, 255, 255),  VTX(94, -66, 0, -16, 496, 255, 255, 255, 255),
        VTX(109, -66, 0, 496, 496, 255, 255, 255, 255), VTX(109, -52, 0, 496, -16, 255, 255, 255, 255),
        VTX(94, -72, 0, -16, -16, 255, 255, 255, 255),  VTX(109, -72, 0, -16, 496, 255, 255, 255, 255),
        VTX(109, -57, 0, 496, 496, 255, 255, 255, 255), VTX(94, -57, 0, 496, -16, 255, 255, 255, 255),
        VTX(114, -72, 0, -16, -16, 255, 255, 255, 255), VTX(114, -57, 0, -16, 496, 255, 255, 255, 255),
        VTX(100, -57, 0, 496, 496, 255, 255, 255, 255), VTX(100, -72, 0, 496, -16, 255, 255, 255, 255),
        VTX(114, -52, 0, -16, -16, 255, 255, 255, 255), VTX(100, -52, 0, -16, 496, 255, 255, 255, 255),
        VTX(100, -66, 0, 496, 496, 255, 255, 255, 255), VTX(114, -66, 0, 496, -16, 255, 255, 255, 255),
    };
    static Vtx cursorFloorButtonBaseVtx[] = {
        VTX(90, -37, 0, -16, -16, 255, 255, 255, 255),  VTX(105, -37, 0, -16, 496, 255, 255, 255, 255),
        VTX(105, -23, 0, 496, 496, 255, 255, 255, 255), VTX(90, -23, 0, 496, -16, 255, 255, 255, 255),
        VTX(90, -21, 0, -16, -16, 255, 255, 255, 255),  VTX(90, -35, 0, -16, 496, 255, 255, 255, 255),
        VTX(105, -35, 0, 496, 496, 255, 255, 255, 255), VTX(105, -21, 0, 496, -16, 255, 255, 255, 255),
        VTX(118, -21, 0, -16, -16, 255, 255, 255, 255), VTX(103, -21, 0, -16, 496, 255, 255, 255, 255),
        VTX(103, -35, 0, 496, 496, 255, 255, 255, 255), VTX(118, -35, 0, 496, -16, 255, 255, 255, 255),
        VTX(118, -37, 0, -16, -16, 255, 255, 255, 255), VTX(118, -23, 0, -16, 496, 255, 255, 255, 255),
        VTX(103, -23, 0, 496, 496, 255, 255, 255, 255), VTX(103, -37, 0, 496, -16, 255, 255, 255, 255),
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    Vtx* vertices;
    s32 vertexCount;
    s32 i;

    if (gDungeonMapCursor <= MAP_FLOOR_BTN_7) {
        // Floor button
        vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(cursorFloorButtonBaseVtx));
        bcopy(cursorFloorButtonBaseVtx, vertices, sizeof(cursorFloorButtonBaseVtx));
        vertexCount = ARRAY_COUNT(cursorFloorButtonBaseVtx);
    } else {
        // Item icon
        vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(cursorItemBaseVtx));
        bcopy(cursorItemBaseVtx, vertices, sizeof(cursorItemBaseVtx));
        vertexCount = ARRAY_COUNT(cursorItemBaseVtx);
    }

    // Set vertex data
    for (i = 0; i < vertexCount; i++) {
        if (gDungeonMapCursor <= MAP_FLOOR_BTN_7) {
            // Floor button
            // Set the y position of each vertex
            SET_VTX_Y(vertices[i], GET_VTX_Y(vertices[i]) + pauseCtx->offsetY +
                                       ((gDungeonMapCursor - MAP_FLOOR_BTN_1) * FLOOR_BUTTON_CURSOR_HEIGHT));
        } else {
            // Item icon
            // Set the y position of each vertex
            SET_VTX_Y(vertices[i], GET_VTX_Y(vertices[i]) + pauseCtx->offsetY +
                                       ((gDungeonMapCursor - MAP_ITEM_COMPASS) * ITEM_ICON_CURSOR_HEIGHT));
        }

        // Set the color of each vertex
        SET_VTX_A(vertices[i], pauseCtx->alpha);
    }

    // Draw cursor
    gDPPipeSync(dListHead++);
    gDPSetCombineLERP(dListHead++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(dListHead++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(dListHead++, 0, 0, 0, 255);
    gSPVertex(dListHead++, vertices, vertexCount, 0);
    gDPLoadTextureBlock_4b(dListHead++, gPauseMenuCursorTopLeftTex, G_IM_FMT_IA, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    if (gDungeonMapCursor <= MAP_FLOOR_BTN_7) {
        // Floor button
        gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);
        gSP2Triangles(dListHead++, 4, 5, 6, 0, 4, 6, 7, 0);
        gSP2Triangles(dListHead++, 8, 9, 10, 0, 8, 10, 11, 0);
        gSP2Triangles(dListHead++, 12, 13, 14, 0, 12, 14, 15, 0);
    } else {
        // Item icon
        gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);
        gSP2Triangles(dListHead++, 4, 5, 6, 0, 4, 6, 7, 0);
        gSP2Triangles(dListHead++, 8, 9, 10, 0, 8, 10, 11, 0);
        gSP2Triangles(dListHead++, 12, 13, 14, 0, 12, 14, 15, 0);
    }

    if ((!CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.mapIndex) && (gDungeonMapCursor == MAP_ITEM_COMPASS)) ||
        (!CHECK_DUNGEON_ITEM(DUNGEON_MAP, gSaveContext.mapIndex) && (gDungeonMapCursor == MAP_ITEM_MAP))) {
        pauseCtx->namedItem = PAUSE_ITEM_NONE;
    } else {
        pauseCtx->namedItem = PAUSE_ITEM_MAP_SCREEN;
    }

    return dListHead;
}

#define MAP_SCALE_FACTOR 1.3125f

Gfx* KaleidoScope_DrawDungeonMapCompassIcons(GlobalContext* globalCtx, Gfx* dListHead, MapState* this, MapInfo* info) {
    static Vtx compassIconBaseVtx[] = {
        VTX(-72, 42, 0, -16, 240, 255, 255, 255, 255),
        VTX(-64, 42, 0, 240, 240, 255, 255, 255, 255),
        VTX(-64, 50, 0, 240, -16, 255, 255, 255, 255),
        VTX(-72, 50, 0, -16, -16, 255, 255, 255, 255),
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    MinimapDungeonFloorInfo* floorInfo = &info->dungeonInfo->floorInfo[this->dungeonFloor];
    Vtx* vertices;
    Vtx* bossIconVertices;
    s32 i;
    s32 j;
    s32 vtxIndex;

    gDPSetCombineLERP(dListHead++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetEnvColor(dListHead++, 0, 0, 0, 255);

    // Chests
    if (floorInfo->chestCount > 0) {
        // Allocate space for vertices (for some reason gotta add 1? must be some oversight on my part...)
        vertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Vtx) * 4 * (floorInfo->chestCount + 1));
        // Set vertex positions
        for (vtxIndex = i = 0; i < floorInfo->chestCount; vtxIndex += 4, i++) {
            // Copy base values
            bcopy(compassIconBaseVtx, &vertices[vtxIndex], sizeof(compassIconBaseVtx));
            // continue;
            for (j = 0; j < 4; j++) {
                // Set Y value
                SET_VTX_Y(vertices[vtxIndex + j], GET_VTX_Y(vertices[vtxIndex + j]) -
                                                      (MAP_SCALE_FACTOR * floorInfo->chestInfo[i].chestY) +
                                                      pauseCtx->offsetY);
                // Set X value
                SET_VTX_X(vertices[vtxIndex + j],
                          GET_VTX_X(vertices[vtxIndex + j]) + (MAP_SCALE_FACTOR * floorInfo->chestInfo[i].chestX));
                // Set the color of each vertex
                SET_VTX_A(vertices[vtxIndex + j], pauseCtx->alpha);
            }
        }
        // Draw all of the chest icons
        for (vtxIndex = i = 0; i < floorInfo->chestCount; vtxIndex += 4, i++) {
            gDPPipeSync(dListHead++);

            if (!(Flags_GetTreasure(globalCtx, floorInfo->chestInfo[i].chestFlag))) {
                // Unopened chests
                gDPSetPrimColor(dListHead++, 0, 0, 255, 255, 255, pauseCtx->alpha);
                gDPLoadTextureBlock(dListHead++, gHUDTreasureMarkerTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);
            } else {
                // Opened chests
                gDPSetPrimColor(dListHead++, 0, 0, 0, 0, 0, pauseCtx->alpha);
                gDPLoadTextureBlock(dListHead++, gHUDTreasureMarkerOpenedTex, G_IM_FMT_IA, G_IM_SIZ_8b, 8, 8, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);
            }

            // Draw triangles
            gSPVertex(dListHead++, &vertices[vtxIndex], 4, 0);
            gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);
        }
    }

    // Boss Icon
    if (this->dungeonFloor == FLOOR_TO_INDEX(info->dungeonInfo->bossFloor, info)) {
        // Allocate space for vertices
        bossIconVertices = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Vtx) * 4);
        // Copy the base position
        bcopy(compassIconBaseVtx, bossIconVertices, sizeof(compassIconBaseVtx));
        // Set position of boss icon
        for (i = 0; i < 4; i++) {
            // Set Y value
            SET_VTX_Y(bossIconVertices[i], GET_VTX_Y(bossIconVertices[i]) -
                                               (MAP_SCALE_FACTOR * info->dungeonInfo->bossY) + pauseCtx->offsetY);
            // Set X value
            SET_VTX_X(bossIconVertices[i],
                      GET_VTX_X(bossIconVertices[i]) + (MAP_SCALE_FACTOR * info->dungeonInfo->bossX));
            // Set the color of each vertex
            SET_VTX_A(bossIconVertices[i], pauseCtx->alpha);
        }
        // Draw boss icon
        gDPPipeSync(dListHead++);
        gDPSetPrimColor(dListHead++, 0, 0, 255, 255, 255, pauseCtx->alpha);
        gDPSetEnvColor(dListHead++, 0, 0, 0, 255);

        // Load texture
        gDPLoadTextureBlock(dListHead++, gHUDBossMarkerTex, G_IM_FMT_IA, G_IM_SIZ_8b, 8, 8, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);

        // Draw triangles
        gSPVertex(dListHead++, bossIconVertices, 4, 0);
        gSP2Triangles(dListHead++, 0, 1, 2, 0, 0, 2, 3, 0);
    }

    return dListHead;
}

void KaleidoScope_HandleDungeonMapCursor(GlobalContext* globalCtx, s32 highestFloor) {
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    s32 cursorMoved = false;

    if ((pauseCtx->state == 6) && (pauseCtx->unk_1E4 == 0) && (pauseCtx->pageIndex == PAUSE_MAP)) {
        if (((pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_LEFT) && (pauseCtx->stickRelX > 30)) ||
            ((pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_RIGHT) && (pauseCtx->stickRelX < -30))) {
            pauseCtx->nameDisplayTimer = 0;
            pauseCtx->cursorSpecialPos = 0;
            pauseCtx->cursorPoint[PAUSE_WORLD_MAP] = 0;
            pauseCtx->cursorSpecialPos = 0;
            KaleidoScope_SetCursorVtx(pauseCtx, pauseCtx->cursorSlot[PAUSE_MAP] * 4, pauseCtx->mapPageVtx);
            cursorMoved = true;
        } else if (pauseCtx->cursorSpecialPos == 0) {
            // Move to special position
            if (pauseCtx->stickRelX < -30) {
                // Move to left side
                KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_LEFT);
            } else if (pauseCtx->stickRelX > 30) {
                // Move to right side
                KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_RIGHT);
            }

            if (pauseCtx->cursorSpecialPos == 0) {
                // Move up and down
                if (gDungeonMapCursor == MAP_ITEM_COMPASS) {
                    if (pauseCtx->stickRelY > 30) {
                        gDungeonMapCursor = MAP_ITEM_MAP;
                        cursorMoved = true;
                    }
                } else if (gDungeonMapCursor == MAP_ITEM_MAP) {
                    if (pauseCtx->stickRelY > 30) {
                        gDungeonMapCursor = MAP_FLOOR_BTN_1;
                        cursorMoved = true;
                    } else if (pauseCtx->stickRelY < -30) {
                        gDungeonMapCursor = MAP_ITEM_COMPASS;
                        cursorMoved = true;
                    }
                } else {
                    if (pauseCtx->stickRelY > 30) {
                        if ((gDungeonMapCursor - MAP_FLOOR_BTN_1) < highestFloor) {
                            gDungeonMapCursor++;
                            cursorMoved = true;
                        }
                    } else if (pauseCtx->stickRelY < -30) {
                        if (gDungeonMapCursor != MAP_FLOOR_BTN_1) {
                            gDungeonMapCursor--;
                            cursorMoved = true;
                        } else {
                            gDungeonMapCursor = MAP_ITEM_MAP;
                            cursorMoved = true;
                        }
                    }
                }
            }
        }
    }

    if (cursorMoved) {
        Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    }
}

void KaleidoScope_DrawDungeonMap(GlobalContext* globalCtx, GraphicsContext* gfxCtx) {
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    MapInfo* info = &gMapInfoTable[Map_GetMapId(globalCtx)];
    s32 highestFloorIndex = FLOOR_TO_INDEX(info->dungeonInfo->floorHighest, info);
    s32 lowestFloorIndex = FLOOR_TO_INDEX(info->dungeonInfo->floorLowest, info);
    s32 bossFloorIndex = FLOOR_TO_INDEX(info->dungeonInfo->bossFloor, info);
    s32 floorOverride;
    s32 i;

    KaleidoScope_HandleDungeonMapCursor(globalCtx, highestFloorIndex);

    if (gDungeonMapCursor >= MAP_ITEM_COMPASS) {
        floorOverride = lowestFloorIndex;
    } else {
        floorOverride = gDungeonMapCursor - MAP_FLOOR_BTN_1;
    }

    // Load textures for the map (only dma's when needed)
    Map_ConfigurePause(globalCtx, &gPauseDungeonMapState, floorOverride);

    OPEN_DISPS(gfxCtx);

    // Draw map
    Gfx_ClearPauseAttributes(gfxCtx, pauseCtx);
    POLY_OPA_DISP = KaleidoScope_DrawDungeonMapTexture(globalCtx, POLY_OPA_DISP);

// Draw compass icons on the map
#ifdef DONT_REQUIRE_COMPASS
    // Clear attributes before drawing
    Gfx_ClearPauseAttributes(gfxCtx, pauseCtx);
    POLY_OPA_DISP = KaleidoScope_DrawDungeonMapCompassIcons(globalCtx, POLY_OPA_DISP, &gPauseDungeonMapState, info);
#else
    if (CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.mapIndex)) {
        // Clear attributes before drawing
        Gfx_ClearPauseAttributes(gfxCtx, pauseCtx);
        POLY_OPA_DISP = KaleidoScope_DrawDungeonMapCompassIcons(globalCtx, POLY_OPA_DISP, &gPauseDungeonMapState, info);
    }
#endif

    // Clear attributes before drawing
    Gfx_ClearPauseAttributes(gfxCtx, pauseCtx);

    // Draw item icons
    POLY_OPA_DISP = KaleidoScope_DrawDungeonMapItemIcon(globalCtx, POLY_OPA_DISP);

    // Draw floor side icons (link and boss skull)
    if (bossFloorIndex == gMinimapState.dungeonFloor) {
        POLY_OPA_DISP = KaleidoScope_DrawDungeonMapSideIcons(globalCtx, POLY_OPA_DISP, gMinimapState.dungeonFloor,
                                                             TYPE_LINK_AND_SKULL);
    } else {
        POLY_OPA_DISP =
            KaleidoScope_DrawDungeonMapSideIcons(globalCtx, POLY_OPA_DISP, gMinimapState.dungeonFloor, TYPE_LINK);
        if (info->dungeonInfo->bossFloor >= 0) {
            POLY_OPA_DISP = KaleidoScope_DrawDungeonMapSideIcons(globalCtx, POLY_OPA_DISP, bossFloorIndex, TYPE_SKULL);
        }
    }

    // Draw floor buttons
    for (i = 0; i < highestFloorIndex + 1; i++) {
        POLY_OPA_DISP = KaleidoScope_DrawFloorButton(globalCtx, POLY_OPA_DISP, i, info->dungeonInfo->floorLowest + i,
                                                     i == gPauseDungeonMapState.dungeonFloor);
    }

    CLOSE_DISPS(gfxCtx);
}

void KaleidoScope_DrawWorldMap(GlobalContext* globalCtx, GraphicsContext* gfxCtx) {
    static s32 cursorIsInMap = false;
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    s32 i, j, t;
    s32 setCursorToCenter = false;

    OPEN_DISPS(gfxCtx);

    /************************* Control Cursor *************************/
    if ((pauseCtx->state == 6) && (pauseCtx->unk_1E4 == 0) && (pauseCtx->pageIndex == PAUSE_MAP)) {
        if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_LEFT) {
            if (pauseCtx->stickRelX > 30) {
                // Move to center
                setCursorToCenter = true;
            }
        } else if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_RIGHT) {
            if (pauseCtx->stickRelX < -30) {
                // Move to center
                setCursorToCenter = true;
            }
        } else {
            // In center
            if (pauseCtx->stickRelX < -30) {
                // Move to left side
                KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_LEFT);
            } else if (pauseCtx->stickRelX > 30) {
                // Move to right side
                KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_RIGHT);
            }
        }

        if (setCursorToCenter) {
            // Play sound when moving to the "center"
            Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

            // Set cursor to be in the "center" of the map
            pauseCtx->cursorSpecialPos = 0;
            pauseCtx->cursorPoint[PAUSE_WORLD_MAP] = 0;
            pauseCtx->cursorSpecialPos = 0;
            KaleidoScope_SetCursorVtx(pauseCtx, pauseCtx->cursorSlot[PAUSE_MAP] * 4, pauseCtx->mapPageVtx);
        }
    }

    /************************* Draw Map Texture *************************/
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_POINT);
    gDPLoadTLUT_pal256(POLY_OPA_DISP++, gWorldMapImageTLUT);
    gDPSetTextureLUT(POLY_OPA_DISP++, G_TT_RGBA16);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
    gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[188], 32, 0);

    for (j = t = i = 0; i < 8; i++, t++, j += 4) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + t * 200 * 9, G_IM_FMT_CI, G_IM_SIZ_8b, 200, 9, 0,
                            G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);

        gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);
    }

    gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[220], 28, 0);

    for (j = i = 0; i < 6; i++, t++, j += 4) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + t * 200 * 9, G_IM_FMT_CI, G_IM_SIZ_8b, 200, 9, 0,
                            G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);

        gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);
    }

    gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + t * 200 * 9, G_IM_FMT_CI, G_IM_SIZ_8b, 200, 2, 0,
                        G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOLOD);

    gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);

    func_800949A8(gfxCtx);
    gDPPipeSync(POLY_OPA_DISP++);

    CLOSE_DISPS(gfxCtx);
}
