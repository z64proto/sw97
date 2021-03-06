#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_kokiri_house_2_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_kokiri_house_2_scene.h"


static SCmdSoundSettings pr_kokiri_house_2_sceneSet0000Cmd00;
static SCmdRoomList pr_kokiri_house_2_sceneSet0000Cmd01;
static SCmdColHeader pr_kokiri_house_2_sceneSet0000Cmd02;
static SCmdEntranceList pr_kokiri_house_2_sceneSet0000Cmd03;
static SCmdSpecialFiles pr_kokiri_house_2_sceneSet0000Cmd04;
static SCmdSpawnList pr_kokiri_house_2_sceneSet0000Cmd05;
static SCmdSkyboxSettings pr_kokiri_house_2_sceneSet0000Cmd06;
static SCmdExitList pr_kokiri_house_2_sceneSet0000Cmd07;
static SCmdLightSettingList pr_kokiri_house_2_sceneSet0000Cmd08;
static SCmdEndMarker pr_kokiri_house_2_sceneSet0000Cmd09;

static SCmdSoundSettings pr_kokiri_house_2_sceneSet0000Cmd00 = {  0x15, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F }; // 0x0000

static SCmdRoomList pr_kokiri_house_2_sceneSet0000Cmd01 = {  0x04, 0x01, (u32)&pr_kokiri_house_2_sceneRoomList0x000060 }; // 0x0008

// This command is added!
static SCmdMiscSettings link_home_sceneSet0000Cmd03 = {  0x19, 0x20, 0x00000004 };

static SCmdColHeader pr_kokiri_house_2_sceneSet0000Cmd02 = {  0x03, 0x00, (u32)&pr_kokiri_house_2_sceneCollisionHeader0x000C04 }; // 0x0010

static SCmdEntranceList pr_kokiri_house_2_sceneSet0000Cmd03 = {  0x06, 0x00, (u32)&pr_kokiri_house_2_sceneEntranceList0x000068 }; // 0x0018

static SCmdSpecialFiles pr_kokiri_house_2_sceneSet0000Cmd04 = {  0x07, 0x00, 0x0003 }; // 0x0020

static SCmdSpawnList pr_kokiri_house_2_sceneSet0000Cmd05 = {  0x00, 0x01, (u32)&pr_kokiri_house_2_sceneStartPositionList0x000050 }; // 0x0028

static SCmdSkyboxSettings pr_kokiri_house_2_sceneSet0000Cmd06 = {  0x11, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01 }; // 0x0030

static SCmdExitList pr_kokiri_house_2_sceneSet0000Cmd07 = {  0x13, 0x00, (u32)&pr_kokiri_house_2_sceneExitList0x00006C }; // 0x0038

static SCmdLightSettingList pr_kokiri_house_2_sceneSet0000Cmd08 = {  0x0F, 1, (u32)&pr_kokiri_house_2_sceneLightSettings0x000070 }; // 0x0040

static SCmdEndMarker pr_kokiri_house_2_sceneSet0000Cmd09 = {  0x14, 0x00, 0x00 }; // 0x0048

ActorEntry pr_kokiri_house_2_sceneStartPositionList0x000050[] = {
	{ ACTOR_PLAYER, 1, 0, -169, 0, 0, 0, 0x0F00 },

}; 

RomFile pr_kokiri_house_2_sceneRoomList0x000060[] = {
	{ (u32)_pr_kokiri_house_2_room_00SegmentRomStart, (u32)_pr_kokiri_house_2_room_00SegmentRomEnd },

}; 

EntranceEntry pr_kokiri_house_2_sceneEntranceList0x000068[2] = {
	{ 0x00, 0x00 }, //0x000068 
	{ 0x00, 0x00 }, //0x00006A 

}; 

u16 pr_kokiri_house_2_sceneExitList0x00006C[2] = {
	ENTRANCE(SCENE_KOKIRI_FOREST, 5, 3, false, true), // 0x008E,
	0x0000,

}; 

