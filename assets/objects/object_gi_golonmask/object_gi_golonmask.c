#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_golonmask.h"

static Vtx object_gi_golonmaskVtx_000F48[32];
static Vtx object_gi_golonmaskVtx_001148[30];
static Vtx object_gi_golonmaskVtx_001328[14];
static Vtx object_gi_golonmaskVtx_001408[6];
static Vtx object_gi_golonmaskVtx_001468[9];

u64 object_gi_golonmaskTex_000000[] = {
#include "assets/objects/object_gi_golonmask//object_gi_golonmaskTex_000000.rgb5a1.inc.c"
};

static u8 unaccounted_000200[8] = {
    0x00, 0x00, 0x00, 0x41, 0x67, 0x67, 0x67, 0x67, 
}; 

u64 object_gi_golonmaskTex_000208[] = {
#include "assets/objects/object_gi_golonmask//object_gi_golonmaskTex_000208.ci8.inc.c"
};

u64 object_gi_golonmaskTex_000248[] = {
#include "assets/objects/object_gi_golonmask//object_gi_golonmaskTex_000248.ci8.inc.c"
};

u64 object_gi_golonmaskTex_000348[] = {
#include "assets/objects/object_gi_golonmask//object_gi_golonmaskTex_000348.ci8.inc.c"
};

u64 object_gi_golonmaskTex_000748[] = {
#include "assets/objects/object_gi_golonmask//object_gi_golonmaskTex_000748.ci8.inc.c"
};

static Vtx object_gi_golonmaskVtx_000F48[32] = {
    VTX(23, -18, -15, -3098, 6214, 40, 144, 253, 255),
    VTX(1, -24, -21, -61, 7154, 1, 138, 21, 255),
    VTX(1, -16, -27, -55, 7974, 1, 255, 137, 255),
    VTX(-21, -18, -15, 3157, 6214, 219, 143, 251, 255),
    VTX(-19, -10, -21, 2898, 7115, 217, 29, 147, 255),
    VTX(21, -10, -21, -2833, 7115, 42, 31, 148, 255),
    VTX(-36, -11, -7, 5220, 5089, 156, 194, 235, 255),
    VTX(-33, 2, -10, 4792, 5483, 166, 62, 207, 255),
    VTX(36, -11, -7, -4964, 5089, 91, 179, 1, 255),
    VTX(33, 2, -10, -4536, 5483, 76, 71, 198, 255),
    VTX(31, -11, -7, -4270, 5089, 174, 170, 10, 255),
    VTX(28, 2, -10, -3870, 5483, 173, 0, 170, 255),
    VTX(21, -8, -18, -2833, 6722, 195, 103, 255, 255),
    VTX(-31, -11, -7, 4526, 5089, 69, 164, 32, 255),
    VTX(-21, -15, -12, 3157, 5821, 37, 240, 113, 255),
    VTX(-19, -8, -18, 2898, 6722, 57, 105, 3, 255),
    VTX(-28, 2, -10, 4126, 5483, 85, 0, 84, 255),
    VTX(23, -15, -12, -3098, 5821, 217, 236, 111, 255),
    VTX(1, -13, -25, -55, 7582, 255, 117, 24, 255),
    VTX(1, -21, -19, -61, 6761, 255, 221, 114, 255),
    VTX(-28, 2, -10, 4126, 5483, 28, 18, 141, 255),
    VTX(-18, 10, 9, -27, -497, 191, 81, 59, 255),
    VTX(-33, 2, -10, 484, 223, 166, 62, 207, 255),
    VTX(-29, -9, 15, -372, 346, 176, 40, 79, 255),
    VTX(-18, 10, 9, -30, -242, 191, 81, 59, 255),
    VTX(-29, -9, 15, -98, 367, 176, 40, 79, 255),
    VTX(0, 13, 14, 494, -308, 0, 67, 99, 255),
    VTX(0, -13, 27, 256, 256, 0, 9, 119, 255),
    VTX(0, -3, 22, 240, -264, 0, 62, 102, 255),
    VTX(-17, -14, 24, -498, 323, 212, 0, 111, 255),
    VTX(29, -9, 15, -4002, 1956, 80, 40, 79, 255),
    VTX(29, -20, 14, -3928, 2171, 48, 147, 9, 255),
}; 

