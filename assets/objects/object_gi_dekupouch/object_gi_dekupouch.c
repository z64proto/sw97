#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_dekupouch.h"

static Vtx object_gi_dekupouchVtx_000300[3];
static Vtx object_gi_dekupouchVtx_000330[32];
static Vtx object_gi_dekupouchVtx_000530[3];
static Vtx object_gi_dekupouchVtx_000560[4];
static Vtx object_gi_dekupouchVtx_0005A0[32];
static Vtx object_gi_dekupouchVtx_0007A0[9];
static Vtx object_gi_dekupouchVtx_000830[3];
static Vtx object_gi_dekupouchVtx_000860[18];
static Vtx object_gi_dekupouchVtx_000980[7];
static Vtx object_gi_dekupouchVtx_0009F0[11];
static Vtx object_gi_dekupouchVtx_000AA0[5];

u64 object_gi_dekupouchTex_000000[] = {
#include "assets/objects/object_gi_dekupouch//object_gi_dekupouchTex_000000.i8.inc.c"
};

u64 object_gi_dekupouchTex_000100[] = {
#include "assets/objects/object_gi_dekupouch//object_gi_dekupouchTex_000100.i8.inc.c"
};

static Vtx object_gi_dekupouchVtx_000300[3] = {
    VTX(-21, 29, 0, 0, 1226, 147, 208, 2, 255),
    VTX(-16, 19, -1, -16, 1246, 161, 250, 184, 255),
    VTX(-16, 19, 2, 17, 1246, 163, 253, 75, 255),
}; 

static Vtx object_gi_dekupouchVtx_000330[32] = {
    VTX(-12, 32, 13, 144, 1185, 215, 192, 92, 255),
    VTX(-16, 19, 2, 17, 1246, 163, 253, 75, 255),
    VTX(0, 19, 5, 273, 1109, 255, 246, 119, 255),
    VTX(11, 29, 13, 376, 1202, 41, 188, 90, 255),
    VTX(16, 19, 2, 496, 1256, 96, 255, 71, 255),
    VTX(20, 32, 0, 512, 1214, 114, 221, 255, 255),
    VTX(16, 19, -1, 527, 1256, 95, 1, 183, 255),
    VTX(11, 32, -13, 648, 1191, 45, 193, 165, 255),
    VTX(0, 19, -5, 751, 1107, 3, 245, 137, 255),
    VTX(-12, 29, -13, 880, 1199, 219, 184, 168, 255),
    VTX(-16, 19, -1, 1008, 1246, 161, 250, 184, 255),
    VTX(-11, 8, -10, 897, 1366, 217, 37, 149, 255),
    VTX(-22, 9, 0, 1024, 1405, 143, 38, 0, 255),
    VTX(-22, 9, 0, 0, 1405, 143, 38, 0, 255),
    VTX(-11, 8, 10, 127, 1366, 217, 36, 107, 255),
    VTX(11, 8, 10, 394, 1388, 39, 34, 108, 255),
    VTX(22, 6, 0, 512, 1447, 115, 34, 0, 255),
    VTX(11, 8, -10, 630, 1388, 39, 34, 148, 255),
    VTX(-1, -21, -15, 774, 1843, 253, 221, 142, 255),
    VTX(-24, -18, -7, 973, 1746, 164, 234, 183, 255),
    VTX(-24, -18, -7, -51, 1746, 164, 234, 183, 255),
    VTX(-24, -18, 7, 51, 1746, 169, 215, 70, 255),
    VTX(-1, -21, 15, 250, 1843, 254, 228, 116, 255),
    VTX(23, -21, 7, 461, 1770, 82, 208, 72, 255),
    VTX(23, -21, -7, 563, 1770, 89, 228, 182, 255),
    VTX(-21, 29, 0, 0, 1226, 147, 208, 2, 255),
    VTX(-16, 19, -1, -16, 1246, 161, 250, 184, 255),
    VTX(-12, 29, -13, -144, 1199, 219, 184, 168, 255),
    VTX(-16, -29, -4, -41, 1890, 210, 151, 222, 255),
    VTX(14, -31, -4, 553, 1897, 35, 147, 222, 255),
    VTX(-2, -32, 5, 227, 1995, 249, 152, 58, 255),
    VTX(-16, -29, -4, 983, 1890, 210, 151, 222, 255),
}; 

