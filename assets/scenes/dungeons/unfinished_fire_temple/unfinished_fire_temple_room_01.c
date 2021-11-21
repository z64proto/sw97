#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unfinished_fire_temple_room_01.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unfinished_fire_temple_scene.h"


static SCmdRoomBehavior unfinished_fire_temple_room_01Set0000Cmd00;
static SCmdBase unfinished_fire_temple_room_01Set0000Cmd01;
static SCmdSkyboxDisables unfinished_fire_temple_room_01Set0000Cmd02;
static SCmdMesh unfinished_fire_temple_room_01Set0000Cmd03;
static SCmdObjectList unfinished_fire_temple_room_01Set0000Cmd04;
static SCmdEndMarker unfinished_fire_temple_room_01Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx unfinished_fire_temple_room_01Vtx_000060[16];
static Vtx unfinished_fire_temple_room_01Vtx_000160[28];
static Vtx unfinished_fire_temple_room_01Vtx_000320[8];

static SCmdRoomBehavior unfinished_fire_temple_room_01Set0000Cmd00 = {  0x08, 0x00, 0x00000001 }; // 0x0000

static SCmdBase unfinished_fire_temple_room_01Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables unfinished_fire_temple_room_01Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh unfinished_fire_temple_room_01Set0000Cmd03 = {  0x0A, 0, (u32)&unfinished_fire_temple_room_01MeshHeader0x000040 }; // 0x0018

static SCmdObjectList unfinished_fire_temple_room_01Set0000Cmd04 = {  0x0B, 0x02, (u32)unfinished_fire_temple_room_01ObjectList0x000030 }; // 0x0020

static SCmdEndMarker unfinished_fire_temple_room_01Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 unfinished_fire_temple_room_01ObjectList0x000030[2] = {
	OBJECT_FIRE,
    OBJECT_DDAN_OBJECTS, // manually added
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 unfinished_fire_temple_room_01MeshHeader0x000040 = { { 0 }, 0x01, (u32)&unfinished_fire_temple_room_01MeshDListEntry0x00004C, (u32)&(unfinished_fire_temple_room_01MeshDListEntry0x00004C) + sizeof(unfinished_fire_temple_room_01MeshDListEntry0x00004C) }; 

MeshEntry0 unfinished_fire_temple_room_01MeshDListEntry0x00004C[1] = {
	{ (u32)unfinished_fire_temple_room_01Dlist0x000CE8, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx unfinished_fire_temple_room_01Vtx_000060[16] = {
    VTX(2940, 2900, -30, -512, 1024, 143, 94, 35, 255),
    VTX(2960, 2900, -30, 0, 1024, 60, 37, 15, 255),
    VTX(2960, 2900, 30, 0, 2560, 60, 37, 15, 255),
    VTX(2940, 2900, 30, -512, 2560, 143, 94, 35, 255),
    VTX(2960, 2800, 30, -1024, 1024, 60, 37, 15, 255),
    VTX(2940, 2800, 30, -512, 1024, 32, 19, 7, 255),
    VTX(2940, 2900, 30, -512, -1536, 143, 94, 35, 255),
    VTX(2960, 2900, 30, -1024, -1536, 60, 37, 15, 255),
    VTX(2960, 2900, -30, -1024, -1536, 60, 37, 15, 255),
    VTX(2940, 2900, -30, -512, -1536, 143, 94, 35, 255),
    VTX(2940, 2800, -30, -512, 1024, 32, 19, 7, 255),
    VTX(2960, 2800, -30, -1024, 1024, 60, 37, 15, 255),
    VTX(2960, 2800, -30, 0, 512, 60, 37, 15, 255),
    VTX(2940, 2800, -30, 0, 1024, 32, 19, 7, 255),
    VTX(2940, 2800, 30, 1536, 1024, 32, 19, 7, 255),
    VTX(2960, 2800, 30, 1536, 512, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_01Vtx_000160[28] = {
    VTX(2680, 2800, 100, -6144, 3072, 60, 37, 15, 255),
    VTX(2680, 2900, 100, -6144, -2048, 104, 55, 15, 255),
    VTX(2940, 2900, 100, 7168, -2048, 143, 94, 35, 255),
    VTX(2940, 2800, 100, 7168, 3072, 60, 37, 15, 255),
    VTX(2940, 2900, -100, -5120, 6144, 143, 94, 35, 255),
    VTX(2940, 2900, 100, -5120, -4096, 143, 94, 35, 255),
    VTX(2680, 2900, 100, 8192, -4096, 104, 55, 15, 255),
    VTX(2680, 2900, -100, 8192, 6144, 104, 55, 15, 255),
    VTX(2940, 2800, 100, 0, 1024, 60, 37, 15, 255),
    VTX(2940, 2900, 100, 0, -4096, 143, 94, 35, 255),
    VTX(2940, 2900, 30, 3584, -4096, 143, 94, 35, 255),
    VTX(2940, 2800, 30, 3584, 1024, 60, 37, 15, 255),
    VTX(2940, 2900, -30, 6656, -4096, 143, 94, 35, 255),
    VTX(2940, 2900, -100, 10240, -4096, 143, 94, 35, 255),
    VTX(2940, 2800, -100, 10240, 1024, 60, 37, 15, 255),
    VTX(2940, 2800, -30, 6656, 1024, 60, 37, 15, 255),
    VTX(2680, 2800, -100, 8192, 6144, 60, 37, 15, 255),
    VTX(2680, 2800, 100, 8192, -4096, 60, 37, 15, 255),
    VTX(2940, 2800, 100, -5120, -4096, 60, 37, 15, 255),
    VTX(2940, 2800, -100, -5120, 6144, 60, 37, 15, 255),
    VTX(2940, 2800, -100, 7168, 3072, 60, 37, 15, 255),
    VTX(2940, 2900, -100, 7168, -2048, 143, 94, 35, 255),
    VTX(2680, 2900, -100, -6144, -2048, 104, 55, 15, 255),
    VTX(2680, 2800, -100, -6144, 3072, 60, 37, 15, 255),
    VTX(2680, 2800, -100, 10240, 1024, 60, 37, 15, 255),
    VTX(2680, 2900, -100, 10240, -4096, 104, 55, 15, 255),
    VTX(2680, 2900, 100, 0, -4096, 104, 55, 15, 255),
    VTX(2680, 2800, 100, 0, 1024, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_01Vtx_000320[8] = {
    VTX(2680, 2800, -100, 0, 0, 0, 0, 0, 0),
    VTX(2680, 2800, 100, 0, 0, 0, 0, 0, 0),
    VTX(2680, 2900, -100, 0, 0, 0, 0, 0, 0),
    VTX(2680, 2900, 100, 0, 0, 0, 0, 0, 0),
    VTX(2960, 2800, -100, 0, 0, 0, 0, 0, 0),
    VTX(2960, 2800, 100, 0, 0, 0, 0, 0, 0),
    VTX(2960, 2900, -100, 0, 0, 0, 0, 0, 0),
    VTX(2960, 2900, 100, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_01Dlist0x0003A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_01Vtx_000320[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_01Vtx_000060[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_01Tex_0004E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_01Vtx_000160[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_01Tex_0004E8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_01Tex_0004E8.rgb5a1.inc.c"
};

Gfx unfinished_fire_temple_room_01Dlist0x000CE8[] = {
    gsSPDisplayList(unfinished_fire_temple_room_01Dlist0x0003A0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000CF8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


