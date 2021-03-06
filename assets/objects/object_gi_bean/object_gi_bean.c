#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_bean.h"

static Vtx object_gi_beanVtx_000000[17];
static Vtx object_gi_beanVtx_000110[8];
static Vtx object_gi_beanVtx_000190[3];
static Vtx object_gi_beanVtx_0001C0[15];
static Vtx object_gi_beanVtx_0002B0[15];
static Vtx object_gi_beanVtx_0003A0[15];
static Vtx object_gi_beanVtx_000490[15];

static Vtx object_gi_beanVtx_000000[17] = {
    VTX(19, 21, -3, 236, 851, 55, 219, 99, 255),
    VTX(9, -2, -7, 217, 550, 38, 222, 108, 255),
    VTX(16, -3, -7, 224, 594, 205, 13, 107, 255),
    VTX(21, 21, -3, 238, 866, 197, 249, 103, 255),
    VTX(24, -1, 4, 271, 678, 161, 21, 70, 255),
    VTX(7, 9, 1, 261, 642, 65, 203, 85, 255),
    VTX(-5, -7, 1, 261, 394, 50, 190, 86, 255),
    VTX(-2, -15, -8, 212, 338, 36, 226, 110, 255),
    VTX(3, -21, -8, 221, 321, 232, 44, 108, 255),
    VTX(10, -25, 4, 270, 335, 184, 70, 66, 255),
    VTX(-18, -14, 1, 263, 231, 29, 188, 94, 255),
    VTX(-20, -22, -4, 215, 131, 32, 213, 107, 255),
    VTX(-20, -28, -4, 224, 74, 21, 41, 110, 255),
    VTX(-16, -36, 4, 276, 23, 253, 93, 75, 255),
    VTX(-40, -21, 1, 368, -8, 40, 10, 112, 255),
    VTX(17, 22, 1, 261, 848, 89, 214, 68, 255),
    VTX(23, 21, 1, 260, 888, 160, 4, 71, 255),
}; 

static Vtx object_gi_beanVtx_000110[8] = {
    VTX(21, 21, -3, 733, 611, 48, 191, 168, 255),
    VTX(23, 21, 1, 779, 604, 43, 158, 52, 255),
    VTX(19, 21, -3, 738, 611, 188, 191, 182, 255),
    VTX(24, 36, 0, 774, 399, 42, 64, 92, 255),
    VTX(21, 36, -1, 760, 397, 165, 77, 245, 255),
    VTX(17, 22, 1, 775, 599, 188, 223, 93, 255),
    VTX(23, 36, -2, 731, 398, 45, 42, 154, 255),
    VTX(23, 21, 1, 779, 604, 96, 244, 186, 255),
}; 

static Vtx object_gi_beanVtx_000190[3] = {
    VTX(18, 4, 9, 335, 1621, 58, 223, 99, 255),
    VTX(13, 4, 9, 177, 1621, 198, 223, 99, 255),
    VTX(15, -1, 4, -256, 2017, 0, 137, 248, 255),
}; 

static Vtx object_gi_beanVtx_0001C0[15] = {
    VTX(15, -1, 4, 768, 2017, 0, 137, 248, 255),
    VTX(21, 2, 4, 530, 1706, 103, 196, 248, 255),
    VTX(18, 4, 9, 335, 1621, 58, 223, 99, 255),
    VTX(13, 4, 9, 177, 1621, 198, 223, 99, 255),
    VTX(9, 2, 4, -18, 1706, 153, 196, 248, 255),
    VTX(15, -1, 4, -256, 2017, 0, 137, 248, 255),
    VTX(15, 12, 4, 768, 1055, 0, 119, 248, 255),
    VTX(15, 9, 9, 256, 1359, 0, 66, 99, 255),
    VTX(21, 9, 4, 530, 1366, 103, 60, 248, 255),
    VTX(9, 9, 4, -18, 1366, 153, 60, 248, 255),
    VTX(9, 9, 4, 1006, 1366, 153, 60, 248, 255),
    VTX(15, 9, -1, 768, 1359, 0, 57, 151, 255),
    VTX(13, 4, -1, 847, 1621, 206, 227, 151, 255),
    VTX(18, 4, -1, 689, 1621, 50, 227, 151, 255),
    VTX(9, 2, 4, 1006, 1706, 153, 196, 248, 255),
}; 

