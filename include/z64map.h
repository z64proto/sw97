#ifndef _Z64MAP_H_
#define _Z64MAP_H_

#include "textures/parameter_static/parameter_static.h"
#include "textures/minimaps/old_hf_minimap.h"
#include "textures/minimaps/hf_minimap.h"
#include "textures/minimaps/kf_minimap.h"
#include "textures/minimaps/dmt_minimap.h"
#include "textures/minimaps/poe_race_b1_minimap.h"
#include "textures/minimaps/poe_race_f1_minimap.h"
#include "textures/minimaps/poe_race_f2_minimap.h"
#include "textures/minimaps/deku_tree_b1_minimap.h"
#include "textures/minimaps/deku_tree_f1_minimap.h"
#include "textures/minimaps/deku_tree_f2_minimap.h"
#include "textures/minimaps/deku_tree_f3_minimap.h"
#include "textures/minimaps/deku_tree_f4_minimap.h"
#include "textures/minimaps/deku_tree_f5_minimap.h"
#include "textures/minimaps/deku_tree_f6_minimap.h"
#include "textures/minimaps/dodongos_cavern_b1_minimap.h"
#include "textures/minimaps/dodongos_cavern_f1_minimap.h"
#include "textures/minimaps/dodongos_cavern_f2_minimap.h"

// Pause
// TODO: fix these values
#define MAP_PAUSE_SCREEN_X 66
#define MAP_PAUSE_SCREEN_Y 53
#define MAP_PAUSE_SCALE 1.33f

// Overworld minimap macros
#define OVERWORLD_MINIMAP_WIDTH 64
#define OVERWORLD_MINIMAP_HEIGHT 57
#define OVERWORLD_MINIMAP_POS_X 238
#define OVERWORLD_MINIMAP_POS_Y 162
#define OVERWORLD_MINIMAP_R 170
#define OVERWORLD_MINIMAP_G 190
#define OVERWORLD_MINIMAP_B 255
#define OVERWORLD_MINIMAP_ALPHA 255

// Dungeon minimap macros
#define DUNGEON_MINIMAP_WIDTH 48
#define DUNGEON_MINIMAP_HEIGHT 85
#define DUNGEON_MINIMAP_POS_X 206
#define DUNGEON_MINIMAP_POS_Y 139
#define DUNGEON_MINIMAP_R 255
#define DUNGEON_MINIMAP_G 255
#define DUNGEON_MINIMAP_B 255
#define DUNGEON_SHADED_ROOM_R 82  // 62
#define DUNGEON_SHADED_ROOM_G 82  // 59
#define DUNGEON_SHADED_ROOM_B 255 // 253

#define INDEX_TO_FLOOR(index, info) (index + (info)->dungeonInfo->floorLowest)
#define FLOOR_TO_INDEX(floor, info) (floor - (info)->dungeonInfo->floorLowest)

typedef enum { MINIMAP_DUNGEON, MINIMAP_OVERWORLD } MinimapType;

// The format supports B8 - F8 floors
typedef enum {
    /* 0  */ MAP_FLOOR_B8,
    /* 1  */ MAP_FLOOR_B7,
    /* 2  */ MAP_FLOOR_B6,
    /* 3  */ MAP_FLOOR_B5,
    /* 4  */ MAP_FLOOR_B4,
    /* 5  */ MAP_FLOOR_B3,
    /* 6  */ MAP_FLOOR_B2,
    /* 7  */ MAP_FLOOR_B1,
    /* 8  */ MAP_FLOOR_F1,
    /* 9  */ MAP_FLOOR_F2,
    /* 10 */ MAP_FLOOR_F3,
    /* 11 */ MAP_FLOOR_F4,
    /* 12 */ MAP_FLOOR_F5,
    /* 13 */ MAP_FLOOR_F6,
    /* 14 */ MAP_FLOOR_F7,
    /* 15 */ MAP_FLOOR_F8
} MapFloors;

