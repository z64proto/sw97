#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fire_temple_room_05.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fire_temple_scene.h"


static SCmdEchoSettings fire_temple_room_05Set0000Cmd00;
static SCmdRoomBehavior fire_temple_room_05Set0000Cmd01;
static SCmdSkyboxDisables fire_temple_room_05Set0000Cmd02;
static SCmdMesh fire_temple_room_05Set0000Cmd03;
static SCmdObjectList fire_temple_room_05Set0000Cmd04;
static SCmdEndMarker fire_temple_room_05Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx fire_temple_room_05Vtx_000060[32];
static Vtx fire_temple_room_05Vtx_000260[29];
static Vtx fire_temple_room_05Vtx_000430[12];
static Vtx fire_temple_room_05Vtx_0004F0[5];
static Vtx fire_temple_room_05Vtx_000540[94];
static Vtx fire_temple_room_05Vtx_000B20[15];
static Vtx fire_temple_room_05Vtx_000C10[8];

static SCmdEchoSettings fire_temple_room_05Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fire_temple_room_05Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fire_temple_room_05Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh fire_temple_room_05Set0000Cmd03 = {  0x0A, 0, (u32)&fire_temple_room_05MeshHeader0x000040 }; // 0x0018

static SCmdObjectList fire_temple_room_05Set0000Cmd04 = {  0x0B, 0x02, (u32)fire_temple_room_05ObjectList0x000030 }; // 0x0020

