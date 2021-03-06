#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unk_0x33_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unk_0x33_scene.h"


static SCmdSoundSettings unk_0x33_sceneSet0000Cmd00;
static SCmdRoomList unk_0x33_sceneSet0000Cmd01;
static SCmdColHeader unk_0x33_sceneSet0000Cmd02;
static SCmdEntranceList unk_0x33_sceneSet0000Cmd03;
static SCmdSpecialFiles unk_0x33_sceneSet0000Cmd04;
static SCmdSpawnList unk_0x33_sceneSet0000Cmd05;
static SCmdSkyboxSettings unk_0x33_sceneSet0000Cmd06;
static SCmdExitList unk_0x33_sceneSet0000Cmd07;
static SCmdLightSettingList unk_0x33_sceneSet0000Cmd08;
static SCmdEndMarker unk_0x33_sceneSet0000Cmd09;

static SCmdSoundSettings unk_0x33_sceneSet0000Cmd00 = {  0x15, 0x06, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00 }; // 0x0000

static SCmdRoomList unk_0x33_sceneSet0000Cmd01 = {  0x04, 0x01, (u32)&unk_0x33_sceneRoomList0x000070 }; // 0x0008

static SCmdColHeader unk_0x33_sceneSet0000Cmd02 = {  0x03, 0x00, (u32)&unk_0x33_sceneCollisionHeader0x000324 }; // 0x0010

static SCmdEntranceList unk_0x33_sceneSet0000Cmd03 = {  0x06, 0x00, (u32)&unk_0x33_sceneEntranceList0x000078 }; // 0x0018

static SCmdSpecialFiles unk_0x33_sceneSet0000Cmd04 = {  0x07, 0x00, 0x0002 }; // 0x0020

static SCmdSpawnList unk_0x33_sceneSet0000Cmd05 = {  0x00, 0x02, (u32)&unk_0x33_sceneStartPositionList0x000050 }; // 0x0028

static SCmdSkyboxSettings unk_0x33_sceneSet0000Cmd06 = {  0x11, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01 }; // 0x0030

static SCmdExitList unk_0x33_sceneSet0000Cmd07 = {  0x13, 0x00, (u32)&unk_0x33_sceneExitList0x00007C }; // 0x0038

static SCmdLightSettingList unk_0x33_sceneSet0000Cmd08 = {  0x0F, 4, (u32)&unk_0x33_sceneLightSettings0x000080 }; // 0x0040

static SCmdEndMarker unk_0x33_sceneSet0000Cmd09 = {  0x14, 0x00, 0x00 }; // 0x0048

ActorEntry unk_0x33_sceneStartPositionList0x000050[] = {
	{ ACTOR_PLAYER, 11, 0, 2155, 0, 0, 0, 0x0F00 },
	{ ACTOR_PLAYER, -3, 0, 2900, 0, 32767, 0, 0x0F00 },

}; 

RomFile unk_0x33_sceneRoomList0x000070[] = {
	{ (u32)_unk_0x33_room_00SegmentRomStart, (u32)_unk_0x33_room_00SegmentRomEnd },

}; 

EntranceEntry unk_0x33_sceneEntranceList0x000078[2] = {
	{ 0x00, 0x00 }, //0x000078 
	{ 0x01, 0x00 }, //0x00007A 

}; 

u16 unk_0x33_sceneExitList0x00007C[2] = {
	ENTRANCE(SCENE_PR_MARKET_1, 0, 3, 0, 1), // 0x0048,
	0x0000,

}; 

LightSettings unk_0x33_sceneLightSettings0x000080[4] = {
	{ 0x46, 0x2D, 0x39, 0x49, 0x49, 0x49, 0xB4, 0x9A, 0x8A, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x1E, 0x0A, 0x0A, 0x03E0, 0x0BB8 }, // 0x000080 
	{ 0x50, 0x50, 0x50, 0xC3, 0x42, 0x59, 0xFF, 0xFF, 0xFF, 0x3D, 0xBE, 0xA7, 0x3C, 0x3C, 0x3C, 0x64, 0x64, 0x78, 0x03E4, 0x0BB8 }, // 0x000096 
	{ 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00, 0x03E1, 0x0BB8 }, // 0x0000AC 
	{ 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E, 0x03E0, 0x0BB8 }, // 0x0000C2 

}; 

static u8 unaccounted_0000D8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Vec3s unk_0x33_sceneCollisionHeader0x000324_camPosData_000000E0[3] = {
	{   -260,    820,   2200 }, // 0x000000E0
	{  10922,  10012,      0 }, // 0x000000E6
	{   4683,      0,      0 }, // 0x000000EC

}; 

CamData unk_0x33_sceneCollisionHeader0x000324_camDataList_000000F4[2] = {
	{ CAM_SET_PREREND0, 3, &unk_0x33_sceneCollisionHeader0x000324_camPosData_000000E0[0] },
	{ 0x0000, 0, 0x00000000 },
}; 