static Vtx object_gi_beanVtx_0002B0[15] = {
    VTX(10, -12, 11, 299, 1693, 30, 197, 99, 255),
    VTX(5, -8, 11, 167, 1526, 190, 4, 99, 255),
    VTX(4, -15, 4, -28, 1856, 191, 156, 248, 255),
    VTX(12, -16, 4, 546, 1893, 54, 149, 248, 255),
    VTX(0, -8, 4, -15, 1517, 137, 7, 248, 255),
    VTX(13, -1, 4, 540, 1216, 65, 100, 248, 255),
    VTX(10, -5, 11, 308, 1390, 36, 56, 99, 255),
    VTX(16, -9, 4, 527, 1555, 119, 249, 248, 255),
    VTX(5, -1, 4, -34, 1179, 202, 107, 248, 255),
    VTX(5, -1, 4, 990, 1179, 202, 107, 248, 255),
    VTX(10, -5, -2, 716, 1390, 32, 48, 151, 255),
    VTX(5, -8, -2, 857, 1526, 199, 3, 151, 255),
    VTX(10, -12, -2, 725, 1693, 26, 205, 151, 255),
    VTX(4, -15, 4, 996, 1856, 191, 156, 248, 255),
    VTX(0, -8, 4, 1009, 1517, 137, 7, 248, 255),
}; 

static Vtx object_gi_beanVtx_0003A0[15] = {
    VTX(-2, -22, 11, 315, 1671, 42, 204, 99, 255),
    VTX(-8, -20, 11, 168, 1562, 190, 246, 99, 255),
    VTX(-7, -27, 4, -42, 1925, 213, 145, 248, 255),
    VTX(1, -26, 4, 536, 1824, 75, 163, 248, 255),
    VTX(-12, -21, 4, -16, 1587, 138, 237, 248, 255),
    VTX(-1, -12, 4, 554, 1147, 43, 111, 248, 255),
    VTX(-3, -16, 11, 291, 1372, 24, 62, 99, 255),
    VTX(4, -18, 4, 528, 1485, 118, 19, 248, 255),
    VTX(-9, -13, 4, -24, 1248, 181, 93, 248, 255),
    VTX(-9, -13, 4, 1000, 1248, 181, 93, 248, 255),
    VTX(-3, -16, -2, 733, 1372, 21, 54, 151, 255),
    VTX(-8, -20, -2, 856, 1562, 199, 247, 151, 255),
    VTX(-2, -22, -2, 709, 1671, 36, 211, 151, 255),
    VTX(-7, -27, 4, 982, 1925, 213, 145, 248, 255),
    VTX(-12, -21, 4, 1008, 1587, 138, 237, 248, 255),
}; 

static Vtx object_gi_beanVtx_000490[15] = {
    VTX(-16, -27, 9, 305, 1698, 32, 198, 99, 255),
    VTX(-21, -25, 9, 163, 1531, 190, 2, 99, 255),
    VTX(-21, -31, 4, -42, 1864, 194, 155, 243, 255),
    VTX(-14, -31, 4, 558, 1880, 57, 152, 243, 255),
    VTX(-25, -24, 4, -23, 1528, 137, 3, 243, 255),
    VTX(-14, -19, 4, 554, 1208, 62, 101, 243, 255),
    VTX(-16, -22, 9, 309, 1380, 35, 57, 99, 255),
    VTX(-11, -25, 4, 535, 1544, 119, 253, 243, 255),
    VTX(-21, -19, 4, -46, 1192, 199, 104, 243, 255),
    VTX(-21, -19, 4, 978, 1192, 199, 104, 243, 255),
    VTX(-16, -22, 0, 715, 1380, 27, 45, 149, 255),
    VTX(-21, -25, 0, 861, 1531, 204, 1, 149, 255),
    VTX(-16, -27, 0, 719, 1698, 25, 210, 149, 255),
    VTX(-21, -31, 4, 982, 1864, 194, 155, 243, 255),
    VTX(-25, -24, 4, 1001, 1528, 137, 3, 243, 255),
}; 

