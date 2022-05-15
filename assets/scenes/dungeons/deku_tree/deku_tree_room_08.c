#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_08.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_08Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_08Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_08Set0000Cmd02;
static SCmdMesh deku_tree_room_08Set0000Cmd03;
static SCmdObjectList deku_tree_room_08Set0000Cmd04;
static SCmdActorList deku_tree_room_08Set0000Cmd05;
static SCmdEndMarker deku_tree_room_08Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_08Vtx_000080[45];
static Vtx deku_tree_room_08Vtx_000350[25];
static Vtx deku_tree_room_08Vtx_0004E0[8];
static Vtx deku_tree_room_08Vtx_000560[16];
static Vtx deku_tree_room_08Vtx_000660[8];

static SCmdEchoSettings deku_tree_room_08Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior deku_tree_room_08Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_08Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_08Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_08MeshHeader0x000060 }; // 0x0018

static SCmdObjectList deku_tree_room_08Set0000Cmd04 = {  0x0B, 0x08, (u32)deku_tree_room_08ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_08Set0000Cmd05 = {  0x01, 0x01, (u32)deku_tree_room_08ActorList0x000048 }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_08Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_08ObjectList0x000038[8] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_YDAN_OBJECTS,
	OBJECT_GOL,
	OBJECT_ST,
	OBJECT_TP,
	OBJECT_DEKUBABA,
}; 

ActorEntry deku_tree_room_08ActorList0x000048[1] = {
	{ ACTOR_EN_BOX, 2001, 760, -9, 0, -16384, 0, 0x0026 }, //0x000048
}; 

static u32 pad58 = 0;
static u32 pad5C = 0;

MeshHeader2 deku_tree_room_08MeshHeader0x000060 = { { 2 }, 0x01, (u32)&deku_tree_room_08MeshDListEntry0x00006C, (u32)&(deku_tree_room_08MeshDListEntry0x00006C) + sizeof(deku_tree_room_08MeshDListEntry0x00006C) }; 

