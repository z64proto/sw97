#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_shield_3.h"

static Vtx object_gi_shield_3Vtx_000C00[3];
static Vtx object_gi_shield_3Vtx_000C30[20];
static Vtx object_gi_shield_3Vtx_000D70[16];
static Vtx object_gi_shield_3Vtx_000E70[3];
static Vtx object_gi_shield_3Vtx_000EA0[7];
static Vtx object_gi_shield_3Vtx_000F10[6];
static Vtx object_gi_shield_3Vtx_000F70[4];

u64 object_gi_shield_3Tex_000000[] = {
#include "assets/objects/object_gi_shield_3//object_gi_shield_3Tex_000000.i8.inc.c"
};

u64 object_gi_shield_3Tex_000400[] = {
#include "assets/objects/object_gi_shield_3//object_gi_shield_3Tex_000400.i8.inc.c"
};

static Vtx object_gi_shield_3Vtx_000C00[3] = {
    VTX(0, 32, 0, -256, 1071, 0, 99, 67, 255),
    VTX(-19, 24, 0, -40, 1246, 178, 61, 66, 255),
    VTX(-15, 20, 8, 31, 1238, 191, 50, 87, 255),
}; 

static Vtx object_gi_shield_3Vtx_000C30[20] = {
    VTX(-20, -7, 8, 24, 1637, 187, 234, 95, 255),
    VTX(-15, 20, 8, 31, 1238, 191, 50, 87, 255),
    VTX(-25, -9, 0, -31, 1647, 161, 225, 66, 255),
    VTX(0, -25, 8, 256, 2010, 0, 184, 95, 255),
    VTX(0, -32, 0, 768, 2001, 0, 165, 78, 255),
    VTX(25, -9, 0, 543, 1647, 95, 225, 66, 255),
    VTX(19, 24, 0, 552, 1246, 78, 61, 66, 255),
    VTX(15, 20, 8, 481, 1238, 65, 50, 87, 255),
    VTX(0, 27, 8, 256, 1060, 0, 69, 97, 255),
    VTX(0, 32, 0, 768, 1071, 0, 99, 67, 255),
    VTX(0, 32, 0, -256, 1071, 0, 99, 67, 255),
    VTX(-19, 24, 0, -40, 1246, 178, 61, 66, 255),
    VTX(20, -7, 8, 488, 1637, 69, 234, 95, 255),
    VTX(0, 32, 0, 768, 1071, 0, 222, 141, 255),
    VTX(19, 24, 0, 552, 1246, 226, 235, 142, 255),
    VTX(0, 0, 9, 256, 1536, 0, 253, 137, 255),
    VTX(-19, 24, 0, -40, 1246, 30, 235, 142, 255),
    VTX(-25, -9, 0, -31, 1647, 38, 13, 143, 255),
    VTX(0, -32, 0, 768, 2001, 0, 34, 141, 255),
    VTX(25, -9, 0, 543, 1647, 218, 13, 143, 255),
}; 

static Vtx object_gi_shield_3Vtx_000D70[16] = {
    VTX(8, 10, 5, 0, 0, 254, 77, 165, 255),
    VTX(8, 6, 2, 0, 274, 0, 40, 143, 255),
    VTX(5, 6, 2, 224, 274, 255, 60, 153, 255),
    VTX(8, -3, 0, 0, 844, 0, 212, 145, 255),
    VTX(5, -3, 0, 224, 844, 248, 209, 147, 255),
    VTX(8, -6, 4, 0, 1024, 242, 156, 192, 255),
    VTX(5, -6, 6, 224, 1017, 228, 153, 202, 255),
    VTX(5, 10, 5, 224, -1, 252, 78, 166, 255),
    VTX(-5, 6, 2, 800, 274, 1, 60, 153, 255),
    VTX(-8, 6, 2, 1024, 274, 0, 40, 143, 255),
    VTX(-8, 10, 5, 1024, 0, 2, 77, 165, 255),
    VTX(-5, -3, 0, 800, 844, 8, 209, 147, 255),
    VTX(-8, -3, 0, 1024, 844, 0, 212, 145, 255),
    VTX(-8, -6, 4, 1024, 1024, 14, 156, 192, 255),
    VTX(-5, 10, 5, 800, -1, 4, 78, 166, 255),
    VTX(-5, -6, 6, 800, 1017, 28, 153, 202, 255),
}; 

