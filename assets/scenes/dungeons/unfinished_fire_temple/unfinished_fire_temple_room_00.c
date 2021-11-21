#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unfinished_fire_temple_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unfinished_fire_temple_scene.h"


static SCmdRoomBehavior unfinished_fire_temple_room_00Set0000Cmd00;
static SCmdBase unfinished_fire_temple_room_00Set0000Cmd01;
static SCmdSkyboxDisables unfinished_fire_temple_room_00Set0000Cmd02;
static SCmdMesh unfinished_fire_temple_room_00Set0000Cmd03;
static SCmdObjectList unfinished_fire_temple_room_00Set0000Cmd04;
static SCmdEndMarker unfinished_fire_temple_room_00Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx unfinished_fire_temple_room_00Vtx_000060[12];
static Vtx unfinished_fire_temple_room_00Vtx_000120[4];
static Vtx unfinished_fire_temple_room_00Vtx_000160[4];
static Vtx unfinished_fire_temple_room_00Vtx_0001A0[8];

static SCmdRoomBehavior unfinished_fire_temple_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000001 }; // 0x0000

static SCmdBase unfinished_fire_temple_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables unfinished_fire_temple_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh unfinished_fire_temple_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&unfinished_fire_temple_room_00MeshHeader0x000040 }; // 0x0018

static SCmdObjectList unfinished_fire_temple_room_00Set0000Cmd04 = {  0x0B, 0x02, (u32)unfinished_fire_temple_room_00ObjectList0x000030 }; // 0x0020

static SCmdEndMarker unfinished_fire_temple_room_00Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 unfinished_fire_temple_room_00ObjectList0x000030[2] = {
	OBJECT_FIRE,
    OBJECT_DDAN_OBJECTS, // manually added
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 unfinished_fire_temple_room_00MeshHeader0x000040 = { { 0 }, 0x01, (u32)&unfinished_fire_temple_room_00MeshDListEntry0x00004C, (u32)&(unfinished_fire_temple_room_00MeshDListEntry0x00004C) + sizeof(unfinished_fire_temple_room_00MeshDListEntry0x00004C) }; 

MeshEntry0 unfinished_fire_temple_room_00MeshDListEntry0x00004C[1] = {
	{ (u32)unfinished_fire_temple_room_00Dlist0x000B58, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx unfinished_fire_temple_room_00Vtx_000060[12] = {
    VTX(720, 2940, 150, 2560, 2048, 104, 55, 15, 255),
    VTX(320, 2940, 150, 2560, -8192, 0, 0, 0, 255),
    VTX(320, 2940, 310, -1536, -8192, 0, 0, 0, 255),
    VTX(720, 2940, 310, -1536, 2048, 104, 55, 15, 255),
    VTX(720, 2940, 310, -1024, 2048, 104, 55, 15, 255),
    VTX(320, 2940, 310, 9216, 2048, 0, 0, 0, 255),
    VTX(320, 3100, 310, 9216, -2048, 0, 0, 0, 255),
    VTX(720, 3100, 310, -1024, -2048, 60, 37, 15, 255),
    VTX(320, 3100, 150, 9216, -2048, 0, 0, 0, 255),
    VTX(320, 2940, 150, 9216, 2048, 0, 0, 0, 255),
    VTX(720, 2940, 150, -1024, 2048, 104, 55, 15, 255),
    VTX(720, 3100, 150, -1024, -2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_00Vtx_000120[4] = {
    VTX(720, 3100, 310, -3072, 2048, 60, 37, 15, 255),
    VTX(320, 3100, 310, -3072, -18432, 0, 0, 0, 255),
    VTX(320, 3100, 150, 5120, -18432, 0, 0, 0, 255),
    VTX(720, 3100, 150, 5120, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_00Vtx_000160[4] = {
    VTX(320, 2940, 150, 0, 0, 0, 0, 0, 255),
    VTX(320, 3100, 150, 0, 0, 0, 0, 0, 255),
    VTX(320, 3100, 310, 0, 0, 0, 0, 0, 255),
    VTX(320, 2940, 310, 0, 0, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_00Vtx_0001A0[8] = {
    VTX(320, 2940, 150, 0, 0, 0, 0, 0, 0),
    VTX(320, 2940, 310, 0, 0, 0, 0, 0, 0),
    VTX(320, 3100, 150, 0, 0, 0, 0, 0, 0),
    VTX(320, 3100, 310, 0, 0, 0, 0, 0, 0),
    VTX(720, 2940, 150, 0, 0, 0, 0, 0, 0),
    VTX(720, 2940, 310, 0, 0, 0, 0, 0, 0),
    VTX(720, 3100, 150, 0, 0, 0, 0, 0, 0),
    VTX(720, 3100, 310, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_00Dlist0x000220[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_00Vtx_0001A0[0], 8, 0),
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
    gsSPVertex(&unfinished_fire_temple_room_00Vtx_000060[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_00Tex_000358, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_00Vtx_000120[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&unfinished_fire_temple_room_00Vtx_000160[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_00Tex_000358[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_00Tex_000358.rgb5a1.inc.c"
};

Gfx unfinished_fire_temple_room_00Dlist0x000B58[] = {
    gsSPDisplayList(unfinished_fire_temple_room_00Dlist0x000220),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000B68[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