static Vtx object_gi_dekupouchVtx_000530[3] = {
    VTX(11, 8, -10, -357, 903, 39, 34, 148, 255),
    VTX(0, 19, -5, 509, -45, 3, 245, 137, 255),
    VTX(16, 19, -1, -713, -215, 95, 1, 183, 255),
}; 

static Vtx object_gi_dekupouchVtx_000560[4] = {
    VTX(-11, 8, -10, 1331, 871, 217, 37, 149, 255),
    VTX(-16, 19, -1, 1727, -186, 161, 250, 184, 255),
    VTX(0, 19, -5, 509, -45, 3, 245, 137, 255),
    VTX(11, 8, -10, -357, 903, 39, 34, 148, 255),
}; 

static Vtx object_gi_dekupouchVtx_0005A0[32] = {
    VTX(25, 7, 8, 461, 1571, 14, 65, 99, 255),
    VTX(28, 1, 9, 462, 1628, 222, 1, 114, 255),
    VTX(28, 1, 4, 485, 1629, 81, 10, 169, 255),
    VTX(25, 16, -5, 545, 1458, 82, 11, 170, 255),
    VTX(27, 7, 4, 488, 1569, 114, 11, 221, 255),
    VTX(22, 5, 5, 477, 1600, 173, 186, 205, 255),
    VTX(13, 15, -2, 528, 1412, 74, 162, 5, 255),
    VTX(16, 16, -7, 578, 1420, 196, 153, 6, 255),
    VTX(16, 19, -5, 558, 1364, 60, 93, 45, 255),
    VTX(21, 13, -4, 541, 1477, 167, 185, 219, 255),
    VTX(24, 16, -1, 519, 1445, 7, 58, 104, 255),
    VTX(14, 19, -9, 601, 1364, 249, 22, 139, 255),
    VTX(25, 0, 6, 473, 1655, 153, 199, 238, 255),
    VTX(11, 19, -3, 548, 1323, 155, 53, 221, 255),
    VTX(15, 19, 0, 511, 1360, 93, 65, 38, 255),
    VTX(-28, 6, 5, 29, 1578, 196, 91, 50, 255),
    VTX(-27, 9, -4, -25, 1541, 144, 30, 228, 255),
    VTX(-28, 3, 2, 13, 1612, 197, 173, 194, 255),
    VTX(-23, 6, -4, 1000, 1583, 51, 166, 197, 255),
    VTX(-27, 9, -4, 999, 1541, 144, 30, 228, 255),
    VTX(-24, 13, -9, 970, 1486, 177, 22, 169, 255),
    VTX(-19, 19, -4, 993, 1379, 184, 66, 68, 255),
    VTX(-18, 16, -6, 974, 1431, 69, 162, 26, 255),
    VTX(-14, 15, -2, 1008, 1412, 200, 155, 31, 255),
    VTX(-23, 6, -4, -24, 1583, 51, 166, 197, 255),
    VTX(-26, 9, 0, 1024, 1542, 54, 69, 81, 255),
    VTX(-20, 11, -7, 970, 1512, 106, 202, 1, 255),
    VTX(-23, 14, -4, 994, 1474, 229, 41, 109, 255),
    VTX(-17, 19, -8, 950, 1376, 60, 27, 156, 255),
    VTX(-26, 3, 4, 28, 1618, 110, 245, 46, 255),
    VTX(-26, 9, 0, 0, 1542, 54, 69, 81, 255),
    VTX(-12, 19, -3, 988, 1323, 82, 55, 189, 255),
}; 

static Vtx object_gi_dekupouchVtx_0007A0[9] = {
    VTX(-19, 19, -4, -31, 1379, 184, 66, 68, 255),
    VTX(-15, 19, 0, 1, 1360, 185, 58, 77, 255),
    VTX(-12, 19, -3, -36, 1323, 82, 55, 189, 255),
    VTX(-14, 15, -2, -16, 1412, 200, 155, 31, 255),
    VTX(-12, 19, -3, 988, 1323, 82, 55, 189, 255),
    VTX(-14, 15, -2, 1008, 1412, 200, 155, 31, 255),
    VTX(-18, 16, -6, 974, 1431, 69, 162, 26, 255),
    VTX(-17, 19, -8, 950, 1376, 60, 27, 156, 255),
    VTX(-19, 19, -4, 993, 1379, 184, 66, 68, 255),
}; 