static Vtx object_gi_shield_3Vtx_000E70[3] = {
    VTX(0, -25, 8, 768, 2001, 0, 184, 95, 255),
    VTX(0, 1, 15, 256, 1526, 0, 3, 119, 255),
    VTX(-20, -7, 8, -30, 1647, 187, 234, 95, 255),
}; 

static Vtx object_gi_shield_3Vtx_000EA0[7] = {
    VTX(0, 1, 15, 512, 3052, 0, 3, 119, 255),
    VTX(20, -7, 8, 1084, 3293, 69, 234, 95, 255),
    VTX(15, 20, 8, 1102, 2491, 65, 50, 87, 255),
    VTX(0, 27, 8, 1536, 2142, 0, 69, 97, 255),
    VTX(-15, 20, 8, -78, 2491, 191, 50, 87, 255),
    VTX(-20, -7, 8, -60, 3293, 187, 234, 95, 255),
    VTX(0, -25, 8, 1536, 4002, 0, 184, 95, 255),
}; 

static Vtx object_gi_shield_3Vtx_000F10[6] = {
    VTX(0, 1, 15, 1088, 64, 0, 3, 119, 255),
    VTX(20, -7, 8, 2702, -525, 69, 234, 95, 255),
    VTX(15, 20, 8, 2323, 1628, 65, 50, 87, 255),
    VTX(0, 27, 8, 1088, 2142, 0, 69, 97, 255),
    VTX(-15, 20, 8, -147, 1628, 191, 50, 87, 255),
    VTX(-20, -7, 8, -526, -525, 187, 234, 95, 255),
}; 

static Vtx object_gi_shield_3Vtx_000F70[4] = {
    VTX(0, -25, 8, 2048, 2294, 0, 184, 95, 255),
    VTX(0, 1, 15, 2048, -498, 0, 3, 119, 255),
    VTX(-20, -7, 8, -377, 440, 187, 234, 95, 255),
    VTX(20, -7, 8, -377, 440, 69, 234, 95, 255),
}; 

Gfx gGiMirrorShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 255, 20, 70, 255),
    gsDPSetEnvColor(50, 0, 30, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(1500, 1500, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_shield_3Vtx_000C00[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_shield_3Vtx_000C30[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 7, 9, 0, 1, 8, 10, 0),
    gsSP2Triangles(11, 2, 1, 0, 2, 4, 3, 0),
    gsSP2Triangles(12, 3, 5, 0, 7, 12, 5, 0),
    gsSP2Triangles(6, 9, 7, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 17, 16, 0),
    gsSP2Triangles(15, 18, 17, 0, 18, 15, 19, 0),
    gsSP1Triangle(19, 15, 14, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 100, 100, 255),
    gsDPSetEnvColor(30, 30, 30, 255),
    gsSPTexture(1000, 1000, 0, 0, G_ON),
    gsSPVertex(&object_gi_shield_3Vtx_000D70[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 7, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 4, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 13, 12, 0, 10, 14, 8, 0),
    gsSP2Triangles(9, 8, 11, 0, 13, 11, 15, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 170, 255, 255, 255),
    gsDPSetEnvColor(0, 80, 120, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04022010),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 13, 0, 6, 13),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, 0, 6, 13, 0, 6, 13),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_shield_3Vtx_000E70[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_shield_3Vtx_000EA0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 0, 4, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiMirrorShieldSymbolDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 140),
    gsDPSetEnvColor(0, 0, 50, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_shield_3Tex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, 1, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_shield_3Vtx_000F10[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 0, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_shield_3Tex_000400),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, 2, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsSPVertex(&object_gi_shield_3Vtx_000F70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0012B8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


