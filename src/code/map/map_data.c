#include "global.h"

#if 0
s16 gDungeonMinimapPalette[16] = {
    /* 0  */ GPACK_RGBA5551(0, 0, 0, 0), // Reserved for the background
    /* 1  */ GPACK_RGBA5551(255, 130, 0, 255),
    /* 2  */ GPACK_RGBA5551(234, 255, 0, 255),
    /* 3  */ GPACK_RGBA5551(0, 255, 10, 255),
    /* 4  */ GPACK_RGBA5551(0, 255, 255, 255),
    /* 5  */ GPACK_RGBA5551(0, 50, 255, 255),
    /* 6  */ GPACK_RGBA5551(136, 0, 255, 255),
    /* 7  */ GPACK_RGBA5551(255, 0, 190, 255),
    /* 8  */ GPACK_RGBA5551(100, 0, 0, 255),
    /* 9  */ GPACK_RGBA5551(200, 45, 0, 255),
    /* 10 */ GPACK_RGBA5551(90, 100, 0, 255),
    /* 11 */ GPACK_RGBA5551(0, 100, 0, 255),
    /* 12 */ GPACK_RGBA5551(0, 100, 100, 255),
    /* 13 */ GPACK_RGBA5551(0, 15, 100, 255),
    /* 14 */ GPACK_RGBA5551(45, 0, 100, 255),
    /* 15 */ GPACK_RGBA5551(255, 255, 255, 255), // Map outline and floor number
};
#else
s16 gDungeonMinimapPalette[16];
#endif

#if 0
s16 gPauseDungeonMapPalette[16] = {
    /* 0  */ GPACK_RGBA5551(0, 0, 0, 0), // Reserved for the background
    /* 1  */ GPACK_RGBA5551(255, 130, 0, 255),
    /* 2  */ GPACK_RGBA5551(234, 255, 0, 255),
    /* 3  */ GPACK_RGBA5551(0, 255, 10, 255),
    /* 4  */ GPACK_RGBA5551(0, 255, 255, 255),
    /* 5  */ GPACK_RGBA5551(0, 50, 255, 255),
    /* 6  */ GPACK_RGBA5551(136, 0, 255, 255),
    /* 7  */ GPACK_RGBA5551(255, 0, 190, 255),
    /* 8  */ GPACK_RGBA5551(100, 0, 0, 255),
    /* 9  */ GPACK_RGBA5551(200, 45, 0, 255),
    /* 10 */ GPACK_RGBA5551(90, 100, 0, 255),
    /* 11 */ GPACK_RGBA5551(0, 100, 0, 255),
    /* 12 */ GPACK_RGBA5551(0, 100, 100, 255),
    /* 13 */ GPACK_RGBA5551(0, 15, 100, 255),
    /* 14 */ GPACK_RGBA5551(45, 0, 100, 255),
    /* 15 */ GPACK_RGBA5551(255, 255, 255, 255), // Map outline and floor number
};
#else
s16 gPauseDungeonMapPalette[16];
#endif

MapState gMinimapState;
u64 gMinimapBuffer[0x1000 / sizeof(u64)];
MapState gPauseDungeonMapState;
u64 gPauseDungeonMapBuffer[0x1000 / sizeof(u64)];

/**
 * Dungeon Minimap Info
 */

#include "map_deku_tree_data.c"

#include "map_poe_race_data.c"

#include "map_dodongos_cavern_data.c"

/**
 * Overworld Minimap Info
 */
static MapOverworldInfo sOldHyruleFieldMapInfo = {
    /* Texture Data Segment Start */ _old_hf_minimapSegmentRomStart,
    /* Texture Data Segment End   */ _old_hf_minimapSegmentRomEnd,
    /* Texture Pointer            */ gOldHFMinimapTex,
    /* Dungeon Entrance X Pos     */ -1,
    /* Dungeon Entrance Y Pos     */ -1,
};

static MapOverworldInfo sHyruleFieldMapInfo = {
    /* Texture Data Segment Start */ _hf_minimapSegmentRomStart,
    /* Texture Data Segment End   */ _hf_minimapSegmentRomEnd,
    /* Texture Pointer            */ gHFMinimapTex,
    /* Dungeon Entrance X Pos     */ -1,
    /* Dungeon Entrance Y Pos     */ -1,
};

static MapOverworldInfo sKokiriForestMapInfo = {
    /* Texture Data Segment Start */ _kf_minimapSegmentRomStart,
    /* Texture Data Segment End   */ _kf_minimapSegmentRomEnd,
    /* Texture Pointer            */ gKFMinimapTex,
    /* Dungeon Entrance X Pos     */ 48,
    /* Dungeon Entrance Y Pos     */ 26,
};

static MapOverworldInfo sDeathMountainTrailMapInfo = {
    /* Texture Data Segment Start */ _dmt_minimapSegmentRomStart,
    /* Texture Data Segment End   */ _dmt_minimapSegmentRomEnd,
    /* Texture Pointer            */ gDMTMinimapTex,
    /* Dungeon Entrance X Pos     */ 19,
    /* Dungeon Entrance Y Pos     */ 32,
};