LightSettings pr_kokiri_house_2_sceneLightSettings0x000070[1] = {
	{ 0x28, 0x28, 0x1E, 0x49, 0x49, 0x49, 0x6E, 0x64, 0x5F, 0xB7, 0xB7, 0xB7, 0x6E, 0x64, 0x64, 0x00, 0x00, 0x00, 0x03E4, 0x0BB8 }, // 0x000070 

}; 

static u8 unaccounted_000088[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Vec3s pr_kokiri_house_2_sceneCollisionHeader0x000C04_camPosData_00000090[6] = {
	{   -116,    367,     60 }, // 0x00000090
	{  13107,  21481,      0 }, // 0x00000096
	{   4683,      0,      0 }, // 0x0000009C
	{      0,     32,      0 }, // 0x000000A2
	{      0,      0,      0 }, // 0x000000A8
	{   6000,      0,      0 }, // 0x000000AE

}; 

CamData pr_kokiri_house_2_sceneCollisionHeader0x000C04_camDataList_000000B4[3] = {
	{ CAM_SET_PREREND0, 3, &pr_kokiri_house_2_sceneCollisionHeader0x000C04_camPosData_00000090[0] },
	{ CAM_SET_PREREND1, 3, &pr_kokiri_house_2_sceneCollisionHeader0x000C04_camPosData_00000090[3] },
	{ 0x0000, 0, 0x00000000 },
}; 

u32 pr_kokiri_house_2_sceneCollisionHeader0x000C04_polygonTypes_000000CC[] = {
   0x00200002, 0x000007C0,
   0x00200102, 0x000007C0,
   0x00200002, 0x000007CA,
}; 

CollisionPoly pr_kokiri_house_2_sceneCollisionHeader0x000C04_polygons_000000E4[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0xCEC5, 0x0000, 0x89DA, 0x009D }, // 0x000000E4
   { 0x0000, 0x0000, 0x0002, 0x0003, 0xCEC5, 0x0000, 0x89DA, 0x009D }, // 0x000000F4
   { 0x0000, 0x0001, 0x0004, 0x0005, 0x89DA, 0x0000, 0xCEC5, 0x009D }, // 0x00000104
   { 0x0000, 0x0001, 0x0005, 0x0002, 0x89DA, 0x0000, 0xCEC5, 0x009D }, // 0x00000114
   { 0x0000, 0x0006, 0x0007, 0x0008, 0xCE76, 0x0000, 0x7605, 0x009C }, // 0x00000124
   { 0x0000, 0x0006, 0x0008, 0x0009, 0xCE76, 0x0000, 0x7605, 0x009C }, // 0x00000134
   { 0x0000, 0x000A, 0x000B, 0x000C, 0x318A, 0x0000, 0x7605, 0x009C }, // 0x00000144
   { 0x0000, 0x000A, 0x000C, 0x000D, 0x318A, 0x0000, 0x7605, 0x009C }, // 0x00000154
   { 0x0000, 0x000E, 0x0000, 0x0003, 0x3195, 0x0000, 0x89FF, 0x009D }, // 0x00000164
   { 0x0000, 0x000E, 0x0003, 0x0010, 0x3195, 0x0000, 0x89FF, 0x009D }, // 0x00000174
   { 0x0000, 0x0005, 0x0009, 0x0011, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000184
   { 0x0000, 0x0005, 0x0011, 0x000C, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000194
   { 0x0000, 0x0005, 0x000C, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001A4
   { 0x0000, 0x0005, 0x0012, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001B4
   { 0x0000, 0x0005, 0x0010, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001C4
   { 0x0000, 0x0005, 0x0003, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001D4
   { 0x0000, 0x0004, 0x0006, 0x0009, 0x89FF, 0x0000, 0x3195, 0x009D }, // 0x000001E4
   { 0x0000, 0x0004, 0x0009, 0x0005, 0x89FF, 0x0000, 0x3195, 0x009D }, // 0x000001F4
   { 0x0000, 0x000B, 0x000F, 0x0012, 0x7601, 0x0000, 0x3195, 0x009C }, // 0x00000204
   { 0x0000, 0x000B, 0x0012, 0x000C, 0x7601, 0x0000, 0x3195, 0x009C }, // 0x00000214
   { 0x0000, 0x000F, 0x000E, 0x0010, 0x7626, 0x0000, 0xCEC5, 0x009C }, // 0x00000224
   { 0x0000, 0x000F, 0x0010, 0x0012, 0x7626, 0x0000, 0xCEC5, 0x009C }, // 0x00000234
   { 0x0000, 0x000D, 0x0008, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000244
   { 0x0000, 0x000D, 0x0013, 0x0014, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000254
   { 0x0001, 0x0013, 0x0015, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000264
   { 0x0001, 0x0013, 0x0016, 0x0014, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000274
   { 0x0000, 0x0016, 0x0017, 0x000A, 0x7FFF, 0x0000, 0x0000, 0x0026 }, // 0x00000284
   { 0x0000, 0x0016, 0x000A, 0x000D, 0x7FFF, 0x0000, 0x0000, 0x0026 }, // 0x00000294
   { 0x0000, 0x0015, 0x0018, 0x0017, 0x0000, 0x0000, 0x7FFF, 0x0117 }, // 0x000002A4
   { 0x0000, 0x0015, 0x0017, 0x0016, 0x0000, 0x0000, 0x7FFF, 0x0117 }, // 0x000002B4
   { 0x0000, 0x0008, 0x0007, 0x0018, 0x8001, 0x0000, 0x0000, 0x0027 }, // 0x000002C4
   { 0x0000, 0x0008, 0x0018, 0x0015, 0x8001, 0x0000, 0x0000, 0x0027 }, // 0x000002D4
   { 0x0000, 0x0019, 0x001A, 0x001B, 0x75A6, 0x0000, 0x326C, 0xFFDB }, // 0x000002E4
   { 0x0000, 0x0019, 0x001B, 0x001C, 0x75A6, 0x0000, 0x326C, 0xFFDB }, // 0x000002F4
   { 0x0000, 0x001D, 0x0019, 0x001C, 0x326C, 0x0000, 0x75A6, 0xFFDB }, // 0x00000304
   { 0x0000, 0x001D, 0x001C, 0x001E, 0x326C, 0x0000, 0x75A6, 0xFFDB }, // 0x00000314
   { 0x0000, 0x001F, 0x001D, 0x001E, 0xCC04, 0x0000, 0x74F7, 0xFFDB }, // 0x00000324
   { 0x0000, 0x001F, 0x001E, 0x0020, 0xCC04, 0x0000, 0x74F7, 0xFFDB }, // 0x00000334
   { 0x0000, 0x0021, 0x001F, 0x0020, 0x8A5A, 0x0000, 0x326C, 0xFFDC }, // 0x00000344
   { 0x0000, 0x0021, 0x0020, 0x0022, 0x8A5A, 0x0000, 0x326C, 0xFFDC }, // 0x00000354
   { 0x0000, 0x001A, 0x0023, 0x0026, 0x74F7, 0x0000, 0xCC04, 0xFFDB }, // 0x00000364
   { 0x0000, 0x001A, 0x0026, 0x001B, 0x74F7, 0x0000, 0xCC04, 0xFFDB }, // 0x00000374
   { 0x0002, 0x0023, 0x0024, 0x0027, 0x326C, 0x0000, 0x8A5A, 0xFFDC }, // 0x00000384
   { 0x0002, 0x0023, 0x0027, 0x0026, 0x326C, 0x0000, 0x8A5A, 0xFFDC }, // 0x00000394
   { 0x0002, 0x0024, 0x0025, 0x0028, 0xCC04, 0x0000, 0x8B09, 0xFFDC }, // 0x000003A4
   { 0x0002, 0x0024, 0x0028, 0x0027, 0xCC04, 0x0000, 0x8B09, 0xFFDC }, // 0x000003B4
   { 0x0000, 0x0025, 0x0021, 0x0022, 0x8B09, 0x0000, 0xCC04, 0xFFDC }, // 0x000003C4
   { 0x0000, 0x0025, 0x0022, 0x0028, 0x8B09, 0x0000, 0xCC04, 0xFFDC }, // 0x000003D4
   { 0x0000, 0x0029, 0x002A, 0x002B, 0xBE26, 0x0000, 0x6DC1, 0xFF91 }, // 0x000003E4
   { 0x0000, 0x0029, 0x002B, 0x002C, 0xBE26, 0x0000, 0x6DC1, 0xFF91 }, // 0x000003F4
   { 0x0000, 0x002A, 0x002D, 0x002E, 0x393E, 0x0000, 0x727C, 0xFF8D }, // 0x00000404
   { 0x0000, 0x002A, 0x002E, 0x002B, 0x393E, 0x0000, 0x727C, 0xFF8D }, // 0x00000414
   { 0x0000, 0x002D, 0x002F, 0x0030, 0x727C, 0x0000, 0x393E, 0xFFC2 }, // 0x00000424
   { 0x0000, 0x002D, 0x0030, 0x002E, 0x727C, 0x0000, 0x393E, 0xFFC2 }, // 0x00000434
   { 0x0000, 0x0031, 0x0029, 0x002C, 0x8D84, 0x0000, 0x393E, 0xFFC3 }, // 0x00000444
   { 0x0000, 0x0031, 0x002C, 0x0032, 0x8D84, 0x0000, 0x393E, 0xFFC3 }, // 0x00000454
   { 0x0000, 0x0033, 0x0037, 0x0038, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000464
   { 0x0000, 0x0033, 0x0038, 0x0032, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000474
   { 0x0000, 0x0033, 0x0032, 0x002C, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000484
   { 0x0000, 0x0033, 0x002C, 0x002B, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000494
   { 0x0000, 0x0033, 0x002B, 0x002E, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000004A4
   { 0x0000, 0x0033, 0x002E, 0x0030, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000004B4
   { 0x0000, 0x002F, 0x0034, 0x0033, 0x727C, 0x0000, 0xC6C2, 0x002E }, // 0x000004C4
   { 0x0000, 0x002F, 0x0033, 0x0030, 0x727C, 0x0000, 0xC6C2, 0x002E }, // 0x000004D4
   { 0x0000, 0x0034, 0x0035, 0x0037, 0x393E, 0x0000, 0x8D84, 0x0063 }, // 0x000004E4
   { 0x0000, 0x0034, 0x0037, 0x0033, 0x393E, 0x0000, 0x8D84, 0x0063 }, // 0x000004F4
   { 0x0000, 0x0035, 0x0036, 0x0038, 0xBE26, 0x0000, 0x923F, 0x005F }, // 0x00000504
   { 0x0000, 0x0035, 0x0038, 0x0037, 0xBE26, 0x0000, 0x923F, 0x005F }, // 0x00000514
   { 0x0000, 0x0036, 0x0031, 0x0032, 0x8D84, 0x0000, 0xC6C2, 0x002F }, // 0x00000524
   { 0x0000, 0x0036, 0x0032, 0x0038, 0x8D84, 0x0000, 0xC6C2, 0x002F }, // 0x00000534
   { 0x0000, 0x0039, 0x003A, 0x003B, 0xC6C2, 0x0000, 0x727C, 0xFF87 }, // 0x00000544
   { 0x0000, 0x0039, 0x003B, 0x003C, 0xC6C2, 0x0000, 0x727C, 0xFF87 }, // 0x00000554
   { 0x0000, 0x003A, 0x003D, 0x003E, 0x326C, 0x0000, 0x75A6, 0xFFD2 }, // 0x00000564
   { 0x0000, 0x003A, 0x003E, 0x003B, 0x326C, 0x0000, 0x75A6, 0xFFD2 }, // 0x00000574
   { 0x0002, 0x003D, 0x003F, 0x0040, 0x796E, 0x0000, 0x287A, 0x0035 }, // 0x00000584
   { 0x0002, 0x003D, 0x0040, 0x003E, 0x796E, 0x0000, 0x287A, 0x0035 }, // 0x00000594
   { 0x0000, 0x0041, 0x0039, 0x003C, 0x8D84, 0x0000, 0x393E, 0xFF82 }, // 0x000005A4
   { 0x0000, 0x0041, 0x003C, 0x0042, 0x8D84, 0x0000, 0x393E, 0xFF82 }, // 0x000005B4
   { 0x0002, 0x0043, 0x0047, 0x0048, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005C4
   { 0x0002, 0x0043, 0x0048, 0x0042, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005D4
   { 0x0002, 0x0043, 0x0042, 0x003C, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005E4
   { 0x0002, 0x0043, 0x003C, 0x003B, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000005F4
   { 0x0002, 0x0043, 0x003B, 0x003E, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000604
   { 0x0002, 0x0043, 0x003E, 0x0040, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00000614
   { 0x0002, 0x003F, 0x0044, 0x0043, 0x796E, 0x0000, 0xD786, 0x0068 }, // 0x00000624
   { 0x0002, 0x003F, 0x0043, 0x0040, 0x796E, 0x0000, 0xD786, 0x0068 }, // 0x00000634
   { 0x0002, 0x0044, 0x0045, 0x0047, 0x326C, 0x0000, 0x8A5A, 0x0065 }, // 0x00000644
   { 0x0002, 0x0044, 0x0047, 0x0043, 0x326C, 0x0000, 0x8A5A, 0x0065 }, // 0x00000654
   { 0x0002, 0x0045, 0x0046, 0x0048, 0xC6C2, 0x0000, 0x8D84, 0x0016 }, // 0x00000664
   { 0x0002, 0x0045, 0x0048, 0x0047, 0xC6C2, 0x0000, 0x8D84, 0x0016 }, // 0x00000674
   { 0x0000, 0x0046, 0x0041, 0x0042, 0x8D84, 0x0000, 0xC6C2, 0xFFC9 }, // 0x00000684
   { 0x0000, 0x0046, 0x0042, 0x0048, 0x8D84, 0x0000, 0xC6C2, 0xFFC9 }, // 0x00000694
   { 0x0000, 0x0049, 0x004A, 0x004B, 0xD30F, 0x0000, 0x77D9, 0xFFD6 }, // 0x000006A4
   { 0x0000, 0x0049, 0x004B, 0x004C, 0xD30F, 0x0000, 0x77D9, 0xFFD6 }, // 0x000006B4
   { 0x0000, 0x004D, 0x004E, 0x004F, 0x2B0D, 0x0000, 0x8776, 0xFFD5 }, // 0x000006C4
   { 0x0000, 0x004D, 0x004F, 0x0050, 0x2B0D, 0x0000, 0x8776, 0xFFD5 }, // 0x000006D4
   { 0x0002, 0x004A, 0x0049, 0x004F, 0x87CC, 0x0000, 0xD406, 0x0064 }, // 0x000006E4
   { 0x0002, 0x004A, 0x004F, 0x004E, 0x87CC, 0x0000, 0xD406, 0x0064 }, // 0x000006F4
   { 0x0000, 0x0051, 0x0052, 0x0053, 0x30BC, 0x0000, 0x765B, 0xFF98 }, // 0x00000704
   { 0x0000, 0x0051, 0x0053, 0x0054, 0x30BC, 0x0000, 0x765B, 0xFF98 }, // 0x00000714
   { 0x0000, 0x0055, 0x0051, 0x0054, 0xCF44, 0x0000, 0x765B, 0xFF72 }, // 0x00000724
   { 0x0000, 0x0055, 0x0054, 0x0056, 0xCF44, 0x0000, 0x765B, 0xFF72 }, // 0x00000734
   { 0x0000, 0x0052, 0x0057, 0x0058, 0x765B, 0x0000, 0x30BC, 0xFFEF }, // 0x00000744
   { 0x0000, 0x0052, 0x0058, 0x0053, 0x765B, 0x0000, 0x30BC, 0xFFEF }, // 0x00000754
   { 0x0002, 0x0059, 0x005A, 0x0056, 0x0000, 0x7FFF, 0x0000, 0xFFE9 }, // 0x00000764
   { 0x0002, 0x0059, 0x0056, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFFE9 }, // 0x00000774
   { 0x0002, 0x0059, 0x0054, 0x0053, 0x0000, 0x7FFF, 0x0000, 0xFFE9 }, // 0x00000784
   { 0x0002, 0x0059, 0x0053, 0x0058, 0x0000, 0x7FFF, 0x0000, 0xFFE9 }, // 0x00000794
   { 0x0002, 0x0059, 0x0058, 0x005B, 0x0000, 0x7FFF, 0x0000, 0xFFE9 }, // 0x000007A4
   { 0x0002, 0x0059, 0x005B, 0x005C, 0x0000, 0x7FFF, 0x0000, 0xFFE9 }, // 0x000007B4
   { 0x0002, 0x0057, 0x005D, 0x005B, 0x765B, 0x0000, 0xCF44, 0x0042 }, // 0x000007C4
   { 0x0002, 0x0057, 0x005B, 0x0058, 0x765B, 0x0000, 0xCF44, 0x0042 }, // 0x000007D4
   { 0x0002, 0x005D, 0x005E, 0x005C, 0x30BC, 0x0000, 0x89A5, 0x0062 }, // 0x000007E4
   { 0x0002, 0x005D, 0x005C, 0x005B, 0x30BC, 0x0000, 0x89A5, 0x0062 }, // 0x000007F4
   { 0x0002, 0x005E, 0x005F, 0x0059, 0xCF44, 0x0000, 0x89A5, 0x003C }, // 0x00000804
   { 0x0002, 0x005E, 0x0059, 0x005C, 0xCF44, 0x0000, 0x89A5, 0x003C }, // 0x00000814
   { 0x0000, 0x005F, 0x0060, 0x005A, 0x89A5, 0x0000, 0xCF44, 0xFFE5 }, // 0x00000824
   { 0x0000, 0x005F, 0x005A, 0x0059, 0x89A5, 0x0000, 0xCF44, 0xFFE5 }, // 0x00000834
   { 0x0000, 0x0060, 0x0055, 0x0056, 0x89A5, 0x0000, 0x30BC, 0xFF92 }, // 0x00000844
   { 0x0000, 0x0060, 0x0056, 0x005A, 0x89A5, 0x0000, 0x30BC, 0xFF92 }, // 0x00000854
   { 0x0000, 0x0061, 0x0062, 0x0063, 0x9DEE, 0x0000, 0xADC0, 0xFFCD }, // 0x00000864
   { 0x0000, 0x0061, 0x0063, 0x0064, 0x9DEE, 0x0000, 0xADC0, 0xFFCD }, // 0x00000874
   { 0x0002, 0x0062, 0x0061, 0x0065, 0xADD6, 0x0000, 0x6224, 0x0077 }, // 0x00000884
   { 0x0002, 0x0062, 0x0065, 0x0066, 0xADD6, 0x0000, 0x6224, 0x0077 }, // 0x00000894
   { 0x0000, 0x0067, 0x0066, 0x0065, 0x6212, 0x0000, 0x5240, 0xFFC3 }, // 0x000008A4
   { 0x0000, 0x0067, 0x0065, 0x0068, 0x6212, 0x0000, 0x5240, 0xFFC3 }, // 0x000008B4
   { 0x0000, 0x0069, 0x006A, 0x006B, 0x0000, 0x0000, 0x7FFF, 0xFFE5 }, // 0x000008C4
   { 0x0000, 0x0069, 0x006B, 0x006C, 0x0000, 0x0000, 0x7FFF, 0xFFE5 }, // 0x000008D4
   { 0x0002, 0x006D, 0x006E, 0x006F, 0x7DD2, 0x0000, 0x1781, 0x0068 }, // 0x000008E4
   { 0x0000, 0x006D, 0x006F, 0x0070, 0x7DD2, 0x0000, 0x1781, 0x0068 }, // 0x000008F4
   { 0x0000, 0x0071, 0x0072, 0x006F, 0x1776, 0x0000, 0x822C, 0xFFD3 }, // 0x00000904
   { 0x0002, 0x0071, 0x006F, 0x006E, 0x1776, 0x0000, 0x822C, 0xFFD3 }, // 0x00000914
   { 0x0000, 0x0070, 0x0073, 0x0074, 0xEA9C, 0x0000, 0x7E32, 0xFFD2 }, // 0x00000924
   { 0x0000, 0x0070, 0x0074, 0x006D, 0xEA9C, 0x0000, 0x7E32, 0xFFD2 }, // 0x00000934

}; 

Vec3s pr_kokiri_house_2_sceneCollisionHeader0x000C04_vtx_00000944[] = {
   { 0, 120, 170 }, // 0x00000944
   { 120, 120, 120 }, // 0x0000094A
   { 120, 0, 120 }, // 0x00000950
   { 0, 0, 170 }, // 0x00000956
   { 170, 120, 0 }, // 0x0000095C
   { 170, 0, 0 }, // 0x00000962
   { 120, 120, -119 }, // 0x00000968
   { 39, 120, -153 }, // 0x0000096E
   { 39, 0, -153 }, // 0x00000974
   { 120, 0, -119 }, // 0x0000097A
   { -38, 120, -153 }, // 0x00000980
   { -119, 120, -119 }, // 0x00000986
   { -119, 0, -119 }, // 0x0000098C
   { -38, 0, -153 }, // 0x00000992
   { -119, 120, 120 }, // 0x00000998
   { -169, 120, 0 }, // 0x0000099E
   { -119, 0, 120 }, // 0x000009A4
   { 0, 0, -169 }, // 0x000009AA
   { -169, 0, 0 }, // 0x000009B0
   { 39, 0, -199 }, // 0x000009B6
   { -38, 0, -199 }, // 0x000009BC
   { 39, 0, -279 }, // 0x000009C2
   { -38, 0, -279 }, // 0x000009C8
   { -38, 120, -279 }, // 0x000009CE
   { 39, 120, -279 }, // 0x000009D4
   { 28, 0, 28 }, // 0x000009DA
   { 40, 0, 0 }, // 0x000009E0
   { 40, 120, 0 }, // 0x000009E6
   { 28, 120, 28 }, // 0x000009EC
   { 0, 0, 40 }, // 0x000009F2
   { 0, 120, 40 }, // 0x000009F8
   { -27, 0, 28 }, // 0x000009FE
   { -27, 120, 28 }, // 0x00000A04
   { -39, 0, 0 }, // 0x00000A0A
   { -39, 120, 0 }, // 0x00000A10
   { 28, 0, -27 }, // 0x00000A16
   { 0, 0, -39 }, // 0x00000A1C
   { -27, 0, -27 }, // 0x00000A22
   { 28, 120, -27 }, // 0x00000A28
   { 0, 120, -39 }, // 0x00000A2E
   { -27, 120, -27 }, // 0x00000A34
   { -5, 0, 126 }, // 0x00000A3A
   { 0, 0, 129 }, // 0x00000A40
   { 0, 12, 129 }, // 0x00000A46
   { -5, 12, 126 }, // 0x00000A4C
   { 6, 0, 126 }, // 0x00000A52
   { 6, 12, 126 }, // 0x00000A58
   { 9, 0, 120 }, // 0x00000A5E
   { 9, 12, 120 }, // 0x00000A64
   { -8, 0, 120 }, // 0x00000A6A
   { -8, 12, 120 }, // 0x00000A70
   { 6, 12, 114 }, // 0x00000A76
   { 6, 0, 114 }, // 0x00000A7C
   { 0, 0, 111 }, // 0x00000A82
   { -5, 0, 114 }, // 0x00000A88
   { 0, 12, 111 }, // 0x00000A8E
   { -5, 12, 114 }, // 0x00000A94
   { -98, 0, 86 }, // 0x00000A9A
   { -92, 0, 89 }, // 0x00000AA0
   { -92, 12, 89 }, // 0x00000AA6
   { -98, 12, 86 }, // 0x00000AAC
   { -85, 0, 86 }, // 0x00000AB2
   { -85, 12, 86 }, // 0x00000AB8
   { -83, 0, 80 }, // 0x00000ABE
   { -83, 12, 80 }, // 0x00000AC4
   { -101, 0, 80 }, // 0x00000ACA
   { -101, 12, 80 }, // 0x00000AD0
   { -85, 12, 74 }, // 0x00000AD6
   { -85, 0, 74 }, // 0x00000ADC
   { -92, 0, 71 }, // 0x00000AE2
   { -98, 0, 74 }, // 0x00000AE8
   { -92, 12, 71 }, // 0x00000AEE
   { -98, 12, 74 }, // 0x00000AF4
   { 79, 120, 75 }, // 0x00000AFA
   { 79, 0, 75 }, // 0x00000B00
   { 135, 0, 96 }, // 0x00000B06
   { 135, 120, 96 }, // 0x00000B0C
   { 165, 0, 13 }, // 0x00000B12
   { 109, 0, -7 }, // 0x00000B18
   { 109, 120, -7 }, // 0x00000B1E
   { 165, 120, 13 }, // 0x00000B24
   { -50, 0, 133 }, // 0x00000B2A
   { -33, 0, 126 }, // 0x00000B30
   { -33, 23, 126 }, // 0x00000B36
   { -50, 23, 133 }, // 0x00000B3C
   { -67, 0, 126 }, // 0x00000B42
   { -67, 23, 126 }, // 0x00000B48
   { -26, 0, 109 }, // 0x00000B4E
   { -26, 23, 109 }, // 0x00000B54
   { -67, 23, 92 }, // 0x00000B5A
   { -74, 23, 109 }, // 0x00000B60
   { -33, 23, 92 }, // 0x00000B66
   { -50, 23, 85 }, // 0x00000B6C
   { -33, 0, 92 }, // 0x00000B72
   { -50, 0, 85 }, // 0x00000B78
   { -67, 0, 92 }, // 0x00000B7E
   { -74, 0, 109 }, // 0x00000B84
   { 37, 0, -124 }, // 0x00000B8A
   { 37, 120, -124 }, // 0x00000B90
   { 89, 120, -186 }, // 0x00000B96
   { 89, 0, -186 }, // 0x00000B9C
   { 123, 0, -52 }, // 0x00000BA2
   { 123, 120, -52 }, // 0x00000BA8
   { 175, 120, -114 }, // 0x00000BAE
   { 175, 0, -114 }, // 0x00000BB4
   { -126, 119, 27 }, // 0x00000BBA
   { -166, 119, 27 }, // 0x00000BC0
   { -166, 0, 27 }, // 0x00000BC6
   { -126, 0, 27 }, // 0x00000BCC
   { -111, 0, 28 }, // 0x00000BD2
   { -94, 0, -63 }, // 0x00000BD8
   { -94, 120, -63 }, // 0x00000BDE
   { -111, 120, 28 }, // 0x00000BE4
   { -153, 0, -74 }, // 0x00000BEA
   { -153, 120, -74 }, // 0x00000BF0
   { -170, 120, 18 }, // 0x00000BF6
   { -170, 0, 18 }, // 0x00000BFC
}; 

CollisionHeader pr_kokiri_house_2_sceneCollisionHeader0x000C04 = { -170, -11, -279, 175, 120, 170, 117, pr_kokiri_house_2_sceneCollisionHeader0x000C04_vtx_00000944, 134, pr_kokiri_house_2_sceneCollisionHeader0x000C04_polygons_000000E4, pr_kokiri_house_2_sceneCollisionHeader0x000C04_polygonTypes_000000CC, &pr_kokiri_house_2_sceneCollisionHeader0x000C04_camDataList_000000B4, 0, 0 }; 


