#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_15.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_15Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_15Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_15Set0000Cmd02;
static SCmdMesh water_temple_room_15Set0000Cmd03;
static SCmdObjectList water_temple_room_15Set0000Cmd04;
static SCmdEndMarker water_temple_room_15Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx water_temple_room_15Vtx_000060[24];
static Vtx water_temple_room_15Vtx_0001E0[5];
static Vtx water_temple_room_15Vtx_000230[18];
static Vtx water_temple_room_15Vtx_000350[19];
static Vtx water_temple_room_15Vtx_000480[8];
static Vtx water_temple_room_15Vtx_000500[12];
static Vtx water_temple_room_15Vtx_0005C0[16];
static Vtx water_temple_room_15Vtx_0006C0[7];
static Vtx water_temple_room_15Vtx_000730[52];
static Vtx water_temple_room_15Vtx_000A70[5];
static Vtx water_temple_room_15Vtx_000AC0[4];
static Vtx water_temple_room_15Vtx_000B00[16];
static Vtx water_temple_room_15Vtx_000C00[16];
static Vtx water_temple_room_15Vtx_000D00[20];
static Vtx water_temple_room_15Vtx_000E40[8];

static SCmdEchoSettings water_temple_room_15Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_15Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_15Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_15Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_15MeshHeader0x000040 }; // 0x0018

static SCmdObjectList water_temple_room_15Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_15ObjectList0x000030 }; // 0x0020

