#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_firefly.h"

static s16 sKeeseFlyAnimFrameData[106];
static JointIndex sKeeseFlyAnimJointIndices[28];
static Vtx sKeeseSkeletonVtx_000890[14];
static Vtx sKeeseSkeletonVtx_000970[6];
static Vtx sKeeseSkeletonVtx_0009D0[6];
static Vtx sKeeseSkeletonVtx_000A30[17];
static Vtx sKeeseSkeletonVtx_000B40[3];
static Vtx sKeeseSkeletonVtx_000B70[4];
static Vtx sKeeseSkeletonVtx_000BB0[3];
static Vtx sKeeseSkeletonVtx_000BE0[3];
static Vtx sKeeseSkeletonVtx_000C10[3];
static Vtx sKeeseSkeletonVtx_000C40[3];
static Vtx sKeeseSkeletonVtx_000C70[3];
static Vtx sKeeseSkeletonVtx_000CA0[3];
static Vtx object_fireflyVtx_000CD0[6];
static void* sKeeseSkeletonLimbs[27];

static s16 sKeeseFlyAnimFrameData[106] = {
    0x0000, 0x4000, 0xD4A9, 0xEFB4, 0x2B57, 0x104C, 0x1BDA, 0xE426, 0x163C, 0xC000, 0x0000, 0xFFBD, 0xFF9C, 0xFFBB, 
    0x0000, 0x0045, 0x0064, 0x0043, 0x9C72, 0x9E5F, 0xA000, 0x9EAB, 0x9C72, 0x9A39, 0x98E4, 0x9A85, 0x9C72, 0x9E5F, 
    0xA000, 0x9EAB, 0x9C72, 0x9A39, 0x98E4, 0x9A85, 0x03AB, 0x139C, 0x238E, 0x171C, 0x0AAB, 0xFE39, 0xF1C7, 0xFAB9, 
    0x69CA, 0x6DC8, 0x71C7, 0x6F1C, 0x6C72, 0x69C7, 0x671C, 0x6873, 0x307C, 0x2BCC, 0x271C, 0x1AAB, 0x0E39, 0x01C7, 
    0xF555, 0x12E9, 0xC41B, 0xDE7F, 0xF8E4, 0xF000, 0xE71C, 0xDE39, 0xD555, 0xCCB8, 0xFC55, 0xEC64, 0xDC72, 0xE8E4, 
    0xF555, 0x01C7, 0x0E39, 0x0547, 0x69CA, 0x6DC8, 0x71C7, 0x6F1C, 0x6C72, 0x69C7, 0x671C, 0x6873, 0xCF84, 0xD434, 
    0xD8E4, 0xE555, 0xF1C7, 0xFE39, 0x0AAB, 0xED17, 0x3BE5, 0x2181, 0x071C, 0x1000, 0x18E4, 0x21C7, 0x2AAB, 0x3348, 
    0xA2FE, 0xA131, 0x9FBB, 0xA128, 0xA377, 0xA5BE, 0xA711, 0xA52A, 
}; 

