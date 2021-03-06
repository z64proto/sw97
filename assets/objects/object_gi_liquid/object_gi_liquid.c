#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_liquid.h"

static Vtx object_gi_liquidVtx_000600[3];
static Vtx object_gi_liquidVtx_000630[32];
static Vtx object_gi_liquidVtx_000830[32];
static Vtx object_gi_liquidVtx_000A30[32];
static Vtx object_gi_liquidVtx_000C30[32];
static Vtx object_gi_liquidVtx_000E30[34];
static Vtx object_gi_liquidVtx_001050[3];
static Vtx object_gi_liquidVtx_001080[8];
static Vtx object_gi_liquidVtx_001100[7];
static Vtx object_gi_liquidVtx_001170[16];

u64 object_gi_liquidTex_000000[] = {
#include "assets/objects/object_gi_liquid//object_gi_liquidTex_000000.ia16.inc.c"
};

u64 object_gi_liquidTex_000200[] = {
#include "assets/objects/object_gi_liquid//object_gi_liquidTex_000200.ia16.inc.c"
};

u64 object_gi_liquidTex_000400[] = {
#include "assets/objects/object_gi_liquid//object_gi_liquidTex_000400.ia16.inc.c"
};

static Vtx object_gi_liquidVtx_000600[3] = {
    VTX(-15, 18, 9, -46, 1231, 40, 110, 231, 255),
    VTX(-2, 18, 18, 102, 1223, 5, 110, 209, 255),
    VTX(-8, 6, 13, 25, 1318, 62, 27, 158, 255),
}; 

static Vtx object_gi_liquidVtx_000630[32] = {
    VTX(-2, 18, 18, 102, 1223, 5, 110, 209, 255),
    VTX(13, 18, 13, 256, 1219, 223, 110, 223, 255),
    VTX(5, 6, 15, 178, 1310, 218, 27, 146, 255),
    VTX(18, 18, -2, 410, 1223, 209, 110, 5, 255),
    VTX(15, 6, 5, 334, 1310, 146, 27, 218, 255),
    VTX(9, 18, -15, 558, 1231, 231, 110, 40, 255),
    VTX(13, 6, -8, 487, 1318, 158, 27, 62, 255),
    VTX(-6, 18, -17, 699, 1237, 16, 110, 45, 255),
    VTX(2, 6, -15, 630, 1327, 243, 27, 116, 255),
    VTX(-17, 18, -6, 837, 1237, 45, 110, 16, 255),
    VTX(-11, 6, -11, 768, 1331, 82, 27, 82, 255),
    VTX(-15, 18, 9, 978, 1231, 40, 110, 231, 255),
    VTX(-15, 6, 2, 906, 1327, 116, 27, 243, 255),
    VTX(20, -22, -12, 483, 1723, 87, 195, 201, 255),
    VTX(22, -22, 8, 333, 1728, 97, 195, 34, 255),
    VTX(16, -28, -2, 411, 1845, 56, 151, 250, 255),
    VTX(3, -22, -23, 627, 1718, 11, 195, 154, 255),
    VTX(9, -28, -14, 559, 1836, 30, 151, 208, 255),
    VTX(-17, -22, -17, 768, 1715, 183, 195, 183, 255),
    VTX(-5, -28, -15, 699, 1829, 237, 151, 202, 255),
    VTX(-23, -22, 3, 909, 1718, 154, 195, 11, 255),
    VTX(-15, -28, -5, 837, 1829, 202, 151, 237, 255),
    VTX(-12, -22, 20, 29, 1723, 201, 195, 87, 255),
    VTX(-23, -22, 3, -115, 1718, 154, 195, 11, 255),
    VTX(-14, -28, 9, -47, 1836, 208, 151, 30, 255),
    VTX(8, -22, 22, 179, 1728, 34, 195, 97, 255),
    VTX(-2, -28, 16, 101, 1845, 250, 151, 56, 255),
    VTX(11, -28, 11, 256, 1849, 40, 151, 40, 255),
    VTX(26, -9, -3, 408, 1571, 119, 1, 243, 255),
    VTX(19, -9, 19, 256, 1571, 84, 1, 85, 255),
    VTX(14, -9, -22, 555, 1570, 64, 1, 155, 255),
    VTX(-9, -9, -25, 698, 1569, 217, 1, 143, 255),
}; 

