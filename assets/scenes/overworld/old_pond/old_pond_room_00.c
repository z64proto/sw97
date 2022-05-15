#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_pond_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_pond_scene.h"


static SCmdEchoSettings old_pond_room_00Set0000Cmd00;
static SCmdRoomBehavior old_pond_room_00Set0000Cmd01;
static SCmdSkyboxDisables old_pond_room_00Set0000Cmd02;
static SCmdMesh old_pond_room_00Set0000Cmd03;
static SCmdEndMarker old_pond_room_00Set0000Cmd04;
static s32 terminatorMaybe;
static Vtx old_pond_room_00Vtx_000050[26];
static Vtx old_pond_room_00Vtx_0001F0[8];
static Vtx old_pond_room_00Vtx_000380[26];
static Vtx old_pond_room_00Vtx_000520[8];
static Vtx old_pond_room_00Vtx_0006B0[26];
static Vtx old_pond_room_00Vtx_000850[8];
static Vtx old_pond_room_00Vtx_0011E0[28];
static Vtx old_pond_room_00Vtx_0013A0[8];
static Vtx old_pond_room_00Vtx_002560[32];
static Vtx old_pond_room_00Vtx_002760[16];
static Vtx old_pond_room_00Vtx_002860[8];
static Vtx old_pond_room_00Vtx_0039F8[46];
static Vtx old_pond_room_00Vtx_003CD8[8];
static Vtx old_pond_room_00Vtx_004670[32];
static Vtx old_pond_room_00Vtx_004870[16];
static Vtx old_pond_room_00Vtx_004970[8];
static Vtx old_pond_room_00Vtx_004F08[32];
static Vtx old_pond_room_00Vtx_005108[3];
static Vtx old_pond_room_00Vtx_005138[8];
static Vtx old_pond_room_00Vtx_0062D8[4];
static Vtx old_pond_room_00Vtx_006318[8];

static SCmdEchoSettings old_pond_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_pond_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables old_pond_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdMesh old_pond_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&old_pond_room_00MeshHeader0x000030 }; // 0x0018

static SCmdEndMarker old_pond_room_00Set0000Cmd04 = {  0x14, 0x00, 0x00 }; // 0x0020

