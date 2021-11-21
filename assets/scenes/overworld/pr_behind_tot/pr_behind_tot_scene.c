#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_behind_tot_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_behind_tot_scene.h"


static SCmdRoomList pr_behind_tot_sceneSet0000Cmd00;
static SCmdColHeader pr_behind_tot_sceneSet0000Cmd01;
static SCmdEntranceList pr_behind_tot_sceneSet0000Cmd02;
static SCmdSpawnList pr_behind_tot_sceneSet0000Cmd03;
static SCmdSkyboxSettings pr_behind_tot_sceneSet0000Cmd04;
static SCmdLightSettingList pr_behind_tot_sceneSet0000Cmd05;
static SCmdEndMarker pr_behind_tot_sceneSet0000Cmd06;

static SCmdRoomList pr_behind_tot_sceneSet0000Cmd00 = {  0x04, 0x01, (u32)&pr_behind_tot_sceneRoomList0x000048 }; // 0x0000

// This command is added!
static SCmdMiscSettings pr_i_shop_sceneSet0000Cmd03 = {  0x19, 0x40, 0x0000000E };

static SCmdColHeader pr_behind_tot_sceneSet0000Cmd01 = {  0x03, 0x00, (u32)&pr_behind_tot_sceneCollisionHeader0x0007C8 }; // 0x0008

static SCmdEntranceList pr_behind_tot_sceneSet0000Cmd02 = {  0x06, 0x00, (u32)&pr_behind_tot_sceneEntranceList0x000050 }; // 0x0010

static SCmdSpawnList pr_behind_tot_sceneSet0000Cmd03 = {  0x00, 0x01, (u32)&pr_behind_tot_sceneStartPositionList0x000038 }; // 0x0018

static SCmdSkyboxSettings pr_behind_tot_sceneSet0000Cmd04 = {  0x11, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x01 }; // 0x0020, {  0x11, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x01 }; 

static SCmdLightSettingList pr_behind_tot_sceneSet0000Cmd05 = {  0x0F, 1, (u32)&pr_behind_tot_sceneLightSettings0x000054 }; // 0x0028

static SCmdEndMarker pr_behind_tot_sceneSet0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

ActorEntry pr_behind_tot_sceneStartPositionList0x000038[] = {
	{ ACTOR_PLAYER, 477, 0, 395, 0, 0, 0, 0xFF00 },

}; 

RomFile pr_behind_tot_sceneRoomList0x000048[] = {
	{ (u32)_pr_behind_tot_room_00SegmentRomStart, (u32)_pr_behind_tot_room_00SegmentRomEnd },

}; 

EntranceEntry pr_behind_tot_sceneEntranceList0x000050[2] = {
	{ 0x00, 0x00 }, //0x000050 
	{ 0x00, 0x00 }, //0x000052 

}; 

LightSettings pr_behind_tot_sceneLightSettings0x000054[1] = {
	{ 0x64, 0x64, 0x64, 0x50, 0x50, 0x50, 0xFF, 0xFF, 0xFF, 0xB0, 0xB0, 0xB0, 0x64, 0x64, 0x64, 0x4D, 0x52, 0x4A, 0x03E4, 0x3200 }, // 0x000054 

}; 

static u8 unaccounted_00006C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

Vec3s pr_behind_tot_sceneCollisionHeader0x0007C8_camPosData_00000070[3] = {
	{    720,     64,    600 }, // 0x00000070
	{  -3641, -24575,      0 }, // 0x00000076
	{   6000,      0,      0 }, // 0x0000007C

}; 

CamData pr_behind_tot_sceneCollisionHeader0x0007C8_camDataList_00000084[2] = {
	{ CAM_SET_PREREND1, 3, &pr_behind_tot_sceneCollisionHeader0x0007C8_camPosData_00000070[0] },
	{ 0x0000, 0, 0x00000000 },
}; 

u32 pr_behind_tot_sceneCollisionHeader0x0007C8_polygonTypes_00000094[] = {
   0x00000001, 0x000007C0,
   0x00000000, 0x000007C0,
}; 