static Vtx object_gi_liquidVtx_000830[32] = {
    VTX(-25, -9, -9, 838, 1569, 143, 1, 217, 255),
    VTX(-9, -9, -25, 698, 1569, 217, 1, 143, 255),
    VTX(-17, -22, -17, 768, 1715, 183, 195, 183, 255),
    VTX(-22, -9, 14, 981, 1570, 155, 1, 64, 255),
    VTX(-23, -22, 3, 909, 1718, 154, 195, 11, 255),
    VTX(-3, -9, 26, 104, 1571, 243, 1, 119, 255),
    VTX(-22, -9, 14, -43, 1570, 155, 1, 64, 255),
    VTX(-12, -22, 20, 29, 1723, 201, 195, 87, 255),
    VTX(19, -9, 19, 256, 1571, 84, 1, 85, 255),
    VTX(8, -22, 22, 179, 1728, 34, 195, 97, 255),
    VTX(22, 2, 8, 333, 1421, 101, 54, 35, 255),
    VTX(8, 2, 22, 179, 1421, 35, 54, 101, 255),
    VTX(20, 2, -12, 483, 1424, 90, 54, 199, 255),
    VTX(26, -9, -3, 408, 1571, 119, 1, 243, 255),
    VTX(3, 2, -23, 627, 1428, 12, 54, 150, 255),
    VTX(14, -9, -22, 555, 1570, 64, 1, 155, 255),
    VTX(-17, 2, -17, 768, 1430, 180, 54, 180, 255),
    VTX(-23, 2, 3, 909, 1428, 150, 54, 12, 255),
    VTX(-12, 2, 20, 29, 1424, 199, 54, 90, 255),
    VTX(-23, 2, 3, -115, 1428, 150, 54, 12, 255),
    VTX(12, 9, 12, 256, 1284, 84, 238, 84, 255),
    VTX(-2, 9, 17, 101, 1288, 243, 238, 117, 255),
    VTX(17, 9, -2, 410, 1288, 117, 238, 243, 255),
    VTX(9, 9, -15, 558, 1297, 63, 238, 156, 255),
    VTX(-6, 9, -16, 699, 1303, 217, 238, 145, 255),
    VTX(-16, 9, -6, 837, 1303, 145, 238, 217, 255),
    VTX(-15, 9, 9, 978, 1297, 156, 238, 63, 255),
    VTX(-15, 9, 9, -46, 1297, 156, 238, 63, 255),
    VTX(8, 14, 23, 180, 1300, 40, 1, 113, 255),
    VTX(-13, 14, 20, 30, 1305, 192, 1, 101, 255),
    VTX(23, 14, 8, 333, 1300, 113, 1, 39, 255),
    VTX(20, 14, -13, 483, 1305, 101, 1, 192, 255),
}; 