static Vtx object_gi_dekupouchVtx_000830[3] = {
    VTX(28, 1, 4, 520, 1514, 255, 107, 202, 255),
    VTX(28, 1, 9, 496, 1515, 244, 98, 68, 255),
    VTX(32, 1, 7, 507, 1519, 102, 60, 16, 255),
}; 

static Vtx object_gi_dekupouchVtx_000860[18] = {
    VTX(24, -3, 11, 480, 1571, 179, 250, 92, 255),
    VTX(28, 1, 9, 496, 1515, 244, 98, 68, 255),
    VTX(25, 0, 6, 511, 1532, 156, 64, 243, 255),
    VTX(26, -2, 1, 542, 1555, 209, 22, 148, 255),
    VTX(28, 1, 4, 520, 1514, 255, 107, 202, 255),
    VTX(32, 1, 7, 507, 1519, 102, 60, 16, 255),
    VTX(31, -7, 6, 512, 1606, 66, 157, 249, 255),
    VTX(-32, 5, 5, 1019, 1476, 151, 47, 224, 255),
    VTX(-28, 6, 5, 1018, 1460, 14, 111, 215, 255),
    VTX(-28, 3, 2, 1002, 1495, 237, 11, 139, 255),
    VTX(-26, 3, 4, -11, 1489, 100, 27, 196, 255),
    VTX(-28, 6, 5, -6, 1460, 14, 111, 215, 255),
    VTX(-24, 5, 11, 32, 1458, 83, 71, 48, 255),
    VTX(-26, 3, 4, 1013, 1489, 100, 27, 196, 255),
    VTX(-26, -1, 3, 1010, 1544, 38, 171, 181, 255),
    VTX(-32, 5, 5, -5, 1476, 151, 47, 224, 255),
    VTX(-26, -1, 3, -14, 1544, 38, 171, 181, 255),
    VTX(-31, -2, 9, 19, 1547, 188, 181, 63, 255),
}; 

static Vtx object_gi_dekupouchVtx_000980[7] = {
    VTX(0, 20, 0, 768, 193, 249, 119, 255, 255),
    VTX(-21, 29, 0, 768, 51, 46, 110, 245, 255),
    VTX(-12, 32, 13, 905, 0, 26, 97, 191, 255),
    VTX(-12, 29, -13, 631, 48, 17, 104, 56, 255),
    VTX(11, 32, -13, 400, 0, 220, 98, 58, 255),
    VTX(20, 32, 0, 1280, 0, 195, 103, 9, 255),
    VTX(11, 29, 13, 1136, 38, 229, 104, 204, 255),
}; 

static Vtx object_gi_dekupouchVtx_0009F0[11] = {
    VTX(-11, 8, -10, 1235, 1015, 204, 32, 153, 255),
    VTX(-16, 19, -1, 1643, -206, 160, 248, 186, 255),
    VTX(0, 19, -5, 536, -98, 3, 243, 137, 255),
    VTX(11, 8, -10, -293, 1043, 52, 29, 152, 255),
    VTX(16, 19, -1, -563, -264, 96, 0, 185, 255),
    VTX(-11, 8, 10, 450, 1412, 204, 32, 103, 255),
    VTX(0, 19, 5, 1571, -74, 255, 244, 119, 255),
    VTX(-16, 19, 2, -307, -102, 161, 252, 73, 255),
    VTX(11, 8, 10, 713, 1343, 52, 28, 104, 255),
    VTX(16, 19, 2, 1453, -78, 97, 254, 69, 255),
    VTX(0, 19, 5, -500, -71, 255, 244, 119, 255),
}; 

static Vtx object_gi_dekupouchVtx_000AA0[5] = {
    VTX(11, 8, 10, 886, -58, 39, 34, 108, 255),
    VTX(-1, -21, 15, 505, 1070, 254, 228, 116, 255),
    VTX(23, -21, 7, 1319, 1070, 82, 208, 72, 255),
    VTX(-11, 8, 10, 129, -62, 217, 36, 107, 255),
    VTX(-24, -18, 7, -275, 1011, 169, 215, 70, 255),
}; 

