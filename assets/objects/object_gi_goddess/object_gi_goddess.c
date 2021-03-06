#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_goddess.h"

static Vtx object_gi_goddessVtx_000000[3];
static Vtx object_gi_goddessVtx_000030[17];
static Vtx object_gi_goddessVtx_000140[3];
static Vtx object_gi_goddessVtx_000170[63];
static Vtx object_gi_goddessVtx_000560[32];
static Vtx object_gi_goddessVtx_000760[28];

static Vtx object_gi_goddessVtx_000000[3] = {
    VTX(22, 0, 22, 384, 1536, 67, 73, 67, 255),
    VTX(22, 0, -22, 640, 1536, 67, 73, 189, 255),
    VTX(0, 37, 0, 512, 1024, 62, 102, 0, 255),
}; 

static Vtx object_gi_goddessVtx_000030[17] = {
    VTX(-22, 0, 22, 128, 1536, 189, 73, 67, 255),
    VTX(22, 0, 22, 384, 1536, 67, 73, 67, 255),
    VTX(0, 37, 0, 256, 1024, 62, 102, 0, 255),
    VTX(0, 37, 0, 0, 1024, 151, 57, 0, 255),
    VTX(-22, 0, -22, -128, 1536, 189, 73, 189, 255),
    VTX(-22, 0, -22, 896, 1536, 189, 73, 189, 255),
    VTX(0, 37, 0, 768, 1024, 62, 102, 0, 255),
    VTX(22, 0, -22, 640, 1536, 67, 73, 189, 255),
    VTX(0, -37, 0, 512, 1024, 105, 199, 0, 255),
    VTX(22, 0, -22, 640, 1536, 67, 183, 189, 255),
    VTX(22, 0, 22, 384, 1536, 67, 183, 67, 255),
    VTX(0, -37, 0, 256, 1024, 194, 154, 0, 255),
    VTX(-22, 0, 22, 128, 1536, 189, 183, 67, 255),
    VTX(-22, 0, -22, -128, 1536, 189, 183, 189, 255),
    VTX(0, -37, 0, 0, 1024, 194, 154, 0, 255),
    VTX(0, -37, 0, 768, 1024, 194, 154, 0, 255),
    VTX(-22, 0, -22, 896, 1536, 189, 183, 189, 255),
}; 

static Vtx object_gi_goddessVtx_000140[3] = {
    VTX(0, 15, 0, 512, 1024, 0, 120, 0, 255),
    VTX(8, 13, 0, 512, 1204, 65, 101, 0, 255),
    VTX(2, 13, -8, 717, 1204, 20, 101, 195, 255),
}; 