static Vtx object_gi_liquidVtx_000A30[32] = {
    VTX(3, 14, -24, 627, 1311, 13, 1, 137, 255),
    VTX(20, 14, -13, 483, 1305, 101, 1, 192, 255),
    VTX(9, 9, -15, 558, 1297, 63, 238, 156, 255),
    VTX(-17, 14, -17, 768, 1313, 171, 1, 172, 255),
    VTX(-6, 9, -16, 699, 1303, 217, 238, 145, 255),
    VTX(-24, 14, 3, 909, 1311, 137, 1, 13, 255),
    VTX(-16, 9, -6, 837, 1303, 145, 238, 217, 255),
    VTX(-13, 14, 20, 30, 1305, 192, 1, 101, 255),
    VTX(-24, 14, 3, -115, 1311, 137, 1, 13, 255),
    VTX(-15, 9, 9, -46, 1297, 156, 238, 63, 255),
    VTX(-2, 18, 18, 102, 1223, 5, 110, 209, 255),
    VTX(-15, 18, 9, -46, 1231, 40, 110, 231, 255),
    VTX(13, 18, 13, 256, 1219, 223, 110, 223, 255),
    VTX(8, 14, 23, 180, 1300, 40, 1, 113, 255),
    VTX(18, 18, -2, 410, 1223, 209, 110, 5, 255),
    VTX(23, 14, 8, 333, 1300, 113, 1, 39, 255),
    VTX(9, 18, -15, 558, 1231, 231, 110, 40, 255),
    VTX(-6, 18, -17, 699, 1237, 16, 110, 45, 255),
    VTX(-17, 18, -6, 837, 1237, 45, 110, 16, 255),
    VTX(-15, 18, 9, 978, 1231, 40, 110, 231, 255),
    VTX(-8, 6, 13, 25, 1318, 62, 27, 158, 255),
    VTX(-15, 6, 2, -118, 1327, 116, 27, 243, 255),
    VTX(5, 6, 15, 178, 1310, 218, 27, 146, 255),
    VTX(15, 6, 5, 334, 1310, 146, 27, 218, 255),
    VTX(13, 6, -8, 487, 1318, 158, 27, 62, 255),
    VTX(2, 6, -15, 630, 1327, 243, 27, 116, 255),
    VTX(-11, 6, -11, 768, 1331, 82, 27, 82, 255),
    VTX(-15, 6, 2, 906, 1327, 116, 27, 243, 255),
    VTX(0, -31, 0, 768, 2034, 0, 136, 0, 255),
    VTX(9, -28, -14, 559, 1836, 30, 151, 208, 255),
    VTX(16, -28, -2, 411, 1845, 56, 151, 250, 255),
    VTX(-5, -28, -15, 699, 1829, 237, 151, 202, 255),
}; 

static Vtx object_gi_liquidVtx_000C30[32] = {
    VTX(0, -31, 0, 768, 2034, 0, 136, 0, 255),
    VTX(-15, -28, -5, 837, 1829, 202, 151, 237, 255),
    VTX(-5, -28, -15, 699, 1829, 237, 151, 202, 255),
    VTX(-14, -28, 9, 977, 1836, 208, 151, 30, 255),
    VTX(0, -31, 0, -256, 2034, 0, 136, 0, 255),
    VTX(-2, -28, 16, 101, 1845, 250, 151, 56, 255),
    VTX(-14, -28, 9, -47, 1836, 208, 151, 30, 255),
    VTX(11, -28, 11, 256, 1849, 40, 151, 40, 255),
    VTX(16, -28, -2, 411, 1845, 56, 151, 250, 255),
    VTX(9, -28, -14, 559, 1836, 30, 151, 208, 255),
    VTX(20, -22, -12, 483, 1723, 87, 195, 201, 255),
    VTX(3, -22, -23, 627, 1718, 11, 195, 154, 255),
    VTX(-17, -22, -17, 768, 1715, 183, 195, 183, 255),
    VTX(-23, -22, 3, 909, 1718, 154, 195, 11, 255),
    VTX(-12, -22, 20, 29, 1723, 201, 195, 87, 255),
    VTX(8, -22, 22, 179, 1728, 34, 195, 97, 255),
    VTX(22, -22, 8, 333, 1728, 97, 195, 34, 255),
    VTX(26, -9, -3, 408, 1571, 119, 1, 243, 255),
    VTX(14, -9, -22, 555, 1570, 64, 1, 155, 255),
    VTX(-9, -9, -25, 698, 1569, 217, 1, 143, 255),
    VTX(-25, -9, -9, 838, 1569, 143, 1, 217, 255),
    VTX(-23, -22, 3, -115, 1718, 154, 195, 11, 255),
    VTX(-22, -9, 14, -43, 1570, 155, 1, 64, 255),
    VTX(-3, -9, 26, 104, 1571, 243, 1, 119, 255),
    VTX(19, -9, 19, 256, 1571, 84, 1, 85, 255),
    VTX(22, 2, 8, 333, 1421, 101, 54, 35, 255),
    VTX(20, 2, -12, 483, 1424, 90, 54, 199, 255),
    VTX(3, 2, -23, 627, 1428, 12, 54, 150, 255),
    VTX(-17, 2, -17, 768, 1430, 180, 54, 180, 255),
    VTX(-22, -9, 14, 981, 1570, 155, 1, 64, 255),
    VTX(-23, 2, 3, 909, 1428, 150, 54, 12, 255),
    VTX(-12, 2, 20, 29, 1424, 199, 54, 90, 255),
}; 

