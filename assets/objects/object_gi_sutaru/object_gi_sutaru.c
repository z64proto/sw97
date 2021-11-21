#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_sutaru.h"

static Vtx object_gi_sutaruVtx_000000[3];
static Vtx object_gi_sutaruVtx_000030[22];
static Vtx object_gi_sutaruVtx_000190[4];
static Vtx object_gi_sutaruVtx_0001D0[3];
static Vtx object_gi_sutaruVtx_000200[12];
static Vtx object_gi_sutaruVtx_0002C0[7];

static Vtx object_gi_sutaruVtx_000000[3] = {
    VTX(-11, -17, -5, 959, 1849, 234, 212, 147, 255),
    VTX(13, 27, -5, 569, 1177, 31, 57, 155, 255),
    VTX(11, -17, -5, 577, 1849, 27, 212, 148, 255),
}; 

static Vtx object_gi_sutaruVtx_000030[22] = {
    VTX(13, 27, -5, 569, 1177, 31, 57, 155, 255),
    VTX(-29, -4, -5, 998, 1582, 198, 239, 153, 255),
    VTX(-13, 27, -5, 967, 1177, 210, 69, 170, 255),
    VTX(0, 30, -5, 768, 1074, 247, 113, 217, 255),
    VTX(29, -4, -5, 538, 1582, 71, 235, 162, 255),
    VTX(11, -17, -5, 577, 1849, 27, 212, 148, 255),
    VTX(27, 13, -5, 540, 1386, 105, 40, 217, 255),
    VTX(-27, 13, -5, 996, 1386, 151, 40, 217, 255),
    VTX(-11, -17, -5, 959, 1849, 234, 212, 147, 255),
    VTX(0, 30, -5, -256, 1074, 247, 113, 217, 255),
    VTX(-13, 27, -5, -57, 1177, 210, 69, 170, 255),
    VTX(-13, 27, 4, 57, 1177, 223, 76, 86, 255),
    VTX(-27, 13, -5, -28, 1386, 151, 40, 217, 255),
    VTX(-27, 13, 4, 28, 1386, 162, 62, 39, 255),
    VTX(-29, -4, -5, -26, 1582, 198, 239, 153, 255),
    VTX(-29, -4, 4, 26, 1582, 182, 245, 93, 255),
    VTX(13, 27, 4, 455, 1177, 18, 32, 114, 255),
    VTX(-11, -17, 4, 65, 1849, 235, 216, 111, 255),
    VTX(0, 30, 4, 256, 1074, 9, 113, 39, 255),
    VTX(29, -4, 4, 486, 1582, 87, 244, 81, 255),
    VTX(27, 13, 4, 484, 1386, 94, 62, 39, 255),
    VTX(11, -17, 4, 447, 1849, 26, 215, 109, 255),
}; 

static Vtx object_gi_sutaruVtx_000190[4] = {
    VTX(-59, 99, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-59, -45, 0, 1024, 2048, 255, 255, 255, 255),
    VTX(59, -45, 0, 0, 2048, 255, 255, 255, 255),
    VTX(59, 99, 0, 0, 0, 255, 255, 255, 255),
}; 

static Vtx object_gi_sutaruVtx_0001D0[3] = {
    VTX(11, -17, -5, 577, 1849, 27, 212, 148, 255),
    VTX(13, -30, 0, 512, 1913, 76, 164, 3, 255),
    VTX(-11, -17, -5, 959, 1849, 234, 212, 147, 255),
}; 

static Vtx object_gi_sutaruVtx_000200[12] = {
    VTX(-13, -30, 0, 0, 1913, 150, 201, 2, 255),
    VTX(-11, -17, -5, -65, 1849, 234, 212, 147, 255),
    VTX(13, -30, 0, 512, 1913, 76, 164, 3, 255),
    VTX(-11, -17, 4, 65, 1849, 235, 216, 111, 255),
    VTX(11, -17, -5, 577, 1849, 27, 212, 148, 255),
    VTX(11, -17, 4, 447, 1849, 26, 215, 109, 255),
    VTX(-29, -4, 4, 26, 1582, 182, 245, 93, 255),
    VTX(-22, -21, 0, 0, 1782, 200, 151, 2, 255),
    VTX(-29, -4, -5, -26, 1582, 198, 239, 153, 255),
    VTX(29, -4, -5, 538, 1582, 71, 235, 162, 255),
    VTX(29, -4, 4, 486, 1582, 87, 244, 81, 255),
    VTX(22, -21, 0, 512, 1782, 56, 151, 2, 255),
}; 

static Vtx object_gi_sutaruVtx_0002C0[7] = {
    VTX(11, -17, 4, 35, 1184, 26, 214, 109, 255),
    VTX(29, -4, 4, 1372, 857, 87, 243, 80, 255),
    VTX(13, 27, 4, 1323, -925, 18, 32, 114, 255),
    VTX(-11, -17, 4, -1153, 828, 235, 214, 110, 255),
    VTX(13, 27, 4, -64, -1341, 18, 32, 114, 255),
    VTX(-29, -4, 4, 1372, 857, 181, 245, 93, 255),
    VTX(-11, -17, 4, 35, 1184, 235, 214, 110, 255),
}; 

Gfx gGiSkulltulaTokenDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
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
    gsSPVertex(&object_gi_sutaruVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_sutaruVtx_000030[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 0, 6, 0),
    gsSP2Triangles(2, 1, 7, 0, 1, 0, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(13, 15, 11, 0, 16, 18, 11, 0),
    gsSP2Triangles(19, 4, 6, 0, 20, 6, 0, 0),
    gsSP2Triangles(0, 3, 18, 0, 11, 18, 9, 0),
    gsSP2Triangles(13, 11, 10, 0, 15, 13, 12, 0),
    gsSP2Triangles(21, 19, 16, 0, 15, 16, 11, 0),
    gsSP2Triangles(20, 16, 19, 0, 6, 20, 19, 0),
    gsSP2Triangles(0, 16, 20, 0, 18, 16, 0, 0),
    gsSP1Triangle(21, 16, 17, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiSkulltulaTokenFlameDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL1, TEXEL0, 1, 1, TEXEL1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 170, 255, 170, 255),
    gsDPSetEnvColor(0, 0, 255, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x0404DE60),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 252),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_sutaruVtx_000190[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sutaruVtx_0001D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_sutaruVtx_000200[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 5, 0, 3, 2, 5, 0),
    gsSP2Triangles(2, 3, 0, 0, 6, 7, 3, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 1, 3, 0),
    gsSP2Triangles(1, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 5, 4, 0, 5, 11, 10, 0),
    gsSP1Triangle(9, 11, 4, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_ZB_OVL_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 150, 100, 0, 0, 255),
    gsDPSetEnvColor(255, 0, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04038FB0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sutaruVtx_0002C0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000648[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