// Minimap "context," except its stored as a global variable since we don't have shiftability with Gameplay state yet
typedef struct {
    u8 mapType;           // Dungeon or overworld
    u16 mapWidth;         // Width for each image the map uses
    u16 mapHeight;        // Height for each image the map uses
    s8 mapInfoId;         // Index to the map info array
    s16 mapPosX;          // X Position of the top left corner on the screen
    s16 mapPosY;          // Y Position of the top left corner on the screen
    s16 scaleX;           // X Scale used for the compass arrow
    s16 scaleY;           // Y Scale used for the compass arrow
    s16 offsetX;          // X Offset used for the compass arrow
    s16 offsetY;          // Y Offset used for the compass arrow
    u32 texture[2];       // Minimap textures. A maxmimum of two can be used since dungeons need two textures
    u8 dungeonFloor;      // Current floor in a dungeon
    u8 minimapToggled;    // Controls if the minimap is on or off
    s16 dungeonEntranceX; // X Position of the dungeon entrance icon
    s16 dungeonEntranceY; // Y Position of the dungeon entrance icon
    u16 mapTargetAlpha;
} MapState;

// Info about a given room in a dungeon
typedef struct {
    s16 roomId;
    s16 palId;
    s16 isMultiFloor; // Room appears in multiple floors
} MapDungeonRoomInfo;

// Info relating to chest positions on the minimap
typedef struct {
    u8 chestFlag;
    s16 chestX;
    s16 chestY;
} MapDungeonChestInfo;

// Info about a given floor in a dungeon
typedef struct {
    void* segmentStart; // Start of the segment containing the minimap texture data
    void* segmentEnd;   // End of the segment containing the minimap texture data
    u64* texture[2];    // Texture within the minimap data segment, uses segment 0xB, two are allocated for dungeons
    u8 roomCount;       // Number of rooms in a given floor
    MapDungeonRoomInfo* roomInfo;   // Info about the individual rooms on a floor
    u8 chestCount;                      // Number of chests in a given floor
    MapDungeonChestInfo* chestInfo; // Info about the chests on a floor
    s16 minY;                           // Minimum y coordinate of the player to be on this floor
    s16 maxY;                           // Maximum y coordinate of the player to be on this floor
} MinimapDungeonFloorInfo;

// Extended struct of MapInfo with info specifically relating to dungeons
typedef struct {
    u8 floorCount;
    u8 floorLowest;
    u8 floorHighest;
    MinimapDungeonFloorInfo* floorInfo;
    s8 bossFloor;
    s8 bossRoom;
    s16 bossX;
    s16 bossY;
} MapDungeonInfo;

// Extended struct of MapInfo with info specifically relating to the overworld
typedef struct {
    void* segmentStart;   // Start of the segment containing the minimap texture data
    void* segmentEnd;     // End of the segment containing the minimap texture data
    u64* texture;         // Texture within the minimap data segment, uses segment 0xB
    s16 dungeonEntranceX; // X Position of the dungeon entrance icon
    s16 dungeonEntranceY; // Y Position of the dungeon entrance icon
} MapOverworldInfo;

typedef struct {
    u8 sceneNum; // Scene number which the minimap should be associated with
    u16 width;   // Width for each image the map uses
    u16 height;  // Height for each image the map uses
    s16 posX;    // X Position of the top left corner on the screen
    s16 posY;    // Y Position of the top left corner on the screen
    f32 scaleX;  // X Scale used for the compass arrow
    f32 scaleY;  // Y Scale used for the compass arrow
    f32 offsetX; // X Offset used for the compass arrow
    f32 offsetY; // Y Offset used for the compass arrow
    u8 mapType;  // Dungeon or overworld
    union {
        // Extended structs specific to dungeon and overworld maps
        MapDungeonInfo* dungeonInfo;
        MapOverworldInfo* overworldInfo;
    };
} MapInfo;

extern MapInfo gMapInfoTable[7];

// Minimaps
extern MapState gMinimapState;
extern s16 gDungeonMinimapPalette[16];
extern u64 gMinimapBuffer[0x1000 / sizeof(u64)];

// Pause menu
extern MapState gPauseDungeonMapState;
extern s16 gPauseDungeonMapPalette[16];
extern u64 gPauseDungeonMapBuffer[0x1000 / sizeof(u64)];

#endif