static SCmdEndMarker water_temple_room_15Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 water_temple_room_15ObjectList0x000030[1] = {
	OBJECT_BOX,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 water_temple_room_15MeshHeader0x000040 = { { 0 }, 0x01, (u32)&water_temple_room_15MeshDListEntry0x00004C, (u32)&(water_temple_room_15MeshDListEntry0x00004C) + sizeof(water_temple_room_15MeshDListEntry0x00004C) }; 

MeshEntry0 water_temple_room_15MeshDListEntry0x00004C[1] = {
	{ (u32)water_temple_room_15Dlist0x007CF0, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx water_temple_room_15Vtx_000060[24] = {
    VTX(-1350, 1610, -210, 3413, 4096, 129, 129, 129, 255),
    VTX(-1350, 1510, -210, 0, 4096, 156, 199, 203, 255),
    VTX(-1350, 1510, -240, 0, 5120, 156, 199, 203, 255),
    VTX(-1350, 1640, -240, 4437, 5120, 32, 32, 32, 255),
    VTX(-1350, 1510, -120, 0, 1024, 156, 199, 203, 255),
    VTX(-1350, 1510, -150, 0, 2048, 156, 199, 203, 255),
    VTX(-1350, 1610, -150, 3413, 2048, 129, 129, 129, 255),
    VTX(-1350, 1640, -120, 4437, 1024, 32, 32, 32, 255),
    VTX(-1350, 1610, -150, 1024, 2048, 129, 129, 129, 255),
    VTX(-1350, 1610, -210, 3072, 2048, 129, 129, 129, 255),
    VTX(-1350, 1640, -240, 4096, 1024, 32, 32, 32, 255),
    VTX(-1350, 1640, -120, 0, 1024, 32, 32, 32, 255),
    VTX(-630, 1640, -240, 4437, 5120, 32, 32, 32, 255),
    VTX(-630, 1510, -240, 0, 5120, 129, 129, 129, 255),
    VTX(-630, 1510, -210, 0, 4096, 156, 199, 203, 255),
    VTX(-630, 1610, -210, 3413, 4096, 129, 129, 129, 255),
    VTX(-630, 1640, -120, 4437, 1024, 32, 32, 32, 255),
    VTX(-630, 1610, -150, 3413, 2048, 129, 129, 129, 255),
    VTX(-630, 1510, -150, 0, 2048, 156, 199, 203, 255),
    VTX(-630, 1510, -120, 0, 1024, 129, 129, 129, 255),
    VTX(-630, 1640, -120, 0, 1024, 32, 32, 32, 255),
    VTX(-630, 1640, -240, 4096, 1024, 32, 32, 32, 255),
    VTX(-630, 1610, -210, 3072, 2048, 129, 129, 129, 255),
    VTX(-630, 1610, -150, 1024, 2048, 129, 129, 129, 255),
}; 

static Vtx water_temple_room_15Vtx_0001E0[5] = {
    VTX(-1350, 1790, -300, 1024, 0, 32, 32, 32, 255),
    VTX(-990, 1790, -180, -2048, 8192, 69, 112, 144, 255),
    VTX(-1350, 1790, -60, -5120, 0, 32, 32, 32, 255),
    VTX(-630, 1790, -300, 1024, 16384, 32, 32, 32, 255),
    VTX(-630, 1790, -60, -5120, 16384, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_15Vtx_000230[18] = {
    VTX(-1320, 1700, 300, -3584, -1195, 32, 32, 32, 255),
    VTX(-1320, 1510, 300, -3584, 2048, 32, 32, 32, 255),
    VTX(-1320, 1510, -20, 1877, 2048, 129, 129, 129, 255),
    VTX(-1320, 1700, -20, 1877, -1195, 32, 32, 32, 255),
    VTX(-1140, 1700, -20, -1536, -1877, 32, 32, 32, 255),
    VTX(-1140, 1700, 300, -1536, 3584, 32, 32, 32, 255),
    VTX(-1320, 1700, -20, 1536, -1877, 69, 112, 144, 255),
    VTX(-1320, 1700, 300, 1536, 3584, 32, 32, 32, 255),
    VTX(-1140, 1510, -20, -1536, -1877, 129, 129, 129, 255),
    VTX(-1140, 1510, -60, -1536, -2560, 32, 32, 32, 255),
    VTX(-1320, 1510, -60, 1536, -2560, 32, 32, 32, 255),
    VTX(-1320, 1510, -20, 1536, -1877, 129, 129, 129, 255),
    VTX(-1140, 1510, 300, -1536, 3584, 32, 32, 32, 255),
    VTX(-1320, 1510, 300, 1536, 3584, 32, 32, 32, 255),
    VTX(-1140, 1700, -20, 1877, -1195, 32, 32, 32, 255),
    VTX(-1140, 1510, -20, 1877, 2048, 129, 129, 129, 255),
    VTX(-1140, 1700, 300, -3584, -1195, 32, 32, 32, 255),
    VTX(-1140, 1510, 300, -3584, 2048, 129, 129, 129, 255),
}; 

static Vtx water_temple_room_15Vtx_000350[19] = {
    VTX(-630, 1750, -120, 1024, -2048, 32, 32, 32, 255),
    VTX(-630, 1510, -120, 1024, 2048, 129, 129, 129, 255),
    VTX(-630, 1510, -60, -1024, 2048, 156, 199, 203, 255),
    VTX(-630, 1750, -60, -1024, -2048, 32, 32, 32, 255),
    VTX(-630, 1750, -300, -1024, -2048, 32, 32, 32, 255),
    VTX(-630, 1510, -300, -1024, 2048, 156, 199, 203, 255),
    VTX(-630, 1510, -240, 1024, 2048, 129, 129, 129, 255),
    VTX(-630, 1750, -240, 1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 1510, -240, 1024, 2048, 156, 199, 203, 255),
    VTX(-1350, 1510, -300, -1024, 2048, 129, 129, 129, 255),
    VTX(-1350, 1750, -300, -1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 1750, -240, 1024, -2048, 32, 32, 32, 255),
    VTX(-1320, 1700, 300, -1024, -2048, 32, 32, 32, 255),
    VTX(-1260, 1510, 300, 1024, 2048, 156, 199, 203, 255),
    VTX(-1320, 1510, 300, -1024, 2048, 32, 32, 32, 255),
    VTX(-1350, 1750, -120, 1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 1750, -60, -1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 1510, -60, -1024, 2048, 129, 129, 129, 255),
    VTX(-1350, 1510, -120, 1024, 2048, 156, 199, 203, 255),
}; 

static Vtx water_temple_room_15Vtx_000480[8] = {
    VTX(-1350, 1510, -300, 0, 2048, 156, 199, 203, 255),
    VTX(-630, 1510, -300, 12288, 2048, 129, 129, 129, 255),
    VTX(-630, 1750, -300, 12288, -2048, 32, 32, 32, 255),
    VTX(-630, 1750, -60, 0, -2048, 32, 32, 32, 255),
    VTX(-630, 1510, -60, 0, 2048, 129, 129, 129, 255),
    VTX(-1110, 1750, -60, 10240, -2048, 32, 32, 32, 255),
    VTX(-1110, 1510, -60, 10240, 2048, 156, 199, 203, 255),
    VTX(-1350, 1750, -300, 0, -2048, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_15Vtx_000500[12] = {
    VTX(-630, 1750, -240, 2048, -1024, 32, 32, 32, 255),
    VTX(-630, 1640, -240, 2048, 1024, 129, 129, 129, 255),
    VTX(-630, 1640, -120, 0, 1024, 129, 129, 129, 255),
    VTX(-630, 1750, -120, 0, -1024, 32, 32, 32, 255),
    VTX(-1350, 1750, -120, 0, -1024, 32, 32, 32, 255),
    VTX(-1350, 1640, -120, 0, 1024, 129, 129, 129, 255),
    VTX(-1350, 1640, -240, 2048, 1024, 129, 129, 129, 255),
    VTX(-1350, 1750, -240, 2048, -1024, 32, 32, 32, 255),
    VTX(-1200, 1700, 300, 0, -1024, 32, 32, 32, 255),
    VTX(-1200, 1610, 300, 0, 1024, 129, 129, 129, 255),
    VTX(-1260, 1610, 300, 2048, 1024, 156, 199, 203, 255),
    VTX(-1260, 1700, 300, 2048, -1024, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_15Vtx_0005C0[16] = {
    VTX(-630, 1790, -300, 12288, 0, 32, 32, 32, 255),
    VTX(-1350, 1790, -300, 0, 0, 32, 32, 32, 255),
    VTX(-1350, 1750, -300, 0, 1024, 129, 129, 129, 255),
    VTX(-630, 1750, -300, 12288, 1024, 129, 129, 129, 255),
    VTX(-630, 1750, -60, 6144, 1024, 129, 129, 129, 255),
    VTX(-630, 1790, -60, 6144, 0, 32, 32, 32, 255),
    VTX(-630, 1790, -300, 0, 0, 32, 32, 32, 255),
    VTX(-630, 1750, -300, 0, 1024, 69, 112, 144, 255),
    VTX(-1350, 1750, -300, 0, 1024, 129, 129, 129, 255),
    VTX(-1350, 1790, -300, 0, 0, 32, 32, 32, 255),
    VTX(-1350, 1790, -60, 6144, 0, 32, 32, 32, 255),
    VTX(-1350, 1750, -60, 6144, 1024, 69, 112, 144, 255),
    VTX(-630, 1750, -60, 12288, 1024, 129, 129, 129, 255),
    VTX(-1350, 1750, -60, 0, 1024, 129, 129, 129, 255),
    VTX(-1350, 1790, -60, 0, 0, 32, 32, 32, 255),
    VTX(-630, 1790, -60, 12288, 0, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_15Vtx_0006C0[7] = {
    VTX(-1320, 1700, 300, -1024, -2048, 32, 32, 32, 255),
    VTX(-1260, 1700, 300, 1024, -2048, 32, 32, 32, 255),
    VTX(-1260, 1510, 300, 1024, 2048, 156, 199, 203, 255),
    VTX(-1200, 1510, 300, 1024, 2048, 156, 199, 203, 255),
    VTX(-1200, 1700, 300, 1024, -2048, 32, 32, 32, 255),
    VTX(-1140, 1700, 300, -1024, -2048, 32, 32, 32, 255),
    VTX(-1140, 1510, 300, -1024, 2048, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_15Vtx_000730[52] = {
    VTX(-1370, 1510, -210, 1024, 512, 0, 0, 0, 255),
    VTX(-1350, 1510, -210, 1024, 1024, 156, 199, 203, 255),
    VTX(-1350, 1610, -210, -1536, 1024, 129, 129, 129, 255),
    VTX(-1260, 1510, 320, 0, 512, 0, 0, 0, 255),
    VTX(-1260, 1510, 300, 0, 1024, 156, 199, 203, 255),
    VTX(-1260, 1610, 300, 2560, 1024, 156, 199, 203, 255),
    VTX(-1260, 1610, 320, 2560, 512, 0, 0, 0, 255),
    VTX(-1260, 1610, 320, 0, 2048, 0, 0, 0, 255),
    VTX(-1260, 1610, 300, 0, 1536, 156, 199, 203, 255),
    VTX(-1200, 1610, 300, 1536, 1536, 156, 199, 203, 255),
    VTX(-1200, 1610, 320, 1536, 2048, 0, 0, 0, 255),
    VTX(-1200, 1610, 320, 2560, 512, 0, 0, 0, 255),
    VTX(-1200, 1610, 300, 2560, 1024, 156, 199, 203, 255),
    VTX(-1200, 1510, 320, 0, 512, 0, 0, 0, 255),
    VTX(-1200, 1510, 300, 0, 1024, 156, 199, 203, 255),
    VTX(-1200, 1510, 320, 1536, 2048, 0, 0, 0, 255),
    VTX(-1200, 1510, 300, 1536, 1536, 156, 199, 203, 255),
    VTX(-1260, 1510, 300, 0, 1536, 156, 199, 203, 255),
    VTX(-1260, 1510, 320, 0, 2048, 0, 0, 0, 255),
    VTX(-610, 1510, -150, 1024, 512, 0, 0, 0, 255),
    VTX(-630, 1610, -150, -1536, 1024, 129, 129, 129, 255),
    VTX(-610, 1610, -150, -1536, 512, 0, 0, 0, 255),
    VTX(-610, 1610, -210, -1536, 512, 0, 0, 0, 255),
    VTX(-630, 1610, -210, -1536, 1024, 129, 129, 129, 255),
    VTX(-610, 1510, -210, 1024, 512, 0, 0, 0, 255),
    VTX(-630, 1510, -210, 1024, 1024, 156, 199, 203, 255),
    VTX(-610, 1610, -150, 1536, 512, 0, 0, 0, 255),
    VTX(-630, 1610, -150, 1536, 1024, 129, 129, 129, 255),
    VTX(-630, 1610, -210, 0, 1024, 129, 129, 129, 255),
    VTX(-610, 1610, -210, 0, 512, 0, 0, 0, 255),
    VTX(-610, 1510, -210, 0, 512, 0, 0, 0, 255),
    VTX(-630, 1510, -210, 0, 1024, 156, 199, 203, 255),
    VTX(-630, 1510, -150, 1536, 1024, 156, 199, 203, 255),
    VTX(-610, 1510, -150, 1536, 512, 0, 0, 0, 255),
    VTX(-610, 1510, -150, 1024, 512, 0, 0, 0, 255),
    VTX(-630, 1510, -150, 1024, 1024, 156, 199, 203, 255),
    VTX(-630, 1610, -150, -1536, 1024, 129, 129, 129, 255),
    VTX(-1370, 1610, -150, -1536, 512, 0, 0, 0, 255),
    VTX(-1350, 1610, -150, -1536, 1024, 129, 129, 129, 255),
    VTX(-1370, 1510, -150, 1024, 512, 0, 0, 0, 255),
    VTX(-1350, 1510, -150, 1024, 1024, 156, 199, 203, 255),
    VTX(-1370, 1510, -150, 0, 512, 0, 0, 0, 255),
    VTX(-1350, 1510, -150, 0, 1024, 156, 199, 203, 255),
    VTX(-1350, 1510, -210, 1536, 1024, 156, 199, 203, 255),
    VTX(-1370, 1510, -210, 1536, 512, 0, 0, 0, 255),
    VTX(-1370, 1610, -210, 1536, 512, 0, 0, 0, 255),
    VTX(-1350, 1610, -210, 1536, 1024, 129, 129, 129, 255),
    VTX(-1350, 1610, -150, 0, 1024, 129, 129, 129, 255),
    VTX(-1370, 1610, -150, 0, 512, 0, 0, 0, 255),
    VTX(-1370, 1510, -210, 1024, 512, 0, 0, 0, 255),
    VTX(-1350, 1610, -210, -1536, 1024, 129, 129, 129, 255),
    VTX(-1370, 1610, -210, -1536, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_15Vtx_000A70[5] = {
    VTX(-990, 1510, -180, -2048, 8192, 156, 199, 203, 255),
    VTX(-630, 1510, -300, 1024, 16384, 32, 32, 32, 255),
    VTX(-1350, 1510, -300, 1024, 0, 32, 32, 32, 255),
    VTX(-1350, 1510, -60, -5120, 0, 32, 32, 32, 255),
    VTX(-630, 1510, -60, -5120, 16384, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_15Vtx_000AC0[4] = {
    VTX(-1140, 1750, -60, 0, -1024, 32, 32, 32, 255),
    VTX(-1140, 1700, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1320, 1700, -60, 4096, 1024, 42, 42, 42, 255),
    VTX(-1320, 1750, -60, 4096, -1024, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_15Vtx_000B00[16] = {
    VTX(-1140, 1510, -60, 1024, 1024, 40, 58, 65, 255),
    VTX(-1140, 1510, -20, 0, 1024, 157, 249, 194, 255),
    VTX(-1140, 1570, -20, 0, 0, 40, 58, 65, 255),
    VTX(-1140, 1570, -60, 1024, 0, 42, 42, 42, 255),
    VTX(-1110, 1510, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1140, 1510, -60, 1024, 1024, 157, 249, 194, 255),
    VTX(-1140, 1570, -60, 1024, 0, 157, 249, 194, 255),
    VTX(-1110, 1570, -60, 0, 0, 42, 42, 42, 255),
    VTX(-1320, 1570, -20, 0, 0, 42, 42, 42, 255),
    VTX(-1320, 1510, -20, 0, 1024, 157, 249, 194, 255),
    VTX(-1320, 1510, -60, 1024, 1024, 40, 58, 65, 255),
    VTX(-1320, 1570, -60, 1024, 0, 40, 58, 65, 255),
    VTX(-1320, 1510, -60, 0, 1024, 157, 249, 194, 255),
    VTX(-1350, 1510, -60, 1024, 1024, 42, 42, 42, 255),
    VTX(-1350, 1570, -60, 1024, 0, 42, 42, 42, 255),
    VTX(-1320, 1570, -60, 0, 0, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_15Vtx_000C00[16] = {
    VTX(-1348, 1770, -62, 12254, 0, 129, 129, 129, 255),
    VTX(-632, 1770, -62, 34, 0, 129, 129, 129, 255),
    VTX(-632, 1730, -62, 34, 512, 129, 129, 129, 255),
    VTX(-1348, 1730, -62, 12254, 512, 129, 129, 129, 255),
    VTX(-1348, 1730, -298, 3413, 512, 129, 129, 129, 255),
    VTX(-1348, 1770, -298, 3413, 0, 129, 129, 129, 255),
    VTX(-1348, 1770, -62, -614, 0, 129, 129, 129, 255),
    VTX(-1348, 1730, -62, -614, 512, 129, 129, 129, 255),
    VTX(-632, 1730, -62, -614, 512, 129, 129, 129, 255),
    VTX(-632, 1770, -62, -614, 0, 129, 129, 129, 255),
    VTX(-632, 1770, -298, 3413, 0, 129, 129, 129, 255),
    VTX(-632, 1730, -298, 3413, 512, 129, 129, 129, 255),
    VTX(-1348, 1730, -298, 12254, 512, 129, 129, 129, 255),
    VTX(-632, 1730, -298, 34, 512, 129, 129, 129, 255),
    VTX(-632, 1770, -298, 34, 0, 129, 129, 129, 255),
    VTX(-1348, 1770, -298, 12254, 0, 129, 129, 129, 255),
}; 

static Vtx water_temple_room_15Vtx_000D00[20] = {
    VTX(-1140, 1570, -60, 1024, 1024, 157, 249, 194, 255),
    VTX(-1140, 1750, -60, 1024, -3072, 32, 32, 32, 255),
    VTX(-1110, 1750, -60, 0, -3072, 32, 32, 32, 255),
    VTX(-1110, 1570, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1140, 1570, -20, 1024, 1024, 157, 249, 194, 255),
    VTX(-1140, 1700, -20, 1024, -2048, 75, 114, 83, 255),
    VTX(-1140, 1700, -60, 0, -2048, 42, 42, 42, 255),
    VTX(-1140, 1570, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1350, 1570, -60, 8192, 1024, 42, 42, 42, 255),
    VTX(-1350, 1750, -60, 8192, -3072, 32, 32, 32, 255),
    VTX(-1320, 1570, -60, 7168, 1024, 157, 249, 194, 255),
    VTX(-1320, 1700, -60, 0, -2048, 42, 42, 42, 255),
    VTX(-1320, 1700, -20, 1024, -2048, 75, 114, 83, 255),
    VTX(-1320, 1570, -20, 1024, 1024, 157, 249, 194, 255),
    VTX(-1320, 1570, -60, 0, 1024, 40, 58, 65, 255),
    VTX(-1320, 1700, -20, 1024, -5120, 6, 31, 47, 255),
    VTX(-1320, 1700, -60, 0, -5120, 42, 42, 42, 255),
    VTX(-1140, 1700, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1140, 1700, -20, 1024, 1024, 6, 31, 47, 255),
    VTX(-1320, 1750, -60, 7168, -3072, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_15Vtx_000E40[8] = {
    VTX(-1370, 1510, -300, 0, 0, 0, 0, 0, 0),
    VTX(-610, 1510, -300, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1790, -300, 0, 0, 0, 0, 0, 0),
    VTX(-610, 1790, -300, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1510, 320, 0, 0, 0, 0, 0, 0),
    VTX(-610, 1510, 320, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1790, 320, 0, 0, 0, 0, 0, 0),
    VTX(-610, 1790, 320, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_15Dlist0x000EC0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_15Vtx_000E40[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_15Tex_0014F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_15Vtx_000060[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_001CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_0001E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_0024F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000230[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_002CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000350[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_003CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000480[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_004CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000500[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_0054F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_0005C0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_005CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_0006C0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000730[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_15Vtx_000730[30], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_006CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000A70[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 1, 0, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_15Tex_0074F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000AC0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_15Vtx_000B00[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_15Vtx_000C00[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_15Vtx_000D00[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 9, 19, 10, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_15Tex_0014F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_0014F0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_001CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_001CF0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_0024F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_0024F0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_002CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_002CF0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_003CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_003CF0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_004CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_004CF0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_0054F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_0054F0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_005CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_005CF0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_006CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_006CF0.rgb5a1.inc.c"
};

u64 water_temple_room_15Tex_0074F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_15Tex_0074F0.rgb5a1.inc.c"
};

Gfx water_temple_room_15Dlist0x007CF0[] = {
    gsSPDisplayList(water_temple_room_15Dlist0x000EC0),
    gsSPEndDisplayList(),
}; 


