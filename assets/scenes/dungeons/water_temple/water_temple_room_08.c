#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_08.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_08Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_08Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_08Set0000Cmd02;
static SCmdMesh water_temple_room_08Set0000Cmd03;
static SCmdObjectList water_temple_room_08Set0000Cmd04;
static SCmdEndMarker water_temple_room_08Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx water_temple_room_08Vtx_000060[32];
static Vtx water_temple_room_08Vtx_000260[8];
static Vtx water_temple_room_08Vtx_0002E0[16];
static Vtx water_temple_room_08Vtx_0003E0[32];
static Vtx water_temple_room_08Vtx_0005E0[12];
static Vtx water_temple_room_08Vtx_0006A0[24];
static Vtx water_temple_room_08Vtx_000820[20];
static Vtx water_temple_room_08Vtx_000960[12];
static Vtx water_temple_room_08Vtx_000A20[4];
static Vtx water_temple_room_08Vtx_000A60[32];
static Vtx water_temple_room_08Vtx_000C60[32];
static Vtx water_temple_room_08Vtx_000E60[32];
static Vtx water_temple_room_08Vtx_001060[4];
static Vtx water_temple_room_08Vtx_0010A0[93];
static Vtx water_temple_room_08Vtx_001670[4];
static Vtx water_temple_room_08Vtx_0016B0[8];

static SCmdEchoSettings water_temple_room_08Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_08Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_08Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_08Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_08MeshHeader0x000040 }; // 0x0018

static SCmdObjectList water_temple_room_08Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_08ObjectList0x000030 }; // 0x0020