Gfx gGiBulletBagColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 160, 0, 255),
    gsDPSetEnvColor(20, 20, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBulletBag50ColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 100, 0, 255),
    gsDPSetEnvColor(20, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBulletBagStringColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 60, 40, 0, 255),
    gsDPSetEnvColor(100, 60, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBulletBag50StringColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 200, 120, 40, 255),
    gsDPSetEnvColor(100, 60, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBulletBagDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(1500, 1500, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_dekupouchVtx_000300[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_dekupouchVtx_000330[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(1, 13, 14, 0, 2, 14, 15, 0),
    gsSP2Triangles(4, 15, 16, 0, 6, 16, 17, 0),
    gsSP2Triangles(11, 18, 19, 0, 13, 20, 21, 0),
    gsSP2Triangles(14, 21, 22, 0, 15, 22, 23, 0),
    gsSP2Triangles(16, 23, 24, 0, 17, 24, 18, 0),
    gsSP2Triangles(21, 14, 13, 0, 19, 12, 11, 0),
    gsSP2Triangles(18, 11, 17, 0, 24, 17, 16, 0),
    gsSP2Triangles(22, 15, 14, 0, 23, 16, 15, 0),
    gsSP2Triangles(1, 0, 25, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 7, 0, 26, 25, 27, 0),
    gsSP2Triangles(13, 1, 26, 0, 14, 2, 1, 0),
    gsSP2Triangles(15, 4, 2, 0, 16, 6, 4, 0),
    gsSP2Triangles(28, 29, 30, 0, 18, 29, 31, 0),
    gsSP2Triangles(18, 31, 19, 0, 28, 21, 20, 0),
    gsSP2Triangles(21, 28, 30, 0, 22, 21, 30, 0),
    gsSP2Triangles(22, 30, 23, 0, 23, 30, 29, 0),
    gsSP2Triangles(29, 24, 23, 0, 24, 29, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_dekupouchTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 4, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 4, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 60),
    gsSPVertex(&object_gi_dekupouchVtx_000530[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_dekupouchVtx_000560[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 190, 200, 170, 255),
    gsDPSetEnvColor(160, 170, 140, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_dekupouchVtx_0005A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 2, 5, 0),
    gsSP2Triangles(9, 5, 0, 0, 8, 10, 3, 0),
    gsSP2Triangles(10, 0, 4, 0, 11, 3, 9, 0),
    gsSP2Triangles(12, 5, 2, 0, 5, 9, 3, 0),
    gsSP2Triangles(7, 9, 10, 0, 5, 12, 1, 0),
    gsSP2Triangles(10, 8, 7, 0, 0, 10, 9, 0),
    gsSP2Triangles(1, 0, 5, 0, 3, 11, 8, 0),
    gsSP2Triangles(4, 3, 10, 0, 2, 4, 0, 0),
    gsSP2Triangles(9, 7, 11, 0, 13, 11, 7, 0),
    gsSP2Triangles(13, 14, 8, 0, 8, 14, 6, 0),
    gsSP2Triangles(7, 6, 13, 0, 8, 11, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 17, 16, 0),
    gsSP2Triangles(25, 18, 26, 0, 20, 27, 21, 0),
    gsSP2Triangles(19, 25, 27, 0, 26, 20, 28, 0),
    gsSP2Triangles(17, 24, 29, 0, 20, 26, 18, 0),
    gsSP2Triangles(27, 26, 22, 0, 24, 30, 29, 0),
    gsSP2Triangles(22, 21, 27, 0, 26, 27, 25, 0),
    gsSP2Triangles(15, 29, 30, 0, 21, 28, 20, 0),
    gsSP2Triangles(27, 20, 19, 0, 16, 15, 30, 0),
    gsSP2Triangles(28, 22, 26, 0, 22, 28, 31, 0),
    gsSPVertex(&object_gi_dekupouchVtx_0007A0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_dekupouchVtx_000830[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_dekupouchVtx_000860[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(1, 0, 5, 0, 5, 3, 4, 0),
    gsSP2Triangles(2, 3, 0, 0, 6, 5, 0, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 3, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(9, 13, 14, 0, 15, 12, 11, 0),
    gsSP2Triangles(9, 14, 7, 0, 12, 16, 10, 0),
    gsSP2Triangles(12, 15, 17, 0, 17, 15, 16, 0),
    gsSP1Triangle(17, 16, 12, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 80, 50, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsSPTexture(1500, 1500, 0, 0, G_ON),
    gsSPVertex(&object_gi_dekupouchVtx_000980[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(5, 0, 6, 0, 6, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiBulletBagStringDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 190, 200, 170, 255),
    gsDPSetEnvColor(160, 170, 140, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_dekupouchTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 2, 4, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 60),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_dekupouchVtx_0009F0[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiBulletBagWritingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_dekupouchTex_000100),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_dekupouchVtx_000AA0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsSPEndDisplayList(),
}; 


