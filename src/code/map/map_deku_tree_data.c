#include "global.h"

/**
 * Room info
 */
static MapDungeonRoomInfo sDekuTreeB1Rooms[] = {
    {
        /* Room number      */ 12,
        /* Palette number   */ 4,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 13,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
};

static MapDungeonRoomInfo sDekuTreeF1Rooms[] = {
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
        /* Room number      */ 6,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 12,
        /* Palette number   */ 4,
        /* Use floor splits */ true,
    },
};

static MapDungeonRoomInfo sDekuTreeF2Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 2,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 7,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
};

static MapDungeonRoomInfo sDekuTreeF3Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 3,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 8,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
};

static MapDungeonRoomInfo sDekuTreeF4Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 4,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 9,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
};

static MapDungeonRoomInfo sDekuTreeF5Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 5,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 10,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 11,
        /* Palette number   */ 4,
        /* Use floor splits */ false,
    },
};

static MapDungeonRoomInfo sDekuTreeF6Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ true,
    },
};

/**
 * Floor info
 */
static MapDungeonChestInfo sDekuTreeF1Chests[] = {
    {
        /* Chest flag */ 4,
        /* Chest X    */ 39,
        /* Chest Y    */ 1,
    },
    {
        /* Chest flag */ 1,
        /* Chest X    */ 38,
        /* Chest Y    */ 40,
    },
    {
        /* Chest flag */ 3,
        /* Chest X    */ 59,
        /* Chest Y    */ 9,
    },
};

static MapDungeonChestInfo sDekuTreeF2Chests[] = {
    {
        /* Chest flag */ 5,
        /* Chest X    */ 17,
        /* Chest Y    */ 63,
    },
};

static MapDungeonChestInfo sDekuTreeF3Chests[] = {
    {
        /* Chest flag */ 2,
        /* Chest X    */ 34,
        /* Chest Y    */ 37,
    },
    {
        /* Chest flag */ 6,
        /* Chest X    */ 85,
        /* Chest Y    */ 40,
    },
};

static MapDungeonChestInfo sDekuTreeF6Chests[] = {
    {
        /* Chest flag */ 0,
        /* Chest X    */ 37,
        /* Chest Y    */ 42,
    },
};

static MinimapDungeonFloorInfo sDekuTreeFloorInfo[7] = {
    {
        /* Texture Data Segment Start */ _deku_tree_b1_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_b1_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeB1MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeB1MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeB1Rooms),
        /* Room info                  */ sDekuTreeB1Rooms,
        /* Number of chests           */ 0,
        /* Chest info                 */ NULL,
        /* Floor split min            */ -32767,
        /* Floor split max            */ 0,
    },
    {
        /* Texture Data Segment Start */ _deku_tree_f1_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_f1_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeF1MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeF1MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeF1Rooms),
        /* Room info                  */ sDekuTreeF1Rooms,
        /* Number of chests           */ ARRAY_COUNT(sDekuTreeF1Chests),
        /* Chest info                 */ sDekuTreeF1Chests,
        /* Floor split min            */ 0,
        /* Floor split max            */ 380,
    },
    {
        /* Texture Data Segment Start */ _deku_tree_f2_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_f2_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeF2MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeF2MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeF2Rooms),
        /* Room info                  */ sDekuTreeF2Rooms,
        /* Number of chests           */ ARRAY_COUNT(sDekuTreeF2Chests),
        /* Chest info                 */ sDekuTreeF2Chests,
        /* Floor split min            */ 380,
        /* Floor split max            */ 700,
    },
    {
        /* Texture Data Segment Start */ _deku_tree_f3_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_f3_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeF3MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeF3MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeF3Rooms),
        /* Room info                  */ sDekuTreeF3Rooms,
        /* Number of chests           */ ARRAY_COUNT(sDekuTreeF3Chests),
        /* Chest info                 */ sDekuTreeF3Chests,
        /* Floor split min            */ 700,
        /* Floor split max            */ 1000,
    },
    {
        /* Texture Data Segment Start */ _deku_tree_f4_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_f4_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeF4MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeF4MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeF4Rooms),
        /* Room info                  */ sDekuTreeF4Rooms,
        /* Number of chests           */ 0,
        /* Chest info                 */ NULL,
        /* Floor split min            */ 1000,
        /* Floor split max            */ 1300,
    },
    {
        /* Texture Data Segment Start */ _deku_tree_f5_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_f5_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeF5MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeF5MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeF5Rooms),
        /* Room info                  */ sDekuTreeF5Rooms,
        /* Number of chests           */ 0,
        /* Chest info                 */ NULL,
        /* Floor split min            */ 1300,
        /* Floor split max            */ 1670,
    },
    {
        /* Texture Data Segment Start */ _deku_tree_f6_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _deku_tree_f6_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gDekuTreeF6MinimapLeftTex,
        /* Texture Pointer 2          */ gDekuTreeF6MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sDekuTreeF6Rooms),
        /* Room info                  */ sDekuTreeF6Rooms,
        /* Number of chests           */ ARRAY_COUNT(sDekuTreeF6Chests),
        /* Chest info                 */ sDekuTreeF6Chests,
        /* Floor split min            */ 1670,
        /* Floor split max            */ 32767,
    },
};

/**
 * Dungeon map info
 */
MapDungeonInfo sDekuTreeMapInfo = {
    /* Number of floors */ ARRAY_COUNT(sDekuTreeFloorInfo),
    /* Lowest floor     */ MAP_FLOOR_B1,
    /* Highest floor    */ MAP_FLOOR_F6,
    /* Floor info       */ sDekuTreeFloorInfo,
    /* Boss floor       */ MAP_FLOOR_B1,
    /* Boss room        */ 13,
    /* Boss X           */ 43,
    /* Boss Y           */ 60,
};
