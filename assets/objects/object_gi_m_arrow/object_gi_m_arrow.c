#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_m_arrow.h"

static Vtx object_gi_m_arrowVtx_000000[3];
static Vtx object_gi_m_arrowVtx_000030[20];
static Vtx object_gi_m_arrowVtx_000170[8];
static Vtx object_gi_m_arrowVtx_0001F0[8];
static Vtx object_gi_m_arrowVtx_000270[12];
static Vtx object_gi_m_arrowVtx_000330[3];
static Vtx object_gi_m_arrowVtx_000360[93];
static Vtx object_gi_m_arrowVtx_000930[27];

static Vtx object_gi_m_arrowVtx_000000[3] = {
    VTX(-1, -1, 4, 249, 1061, 203, 91, 57, 255),
    VTX(-3, 1, -2, -148, 1158, 203, 91, 57, 255),
    VTX(-12, -2, -4, -116, 1441, 203, 91, 57, 255),
}; 

static Vtx object_gi_m_arrowVtx_000030[20] = {
    VTX(-3, 1, -2, 876, 1158, 23, 28, 142, 255),
    VTX(2, -2, -2, 663, 1156, 23, 28, 142, 255),
    VTX(0, -12, -4, 628, 1438, 23, 28, 142, 255),
    VTX(2, -2, -2, 663, 1156, 99, 221, 57, 255),
    VTX(-1, -1, 4, 249, 1061, 99, 221, 57, 255),
    VTX(-6, -7, 9, 256, 1393, 99, 221, 57, 255),
    VTX(-6, -7, 9, 256, 1393, 158, 37, 57, 255),
    VTX(-12, -2, -4, -116, 1441, 158, 37, 57, 255),
    VTX(-15, -18, 0, 760, 1986, 158, 37, 57, 255),
    VTX(-15, -18, 0, 760, 1986, 234, 229, 142, 255),
    VTX(-12, -2, -4, 908, 1441, 234, 229, 142, 255),
    VTX(0, -12, -4, 628, 1438, 234, 229, 142, 255),
    VTX(-15, -18, 0, 760, 1986, 54, 166, 57, 255),
    VTX(0, -12, -4, 628, 1438, 54, 166, 57, 255),
    VTX(-6, -7, 9, 256, 1393, 54, 166, 57, 255),
    VTX(-12, -2, -4, -116, 1441, 203, 91, 57, 255),
    VTX(-6, -7, 9, 256, 1393, 203, 91, 57, 255),
    VTX(-1, -1, 4, 249, 1061, 203, 91, 57, 255),
    VTX(-12, -2, -4, 908, 1441, 23, 28, 142, 255),
    VTX(0, -12, -4, 628, 1438, 99, 221, 57, 255),
}; 

static Vtx object_gi_m_arrowVtx_000170[8] = {
    VTX(5, 6, 3, 1019, -1697, 215, 44, 103, 255),
    VTX(3, 7, -1, 647, -1691, 215, 44, 153, 255),
    VTX(-3, 1, -2, 652, 1024, 170, 82, 0, 255),
    VTX(7, 4, -1, 380, -1702, 97, 186, 0, 255),
    VTX(2, -2, -2, 372, 1010, 51, 224, 153, 255),
    VTX(7, 4, -1, 1404, -1702, 97, 186, 0, 255),
    VTX(-1, -1, 4, 1024, 1017, 51, 224, 103, 255),
    VTX(-1, -1, 4, 0, 1017, 51, 224, 103, 255),
}; 

static Vtx object_gi_m_arrowVtx_0001F0[8] = {
    VTX(3, 7, -1, 647, 1024, 164, 76, 0, 255),
    VTX(5, 6, 3, 1034, 1024, 46, 218, 103, 255),
    VTX(28, 34, 3, 1014, 0, 254, 79, 90, 255),
    VTX(7, 4, -1, 368, 1023, 46, 218, 153, 255),
    VTX(26, 35, -1, 656, 1, 254, 79, 166, 255),
    VTX(5, 6, 3, 10, 1024, 46, 218, 103, 255),
    VTX(29, 32, -1, 377, 0, 118, 236, 0, 255),
    VTX(29, 32, -1, 1401, 0, 118, 236, 0, 255),
}; 