static u8 unaccounted_000028[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 old_pond_room_00MeshHeader0x000030 = { { 0 }, 0x01, (u32)&old_pond_room_00MeshDListEntry0x00003C, (u32)&(old_pond_room_00MeshDListEntry0x00003C) + sizeof(old_pond_room_00MeshDListEntry0x00003C) }; 

MeshEntry0 old_pond_room_00MeshDListEntry0x00003C[1] = {
	{ (u32)old_pond_room_00Dlist0x002530, (u32)old_pond_room_00Dlist0x006C50 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad48 = 0;
static u32 pad4C = 0;

static Vtx old_pond_room_00Vtx_000050[26] = {
    VTX(-307, -254, 523, 1434, 819, 34, 99, 198, 255),
    VTX(-13, -654, 14, 1638, 1229, 17, 114, 226, 255),
    VTX(-507, -654, -479, 2458, 819, 31, 114, 236, 255),
    VTX(-1016, -254, -186, 2253, 410, 60, 97, 222, 255),
    VTX(-688, -694, -1154, 3277, 410, 38, 113, 0, 255),
    VTX(-1275, -254, -1154, 3072, 0, 72, 96, 0, 255),
    VTX(1629, -254, 523, -205, 1638, 222, 99, 198, 255),
    VTX(1336, -654, 14, 0, 2048, 239, 114, 226, 255),
    VTX(661, -654, 195, 819, 1638, 0, 114, 221, 255),
    VTX(661, -254, 782, 614, 1229, 0, 99, 189, 255),
    VTX(2338, -254, -186, -1024, 2048, 196, 99, 225, 255),
    VTX(1829, -654, -479, -819, 2458, 224, 114, 242, 255),
    VTX(2598, -254, -1154, -1843, 2458, 187, 97, 0, 255),
    VTX(2010, -614, -1154, -1638, 2867, 217, 113, 0, 255),
    VTX(1629, -214, -2831, -3482, 3277, 222, 98, 59, 255),
    VTX(1336, -614, -2322, -3277, 3686, 239, 114, 32, 255),
    VTX(1829, -654, -1828, -2458, 3277, 227, 115, 16, 255),
    VTX(2338, -254, -2122, -2662, 2867, 199, 99, 33, 255),
    VTX(661, -254, -3090, -4301, 3686, 251, 98, 68, 255),
    VTX(661, -654, -2503, -4096, 4096, 250, 114, 36, 255),
    VTX(-307, -294, -2831, 4710, -819, 33, 99, 58, 255),
    VTX(-13, -694, -2322, 4915, -410, 17, 115, 29, 255),
    VTX(661, -654, -2503, 5734, -819, 250, 114, 36, 255),
    VTX(661, -254, -3090, 5530, -1229, 251, 98, 68, 255),
    VTX(-507, -654, -1828, 4096, 0, 33, 114, 17, 255),
    VTX(-1016, -254, -2122, 3891, -410, 61, 97, 32, 255),
}; 

static Vtx old_pond_room_00Vtx_0001F0[8] = {
    VTX(-479, -694, -3598, 0, 0, 0, 0, 0, 0),
    VTX(3105, -694, -2294, 0, 0, 0, 0, 0, 0),
    VTX(-479, -214, -3598, 0, 0, 0, 0, 0, 0),
    VTX(3105, -214, -2294, 0, 0, 0, 0, 0, 0),
    VTX(-1783, -694, -14, 0, 0, 0, 0, 0, 0),
    VTX(1801, -694, 1290, 0, 0, 0, 0, 0, 0),
    VTX(-1783, -214, -14, 0, 0, 0, 0, 0, 0),
    VTX(1801, -214, 1290, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x000270[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_0001F0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_sceneTex_001160, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 190, 174, 113, 255),
    gsSPVertex(&old_pond_room_00Vtx_000050[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 1, 0, 9, 1, 0, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 13, 0, 17, 13, 12, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(5, 4, 24, 0, 5, 24, 25, 0),
    gsSP2Triangles(25, 24, 21, 0, 25, 21, 20, 0),
    gsSPEndDisplayList(),
}; 

static Vtx old_pond_room_00Vtx_000380[26] = {
    VTX(-507, -654, -479, 322, 1214, 31, 114, 236, 255),
    VTX(-205, -654, -654, 621, 1715, 11, 118, 244, 255),
    VTX(-339, -694, -1154, 1948, 1078, 9, 119, 0, 255),
    VTX(-688, -694, -1154, 1648, 576, 38, 113, 0, 255),
    VTX(-13, -654, 14, -1005, 1851, 17, 114, 226, 255),
    VTX(161, -654, -288, -705, 2352, 9, 118, 240, 255),
    VTX(1336, -654, 14, -3658, 3126, 239, 114, 226, 255),
    VTX(1161, -654, -288, -3358, 3627, 247, 118, 240, 255),
    VTX(661, -654, -154, -2032, 2990, 0, 118, 238, 255),
    VTX(661, -654, 195, -2331, 2489, 0, 114, 221, 255),
    VTX(1829, -654, -479, -4984, 3763, 224, 114, 242, 255),
    VTX(1527, -654, -654, -4684, 4265, 239, 118, 249, 255),
    VTX(2010, -614, -1154, -6310, 4401, 217, 113, 0, 255),
    VTX(1661, -614, -1154, -6011, 4902, 235, 118, 0, 255),
    VTX(1336, -614, -2322, -8963, 5676, 239, 114, 32, 255),
    VTX(1161, -614, -2020, -8664, 6177, 244, 117, 20, 255),
    VTX(1527, -654, -1654, -7337, 5539, 238, 118, 11, 255),
    VTX(1829, -654, -1828, -7637, 5038, 227, 115, 16, 255),
    VTX(661, -654, -2503, -10290, 6313, 250, 114, 36, 255),
    VTX(661, -654, -2154, -9990, 6814, 249, 118, 16, 255),
    VTX(-13, -694, -2322, 4301, -698, 17, 115, 29, 255),
    VTX(161, -694, -2020, 4600, -197, 6, 119, 10, 255),
    VTX(661, -654, -2154, 5927, -835, 249, 118, 16, 255),
    VTX(661, -654, -2503, 5627, -1336, 250, 114, 36, 255),
    VTX(-205, -654, -1654, 3274, 440, 13, 118, 9, 255),
    VTX(-507, -654, -1828, 2974, -61, 33, 114, 17, 255),
}; 

static Vtx old_pond_room_00Vtx_000520[8] = {
    VTX(-133, -694, -2857, 0, 0, 0, 0, 0, 0),
    VTX(2364, -694, -1948, 0, 0, 0, 0, 0, 0),
    VTX(-133, -614, -2857, 0, 0, 0, 0, 0, 0),
    VTX(2364, -614, -1948, 0, 0, 0, 0, 0, 0),
    VTX(-1042, -694, -360, 0, 0, 0, 0, 0, 0),
    VTX(1455, -694, 549, 0, 0, 0, 0, 0, 0),
    VTX(-1042, -614, -360, 0, 0, 0, 0, 0, 0),
    VTX(1455, -614, 549, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x0005A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_000520[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_sceneTex_001160, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 136, 109, 89, 255),
    gsSPVertex(&old_pond_room_00Vtx_000380[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 5, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 13, 0, 17, 13, 12, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(3, 2, 24, 0, 3, 24, 25, 0),
    gsSP2Triangles(25, 24, 21, 0, 25, 21, 20, 0),
    gsSPEndDisplayList(),
}; 

static Vtx old_pond_room_00Vtx_0006B0[26] = {
    VTX(-205, -654, -654, 2048, 0, 11, 118, 244, 255),
    VTX(12, -734, -779, 2048, 512, 37, 111, 231, 255),
    VTX(-89, -734, -1154, 3072, 512, 41, 112, 0, 255),
    VTX(-339, -694, -1154, 3072, 0, 9, 119, 0, 255),
    VTX(161, -654, -288, 1024, 0, 9, 118, 240, 255),
    VTX(286, -734, -504, 1024, 512, 23, 110, 217, 255),
    VTX(161, -694, -2020, 5120, 0, 6, 119, 10, 255),
    VTX(286, -734, -1803, 5120, 512, 23, 110, 40, 255),
    VTX(661, -734, -1904, 6144, 512, 254, 108, 50, 255),
    VTX(661, -654, -2154, 6144, 0, 249, 118, 16, 255),
    VTX(661, -654, -2154, -6144, 0, 249, 118, 16, 255),
    VTX(661, -734, -1904, -6144, 512, 254, 108, 50, 255),
    VTX(1036, -734, -1803, -5120, 512, 226, 104, 50, 255),
    VTX(1161, -614, -2020, -5120, 0, 244, 117, 20, 255),
    VTX(12, -734, -1529, 4096, 512, 40, 110, 24, 255),
    VTX(-205, -654, -1654, 4096, 0, 13, 118, 9, 255),
    VTX(1311, -734, -1529, -4096, 512, 205, 103, 31, 255),
    VTX(1527, -654, -1654, -4096, 0, 238, 118, 11, 255),
    VTX(1411, -734, -1154, -3072, 512, 200, 106, 255, 255),
    VTX(1661, -614, -1154, -3072, 0, 235, 118, 0, 255),
    VTX(1527, -654, -654, -2048, 0, 239, 118, 249, 255),
    VTX(1311, -734, -779, -2048, 512, 211, 107, 229, 255),
    VTX(1036, -734, -504, -1024, 512, 233, 108, 211, 255),
    VTX(1161, -654, -288, -1024, 0, 247, 118, 240, 255),
    VTX(661, -734, -404, 0, 512, 255, 110, 208, 255),
    VTX(661, -654, -154, 0, 0, 0, 118, 238, 255),
}; 

static Vtx old_pond_room_00Vtx_000850[8] = {
    VTX(73, -734, -2416, 0, 0, 0, 0, 0, 0),
    VTX(1923, -734, -1743, 0, 0, 0, 0, 0, 0),
    VTX(73, -614, -2416, 0, 0, 0, 0, 0, 0),
    VTX(1923, -614, -1743, 0, 0, 0, 0, 0, 0),
    VTX(-601, -734, -565, 0, 0, 0, 0, 0, 0),
    VTX(1250, -734, 108, 0, 0, 0, 0, 0, 0),
    VTX(-601, -614, -565, 0, 0, 0, 0, 0, 0),
    VTX(1250, -614, 108, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x0008D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_000850[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_0009E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 175, 100, 255),
    gsSPVertex(&old_pond_room_00Vtx_0006B0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(3, 2, 14, 0, 3, 14, 15, 0),
    gsSP2Triangles(15, 14, 7, 0, 15, 7, 6, 0),
    gsSP2Triangles(13, 12, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(19, 18, 21, 0, 19, 21, 20, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 24, 5, 0, 25, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_0009E0[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_0009E0.rgb5a1.inc.c"
};

static Vtx old_pond_room_00Vtx_0011E0[28] = {
    VTX(-89, -734, -1154, -2662, -154, 41, 112, 0, 255),
    VTX(303, -974, -1250, -860, 51, 43, 111, 9, 255),
    VTX(12, -734, -1529, -1483, -819, 40, 110, 24, 255),
    VTX(12, -734, -779, -3019, 717, 37, 111, 231, 255),
    VTX(399, -934, -892, -1200, 883, 32, 111, 225, 255),
    VTX(781, -1054, -1154, 410, 614, 0, 119, 253, 255),
    VTX(286, -734, -504, -2457, 1561, 23, 110, 217, 255),
    VTX(399, -934, -892, -1200, 883, 32, 111, 225, 255),
    VTX(661, -734, -404, -1126, 2150, 255, 110, 208, 255),
    VTX(757, -974, -796, 69, 1446, 247, 111, 212, 255),
    VTX(399, -934, -892, -1200, 883, 32, 111, 225, 255),
    VTX(569, -958, -1585, 750, -217, 12, 109, 47, 255),
    VTX(303, -974, -1250, -860, 51, 43, 111, 9, 255),
    VTX(286, -734, -1803, 204, -1100, 23, 110, 40, 255),
    VTX(569, -958, -1585, 750, -217, 12, 109, 47, 255),
    VTX(661, -734, -1904, 1946, -922, 254, 108, 50, 255),
    VTX(1036, -734, -504, 615, 2329, 233, 108, 211, 255),
    VTX(757, -974, -796, 69, 1446, 247, 111, 212, 255),
    VTX(1311, -734, -779, 2302, 2048, 211, 107, 229, 255),
    VTX(1099, -974, -1058, 1679, 1177, 207, 108, 241, 255),
    VTX(757, -974, -796, 69, 1446, 247, 111, 212, 255),
    VTX(1411, -734, -1154, 3482, 1382, 200, 106, 255, 255),
    VTX(1099, -974, -1058, 1679, 1177, 207, 108, 241, 255),
    VTX(1311, -734, -1529, 3838, 512, 205, 103, 31, 255),
    VTX(1003, -974, -1456, 2020, 346, 219, 108, 36, 255),
    VTX(1036, -734, -1803, 3276, -332, 226, 104, 50, 255),
    VTX(1003, -974, -1456, 2020, 346, 219, 108, 36, 255),
    VTX(1003, -974, -1456, 2020, 346, 219, 108, 36, 255),
}; 

static Vtx old_pond_room_00Vtx_0013A0[8] = {
    VTX(62, -1054, -2010, 0, 0, 0, 0, 0, 0),
    VTX(1517, -1054, -1753, 0, 0, 0, 0, 0, 0),
    VTX(62, -734, -2010, 0, 0, 0, 0, 0, 0),
    VTX(1517, -734, -1753, 0, 0, 0, 0, 0, 0),
    VTX(-194, -1054, -555, 0, 0, 0, 0, 0, 0),
    VTX(1260, -1054, -298, 0, 0, 0, 0, 0, 0),
    VTX(-194, -734, -555, 0, 0, 0, 0, 0, 0),
    VTX(1260, -734, -298, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x001420[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_0013A0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_001530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 82, 72, 31, 255),
    gsSPVertex(&old_pond_room_00Vtx_0011E0[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 6, 0, 9, 5, 10, 0),
    gsSP2Triangles(5, 11, 12, 0, 11, 13, 2, 0),
    gsSP2Triangles(11, 2, 12, 0, 14, 15, 13, 0),
    gsSP2Triangles(16, 17, 8, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 16, 0, 19, 5, 20, 0),
    gsSP2Triangles(21, 22, 18, 0, 23, 24, 22, 0),
    gsSP2Triangles(23, 22, 21, 0, 24, 5, 22, 0),
    gsSP2Triangles(25, 26, 23, 0, 15, 14, 27, 0),
    gsSP2Triangles(15, 27, 25, 0, 14, 5, 27, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_001530[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_001530.rgb5a1.inc.c"
};

Gfx old_pond_room_00Dlist0x002530[] = {
    gsSPDisplayList(old_pond_room_00Dlist0x000270),
    gsSPDisplayList(old_pond_room_00Dlist0x0005A0),
    gsSPDisplayList(old_pond_room_00Dlist0x0008D0),
    gsSPDisplayList(old_pond_room_00Dlist0x001420),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_002558[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx old_pond_room_00Vtx_002560[32] = {
    VTX(-419, -254, -1778, -2048, -1676, 103, 0, 60, 255),
    VTX(-419, -654, -1778, -2048, 2048, 103, 0, 60, 255),
    VTX(37, -694, -2234, 5772, 2048, 60, 0, 103, 255),
    VTX(37, -294, -2234, 5772, -1676, 60, 0, 103, 255),
    VTX(-586, -294, -1154, -2048, -1676, 120, 0, 0, 255),
    VTX(-586, -694, -1154, -2048, 2048, 120, 0, 0, 255),
    VTX(-419, -654, -1778, 5772, 2048, 103, 0, 60, 255),
    VTX(-419, -254, -1778, 5772, -1676, 103, 0, 60, 255),
    VTX(-419, -254, -530, -2048, -1676, 103, 0, 196, 255),
    VTX(-419, -654, -530, -2048, 2048, 103, 0, 196, 255),
    VTX(-586, -694, -1154, 5772, 2048, 120, 0, 0, 255),
    VTX(-586, -294, -1154, 5772, -1676, 120, 0, 0, 255),
    VTX(37, -254, -74, -2048, -1676, 60, 0, 153, 255),
    VTX(37, -654, -74, -2048, 2048, 60, 0, 153, 255),
    VTX(-419, -654, -530, 5772, 2048, 103, 0, 196, 255),
    VTX(-419, -254, -530, 5772, -1676, 103, 0, 196, 255),
    VTX(1285, -254, -74, -2048, -1676, 196, 0, 153, 255),
    VTX(1285, -654, -74, -2048, 2048, 196, 0, 153, 255),
    VTX(661, -654, 93, 5772, 2048, 0, 0, 136, 255),
    VTX(661, -254, 93, 5772, -1676, 0, 0, 136, 255),
    VTX(661, -254, 93, -2048, -1676, 0, 0, 136, 255),
    VTX(661, -654, 93, -2048, 2048, 0, 0, 136, 255),
    VTX(37, -654, -74, 5772, 2048, 60, 0, 153, 255),
    VTX(37, -254, -74, 5772, -1676, 60, 0, 153, 255),
    VTX(1909, -214, -1154, -2048, -1676, 136, 0, 0, 255),
    VTX(1909, -614, -1154, -2048, 2048, 136, 0, 0, 255),
    VTX(1741, -654, -530, 5772, 2048, 153, 0, 196, 255),
    VTX(1741, -254, -530, 5772, -1676, 153, 0, 196, 255),
    VTX(1741, -254, -530, -2048, -1676, 153, 0, 196, 255),
    VTX(1741, -654, -530, -2048, 2048, 153, 0, 196, 255),
    VTX(1285, -654, -74, 5772, 2048, 196, 0, 153, 255),
    VTX(1285, -254, -74, 5772, -1676, 196, 0, 153, 255),
}; 

static Vtx old_pond_room_00Vtx_002760[16] = {
    VTX(1741, -254, -1778, -2048, -1676, 153, 0, 60, 255),
    VTX(1741, -654, -1778, -2048, 2048, 153, 0, 60, 255),
    VTX(1909, -614, -1154, 5772, 2048, 136, 0, 0, 255),
    VTX(1909, -214, -1154, 5772, -1676, 136, 0, 0, 255),
    VTX(1285, -214, -2234, -2048, -1676, 196, 0, 103, 255),
    VTX(1285, -614, -2234, -2048, 2048, 196, 0, 103, 255),
    VTX(1741, -654, -1778, 5772, 2048, 153, 0, 60, 255),
    VTX(1741, -254, -1778, 5772, -1676, 153, 0, 60, 255),
    VTX(37, -294, -2234, -2048, -1676, 60, 0, 103, 255),
    VTX(37, -694, -2234, -2048, 2048, 60, 0, 103, 255),
    VTX(661, -654, -2401, 5772, 2048, 0, 0, 120, 255),
    VTX(661, -254, -2401, 5772, -1676, 0, 0, 120, 255),
    VTX(661, -254, -2401, -2048, -1676, 0, 0, 120, 255),
    VTX(661, -654, -2401, -2048, 2048, 0, 0, 120, 255),
    VTX(1285, -614, -2234, 5772, 2048, 196, 0, 103, 255),
    VTX(1285, -214, -2234, 5772, -1676, 196, 0, 103, 255),
}; 

static Vtx old_pond_room_00Vtx_002860[8] = {
    VTX(-335, -694, -2577, 0, 0, 0, 0, 0, 0),
    VTX(2084, -694, -2150, 0, 0, 0, 0, 0, 0),
    VTX(-335, -214, -2577, 0, 0, 0, 0, 0, 0),
    VTX(2084, -214, -2150, 0, 0, 0, 0, 0, 0),
    VTX(-762, -694, -157, 0, 0, 0, 0, 0, 0),
    VTX(1658, -694, 269, 0, 0, 0, 0, 0, 0),
    VTX(-762, -214, -157, 0, 0, 0, 0, 0, 0),
    VTX(1658, -214, 269, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x0028E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_002860[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_0029F8, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, 0, 3, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 146, 130, 69, 255),
    gsSPVertex(&old_pond_room_00Vtx_002560[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&old_pond_room_00Vtx_002760[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_0029F8[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_0029F8.ia16.inc.c"
};

static Vtx old_pond_room_00Vtx_0039F8[46] = {
    VTX(-693, -48, -1157, 2048, 0, 120, 0, 0, 255),
    VTX(-693, -328, -1157, 2048, 512, 120, 0, 0, 255),
    VTX(-513, -288, -1829, 3072, 512, 103, 0, 60, 255),
    VTX(-513, -8, -1829, 3072, 0, 103, 0, 60, 255),
    VTX(-513, -288, -1829, 3072, 512, 103, 0, 60, 255),
    VTX(-21, -328, -2321, 4096, 512, 60, 0, 103, 255),
    VTX(-21, -48, -2321, 4096, 0, 60, 0, 103, 255),
    VTX(-21, -8, 8, 0, 0, 60, 0, 153, 255),
    VTX(-21, -288, 8, 0, 512, 60, 0, 153, 255),
    VTX(-513, -288, -484, 1024, 512, 103, 0, 196, 255),
    VTX(-513, -8, -484, 1024, 0, 103, 0, 196, 255),
    VTX(-513, -8, -484, 1024, 0, 103, 0, 196, 255),
    VTX(-513, -288, -484, 1024, 512, 103, 0, 196, 255),
    VTX(-693, -328, -1157, 2048, 512, 120, 0, 0, 255),
    VTX(-693, -48, -1157, 2048, 0, 120, 0, 0, 255),
    VTX(1323, -8, 8, 10240, 0, 196, 0, 153, 255),
    VTX(1323, -288, 8, 10240, 512, 196, 0, 153, 255),
    VTX(651, -288, 188, 11264, 512, 0, 0, 136, 255),
    VTX(651, -8, 188, 11264, 0, 0, 0, 136, 255),
    VTX(651, -8, 188, 11264, 0, 0, 0, 136, 255),
    VTX(651, -288, 188, 11264, 512, 0, 0, 136, 255),
    VTX(-21, -288, 8, 12288, 512, 60, 0, 153, 255),
    VTX(-21, -8, 8, 12288, 0, 60, 0, 153, 255),
    VTX(1816, -8, -484, 9216, 0, 153, 0, 196, 255),
    VTX(1816, -288, -484, 9216, 512, 153, 0, 196, 255),
    VTX(1323, -288, 8, 10240, 512, 196, 0, 153, 255),
    VTX(1323, -8, 8, 10240, 0, 196, 0, 153, 255),
    VTX(1996, 32, -1157, 8192, 0, 136, 0, 0, 255),
    VTX(1996, -248, -1157, 8192, 512, 136, 0, 0, 255),
    VTX(1816, -288, -484, 9216, 512, 153, 0, 196, 255),
    VTX(1816, -8, -484, 9216, 0, 153, 0, 196, 255),
    VTX(1816, -8, -1829, 7168, 0, 153, 0, 60, 255),
    VTX(1816, -288, -1829, 7168, 512, 153, 0, 60, 255),
    VTX(1996, -248, -1157, 8192, 512, 136, 0, 0, 255),
    VTX(1996, 32, -1157, 8192, 0, 136, 0, 0, 255),
    VTX(1323, 32, -2321, 6144, 0, 196, 0, 103, 255),
    VTX(1323, -248, -2321, 6144, 512, 196, 0, 103, 255),
    VTX(1816, -288, -1829, 7168, 512, 153, 0, 60, 255),
    VTX(-21, -48, -2321, 4096, 0, 60, 0, 103, 255),
    VTX(-21, -328, -2321, 4096, 512, 60, 0, 103, 255),
    VTX(651, -288, -2501, 5120, 512, 0, 0, 120, 255),
    VTX(651, -8, -2501, 5120, 0, 0, 0, 120, 255),
    VTX(651, -8, -2501, 5120, 0, 0, 0, 120, 255),
    VTX(651, -288, -2501, 5120, 512, 0, 0, 120, 255),
    VTX(1323, -248, -2321, 6144, 512, 196, 0, 103, 255),
    VTX(1323, 32, -2321, 6144, 0, 196, 0, 103, 255),
}; 

static Vtx old_pond_room_00Vtx_003CD8[8] = {
    VTX(-140, -328, -2854, 0, 0, 0, 0, 0, 0),
    VTX(2348, -328, -1948, 0, 0, 0, 0, 0, 0),
    VTX(-140, 32, -2854, 0, 0, 0, 0, 0, 0),
    VTX(2348, 32, -1948, 0, 0, 0, 0, 0, 0),
    VTX(-1046, -328, -365, 0, 0, 0, 0, 0, 0),
    VTX(1443, -328, 540, 0, 0, 0, 0, 0, 0),
    VTX(-1046, 32, -365, 0, 0, 0, 0, 0, 0),
    VTX(1443, 32, 540, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x003D58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_003CD8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_003E70, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 16, 0, 0, 1, 7, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 89, 137, 69, 255),
    gsSPVertex(&old_pond_room_00Vtx_0039F8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&old_pond_room_00Vtx_0039F8[31], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_003E70[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_003E70.ia16.inc.c"
};

static Vtx old_pond_room_00Vtx_004670[32] = {
    VTX(75, -582, -138, -4096, 0, 60, 0, 153, 255),
    VTX(75, -654, -138, -4096, 1024, 60, 0, 153, 255),
    VTX(-354, -654, -568, 3072, 1024, 103, 0, 196, 255),
    VTX(-354, -582, -568, 3072, 0, 103, 0, 196, 255),
    VTX(-354, -582, -568, -4096, 0, 103, 0, 196, 255),
    VTX(-354, -654, -568, -4096, 1024, 103, 0, 196, 255),
    VTX(-512, -694, -1154, 3072, 1024, 120, 0, 0, 255),
    VTX(-512, -622, -1154, 3072, 0, 120, 0, 0, 255),
    VTX(1248, -582, -138, -4096, 0, 196, 0, 153, 255),
    VTX(1248, -654, -138, -4096, 1024, 196, 0, 153, 255),
    VTX(661, -654, 19, 3072, 1024, 0, 0, 136, 255),
    VTX(661, -582, 19, 3072, 0, 0, 0, 136, 255),
    VTX(661, -582, 19, -4096, 0, 0, 0, 136, 255),
    VTX(661, -654, 19, -4096, 1024, 0, 0, 136, 255),
    VTX(75, -654, -138, 3072, 1024, 60, 0, 153, 255),
    VTX(75, -582, -138, 3072, 0, 60, 0, 153, 255),
    VTX(1834, -542, -1154, -4096, 0, 136, 0, 0, 255),
    VTX(1834, -614, -1154, -4096, 1024, 136, 0, 0, 255),
    VTX(1677, -654, -568, 3072, 1024, 153, 0, 196, 255),
    VTX(1677, -582, -568, 3072, 0, 153, 0, 196, 255),
    VTX(1677, -582, -568, -4096, 0, 153, 0, 196, 255),
    VTX(1677, -654, -568, -4096, 1024, 153, 0, 196, 255),
    VTX(1248, -654, -138, 3072, 1024, 196, 0, 153, 255),
    VTX(1248, -582, -138, 3072, 0, 196, 0, 153, 255),
    VTX(1677, -582, -1740, -4096, 0, 153, 0, 60, 255),
    VTX(1677, -654, -1740, -4096, 1024, 153, 0, 60, 255),
    VTX(1834, -614, -1154, 3072, 1024, 136, 0, 0, 255),
    VTX(1834, -542, -1154, 3072, 0, 136, 0, 0, 255),
    VTX(1248, -542, -2170, -4096, 0, 196, 0, 103, 255),
    VTX(1248, -614, -2170, -4096, 1024, 196, 0, 103, 255),
    VTX(1677, -654, -1740, 3072, 1024, 153, 0, 60, 255),
    VTX(1677, -582, -1740, 3072, 0, 153, 0, 60, 255),
}; 

static Vtx old_pond_room_00Vtx_004870[16] = {
    VTX(75, -622, -2170, -4096, 0, 60, 0, 103, 255),
    VTX(75, -694, -2170, -4096, 1024, 60, 0, 103, 255),
    VTX(661, -654, -2327, 3072, 1024, 0, 0, 120, 255),
    VTX(661, -582, -2327, 3072, 0, 0, 0, 120, 255),
    VTX(661, -582, -2327, -4096, 0, 0, 0, 120, 255),
    VTX(661, -654, -2327, -4096, 1024, 0, 0, 120, 255),
    VTX(1248, -614, -2170, 3072, 1024, 196, 0, 103, 255),
    VTX(1248, -542, -2170, 3072, 0, 196, 0, 103, 255),
    VTX(-354, -582, -1740, -4096, 0, 103, 0, 60, 255),
    VTX(-354, -654, -1740, -4096, 1024, 103, 0, 60, 255),
    VTX(75, -694, -2170, 3072, 1024, 60, 0, 103, 255),
    VTX(75, -622, -2170, 3072, 0, 60, 0, 103, 255),
    VTX(-512, -622, -1154, -4096, 0, 120, 0, 0, 255),
    VTX(-512, -694, -1154, -4096, 1024, 120, 0, 0, 255),
    VTX(-354, -654, -1740, 3072, 1024, 103, 0, 60, 255),
    VTX(-354, -582, -1740, 3072, 0, 103, 0, 60, 255),
}; 

static Vtx old_pond_room_00Vtx_004970[8] = {
    VTX(-29, -694, -2634, 0, 0, 0, 0, 0, 0),
    VTX(2141, -694, -1844, 0, 0, 0, 0, 0, 0),
    VTX(-29, -542, -2634, 0, 0, 0, 0, 0, 0),
    VTX(2141, -542, -1844, 0, 0, 0, 0, 0, 0),
    VTX(-819, -694, -464, 0, 0, 0, 0, 0, 0),
    VTX(1351, -694, 326, 0, 0, 0, 0, 0, 0),
    VTX(-819, -542, -464, 0, 0, 0, 0, 0, 0),
    VTX(1351, -542, 326, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x0049F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_004970[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_004B08, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 96, 122, 58, 255),
    gsSPVertex(&old_pond_room_00Vtx_004670[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&old_pond_room_00Vtx_004870[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_004B08[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_004B08.ia16.inc.c"
};

static Vtx old_pond_room_00Vtx_004F08[32] = {
    VTX(652, -513, -2360, 6144, 1024, 0, 0, 120, 255),
    VTX(652, -128, -2360, 6144, 0, 0, 0, 120, 255),
    VTX(50, -168, -2199, 4096, 0, 60, 0, 103, 255),
    VTX(50, -553, -2199, 4096, 1024, 60, 0, 103, 255),
    VTX(1254, -473, -2199, 8192, 1024, 196, 0, 103, 255),
    VTX(1254, -88, -2199, 8192, 0, 196, 0, 103, 255),
    VTX(-390, -513, -1758, 2048, 1024, 103, 0, 60, 255),
    VTX(-390, -128, -1758, 2048, 0, 103, 0, 60, 255),
    VTX(-551, -168, -1156, 0, 0, 120, 0, 0, 255),
    VTX(-551, -553, -1156, 0, 1024, 120, 0, 0, 255),
    VTX(-390, -513, -554, 6144, 1024, 103, 0, 196, 255),
    VTX(-390, -128, -554, 6144, 0, 103, 0, 196, 255),
    VTX(50, -128, -114, 4096, 0, 60, 0, 153, 255),
    VTX(50, -513, -114, 4096, 1024, 60, 0, 153, 255),
    VTX(-551, -553, -1156, 8192, 1024, 120, 0, 0, 255),
    VTX(-551, -168, -1156, 8192, 0, 120, 0, 0, 255),
    VTX(652, -513, 47, 2048, 1024, 0, 0, 136, 255),
    VTX(652, -128, 47, 2048, 0, 0, 0, 136, 255),
    VTX(1254, -128, -114, 0, 0, 196, 0, 153, 255),
    VTX(1254, -513, -114, 0, 1024, 196, 0, 153, 255),
    VTX(50, -513, -114, 4096, 1024, 60, 0, 153, 255),
    VTX(50, -128, -114, 4096, 0, 60, 0, 153, 255),
    VTX(652, -128, 47, 2048, 0, 0, 0, 136, 255),
    VTX(1695, -513, -554, 6144, 1024, 153, 0, 196, 255),
    VTX(1695, -128, -554, 6144, 0, 153, 0, 196, 255),
    VTX(1856, -88, -1156, 4096, 0, 136, 0, 0, 255),
    VTX(1856, -473, -1156, 4096, 1024, 136, 0, 0, 255),
    VTX(1254, -513, -114, 8192, 1024, 196, 0, 153, 255),
    VTX(1254, -128, -114, 8192, 0, 196, 0, 153, 255),
    VTX(1695, -128, -1758, 2048, 0, 153, 0, 60, 255),
    VTX(1695, -513, -1758, 2048, 1024, 153, 0, 60, 255),
    VTX(1254, -88, -2199, 0, 0, 196, 0, 103, 255),
}; 

static Vtx old_pond_room_00Vtx_005108[3] = {
    VTX(1695, -513, -1758, 2048, 1024, 153, 0, 60, 255),
    VTX(1254, -88, -2199, 0, 0, 196, 0, 103, 255),
    VTX(1254, -473, -2199, 0, 1024, 196, 0, 103, 255),
}; 

static Vtx old_pond_room_00Vtx_005138[8] = {
    VTX(-309, -553, -2530, 0, 0, 0, 0, 0, 0),
    VTX(2026, -553, -2118, 0, 0, 0, 0, 0, 0),
    VTX(-309, -88, -2530, 0, 0, 0, 0, 0, 0),
    VTX(2026, -88, -2118, 0, 0, 0, 0, 0, 0),
    VTX(-721, -553, -195, 0, 0, 0, 0, 0, 0),
    VTX(1614, -553, 217, 0, 0, 0, 0, 0, 0),
    VTX(-721, -88, -195, 0, 0, 0, 0, 0, 0),
    VTX(1614, -88, 217, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x0051B8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_005138[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_0052D8, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0, 0, 1, 7, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 89, 137, 69, 255),
    gsSPVertex(&old_pond_room_00Vtx_004F08[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 16, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 24, 0, 27, 24, 23, 0),
    gsSP2Triangles(26, 25, 29, 0, 26, 29, 30, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&old_pond_room_00Vtx_005108[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_0052D8[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_0052D8.ia16.inc.c"
};

static Vtx old_pond_room_00Vtx_0062D8[4] = {
    VTX(1436, -734, -304, -2048, 2560, 0, 120, 0, 255),
    VTX(1436, -734, -1904, 2048, 2560, 0, 120, 0, 255),
    VTX(-164, -734, -1904, 2048, -1536, 0, 120, 0, 255),
    VTX(-164, -734, -304, -2048, -1536, 0, 120, 0, 255),
}; 

static Vtx old_pond_room_00Vtx_006318[8] = {
    VTX(-164, -734, -1904, 0, 0, 0, 0, 0, 0),
    VTX(1436, -734, -1904, 0, 0, 0, 0, 0, 0),
    VTX(-164, -734, -1904, 0, 0, 0, 0, 0, 0),
    VTX(1436, -734, -1904, 0, 0, 0, 0, 0, 0),
    VTX(-164, -734, -304, 0, 0, 0, 0, 0, 0),
    VTX(1436, -734, -304, 0, 0, 0, 0, 0, 0),
    VTX(-164, -734, -304, 0, 0, 0, 0, 0, 0),
    VTX(1436, -734, -304, 0, 0, 0, 0, 0, 0),
}; 

Gfx old_pond_room_00Dlist0x006398[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&old_pond_room_00Vtx_006318[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_pond_room_00Tex_006450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 190, 174, 113, 178),
    gsSPVertex(&old_pond_room_00Vtx_0062D8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 old_pond_room_00Tex_006450[] = {
#include "assets/scenes/overworld/old_pond//old_pond_room_00Tex_006450.rgb5a1.inc.c"
};

Gfx old_pond_room_00Dlist0x006C50[] = {
    gsSPDisplayList(old_pond_room_00Dlist0x0028E0),
    gsSPDisplayList(old_pond_room_00Dlist0x003D58),
    gsSPDisplayList(old_pond_room_00Dlist0x0049F0),
    gsSPDisplayList(old_pond_room_00Dlist0x0051B8),
    gsSPDisplayList(old_pond_room_00Dlist0x006398),
    gsSPEndDisplayList(),
}; 


