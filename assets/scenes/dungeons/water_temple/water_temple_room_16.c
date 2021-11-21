#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_16.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_16Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_16Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_16Set0000Cmd02;
static SCmdMesh water_temple_room_16Set0000Cmd03;
static SCmdObjectList water_temple_room_16Set0000Cmd04;
static SCmdEndMarker water_temple_room_16Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx water_temple_room_16Vtx_000060[62];
static Vtx water_temple_room_16Vtx_000440[4];
static Vtx water_temple_room_16Vtx_000480[8];
static Vtx water_temple_room_16Vtx_000500[8];
static Vtx water_temple_room_16Vtx_000580[32];
static Vtx water_temple_room_16Vtx_000780[46];
static Vtx water_temple_room_16Vtx_000A60[8];

static SCmdEchoSettings water_temple_room_16Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_16Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_16Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_16Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_16MeshHeader0x000040 }; // 0x0018

static SCmdObjectList water_temple_room_16Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_16ObjectList0x000030 }; // 0x0020

static SCmdEndMarker water_temple_room_16Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 water_temple_room_16ObjectList0x000030[1] = {
	OBJECT_BOX,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 water_temple_room_16MeshHeader0x000040 = { { 0 }, 0x01, (u32)&water_temple_room_16MeshDListEntry0x00004C, (u32)&(water_temple_room_16MeshDListEntry0x00004C) + sizeof(water_temple_room_16MeshDListEntry0x00004C) }; 

MeshEntry0 water_temple_room_16MeshDListEntry0x00004C[1] = {
	{ (u32)water_temple_room_16Dlist0x002640, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx water_temple_room_16Vtx_000060[62] = {
    VTX(-670, 610, 500, -171, 9216, 32, 32, 32, 255),
    VTX(-1010, 610, 360, 2219, 3413, 156, 199, 203, 255),
    VTX(-1350, 610, 500, -171, -2389, 32, 32, 32, 255),
    VTX(-1350, 610, 220, 4608, -2389, 32, 32, 32, 255),
    VTX(-670, 610, 220, 4608, 9216, 32, 32, 32, 255),
    VTX(-1010, 610, 360, 2219, 3413, 156, 199, 203, 255),
    VTX(-1350, 850, 500, -171, -2389, 32, 32, 32, 255),
    VTX(-1010, 850, 360, 2219, 3413, 64, 64, 73, 255),
    VTX(-670, 850, 500, -171, 9216, 32, 32, 32, 255),
    VTX(-1010, 850, 360, 2219, 3413, 64, 64, 73, 255),
    VTX(-670, 850, 220, 4608, 9216, 32, 32, 32, 255),
    VTX(-1350, 850, 220, 4608, -2389, 32, 32, 32, 255),
    VTX(-1350, 610, 500, -683, 3584, 32, 32, 32, 255),
    VTX(-1350, 610, 220, 4096, 3584, 32, 32, 32, 255),
    VTX(-1350, 650, 220, 4096, 2901, 156, 199, 203, 255),
    VTX(-1350, 650, 500, -683, 2901, 69, 112, 144, 255),
    VTX(-740, 610, 220, -8363, 2048, 32, 32, 32, 255),
    VTX(-670, 610, 220, -9557, 2048, 32, 32, 32, 255),
    VTX(-670, 650, 220, -9557, 1365, 156, 199, 203, 255),
    VTX(-740, 650, 220, -8363, 1365, 156, 199, 203, 255),
    VTX(-840, 650, 220, -6656, 1365, 156, 199, 203, 255),
    VTX(-1350, 650, 220, 2048, 1365, 69, 112, 144, 255),
    VTX(-1350, 610, 220, 2048, 2048, 32, 32, 32, 255),
    VTX(-840, 610, 220, -6656, 2048, 32, 32, 32, 255),
    VTX(-1350, 850, 220, 2048, -2048, 32, 32, 32, 255),
    VTX(-840, 730, 220, -6656, 0, 69, 112, 144, 255),
    VTX(-740, 730, 220, -8363, 0, 69, 112, 144, 255),
    VTX(-670, 850, 220, -9557, -2048, 32, 32, 32, 255),
    VTX(-840, 650, 220, -6656, 1365, 156, 199, 203, 255),
    VTX(-840, 730, 220, -6656, 0, 69, 112, 144, 255),
    VTX(-1280, 610, 500, -8363, 2048, 32, 32, 32, 255),
    VTX(-1350, 610, 500, -9557, 2048, 32, 32, 32, 255),
    VTX(-1350, 650, 500, -9557, 1365, 156, 199, 203, 255),
    VTX(-1280, 650, 500, -8363, 1365, 156, 199, 203, 255),
    VTX(-1280, 730, 500, -8363, 0, 69, 112, 144, 255),
    VTX(-1180, 650, 500, -6656, 1365, 156, 199, 203, 255),
    VTX(-670, 650, 500, 2048, 1365, 69, 112, 144, 255),
    VTX(-670, 610, 500, 2048, 2048, 32, 32, 32, 255),
    VTX(-1180, 610, 500, -6656, 2048, 32, 32, 32, 255),
    VTX(-1350, 850, 500, -9557, -2048, 32, 32, 32, 255),
    VTX(-670, 850, 500, 2048, -2048, 32, 32, 32, 255),
    VTX(-1180, 730, 500, -6656, 0, 69, 112, 144, 255),
    VTX(-1180, 730, 500, -6656, 0, 69, 112, 144, 255),
    VTX(-1180, 650, 500, -6656, 1365, 156, 199, 203, 255),
    VTX(-1350, 650, 220, 4096, 2901, 156, 199, 203, 255),
    VTX(-1350, 680, 330, 2219, 2389, 69, 112, 144, 255),
    VTX(-1350, 680, 390, 1195, 2389, 69, 112, 144, 255),
    VTX(-1350, 650, 500, -683, 2901, 69, 112, 144, 255),
    VTX(-1350, 770, 390, 1195, 853, 69, 112, 144, 255),
    VTX(-1350, 770, 330, 2219, 853, 69, 112, 144, 255),
    VTX(-1350, 850, 220, 4096, -512, 32, 32, 32, 255),
    VTX(-1350, 850, 500, -683, -512, 32, 32, 32, 255),
    VTX(-1350, 770, 390, 1195, 853, 69, 112, 144, 255),
    VTX(-670, 680, 330, 1195, 2389, 69, 112, 144, 255),
    VTX(-670, 770, 330, 1195, 853, 69, 112, 144, 255),
    VTX(-670, 850, 220, -683, -512, 32, 32, 32, 255),
    VTX(-670, 650, 220, -683, 2901, 69, 112, 144, 255),
    VTX(-670, 770, 330, 1195, 853, 69, 112, 144, 255),
    VTX(-670, 770, 390, 2219, 853, 69, 112, 144, 255),
    VTX(-670, 850, 500, 4096, -512, 32, 32, 32, 255),
    VTX(-670, 680, 390, 2219, 2389, 69, 112, 144, 255),
    VTX(-670, 650, 500, 4096, 2901, 156, 199, 203, 255),
}; 

static Vtx water_temple_room_16Vtx_000440[4] = {
    VTX(-670, 610, 220, -683, 3584, 32, 32, 32, 255),
    VTX(-670, 610, 500, 4096, 3584, 32, 32, 32, 255),
    VTX(-670, 650, 500, 4096, 2901, 156, 199, 203, 255),
    VTX(-670, 650, 220, -683, 2901, 69, 112, 144, 255),
}; 

static Vtx water_temple_room_16Vtx_000480[8] = {
    VTX(-670, 770, 330, 0, 0, 32, 32, 32, 255),
    VTX(-670, 680, 330, 0, 2048, 69, 112, 144, 255),
    VTX(-670, 680, 390, 2048, 2048, 69, 112, 144, 255),
    VTX(-670, 770, 390, 2048, 0, 64, 64, 73, 255),
    VTX(-1350, 770, 390, 2048, 0, 64, 64, 73, 255),
    VTX(-1350, 680, 390, 2048, 2048, 69, 112, 144, 255),
    VTX(-1350, 680, 330, 0, 2048, 69, 112, 144, 255),
    VTX(-1350, 770, 330, 0, 0, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_16Vtx_000500[8] = {
    VTX(-760, 610, 220, 1024, 1024, 32, 32, 32, 255),
    VTX(-760, 610, 200, 1024, 512, 0, 0, 0, 255),
    VTX(-820, 610, 200, -512, 512, 0, 0, 0, 255),
    VTX(-820, 610, 220, -512, 1024, 32, 32, 32, 255),
    VTX(-1260, 610, 500, 1024, 1024, 32, 32, 32, 255),
    VTX(-1260, 610, 520, 1024, 512, 0, 0, 0, 255),
    VTX(-1200, 610, 520, -512, 512, 0, 0, 0, 255),
    VTX(-1200, 610, 500, -512, 1024, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_16Vtx_000580[32] = {
    VTX(-1200, 610, 520, 1024, 1024, 32, 32, 32, 255),
    VTX(-1200, 650, 520, 1024, 0, 69, 112, 144, 255),
    VTX(-1200, 650, 500, 0, 0, 69, 112, 144, 255),
    VTX(-1200, 610, 500, 0, 1024, 32, 32, 32, 255),
    VTX(-1260, 650, 500, 4096, 0, 69, 112, 144, 255),
    VTX(-1260, 610, 500, 4096, 1024, 32, 32, 32, 255),
    VTX(-1280, 610, 500, 5120, 1024, 32, 32, 32, 255),
    VTX(-1280, 650, 500, 5120, 0, 156, 199, 203, 255),
    VTX(-1260, 610, 500, 0, 1024, 32, 32, 32, 255),
    VTX(-1260, 650, 500, 0, 0, 69, 112, 144, 255),
    VTX(-1260, 650, 520, 1024, 0, 69, 112, 144, 255),
    VTX(-1260, 610, 520, 1024, 1024, 32, 32, 32, 255),
    VTX(-820, 610, 200, 1024, 1024, 32, 32, 32, 255),
    VTX(-820, 650, 200, 1024, 0, 69, 112, 144, 255),
    VTX(-820, 650, 220, 0, 0, 69, 112, 144, 255),
    VTX(-820, 610, 220, 0, 1024, 32, 32, 32, 255),
    VTX(-760, 610, 220, 0, 1024, 32, 32, 32, 255),
    VTX(-760, 650, 220, 0, 0, 69, 112, 144, 255),
    VTX(-760, 650, 200, 1024, 0, 69, 112, 144, 255),
    VTX(-760, 610, 200, 1024, 1024, 32, 32, 32, 255),
    VTX(-820, 610, 220, 1024, 1024, 32, 32, 32, 255),
    VTX(-820, 650, 220, 1024, 0, 69, 112, 144, 255),
    VTX(-840, 650, 220, 0, 0, 156, 199, 203, 255),
    VTX(-840, 610, 220, 0, 1024, 32, 32, 32, 255),
    VTX(-760, 650, 220, 4096, 0, 69, 112, 144, 255),
    VTX(-760, 610, 220, 4096, 1024, 32, 32, 32, 255),
    VTX(-740, 610, 220, 5120, 1024, 32, 32, 32, 255),
    VTX(-740, 650, 220, 5120, 0, 156, 199, 203, 255),
    VTX(-1200, 610, 500, 1024, 1024, 32, 32, 32, 255),
    VTX(-1200, 650, 500, 1024, 0, 69, 112, 144, 255),
    VTX(-1180, 650, 500, 0, 0, 156, 199, 203, 255),
    VTX(-1180, 610, 500, 0, 1024, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_16Vtx_000780[46] = {
    VTX(-820, 650, 200, 1024, 1024, 69, 112, 144, 255),
    VTX(-820, 710, 200, 1024, -512, 69, 112, 144, 255),
    VTX(-820, 710, 220, 0, -512, 32, 32, 32, 255),
    VTX(-820, 650, 220, 0, 1024, 35, 69, 108, 255),
    VTX(-1200, 710, 520, 0, -512, 0, 0, 0, 255),
    VTX(-1260, 710, 520, 0, 1024, 0, 0, 0, 255),
    VTX(-1260, 710, 500, 1024, 1024, 69, 112, 144, 255),
    VTX(-1200, 710, 500, 1024, -512, 69, 112, 144, 255),
    VTX(-760, 650, 220, 0, 1024, 35, 69, 108, 255),
    VTX(-760, 710, 220, 0, -512, 32, 32, 32, 255),
    VTX(-760, 710, 200, 1024, -512, 69, 112, 144, 255),
    VTX(-760, 650, 200, 1024, 1024, 69, 112, 144, 255),
    VTX(-760, 710, 220, 4096, -512, 32, 32, 32, 255),
    VTX(-760, 650, 220, 4096, 1024, 69, 112, 144, 255),
    VTX(-740, 650, 220, 5120, 1024, 156, 199, 203, 255),
    VTX(-740, 730, 220, 5120, -1024, 69, 112, 144, 255),
    VTX(-1200, 650, 520, 1024, 1024, 69, 112, 144, 255),
    VTX(-1200, 710, 520, 1024, -512, 69, 112, 144, 255),
    VTX(-1200, 710, 500, 0, -512, 32, 32, 32, 255),
    VTX(-1200, 650, 500, 0, 1024, 35, 69, 108, 255),
    VTX(-1200, 650, 500, 1024, 1024, 69, 112, 144, 255),
    VTX(-1180, 730, 500, 0, -1024, 69, 112, 144, 255),
    VTX(-1180, 650, 500, 0, 1024, 156, 199, 203, 255),
    VTX(-1260, 710, 500, 0, -512, 69, 112, 144, 255),
    VTX(-1280, 730, 500, 1024, -1024, 69, 112, 144, 255),
    VTX(-1180, 730, 500, 1024, 1536, 69, 112, 144, 255),
    VTX(-1200, 710, 500, 0, 1024, 69, 112, 144, 255),
    VTX(-1260, 710, 500, 4096, -512, 32, 32, 32, 255),
    VTX(-1260, 650, 500, 4096, 1024, 69, 112, 144, 255),
    VTX(-1280, 650, 500, 5120, 1024, 156, 199, 203, 255),
    VTX(-1280, 730, 500, 5120, -1024, 69, 112, 144, 255),
    VTX(-760, 710, 220, 0, -512, 69, 112, 144, 255),
    VTX(-740, 730, 220, 1024, -1024, 69, 112, 144, 255),
    VTX(-840, 730, 220, 1024, 1536, 69, 112, 144, 255),
    VTX(-820, 710, 220, 0, 1024, 69, 112, 144, 255),
    VTX(-1260, 650, 500, 0, 1024, 35, 69, 108, 255),
    VTX(-1260, 710, 500, 0, -512, 32, 32, 32, 255),
    VTX(-1260, 710, 520, 1024, -512, 69, 112, 144, 255),
    VTX(-1260, 650, 520, 1024, 1024, 69, 112, 144, 255),
    VTX(-820, 650, 220, 1024, 1024, 69, 112, 144, 255),
    VTX(-820, 710, 220, 1024, -512, 69, 112, 144, 255),
    VTX(-840, 730, 220, 0, -1024, 69, 112, 144, 255),
    VTX(-840, 650, 220, 0, 1024, 156, 199, 203, 255),
    VTX(-820, 710, 200, 0, -512, 0, 0, 0, 255),
    VTX(-760, 710, 200, 0, 1024, 0, 0, 0, 255),
    VTX(-760, 710, 220, 1024, 1024, 69, 112, 144, 255),
}; 

static Vtx water_temple_room_16Vtx_000A60[8] = {
    VTX(-1350, 610, 200, 0, 0, 0, 0, 0, 0),
    VTX(-670, 610, 200, 0, 0, 0, 0, 0, 0),
    VTX(-1350, 850, 200, 0, 0, 0, 0, 0, 0),
    VTX(-670, 850, 200, 0, 0, 0, 0, 0, 0),
    VTX(-1350, 610, 520, 0, 0, 0, 0, 0, 0),
    VTX(-670, 610, 520, 0, 0, 0, 0, 0, 0),
    VTX(-1350, 850, 520, 0, 0, 0, 0, 0, 0),
    VTX(-670, 850, 520, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_16Dlist0x000AE0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_16Vtx_000A60[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_16Tex_000E40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_16Vtx_000060[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 8, 0),
    gsSP2Triangles(9, 11, 10, 0, 6, 11, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(21, 28, 24, 0, 28, 29, 24, 0),
    gsSP2Triangles(27, 26, 18, 0, 26, 19, 18, 0),
    gsSPVertex(&water_temple_room_16Vtx_000060[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 4, 2, 0),
    gsSP2Triangles(10, 11, 4, 0, 10, 4, 9, 0),
    gsSP2Triangles(10, 6, 12, 0, 6, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 15, 14, 0, 19, 14, 20, 0),
    gsSP2Triangles(16, 22, 21, 0, 16, 21, 17, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 25, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSP2Triangles(31, 30, 23, 0, 31, 23, 26, 0),
    gsSPVertex(&water_temple_room_16Vtx_000440[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_16Tex_001640, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_16Vtx_000480[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_16Vtx_000500[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_16Vtx_000580[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_16Vtx_000780[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 7, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&water_temple_room_16Vtx_000780[31], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 9, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_16Tex_000E40[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_16Tex_000E40.rgb5a1.inc.c"
};

u64 water_temple_room_16Tex_001640[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_16Tex_001640.rgb5a1.inc.c"
};

Gfx water_temple_room_16Dlist0x002640[] = {
    gsSPDisplayList(water_temple_room_16Dlist0x000AE0),
    gsSPEndDisplayList(),
}; 


