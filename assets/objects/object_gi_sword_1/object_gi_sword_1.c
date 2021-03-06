#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_sword_1.h"

static Vtx object_gi_sword_1Vtx_000000[3];
static Vtx object_gi_sword_1Vtx_000030[21];
static Vtx object_gi_sword_1Vtx_000180[32];
static Vtx object_gi_sword_1Vtx_000380[32];
static Vtx object_gi_sword_1Vtx_000580[28];
static Vtx object_gi_sword_1Vtx_000740[12];
static Vtx object_gi_sword_1Vtx_000800[3];
static Vtx object_gi_sword_1Vtx_000830[14];
static Vtx object_gi_sword_1Vtx_000910[5];

static Vtx object_gi_sword_1Vtx_000000[3] = {
    VTX(28, 28, 0, 128, 1024, 23, 23, 115, 255),
    VTX(14, 25, 0, 0, 1216, 242, 56, 104, 255),
    VTX(16, 16, 5, 256, 1244, 23, 23, 115, 255),
}; 

static Vtx object_gi_sword_1Vtx_000030[21] = {
    VTX(28, 28, 0, 384, 1024, 23, 23, 115, 255),
    VTX(16, 16, 5, 256, 1244, 23, 23, 115, 255),
    VTX(25, 14, 0, 512, 1216, 56, 242, 104, 255),
    VTX(-4, -4, 2, 256, 2014, 212, 31, 107, 255),
    VTX(16, 16, 5, 256, 1244, 208, 38, 102, 255),
    VTX(-8, -1, 0, 0, 1980, 163, 74, 0, 255),
    VTX(14, 25, 0, 0, 1216, 166, 78, 0, 255),
    VTX(16, 16, 5, 256, 1244, 38, 208, 102, 255),
    VTX(-1, -8, 0, 512, 1980, 74, 163, 0, 255),
    VTX(25, 14, 0, 512, 1216, 78, 166, 0, 255),
    VTX(-4, -4, 2, 256, 2014, 31, 212, 107, 255),
    VTX(28, 28, 0, 640, 1024, 23, 23, 141, 255),
    VTX(25, 14, 0, 512, 1216, 56, 242, 152, 255),
    VTX(16, 16, -5, 768, 1244, 23, 23, 141, 255),
    VTX(28, 28, 0, -128, 1024, 23, 23, 141, 255),
    VTX(16, 16, -5, -256, 1244, 23, 23, 141, 255),
    VTX(14, 25, 0, 0, 1216, 242, 56, 152, 255),
    VTX(-4, -4, -2, 768, 2014, 31, 212, 149, 255),
    VTX(16, 16, -5, 768, 1244, 38, 208, 154, 255),
    VTX(16, 16, -5, -256, 1244, 208, 38, 154, 255),
    VTX(-4, -4, -2, -256, 2014, 212, 31, 149, 255),
}; 

static Vtx object_gi_sword_1Vtx_000180[32] = {
    VTX(-22, -22, 4, 256, 1946, 56, 85, 63, 255),
    VTX(-25, -20, 0, 0, 1946, 26, 115, 235, 255),
    VTX(-28, -19, 0, 0, 1899, 209, 108, 21, 255),
    VTX(-22, -22, -4, -256, 1946, 85, 56, 193, 255),
    VTX(-23, -23, -6, -256, 1899, 16, 45, 146, 255),
    VTX(-22, -22, -4, 768, 1946, 85, 56, 193, 255),
    VTX(-20, -25, 0, 512, 1946, 115, 26, 21, 255),
    VTX(-19, -28, 0, 512, 1899, 108, 209, 235, 255),
    VTX(-23, -23, 6, 256, 1899, 45, 16, 110, 255),
    VTX(-27, -27, 0, -128, 1024, 172, 172, 0, 255),
    VTX(-27, -27, 0, 128, 1024, 172, 172, 0, 255),
    VTX(-27, -27, 0, 384, 1024, 172, 172, 0, 255),
    VTX(-27, -27, 0, 640, 1024, 172, 172, 0, 255),
    VTX(-23, -23, -6, 768, 1899, 16, 45, 146, 255),
    VTX(5, -7, 4, 439, 1178, 14, 100, 63, 255),
    VTX(1, -9, 4, 428, 1197, 19, 64, 99, 255),
    VTX(9, -11, 4, 467, 1247, 81, 17, 86, 255),
    VTX(-1, -16, 4, 454, 1337, 2, 212, 111, 255),
    VTX(-19, 0, 0, 0, 1379, 137, 0, 0, 255),
    VTX(-13, 11, 0, 0, 1266, 198, 105, 0, 255),
    VTX(-11, 9, -4, -45, 1247, 17, 81, 170, 255),
    VTX(-14, -8, 0, 0, 1291, 154, 194, 0, 255),
    VTX(-14, -6, 4, 97, 1319, 203, 229, 104, 255),
    VTX(-16, -1, -4, -58, 1337, 200, 3, 150, 255),
    VTX(-14, -6, -4, -97, 1319, 182, 218, 170, 255),
    VTX(-11, 9, 4, 45, 1247, 252, 70, 97, 255),
    VTX(-16, -1, 4, 58, 1337, 212, 2, 111, 255),
    VTX(-9, 1, 4, 84, 1197, 52, 28, 104, 255),
    VTX(-7, 5, 4, 73, 1178, 113, 16, 36, 255),
    VTX(-7, 5, -4, 951, 1178, 100, 14, 193, 255),
    VTX(-9, 1, -4, 940, 1197, 72, 21, 163, 255),
    VTX(-11, 9, -4, 979, 1247, 17, 81, 170, 255),
}; 

