#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "jabu_test_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "jabu_test_scene.h"


static SCmdRoomBehavior jabu_test_room_00Set0000Cmd00;
static SCmdBase jabu_test_room_00Set0000Cmd01;
static SCmdSkyboxDisables jabu_test_room_00Set0000Cmd02;
static SCmdTimeSettings jabu_test_room_00Set0000Cmd03;
static SCmdMesh jabu_test_room_00Set0000Cmd04;
static SCmdObjectList jabu_test_room_00Set0000Cmd05;
static SCmdActorList jabu_test_room_00Set0000Cmd06;
static SCmdEndMarker jabu_test_room_00Set0000Cmd07;
static s32 terminatorMaybe;
static Vtx jabu_test_room_00Vtx_0000A0[32];
static Vtx jabu_test_room_00Vtx_0002A0[12];
static Vtx jabu_test_room_00Vtx_000518[11];
static Vtx jabu_test_room_00Vtx_0006D0[8];
static Vtx jabu_test_room_00Vtx_000848[12];
static Vtx jabu_test_room_00Vtx_000A00[8];
static Vtx jabu_test_room_00Vtx_000B78[11];
static Vtx jabu_test_room_00Vtx_000D30[8];
static Vtx jabu_test_room_00Vtx_000EA8[9];
static Vtx jabu_test_room_00Vtx_001030[8];
static Vtx jabu_test_room_00Vtx_0011A8[8];
static Vtx jabu_test_room_00Vtx_001320[6];
static Vtx jabu_test_room_00Vtx_001468[11];
static Vtx jabu_test_room_00Vtx_001610[6];
static Vtx jabu_test_room_00Vtx_001758[8];
static Vtx jabu_test_room_00Vtx_0018D0[6];
static Vtx jabu_test_room_00Vtx_001A18[8];
static Vtx jabu_test_room_00Vtx_001B90[6];
static Vtx jabu_test_room_00Vtx_001CD8[18];

static SCmdRoomBehavior jabu_test_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000001 }; // 0x0000

static SCmdBase jabu_test_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables jabu_test_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings jabu_test_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01 }; // 0x0018

static SCmdMesh jabu_test_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&jabu_test_room_00MeshHeader0x00008C }; // 0x0020

