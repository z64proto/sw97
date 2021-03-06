#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_sacred_forest_meadow_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_sacred_forest_meadow_scene.h"


static SCmdSoundSettings old_sacred_forest_meadow_sceneSet0000Cmd00;
static SCmdRoomList old_sacred_forest_meadow_sceneSet0000Cmd01;
static SCmdColHeader old_sacred_forest_meadow_sceneSet0000Cmd02;
static SCmdEntranceList old_sacred_forest_meadow_sceneSet0000Cmd03;
static SCmdSpecialFiles old_sacred_forest_meadow_sceneSet0000Cmd04;
static SCmdSpawnList old_sacred_forest_meadow_sceneSet0000Cmd05;
static SCmdSkyboxSettings old_sacred_forest_meadow_sceneSet0000Cmd06;
static SCmdExitList old_sacred_forest_meadow_sceneSet0000Cmd07;
static SCmdLightSettingList old_sacred_forest_meadow_sceneSet0000Cmd08;
static SCmdEndMarker old_sacred_forest_meadow_sceneSet0000Cmd09;

static SCmdSoundSettings old_sacred_forest_meadow_sceneSet0000Cmd00 = {  0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00 }; // 0x0000

static SCmdRoomList old_sacred_forest_meadow_sceneSet0000Cmd01 = {  0x04, 0x01, (u32)&old_sacred_forest_meadow_sceneRoomList0x000070 }; // 0x0008

static SCmdColHeader old_sacred_forest_meadow_sceneSet0000Cmd02 = {  0x03, 0x00, (u32)&old_sacred_forest_meadow_sceneCollisionHeader0x000D5C }; // 0x0010

static SCmdEntranceList old_sacred_forest_meadow_sceneSet0000Cmd03 = {  0x06, 0x00, (u32)&old_sacred_forest_meadow_sceneEntranceList0x000078 }; // 0x0018

static SCmdSpecialFiles old_sacred_forest_meadow_sceneSet0000Cmd04 = {  0x07, 0x00, 0x0002 }; // 0x0020

static SCmdSpawnList old_sacred_forest_meadow_sceneSet0000Cmd05 = {  0x00, 0x02, (u32)&old_sacred_forest_meadow_sceneStartPositionList0x000050 }; // 0x0028

static SCmdSkyboxSettings old_sacred_forest_meadow_sceneSet0000Cmd06 = {  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01 }; // 0x0030

static SCmdExitList old_sacred_forest_meadow_sceneSet0000Cmd07 = {  0x13, 0x00, (u32)&old_sacred_forest_meadow_sceneExitList0x00007C }; // 0x0038

static SCmdLightSettingList old_sacred_forest_meadow_sceneSet0000Cmd08 = {  0x0F, 2, (u32)&old_sacred_forest_meadow_sceneLightSettings0x000080 }; // 0x0040

static SCmdEndMarker old_sacred_forest_meadow_sceneSet0000Cmd09 = {  0x14, 0x00, 0x00 }; // 0x0048

ActorEntry old_sacred_forest_meadow_sceneStartPositionList0x000050[] = {
	{ ACTOR_PLAYER, -2667, 0, 0, 0, 16384, 0, 0x0FFF },
	{ ACTOR_PLAYER, 1425, 510, -2488, 0, -3459, 0, 0x0FFF },

}; 

RomFile old_sacred_forest_meadow_sceneRoomList0x000070[] = {
	{ (u32)_old_sacred_forest_meadow_room_00SegmentRomStart, (u32)_old_sacred_forest_meadow_room_00SegmentRomEnd },

}; 

EntranceEntry old_sacred_forest_meadow_sceneEntranceList0x000078[2] = {
	{ 0x00, 0x00 }, //0x000078 
	{ 0x01, 0x00 }, //0x00007A 

}; 

u16 old_sacred_forest_meadow_sceneExitList0x00007C[2] = {
	ENTRANCE(SCENE_KOKIRI_FOREST, 2, 3, false, true), // 0x0074,
	ENTRANCE(SCENE_FOREST_TEMPLE, 0, 3, false, true), // 0x004B,

}; 

LightSettings old_sacred_forest_meadow_sceneLightSettings0x000080[2] = {
	{ 0x50, 0x50, 0x50, 0x49, 0x49, 0x49, 0xC8, 0xC8, 0xC8, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x6E, 0x32, 0x32, 0x3C, 0x03CA, 0x0708 }, // 0x000080 
	{ 0x50, 0x50, 0x50, 0x49, 0x49, 0x49, 0xC8, 0xC8, 0xC8, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x6E, 0x32, 0x32, 0x3C, 0x03DE, 0x0708 }, // 0x000096 

}; 