static Vtx object_gi_sword_1Vtx_000380[32] = {
    VTX(-16, -1, -4, 966, 1337, 200, 3, 150, 255),
    VTX(-11, 9, -4, 979, 1247, 17, 81, 170, 255),
    VTX(-9, 1, -4, 940, 1197, 72, 21, 163, 255),
    VTX(-14, -6, -4, 927, 1319, 182, 218, 170, 255),
    VTX(-11, -11, 4, 256, 1263, 204, 204, 94, 255),
    VTX(-14, -6, 4, 97, 1319, 203, 229, 104, 255),
    VTX(-14, -8, 0, 0, 1291, 154, 194, 0, 255),
    VTX(-8, -14, 0, 512, 1291, 194, 154, 0, 255),
    VTX(-6, -14, 4, 415, 1319, 229, 203, 104, 255),
    VTX(-1, -16, -4, 570, 1337, 3, 200, 150, 255),
    VTX(-6, -14, -4, 609, 1319, 218, 182, 170, 255),
    VTX(1, -9, -4, 596, 1197, 32, 59, 157, 255),
    VTX(9, -11, -4, 557, 1247, 70, 252, 159, 255),
    VTX(5, -7, -4, 585, 1178, 16, 113, 220, 255),
    VTX(-7, 5, 4, 73, 1178, 113, 16, 36, 255),
    VTX(-9, 1, 4, 84, 1197, 52, 28, 104, 255),
    VTX(-9, 1, -4, -84, 1197, 72, 21, 163, 255),
    VTX(-8, -1, 0, 0, 1131, 84, 84, 0, 255),
    VTX(-4, -4, -2, -256, 1079, 84, 84, 0, 255),
    VTX(-4, -4, -2, 768, 1079, 84, 84, 0, 255),
    VTX(-1, -8, 0, 512, 1131, 84, 84, 0, 255),
    VTX(1, -9, 4, 428, 1197, 19, 64, 99, 255),
    VTX(-4, -4, 2, 256, 1079, 84, 84, 0, 255),
    VTX(9, -11, 4, 467, 1247, 81, 17, 86, 255),
    VTX(11, -13, 0, 512, 1266, 105, 198, 0, 255),
    VTX(5, -7, 4, 439, 1178, 14, 100, 63, 255),
    VTX(-11, 9, -4, -45, 1247, 17, 81, 170, 255),
    VTX(-13, 11, 0, 0, 1266, 198, 105, 0, 255),
    VTX(-11, 9, 4, 45, 1247, 252, 70, 97, 255),
    VTX(-7, 5, -4, -73, 1178, 100, 14, 193, 255),
    VTX(0, -19, 0, 512, 1379, 0, 137, 0, 255),
    VTX(-1, -16, 4, 454, 1337, 2, 212, 111, 255),
}; 