static Vtx object_gi_m_arrowVtx_000270[12] = {
    VTX(15, 19, 3, 0, 1024, 92, 180, 0, 255),
    VTX(28, 34, 3, 3654, 1024, 92, 180, 0, 255),
    VTX(26, 32, 10, 1990, 510, 92, 180, 0, 255),
    VTX(13, 20, -1, 0, 1024, 210, 38, 103, 255),
    VTX(26, 35, -1, 3654, 1024, 210, 38, 103, 255),
    VTX(20, 37, -5, 1990, 510, 210, 38, 103, 255),
    VTX(17, 17, -1, 0, 1024, 210, 38, 153, 255),
    VTX(29, 32, -1, 3654, 1024, 210, 38, 153, 255),
    VTX(32, 26, -5, 1990, 510, 210, 38, 153, 255),
    VTX(18, 22, 8, 80, 667, 92, 180, 0, 255),
    VTX(13, 27, -4, 80, 667, 210, 38, 103, 255),
    VTX(23, 18, -4, 80, 667, 210, 38, 153, 255),
}; 

static Vtx object_gi_m_arrowVtx_000330[3] = {
    VTX(-14, -29, 0, 512, 1920, 225, 147, 217, 255),
    VTX(-26, -21, 0, 0, 1973, 190, 157, 0, 255),
    VTX(-19, -22, -13, -258, 1857, 221, 151, 210, 255),
}; 