static Vtx object_gi_liquidVtx_000E30[34] = {
    VTX(-3, -9, 26, 104, 1571, 243, 1, 119, 255),
    VTX(19, -9, 19, 256, 1571, 84, 1, 85, 255),
    VTX(8, 2, 22, 179, 1421, 35, 54, 101, 255),
    VTX(22, 2, 8, 333, 1421, 101, 54, 35, 255),
    VTX(12, 9, 12, 256, 1284, 84, 238, 84, 255),
    VTX(20, 2, -12, 483, 1424, 90, 54, 199, 255),
    VTX(17, 9, -2, 410, 1288, 117, 238, 243, 255),
    VTX(3, 2, -23, 627, 1428, 12, 54, 150, 255),
    VTX(9, 9, -15, 558, 1297, 63, 238, 156, 255),
    VTX(-17, 2, -17, 768, 1430, 180, 54, 180, 255),
    VTX(-6, 9, -16, 699, 1303, 217, 238, 145, 255),
    VTX(-23, 2, 3, 909, 1428, 150, 54, 12, 255),
    VTX(-16, 9, -6, 837, 1303, 145, 238, 217, 255),
    VTX(-23, 2, 3, -115, 1428, 150, 54, 12, 255),
    VTX(-12, 2, 20, 29, 1424, 199, 54, 90, 255),
    VTX(-15, 9, 9, -46, 1297, 156, 238, 63, 255),
    VTX(-2, 9, 17, 101, 1288, 243, 238, 117, 255),
    VTX(8, 14, 23, 180, 1300, 40, 1, 113, 255),
    VTX(23, 14, 8, 333, 1300, 113, 1, 39, 255),
    VTX(20, 14, -13, 483, 1305, 101, 1, 192, 255),
    VTX(3, 14, -24, 627, 1311, 13, 1, 137, 255),
    VTX(-17, 14, -17, 768, 1313, 171, 1, 172, 255),
    VTX(-15, 9, 9, 978, 1297, 156, 238, 63, 255),
    VTX(-24, 14, 3, 909, 1311, 137, 1, 13, 255),
    VTX(-13, 14, 20, 30, 1305, 192, 1, 101, 255),
    VTX(-2, 18, 18, 102, 1223, 5, 110, 209, 255),
    VTX(13, 18, 13, 256, 1219, 223, 110, 223, 255),
    VTX(18, 18, -2, 410, 1223, 209, 110, 5, 255),
    VTX(9, 18, -15, 558, 1231, 231, 110, 40, 255),
    VTX(-6, 18, -17, 699, 1237, 16, 110, 45, 255),
    VTX(-17, 18, -6, 837, 1237, 45, 110, 16, 255),
    VTX(-24, 14, 3, -115, 1311, 137, 1, 13, 255),
    VTX(-13, 14, 20, 30, 1305, 192, 1, 101, 255),
    VTX(-15, 18, 9, -46, 1231, 40, 110, 231, 255),
}; 

static Vtx object_gi_liquidVtx_001050[3] = {
    VTX(4, 3, -7, 2389, -321, 206, 175, 22, 255),
    VTX(6, 4, -1, 1024, -317, 206, 175, 22, 255),
    VTX(0, 5, -3, 1707, -312, 206, 175, 22, 255),
}; 

