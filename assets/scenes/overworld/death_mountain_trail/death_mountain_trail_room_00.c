#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "death_mountain_trail_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "death_mountain_trail_scene.h"


static SCmdEchoSettings death_mountain_trail_room_00Set0000Cmd00;
static SCmdRoomBehavior death_mountain_trail_room_00Set0000Cmd01;
static SCmdSkyboxDisables death_mountain_trail_room_00Set0000Cmd02;
static SCmdTimeSettings death_mountain_trail_room_00Set0000Cmd03;
static SCmdWindSettings death_mountain_trail_room_00Set0000Cmd04;
static SCmdMesh death_mountain_trail_room_00Set0000Cmd05;
static SCmdObjectList death_mountain_trail_room_00Set0000Cmd06;
static SCmdActorList death_mountain_trail_room_00Set0000Cmd07;
static SCmdEndMarker death_mountain_trail_room_00Set0000Cmd08;
static s32 terminatorMaybe;
static Vtx death_mountain_trail_room_00Vtx_000230[5];
static Vtx death_mountain_trail_room_00Vtx_000280[8];
static Vtx death_mountain_trail_room_00Vtx_0003C8[8];
static Vtx death_mountain_trail_room_00Vtx_000448[54];
static Vtx death_mountain_trail_room_00Vtx_0007A8[3];
static Vtx death_mountain_trail_room_00Vtx_0007D8[15];
static Vtx death_mountain_trail_room_00Vtx_0008C8[5];
static Vtx death_mountain_trail_room_00Vtx_000918[8];
static Vtx death_mountain_trail_room_00Vtx_000C58[32];
static Vtx death_mountain_trail_room_00Vtx_000E58[10];
static Vtx death_mountain_trail_room_00Vtx_000EF8[4];
static Vtx death_mountain_trail_room_00Vtx_000F38[17];
static Vtx death_mountain_trail_room_00Vtx_001048[32];
static Vtx death_mountain_trail_room_00Vtx_001248[32];
static Vtx death_mountain_trail_room_00Vtx_001448[32];
static Vtx death_mountain_trail_room_00Vtx_001648[10];
static Vtx death_mountain_trail_room_00Vtx_0016E8[4];
static Vtx death_mountain_trail_room_00Vtx_001728[11];
static Vtx death_mountain_trail_room_00Vtx_0017D8[4];
static Vtx death_mountain_trail_room_00Vtx_001818[8];
static Vtx death_mountain_trail_room_00Vtx_001D90[6];
static Vtx death_mountain_trail_room_00Vtx_001DF0[7];
static Vtx death_mountain_trail_room_00Vtx_001E60[10];
static Vtx death_mountain_trail_room_00Vtx_001F00[3];
static Vtx death_mountain_trail_room_00Vtx_001F30[8];
static Vtx death_mountain_trail_room_00Vtx_002190[22];
static Vtx death_mountain_trail_room_00Vtx_0022F0[38];
static Vtx death_mountain_trail_room_00Vtx_002550[20];
static Vtx death_mountain_trail_room_00Vtx_002690[16];
static Vtx death_mountain_trail_room_00Vtx_002790[12];
static Vtx death_mountain_trail_room_00Vtx_002850[24];
static Vtx death_mountain_trail_room_00Vtx_0029D0[32];
static Vtx death_mountain_trail_room_00Vtx_002BD0[10];
static Vtx death_mountain_trail_room_00Vtx_002C70[8];
static Vtx death_mountain_trail_room_00Vtx_003140[6];
static Vtx death_mountain_trail_room_00Vtx_0031A0[4];
static Vtx death_mountain_trail_room_00Vtx_0031E0[11];
static Vtx death_mountain_trail_room_00Vtx_003290[11];
static Vtx death_mountain_trail_room_00Vtx_003340[8];
static Vtx death_mountain_trail_room_00Vtx_0035B8[18];
static Vtx death_mountain_trail_room_00Vtx_0036D8[4];
static Vtx death_mountain_trail_room_00Vtx_003718[15];
static Vtx death_mountain_trail_room_00Vtx_003808[3];
static Vtx death_mountain_trail_room_00Vtx_003838[22];
static Vtx death_mountain_trail_room_00Vtx_003998[4];
static Vtx death_mountain_trail_room_00Vtx_0039D8[8];
static Vtx death_mountain_trail_room_00Vtx_003CF8[8];
static Vtx death_mountain_trail_room_00Vtx_003D78[12];
static Vtx death_mountain_trail_room_00Vtx_003E38[56];
static Vtx death_mountain_trail_room_00Vtx_0041B8[8];
static Vtx death_mountain_trail_room_00Vtx_004470[7];
static Vtx death_mountain_trail_room_00Vtx_0044E0[11];
static Vtx death_mountain_trail_room_00Vtx_004590[4];
static Vtx death_mountain_trail_room_00Vtx_0045D0[6];
static Vtx death_mountain_trail_room_00Vtx_004630[25];
static Vtx death_mountain_trail_room_00Vtx_0047C0[8];
static Vtx death_mountain_trail_room_00Vtx_004AC0[5];
static Vtx death_mountain_trail_room_00Vtx_004B10[32];
static Vtx death_mountain_trail_room_00Vtx_004D10[44];
static Vtx death_mountain_trail_room_00Vtx_004FD0[4];
static Vtx death_mountain_trail_room_00Vtx_005010[4];
static Vtx death_mountain_trail_room_00Vtx_005050[8];
static Vtx death_mountain_trail_room_00Vtx_0053A8[28];
static Vtx death_mountain_trail_room_00Vtx_005568[32];
static Vtx death_mountain_trail_room_00Vtx_005768[9];
static Vtx death_mountain_trail_room_00Vtx_0057F8[8];
static Vtx death_mountain_trail_room_00Vtx_005A30[10];
static Vtx death_mountain_trail_room_00Vtx_005AD0[32];
static Vtx death_mountain_trail_room_00Vtx_005CD0[26];
static Vtx death_mountain_trail_room_00Vtx_005E70[8];
static Vtx death_mountain_trail_room_00Vtx_0060C0[21];
static Vtx death_mountain_trail_room_00Vtx_006210[3];
static Vtx death_mountain_trail_room_00Vtx_006240[8];
static Vtx death_mountain_trail_room_00Vtx_0063F0[8];
static Vtx death_mountain_trail_room_00Vtx_006470[8];
static Vtx death_mountain_trail_room_00Vtx_012C30[15];
static Vtx death_mountain_trail_room_00Vtx_012D20[8];
static Vtx death_mountain_trail_room_00Vtx_012E78[21];
static Vtx death_mountain_trail_room_00Vtx_012FC8[8];
static Vtx death_mountain_trail_room_00Vtx_013120[4];
static Vtx death_mountain_trail_room_00Vtx_013160[8];
static Vtx death_mountain_trail_room_00Vtx_0132A0[6];
static Vtx death_mountain_trail_room_00Vtx_013300[8];

static SCmdEchoSettings death_mountain_trail_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x0B }; // 0x0000

static SCmdRoomBehavior death_mountain_trail_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables death_mountain_trail_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings death_mountain_trail_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x05 }; // 0x0018

static SCmdWindSettings death_mountain_trail_room_00Set0000Cmd04 = {  0x05, 0x00, 0x00, 0x00, 0x5A, 0x00, 0xFF, 0xFB }; // 0x0020

static SCmdMesh death_mountain_trail_room_00Set0000Cmd05 = {  0x0A, 0, (u32)&death_mountain_trail_room_00MeshHeader0x000130 }; // 0x0028

static SCmdObjectList death_mountain_trail_room_00Set0000Cmd06 = {  0x0B, 0x07, (u32)death_mountain_trail_room_00ObjectList0x000048 }; // 0x0030

static SCmdActorList death_mountain_trail_room_00Set0000Cmd07 = {  0x01, 0x0D, (u32)death_mountain_trail_room_00ActorList0x000054 }; // 0x0038 }; 

static SCmdEndMarker death_mountain_trail_room_00Set0000Cmd08 = {  0x14, 0x00, 0x00 }; // 0x0040

s16 death_mountain_trail_room_00ObjectList0x000048[7] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_OF1D_MAP, // originally OBJECT_OF1
	OBJECT_BOMBF,
	OBJECT_TITE,
    OBJECT_AM,
    OBJECT_HATA, // manually added flagpole object
}; 

ActorEntry death_mountain_trail_room_00ActorList0x000054[] = {
	{ ACTOR_EN_TITE, -1942, 361, 1052, 0, 0, 0, 0xFFFF }, //0x000054
	{ ACTOR_FIELD_KEEP, -1825, 682, -553, 0, 0, 0, 0x0006 }, //0x000064
    { ACTOR_FIELD_KEEP, -1580, 693, -553, 0, 0, 0, 0x0006 }, //0x000074
    { ACTOR_EN_A_OBJ, -1774, 686, -590, 0, 3641, 0, 0x110A }, //0x000084
	{ ACTOR_EN_BOMBF, -570, 1489, -458, 0, 0, 0, 0xFFFF }, //0x000094
	{ ACTOR_EN_A_OBJ, -850, 1206, 741, 0, 16384, 0, 0x120A }, //0x0000A4
	{ ACTOR_EN_TITE, -1886, 401, 736, 0, 0, 0, 0xFFFF }, //0x0000B4
	{ ACTOR_EN_TITE, -1928, 494, 409, 0, 0, 0, 0xFFFF }, //0x0000C4
	{ ACTOR_EN_TITE, -1101, 1162, 978, 0, -8192, 0, 0xFFFF }, //0x0000D4
	{ ACTOR_EN_NPC, -462, 1485, -477, 0, 32767, 0, 0x1310 }, //0x0000E4
	{ ACTOR_EN_NPC, -1600, 706, -432, 0, -2002, 0, 0x1410 }, //0x0000F4
	{ ACTOR_EN_HATA, -1038, 2208, -274, 0, 0, 0, 0xFFFF }, //0x000104
	{ ACTOR_EN_HATA, -824, 1210, 1143, 0, 32767, 0, 0xFFFF }, //0x000114
}; 

static u32 pad124 = 0;
static u32 pad128 = 0;
static u32 pad12C = 0;

MeshHeader2 death_mountain_trail_room_00MeshHeader0x000130 = { { 2 }, 0x0F, (u32)&death_mountain_trail_room_00MeshDListEntry0x00013C, (u32)&(death_mountain_trail_room_00MeshDListEntry0x00013C) + sizeof(death_mountain_trail_room_00MeshDListEntry0x00013C) }; 

