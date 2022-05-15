#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_crow.h"

static s16 sGuayFlyAnimFrameData[92];
static JointIndex sGuayFlyAnimJointIndices[9];
static Vtx sGuaySkelVtx_000100[2];
static Vtx sGuaySkelVtx_000120[3];
static Vtx sGuaySkelVtx_000150[3];
static Vtx sGuaySkelVtx_000180[2];
static Vtx sGuaySkelVtx_0001A0[3];
static Vtx sGuaySkelVtx_0001D0[2];
static Vtx sGuaySkelVtx_0001F0[3];
static Vtx sGuaySkelVtx_000220[3];
static Vtx sGuaySkelVtx_000250[2];
static Vtx sGuaySkelVtx_000270[3];
static Vtx sGuaySkelVtx_0002A0[25];
static Vtx sGuaySkelVtx_000430[3];
static Vtx sGuaySkelVtx_000460[3];
static void* sGuaySkelLimbs[8];

static s16 sGuayFlyAnimFrameData[92] = {
    0x0000, 0x0056, 0xFB6D, 0xC000, 0x8000, 0x06E8, 0x4000, 0xEFAB, 0x1061, 0x02A9, 0xFC88, 0xFEC8, 0x0077, 0x06FE, 
    0x0FEC, 0x17BE, 0x15E4, 0x116D, 0x063A, 0xE1AA, 0xF310, 0x0BFB, 0x1D5C, 0x25B8, 0x19AD, 0x05FE, 0xEFCD, 0xBDE9, 
    0xC206, 0xC662, 0xCA69, 0xCD9E, 0xC965, 0xC55A, 0xC169, 0xF226, 0xEE7E, 0xEDAA, 0xF5C1, 0x0000, 0x0978, 0x0D72, 
    0xFF39, 0x0000, 0xF351, 0xEAD0, 0xFFAA, 0x17A2, 0x1E65, 0x1C5A, 0x0D4D, 0x003D, 0xFE76, 0xF854, 0xF01A, 0xE908, 
    0xEA96, 0xEECD, 0xF93C, 0xE2CB, 0xF31F, 0x0AA2, 0x1B5A, 0x238E, 0x1817, 0x0555, 0xF03C, 0x415C, 0x3D82, 0x3956, 
    0x35B8, 0x32FE, 0x36A7, 0x3A64, 0x3E21, 0x0D72, 0x0F8C, 0x0F13, 0x0898, 0x0000, 0xF562, 0xF01C, 0xFF48, 0x0000, 
    0xF3F1, 0xEC09, 0x00A2, 0x180A, 0x1E08, 0x1B6E, 0x0CCC, 0x0000, 
}; 

static JointIndex sGuayFlyAnimJointIndices[9] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0003, 0x0004, 0x0000 },
    { 0x0000, 0x0005, 0x0006 },
    { 0x000B, 0x0013, 0x001B },
    { 0x0023, 0x002B, 0x0007 },
    { 0x0033, 0x003B, 0x0043 },
    { 0x004B, 0x0053, 0x0008 },
    { 0x0000, 0x0009, 0x0003 },
    { 0x0000, 0x000A, 0x0000 },
}; 

AnimationHeader gGuayFlyAnim = { { 8 }, sGuayFlyAnimFrameData, sGuayFlyAnimJointIndices, 11 }; 