static JointIndex sKeeseFlyAnimJointIndices[28] = {
    { 0x0000, 0x000A, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0004 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0005, 0x0004 },
    { 0x0000, 0x0000, 0x001A },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0006, 0x0001, 0x0007 },
    { 0x0000, 0x0022, 0x002A },
    { 0x0000, 0x0032, 0x0000 },
    { 0x0000, 0x003A, 0x0008 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0007, 0x0009, 0x0007 },
    { 0x0000, 0x0042, 0x004A },
    { 0x0000, 0x0052, 0x0000 },
    { 0x0000, 0x005A, 0x0008 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0062 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gKeeseFlyAnim = { { 8 }, sKeeseFlyAnimFrameData, sKeeseFlyAnimJointIndices, 10 }; 

static u8 unaccounted_00018C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

u64 gKeeseEyeTex[] = {
#include "assets/objects/object_firefly/eye.rgb5a1.inc.c"
};

u64 gFireKeeseBodyTex[] = {
#include "assets/objects/object_firefly/fire_body.rgb5a1.inc.c"
};

u64 gFireKeeseEyeTex[] = {
#include "assets/objects/object_firefly/fire_eye.rgb5a1.inc.c"
};

u64 gFireKeeseEarTex[] = {
#include "assets/objects/object_firefly/fire_ear.rgb5a1.inc.c"
};

u64 gFireKeeseTalonTex[] = {
#include "assets/objects/object_firefly/fire_talon.rgb5a1.inc.c"
};

u64 gFireKeeseWingTex[] = {
#include "assets/objects/object_firefly/fire_wing.rgb5a1.inc.c"
};

u64 gKeeseBodyTex[] = {
#include "assets/objects/object_firefly/body.rgb5a1.inc.c"
};

u64 gKeeseTalonTex[] = {
#include "assets/objects/object_firefly/talon.rgb5a1.inc.c"
};

u64 gKeeseWingTex[] = {
#include "assets/objects/object_firefly/wing.rgb5a1.inc.c"
};

u64 gKeeseEarTex[] = {
#include "assets/objects/object_firefly/ear.rgb5a1.inc.c"
};

static Vtx sKeeseSkeletonVtx_000890[14] = {
    VTX(-367, -280, 232, 1433, 369, 182, 172, 41, 255),
    VTX(-367, -280, -232, 1127, 369, 170, 202, 194, 255),
    VTX(53, -374, -203, 1173, 232, 252, 160, 185, 255),
    VTX(-506, 287, 0, 640, 412, 137, 5, 242, 255),
    VTX(68, 298, -435, 830, 223, 243, 36, 143, 255),
    VTX(-367, -280, 232, 153, 369, 182, 172, 41, 255),
    VTX(68, 298, 435, 450, 223, 19, 100, 62, 255),
    VTX(53, -374, 203, 1387, 232, 28, 155, 58, 255),
    VTX(755, -13, 0, 1280, 0, 105, 205, 27, 255),
    VTX(755, -13, 0, 640, 0, 105, 205, 27, 255),
    VTX(-506, 287, 0, 128, -64, 137, 5, 242, 255),
    VTX(-367, -280, -232, 277, 310, 170, 202, 194, 255),
    VTX(-367, -280, 232, -21, 310, 182, 172, 41, 255),
    VTX(53, -374, 203, 107, 232, 28, 155, 58, 255),
}; 

static Vtx sKeeseSkeletonVtx_000970[6] = {
    VTX(755, -13, 0, -196, -15, 105, 205, 27, 255),
    VTX(68, 298, 435, 329, -146, 19, 100, 62, 255),
    VTX(53, -374, 203, 215, 281, 28, 155, 58, 255),
    VTX(53, -374, -203, 215, 281, 252, 160, 185, 255),
    VTX(68, 298, -435, 329, -146, 243, 36, 143, 255),
    VTX(755, -13, 0, -196, -15, 105, 205, 27, 255),
}; 

static Vtx sKeeseSkeletonVtx_0009D0[6] = {
    VTX(-352, 170, 801, 264, 286, 58, 175, 66, 255),
    VTX(-1095, -244, 943, 586, 47, 13, 148, 50, 255),
    VTX(177, -230, 42, -140, 47, 60, 162, 42, 255),
    VTX(177, -230, -42, -140, 47, 46, 154, 213, 255),
    VTX(-1095, -244, -943, 586, 47, 49, 155, 215, 255),
    VTX(-352, 170, -801, 264, 286, 68, 164, 221, 255),
}; 

static Vtx sKeeseSkeletonVtx_000A30[17] = {
    VTX(1410, -218, 339, 178, 136, 246, 153, 60, 255),
    VTX(2015, 38, 0, 284, 0, 115, 29, 244, 255),
    VTX(594, 276, 495, 389, 327, 18, 68, 97, 255),
    VTX(494, -288, 0, 1280, 345, 232, 140, 242, 255),
    VTX(-15, 3, 263, 1511, 464, 154, 213, 45, 255),
    VTX(-15, 3, -263, 1049, 464, 159, 31, 194, 255),
    VTX(594, 276, -495, 891, 327, 10, 24, 139, 255),
    VTX(1410, -218, -339, 1102, 136, 22, 164, 183, 255),
    VTX(520, 591, 0, 640, 347, 0, 117, 25, 255),
    VTX(2015, 38, 0, 515, 0, 115, 29, 244, 255),
    VTX(1410, -218, 339, 1458, 136, 246, 153, 60, 255),
    VTX(-15, 3, 263, 231, 464, 154, 213, 45, 255),
    VTX(2015, 38, 0, 996, 0, 115, 29, 244, 255),
    VTX(2015, 38, 0, 765, 0, 115, 29, 244, 255),
    VTX(1410, -218, -339, 886, 147, 22, 164, 183, 255),
    VTX(2015, 38, 0, 640, 0, 115, 29, 244, 255),
    VTX(1410, -218, 339, 394, 147, 246, 153, 60, 255),
}; 

static Vtx sKeeseSkeletonVtx_000B40[3] = {
    VTX(-313, 0, -5, 263, 722, 211, 150, 224, 255),
    VTX(818, 0, -335, -84, 0, 247, 140, 228, 255),
    VTX(813, 0, 329, 596, 0, 253, 137, 246, 255),
}; 

static Vtx sKeeseSkeletonVtx_000B70[4] = {
    VTX(813, 0, -329, 596, 0, 251, 138, 16, 255),
    VTX(816, 0, 3, 256, 0, 0, 0, 0, 255),
    VTX(818, 0, 335, -84, 0, 247, 140, 28, 255),
    VTX(-313, 0, 5, 263, 722, 221, 142, 2, 255),
}; 

static Vtx sKeeseSkeletonVtx_000BB0[3] = {
    VTX(1136, 1423, -3, 0, 512, 228, 69, 162, 255),
    VTX(1143, -1423, 2, 710, -58, 229, 11, 140, 255),
    VTX(0, 0, 0, 583, 512, 250, 18, 138, 255),
}; 

static Vtx sKeeseSkeletonVtx_000BE0[3] = {
    VTX(1061, -330, 0, -22, -50, 69, 49, 172, 255),
    VTX(3, -1423, 0, 408, -151, 98, 12, 188, 255),
    VTX(-1, 1423, 0, 128, 512, 77, 69, 195, 255),
}; 

static Vtx sKeeseSkeletonVtx_000C10[3] = {
    VTX(2658, -741, 0, -1019, 455, 17, 207, 149, 255),
    VTX(0, -387, 0, -312, 3, 181, 6, 164, 255),
    VTX(0, 1664, 0, 128, 512, 206, 19, 149, 255),
}; 

static Vtx sKeeseSkeletonVtx_000C40[3] = {
    VTX(0, 1664, 0, 128, 512, 206, 19, 107, 255),
    VTX(0, -387, 0, -312, 3, 181, 6, 92, 255),
    VTX(2658, -741, 0, -1019, 455, 17, 207, 107, 255),
}; 

static Vtx sKeeseSkeletonVtx_000C70[3] = {
    VTX(-3, 1423, 0, 128, 512, 77, 69, 61, 255),
    VTX(3, -1424, 0, 408, -151, 98, 12, 68, 255),
    VTX(1061, -331, 0, -22, -50, 69, 49, 84, 255),
}; 

static Vtx sKeeseSkeletonVtx_000CA0[3] = {
    VTX(0, 0, 0, 583, 512, 250, 18, 118, 255),
    VTX(1143, -1424, 0, 710, -58, 229, 12, 116, 255),
    VTX(1137, 1423, 0, 0, 512, 228, 69, 94, 255),
}; 

static Vtx object_fireflyVtx_000CD0[6] = {
    VTX(755, -13, 0, -192, -32, 255, 255, 255, 255),
    VTX(68, 298, 435, 365, -32, 255, 255, 255, 255),
    VTX(53, -374, 203, 145, 367, 255, 255, 255, 255),
    VTX(53, -374, -203, 145, 367, 255, 255, 255, 255),
    VTX(68, 298, -435, 365, -32, 255, 255, 255, 255),
    VTX(755, -13, 0, -192, -32, 255, 255, 255, 255),
}; 

Gfx sKeeseSkeletonLimbDL_000D30[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseBodyTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000890[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 4, 0),
    gsSP2Triangles(7, 2, 8, 0, 2, 7, 0, 0),
    gsSP2Triangles(6, 9, 4, 0, 10, 11, 12, 0),
    gsSP2Triangles(6, 5, 13, 0, 4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gFireKeeseEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseBodyTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sKeeseSkeletonVtx_000970[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gFireKeeseEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseEarTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, 0, SHADE, 0, 
                       TEXEL1, 0, PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sKeeseSkeletonVtx_0009D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_000F40[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseBodyTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000A30[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 2, 9, 0),
    gsSP2Triangles(10, 3, 7, 0, 11, 2, 8, 0),
    gsSP2Triangles(6, 12, 7, 0, 8, 6, 5, 0),
    gsSP2Triangles(5, 4, 8, 0, 13, 6, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 0, 2, 11, 0),
    gsSP2Triangles(4, 3, 10, 0, 7, 3, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_001038[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseTalonTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseTalonTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, 0, SHADE, 0, 
                       TEXEL1, 0, PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000B40[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_001100[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseTalonTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseTalonTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, 0, SHADE, 0, 
                       TEXEL1, 0, PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000B70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_0011C8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseWingTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000BB0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_001290[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseWingTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000BE0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_001358[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseWingTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000C10[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_001420[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseWingTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000C40[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_0014E8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseWingTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000C70[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sKeeseSkeletonLimbDL_0015B0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFireKeeseWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gKeeseWingTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sKeeseSkeletonVtx_000CA0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gKeeseEyesDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gKeeseEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_fireflyVtx_000CD0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

StandardLimb sKeeseSkeletonLimb_001708 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001714 = { 
    { 0, 0, 0 },
    0x02, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001720 = { 
    { 1707, 0, 0 },
    0x03, 0x09,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_00172C = { 
    { 236, 77, -83 },
    0x04, 0x06,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001738 = { 
    { 0, 0, 0 },
    0x05, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001744 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_001100
}; 

StandardLimb sKeeseSkeletonLimb_001750 = { 
    { 236, 77, 83 },
    0x07, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_00175C = { 
    { 0, 0, 0 },
    0x08, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001768 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_001038
}; 

StandardLimb sKeeseSkeletonLimb_001774 = { 
    { 0, 0, 0 },
    0xFF, 0x0A,
    sKeeseSkeletonLimbDL_000F40
}; 

StandardLimb sKeeseSkeletonLimb_001780 = { 
    { 455, 280, 10 },
    0x0B, 0x11,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_00178C = { 
    { 0, 0, 0 },
    0x0C, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001798 = { 
    { 1140, 0, 0 },
    0x0D, 0x10,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_0017A4 = { 
    { 860, 0, 0 },
    0x0E, 0x0F,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_0017B0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_001420
}; 

StandardLimb sKeeseSkeletonLimb_0017BC = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_0014E8
}; 

StandardLimb sKeeseSkeletonLimb_0017C8 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_0015B0
}; 

StandardLimb sKeeseSkeletonLimb_0017D4 = { 
    { 455, 280, -10 },
    0x12, 0x18,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_0017E0 = { 
    { 0, 0, 0 },
    0x13, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_0017EC = { 
    { 1140, 0, 0 },
    0x14, 0x17,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_0017F8 = { 
    { 860, 0, 0 },
    0x15, 0x16,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001804 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_001358
}; 

StandardLimb sKeeseSkeletonLimb_001810 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_001290
}; 

StandardLimb sKeeseSkeletonLimb_00181C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_0011C8
}; 

StandardLimb sKeeseSkeletonLimb_001828 = { 
    { 0, 0, 0 },
    0x19, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001834 = { 
    { 0, 0, 0 },
    0x1A, 0xFF,
    NULL
}; 

StandardLimb sKeeseSkeletonLimb_001840 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sKeeseSkeletonLimbDL_000D30
}; 

static void* sKeeseSkeletonLimbs[27] = {
    &sKeeseSkeletonLimb_001708,
    &sKeeseSkeletonLimb_001714,
    &sKeeseSkeletonLimb_001720,
    &sKeeseSkeletonLimb_00172C,
    &sKeeseSkeletonLimb_001738,
    &sKeeseSkeletonLimb_001744,
    &sKeeseSkeletonLimb_001750,
    &sKeeseSkeletonLimb_00175C,
    &sKeeseSkeletonLimb_001768,
    &sKeeseSkeletonLimb_001774,
    &sKeeseSkeletonLimb_001780,
    &sKeeseSkeletonLimb_00178C,
    &sKeeseSkeletonLimb_001798,
    &sKeeseSkeletonLimb_0017A4,
    &sKeeseSkeletonLimb_0017B0,
    &sKeeseSkeletonLimb_0017BC,
    &sKeeseSkeletonLimb_0017C8,
    &sKeeseSkeletonLimb_0017D4,
    &sKeeseSkeletonLimb_0017E0,
    &sKeeseSkeletonLimb_0017EC,
    &sKeeseSkeletonLimb_0017F8,
    &sKeeseSkeletonLimb_001804,
    &sKeeseSkeletonLimb_001810,
    &sKeeseSkeletonLimb_00181C,
    &sKeeseSkeletonLimb_001828,
    &sKeeseSkeletonLimb_001834,
    &sKeeseSkeletonLimb_001840,
}; 

SkeletonHeader gKeeseSkeleton = { sKeeseSkeletonLimbs, 27 }; 