static SCmdEndMarker fire_temple_room_05Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 fire_temple_room_05ObjectList0x000030[2] = {
	OBJECT_HIDAN_OBJECTS,
	OBJECT_FIRE,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 fire_temple_room_05MeshHeader0x000040 = { { 0 }, 0x01, (u32)&fire_temple_room_05MeshDListEntry0x00004C, (u32)&(fire_temple_room_05MeshDListEntry0x00004C) + sizeof(fire_temple_room_05MeshDListEntry0x00004C) }; 

MeshEntry0 fire_temple_room_05MeshDListEntry0x00004C[1] = {
	{ (u32)fire_temple_room_05Dlist0x003818, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx fire_temple_room_05Vtx_000060[32] = {
    VTX(1990, 4400, -590, 512, -512, 22, 3, 5, 255),
    VTX(1930, 4400, -610, 0, 1024, 104, 55, 15, 255),
    VTX(1930, 4400, -590, 512, 1024, 22, 3, 5, 255),
    VTX(1990, 4400, -610, 0, -512, 104, 55, 15, 255),
    VTX(1990, 4500, -590, 2560, 1024, 22, 3, 5, 255),
    VTX(1990, 4400, -610, 0, 512, 104, 55, 15, 255),
    VTX(1990, 4400, -590, 0, 1024, 22, 3, 5, 255),
    VTX(1990, 4500, -610, 2560, 512, 60, 37, 15, 255),
    VTX(1930, 4400, -590, 0, 1024, 22, 3, 5, 255),
    VTX(1930, 4500, -610, 2560, 512, 60, 37, 15, 255),
    VTX(1930, 4500, -590, 2560, 1024, 22, 3, 5, 255),
    VTX(1930, 4400, -610, 0, 512, 104, 55, 15, 255),
    VTX(1930, 4500, -590, 512, 1024, 22, 3, 5, 255),
    VTX(1990, 4500, -610, 0, -512, 60, 37, 15, 255),
    VTX(1990, 4500, -590, 512, -512, 22, 3, 5, 255),
    VTX(1930, 4500, -610, 0, 1024, 60, 37, 15, 255),
    VTX(1930, 4100, -570, 1024, 512, 60, 37, 15, 255),
    VTX(1930, 4100, -590, 512, 512, 22, 3, 5, 255),
    VTX(1990, 4100, -590, 512, -1024, 22, 3, 5, 255),
    VTX(1990, 4100, -570, 1024, -1024, 60, 37, 15, 255),
    VTX(1990, 4100, -570, 1024, -1536, 60, 37, 15, 255),
    VTX(1990, 4100, -590, 512, -1536, 22, 3, 5, 255),
    VTX(1990, 4000, -590, 512, 1024, 22, 3, 5, 255),
    VTX(1990, 4000, -570, 1024, 1024, 143, 94, 35, 255),
    VTX(1990, 4000, -570, 1024, -1024, 143, 94, 35, 255),
    VTX(1990, 4000, -590, 512, -1024, 22, 3, 5, 255),
    VTX(1930, 4000, -590, 512, 512, 22, 3, 5, 255),
    VTX(1930, 4000, -570, 1024, 512, 143, 94, 35, 255),
    VTX(1930, 4000, -570, 1024, 1024, 143, 94, 35, 255),
    VTX(1930, 4000, -590, 512, 1024, 22, 3, 5, 255),
    VTX(1930, 4100, -590, 512, -1536, 22, 3, 5, 255),
    VTX(1930, 4100, -570, 1024, -1536, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_05Vtx_000260[29] = {
    VTX(2020, 4180, -810, 0, 2048, 104, 55, 15, 255),
    VTX(2020, 4280, -770, 1024, -512, 143, 94, 35, 255),
    VTX(2020, 4280, -810, 0, -512, 60, 37, 15, 255),
    VTX(2020, 4180, -770, 1024, 2048, 104, 55, 15, 255),
    VTX(1780, 4000, -810, 0, 2048, 104, 55, 15, 255),
    VTX(1820, 4100, -810, 1024, -512, 60, 37, 15, 255),
    VTX(1780, 4100, -810, 0, -512, 60, 37, 15, 255),
    VTX(1820, 4000, -810, 1024, 2048, 60, 37, 15, 255),
    VTX(1780, 4000, -850, 1024, 2048, 60, 37, 15, 255),
    VTX(1780, 4100, -810, 0, -512, 143, 94, 35, 255),
    VTX(1780, 4100, -850, 1024, -512, 60, 37, 15, 255),
    VTX(2020, 4180, -730, 2048, 2048, 104, 55, 15, 255),
    VTX(2020, 4380, -730, 2048, -3072, 143, 94, 35, 255),
    VTX(2020, 4380, -770, 1024, -3072, 60, 37, 15, 255),
    VTX(2020, 4320, -730, 0, -1536, 60, 37, 15, 255),
    VTX(2020, 4180, -730, 0, 2048, 104, 55, 15, 255),
    VTX(2060, 4180, -730, 1024, 2048, 60, 37, 15, 255),
    VTX(2060, 4320, -730, 1024, -1536, 32, 19, 7, 255),
    VTX(2060, 4380, -730, 1024, -512, 60, 37, 15, 255),
    VTX(2020, 4380, -730, 0, -512, 60, 37, 15, 255),
    VTX(2020, 4320, -730, 0, 256, 60, 37, 15, 255),
    VTX(2060, 4320, -730, 1024, 256, 60, 37, 15, 255),
    VTX(2060, 4280, -770, 1024, -512, 60, 37, 15, 255),
    VTX(2020, 4280, -770, 0, -512, 60, 37, 15, 255),
    VTX(2020, 4380, -770, 0, -3072, 60, 37, 15, 255),
    VTX(2060, 4380, -770, 1024, -3072, 155, 112, 29, 255),
    VTX(2060, 4180, -810, 1024, 2048, 60, 37, 15, 255),
    VTX(2020, 4280, -810, 0, -512, 143, 94, 35, 255),
    VTX(2060, 4280, -810, 1024, -512, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_05Vtx_000430[12] = {
    VTX(1780, 4100, -850, 4096, 2048, 60, 37, 15, 255),
    VTX(1780, 4100, -810, 4096, 4096, 143, 94, 35, 255),
    VTX(1820, 4100, -810, 6144, 4096, 60, 37, 15, 255),
    VTX(2020, 4280, -810, 4096, 2048, 60, 37, 15, 255),
    VTX(2020, 4280, -770, 4096, 4096, 143, 94, 35, 255),
    VTX(2060, 4280, -770, 6144, 4096, 60, 37, 15, 255),
    VTX(2060, 4280, -810, 6144, 2048, 104, 55, 15, 255),
    VTX(2020, 4380, -770, 4096, 2048, 60, 37, 15, 255),
    VTX(2060, 4380, -730, 6144, 4096, 60, 37, 15, 255),
    VTX(2060, 4380, -770, 6144, 2048, 104, 55, 15, 255),
    VTX(2020, 4380, -730, 4096, 4096, 143, 94, 35, 255),
    VTX(1820, 4100, -850, 6144, 2048, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_05Vtx_0004F0[5] = {
    VTX(1840, 4160, -370, 1024, 1024, 186, 185, 49, 255),
    VTX(1920, 4080, -370, 0, 2048, 253, 191, 172, 255),
    VTX(1760, 4080, -370, 2048, 2048, 253, 191, 172, 255),
    VTX(1920, 4240, -370, 0, 0, 22, 3, 5, 255),
    VTX(1760, 4240, -370, 2048, 0, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_05Vtx_000540[94] = {
    VTX(1860, 4540, -850, 9728, -11264, 41, 23, 9, 255),
    VTX(2060, 4540, -610, -512, 1024, 22, 3, 5, 255),
    VTX(1860, 4540, -610, 9728, 1024, 22, 3, 5, 255),
    VTX(2060, 4540, -850, -512, -11264, 41, 23, 9, 255),
    VTX(1860, 4400, -610, 9728, -5120, 104, 55, 15, 255),
    VTX(2060, 4400, -730, -512, 1024, 60, 37, 15, 255),
    VTX(1860, 4400, -730, 9728, 1024, 60, 37, 15, 255),
    VTX(2060, 4400, -610, -512, -5120, 104, 55, 15, 255),
    VTX(2060, 4400, -730, -512, -3072, 104, 55, 15, 255),
    VTX(2060, 4320, -730, -512, 1024, 155, 112, 29, 255),
    VTX(1860, 4320, -730, 9728, 1024, 41, 23, 9, 255),
    VTX(1860, 4400, -730, 9728, -3072, 60, 37, 15, 255),
    VTX(1860, 4320, -850, 12288, 5120, 155, 112, 29, 255),
    VTX(1860, 4400, -730, 6144, 1024, 60, 37, 15, 255),
    VTX(1860, 4320, -730, 6144, 5120, 41, 23, 9, 255),
    VTX(1820, 4000, -570, 5632, 1024, 143, 94, 35, 255),
    VTX(1930, 4000, -570, 0, 1024, 143, 94, 35, 255),
    VTX(1930, 4100, -570, 0, 6144, 60, 37, 15, 255),
    VTX(1820, 4180, -570, 5632, 10240, 143, 94, 35, 255),
    VTX(1820, 4000, -570, 0, 1024, 143, 94, 35, 255),
    VTX(1820, 4180, -850, 14336, 10240, 60, 37, 15, 255),
    VTX(1820, 4000, -850, 14336, 1024, 41, 23, 9, 255),
    VTX(1820, 4180, -570, 0, 10240, 60, 37, 15, 255),
    VTX(1860, 4320, -850, 2048, 13312, 32, 19, 7, 255),
    VTX(1860, 4320, -730, 2048, 7168, 32, 19, 7, 255),
    VTX(1620, 4320, -370, -10240, -11264, 22, 3, 5, 255),
    VTX(1620, 4320, -850, -10240, 13312, 36, 14, 5, 255),
    VTX(1620, 4000, -850, 14336, 8192, 60, 37, 15, 255),
    VTX(1620, 4320, -850, 14336, -8192, 36, 14, 5, 255),
    VTX(1620, 4000, -370, -10240, 8192, 104, 55, 15, 255),
    VTX(1620, 4320, -370, -10240, -8192, 36, 14, 5, 255),
    VTX(1620, 4000, -850, 10240, 17408, 41, 23, 9, 255),
    VTX(1620, 4000, -370, 10240, -7168, 104, 55, 15, 255),
    VTX(1820, 4000, -570, 0, 3072, 104, 55, 15, 255),
    VTX(1820, 4000, -850, 0, 17408, 32, 19, 7, 255),
    VTX(2060, 4000, -370, 12288, 10240, 143, 94, 35, 255),
    VTX(2060, 4320, -370, 12288, -6144, 22, 3, 5, 255),
    VTX(2060, 4180, -570, 2048, 1024, 36, 14, 5, 255),
    VTX(2060, 4000, -570, 2048, 10240, 155, 112, 29, 255),
    VTX(2060, 4320, -850, -12288, -6144, 36, 14, 5, 255),
    VTX(2060, 4180, -850, -12288, 1024, 104, 55, 15, 255),
    VTX(1620, 4000, -850, -10240, 11264, 104, 55, 15, 255),
    VTX(1820, 4000, -850, 0, 11264, 60, 37, 15, 255),
    VTX(1820, 4180, -850, 0, 2048, 60, 37, 15, 255),
    VTX(1620, 4320, -850, -10240, -5120, 36, 14, 5, 255),
    VTX(1620, 4320, -370, 22528, -15360, 36, 14, 5, 255),
    VTX(1760, 4080, -370, 15360, -3072, 104, 55, 15, 255),
    VTX(1620, 4000, -370, 22528, 1024, 155, 112, 29, 255),
    VTX(1760, 4240, -370, 15360, -11264, 60, 37, 15, 255),
    VTX(1860, 4400, -730, 6144, 1024, 60, 37, 15, 255),
    VTX(1860, 4320, -850, 12288, 5120, 155, 112, 29, 255),
    VTX(1860, 4540, -850, 12288, -6144, 41, 23, 9, 255),
    VTX(2060, 4540, -850, 12288, -6144, 41, 23, 9, 255),
    VTX(2060, 4320, -850, 12288, 5120, 155, 112, 29, 255),
    VTX(2060, 4400, -730, 6144, 1024, 104, 55, 15, 255),
    VTX(2060, 4320, -730, 6144, 5120, 41, 23, 9, 255),
    VTX(1860, 4540, -610, 0, -6144, 22, 3, 5, 255),
    VTX(1860, 4400, -610, 0, 1024, 104, 55, 15, 255),
    VTX(1920, 4080, -370, 7168, -3072, 104, 55, 15, 255),
    VTX(2060, 4000, -370, 0, 1024, 155, 112, 29, 255),
    VTX(2060, 4320, -370, 0, -15360, 36, 14, 5, 255),
    VTX(1920, 4240, -370, 7168, -11264, 60, 37, 15, 255),
    VTX(1620, 4000, -370, 10240, -7168, 104, 55, 15, 255),
    VTX(2060, 4000, -370, -12288, -7168, 104, 55, 15, 255),
    VTX(2060, 4000, -570, -12288, 3072, 143, 94, 35, 255),
    VTX(1820, 4000, -570, 0, 3072, 104, 55, 15, 255),
    VTX(1820, 4180, -850, 0, -3072, 60, 37, 15, 255),
    VTX(1820, 4180, -570, 0, 11264, 104, 55, 15, 255),
    VTX(2060, 4180, -810, 12288, -1024, 104, 55, 15, 255),
    VTX(2060, 4180, -850, 12288, -3072, 104, 55, 15, 255),
    VTX(2060, 4180, -570, 12288, 11264, 104, 55, 15, 255),
    VTX(1620, 4320, -370, -10240, -11264, 22, 3, 5, 255),
    VTX(1860, 4320, -730, 2048, 7168, 32, 19, 7, 255),
    VTX(2060, 4320, -730, 12288, 7168, 32, 19, 7, 255),
    VTX(2060, 4320, -370, 12288, -11264, 36, 14, 5, 255),
    VTX(2060, 4320, -850, 12288, -5120, 36, 14, 5, 255),
    VTX(1620, 4320, -850, -10240, -5120, 36, 14, 5, 255),
    VTX(1820, 4180, -850, 0, 2048, 60, 37, 15, 255),
    VTX(2060, 4180, -850, 12288, 2048, 60, 37, 15, 255),
    VTX(1920, 4080, -370, 7168, -3072, 104, 55, 15, 255),
    VTX(1920, 4240, -370, 7168, -11264, 60, 37, 15, 255),
    VTX(2060, 4320, -370, 0, -15360, 36, 14, 5, 255),
    VTX(2060, 4000, -370, 0, 1024, 155, 112, 29, 255),
    VTX(2060, 4540, -850, 12288, -6144, 41, 23, 9, 255),
    VTX(2060, 4400, -730, 6144, 1024, 104, 55, 15, 255),
    VTX(2060, 4400, -610, 0, 1024, 104, 55, 15, 255),
    VTX(2060, 4540, -610, 0, -6144, 22, 3, 5, 255),
    VTX(2060, 4400, -610, -6656, 1024, 104, 55, 15, 255),
    VTX(1990, 4500, -610, -3072, -4096, 60, 37, 15, 255),
    VTX(2060, 4540, -610, -6656, -6144, 22, 3, 5, 255),
    VTX(1990, 4400, -610, -3072, 1024, 104, 55, 15, 255),
    VTX(2060, 4320, -850, 9728, -10240, 155, 112, 29, 255),
    VTX(1860, 4540, -850, -512, 1024, 41, 23, 9, 255),
    VTX(1860, 4320, -850, -512, -10240, 155, 112, 29, 255),
}; 

static Vtx fire_temple_room_05Vtx_000B20[15] = {
    VTX(2060, 4320, -850, 9728, -10240, 155, 112, 29, 255),
    VTX(2060, 4540, -850, 9728, 1024, 41, 23, 9, 255),
    VTX(1860, 4540, -850, -512, 1024, 41, 23, 9, 255),
    VTX(2060, 4540, -610, -6656, -6144, 22, 3, 5, 255),
    VTX(1990, 4500, -610, -3072, -4096, 60, 37, 15, 255),
    VTX(1860, 4540, -610, 3584, -6144, 22, 3, 5, 255),
    VTX(1930, 4500, -610, 0, -4096, 60, 37, 15, 255),
    VTX(1930, 4400, -610, 0, 1024, 60, 37, 15, 255),
    VTX(1860, 4400, -610, 3584, 1024, 104, 55, 15, 255),
    VTX(2060, 4180, -570, -6656, 10240, 36, 14, 5, 255),
    VTX(1990, 4100, -570, -3072, 6144, 60, 37, 15, 255),
    VTX(1990, 4000, -570, -3072, 1024, 143, 94, 35, 255),
    VTX(2060, 4000, -570, -6656, 1024, 143, 94, 35, 255),
    VTX(1820, 4180, -570, 5632, 10240, 143, 94, 35, 255),
    VTX(1930, 4100, -570, 0, 6144, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_05Vtx_000C10[8] = {
    VTX(1620, 4000, -850, 0, 0, 0, 0, 0, 0),
    VTX(2060, 4000, -850, 0, 0, 0, 0, 0, 0),
    VTX(1620, 4540, -850, 0, 0, 0, 0, 0, 0),
    VTX(2060, 4540, -850, 0, 0, 0, 0, 0, 0),
    VTX(1620, 4000, -370, 0, 0, 0, 0, 0, 0),
    VTX(2060, 4000, -370, 0, 0, 0, 0, 0, 0),
    VTX(1620, 4540, -370, 0, 0, 0, 0, 0, 0),
    VTX(2060, 4540, -370, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_05Dlist0x000C90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_05Vtx_000C10[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_05Vtx_000060[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_05Tex_001018, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_05Vtx_000260[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 4, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(3, 11, 12, 0, 3, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 0, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_05Tex_002018, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_05Vtx_000430[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 0, 2, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_05Tex_002818, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_05Vtx_0004F0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(1, 0, 3, 0, 4, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_05Vtx_000540[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&fire_temple_room_05Vtx_000540[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 26, 18, 0),
    gsSP2Triangles(25, 18, 20, 0, 27, 28, 16, 0),
    gsSP2Triangles(27, 16, 15, 0, 14, 29, 30, 0),
    gsSP1Triangle(14, 30, 17, 0),
    gsSPVertex(&fire_temple_room_05Vtx_000540[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&fire_temple_room_05Vtx_000B20[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 13, 14, 0),
    gsSP1Triangle(9, 14, 10, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_05Tex_001018[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_05Tex_001018.rgb5a1.inc.c"
};

u64 fire_temple_room_05Tex_002018[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_05Tex_002018.rgb5a1.inc.c"
};

u64 fire_temple_room_05Tex_002818[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_05Tex_002818.rgb5a1.inc.c"
};

Gfx fire_temple_room_05Dlist0x003818[] = {
    gsSPDisplayList(fire_temple_room_05Dlist0x000C90),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_003828[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