static Vtx sGuaySkelVtx_000100[2] = {
    VTX(814, -449, 0, 1048, 369, 3, 7, 119, 255),
    VTX(925, 226, 0, 919, -44, 254, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_000120[3] = {
    VTX(239, -315, 0, 727, 362, 0, 0, 119, 255),
    VTX(216, 171, 0, 577, 90, 0, 0, 119, 255),
    VTX(216, 171, 0, 577, 90, 0, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_000150[3] = {
    VTX(239, -315, 0, 727, 362, 0, 0, 119, 255),
    VTX(1397, 0, 2, -59, 553, 0, 0, 119, 255),
    VTX(216, 171, 0, 577, 90, 0, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_000180[2] = {
    VTX(1337, -37, 120, 1521, -98, 204, 179, 75, 255),
    VTX(405, -231, 74, 1531, 506, 6, 140, 227, 255),
}; 

static Vtx sGuaySkelVtx_0001A0[3] = {
    VTX(814, -449, 0, 1048, 369, 3, 7, 119, 255),
    VTX(814, -449, 0, 1048, 369, 3, 7, 119, 255),
    VTX(925, 226, 0, 919, -44, 254, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_0001D0[2] = {
    VTX(857, 462, 0, 1048, 369, 3, 249, 119, 255),
    VTX(975, -212, 0, 919, -44, 254, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_0001F0[3] = {
    VTX(303, -188, 0, 577, 90, 0, 0, 119, 255),
    VTX(322, 297, 0, 727, 362, 0, 0, 119, 255),
    VTX(303, -188, 0, 577, 90, 0, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_000220[3] = {
    VTX(303, -188, 0, 577, 90, 0, 0, 119, 255),
    VTX(1483, -8, 2, -59, 553, 0, 0, 119, 255),
    VTX(322, 297, 0, 727, 362, 0, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_000250[2] = {
    VTX(1337, 36, 120, 1521, -98, 204, 76, 75, 255),
    VTX(405, 231, 74, 1531, 506, 5, 116, 228, 255),
}; 

static Vtx sGuaySkelVtx_000270[3] = {
    VTX(857, 462, 0, 1048, 369, 3, 249, 119, 255),
    VTX(975, -212, 0, 919, -44, 254, 0, 119, 255),
    VTX(857, 462, 0, 1048, 369, 3, 249, 119, 255),
}; 

static Vtx sGuaySkelVtx_0002A0[25] = {
    VTX(2704, 0, -474, 1498, 807, 237, 57, 153, 255),
    VTX(1773, 0, -295, 126, 808, 213, 0, 145, 255),
    VTX(1672, 299, -107, -65, 541, 208, 99, 210, 255),
    VTX(3187, 0, -290, 2136, 371, 55, 0, 106, 255),
    VTX(1789, 259, 271, -5, -90, 246, 94, 73, 255),
    VTX(1905, 0, 377, 130, -292, 245, 0, 119, 255),
    VTX(3187, 0, -290, 2136, 371, 24, 139, 5, 255),
    VTX(1789, -259, 271, -5, -90, 246, 162, 73, 255),
    VTX(1678, -300, -106, -65, 541, 209, 157, 210, 255),
    VTX(2704, 0, -474, 1498, 807, 237, 198, 154, 255),
    VTX(3187, 0, -290, 2136, 371, 23, 117, 5, 255),
    VTX(405, 231, 74, 503, 313, 5, 116, 228, 255),
    VTX(1337, 36, 120, 294, -181, 204, 76, 75, 255),
    VTX(1340, 2, -36, 257, -183, 206, 0, 148, 255),
    VTX(904, 0, -162, 255, 47, 0, 0, 137, 255),
    VTX(1337, -37, 120, 215, -181, 204, 179, 75, 255),
    VTX(1789, -259, 271, -22, -421, 246, 162, 73, 255),
    VTX(1905, 0, 377, 255, -482, 245, 0, 119, 255),
    VTX(405, -231, 74, 6, 313, 6, 140, 227, 255),
    VTX(3, 0, 5, 255, 526, 234, 0, 139, 255),
    VTX(1789, 259, 271, 533, -421, 246, 94, 73, 255),
    VTX(1672, 299, -107, 675, -360, 208, 99, 210, 255),
    VTX(1773, 0, -295, 255, -412, 213, 0, 145, 255),
    VTX(1678, -300, -106, -57, -360, 209, 157, 210, 255),
    VTX(3, 0, 5, 255, 526, 247, 0, 119, 255),
}; 

static Vtx sGuaySkelVtx_000430[3] = {
    VTX(497, -369, 0, 0, 511, 255, 255, 255, 255),
    VTX(497, 370, 0, 512, 512, 255, 255, 255, 255),
    VTX(2, 0, 2, 256, 0, 255, 255, 255, 255),
}; 

static Vtx sGuaySkelVtx_000460[3] = {
    VTX(703, -369, 2, 0, 512, 255, 255, 255, 255),
    VTX(703, 370, 2, 512, 511, 255, 255, 255, 255),
    VTX(-10, 0, 4, 255, 0, 255, 255, 255, 255),
}; 

Gfx sGuaySkelLimbDL_000490[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 253, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_0002A0[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 1, 9, 0),
    gsSP2Triangles(2, 4, 10, 0, 5, 7, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 13, 15, 18, 0),
    gsSP2Triangles(19, 11, 14, 0, 12, 20, 21, 0),
    gsSP2Triangles(13, 22, 23, 0, 13, 18, 14, 0),
    gsSP2Triangles(14, 18, 19, 0, 12, 11, 24, 0),
    gsSP2Triangles(12, 24, 18, 0, 12, 18, 15, 0),
    gsSP2Triangles(17, 20, 12, 0, 17, 12, 15, 0),
    gsSP2Triangles(21, 22, 13, 0, 13, 12, 21, 0),
    gsSP2Triangles(23, 16, 15, 0, 23, 15, 13, 0),
    gsSPEndDisplayList(),
}; 

Gfx sGuaySkelLimbDL_0005E0[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_000100[0], 2, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00BC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sGuaySkelVtx_000120[0], 3, 2),
    gsSP2Triangles(0, 2, 3, 0, 4, 1, 0, 0),
    gsSPVertex(&sGuaySkelVtx_000150[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sGuaySkelLimbDL_0006B0[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_000180[0], 2, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00BC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sGuaySkelVtx_0001A0[0], 3, 2),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sGuaySkelLimbDL_000770[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_0001D0[0], 2, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00BC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sGuaySkelVtx_0001F0[0], 3, 2),
    gsSP2Triangles(2, 3, 0, 0, 0, 1, 4, 0),
    gsSPVertex(&sGuaySkelVtx_000220[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sGuaySkelLimbDL_000840[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_000250[0], 2, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00BC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sGuaySkelVtx_000270[0], 3, 2),
    gsSP2Triangles(2, 1, 0, 0, 0, 3, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx sGuaySkelLimbDL_000900[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayTailTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_000430[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sGuaySkelLimbDL_0009A0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGuayTailTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sGuaySkelVtx_000460[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 gGuayBodyTex[] = {
#include "assets/objects/object_crow/body.rgb5a1.inc.c"
};

u64 gGuayEyeTex[] = {
#include "assets/objects/object_crow/eye.rgb5a1.inc.c"
};

u64 gGuayTailTex[] = {
#include "assets/objects/object_crow/tail.rgb5a1.inc.c"
};

StandardLimb sGuaySkelLimb_001040 = { 
    { 0, 86, -1171 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sGuaySkelLimb_00104C = { 
    { 0, 0, 0 },
    0x02, 0x06,
    sGuaySkelLimbDL_000490
}; 

StandardLimb sGuaySkelLimb_001058 = { 
    { 1132, -24, 106 },
    0x03, 0x04,
    sGuaySkelLimbDL_0006B0
}; 

StandardLimb sGuaySkelLimb_001064 = { 
    { 1186, 0, 0 },
    0xFF, 0xFF,
    sGuaySkelLimbDL_0005E0
}; 

StandardLimb sGuaySkelLimb_001070 = { 
    { 1132, -24, 106 },
    0x05, 0xFF,
    sGuaySkelLimbDL_000840
}; 

StandardLimb sGuaySkelLimb_00107C = { 
    { 1147, 0, 0 },
    0xFF, 0xFF,
    sGuaySkelLimbDL_000770
}; 

StandardLimb sGuaySkelLimb_001088 = { 
    { 0, -6, -1 },
    0x07, 0xFF,
    sGuaySkelLimbDL_0009A0
}; 

StandardLimb sGuaySkelLimb_001094 = { 
    { 702, 0, 0 },
    0xFF, 0xFF,
    sGuaySkelLimbDL_000900
}; 

static void* sGuaySkelLimbs[8] = {
    &sGuaySkelLimb_001040,
    &sGuaySkelLimb_00104C,
    &sGuaySkelLimb_001058,
    &sGuaySkelLimb_001064,
    &sGuaySkelLimb_001070,
    &sGuaySkelLimb_00107C,
    &sGuaySkelLimb_001088,
    &sGuaySkelLimb_001094,
}; 

FlexSkeletonHeader gGuaySkel = { sGuaySkelLimbs, 8, 7 }; 

static u8 unaccounted_0010CC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 