static Vtx object_gi_m_arrowVtx_000360[93] = {
    VTX(-2, -26, -10, 602, 1700, 31, 197, 156, 255),
    VTX(-14, -20, -18, 745, 1747, 31, 197, 156, 255),
    VTX(0, -11, -19, 705, 1507, 60, 217, 161, 255),
    VTX(13, -11, -8, 578, 1385, 109, 26, 214, 255),
    VTX(-1, 1, -20, 774, 1379, 82, 10, 170, 255),
    VTX(6, 7, -10, 748, 1183, 95, 50, 203, 255),
    VTX(0, -11, 19, 319, 1507, 76, 254, 92, 255),
    VTX(13, -11, 8, 446, 1385, 77, 213, 80, 255),
    VTX(-1, 1, 20, 250, 1379, 82, 10, 86, 255),
    VTX(-14, -20, -18, 745, 1747, 174, 249, 170, 255),
    VTX(-26, -2, -8, 957, 1665, 174, 249, 170, 255),
    VTX(-14, -3, -19, 831, 1553, 179, 24, 167, 255),
    VTX(-19, -22, -13, 766, 1857, 160, 238, 188, 255),
    VTX(0, -11, -19, 705, 1507, 251, 248, 137, 255),
    VTX(-14, -3, -19, 831, 1553, 251, 248, 137, 255),
    VTX(-1, 1, -20, 774, 1379, 250, 246, 137, 255),
    VTX(0, -11, 19, 319, 1507, 50, 200, 93, 255),
    VTX(-2, -26, 10, 422, 1700, 61, 194, 82, 255),
    VTX(-12, 8, -14, 887, 1400, 247, 70, 159, 255),
    VTX(-1, 1, -20, 774, 1379, 247, 70, 159, 255),
    VTX(-14, -3, -19, 831, 1553, 230, 50, 151, 255),
    VTX(-19, -22, -13, -258, 1857, 160, 238, 188, 255),
    VTX(-26, -21, 0, 0, 1973, 140, 241, 229, 255),
    VTX(-26, -2, -8, -67, 1665, 140, 241, 229, 255),
    VTX(-26, -2, -8, 957, 1665, 184, 60, 181, 255),
    VTX(-12, 8, -14, 887, 1400, 196, 73, 183, 255),
    VTX(-14, -29, 0, 512, 1920, 225, 147, 39, 255),
    VTX(3, -30, 0, 512, 1684, 249, 142, 37, 255),
    VTX(-2, -26, 10, 422, 1700, 241, 148, 49, 255),
    VTX(-19, -22, 13, 258, 1857, 221, 151, 46, 255),
    VTX(-26, -21, 0, 0, 1973, 151, 231, 52, 255),
    VTX(-19, -22, 13, 258, 1857, 160, 238, 68, 255),
    VTX(-26, -2, 8, 67, 1665, 153, 245, 59, 255),
    VTX(-26, -2, -8, -67, 1665, 151, 57, 0, 255),
    VTX(-26, -2, 8, 67, 1665, 151, 57, 0, 255),
    VTX(-17, 16, 0, 0, 1381, 151, 57, 0, 255),
    VTX(-14, -29, 0, 512, 1920, 225, 147, 39, 255),
    VTX(-19, -22, 13, 258, 1857, 221, 151, 46, 255),
    VTX(-26, -21, 0, 0, 1973, 190, 157, 0, 255),
    VTX(-26, -2, -8, -67, 1665, 140, 241, 229, 255),
    VTX(-26, -21, 0, 0, 1973, 140, 241, 229, 255),
    VTX(-14, -20, 18, 279, 1747, 174, 249, 86, 255),
    VTX(-26, -2, 8, 67, 1665, 184, 60, 75, 255),
    VTX(-14, -3, 19, 193, 1553, 195, 34, 97, 255),
    VTX(-12, 8, 14, 137, 1400, 225, 74, 89, 255),
    VTX(10, 6, 0, 512, 1093, 114, 27, 22, 255),
    VTX(6, 7, 10, 276, 1183, 98, 29, 62, 255),
    VTX(13, -11, 8, 446, 1385, 114, 27, 22, 255),
    VTX(-17, 16, 0, 1024, 1381, 202, 83, 190, 255),
    VTX(-12, 8, -14, 887, 1400, 196, 73, 183, 255),
    VTX(-26, -2, -8, 957, 1665, 184, 60, 181, 255),
    VTX(-14, -20, 18, 279, 1747, 31, 197, 100, 255),
    VTX(-2, -26, 10, 422, 1700, 61, 194, 82, 255),
    VTX(0, -11, 19, 319, 1507, 50, 200, 93, 255),
    VTX(-14, -3, 19, 193, 1553, 251, 248, 119, 255),
    VTX(0, -11, 19, 319, 1507, 251, 248, 119, 255),
    VTX(-1, 1, 20, 250, 1379, 250, 246, 119, 255),
    VTX(13, -11, -8, 578, 1385, 104, 197, 0, 255),
    VTX(13, -11, 8, 446, 1385, 104, 197, 0, 255),
    VTX(3, -30, 0, 512, 1684, 104, 197, 0, 255),
    VTX(-14, -20, 18, 279, 1747, 253, 250, 119, 255),
    VTX(-2, -26, 10, 422, 1700, 61, 194, 82, 255),
    VTX(3, -30, 0, 512, 1684, 80, 187, 56, 255),
    VTX(13, -11, 8, 446, 1385, 77, 213, 80, 255),
    VTX(6, 7, 10, 276, 1183, 98, 29, 62, 255),
    VTX(-1, 1, 20, 250, 1379, 82, 10, 86, 255),
    VTX(13, -11, 8, 446, 1385, 87, 23, 79, 255),
    VTX(-14, -29, 0, 512, 1920, 225, 147, 217, 255),
    VTX(-2, -26, -10, 602, 1700, 241, 148, 207, 255),
    VTX(3, -30, 0, 512, 1684, 249, 142, 219, 255),
    VTX(-19, -22, 13, 258, 1857, 221, 151, 46, 255),
    VTX(-2, -26, 10, 422, 1700, 241, 148, 49, 255),
    VTX(-14, -20, 18, 279, 1747, 239, 153, 59, 255),
    VTX(3, -30, 0, 512, 1684, 80, 187, 200, 255),
    VTX(-2, -26, -10, 602, 1700, 74, 195, 185, 255),
    VTX(13, -11, -8, 578, 1385, 77, 213, 176, 255),
    VTX(13, -11, 8, 446, 1385, 114, 27, 22, 255),
    VTX(13, -11, -8, 578, 1385, 109, 26, 214, 255),
    VTX(10, 6, 0, 512, 1093, 114, 27, 22, 255),
    VTX(-26, -2, 8, 67, 1665, 153, 245, 59, 255),
    VTX(-14, -20, 18, 279, 1747, 174, 249, 86, 255),
    VTX(-14, -3, 19, 193, 1553, 195, 34, 97, 255),
    VTX(-19, -22, -13, 766, 1857, 221, 151, 210, 255),
    VTX(0, -11, -19, 705, 1507, 60, 217, 161, 255),
    VTX(6, 7, -10, 748, 1183, 95, 50, 203, 255),
    VTX(10, 6, 0, 512, 1093, 93, 73, 241, 255),
    VTX(-12, 8, 14, 137, 1400, 183, 68, 65, 255),
    VTX(-17, 16, 0, 0, 1381, 202, 83, 66, 255),
    VTX(-26, -2, 8, 67, 1665, 184, 60, 75, 255),
    VTX(-14, -20, -18, 745, 1747, 239, 153, 197, 255),
    VTX(-14, -3, -19, 831, 1553, 251, 248, 137, 255),
    VTX(0, -11, -19, 705, 1507, 251, 248, 137, 255),
    VTX(-14, -20, -18, 745, 1747, 253, 250, 137, 255),
}; 

