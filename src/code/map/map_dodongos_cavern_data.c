#include "global.h"

/**
 * Room info
 */
static MapDungeonRoomInfo sDodongosCavernB1Rooms[] = {
    {
        /* Room number      */ 9,
        /* Palette number   */ 8,
        /* Use floor splits */ true,
    },
};

static MapDungeonRoomInfo sDodongosCavernF1Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 1,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 2,
        /* Palette number   */ 7,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 3,
        /* Palette number   */ 4,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 4,
        /* Palette number   */ 6,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 5,
        /* Palette number   */ 5,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 8,
        /* Palette number   */ 3,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 9,
        /* Palette number   */ 8,
        /* Use floor splits */ true,
    },
};

static MapDungeonRoomInfo sDodongosCavernF2Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 2,
        /* Palette number   */ 7,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 6,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 7,
        /* Palette number   */ 4,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 8,
        /* Palette number   */ 3,
        /* Use floor splits */ true,
    },
};

/**
 * Floor info
 */

static MapDungeonChestInfo sDodongosCavernF1Chests[] = {
    {
        /* Chest flag */ 0,
        /* Chest X    */ 29,
        /* Chest Y    */ 44,
    },
    {
        /* Chest flag */ 1,
        /* Chest X    */ 73,
        /* Chest Y    */ 71,
    },
};

static MapDungeonChestInfo sDodongosCavernF2Chests[] = {
    {
        /* Chest flag */ 3,
        /* Chest X    */ 84,
        /* Chest Y    */ 54,
    },
    {
        /* Chest flag */ 2,
        /* Chest X    */ 2,
        /* Chest Y    */ 62,
    },
};

static MinimapDungeonFloorInfo sDodongosCavernFloorInfo[3] = {
    {
        /* Texture Data Segment Start */ _dodongos_cavern_b1_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _dodongos_cavern_b1_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDodongosCavernB1MinimapLeftTex,
        /* Texture Pointer 2          */ gDodongosCavernB1MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDodongosCavernB1Rooms),
        /* Room info                  */ sDodongosCavernB1Rooms,
        /* Number of chests           */ 0,
        /* Chest info                 */ NULL,
        /* Floor split min            */ -32767,
        /* Floor split max            */ -680,
    },
    {
        /* Texture Data Segment Start */ _dodongos_cavern_f1_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _dodongos_cavern_f1_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDodongosCavernF1MinimapLeftTex,
        /* Texture Pointer 2          */ gDodongosCavernF1MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDodongosCavernF1Rooms),
        /* Room info                  */ sDodongosCavernF1Rooms,
        /* Number of chests           */ ARRAY_COUNT(sDodongosCavernF1Chests),
        /* Chest info                 */ sDodongosCavernF1Chests,
        /* Floor split min            */ -680,
        /* Floor split max            */ 440,
    },
    {
        /* Texture Data Segment Start */ _dodongos_cavern_f2_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _dodongos_cavern_f2_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDodongosCavernF2MinimapLeftTex,
        /* Texture Pointer 2          */ gDodongosCavernF2MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDodongosCavernF2Rooms),
        /* Room info                  */ sDodongosCavernF2Rooms,
        /* Number of chests           */ ARRAY_COUNT(sDodongosCavernF2Chests),
        /* Chest info                 */ sDodongosCavernF2Chests,
        /* Floor split min            */ 440,
        /* Floor split max            */ 32767,
    },
};

/**
 * Dungeon map info
 */
MapDungeonInfo sDodongosCavernMapInfo = {
    /* Number of floors */ ARRAY_COUNT(sDodongosCavernFloorInfo),
    /* Lowest floor     */ MAP_FLOOR_B1,
    /* Highest floor    */ MAP_FLOOR_F2,
    /* Floor info       */ sDodongosCavernFloorInfo,
    /* Boss floor       */ MAP_FLOOR_F1,
    /* Boss room        */ 9,
    /* Boss X           */ 29,
    /* Boss Y           */ 25,
};
