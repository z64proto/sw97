#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "archery_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "archery_scene.h"


static SCmdEchoSettings archery_room_00Set0000Cmd00;
static SCmdRoomBehavior archery_room_00Set0000Cmd01;
static SCmdSkyboxDisables archery_room_00Set0000Cmd02;
static SCmdTimeSettings archery_room_00Set0000Cmd03;
static SCmdMesh archery_room_00Set0000Cmd04;
static SCmdObjectList archery_room_00Set0000Cmd05;
static SCmdActorList archery_room_00Set0000Cmd06;
static SCmdEndMarker archery_room_00Set0000Cmd07;
static Vtx archery_room_00Vtx_0000A0[32];
static Vtx archery_room_00Vtx_0002A0[24];
static Vtx archery_room_00Vtx_000D20[32];
static Vtx archery_room_00Vtx_000F20[16];
static Vtx archery_room_00Vtx_001100[10];
static Vtx archery_room_00Vtx_001228[32];
static Vtx archery_room_00Vtx_001428[16];
static Vtx archery_room_00Vtx_001608[10];
static Vtx archery_room_00Vtx_001730[32];
static Vtx archery_room_00Vtx_001930[16];
static Vtx archery_room_00Vtx_001B10[10];
static Vtx archery_room_00Vtx_001C38[32];
static Vtx archery_room_00Vtx_001E38[16];
static Vtx archery_room_00Vtx_002018[10];
static Vtx archery_room_00Vtx_002168[12];
static Vtx archery_room_00Vtx_002228[16];
static Vtx archery_room_00Vtx_003C38[4];
static Vtx archery_room_00Vtx_003C78[4];
static Vtx archery_room_00Vtx_003D68[4];
static Vtx archery_room_00Vtx_003DA8[4];
static Vtx archery_room_00Vtx_003E98[4];
static Vtx archery_room_00Vtx_003ED8[4];
static Vtx archery_room_00Vtx_003FC8[4];
static Vtx archery_room_00Vtx_004008[4];
static Vtx archery_room_00Vtx_0040F8[4];
static Vtx archery_room_00Vtx_004138[4];
static Vtx archery_room_00Vtx_004228[4];
static Vtx archery_room_00Vtx_004268[4];
static Vtx archery_room_00Vtx_004390[4];
static Vtx archery_room_00Vtx_0043D0[4];
static Vtx archery_room_00Vtx_0044C0[4];
static Vtx archery_room_00Vtx_004500[4];
static Vtx archery_room_00Vtx_0045F0[4];
static Vtx archery_room_00Vtx_004630[4];
static Vtx archery_room_00Vtx_004740[4];
static Vtx archery_room_00Vtx_004780[4];
static Vtx archery_room_00Vtx_004870[4];
static Vtx archery_room_00Vtx_0048B0[4];
static Vtx archery_room_00Vtx_0049A0[4];
static Vtx archery_room_00Vtx_0049E0[4];
static Vtx archery_room_00Vtx_004AD0[4];
static Vtx archery_room_00Vtx_004B10[4];
static Vtx archery_room_00Vtx_004C00[4];
static Vtx archery_room_00Vtx_004C40[4];
static Vtx archery_room_00Vtx_004D30[4];
static Vtx archery_room_00Vtx_004D70[4];
static Vtx archery_room_00Vtx_004E98[4];
static Vtx archery_room_00Vtx_004ED8[4];
static Vtx archery_room_00Vtx_004FC8[4];
static Vtx archery_room_00Vtx_005008[4];
static Vtx archery_room_00Vtx_0050F8[4];
static Vtx archery_room_00Vtx_005138[4];
static Vtx archery_room_00Vtx_005270[24];
static Vtx archery_room_00Vtx_0053F0[24];
static Vtx archery_room_00Vtx_006698[22];
static Vtx archery_room_00Vtx_0067F8[6];
static Vtx archery_room_00Vtx_008168[8];
static Vtx archery_room_00Vtx_009278[32];
static Vtx archery_room_00Vtx_009478[8];
static Vtx archery_room_00Vtx_009DD0[24];
static Vtx archery_room_00Vtx_009F50[8];
static s32 terminatorMaybe;

static SCmdEchoSettings archery_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior archery_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables archery_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings archery_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01 }; // 0x0018

static SCmdMesh archery_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&archery_room_00MeshHeader0x00B140 }; // 0x0020