static Vtx object_gi_m_arrowVtx_000930[27] = {
    VTX(-1, 1, -20, 774, 1379, 82, 10, 170, 255),
    VTX(13, -11, -8, 578, 1385, 77, 213, 176, 255),
    VTX(0, -11, -19, 705, 1507, 60, 217, 161, 255),
    VTX(-1, 1, 20, 250, 1379, 230, 50, 105, 255),
    VTX(-12, 8, 14, 137, 1400, 225, 74, 89, 255),
    VTX(-14, -3, 19, 193, 1553, 195, 34, 97, 255),
    VTX(3, 13, 0, 0, 1094, 32, 113, 25, 255),
    VTX(-7, 14, -7, -76, 1263, 16, 118, 0, 255),
    VTX(-7, 14, 7, 76, 1263, 16, 118, 0, 255),
    VTX(-1, 1, 20, 250, 1379, 20, 87, 79, 255),
    VTX(-7, 14, 7, 76, 1263, 14, 96, 70, 255),
    VTX(6, 7, 10, 276, 1183, 53, 93, 52, 255),
    VTX(-17, 16, 0, 0, 1381, 202, 83, 66, 255),
    VTX(-17, 16, 0, 0, 1381, 15, 119, 0, 255),
    VTX(-17, 16, 0, 1024, 1381, 202, 83, 190, 255),
    VTX(-7, 14, -7, 948, 1263, 244, 92, 181, 255),
    VTX(-12, 8, -14, 887, 1400, 196, 73, 183, 255),
    VTX(-1, 1, -20, 774, 1379, 247, 70, 159, 255),
    VTX(-12, 8, -14, 887, 1400, 247, 70, 159, 255),
    VTX(-1, 1, -20, 774, 1379, 32, 88, 182, 255),
    VTX(-7, 14, -7, 948, 1263, 39, 95, 194, 255),
    VTX(6, 7, -10, 748, 1183, 39, 95, 194, 255),
    VTX(6, 7, -10, -276, 1183, 39, 95, 194, 255),
    VTX(-7, 14, -7, -76, 1263, 39, 95, 194, 255),
    VTX(3, 13, 0, 0, 1094, 71, 95, 239, 255),
    VTX(10, 6, 0, 512, 1093, 93, 73, 241, 255),
    VTX(6, 7, -10, -276, 1183, 95, 50, 203, 255),
}; 

Gfx gGiMagicArrowDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(60, 80, 120, 255),
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
    gsSPVertex(&object_gi_m_arrowVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_m_arrowVtx_000030[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(2, 18, 0, 0, 5, 19, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(60, 60, 90, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_m_arrowVtx_000170[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 0, 6, 0, 2, 6, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 7, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 230, 190, 70, 255),
    gsDPSetEnvColor(160, 110, 60, 255),
    gsSPVertex(&object_gi_m_arrowVtx_0001F0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 4, 2, 7, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP1Triangle(7, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(160, 150, 170, 255),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_m_arrowVtx_000270[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(5, 10, 3, 0, 8, 11, 6, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiFireArrowColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 200, 0, 255),
    gsDPSetEnvColor(255, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiIceArrowColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 0, 200, 255, 255),
    gsDPSetEnvColor(0, 0, 255, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiLightArrowColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(255, 255, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiArrowMagicDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_m_arrowVtx_000330[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_m_arrowVtx_000360[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 9, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(7, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 11, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 29, 26, 0),
    gsSPVertex(&object_gi_m_arrowVtx_000360[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 10, 0),
    gsSP2Triangles(11, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 25, 24, 30, 0),
    gsSPVertex(&object_gi_m_arrowVtx_000360[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 6, 21, 7, 0),
    gsSP2Triangles(22, 14, 13, 0, 23, 24, 16, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 7, 21, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_gi_m_arrowVtx_000930[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 4, 0),
    gsSP2Triangles(6, 10, 11, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 4, 10, 0, 8, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 24, 0, 11, 25, 24, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000E78[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