static u8 unaccounted_0000AC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

CamData old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_camDataList_000000B0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_polygonTypes_000000B8[] = {
   0x00000000, 0x00000008,
   0x00000200, 0x00000008,
   0x00000200, 0x00000040,
   0x00000000, 0x00000040,
   0x00000000, 0x00000048,
   0x00000000, 0x00000002,
   0x00000100, 0x00000000,
   0x00000000, 0x00000000,
}; 

CollisionPoly old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_polygons_000000F8[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0xEB67, 0x7E54, 0x0000, 0xFE26 }, // 0x000000F8
   { 0x0000, 0x0001, 0x0003, 0x0002, 0xEB67, 0x7E54, 0x0000, 0xFE26 }, // 0x00000108
   { 0x0000, 0x0003, 0x0004, 0x0002, 0xF5B4, 0x7E54, 0x11D6, 0x0000 }, // 0x00000118
   { 0x0000, 0x0002, 0x0004, 0x0005, 0xEEEC, 0x7D9B, 0x11BC, 0xFFB1 }, // 0x00000128
   { 0x0000, 0x0002, 0x0005, 0x0006, 0xF08F, 0x7E31, 0x0ED9, 0xFF8A }, // 0x00000138
   { 0x0000, 0x0002, 0x0006, 0x0000, 0xE811, 0x7DBD, 0x0000, 0xFE01 }, // 0x00000148
   { 0x0000, 0x0007, 0x0002, 0x0006, 0x400A, 0x0000, 0x6ED3, 0x0B7F }, // 0x00000158
   { 0x0000, 0x0007, 0x0006, 0x0008, 0x400A, 0x0000, 0x6ED3, 0x0B7F }, // 0x00000168
   { 0x0000, 0x0009, 0x0003, 0x0002, 0x4002, 0x0000, 0x6ED8, 0x0B7F }, // 0x00000178
   { 0x0000, 0x0009, 0x0002, 0x0007, 0x4002, 0x0000, 0x6ED8, 0x0B7F }, // 0x00000188
   { 0x0000, 0x000A, 0x0009, 0x0007, 0x4002, 0x0000, 0x6ED8, 0x0B7F }, // 0x00000198
   { 0x0000, 0x000A, 0x0007, 0x000B, 0x4002, 0x0000, 0x6ED8, 0x0B7F }, // 0x000001A8
   { 0x0000, 0x000B, 0x0007, 0x0008, 0x400A, 0x0000, 0x6ED3, 0x0B7F }, // 0x000001B8
   { 0x0000, 0x000B, 0x0008, 0x000C, 0x400A, 0x0000, 0x6ED3, 0x0B7F }, // 0x000001C8
   { 0x0001, 0x000D, 0x000E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0xFDF8 }, // 0x000001D8
   { 0x0002, 0x000D, 0x000F, 0x0010, 0x0000, 0x7FFF, 0x0000, 0xFDF8 }, // 0x000001E8
   { 0x0003, 0x0010, 0x000F, 0x0011, 0xF767, 0x7ED5, 0x0EF0, 0xFF89 }, // 0x000001F8
   { 0x0003, 0x0010, 0x0011, 0x0012, 0xF76B, 0x7ED4, 0x0EF4, 0xFF89 }, // 0x00000208
   { 0x0004, 0x0010, 0x0013, 0x0014, 0xF762, 0x7ED5, 0x0EEB, 0xFF89 }, // 0x00000218
   { 0x0000, 0x0014, 0x0015, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFDF8 }, // 0x00000228
   { 0x0004, 0x0010, 0x0014, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFDF8 }, // 0x00000238
   { 0x0004, 0x0012, 0x0013, 0x0010, 0xF761, 0x7ED5, 0x0EEB, 0xFF89 }, // 0x00000248
   { 0x0000, 0x0016, 0x0006, 0x000E, 0x0000, 0x7FFF, 0x0000, 0xFDF8 }, // 0x00000258
   { 0x0004, 0x0006, 0x0005, 0x000F, 0xF763, 0x7ED5, 0x0EEC, 0xFF89 }, // 0x00000268
   { 0x0004, 0x0006, 0x000F, 0x000E, 0x0000, 0x7FFF, 0x0000, 0xFDF8 }, // 0x00000278
   { 0x0004, 0x0005, 0x0011, 0x000F, 0xF762, 0x7ED5, 0x0EEB, 0xFF89 }, // 0x00000288
   { 0x0000, 0x0008, 0x0006, 0x0017, 0x1831, 0x0000, 0x7DB0, 0x0D0A }, // 0x00000298
   { 0x0000, 0x0008, 0x0017, 0x0018, 0x1831, 0x0000, 0x7DB0, 0x0D0A }, // 0x000002A8
   { 0x0000, 0x0018, 0x0017, 0x0014, 0x870E, 0x0000, 0x29E4, 0x0D0A }, // 0x000002B8
   { 0x0000, 0x0018, 0x0014, 0x0019, 0x870E, 0x0000, 0x29E4, 0x0D0A }, // 0x000002C8
   { 0x0000, 0x001A, 0x0018, 0x0019, 0x870E, 0x0000, 0x29E4, 0x0D0A }, // 0x000002D8
   { 0x0000, 0x001A, 0x0019, 0x001B, 0x870E, 0x0000, 0x29E4, 0x0D0A }, // 0x000002E8
   { 0x0000, 0x000C, 0x0008, 0x0018, 0x1831, 0x0000, 0x7DB0, 0x0D0A }, // 0x000002F8
   { 0x0000, 0x000C, 0x0018, 0x001A, 0x1831, 0x0000, 0x7DB0, 0x0D0A }, // 0x00000308
   { 0x0000, 0x001C, 0x001D, 0x001E, 0x1440, 0x796B, 0xDCEA, 0xF6AB }, // 0x00000318
   { 0x0000, 0x001C, 0x001E, 0x001F, 0x1446, 0x7969, 0xDCE7, 0xF6AB }, // 0x00000328
   { 0x0000, 0x0020, 0x0021, 0x001C, 0x1C6F, 0x72B1, 0xCECC, 0xF4D0 }, // 0x00000338
   { 0x0000, 0x0020, 0x001C, 0x001F, 0x1C7D, 0x72A0, 0xCEAE, 0xF4CC }, // 0x00000348
   { 0x0005, 0x0022, 0x0023, 0x0024, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00000358
   { 0x0005, 0x0022, 0x0024, 0x0025, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00000368
   { 0x0000, 0x0026, 0x0027, 0x0023, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00000378
   { 0x0000, 0x0026, 0x0023, 0x0022, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00000388
   { 0x0005, 0x0025, 0x0024, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00000398
   { 0x0005, 0x0025, 0x0028, 0x0029, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x000003A8
   { 0x0005, 0x0029, 0x0028, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x000003B8
   { 0x0005, 0x0029, 0x0027, 0x0026, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x000003C8
   { 0x0000, 0x002A, 0x002C, 0x0035, 0xE342, 0x7262, 0x31BC, 0x01C1 }, // 0x000003D8
   { 0x0000, 0x002A, 0x0035, 0x002B, 0xE356, 0x7273, 0x31A0, 0x01BD }, // 0x000003E8
   { 0x0000, 0x001E, 0x002B, 0x001F, 0x6322, 0x393F, 0x3943, 0xFC69 }, // 0x000003F8
   { 0x0000, 0x002B, 0x0035, 0x0020, 0x31C4, 0x725F, 0x1CBB, 0xFB45 }, // 0x00000408
   { 0x0000, 0x002B, 0x0020, 0x001F, 0x31E0, 0x724E, 0x1CCF, 0xFB45 }, // 0x00000418
   { 0x0000, 0x002A, 0x001D, 0x001C, 0x9CBE, 0x38F5, 0xC6AB, 0xFC55 }, // 0x00000428
   { 0x0000, 0x002C, 0x002A, 0x001C, 0xCE60, 0x7273, 0xE356, 0xFB3A }, // 0x00000438
   { 0x0000, 0x002C, 0x001C, 0x0021, 0xCE7C, 0x7284, 0xE36A, 0xFB3B }, // 0x00000448
   { 0x0000, 0x001D, 0x002A, 0x002B, 0xEBC3, 0x796E, 0x230A, 0xFFD7 }, // 0x00000458
   { 0x0000, 0x001D, 0x002B, 0x001E, 0xEBC8, 0x7970, 0x2307, 0xFFD6 }, // 0x00000468
   { 0x0000, 0x002D, 0x0026, 0x0022, 0x400C, 0x0000, 0x912E, 0xEF51 }, // 0x00000478
   { 0x0000, 0x002D, 0x0022, 0x0032, 0x400C, 0x0000, 0x912E, 0xEF51 }, // 0x00000488
   { 0x0000, 0x002E, 0x0020, 0x0035, 0x5C72, 0xB95F, 0x355F, 0x008B }, // 0x00000498
   { 0x0000, 0x002E, 0x0035, 0x002F, 0x5C5A, 0xB93A, 0x3558, 0x008D }, // 0x000004A8
   { 0x0000, 0x002F, 0x0035, 0x002C, 0xCAAF, 0xB916, 0x5C42, 0x0C96 }, // 0x000004B8
   { 0x0000, 0x002F, 0x002C, 0x0030, 0xCAA8, 0xB93A, 0x5C5A, 0x0C97 }, // 0x000004C8
   { 0x0000, 0x0030, 0x002C, 0x0021, 0xA3BB, 0xB910, 0xCABB, 0x007B }, // 0x000004D8
   { 0x0000, 0x0030, 0x0021, 0x0031, 0xA3D3, 0xB8EC, 0xCAC2, 0x007C }, // 0x000004E8
   { 0x0000, 0x0031, 0x0021, 0x0020, 0x3524, 0xB88E, 0xA40D, 0xF483 }, // 0x000004F8
   { 0x0000, 0x0031, 0x0020, 0x002E, 0x352B, 0xB8B2, 0xA3F5, 0xF47F }, // 0x00000508
   { 0x0000, 0x0027, 0x0031, 0x002E, 0x4005, 0x0000, 0x912A, 0xEFA1 }, // 0x00000518
   { 0x0000, 0x0027, 0x002E, 0x0023, 0x4005, 0x0000, 0x912A, 0xEFA1 }, // 0x00000528
   { 0x0000, 0x0023, 0x002E, 0x002F, 0x6ED6, 0x0000, 0x4005, 0xFE2C }, // 0x00000538
   { 0x0000, 0x0023, 0x002F, 0x0024, 0x6ED6, 0x0000, 0x4005, 0xFE2C }, // 0x00000548
   { 0x0000, 0x0032, 0x0022, 0x0025, 0x6ED9, 0x0000, 0x3FFF, 0xFDDC }, // 0x00000558
   { 0x0000, 0x0032, 0x0025, 0x0033, 0x6ED9, 0x0000, 0x3FFF, 0xFDDC }, // 0x00000568
   { 0x0000, 0x0024, 0x002F, 0x0030, 0xBFFB, 0x0000, 0x6ED6, 0x0C9F }, // 0x00000578
   { 0x0000, 0x0024, 0x0030, 0x0028, 0xBFFB, 0x0000, 0x6ED6, 0x0C9F }, // 0x00000588
   { 0x0000, 0x0033, 0x0025, 0x0029, 0xBFF4, 0x0000, 0x6ED2, 0x0C4F }, // 0x00000598
   { 0x0000, 0x0033, 0x0029, 0x0034, 0xBFF4, 0x0000, 0x6ED2, 0x0C4F }, // 0x000005A8
   { 0x0000, 0x0028, 0x0030, 0x0031, 0x912A, 0x0000, 0xBFFB, 0xFE14 }, // 0x000005B8
   { 0x0000, 0x0028, 0x0031, 0x0027, 0x912A, 0x0000, 0xBFFB, 0xFE14 }, // 0x000005C8
   { 0x0000, 0x0034, 0x0029, 0x0026, 0x9127, 0x0000, 0xC001, 0xFDC5 }, // 0x000005D8
   { 0x0000, 0x0034, 0x0026, 0x002D, 0x9127, 0x0000, 0xC001, 0xFDC5 }, // 0x000005E8
   { 0x0006, 0x0036, 0x0037, 0x0038, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005F8
   { 0x0006, 0x0036, 0x0038, 0x0039, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000608
   { 0x0007, 0x003A, 0x003B, 0x0037, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000618
   { 0x0007, 0x003A, 0x0037, 0x0036, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000628
   { 0x0000, 0x003C, 0x0036, 0x0039, 0x0000, 0x7F08, 0xF051, 0x000A }, // 0x00000638
   { 0x0000, 0x003D, 0x003C, 0x0039, 0xEEC7, 0x7ED5, 0x0000, 0xFDAE }, // 0x00000648
   { 0x0000, 0x0036, 0x003C, 0x003E, 0xF6F7, 0x7EB7, 0xF05B, 0xFF3A }, // 0x00000658
   { 0x0000, 0x0036, 0x003E, 0x003A, 0xFE89, 0x7C88, 0xE275, 0xFFF1 }, // 0x00000668
   { 0x0000, 0x003B, 0x0004, 0x0037, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000678
   { 0x0000, 0x0037, 0x0004, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000688
   { 0x0000, 0x0037, 0x0003, 0x0038, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000698
   { 0x0000, 0x0003, 0x003F, 0x0038, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006A8
   { 0x0000, 0x0040, 0x0041, 0x0003, 0x60B6, 0x0000, 0x53D9, 0x0D09 }, // 0x000006B8
   { 0x0000, 0x0040, 0x0003, 0x0009, 0x60B6, 0x0000, 0x53D9, 0x0D09 }, // 0x000006C8
   { 0x0000, 0x0042, 0x003C, 0x0041, 0x60BC, 0x0000, 0xAC2F, 0x0D09 }, // 0x000006D8
   { 0x0000, 0x0042, 0x0041, 0x0040, 0x60BC, 0x0000, 0xAC2F, 0x0D09 }, // 0x000006E8
   { 0x0000, 0x0043, 0x0042, 0x0040, 0x60BC, 0x0000, 0xAC2F, 0x0D09 }, // 0x000006F8
   { 0x0000, 0x0043, 0x0040, 0x0044, 0x60BC, 0x0000, 0xAC2F, 0x0D09 }, // 0x00000708
   { 0x0000, 0x0044, 0x0040, 0x0009, 0x60B6, 0x0000, 0x53D9, 0x0D09 }, // 0x00000718
   { 0x0000, 0x0044, 0x0009, 0x000A, 0x60B6, 0x0000, 0x53D9, 0x0D09 }, // 0x00000728
   { 0x0007, 0x0045, 0x0012, 0x0011, 0xEE55, 0x7AFA, 0x1EC8, 0x0065 }, // 0x00000738
   { 0x0007, 0x0045, 0x0011, 0x0046, 0xF3C0, 0x7B38, 0x2068, 0x006A }, // 0x00000748
   { 0x0007, 0x0047, 0x0045, 0x0046, 0xF94C, 0x7E96, 0x11BA, 0x0002 }, // 0x00000758
   { 0x0007, 0x0047, 0x0046, 0x0048, 0xF1BC, 0x7EAE, 0x0B75, 0xFFD4 }, // 0x00000768
   { 0x0007, 0x0047, 0x0048, 0x003B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000778
   { 0x0007, 0x0047, 0x003B, 0x003A, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000788
   { 0x0000, 0x003A, 0x003E, 0x0047, 0xF7EA, 0x7C4A, 0xE283, 0xFFA5 }, // 0x00000798
   { 0x0000, 0x0049, 0x004A, 0x0047, 0x0053, 0x7F9B, 0xF5FF, 0xFFEF }, // 0x000007A8
   { 0x0000, 0x003E, 0x004B, 0x0047, 0x0925, 0x7EAF, 0xF02D, 0x000C }, // 0x000007B8
   { 0x0000, 0x0047, 0x004B, 0x0049, 0x072C, 0x7EE2, 0xF0C0, 0x0004 }, // 0x000007C8
   { 0x0000, 0x004A, 0x0013, 0x0047, 0xF1AC, 0x7DF1, 0x11CA, 0xFFE0 }, // 0x000007D8
   { 0x0000, 0x0047, 0x0013, 0x0045, 0xED43, 0x7E93, 0x0352, 0xFFB1 }, // 0x000007E8
   { 0x0000, 0x0013, 0x0012, 0x0045, 0xEE3E, 0x7AFA, 0x1EB9, 0x0065 }, // 0x000007F8
   { 0x0000, 0x0011, 0x0005, 0x0046, 0xEEE2, 0x7B56, 0x1DA1, 0x0055 }, // 0x00000808
   { 0x0000, 0x0005, 0x0004, 0x0046, 0xF673, 0x7C06, 0x1E2A, 0x005A }, // 0x00000818
   { 0x0000, 0x0004, 0x0048, 0x0046, 0xF5DD, 0x7E81, 0x10A5, 0xFFFA }, // 0x00000828
   { 0x0000, 0x0004, 0x003B, 0x0048, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000838
   { 0x0000, 0x0014, 0x0013, 0x004C, 0xF230, 0x7F1C, 0x05FC, 0xFF89 }, // 0x00000848
   { 0x0000, 0x0013, 0x004A, 0x004C, 0xEB9B, 0x7D1E, 0x11AD, 0x0027 }, // 0x00000858
   { 0x0000, 0x004A, 0x004D, 0x004C, 0xE334, 0x7CAE, 0x02EF, 0x00EA }, // 0x00000868
   { 0x0000, 0x004C, 0x004D, 0x004E, 0xFE43, 0x7FF3, 0x0303, 0xFE70 }, // 0x00000878
   { 0x0000, 0x004C, 0x004E, 0x004F, 0x089E, 0x7ED5, 0xF112, 0xFD86 }, // 0x00000888
   { 0x0000, 0x004C, 0x004F, 0x0014, 0x148F, 0x7E32, 0x05F1, 0xFC75 }, // 0x00000898
   { 0x0000, 0x0050, 0x004C, 0x004D, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x000008A8
   { 0x0000, 0x0050, 0x004D, 0x0051, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x000008B8
   { 0x0000, 0x0019, 0x0014, 0x004C, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x000008C8
   { 0x0000, 0x0019, 0x004C, 0x0050, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x000008D8
   { 0x0000, 0x001B, 0x0019, 0x0050, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x000008E8
   { 0x0000, 0x001B, 0x0050, 0x0052, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x000008F8
   { 0x0000, 0x0052, 0x0050, 0x0051, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x00000908
   { 0x0000, 0x0052, 0x0051, 0x0053, 0x8001, 0x0000, 0x0000, 0x0B80 }, // 0x00000918
   { 0x0000, 0x003E, 0x003C, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFF38 }, // 0x00000928
   { 0x0000, 0x003C, 0x0055, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFF38 }, // 0x00000938
   { 0x0000, 0x0055, 0x0056, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFF38 }, // 0x00000948
   { 0x0000, 0x0054, 0x0056, 0x0057, 0x0000, 0x7FFF, 0x0000, 0xFF38 }, // 0x00000958
   { 0x0000, 0x0054, 0x0057, 0x004B, 0x0000, 0x7FFF, 0x0000, 0xFF38 }, // 0x00000968
   { 0x0000, 0x0054, 0x004B, 0x003E, 0x0000, 0x7FFF, 0x0000, 0xFF38 }, // 0x00000978
   { 0x0000, 0x0058, 0x0057, 0x0054, 0x400A, 0x0000, 0x912D, 0x0B80 }, // 0x00000988
   { 0x0000, 0x0058, 0x0054, 0x0059, 0x400A, 0x0000, 0x912D, 0x0B80 }, // 0x00000998
   { 0x0000, 0x0059, 0x0054, 0x003C, 0x4002, 0x0000, 0x9128, 0x0B80 }, // 0x000009A8
   { 0x0000, 0x0059, 0x003C, 0x0042, 0x4002, 0x0000, 0x9128, 0x0B80 }, // 0x000009B8
   { 0x0000, 0x005A, 0x0059, 0x0042, 0x4002, 0x0000, 0x9128, 0x0B80 }, // 0x000009C8
   { 0x0000, 0x005A, 0x0042, 0x0043, 0x4002, 0x0000, 0x9128, 0x0B80 }, // 0x000009D8
   { 0x0000, 0x005B, 0x0058, 0x0059, 0x400A, 0x0000, 0x912D, 0x0B80 }, // 0x000009E8
   { 0x0000, 0x005B, 0x0059, 0x005A, 0x400A, 0x0000, 0x912D, 0x0B80 }, // 0x000009F8
   { 0x0000, 0x004B, 0x0057, 0x005C, 0xEF89, 0x7EEF, 0x0000, 0xFF3A }, // 0x00000A08
   { 0x0000, 0x005C, 0x004D, 0x004A, 0xF267, 0x7D14, 0xE876, 0x00EB }, // 0x00000A18
   { 0x0000, 0x004A, 0x0049, 0x005C, 0xF83A, 0x7D83, 0xE822, 0x00A9 }, // 0x00000A28
   { 0x0000, 0x0049, 0x004B, 0x005C, 0xFF02, 0x7CB0, 0xE31A, 0x00BD }, // 0x00000A38
   { 0x0000, 0x005C, 0x0057, 0x005D, 0xEB2D, 0x7E0D, 0xF83F, 0x0009 }, // 0x00000A48
   { 0x0000, 0x004D, 0x005C, 0x005D, 0xF761, 0x7ED5, 0xF115, 0x0000 }, // 0x00000A58
   { 0x0000, 0x0057, 0x005E, 0x005D, 0xE38A, 0x72A5, 0x314A, 0xFA30 }, // 0x00000A68
   { 0x0000, 0x005F, 0x004D, 0x005D, 0xCDF7, 0x72AE, 0xE504, 0x047F }, // 0x00000A78
   { 0x0000, 0x0060, 0x0061, 0x0057, 0x1831, 0x0000, 0x8250, 0x0D0B }, // 0x00000A88
   { 0x0000, 0x0060, 0x0057, 0x0058, 0x1831, 0x0000, 0x8250, 0x0D0B }, // 0x00000A98
   { 0x0000, 0x0051, 0x004D, 0x0061, 0x870E, 0x0000, 0xD61C, 0x0D0A }, // 0x00000AA8
   { 0x0000, 0x0051, 0x0061, 0x0060, 0x870E, 0x0000, 0xD61C, 0x0D0A }, // 0x00000AB8
   { 0x0000, 0x0062, 0x0060, 0x0058, 0x1831, 0x0000, 0x8250, 0x0D0B }, // 0x00000AC8
   { 0x0000, 0x0062, 0x0058, 0x005B, 0x1831, 0x0000, 0x8250, 0x0D0B }, // 0x00000AD8
   { 0x0000, 0x0053, 0x0051, 0x0060, 0x870E, 0x0000, 0xD61C, 0x0D0A }, // 0x00000AE8
   { 0x0000, 0x0053, 0x0060, 0x0062, 0x870E, 0x0000, 0xD61C, 0x0D0A }, // 0x00000AF8

}; 

Vec3s old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_vtx_00000B08[] = {
   { -1471, 240, -4249 }, // 0x00000B08
   { -2943, 0, -3399 }, // 0x00000B0E
   { -1471, 240, -2549 }, // 0x00000B14
   { -2943, 0, -1699 }, // 0x00000B1A
   { -1471, 0, -849 }, // 0x00000B20
   { 0, 320, -1699 }, // 0x00000B26
   { 0, 520, -3399 }, // 0x00000B2C
   { -1471, 720, -2549 }, // 0x00000B32
   { 0, 1000, -3399 }, // 0x00000B38
   { -2943, 480, -1699 }, // 0x00000B3E
   { -2943, 960, -1699 }, // 0x00000B44
   { -1471, 1200, -2549 }, // 0x00000B4A
   { 0, 1480, -3399 }, // 0x00000B50
   { 2278, 520, -3784 }, // 0x00000B56
   { 2139, 520, -3864 }, // 0x00000B5C
   { 1403, 520, -2589 }, // 0x00000B62
   { 1542, 520, -2509 }, // 0x00000B68
   { 322, 320, -1513 }, // 0x00000B6E
   { 491, 320, -1416 }, // 0x00000B74
   { 1472, 320, -849 }, // 0x00000B7A
   { 2944, 520, -1699 }, // 0x00000B80
   { 2944, 520, -3399 }, // 0x00000B86
   { 1472, 520, -4249 }, // 0x00000B8C
   { 2208, 520, -3824 }, // 0x00000B92
   { 2208, 1000, -3824 }, // 0x00000B98
   { 2944, 1000, -1699 }, // 0x00000B9E
   { 2208, 1480, -3824 }, // 0x00000BA4
   { 2944, 1480, -1699 }, // 0x00000BAA
   { 1670, 1120, -3875 }, // 0x00000BB0
   { 1499, 1280, -3420 }, // 0x00000BB6
   { 2192, 1280, -3020 }, // 0x00000BBC
   { 2501, 1120, -3395 }, // 0x00000BC2
   { 2610, 1080, -3425 }, // 0x00000BC8
   { 1641, 1080, -3985 }, // 0x00000BCE
   { 2610, 600, -3425 }, // 0x00000BD4
   { 2501, 600, -3395 }, // 0x00000BDA
   { 2021, 600, -2564 }, // 0x00000BE0
   { 2050, 600, -2455 }, // 0x00000BE6
   { 1641, 600, -3985 }, // 0x00000BEC
   { 1670, 600, -3875 }, // 0x00000BF2
   { 1190, 600, -3044 }, // 0x00000BF8
   { 1081, 600, -3015 }, // 0x00000BFE
   { 1190, 1120, -3044 }, // 0x00000C04
   { 2021, 1120, -2564 }, // 0x00000C0A
   { 1081, 1080, -3015 }, // 0x00000C10
   { 1641, 520, -3985 }, // 0x00000C16
   { 2501, 960, -3395 }, // 0x00000C1C
   { 2021, 960, -2564 }, // 0x00000C22
   { 1190, 960, -3044 }, // 0x00000C28
   { 1670, 960, -3875 }, // 0x00000C2E
   { 2610, 520, -3425 }, // 0x00000C34
   { 2050, 520, -2455 }, // 0x00000C3A
   { 1081, 520, -3015 }, // 0x00000C40
   { 2050, 1080, -2455 }, // 0x00000C46
   { -2943, 0, 80 }, // 0x00000C4C
   { -2943, 0, -79 }, // 0x00000C52
   { -4416, 0, -79 }, // 0x00000C58
   { -4416, 0, 80 }, // 0x00000C5E
   { -1471, 0, 7 }, // 0x00000C64
   { -1471, 0, -152 }, // 0x00000C6A
   { -2943, 200, 1700 }, // 0x00000C70
   { -4416, 0, 850 }, // 0x00000C76
   { -1471, 200, 850 }, // 0x00000C7C
   { -4416, 0, -849 }, // 0x00000C82
   { -4416, 480, 0 }, // 0x00000C88
   { -4416, 0, 0 }, // 0x00000C8E
   { -2943, 680, 1700 }, // 0x00000C94
   { -2943, 1160, 1700 }, // 0x00000C9A
   { -4416, 960, 0 }, // 0x00000CA0
   { 125, 120, -827 }, // 0x00000CA6
   { -39, 120, -889 }, // 0x00000CAC
   { -581, 0, -237 }, // 0x00000CB2
   { -691, 0, -374 }, // 0x00000CB8
   { 635, 120, 1333 }, // 0x00000CBE
   { 1472, 80, 850 }, // 0x00000CC4
   { 0, 200, 1700 }, // 0x00000CCA
   { 2944, 440, 0 }, // 0x00000CD0
   { 2944, 400, 1700 }, // 0x00000CD6
   { 4417, 440, 850 }, // 0x00000CDC
   { 4417, 240, -849 }, // 0x00000CE2
   { 2944, 920, 0 }, // 0x00000CE8
   { 2944, 880, 1700 }, // 0x00000CEE
   { 2944, 1400, 0 }, // 0x00000CF4
   { 2944, 1360, 1700 }, // 0x00000CFA
   { -1471, 200, 2550 }, // 0x00000D00
   { -2943, 200, 3400 }, // 0x00000D06
   { -1471, 200, 4250 }, // 0x00000D0C
   { 0, 200, 3400 }, // 0x00000D12
   { 0, 680, 3400 }, // 0x00000D18
   { -1471, 680, 2550 }, // 0x00000D1E
   { -1471, 1160, 2550 }, // 0x00000D24
   { 0, 1160, 3400 }, // 0x00000D2A
   { 1542, 400, 2510 }, // 0x00000D30
   { 2278, 600, 3785 }, // 0x00000D36
   { 1472, 200, 4250 }, // 0x00000D3C
   { 2944, 800, 3400 }, // 0x00000D42
   { 2208, 1030, 3825 }, // 0x00000D48
   { 2208, 550, 3825 }, // 0x00000D4E
   { 2208, 1510, 3825 }, // 0x00000D54
}; 

CollisionHeader old_sacred_forest_meadow_sceneCollisionHeader0x000D5C = { -4416, 0, -4249, 4417, 1510, 4250, 99, old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_vtx_00000B08, 161, old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_polygons_000000F8, old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_polygonTypes_000000B8, &old_sacred_forest_meadow_sceneCollisionHeader0x000D5C_camDataList_000000B0, 0, 0 }; 

static u32 padD88 = 0;
static u32 padD8C = 0;

u64 old_sacred_forest_meadow_sceneTex_000D90[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_sceneTex_000D90.rgb5a1.inc.c"
};

u64 old_sacred_forest_meadow_sceneTex_001590[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_sceneTex_001590.rgb5a1.inc.c"
};

u64 old_sacred_forest_meadow_sceneTex_002590[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_sceneTex_002590.rgb5a1.inc.c"
};


