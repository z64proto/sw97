#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_key.h"

static Vtx object_gi_keyVtx_000000[3];
static Vtx object_gi_keyVtx_000030[32];
static Vtx object_gi_keyVtx_000230[32];
static Vtx object_gi_keyVtx_000430[32];
static Vtx object_gi_keyVtx_000630[29];

static Vtx object_gi_keyVtx_000000[3] = {
    VTX(15, -1, 4, 464, 1518, 4, 0, 119, 255),
    VTX(16, -5, 0, 512, 1623, 30, 142, 237, 255),
    VTX(29, 8, 0, 512, 1412, 110, 210, 0, 255),
}; 

static Vtx object_gi_keyVtx_000030[32] = {
    VTX(25, 10, 4, 484, 1377, 25, 255, 117, 255),
    VTX(20, 11, 0, 512, 1328, 139, 13, 236, 255),
    VTX(15, -1, 4, 464, 1518, 4, 0, 119, 255),
    VTX(-10, -26, 0, 0, 1934, 119, 15, 0, 255),
    VTX(-12, -28, -3, -36, 1923, 52, 204, 162, 255),
    VTX(-20, -20, -3, -27, 1801, 6, 250, 137, 255),
    VTX(-18, -18, 0, 0, 1801, 90, 78, 0, 255),
    VTX(5, 5, 0, 512, 1173, 84, 84, 0, 255),
    VTX(13, 4, 0, 512, 1388, 241, 119, 0, 255),
    VTX(2, 2, -4, 767, 1356, 37, 37, 148, 255),
    VTX(29, 8, 0, 512, 1412, 110, 210, 0, 255),
    VTX(25, 10, -4, 540, 1377, 19, 240, 139, 255),
    VTX(25, 12, -4, 540, 1352, 25, 1, 139, 255),
    VTX(-1, 0, -4, -168, 1567, 226, 226, 144, 255),
    VTX(-6, 16, 0, 0, 1191, 142, 30, 19, 255),
    VTX(-1, 15, -4, -129, 1139, 0, 4, 137, 255),
    VTX(-1, 15, 4, 129, 1139, 12, 248, 119, 255),
    VTX(2, 2, 4, 257, 1356, 37, 37, 108, 255),
    VTX(4, 14, 0, 512, 1050, 119, 241, 0, 255),
    VTX(-1, 0, -4, 856, 1567, 226, 226, 144, 255),
    VTX(-1, 15, -4, 895, 1139, 0, 4, 137, 255),
    VTX(10, 26, -4, 609, 1108, 255, 25, 139, 255),
    VTX(8, 30, 0, 512, 1063, 210, 110, 0, 255),
    VTX(14, 30, 0, 512, 1120, 45, 111, 0, 255),
    VTX(15, -1, -4, 560, 1518, 248, 12, 137, 255),
    VTX(16, -5, 0, 512, 1623, 30, 142, 237, 255),
    VTX(-14, -30, 0, 0, 1917, 241, 137, 0, 255),
    VTX(-23, -22, 0, 0, 1805, 178, 166, 0, 255),
    VTX(2, -3, 0, 510, 1976, 31, 141, 0, 255),
    VTX(-12, -28, 3, 36, 1923, 52, 204, 94, 255),
    VTX(-20, -20, 3, 27, 1801, 6, 250, 119, 255),
    VTX(-1, 0, 4, 168, 1567, 226, 226, 112, 255),
}; 