static Vtx object_gi_goddessVtx_000170[63] = {
    VTX(8, 13, 0, 512, 1204, 65, 101, 0, 255),
    VTX(13, 7, 0, 512, 1385, 107, 53, 0, 255),
    VTX(11, 7, -8, 614, 1385, 84, 60, 195, 255),
    VTX(2, 13, -8, 717, 1204, 20, 101, 195, 255),
    VTX(4, 7, -13, 717, 1385, 33, 53, 154, 255),
    VTX(14, 0, 5, 461, 1536, 114, 0, 37, 255),
    VTX(14, 0, -5, 563, 1536, 114, 0, 219, 255),
    VTX(11, -7, 8, 410, 1687, 87, 203, 63, 255),
    VTX(13, -7, 0, 512, 1687, 103, 196, 0, 255),
    VTX(11, -7, -8, 614, 1687, 87, 203, 193, 255),
    VTX(0, 15, 0, 717, 1024, 0, 120, 0, 255),
    VTX(2, 13, -8, 717, 1204, 20, 101, 195, 255),
    VTX(-6, 13, -5, 922, 1204, 204, 101, 218, 255),
    VTX(4, 7, -13, 717, 1385, 33, 53, 154, 255),
    VTX(-4, 7, -13, 819, 1385, 224, 60, 158, 255),
    VTX(-11, 7, -8, 922, 1385, 169, 53, 193, 255),
    VTX(9, 0, -12, 666, 1536, 70, 0, 159, 255),
    VTX(0, 0, -15, 768, 1536, 0, 0, 136, 255),
    VTX(11, -7, -8, 614, 1687, 87, 203, 193, 255),
    VTX(4, -7, -13, 717, 1687, 32, 196, 158, 255),
    VTX(-4, -7, -13, 819, 1687, 223, 203, 154, 255),
    VTX(0, 15, 0, -102, 1024, 0, 120, 0, 255),
    VTX(-6, 13, -5, -102, 1204, 204, 101, 218, 255),
    VTX(-6, 13, 5, 102, 1204, 204, 101, 38, 255),
    VTX(-6, 13, -5, 922, 1204, 204, 101, 218, 255),
    VTX(-11, 7, -8, 922, 1385, 169, 53, 193, 255),
    VTX(-13, 7, 0, 1024, 1385, 153, 60, 0, 255),
    VTX(-13, 7, 0, 0, 1385, 153, 60, 0, 255),
    VTX(-11, 7, 8, 102, 1385, 169, 53, 63, 255),
    VTX(-9, 0, -12, 870, 1536, 186, 0, 159, 255),
    VTX(-14, 0, -5, 973, 1536, 142, 0, 219, 255),
    VTX(-9, 0, -12, 870, 1536, 186, 0, 159, 255),
    VTX(-4, -7, -13, 819, 1687, 223, 203, 154, 255),
    VTX(-11, -7, -8, 922, 1687, 172, 196, 195, 255),
    VTX(-14, 0, -5, 973, 1536, 142, 0, 219, 255),
    VTX(-13, -7, 0, 1024, 1687, 149, 203, 0, 255),
    VTX(0, 15, 0, 102, 1024, 0, 120, 0, 255),
    VTX(-6, 13, 5, 102, 1204, 204, 101, 38, 255),
    VTX(2, 13, 8, 307, 1204, 20, 101, 61, 255),
    VTX(-11, 7, 8, 102, 1385, 169, 53, 63, 255),
    VTX(-4, 7, 13, 205, 1385, 224, 60, 98, 255),
    VTX(4, 7, 13, 307, 1385, 33, 53, 102, 255),
    VTX(-14, 0, 5, 51, 1536, 142, 0, 37, 255),
    VTX(-9, 0, 12, 154, 1536, 186, 0, 97, 255),
    VTX(-13, -7, 0, 0, 1687, 149, 203, 0, 255),
    VTX(-11, -7, 8, 102, 1687, 172, 196, 61, 255),
    VTX(-4, -7, 13, 205, 1687, 223, 203, 102, 255),
    VTX(0, 15, 0, 307, 1024, 0, 120, 0, 255),
    VTX(2, 13, 8, 307, 1204, 20, 101, 61, 255),
    VTX(8, 13, 0, 512, 1204, 65, 101, 0, 255),
    VTX(11, 7, 8, 410, 1385, 84, 60, 61, 255),
    VTX(13, 7, 0, 512, 1385, 107, 53, 0, 255),
    VTX(4, 7, 13, 307, 1385, 33, 53, 102, 255),
    VTX(0, 0, 15, 256, 1536, 0, 0, 120, 255),
    VTX(9, 0, 12, 358, 1536, 70, 0, 97, 255),
    VTX(-4, -7, 13, 205, 1687, 223, 203, 102, 255),
    VTX(4, -7, 13, 307, 1687, 32, 196, 98, 255),
    VTX(11, -7, 8, 410, 1687, 87, 203, 63, 255),
    VTX(0, -15, 0, 1024, 2048, 0, 136, 0, 255),
    VTX(-8, -13, 0, 1024, 1868, 191, 155, 0, 255),
    VTX(-2, -13, -8, 819, 1868, 236, 155, 195, 255),
    VTX(-13, -7, 0, 1024, 1687, 149, 203, 0, 255),
    VTX(-11, -7, -8, 922, 1687, 172, 196, 195, 255),
}; 

static Vtx object_gi_goddessVtx_000560[32] = {
    VTX(-2, -13, -8, 819, 1868, 236, 155, 195, 255),
    VTX(-11, -7, -8, 922, 1687, 172, 196, 195, 255),
    VTX(-4, -7, -13, 819, 1687, 223, 203, 154, 255),
    VTX(-13, -7, 0, 0, 1687, 149, 203, 0, 255),
    VTX(-14, 0, 5, 51, 1536, 142, 0, 37, 255),
    VTX(-14, 0, -5, -51, 1536, 142, 0, 219, 255),
    VTX(-11, 7, 8, 102, 1385, 169, 53, 63, 255),
    VTX(-13, 7, 0, 0, 1385, 153, 60, 0, 255),
    VTX(-14, 0, -5, 973, 1536, 142, 0, 219, 255),
    VTX(-13, 7, 0, 1024, 1385, 153, 60, 0, 255),
    VTX(-11, 7, -8, 922, 1385, 169, 53, 193, 255),
    VTX(0, -15, 0, 819, 2048, 0, 136, 0, 255),
    VTX(-2, -13, -8, 819, 1868, 236, 155, 195, 255),
    VTX(6, -13, -5, 614, 1868, 52, 155, 218, 255),
    VTX(-4, -7, -13, 819, 1687, 223, 203, 154, 255),
    VTX(4, -7, -13, 717, 1687, 32, 196, 158, 255),
    VTX(11, -7, -8, 614, 1687, 87, 203, 193, 255),
    VTX(-9, 0, -12, 870, 1536, 186, 0, 159, 255),
    VTX(0, 0, -15, 768, 1536, 0, 0, 136, 255),
    VTX(-11, 7, -8, 922, 1385, 169, 53, 193, 255),
    VTX(-4, 7, -13, 819, 1385, 224, 60, 158, 255),
    VTX(4, 7, -13, 717, 1385, 33, 53, 154, 255),
    VTX(0, -15, 0, 614, 2048, 0, 136, 0, 255),
    VTX(6, -13, -5, 614, 1868, 52, 155, 218, 255),
    VTX(6, -13, 5, 410, 1868, 52, 155, 38, 255),
    VTX(11, -7, -8, 614, 1687, 87, 203, 193, 255),
    VTX(13, -7, 0, 512, 1687, 103, 196, 0, 255),
    VTX(11, -7, 8, 410, 1687, 87, 203, 63, 255),
    VTX(9, 0, -12, 666, 1536, 70, 0, 159, 255),
    VTX(14, 0, -5, 563, 1536, 114, 0, 219, 255),
    VTX(4, 7, -13, 717, 1385, 33, 53, 154, 255),
    VTX(11, 7, -8, 614, 1385, 84, 60, 195, 255),
}; 