CollisionPoly pr_behind_tot_sceneCollisionHeader0x0007C8_polygons_000000A4[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x7F5C, 0x0CBC, 0x0000, 0xFE5E }, // 0x000000A4
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x7F5C, 0x0CBC, 0x0000, 0xFE5E }, // 0x000000B4
   { 0x0000, 0x0003, 0x0002, 0x0004, 0x0000, 0x0CBC, 0x7F5C, 0x0254 }, // 0x000000C4
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x0000, 0x0CBC, 0x7F5C, 0x0254 }, // 0x000000D4
   { 0x0000, 0x0005, 0x0004, 0x0006, 0x7F5C, 0x0CBC, 0x0000, 0xFE72 }, // 0x000000E4
   { 0x0000, 0x0005, 0x0006, 0x0007, 0x7F5C, 0x0CBC, 0x0000, 0xFE72 }, // 0x000000F4
   { 0x0000, 0x0007, 0x0006, 0x0008, 0x0000, 0x0CBC, 0x80A4, 0xFFD9 }, // 0x00000104
   { 0x0000, 0x0007, 0x0008, 0x0009, 0x0000, 0x0CBC, 0x80A4, 0xFFD9 }, // 0x00000114
   { 0x0000, 0x0009, 0x0008, 0x000D, 0x7F5C, 0x0CBC, 0x0000, 0xFE5E }, // 0x00000124
   { 0x0000, 0x0009, 0x000D, 0x000C, 0x7F5C, 0x0CBC, 0x0000, 0xFE5E }, // 0x00000134
   { 0x0000, 0x000A, 0x000E, 0x000F, 0x0000, 0x0CBC, 0x7F5C, 0xFFB0 }, // 0x00000144
   { 0x0000, 0x000A, 0x000F, 0x0010, 0x0000, 0x0CBC, 0x7F5C, 0xFFB0 }, // 0x00000154
   { 0x0000, 0x000B, 0x0011, 0x000E, 0x80A4, 0x0CBC, 0x0000, 0x0117 }, // 0x00000164
   { 0x0000, 0x000B, 0x000E, 0x000A, 0x80A4, 0x0CBC, 0x0000, 0x0117 }, // 0x00000174
   { 0x0000, 0x000C, 0x000D, 0x0011, 0x0000, 0x0CBC, 0x7F5C, 0xFF9C }, // 0x00000184
   { 0x0000, 0x000C, 0x0011, 0x000B, 0x0000, 0x0CBC, 0x7F5C, 0xFF9C }, // 0x00000194
   { 0x0001, 0x0012, 0x0013, 0x0014, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001A4
   { 0x0001, 0x0012, 0x0014, 0x0015, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001B4
   { 0x0000, 0x0016, 0x0017, 0x0015, 0x0000, 0x0000, 0x8001, 0x0334 }, // 0x000001C4
   { 0x0000, 0x0016, 0x0015, 0x0014, 0x0000, 0x0000, 0x8001, 0x0334 }, // 0x000001D4
   { 0x0000, 0x0018, 0x0013, 0x0012, 0x0000, 0x0000, 0x7FFF, 0x0293 }, // 0x000001E4
   { 0x0000, 0x0018, 0x0012, 0x0019, 0x0000, 0x0000, 0x7FFF, 0x0293 }, // 0x000001F4
   { 0x0000, 0x0015, 0x0017, 0x0019, 0x8001, 0x0000, 0x0000, 0x035C }, // 0x00000204
   { 0x0000, 0x0015, 0x0019, 0x0012, 0x8001, 0x0000, 0x0000, 0x035C }, // 0x00000214
   { 0x0000, 0x0014, 0x0013, 0x0018, 0x7FFF, 0x0000, 0x0000, 0xFF60 }, // 0x00000224
   { 0x0000, 0x0014, 0x0018, 0x0016, 0x7FFF, 0x0000, 0x0000, 0xFF60 }, // 0x00000234
   { 0x0000, 0x001A, 0x001B, 0x001C, 0x0000, 0x0000, 0x7FFF, 0xFD77 }, // 0x00000244
   { 0x0000, 0x001A, 0x001C, 0x001D, 0x0000, 0x0000, 0x7FFF, 0xFD77 }, // 0x00000254
   { 0x0000, 0x001E, 0x001A, 0x001D, 0xA57E, 0x0000, 0x5A82, 0x0006 }, // 0x00000264
   { 0x0000, 0x001E, 0x001D, 0x001F, 0xA57E, 0x0000, 0x5A82, 0x0006 }, // 0x00000274
   { 0x0000, 0x001B, 0x0020, 0x0021, 0x5A82, 0x0000, 0x5A82, 0xFC36 }, // 0x00000284
   { 0x0000, 0x001B, 0x0021, 0x001C, 0x5A82, 0x0000, 0x5A82, 0xFC36 }, // 0x00000294
   { 0x0000, 0x0022, 0x001E, 0x001F, 0x8001, 0x0000, 0x0000, 0x0263 }, // 0x000002A4
   { 0x0000, 0x0022, 0x001F, 0x0023, 0x8001, 0x0000, 0x0000, 0x0263 }, // 0x000002B4
   { 0x0000, 0x0024, 0x0022, 0x0023, 0xA57E, 0x0000, 0xA57E, 0x032C }, // 0x000002C4
   { 0x0000, 0x0024, 0x0023, 0x0025, 0xA57E, 0x0000, 0xA57E, 0x032C }, // 0x000002D4
   { 0x0000, 0x0026, 0x0024, 0x0025, 0x0000, 0x0000, 0x8001, 0x01EB }, // 0x000002E4
   { 0x0000, 0x0026, 0x0025, 0x0027, 0x0000, 0x0000, 0x8001, 0x01EB }, // 0x000002F4
   { 0x0000, 0x0020, 0x0028, 0x0029, 0x7FFF, 0x0000, 0x0000, 0xFCFF }, // 0x00000304
   { 0x0000, 0x0020, 0x0029, 0x0021, 0x7FFF, 0x0000, 0x0000, 0xFCFF }, // 0x00000314
   { 0x0000, 0x0028, 0x0026, 0x0027, 0x5A82, 0x0000, 0xA57E, 0xFF5C }, // 0x00000324
   { 0x0000, 0x0028, 0x0027, 0x0029, 0x5A82, 0x0000, 0xA57E, 0xFF5C }, // 0x00000334
   { 0x0000, 0x002A, 0x002B, 0x002C, 0x0000, 0x5EFC, 0x55CB, 0xFE38 }, // 0x00000344
   { 0x0000, 0x002A, 0x002C, 0x002D, 0x0000, 0x5EFC, 0x55CB, 0xFE38 }, // 0x00000354
   { 0x0000, 0x002E, 0x002F, 0x002B, 0xC375, 0x5F24, 0x3C8B, 0xFFEF }, // 0x00000364
   { 0x0000, 0x002E, 0x002B, 0x002A, 0xC375, 0x5F24, 0x3C8B, 0xFFEF }, // 0x00000374
   { 0x0000, 0x002D, 0x002C, 0x0030, 0x3C8B, 0x5F24, 0x3C8B, 0xFD62 }, // 0x00000384
   { 0x0000, 0x002D, 0x0030, 0x0031, 0x3C8B, 0x5F24, 0x3C8B, 0xFD62 }, // 0x00000394
   { 0x0000, 0x0032, 0x0033, 0x002F, 0xAA35, 0x5EFC, 0x0000, 0x0185 }, // 0x000003A4
   { 0x0000, 0x0032, 0x002F, 0x002E, 0xAA35, 0x5EFC, 0x0000, 0x0185 }, // 0x000003B4
   { 0x0000, 0x0034, 0x0035, 0x0033, 0xC375, 0x5F24, 0xC375, 0x020A }, // 0x000003C4
   { 0x0000, 0x0034, 0x0033, 0x0032, 0xC375, 0x5F24, 0xC375, 0x020A }, // 0x000003D4
   { 0x0000, 0x0036, 0x0037, 0x0035, 0x0000, 0x5EFC, 0xAA35, 0x0134 }, // 0x000003E4
   { 0x0000, 0x0036, 0x0035, 0x0034, 0x0000, 0x5EFC, 0xAA35, 0x0134 }, // 0x000003F4
   { 0x0000, 0x0031, 0x0030, 0x0038, 0x55CB, 0x5EFC, 0x0000, 0xFDE8 }, // 0x00000404
   { 0x0000, 0x0031, 0x0038, 0x0039, 0x55CB, 0x5EFC, 0x0000, 0xFDE8 }, // 0x00000414
   { 0x0000, 0x0039, 0x0038, 0x0037, 0x3C8B, 0x5F24, 0xC375, 0xFF7D }, // 0x00000424
   { 0x0000, 0x0039, 0x0037, 0x0036, 0x3C8B, 0x5F24, 0xC375, 0xFF7D }, // 0x00000434
   { 0x0000, 0x003A, 0x003B, 0x003C, 0x8001, 0x0000, 0x0000, 0x0212 }, // 0x00000444
   { 0x0000, 0x003A, 0x003C, 0x003D, 0x8001, 0x0000, 0x0000, 0x0212 }, // 0x00000454
   { 0x0000, 0x003D, 0x003E, 0x003F, 0x0000, 0x0000, 0x7FFF, 0xFFE2 }, // 0x00000464
   { 0x0000, 0x003D, 0x003F, 0x003A, 0x0000, 0x0000, 0x7FFF, 0xFFE2 }, // 0x00000474
   { 0x0000, 0x0040, 0x0041, 0x003C, 0x0000, 0x0000, 0x8001, 0x000A }, // 0x00000484
   { 0x0000, 0x0040, 0x003C, 0x003B, 0x0000, 0x0000, 0x8001, 0x000A }, // 0x00000494
   { 0x0000, 0x0041, 0x0040, 0x003F, 0x7FFF, 0x0000, 0x0000, 0xFDE4 }, // 0x000004A4
   { 0x0000, 0x0041, 0x003F, 0x003E, 0x7FFF, 0x0000, 0x0000, 0xFDE4 }, // 0x000004B4
   { 0x0000, 0x0042, 0x0043, 0x0044, 0x8001, 0x0000, 0x0000, 0x02E4 }, // 0x000004C4
   { 0x0000, 0x0042, 0x0044, 0x0045, 0x8001, 0x0000, 0x0000, 0x02E4 }, // 0x000004D4
   { 0x0000, 0x0045, 0x0046, 0x0047, 0x0000, 0x0000, 0x7FFF, 0xFFE2 }, // 0x000004E4
   { 0x0000, 0x0045, 0x0047, 0x0042, 0x0000, 0x0000, 0x7FFF, 0xFFE2 }, // 0x000004F4
   { 0x0000, 0x0048, 0x0049, 0x0044, 0x0000, 0x0000, 0x8001, 0x000A }, // 0x00000504
   { 0x0000, 0x0048, 0x0044, 0x0043, 0x0000, 0x0000, 0x8001, 0x000A }, // 0x00000514
   { 0x0000, 0x0049, 0x0048, 0x0047, 0x7FFF, 0x0000, 0x0000, 0xFD12 }, // 0x00000524
   { 0x0000, 0x0049, 0x0047, 0x0046, 0x7FFF, 0x0000, 0x0000, 0xFD12 }, // 0x00000534
   { 0x0000, 0x004A, 0x004B, 0x004C, 0x0000, 0x0000, 0x8001, 0x027C }, // 0x00000544
   { 0x0000, 0x004A, 0x004C, 0x004D, 0x0000, 0x0000, 0x8001, 0x027C }, // 0x00000554
   { 0x0000, 0x004D, 0x004C, 0x004E, 0x5A82, 0x0000, 0xA57E, 0xFF93 }, // 0x00000564
   { 0x0000, 0x004D, 0x004E, 0x004F, 0x5A82, 0x0000, 0xA57E, 0xFF93 }, // 0x00000574
   { 0x0000, 0x0050, 0x0051, 0x0052, 0x0000, 0x0000, 0x7FFF, 0xFD53 }, // 0x00000584
   { 0x0000, 0x0050, 0x0052, 0x0053, 0x0000, 0x0000, 0x7FFF, 0xFD53 }, // 0x00000594
   { 0x0000, 0x0053, 0x0052, 0x0054, 0xA48C, 0x0000, 0x598D, 0x0047 }, // 0x000005A4
   { 0x0000, 0x0053, 0x0054, 0x0055, 0xA48C, 0x0000, 0x598D, 0x0047 }, // 0x000005B4

}; 

Vec3s pr_behind_tot_sceneCollisionHeader0x0007C8_vtx_000005C4[] = {
   { 420, 0, -739 }, // 0x000005C4
   { 400, 200, -719 }, // 0x000005CA
   { 400, 200, -619 }, // 0x000005D0
   { 420, 0, -599 }, // 0x000005D6
   { 380, 200, -619 }, // 0x000005DC
   { 400, 0, -599 }, // 0x000005E2
   { 380, 200, -19 }, // 0x000005E8
   { 400, 0, -39 }, // 0x000005EE
   { 400, 200, -19 }, // 0x000005F4
   { 420, 0, -39 }, // 0x000005FA
   { 280, 0, 80 }, // 0x00000600
   { 280, 0, 100 }, // 0x00000606
   { 420, 0, 100 }, // 0x0000060C
   { 400, 200, 80 }, // 0x00000612
   { 300, 200, 60 }, // 0x00000618
   { -299, 200, 60 }, // 0x0000061E
   { -279, 0, 80 }, // 0x00000624
   { 300, 200, 80 }, // 0x0000062A
   { 860, 0, -659 }, // 0x00000630
   { 160, 0, -659 }, // 0x00000636
   { 160, 0, 820 }, // 0x0000063C
   { 860, 0, 820 }, // 0x00000642
   { 160, 400, 820 }, // 0x00000648
   { 860, 400, 820 }, // 0x0000064E
   { 160, 400, -659 }, // 0x00000654
   { 860, 400, -659 }, // 0x0000065A
   { 657, -2, 649 }, // 0x00000660
   { 723, -2, 649 }, // 0x00000666
   { 723, 105, 649 }, // 0x0000066C
   { 657, 105, 649 }, // 0x00000672
   { 611, -2, 603 }, // 0x00000678
   { 611, 105, 603 }, // 0x0000067E
   { 769, -2, 603 }, // 0x00000684
   { 769, 105, 603 }, // 0x0000068A
   { 611, -2, 537 }, // 0x00000690
   { 611, 105, 537 }, // 0x00000696
   { 657, -2, 491 }, // 0x0000069C
   { 657, 105, 491 }, // 0x000006A2
   { 723, -2, 491 }, // 0x000006A8
   { 723, 105, 491 }, // 0x000006AE
   { 769, -2, 537 }, // 0x000006B4
   { 769, 105, 537 }, // 0x000006BA
   { 657, 28, 649 }, // 0x000006C0
   { 644, 0, 680 }, // 0x000006C6
   { 736, 0, 680 }, // 0x000006CC
   { 723, 28, 649 }, // 0x000006D2
   { 611, 28, 603 }, // 0x000006D8
   { 580, 0, 616 }, // 0x000006DE
   { 800, 0, 616 }, // 0x000006E4
   { 769, 28, 603 }, // 0x000006EA
   { 611, 28, 537 }, // 0x000006F0
   { 580, 0, 524 }, // 0x000006F6
   { 657, 28, 491 }, // 0x000006FC
   { 644, 0, 460 }, // 0x00000702
   { 723, 28, 491 }, // 0x00000708
   { 736, 0, 460 }, // 0x0000070E
   { 800, 0, 524 }, // 0x00000714
   { 769, 28, 537 }, // 0x0000071A
   { 530, 120, 30 }, // 0x00000720
   { 530, 120, 10 }, // 0x00000726
   { 530, 0, 10 }, // 0x0000072C
   { 530, 0, 30 }, // 0x00000732
   { 540, 0, 30 }, // 0x00000738
   { 540, 120, 30 }, // 0x0000073E
   { 540, 120, 10 }, // 0x00000744
   { 540, 0, 10 }, // 0x0000074A
   { 740, 120, 30 }, // 0x00000750
   { 740, 120, 10 }, // 0x00000756
   { 740, 0, 10 }, // 0x0000075C
   { 740, 0, 30 }, // 0x00000762
   { 750, 0, 30 }, // 0x00000768
   { 750, 120, 30 }, // 0x0000076E
   { 750, 120, 10 }, // 0x00000774
   { 750, 0, 10 }, // 0x0000077A
   { 980, 66, 636 }, // 0x00000780
   { 980, 0, 636 }, // 0x00000786
   { 790, 0, 636 }, // 0x0000078C
   { 790, 66, 636 }, // 0x00000792
   { 757, 0, 603 }, // 0x00000798
   { 757, 66, 603 }, // 0x0000079E
   { 980, 0, 685 }, // 0x000007A4
   { 980, 66, 685 }, // 0x000007AA
   { 770, 66, 685 }, // 0x000007B0
   { 770, 0, 685 }, // 0x000007B6
   { 723, 66, 637 }, // 0x000007BC
   { 723, 0, 637 }, // 0x000007C2
}; 

CollisionHeader pr_behind_tot_sceneCollisionHeader0x0007C8 = { -599, -2, -799, 1000, 400, 820, 86, pr_behind_tot_sceneCollisionHeader0x0007C8_vtx_000005C4, 82, pr_behind_tot_sceneCollisionHeader0x0007C8_polygons_000000A4, pr_behind_tot_sceneCollisionHeader0x0007C8_polygonTypes_00000094, &pr_behind_tot_sceneCollisionHeader0x0007C8_camDataList_00000084, 0, 0 }; 

static u32 pad7F4 = 0;
static u32 pad7F8 = 0;
static u32 pad7FC = 0;

