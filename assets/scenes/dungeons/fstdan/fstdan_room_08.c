#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fstdan_room_08.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fstdan_scene.h"


static SCmdEchoSettings fstdan_room_08Set0000Cmd00;
static SCmdRoomBehavior fstdan_room_08Set0000Cmd01;
static SCmdSkyboxDisables fstdan_room_08Set0000Cmd02;
static SCmdMesh fstdan_room_08Set0000Cmd03;
static SCmdObjectList fstdan_room_08Set0000Cmd04;
static SCmdEndMarker fstdan_room_08Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx fstdan_room_08Vtx_000060[8];
static Vtx fstdan_room_08Vtx_0000E0[8];
static Vtx fstdan_room_08Vtx_000160[4];
static Vtx fstdan_room_08Vtx_0001A0[8];
static Vtx fstdan_room_08Vtx_000220[8];
static Vtx fstdan_room_08Vtx_0002A0[16];
static Vtx fstdan_room_08Vtx_0003A0[15];
static Vtx fstdan_room_08Vtx_000490[7];
static Vtx fstdan_room_08Vtx_000500[8];
static Vtx fstdan_room_08Vtx_000580[8];
static Vtx fstdan_room_08Vtx_000600[4];
static Vtx fstdan_room_08Vtx_000640[8];
static Vtx fstdan_room_08Vtx_0006C0[14];
static Vtx fstdan_room_08Vtx_0007A0[16];
static Vtx fstdan_room_08Vtx_0008A0[5];
static Vtx fstdan_room_08Vtx_0008F0[1];
static Vtx fstdan_room_08Vtx_000900[7];
static Vtx fstdan_room_08Vtx_000970[3];
static Vtx fstdan_room_08Vtx_0009A0[16];
static Vtx fstdan_room_08Vtx_000AA0[5];
static Vtx fstdan_room_08Vtx_000AF0[1];
static Vtx fstdan_room_08Vtx_000B00[11];
static Vtx fstdan_room_08Vtx_000BB0[3];
static Vtx fstdan_room_08Vtx_000BE0[16];
static Vtx fstdan_room_08Vtx_000CE0[4];
static Vtx fstdan_room_08Vtx_000D20[3];
static Vtx fstdan_room_08Vtx_000D50[12];
static Vtx fstdan_room_08Vtx_000E10[9];
static Vtx fstdan_room_08Vtx_000EA0[16];
static Vtx fstdan_room_08Vtx_000FA0[8];
static Vtx fstdan_room_08Vtx_001020[16];
static Vtx fstdan_room_08Vtx_005B20[6];
static Vtx fstdan_room_08Vtx_005B80[12];
static Vtx fstdan_room_08Vtx_005C40[4];
static Vtx fstdan_room_08Vtx_005C80[8];
static Vtx fstdan_room_08Vtx_0066E8[8];
static Vtx fstdan_room_08Vtx_006768[14];
static Vtx fstdan_room_08Vtx_006848[4];
static Vtx fstdan_room_08Vtx_006888[8];
static Vtx fstdan_room_08Vtx_0072F0[8];
static Vtx fstdan_room_08Vtx_007370[14];
static Vtx fstdan_room_08Vtx_007450[4];
static Vtx fstdan_room_08Vtx_007490[8];
static Vtx fstdan_room_08Vtx_007F20[12];

static SCmdEchoSettings fstdan_room_08Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fstdan_room_08Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fstdan_room_08Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x00 }; // 0x0010

static SCmdMesh fstdan_room_08Set0000Cmd03 = {  0x0A, 0, (u32)&fstdan_room_08MeshHeader0x000040 }; // 0x0018

static SCmdObjectList fstdan_room_08Set0000Cmd04 = {  0x0B, 0x03, (u32)fstdan_room_08ObjectList0x000030 }; // 0x0020

static SCmdEndMarker fstdan_room_08Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 fstdan_room_08ObjectList0x000030[3] = {
	OBJECT_IK, // manual edit, was originally beta OBJECT_IRONKNACK
	OBJECT_SKELETON,
	OBJECT_WALLMASTER,
}; 