MeshEntry2 deku_tree_room_08MeshDListEntry0x00006C[1] = {
	{ 1609, 980, 0, 575, (u32)deku_tree_room_08Dlist0x0006E0, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_08Vtx_000080[45] = {
    VTX(1789, 760, 230, 3840, 1024, 0, 0, 0, 255),
    VTX(1939, 980, 230, 1920, -1792, 255, 255, 255, 255),
    VTX(2089, 760, 230, 0, 1024, 0, 0, 0, 255),
    VTX(1789, 1200, 230, 3840, -4608, 0, 0, 0, 255),
    VTX(2089, 1200, 230, 0, -4608, 0, 0, 0, 255),
    VTX(2089, 760, 230, 5120, 1024, 0, 0, 0, 255),
    VTX(2089, 980, 0, 2176, -1792, 255, 255, 255, 255),
    VTX(2089, 760, -230, -768, 1024, 0, 0, 0, 255),
    VTX(2089, 1200, 230, 5120, -4608, 0, 0, 0, 255),
    VTX(2089, 1200, -230, -768, -4608, 0, 0, 0, 255),
    VTX(2089, 980, 0, 2176, -1792, 255, 255, 255, 255),
    VTX(2089, 760, -230, 0, 1024, 0, 0, 0, 255),
    VTX(1939, 980, -230, 1920, -1792, 255, 255, 255, 255),
    VTX(1789, 760, -230, 3840, 1024, 0, 0, 0, 255),
    VTX(1789, 1200, -230, 3840, -4608, 0, 0, 0, 255),
    VTX(2089, 1200, -230, 0, -4608, 0, 0, 0, 255),
    VTX(1939, 980, -230, 1920, -1792, 255, 255, 255, 255),
    VTX(1789, 1060, 160, -1152, -2816, 255, 255, 255, 255),
    VTX(1789, 1200, 230, -2048, -4608, 0, 0, 0, 255),
    VTX(1789, 760, 230, -2048, 1024, 0, 0, 0, 255),
    VTX(1789, 920, 90, -256, -1024, 0, 0, 0, 255),
    VTX(1789, 920, -90, 2048, -1024, 0, 0, 0, 255),
    VTX(1789, 1060, -160, 2944, -2816, 255, 255, 255, 255),
    VTX(1789, 1200, -230, 3840, -4608, 0, 0, 0, 255),
    VTX(1789, 760, -230, 3840, 1024, 0, 0, 0, 255),
    VTX(1149, 920, 90, 8192, -1024, 0, 0, 0, 255),
    VTX(1469, 840, 90, 4096, 0, 255, 255, 255, 255),
    VTX(1149, 760, 90, 8192, 1024, 0, 0, 0, 255),
    VTX(1789, 920, 90, 0, -1024, 0, 0, 0, 255),
    VTX(1789, 760, 90, 0, 1024, 0, 0, 0, 255),
    VTX(1469, 840, 90, 4096, 0, 255, 255, 255, 255),
    VTX(1149, 760, -90, 8192, 1024, 0, 0, 0, 255),
    VTX(1469, 840, -90, 4096, 0, 255, 255, 255, 255),
    VTX(1149, 920, -90, 8192, -1024, 0, 0, 0, 255),
    VTX(1789, 920, -90, 0, -1024, 0, 0, 0, 255),
    VTX(1789, 760, -90, 0, 1024, 0, 0, 0, 255),
    VTX(1469, 840, -90, 4096, 0, 255, 255, 255, 255),
    VTX(1789, 760, -230, 3840, 1024, 0, 0, 0, 255),
    VTX(1789, 1060, -160, 2944, -2816, 255, 255, 255, 255),
    VTX(1789, 760, -90, 2048, 1024, 0, 0, 0, 255),
    VTX(1789, 920, -90, 2048, -1024, 0, 0, 0, 255),
    VTX(1789, 760, 230, -2048, 1024, 0, 0, 0, 255),
    VTX(1789, 760, 90, -256, 1024, 0, 0, 0, 255),
    VTX(1789, 1060, 160, -1152, -2816, 255, 255, 255, 255),
    VTX(1789, 920, 90, -256, -1024, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_08Vtx_000350[25] = {
    VTX(1149, 920, -90, 1024, 2048, 0, 0, 0, 255),
    VTX(1789, 920, -90, 1024, 0, 0, 0, 0, 255),
    VTX(1469, 920, 0, 640, 1024, 255, 255, 255, 255),
    VTX(1789, 920, 90, 256, 0, 0, 0, 0, 255),
    VTX(1469, 920, 0, 640, 1024, 255, 255, 255, 255),
    VTX(1149, 920, 90, 256, 2048, 0, 0, 0, 255),
    VTX(1789, 1200, -230, 0, 128, 0, 0, 0, 255),
    VTX(2089, 1200, -230, 0, 2048, 0, 0, 0, 255),
    VTX(1939, 1200, 0, 981, 1088, 255, 255, 255, 255),
    VTX(2089, 1200, 230, 1963, 2048, 0, 0, 0, 255),
    VTX(1789, 1200, 230, 1963, 128, 0, 0, 0, 255),
    VTX(1789, 760, 230, 1963, 128, 0, 0, 0, 255),
    VTX(2089, 760, 230, 1963, 2048, 0, 0, 0, 255),
    VTX(1939, 760, 0, 981, 1088, 255, 255, 255, 255),
    VTX(1149, 760, 90, 256, 2048, 0, 0, 0, 255),
    VTX(1789, 760, 90, 256, 0, 0, 0, 0, 255),
    VTX(1789, 760, 0, 640, 0, 255, 255, 255, 255),
    VTX(1149, 760, -90, 1024, 2048, 0, 0, 0, 255),
    VTX(1789, 760, -90, 1024, 0, 0, 0, 0, 255),
    VTX(1789, 760, 90, 1365, 128, 0, 0, 0, 255),
    VTX(1789, 760, -230, 0, 128, 0, 0, 0, 255),
    VTX(1789, 760, -90, 597, 128, 0, 0, 0, 255),
    VTX(1789, 760, 0, 981, 128, 255, 255, 255, 255),
    VTX(2089, 760, -230, 0, 2048, 0, 0, 0, 255),
    VTX(1939, 760, 0, 981, 1088, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_08Vtx_0004E0[8] = {
    VTX(1149, 860, 30, -1229, 614, 255, 255, 255, 255),
    VTX(1149, 860, -30, -614, 614, 255, 255, 255, 255),
    VTX(1149, 920, -90, 0, 0, 0, 0, 0, 255),
    VTX(1149, 920, 90, -1843, 0, 0, 0, 0, 255),
    VTX(1149, 760, -30, -614, 1638, 0, 0, 0, 255),
    VTX(1149, 760, -90, 0, 1638, 0, 0, 0, 255),
    VTX(1149, 760, 90, -1843, 1638, 0, 0, 0, 255),
    VTX(1149, 760, 30, -1229, 1638, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_08Vtx_000560[16] = {
    VTX(1129, 860, -30, 256, 1792, 255, 255, 255, 255),
    VTX(1149, 860, -30, 256, 1536, 255, 255, 255, 255),
    VTX(1149, 860, 30, 1024, 1536, 255, 255, 255, 255),
    VTX(1129, 860, 30, 1024, 1792, 255, 255, 255, 255),
    VTX(1129, 860, 30, 1280, 1792, 255, 255, 255, 255),
    VTX(1149, 860, 30, 1280, 1536, 255, 255, 255, 255),
    VTX(1149, 760, 30, 0, 1536, 0, 0, 0, 255),
    VTX(1129, 760, 30, 0, 1792, 0, 0, 0, 255),
    VTX(1129, 760, 30, 1024, 1792, 0, 0, 0, 255),
    VTX(1149, 760, 30, 1024, 1536, 0, 0, 0, 255),
    VTX(1149, 760, -30, 256, 1536, 0, 0, 0, 255),
    VTX(1129, 760, -30, 256, 1792, 0, 0, 0, 255),
    VTX(1129, 760, -30, 0, 1792, 0, 0, 0, 255),
    VTX(1149, 760, -30, 0, 1536, 0, 0, 0, 255),
    VTX(1149, 860, -30, 1280, 1536, 255, 255, 255, 255),
    VTX(1129, 860, -30, 1280, 1792, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_08Vtx_000660[8] = {
    VTX(1129, 760, -230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 760, -230, 0, 0, 0, 0, 0, 0),
    VTX(1129, 1200, -230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 1200, -230, 0, 0, 0, 0, 0, 0),
    VTX(1129, 760, 230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 760, 230, 0, 0, 0, 0, 0, 0),
    VTX(1129, 1200, 230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 1200, 230, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_08Dlist0x0006E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_08Vtx_000660[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_08Tex_000978, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 238, 238, 238, 255),
    gsSPVertex(&deku_tree_room_08Vtx_000080[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 7, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(11, 15, 16, 0, 15, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 17, 0, 22, 23, 18, 0),
    gsSP2Triangles(22, 18, 17, 0, 24, 23, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 27, 30, 0),
    gsSPVertex(&deku_tree_room_08Vtx_000080[31], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_08Tex_001978, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_08Vtx_000350[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(11, 13, 19, 0, 13, 20, 21, 0),
    gsSP2Triangles(13, 22, 19, 0, 13, 21, 22, 0),
    gsSP2Triangles(12, 23, 24, 0, 23, 20, 24, 0),
    gsSP2Triangles(6, 8, 10, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_08Tex_002978, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_08Vtx_0004E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(0, 3, 6, 0, 0, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_08Vtx_000560[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000968[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0xE0, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_08Tex_000978[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_08Tex_000978.rgb5a1.inc.c"
};

u64 deku_tree_room_08Tex_001978[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_08Tex_001978.rgb5a1.inc.c"
};

u64 deku_tree_room_08Tex_002978[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_08Tex_002978.rgb5a1.inc.c"
};

static u8 unaccounted_003978[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