static Vtx object_gi_liquidVtx_001080[8] = {
    VTX(10, 36, -7, 1354, 1354, 245, 82, 86, 255),
    VTX(14, 34, -11, 672, 1344, 111, 24, 219, 255),
    VTX(8, 35, -13, 2070, 1349, 194, 53, 168, 255),
    VTX(4, 3, -7, 341, -321, 11, 174, 170, 255),
    VTX(6, 4, -1, 1024, -317, 62, 203, 88, 255),
    VTX(0, 5, -3, 1707, -312, 145, 232, 37, 255),
    VTX(4, 3, -7, 2389, -321, 11, 174, 170, 255),
    VTX(8, 35, -13, 22, 1349, 194, 53, 168, 255),
}; 

static Vtx object_gi_liquidVtx_001100[7] = {
    VTX(13, 6, -8, 0, 733, 0, 120, 0, 255),
    VTX(-11, 6, -11, 827, 922, 0, 120, 0, 255),
    VTX(-8, 6, 13, 827, 74, 0, 120, 0, 255),
    VTX(-15, 6, 2, 1031, 498, 0, 120, 0, 255),
    VTX(2, 6, -15, 368, 1026, 0, 120, 0, 255),
    VTX(5, 6, 15, 368, -31, 0, 120, 0, 255),
    VTX(15, 6, 5, 0, 263, 0, 120, 0, 255),
}; 

static Vtx object_gi_liquidVtx_001170[16] = {
    VTX(-3, -9, 26, 10454, 1024, 243, 21, 117, 255),
    VTX(19, -9, 19, 12288, 1024, 83, 21, 83, 255),
    VTX(8, 2, 22, 11361, 0, 37, 38, 107, 255),
    VTX(-22, -9, 14, 8684, 1024, 156, 21, 63, 255),
    VTX(-12, 2, 20, 9548, 0, 196, 38, 96, 255),
    VTX(-25, -9, -9, 6981, 1024, 145, 21, 217, 255),
    VTX(-23, 2, 3, 7817, 0, 143, 38, 13, 255),
    VTX(-9, -9, -25, 5306, 1024, 217, 21, 145, 255),
    VTX(-17, 2, -17, 6144, 0, 176, 38, 176, 255),
    VTX(14, -9, -22, 3604, 1024, 63, 21, 156, 255),
    VTX(3, 2, -23, 4471, 0, 13, 38, 143, 255),
    VTX(26, -9, -3, 1833, 1024, 117, 21, 243, 255),
    VTX(20, 2, -12, 2740, 0, 96, 38, 196, 255),
    VTX(26, -9, -3, 14121, 1024, 117, 21, 243, 255),
    VTX(22, 2, 8, 13215, 0, 107, 38, 37, 255),
    VTX(22, 2, 8, 927, 0, 107, 38, 37, 255),
}; 

Gfx gGiGreenPotColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 50, 100, 0, 255),
    gsDPSetEnvColor(20, 40, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiRedPotColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 220, 50, 50, 255),
    gsDPSetEnvColor(50, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBluePotColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 50, 30, 220, 255),
    gsDPSetEnvColor(20, 10, 60, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGreenLiquidColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(0, 100, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiRedLiquidColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 170, 255, 255),
    gsDPSetEnvColor(150, 0, 30, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBlueLiquidColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 170, 255, 255, 255),
    gsDPSetEnvColor(0, 50, 150, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGreenPatternColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 200, 40, 255),
    gsDPSetEnvColor(60, 120, 20, 255),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_liquidTex_000000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPEndDisplayList(),
}; 

Gfx gGiRedPatternColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 130, 120, 255),
    gsDPSetEnvColor(255, 70, 80, 255),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_liquidTex_000200),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPEndDisplayList(),
}; 

Gfx gGiBluePatternColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 130, 230, 255),
    gsDPSetEnvColor(0, 70, 190, 255),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_liquidTex_000400),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPEndDisplayList(),
}; 