static u8 unaccounted_000038[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 fstdan_room_08MeshHeader0x000040 = { { 0 }, 0x01, (u32)&fstdan_room_08MeshDListEntry0x00004C, (u32)&(fstdan_room_08MeshDListEntry0x00004C) + sizeof(fstdan_room_08MeshDListEntry0x00004C) }; 

MeshEntry0 fstdan_room_08MeshDListEntry0x00004C[1] = {
	{ (u32)fstdan_room_08Dlist0x007EF8, (u32)fstdan_room_08Dlist0x0088A8 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx fstdan_room_08Vtx_000060[8] = {
    VTX(-450, 110, -236, 2048, -1791, 86, 58, 58, 255),
    VTX(-450, 0, -236, 2048, 1024, 86, 58, 58, 255),
    VTX(-437, 0, -239, 2304, 1024, 86, 58, 58, 255),
    VTX(-437, 120, -239, 2304, -2047, 86, 58, 58, 255),
    VTX(-437, 120, 240, 2304, -2047, 86, 58, 58, 255),
    VTX(-437, 0, 240, 2304, 1024, 86, 58, 58, 255),
    VTX(-450, 0, 237, 2048, 1024, 86, 58, 58, 255),
    VTX(-450, 110, 237, 2048, -1791, 86, 58, 58, 255),
}; 

static Vtx fstdan_room_08Vtx_0000E0[8] = {
    VTX(-523, 120, 290, -255, -2047, 122, 47, 32, 255),
    VTX(-520, 110, 277, 0, -1791, 122, 47, 32, 255),
    VTX(-520, 0, 277, 0, 1024, 122, 47, 32, 255),
    VTX(-523, 0, 290, -255, 1024, 122, 47, 32, 255),
    VTX(-523, 0, -289, -255, 1024, 122, 47, 32, 255),
    VTX(-520, 0, -276, 0, 1024, 122, 47, 32, 255),
    VTX(-520, 110, -276, 0, -1791, 122, 47, 32, 255),
    VTX(-523, 120, -289, -255, -2047, 122, 47, 32, 255),
}; 

static Vtx fstdan_room_08Vtx_000160[4] = {
    VTX(-759, 100, 60, 0, 1117, 17, 17, 17, 255),
    VTX(-779, 100, 60, -204, 1117, 17, 17, 17, 255),
    VTX(-779, 100, -59, -204, 1117, 17, 17, 17, 255),
    VTX(-759, 100, -59, 0, 1117, 17, 17, 17, 255),
}; 

static Vtx fstdan_room_08Vtx_0001A0[8] = {
    VTX(-496, 100, 298, 512, 1024, 17, 17, 17, 255),
    VTX(-506, 100, 280, 1024, 1024, 17, 17, 17, 255),
    VTX(-454, 100, 250, 1024, -1023, 17, 17, 17, 255),
    VTX(-444, 100, 268, 512, -1023, 17, 17, 17, 255),
    VTX(-444, 100, -267, 512, -1023, 17, 17, 17, 255),
    VTX(-454, 100, -249, 1024, -1023, 17, 17, 17, 255),
    VTX(-506, 100, -279, 1024, 1024, 17, 17, 17, 255),
    VTX(-496, 100, -297, 512, 1024, 17, 17, 17, 255),
}; 

static Vtx fstdan_room_08Vtx_000220[8] = {
    VTX(-759, 0, 60, 0, 0, 34, 34, 34, 255),
    VTX(-779, 0, 60, -204, 0, 34, 34, 34, 255),
    VTX(-779, 100, 60, -204, 1117, 34, 34, 34, 255),
    VTX(-759, 100, 60, 0, 1117, 34, 34, 34, 255),
    VTX(-759, 100, -59, 0, 1117, 34, 34, 34, 255),
    VTX(-779, 100, -59, -204, 1117, 34, 34, 34, 255),
    VTX(-779, 0, -59, -204, 0, 34, 34, 34, 255),
    VTX(-759, 0, -59, 0, 0, 34, 34, 34, 255),
}; 

static Vtx fstdan_room_08Vtx_0002A0[16] = {
    VTX(-444, 100, 268, 512, 2560, 34, 34, 34, 255),
    VTX(-454, 100, 250, 0, 2560, 34, 34, 34, 255),
    VTX(-454, 0, 250, 0, 0, 34, 34, 34, 255),
    VTX(-444, 0, 268, 512, 0, 34, 34, 34, 255),
    VTX(-444, 0, -267, 512, 0, 34, 34, 34, 255),
    VTX(-454, 0, -249, 0, 0, 34, 34, 34, 255),
    VTX(-454, 100, -249, 0, 2560, 34, 34, 34, 255),
    VTX(-444, 100, -267, 512, 2560, 34, 34, 34, 255),
    VTX(-496, 100, -297, 512, 2560, 34, 34, 34, 255),
    VTX(-506, 100, -279, 0, 2560, 34, 34, 34, 255),
    VTX(-506, 0, -279, 0, 0, 34, 34, 34, 255),
    VTX(-496, 0, -297, 512, 0, 34, 34, 34, 255),
    VTX(-496, 0, 298, 512, 0, 34, 34, 34, 255),
    VTX(-506, 0, 280, 0, 0, 34, 34, 34, 255),
    VTX(-506, 100, 280, 0, 2560, 34, 34, 34, 255),
    VTX(-496, 100, 298, 512, 2560, 34, 34, 34, 255),
}; 

static Vtx fstdan_room_08Vtx_0003A0[15] = {
    VTX(-496, 0, -297, 512, -1023, 51, 51, 51, 255),
    VTX(-506, 0, -279, 1024, -1023, 51, 51, 51, 255),
    VTX(-454, 0, -249, 1024, 1024, 51, 51, 51, 255),
    VTX(-444, 0, -267, 512, 1024, 51, 51, 51, 255),
    VTX(-506, 100, -279, 256, -1535, 51, 51, 51, 255),
    VTX(-520, 110, -276, 0, -1791, 51, 51, 51, 255),
    VTX(-520, 0, -276, 0, 1024, 51, 51, 51, 255),
    VTX(-506, 0, -279, 256, 1024, 51, 51, 51, 255),
    VTX(-450, 110, -236, 2048, -1791, 51, 51, 51, 255),
    VTX(-437, 120, -239, 2304, -2047, 51, 51, 51, 255),
    VTX(-523, 120, -289, -255, -2047, 51, 51, 51, 255),
    VTX(-444, 0, 268, 512, 1024, 51, 51, 51, 255),
    VTX(-454, 0, 250, 1024, 1024, 51, 51, 51, 255),
    VTX(-506, 0, 280, 1024, -1023, 51, 51, 51, 255),
    VTX(-496, 0, 298, 512, -1023, 51, 51, 51, 255),
}; 

static Vtx fstdan_room_08Vtx_000490[7] = {
    VTX(-523, 120, 290, -255, -2047, 51, 51, 51, 255),
    VTX(-506, 0, 280, 256, 1024, 51, 51, 51, 255),
    VTX(-437, 120, 240, 2304, -2047, 51, 51, 51, 255),
    VTX(-450, 110, 237, 2048, -1791, 51, 51, 51, 255),
    VTX(-520, 110, 277, 0, -1791, 51, 51, 51, 255),
    VTX(-520, 0, 277, 0, 1024, 51, 51, 51, 255),
    VTX(-506, 100, 280, 256, -1535, 51, 51, 51, 255),
}; 

static Vtx fstdan_room_08Vtx_000500[8] = {
    VTX(-520, 110, 277, 0, -1791, 68, 68, 68, 255),
    VTX(-450, 110, 237, 2048, -1791, 68, 68, 68, 255),
    VTX(-454, 100, 250, 1792, -1535, 68, 68, 68, 255),
    VTX(-506, 100, 280, 256, -1535, 68, 68, 68, 255),
    VTX(-506, 100, -279, 256, -1535, 68, 68, 68, 255),
    VTX(-454, 100, -249, 1792, -1535, 68, 68, 68, 255),
    VTX(-450, 110, -236, 2048, -1791, 68, 68, 68, 255),
    VTX(-520, 110, -276, 0, -1791, 68, 68, 68, 255),
}; 

static Vtx fstdan_room_08Vtx_000580[8] = {
    VTX(-454, 100, -249, 1792, -1535, 102, 102, 102, 255),
    VTX(-454, 0, -249, 1792, 1024, 102, 102, 102, 255),
    VTX(-450, 0, -236, 2048, 1024, 102, 102, 102, 255),
    VTX(-450, 110, -236, 2048, -1791, 102, 102, 102, 255),
    VTX(-450, 110, 237, 2048, -1791, 102, 102, 102, 255),
    VTX(-450, 0, 237, 2048, 1024, 102, 102, 102, 255),
    VTX(-454, 0, 250, 1792, 1024, 102, 102, 102, 255),
    VTX(-454, 100, 250, 1792, -1535, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_08Vtx_000600[4] = {
    VTX(-759, 100, 60, 614, 931, 204, 204, 204, 255),
    VTX(-759, 100, -59, -613, 931, 204, 204, 204, 255),
    VTX(-749, 110, -69, -716, 1024, 204, 204, 204, 255),
    VTX(-749, 110, 70, 717, 1024, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_08Vtx_000640[8] = {
    VTX(-759, 100, -59, -613, 931, 221, 221, 221, 255),
    VTX(-759, 0, -59, -613, 0, 221, 221, 221, 255),
    VTX(-749, 0, -69, -716, 0, 221, 221, 221, 255),
    VTX(-749, 110, -69, -716, 1024, 221, 221, 221, 255),
    VTX(-759, 100, 60, 614, 931, 221, 221, 221, 255),
    VTX(-749, 110, 70, 717, 1024, 221, 221, 221, 255),
    VTX(-749, 0, 70, 717, 0, 221, 221, 221, 255),
    VTX(-759, 0, 60, 614, 0, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_08Vtx_0006C0[14] = {
    VTX(-418, 0, -77, 360, 0, 255, 255, 255, 255),
    VTX(-418, 0, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-418, 220, 0, 1024, 2048, 255, 255, 255, 255),
    VTX(-418, 220, -77, 360, 2048, 255, 255, 255, 255),
    VTX(-418, 220, 78, 1688, 2048, 255, 255, 255, 255),
    VTX(-418, 0, 78, 1688, 0, 255, 255, 255, 255),
    VTX(-759, 0, 200, 2048, 0, 255, 255, 255, 255),
    VTX(-759, 220, 200, 2048, 2048, 255, 255, 255, 255),
    VTX(-567, 220, 315, 0, 2048, 255, 255, 255, 255),
    VTX(-567, 0, 315, 0, 0, 255, 255, 255, 255),
    VTX(-567, 0, -314, 0, 0, 255, 255, 255, 255),
    VTX(-567, 220, -314, 0, 2048, 255, 255, 255, 255),
    VTX(-759, 220, -199, 2048, 2048, 255, 255, 255, 255),
    VTX(-759, 0, -199, 2048, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_0007A0[16] = {
    VTX(-401, 0, 178, 1024, 0, 255, 255, 255, 255),
    VTX(-393, 0, 215, 631, 0, 255, 255, 255, 255),
    VTX(-393, 220, 215, 631, 2048, 255, 255, 255, 255),
    VTX(-401, 220, 178, 1024, 2048, 255, 255, 255, 255),
    VTX(-759, 220, 100, 1024, 2048, 255, 255, 255, 255),
    VTX(-759, 0, 100, 1024, 0, 255, 255, 255, 255),
    VTX(-759, 0, 80, 819, 0, 255, 255, 255, 255),
    VTX(-759, 220, 80, 819, 2048, 255, 255, 255, 255),
    VTX(-759, 220, -99, -1023, 2048, 255, 255, 255, 255),
    VTX(-759, 220, -79, -818, 2048, 255, 255, 255, 255),
    VTX(-759, 0, -79, -818, 0, 255, 255, 255, 255),
    VTX(-759, 0, -99, -1023, 0, 255, 255, 255, 255),
    VTX(-437, 0, 240, 512, 0, 255, 255, 255, 255),
    VTX(-437, 120, 240, 512, 1117, 255, 255, 255, 255),
    VTX(-393, 220, 215, 0, 2048, 255, 255, 255, 255),
    VTX(-393, 0, 215, 0, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_0008A0[5] = {
    VTX(-480, 120, 265, 1024, 1117, 255, 255, 255, 255),
    VTX(-480, 220, 265, 1024, 2048, 255, 255, 255, 255),
    VTX(-401, 220, -177, 1024, 2048, 255, 255, 255, 255),
    VTX(-393, 0, -214, 0, 0, 255, 255, 255, 255),
    VTX(-393, 220, -214, 0, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_0008F0[1] = {
    VTX(-749, 110, 70, 717, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000900[7] = {
    VTX(-393, 220, -214, 631, 2048, 255, 255, 255, 255),
    VTX(-393, 0, -214, 631, 0, 255, 255, 255, 255),
    VTX(-401, 0, -177, 1024, 0, 255, 255, 255, 255),
    VTX(-437, 120, -239, 512, 1117, 255, 255, 255, 255),
    VTX(-437, 0, -239, 512, 0, 255, 255, 255, 255),
    VTX(-480, 220, -264, 1024, 2048, 255, 255, 255, 255),
    VTX(-480, 120, -264, 1024, 1117, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000970[3] = {
    VTX(-749, 110, -69, -716, 1024, 255, 255, 255, 255),
    VTX(-749, 220, -69, -716, 2048, 255, 255, 255, 255),
    VTX(-749, 220, 70, 717, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_0009A0[16] = {
    VTX(-503, 220, -278, -1156, 1024, 255, 255, 255, 255),
    VTX(-393, 220, -214, -752, 1724, 255, 255, 255, 255),
    VTX(-409, 220, -139, -270, 1622, 255, 255, 255, 255),
    VTX(-503, 220, -139, -270, 1024, 255, 255, 255, 255),
    VTX(-503, 0, 279, -1156, 1024, 255, 255, 255, 255),
    VTX(-393, 0, 215, -752, 1724, 255, 255, 255, 255),
    VTX(-409, 0, 140, -270, 1622, 255, 255, 255, 255),
    VTX(-503, 0, 140, -270, 1024, 255, 255, 255, 255),
    VTX(-503, 0, -139, -270, 1024, 255, 255, 255, 255),
    VTX(-409, 0, -139, -270, 1622, 255, 255, 255, 255),
    VTX(-393, 0, -214, -752, 1724, 255, 255, 255, 255),
    VTX(-503, 0, -278, -1156, 1024, 255, 255, 255, 255),
    VTX(-759, 0, -59, 113, -615, 255, 255, 255, 255),
    VTX(-779, 0, -59, 113, -743, 255, 255, 255, 255),
    VTX(-779, 0, 0, 625, -743, 255, 255, 255, 255),
    VTX(-759, 0, 0, 625, -615, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000AA0[5] = {
    VTX(-759, 0, 0, 399, -615, 255, 255, 255, 255),
    VTX(-547, 0, 0, 399, 740, 255, 255, 255, 255),
    VTX(-779, 0, 0, 399, -743, 255, 255, 255, 255),
    VTX(-547, 220, 0, 399, 740, 255, 255, 255, 255),
    VTX(-759, 220, 0, 399, -615, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000AF0[1] = {
    VTX(-503, 220, 140, -270, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000B00[11] = {
    VTX(-759, 0, 98, 1024, -615, 255, 255, 255, 255),
    VTX(-547, 0, 98, 1024, 740, 255, 255, 255, 255),
    VTX(-547, 0, -97, 1024, 740, 255, 255, 255, 255),
    VTX(-759, 0, -97, 1024, -615, 255, 255, 255, 255),
    VTX(-779, 0, 60, 911, -743, 255, 255, 255, 255),
    VTX(-759, 0, 60, 911, -615, 255, 255, 255, 255),
    VTX(-759, 0, 0, 399, -615, 255, 255, 255, 255),
    VTX(-547, 220, 98, 1024, 740, 255, 255, 255, 255),
    VTX(-759, 220, 98, 1024, -615, 255, 255, 255, 255),
    VTX(-759, 220, -97, 1024, -615, 255, 255, 255, 255),
    VTX(-547, 220, -97, 1024, 740, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000BB0[3] = {
    VTX(-409, 220, 140, -270, 1622, 255, 255, 255, 255),
    VTX(-393, 220, 215, -752, 1724, 255, 255, 255, 255),
    VTX(-503, 220, 279, -1156, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000BE0[16] = {
    VTX(-749, 220, -69, 683, 2048, 255, 255, 255, 255),
    VTX(-749, 0, -69, 683, 0, 255, 255, 255, 255),
    VTX(-759, 0, -79, 796, 0, 255, 255, 255, 255),
    VTX(-759, 220, -79, 796, 2048, 255, 255, 255, 255),
    VTX(-567, 0, -314, 0, 0, 255, 255, 255, 255),
    VTX(-523, 0, -289, 512, 0, 255, 255, 255, 255),
    VTX(-523, 120, -289, 512, 1117, 255, 255, 255, 255),
    VTX(-567, 220, -314, 0, 2048, 255, 255, 255, 255),
    VTX(-480, 120, -264, 1024, 1117, 255, 255, 255, 255),
    VTX(-480, 220, -264, 1024, 2048, 255, 255, 255, 255),
    VTX(-567, 220, 315, 0, 2048, 255, 255, 255, 255),
    VTX(-523, 120, 290, 512, 1117, 255, 255, 255, 255),
    VTX(-523, 0, 290, 512, 0, 255, 255, 255, 255),
    VTX(-567, 0, 315, 0, 0, 255, 255, 255, 255),
    VTX(-480, 220, 265, 1024, 2048, 255, 255, 255, 255),
    VTX(-480, 120, 265, 1024, 1117, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000CE0[4] = {
    VTX(-759, 0, -99, 1024, 0, 255, 255, 255, 255),
    VTX(-759, 220, 100, 1024, 2048, 255, 255, 255, 255),
    VTX(-759, 0, 80, 796, 0, 255, 255, 255, 255),
    VTX(-418, 0, 98, 205, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000D20[3] = {
    VTX(-418, 0, 98, 205, 0, 255, 255, 255, 255),
    VTX(-418, 220, -97, 205, 2048, 255, 255, 255, 255),
    VTX(-418, 0, -77, 0, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000D50[12] = {
    VTX(-759, 0, -199, 0, 0, 255, 255, 255, 255),
    VTX(-759, 220, -199, 0, 2048, 255, 255, 255, 255),
    VTX(-759, 220, -99, 1024, 2048, 255, 255, 255, 255),
    VTX(-759, 220, 200, 0, 2048, 255, 255, 255, 255),
    VTX(-759, 0, 200, 0, 0, 255, 255, 255, 255),
    VTX(-759, 0, 100, 1024, 0, 255, 255, 255, 255),
    VTX(-749, 0, 70, 683, 0, 255, 255, 255, 255),
    VTX(-749, 220, 70, 683, 2048, 255, 255, 255, 255),
    VTX(-759, 220, 80, 796, 2048, 255, 255, 255, 255),
    VTX(-418, 220, 98, 205, 2048, 255, 255, 255, 255),
    VTX(-418, 220, 78, 0, 2048, 255, 255, 255, 255),
    VTX(-418, 0, 78, 0, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000E10[9] = {
    VTX(-401, 0, 178, 1024, 0, 255, 255, 255, 255),
    VTX(-401, 220, 178, 1024, 2048, 255, 255, 255, 255),
    VTX(-418, 220, 98, 205, 2048, 255, 255, 255, 255),
    VTX(-401, 220, -177, 1024, 2048, 255, 255, 255, 255),
    VTX(-401, 0, -177, 1024, 0, 255, 255, 255, 255),
    VTX(-418, 0, -97, 205, 0, 255, 255, 255, 255),
    VTX(-418, 220, -77, 0, 2048, 255, 255, 255, 255),
    VTX(-418, 220, -97, 205, 2048, 255, 255, 255, 255),
    VTX(-418, 0, -97, 205, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000EA0[16] = {
    VTX(-407, 0, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-407, 0, -139, 2048, 0, 255, 255, 255, 255),
    VTX(-503, 0, -139, 2048, 699, 255, 255, 255, 255),
    VTX(-503, 0, -97, 1738, 699, 255, 255, 255, 255),
    VTX(-547, 0, -97, 1738, 1024, 255, 255, 255, 255),
    VTX(-547, 0, 98, 310, 1024, 255, 255, 255, 255),
    VTX(-503, 0, 98, 310, 699, 255, 255, 255, 255),
    VTX(-503, 0, 140, 0, 699, 255, 255, 255, 255),
    VTX(-407, 0, 140, 0, 0, 255, 255, 255, 255),
    VTX(-418, 0, -97, 1740, 81, 255, 255, 255, 255),
    VTX(-409, 0, -139, 2048, 15, 255, 255, 255, 255),
    VTX(-503, 220, 98, 0, 1024, 255, 255, 255, 255),
    VTX(-503, 220, 279, 1157, 1024, 255, 255, 255, 255),
    VTX(-567, 220, 315, 1393, 616, 255, 255, 255, 255),
    VTX(-759, 220, 200, 655, -615, 255, 255, 255, 255),
    VTX(-759, 220, 98, 0, -615, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_000FA0[8] = {
    VTX(-759, 0, 98, 0, -615, 255, 255, 255, 255),
    VTX(-567, 0, 315, 1393, 616, 255, 255, 255, 255),
    VTX(-759, 220, -97, 0, -615, 255, 255, 255, 255),
    VTX(-567, 220, -314, 1393, 616, 255, 255, 255, 255),
    VTX(-503, 220, -97, 1738, 699, 255, 255, 255, 255),
    VTX(-503, 220, 98, 310, 699, 255, 255, 255, 255),
    VTX(-407, 220, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-503, 0, -97, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_001020[16] = {
    VTX(-759, 0, 200, 655, -615, 255, 255, 255, 255),
    VTX(-503, 0, 98, 0, 1024, 255, 255, 255, 255),
    VTX(-503, 0, 279, 1157, 1024, 255, 255, 255, 255),
    VTX(-759, 220, -199, 655, -615, 255, 255, 255, 255),
    VTX(-503, 220, -97, 0, 1024, 255, 255, 255, 255),
    VTX(-503, 220, -278, 1157, 1024, 255, 255, 255, 255),
    VTX(-503, 220, -139, 2048, 699, 255, 255, 255, 255),
    VTX(-407, 220, -139, 2048, 0, 255, 255, 255, 255),
    VTX(-547, 220, 98, 310, 1024, 255, 255, 255, 255),
    VTX(-547, 220, -97, 1738, 1024, 255, 255, 255, 255),
    VTX(-407, 220, 140, 0, 0, 255, 255, 255, 255),
    VTX(-503, 220, 140, 0, 699, 255, 255, 255, 255),
    VTX(-503, 0, -278, 1157, 1024, 255, 255, 255, 255),
    VTX(-567, 0, -314, 1393, 616, 255, 255, 255, 255),
    VTX(-759, 0, -199, 655, -615, 255, 255, 255, 255),
    VTX(-759, 0, -97, 0, -615, 255, 255, 255, 255),
}; 

Gfx fstdan_room_08Dlist0x001120[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 86, 58, 58, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_sceneTex_00DC00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_08Vtx_000060[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 122, 47, 32, 255),
    gsSPVertex(&fstdan_room_08Vtx_0000E0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 17, 17, 17, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_002B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_000160[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_sceneTex_00DC00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_0001A0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 34, 34, 34, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_002B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_000220[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_sceneTex_00DC00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_0002A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 51, 51, 51, 255),
    gsSPVertex(&fstdan_room_08Vtx_0003A0[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(5, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPVertex(&fstdan_room_08Vtx_000490[0], 7, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 4, 0),
    gsSP1Triangle(1, 4, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 68, 68, 68, 255),
    gsSPVertex(&fstdan_room_08Vtx_000500[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 102, 102, 102, 255),
    gsSPVertex(&fstdan_room_08Vtx_000580[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 204, 204, 204, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_002B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_000600[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 221, 221, 221, 255),
    gsSPVertex(&fstdan_room_08Vtx_000640[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_003B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_0006C0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 2, 1, 0),
    gsSP1Triangle(4, 1, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_002B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_0007A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&fstdan_room_08Vtx_0007A0[13], 2, 0),
    gsSPVertex(&fstdan_room_08Vtx_0008A0[0], 5, 2),
    gsSPVertex(&fstdan_room_08Vtx_000900[0], 7, 7),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 6, 10, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(6, 13, 10, 0),
    gsSPVertex(&fstdan_room_08Vtx_0008F0[0], 1, 0),
    gsSPVertex(&fstdan_room_08Vtx_000970[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_001B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_0009A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&fstdan_room_08Vtx_000AA0[0], 5, 0),
    gsSPVertex(&fstdan_room_08Vtx_000B00[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 0, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSP1Triangle(4, 15, 3, 0),
    gsSPVertex(&fstdan_room_08Vtx_000AF0[0], 1, 0),
    gsSPVertex(&fstdan_room_08Vtx_000BB0[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_004B20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_000BE0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(6, 9, 7, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(10, 14, 15, 0),
    gsSP1Triangle(10, 15, 11, 0),
    gsSPVertex(&fstdan_room_08Vtx_000CE0[0], 4, 0),
    gsSPVertex(&fstdan_room_08Vtx_000D50[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&fstdan_room_08Vtx_000D20[0], 3, 0),
    gsSPVertex(&fstdan_room_08Vtx_000E10[0], 9, 3),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_002320, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_000EA0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 0, 0),
    gsSP1Triangle(2, 3, 9, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSP1Triangle(11, 14, 15, 0),
    gsSPVertex(&fstdan_room_08Vtx_000FA0[0], 7, 0),
    gsSPVertex(&fstdan_room_08Vtx_001020[0], 9, 7),
    gsSP1Triangle(0, 7, 1, 0),
    gsSP1Triangle(0, 1, 8, 0),
    gsSP1Triangle(1, 9, 8, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(2, 3, 11, 0),
    gsSP1Triangle(3, 12, 11, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 14, 6, 0),
    gsSPVertex(&fstdan_room_08Vtx_000FA0[4], 4, 0),
    gsSPVertex(&fstdan_room_08Vtx_001020[8], 8, 4),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 0, 0),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 1, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_08Tex_001B20[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_001B20.rgb5a1.inc.c"
};

u64 fstdan_room_08Tex_002320[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_002320.rgb5a1.inc.c"
};

u64 fstdan_room_08Tex_002B20[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_002B20.rgb5a1.inc.c"
};

u64 fstdan_room_08Tex_003B20[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_003B20.rgb5a1.inc.c"
};

u64 fstdan_room_08Tex_004B20[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_004B20.rgb5a1.inc.c"
};

static Vtx fstdan_room_08Vtx_005B20[6] = {
    VTX(-452, 90, -9, 512, 838, 221, 221, 221, 255),
    VTX(-435, 0, -4, 576, 0, 221, 221, 221, 255),
    VTX(-435, 0, 0, 640, 0, 221, 221, 221, 255),
    VTX(-452, 90, 0, 640, 838, 221, 221, 221, 255),
    VTX(-435, 0, 5, 576, 0, 221, 221, 221, 255),
    VTX(-452, 90, 10, 512, 838, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_08Vtx_005B80[12] = {
    VTX(-452, 90, 0, 640, 838, 238, 238, 238, 255),
    VTX(-452, 90, 10, 512, 838, 238, 238, 238, 255),
    VTX(-452, 110, 10, 512, 1024, 238, 238, 238, 255),
    VTX(-452, 110, 0, 640, 1024, 238, 238, 238, 255),
    VTX(-435, 0, 5, 576, 0, 238, 238, 238, 255),
    VTX(-418, 0, 18, 413, 0, 238, 238, 238, 255),
    VTX(-418, 90, 35, 186, 838, 238, 238, 238, 255),
    VTX(-452, 110, -9, 512, 1024, 238, 238, 238, 255),
    VTX(-452, 90, -9, 512, 838, 238, 238, 238, 255),
    VTX(-418, 90, -34, 186, 838, 238, 238, 238, 255),
    VTX(-418, 0, -17, 413, 0, 238, 238, 238, 255),
    VTX(-435, 0, -4, 576, 0, 238, 238, 238, 255),
}; 

static Vtx fstdan_room_08Vtx_005C40[4] = {
    VTX(-452, 110, -9, 0, 0, 255, 255, 255, 255),
    VTX(-452, 110, 10, 0, 0, 255, 255, 255, 255),
    VTX(-418, 110, 35, 0, 0, 255, 255, 255, 255),
    VTX(-418, 110, -34, 0, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_005C80[8] = {
    VTX(-452, 90, -9, 512, 838, 255, 255, 255, 255),
    VTX(-452, 110, -9, 512, 1024, 255, 255, 255, 255),
    VTX(-418, 110, -34, 186, 1024, 255, 255, 255, 255),
    VTX(-418, 90, -34, 186, 838, 255, 255, 255, 255),
    VTX(-418, 90, 35, 186, 838, 255, 255, 255, 255),
    VTX(-418, 110, 35, 186, 1024, 255, 255, 255, 255),
    VTX(-452, 110, 10, 512, 1024, 255, 255, 255, 255),
    VTX(-452, 90, 10, 512, 838, 255, 255, 255, 255),
}; 

Gfx fstdan_room_08Dlist0x005D00[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 221, 221, 221, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_005EE8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_08Vtx_005B20[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 238, 238, 238, 255),
    gsSPVertex(&fstdan_room_08Vtx_005B80[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(3, 7, 8, 0),
    gsSP1Triangle(3, 8, 0, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(9, 11, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&fstdan_room_08Vtx_005C40[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_005EE8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_005C80[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_08Tex_005EE8[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_005EE8.rgb5a1.inc.c"
};

static Vtx fstdan_room_08Vtx_0066E8[8] = {
    VTX(-645, 90, -228, 640, 838, 221, 221, 221, 255),
    VTX(-654, 0, -242, 640, 0, 221, 221, 221, 255),
    VTX(-650, 0, -245, 576, 0, 221, 221, 221, 255),
    VTX(-637, 90, -233, 512, 838, 221, 221, 221, 255),
    VTX(-654, 90, -222, 512, 838, 221, 221, 221, 255),
    VTX(-658, 0, -240, 576, 0, 221, 221, 221, 255),
    VTX(-654, 0, -242, 640, 0, 221, 221, 221, 255),
    VTX(-645, 90, -228, 640, 838, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_08Vtx_006768[14] = {
    VTX(-645, 110, -228, 640, 1024, 238, 238, 238, 255),
    VTX(-645, 90, -228, 640, 838, 238, 238, 238, 255),
    VTX(-637, 90, -233, 512, 838, 238, 238, 238, 255),
    VTX(-637, 110, -233, 512, 1024, 238, 238, 238, 255),
    VTX(-650, 0, -245, 576, 0, 238, 238, 238, 255),
    VTX(-648, 0, -266, 413, 0, 238, 238, 238, 255),
    VTX(-632, 90, -275, 186, 838, 238, 238, 238, 255),
    VTX(-693, 90, -238, 186, 838, 238, 238, 238, 255),
    VTX(-678, 0, -248, 413, 0, 238, 238, 238, 255),
    VTX(-658, 0, -240, 576, 0, 238, 238, 238, 255),
    VTX(-654, 90, -222, 512, 838, 238, 238, 238, 255),
    VTX(-654, 110, -222, 512, 1024, 238, 238, 238, 255),
    VTX(-645, 90, -228, 640, 838, 238, 238, 238, 255),
    VTX(-645, 110, -228, 640, 1024, 238, 238, 238, 255),
}; 

static Vtx fstdan_room_08Vtx_006848[4] = {
    VTX(-693, 110, -238, 0, 0, 255, 255, 255, 255),
    VTX(-654, 110, -222, 0, 0, 255, 255, 255, 255),
    VTX(-637, 110, -233, 0, 0, 255, 255, 255, 255),
    VTX(-632, 110, -275, 0, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_006888[8] = {
    VTX(-632, 110, -275, 186, 1024, 255, 255, 255, 255),
    VTX(-637, 110, -233, 512, 1024, 255, 255, 255, 255),
    VTX(-637, 90, -233, 512, 838, 255, 255, 255, 255),
    VTX(-632, 90, -275, 186, 838, 255, 255, 255, 255),
    VTX(-693, 90, -238, 186, 838, 255, 255, 255, 255),
    VTX(-654, 90, -222, 512, 838, 255, 255, 255, 255),
    VTX(-654, 110, -222, 512, 1024, 255, 255, 255, 255),
    VTX(-693, 110, -238, 186, 1024, 255, 255, 255, 255),
}; 

Gfx fstdan_room_08Dlist0x006908[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 221, 221, 221, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_006AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_08Vtx_0066E8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 238, 238, 238, 255),
    gsSPVertex(&fstdan_room_08Vtx_006768[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&fstdan_room_08Vtx_006848[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_006AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_006888[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_08Tex_006AF0[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_006AF0.rgb5a1.inc.c"
};

static Vtx fstdan_room_08Vtx_0072F0[8] = {
    VTX(-637, 90, 234, 512, 838, 221, 221, 221, 255),
    VTX(-650, 0, 246, 576, 0, 221, 221, 221, 255),
    VTX(-654, 0, 243, 640, 0, 221, 221, 221, 255),
    VTX(-645, 90, 229, 640, 838, 221, 221, 221, 255),
    VTX(-645, 90, 229, 640, 838, 221, 221, 221, 255),
    VTX(-654, 0, 243, 640, 0, 221, 221, 221, 255),
    VTX(-658, 0, 241, 576, 0, 221, 221, 221, 255),
    VTX(-654, 90, 223, 512, 838, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_08Vtx_007370[14] = {
    VTX(-632, 90, 276, 186, 838, 238, 238, 238, 255),
    VTX(-648, 0, 267, 413, 0, 238, 238, 238, 255),
    VTX(-650, 0, 246, 576, 0, 238, 238, 238, 255),
    VTX(-637, 90, 234, 512, 838, 238, 238, 238, 255),
    VTX(-637, 110, 234, 512, 1024, 238, 238, 238, 255),
    VTX(-645, 90, 229, 640, 838, 238, 238, 238, 255),
    VTX(-645, 110, 229, 640, 1024, 238, 238, 238, 255),
    VTX(-645, 110, 229, 640, 1024, 238, 238, 238, 255),
    VTX(-645, 90, 229, 640, 838, 238, 238, 238, 255),
    VTX(-654, 90, 223, 512, 838, 238, 238, 238, 255),
    VTX(-654, 110, 223, 512, 1024, 238, 238, 238, 255),
    VTX(-658, 0, 241, 576, 0, 238, 238, 238, 255),
    VTX(-678, 0, 249, 413, 0, 238, 238, 238, 255),
    VTX(-693, 90, 239, 186, 838, 238, 238, 238, 255),
}; 

static Vtx fstdan_room_08Vtx_007450[4] = {
    VTX(-632, 110, 276, 0, 0, 255, 255, 255, 255),
    VTX(-637, 110, 234, 0, 0, 255, 255, 255, 255),
    VTX(-654, 110, 223, 0, 0, 255, 255, 255, 255),
    VTX(-693, 110, 239, 0, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_08Vtx_007490[8] = {
    VTX(-632, 90, 276, 186, 838, 255, 255, 255, 255),
    VTX(-637, 90, 234, 512, 838, 255, 255, 255, 255),
    VTX(-637, 110, 234, 512, 1024, 255, 255, 255, 255),
    VTX(-632, 110, 276, 186, 1024, 255, 255, 255, 255),
    VTX(-693, 110, 239, 186, 1024, 255, 255, 255, 255),
    VTX(-654, 110, 223, 512, 1024, 255, 255, 255, 255),
    VTX(-654, 90, 223, 512, 838, 255, 255, 255, 255),
    VTX(-693, 90, 239, 186, 838, 255, 255, 255, 255),
}; 

Gfx fstdan_room_08Dlist0x007510[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 221, 221, 221, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_0076F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_08Vtx_0072F0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 238, 238, 238, 255),
    gsSPVertex(&fstdan_room_08Vtx_007370[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&fstdan_room_08Vtx_007450[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_0076F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_08Vtx_007490[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_08Tex_0076F8[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_0076F8.rgb5a1.inc.c"
};

Gfx fstdan_room_08Dlist0x007EF8[] = {
    gsSPDisplayList(fstdan_room_08Dlist0x001120),
    gsSPDisplayList(fstdan_room_08Dlist0x005D00),
    gsSPDisplayList(fstdan_room_08Dlist0x006908),
    gsSPDisplayList(fstdan_room_08Dlist0x007510),
    gsSPEndDisplayList(),
}; 

static Vtx fstdan_room_08Vtx_007F20[12] = {
    VTX(-729, 20, 213, 1024, 0, 255, 255, 255, 255),
    VTX(-729, 220, 213, 1024, 1024, 255, 255, 255, 255),
    VTX(-592, 220, 295, 0, 1024, 255, 255, 255, 255),
    VTX(-592, 20, 295, 0, 0, 255, 255, 255, 255),
    VTX(-422, 220, -79, 0, 1024, 255, 255, 255, 255),
    VTX(-422, 20, -79, 0, 0, 255, 255, 255, 255),
    VTX(-422, 20, 80, 1024, 0, 255, 255, 255, 255),
    VTX(-422, 220, 80, 1024, 1024, 255, 255, 255, 255),
    VTX(-729, 20, -212, 1024, 0, 255, 255, 255, 255),
    VTX(-592, 20, -294, 0, 0, 255, 255, 255, 255),
    VTX(-592, 220, -294, 0, 1024, 255, 255, 255, 255),
    VTX(-729, 220, -212, 1024, 1024, 255, 255, 255, 255),
}; 

Gfx fstdan_room_08Dlist0x007FE0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_08Tex_0080A8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_08Vtx_007F20[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_08Tex_0080A8[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_08Tex_0080A8.ia16.inc.c"
};

Gfx fstdan_room_08Dlist0x0088A8[] = {
    gsSPDisplayList(fstdan_room_08Dlist0x007FE0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0088B8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