static SCmdObjectList jabu_test_room_00Set0000Cmd05 = {  0x0B, 0x01, (u32)jabu_test_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList jabu_test_room_00Set0000Cmd06 = {  0x01, 0x03, (u32)jabu_test_room_00ActorList0x000044 }; // 0x0030 }; 

static SCmdEndMarker jabu_test_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 jabu_test_room_00ObjectList0x000040[1] = {
	OBJECT_BL,
}; 

ActorEntry jabu_test_room_00ActorList0x000044[4] = {
	{ ACTOR_EN_BILI, -19, 18, 140, 0, 0, 0, 0xFFFF }, //0x000044
	{ ACTOR_EN_BILI, 82, 18, -72, 0, 0, 0, 0xFFFF }, //0x000054
	{ ACTOR_EN_BILI, -79, 18, -117, 0, 0, 0, 0xFFFF }, //0x000064
	{ ACTOR_PLAYER, 0, 0, 0, 0, 0, 256, 0x0000 }, //0x000074
}; 

static u32 pad84 = 0;
static u32 pad88 = 0;
static u32 pad8C = 0;

MeshEntry0 jabu_test_room_00MeshDListEntry0x000084[1] = {
	{ (u32)jabu_test_room_00Dlist0x001F28, 0 },

}; 

MeshHeader0 jabu_test_room_00MeshHeader0x00008C = {
    { 0 },
    1,
    jabu_test_room_00MeshDListEntry0x000084,
    (u32)jabu_test_room_00MeshDListEntry0x000084 + (sizeof(MeshEntry0) * ARRAY_COUNT(jabu_test_room_00MeshDListEntry0x000084)),
};

static Vtx jabu_test_room_00Vtx_0000A0[32] = {
    VTX(-97, 10, 76, -614, 1638, 255, 255, 255, 255),
    VTX(-97, -10, -83, -614, 819, 255, 255, 255, 255),
    VTX(-177, 0, -43, -1024, 1229, 255, 255, 255, 255),
    VTX(62, -10, 196, 205, 2253, 255, 255, 255, 255),
    VTX(62, -10, -3, 205, 1229, 255, 255, 255, 255),
    VTX(22, -10, -123, 0, 614, 255, 255, 255, 255),
    VTX(182, -10, 156, 819, 2048, 255, 255, 255, 255),
    VTX(102, -12, -43, 410, 1024, 255, 255, 255, 255),
    VTX(262, 10, -3, 1229, 1229, 255, 255, 255, 255),
    VTX(102, -10, -163, 410, 410, 255, 255, 255, 255),
    VTX(-177, 0, 156, -1024, 2048, 255, 255, 255, 255),
    VTX(22, 0, 356, 0, 3072, 255, 255, 255, 255),
    VTX(-177, 0, -243, -1024, 0, 255, 255, 255, 255),
    VTX(-97, -10, -163, -614, 410, 255, 255, 255, 255),
    VTX(22, 16, -243, 0, 0, 255, 255, 255, 255),
    VTX(102, 10, -363, 410, -614, 255, 255, 255, 255),
    VTX(-97, -12, -243, -614, 0, 255, 255, 255, 255),
    VTX(22, 0, -443, 0, -1024, 255, 255, 255, 255),
    VTX(222, 0, -443, 1024, -1024, 255, 255, 255, 255),
    VTX(302, -10, -323, 1434, -410, 255, 255, 255, 255),
    VTX(422, 0, -443, 2048, -1024, 255, 255, 255, 255),
    VTX(182, 16, -243, 819, 0, 255, 255, 255, 255),
    VTX(262, -10, -203, 1229, 205, 255, 255, 255, 255),
    VTX(462, 10, -243, 2253, 0, 255, 255, 255, 255),
    VTX(622, 0, -243, 3072, 0, 255, 255, 255, 255),
    VTX(382, -10, -163, 1843, 410, 255, 255, 255, 255),
    VTX(622, 0, -43, 3072, 1024, 255, 255, 255, 255),
    VTX(422, -10, -83, 2048, 819, 255, 255, 255, 255),
    VTX(542, 10, 116, 2662, 1843, 255, 255, 255, 255),
    VTX(622, 0, 156, 3072, 2048, 255, 255, 255, 255),
    VTX(382, -12, 76, 1843, 1638, 255, 255, 255, 255),
    VTX(422, 0, 356, 2048, 3072, 255, 255, 255, 255),
}; 

static Vtx jabu_test_room_00Vtx_0002A0[12] = {
    VTX(542, 10, 116, 2662, 1843, 255, 255, 255, 255),
    VTX(382, -10, 196, 1843, 2253, 255, 255, 255, 255),
    VTX(422, 0, 356, 2048, 3072, 255, 255, 255, 255),
    VTX(382, -12, 76, 1843, 1638, 255, 255, 255, 255),
    VTX(182, -10, 156, 819, 2048, 255, 255, 255, 255),
    VTX(262, -10, 236, 1229, 2458, 255, 255, 255, 255),
    VTX(222, 0, 356, 1024, 3072, 255, 255, 255, 255),
    VTX(22, 0, 356, 0, 3072, 255, 255, 255, 255),
    VTX(62, -10, 196, 205, 2253, 255, 255, 255, 255),
    VTX(-177, 0, 156, -1024, 2048, 255, 255, 255, 255),
    VTX(-97, 10, 76, -614, 1638, 255, 255, 255, 255),
    VTX(-177, 0, -43, -1024, 1229, 255, 255, 255, 255),
}; 

static u8 unaccounted_000360[64] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xFF, 0x21, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x0003A0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000360, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_0000A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 7, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(7, 9, 5, 0, 10, 11, 3, 0),
    gsSP2Triangles(0, 10, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 12, 2, 0, 13, 12, 1, 0),
    gsSP2Triangles(5, 13, 1, 0, 5, 14, 13, 0),
    gsSP2Triangles(9, 15, 14, 0, 9, 14, 5, 0),
    gsSP2Triangles(12, 16, 17, 0, 13, 16, 12, 0),
    gsSP2Triangles(14, 16, 13, 0, 14, 17, 16, 0),
    gsSP2Triangles(15, 17, 14, 0, 17, 15, 18, 0),
    gsSP2Triangles(18, 19, 20, 0, 15, 21, 19, 0),
    gsSP2Triangles(15, 19, 18, 0, 9, 21, 15, 0),
    gsSP2Triangles(8, 22, 21, 0, 8, 21, 9, 0),
    gsSP2Triangles(21, 22, 19, 0, 19, 23, 20, 0),
    gsSP2Triangles(20, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(19, 22, 23, 0, 22, 8, 25, 0),
    gsSP2Triangles(23, 26, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 27, 25, 8, 0),
    gsSP2Triangles(27, 28, 26, 0, 26, 28, 29, 0),
    gsSP2Triangles(27, 30, 28, 0, 8, 30, 27, 0),
    gsSP2Triangles(8, 6, 30, 0, 28, 31, 29, 0),
    gsSPVertex(&jabu_test_room_00Vtx_0002A0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 3, 5, 1, 0),
    gsSP2Triangles(1, 6, 2, 0, 1, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 5, 8, 7, 0),
    gsSP2Triangles(5, 4, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_000518[11] = {
    VTX(-200, 0, -120, 11079, 1117, 255, 255, 255, 255),
    VTX(-120, -10, -80, 11546, 931, 255, 255, 255, 255),
    VTX(0, 0, -120, 12288, 1117, 255, 255, 255, 255),
    VTX(-40, 10, -40, 12021, 745, 255, 255, 255, 255),
    VTX(0, 0, 119, 12288, 0, 255, 255, 255, 255),
    VTX(-120, 0, 0, 11528, 559, 255, 255, 255, 255),
    VTX(-200, 0, 119, 11079, 0, 255, 255, 255, 255),
    VTX(40, -10, 39, 12542, 372, 255, 255, 255, 255),
    VTX(80, 10, -80, 12816, 931, 255, 255, 255, 255),
    VTX(200, 0, -120, 13497, 1117, 255, 255, 255, 255),
    VTX(200, 0, 119, 13497, 0, 255, 255, 255, 255),
}; 

static u8 unaccounted_0005C8[64] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xFE, 0x70, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000608[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_0005C8, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_000518[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 7, 3, 0, 7, 8, 3, 0),
    gsSP2Triangles(2, 3, 8, 0, 2, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 7, 10, 8, 0),
    gsSP2Triangles(10, 7, 4, 0, 6, 5, 0, 0),
    gsSP2Triangles(5, 1, 0, 0, 5, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_0006D0[8] = {
    VTX(-101, 9, 0, 13710, 559, 255, 255, 255, 255),
    VTX(-61, -10, -40, 13970, 745, 255, 255, 255, 255),
    VTX(-141, 0, -120, 13497, 1117, 255, 255, 255, 255),
    VTX(141, 0, -120, 15175, 1117, 255, 255, 255, 255),
    VTX(57, 9, -40, 14702, 745, 255, 255, 255, 255),
    VTX(141, 0, 119, 15175, 0, 255, 255, 255, 255),
    VTX(-21, -9, 39, 14207, 372, 255, 255, 255, 255),
    VTX(-141, 0, 119, 13497, 0, 255, 255, 255, 255),
}; 

static u8 unaccounted_000750[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x2C, 0x00, 0x78, 0xFE, 0xD4, 0x00, 0x01, 
    0xB5, 0x04, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000790[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000750, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_0006D0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 1, 6, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_000848[12] = {
    VTX(-199, 0, 119, 15175, 0, 255, 255, 255, 255),
    VTX(-119, 10, 39, 15606, 372, 255, 255, 255, 255),
    VTX(-199, 0, -120, 15175, 1117, 255, 255, 255, 255),
    VTX(0, 0, 119, 16384, 0, 255, 255, 255, 255),
    VTX(0, -10, 0, 16384, 559, 255, 255, 255, 255),
    VTX(0, 0, 119, 0, 0, 255, 255, 255, 255),
    VTX(200, 0, 119, 1209, 0, 255, 255, 255, 255),
    VTX(0, -10, 0, 0, 559, 255, 255, 255, 255),
    VTX(80, 10, -40, 528, 745, 255, 255, 255, 255),
    VTX(200, 0, -120, 1209, 1117, 255, 255, 255, 255),
    VTX(0, 0, -120, 0, 1117, 255, 255, 255, 255),
    VTX(0, 0, -120, 16384, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_000908[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x90, 0x00, 0x78, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000948[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000908, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_000848[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 8, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 4, 11, 2, 0),
    gsSP2Triangles(7, 8, 10, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_000A00[8] = {
    VTX(-61, -10, -40, 1682, 745, 255, 255, 255, 255),
    VTX(18, -9, 0, 2159, 559, 255, 255, 255, 255),
    VTX(98, 9, -40, 2657, 745, 255, 255, 255, 255),
    VTX(-141, 0, -120, 1209, 1117, 255, 255, 255, 255),
    VTX(-141, 0, 119, 1209, 0, 255, 255, 255, 255),
    VTX(141, 0, 119, 2887, 0, 255, 255, 255, 255),
    VTX(141, 0, -120, 2887, 1117, 255, 255, 255, 255),
    VTX(-21, 9, 79, 1913, 186, 255, 255, 255, 255),
}; 

static u8 unaccounted_000A80[64] = {
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x2C, 0x00, 0x78, 0x01, 0x2C, 0x00, 0x01, 
    0x4A, 0xFC, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000AC0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000A80, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_000A00[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 2, 1, 0),
    gsSP2Triangles(6, 2, 5, 0, 5, 1, 7, 0),
    gsSP2Triangles(0, 7, 1, 0, 4, 7, 0, 0),
    gsSP2Triangles(5, 7, 4, 0, 3, 2, 6, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_000B78[11] = {
    VTX(-80, 10, -80, 3568, 931, 255, 255, 255, 255),
    VTX(-200, 0, 119, 2887, 0, 255, 255, 255, 255),
    VTX(-40, 10, 39, 3829, 372, 255, 255, 255, 255),
    VTX(-200, 0, -120, 2887, 1117, 255, 255, 255, 255),
    VTX(0, 0, -120, 4096, 1117, 255, 255, 255, 255),
    VTX(0, 0, 119, 4096, 0, 255, 255, 255, 255),
    VTX(39, -10, -40, 4350, 745, 255, 255, 255, 255),
    VTX(119, 10, 0, 4874, 559, 255, 255, 255, 255),
    VTX(199, 0, 119, 5305, 0, 255, 255, 255, 255),
    VTX(119, -10, -80, 4838, 931, 255, 255, 255, 255),
    VTX(199, 0, -120, 5305, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_000C28[64] = {
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0x90, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000C68[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000C28, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_000B78[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 2, 1, 0, 0, 6, 4, 0),
    gsSP2Triangles(6, 0, 2, 0, 6, 2, 5, 0),
    gsSP2Triangles(7, 6, 5, 0, 8, 7, 5, 0),
    gsSP2Triangles(9, 6, 7, 0, 6, 9, 4, 0),
    gsSP2Triangles(4, 9, 10, 0, 10, 9, 7, 0),
    gsSP2Triangles(10, 7, 8, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_000D30[8] = {
    VTX(141, 0, 119, 6983, 0, 255, 255, 255, 255),
    VTX(101, 9, 0, 6770, 559, 255, 255, 255, 255),
    VTX(21, -9, 39, 6273, 372, 255, 255, 255, 255),
    VTX(-141, 0, 119, 5305, 0, 255, 255, 255, 255),
    VTX(-57, 9, -40, 5778, 745, 255, 255, 255, 255),
    VTX(-141, 0, -120, 5305, 1117, 255, 255, 255, 255),
    VTX(61, -10, -40, 6510, 745, 255, 255, 255, 255),
    VTX(141, 0, -120, 6983, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_000DB0[64] = {
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xD4, 0x00, 0x78, 0x01, 0x2C, 0x00, 0x01, 
    0x4A, 0xFC, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000DF0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000DB0, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_000D30[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_000EA8[9] = {
    VTX(0, -10, 0, 8192, 559, 255, 255, 255, 255),
    VTX(-80, 10, -40, 7664, 745, 255, 255, 255, 255),
    VTX(-200, 0, 119, 6983, 0, 255, 255, 255, 255),
    VTX(-200, 0, -120, 6983, 1117, 255, 255, 255, 255),
    VTX(0, 0, -120, 8192, 1117, 255, 255, 255, 255),
    VTX(199, 0, -120, 9401, 1117, 255, 255, 255, 255),
    VTX(119, 10, 39, 8970, 372, 255, 255, 255, 255),
    VTX(0, 0, 119, 8192, 0, 255, 255, 255, 255),
    VTX(199, 0, 119, 9401, 0, 255, 255, 255, 255),
}; 

static u8 unaccounted_000F38[64] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x70, 0x00, 0x78, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x000F78[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_000F38, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_000EA8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(5, 4, 0, 0, 5, 0, 6, 0),
    gsSP2Triangles(6, 0, 7, 0, 5, 6, 8, 0),
    gsSP2Triangles(8, 6, 7, 0, 0, 2, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001030[8] = {
    VTX(-98, 9, -40, 9631, 745, 255, 255, 255, 255),
    VTX(-18, -9, 0, 10129, 559, 255, 255, 255, 255),
    VTX(61, 10, -40, 10624, 745, 255, 255, 255, 255),
    VTX(21, 9, 79, 10375, 186, 255, 255, 255, 255),
    VTX(141, 0, 119, 11079, 0, 255, 255, 255, 255),
    VTX(-141, 0, 119, 9401, 0, 255, 255, 255, 255),
    VTX(-141, 0, -120, 9401, 1117, 255, 255, 255, 255),
    VTX(141, 0, -120, 11079, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_0010B0[64] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xD4, 0x00, 0x78, 0xFE, 0xD4, 0x00, 0x01, 
    0xB5, 0x04, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x0010F0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_0010B0, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001030[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
    gsSP2Triangles(5, 0, 6, 0, 3, 1, 5, 0),
    gsSP2Triangles(1, 0, 5, 0, 7, 6, 2, 0),
    gsSP2Triangles(6, 0, 2, 0, 4, 7, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_0011A8[8] = {
    VTX(-13, 20, 61, 12288, 1315, 255, 255, 255, 255),
    VTX(26, 20, -58, 12711, 1710, 255, 255, 255, 255),
    VTX(-93, -19, 21, 11667, 1578, 255, 255, 255, 255),
    VTX(186, 0, 141, 13497, 1117, 255, 255, 255, 255),
    VTX(-13, 0, 141, 12288, 1117, 255, 255, 255, 255),
    VTX(-213, 0, 141, 11079, 1117, 255, 255, 255, 255),
    VTX(-130, 0, -141, 10906, 2048, 255, 255, 255, 255),
    VTX(103, 0, -141, 13670, 2048, 255, 255, 255, 255),
}; 

static u8 unaccounted_001228[64] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0D, 0x01, 0x54, 0xFE, 0xD4, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0xFC, 0xB5, 0x04, 0x00, 0x00, 
    0x00, 0x00, 0x4A, 0xFC, 0x4A, 0xFC, 0x00, 0x00, 0xD5, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001268[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001228, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_0011A8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(4, 2, 5, 0, 1, 6, 2, 0),
    gsSP2Triangles(6, 1, 7, 0, 3, 1, 0, 0),
    gsSP2Triangles(7, 1, 3, 0, 0, 2, 4, 0),
    gsSP1Triangle(5, 2, 6, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001320[6] = {
    VTX(127, 0, 141, 15175, 1117, 255, 255, 255, 255),
    VTX(-35, 20, 61, 14178, 1315, 255, 255, 255, 255),
    VTX(-155, 0, 141, 13497, 1117, 255, 255, 255, 255),
    VTX(4, -19, -18, 14485, 1710, 255, 255, 255, 255),
    VTX(44, 0, -141, 15002, 2048, 255, 255, 255, 255),
    VTX(-72, 0, -141, 13670, 2048, 255, 255, 255, 255),
}; 

static u8 unaccounted_001380[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xEF, 0x01, 0x54, 0xFF, 0x24, 0x00, 0x01, 
    0xB5, 0x04, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 0x80, 0x0A, 0x4A, 0xEF, 0x7F, 0xF6, 0x00, 0x00, 
    0x80, 0x09, 0x4B, 0x08, 0x7F, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x0013C0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001380, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001320[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 3, 5, 0, 2, 1, 5, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001468[11] = {
    VTX(-13, 0, 141, 16384, 1117, 255, 255, 255, 255),
    VTX(-53, -20, -58, 16004, 1841, 255, 255, 255, 255),
    VTX(-93, 20, 61, 15763, 1315, 255, 255, 255, 255),
    VTX(66, 19, 21, 17061, 1446, 255, 255, 255, 255),
    VTX(186, 0, 141, 1209, 1117, 255, 255, 255, 255),
    VTX(66, 19, 21, 677, 1446, 255, 255, 255, 255),
    VTX(-13, 0, 141, 0, 1117, 255, 255, 255, 255),
    VTX(-130, 0, -141, 15002, 2048, 255, 255, 255, 255),
    VTX(103, 0, -141, 17766, 2048, 255, 255, 255, 255),
    VTX(-213, 0, 141, 15175, 1117, 255, 255, 255, 255),
    VTX(103, 0, -141, 1382, 2048, 255, 255, 255, 255),
}; 

static u8 unaccounted_001518[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x2C, 0x01, 0x54, 0x00, 0x0D, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0xFC, 0x4A, 0xFC, 0x00, 0x00, 0x00, 0x00, 
    0xB5, 0x04, 0x4A, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x55, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001558[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001518, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001468[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 1, 8, 0),
    gsSP2Triangles(3, 8, 1, 0, 2, 7, 9, 0),
    gsSP2Triangles(2, 1, 7, 0, 4, 10, 5, 0),
    gsSP1Triangle(0, 2, 9, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001610[6] = {
    VTX(127, 0, 141, 2887, 1117, 255, 255, 255, 255),
    VTX(7, -20, 61, 2194, 1446, 255, 255, 255, 255),
    VTX(-155, 0, 141, 1209, 1117, 255, 255, 255, 255),
    VTX(44, 0, -141, 2714, 2048, 255, 255, 255, 255),
    VTX(-32, 19, -18, 1885, 1578, 255, 255, 255, 255),
    VTX(-72, 0, -141, 1382, 2048, 255, 255, 255, 255),
}; 

static u8 unaccounted_001670[64] = {
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDB, 0x01, 0x54, 0x00, 0xEF, 0x00, 0x01, 
    0x4A, 0xFC, 0x00, 0x00, 0xB5, 0x04, 0x00, 0x00, 0x80, 0x0A, 0x4A, 0xEF, 0x80, 0x0A, 0x00, 0x00, 
    0x80, 0x09, 0x4B, 0x08, 0x80, 0x09, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x0016B0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001670, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001610[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 1, 4, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001758[8] = {
    VTX(-130, 0, -141, 2714, 2048, 255, 255, 255, 255),
    VTX(-53, 20, -58, 3673, 1710, 255, 255, 255, 255),
    VTX(103, 0, -141, 5478, 2048, 255, 255, 255, 255),
    VTX(-213, 0, 141, 2887, 1117, 255, 255, 255, 255),
    VTX(66, 19, 21, 4773, 1446, 255, 255, 255, 255),
    VTX(-13, -20, 61, 4096, 1446, 255, 255, 255, 255),
    VTX(-13, 0, 141, 4096, 1117, 255, 255, 255, 255),
    VTX(186, 0, 141, 5305, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_0017D8[64] = {
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF2, 0x01, 0x54, 0x01, 0x2C, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0xFC, 0x4A, 0xFC, 0x00, 0x00, 
    0x00, 0x00, 0x4A, 0xFC, 0xB5, 0x04, 0x00, 0x00, 0x2A, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001818[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_0017D8, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001758[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 5, 0, 5, 1, 3, 0),
    gsSP2Triangles(6, 5, 3, 0, 6, 4, 5, 0),
    gsSP2Triangles(7, 4, 6, 0, 2, 4, 7, 0),
    gsSP1Triangle(4, 2, 1, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_0018D0[6] = {
    VTX(-35, 20, 61, 5986, 1315, 255, 255, 255, 255),
    VTX(4, -19, -18, 6293, 1710, 255, 255, 255, 255),
    VTX(-72, 0, -141, 5478, 2048, 255, 255, 255, 255),
    VTX(-155, 0, 141, 5305, 1117, 255, 255, 255, 255),
    VTX(127, 0, 141, 6983, 1117, 255, 255, 255, 255),
    VTX(44, 0, -141, 6810, 2048, 255, 255, 255, 255),
}; 

static u8 unaccounted_001930[64] = {
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x11, 0x01, 0x54, 0x00, 0xDB, 0x00, 0x01, 
    0x4A, 0xFC, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 0x7F, 0xF6, 0x4A, 0xEF, 0x80, 0x0A, 0x00, 0x00, 
    0x7F, 0xF7, 0x4B, 0x08, 0x80, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001970[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001930, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_0018D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(5, 1, 4, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001A18[8] = {
    VTX(-13, 0, 141, 8192, 1117, 255, 255, 255, 255),
    VTX(-93, 19, 21, 7515, 1446, 255, 255, 255, 255),
    VTX(-213, 0, 141, 6983, 1117, 255, 255, 255, 255),
    VTX(66, -20, 61, 8766, 1446, 255, 255, 255, 255),
    VTX(26, 20, -58, 8615, 1710, 255, 255, 255, 255),
    VTX(-130, 0, -141, 6810, 2048, 255, 255, 255, 255),
    VTX(103, 0, -141, 9574, 2048, 255, 255, 255, 255),
    VTX(186, 0, 141, 9401, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_001A98[64] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xD4, 0x01, 0x54, 0xFF, 0xF2, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB5, 0x04, 0x4A, 0xFC, 0x00, 0x00, 0x00, 0x00, 
    0x4A, 0xFC, 0x4A, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0xAB, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001AD8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001A98, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001A18[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 4, 3, 0),
    gsSP2Triangles(7, 6, 3, 0, 7, 3, 0, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001B90[6] = {
    VTX(7, 20, 61, 10398, 1315, 255, 255, 255, 255),
    VTX(-32, 19, -18, 10077, 1578, 255, 255, 255, 255),
    VTX(-155, 0, 141, 9401, 1117, 255, 255, 255, 255),
    VTX(-72, 0, -141, 9574, 2048, 255, 255, 255, 255),
    VTX(44, 0, -141, 10906, 2048, 255, 255, 255, 255),
    VTX(127, 0, 141, 11079, 1117, 255, 255, 255, 255),
}; 

static u8 unaccounted_001BF0[64] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x24, 0x01, 0x54, 0xFF, 0x11, 0x00, 0x01, 
    0xB5, 0x04, 0x00, 0x00, 0x4A, 0xFC, 0x00, 0x00, 0x7F, 0xF6, 0x4A, 0xEF, 0x7F, 0xF6, 0x00, 0x00, 
    0x7F, 0xF7, 0x4B, 0x08, 0x7F, 0xF7, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001C30[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001BF0, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001B90[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 3, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx jabu_test_room_00Vtx_001CD8[18] = {
    VTX(1, 0, 179, 424, 0, 255, 255, 255, 255),
    VTX(59, 40, 79, 724, 512, 255, 255, 255, 255),
    VTX(18, 20, 38, 512, 724, 255, 255, 255, 255),
    VTX(118, -10, -20, 1024, 1024, 255, 255, 255, 255),
    VTX(235, 0, 179, 1624, 0, 255, 255, 255, 255),
    VTX(177, 20, 79, 1324, 512, 255, 255, 255, 255),
    VTX(18, 30, -79, 512, 1324, 255, 255, 255, 255),
    VTX(-81, 0, 96, 0, 424, 255, 255, 255, 255),
    VTX(-81, 0, -137, 0, 1624, 255, 255, 255, 255),
    VTX(59, 20, -120, 724, 1536, 255, 255, 255, 255),
    VTX(1, 0, -220, 424, 2048, 255, 255, 255, 255),
    VTX(318, 0, 96, 2048, 424, 255, 255, 255, 255),
    VTX(218, 30, 38, 1536, 724, 255, 255, 255, 255),
    VTX(118, -10, -20, 1024, 1024, 255, 255, 255, 255),
    VTX(318, 0, -137, 2048, 1624, 255, 255, 255, 255),
    VTX(218, 20, -79, 1536, 1324, 255, 255, 255, 255),
    VTX(235, 0, -220, 1624, 2048, 255, 255, 255, 255),
    VTX(177, 40, -120, 1324, 1536, 255, 255, 255, 255),
}; 

static u8 unaccounted_001DF8[64] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x89, 0x01, 0xB8, 0xFF, 0xEB, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0x56, 0x00, 0x00, 0xB8, 0x00, 0x00, 0x00, 
}; 

Gfx jabu_test_room_00Dlist0x001E38[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(jabu_test_sceneTex_000440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&unaccounted_001DF8, 0x02), // 0x03
    gsSPMatrix(0x0D000000, 0x00), // 0x01
    gsSPVertex(&jabu_test_room_00Vtx_001CD8[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 3, 1, 0, 3, 6, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 8, 7, 0),
    gsSP2Triangles(3, 9, 6, 0, 9, 8, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 4, 11, 5, 0),
    gsSP2Triangles(11, 12, 5, 0, 12, 13, 5, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(15, 13, 12, 0, 14, 16, 15, 0),
    gsSP2Triangles(16, 17, 15, 0, 17, 13, 15, 0),
    gsSP2Triangles(16, 10, 17, 0, 10, 9, 17, 0),
    gsSP2Triangles(9, 13, 17, 0, 0, 2, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx jabu_test_room_00Dlist0x001F28[] = {
    gsSPDisplayList(jabu_test_room_00Dlist0x0003A0),
    gsSPDisplayList(jabu_test_room_00Dlist0x000608),
    gsSPDisplayList(jabu_test_room_00Dlist0x000790),
    gsSPDisplayList(jabu_test_room_00Dlist0x000948),
    gsSPDisplayList(jabu_test_room_00Dlist0x000AC0),
    gsSPDisplayList(jabu_test_room_00Dlist0x000C68),
    gsSPDisplayList(jabu_test_room_00Dlist0x000DF0),
    gsSPDisplayList(jabu_test_room_00Dlist0x000F78),
    gsSPDisplayList(jabu_test_room_00Dlist0x0010F0),
    gsSPDisplayList(jabu_test_room_00Dlist0x001268),
    gsSPDisplayList(jabu_test_room_00Dlist0x0013C0),
    gsSPDisplayList(jabu_test_room_00Dlist0x001558),
    gsSPDisplayList(jabu_test_room_00Dlist0x0016B0),
    gsSPDisplayList(jabu_test_room_00Dlist0x001818),
    gsSPDisplayList(jabu_test_room_00Dlist0x001970),
    gsSPDisplayList(jabu_test_room_00Dlist0x001AD8),
    gsSPDisplayList(jabu_test_room_00Dlist0x001C30),
    gsSPDisplayList(jabu_test_room_00Dlist0x001E38),
    gsSPEndDisplayList(),
}; 