MeshEntry2 death_mountain_trail_room_00MeshDListEntry0x00013C[15] = {
	{ 150, -494, 3232, 7411, (u32)death_mountain_trail_room_00Dlist0x000998, 0 },
	{ -1776, 819, 1211, 3171, (u32)death_mountain_trail_room_00Dlist0x001898, 0 },
	{ -1622, 777, -1650, 973, (u32)death_mountain_trail_room_00Dlist0x001FB0, (u32)death_mountain_trail_room_00Dlist0x012DA0 },
	{ -970, 1587, 704, 1444, (u32)death_mountain_trail_room_00Dlist0x002CF0, 0 },
	{ -715, 1817, -1005, 922, (u32)death_mountain_trail_room_00Dlist0x0033C0, 0 },
	{ -728, 1476, -1111, 1015, (u32)death_mountain_trail_room_00Dlist0x003A58, 0 },
	{ -240, 2449, -2861, 1435, (u32)death_mountain_trail_room_00Dlist0x004238, 0 },
	{ 1870, -342, 1524, 9486, (u32)death_mountain_trail_room_00Dlist0x000300, 0 },
	{ 1061, 3160, -5289, 2139, (u32)death_mountain_trail_room_00Dlist0x004840, 0 },
	{ -173, 872, 231, 2324, (u32)death_mountain_trail_room_00Dlist0x0050D0, 0 },
	{ 39, 1368, -381, 5812, (u32)death_mountain_trail_room_00Dlist0x005878, 0 },
	{ 102, 5583, -6518, 4072, 0, (u32)death_mountain_trail_room_00Dlist0x0131E0 },
	{ -617, 3183, -6828, 5957, (u32)death_mountain_trail_room_00Dlist0x005EF0, 0 },
	{ -69, 1432, -862, 477, (u32)death_mountain_trail_room_00Dlist0x0064F0, (u32)death_mountain_trail_room_00Dlist0x013380 },
	{ -1030, -174, 3624, 4181, (u32)death_mountain_trail_room_00Dlist0x0062C0, (u32)death_mountain_trail_room_00Dlist0x013048 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx death_mountain_trail_room_00Vtx_000230[5] = {
    VTX(-5930, -342, -3876, 20925, 6656, 0, 120, 0, 255),
    VTX(-5930, -342, 6924, 5187, -16076, 0, 120, 0, 255),
    VTX(1870, -342, 1524, -3362, 6656, 0, 120, 0, 255),
    VTX(1870, -342, 6924, -11230, -4710, 0, 120, 0, 255),
    VTX(9670, -342, 6924, -27648, 6656, 0, 120, 0, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_000280[8] = {
    VTX(-5930, -342, -3876, 0, 0, 0, 0, 0, 0),
    VTX(9670, -342, -3876, 0, 0, 0, 0, 0, 0),
    VTX(-5930, -342, -3876, 0, 0, 0, 0, 0, 0),
    VTX(9670, -342, -3876, 0, 0, 0, 0, 0, 0),
    VTX(-5930, -342, 6924, 0, 0, 0, 0, 0, 0),
    VTX(9670, -342, 6924, 0, 0, 0, 0, 0, 0),
    VTX(-5930, -342, 6924, 0, 0, 0, 0, 0, 0),
    VTX(9670, -342, 6924, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x000300[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000280[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_010828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, 0, 0, 5, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000230[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_0003C8[8] = {
    VTX(-5556, 1260, 2521, 1024, 1024, 120, 0, 0, 255),
    VTX(-5556, 860, 3321, -1024, 2048, 120, 0, 0, 255),
    VTX(-5556, 860, 715, 5648, 2048, 60, 103, 252, 255),
    VTX(-5970, -342, 6919, 4199, 1024, 0, 0, 137, 255),
    VTX(-5260, -65, 6921, 2383, 314, 0, 0, 137, 255),
    VTX(-3930, -342, 6924, -1024, 1024, 0, 0, 137, 255),
    VTX(-4856, -9, 6922, 1348, 172, 0, 0, 137, 255),
    VTX(-4175, -113, 6923, -397, 438, 0, 0, 137, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_000448[54] = {
    VTX(-2000, -163, 3610, 9161, 1624, 238, 77, 167, 255),
    VTX(-1809, 544, 3706, 9161, 522, 248, 30, 141, 255),
    VTX(-1129, -107, 3977, 7988, 1624, 31, 241, 142, 255),
    VTX(34, -85, 4126, 6679, 1625, 1, 240, 138, 255),
    VTX(95, 557, 4085, 6666, 514, 250, 32, 141, 255),
    VTX(896, -123, 3865, 5760, 1625, 216, 28, 147, 255),
    VTX(2000, 544, 3706, 4096, 508, 231, 51, 151, 255),
    VTX(1200, -163, 3610, 5090, 1625, 234, 82, 171, 255),
    VTX(2000, -163, 3610, 4096, 1625, 0, 51, 148, 255),
    VTX(-1590, 652, 3812, 8777, 227, 249, 110, 210, 255),
    VTX(205, 664, 4191, 6498, 227, 1, 112, 214, 255),
    VTX(2000, 652, 3812, 4096, 228, 219, 102, 207, 255),
    VTX(-2000, -342, 3443, 9161, 2048, 239, 81, 170, 255),
    VTX(-2550, -342, 3718, 9905, 2048, 205, 87, 192, 255),
    VTX(-2423, -163, 3894, 9856, 1624, 184, 70, 191, 255),
    VTX(-2139, 565, 3909, 9797, 209, 190, 83, 202, 255),
    VTX(-2892, -342, 4252, 10649, 2031, 194, 99, 232, 255),
    VTX(-2636, -163, 4488, 10638, 1592, 172, 79, 226, 255),
    VTX(-2424, 544, 4338, 10646, 242, 181, 81, 210, 255),
    VTX(-2950, -342, 4739, 11363, 2022, 192, 101, 248, 255),
    VTX(-2698, -148, 5206, 11364, 1609, 192, 101, 248, 255),
    VTX(-3956, -342, 5012, 658, 2048, 111, 34, 26, 255),
    VTX(-3956, -342, 3812, 2737, 2048, 113, 28, 27, 255),
    VTX(-4156, 460, 3812, 2737, 648, 107, 50, 20, 255),
    VTX(-4156, 460, 4812, 658, 648, 97, 61, 33, 255),
    VTX(2000, -2453, 3043, 3923, 5456, 171, 20, 175, 255),
    VTX(2000, 652, 3812, 4096, 0, 219, 102, 207, 255),
    VTX(6271, 1466, -459, -4364, 0, 171, 20, 175, 255),
    VTX(-3556, -342, 3012, 4315, 2048, 100, 31, 58, 255),
    VTX(-3956, 460, 3212, 3875, 648, 89, 57, 56, 255),
    VTX(-2467, 460, 1723, 6862, 648, 67, 81, 56, 255),
    VTX(-2467, 460, 1723, 6862, 648, 67, 81, 56, 255),
    VTX(-4356, 860, 3212, 3405, 0, 52, 106, 17, 255),
    VTX(-3956, 460, 3212, 3875, 648, 89, 57, 56, 255),
    VTX(-4156, 460, 3812, 2737, 648, 107, 50, 20, 255),
    VTX(-4356, 860, 4012, 2229, 0, 65, 100, 6, 255),
    VTX(-3956, -342, 3812, 2737, 2048, 113, 28, 27, 255),
    VTX(-3556, -342, 3012, 4315, 2048, 100, 31, 58, 255),
    VTX(-4156, 460, 4812, 658, 648, 97, 61, 33, 255),
    VTX(-4756, 860, 5012, -389, 0, 51, 105, 27, 255),
    VTX(-4356, -342, 5812, -1170, 2048, 96, 45, 55, 255),
    VTX(-4556, 460, 5412, -740, 648, 81, 69, 54, 255),
    VTX(-3956, -342, 5012, 658, 2048, 111, 34, 26, 255),
    VTX(2000, -342, 3443, 4096, 2048, 0, 82, 169, 255),
    VTX(400, -342, 3443, 6041, 2048, 251, 81, 168, 255),
    VTX(377, -163, 3610, 6023, 1625, 253, 105, 200, 255),
    VTX(2000, -163, 3610, 4096, 1625, 0, 51, 148, 255),
    VTX(-667, -342, 3567, 7581, 2048, 255, 81, 168, 255),
    VTX(-691, -163, 3734, 7555, 1625, 255, 105, 199, 255),
    VTX(-2000, -342, 3443, 9161, 2048, 239, 81, 170, 255),
    VTX(-2000, -163, 3610, 9161, 1624, 238, 77, 167, 255),
    VTX(-1809, 544, 3706, 9161, 522, 248, 30, 141, 255),
    VTX(-2139, 565, 3909, 9797, 209, 190, 83, 202, 255),
    VTX(-1590, 652, 3812, 8777, 227, 249, 110, 210, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0007A8[3] = {
    VTX(-5556, 860, 715, 3742, 3584, 60, 103, 252, 255),
    VTX(-4356, 860, 3212, -325, 709, 52, 106, 17, 255),
    VTX(-2467, 460, 1723, -1536, 3584, 67, 81, 56, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0007D8[15] = {
    VTX(-5556, 860, 5012, -123, -2024, 0, 120, 0, 255),
    VTX(-4356, 860, 4012, -827, -181, 65, 100, 6, 255),
    VTX(-4356, 860, 3212, -325, 709, 52, 106, 17, 255),
    VTX(-4756, 860, 5012, -1010, -1537, 51, 105, 27, 255),
    VTX(5299, 1415, 1684, -4054, 4233, 226, 116, 251, 255),
    VTX(5207, 1369, 1130, -4054, 4826, 228, 116, 252, 255),
    VTX(2000, 697, 5192, -28, 1190, 242, 119, 252, 255),
    VTX(4990, 1222, 822, -3884, 5188, 214, 75, 83, 255),
    VTX(2000, 652, 3812, -266, 2623, 219, 102, 207, 255),
    VTX(205, 664, 4191, 1662, 2539, 1, 112, 214, 255),
    VTX(-2000, 697, 5192, 4124, 1882, 245, 119, 249, 255),
    VTX(-1590, 652, 3812, 3459, 3244, 249, 110, 210, 255),
    VTX(-2139, 565, 3909, 4046, 3241, 190, 83, 202, 255),
    VTX(-2424, 544, 4338, 4415, 2846, 181, 81, 210, 255),
    VTX(-5556, 860, 715, 2571, 2754, 60, 103, 252, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0008C8[5] = {
    VTX(-691, -163, 3734, 2803, 896, 255, 105, 199, 255),
    VTX(73, -14, 4554, 676, -2031, 0, 118, 236, 255),
    VTX(377, -163, 3610, -640, 896, 253, 105, 200, 255),
    VTX(-2000, -163, 3610, 6917, 1755, 238, 77, 167, 255),
    VTX(1200, -163, 3610, -3255, 598, 234, 82, 171, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_000918[8] = {
    VTX(6115, -2453, -1343, 0, 0, 0, 0, 0, 0),
    VTX(7226, -2453, 4957, 0, 0, 0, 0, 0, 0),
    VTX(6115, 1466, -1343, 0, 0, 0, 0, 0, 0),
    VTX(7226, 1466, 4957, 0, 0, 0, 0, 0, 0),
    VTX(-7018, -2453, 973, 0, 0, 0, 0, 0, 0),
    VTX(-5908, -2453, 7272, 0, 0, 0, 0, 0, 0),
    VTX(-7018, 1466, 973, 0, 0, 0, 0, 0, 0),
    VTX(-5908, 1466, 7272, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x000998[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000918[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_009628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 137, 122, 89, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0003C8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00D628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000448[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 1, 9, 10, 0),
    gsSP2Triangles(1, 10, 4, 0, 10, 11, 6, 0),
    gsSP2Triangles(10, 6, 4, 0, 12, 13, 0, 0),
    gsSP2Triangles(13, 14, 0, 0, 0, 14, 1, 0),
    gsSP2Triangles(14, 15, 1, 0, 13, 16, 14, 0),
    gsSP2Triangles(16, 17, 14, 0, 14, 17, 15, 0),
    gsSP2Triangles(17, 18, 15, 0, 16, 19, 17, 0),
    gsSP2Triangles(19, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 23, 0, 28, 30, 29, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000448[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 3, 0),
    gsSP2Triangles(4, 7, 3, 0, 4, 8, 7, 0),
    gsSP2Triangles(9, 7, 10, 0, 9, 11, 7, 0),
    gsSP2Triangles(8, 10, 7, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00C628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 140, 127, 97, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0007A8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 137, 122, 89, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0007D8[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(9, 10, 6, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 12, 13, 10, 0),
    gsSP1Triangle(0, 2, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_010828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, 0, 0, 5, 4, 0, 0),
    gsDPSetPrimColor(0, 0, 140, 127, 97, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0008C8[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP1Triangle(2, 1, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_000C58[32] = {
    VTX(-1545, 1016, 1161, 2048, 20480, 159, 67, 239, 255),
    VTX(-1600, 892, 271, 2048, 11413, 175, 82, 224, 255),
    VTX(-1810, 892, 271, 0, 11362, 158, 66, 238, 255),
    VTX(-1816, 1016, 1057, 0, 19425, 175, 84, 230, 255),
    VTX(-1578, 718, -96, 2048, 7429, 182, 86, 218, 255),
    VTX(-1803, 727, -92, 0, 7538, 224, 115, 251, 255),
    VTX(-1498, 718, -340, 2048, 3949, 169, 82, 254, 255),
    VTX(-1928, 677, -409, 2048, 2784, 65, 97, 24, 255),
    VTX(-2098, 637, 126, 2048, -3687, 88, 76, 30, 255),
    VTX(-1803, 727, -92, 0, -647, 224, 115, 251, 255),
    VTX(-1824, 637, 126, 0, -3687, 174, 78, 38, 255),
    VTX(-2055, 513, 344, 2048, -6338, 64, 95, 35, 255),
    VTX(-1801, 513, 344, 0, -6338, 158, 63, 26, 255),
    VTX(-2059, 402, 725, 2048, -10928, 76, 89, 23, 255),
    VTX(-1847, 402, 725, 0, -10928, 160, 70, 14, 255),
    VTX(-2165, 254, 1924, 2048, -21609, 65, 100, 254, 255),
    VTX(-1863, 264, 1837, 0, -22528, 204, 104, 28, 255),
    VTX(-1843, 677, -675, 2048, -5325, 52, 92, 56, 255),
    VTX(-1498, 718, -340, 0, -8757, 169, 82, 254, 255),
    VTX(-1522, 681, -666, 0, -5422, 172, 71, 47, 255),
    VTX(-1928, 677, -409, 2048, -8051, 65, 97, 24, 255),
    VTX(-1706, 724, -171, 771, -10506, 247, 118, 241, 255),
    VTX(-1844, 711, -196, 1429, -10244, 247, 118, 241, 255),
    VTX(-1706, 724, -171, 1140, -86, 247, 118, 241, 255),
    VTX(-1844, 711, -196, 1140, 1350, 247, 118, 241, 255),
    VTX(-1803, 727, -92, 2114, 730, 224, 115, 251, 255),
    VTX(-2070, 254, 2056, 2048, -22720, 37, 107, 219, 255),
    VTX(-1909, 264, 2088, 2048, -23778, 14, 90, 178, 255),
    VTX(-1323, 88, 2347, 2048, -29323, 58, 102, 235, 255),
    VTX(-1171, 88, 2193, 0, -29139, 222, 96, 63, 255),
    VTX(-1029, 17, 2494, 0, -32554, 203, 104, 26, 255),
    VTX(-1250, 17, 2485, 2048, -31269, 47, 109, 16, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_000E58[10] = {
    VTX(-1029, 17, 2494, 0, 214, 203, 104, 26, 255),
    VTX(-1250, 17, 2485, 2048, 1499, 47, 109, 16, 255),
    VTX(-1264, -77, 2901, 0, -2593, 179, 87, 229, 255),
    VTX(-1816, 1016, 1057, 0, 19425, 175, 84, 230, 255),
    VTX(-1703, 1016, 1381, 0, 21367, 12, 88, 176, 255),
    VTX(-1545, 1016, 1161, 2048, 20480, 159, 67, 239, 255),
    VTX(-1800, 677, -704, 2048, -5029, 75, 84, 41, 255),
    VTX(-1843, 677, -675, 2048, -5325, 52, 92, 56, 255),
    VTX(-1522, 681, -666, 0, -5422, 172, 71, 47, 255),
    VTX(-1541, 677, -699, 0, -5029, 164, 73, 24, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_000EF8[4] = {
    VTX(-1545, 1016, 1161, 0, 507, 159, 67, 239, 255),
    VTX(-1703, 1016, 1381, 5802, 507, 12, 88, 176, 255),
    VTX(-1703, 1048, 1381, 5802, 0, 84, 38, 181, 255),
    VTX(-1545, 1048, 1161, 0, 0, 165, 72, 31, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_000F38[17] = {
    VTX(-1250, 1419, -411, 2578, -31, 235, 81, 170, 255),
    VTX(-1460, 1409, -410, 4793, -153, 188, 98, 248, 255),
    VTX(-1383, 1514, -306, 3794, 1326, 147, 4, 208, 255),
    VTX(-1187, 1587, -451, 2527, 1201, 246, 194, 154, 255),
    VTX(-1147, 1687, -572, 1650, 2327, 223, 141, 253, 255),
    VTX(-1238, 1502, -990, -1310, 1453, 146, 47, 7, 255),
    VTX(-1071, 1562, -667, 702, 1271, 254, 203, 107, 255),
    VTX(-1268, 1432, -1030, -2103, 212, 145, 43, 11, 255),
    VTX(-1119, 1412, -691, 256, -40, 248, 115, 30, 255),
    VTX(-1289, 786, 1902, 764, -750, 225, 20, 114, 255),
    VTX(-1324, 974, 1829, 205, -406, 238, 74, 92, 255),
    VTX(-1757, 966, 1744, 657, 948, 199, 64, 83, 255),
    VTX(-1779, 825, 1763, 1113, 865, 220, 28, 111, 255),
    VTX(-1036, 2209, -275, 423, 153, 253, 118, 239, 255),
    VTX(-1216, 1843, -648, 298, 1532, 170, 42, 185, 255),
    VTX(-1431, 1994, 66, 1799, 455, 215, 106, 37, 255),
    VTX(-1216, 1843, -648, 1915, 4098, 170, 42, 185, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001048[32] = {
    VTX(-1847, 402, 725, 3713, -172, 160, 70, 14, 255),
    VTX(-1863, 264, 1837, 4418, -1798, 204, 104, 28, 255),
    VTX(-1752, 1108, 1571, 100, -1410, 151, 47, 31, 255),
    VTX(-1757, 966, 1744, 827, -1663, 199, 64, 83, 255),
    VTX(-1545, 1016, 1161, 570, -809, 159, 67, 239, 255),
    VTX(-1545, 1048, 1161, 408, -810, 165, 72, 31, 255),
    VTX(-1633, 1571, 704, -2272, -141, 153, 51, 33, 255),
    VTX(-1810, 892, 271, 1207, 493, 158, 66, 238, 255),
    VTX(-1801, 513, 344, 3147, 385, 158, 63, 26, 255),
    VTX(-1816, 1016, 1057, 503, -657, 175, 84, 230, 255),
    VTX(-1803, 727, -92, 2048, 1024, 224, 115, 251, 255),
    VTX(-1824, 637, 126, 2512, 704, 174, 78, 38, 255),
    VTX(-1600, 892, 271, 1207, 493, 175, 82, 224, 255),
    VTX(-1431, 1994, 66, -4436, 793, 215, 106, 37, 255),
    VTX(-1383, 1514, -306, -2186, 1337, 147, 4, 208, 255),
    VTX(-1216, 1843, -648, -3667, 1837, 170, 42, 185, 255),
    VTX(-1545, 1205, 1154, -396, -799, 222, 53, 102, 255),
    VTX(-1813, 1074, 1081, 330, -746, 6, 93, 182, 255),
    VTX(-1685, 1231, 1422, -530, -1191, 36, 108, 219, 255),
    VTX(-1264, -77, 2901, 4197, -3536, 179, 87, 229, 255),
    VTX(-1357, 112, 3052, 3228, -3758, 154, 0, 194, 255),
    VTX(-1036, 288, 2529, 2329, -3295, 138, 17, 252, 255),
    VTX(-1029, 17, 2494, 3713, -3244, 203, 104, 26, 255),
    VTX(-1119, 618, 2002, 1000, -2379, 176, 32, 83, 255),
    VTX(-1171, 88, 2193, 3713, -2659, 222, 96, 63, 255),
    VTX(-1779, 825, 1763, 1546, -1690, 220, 28, 111, 255),
    VTX(-1323, 88, 2347, 4295, -4533, 58, 102, 235, 255),
    VTX(-1373, 378, 2372, 2812, -4478, 76, 22, 166, 255),
    VTX(-1250, 17, 2485, 4658, -4753, 47, 109, 16, 255),
    VTX(-1909, 264, 2088, 4418, -2806, 14, 90, 178, 255),
    VTX(-1839, 519, 2117, 3115, -2917, 12, 12, 138, 255),
    VTX(-1373, 378, 2372, 3836, -3692, 76, 22, 166, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001248[32] = {
    VTX(-1909, 264, 2088, 4418, -2806, 14, 90, 178, 255),
    VTX(-1373, 378, 2372, 3836, -3692, 76, 22, 166, 255),
    VTX(-1323, 88, 2347, 5319, -3739, 58, 102, 235, 255),
    VTX(-2059, 402, 725, 3713, -172, 76, 89, 23, 255),
    VTX(-2136, 427, 1045, 3672, -630, 106, 54, 17, 255),
    VTX(-2165, 254, 1924, 4473, -1925, 65, 100, 254, 255),
    VTX(-2253, 407, 1964, 3550, -2005, 102, 59, 236, 255),
    VTX(-2354, 697, 1971, 2200, -2028, 107, 52, 10, 255),
    VTX(-2131, 682, 589, 2434, 21, 112, 39, 16, 255),
    VTX(-2470, 1143, 908, -78, -439, 96, 63, 35, 255),
    VTX(-2142, 817, 388, 1648, 323, 113, 26, 27, 255),
    VTX(-2098, 637, 126, 2512, 704, 88, 76, 30, 255),
    VTX(-2108, 454, 805, 3524, -404, 108, 47, 20, 255),
    VTX(-2059, 402, 725, 3713, -172, 76, 89, 23, 255),
    VTX(-2095, 546, 552, 3028, 84, 111, 41, 15, 255),
    VTX(-2055, 513, 344, 3147, 385, 64, 95, 35, 255),
    VTX(-2131, 682, 589, 2434, 21, 112, 39, 16, 255),
    VTX(-2166, 374, 2169, 3858, -2389, 51, 72, 176, 255),
    VTX(-2186, 509, 2206, 3165, -2517, 44, 65, 165, 255),
    VTX(-1839, 519, 2117, 3115, -2917, 12, 12, 138, 255),
    VTX(-2166, 374, 2169, 3858, -2389, 51, 72, 176, 255),
    VTX(-1909, 264, 2088, 4418, -2806, 14, 90, 178, 255),
    VTX(-2070, 254, 2056, 4473, -2448, 37, 107, 219, 255),
    VTX(-2449, 792, 1953, 1284, -1987, 96, 72, 1, 255),
    VTX(-1928, 677, -409, 2303, 1487, 65, 97, 24, 255),
    VTX(-2000, 1614, -733, -2494, 1961, 80, 83, 30, 255),
    VTX(-2142, 817, 388, 1648, 323, 113, 26, 27, 255),
    VTX(-2226, 1593, 122, -2384, 710, 84, 72, 45, 255),
    VTX(-2575, 1714, 159, -3518, 656, 55, 104, 21, 255),
    VTX(-1867, 1025, -710, 524, 1928, 71, 30, 92, 255),
    VTX(-1928, 677, -409, 2303, 1487, 65, 97, 24, 255),
    VTX(-1843, 677, -675, 2303, 1876, 52, 92, 56, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001448[32] = {
    VTX(-1498, 718, -340, 2096, 1386, 169, 82, 254, 255),
    VTX(-1460, 1192, -410, -331, 1489, 139, 6, 24, 255),
    VTX(-1439, 1230, -692, -527, 1901, 138, 14, 241, 255),
    VTX(-1460, 1409, -410, -1440, 1489, 188, 98, 248, 255),
    VTX(-1439, 1407, -692, -1431, 1901, 174, 85, 236, 255),
    VTX(-1383, 1514, -306, -2186, 1337, 147, 4, 208, 255),
    VTX(-1633, 1571, 704, -2272, -141, 153, 51, 33, 255),
    VTX(-1578, 718, -96, 2096, 1030, 182, 86, 218, 255),
    VTX(-1600, 892, 271, 1207, 493, 175, 82, 224, 255),
    VTX(-1491, 994, -693, 684, 1902, 167, 43, 68, 255),
    VTX(-1522, 681, -666, 2284, 1862, 172, 71, 47, 255),
    VTX(-1627, 920, -717, 1062, 3394, 236, 71, 94, 255),
    VTX(-1418, 1115, -1474, 62, 4218, 242, 96, 69, 255),
    VTX(-1736, 929, -720, 1016, 3632, 21, 63, 100, 255),
    VTX(-1867, 1025, -710, 524, 1928, 71, 30, 92, 255),
    VTX(-1736, 929, -720, 1016, 2674, 21, 63, 100, 255),
    VTX(-1418, 1115, -1474, 62, 3044, 242, 96, 69, 255),
    VTX(-1627, 920, -717, 1062, 2523, 236, 71, 94, 255),
    VTX(-1337, 1425, -1411, -1525, 3245, 191, 95, 31, 255),
    VTX(-1708, 1520, -1284, -2009, 2768, 73, 80, 50, 255),
    VTX(-1708, 1520, -1284, -2009, 2768, 73, 80, 50, 255),
    VTX(-2000, 1614, -733, -2494, 1961, 80, 83, 30, 255),
    VTX(-1268, 1432, -1030, -1560, 2396, 145, 43, 11, 255),
    VTX(-1238, 1502, -990, -1917, 2338, 146, 47, 7, 255),
    VTX(-1268, 1255, -1030, -656, 2396, 140, 28, 245, 255),
    VTX(-1726, 829, -702, 1525, 2355, 37, 210, 104, 255),
    VTX(-1843, 677, -675, 2303, 1876, 52, 92, 56, 255),
    VTX(-1790, 729, -704, 2037, 2065, 93, 232, 71, 255),
    VTX(-1766, 793, -703, 1710, 2210, 65, 210, 89, 255),
    VTX(-1626, 837, -700, 1484, 3124, 220, 206, 103, 255),
    VTX(-1670, 845, -701, 1443, 3357, 1, 183, 94, 255),
    VTX(-1726, 829, -702, 1525, 3128, 37, 210, 104, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001648[10] = {
    VTX(-1491, 994, -693, 684, 1902, 167, 43, 68, 255),
    VTX(-1627, 920, -717, 1062, 2523, 236, 71, 94, 255),
    VTX(-1626, 837, -700, 1484, 2352, 220, 206, 103, 255),
    VTX(-1586, 809, -700, 1628, 2205, 189, 206, 85, 255),
    VTX(-1566, 753, -699, 1914, 2058, 157, 222, 58, 255),
    VTX(-1522, 681, -666, 2284, 1862, 172, 71, 47, 255),
    VTX(-1541, 677, -699, 2303, 1911, 164, 73, 24, 255),
    VTX(-1843, 677, -675, 2303, 1876, 52, 92, 56, 255),
    VTX(-1800, 677, -704, 2303, 1919, 75, 84, 41, 255),
    VTX(-1790, 729, -704, 2037, 2065, 93, 232, 71, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0016E8[4] = {
    VTX(-1816, 652, 2190, 0, 0, 21, 80, 170, 255),
    VTX(-1821, 582, 2125, 1024, 0, 7, 52, 149, 255),
    VTX(-2731, 506, 2399, 1024, -2048, 224, 80, 173, 255),
    VTX(-1373, 378, 2372, 0, 3072, 76, 22, 166, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001728[11] = {
    VTX(-1821, 582, 2125, 2048, 0, 7, 52, 149, 255),
    VTX(-1839, 519, 2117, 2048, 512, 12, 12, 138, 255),
    VTX(-2186, 509, 2206, 4096, 512, 44, 65, 165, 255),
    VTX(-1373, 378, 2372, -1024, 0, 76, 22, 166, 255),
    VTX(-2194, 551, 2237, 4096, 0, 61, 86, 199, 255),
    VTX(-2449, 792, 1953, 6963, 512, 96, 72, 1, 255),
    VTX(-2363, 706, 2171, 5530, 0, 80, 89, 3, 255),
    VTX(-1119, 618, 2002, 0, 512, 176, 32, 83, 255),
    VTX(-820, -570, 3897, 3351, 512, 143, 23, 32, 255),
    VTX(-1109, 724, 1963, 0, 0, 176, 37, 81, 255),
    VTX(-1779, 825, 1763, -3351, 512, 220, 28, 111, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0017D8[4] = {
    VTX(-1755, 397, 1893, 0, 0, 140, 0, 227, 255),
    VTX(-1755, 237, 1893, 0, 4096, 140, 0, 227, 255),
    VTX(-1813, 237, 2125, 6144, 4096, 140, 0, 227, 255),
    VTX(-1813, 397, 2125, 6144, 0, 140, 0, 227, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001818[8] = {
    VTX(-2731, -1632, 3284, 0, 0, 0, 0, 0, 0),
    VTX(-820, -1632, 3284, 0, 0, 0, 0, 0, 0),
    VTX(-2731, 1166, -1561, 0, 0, 0, 0, 0, 0),
    VTX(-820, 1166, -1561, 0, 0, 0, 0, 0, 0),
    VTX(-2731, -291, 4058, 0, 0, 0, 0, 0, 0),
    VTX(-820, -291, 4058, 0, 0, 0, 0, 0, 0),
    VTX(-2731, 2506, -787, 0, 0, 0, 0, 0, 0),
    VTX(-820, 2506, -787, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x001898[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001818[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_002A40, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000C58[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 12, 0),
    gsSP2Triangles(8, 12, 10, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 18, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(15, 26, 16, 0, 16, 26, 27, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 16, 0),
    gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000E58[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_008E28, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000EF8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 180, 171, 159, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_000F38[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 4, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 2, 16, 4, 0),
    gsSP1Triangle(4, 16, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00B628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 189, 188, 184, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001048[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 0, 9, 0, 9, 0, 2, 0),
    gsSP2Triangles(10, 11, 7, 0, 7, 11, 8, 0),
    gsSP2Triangles(6, 12, 4, 0, 13, 14, 6, 0),
    gsSP2Triangles(15, 14, 13, 0, 5, 16, 6, 0),
    gsSP2Triangles(9, 2, 17, 0, 2, 18, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 24, 0),
    gsSP2Triangles(24, 23, 25, 0, 24, 25, 1, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001248[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
    gsSP2Triangles(6, 4, 7, 0, 4, 12, 7, 0),
    gsSP2Triangles(4, 13, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 15, 14, 0, 14, 7, 12, 0),
    gsSP2Triangles(15, 11, 14, 0, 11, 16, 14, 0),
    gsSP2Triangles(16, 7, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 0, 0, 6, 7, 18, 0),
    gsSP2Triangles(6, 18, 17, 0, 20, 21, 22, 0),
    gsSP2Triangles(6, 20, 22, 0, 6, 22, 5, 0),
    gsSP2Triangles(18, 7, 23, 0, 7, 9, 23, 0),
    gsSP2Triangles(11, 24, 25, 0, 9, 26, 27, 0),
    gsSP2Triangles(26, 25, 27, 0, 26, 11, 25, 0),
    gsSP2Triangles(25, 28, 27, 0, 9, 27, 28, 0),
    gsSP2Triangles(9, 28, 23, 0, 24, 29, 25, 0),
    gsSP1Triangle(30, 31, 29, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001448[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 3, 1, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 0, 7, 0),
    gsSP2Triangles(9, 10, 0, 0, 2, 9, 0, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(9, 16, 17, 0, 18, 19, 16, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 16, 20, 0),
    gsSP2Triangles(18, 22, 23, 0, 9, 24, 16, 0),
    gsSP2Triangles(24, 18, 16, 0, 24, 22, 18, 0),
    gsSP2Triangles(9, 2, 24, 0, 2, 4, 22, 0),
    gsSP2Triangles(2, 22, 24, 0, 25, 15, 14, 0),
    gsSP2Triangles(26, 27, 14, 0, 27, 28, 14, 0),
    gsSP2Triangles(28, 25, 14, 0, 29, 11, 30, 0),
    gsSP2Triangles(30, 13, 31, 0, 30, 11, 13, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001648[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00C628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 137, 122, 89, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0016E8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_010028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001728[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 2, 4, 0, 2, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(10, 7, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, 0, 1, 4, 7, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0017D8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_001D90[6] = {
    VTX(-1787, 677, -1336, 2048, 1442, 0, 120, 0, 255),
    VTX(-1800, 677, -704, 2048, -5029, 75, 84, 41, 255),
    VTX(-1541, 677, -699, 0, -5029, 164, 73, 24, 255),
    VTX(-1528, 677, -1331, 0, 1389, 0, 120, 0, 255),
    VTX(-1740, 677, -2599, 2048, 14381, 117, 23, 4, 255),
    VTX(-1520, 677, -2595, 0, 14336, 137, 6, 0, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001DF0[7] = {
    VTX(-1586, 809, -700, 0, 2731, 189, 206, 85, 255),
    VTX(-1626, 837, -700, 512, 2731, 220, 206, 103, 255),
    VTX(-1593, 778, -2596, 0, -11605, 190, 157, 2, 255),
    VTX(-1670, 845, -701, 1024, 2731, 1, 183, 94, 255),
    VTX(-1691, 777, -2598, 2048, -11605, 74, 163, 5, 255),
    VTX(-1726, 829, -702, 1536, 2731, 37, 210, 104, 255),
    VTX(-1766, 793, -703, 2048, 2731, 65, 210, 89, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001E60[10] = {
    VTX(-1593, 778, -2596, 14336, 0, 190, 157, 2, 255),
    VTX(-1566, 753, -699, -9216, 700, 157, 222, 58, 255),
    VTX(-1586, 809, -700, -9216, 0, 189, 206, 85, 255),
    VTX(-1766, 793, -703, -5120, 0, 65, 210, 89, 255),
    VTX(-1790, 729, -704, -5120, 1024, 93, 232, 71, 255),
    VTX(-1691, 777, -2598, 18432, 0, 74, 163, 5, 255),
    VTX(-1740, 677, -2599, 18432, 2048, 117, 23, 4, 255),
    VTX(-1800, 677, -704, -5120, 2048, 75, 84, 41, 255),
    VTX(-1520, 677, -2595, 14336, 2048, 137, 6, 0, 255),
    VTX(-1541, 677, -699, -9216, 2048, 164, 73, 24, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001F00[3] = {
    VTX(-1802, 677, -2601, 0, 1024, 254, 0, 119, 255),
    VTX(-1442, 677, -2593, 3686, 1024, 254, 0, 119, 255),
    VTX(-1642, 877, -2597, 1638, -1024, 254, 0, 119, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_001F30[8] = {
    VTX(-1802, 677, -2601, 0, 0, 0, 0, 0, 0),
    VTX(-1442, 677, -2601, 0, 0, 0, 0, 0, 0),
    VTX(-1802, 877, -2601, 0, 0, 0, 0, 0, 0),
    VTX(-1442, 877, -2601, 0, 0, 0, 0, 0, 0),
    VTX(-1802, 677, -699, 0, 0, 0, 0, 0, 0),
    VTX(-1442, 677, -699, 0, 0, 0, 0, 0, 0),
    VTX(-1802, 877, -699, 0, 0, 0, 0, 0, 0),
    VTX(-1442, 877, -699, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x001FB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001F30[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_002A40, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001D90[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_009628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001DF0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00A628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001E60[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(0, 8, 1, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_001F00[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_002190[22] = {
    VTX(-1162, 1083, 1455, -193, 4460, 242, 113, 220, 255),
    VTX(-1441, 1193, 956, -1260, 1733, 40, 99, 53, 255),
    VTX(-1545, 1048, 1161, -2226, 2787, 165, 72, 31, 255),
    VTX(-902, 1084, 1352, 1596, 4378, 205, 105, 229, 255),
    VTX(-866, 1143, 1084, 2207, 3172, 223, 113, 234, 255),
    VTX(-533, 1250, 597, 5006, 1325, 92, 25, 72, 255),
    VTX(-743, 1250, 566, 3718, 908, 35, 77, 85, 255),
    VTX(-657, 1122, 959, 3703, 2974, 62, 102, 10, 255),
    VTX(-918, 1145, 958, 2048, 2560, 11, 118, 16, 255),
    VTX(-657, 1122, 959, 3703, 2974, 62, 102, 10, 255),
    VTX(-743, 1250, 566, 3718, 908, 35, 77, 85, 255),
    VTX(-776, 1230, 641, 3400, 1223, 42, 97, 55, 255),
    VTX(-738, 1290, 567, 3750, 826, 46, 81, 75, 255),
    VTX(-1392, 1409, 616, -445, -129, 91, 62, 47, 255),
    VTX(-1238, 1617, 105, 1149, -2569, 68, 51, 84, 255),
    VTX(-589, 1618, 62, 5444, -1848, 93, 28, 70, 255),
    VTX(-1162, 1083, 1455, -193, 4460, 242, 113, 220, 255),
    VTX(-902, 1084, 1352, 1596, 4378, 205, 105, 229, 255),
    VTX(-866, 1143, 1084, 2207, 3172, 223, 113, 234, 255),
    VTX(-1572, 1048, 1491, -2851, 4192, 28, 75, 167, 255),
    VTX(-1545, 1048, 1161, -2226, 2787, 165, 72, 31, 255),
    VTX(-1703, 1048, 1381, -3554, 3503, 84, 38, 181, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0022F0[38] = {
    VTX(-533, 1290, 597, 2048, 2048, 37, 94, 64, 255),
    VTX(-716, 1290, 508, 0, 1365, 52, 102, 36, 255),
    VTX(-738, 1290, 567, 0, 2048, 46, 81, 75, 255),
    VTX(-511, 1290, 542, 2048, 1365, 89, 63, 48, 255),
    VTX(-400, 1396, 264, 2048, -2048, 75, 78, 51, 255),
    VTX(-600, 1412, 216, 0, -2048, 67, 88, 46, 255),
    VTX(-311, 1427, 39, 2048, -4779, 80, 79, 41, 255),
    VTX(-543, 1446, -21, 0, -4779, 73, 83, 45, 255),
    VTX(-288, 1481, -111, 2048, -6827, 87, 62, 53, 255),
    VTX(-123, 1510, -405, 2048, -10923, 76, 84, 218, 255),
    VTX(-402, 1510, -395, 0, -10923, 102, 20, 197, 255),
    VTX(-809, 1958, -385, 0, 0, 104, 44, 38, 255),
    VTX(-984, 1952, -207, 1016, 931, 64, 85, 55, 255),
    VTX(-717, 1952, -178, 1637, -1862, 38, 89, 71, 255),
    VTX(-543, 1952, -186, 1449, -2793, 50, 65, 87, 255),
    VTX(-432, 1957, -374, 0, -2793, 91, 58, 205, 255),
    VTX(-1068, 1956, -96, 2063, 1716, 55, 42, 97, 255),
    VTX(-775, 1952, -98, 2063, -1380, 49, 59, 92, 255),
    VTX(-717, 1894, -178, 0, 1024, 50, 58, 92, 255),
    VTX(-775, 1894, -98, 2048, 1721, 48, 58, 93, 255),
    VTX(-571, 1894, -99, 2048, 0, 54, 68, 82, 255),
    VTX(-533, 1894, -186, 0, -203, 89, 38, 70, 255),
    VTX(-1104, 1720, -98, 0, 3072, 59, 37, 97, 255),
    VTX(-1150, 1720, -18, 2048, 3497, 27, 46, 107, 255),
    VTX(-879, 1720, -18, 2048, 219, 206, 59, 91, 255),
    VTX(-930, 1720, -98, 0, 786, 206, 59, 91, 255),
    VTX(-879, 1778, -18, 2048, 219, 206, 59, 91, 255),
    VTX(-723, 1778, -18, 2048, -1591, 206, 59, 91, 255),
    VTX(-775, 1778, -98, 0, -1024, 206, 59, 91, 255),
    VTX(-930, 1778, -98, 0, 786, 206, 59, 91, 255),
    VTX(-723, 1836, -18, 2048, -1591, 206, 59, 91, 255),
    VTX(-581, 1836, -18, 2048, -3072, 59, 72, 76, 255),
    VTX(-561, 1836, -99, 0, -3235, 100, 51, 42, 255),
    VTX(-775, 1836, -98, 0, -1024, 207, 59, 91, 255),
    VTX(-1165, 1662, -18, 0, 2048, 52, 35, 102, 255),
    VTX(-1232, 1662, 105, 2048, 2552, 77, 38, 84, 255),
    VTX(-589, 1662, 62, 2048, -3762, 58, 60, 86, 255),
    VTX(-551, 1662, -18, 0, -4096, 100, 28, 59, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_002550[20] = {
    VTX(-717, 1952, -178, 105, 0, 38, 89, 71, 255),
    VTX(-717, 1894, -178, 0, 1024, 50, 58, 92, 255),
    VTX(-533, 1894, -186, 2048, 1024, 89, 38, 70, 255),
    VTX(-543, 1952, -186, 2048, 0, 50, 65, 87, 255),
    VTX(-717, 1894, -178, 2048, 1024, 50, 58, 92, 255),
    VTX(-717, 1952, -178, 2048, 0, 38, 89, 71, 255),
    VTX(-775, 1952, -98, 0, 0, 49, 59, 92, 255),
    VTX(-775, 1894, -98, 0, 1024, 48, 58, 93, 255),
    VTX(-723, 1778, -18, 2048, 1024, 206, 59, 91, 255),
    VTX(-723, 1836, -18, 2048, 0, 206, 59, 91, 255),
    VTX(-775, 1836, -98, 0, 0, 207, 59, 91, 255),
    VTX(-775, 1778, -98, 0, 1024, 206, 59, 91, 255),
    VTX(-879, 1720, -18, 2048, 1024, 206, 59, 91, 255),
    VTX(-879, 1778, -18, 2048, 0, 206, 59, 91, 255),
    VTX(-930, 1778, -98, -3, 0, 206, 59, 91, 255),
    VTX(-930, 1720, -98, -3, 1024, 206, 59, 91, 255),
    VTX(-879, 1778, -18, 866, 0, 206, 59, 91, 255),
    VTX(-879, 1662, -18, 862, 1024, 0, 0, 119, 255),
    VTX(-723, 1662, -18, 2183, 1024, 0, 0, 119, 255),
    VTX(-723, 1778, -18, 2183, 0, 206, 59, 91, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_002690[16] = {
    VTX(-589, 1618, 62, 4096, 599, 93, 28, 70, 255),
    VTX(-589, 1662, 62, 4096, 32, 58, 60, 86, 255),
    VTX(-1232, 1662, 105, -3615, 32, 77, 38, 84, 255),
    VTX(-1238, 1617, 105, -3686, 601, 68, 51, 84, 255),
    VTX(-879, 1662, -18, 3450, 572, 0, 0, 119, 255),
    VTX(-879, 1720, -18, 3450, 0, 206, 59, 91, 255),
    VTX(-1150, 1720, -18, 202, 0, 27, 46, 107, 255),
    VTX(-1165, 1662, -18, 0, 572, 52, 35, 102, 255),
    VTX(-743, 1250, 566, -1024, 512, 35, 77, 85, 255),
    VTX(-533, 1250, 597, 4405, 512, 92, 25, 72, 255),
    VTX(-533, 1290, 597, 4405, 2, 37, 94, 64, 255),
    VTX(-738, 1290, 567, -912, 2, 46, 81, 75, 255),
    VTX(-562, 1836, -99, 3761, 529, 1, 0, 119, 255),
    VTX(-571, 1894, -99, 3607, 17, 54, 68, 82, 255),
    VTX(-775, 1894, -98, 0, 17, 48, 58, 93, 255),
    VTX(-775, 1836, -98, 0, 529, 207, 59, 91, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_002790[12] = {
    VTX(-930, 1954, -97, 2048, 0, 0, 255, 119, 255),
    VTX(-1068, 1956, -96, 137, -19, 55, 42, 97, 255),
    VTX(-1104, 1720, -98, 0, 2048, 59, 37, 97, 255),
    VTX(-930, 1720, -97, 2049, 2048, 206, 59, 91, 255),
    VTX(-775, 1778, -98, 2048, 2048, 206, 59, 91, 255),
    VTX(-775, 1952, -98, 2048, 0, 49, 59, 92, 255),
    VTX(-930, 1954, -97, 7, -25, 0, 255, 119, 255),
    VTX(-930, 1778, -97, 2, 2048, 206, 59, 91, 255),
    VTX(-723, 1836, -18, 356, 0, 206, 59, 91, 255),
    VTX(-723, 1662, -18, 0, 2048, 0, 0, 119, 255),
    VTX(-551, 1662, -18, 2048, 2048, 100, 28, 59, 255),
    VTX(-581, 1836, -18, 2048, 0, 59, 72, 76, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_002850[24] = {
    VTX(-898, 1176, 1393, 1694, -227, 205, 107, 243, 255),
    VTX(-673, 1097, 1420, 2333, -179, 59, 95, 42, 255),
    VTX(-841, 1234, 1118, 1803, -802, 209, 109, 243, 255),
    VTX(-690, 1236, 1004, 2156, -1062, 8, 99, 189, 255),
    VTX(-1757, 966, 1744, -444, 652, 199, 64, 83, 255),
    VTX(-1324, 974, 1829, 667, 867, 238, 74, 92, 255),
    VTX(-1184, 1187, 1490, 1024, 0, 225, 110, 221, 255),
    VTX(-1514, 1207, 1539, 180, 126, 247, 115, 225, 255),
    VTX(-833, 969, 1854, 1922, 933, 46, 91, 62, 255),
    VTX(-1752, 1108, 1571, -429, 209, 151, 47, 31, 255),
    VTX(-1685, 1231, 1422, -260, -174, 36, 108, 219, 255),
    VTX(-1431, 1994, 66, 179, 5446, 215, 106, 37, 255),
    VTX(-1405, 1553, 711, 0, 1024, 88, 64, 49, 255),
    VTX(-1334, 1697, 290, -488, 3907, 101, 21, 61, 255),
    VTX(-1431, 1994, 66, 6009, 617, 215, 106, 37, 255),
    VTX(-1633, 1571, 704, 2048, -148, 153, 51, 33, 255),
    VTX(-1405, 1553, 711, 2048, 1024, 88, 64, 49, 255),
    VTX(-1424, 1403, 987, 435, 1032, 65, 64, 77, 255),
    VTX(-1545, 1205, 1154, -837, 514, 222, 53, 102, 255),
    VTX(-1431, 1994, 66, -529, -506, 215, 106, 37, 255),
    VTX(-996, 2180, -235, 1011, 1724, 55, 87, 61, 255),
    VTX(-1036, 2209, -275, 1216, 1519, 253, 118, 239, 255),
    VTX(-1132, 2087, -38, 0, 1024, 68, 28, 94, 255),
    VTX(-1132, 2087, -38, -1869, 6154, 68, 28, 94, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0029D0[32] = {
    VTX(-657, 1122, 959, -13791, 5915, 62, 102, 10, 255),
    VTX(-690, 1236, 1004, -14385, 5373, 8, 99, 189, 255),
    VTX(-673, 1097, 1420, -16149, 6040, 59, 95, 42, 255),
    VTX(-667, 970, 1359, -15838, 6691, 116, 23, 17, 255),
    VTX(-1703, 1016, 1381, 6432, 1789, 12, 88, 176, 255),
    VTX(-1816, 1016, 1057, 9655, 1792, 175, 84, 230, 255),
    VTX(-1703, 1048, 1381, 6437, 1536, 84, 38, 181, 255),
    VTX(-1813, 1074, 1081, 9086, 1496, 6, 93, 182, 255),
    VTX(-1685, 1231, 1422, 6241, 16, 36, 108, 219, 255),
    VTX(-1572, 1048, 1491, 5008, 1570, 28, 75, 167, 255),
    VTX(-1514, 1207, 1539, 4479, 96, 247, 115, 225, 255),
    VTX(-866, 1143, 1084, -2926, 1280, 223, 113, 234, 255),
    VTX(-690, 1236, 1004, -4781, 689, 8, 99, 189, 255),
    VTX(-657, 1122, 959, -5559, 1792, 62, 102, 10, 255),
    VTX(-841, 1234, 1118, -2795, 315, 209, 109, 243, 255),
    VTX(-902, 1084, 1352, -1111, 1075, 205, 105, 229, 255),
    VTX(-898, 1176, 1393, -928, 79, 205, 107, 243, 255),
    VTX(-1334, 1697, 290, -16247, 4885, 101, 21, 61, 255),
    VTX(-1232, 1662, 105, -14638, 5110, 77, 38, 84, 255),
    VTX(-1165, 1662, -18, -13549, 5080, 52, 35, 102, 255),
    VTX(-1238, 1617, 105, -14689, 5447, 68, 51, 84, 255),
    VTX(-1392, 1409, 616, -19289, 7169, 91, 62, 47, 255),
    VTX(-1405, 1553, 711, -20043, 6086, 88, 64, 49, 255),
    VTX(-1424, 1403, 987, -22569, 7302, 65, 64, 77, 255),
    VTX(-1441, 1193, 956, -22420, 8906, 40, 99, 53, 255),
    VTX(-1545, 1205, 1154, -24154, 8863, 222, 53, 102, 255),
    VTX(-1545, 1048, 1161, -24315, 10065, 165, 72, 31, 255),
    VTX(-1162, 1083, 1455, 1261, 1081, 242, 113, 220, 255),
    VTX(-1184, 1187, 1490, 1463, 0, 225, 110, 221, 255),
    VTX(-1132, 2087, -38, -13041, 1935, 68, 28, 94, 255),
    VTX(-1068, 1956, -96, -12677, 2842, 55, 42, 97, 255),
    VTX(-1104, 1720, -98, -12810, 4617, 59, 37, 97, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_002BD0[10] = {
    VTX(-1132, 2087, -38, -13041, 1935, 68, 28, 94, 255),
    VTX(-984, 1952, -207, -11735, 2740, 64, 85, 55, 255),
    VTX(-809, 1958, -385, -10096, 2836, 104, 44, 38, 255),
    VTX(-1068, 1956, -96, -12677, 2842, 55, 42, 97, 255),
    VTX(-996, 2180, -235, -11676, 1139, 55, 87, 61, 255),
    VTX(-1150, 1720, -18, -13517, 4636, 27, 46, 107, 255),
    VTX(-1104, 1720, -98, -12810, 4617, 59, 37, 97, 255),
    VTX(-1165, 1662, -18, -13549, 5080, 52, 35, 102, 255),
    VTX(-794, 2052, -446, -9494, 2079, 57, 104, 241, 255),
    VTX(-1036, 2209, -275, -11323, 1129, 253, 118, 239, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_002C70[8] = {
    VTX(-1987, 618, 1526, 0, 0, 0, 0, 0, 0),
    VTX(-860, 618, 1936, 0, 0, 0, 0, 0, 0),
    VTX(-1140, 1519, -802, 0, 0, 0, 0, 0, 0),
    VTX(-13, 1519, -392, 0, 0, 0, 0, 0, 0),
    VTX(-2081, 1374, 1785, 0, 0, 0, 0, 0, 0),
    VTX(-955, 1374, 2195, 0, 0, 0, 0, 0, 0),
    VTX(-1234, 2276, -543, 0, 0, 0, 0, 0, 0),
    VTX(-107, 2276, -133, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x002CF0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002C70[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_006628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002190[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(1, 4, 8, 0, 4, 9, 8, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 8, 9, 0),
    gsSP2Triangles(12, 1, 11, 0, 1, 8, 11, 0),
    gsSP2Triangles(12, 13, 1, 0, 13, 12, 14, 0),
    gsSP2Triangles(14, 12, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 20, 0, 19, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_002A40, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0022F0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(12, 16, 17, 0, 12, 17, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0022F0[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_008628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002550[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_008E28, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002690[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00A628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002790[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 180, 171, 159, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002850[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 6, 0, 9, 7, 10, 0),
    gsSP2Triangles(4, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 16, 15, 0),
    gsSP2Triangles(18, 17, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 19, 22, 0, 11, 13, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00B628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 189, 188, 184, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0029D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(12, 11, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 20, 17, 22, 0),
    gsSP2Triangles(20, 22, 21, 0, 24, 23, 25, 0),
    gsSP2Triangles(24, 25, 26, 0, 9, 10, 27, 0),
    gsSP2Triangles(27, 10, 28, 0, 27, 28, 16, 0),
    gsSP2Triangles(27, 16, 15, 0, 29, 17, 19, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_002BD0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 7, 5, 0, 4, 2, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_003140[6] = {
    VTX(-432, 1877, -374, 2048, 2048, 112, 33, 24, 255),
    VTX(-129, 1780, -1290, 2048, -5120, 43, 84, 73, 255),
    VTX(-382, 1780, -1290, 0, -5120, 72, 93, 237, 255),
    VTX(-809, 1878, -385, 0, 2048, 88, 48, 190, 255),
    VTX(-200, 1585, -1734, 2048, -8192, 188, 98, 7, 255),
    VTX(-453, 1585, -1734, 0, -8192, 69, 93, 227, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0031A0[4] = {
    VTX(-432, 1957, -374, -8114, 18470, 91, 58, 205, 255),
    VTX(-432, 1877, -374, -8136, 19835, 112, 33, 24, 255),
    VTX(-809, 1878, -385, -14565, 19732, 88, 48, 190, 255),
    VTX(-809, 1958, -385, -14543, 18367, 104, 44, 38, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0031E0[11] = {
    VTX(-794, 2052, -446, 1365, 341, 57, 104, 241, 255),
    VTX(-530, 1798, -1734, -921, 341, 8, 116, 230, 255),
    VTX(-1238, 1502, -990, 443, 1554, 146, 47, 7, 255),
    VTX(-794, 2052, -446, 0, -1024, 57, 104, 241, 255),
    VTX(-1238, 1502, -990, 0, 1262, 146, 47, 7, 255),
    VTX(-1216, 1843, -648, 566, 160, 170, 42, 185, 255),
    VTX(-1337, 1425, -1411, -816, 1631, 191, 95, 31, 255),
    VTX(-382, 1940, -1290, -196, -33, 90, 77, 244, 255),
    VTX(-1216, 1843, -648, 298, 1532, 170, 42, 185, 255),
    VTX(-1036, 2209, -275, 423, 153, 253, 118, 239, 255),
    VTX(-794, 2052, -446, -298, 517, 57, 104, 241, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003290[11] = {
    VTX(-129, 1780, -1290, -2241, 3864, 43, 84, 73, 255),
    VTX(-200, 1877, -1734, 1736, 3013, 177, 88, 15, 255),
    VTX(-200, 1585, -1734, 1569, 5248, 188, 98, 7, 255),
    VTX(-93, 1888, -1326, -1863, 3025, 19, 98, 66, 255),
    VTX(-453, 1585, -1734, 1569, 5248, 69, 93, 227, 255),
    VTX(-530, 1798, -1734, 1691, 3615, 8, 116, 230, 255),
    VTX(-382, 1940, -1290, -2150, 2640, 90, 77, 244, 255),
    VTX(-382, 1780, -1290, -2241, 3864, 72, 93, 237, 255),
    VTX(-794, 2052, -446, -9494, 2079, 57, 104, 241, 255),
    VTX(-809, 1878, -385, -10183, 3333, 88, 48, 190, 255),
    VTX(-809, 1958, -385, -10096, 2836, 104, 44, 38, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003340[8] = {
    VTX(-1337, 1375, -1697, 0, 0, 0, 0, 0, 0),
    VTX(-93, 1375, -1697, 0, 0, 0, 0, 0, 0),
    VTX(-1337, 1941, -1797, 0, 0, 0, 0, 0, 0),
    VTX(-93, 1941, -1797, 0, 0, 0, 0, 0, 0),
    VTX(-1337, 1643, -175, 0, 0, 0, 0, 0, 0),
    VTX(-93, 1643, -175, 0, 0, 0, 0, 0, 0),
    VTX(-1337, 2209, -275, 0, 0, 0, 0, 0, 0),
    VTX(-93, 2209, -275, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x0033C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003340[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_002A40, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003140[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_007628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 165, 155, 140, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0031A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 180, 171, 159, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0031E0[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 0, 7, 1, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00B628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 189, 188, 184, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003290[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP1Triangle(10, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_0035B8[18] = {
    VTX(-1268, 1432, -1030, 5453, 2729, 145, 43, 11, 255),
    VTX(-1439, 1407, -692, 6782, 1939, 174, 85, 236, 255),
    VTX(-1119, 1412, -691, 5273, 1509, 248, 115, 30, 255),
    VTX(-1460, 1409, -410, 7319, 1105, 188, 98, 248, 255),
    VTX(-1250, 1419, -411, 6332, 825, 235, 81, 170, 255),
    VTX(-801, 1410, -788, 3618, 1382, 29, 116, 3, 255),
    VTX(-561, 1503, -386, 3136, -214, 247, 101, 192, 255),
    VTX(-422, 1448, -753, 1894, 753, 1, 118, 235, 255),
    VTX(-561, 1503, -386, 3136, -214, 247, 101, 192, 255),
    VTX(4, 1329, -1286, -983, 1884, 42, 111, 16, 255),
    VTX(-786, 1331, -1280, 2758, 2912, 115, 29, 15, 255),
    VTX(-172, 1182, -1902, -1150, 4084, 166, 12, 78, 255),
    VTX(-615, 1183, -1898, 949, 4660, 69, 55, 81, 255),
    VTX(-402, 1500, -394, 2285, -421, 12, 51, 148, 255),
    VTX(-123, 1500, -405, 1040, -735, 114, 36, 253, 255),
    VTX(4, 1329, -1286, -983, 1884, 42, 111, 16, 255),
    VTX(-748, 1520, -314, 4138, -195, 241, 63, 156, 255),
    VTX(-1119, 1412, -691, 5273, 1509, 248, 115, 30, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0036D8[4] = {
    VTX(-123, 1500, -405, -6827, 512, 114, 36, 253, 255),
    VTX(-402, 1500, -394, 2544, 512, 12, 51, 148, 255),
    VTX(-402, 1510, -395, 2568, 10, 102, 20, 197, 255),
    VTX(-123, 1510, -405, -6855, 0, 76, 84, 218, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003718[15] = {
    VTX(-768, 1704, -774, 2048, -2558, 72, 180, 58, 255),
    VTX(-688, 1771, -577, 1084, -2558, 14, 137, 2, 255),
    VTX(-1147, 1687, -572, 1024, 2048, 223, 141, 253, 255),
    VTX(-721, 1732, -385, 0, -1286, 3, 176, 167, 255),
    VTX(-1187, 1587, -451, 0, 2048, 246, 194, 154, 255),
    VTX(-753, 1561, -1280, 2048, -9785, 74, 170, 38, 255),
    VTX(-420, 1672, -1267, 1024, -9785, 24, 146, 41, 255),
    VTX(-419, 1731, -1088, 683, -8192, 1, 138, 18, 255),
    VTX(-134, 1672, -1276, 0, -9785, 8, 171, 84, 255),
    VTX(-376, 1719, -545, 0, -3247, 58, 151, 255, 255),
    VTX(-575, 1318, -1903, 2048, -15701, 65, 219, 93, 255),
    VTX(-414, 1382, -1906, 1024, -15701, 14, 174, 86, 255),
    VTX(-272, 1382, -1907, 0, -15701, 225, 208, 105, 255),
    VTX(-1071, 1562, -667, 2048, 2048, 254, 203, 107, 255),
    VTX(-508, 1724, -458, 0, -2558, 238, 183, 163, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003808[3] = {
    VTX(-414, 1382, -1906, 1580, -618, 14, 174, 86, 255),
    VTX(-575, 1318, -1903, 2048, 2048, 65, 219, 93, 255),
    VTX(-272, 1382, -1907, 2048, -2826, 225, 208, 105, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003838[22] = {
    VTX(-801, 1410, -788, 3731, 2093, 29, 116, 3, 255),
    VTX(-786, 1331, -1280, 8126, 2138, 115, 29, 15, 255),
    VTX(-824, 1557, -821, 3721, 1074, 88, 236, 79, 255),
    VTX(-768, 1704, -774, 3710, 55, 72, 180, 58, 255),
    VTX(-753, 1561, -1280, 8105, 99, 74, 170, 38, 255),
    VTX(-575, 1318, -1903, 14803, 167, 65, 219, 93, 255),
    VTX(-615, 1183, -1898, 14823, 2206, 69, 55, 81, 255),
    VTX(-272, 1382, -1907, -36, 17, 225, 208, 105, 255),
    VTX(-172, 1182, -1902, -15, 2055, 166, 12, 78, 255),
    VTX(-134, 1672, -1276, 6782, 86, 8, 171, 84, 255),
    VTX(4, 1329, -1286, 6802, 2124, 42, 111, 16, 255),
    VTX(-1071, 1562, -667, -36, 17, 254, 203, 107, 255),
    VTX(-1119, 1412, -691, -15, 2055, 248, 115, 30, 255),
    VTX(-748, 1520, -314, 2475, 2048, 241, 63, 156, 255),
    VTX(-1250, 1419, -411, 9216, 2048, 235, 81, 170, 255),
    VTX(-1187, 1587, -451, 8192, 0, 246, 194, 154, 255),
    VTX(-721, 1732, -385, 1810, 0, 3, 176, 167, 255),
    VTX(-561, 1503, -386, -205, 2048, 247, 101, 192, 255),
    VTX(-508, 1724, -458, -1024, 0, 238, 183, 163, 255),
    VTX(-402, 1500, -394, -2740, 2048, 12, 51, 148, 255),
    VTX(-376, 1719, -545, -3252, 0, 58, 151, 255, 255),
    VTX(-402, 1510, -395, -2754, 1932, 102, 20, 197, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003998[4] = {
    VTX(-615, 1183, -1898, -409, 2048, 69, 55, 81, 255),
    VTX(-172, 1182, -1902, 4047, 2048, 166, 12, 78, 255),
    VTX(-272, 1382, -1907, 3040, 37, 225, 208, 105, 255),
    VTX(-575, 1318, -1903, 20, 103, 65, 219, 93, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0039D8[8] = {
    VTX(-1460, 1147, -1895, 0, 0, 0, 0, 0, 0),
    VTX(4, 1147, -1895, 0, 0, 0, 0, 0, 0),
    VTX(-1460, 1575, -1971, 0, 0, 0, 0, 0, 0),
    VTX(4, 1575, -1971, 0, 0, 0, 0, 0, 0),
    VTX(-1460, 1428, -298, 0, 0, 0, 0, 0, 0),
    VTX(4, 1428, -298, 0, 0, 0, 0, 0, 0),
    VTX(-1460, 1857, -374, 0, 0, 0, 0, 0, 0),
    VTX(4, 1857, -374, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x003A58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0039D8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_006628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0035B8[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 2, 0, 5, 7, 9, 0),
    gsSP2Triangles(10, 5, 9, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 7, 8, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 9, 8, 13, 0),
    gsSP2Triangles(4, 16, 17, 0, 16, 8, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_008E28, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0036D8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_009628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003718[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(5, 10, 11, 0, 5, 11, 6, 0),
    gsSP2Triangles(11, 12, 8, 0, 11, 8, 6, 0),
    gsSP2Triangles(13, 0, 2, 0, 9, 14, 1, 0),
    gsSP2Triangles(7, 9, 1, 0, 1, 14, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 140, 127, 97, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003808[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00A628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003838[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSP2Triangles(1, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 2, 3, 0),
    gsSP2Triangles(11, 12, 2, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 13, 16, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 17, 18, 0),
    gsSP2Triangles(18, 20, 21, 0, 19, 18, 21, 0),
    gsSP1Triangle(12, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 140, 127, 97, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003998[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_003CF8[8] = {
    VTX(-200, 1585, -1734, 2048, -8192, 188, 98, 7, 255),
    VTX(-668, 1746, -2211, 0, -11264, 53, 102, 33, 255),
    VTX(-453, 1585, -1734, 0, -8192, 69, 93, 227, 255),
    VTX(-18, 1911, -2700, 2048, -13995, 189, 96, 23, 255),
    VTX(-343, 2070, -3173, 0, -15701, 44, 100, 48, 255),
    VTX(162, 2427, -3983, 2048, -20821, 212, 60, 94, 255),
    VTX(-287, 2422, -3987, 0, -20821, 255, 110, 47, 255),
    VTX(-17, 2073, -3182, 2048, -16527, 170, 81, 16, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003D78[12] = {
    VTX(-317, 2901, -3983, -4419, 2580, 63, 225, 97, 255),
    VTX(-39, 2867, -3983, 323, 3224, 208, 12, 109, 255),
    VTX(-125, 3030, -3983, -1114, 411, 61, 226, 98, 255),
    VTX(20, 2771, -3983, 1306, 4863, 227, 223, 111, 255),
    VTX(-262, 2586, -3983, -3544, 7968, 44, 53, 98, 255),
    VTX(-38, 2586, -3983, 278, 8009, 56, 58, 88, 255),
    VTX(127, 2728, -3983, 3118, 5624, 201, 199, 89, 255),
    VTX(162, 2427, -3983, 3661, 10770, 212, 60, 94, 255),
    VTX(-1, 2424, -3981, 871, 10785, 77, 18, 89, 255),
    VTX(111, 2867, -3983, 2868, 3251, 190, 81, 58, 255),
    VTX(139, 3198, -3983, 3413, -2389, 184, 44, 85, 255),
    VTX(-133, 3194, -3983, -1226, -2389, 48, 107, 23, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_003E38[56] = {
    VTX(-296, 2603, -3875, -18002, 1015, 77, 52, 75, 255),
    VTX(-262, 2586, -3983, -16486, 1015, 44, 53, 98, 255),
    VTX(-317, 2901, -3983, -16486, -441, 63, 225, 97, 255),
    VTX(-188, 3044, -3848, -18002, -1170, 47, 199, 94, 255),
    VTX(-321, 2999, -3854, -18002, -639, 46, 239, 109, 255),
    VTX(-125, 3030, -3983, -16486, -1315, 61, 226, 98, 255),
    VTX(-129, 3152, -3854, -18002, -1898, 103, 8, 59, 255),
    VTX(-133, 3194, -3983, -16486, -1898, 48, 107, 23, 255),
    VTX(-250, 3305, -3837, -16591, -2626, 36, 71, 89, 255),
    VTX(-259, 3307, -3957, -15281, -2335, 76, 73, 200, 255),
    VTX(139, 3198, -3983, 7571, -1898, 184, 44, 85, 255),
    VTX(194, 3313, -3830, 8216, -2588, 205, 83, 70, 255),
    VTX(152, 3313, -3924, 7063, -2335, 165, 76, 241, 255),
    VTX(111, 2867, -3983, 7571, -150, 190, 81, 58, 255),
    VTX(107, 2881, -3850, 9087, -150, 230, 28, 113, 255),
    VTX(-39, 2867, -3983, 81, -587, 208, 12, 109, 255),
    VTX(-21, 2858, -3855, 1597, -587, 189, 197, 79, 255),
    VTX(-21, 2878, -3854, 1597, -733, 186, 65, 72, 255),
    VTX(20, 2771, -3983, 81, -150, 227, 223, 111, 255),
    VTX(127, 2728, -3983, 81, 141, 201, 199, 89, 255),
    VTX(84, 2810, -3854, 1597, -4, 224, 209, 105, 255),
    VTX(246, 2587, -3871, 1597, 870, 159, 30, 64, 255),
    VTX(162, 2427, -3983, 81, 1307, 212, 60, 94, 255),
    VTX(28, 2215, -3126, 14206, 91, 210, 102, 43, 255),
    VTX(246, 2587, -3871, 21008, -2944, 159, 30, 64, 255),
    VTX(-17, 2073, -3182, 14615, 1163, 170, 81, 16, 255),
    VTX(162, 2427, -3983, 21910, -1745, 212, 60, 94, 255),
    VTX(-343, 2070, -3173, 14549, 1184, 44, 100, 48, 255),
    VTX(-293, 2387, -3904, 21192, -1419, 60, 238, 102, 255),
    VTX(-351, 2628, -3808, 20480, -3243, 70, 35, 90, 255),
    VTX(-380, 2240, -3132, 14285, -107, 27, 96, 65, 255),
    VTX(-17, 2073, -3182, 14615, 1163, 170, 81, 16, 255),
    VTX(-18, 1911, -2700, 10285, 2519, 189, 96, 23, 255),
    VTX(-21, 2115, -2657, 10019, 963, 224, 112, 28, 255),
    VTX(28, 2215, -3126, 14206, 91, 210, 102, 43, 255),
    VTX(-530, 1798, -1734, 1691, 3615, 8, 116, 230, 255),
    VTX(-453, 1585, -1734, 1569, 5248, 69, 93, 227, 255),
    VTX(-668, 1746, -2211, 5874, 3900, 53, 102, 33, 255),
    VTX(-725, 1937, -2229, 6139, 2430, 247, 117, 21, 255),
    VTX(-200, 1585, -1734, 1569, 5248, 188, 98, 7, 255),
    VTX(-200, 1877, -1734, 1736, 3013, 177, 88, 15, 255),
    VTX(-343, 2070, -3173, 14549, 1184, 44, 100, 48, 255),
    VTX(-380, 2240, -3132, 14285, -107, 27, 96, 65, 255),
    VTX(-21, 2858, -3855, 0, 1363, 189, 197, 79, 255),
    VTX(107, 2881, -3850, 2189, 979, 230, 28, 113, 255),
    VTX(-21, 2878, -3854, 0, 1024, 186, 65, 72, 255),
    VTX(-296, 2603, -3875, -18002, 1015, 77, 52, 75, 255),
    VTX(-293, 2387, -3904, -18002, 1744, 60, 238, 102, 255),
    VTX(-46, 2507, -3847, -15991, 1307, 52, 11, 107, 255),
    VTX(-83, 2596, -3869, -16107, 1015, 47, 89, 64, 255),
    VTX(-4, 2390, -3903, -15350, 1744, 101, 1, 64, 255),
    VTX(-38, 2586, -3983, -14213, 1015, 56, 58, 88, 255),
    VTX(-1, 2424, -3981, -14080, 1650, 77, 18, 89, 255),
    VTX(-351, 2628, -3808, -18760, 918, 70, 35, 90, 255),
    VTX(-321, 2999, -3854, -18002, -639, 46, 239, 109, 255),
    VTX(-317, 2901, -3983, -16486, -441, 63, 225, 97, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0041B8[8] = {
    VTX(-764, 1211, -2008, 0, 0, 0, 0, 0, 0),
    VTX(-103, 1211, -1892, 0, 0, 0, 0, 0, 0),
    VTX(-340, 2622, -4415, 0, 0, 0, 0, 0, 0),
    VTX(321, 2622, -4299, 0, 0, 0, 0, 0, 0),
    VTX(-840, 1963, -1581, 0, 0, 0, 0, 0, 0),
    VTX(-179, 1963, -1464, 0, 0, 0, 0, 0, 0),
    VTX(-415, 3374, -3988, 0, 0, 0, 0, 0, 0),
    VTX(246, 3374, -3871, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x004238[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0041B8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_002A40, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003CF8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 4, 0),
    gsSP2Triangles(3, 7, 4, 0, 7, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_007628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 165, 155, 140, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003D78[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 3, 4, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(5, 7, 6, 0, 1, 9, 10, 0),
    gsSP2Triangles(2, 1, 10, 0, 2, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00B628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 189, 188, 184, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003E38[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 3, 0, 6, 3, 5, 0),
    gsSP2Triangles(5, 7, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
    gsSP2Triangles(18, 19, 16, 0, 19, 20, 16, 0),
    gsSP2Triangles(21, 20, 19, 0, 19, 22, 21, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_003E38[31], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 18, 17, 0, 19, 21, 20, 0),
    gsSP2Triangles(20, 17, 19, 0, 15, 22, 16, 0),
    gsSP2Triangles(23, 22, 15, 0, 15, 24, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_004470[7] = {
    VTX(-461, 3303, -4336, -1769, 435, 58, 87, 58, 255),
    VTX(-133, 3194, -3983, -455, 2276, 48, 107, 23, 255),
    VTX(313, 3327, -4511, 2747, 674, 227, 113, 26, 255),
    VTX(771, 3309, -4388, 5111, 1702, 254, 116, 28, 255),
    VTX(139, 3198, -3983, 1047, 2596, 184, 44, 85, 255),
    VTX(-260, 3193, -3983, -1154, 2126, 53, 81, 186, 255),
    VTX(69, 3327, -4623, 1560, -84, 46, 82, 74, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0044E0[11] = {
    VTX(313, 3327, -4511, 2048, 2048, 227, 113, 26, 255),
    VTX(2584, 3524, -6747, 0, -19797, 255, 138, 20, 255),
    VTX(69, 3327, -4623, 0, 2048, 46, 82, 74, 255),
    VTX(-262, 2586, -3983, 0, 2560, 44, 53, 98, 255),
    VTX(-296, 2603, -3875, 2048, 3193, 77, 52, 75, 255),
    VTX(-38, 2586, -3983, 0, -512, 56, 58, 88, 255),
    VTX(-83, 2596, -3869, 2048, 121, 47, 89, 64, 255),
    VTX(-39, 2867, -3983, 0, -1336, 208, 12, 109, 255),
    VTX(-21, 2878, -3854, 2048, -1536, 186, 65, 72, 255),
    VTX(107, 2881, -3850, 2048, -3072, 230, 28, 113, 255),
    VTX(111, 2867, -3983, 0, -3072, 190, 81, 58, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_004590[4] = {
    VTX(2584, 3524, -6747, 1024, 23552, 255, 138, 20, 255),
    VTX(272, 3484, -4537, 9, -3858, 184, 229, 91, 255),
    VTX(179, 3536, -4564, 1024, -4375, 237, 192, 99, 255),
    VTX(102, 3457, -4641, 2053, -4224, 48, 219, 103, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0045D0[6] = {
    VTX(2584, 3524, -6747, 28160, 0, 255, 138, 20, 255),
    VTX(313, 3327, -4511, -12800, 2048, 227, 113, 26, 255),
    VTX(272, 3484, -4537, -12800, 0, 184, 229, 91, 255),
    VTX(2584, 3524, -6747, -29184, 0, 255, 138, 20, 255),
    VTX(102, 3457, -4641, -4608, 0, 48, 219, 103, 255),
    VTX(69, 3327, -4623, -5120, 2048, 46, 82, 74, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_004630[25] = {
    VTX(609, 3394, -4240, 17268, -2335, 186, 97, 254, 255),
    VTX(773, 3423, -4353, 16778, -2745, 24, 89, 76, 255),
    VTX(611, 3443, -4413, 16317, -2335, 200, 51, 93, 255),
    VTX(-260, 3193, -3983, 6332, -1898, 53, 81, 186, 255),
    VTX(-461, 3303, -4336, 8888, -1898, 58, 87, 58, 255),
    VTX(-460, 3418, -4300, 8888, -2335, 14, 82, 86, 255),
    VTX(-259, 3307, -3957, 6375, -2335, 76, 73, 200, 255),
    VTX(-250, 3305, -3837, 5551, -2626, 36, 71, 89, 255),
    VTX(69, 3327, -4623, 12376, -1898, 46, 82, 74, 255),
    VTX(102, 3457, -4641, 12567, -2335, 48, 219, 103, 255),
    VTX(179, 3536, -4564, 13178, -2499, 237, 192, 99, 255),
    VTX(35, 3735, -4553, 11987, -3355, 6, 24, 117, 255),
    VTX(435, 3733, -4566, 14370, -3355, 249, 46, 110, 255),
    VTX(272, 3484, -4537, 13775, -2335, 184, 229, 91, 255),
    VTX(608, 3280, -4284, 17268, -1898, 140, 26, 242, 255),
    VTX(139, 3198, -3983, 20750, -1898, 184, 44, 85, 255),
    VTX(152, 3313, -3924, 20430, -2335, 165, 76, 241, 255),
    VTX(152, 3313, -3924, 18164, -237, 165, 76, 241, 255),
    VTX(194, 3313, -3830, 18236, -807, 205, 83, 70, 255),
    VTX(609, 3394, -4240, 16169, -294, 186, 97, 254, 255),
    VTX(579, 3376, -4446, 16064, -2062, 158, 10, 67, 255),
    VTX(569, 3317, -4442, 16001, -1898, 174, 18, 85, 255),
    VTX(313, 3327, -4511, 14014, -1898, 227, 113, 26, 255),
    VTX(773, 3423, -4353, 15451, -315, 24, 89, 76, 255),
    VTX(-133, 3194, -3983, 5617, -1898, 48, 107, 23, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0047C0[8] = {
    VTX(-583, 2541, -4234, 0, 0, 0, 0, 0, 0),
    VTX(-63, 2541, -3614, 0, 0, 0, 0, 0, 0),
    VTX(2549, 3262, -6862, 0, 0, 0, 0, 0, 0),
    VTX(3069, 3262, -6242, 0, 0, 0, 0, 0, 0),
    VTX(-724, 3583, -4116, 0, 0, 0, 0, 0, 0),
    VTX(-204, 3583, -3496, 0, 0, 0, 0, 0, 0),
    VTX(2408, 4304, -6744, 0, 0, 0, 0, 0, 0),
    VTX(2928, 4304, -6124, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x004840[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0047C0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_006628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 132, 98, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004470[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 5, 1, 0),
    gsSP1Triangle(0, 2, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_002A40, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0044E0[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_009628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004590[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00A628, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0045D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00B628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 189, 188, 184, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004630[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 8, 9, 0, 9, 5, 4, 0),
    gsSP2Triangles(9, 10, 11, 0, 5, 9, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(1, 12, 2, 0, 12, 13, 2, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 2, 20, 0, 0),
    gsSP2Triangles(20, 14, 0, 0, 20, 21, 14, 0),
    gsSP2Triangles(2, 13, 20, 0, 13, 22, 21, 0),
    gsSP2Triangles(13, 21, 20, 0, 23, 19, 18, 0),
    gsSP1Triangle(24, 3, 6, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_004AC0[5] = {
    VTX(487, 1425, -1734, 1247, -2312, 47, 88, 66, 255),
    VTX(0, 634, -831, 0, 0, 99, 41, 53, 255),
    VTX(199, 634, -831, 511, 0, 141, 31, 242, 255),
    VTX(8, 539, -190, 23, 1643, 0, 116, 28, 255),
    VTX(-234, 539, -190, -599, 1642, 79, 81, 39, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_004B10[32] = {
    VTX(-510, 295, 580, 7927, -1222, 116, 7, 29, 255),
    VTX(-234, 539, -190, 6680, 186, 79, 81, 39, 255),
    VTX(-311, 1381, 39, 2369, -233, 116, 2, 30, 255),
    VTX(-400, 1276, 264, 2907, -644, 111, 0, 44, 255),
    VTX(-311, 1427, 39, 1925, -233, 80, 79, 41, 255),
    VTX(-400, 1396, 264, 2088, -644, 75, 78, 51, 255),
    VTX(0, 634, -831, 6194, 1359, 99, 41, 53, 255),
    VTX(-288, 1386, -109, 2343, 37, 113, 255, 38, 255),
    VTX(-288, 1481, -111, 1650, 42, 87, 62, 53, 255),
    VTX(-123, 1500, -405, 1347, 579, 114, 36, 253, 255),
    VTX(-123, 1510, -405, 1296, 579, 76, 84, 218, 255),
    VTX(-123, 1460, -405, 1962, 579, 114, 0, 37, 255),
    VTX(-533, 1113, 597, 3738, -1254, 112, 1, 42, 255),
    VTX(-657, 1002, 959, 4310, -1915, 117, 6, 22, 255),
    VTX(-533, 1250, 597, 3037, -1254, 92, 25, 72, 255),
    VTX(-657, 1122, 959, 3696, -1915, 62, 102, 10, 255),
    VTX(-533, 1290, 597, 2833, -1254, 37, 94, 64, 255),
    VTX(-511, 1290, 542, 2833, -1152, 89, 63, 48, 255),
    VTX(-291, 295, 580, 7927, -1222, 138, 255, 238, 255),
    VTX(-207, 1046, 1343, 4082, -2618, 174, 79, 36, 255),
    VTX(-350, 1393, 559, 2305, -1184, 169, 75, 32, 255),
    VTX(12, 1941, -190, -498, 185, 174, 84, 233, 255),
    VTX(199, 634, -831, 6192, 1359, 141, 31, 242, 255),
    VTX(187, 1895, -577, -263, 894, 174, 64, 196, 255),
    VTX(-776, 1230, 641, 2120, 3258, 42, 97, 55, 255),
    VTX(-743, 1250, 566, 2958, 3103, 35, 77, 85, 255),
    VTX(-738, 1290, 567, 2984, 2840, 46, 81, 75, 255),
    VTX(-134, 1672, -1276, 22857, -224, 8, 171, 84, 255),
    VTX(-129, 1780, -1290, 23061, -940, 43, 84, 73, 255),
    VTX(-376, 1719, -545, 15107, -842, 58, 151, 255, 255),
    VTX(-432, 1877, -374, 13319, -1307, 112, 33, 24, 255),
    VTX(-402, 1510, -395, 13543, 573, 102, 20, 197, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_004D10[44] = {
    VTX(-543, 1952, -186, 11176, -1740, 50, 65, 87, 255),
    VTX(-533, 1894, -186, 11177, -1359, 89, 38, 70, 255),
    VTX(-432, 1957, -374, 13359, -1835, 91, 58, 205, 255),
    VTX(-432, 1877, -374, 13319, -1307, 112, 33, 24, 255),
    VTX(-561, 1836, -99, 10224, -951, 100, 51, 42, 255),
    VTX(-571, 1894, -99, 10220, -1332, 54, 68, 82, 255),
    VTX(-551, 1662, -18, 9397, 217, 100, 28, 59, 255),
    VTX(-581, 1836, -18, 9382, -927, 59, 72, 76, 255),
    VTX(-589, 1618, 62, 8484, 532, 93, 28, 70, 255),
    VTX(-589, 1662, 62, 8506, 242, 58, 60, 86, 255),
    VTX(-600, 1412, 216, 6889, 1669, 67, 88, 46, 255),
    VTX(-543, 1446, -21, 9372, 1376, 73, 83, 45, 255),
    VTX(-716, 1290, 508, 3621, 2822, 52, 102, 36, 255),
    VTX(-738, 1290, 567, 2984, 2840, 46, 81, 75, 255),
    VTX(-402, 1510, -395, 13543, 573, 102, 20, 197, 255),
    VTX(-667, 970, 1359, 4472, -2646, 116, 23, 17, 255),
    VTX(-657, 1002, 959, 4310, -1915, 117, 6, 22, 255),
    VTX(-657, 1122, 959, 3696, -1915, 62, 102, 10, 255),
    VTX(-510, 295, 580, 7927, -1222, 116, 7, 29, 255),
    VTX(-596, 40, 1391, 9233, -2705, 117, 7, 22, 255),
    VTX(-758, 680, 2000, 5957, -3819, 117, 5, 26, 255),
    VTX(-775, -213, 2197, 10531, -4178, 78, 79, 43, 255),
    VTX(-745, 805, 1911, 5318, -3656, 111, 28, 33, 255),
    VTX(-673, 1097, 1420, 3821, -2758, 59, 95, 42, 255),
    VTX(-833, 969, 1854, 4474, -3552, 46, 91, 62, 255),
    VTX(-267, 40, 1391, 9234, -2706, 139, 5, 22, 255),
    VTX(-107, 925, 1911, 4703, -3656, 155, 56, 32, 255),
    VTX(-207, 1046, 1343, 4082, -2618, 174, 79, 36, 255),
    VTX(-92, 800, 2000, 5342, -3819, 140, 3, 30, 255),
    VTX(-43, -213, 2197, 10531, -4178, 141, 1, 32, 255),
    VTX(-291, 295, 580, 7927, -1222, 138, 255, 238, 255),
    VTX(487, 1425, -1734, 2141, 3010, 47, 88, 66, 255),
    VTX(-93, 1888, -1326, -230, 2263, 19, 98, 66, 255),
    VTX(-129, 1780, -1290, 326, 2198, 43, 84, 73, 255),
    VTX(4, 1329, -1286, 2633, 2190, 42, 111, 16, 255),
    VTX(0, 634, -831, 6194, 1359, 99, 41, 53, 255),
    VTX(-134, 1672, -1276, 878, 2157, 8, 171, 84, 255),
    VTX(328, 1455, -1279, 1987, 2178, 193, 95, 220, 255),
    VTX(199, 634, -831, 6192, 1359, 141, 31, 242, 255),
    VTX(192, 1614, -733, 1173, 1179, 172, 61, 197, 255),
    VTX(187, 1895, -577, -263, 894, 174, 64, 196, 255),
    VTX(4, 1329, -1286, 2633, 2190, 42, 111, 16, 255),
    VTX(-123, 1460, -405, 1962, 579, 114, 0, 37, 255),
    VTX(-123, 1500, -405, 1347, 579, 114, 36, 253, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_004FD0[4] = {
    VTX(112, -213, 2197, 1670, 2122, 0, 114, 36, 255),
    VTX(60, 515, -120, 1536, -4096, 0, 114, 36, 255),
    VTX(-452, 515, -120, 226, -4096, 0, 114, 36, 255),
    VTX(-775, -213, 2197, -602, 2122, 78, 79, 43, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005010[4] = {
    VTX(-21, 516, -120, 18, 0, 0, 113, 38, 255),
    VTX(8, 539, -190, 0, 512, 0, 116, 28, 255),
    VTX(-234, 539, -190, 2048, 512, 79, 81, 39, 255),
    VTX(-262, 515, -120, 2048, 0, 0, 113, 38, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005050[8] = {
    VTX(-1026, -478, 2055, 0, 0, 0, 0, 0, 0),
    VTX(102, -478, 2254, 0, 0, 0, 0, 0, 0),
    VTX(-307, 1028, -2021, 0, 0, 0, 0, 0, 0),
    VTX(820, 1028, -1822, 0, 0, 0, 0, 0, 0),
    VTX(-1115, 931, 2560, 0, 0, 0, 0, 0, 0),
    VTX(13, 931, 2759, 0, 0, 0, 0, 0, 0),
    VTX(-396, 2438, -1516, 0, 0, 0, 0, 0, 0),
    VTX(731, 2438, -1317, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x0050D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005050[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 171, 159, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004AC0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP1Triangle(3, 1, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00B628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 189, 188, 184, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004B10[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 1, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 7, 11, 0),
    gsSP2Triangles(8, 11, 9, 0, 7, 6, 11, 0),
    gsSP2Triangles(0, 12, 13, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 13, 0, 16, 14, 17, 0),
    gsSP2Triangles(14, 3, 17, 0, 3, 5, 17, 0),
    gsSP2Triangles(14, 12, 3, 0, 12, 0, 3, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(21, 22, 18, 0, 22, 21, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(28, 30, 29, 0, 30, 31, 29, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004D10[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 6, 9, 0, 10, 11, 8, 0),
    gsSP2Triangles(8, 12, 10, 0, 13, 12, 8, 0),
    gsSP2Triangles(8, 11, 6, 0, 1, 4, 3, 0),
    gsSP2Triangles(4, 6, 3, 0, 14, 3, 6, 0),
    gsSP2Triangles(6, 11, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 15, 19, 18, 0),
    gsSP2Triangles(20, 21, 19, 0, 22, 20, 19, 0),
    gsSP2Triangles(15, 22, 19, 0, 15, 23, 24, 0),
    gsSP2Triangles(15, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 25, 29, 28, 0),
    gsSP1Triangle(30, 25, 27, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004D10[31], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 5, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 7, 6, 0),
    gsSP2Triangles(7, 9, 8, 0, 4, 10, 11, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00C628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 140, 127, 97, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_004FD0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_010028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsDPSetPrimColor(0, 0, 137, 122, 89, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005010[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_0053A8[28] = {
    VTX(-1337, 1425, -1411, -66, 809, 191, 95, 31, 255),
    VTX(-2000, 1425, -1734, 559, 272, 35, 114, 255, 255),
    VTX(-1708, 1520, -1284, 56, 383, 73, 80, 50, 255),
    VTX(-2000, 1614, -733, -238, -158, 80, 83, 30, 255),
    VTX(-1635, 1583, -2523, 1143, 1044, 25, 112, 33, 255),
    VTX(-4274, 1593, -134, -2140, 569, 11, 97, 69, 255),
    VTX(-3682, 2273, -1177, -489, 77, 22, 95, 70, 255),
    VTX(-5121, 2273, -1073, -1469, -946, 6, 89, 79, 255),
    VTX(-2000, 1614, -733, -102, 2073, 80, 83, 30, 255),
    VTX(-2940, 2273, -1676, 512, 512, 64, 96, 31, 255),
    VTX(-1635, 1583, -2523, 2103, 1994, 25, 112, 33, 255),
    VTX(-2000, 1425, -1734, 975, 2058, 35, 114, 255, 255),
    VTX(-2696, 2273, -2917, 2040, 428, 59, 104, 1, 255),
    VTX(-2000, 1983, -3723, 3298, 1064, 255, 108, 50, 255),
    VTX(-3345, 2383, -4205, 3105, -428, 36, 113, 15, 255),
    VTX(-3754, 2953, -1862, 363, -821, 36, 104, 46, 255),
    VTX(-4726, 2953, -1769, -324, -1508, 4, 110, 47, 255),
    VTX(-3937, 2953, -3161, 1699, -1227, 41, 112, 246, 255),
    VTX(-2575, 1714, 159, -1421, 1739, 55, 104, 21, 255),
    VTX(-3275, 1602, -397, -1244, 1230, 250, 118, 239, 255),
    VTX(-2000, 1983, -3723, 2577, 1296, 255, 108, 50, 255),
    VTX(-801, 1983, -3193, 1495, 2292, 212, 98, 52, 255),
    VTX(-1169, 1596, -2544, 929, 1540, 215, 109, 25, 255),
    VTX(-725, 1937, -2229, 583, 1916, 247, 117, 21, 255),
    VTX(-380, 2240, -3132, 1345, 2747, 27, 96, 65, 255),
    VTX(-1169, 1596, -2544, 929, 1540, 215, 109, 25, 255),
    VTX(-530, 1798, -1734, -20, 1864, 8, 116, 230, 255),
    VTX(-1337, 1425, -1411, -66, 809, 191, 95, 31, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005568[32] = {
    VTX(3200, 2818, -3334, -1374, 456, 208, 109, 12, 255),
    VTX(4000, 2818, -2534, -96, 205, 240, 114, 32, 255),
    VTX(4800, 3080, -3243, -803, -223, 246, 115, 31, 255),
    VTX(4800, 2818, -2534, 182, -90, 0, 114, 37, 255),
    VTX(2000, 1983, -3723, -1957, 1174, 243, 110, 45, 255),
    VTX(2000, 1425, -1734, 739, 1483, 224, 114, 17, 255),
    VTX(2800, 2138, -1334, 1244, 957, 192, 92, 41, 255),
    VTX(3600, 1425, 266, 3793, 1004, 208, 76, 79, 255),
    VTX(3600, 2138, -534, 2521, 707, 221, 100, 55, 255),
    VTX(4800, 2138, -134, 3439, 286, 241, 103, 59, 255),
    VTX(4990, 1222, 822, 5050, 594, 214, 75, 83, 255),
    VTX(5200, -342, 403, 5199, 1047, 209, 222, 104, 255),
    VTX(2000, 1931, -650, -311, -229, 253, 110, 210, 255),
    VTX(2000, 1614, -733, -235, 466, 253, 105, 198, 255),
    VTX(192, 1614, -733, 3729, 78, 172, 61, 197, 255),
    VTX(187, 1895, -577, 3672, -628, 174, 64, 196, 255),
    VTX(2000, 1614, -733, -2286, 3988, 253, 105, 198, 255),
    VTX(328, 1455, -1279, -1021, 2480, 193, 95, 220, 255),
    VTX(192, 1614, -733, -1360, 2114, 172, 61, 197, 255),
    VTX(2000, 1425, -1734, -1489, 4419, 224, 114, 17, 255),
    VTX(487, 1425, -1734, -714, 2850, 47, 88, 66, 255),
    VTX(2000, 1983, -3723, 529, 5443, 243, 110, 45, 255),
    VTX(792, 1983, -3241, 722, 3967, 36, 98, 59, 255),
    VTX(792, 1983, -3241, 722, 3967, 36, 98, 59, 255),
    VTX(-21, 2115, -2657, 683, 2877, 224, 112, 28, 255),
    VTX(-200, 1877, -1734, -152, 2220, 177, 88, 15, 255),
    VTX(-93, 1888, -1326, -562, 2144, 19, 98, 66, 255),
    VTX(28, 2215, -3126, 1146, 3105, 210, 102, 43, 255),
    VTX(2000, 1393, 559, 3615, 1624, 5, 111, 45, 255),
    VTX(2000, 1393, 559, 1937, -2261, 5, 111, 45, 255),
    VTX(2000, -344, 3443, 1937, -6490, 29, 99, 60, 255),
    VTX(5200, 537, 403, 6033, -2447, 29, 99, 60, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005768[9] = {
    VTX(2000, 925, 1911, -1460, 3907, 254, 115, 32, 255),
    VTX(-207, 1046, 1343, -2371, 1310, 174, 79, 36, 255),
    VTX(-107, 925, 1911, -3025, 1844, 155, 56, 32, 255),
    VTX(2000, 1393, 559, 367, 2987, 5, 111, 45, 255),
    VTX(-350, 1393, 559, -1379, 685, 169, 75, 32, 255),
    VTX(2000, 1941, -190, 1528, 2663, 0, 114, 36, 255),
    VTX(12, 1941, -190, 51, 716, 174, 84, 233, 255),
    VTX(2000, 1931, -650, 2063, 2241, 253, 110, 210, 255),
    VTX(187, 1895, -577, 612, 508, 174, 64, 196, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_0057F8[8] = {
    VTX(-5121, -1702, 2659, 0, 0, 0, 0, 0, 0),
    VTX(5200, -1702, 2659, 0, 0, 0, 0, 0, 0),
    VTX(-5121, 2292, -4258, 0, 0, 0, 0, 0, 0),
    VTX(5200, 2292, -4258, 0, 0, 0, 0, 0, 0),
    VTX(-5121, -31, 3624, 0, 0, 0, 0, 0, 0),
    VTX(5200, -31, 3624, 0, 0, 0, 0, 0, 0),
    VTX(-5121, 3962, -3293, 0, 0, 0, 0, 0, 0),
    VTX(5200, 3962, -3293, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x005878[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0057F8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 171, 159, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0053A8[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 9, 11, 0, 9, 8, 11, 0),
    gsSP2Triangles(10, 12, 9, 0, 13, 12, 10, 0),
    gsSP2Triangles(14, 12, 13, 0, 6, 15, 7, 0),
    gsSP2Triangles(15, 16, 7, 0, 9, 15, 6, 0),
    gsSP2Triangles(12, 15, 9, 0, 12, 17, 15, 0),
    gsSP2Triangles(14, 17, 12, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 8, 19, 0, 20, 4, 21, 0),
    gsSP2Triangles(22, 21, 4, 0, 23, 24, 21, 0),
    gsSP2Triangles(21, 25, 23, 0, 26, 23, 0, 0),
    gsSP2Triangles(23, 22, 27, 0, 25, 4, 0, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005568[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(7, 10, 9, 0, 6, 0, 4, 0),
    gsSP2Triangles(6, 1, 0, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 1, 8, 0, 9, 3, 1, 0),
    gsSP2Triangles(11, 10, 7, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 19, 20, 17, 0),
    gsSP2Triangles(19, 21, 20, 0, 21, 22, 20, 0),
    gsSP2Triangles(23, 24, 20, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 26, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 7, 5, 0, 29, 30, 31, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005768[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 4, 0, 5, 7, 6, 0),
    gsSP1Triangle(7, 8, 6, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_005A30[10] = {
    VTX(-2699, 2383, -10529, 5744, 1407, 78, 0, 91, 255),
    VTX(-5129, 3583, -8446, 1648, 674, 78, 0, 91, 255),
    VTX(-6344, 2383, -7405, -400, 1407, 78, 0, 91, 255),
    VTX(-4453, 3290, -6017, 281, 416, 74, 220, 87, 255),
    VTX(-5936, 2383, -5120, -1024, 1024, 74, 220, 87, 255),
    VTX(-2613, 2383, -7969, 3696, 1024, 74, 220, 87, 255),
    VTX(3599, 3285, -5948, 1167, 253, 212, 250, 111, 255),
    VTX(5110, 2383, -5395, 3912, 1024, 212, 250, 111, 255),
    VTX(4587, 2991, -5569, 2973, 505, 212, 250, 111, 255),
    VTX(501, 2383, -7239, -1365, 1024, 212, 250, 111, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005AD0[32] = {
    VTX(-460, 3418, -4300, 2874, 30, 14, 82, 86, 255),
    VTX(11, 3983, -4786, 4454, -267, 249, 81, 87, 255),
    VTX(-671, 3983, -5013, 4325, 379, 206, 83, 70, 255),
    VTX(35, 3735, -4553, 3711, -317, 6, 24, 117, 255),
    VTX(435, 3733, -4566, 3767, -636, 249, 46, 110, 255),
    VTX(954, 3983, -4997, 4633, -1172, 46, 77, 79, 255),
    VTX(773, 3423, -4353, 3080, -1004, 24, 89, 76, 255),
    VTX(304, 4383, -5111, 5524, -551, 12, 78, 90, 255),
    VTX(11, 3983, -4786, 4454, -267, 249, 81, 87, 255),
    VTX(824, 4383, -5338, 5652, -1198, 51, 79, 73, 255),
    VTX(-3345, 2383, -4205, 19, 1646, 36, 113, 15, 255),
    VTX(-2000, 1983, -3723, 199, 741, 255, 108, 50, 255),
    VTX(-2000, 2583, -4523, 1166, 974, 214, 85, 72, 255),
    VTX(-1224, 2583, -3924, 1269, 456, 215, 69, 89, 255),
    VTX(-801, 1983, -3193, 327, 94, 212, 98, 52, 255),
    VTX(-380, 2240, -3132, 378, -164, 27, 96, 65, 255),
    VTX(-351, 2628, -3808, 1397, -190, 70, 35, 90, 255),
    VTX(-460, 3418, -4300, 2619, 36, 14, 82, 86, 255),
    VTX(-250, 3305, -3837, 2671, -222, 36, 71, 89, 255),
    VTX(-321, 2999, -3854, 2161, -209, 46, 239, 109, 255),
    VTX(-1257, 4023, -5723, 4171, 1155, 200, 83, 65, 255),
    VTX(-1632, 3535, -5375, 3394, 1239, 219, 83, 77, 255),
    VTX(-1632, 3535, -5375, 2617, 1323, 219, 83, 77, 255),
    VTX(-3007, 2283, -4667, 1063, 1491, 220, 83, 78, 255),
    VTX(1117, 2583, -3940, 1551, -966, 32, 57, 100, 255),
    VTX(773, 3423, -4353, 2825, -998, 24, 89, 76, 255),
    VTX(194, 3313, -3830, 2712, -429, 205, 83, 70, 255),
    VTX(246, 2587, -3871, 1437, -392, 159, 30, 64, 255),
    VTX(28, 2215, -3126, 422, -381, 210, 102, 43, 255),
    VTX(107, 2881, -3850, 1969, -393, 230, 28, 113, 255),
    VTX(84, 2810, -3854, 1793, -394, 224, 209, 105, 255),
    VTX(792, 1983, -3241, 533, -940, 36, 98, 59, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005CD0[26] = {
    VTX(792, 1983, -3241, 533, -940, 36, 98, 59, 255),
    VTX(2000, 1983, -3723, 661, -1587, 243, 110, 45, 255),
    VTX(1117, 2583, -3940, 1551, -966, 32, 57, 100, 255),
    VTX(2000, 2583, -4523, 1705, -1742, 43, 78, 79, 255),
    VTX(2980, 2383, -4702, 1783, -2130, 0, 106, 55, 255),
    VTX(3200, 2818, -3334, 841, -2492, 208, 109, 12, 255),
    VTX(773, 3423, -4353, 2825, -998, 24, 89, 76, 255),
    VTX(954, 3983, -4997, 4633, -1172, 46, 77, 79, 255),
    VTX(773, 3423, -4353, 3080, -1004, 24, 89, 76, 255),
    VTX(1554, 4093, -5723, 4788, -1948, 48, 78, 77, 255),
    VTX(2020, 3303, -5118, 3285, -2039, 20, 75, 91, 255),
    VTX(-800, 4383, -5723, 5241, 871, 193, 83, 58, 255),
    VTX(-1257, 4023, -5723, 4171, 1155, 200, 83, 65, 255),
    VTX(-671, 3983, -5013, 4325, 379, 206, 83, 70, 255),
    VTX(-395, 4383, -5306, 5344, 354, 218, 84, 76, 255),
    VTX(11, 3983, -4786, 4454, -267, 249, 81, 87, 255),
    VTX(304, 4383, -5111, 5524, -551, 12, 78, 90, 255),
    VTX(1200, 4383, -5723, 5755, -1715, 65, 77, 64, 255),
    VTX(824, 4383, -5338, 5652, -1198, 51, 79, 73, 255),
    VTX(-321, 2999, -3854, 2161, -209, 46, 239, 109, 255),
    VTX(-188, 3044, -3848, 2294, -289, 47, 199, 94, 255),
    VTX(-250, 3305, -3837, 2671, -222, 36, 71, 89, 255),
    VTX(-129, 3152, -3854, 2676, -322, 103, 8, 59, 255),
    VTX(107, 2881, -3850, 1969, -393, 230, 28, 113, 255),
    VTX(-21, 2858, -3855, 1951, -272, 189, 197, 79, 255),
    VTX(84, 2810, -3854, 1790, -357, 224, 209, 105, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_005E70[8] = {
    VTX(-4080, 1983, -11326, 0, 0, 0, 0, 0, 0),
    VTX(5381, 1983, -5864, 0, 0, 0, 0, 0, 0),
    VTX(-4080, 4383, -11326, 0, 0, 0, 0, 0, 0),
    VTX(5381, 4383, -5864, 0, 0, 0, 0, 0, 0),
    VTX(-7231, 1983, -5868, 0, 0, 0, 0, 0, 0),
    VTX(2229, 1983, -406, 0, 0, 0, 0, 0, 0),
    VTX(-7231, 4383, -5868, 0, 0, 0, 0, 0, 0),
    VTX(2229, 4383, -406, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x005EF0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005E70[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_sceneTex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 171, 159, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005A30[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 230, 205, 156, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005AD0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 1, 0),
    gsSP2Triangles(4, 6, 5, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 5, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 11, 14, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 13, 15, 0),
    gsSP2Triangles(12, 13, 17, 0, 13, 18, 17, 0),
    gsSP2Triangles(13, 19, 18, 0, 13, 16, 19, 0),
    gsSP2Triangles(12, 0, 2, 0, 2, 20, 12, 0),
    gsSP2Triangles(20, 21, 12, 0, 22, 23, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 28, 0),
    gsSP2Triangles(24, 29, 30, 0, 26, 29, 24, 0),
    gsSP2Triangles(30, 27, 24, 0, 28, 31, 24, 0),
    gsSPVertex(&death_mountain_trail_room_00Vtx_005CD0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 2, 3, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 9, 7, 0, 9, 3, 10, 0),
    gsSP2Triangles(3, 4, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 7, 9, 17, 0),
    gsSP2Triangles(7, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_0060C0[21] = {
    VTX(-176, -344, 2841, -242, 1024, 0, 65, 155, 255),
    VTX(-322, -344, 2841, 1247, 1024, 0, 65, 155, 255),
    VTX(-232, 7, 3066, 333, -3241, 0, 65, 155, 255),
    VTX(-367, -344, 2841, -242, 1024, 0, 65, 155, 255),
    VTX(-512, -344, 2841, 1247, 1024, 0, 65, 155, 255),
    VTX(-423, 7, 3066, 333, -3241, 0, 65, 155, 255),
    VTX(-557, -344, 2841, -242, 1024, 0, 65, 155, 255),
    VTX(-703, -344, 2841, 1247, 1024, 0, 65, 155, 255),
    VTX(-613, 7, 3066, 333, -3241, 0, 65, 155, 255),
    VTX(-437, -344, 3146, -242, 1024, 0, 65, 155, 255),
    VTX(-583, -344, 3146, 1247, 1024, 0, 65, 155, 255),
    VTX(-493, 7, 3371, 333, -3241, 0, 65, 155, 255),
    VTX(-247, -344, 3146, -242, 1024, 0, 65, 155, 255),
    VTX(-392, -344, 3146, 1247, 1024, 0, 65, 155, 255),
    VTX(-303, 7, 3371, 333, -3241, 0, 65, 155, 255),
    VTX(86, -331, 3018, -242, 1024, 0, 65, 155, 255),
    VTX(-59, -331, 3018, 1247, 1024, 0, 65, 155, 255),
    VTX(30, 20, 3243, 333, -3241, 0, 65, 155, 255),
    VTX(82, -331, 3210, -242, 1024, 0, 65, 155, 255),
    VTX(-63, -331, 3210, 1247, 1024, 0, 65, 155, 255),
    VTX(26, 20, 3434, 333, -3241, 0, 65, 155, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_006210[3] = {
    VTX(2870, -342, 2124, -1819, 889, 0, 120, 0, 255),
    VTX(-4930, -342, 2124, 3173, 889, 0, 120, 0, 255),
    VTX(-330, -342, 5124, 229, -1031, 0, 120, 0, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_006240[8] = {
    VTX(-4930, -344, 2124, 0, 0, 0, 0, 0, 0),
    VTX(2870, -344, 2124, 0, 0, 0, 0, 0, 0),
    VTX(-4930, 20, 2124, 0, 0, 0, 0, 0, 0),
    VTX(2870, 20, 2124, 0, 0, 0, 0, 0, 0),
    VTX(-4930, -344, 5124, 0, 0, 0, 0, 0, 0),
    VTX(2870, -344, 5124, 0, 0, 0, 0, 0, 0),
    VTX(-4930, 20, 5124, 0, 0, 0, 0, 0, 0),
    VTX(2870, 20, 5124, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x0062C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_006240[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00E828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 3, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0060C0[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00E628, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 3, 3, 4, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPVertex(&death_mountain_trail_room_00Vtx_006210[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_0063F0[8] = {
    VTX(-3, 1365, -1308, -8192, 0, 138, 0, 239, 255),
    VTX(-3, 1353, -1308, -8192, 512, 138, 0, 239, 255),
    VTX(-80, 1442, -857, 22528, 512, 138, 0, 239, 255),
    VTX(-80, 1454, -857, 22528, 0, 138, 0, 239, 255),
    VTX(-80, 1442, -857, -6144, 512, 138, 0, 239, 255),
    VTX(-133, 1530, -406, 24576, 512, 138, 0, 239, 255),
    VTX(-133, 1542, -406, 24576, 0, 138, 0, 239, 255),
    VTX(-80, 1454, -857, -6144, 0, 138, 0, 239, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_006470[8] = {
    VTX(-3, 1353, -1308, 0, 0, 0, 0, 0, 0),
    VTX(25, 1353, -1303, 0, 0, 0, 0, 0, 0),
    VTX(-2, 1381, -1313, 0, 0, 0, 0, 0, 0),
    VTX(26, 1381, -1308, 0, 0, 0, 0, 0, 0),
    VTX(-162, 1515, -406, 0, 0, 0, 0, 0, 0),
    VTX(-134, 1515, -401, 0, 0, 0, 0, 0, 0),
    VTX(-162, 1542, -411, 0, 0, 0, 0, 0, 0),
    VTX(-133, 1542, -406, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x0064F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_006470[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_00F028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, 0, 1, 7, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0063F0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0065B0[120] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x09, 0x98, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x18, 0x98, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1F, 0xB0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2C, 0xF0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x33, 0xC0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3A, 0x58, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x42, 0x38, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x48, 0x40, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x50, 0xD0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x58, 0x78, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x5E, 0xF0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x62, 0xC0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x64, 0xF0, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 death_mountain_trail_room_00Tex_006628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_006628.i8.inc.c"
};

u64 death_mountain_trail_room_00Tex_007628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_007628.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_008628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_008628.i8.inc.c"
};

u64 death_mountain_trail_room_00Tex_008E28[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_008E28.i8.inc.c"
};

u64 death_mountain_trail_room_00Tex_009628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_009628.i8.inc.c"
};

u64 death_mountain_trail_room_00Tex_00A628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00A628.i8.inc.c"
};

u64 death_mountain_trail_room_00Tex_00B628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00B628.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_00C628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00C628.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_00D628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00D628.i8.inc.c"
};

u64 death_mountain_trail_room_00Tex_00E628[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00E628.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_00E828[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00E828.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_00F028[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_00F028.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_010028[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_010028.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_010828[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_010828.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_010C28[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_010C28.rgb5a1.inc.c"
};

u64 death_mountain_trail_room_00Tex_011C28[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_011C28.rgb5a1.inc.c"
};

static u8 unaccounted_012C28[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx death_mountain_trail_room_00Vtx_012C30[15] = {
    VTX(-1730, 684, -2599, 0, 1024, 102, 62, 4, 255),
    VTX(-1773, 677, -1336, 1024, 1024, 118, 17, 5, 255),
    VTX(-1541, 691, -2595, 0, 0, 148, 52, 0, 255),
    VTX(-1538, 677, -1331, 1024, 0, 137, 252, 1, 255),
    VTX(-1541, 691, -2595, 0, 1024, 148, 52, 0, 255),
    VTX(-1538, 677, -1331, 1024, 1024, 137, 252, 1, 255),
    VTX(-1602, 769, -2597, 0, 0, 182, 162, 1, 255),
    VTX(-1595, 798, -1344, 1024, 0, 196, 153, 2, 255),
    VTX(-1602, 769, -2597, 0, 0, 182, 162, 1, 255),
    VTX(-1740, 788, -1347, 1024, 1024, 75, 163, 5, 255),
    VTX(-1686, 770, -2597, 0, 1024, 88, 176, 4, 255),
    VTX(-1686, 770, -2597, 0, 0, 88, 176, 4, 255),
    VTX(-1773, 677, -1336, 1024, 1024, 118, 17, 5, 255),
    VTX(-1730, 684, -2599, 0, 1024, 102, 62, 4, 255),
    VTX(-1740, 788, -1347, 1024, 0, 75, 163, 5, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_012D20[8] = {
    VTX(-1773, 677, -2599, 0, 0, 0, 0, 0, 0),
    VTX(-1538, 677, -2599, 0, 0, 0, 0, 0, 0),
    VTX(-1773, 798, -2599, 0, 0, 0, 0, 0, 0),
    VTX(-1538, 798, -2599, 0, 0, 0, 0, 0, 0),
    VTX(-1773, 677, -1331, 0, 0, 0, 0, 0, 0),
    VTX(-1538, 677, -1331, 0, 0, 0, 0, 0, 0),
    VTX(-1773, 798, -1331, 0, 0, 0, 0, 0, 0),
    VTX(-1538, 798, -1331, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x012DA0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_012D20[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_013C68, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, 3, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_012C30[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 7, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_012E78[21] = {
    VTX(70, -354, 2984, -163, 1182, 255, 212, 42, 255),
    VTX(-74, -354, 2984, 1203, 1182, 255, 212, 42, 255),
    VTX(-2, -51, 3178, 520, -2232, 255, 212, 42, 255),
    VTX(66, -354, 3175, -163, 1182, 255, 212, 42, 255),
    VTX(-78, -354, 3175, 1203, 1182, 255, 212, 42, 255),
    VTX(-6, -51, 3369, 520, -2232, 255, 212, 42, 255),
    VTX(-263, -367, 3111, -163, 1182, 255, 212, 42, 255),
    VTX(-407, -367, 3111, 1203, 1182, 255, 212, 42, 255),
    VTX(-335, -64, 3306, 520, -2232, 255, 212, 42, 255),
    VTX(-454, -367, 3111, -163, 1182, 255, 212, 42, 255),
    VTX(-598, -367, 3111, 1203, 1182, 255, 212, 42, 255),
    VTX(-526, -64, 3306, 520, -2232, 255, 212, 42, 255),
    VTX(-193, -367, 2806, -163, 1182, 255, 212, 42, 255),
    VTX(-337, -367, 2806, 1203, 1182, 255, 212, 42, 255),
    VTX(-265, -64, 3001, 520, -2232, 255, 212, 42, 255),
    VTX(-383, -367, 2806, -163, 1182, 255, 212, 42, 255),
    VTX(-527, -367, 2806, 1203, 1182, 255, 212, 42, 255),
    VTX(-455, -64, 3001, 520, -2232, 255, 212, 42, 255),
    VTX(-574, -367, 2806, -163, 1182, 255, 212, 42, 255),
    VTX(-718, -367, 2806, 1203, 1182, 255, 212, 42, 255),
    VTX(-646, -64, 3001, 520, -2232, 255, 212, 42, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_012FC8[8] = {
    VTX(-718, -367, 2806, 0, 0, 0, 0, 0, 0),
    VTX(70, -367, 2806, 0, 0, 0, 0, 0, 0),
    VTX(-718, -51, 2806, 0, 0, 0, 0, 0, 0),
    VTX(70, -51, 2806, 0, 0, 0, 0, 0, 0),
    VTX(-718, -367, 3369, 0, 0, 0, 0, 0, 0),
    VTX(70, -367, 3369, 0, 0, 0, 0, 0, 0),
    VTX(-718, -51, 3369, 0, 0, 0, 0, 0, 0),
    VTX(70, -51, 3369, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x013048[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_012FC8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_013468, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 3, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 212, 42, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_012E78[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_013120[4] = {
    VTX(-2778, 5583, -9398, -1024, -1024, 0, 120, 0, 255),
    VTX(-2778, 5583, -3638, -1024, 1024, 0, 120, 0, 255),
    VTX(2982, 5583, -3638, 1024, 1024, 0, 120, 0, 255),
    VTX(2982, 5583, -9398, 1024, -1024, 0, 120, 0, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_013160[8] = {
    VTX(-2778, 5583, -9398, 0, 0, 0, 0, 0, 0),
    VTX(2982, 5583, -9398, 0, 0, 0, 0, 0, 0),
    VTX(-2778, 5583, -9398, 0, 0, 0, 0, 0, 0),
    VTX(2982, 5583, -9398, 0, 0, 0, 0, 0, 0),
    VTX(-2778, 5583, -3638, 0, 0, 0, 0, 0, 0),
    VTX(2982, 5583, -3638, 0, 0, 0, 0, 0, 0),
    VTX(-2778, 5583, -3638, 0, 0, 0, 0, 0, 0),
    VTX(2982, 5583, -3638, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x0131E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_013160[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_015068, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_013120[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx death_mountain_trail_room_00Vtx_0132A0[6] = {
    VTX(-82, 1404, -857, 5114, 2048, 138, 0, 239, 255),
    VTX(-135, 1491, -404, 20480, 2048, 138, 0, 239, 255),
    VTX(-135, 1551, -404, 20480, 0, 138, 0, 239, 255),
    VTX(-82, 1464, -857, 5114, 0, 138, 0, 239, 255),
    VTX(-3, 1314, -1319, -10607, 2048, 138, 0, 239, 255),
    VTX(-3, 1374, -1319, -10607, 0, 138, 0, 239, 255),
}; 

static Vtx death_mountain_trail_room_00Vtx_013300[8] = {
    VTX(-3, 1314, -1319, 0, 0, 0, 0, 0, 0),
    VTX(25, 1314, -1314, 0, 0, 0, 0, 0, 0),
    VTX(0, 1386, -1332, 0, 0, 0, 0, 0, 0),
    VTX(28, 1386, -1327, 0, 0, 0, 0, 0, 0),
    VTX(-165, 1479, -397, 0, 0, 0, 0, 0, 0),
    VTX(-137, 1479, -392, 0, 0, 0, 0, 0, 0),
    VTX(-163, 1551, -409, 0, 0, 0, 0, 0, 0),
    VTX(-135, 1551, -404, 0, 0, 0, 0, 0, 0),
}; 

Gfx death_mountain_trail_room_00Dlist0x013380[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_trail_room_00Vtx_013300[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_trail_room_00Tex_014068, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, 0, 1, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 245, 215, 255),
    gsSPVertex(&death_mountain_trail_room_00Vtx_0132A0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_013440[40] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x2D, 0xA0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x30, 0x48, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x31, 0xE0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x33, 0x80, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 death_mountain_trail_room_00Tex_013468[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_013468.ia16.inc.c"
};

u64 death_mountain_trail_room_00Tex_013C68[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_013C68.ia16.inc.c"
};

u64 death_mountain_trail_room_00Tex_014068[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_014068.ia16.inc.c"
};

u64 death_mountain_trail_room_00Tex_015068[] = {
#include "assets/scenes/overworld/death_mountain_trail//death_mountain_trail_room_00Tex_015068.ia16.inc.c"
};

static u8 unaccounted_015868[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