static Vtx object_gi_sword_1Vtx_000580[28] = {
    VTX(-16, -1, 4, 58, 1337, 212, 2, 111, 255),
    VTX(-11, 9, 4, 45, 1247, 252, 70, 97, 255),
    VTX(-19, 0, 0, 0, 1379, 137, 0, 0, 255),
    VTX(-11, 9, -4, -45, 1247, 17, 81, 170, 255),
    VTX(-16, -1, -4, -58, 1337, 200, 3, 150, 255),
    VTX(-14, -6, 4, 97, 1319, 203, 229, 104, 255),
    VTX(-14, -8, 0, 0, 1291, 154, 194, 0, 255),
    VTX(-14, -6, -4, -97, 1319, 182, 218, 170, 255),
    VTX(-10, -10, 4, 256, 1226, 0, 0, 120, 255),
    VTX(-10, -7, 4, 169, 1196, 0, 0, 120, 255),
    VTX(-7, -10, 4, 343, 1196, 0, 0, 120, 255),
    VTX(-6, -14, 4, 415, 1319, 229, 203, 104, 255),
    VTX(-3, -12, 4, 415, 1240, 0, 0, 120, 255),
    VTX(-1, -16, 4, 454, 1337, 2, 212, 111, 255),
    VTX(1, -9, 4, 428, 1197, 19, 64, 99, 255),
    VTX(-9, 1, 4, 84, 1197, 52, 28, 104, 255),
    VTX(-5, -5, 4, 256, 1123, 0, 0, 120, 255),
    VTX(-5, -8, 4, 343, 1161, 0, 0, 120, 255),
    VTX(-8, -5, 4, 169, 1161, 0, 0, 120, 255),
    VTX(-12, -3, 4, 97, 1240, 0, 0, 120, 255),
    VTX(-11, -11, 4, 256, 1263, 204, 204, 94, 255),
    VTX(-9, 1, -4, 940, 1197, 72, 21, 163, 255),
    VTX(1, -9, -4, 596, 1197, 32, 59, 157, 255),
    VTX(-11, -11, -4, 768, 1263, 215, 215, 151, 255),
    VTX(-14, -6, -4, 927, 1319, 182, 218, 170, 255),
    VTX(-6, -14, -4, 609, 1319, 218, 182, 170, 255),
    VTX(-11, -11, -4, -256, 1263, 215, 215, 151, 255),
    VTX(-8, -14, 0, 512, 1291, 194, 154, 0, 255),
}; 

static Vtx object_gi_sword_1Vtx_000740[12] = {
    VTX(-20, -25, 0, 256, 1024, 78, 165, 0, 255),
    VTX(-8, -14, 0, 256, -3592, 54, 196, 88, 255),
    VTX(-22, -22, 4, 0, 1024, 252, 252, 119, 255),
    VTX(-14, -8, 0, 768, -3592, 196, 54, 88, 255),
    VTX(-25, -20, 0, 768, 1024, 165, 78, 0, 255),
    VTX(-22, -22, 4, 1024, 1024, 252, 252, 119, 255),
    VTX(-14, -8, 0, 768, -3592, 196, 54, 168, 255),
    VTX(-22, -22, -4, 512, 1024, 252, 252, 137, 255),
    VTX(-8, -14, 0, 256, -3592, 54, 196, 168, 255),
    VTX(-11, -11, 4, 0, -3592, 254, 254, 119, 255),
    VTX(-11, -11, 4, 1024, -3592, 254, 254, 119, 255),
    VTX(-11, -11, -4, 512, -3592, 254, 254, 137, 255),
}; 

static Vtx object_gi_sword_1Vtx_000800[3] = {
    VTX(-12, -3, 4, -12, 1536, 237, 19, 116, 255),
    VTX(-9, -6, 5, 30, 1536, 217, 39, 106, 255),
    VTX(-8, -5, 4, -29, 1387, 16, 75, 92, 255),
}; 

static Vtx object_gi_sword_1Vtx_000830[14] = {
    VTX(-12, -3, 4, -12, 1536, 237, 19, 116, 255),
    VTX(-10, -7, 4, -29, 1685, 181, 240, 92, 255),
    VTX(-9, -6, 5, 30, 1536, 217, 39, 106, 255),
    VTX(-10, -10, 4, -256, 2009, 208, 208, 99, 255),
    VTX(-9, -9, 5, 256, 1988, 208, 208, 99, 255),
    VTX(-6, -6, 5, 256, 1084, 48, 48, 99, 255),
    VTX(-5, -5, 4, -256, 1063, 48, 48, 99, 255),
    VTX(-8, -5, 4, -29, 1387, 16, 75, 92, 255),
    VTX(-5, -8, 4, 541, 1387, 75, 16, 92, 255),
    VTX(-6, -9, 5, 482, 1536, 39, 217, 106, 255),
    VTX(-3, -12, 4, 524, 1536, 19, 237, 116, 255),
    VTX(-7, -10, 4, 541, 1685, 240, 181, 92, 255),
    VTX(-10, -10, 4, 768, 2009, 208, 208, 99, 255),
    VTX(-5, -5, 4, 768, 1063, 48, 48, 99, 255),
}; 