static Vtx object_gi_golonmaskVtx_001148[30] = {
    VTX(18, 17, -12, -2434, 5746, 79, 85, 225, 255),
    VTX(18, 10, 9, -2456, 2798, 65, 81, 59, 255),
    VTX(33, 2, -10, -4536, 5483, 76, 71, 198, 255),
    VTX(29, -9, 15, -4002, 1956, 80, 40, 79, 255),
    VTX(36, -11, -7, -4964, 5089, 91, 179, 1, 255),
    VTX(-36, -11, -7, 5220, 5089, 156, 194, 235, 255),
    VTX(-29, -9, 15, 4258, 1956, 176, 40, 79, 255),
    VTX(-33, 2, -10, 4792, 5483, 166, 62, 207, 255),
    VTX(-18, 10, 9, 2712, 2798, 191, 81, 59, 255),
    VTX(-18, 17, -12, 2690, 5746, 181, 88, 30, 255),
    VTX(-29, -20, 14, 4184, 2171, 208, 147, 9, 255),
    VTX(0, -27, 16, 128, 1808, 0, 149, 202, 255),
    VTX(0, 1, 6, 128, 3259, 0, 199, 151, 255),
    VTX(29, -20, 14, -3928, 2171, 48, 147, 9, 255),
    VTX(18, 17, -12, -2434, 5746, 196, 219, 159, 255),
    VTX(28, 2, -10, -3870, 5483, 173, 0, 170, 255),
    VTX(28, 2, -10, -3870, 5483, 0, 242, 137, 255),
    VTX(-18, 17, -12, 2690, 5746, 41, 226, 148, 255),
    VTX(-28, 2, -10, 4126, 5483, 28, 18, 141, 255),
    VTX(31, -11, -7, -4270, 5089, 174, 170, 10, 255),
    VTX(-31, -11, -7, 4526, 5089, 69, 164, 32, 255),
    VTX(17, -14, 24, -498, 323, 44, 0, 111, 255),
    VTX(0, -3, 22, 240, -264, 0, 62, 102, 255),
    VTX(0, -13, 27, 256, 256, 0, 9, 119, 255),
    VTX(29, -9, 15, -372, 346, 80, 40, 79, 255),
    VTX(33, 2, -10, 484, 223, 76, 71, 198, 255),
    VTX(18, 10, 9, -27, -497, 65, 81, 59, 255),
    VTX(0, 13, 14, 494, -308, 0, 67, 99, 255),
    VTX(29, -9, 15, -98, 367, 80, 40, 79, 255),
    VTX(18, 10, 9, -30, -242, 65, 81, 59, 255),
}; 

static Vtx object_gi_golonmaskVtx_001328[14] = {
    VTX(-18, 10, 9, -6, 616, 191, 81, 59, 255),
    VTX(0, 13, 14, 651, 555, 0, 67, 99, 255),
    VTX(0, 27, -2, 445, -267, 22, 110, 41, 255),
    VTX(18, 17, -12, 878, 502, 196, 219, 159, 255),
    VTX(0, 1, 6, -230, 898, 0, 199, 151, 255),
    VTX(0, 27, -2, 527, -49, 190, 228, 161, 255),
    VTX(0, 27, -2, 379, -202, 22, 110, 41, 255),
    VTX(18, 10, 9, -215, 616, 65, 81, 59, 255),
    VTX(18, 17, -12, 703, 610, 79, 85, 225, 255),
    VTX(18, 10, 9, -6, 616, 65, 81, 59, 255),
    VTX(-18, 17, -12, 703, 610, 181, 88, 30, 255),
    VTX(-18, 10, 9, -215, 616, 191, 81, 59, 255),
    VTX(0, 27, -2, 527, -49, 22, 110, 41, 255),
    VTX(-18, 17, -12, 878, 502, 41, 226, 148, 255),
}; 