static SCmdEndMarker water_temple_room_08Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 water_temple_room_08ObjectList0x000030[1] = {
	OBJECT_BOX,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 water_temple_room_08MeshHeader0x000040 = { { 0 }, 0x01, (u32)&water_temple_room_08MeshDListEntry0x00004C, (u32)&(water_temple_room_08MeshDListEntry0x00004C) + sizeof(water_temple_room_08MeshDListEntry0x00004C) }; 

MeshEntry0 water_temple_room_08MeshDListEntry0x00004C[1] = {
	{ (u32)water_temple_room_08Dlist0x004D18, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx water_temple_room_08Vtx_000060[32] = {
    VTX(980, 0, -260, 0, 512, 192, 237, 192, 255),
    VTX(960, 0, -260, 0, 1024, 0, 0, 0, 255),
    VTX(960, 100, -260, 2560, 1024, 0, 0, 0, 255),
    VTX(980, 100, -320, 2560, 512, 192, 237, 192, 255),
    VTX(960, 100, -320, 2560, 1024, 0, 0, 0, 255),
    VTX(980, 0, -320, 0, 512, 192, 237, 192, 255),
    VTX(960, 0, -320, 0, 1024, 0, 0, 0, 255),
    VTX(980, 0, -320, 0, 1024, 192, 237, 192, 255),
    VTX(960, 0, -320, 0, 512, 0, 0, 0, 255),
    VTX(960, 0, -260, 1536, 512, 0, 0, 0, 255),
    VTX(980, 0, -260, 1536, 1024, 192, 237, 192, 255),
    VTX(980, 100, -260, 2560, 512, 192, 237, 192, 255),
    VTX(980, 100, -260, 1536, 1024, 192, 237, 192, 255),
    VTX(960, 100, -260, 1536, 512, 0, 0, 0, 255),
    VTX(960, 100, -320, 0, 512, 0, 0, 0, 255),
    VTX(980, 100, -320, 0, 1024, 192, 237, 192, 255),
    VTX(2110, 100, 520, 1536, 1024, 192, 237, 192, 255),
    VTX(2110, 100, 540, 1536, 512, 0, 0, 0, 255),
    VTX(2050, 100, 540, 0, 512, 0, 0, 0, 255),
    VTX(2050, 100, 520, 0, 1024, 192, 237, 192, 255),
    VTX(2110, 0, 520, 0, 512, 192, 237, 192, 255),
    VTX(2110, 100, 540, 2560, 1024, 0, 0, 0, 255),
    VTX(2110, 100, 520, 2560, 512, 192, 237, 192, 255),
    VTX(2050, 0, 520, 0, 1024, 192, 237, 192, 255),
    VTX(2050, 0, 540, 0, 512, 0, 0, 0, 255),
    VTX(2110, 0, 540, 1536, 512, 0, 0, 0, 255),
    VTX(2110, 0, 520, 1536, 1024, 192, 237, 192, 255),
    VTX(2050, 100, 540, 2560, 1024, 0, 0, 0, 255),
    VTX(2050, 0, 540, 0, 1024, 0, 0, 0, 255),
    VTX(2050, 0, 520, 0, 512, 192, 237, 192, 255),
    VTX(2050, 100, 520, 2560, 512, 192, 237, 192, 255),
    VTX(2110, 0, 540, 0, 1024, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_08Vtx_000260[8] = {
    VTX(980, 130, -350, 2048, 1024, 192, 237, 192, 255),
    VTX(980, 240, -350, 2048, -1024, 48, 45, 46, 255),
    VTX(980, 240, -230, 0, -1024, 48, 45, 46, 255),
    VTX(980, 130, -230, 0, 1024, 192, 237, 192, 255),
    VTX(2020, 130, 520, 2048, 1024, 192, 237, 192, 255),
    VTX(2020, 240, 520, 2048, -1024, 48, 45, 46, 255),
    VTX(2140, 240, 520, 0, -1024, 48, 45, 46, 255),
    VTX(2140, 130, 520, 0, 1024, 192, 237, 192, 255),
}; 

static Vtx water_temple_room_08Vtx_0002E0[16] = {
    VTX(980, 240, -230, 1024, -2048, 48, 45, 46, 255),
    VTX(980, 240, -160, -1024, -2048, 48, 45, 46, 255),
    VTX(980, 0, -160, -1024, 2048, 192, 237, 192, 255),
    VTX(980, 0, -230, 1024, 2048, 192, 237, 192, 255),
    VTX(2140, 240, 520, 1024, -2048, 48, 45, 46, 255),
    VTX(2210, 240, 520, -1024, -2048, 48, 45, 46, 255),
    VTX(2210, 0, 520, -1024, 2048, 192, 237, 192, 255),
    VTX(2140, 0, 520, 1024, 2048, 192, 237, 192, 255),
    VTX(980, 240, -420, 1024, -2048, 48, 45, 46, 255),
    VTX(980, 240, -350, -1024, -2048, 48, 45, 46, 255),
    VTX(980, 0, -350, -1024, 2048, 192, 237, 192, 255),
    VTX(980, 0, -420, 1024, 2048, 192, 237, 192, 255),
    VTX(1950, 240, 520, 1024, -2048, 48, 45, 46, 255),
    VTX(2020, 240, 520, -1024, -2048, 48, 45, 46, 255),
    VTX(2020, 0, 520, -1024, 2048, 192, 237, 192, 255),
    VTX(1950, 0, 520, 1024, 2048, 192, 237, 192, 255),
}; 

static Vtx water_temple_room_08Vtx_0003E0[32] = {
    VTX(1920, 0, -130, 2901, 2901, 92, 113, 95, 255),
    VTX(2240, 0, -130, -2560, 2901, 192, 237, 192, 255),
    VTX(1920, 0, -450, 2901, 8363, 192, 237, 192, 255),
    VTX(2240, 0, -450, -2560, 8363, 92, 113, 95, 255),
    VTX(980, 0, -130, 3072, 8363, 48, 45, 46, 255),
    VTX(1430, 0, -290, 341, 683, 92, 113, 95, 255),
    VTX(980, 0, -450, -2389, 8363, 48, 45, 46, 255),
    VTX(1920, 0, -450, -2389, -7680, 192, 237, 192, 255),
    VTX(980, 240, -450, 11776, -2560, 48, 45, 46, 255),
    VTX(1615, 0, -450, 939, 1536, 192, 237, 192, 255),
    VTX(2210, 240, -450, -9216, -2560, 48, 45, 46, 255),
    VTX(980, 0, -450, 11776, 1536, 92, 113, 95, 255),
    VTX(2210, 0, -450, -9216, 1536, 92, 113, 95, 255),
    VTX(2240, 0, 520, 8363, 1536, 48, 45, 46, 255),
    VTX(2240, 240, 520, 8363, -2560, 48, 45, 46, 255),
    VTX(2240, 0, 25, -85, 1536, 192, 237, 192, 255),
    VTX(2240, 240, -420, -7680, -2560, 48, 45, 46, 255),
    VTX(2240, 0, -420, -7680, 1536, 48, 45, 46, 255),
    VTX(1920, 0, -130, -4267, 1536, 192, 237, 192, 255),
    VTX(980, 0, -130, 11776, 1536, 48, 45, 46, 255),
    VTX(980, 240, -130, 11776, -2560, 48, 45, 46, 255),
    VTX(1920, 240, -130, -4267, -2560, 48, 45, 46, 255),
    VTX(1920, 240, 520, 8363, -2560, 48, 45, 46, 255),
    VTX(1920, 0, 220, 3243, 1536, 192, 237, 192, 255),
    VTX(1920, 240, -130, -2731, -2560, 92, 113, 95, 255),
    VTX(1920, 0, 520, 8363, 1536, 48, 45, 46, 255),
    VTX(1920, 0, -130, -2731, 1536, 92, 113, 95, 255),
    VTX(1920, 0, -130, 3072, -7680, 92, 113, 95, 255),
    VTX(2240, 300, -130, 3413, 2389, 48, 45, 46, 255),
    VTX(1920, 300, -130, -2048, 2389, 48, 45, 46, 255),
    VTX(1920, 300, -450, -2048, 7851, 48, 45, 46, 255),
    VTX(2240, 300, -450, 3413, 7851, 48, 45, 46, 255),
}; 

static Vtx water_temple_room_08Vtx_0005E0[12] = {
    VTX(1920, 300, -130, -1877, -4779, 48, 45, 46, 255),
    VTX(980, 300, -130, -1877, 11264, 48, 45, 46, 255),
    VTX(980, 300, -450, 3584, 11264, 48, 45, 46, 255),
    VTX(1920, 300, -450, 3584, -4779, 48, 45, 46, 255),
    VTX(1920, 0, -130, 2901, 2901, 92, 113, 95, 255),
    VTX(1920, 0, 520, 2901, -8192, 48, 45, 46, 255),
    VTX(2240, 0, 520, -2560, -8192, 192, 237, 192, 255),
    VTX(2240, 0, -130, -2560, 2901, 192, 237, 192, 255),
    VTX(2240, 300, -130, 3413, 2389, 48, 45, 46, 255),
    VTX(2240, 300, 520, 3413, -8704, 48, 45, 46, 255),
    VTX(1920, 300, 520, -2048, -8704, 48, 45, 46, 255),
    VTX(1920, 300, -130, -2048, 2389, 48, 45, 46, 255),
}; 

static Vtx water_temple_room_08Vtx_0006A0[24] = {
    VTX(980, 0, -230, 0, 1024, 192, 237, 192, 255),
    VTX(980, 0, -260, 0, 2048, 192, 237, 192, 255),
    VTX(980, 100, -260, 3413, 2048, 192, 237, 192, 255),
    VTX(980, 130, -230, 4437, 1024, 48, 45, 46, 255),
    VTX(980, 100, -260, 1024, 2048, 192, 237, 192, 255),
    VTX(980, 100, -320, 3072, 2048, 192, 237, 192, 255),
    VTX(980, 130, -350, 4096, 1024, 48, 45, 46, 255),
    VTX(980, 130, -230, 0, 1024, 48, 45, 46, 255),
    VTX(980, 100, -320, 3413, 4096, 192, 237, 192, 255),
    VTX(980, 0, -320, 0, 4096, 192, 237, 192, 255),
    VTX(980, 0, -350, 0, 5120, 192, 237, 192, 255),
    VTX(980, 130, -350, 4437, 5120, 48, 45, 46, 255),
    VTX(2050, 100, 520, 3413, 4096, 192, 237, 192, 255),
    VTX(2050, 0, 520, 0, 4096, 192, 237, 192, 255),
    VTX(2020, 0, 520, 0, 5120, 192, 237, 192, 255),
    VTX(2020, 130, 520, 4437, 5120, 48, 45, 46, 255),
    VTX(2140, 0, 520, 0, 1024, 192, 237, 192, 255),
    VTX(2110, 0, 520, 0, 2048, 192, 237, 192, 255),
    VTX(2110, 100, 520, 3413, 2048, 192, 237, 192, 255),
    VTX(2140, 130, 520, 4437, 1024, 48, 45, 46, 255),
    VTX(2110, 100, 520, 1024, 2048, 192, 237, 192, 255),
    VTX(2050, 100, 520, 3072, 2048, 192, 237, 192, 255),
    VTX(2020, 130, 520, 4096, 1024, 48, 45, 46, 255),
    VTX(2140, 130, 520, 0, 1024, 48, 45, 46, 255),
}; 

static Vtx water_temple_room_08Vtx_000820[20] = {
    VTX(980, 240, -130, 10240, 1024, 192, 237, 192, 255),
    VTX(980, 300, -130, 10240, -1024, 48, 45, 46, 255),
    VTX(1920, 300, -130, 0, -1024, 48, 45, 46, 255),
    VTX(1920, 240, -130, 0, 1024, 48, 45, 46, 255),
    VTX(2240, 240, 520, 8448, 1024, 192, 237, 192, 255),
    VTX(2240, 300, 520, 8448, -1024, 48, 45, 46, 255),
    VTX(2240, 300, -420, 0, -1024, 48, 45, 46, 255),
    VTX(2240, 240, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1920, 300, 520, 5120, -1024, 48, 45, 46, 255),
    VTX(1920, 240, 520, 5120, 1024, 48, 45, 46, 255),
    VTX(1920, 240, -130, 0, 1024, 92, 113, 95, 255),
    VTX(1920, 300, -130, 0, -1024, 48, 45, 46, 255),
    VTX(2210, 240, -450, 10837, 1024, 92, 113, 95, 255),
    VTX(2210, 300, -450, 10837, -1024, 48, 45, 46, 255),
    VTX(980, 300, -450, 0, -1024, 48, 45, 46, 255),
    VTX(980, 240, -450, 0, 1024, 48, 45, 46, 255),
    VTX(980, 300, -160, 4096, -1024, 48, 45, 46, 255),
    VTX(980, 240, -160, 4096, 1024, 192, 237, 192, 255),
    VTX(980, 240, -420, 0, 1024, 192, 237, 192, 255),
    VTX(980, 300, -420, 0, -1024, 48, 45, 46, 255),
}; 

static Vtx water_temple_room_08Vtx_000960[12] = {
    VTX(1465, 300, -420, 0, -1024, 48, 45, 46, 255),
    VTX(1465, 240, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1465, 240, -160, 4096, 1024, 192, 237, 192, 255),
    VTX(1465, 300, -160, 4096, -1024, 48, 45, 46, 255),
    VTX(1905, 300, -420, 0, -1024, 48, 45, 46, 255),
    VTX(1905, 240, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1905, 240, -160, 4096, 1024, 192, 237, 192, 255),
    VTX(1905, 300, -160, 4096, -1024, 48, 45, 46, 255),
    VTX(2210, 300, -145, 0, -1024, 48, 45, 46, 255),
    VTX(2210, 240, -145, 0, 1024, 92, 113, 95, 255),
    VTX(1920, 240, -145, 4096, 1024, 192, 237, 192, 255),
    VTX(1920, 300, -145, 4096, -1024, 48, 45, 46, 255),
}; 

static Vtx water_temple_room_08Vtx_000A20[4] = {
    VTX(2210, 240, 520, 228, 1024, 92, 113, 95, 255),
    VTX(1950, 240, 520, 4096, 1024, 192, 237, 192, 255),
    VTX(1950, 300, 520, 4096, -1024, 48, 45, 46, 255),
    VTX(2210, 300, 520, 228, -1024, 48, 45, 46, 255),
}; 

static Vtx water_temple_room_08Vtx_000A60[32] = {
    VTX(2210, 0, 490, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 60, 490, 0, 0, 92, 113, 95, 255),
    VTX(2240, 60, 490, 1024, 0, 76, 76, 76, 255),
    VTX(2240, 0, 490, 1024, 1024, 76, 76, 76, 255),
    VTX(2210, 0, 520, 0, 1024, 192, 237, 192, 255),
    VTX(2210, 60, 520, 0, 0, 48, 45, 46, 255),
    VTX(2210, 60, 490, 1024, 0, 92, 113, 95, 255),
    VTX(2210, 0, 490, 1024, 1024, 192, 237, 192, 255),
    VTX(1950, 0, 490, 1024, 1024, 192, 237, 192, 255),
    VTX(1950, 60, 490, 1024, 0, 92, 113, 95, 255),
    VTX(1950, 60, 520, 0, 0, 48, 45, 46, 255),
    VTX(1950, 0, 520, 0, 1024, 192, 237, 192, 255),
    VTX(1920, 0, 490, 1024, 1024, 76, 76, 76, 255),
    VTX(1920, 60, 490, 1024, 0, 76, 76, 76, 255),
    VTX(1950, 60, 490, 0, 0, 92, 113, 95, 255),
    VTX(1950, 0, 490, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 0, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(2210, 60, -420, 1024, 0, 92, 113, 95, 255),
    VTX(2210, 60, -450, 0, 0, 48, 45, 46, 255),
    VTX(2210, 0, -450, 0, 1024, 192, 237, 192, 255),
    VTX(1920, 0, -420, 1024, 1024, 76, 76, 76, 255),
    VTX(1920, 60, -420, 1024, 0, 76, 76, 76, 255),
    VTX(1890, 60, -420, 0, 0, 92, 113, 95, 255),
    VTX(1890, 0, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1890, 0, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1890, 60, -420, 1024, 0, 92, 113, 95, 255),
    VTX(1890, 60, -450, 0, 0, 48, 45, 46, 255),
    VTX(1890, 0, -450, 0, 1024, 192, 237, 192, 255),
    VTX(1450, 0, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1450, 60, -420, 1024, 0, 92, 113, 95, 255),
    VTX(1450, 60, -450, 0, 0, 48, 45, 46, 255),
    VTX(1450, 0, -450, 0, 1024, 192, 237, 192, 255),
}; 

static Vtx water_temple_room_08Vtx_000C60[32] = {
    VTX(1480, 0, -420, 1024, 1024, 76, 76, 76, 255),
    VTX(1480, 60, -420, 1024, 0, 76, 76, 76, 255),
    VTX(1450, 60, -420, 0, 0, 92, 113, 95, 255),
    VTX(1450, 0, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1010, 0, -420, 1024, 1024, 76, 76, 76, 255),
    VTX(1010, 60, -420, 1024, 0, 76, 76, 76, 255),
    VTX(980, 60, -420, 0, 0, 92, 113, 95, 255),
    VTX(980, 0, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1010, 0, -450, 0, 1024, 192, 237, 192, 255),
    VTX(1010, 60, -450, 0, 0, 48, 45, 46, 255),
    VTX(1010, 60, -420, 1024, 0, 92, 113, 95, 255),
    VTX(1010, 0, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1480, 0, -450, 0, 1024, 192, 237, 192, 255),
    VTX(1480, 60, -450, 0, 0, 48, 45, 46, 255),
    VTX(1480, 60, -420, 1024, 0, 92, 113, 95, 255),
    VTX(1480, 0, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1920, 0, -450, 0, 1024, 192, 237, 192, 255),
    VTX(1920, 60, -450, 0, 0, 48, 45, 46, 255),
    VTX(1920, 60, -420, 1024, 0, 92, 113, 95, 255),
    VTX(1920, 0, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(2240, 0, -420, 1024, 1024, 76, 76, 76, 255),
    VTX(2240, 60, -420, 1024, 0, 76, 76, 76, 255),
    VTX(2210, 60, -420, 0, 0, 92, 113, 95, 255),
    VTX(2210, 0, -420, 0, 1024, 92, 113, 95, 255),
    VTX(1920, 0, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1920, 60, -160, 1024, 0, 92, 113, 95, 255),
    VTX(1920, 60, -130, 0, 0, 48, 45, 46, 255),
    VTX(1920, 0, -130, 0, 1024, 192, 237, 192, 255),
    VTX(1890, 0, -130, 0, 1024, 192, 237, 192, 255),
    VTX(1890, 60, -130, 0, 0, 48, 45, 46, 255),
    VTX(1890, 60, -160, 1024, 0, 92, 113, 95, 255),
    VTX(1890, 0, -160, 1024, 1024, 192, 237, 192, 255),
}; 

static Vtx water_temple_room_08Vtx_000E60[32] = {
    VTX(1890, 0, -160, 0, 1024, 92, 113, 95, 255),
    VTX(1890, 60, -160, 0, 0, 92, 113, 95, 255),
    VTX(1920, 60, -160, 1024, 0, 76, 76, 76, 255),
    VTX(1920, 0, -160, 1024, 1024, 76, 76, 76, 255),
    VTX(1480, 0, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1480, 60, -160, 1024, 0, 92, 113, 95, 255),
    VTX(1480, 60, -130, 0, 0, 48, 45, 46, 255),
    VTX(1480, 0, -130, 0, 1024, 192, 237, 192, 255),
    VTX(1450, 0, -160, 0, 1024, 92, 113, 95, 255),
    VTX(1450, 60, -160, 0, 0, 92, 113, 95, 255),
    VTX(1480, 60, -160, 1024, 0, 76, 76, 76, 255),
    VTX(1480, 0, -160, 1024, 1024, 76, 76, 76, 255),
    VTX(1450, 0, -130, 0, 1024, 192, 237, 192, 255),
    VTX(1450, 60, -130, 0, 0, 48, 45, 46, 255),
    VTX(1450, 60, -160, 1024, 0, 92, 113, 95, 255),
    VTX(1450, 0, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1010, 0, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1010, 60, -160, 1024, 0, 92, 113, 95, 255),
    VTX(1010, 60, -130, 0, 0, 48, 45, 46, 255),
    VTX(1010, 0, -130, 0, 1024, 192, 237, 192, 255),
    VTX(980, 0, -160, 0, 1024, 92, 113, 95, 255),
    VTX(980, 60, -160, 0, 0, 92, 113, 95, 255),
    VTX(1010, 60, -160, 1024, 0, 76, 76, 76, 255),
    VTX(1010, 0, -160, 1024, 1024, 76, 76, 76, 255),
    VTX(2210, 0, -130, 0, 1024, 192, 237, 192, 255),
    VTX(2210, 60, -130, 0, 0, 48, 45, 46, 255),
    VTX(2210, 60, -160, 1024, 0, 92, 113, 95, 255),
    VTX(2210, 0, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(2210, 0, -160, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 60, -160, 0, 0, 92, 113, 95, 255),
    VTX(2240, 60, -160, 1024, 0, 76, 76, 76, 255),
    VTX(2240, 0, -160, 1024, 1024, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_08Vtx_001060[4] = {
    VTX(2240, 0, -130, 1024, 1024, 76, 76, 76, 255),
    VTX(2240, 60, -130, 1024, 0, 76, 76, 76, 255),
    VTX(2210, 60, -130, 0, 0, 92, 113, 95, 255),
    VTX(2210, 0, -130, 0, 1024, 92, 113, 95, 255),
}; 

static Vtx water_temple_room_08Vtx_0010A0[93] = {
    VTX(1950, 60, 490, 1024, 1024, 192, 237, 192, 255),
    VTX(1950, 300, 490, 1024, -5120, 48, 45, 46, 255),
    VTX(1950, 300, 520, 0, -5120, 48, 45, 46, 255),
    VTX(1950, 60, 520, 0, 1024, 92, 113, 95, 255),
    VTX(1890, 60, -130, 0, 1024, 92, 113, 95, 255),
    VTX(1890, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(1890, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(1890, 60, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1920, 60, 490, 1024, 1024, 48, 45, 46, 255),
    VTX(1920, 300, 490, 1024, -5120, 48, 45, 46, 255),
    VTX(1950, 300, 490, 0, -5120, 48, 45, 46, 255),
    VTX(1950, 60, 490, 0, 1024, 192, 237, 192, 255),
    VTX(1890, 60, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1890, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(1890, 300, -450, 0, -5120, 48, 45, 46, 255),
    VTX(1890, 60, -450, 0, 1024, 92, 113, 95, 255),
    VTX(1890, 60, -160, 0, 1024, 192, 237, 192, 255),
    VTX(1890, 300, -160, 0, -5120, 48, 45, 46, 255),
    VTX(1920, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(1920, 60, -160, 1024, 1024, 48, 45, 46, 255),
    VTX(1480, 60, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1480, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(1480, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(1480, 60, -130, 0, 1024, 92, 113, 95, 255),
    VTX(1010, 60, -450, 0, 1024, 92, 113, 95, 255),
    VTX(1010, 300, -450, 0, -5120, 48, 45, 46, 255),
    VTX(1010, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(1010, 60, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1450, 60, -160, 0, 1024, 192, 237, 192, 255),
    VTX(1450, 300, -160, 0, -5120, 48, 45, 46, 255),
    VTX(1480, 60, -160, 1024, 1024, 48, 45, 46, 255),
    VTX(2210, 60, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(2210, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(2210, 300, -450, 0, -5120, 48, 45, 46, 255),
    VTX(2210, 60, -450, 0, 1024, 92, 113, 95, 255),
    VTX(1450, 60, -130, 0, 1024, 92, 113, 95, 255),
    VTX(1450, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(1450, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(1450, 60, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1920, 60, -420, 1024, 1024, 48, 45, 46, 255),
    VTX(1920, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(1890, 300, -420, 0, -5120, 48, 45, 46, 255),
    VTX(1890, 60, -420, 0, 1024, 192, 237, 192, 255),
    VTX(1480, 60, -450, 0, 1024, 92, 113, 95, 255),
    VTX(1480, 300, -450, 0, -5120, 48, 45, 46, 255),
    VTX(1480, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(1480, 60, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1010, 60, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1010, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(1010, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(1010, 60, -130, 0, 1024, 92, 113, 95, 255),
    VTX(1920, 60, -450, 0, 1024, 92, 113, 95, 255),
    VTX(1920, 300, -450, 0, -5120, 48, 45, 46, 255),
    VTX(1920, 60, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(980, 60, -160, 0, 1024, 192, 237, 192, 255),
    VTX(980, 300, -160, 0, -5120, 48, 45, 46, 255),
    VTX(1010, 60, -160, 1024, 1024, 48, 45, 46, 255),
    VTX(2210, 60, -130, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(2210, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(2210, 60, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1450, 60, -420, 1024, 1024, 192, 237, 192, 255),
    VTX(1450, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(1450, 300, -450, 0, -5120, 48, 45, 46, 255),
    VTX(1450, 60, -450, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 60, -160, 0, 1024, 192, 237, 192, 255),
    VTX(2210, 300, -160, 0, -5120, 48, 45, 46, 255),
    VTX(2240, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(2240, 60, -160, 1024, 1024, 48, 45, 46, 255),
    VTX(2240, 60, -420, 1024, 1024, 48, 45, 46, 255),
    VTX(2240, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(2210, 300, -420, 0, -5120, 48, 45, 46, 255),
    VTX(2210, 60, -420, 0, 1024, 192, 237, 192, 255),
    VTX(1480, 60, -420, 1024, 1024, 48, 45, 46, 255),
    VTX(1480, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(1450, 300, -420, 0, -5120, 48, 45, 46, 255),
    VTX(1450, 60, -420, 0, 1024, 192, 237, 192, 255),
    VTX(2240, 60, -130, 1024, 1024, 48, 45, 46, 255),
    VTX(2240, 300, -130, 1024, -5120, 48, 45, 46, 255),
    VTX(2210, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(2210, 60, -130, 0, 1024, 192, 237, 192, 255),
    VTX(1920, 60, -160, 1024, 1024, 192, 237, 192, 255),
    VTX(1920, 300, -160, 1024, -5120, 48, 45, 46, 255),
    VTX(1920, 300, -130, 0, -5120, 48, 45, 46, 255),
    VTX(1920, 60, -130, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 60, 490, 0, 1024, 192, 237, 192, 255),
    VTX(2210, 300, 490, 0, -5120, 48, 45, 46, 255),
    VTX(2240, 300, 490, 1024, -5120, 48, 45, 46, 255),
    VTX(2240, 60, 490, 1024, 1024, 48, 45, 46, 255),
    VTX(1010, 60, -420, 1024, 1024, 48, 45, 46, 255),
    VTX(1010, 300, -420, 1024, -5120, 48, 45, 46, 255),
    VTX(980, 300, -420, 0, -5120, 48, 45, 46, 255),
    VTX(980, 60, -420, 0, 1024, 192, 237, 192, 255),
}; 

static Vtx water_temple_room_08Vtx_001670[4] = {
    VTX(2210, 60, 520, 0, 1024, 92, 113, 95, 255),
    VTX(2210, 300, 520, 0, -5120, 48, 45, 46, 255),
    VTX(2210, 300, 490, 1024, -5120, 48, 45, 46, 255),
    VTX(2210, 60, 490, 1024, 1024, 192, 237, 192, 255),
}; 

static Vtx water_temple_room_08Vtx_0016B0[8] = {
    VTX(960, 0, -450, 0, 0, 0, 0, 0, 0),
    VTX(2240, 0, -450, 0, 0, 0, 0, 0, 0),
    VTX(960, 300, -450, 0, 0, 0, 0, 0, 0),
    VTX(2240, 300, -450, 0, 0, 0, 0, 0, 0),
    VTX(960, 0, 540, 0, 0, 0, 0, 0, 0),
    VTX(2240, 0, 540, 0, 0, 0, 0, 0, 0),
    VTX(960, 300, 540, 0, 0, 0, 0, 0, 0),
    VTX(2240, 300, 540, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_08Dlist0x001730[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_08Vtx_0016B0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_08Vtx_000060[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(30, 27, 29, 0, 20, 31, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_08Tex_001D18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_000260[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_08Tex_002518, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_0002E0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_08Tex_003518, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_0003E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(23, 26, 24, 0, 4, 27, 5, 0),
    gsSP2Triangles(27, 7, 5, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&water_temple_room_08Vtx_0005E0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_08Tex_003D18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_0006A0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_08Tex_004518, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_000820[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_08Vtx_000960[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_08Vtx_000A20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_000A60[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_08Vtx_000C60[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_08Vtx_000E60[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_08Vtx_001060[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_08Vtx_0010A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 21, 0, 28, 21, 30, 0),
    gsSPVertex(&water_temple_room_08Vtx_0010A0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 9, 0, 20, 9, 22, 0),
    gsSP2Triangles(23, 24, 17, 0, 23, 17, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_08Vtx_0010A0[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_08Vtx_001670[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_08Tex_001D18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_08Tex_001D18.rgb5a1.inc.c"
};

u64 water_temple_room_08Tex_002518[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_08Tex_002518.rgb5a1.inc.c"
};

u64 water_temple_room_08Tex_003518[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_08Tex_003518.rgb5a1.inc.c"
};

u64 water_temple_room_08Tex_003D18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_08Tex_003D18.rgb5a1.inc.c"
};

u64 water_temple_room_08Tex_004518[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_08Tex_004518.rgb5a1.inc.c"
};

Gfx water_temple_room_08Dlist0x004D18[] = {
    gsSPDisplayList(water_temple_room_08Dlist0x001730),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_004D28[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