static Vtx object_gi_keyVtx_000230[32] = {
    VTX(-1, 15, 4, 129, 1139, 12, 248, 119, 255),
    VTX(4, 14, 0, 512, 1050, 119, 241, 0, 255),
    VTX(11, 20, 0, 512, 1131, 13, 139, 20, 255),
    VTX(25, 10, 4, 484, 1377, 25, 255, 117, 255),
    VTX(29, 8, 0, 512, 1412, 110, 210, 0, 255),
    VTX(29, 14, 0, 512, 1354, 111, 45, 0, 255),
    VTX(10, 26, -4, 609, 1108, 255, 25, 139, 255),
    VTX(-1, 15, -4, 895, 1139, 0, 4, 137, 255),
    VTX(14, 30, 0, 512, 1120, 45, 111, 0, 255),
    VTX(25, 12, 4, 484, 1352, 4, 1, 119, 255),
    VTX(-1, 15, -4, -129, 1139, 0, 4, 137, 255),
    VTX(-6, 16, 0, 0, 1191, 142, 30, 19, 255),
    VTX(8, 30, 0, 512, 1063, 210, 110, 0, 255),
    VTX(-12, -28, 3, 36, 1923, 52, 204, 94, 255),
    VTX(-10, -26, 0, 0, 1934, 119, 15, 0, 255),
    VTX(-18, -18, 0, 0, 1801, 90, 78, 0, 255),
    VTX(-20, -20, 3, 27, 1801, 6, 250, 119, 255),
    VTX(-22, -27, 0, 0, 1842, 20, 138, 0, 255),
    VTX(-25, -24, 4, 26, 1804, 207, 207, 97, 255),
    VTX(-27, -21, 0, 0, 1772, 138, 20, 0, 255),
    VTX(-25, -24, -4, -26, 1804, 207, 207, 159, 255),
    VTX(25, 10, -4, 540, 1377, 19, 240, 139, 255),
    VTX(16, -5, 0, 512, 1623, 30, 142, 237, 255),
    VTX(-4, 2, 0, 0, 1415, 141, 31, 0, 255),
    VTX(-1, 0, -4, -168, 1567, 226, 226, 144, 255),
    VTX(-1, 0, 4, 168, 1567, 226, 226, 112, 255),
    VTX(2, -3, 0, 510, 1976, 31, 141, 0, 255),
    VTX(12, 26, -4, 587, 1129, 1, 4, 137, 255),
    VTX(25, 12, -4, 540, 1352, 25, 1, 139, 255),
    VTX(20, 11, 0, 512, 1328, 139, 13, 236, 255),
    VTX(10, 26, 4, 415, 1108, 240, 19, 117, 255),
    VTX(12, 26, 4, 437, 1129, 1, 25, 117, 255),
}; 

static Vtx object_gi_keyVtx_000430[32] = {
    VTX(-8, -21, 3, 52, 1929, 53, 203, 94, 255),
    VTX(-10, -22, 0, 0, 1923, 242, 137, 0, 255),
    VTX(-8, -21, -3, -52, 1929, 53, 203, 162, 255),
    VTX(-6, -19, 0, 0, 1949, 119, 14, 0, 255),
    VTX(29, 8, 0, 512, 1412, 110, 210, 0, 255),
    VTX(25, 10, 4, 484, 1377, 25, 255, 117, 255),
    VTX(15, -1, 4, 464, 1518, 4, 0, 119, 255),
    VTX(13, 4, 0, 512, 1388, 241, 119, 0, 255),
    VTX(20, 11, 0, 512, 1328, 139, 13, 236, 255),
    VTX(15, -1, -4, 560, 1518, 248, 12, 137, 255),
    VTX(25, 10, -4, 540, 1377, 19, 240, 139, 255),
    VTX(14, 30, 0, 512, 1120, 45, 111, 0, 255),
    VTX(12, 26, -4, 587, 1129, 1, 4, 137, 255),
    VTX(10, 26, -4, 609, 1108, 255, 25, 139, 255),
    VTX(4, 14, 0, 512, 1050, 119, 241, 0, 255),
    VTX(-1, 15, -4, 895, 1139, 0, 4, 137, 255),
    VTX(11, 20, 0, 512, 1131, 13, 139, 20, 255),
    VTX(8, 30, 0, 512, 1063, 210, 110, 0, 255),
    VTX(25, 12, -4, 540, 1352, 25, 1, 139, 255),
    VTX(29, 14, 0, 512, 1354, 111, 45, 0, 255),
    VTX(-6, 16, 0, 0, 1191, 142, 30, 19, 255),
    VTX(-1, 15, 4, 129, 1139, 12, 248, 119, 255),
    VTX(10, 26, 4, 415, 1108, 240, 19, 117, 255),
    VTX(-1, 0, 4, 168, 1567, 226, 226, 112, 255),
    VTX(-1, 0, -4, -168, 1567, 226, 226, 144, 255),
    VTX(-4, 2, 0, 0, 1415, 141, 31, 0, 255),
    VTX(16, -5, 0, 512, 1623, 30, 142, 237, 255),
    VTX(-14, -14, -3, -36, 1793, 7, 249, 137, 255),
    VTX(-12, -12, 0, 0, 1793, 91, 77, 0, 255),
    VTX(-17, -16, 0, 0, 1800, 179, 165, 0, 255),
    VTX(-14, -14, 3, 36, 1793, 7, 249, 119, 255),
    VTX(2, 2, -4, 767, 1356, 37, 37, 148, 255),
}; 