static Vtx object_gi_sword_1Vtx_000910[5] = {
    VTX(-8, -8, 6, 256, 1536, 0, 0, 120, 255),
    VTX(-6, -9, 5, 558, 1536, 42, 214, 103, 255),
    VTX(-6, -6, 5, 768, 1116, 42, 42, 103, 255),
    VTX(-9, -9, 5, 768, 1956, 214, 214, 103, 255),
    VTX(-9, -6, 5, -46, 1536, 214, 42, 103, 255),
}; 

Gfx gGiKokiriSwordDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 64, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 40, 80, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sword_1Vtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_sword_1Vtx_000030[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 8, 0),
    gsSP2Triangles(9, 8, 18, 0, 19, 5, 6, 0),
    gsSP1Triangle(5, 19, 20, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 120, 40, 0, 255),
    gsDPSetEnvColor(60, 20, 0, 255),
    gsSPVertex(&object_gi_sword_1Vtx_000180[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 0, 8, 0),
    gsSP2Triangles(2, 4, 9, 0, 10, 8, 2, 0),
    gsSP2Triangles(11, 7, 8, 0, 12, 13, 7, 0),
    gsSP2Triangles(2, 8, 0, 0, 4, 2, 1, 0),
    gsSP2Triangles(7, 13, 5, 0, 8, 7, 6, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 16, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 22, 0),
    gsSP2Triangles(23, 24, 18, 0, 19, 18, 25, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 25, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_gi_sword_1Vtx_000380[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(11, 13, 12, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 16, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(11, 2, 19, 0, 19, 20, 11, 0),
    gsSP2Triangles(21, 11, 20, 0, 21, 20, 22, 0),
    gsSP2Triangles(15, 21, 22, 0, 15, 22, 17, 0),
    gsSP2Triangles(23, 24, 12, 0, 13, 23, 12, 0),
    gsSP2Triangles(13, 25, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(14, 26, 28, 0, 14, 29, 26, 0),
    gsSP2Triangles(21, 25, 13, 0, 13, 11, 21, 0),
    gsSP2Triangles(16, 29, 14, 0, 30, 12, 24, 0),
    gsSP2Triangles(23, 31, 30, 0, 10, 9, 30, 0),
    gsSP2Triangles(8, 30, 31, 0, 12, 30, 9, 0),
    gsSP2Triangles(30, 24, 23, 0, 30, 7, 10, 0),
    gsSP1Triangle(30, 8, 7, 0),
    gsSPVertex(&object_gi_sword_1Vtx_000580[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 0, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 10, 8, 11, 0),
    gsSP2Triangles(12, 10, 11, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 12, 13, 0, 15, 16, 14, 0),
    gsSP2Triangles(16, 17, 14, 0, 12, 14, 17, 0),
    gsSP2Triangles(18, 16, 15, 0, 15, 19, 18, 0),
    gsSP2Triangles(0, 19, 15, 0, 19, 0, 5, 0),
    gsSP2Triangles(9, 19, 5, 0, 8, 20, 11, 0),
    gsSP2Triangles(5, 20, 8, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(6, 7, 26, 0, 23, 25, 27, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 150, 0, 255),
    gsDPSetEnvColor(100, 40, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sword_1Vtx_000740[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 8, 0, 7, 0),
    gsSP2Triangles(9, 2, 1, 0, 5, 10, 3, 0),
    gsSP2Triangles(11, 7, 6, 0, 7, 11, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 0, 255),
    gsDPSetEnvColor(100, 100, 0, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sword_1Vtx_000800[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_sword_1Vtx_000830[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 3, 0, 5, 6, 2, 0),
    gsSP2Triangles(7, 2, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 9, 12, 11, 0),
    gsSP2Triangles(12, 9, 4, 0, 13, 9, 8, 0),
    gsSP1Triangle(9, 13, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 128, 255, 0, 255, 255),
    gsDPSetEnvColor(100, 0, 50, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsSPVertex(&object_gi_sword_1Vtx_000910[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 4, 0, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000D18[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