static Vtx object_gi_goddessVtx_000760[28] = {
    VTX(14, 0, -5, 563, 1536, 114, 0, 219, 255),
    VTX(11, 7, -8, 614, 1385, 84, 60, 195, 255),
    VTX(13, 7, 0, 512, 1385, 107, 53, 0, 255),
    VTX(0, -15, 0, 410, 2048, 0, 136, 0, 255),
    VTX(6, -13, 5, 410, 1868, 52, 155, 38, 255),
    VTX(-2, -13, 8, 205, 1868, 236, 155, 61, 255),
    VTX(11, -7, 8, 410, 1687, 87, 203, 63, 255),
    VTX(4, -7, 13, 307, 1687, 32, 196, 98, 255),
    VTX(-4, -7, 13, 205, 1687, 223, 203, 102, 255),
    VTX(14, 0, 5, 461, 1536, 114, 0, 37, 255),
    VTX(9, 0, 12, 358, 1536, 70, 0, 97, 255),
    VTX(13, 7, 0, 512, 1385, 107, 53, 0, 255),
    VTX(11, 7, 8, 410, 1385, 84, 60, 61, 255),
    VTX(4, 7, 13, 307, 1385, 33, 53, 102, 255),
    VTX(0, -15, 0, 205, 2048, 0, 136, 0, 255),
    VTX(-2, -13, 8, 205, 1868, 236, 155, 61, 255),
    VTX(-8, -13, 0, 0, 1868, 191, 155, 0, 255),
    VTX(-4, -7, 13, 205, 1687, 223, 203, 102, 255),
    VTX(-11, -7, 8, 102, 1687, 172, 196, 61, 255),
    VTX(-13, -7, 0, 0, 1687, 149, 203, 0, 255),
    VTX(0, 0, 15, 256, 1536, 0, 0, 120, 255),
    VTX(-9, 0, 12, 154, 1536, 186, 0, 97, 255),
    VTX(4, 7, 13, 307, 1385, 33, 53, 102, 255),
    VTX(-4, 7, 13, 205, 1385, 224, 60, 98, 255),
    VTX(-11, 7, 8, 102, 1385, 169, 53, 63, 255),
    VTX(2, 13, 8, 307, 1204, 20, 101, 61, 255),
    VTX(4, 7, 13, 307, 1385, 33, 53, 102, 255),
    VTX(11, 7, 8, 410, 1385, 84, 60, 61, 255),
}; 

Gfx gGiMagicSpellDiamondDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 50, 200, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(6000, 6000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_goddessVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_goddessVtx_000030[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 14, 12, 0),
    gsSP1Triangle(9, 15, 16, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiDinsFireColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 200, 0, 255),
    gsDPSetEnvColor(200, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiFaroresWindColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(0, 150, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiNayrusLoveColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 170, 255, 255, 255),
    gsDPSetEnvColor(0, 0, 200, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiMagicSpellOrbDL[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 1, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_goddessVtx_000140[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_goddessVtx_000170[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 12, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 22, 27, 23, 0),
    gsSP2Triangles(23, 27, 28, 0, 25, 29, 30, 0),
    gsSPVertex(&object_gi_goddessVtx_000170[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 12, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 25, 23, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 30, 31, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&object_gi_goddessVtx_000560[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(13, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 18, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 28, 29, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&object_gi_goddessVtx_000760[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 10, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 18, 16, 0),
    gsSP2Triangles(16, 18, 19, 0, 17, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000C48[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