static Vtx object_gi_golonmaskVtx_001408[6] = {
    VTX(0, 13, 14, 1812, -1081, 0, 67, 99, 255),
    VTX(-29, -9, 15, -839, 617, 176, 40, 79, 255),
    VTX(0, -3, 22, 1812, 473, 0, 62, 102, 255),
    VTX(17, -14, 24, 283, 1392, 44, 0, 111, 255),
    VTX(29, -9, 15, -839, 617, 80, 40, 79, 255),
    VTX(-17, -14, 24, 283, 1392, 212, 0, 111, 255),
}; 

static Vtx object_gi_golonmaskVtx_001468[9] = {
    VTX(0, -27, 16, 1866, 1485, 0, 149, 202, 255),
    VTX(0, -25, 23, 2048, 1024, 0, 173, 86, 255),
    VTX(-29, -20, 14, -327, 1033, 208, 147, 9, 255),
    VTX(-29, -9, 15, -447, -140, 176, 40, 79, 255),
    VTX(-17, -14, 24, 721, 25, 212, 0, 111, 255),
    VTX(0, -13, 27, 2048, -270, 0, 9, 119, 255),
    VTX(17, -14, 24, 721, 25, 44, 0, 111, 255),
    VTX(29, -20, 14, -327, 1033, 48, 147, 9, 255),
    VTX(29, -9, 15, -447, -140, 80, 40, 79, 255),
}; 

Gfx gGiGoronMaskDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_golonmaskTex_000208),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 31, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_gi_golonmaskTex_000000),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_golonmaskVtx_000F48[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(2, 5, 0, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 3, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 5, 0, 8, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 10, 12, 0),
    gsSP2Triangles(17, 12, 18, 0, 18, 19, 17, 0),
    gsSP2Triangles(18, 15, 14, 0, 14, 19, 18, 0),
    gsSP2Triangles(20, 15, 4, 0, 15, 18, 2, 0),
    gsSP2Triangles(18, 12, 5, 0, 12, 11, 9, 0),
    gsSP2Triangles(3, 14, 13, 0, 1, 19, 14, 0),
    gsSP2Triangles(0, 17, 19, 0, 8, 10, 17, 0),
    gsSP2Triangles(4, 7, 20, 0, 2, 4, 15, 0),
    gsSP2Triangles(5, 2, 18, 0, 9, 5, 12, 0),
    gsSP2Triangles(13, 6, 3, 0, 14, 3, 1, 0),
    gsSP2Triangles(19, 1, 0, 0, 17, 0, 8, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 8, 30, 31, 0),
    gsSPVertex(&object_gi_golonmaskVtx_001148[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 6, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 11, 10, 0, 12, 14, 15, 0),
    gsSP2Triangles(0, 2, 16, 0, 17, 12, 18, 0),
    gsSP2Triangles(17, 18, 7, 0, 19, 13, 12, 0),
    gsSP2Triangles(4, 13, 19, 0, 15, 19, 12, 0),
    gsSP2Triangles(12, 10, 20, 0, 10, 5, 20, 0),
    gsSP2Triangles(12, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_golonmaskTex_000248),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsSPVertex(&object_gi_golonmaskVtx_001328[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 1, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 12, 4, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_golonmaskTex_000348),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_golonmaskVtx_001408[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 0, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_golonmaskTex_000748),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_gi_golonmaskVtx_001468[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(4, 2, 1, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 1, 0, 0),
    gsSP2Triangles(1, 7, 6, 0, 6, 5, 1, 0),
    gsSPEndDisplayList(),
}; 