static SCmdObjectList archery_room_00Set0000Cmd05 = {  0x0B, 0x0A, (u32)archery_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList archery_room_00Set0000Cmd06 = {  0x01, 0x04, (u32)archery_room_00ActorList0x000054 }; // 0x0030 }; 

static SCmdEndMarker archery_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 archery_room_00ObjectList0x000040[10] = {
	OBJECT_HORSE,
	OBJECT_HORSE_NORMAL,
	OBJECT_HORSE_GANON,
	OBJECT_NIW,
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_OA1,
	OBJECT_OB1,
	OBJECT_OA4,
	OBJECT_OB2,
}; 

ActorEntry archery_room_00ActorList0x000054[4] = {
	{ ACTOR_EN_HORSE, 8359, 0, 293, 0, -16384, 0, 0xFFFF }, //0x000054
	{ ACTOR_EN_HORSE_NORMAL, 8386, 0, 980, 0, -16384, 0, 0xFFFF }, //0x000064
	{ ACTOR_EN_NPC, 7841, 0, -1252, 0, 21845, 0, 0x000B }, //0x000074
	{ ACTOR_EN_NPC, -6371, 0, -545, 0, 0, 0, 0x0003 }, //0x000084
}; 

static u32 pad94 = 0;
static u32 pad98 = 0;
static u32 pad9C = 0;

static Vtx archery_room_00Vtx_0000A0[32] = {
    VTX(-2000, 40, 400, -26624, 0, 255, 255, 255, 255),
    VTX(-2000, 0, 400, -26624, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, 400, 24576, 1024, 255, 255, 255, 255),
    VTX(-6000, 40, 400, 24576, 0, 255, 255, 255, 255),
    VTX(2000, 40, 400, -26624, 0, 255, 255, 255, 255),
    VTX(2000, 0, 400, -26624, 1024, 255, 255, 255, 255),
    VTX(-2000, 0, 400, 24576, 1024, 255, 255, 255, 255),
    VTX(-2000, 40, 400, 24576, 0, 255, 255, 255, 255),
    VTX(6000, 40, 400, -26624, 0, 255, 255, 255, 255),
    VTX(6000, 0, 400, -26624, 1024, 255, 255, 255, 255),
    VTX(2000, 0, 400, 24576, 1024, 255, 255, 255, 255),
    VTX(2000, 40, 400, 24576, 0, 255, 255, 255, 255),
    VTX(6000, 40, -2400, -26624, 0, 255, 255, 255, 255),
    VTX(6000, 0, -2400, -26624, 1024, 255, 255, 255, 255),
    VTX(10000, 0, -2400, 24576, 1024, 255, 255, 255, 255),
    VTX(10000, 40, -2400, 24576, 0, 255, 255, 255, 255),
    VTX(6000, 40, 2400, -26624, 0, 255, 255, 255, 255),
    VTX(6000, 0, 2400, -26624, 1024, 255, 255, 255, 255),
    VTX(10000, 0, 2400, 24576, 1024, 255, 255, 255, 255),
    VTX(10000, 40, 2400, 24576, 0, 255, 255, 255, 255),
    VTX(10000, 40, -2400, -26624, 0, 255, 255, 255, 255),
    VTX(10000, 0, -2400, -26624, 1024, 255, 255, 255, 255),
    VTX(6000, 0, -400, -1024, 1024, 255, 255, 255, 255),
    VTX(6000, 40, -400, -1024, 0, 255, 255, 255, 255),
    VTX(6000, 0, 400, -1024, 1024, 255, 255, 255, 255),
    VTX(6000, 0, 2400, 24576, 1024, 255, 255, 255, 255),
    VTX(6000, 40, 2400, 24576, 0, 255, 255, 255, 255),
    VTX(6000, 40, 400, -1024, 0, 255, 255, 255, 255),
    VTX(-6000, 0, -400, -1024, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, -2400, 24576, 1024, 255, 255, 255, 255),
    VTX(-6000, 40, -2400, 24576, 0, 255, 255, 255, 255),
    VTX(-6000, 40, -400, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_0002A0[24] = {
    VTX(-6000, 40, 2400, -26624, 0, 255, 255, 255, 255),
    VTX(-6000, 0, 2400, -26624, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, 400, -1024, 1024, 255, 255, 255, 255),
    VTX(-6000, 40, 400, -1024, 0, 255, 255, 255, 255),
    VTX(-10000, 40, 2400, -26624, 0, 255, 255, 255, 255),
    VTX(-10000, 0, 2400, -26624, 1024, 255, 255, 255, 255),
    VTX(-10000, 0, -2400, 24576, 1024, 255, 255, 255, 255),
    VTX(-10000, 40, -2400, 24576, 0, 255, 255, 255, 255),
    VTX(-6000, 40, -2400, -26624, 0, 255, 255, 255, 255),
    VTX(-6000, 0, -2400, -26624, 1024, 255, 255, 255, 255),
    VTX(-10000, 0, 2400, 24576, 1024, 255, 255, 255, 255),
    VTX(-10000, 40, 2400, 24576, 0, 255, 255, 255, 255),
    VTX(6000, 40, -400, -26624, 0, 255, 255, 255, 255),
    VTX(6000, 0, -400, -26624, 1024, 255, 255, 255, 255),
    VTX(2000, 0, -400, 24576, 1024, 255, 255, 255, 255),
    VTX(2000, 40, -400, 24576, 0, 255, 255, 255, 255),
    VTX(2000, 40, -400, -26624, 0, 255, 255, 255, 255),
    VTX(2000, 0, -400, -26624, 1024, 255, 255, 255, 255),
    VTX(-2000, 0, -400, 24576, 1024, 255, 255, 255, 255),
    VTX(-2000, 40, -400, 24576, 0, 255, 255, 255, 255),
    VTX(-2000, 40, -400, -26624, 0, 255, 255, 255, 255),
    VTX(-2000, 0, -400, -26624, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, -400, 24576, 1024, 255, 255, 255, 255),
    VTX(-6000, 40, -400, 24576, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x000420[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_000520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_0000A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 18, 0, 20, 18, 19, 0),
    gsSP2Triangles(12, 13, 22, 0, 12, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&archery_room_00Vtx_0002A0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 7, 0),
    gsSP2Triangles(0, 1, 10, 0, 0, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_000520[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_000520.rgb5a1.inc.c"
};

static Vtx archery_room_00Vtx_000D20[32] = {
    VTX(6005, 416, -793, -312, -7075, 255, 255, 255, 255),
    VTX(5992, 417, -806, -585, -7098, 255, 255, 255, 255),
    VTX(5963, 359, -836, -1187, -5563, 255, 255, 255, 255),
    VTX(6037, 362, -762, 307, -5670, 255, 255, 255, 255),
    VTX(6037, 362, -837, 307, -5619, 255, 255, 255, 255),
    VTX(6005, 416, -806, -312, -7066, 255, 255, 255, 255),
    VTX(5992, 417, -792, -585, -7108, 255, 255, 255, 255),
    VTX(5963, 359, -763, -1186, -5612, 255, 255, 255, 255),
    VTX(6068, 316, -799, 912, -4439, 255, 255, 255, 255),
    VTX(6021, 370, -799, -5, -5872, 255, 255, 255, 255),
    VTX(5974, 372, -799, -950, -5940, 255, 255, 255, 255),
    VTX(5933, 313, -799, -1801, -4406, 255, 255, 255, 255),
    VTX(5999, 316, -731, 1114, 4194, 255, 255, 255, 255),
    VTX(5999, 370, -777, -343, 2492, 255, 255, 255, 255),
    VTX(5999, 383, -818, -1613, 2106, 255, 255, 255, 255),
    VTX(5999, 323, -859, -2903, 3971, 255, 255, 255, 255),
    VTX(6019, 325, -779, -62, -4693, 255, 255, 255, 255),
    VTX(5977, 327, -822, -921, -4731, 255, 255, 255, 255),
    VTX(5939, 267, -859, -1697, -3169, 255, 255, 255, 255),
    VTX(6061, 270, -737, 769, -3291, 255, 255, 255, 255),
    VTX(6061, 270, -862, 769, -3206, 255, 255, 255, 255),
    VTX(6019, 325, -819, -62, -4665, 255, 255, 255, 255),
    VTX(5977, 327, -777, -921, -4762, 255, 255, 255, 255),
    VTX(5939, 267, -739, -1697, -3251, 255, 255, 255, 255),
    VTX(6087, 225, -799, 1273, -2046, 255, 255, 255, 255),
    VTX(6028, 279, -799, 89, -3483, 255, 255, 255, 255),
    VTX(5967, 281, -799, -1126, -3556, 255, 255, 255, 255),
    VTX(5914, 221, -799, -2214, -2026, 255, 255, 255, 255),
    VTX(5999, 235, -705, 1302, 6031, 255, 255, 255, 255),
    VTX(5999, 289, -764, -338, 4540, 255, 255, 255, 255),
    VTX(5999, 281, -831, -2170, 4770, 255, 255, 255, 255),
    VTX(5999, 221, -884, -3622, 6403, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_000F20[16] = {
    VTX(5924, 179, -724, -2036, -964, 255, 255, 255, 255),
    VTX(5975, 233, -775, -990, -2326, 255, 255, 255, 255),
    VTX(6026, 235, -826, 47, -2323, 255, 255, 255, 255),
    VTX(6071, 176, -872, 933, -725, 255, 255, 255, 255),
    VTX(6074, 179, -724, 993, -908, 255, 255, 255, 255),
    VTX(6023, 233, -775, -13, -2307, 255, 255, 255, 255),
    VTX(5972, 235, -826, -1048, -2343, 255, 255, 255, 255),
    VTX(5927, 176, -872, -1978, -779, 255, 255, 255, 255),
    VTX(6036, 187, -799, 229, -1093, 255, 255, 255, 255),
    VTX(5958, 189, -799, -1355, -1174, 255, 255, 255, 255),
    VTX(5889, 104, -801, -2775, 1024, 255, 255, 255, 255),
    VTX(6114, 107, -801, 1769, 1024, 255, 255, 255, 255),
    VTX(5999, 107, -687, 1435, 7457, 255, 255, 255, 255),
    VTX(5999, 187, -762, -137, 5796, 255, 255, 255, 255),
    VTX(5999, 189, -841, -1768, 5755, 255, 255, 255, 255),
    VTX(5999, 104, -912, -3242, 7524, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x001020[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0024D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_000D20[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&archery_room_00Vtx_000F20[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_001100[10] = {
    VTX(5990, 0, -818, 0, 0, 79, 31, 0, 255),
    VTX(5994, 400, -809, 0, 0, 79, 31, 0, 255),
    VTX(6000, 400, -808, 0, 0, 79, 31, 0, 255),
    VTX(6007, 0, -815, 0, 0, 79, 31, 0, 255),
    VTX(5983, 0, -803, 0, 0, 79, 31, 0, 255),
    VTX(5992, 400, -804, 0, 0, 79, 31, 0, 255),
    VTX(5994, 0, -791, 0, 0, 79, 31, 0, 255),
    VTX(5996, 400, -800, 0, 0, 79, 31, 0, 255),
    VTX(6009, 0, -799, 0, 0, 79, 31, 0, 255),
    VTX(6001, 400, -803, 0, 0, 79, 31, 0, 255),
}; 

Gfx archery_room_00Dlist0x0011A0[] = {
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 79, 31, 0, 255),
    gsSPVertex(&archery_room_00Vtx_001100[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(3, 2, 9, 0, 3, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x001210[] = {
    gsSPDisplayList(archery_room_00Dlist0x001020),
    gsSPDisplayList(archery_room_00Dlist0x0011A0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_001228[32] = {
    VTX(2005, 416, -793, -312, -7075, 255, 255, 255, 255),
    VTX(1992, 417, -806, -585, -7098, 255, 255, 255, 255),
    VTX(1963, 359, -836, -1187, -5563, 255, 255, 255, 255),
    VTX(2037, 362, -762, 307, -5670, 255, 255, 255, 255),
    VTX(2037, 362, -837, 307, -5619, 255, 255, 255, 255),
    VTX(2005, 416, -806, -312, -7066, 255, 255, 255, 255),
    VTX(1992, 417, -792, -585, -7108, 255, 255, 255, 255),
    VTX(1963, 359, -763, -1186, -5612, 255, 255, 255, 255),
    VTX(2068, 316, -799, 912, -4439, 255, 255, 255, 255),
    VTX(2021, 370, -799, -5, -5872, 255, 255, 255, 255),
    VTX(1974, 372, -799, -950, -5940, 255, 255, 255, 255),
    VTX(1933, 313, -799, -1801, -4406, 255, 255, 255, 255),
    VTX(1999, 316, -731, 1114, 4194, 255, 255, 255, 255),
    VTX(1999, 370, -777, -343, 2492, 255, 255, 255, 255),
    VTX(1999, 383, -818, -1613, 2106, 255, 255, 255, 255),
    VTX(1999, 323, -859, -2903, 3971, 255, 255, 255, 255),
    VTX(2061, 270, -737, 769, -3291, 255, 255, 255, 255),
    VTX(2019, 325, -779, -62, -4693, 255, 255, 255, 255),
    VTX(1977, 327, -822, -921, -4731, 255, 255, 255, 255),
    VTX(1939, 267, -859, -1697, -3169, 255, 255, 255, 255),
    VTX(2019, 325, -819, -62, -4665, 255, 255, 255, 255),
    VTX(1977, 327, -777, -921, -4762, 255, 255, 255, 255),
    VTX(1939, 267, -739, -1697, -3251, 255, 255, 255, 255),
    VTX(2061, 270, -862, 769, -3206, 255, 255, 255, 255),
    VTX(2087, 225, -799, 1273, -2046, 255, 255, 255, 255),
    VTX(2028, 279, -799, 89, -3483, 255, 255, 255, 255),
    VTX(1967, 281, -799, -1126, -3556, 255, 255, 255, 255),
    VTX(1914, 221, -799, -2214, -2026, 255, 255, 255, 255),
    VTX(1999, 235, -705, 1302, 6031, 255, 255, 255, 255),
    VTX(1999, 289, -764, -338, 4540, 255, 255, 255, 255),
    VTX(1999, 281, -831, -2170, 4770, 255, 255, 255, 255),
    VTX(1999, 221, -884, -3622, 6403, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_001428[16] = {
    VTX(1924, 179, -724, -2036, -964, 255, 255, 255, 255),
    VTX(1975, 233, -775, -990, -2326, 255, 255, 255, 255),
    VTX(2026, 235, -826, 47, -2323, 255, 255, 255, 255),
    VTX(2071, 176, -872, 933, -725, 255, 255, 255, 255),
    VTX(2023, 233, -775, -13, -2307, 255, 255, 255, 255),
    VTX(1972, 235, -826, -1048, -2343, 255, 255, 255, 255),
    VTX(1927, 176, -872, -1978, -779, 255, 255, 255, 255),
    VTX(2074, 179, -724, 993, -908, 255, 255, 255, 255),
    VTX(2036, 187, -799, 229, -1093, 255, 255, 255, 255),
    VTX(1958, 189, -799, -1355, -1174, 255, 255, 255, 255),
    VTX(1889, 104, -801, -2775, 1024, 255, 255, 255, 255),
    VTX(2114, 107, -801, 1769, 1024, 255, 255, 255, 255),
    VTX(1999, 107, -687, 1435, 7457, 255, 255, 255, 255),
    VTX(1999, 187, -762, -137, 5796, 255, 255, 255, 255),
    VTX(1999, 189, -841, -1768, 5755, 255, 255, 255, 255),
    VTX(1999, 104, -912, -3242, 7524, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x001528[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0024D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_001228[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&archery_room_00Vtx_001428[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_001608[10] = {
    VTX(1994, 400, -809, 0, 0, 79, 31, 0, 255),
    VTX(2000, 400, -808, 0, 0, 79, 31, 0, 255),
    VTX(2007, 0, -815, 0, 0, 79, 31, 0, 255),
    VTX(1990, 0, -818, 0, 0, 79, 31, 0, 255),
    VTX(1983, 0, -803, 0, 0, 79, 31, 0, 255),
    VTX(1992, 400, -804, 0, 0, 79, 31, 0, 255),
    VTX(1994, 0, -791, 0, 0, 79, 31, 0, 255),
    VTX(1996, 400, -800, 0, 0, 79, 31, 0, 255),
    VTX(2009, 0, -799, 0, 0, 79, 31, 0, 255),
    VTX(2001, 400, -803, 0, 0, 79, 31, 0, 255),
}; 

Gfx archery_room_00Dlist0x0016A8[] = {
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 79, 31, 0, 255),
    gsSPVertex(&archery_room_00Vtx_001608[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(2, 1, 9, 0, 2, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x001718[] = {
    gsSPDisplayList(archery_room_00Dlist0x001528),
    gsSPDisplayList(archery_room_00Dlist0x0016A8),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_001730[32] = {
    VTX(-1995, 416, -793, -312, -7075, 255, 255, 255, 255),
    VTX(-2008, 417, -806, -585, -7098, 255, 255, 255, 255),
    VTX(-2037, 359, -836, -1187, -5563, 255, 255, 255, 255),
    VTX(-1963, 362, -762, 307, -5670, 255, 255, 255, 255),
    VTX(-1963, 362, -837, 307, -5619, 255, 255, 255, 255),
    VTX(-1995, 416, -806, -312, -7066, 255, 255, 255, 255),
    VTX(-2008, 417, -792, -585, -7108, 255, 255, 255, 255),
    VTX(-2037, 359, -763, -1186, -5612, 255, 255, 255, 255),
    VTX(-1932, 316, -799, 912, -4439, 255, 255, 255, 255),
    VTX(-1979, 370, -799, -5, -5872, 255, 255, 255, 255),
    VTX(-2026, 372, -799, -950, -5940, 255, 255, 255, 255),
    VTX(-2067, 313, -799, -1801, -4406, 255, 255, 255, 255),
    VTX(-2001, 316, -731, 1114, 4194, 255, 255, 255, 255),
    VTX(-2001, 370, -777, -343, 2492, 255, 255, 255, 255),
    VTX(-2001, 383, -818, -1613, 2106, 255, 255, 255, 255),
    VTX(-2001, 323, -859, -2903, 3971, 255, 255, 255, 255),
    VTX(-1939, 270, -737, 769, -3291, 255, 255, 255, 255),
    VTX(-1981, 325, -779, -62, -4693, 255, 255, 255, 255),
    VTX(-2023, 327, -822, -921, -4731, 255, 255, 255, 255),
    VTX(-2061, 267, -859, -1697, -3169, 255, 255, 255, 255),
    VTX(-1981, 325, -819, -62, -4665, 255, 255, 255, 255),
    VTX(-2023, 327, -777, -921, -4762, 255, 255, 255, 255),
    VTX(-2061, 267, -739, -1697, -3251, 255, 255, 255, 255),
    VTX(-1939, 270, -862, 769, -3206, 255, 255, 255, 255),
    VTX(-1913, 225, -799, 1273, -2046, 255, 255, 255, 255),
    VTX(-1973, 279, -799, 89, -3483, 255, 255, 255, 255),
    VTX(-2033, 281, -799, -1126, -3556, 255, 255, 255, 255),
    VTX(-2086, 221, -799, -2214, -2026, 255, 255, 255, 255),
    VTX(-2001, 235, -705, 1302, 6031, 255, 255, 255, 255),
    VTX(-2001, 289, -764, -338, 4540, 255, 255, 255, 255),
    VTX(-2001, 281, -831, -2170, 4770, 255, 255, 255, 255),
    VTX(-2001, 221, -884, -3622, 6403, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_001930[16] = {
    VTX(-2076, 179, -724, -2036, -964, 255, 255, 255, 255),
    VTX(-2025, 233, -775, -990, -2326, 255, 255, 255, 255),
    VTX(-1974, 235, -826, 47, -2323, 255, 255, 255, 255),
    VTX(-1929, 176, -872, 933, -725, 255, 255, 255, 255),
    VTX(-1977, 233, -775, -13, -2307, 255, 255, 255, 255),
    VTX(-2028, 235, -826, -1048, -2343, 255, 255, 255, 255),
    VTX(-2073, 176, -872, -1978, -779, 255, 255, 255, 255),
    VTX(-1926, 179, -724, 993, -908, 255, 255, 255, 255),
    VTX(-1964, 187, -799, 229, -1093, 255, 255, 255, 255),
    VTX(-2042, 189, -799, -1355, -1174, 255, 255, 255, 255),
    VTX(-2111, 104, -801, -2775, 1024, 255, 255, 255, 255),
    VTX(-1886, 107, -801, 1769, 1024, 255, 255, 255, 255),
    VTX(-2001, 107, -687, 1435, 7457, 255, 255, 255, 255),
    VTX(-2001, 187, -762, -137, 5796, 255, 255, 255, 255),
    VTX(-2001, 189, -841, -1768, 5755, 255, 255, 255, 255),
    VTX(-2001, 104, -912, -3242, 7524, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x001A30[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0024D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_001730[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&archery_room_00Vtx_001930[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_001B10[10] = {
    VTX(-2006, 400, -809, 0, 0, 79, 31, 0, 255),
    VTX(-2000, 400, -808, 0, 0, 79, 31, 0, 255),
    VTX(-1993, 0, -815, 0, 0, 79, 31, 0, 255),
    VTX(-2010, 0, -818, 0, 0, 79, 31, 0, 255),
    VTX(-2017, 0, -803, 0, 0, 79, 31, 0, 255),
    VTX(-2008, 400, -804, 0, 0, 79, 31, 0, 255),
    VTX(-2006, 0, -791, 0, 0, 79, 31, 0, 255),
    VTX(-2004, 400, -800, 0, 0, 79, 31, 0, 255),
    VTX(-1991, 0, -799, 0, 0, 79, 31, 0, 255),
    VTX(-1999, 400, -803, 0, 0, 79, 31, 0, 255),
}; 

Gfx archery_room_00Dlist0x001BB0[] = {
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 79, 31, 0, 255),
    gsSPVertex(&archery_room_00Vtx_001B10[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(2, 1, 9, 0, 2, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x001C20[] = {
    gsSPDisplayList(archery_room_00Dlist0x001A30),
    gsSPDisplayList(archery_room_00Dlist0x001BB0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_001C38[32] = {
    VTX(-5995, 416, -793, -312, -7075, 255, 255, 255, 255),
    VTX(-6008, 417, -806, -585, -7098, 255, 255, 255, 255),
    VTX(-6037, 359, -836, -1187, -5563, 255, 255, 255, 255),
    VTX(-5963, 362, -762, 307, -5670, 255, 255, 255, 255),
    VTX(-5963, 362, -837, 307, -5619, 255, 255, 255, 255),
    VTX(-5995, 416, -806, -312, -7066, 255, 255, 255, 255),
    VTX(-6008, 417, -792, -585, -7108, 255, 255, 255, 255),
    VTX(-6037, 359, -763, -1186, -5612, 255, 255, 255, 255),
    VTX(-5932, 316, -799, 912, -4439, 255, 255, 255, 255),
    VTX(-5979, 370, -799, -5, -5872, 255, 255, 255, 255),
    VTX(-6026, 372, -799, -950, -5940, 255, 255, 255, 255),
    VTX(-6067, 313, -799, -1801, -4406, 255, 255, 255, 255),
    VTX(-6001, 316, -731, 1114, 4194, 255, 255, 255, 255),
    VTX(-6001, 370, -777, -343, 2492, 255, 255, 255, 255),
    VTX(-6001, 383, -818, -1613, 2106, 255, 255, 255, 255),
    VTX(-6001, 323, -859, -2903, 3971, 255, 255, 255, 255),
    VTX(-5939, 270, -737, 769, -3291, 255, 255, 255, 255),
    VTX(-5981, 325, -779, -62, -4693, 255, 255, 255, 255),
    VTX(-6023, 327, -822, -921, -4731, 255, 255, 255, 255),
    VTX(-6061, 267, -859, -1697, -3169, 255, 255, 255, 255),
    VTX(-5981, 325, -819, -62, -4665, 255, 255, 255, 255),
    VTX(-6023, 327, -777, -921, -4762, 255, 255, 255, 255),
    VTX(-6061, 267, -739, -1697, -3251, 255, 255, 255, 255),
    VTX(-5939, 270, -862, 769, -3206, 255, 255, 255, 255),
    VTX(-5913, 225, -799, 1273, -2046, 255, 255, 255, 255),
    VTX(-5973, 279, -799, 89, -3483, 255, 255, 255, 255),
    VTX(-6033, 281, -799, -1126, -3556, 255, 255, 255, 255),
    VTX(-6086, 221, -799, -2214, -2026, 255, 255, 255, 255),
    VTX(-6001, 235, -705, 1302, 6031, 255, 255, 255, 255),
    VTX(-6001, 289, -764, -338, 4540, 255, 255, 255, 255),
    VTX(-6001, 281, -831, -2170, 4770, 255, 255, 255, 255),
    VTX(-6001, 221, -884, -3622, 6403, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_001E38[16] = {
    VTX(-6076, 179, -724, -2036, -964, 255, 255, 255, 255),
    VTX(-6025, 233, -775, -990, -2326, 255, 255, 255, 255),
    VTX(-5974, 235, -826, 47, -2323, 255, 255, 255, 255),
    VTX(-5929, 176, -872, 933, -725, 255, 255, 255, 255),
    VTX(-5977, 233, -775, -13, -2307, 255, 255, 255, 255),
    VTX(-6028, 235, -826, -1048, -2343, 255, 255, 255, 255),
    VTX(-6073, 176, -872, -1978, -779, 255, 255, 255, 255),
    VTX(-5926, 179, -724, 993, -908, 255, 255, 255, 255),
    VTX(-5964, 187, -799, 229, -1093, 255, 255, 255, 255),
    VTX(-6042, 189, -799, -1355, -1174, 255, 255, 255, 255),
    VTX(-6111, 104, -801, -2775, 1024, 255, 255, 255, 255),
    VTX(-5886, 107, -801, 1769, 1024, 255, 255, 255, 255),
    VTX(-6001, 107, -687, 1435, 7457, 255, 255, 255, 255),
    VTX(-6001, 187, -762, -137, 5796, 255, 255, 255, 255),
    VTX(-6001, 189, -841, -1768, 5755, 255, 255, 255, 255),
    VTX(-6001, 104, -912, -3242, 7524, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x001F38[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0024D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_001C38[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&archery_room_00Vtx_001E38[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_002018[10] = {
    VTX(-6006, 400, -809, 0, 0, 79, 31, 0, 255),
    VTX(-6000, 400, -808, 0, 0, 79, 31, 0, 255),
    VTX(-5993, 0, -815, 0, 0, 79, 31, 0, 255),
    VTX(-6010, 0, -818, 0, 0, 79, 31, 0, 255),
    VTX(-6017, 0, -803, 0, 0, 79, 31, 0, 255),
    VTX(-6008, 400, -804, 0, 0, 79, 31, 0, 255),
    VTX(-6006, 0, -791, 0, 0, 79, 31, 0, 255),
    VTX(-6004, 400, -800, 0, 0, 79, 31, 0, 255),
    VTX(-5991, 0, -799, 0, 0, 79, 31, 0, 255),
    VTX(-5999, 400, -803, 0, 0, 79, 31, 0, 255),
}; 

Gfx archery_room_00Dlist0x0020B8[] = {
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 79, 31, 0, 255),
    gsSPVertex(&archery_room_00Vtx_002018[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(2, 1, 9, 0, 2, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x002128[] = {
    gsSPDisplayList(archery_room_00Dlist0x001F38),
    gsSPDisplayList(archery_room_00Dlist0x0020B8),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x002140[] = {
    gsSPDisplayList(archery_room_00Dlist0x001210),
    gsSPDisplayList(archery_room_00Dlist0x001718),
    gsSPDisplayList(archery_room_00Dlist0x001C20),
    gsSPDisplayList(archery_room_00Dlist0x002128),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_002168[12] = {
    VTX(-2001, 40, -365, 22590, 0, 255, 255, 255, 255),
    VTX(1999, 40, -365, -17350, 0, 255, 255, 255, 255),
    VTX(1999, 0, -365, -17285, 1024, 255, 255, 255, 255),
    VTX(-2001, 0, -365, 22655, 1024, 255, 255, 255, 255),
    VTX(-6000, 40, -365, 22590, 0, 255, 255, 255, 255),
    VTX(-2001, 0, -365, -17285, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, -365, 22655, 1024, 255, 255, 255, 255),
    VTX(-2001, 40, -365, -17350, 0, 255, 255, 255, 255),
    VTX(1999, 40, -365, 22590, 0, 255, 255, 255, 255),
    VTX(5998, 0, -365, -17285, 1024, 255, 255, 255, 255),
    VTX(1999, 0, -365, 22655, 1024, 255, 255, 255, 255),
    VTX(5998, 40, -365, -17350, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_002228[16] = {
    VTX(4961, 9, -1540, -993, -4156, 255, 255, 255, 255),
    VTX(2975, 9, -1540, -993, 996, 255, 255, 255, 255),
    VTX(2975, 9, -777, 984, 996, 255, 255, 255, 255),
    VTX(4961, 9, -777, 984, -4156, 255, 255, 255, 255),
    VTX(-3607, 9, -1420, -993, -4156, 255, 255, 255, 255),
    VTX(-5594, 9, -1420, -993, 996, 255, 255, 255, 255),
    VTX(-5594, 9, -658, 984, 996, 255, 255, 255, 255),
    VTX(-3607, 9, -658, 984, -4156, 255, 255, 255, 255),
    VTX(-898, 9, -2484, -193, -3092, 255, 255, 255, 255),
    VTX(-2884, 9, -2484, -193, 6, 255, 255, 255, 255),
    VTX(-2884, 9, -1722, 2058, 6, 255, 255, 255, 255),
    VTX(-898, 9, -1722, 2058, -3092, 255, 255, 255, 255),
    VTX(2069, 9, -1736, 24, -1104, 255, 255, 255, 255),
    VTX(232, 9, -1736, 24, 995, 255, 255, 255, 255),
    VTX(232, 9, -571, 2015, 995, 255, 255, 255, 255),
    VTX(2069, 9, -571, 2015, -1104, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x002328[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_002438, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_002168[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(archery_room_00Tex_003438, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&archery_room_00Vtx_002228[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_002438[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_002438.rgb5a1.inc.c"
};

u64 archery_room_00Tex_003438[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_003438.rgb5a1.inc.c"
};

static Vtx archery_room_00Vtx_003C38[4] = {
    VTX(4247, 167, -758, -1024, 1024, 255, 255, 255, 255),
    VTX(4247, 7, -758, 0, 1024, 255, 255, 255, 255),
    VTX(4407, 7, -758, 0, 0, 255, 255, 255, 255),
    VTX(4407, 167, -758, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_003C78[4] = {
    VTX(4314, 22, -758, 0, 0, 255, 255, 255, 255),
    VTX(4314, -156, -758, 0, 0, 255, 255, 255, 255),
    VTX(4331, -156, -758, 0, 0, 255, 255, 255, 255),
    VTX(4331, 22, -758, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x003CB8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_003CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_003C38[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_003C78[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_003D68[4] = {
    VTX(3854, 167, -1618, -2069, 1031, 255, 255, 255, 255),
    VTX(3854, 7, -1618, -1045, 1031, 255, 255, 255, 255),
    VTX(4014, 7, -1618, -1045, 7, 255, 255, 255, 255),
    VTX(4014, 167, -1618, -2069, 7, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_003DA8[4] = {
    VTX(3921, 22, -1618, 0, 0, 255, 255, 255, 255),
    VTX(3921, -156, -1618, 0, 0, 255, 255, 255, 255),
    VTX(3938, -156, -1618, 0, 0, 255, 255, 255, 255),
    VTX(3938, 22, -1618, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x003DE8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0034D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_003D68[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_003DA8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_003E98[4] = {
    VTX(3434, 167, -1205, -2069, 1024, 255, 255, 255, 255),
    VTX(3434, 7, -1205, -1045, 1024, 255, 255, 255, 255),
    VTX(3594, 7, -1205, -1045, 0, 255, 255, 255, 255),
    VTX(3594, 167, -1205, -2069, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_003ED8[4] = {
    VTX(3502, 22, -1205, 0, 0, 255, 255, 255, 255),
    VTX(3502, -156, -1205, 0, 0, 255, 255, 255, 255),
    VTX(3519, -156, -1205, 0, 0, 255, 255, 255, 255),
    VTX(3519, 22, -1205, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x003F18[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_002CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_003E98[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_003ED8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_003FC8[4] = {
    VTX(-4474, 167, -1205, -2069, 1024, 255, 255, 255, 255),
    VTX(-4474, 7, -1205, -1045, 1024, 255, 255, 255, 255),
    VTX(-4314, 7, -1205, -1045, 0, 255, 255, 255, 255),
    VTX(-4314, 167, -1205, -2069, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004008[4] = {
    VTX(-4407, 22, -1205, 0, 0, 255, 255, 255, 255),
    VTX(-4407, -156, -1205, 0, 0, 255, 255, 255, 255),
    VTX(-4390, -156, -1205, 0, 0, 255, 255, 255, 255),
    VTX(-4390, 22, -1205, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004048[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_002CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_003FC8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004008[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_0040F8[4] = {
    VTX(-4055, 167, -1618, -2069, 1031, 255, 255, 255, 255),
    VTX(-4055, 7, -1618, -1045, 1031, 255, 255, 255, 255),
    VTX(-3895, 7, -1618, -1045, 7, 255, 255, 255, 255),
    VTX(-3895, 167, -1618, -2069, 7, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004138[4] = {
    VTX(-3987, 22, -1618, 0, 0, 255, 255, 255, 255),
    VTX(-3987, -156, -1618, 0, 0, 255, 255, 255, 255),
    VTX(-3970, -156, -1618, 0, 0, 255, 255, 255, 255),
    VTX(-3970, 22, -1618, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004178[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0034D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_0040F8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004138[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004228[4] = {
    VTX(-3662, 167, -758, -1024, 1024, 255, 255, 255, 255),
    VTX(-3662, 7, -758, 0, 1024, 255, 255, 255, 255),
    VTX(-3502, 7, -758, 0, 0, 255, 255, 255, 255),
    VTX(-3502, 167, -758, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004268[4] = {
    VTX(-3595, 22, -758, 0, 0, 255, 255, 255, 255),
    VTX(-3595, -156, -758, 0, 0, 255, 255, 255, 255),
    VTX(-3577, -156, -758, 0, 0, 255, 255, 255, 255),
    VTX(-3577, 22, -758, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x0042A8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_003CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004228[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004268[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x004358[] = {
    gsSPDisplayList(archery_room_00Dlist0x003CB8),
    gsSPDisplayList(archery_room_00Dlist0x003DE8),
    gsSPDisplayList(archery_room_00Dlist0x003F18),
    gsSPDisplayList(archery_room_00Dlist0x004048),
    gsSPDisplayList(archery_room_00Dlist0x004178),
    gsSPDisplayList(archery_room_00Dlist0x0042A8),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004390[4] = {
    VTX(383, 80, -758, -1024, 1024, 255, 255, 255, 255),
    VTX(383, 40, -758, 0, 1024, 255, 255, 255, 255),
    VTX(423, 40, -758, 0, 0, 255, 255, 255, 255),
    VTX(423, 80, -758, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_0043D0[4] = {
    VTX(400, 44, -758, 0, 0, 255, 255, 255, 255),
    VTX(400, -1, -758, 0, 0, 255, 255, 255, 255),
    VTX(404, -1, -758, 0, 0, 255, 255, 255, 255),
    VTX(404, 44, -758, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004410[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_003CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004390[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_0043D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_0044C0[4] = {
    VTX(-10, 80, -1618, -2069, 1031, 255, 255, 255, 255),
    VTX(-10, 40, -1618, -1045, 1031, 255, 255, 255, 255),
    VTX(30, 40, -1618, -1045, 7, 255, 255, 255, 255),
    VTX(30, 80, -1618, -2069, 7, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004500[4] = {
    VTX(7, 44, -1618, 0, 0, 255, 255, 255, 255),
    VTX(7, -1, -1618, 0, 0, 255, 255, 255, 255),
    VTX(11, -1, -1618, 0, 0, 255, 255, 255, 255),
    VTX(11, 44, -1618, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004540[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0034D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_0044C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004500[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_0045F0[4] = {
    VTX(-429, 80, -1205, -2069, 1024, 255, 255, 255, 255),
    VTX(-429, 40, -1205, -1045, 1024, 255, 255, 255, 255),
    VTX(-389, 40, -1205, -1045, 0, 255, 255, 255, 255),
    VTX(-389, 80, -1205, -2069, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004630[4] = {
    VTX(-412, 44, -1205, 0, 0, 255, 255, 255, 255),
    VTX(-412, -1, -1205, 0, 0, 255, 255, 255, 255),
    VTX(-408, -1, -1205, 0, 0, 255, 255, 255, 255),
    VTX(-408, 44, -1205, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004670[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_002CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_0045F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004630[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x004720[] = {
    gsSPDisplayList(archery_room_00Dlist0x004410),
    gsSPDisplayList(archery_room_00Dlist0x004540),
    gsSPDisplayList(archery_room_00Dlist0x004670),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004740[4] = {
    VTX(-3597, 322, -1981, -1024, 1024, 255, 255, 255, 255),
    VTX(-3597, 162, -1981, 0, 1024, 255, 255, 255, 255),
    VTX(-3437, 162, -1981, 0, 0, 255, 255, 255, 255),
    VTX(-3437, 322, -1981, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004780[4] = {
    VTX(-3530, 178, -1981, 0, 0, 255, 255, 255, 255),
    VTX(-3530, -1, -1981, 0, 0, 255, 255, 255, 255),
    VTX(-3513, -1, -1981, 0, 0, 255, 255, 255, 255),
    VTX(-3513, 178, -1981, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x0047C0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_003CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004740[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004780[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004870[4] = {
    VTX(-3990, 322, -2841, -2069, 1031, 255, 255, 255, 255),
    VTX(-3990, 162, -2841, -1045, 1031, 255, 255, 255, 255),
    VTX(-3830, 162, -2841, -1045, 7, 255, 255, 255, 255),
    VTX(-3830, 322, -2841, -2069, 7, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_0048B0[4] = {
    VTX(-3923, 178, -2841, 0, 0, 255, 255, 255, 255),
    VTX(-3923, -1, -2841, 0, 0, 255, 255, 255, 255),
    VTX(-3906, -1, -2841, 0, 0, 255, 255, 255, 255),
    VTX(-3906, 178, -2841, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x0048F0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0034D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004870[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_0048B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_0049A0[4] = {
    VTX(-4410, 322, -2429, -2069, 1024, 255, 255, 255, 255),
    VTX(-4410, 162, -2429, -1045, 1024, 255, 255, 255, 255),
    VTX(-4250, 162, -2429, -1045, 0, 255, 255, 255, 255),
    VTX(-4250, 322, -2429, -2069, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_0049E0[4] = {
    VTX(-4342, 178, -2429, 0, 0, 255, 255, 255, 255),
    VTX(-4342, -1, -2429, 0, 0, 255, 255, 255, 255),
    VTX(-4325, -1, -2429, 0, 0, 255, 255, 255, 255),
    VTX(-4325, 178, -2429, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004A20[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_002CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_0049A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_0049E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004AD0[4] = {
    VTX(3599, 322, -2429, -2069, 1024, 255, 255, 255, 255),
    VTX(3599, 162, -2429, -1045, 1024, 255, 255, 255, 255),
    VTX(3759, 162, -2429, -1045, 0, 255, 255, 255, 255),
    VTX(3759, 322, -2429, -2069, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004B10[4] = {
    VTX(3667, 178, -2429, 0, 0, 255, 255, 255, 255),
    VTX(3667, -1, -2429, 0, 0, 255, 255, 255, 255),
    VTX(3684, -1, -2429, 0, 0, 255, 255, 255, 255),
    VTX(3684, 178, -2429, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004B50[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_002CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004AD0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004B10[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004C00[4] = {
    VTX(4019, 322, -2841, -2069, 1031, 255, 255, 255, 255),
    VTX(4019, 162, -2841, -1045, 1031, 255, 255, 255, 255),
    VTX(4179, 162, -2841, -1045, 7, 255, 255, 255, 255),
    VTX(4179, 322, -2841, -2069, 7, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004C40[4] = {
    VTX(4086, 178, -2841, 0, 0, 255, 255, 255, 255),
    VTX(4086, -1, -2841, 0, 0, 255, 255, 255, 255),
    VTX(4103, -1, -2841, 0, 0, 255, 255, 255, 255),
    VTX(4103, 178, -2841, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004C80[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0034D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004C00[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004C40[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004D30[4] = {
    VTX(4412, 322, -1981, -1024, 1024, 255, 255, 255, 255),
    VTX(4412, 162, -1981, 0, 1024, 255, 255, 255, 255),
    VTX(4572, 162, -1981, 0, 0, 255, 255, 255, 255),
    VTX(4572, 322, -1981, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004D70[4] = {
    VTX(4479, 178, -1981, 0, 0, 255, 255, 255, 255),
    VTX(4479, -1, -1981, 0, 0, 255, 255, 255, 255),
    VTX(4496, -1, -1981, 0, 0, 255, 255, 255, 255),
    VTX(4496, 178, -1981, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004DB0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_003CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004D30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004D70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x004E60[] = {
    gsSPDisplayList(archery_room_00Dlist0x0047C0),
    gsSPDisplayList(archery_room_00Dlist0x0048F0),
    gsSPDisplayList(archery_room_00Dlist0x004A20),
    gsSPDisplayList(archery_room_00Dlist0x004B50),
    gsSPDisplayList(archery_room_00Dlist0x004C80),
    gsSPDisplayList(archery_room_00Dlist0x004DB0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004E98[4] = {
    VTX(127, 80, -1977, -1024, 1024, 255, 255, 255, 255),
    VTX(127, 40, -1977, 0, 1024, 255, 255, 255, 255),
    VTX(167, 40, -1977, 0, 0, 255, 255, 255, 255),
    VTX(167, 80, -1977, -1024, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_004ED8[4] = {
    VTX(144, 44, -1977, 0, 0, 255, 255, 255, 255),
    VTX(144, -1, -1977, 0, 0, 255, 255, 255, 255),
    VTX(149, -1, -1977, 0, 0, 255, 255, 255, 255),
    VTX(149, 44, -1977, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x004F18[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_003CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004E98[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_004ED8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_004FC8[4] = {
    VTX(-265, 80, -2836, -2069, 1031, 255, 255, 255, 255),
    VTX(-265, 40, -2836, -1045, 1031, 255, 255, 255, 255),
    VTX(-225, 40, -2836, -1045, 7, 255, 255, 255, 255),
    VTX(-225, 80, -2836, -2069, 7, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_005008[4] = {
    VTX(-249, 44, -2836, 0, 0, 255, 255, 255, 255),
    VTX(-249, -1, -2836, 0, 0, 255, 255, 255, 255),
    VTX(-244, -1, -2836, 0, 0, 255, 255, 255, 255),
    VTX(-244, 44, -2836, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x005048[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_0034D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_004FC8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_005008[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_0050F8[4] = {
    VTX(-685, 80, -2424, -2069, 1024, 255, 255, 255, 255),
    VTX(-685, 40, -2424, -1045, 1024, 255, 255, 255, 255),
    VTX(-645, 40, -2424, -1045, 0, 255, 255, 255, 255),
    VTX(-645, 80, -2424, -2069, 0, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_005138[4] = {
    VTX(-668, 44, -2424, 0, 0, 255, 255, 255, 255),
    VTX(-668, -1, -2424, 0, 0, 255, 255, 255, 255),
    VTX(-664, -1, -2424, 0, 0, 255, 255, 255, 255),
    VTX(-664, 44, -2424, 0, 0, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x005178[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_sceneTex_002CD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_0050F8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&archery_room_00Vtx_005138[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x005228[] = {
    gsSPDisplayList(archery_room_00Dlist0x004F18),
    gsSPDisplayList(archery_room_00Dlist0x005048),
    gsSPDisplayList(archery_room_00Dlist0x005178),
    gsSPEndDisplayList(),
}; 

Gfx archery_room_00Dlist0x005248[] = {
    gsSPDisplayList(archery_room_00Dlist0x004358),
    gsSPDisplayList(archery_room_00Dlist0x004720),
    gsSPDisplayList(archery_room_00Dlist0x004E60),
    gsSPDisplayList(archery_room_00Dlist0x005228),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_005270[24] = {
    VTX(-251, 80, -4000, 1024, 1024, 255, 255, 255, 255),
    VTX(-251, 240, -4000, 1024, 0, 255, 255, 255, 255),
    VTX(-411, 240, -4000, 0, 0, 255, 255, 255, 255),
    VTX(-411, 80, -4000, 0, 1024, 255, 255, 255, 255),
    VTX(-220, 80, -6000, 1024, 1024, 255, 255, 255, 255),
    VTX(-220, 240, -6000, 1024, 0, 255, 255, 255, 255),
    VTX(-380, 240, -6000, 0, 0, 255, 255, 255, 255),
    VTX(-380, 80, -6000, 0, 1024, 255, 255, 255, 255),
    VTX(-4038, 80, -4000, 1024, 1024, 255, 255, 255, 255),
    VTX(-4038, 240, -4000, 1024, 0, 255, 255, 255, 255),
    VTX(-4198, 240, -4000, 0, 0, 255, 255, 255, 255),
    VTX(-4198, 80, -4000, 0, 1024, 255, 255, 255, 255),
    VTX(-4007, 80, -6000, 1024, 1024, 255, 255, 255, 255),
    VTX(-4007, 240, -6000, 1024, 0, 255, 255, 255, 255),
    VTX(-4167, 240, -6000, 0, 0, 255, 255, 255, 255),
    VTX(-4167, 80, -6000, 0, 1024, 255, 255, 255, 255),
    VTX(4168, 80, -4000, 1024, 1024, 255, 255, 255, 255),
    VTX(4168, 240, -4000, 1024, 0, 255, 255, 255, 255),
    VTX(4008, 240, -4000, 0, 0, 255, 255, 255, 255),
    VTX(4008, 80, -4000, 0, 1024, 255, 255, 255, 255),
    VTX(4199, 80, -6000, 1024, 1024, 255, 255, 255, 255),
    VTX(4199, 240, -6000, 1024, 0, 255, 255, 255, 255),
    VTX(4039, 240, -6000, 0, 0, 255, 255, 255, 255),
    VTX(4039, 80, -6000, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_0053F0[24] = {
    VTX(200, 240, -6000, 1024, 1024, 255, 255, 255, 255),
    VTX(200, 400, -6000, 1024, 0, 255, 255, 255, 255),
    VTX(40, 400, -6000, 0, 0, 255, 255, 255, 255),
    VTX(40, 240, -6000, 0, 1024, 255, 255, 255, 255),
    VTX(-3587, 240, -6000, 1024, 1024, 255, 255, 255, 255),
    VTX(-3587, 400, -6000, 1024, 0, 255, 255, 255, 255),
    VTX(-3747, 400, -6000, 0, 0, 255, 255, 255, 255),
    VTX(-3747, 240, -6000, 0, 1024, 255, 255, 255, 255),
    VTX(4588, 240, -4000, 1024, 1024, 255, 255, 255, 255),
    VTX(4588, 400, -4000, 1024, 0, 255, 255, 255, 255),
    VTX(4428, 400, -4000, 0, 0, 255, 255, 255, 255),
    VTX(4428, 240, -4000, 0, 1024, 255, 255, 255, 255),
    VTX(-3618, 240, -4000, 1024, 1024, 255, 255, 255, 255),
    VTX(-3618, 400, -4000, 1024, 0, 255, 255, 255, 255),
    VTX(-3778, 400, -4000, 0, 0, 255, 255, 255, 255),
    VTX(-3778, 240, -4000, 0, 1024, 255, 255, 255, 255),
    VTX(169, 240, -4000, 1024, 1024, 255, 255, 255, 255),
    VTX(169, 400, -4000, 1024, 0, 255, 255, 255, 255),
    VTX(9, 400, -4000, 0, 0, 255, 255, 255, 255),
    VTX(9, 240, -4000, 0, 1024, 255, 255, 255, 255),
    VTX(4619, 240, -6000, 1024, 1024, 255, 255, 255, 255),
    VTX(4619, 400, -6000, 1024, 0, 255, 255, 255, 255),
    VTX(4459, 400, -6000, 0, 0, 255, 255, 255, 255),
    VTX(4459, 240, -6000, 0, 1024, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x005570[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_005698, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_005270[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(archery_room_00Tex_005E98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&archery_room_00Vtx_0053F0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_005698[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_005698.rgb5a1.inc.c"
};

u64 archery_room_00Tex_005E98[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_005E98.rgb5a1.inc.c"
};

static Vtx archery_room_00Vtx_006698[22] = {
    VTX(-9697, 0, -3180, -7867, 1024, 255, 255, 255, 255),
    VTX(-9697, 80, -3180, -7867, 177, 255, 255, 255, 255),
    VTX(-9835, 0, -4667, 12917, 1024, 255, 255, 255, 255),
    VTX(-9697, 0, -3180, -16841, 1024, 255, 255, 255, 255),
    VTX(-9835, 0, -4667, 28733, 1024, 255, 255, 255, 255),
    VTX(-8463, 0, -2817, 5031, 1024, 255, 255, 255, 255),
    VTX(-8463, 161, -2817, 5031, -683, 255, 255, 255, 255),
    VTX(-9697, 80, -3180, 12332, 177, 255, 255, 255, 255),
    VTX(-9697, 0, -3180, 12332, 1024, 255, 255, 255, 255),
    VTX(-7241, 0, -2749, 10931, 1024, 255, 255, 255, 255),
    VTX(-7241, 161, -2749, 10931, -683, 255, 255, 255, 255),
    VTX(-8463, 161, -2817, 1847, -683, 255, 255, 255, 255),
    VTX(-8463, 0, -2817, 1847, 1024, 255, 255, 255, 255),
    VTX(-6128, 0, -2981, 20627, 1024, 255, 255, 255, 255),
    VTX(-6128, 80, -2981, 20627, 177, 255, 255, 255, 255),
    VTX(-7241, 161, -2749, 9686, -683, 255, 255, 255, 255),
    VTX(-7241, 0, -2749, 9686, 1024, 255, 255, 255, 255),
    VTX(-5847, 0, -4802, -12748, 1024, 255, 255, 255, 255),
    VTX(-6128, 80, -2981, -5806, 177, 255, 255, 255, 255),
    VTX(-5847, 0, -4802, 23232, 1024, 255, 255, 255, 255),
    VTX(-6128, 80, -2981, -420, 177, 255, 255, 255, 255),
    VTX(-6128, 0, -2981, -420, 1024, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_0067F8[6] = {
    VTX(-5847, 0, -4802, 23848, -6862, 255, 255, 255, 255),
    VTX(-8463, 161, -2817, -8110, 5014, 255, 255, 255, 255),
    VTX(-7241, 161, -2749, 6853, 5244, 255, 255, 255, 255),
    VTX(-6128, 80, -2981, 20470, 3751, 255, 255, 255, 255),
    VTX(-9835, 0, -4667, -24977, -5545, 255, 255, 255, 255),
    VTX(-9697, 80, -3180, -23232, 3071, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x006858[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_006958, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_006698[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 17, 18, 0, 19, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(archery_room_00Tex_007958, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&archery_room_00Vtx_0067F8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_006958[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_006958.rgb5a1.inc.c"
};

u64 archery_room_00Tex_007958[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_007958.rgb5a1.inc.c"
};

Gfx archery_room_00Dlist0x008158[] = {
    gsSPDisplayList(archery_room_00Dlist0x006858),
    gsSPEndDisplayList(),
}; 

static Vtx archery_room_00Vtx_008168[8] = {
    VTX(-9898, 393, -5005, -24417, 18, 127, 255, 255, 255),
    VTX(-9898, -7, -5005, -24417, 2048, 127, 255, 255, 255),
    VTX(9590, -7, -9504, 26465, 2048, 127, 255, 255, 255),
    VTX(9590, 393, -9504, 26465, 18, 127, 255, 255, 255),
    VTX(-9689, 393, -4946, -24256, 18, 0, 255, 127, 255),
    VTX(-9689, -7, -4946, -24256, 2048, 0, 255, 127, 255),
    VTX(9798, -7, -9445, 25777, 2048, 0, 255, 127, 255),
    VTX(9798, 393, -9445, 25777, 18, 0, 255, 127, 255),
}; 

Gfx archery_room_00Dlist0x0081E8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_008278, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_008168[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_008278[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_008278.rgb5a1.inc.c"
};

static Vtx archery_room_00Vtx_009278[32] = {
    VTX(-6000, 0, 2400, -4096, 13312, 255, 255, 255, 255),
    VTX(-10000, 0, 2400, 6144, 13312, 255, 255, 255, 255),
    VTX(-10000, 0, 10000, 6144, -6144, 255, 255, 255, 255),
    VTX(-6000, 0, 10000, -4096, -6144, 255, 255, 255, 255),
    VTX(-2000, 0, 400, -4096, 15360, 146, 146, 146, 0),
    VTX(-6000, 0, 400, 6144, 15360, 146, 146, 146, 0),
    VTX(-6000, 0, 10000, 6144, -9216, 146, 146, 146, 0),
    VTX(-2000, 0, 10000, -4096, -9216, 146, 146, 146, 0),
    VTX(2000, 0, 400, -4096, 15360, 255, 255, 255, 255),
    VTX(-2000, 0, 400, 6144, 15360, 255, 255, 255, 255),
    VTX(-2000, 0, 10000, 6144, -9216, 255, 255, 255, 255),
    VTX(2000, 0, 10000, -4096, -9216, 255, 255, 255, 255),
    VTX(6000, 0, 400, -4096, 15360, 146, 146, 146, 0),
    VTX(2000, 0, 400, 6144, 15360, 146, 146, 146, 0),
    VTX(2000, 0, 10000, 6144, -9216, 146, 146, 146, 0),
    VTX(6000, 0, 10000, -4096, -9216, 146, 146, 146, 0),
    VTX(10000, 0, 2400, -4096, 12288, 255, 255, 255, 255),
    VTX(6000, 0, 2400, 6144, 12288, 255, 255, 255, 255),
    VTX(6000, 0, 10000, 6144, -7168, 255, 255, 255, 255),
    VTX(10000, 0, 10000, -4096, -7168, 255, 255, 255, 255),
    VTX(6000, 0, -10000, 6144, 4096, 255, 255, 255, 255),
    VTX(6000, 0, -2400, 6144, -15360, 255, 255, 255, 255),
    VTX(10000, 0, -2400, -4096, -15360, 255, 255, 255, 255),
    VTX(10000, 0, -10000, -4096, 4096, 255, 255, 255, 255),
    VTX(-10000, 0, -10000, 6144, 7168, 255, 255, 255, 255),
    VTX(-10000, 0, -2400, 6144, -12288, 255, 255, 255, 255),
    VTX(-6000, 0, -2400, -4096, -12288, 255, 255, 255, 255),
    VTX(-6000, 0, -10000, -4096, 7168, 255, 255, 255, 255),
    VTX(-6000, 0, -10000, 6144, 5120, 146, 146, 146, 0),
    VTX(-6000, 0, -400, 6144, -19456, 146, 146, 146, 0),
    VTX(-2000, 0, -400, -4096, -19456, 146, 146, 146, 0),
    VTX(-2000, 0, -10000, -4096, 5120, 146, 146, 146, 0),
}; 

static Vtx archery_room_00Vtx_009478[8] = {
    VTX(-2000, 0, -10000, 6144, 3072, 255, 255, 255, 255),
    VTX(-2000, 0, -400, 6144, -21504, 255, 255, 255, 255),
    VTX(2000, 0, -400, -4096, -21504, 255, 255, 255, 255),
    VTX(2000, 0, -10000, -4096, 3072, 255, 255, 255, 255),
    VTX(2000, 0, -10000, 7168, 3072, 146, 146, 146, 0),
    VTX(2000, 0, -400, 7168, -21504, 146, 146, 146, 0),
    VTX(6000, 0, -400, -3072, -21504, 146, 146, 146, 0),
    VTX(6000, 0, -10000, -3072, 3072, 146, 146, 146, 0),
}; 

Gfx archery_room_00Dlist0x0094F8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_0095D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_009278[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&archery_room_00Vtx_009478[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_0095D0[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_0095D0.rgb5a1.inc.c"
};

static Vtx archery_room_00Vtx_009DD0[24] = {
    VTX(2000, 0, 0, -4096, 989, 255, 255, 255, 255),
    VTX(2000, 0, -400, -4096, 16, 255, 255, 255, 255),
    VTX(-2000, 0, -400, 6144, 16, 255, 255, 255, 255),
    VTX(-2000, 0, 0, 6144, 989, 255, 255, 255, 255),
    VTX(-2000, 0, 400, 6144, 24, 255, 255, 255, 255),
    VTX(2000, 0, 400, -4096, 23, 255, 255, 255, 255),
    VTX(2000, 0, 0, -4096, 1006, 255, 255, 255, 255),
    VTX(-2000, 0, 0, 6144, 1006, 255, 255, 255, 255),
    VTX(6000, 0, -400, -4096, 25, 146, 146, 146, 0),
    VTX(2000, 0, -400, 6144, 25, 146, 146, 146, 0),
    VTX(2000, 0, 0, 6144, 1010, 255, 255, 255, 255),
    VTX(6000, 0, 0, -4096, 1010, 255, 255, 255, 255),
    VTX(-2000, 0, -400, -4096, 25, 146, 146, 146, 0),
    VTX(-6000, 0, -400, 6144, 25, 146, 146, 146, 0),
    VTX(-6000, 0, 0, 6144, 1010, 255, 255, 255, 255),
    VTX(-2000, 0, 0, -4096, 1010, 255, 255, 255, 255),
    VTX(2000, 0, 400, 9216, 15, 146, 146, 146, 0),
    VTX(6000, 0, 400, -1024, 15, 146, 146, 146, 0),
    VTX(6000, 0, 0, -1024, 1002, 255, 255, 255, 255),
    VTX(2000, 0, 0, 9216, 1002, 255, 255, 255, 255),
    VTX(-6000, 0, 400, 9216, 15, 146, 146, 146, 0),
    VTX(-2000, 0, 400, -1024, 15, 146, 146, 146, 0),
    VTX(-2000, 0, 0, -1024, 1002, 255, 255, 255, 255),
    VTX(-6000, 0, 0, 9216, 1002, 255, 255, 255, 255),
}; 

static Vtx archery_room_00Vtx_009F50[8] = {
    VTX(6000, 0, 2400, 0, 1024, 255, 255, 255, 255),
    VTX(10000, 0, 2400, 10240, 1024, 255, 255, 255, 255),
    VTX(10000, 0, -2400, 10240, -11264, 255, 255, 255, 255),
    VTX(6000, 0, -2400, 0, -11264, 255, 255, 255, 255),
    VTX(-10000, 0, 2400, 0, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, 2400, 10240, 1024, 255, 255, 255, 255),
    VTX(-6000, 0, -2400, 10240, -11264, 255, 255, 255, 255),
    VTX(-10000, 0, -2400, 0, -11264, 255, 255, 255, 255),
}; 

Gfx archery_room_00Dlist0x009FD0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(archery_room_00Tex_00A0D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&archery_room_00Vtx_009DD0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(archery_room_00Tex_00A8D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&archery_room_00Vtx_009F50[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 archery_room_00Tex_00A0D8[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_00A0D8.rgb5a1.inc.c"
};

u64 archery_room_00Tex_00A8D8[] = {
#include "assets/scenes/overworld/archery//archery_room_00Tex_00A8D8.rgb5a1.inc.c"
};

Gfx archery_room_00Dlist0x00B0D8[] = {
    gsSPDisplayList(archery_room_00Dlist0x0094F8),
    gsSPDisplayList(archery_room_00Dlist0x009FD0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00B0F0[80] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x20, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x21, 0x40, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x23, 0x28, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x52, 0x48, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x55, 0x70, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x81, 0x58, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x81, 0xE8, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xB0, 0xD8, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader2 archery_room_00MeshHeader0x00B140 = { { 2 }, 0x08, (u32)&archery_room_00MeshDListEntry0x00B14C, (u32)&(archery_room_00MeshDListEntry0x00B14C) + sizeof(archery_room_00MeshDListEntry0x00B14C) }; 

MeshEntry2 archery_room_00MeshDListEntry0x00B14C[8] = {
	{ -7841, 80, -3776, 2243, (u32)archery_room_00Dlist0x008158, 0 },
	{ 210, 240, -5000, 4523, (u32)archery_room_00Dlist0x005570, 0 },
	{ -1, 20, -1425, 6091, (u32)archery_room_00Dlist0x002328, 0 },
	{ 0, 0, 0, 14142, (u32)archery_room_00Dlist0x00B0D8, 0 },
	{ 1, 208, -800, 6113, (u32)archery_room_00Dlist0x002140, 0 },
	{ 49, 83, -1800, 4562, (u32)archery_room_00Dlist0x005248, 0 },
	{ -50, 193, -7225, 10097, (u32)archery_room_00Dlist0x0081E8, 0 },
	{ 0, 20, 0, 10283, (u32)archery_room_00Dlist0x000420, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 