Gfx gGiPotionPotDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(2000, 2000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_liquidVtx_000600[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_liquidVtx_000630[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 13, 17, 0),
    gsSP2Triangles(18, 16, 19, 0, 20, 18, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 22, 26, 0),
    gsSP2Triangles(14, 25, 27, 0, 28, 29, 14, 0),
    gsSP2Triangles(30, 28, 13, 0, 31, 30, 16, 0),
    gsSPVertex(&object_gi_liquidVtx_000830[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 5, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 12, 15, 0, 16, 14, 1, 0),
    gsSP2Triangles(17, 16, 0, 0, 18, 19, 6, 0),
    gsSP2Triangles(11, 18, 5, 0, 20, 21, 11, 0),
    gsSP2Triangles(22, 20, 10, 0, 23, 22, 12, 0),
    gsSP2Triangles(24, 23, 14, 0, 25, 24, 16, 0),
    gsSP2Triangles(26, 25, 17, 0, 21, 27, 18, 0),
    gsSP2Triangles(28, 29, 21, 0, 30, 28, 20, 0),
    gsSP1Triangle(31, 30, 22, 0),
    gsSPVertex(&object_gi_liquidVtx_000A30[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 12, 15, 0, 16, 14, 1, 0),
    gsSP2Triangles(17, 16, 0, 0, 18, 17, 3, 0),
    gsSP2Triangles(19, 18, 5, 0, 20, 21, 11, 0),
    gsSP2Triangles(22, 20, 10, 0, 23, 22, 12, 0),
    gsSP2Triangles(24, 23, 14, 0, 25, 24, 16, 0),
    gsSP2Triangles(26, 25, 17, 0, 27, 26, 18, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSPVertex(&object_gi_liquidVtx_000C30[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(4, 8, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 2, 11, 0, 2, 1, 12, 0),
    gsSP2Triangles(1, 3, 13, 0, 6, 5, 14, 0),
    gsSP2Triangles(5, 7, 15, 0, 7, 8, 16, 0),
    gsSP2Triangles(16, 10, 17, 0, 10, 11, 18, 0),
    gsSP2Triangles(11, 12, 19, 0, 12, 13, 20, 0),
    gsSP2Triangles(21, 14, 22, 0, 14, 15, 23, 0),
    gsSP2Triangles(15, 16, 24, 0, 24, 17, 25, 0),
    gsSP2Triangles(17, 18, 26, 0, 18, 19, 27, 0),
    gsSP2Triangles(19, 20, 28, 0, 20, 29, 30, 0),
    gsSP1Triangle(22, 23, 31, 0),
    gsSPVertex(&object_gi_liquidVtx_000E30[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 2, 16, 0),
    gsSP2Triangles(16, 4, 17, 0, 4, 6, 18, 0),
    gsSP2Triangles(6, 8, 19, 0, 8, 10, 20, 0),
    gsSP2Triangles(10, 12, 21, 0, 12, 22, 23, 0),
    gsSP2Triangles(15, 16, 24, 0, 24, 17, 25, 0),
    gsSP2Triangles(17, 18, 26, 0, 18, 19, 27, 0),
    gsSP2Triangles(19, 20, 28, 0, 20, 21, 29, 0),
    gsSP1Triangle(21, 23, 30, 0),
    gsSPVertex(&object_gi_liquidVtx_000E30[31], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 160, 100, 0, 255),
    gsDPSetEnvColor(60, 30, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_liquidVtx_001050[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_gi_liquidVtx_001080[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 2, 6, 0, 4, 0, 5, 0),
    gsSP2Triangles(5, 0, 2, 0, 4, 1, 0, 0),
    gsSP1Triangle(3, 7, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiPotionLiquidDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 15, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_liquidVtx_001100[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 2, 5, 0, 0),
    gsSP1Triangle(5, 6, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiPotionPatternDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPVertex(&object_gi_liquidVtx_001170[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(1, 13, 14, 0, 2, 4, 0, 0),
    gsSP2Triangles(4, 6, 3, 0, 6, 8, 5, 0),
    gsSP2Triangles(8, 10, 7, 0, 10, 12, 9, 0),
    gsSP2Triangles(12, 15, 11, 0, 14, 2, 1, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0018C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


