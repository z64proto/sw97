#include "global.h"

/**
 * Room info
 */
static MapDungeonRoomInfo sPoeRaceB1Rooms[] = {
    {
        /* Room number      */ 1,
        /* Palette number   */ 10,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 4,
        /* Palette number   */ 11,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 7,
        /* Palette number   */ 4,
        /* Use floor splits */ true,
    },
    {
        /* Room number      */ 8,
        /* Palette number   */ 7,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 9,
        /* Palette number   */ 8,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 10,
        /* Palette number   */ 9,
        /* Use floor splits */ false,
    },
};

static MapDungeonRoomInfo sPoeRaceF1Rooms[] = {
    {
        /* Room number      */ 0,
        /* Palette number   */ 1,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 2,
        /* Palette number   */ 2,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 3,
        /* Palette number   */ 5,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 5,
        /* Palette number   */ 6,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 6,
        /* Palette number   */ 3,
        /* Use floor splits */ false,
    },
    {
        /* Room number      */ 7,
        /* Palette number   */ 4,
        /* Use floor splits */ true,
    },
};

/**
 * Floor info
 */
static MapDungeonChestInfo sPoeRaceF1Chests[] = {
    {
        /* Chest flag */ 0,
        /* Chest X    */ 37,
        /* Chest Y    */ 70,
    },
    {
        /* Chest flag */ 1,
        /* Chest X    */ 44,
        /* Chest Y    */ 70,
    },
};

static MinimapDungeonFloorInfo sPoeRaceFloorInfo[2] = {
    {
        /* Texture Data Segment Start */ _poe_race_b1_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _poe_race_b1_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gPoeRaceB1MinimapLeftTex,
        /* Texture Pointer 2          */ gPoeRaceB1MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sPoeRaceB1Rooms),
        /* Room info                  */ sPoeRaceB1Rooms,
        /* Number of chests           */ 0,
        /* Chest info                 */ NULL,
        /* Floor split min            */ -32767,
        /* Floor split max            */ -140,
    },
    {
        /* Texture Data Segment Start */ _poe_race_f1_minimapSegmentRomStart,
        /* Texture Data Segment End   */ _poe_race_f1_minimapSegmentRomEnd,
        /* Texture Pointer 1          */ gPoeRaceF1MinimapLeftTex,
        /* Texture Pointer 2          */ gPoeRaceF1MinimapRightTex,
        /* Number of rooms            */ ARRAY_COUNT(sPoeRaceF1Rooms),
        /* Room info                  */ sPoeRaceF1Rooms,
        /* Number of chests           */ ARRAY_COUNT(sPoeRaceF1Chests),
        /* Chest info                 */ sPoeRaceF1Chests,
        /* Floor split min            */ -140,
        /* Floor split max            */ 32767,
    },
};

/**
 * Dungeon map info
 */
MapDungeonInfo sPoeRaceMapInfo = {
    /* Number of floors */ ARRAY_COUNT(sPoeRaceFloorInfo),
    /* Lowest floor     */ MAP_FLOOR_B1,
    /* Highest floor    */ MAP_FLOOR_F1, // MAP_FLOOR_F2,
    /* Floor info       */ sPoeRaceFloorInfo,
    /* Boss floor       */ -1,
    /* Boss room        */ -1,
    /* Boss X           */ 0,
    /* Boss Y           */ 0,
};