Gfx gGiBeanDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 100, 255, 0, 255),
    gsDPSetEnvColor(0, 100, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_gi_beanVtx_000000[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 7, 8, 0),
    gsSP2Triangles(2, 8, 9, 0, 6, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(14, 11, 10, 0, 14, 12, 11, 0),
    gsSP2Triangles(14, 13, 12, 0, 1, 0, 15, 0),
    gsSP2Triangles(2, 3, 0, 0, 4, 16, 3, 0),
    gsSP2Triangles(7, 1, 5, 0, 8, 2, 1, 0),
    gsSP2Triangles(9, 4, 2, 0, 11, 7, 6, 0),
    gsSP2Triangles(12, 8, 7, 0, 13, 9, 8, 0),
    gsSP1Triangle(15, 5, 1, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_beanVtx_000110[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 2, 0),
    gsSP2Triangles(0, 6, 7, 0, 2, 5, 4, 0),
    gsSP2Triangles(4, 3, 6, 0, 0, 2, 6, 0),
    gsSP2Triangles(4, 6, 2, 0, 3, 1, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 200, 255, 0, 255),
    gsDPSetEnvColor(50, 150, 0, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 2, 0, 5, 2),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 2, 0, 5, 2),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_beanVtx_000190[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_beanVtx_0001C0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(2, 8, 7, 0, 1, 8, 2, 0),
    gsSP2Triangles(7, 9, 3, 0, 4, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 0, 0),
    gsSP2Triangles(11, 8, 13, 0, 8, 11, 6, 0),
    gsSP2Triangles(11, 10, 6, 0, 10, 12, 14, 0),
    gsSP2Triangles(14, 12, 0, 0, 13, 1, 0, 0),
    gsSP2Triangles(11, 13, 12, 0, 1, 13, 8, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 255, 255, 255),
    gsDPSetEnvColor(0, 100, 255, 255),
    gsSPVertex(&object_gi_beanVtx_0002B0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 0, 7, 6, 0),
    gsSP2Triangles(3, 7, 0, 0, 6, 8, 1, 0),
    gsSP2Triangles(4, 1, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 7, 12, 0),
    gsSP2Triangles(7, 10, 5, 0, 10, 9, 5, 0),
    gsSP2Triangles(9, 11, 14, 0, 14, 11, 13, 0),
    gsSP2Triangles(12, 3, 13, 0, 10, 12, 11, 0),
    gsSP2Triangles(3, 12, 7, 0, 1, 0, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 100, 255),
    gsDPSetEnvColor(200, 200, 0, 255),
    gsSPVertex(&object_gi_beanVtx_0003A0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 0, 7, 6, 0),
    gsSP2Triangles(3, 7, 0, 0, 6, 8, 1, 0),
    gsSP2Triangles(4, 1, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 7, 12, 0),
    gsSP2Triangles(7, 10, 5, 0, 10, 9, 5, 0),
    gsSP2Triangles(9, 11, 14, 0, 14, 11, 13, 0),
    gsSP2Triangles(12, 3, 13, 0, 10, 12, 11, 0),
    gsSP2Triangles(3, 12, 7, 0, 1, 0, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 100, 100, 255),
    gsDPSetEnvColor(255, 0, 0, 255),
    gsSPVertex(&object_gi_beanVtx_000490[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 0, 7, 6, 0),
    gsSP2Triangles(3, 7, 0, 0, 6, 8, 1, 0),
    gsSP2Triangles(4, 1, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 7, 12, 0),
    gsSP2Triangles(7, 10, 5, 0, 10, 9, 5, 0),
    gsSP2Triangles(9, 11, 14, 0, 14, 11, 13, 0),
    gsSP2Triangles(12, 3, 13, 0, 10, 12, 11, 0),
    gsSP2Triangles(3, 12, 7, 0, 1, 0, 6, 0),
    gsSPEndDisplayList(),
}; 


