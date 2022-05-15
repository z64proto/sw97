#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "Spot04_OLD_ROOM0.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "Spot04_OLD_SCENE.h"


static SCmdBase Spot04_OLD_SCENESet0000[10];

static SCmdBase Spot04_OLD_SCENESet0000[10] = {
    SCENE_CMD_SOUND_SETTINGS(1, 4, 0),
    SCENE_CMD_ROOM_LIST(1, Spot04_OLD_SCENERoomList0x0000A0),
    SCENE_CMD_COL_HEADER(&spot04_BGDataInfo_collisionHeader),
    SCENE_CMD_ENTRANCE_LIST(Spot04_OLD_SCENEEntranceList0x0000A8),
    SCENE_CMD_SPECIAL_FILES(0x00, 0x0002),
    SCENE_CMD_SPAWN_LIST(5, Spot04_OLD_SCENEStartPositionList0x000050),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(Spot04_OLD_SCENEExitList_0000B4),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, Spot04_OLD_SCENELightSettings0x0000C0),
    SCENE_CMD_END(),
}; 

ActorEntry Spot04_OLD_SCENEStartPositionList0x000050[] = {
    { 
        ACTOR_PLAYER,
        {  -2227,     10,  -3599 },
        {      0,   3277,      0 },
        0x0FFF
    },
    { 
        ACTOR_PLAYER,
        {  -2418,    209,   4277 },
        {      0,  21845,      0 },
        0x0FFF
    },
    { 
        ACTOR_PLAYER,
        {   1005,    361,   -168 },
        {      0, -16384,      0 },
        0x0FFF
    },
    { 
        ACTOR_PLAYER,
        {  -2876,    241,   -496 },
        {      0,  11286,      0 },
        0x0FFF
    },
    { 
        ACTOR_PLAYER,
        {   -895,    161,    323 },
        {      0,  32767,      0 },
        0x0FFF
    },
}; 

RomFile Spot04_OLD_SCENERoomList0x0000A0[] = {
    { (u32)_Spot04_OLD_ROOM0SegmentRomStart, (u32)_Spot04_OLD_ROOM0SegmentRomEnd },
}; 

EntranceEntry Spot04_OLD_SCENEEntranceList0x0000A8[6] = {
    { 0x00, 0x00 }, //0x0000A8
    { 0x01, 0x00 }, //0x0000AA
    { 0x02, 0x00 }, //0x0000AC
    { 0x03, 0x00 }, //0x0000AE
    { 0x04, 0x00 }, //0x0000B0
    { 0x00, 0x00 }, //0x0000B2
}; 

u16 Spot04_OLD_SCENEExitList_0000B4[6] = {
    0x0185,
    0x0000,
    0x00FC,
    0x00BB,
    0x00C1,
    0x0000,
}; 

LightSettings Spot04_OLD_SCENELightSettings0x0000C0[4] = {
    { 0x3C, 0x3C, 0x3C, 0x42, 0x55, 0x42, 0xFF, 0xFF, 0xC8, 0xBE, 0xAB, 0xBE, 0x46, 0x46, 0x5A, 0xE6, 0xE6, 0xB4,
    0x03E1, 0x12C0 }, // 0x0000C0
    { 0x3C, 0x3C, 0x3C, 0x42, 0x55, 0x42, 0xFF, 0xFF, 0xC8, 0xBE, 0xAB, 0xBE, 0x46, 0x46, 0x5A, 0x48, 0x48, 0x30,
    0x03B6, 0x12C0 }, // 0x0000D6
    { 0x3C, 0x3C, 0x3C, 0x42, 0x55, 0x42, 0xFF, 0xFF, 0xC8, 0xBE, 0xAB, 0xBE, 0x46, 0x46, 0x5A, 0x97, 0x97, 0x72,
    0x03DC, 0x12C0 }, // 0x0000EC
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x03E0, 0x3200 }, // 0x000102
}; 

static u8 possiblePadding_000118[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 spot04_c_kihada04_txt[] = {
    #include "assets/scenes/Spot04_OLD/spot04_c_kihada04_txt.rgb5a1.inc.c"
};

u64 spot04_c_kihada03_txt[] = {
    #include "assets/scenes/Spot04_OLD/spot04_c_kihada03_txt.rgb5a1.inc.c"
};

u64 spot04_c_mokume03_txt[] = {
    #include "assets/scenes/Spot04_OLD/spot04_c_mokume03_txt.rgb5a1.inc.c"
};

u64 spot04_c_jimen01_txt[] = {
    #include "assets/scenes/Spot04_OLD/spot04_c_jimen01_txt.rgb5a1.inc.c"
};