/**
 * Minimap Info Table
 */
MapInfo gMapInfoTable[7] = {
    {
        /* Scene ID           */ SCENE_OLD_HYRULE_FIELD,
        /* Map texture width  */ OVERWORLD_MINIMAP_WIDTH,
        /* Map texture height */ OVERWORLD_MINIMAP_HEIGHT,
        /* Map X position     */ OVERWORLD_MINIMAP_POS_X,
        /* Map Y position     */ OVERWORLD_MINIMAP_POS_Y,
        /* Compass Scale X    */ 30,
        /* Compass Scale Y    */ 30,
        /* Compass Offset X   */ 1120,
        /* Compass Offset Y   */ -740,
        /* Map type           */ MINIMAP_OVERWORLD,
        /* Extended map info  */ &sOldHyruleFieldMapInfo,
    },
    {
        /* Scene ID           */ SCENE_HYRULE_FIELD,
        /* Map texture width  */ OVERWORLD_MINIMAP_WIDTH,
        /* Map texture height */ OVERWORLD_MINIMAP_HEIGHT,
        /* Map X position     */ OVERWORLD_MINIMAP_POS_X,
        /* Map Y position     */ OVERWORLD_MINIMAP_POS_Y,
        /* Compass Scale X    */ 30,
        /* Compass Scale Y    */ 30,
        /* Compass Offset X   */ 1140,
        /* Compass Offset Y   */ -480,
        /* Map type           */ MINIMAP_OVERWORLD,
        /* Extended map info  */ &sHyruleFieldMapInfo,
    },
    {
        /* Scene ID           */ SCENE_KOKIRI_FOREST,
        /* Map texture width  */ OVERWORLD_MINIMAP_WIDTH,
        /* Map texture height */ OVERWORLD_MINIMAP_HEIGHT,
        /* Map X position     */ OVERWORLD_MINIMAP_POS_X,
        /* Map Y position     */ OVERWORLD_MINIMAP_POS_Y,
        /* Compass Scale X    */ 10,
        /* Compass Scale Y    */ 10,
        /* Compass Offset X   */ 955,
        /* Compass Offset Y   */ -765,
        /* Map type           */ MINIMAP_OVERWORLD,
        /* Extended map info  */ &sKokiriForestMapInfo,
    },
    {
        /* Scene ID           */ SCENE_DEATH_MOUNTAIN_TRAIL,
        /* Map texture width  */ OVERWORLD_MINIMAP_WIDTH,
        /* Map texture height */ OVERWORLD_MINIMAP_HEIGHT,
        /* Map X position     */ OVERWORLD_MINIMAP_POS_X,
        /* Map Y position     */ OVERWORLD_MINIMAP_POS_Y,
        /* Compass Scale X    */ 15,
        /* Compass Scale Y    */ 15,
        /* Compass Offset X   */ 1110,
        /* Compass Offset Y   */ -805,
        /* Map type           */ MINIMAP_OVERWORLD,
        /* Extended map info  */ &sDeathMountainTrailMapInfo,
    },
    {
        /* Scene ID           */ SCENE_DEKU_TREE,
        /* Map texture width  */ DUNGEON_MINIMAP_WIDTH,
        /* Map texture height */ DUNGEON_MINIMAP_HEIGHT,
        /* Map X position     */ DUNGEON_MINIMAP_POS_X,
        /* Map Y position     */ DUNGEON_MINIMAP_POS_Y,
        /* Compass Scale X    */ 4,
        /* Compass Scale Y    */ 4,
        /* Compass Offset X   */ 875,
        /* Compass Offset Y   */ -630,
        /* Map type           */ MINIMAP_DUNGEON,
        /* Extended map info  */ &sDekuTreeMapInfo,
    },
    {
        /* Scene ID           */ SCENE_SPECIAL_COURSE,
        /* Map texture width  */ DUNGEON_MINIMAP_WIDTH,
        /* Map texture height */ DUNGEON_MINIMAP_HEIGHT,
        /* Map X position     */ DUNGEON_MINIMAP_POS_X,
        /* Map Y position     */ DUNGEON_MINIMAP_POS_Y,
        /* Compass Scale X    */ 8,
        /* Compass Scale Y    */ 8,
        /* Compass Offset X   */ 910,
        /* Compass Offset Y   */ -960,
        /* Map type           */ MINIMAP_DUNGEON,
        /* Extended map info  */ &sPoeRaceMapInfo,
    },
    {
        /* Scene ID           */ SCENE_DODONGOS_CAVERN,
        /* Map texture width  */ DUNGEON_MINIMAP_WIDTH,
        /* Map texture height */ DUNGEON_MINIMAP_HEIGHT,
        /* Map X position     */ DUNGEON_MINIMAP_POS_X,
        /* Map Y position     */ DUNGEON_MINIMAP_POS_Y,
        /* Compass Scale X    */ 8,
        /* Compass Scale Y    */ 8,
        /* Compass Offset X   */ 790,
        /* Compass Offset Y   */ -960,
        /* Map type           */ MINIMAP_DUNGEON,
        /* Extended map info  */ &sDodongosCavernMapInfo,
    },
};