u32 unk_0x33_sceneCollisionHeader0x000324_polygonTypes_00000104[] = {
   0x00000001, 0x00000042,
   0x00000001, 0x00000040,
   0x00000101, 0x00000042,
}; 

CollisionPoly unk_0x33_sceneCollisionHeader0x000324_polygons_0000011C[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0x00B4 }, // 0x0000011C
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0x00B4 }, // 0x0000012C
   { 0x0000, 0x0002, 0x0004, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF72C }, // 0x0000013C
   { 0x0000, 0x0002, 0x0005, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF72C }, // 0x0000014C
   { 0x0000, 0x0006, 0x0007, 0x0008, 0x0000, 0x0000, 0x7FFF, 0xF72C }, // 0x0000015C
   { 0x0000, 0x0006, 0x0008, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xF72C }, // 0x0000016C
   { 0x0000, 0x000A, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0x0BF4 }, // 0x0000017C
   { 0x0000, 0x000A, 0x0000, 0x000B, 0x0000, 0x0000, 0x8001, 0x0BF4 }, // 0x0000018C
   { 0x0000, 0x400C, 0x0010, 0x0011, 0x0000, 0x0000, 0x7FFF, 0xF7CC }, // 0x0000019C
   { 0x0000, 0x400C, 0x0011, 0x0012, 0x0000, 0x0000, 0x7FFF, 0xF7CC }, // 0x000001AC
   { 0x0001, 0x000B, 0x0008, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x00B3 }, // 0x000001BC
   { 0x0001, 0x000B, 0x0007, 0x000A, 0x7FFF, 0x0000, 0x0000, 0x00B3 }, // 0x000001CC
   { 0x0002, 0x000D, 0x0013, 0x0014, 0x0000, 0x7FFF, 0x0000, 0xFFFE }, // 0x000001DC
   { 0x0002, 0x000D, 0x0014, 0x0015, 0x0000, 0x7FFF, 0x0000, 0xFFFE }, // 0x000001EC
   { 0x0001, 0x0009, 0x0016, 0x0017, 0x7FFF, 0x0000, 0x0000, 0x003B }, // 0x000001FC
   { 0x0001, 0x0009, 0x0017, 0x0006, 0x7FFF, 0x0000, 0x0000, 0x003B }, // 0x0000020C
   { 0x0000, 0x0005, 0x0004, 0x0018, 0x8001, 0x0000, 0x0000, 0x003C }, // 0x0000021C
   { 0x0000, 0x0005, 0x0018, 0x0019, 0x8001, 0x0000, 0x0000, 0x003C }, // 0x0000022C
   { 0x0000, 0x000E, 0x001A, 0x001B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000023C
   { 0x0000, 0x000E, 0x001B, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000024C
   { 0x0000, 0x000F, 0x001B, 0x000B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000025C
   { 0x0000, 0x000F, 0x000B, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000026C

}; 

Vec3s unk_0x33_sceneCollisionHeader0x000324_vtx_0000027C[] = {
   { 180, 0, 3060 }, // 0x0000027C
   { 180, 240, 3060 }, // 0x00000282
   { 180, 240, 2260 }, // 0x00000288
   { 180, 0, 2260 }, // 0x0000028E
   { 60, 240, 2260 }, // 0x00000294
   { 60, 0, 2260 }, // 0x0000029A
   { -59, 240, 2260 }, // 0x000002A0
   { -179, 240, 2260 }, // 0x000002A6
   { -179, 0, 2260 }, // 0x000002AC
   { -59, 0, 2260 }, // 0x000002B2
   { -179, 240, 3060 }, // 0x000002B8
   { -179, 0, 3060 }, // 0x000002BE
   { -59, 0, 2100 }, // 0x000002C4
   { 60, 2, 1860 }, // 0x000002CA
   { 180, 0, 1860 }, // 0x000002D0
   { 180, 0, 2940 }, // 0x000002D6
   { 60, 0, 2100 }, // 0x000002DC
   { 60, 240, 2100 }, // 0x000002E2
   { -59, 240, 2100 }, // 0x000002E8
   { -59, 2, 1860 }, // 0x000002EE
   { -59, 2, 2100 }, // 0x000002F4
   { 60, 2, 2100 }, // 0x000002FA
   { -59, 0, 1860 }, // 0x00000300
   { -59, 240, 1860 }, // 0x00000306
   { 60, 240, 1860 }, // 0x0000030C
   { 60, 0, 1860 }, // 0x00000312
   { -179, 0, 1860 }, // 0x00000318
   { -179, 0, 2940 }, // 0x0000031E
}; 

CollisionHeader unk_0x33_sceneCollisionHeader0x000324 = { -570, 0, 1860, 180, 520, 3060, 28, unk_0x33_sceneCollisionHeader0x000324_vtx_0000027C, 22, unk_0x33_sceneCollisionHeader0x000324_polygons_0000011C, unk_0x33_sceneCollisionHeader0x000324_polygonTypes_00000104, &unk_0x33_sceneCollisionHeader0x000324_camDataList_000000F4, 0, 0 }; 