static Vtx object_gi_keyVtx_000630[29] = {
    VTX(16, -5, 0, 512, 1623, 30, 142, 237, 255),
    VTX(-1, 0, 4, 168, 1567, 226, 226, 112, 255),
    VTX(2, -3, 0, 510, 1976, 31, 141, 0, 255),
    VTX(8, 30, 0, 512, 1063, 210, 110, 0, 255),
    VTX(10, 26, 4, 415, 1108, 240, 19, 117, 255),
    VTX(12, 26, 4, 437, 1129, 1, 25, 117, 255),
    VTX(20, 11, 0, 512, 1328, 139, 13, 236, 255),
    VTX(11, 20, 0, 512, 1131, 13, 139, 20, 255),
    VTX(12, 26, -4, 587, 1129, 1, 4, 137, 255),
    VTX(-8, -21, 3, 52, 1929, 53, 203, 94, 255),
    VTX(-6, -19, 0, 0, 1949, 119, 14, 0, 255),
    VTX(-12, -12, 0, 0, 1793, 91, 77, 0, 255),
    VTX(-14, -14, 3, 36, 1793, 7, 249, 119, 255),
    VTX(2, 2, 4, 257, 1356, 37, 37, 108, 255),
    VTX(15, -1, 4, 464, 1518, 4, 0, 119, 255),
    VTX(13, 4, 0, 512, 1388, 241, 119, 0, 255),
    VTX(5, 5, 0, 512, 1173, 84, 84, 0, 255),
    VTX(4, 14, 0, 512, 1050, 119, 241, 0, 255),
    VTX(2, 2, -4, 767, 1356, 37, 37, 148, 255),
    VTX(-4, 2, 0, 0, 1415, 141, 31, 0, 255),
    VTX(-6, 16, 0, 0, 1191, 142, 30, 19, 255),
    VTX(25, 12, 4, 484, 1352, 4, 1, 119, 255),
    VTX(15, -1, -4, 560, 1518, 248, 12, 137, 255),
    VTX(-12, -28, 3, 36, 1923, 52, 204, 94, 255),
    VTX(-14, -30, 0, 0, 1917, 241, 137, 0, 255),
    VTX(-12, -28, -3, -36, 1923, 52, 204, 162, 255),
    VTX(-10, -26, 0, 0, 1934, 119, 15, 0, 255),
    VTX(14, 30, 0, 512, 1120, 45, 111, 0, 255),
    VTX(29, 14, 0, 512, 1354, 111, 45, 0, 255),
}; 

Gfx gGiSmallKeyDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsDPSetEnvColor(60, 80, 90, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(2500, 2500, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032090),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_keyVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_keyVtx_000030[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 9, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 19, 0),
    gsSP2Triangles(4, 26, 27, 0, 4, 27, 5, 0),
    gsSP2Triangles(25, 28, 19, 0, 18, 9, 20, 0),
    gsSP2Triangles(26, 29, 30, 0, 26, 30, 27, 0),
    gsSP2Triangles(24, 19, 9, 0, 25, 24, 11, 0),
    gsSP2Triangles(31, 17, 16, 0, 17, 8, 7, 0),
    gsSPVertex(&object_gi_keyVtx_000230[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 4, 22, 0),
    gsSP2Triangles(20, 19, 23, 0, 20, 23, 24, 0),
    gsSP2Triangles(19, 18, 25, 0, 19, 25, 23, 0),
    gsSP2Triangles(18, 17, 26, 0, 18, 26, 25, 0),
    gsSP2Triangles(17, 20, 24, 0, 17, 24, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 28, 21, 0),
    gsSP2Triangles(2, 30, 0, 0, 30, 12, 11, 0),
    gsSP2Triangles(28, 5, 4, 0, 31, 9, 8, 0),
    gsSP2Triangles(9, 31, 2, 0, 31, 8, 12, 0),
    gsSP2Triangles(2, 31, 30, 0, 5, 9, 3, 0),
    gsSP1Triangle(3, 9, 29, 0),
    gsSPVertex(&object_gi_keyVtx_000430[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 13, 15, 0),
    gsSP2Triangles(13, 12, 16, 0, 18, 12, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 20, 23, 0),
    gsSP2Triangles(20, 24, 25, 0, 26, 6, 23, 0),
    gsSP2Triangles(3, 2, 27, 0, 3, 27, 28, 0),
    gsSP2Triangles(2, 1, 29, 0, 2, 29, 27, 0),
    gsSP2Triangles(1, 0, 30, 0, 1, 30, 29, 0),
    gsSP1Triangle(9, 31, 7, 0),
    gsSPVertex(&object_gi_keyVtx_000630[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 1, 14, 0),
    gsSP2Triangles(15, 13, 14, 0, 16, 17, 13, 0),
    gsSP2Triangles(18, 17, 16, 0, 19, 1, 20, 0),
    gsSP2Triangles(7, 6, 21, 0, 6, 22, 15, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP1Triangle(27, 28, 8, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000A18[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

