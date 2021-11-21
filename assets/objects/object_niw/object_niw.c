#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_niw.h"

static s16 sNiwWaitAnimFrameData[68];
static JointIndex sNiwWaitAnimJointIndices[16];
static Vtx object_niwVtx_000100[29];
static Vtx object_niwVtx_0002D0[29];
static Vtx object_niwVtx_0004A0[4];
static Vtx object_niwVtx_0004E0[15];
static Vtx object_niwVtx_0005D0[8];
static Vtx object_niwVtx_000650[8];
static Vtx object_niwVtx_0006D0[3];
static Vtx object_niwVtx_000700[3];
static Vtx object_niwVtx_000730[6];
static Vtx object_niwVtx_000790[24];
static Vtx object_niwVtx_000910[11];
static Vtx object_niwVtx_002380[3];
static void* sNiwSkelLimbs[15];

static s16 sNiwWaitAnimFrameData[68] = {
    0x0000, 0x4000, 0x00B1, 0x8000, 0x6E13, 0x7FA2, 0x69AA, 0x7D30, 0x77A3, 0x071C, 0xEE13, 0xFFA2, 0x1656, 0xFD30, 
    0xF7A3, 0x3FF7, 0x3FFC, 0x39B9, 0x8E62, 0x8DC6, 0x8C53, 0x8A98, 0x8924, 0x8889, 0x8924, 0x8A98, 0x8C53, 0x8DC6, 
    0xF663, 0xF826, 0xF8E4, 0xF826, 0xF663, 0xF448, 0xF284, 0xF1C7, 0xF284, 0xF448, 0x8E62, 0x8DC6, 0x8C53, 0x8A98, 
    0x8924, 0x8889, 0x8924, 0x8A98, 0x8C53, 0x8DC6, 0x099D, 0x07DA, 0x071C, 0x07DA, 0x099D, 0x0BB8, 0x0D7C, 0x0E39, 
    0x0D7C, 0x0BB8, 0x4D79, 0x4E00, 0x4E39, 0x4E00, 0x4D79, 0x4CD7, 0x4C50, 0x4C17, 0x4C50, 0x4CD7, 
}; 

static JointIndex sNiwWaitAnimJointIndices[16] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0003, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0006, 0x0007, 0x0008 },
    { 0x0000, 0x001C, 0x0009 },
    { 0x0000, 0x000A, 0x000B },
    { 0x0000, 0x0000, 0x0026 },
    { 0x000C, 0x000D, 0x000E },
    { 0x0000, 0x0030, 0x0009 },
    { 0x000F, 0x0010, 0x000F },
    { 0x0000, 0x0000, 0x003A },
    { 0x0000, 0x0000, 0x0011 },
}; 

AnimationHeader gNiwWaitAnim = { { 10 }, sNiwWaitAnimFrameData, sNiwWaitAnimJointIndices, 18 }; 

static u8 unaccounted_0000F8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_niwVtx_000100[29] = {
    VTX(16, -210, 300, 537, 293, 10, 197, 103, 255),
    VTX(142, -568, 0, 99, -143, 20, 138, 0, 255),
    VTX(440, -316, 0, -140, 293, 59, 152, 0, 255),
    VTX(437, -77, 185, 57, 625, 53, 253, 107, 255),
    VTX(440, -316, 0, -140, 293, 59, 152, 0, 255),
    VTX(142, -568, 0, 99, -143, 20, 138, 0, 255),
    VTX(16, -210, -299, 537, 293, 10, 197, 153, 255),
    VTX(437, -77, -184, 57, 625, 53, 253, 149, 255),
    VTX(640, 1010, 0, 0, 512, 118, 239, 0, 255),
    VTX(446, 876, 360, 250, 512, 98, 241, 67, 255),
    VTX(508, 135, 0, 192, 34, 98, 68, 0, 255),
    VTX(437, -77, 185, 339, -45, 53, 253, 107, 255),
    VTX(437, -77, 185, 246, 18, 53, 253, 107, 255),
    VTX(446, 876, 360, 0, 512, 98, 241, 67, 255),
    VTX(-84, 543, 589, 388, 512, 3, 215, 112, 255),
    VTX(-96, 103, 385, 480, 245, 226, 215, 108, 255),
    VTX(16, -210, 300, 502, 56, 10, 197, 103, 255),
    VTX(16, -210, 300, 256, 118, 10, 197, 103, 255),
    VTX(-96, 103, 385, 186, 304, 226, 215, 108, 255),
    VTX(-313, -422, 0, 542, 124, 174, 169, 0, 255),
    VTX(-620, 172, 0, 505, 512, 151, 200, 0, 255),
    VTX(-84, 543, 589, -5, 512, 3, 215, 112, 255),
    VTX(-313, -422, 0, 256, -348, 174, 169, 0, 255),
    VTX(142, -568, 0, 13, -381, 20, 138, 0, 255),
    VTX(16, -210, 300, 109, -212, 10, 197, 103, 255),
    VTX(508, 135, 0, 192, 34, 98, 68, 0, 255),
    VTX(446, 876, -360, 250, 512, 98, 241, 189, 255),
    VTX(640, 1010, 0, 0, 512, 118, 239, 0, 255),
    VTX(437, -77, -184, 339, -45, 53, 253, 149, 255),
}; 

static Vtx object_niwVtx_0002D0[29] = {
    VTX(-84, 543, -589, 388, 512, 3, 215, 144, 255),
    VTX(446, 876, -360, 0, 512, 98, 241, 189, 255),
    VTX(437, -77, -184, 246, 18, 53, 253, 149, 255),
    VTX(-96, 103, -385, 480, 245, 226, 215, 148, 255),
    VTX(16, -210, -299, 502, 56, 10, 197, 153, 255),
    VTX(-96, 103, -385, 186, 304, 226, 215, 148, 255),
    VTX(-620, 172, 0, 505, 512, 151, 200, 0, 255),
    VTX(-84, 543, -589, -5, 512, 3, 215, 144, 255),
    VTX(-313, -422, 0, 542, 124, 174, 169, 0, 255),
    VTX(16, -210, -299, 256, 118, 10, 197, 153, 255),
    VTX(16, -210, -299, 109, -212, 10, 197, 153, 255),
    VTX(142, -568, 0, 13, -381, 20, 138, 0, 255),
    VTX(-313, -422, 0, 256, -348, 174, 169, 0, 255),
    VTX(440, -316, 0, 188, -118, 59, 152, 0, 255),
    VTX(900, -91, 0, -170, 256, 93, 74, 0, 255),
    VTX(437, -77, 185, 255, 256, 53, 253, 107, 255),
    VTX(508, 135, 0, 635, 96, 98, 68, 0, 255),
    VTX(437, -77, 185, 767, 230, 53, 253, 107, 255),
    VTX(900, -91, 0, 256, 230, 93, 74, 0, 255),
    VTX(437, -77, -184, 255, 256, 53, 253, 149, 255),
    VTX(900, -91, 0, -170, 256, 93, 74, 0, 255),
    VTX(440, -316, 0, 188, -118, 59, 152, 0, 255),
    VTX(900, -91, 0, 256, 230, 93, 74, 0, 255),
    VTX(437, -77, -184, 767, 230, 53, 253, 149, 255),
    VTX(508, 135, 0, 635, 96, 98, 68, 0, 255),
    VTX(771, 560, 0, 139, 532, 0, 0, 120, 255),
    VTX(427, 530, 0, 408, 410, 0, 0, 120, 255),
    VTX(469, 4, 0, 139, 128, 0, 0, 120, 255),
    VTX(861, 345, 0, -29, 439, 0, 0, 120, 255),
}; 

static Vtx object_niwVtx_0004A0[4] = {
    VTX(-649, 70, 0, 512, 512, 0, 0, 120, 255),
    VTX(-811, -762, 0, 512, 0, 0, 0, 120, 255),
    VTX(39, -928, 0, 0, 0, 0, 0, 120, 255),
    VTX(201, -94, 0, 0, 512, 0, 0, 120, 255),
}; 

static Vtx object_niwVtx_0004E0[15] = {
    VTX(-119, 702, -6, 1277, 248, 22, 117, 0, 255),
    VTX(340, 130, -428, 1004, -69, 52, 27, 152, 255),
    VTX(-273, 134, -651, 928, 228, 235, 23, 141, 255),
    VTX(-448, 687, 2, 1281, 405, 184, 95, 0, 255),
    VTX(-273, 134, 651, 1631, 228, 236, 23, 115, 255),
    VTX(340, 130, 428, 1555, -69, 51, 28, 104, 255),
    VTX(661, 483, 0, 1280, -165, 89, 80, 0, 255),
    VTX(716, -314, -113, 743, -324, 73, 203, 179, 255),
    VTX(340, 130, 428, 275, -69, 51, 28, 104, 255),
    VTX(-273, 134, 651, 351, 228, 236, 23, 115, 255),
    VTX(42, -304, 430, 475, 3, 48, 213, 101, 255),
    VTX(413, -578, 0, 640, -222, 82, 170, 0, 255),
    VTX(42, -304, -430, 804, 3, 48, 213, 155, 255),
    VTX(716, -314, 113, 1816, -324, 73, 203, 77, 255),
    VTX(716, -314, 113, 536, -324, 73, 203, 77, 255),
}; 

static Vtx object_niwVtx_0005D0[8] = {
    VTX(303, -479, -330, 249, 761, 255, 220, 142, 255),
    VTX(105, -766, -91, 204, 1024, 222, 198, 158, 255),
    VTX(-99, 123, -97, -2, 424, 203, 21, 151, 255),
    VTX(399, -16, -321, 273, 422, 9, 32, 141, 255),
    VTX(1302, -353, 110, 977, 587, 50, 233, 150, 255),
    VTX(1008, 235, -43, 704, 193, 33, 39, 148, 255),
    VTX(800, -860, 166, 714, 1024, 34, 185, 167, 255),
    VTX(274, 382, -10, 232, 200, 250, 72, 161, 255),
}; 

static Vtx object_niwVtx_000650[8] = {
    VTX(-99, 129, 87, -2, 424, 203, 21, 105, 255),
    VTX(104, -760, 80, 204, 1024, 222, 198, 98, 255),
    VTX(302, -473, 320, 249, 761, 255, 220, 114, 255),
    VTX(1301, -347, -120, 977, 587, 50, 233, 106, 255),
    VTX(398, -10, 311, 273, 422, 9, 32, 115, 255),
    VTX(1008, 241, 32, 704, 193, 33, 39, 108, 255),
    VTX(799, -854, -176, 714, 1024, 34, 185, 89, 255),
    VTX(273, 388, 0, 232, 200, 250, 72, 95, 255),
}; 

static Vtx object_niwVtx_0006D0[3] = {
    VTX(14, 4, -5, 268, -204, 7, 137, 249, 255),
    VTX(697, -25, -324, -24, 510, 247, 137, 247, 255),
    VTX(721, -32, 199, 512, 510, 248, 137, 248, 255),
}; 

static Vtx object_niwVtx_000700[3] = {
    VTX(721, -32, -199, 512, 510, 248, 137, 7, 255),
    VTX(697, -25, 324, -24, 510, 251, 137, 1, 255),
    VTX(14, 4, 5, 268, -204, 22, 147, 42, 255),
}; 

static Vtx object_niwVtx_000730[6] = {
    VTX(-273, 134, -651, -153, 228, 235, 23, 141, 255),
    VTX(-273, 134, 651, -153, 228, 236, 23, 115, 255),
    VTX(-448, 687, 2, -392, 405, 184, 95, 0, 255),
    VTX(42, -304, 430, 6, 3, 48, 213, 101, 255),
    VTX(42, -304, -430, 6, 3, 48, 213, 155, 255),
    VTX(413, -578, 0, 77, -222, 82, 170, 0, 255),
}; 

static Vtx object_niwVtx_000790[24] = {
    VTX(840, -67, -389, 297, 101, 53, 11, 150, 255),
    VTX(967, -624, 0, 366, 385, 73, 161, 0, 255),
    VTX(967, -624, 0, 366, 385, 73, 161, 0, 255),
    VTX(840, -67, 389, 297, 101, 53, 11, 106, 255),
    VTX(266, -746, 230, 8, 453, 3, 146, 47, 255),
    VTX(266, -746, -230, 8, 453, 3, 146, 209, 255),
    VTX(967, -624, 0, 366, 385, 73, 161, 0, 255),
    VTX(266, -746, 230, 8, 453, 3, 146, 47, 255),
    VTX(840, -67, 389, 297, 101, 53, 11, 106, 255),
    VTX(840, -67, -389, 297, 101, 53, 11, 150, 255),
    VTX(266, -746, -230, 8, 453, 3, 146, 209, 255),
    VTX(266, -746, 230, 8, 453, 3, 146, 47, 255),
    VTX(911, 509, 0, 328, -194, 58, 104, 0, 255),
    VTX(266, -746, -230, 8, 453, 3, 146, 209, 255),
    VTX(967, -624, 0, 366, 385, 73, 161, 0, 255),
    VTX(911, 509, 0, 328, -194, 58, 104, 0, 255),
    VTX(840, -67, 389, 297, 101, 53, 11, 106, 255),
    VTX(911, 509, 0, 328, -194, 58, 104, 0, 255),
    VTX(911, 509, 0, 328, -194, 58, 104, 0, 255),
    VTX(840, -67, -389, 297, 101, 53, 11, 150, 255),
    VTX(426, -139, 0, 0, 1024, 0, 0, 120, 255),
    VTX(2293, -170, -329, 1024, 1024, 20, 0, 118, 255),
    VTX(2325, 1724, -329, 1024, 0, 20, 0, 118, 255),
    VTX(459, 1755, 0, 0, 0, 0, 0, 120, 255),
}; 

static Vtx object_niwVtx_000910[11] = {
    VTX(426, -139, 0, 0, 1024, 0, 0, 120, 255),
    VTX(2293, -170, 329, 1024, 1024, 236, 0, 118, 255),
    VTX(2325, 1724, 329, 1024, 0, 236, 0, 118, 255),
    VTX(459, 1755, 0, 0, 0, 0, 0, 120, 255),
    VTX(266, -746, -230, 8, 453, 3, 146, 209, 255),
    VTX(967, -624, 0, 366, 385, 73, 161, 0, 255),
    VTX(266, -746, 230, 8, 453, 3, 146, 47, 255),
    VTX(1307, -40, 0, 535, 83, 119, 5, 0, 255),
    VTX(840, -67, 389, 297, 101, 53, 11, 106, 255),
    VTX(840, -67, -389, 297, 101, 53, 11, 150, 255),
    VTX(911, 509, 0, 328, -194, 58, 104, 0, 255),
}; 

/* Gfx gNiw_NeckDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001580, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_0004E0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 5, 0, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 6, 1, 0, 1, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 7, 11, 12, 0),
    gsSP2Triangles(5, 13, 6, 0, 12, 2, 1, 0),
    gsSP2Triangles(11, 7, 14, 0, 14, 8, 10, 0),
    gsSP2Triangles(5, 6, 0, 0, 10, 11, 14, 0),
    gsSP1Triangle(1, 7, 12, 0),
    gsSPEndDisplayList(),
}; */

/* Gfx gNiw_HeadDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001280, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_000100[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP1Triangle(12, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP1Triangle(21, 20, 18, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001580, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(22, 23, 24, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
    gsSPVertex(&object_niwVtx_0002D0[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 5, 0),
    gsSP1Triangle(8, 5, 9, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001580, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001600, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(13, 14, 15, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSP1Triangle(19, 20, 21, 0),
    gsSP1Triangle(22, 23, 24, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 25, 0),
    gsSPVertex(&object_niwVtx_0004A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
}; */

/* Gfx gNiw_BodyDL[] = {
    // gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_000730[0], 6, 0),
    // gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001580, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_niwVtx_000790[0], 24, 6),
    gsSP2Triangles(0, 6, 7, 0, 8, 9, 1, 0),
    gsSP2Triangles(2, 10, 1, 0, 0, 11, 2, 0),
    gsSP2Triangles(12, 1, 13, 0, 3, 1, 14, 0),
    gsSP2Triangles(15, 0, 4, 0, 2, 16, 17, 0),
    gsSP2Triangles(18, 5, 3, 0, 19, 0, 20, 0),
    gsSP2Triangles(4, 5, 21, 0, 3, 22, 23, 0),
    gsSP1Triangle(24, 25, 4, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&object_niwVtx_000910[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001580, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 5, 0),
    gsSP2Triangles(7, 9, 10, 0, 10, 8, 7, 0),
    gsSP1Triangle(5, 9, 7, 0),
    gsSPEndDisplayList(),
}; */

// ===========================================================================================================================
u64 gNiw_NeckDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000500_rgb5a1_png_rgba16[] = {
    0xf7bbef79def7d6b5, 0xce6fce71def7e737, 0xef7be737d6b5deb5, 0xce73c631ce75def7, 0xe739def7ce73ce6f, 0xc62fbdefd6b3e737, 0xdef7deb3ce71bdef, 0xb5adbdefce71e737, 
    0xce71c62fd6afd6b5, 0xce73ce71ce71def7, 0xbdefc62fc631d6b5, 0xdef5d6b5d6b5d6f5, 0xc631bdf1be31ce71, 0xd6b5def7e739ef79, 0xdef5ce73ce73d6b1, 0xd6b3def7ef7bf7bd, 
    
};

Vtx gNiw_NeckDL_gi_niwatori_neck_mesh_layer_Opaque_vtx_cull[8] = {
    {{{-804, -139, -450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-804, -139, 450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-804, 951, 450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-804, 951, -450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{956, -139, -450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{956, -139, 450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{956, 951, 450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{956, 951, -450},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gNiw_NeckDL_gi_niwatori_neck_mesh_layer_Opaque_vtx_0[30] = {
    {{{-233, 368, -450},0, {317, 336},{0xD0, 0x90, 0x23, 0xFE}}},
    {{{956, 752, 0},0, {-35, -128},{0x6C, 0x25, 0x38, 0xFE}}},
    {{{-85, 951, 0},0, {29, 356},{0xCF, 0x22, 0x70, 0xFE}}},
    {{{936, 230, 0},0, {195, -214},{0x55, 0xE0, 0x59, 0xFE}}},
    {{{-233, 368, -450},0, {317, 336},{0xC3, 0x70, 0x2, 0xFE}}},
    {{{-143, -139, 0},0, {524, 223},{0xF0, 0xAE, 0x60, 0xFE}}},
    {{{-233, 368, 450},0, {317, 336},{0xE6, 0x88, 0xDF, 0xFE}}},
    {{{-85, 951, 0},0, {29, 356},{0xD3, 0x32, 0x94, 0xFE}}},
    {{{956, 752, 0},0, {-35, -128},{0x5E, 0xDC, 0xB2, 0xFE}}},
    {{{-143, -139, 0},0, {524, 223},{0xCA, 0x1E, 0x91, 0xFE}}},
    {{{-233, 368, 450},0, {317, 336},{0xD3, 0x76, 0xF0, 0xFE}}},
    {{{936, 230, 0},0, {195, -214},{0x37, 0x38, 0x9C, 0xFE}}},
    {{{-233, 368, 450},0, {317, 336},{0xA8, 0x1, 0xA4, 0xFE}}},
    {{{956, 752, 0},0, {-35, -128},{0x38, 0x34, 0x9A, 0xFE}}},
    {{{936, 230, 0},0, {195, -214},{0x28, 0xBF, 0x9A, 0xFE}}},
    {{{-233, 368, -450},0, {317, 336},{0x9A, 0x8, 0x4C, 0xFE}}},
    {{{936, 230, 0},0, {195, -214},{0x67, 0xBD, 0x20, 0xFE}}},
    {{{956, 752, 0},0, {-35, -128},{0x6D, 0x32, 0x2B, 0xFE}}},
    {{{-143, -139, 0},0, {524, 223},{0x15, 0xBF, 0x6B, 0xFE}}},
    {{{-233, 368, -450},0, {317, 336},{0x29, 0x78, 0xF8, 0xFE}}},
    {{{-804, 247, 0},0, {454, 572},{0xC0, 0x57, 0x44, 0xFE}}},
    {{{-85, 951, 0},0, {29, 356},{0x42, 0x16, 0x96, 0xFE}}},
    {{{-233, 368, 450},0, {317, 336},{0x50, 0xA8, 0x2B, 0xFE}}},
    {{{-804, 247, 0},0, {454, 572},{0xB8, 0xC0, 0xAD, 0xFE}}},
    {{{-804, 247, 0},0, {454, 572},{0x9F, 0x1E, 0xB3, 0xFE}}},
    {{{-233, 368, 450},0, {317, 336},{0x3E, 0x6E, 0xD, 0xFE}}},
    {{{-143, -139, 0},0, {524, 223},{0x51, 0x25, 0xA5, 0xFE}}},
    {{{-804, 247, 0},0, {454, 572},{0xE4, 0x93, 0x3C, 0xFE}}},
    {{{-233, 368, -450},0, {317, 336},{0x4D, 0x9D, 0xE9, 0xFE}}},
    {{{-85, 951, 0},0, {29, 356},{0x4E, 0xB, 0x64, 0xFE}}},
};

Gfx gNiw_NeckDL_gi_niwatori_neck_mesh_layer_Opaque_tri_0[] = {
    gsSPVertex(gNiw_NeckDL_gi_niwatori_neck_mesh_layer_Opaque_vtx_0 + 0, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_NeckDL_f3d_material_032_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_NeckDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000500_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx gNiw_NeckDL[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(gNiw_NeckDL_gi_niwatori_neck_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPDisplayList(mat_gNiw_NeckDL_f3d_material_032_layerOpaque),
    gsSPDisplayList(gNiw_NeckDL_gi_niwatori_neck_mesh_layer_Opaque_tri_0),
    gsSPEndDisplayList(),
};

// ===================================================================================================
u64 gNiw_HeadDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000400_rgb5a1_png_rgba16[] = {
    0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 0xef7bef7be739e739, 0xe739e739e739e739, 0xef7bf7bdf7bdf7bd, 
    0xf7bdf7bdf7bde739, 0xdef7ce73c631c631, 0xce73d6b5def7d6b5, 0xd6b5e739f7bdf7bd, 0xf7bdf7bde739d6b5, 0xb5ad9ce794a58423, 0x8c6194a5d6b5e739, 0xe739d6b5e739f7bd, 
    0xf7bdef7be739bdef, 0x94a373997b93734f, 0x734f7bd994a5c631, 0xef7bdef7def7f7bd, 0xf7bde739b5ad94a5, 0x7bd79cc98c474a45, 0x39c5528b6b5994a5, 0xd6f7e739d6b5f7bd, 
    0xf7bddef7ad6bb5ab, 0xce53b5499ce9739d, 0x18c5298b63178c63, 0xb5addef7d6b5f7bd, 0xf7bdc631a529ef79, 0xded18c55f7bd8c63, 0x08430193420f7bdf, 0x94a5def7d6b5f7bd, 
    
};

u64 gNiw_HeadDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000500_rgb5a1_png_rgba16[] = {
    0xf7bbef79def7d6b5, 0xce6fce71def7e737, 0xef7be737d6b5deb5, 0xce73c631ce75def7, 0xe739def7ce73ce6f, 0xc62fbdefd6b3e737, 0xdef7deb3ce71bdef, 0xb5adbdefce71e737, 
    0xce71c62fd6afd6b5, 0xce73ce71ce71def7, 0xbdefc62fc631d6b5, 0xdef5d6b5d6b5d6f5, 0xc631bdf1be31ce71, 0xd6b5def7e739ef79, 0xdef5ce73ce73d6b1, 0xd6b3def7ef7bf7bd, 
    
};

u64 gNiw_HeadDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000200_rgb5a1_png_rgba16[] = {
    0xead6e18ed90cd90e, 0xd94cd90cd0c8b886, 0x9082914ab35acc20, 0xdc22dc62ee72f7bc, 0xe8c8e0c6e14ad1cb, 0xda8fd9c9b8839043, 0x78829844b0c6c14c, 0xd254e528ee30f738, 
    0xe888e106e143da05, 0xda89b98590438842, 0xb0c8c94cc90cc90c, 0xc990ca12b9cee5ee, 0xf086e885e101d181, 0xb14380c37845b8c7, 0xda0dc9cdd149c884, 0xa84480428108ddee, 
    0xe842f001d881a8c3, 0x90839043c045e0c7, 0xd9cdc189a0c38845, 0x70837884b14cdb9c, 0xf043e801c0039045, 0xa003d803f001d043, 0xa0c5888568437085, 0x9086c10ac8c8c1d0, 
    0xe801c841a003a005, 0xd801f001d803a003, 0x900390059883b987, 0xc9cdc949984690c6, 0xd0039843a843d801, 0xf003f041c803a803, 0xb003d003d901c985, 0xc185990368457884, 
    0xa8039003d803f001, 0xf003e841c801c001, 0xc803c001a88398c5, 0x88c368439084a0c8, 0x98439803e803f001, 0xf041f001c803c803, 0xe043c043a8439843, 0x9087a086b886a086, 
    0x9003a005e003e801, 0xe803f001e803d043, 0xe881e843e043d045, 0xc905d1c9b1089044, 0x88039803d003f041, 0xf041f001f001d801, 0xd803f003f003e843, 0xc905d1c799457044, 
    0x78039003c801e801, 0xf001f001f001d001, 0xc003e801f041e841, 0xc0c3a14579056844, 0x70058803b003d001, 0xe001e801e001b801, 0xb843d001e001b803, 0x9043784568446844, 
    0x680580039005a843, 0xc003c803b8039803, 0xa005b005b0439003, 0x7803680568427044, 0x6805700588059003, 0x9005904388038805, 0x9005980390038803, 0x800280027002810a, 
    
};

Vtx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_cull[8] = {
    {{{-814, -869, -350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-814, -869, 350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-814, 731, 350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-814, 731, -350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{635, -869, -350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{635, -869, 350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{635, 731, 350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{635, 731, -350},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_0[6] = {
    {{{-165, -669, 0},0, {479, -21},{0x12, 0x82, 0x0, 0xFE}}},
    {{{-65, -119, 350},0, {64, 512},{0x2F, 0xF8, 0x76, 0xFE}}},
    {{{-415, -319, 300},0, {533, 512},{0xD1, 0xE6, 0x73, 0xFE}}},
    {{{235, -419, 0},0, {-62, -28},{0x76, 0xD0, 0x0, 0xFE}}},
    {{{-65, -119, -350},0, {64, 512},{0x2F, 0xF8, 0x8A, 0xFE}}},
    {{{-415, -319, -300},0, {533, 512},{0xD1, 0xE6, 0x8D, 0xFE}}},
};

Gfx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_0[] = {
    gsSPVertex(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_0 + 0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 4, 0, 0),
    gsSPEndDisplayList(),
};

Vtx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_1[24] = {
    {{{135, 131, 0},0, {27, 291},{0x64, 0x4F, 0x0, 0xFE}}},
    {{{-265, 231, 200},0, {371, 291},{0xFC, 0x61, 0x51, 0xFE}}},
    {{{-65, -119, 350},0, {256, 0},{0x2F, 0xF8, 0x76, 0xFE}}},
    {{{-65, -119, -350},0, {256, 0},{0x2F, 0xF8, 0x8A, 0xFE}}},
    {{{-265, 231, -200},0, {371, 291},{0xFC, 0x61, 0xAF, 0xFE}}},
    {{{135, 131, 0},0, {108, 339},{0x64, 0x4F, 0x0, 0xFE}}},
    {{{235, -419, 0},0, {-160, 0},{0x76, 0xD0, 0x0, 0xFE}}},
    {{{-265, 231, -200},0, {162, -189},{0xFC, 0x61, 0xAF, 0xFE}}},
    {{{-715, 131, 0},0, {0, 164},{0x8D, 0x37, 0x0, 0xFE}}},
    {{{-265, 231, 200},0, {-162, -189},{0xFC, 0x61, 0x51, 0xFE}}},
    {{{135, 131, 0},0, {0, -485},{0x64, 0x4F, 0x0, 0xFE}}},
    {{{-415, -319, 300},0, {0, 0},{0xD1, 0xE6, 0x73, 0xFE}}},
    {{{-615, -519, 0},0, {182, 247},{0x9D, 0xB0, 0x0, 0xFE}}},
    {{{-165, -669, 0},0, {401, 0},{0x12, 0x82, 0x0, 0xFE}}},
    {{{-415, -319, -300},0, {0, 0},{0xD1, 0xE6, 0x8D, 0xFE}}},
    {{{-715, 131, 0},0, {-111, 268},{0x8D, 0x37, 0x0, 0xFE}}},
    {{{-615, -519, 0},0, {404, 268},{0x9D, 0xB0, 0x0, 0xFE}}},
    {{{-415, -319, 300},0, {256, 0},{0xD1, 0xE6, 0x73, 0xFE}}},
    {{{-415, -319, -300},0, {256, 0},{0xD1, 0xE6, 0x8D, 0xFE}}},
    {{{-265, 231, 200},0, {-48, 307},{0xFC, 0x61, 0x51, 0xFE}}},
    {{{-715, 131, 0},0, {313, 451},{0x8D, 0x37, 0x0, 0xFE}}},
    {{{-65, -119, 350},0, {-57, 0},{0x2F, 0xF8, 0x76, 0xFE}}},
    {{{-265, 231, -200},0, {-48, 307},{0xFC, 0x61, 0xAF, 0xFE}}},
    {{{-65, -119, -350},0, {-57, 0},{0x2F, 0xF8, 0x8A, 0xFE}}},
};

Gfx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_1[] = {
    gsSPVertex(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_1 + 0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 2, 6, 0, 6, 3, 5, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 15, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 21, 19, 0),
    gsSP2Triangles(20, 22, 18, 0, 22, 23, 18, 0),
    gsSPEndDisplayList(),
};

Vtx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_2[8] = {
    {{{135, -469, 0},0, {48, 1072},{0x50, 0x9D, 0x0, 0xFE}}},
    {{{35, -169, -200},0, {48, 1072},{0x2B, 0xCA, 0x95, 0xFE}}},
    {{{635, -69, 0},0, {48, 1072},{0x50, 0x9D, 0x0, 0xFE}}},
    {{{35, -169, 200},0, {48, 1072},{0x2B, 0xCA, 0x6B, 0xFE}}},
    {{{85, 131, 0},0, {48, 1072},{0x26, 0x79, 0x0, 0xFE}}},
    {{{35, -169, 200},0, {48, 1072},{0x14, 0x40, 0x6C, 0xFE}}},
    {{{635, -69, 0},0, {48, 1072},{0x26, 0x79, 0x0, 0xFE}}},
    {{{35, -169, -200},0, {48, 1072},{0x14, 0x40, 0x94, 0xFE}}},
};

Gfx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_2[] = {
    gsSPVertex(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_2 + 0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};

Vtx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_3[8] = {
    {{{85, 31, 0},0, {140, 128},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{285, 531, 0},0, {-29, 439},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{85, 731, 0},0, {140, 533},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{-265, 531, 0},0, {408, 411},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{36, -19, 0},0, {0, 546},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{-814, -19, 0},0, {493, 546},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{-814, -869, 0},0, {493, 20},{0x0, 0x0, 0x7F, 0xFE}}},
    {{{36, -869, 0},0, {0, 20},{0x0, 0x0, 0x7F, 0xFE}}},
};

Gfx gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_3[] = {
    gsSPVertex(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_3 + 0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_HeadDL_f3d_material_033_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_HeadDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000400_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 3, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 3, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 28),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_HeadDL_f3d_material_032_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_HeadDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000500_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_HeadDL_f3d_material_034_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 223, 190, 31, 255),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_HeadDL_f3d_material_035_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_HeadDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000200_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx gNiw_HeadDL[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPDisplayList(mat_gNiw_HeadDL_f3d_material_033_layerOpaque),
    gsSPDisplayList(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_0),
    gsSPDisplayList(mat_gNiw_HeadDL_f3d_material_032_layerOpaque),
    gsSPDisplayList(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_1),
    gsSPDisplayList(mat_gNiw_HeadDL_f3d_material_034_layerOpaque),
    gsSPDisplayList(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_2),
    gsSPDisplayList(mat_gNiw_HeadDL_f3d_material_035_layerOpaque),
    gsSPDisplayList(gNiw_HeadDL_gi_niwatori_head_mesh_layer_Opaque_tri_3),
    gsSPEndDisplayList(),
};

// =========================================================================================================================

u64 gNiw_BodyDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000500_rgb5a1_png_rgba16[] = {
    0xf7bbef79def7d6b5, 0xce6fce71def7e737, 0xef7be737d6b5deb5, 0xce73c631ce75def7, 0xe739def7ce73ce6f, 0xc62fbdefd6b3e737, 0xdef7deb3ce71bdef, 0xb5adbdefce71e737, 
    0xce71c62fd6afd6b5, 0xce73ce71ce71def7, 0xbdefc62fc631d6b5, 0xdef5d6b5d6b5d6f5, 0xc631bdf1be31ce71, 0xd6b5def7e739ef79, 0xdef5ce73ce73d6b1, 0xd6b3def7ef7bf7bd, 
    
};

u64 gNiw_BodyDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000000_rgb5a1_png_rgba16[] = {
    0xf7bcf7bcf7bcf7bd, 0xef7af7bcf7bcf7bc, 0xf7bcf7bcf7bcf7bd, 0xf7bdc630bdecce72, 0xf7bcf7bcf7bddef7, 0xe738f7bcf7bcf7bc, 0xf7bcf7bcf7bdce73, 0xb5acd672def6f7bc, 
    0xf7bcf7bcf7bdce73, 0xef7af7bdf7bdf7bd, 0xef7bef7bb5adad6b, 0xe738e738f7bcf7bc, 0xf7bcf7bddef7f7bd, 0xf7bdef7bdef7d6b5, 0xbdefe739f7bdf7bd, 0xf7bdf7bdf7bdf7bc, 
    0xf7bcf7bdc631f7bd, 0xe739d6b5bdefc631, 0xf7bdef7bef7bdef7, 0xdef7d6b5def7d6b6, 0xf7bce739ad6be739, 0xd6b5bdefc631e739, 0xd6b5bdef9ce79ce7, 0x9ce7ad6bb5ace738, 
    0xf7bce739a529d6b5, 0xc631bdefdef7ce73, 0xad6b94a594e79ce6, 0xdef6e738def6e738, 0xf7bddef7b5add6b5, 0xad6be739c631c631, 0xdef7f7bdf7bdf7bd, 0xf7bdf7bdef3ae738, 
    0xf7bdd6b5c631bdef, 0xd6b5c631bdeff7bd, 0xf7bde739d6b5c631, 0xc631c631ce73ef7a, 0xf7bdce73c631b5ad, 0xc631bdefef7be739, 0xce73b5adad6b94a5, 0x94a594a5c631ef7a, 
    0xf7bdbdefc631ad6b, 0xc631d6b5e739bdef, 0xce73def7f7bdf7bd, 0xf7bdf7bcf7bcf7bc, 0xef7bb5add6b5d6b5, 0xce73ce73def7f7bd, 0xef7be739e739e739, 0xef7bf7bdf7bcf7bc, 
    0xc631e739ef7be739, 0xef7be739ce73ce73, 0xbdefad6ba529ad6b, 0xce73def7f7bdf7bc, 0xdef7d6b5ce73ce73, 0xce73ce73c631bdef, 0xdef7e739f7bdc630, 0x94a4b5addef7def6, 
    0xd6b5d6b5ef7bef7b, 0xef7be739e739ce73, 0xad6bb5ade739f7bd, 0xefbcef7ae738e738, 0xd6b5e739def7ce73, 0xce73c631ce73d6b5, 0xb5aca52894a4c632, 0xe738e738e77aef78, 
    
};

Vtx gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_vtx_cull[8] = {
    {{{-850, -850, -650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-850, -850, 650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-850, 2050, 650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-850, 2050, -650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{2398, -850, -650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{2398, -850, 650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{2398, 2050, 650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{2398, 2050, -650},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_vtx_0[12] = {
    {{{200, 700, 0},0, {340, -8},{0xEB, 0x7C, 0xE, 0xFE}}},
    {{{650, 600, 0},0, {554, 21},{0x24, 0x79, 0xF6, 0xFE}}},
    {{{450, 250, -450},0, {455, 186},{0x2D, 0x36, 0x96, 0xFE}}},
    {{{450, 250, 450},0, {455, 186},{0x20, 0x46, 0x65, 0xFE}}},
    {{{-150, -250, 650},0, {189, 432},{0xD9, 0x15, 0x77, 0xFE}}},
    {{{-700, 300, 0},0, {-62, 157},{0xB8, 0x69, 0x1, 0xFE}}},
    {{{-150, -250, -650},0, {189, 432},{0xD5, 0x3, 0x88, 0xFE}}},
    {{{700, -550, 0},0, {582, 571},{0x5E, 0xAB, 0xF5, 0xFE}}},
    {{{1200, 400, 0},0, {810, 127},{0x3C, 0x6B, 0x20, 0xFE}}},
    {{{0, -850, 250},0, {257, 713},{0xEE, 0x85, 0x1B, 0xFE}}},
    {{{-850, -400, 0},0, {-139, 494},{0x9D, 0xB3, 0x16, 0xFE}}},
    {{{0, -850, -250},0, {257, 713},{0xFB, 0x91, 0xC3, 0xFE}}},
};

Gfx gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_tri_0[] = {
    gsSPVertex(gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_vtx_0 + 0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 4, 0, 0),
    gsSP2Triangles(0, 6, 5, 0, 2, 6, 0, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 8, 0),
    gsSP2Triangles(8, 2, 1, 0, 1, 3, 8, 0),
    gsSP2Triangles(8, 3, 7, 0, 7, 3, 4, 0),
    gsSP2Triangles(7, 4, 9, 0, 10, 9, 4, 0),
    gsSP2Triangles(4, 5, 10, 0, 10, 5, 6, 0),
    gsSP2Triangles(6, 11, 10, 0, 11, 6, 7, 0),
    gsSP2Triangles(11, 7, 9, 0, 10, 11, 9, 0),
    gsSPEndDisplayList(),
};

Vtx gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_vtx_1[4] = {
    {{{148, -200, 0},0, {0, 512},{0xFC, 0x2, 0x7F, 0xFE}}},
    {{{2398, -200, 0},0, {512, 512},{0xF4, 0x7, 0x7E, 0xFE}}},
    {{{2398, 2050, 0},0, {512, 0},{0x11, 0x3C, 0x6F, 0xFE}}},
    {{{148, 2050, 0},0, {0, 0},{0x5, 0x15, 0x7D, 0xFE}}},
};

Gfx gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_tri_1[] = {
    gsSPVertex(gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_vtx_1 + 0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_BodyDL_f3d_material_036_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_BodyDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000500_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_BodyDL_f3d_material_037_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_BodyDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000000_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx gNiw_BodyDL[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPDisplayList(mat_gNiw_BodyDL_f3d_material_036_layerOpaque),
    gsSPDisplayList(gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_tri_0),
    gsSPDisplayList(mat_gNiw_BodyDL_f3d_material_037_layerOpaque),
    gsSPDisplayList(gNiw_BodyDL_gi_niwatori_body_mesh_layer_Opaque_tri_1),
    gsSPEndDisplayList(),
};

// ===========================================================================================================================================

/* Gfx gNiw_R_WingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_0005D0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 1, 0, 0, 3, 7, 5, 0),
    gsSP2Triangles(2, 7, 3, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
}; */

u64 gNiw_R_WingDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000000_rgb5a1_png_rgba16[] = {
    0xf7bcf7bcf7bcf7bd, 0xef7af7bcf7bcf7bc, 0xf7bcf7bcf7bcf7bd, 0xf7bdc630bdecce72, 0xf7bcf7bcf7bddef7, 0xe738f7bcf7bcf7bc, 0xf7bcf7bcf7bdce73, 0xb5acd672def6f7bc, 
    0xf7bcf7bcf7bdce73, 0xef7af7bdf7bdf7bd, 0xef7bef7bb5adad6b, 0xe738e738f7bcf7bc, 0xf7bcf7bddef7f7bd, 0xf7bdef7bdef7d6b5, 0xbdefe739f7bdf7bd, 0xf7bdf7bdf7bdf7bc, 
    0xf7bcf7bdc631f7bd, 0xe739d6b5bdefc631, 0xf7bdef7bef7bdef7, 0xdef7d6b5def7d6b6, 0xf7bce739ad6be739, 0xd6b5bdefc631e739, 0xd6b5bdef9ce79ce7, 0x9ce7ad6bb5ace738, 
    0xf7bce739a529d6b5, 0xc631bdefdef7ce73, 0xad6b94a594e79ce6, 0xdef6e738def6e738, 0xf7bddef7b5add6b5, 0xad6be739c631c631, 0xdef7f7bdf7bdf7bd, 0xf7bdf7bdef3ae738, 
    0xf7bdd6b5c631bdef, 0xd6b5c631bdeff7bd, 0xf7bde739d6b5c631, 0xc631c631ce73ef7a, 0xf7bdce73c631b5ad, 0xc631bdefef7be739, 0xce73b5adad6b94a5, 0x94a594a5c631ef7a, 
    0xf7bdbdefc631ad6b, 0xc631d6b5e739bdef, 0xce73def7f7bdf7bd, 0xf7bdf7bcf7bcf7bc, 0xef7bb5add6b5d6b5, 0xce73ce73def7f7bd, 0xef7be739e739e739, 0xef7bf7bdf7bcf7bc, 
    0xc631e739ef7be739, 0xef7be739ce73ce73, 0xbdefad6ba529ad6b, 0xce73def7f7bdf7bc, 0xdef7d6b5ce73ce73, 0xce73ce73c631bdef, 0xdef7e739f7bdc630, 0x94a4b5addef7def6, 
    0xd6b5d6b5ef7bef7b, 0xef7be739e739ce73, 0xad6bb5ade739f7bd, 0xefbcef7ae738e738, 0xd6b5e739def7ce73, 0xce73c631ce73d6b5, 0xb5aca52894a4c632, 0xe738e738e77aef78, 
    
};

Vtx gNiw_R_WingDL_gi_niwatori_r_wing_mesh_layer_Opaque_vtx_cull[8] = {
    {{{-395, -830, -187},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-395, -830, 348},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-395, 256, 348},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-395, 256, -187},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1055, -830, -187},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1055, -830, 348},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1055, 256, 348},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1055, 256, -187},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gNiw_R_WingDL_gi_niwatori_r_wing_mesh_layer_Opaque_vtx_0[8] = {
    {{{-395, -189, 238},0, {24, 301},{0xA7, 0xE7, 0xA9, 0xFE}}},
    {{{-95, 256, 193},0, {116, 119},{0xCD, 0x3E, 0x9D, 0xFE}}},
    {{{55, 15, -187},0, {171, 178},{0xE8, 0x40, 0x95, 0xFE}}},
    {{{705, 256, 193},0, {402, 80},{0x15, 0x41, 0x95, 0xFE}}},
    {{{1055, -120, 254},0, {538, 221},{0x1F, 0xE5, 0x88, 0xFE}}},
    {{{5, -457, -184},0, {166, 369},{0xED, 0xB7, 0x9A, 0xFE}}},
    {{{555, -830, 348},0, {372, 512},{0x1B, 0xA9, 0xA7, 0xFE}}},
    {{{-195, -788, 322},0, {118, 512},{0xEA, 0xA0, 0xB0, 0xFE}}},
};

Gfx gNiw_R_WingDL_gi_niwatori_r_wing_mesh_layer_Opaque_tri_0[] = {
    gsSPVertex(gNiw_R_WingDL_gi_niwatori_r_wing_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 2, 4, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(5, 7, 0, 0, 0, 2, 5, 0),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_R_WingDL_f3d_material_037_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_R_WingDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000000_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx gNiw_R_WingDL[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(gNiw_R_WingDL_gi_niwatori_r_wing_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPDisplayList(mat_gNiw_R_WingDL_f3d_material_037_layerOpaque),
    gsSPDisplayList(gNiw_R_WingDL_gi_niwatori_r_wing_mesh_layer_Opaque_tri_0),
    gsSPEndDisplayList(),
};

// ====================================================================================================================

Gfx gNiw_R_FootDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_002080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_000700[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

/* Gfx gNiw_L_WingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_001880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_000650[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(3, 5, 4, 0, 2, 6, 3, 0),
    gsSP2Triangles(2, 1, 6, 0, 5, 7, 4, 0),
    gsSP2Triangles(4, 7, 0, 0, 2, 4, 0, 0),
    gsSPEndDisplayList(),
}; */

u64 gNiw_L_WingDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000000_rgb5a1_png_rgba16[] = {
    0xf7bcf7bcf7bcf7bd, 0xef7af7bcf7bcf7bc, 0xf7bcf7bcf7bcf7bd, 0xf7bdc630bdecce72, 0xf7bcf7bcf7bddef7, 0xe738f7bcf7bcf7bc, 0xf7bcf7bcf7bdce73, 0xb5acd672def6f7bc, 
    0xf7bcf7bcf7bdce73, 0xef7af7bdf7bdf7bd, 0xef7bef7bb5adad6b, 0xe738e738f7bcf7bc, 0xf7bcf7bddef7f7bd, 0xf7bdef7bdef7d6b5, 0xbdefe739f7bdf7bd, 0xf7bdf7bdf7bdf7bc, 
    0xf7bcf7bdc631f7bd, 0xe739d6b5bdefc631, 0xf7bdef7bef7bdef7, 0xdef7d6b5def7d6b6, 0xf7bce739ad6be739, 0xd6b5bdefc631e739, 0xd6b5bdef9ce79ce7, 0x9ce7ad6bb5ace738, 
    0xf7bce739a529d6b5, 0xc631bdefdef7ce73, 0xad6b94a594e79ce6, 0xdef6e738def6e738, 0xf7bddef7b5add6b5, 0xad6be739c631c631, 0xdef7f7bdf7bdf7bd, 0xf7bdf7bdef3ae738, 
    0xf7bdd6b5c631bdef, 0xd6b5c631bdeff7bd, 0xf7bde739d6b5c631, 0xc631c631ce73ef7a, 0xf7bdce73c631b5ad, 0xc631bdefef7be739, 0xce73b5adad6b94a5, 0x94a594a5c631ef7a, 
    0xf7bdbdefc631ad6b, 0xc631d6b5e739bdef, 0xce73def7f7bdf7bd, 0xf7bdf7bcf7bcf7bc, 0xef7bb5add6b5d6b5, 0xce73ce73def7f7bd, 0xef7be739e739e739, 0xef7bf7bdf7bcf7bc, 
    0xc631e739ef7be739, 0xef7be739ce73ce73, 0xbdefad6ba529ad6b, 0xce73def7f7bdf7bc, 0xdef7d6b5ce73ce73, 0xce73ce73c631bdef, 0xdef7e739f7bdc630, 0x94a4b5addef7def6, 
    0xd6b5d6b5ef7bef7b, 0xef7be739e739ce73, 0xad6bb5ade739f7bd, 0xefbcef7ae738e738, 0xd6b5e739def7ce73, 0xce73c631ce73d6b5, 0xb5aca52894a4c632, 0xe738e738e77aef78, 
    
};

Vtx gNiw_L_WingDL_gi_niwatori_l_wing_mesh_layer_Opaque_vtx_cull[8] = {
    {{{-359, -831, -343},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-359, -831, 184},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-359, 256, 184},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{-359, 256, -343},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1091, -831, -343},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1091, -831, 184},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1091, 256, 184},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
    {{{1091, 256, -343},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gNiw_L_WingDL_gi_niwatori_l_wing_mesh_layer_Opaque_vtx_0[8] = {
    {{{91, 20, 181},0, {171, 178},{0xF2, 0x2D, 0x76, 0xFE}}},
    {{{-59, 256, -202},0, {116, 119},{0xCE, 0x41, 0x61, 0xFE}}},
    {{{-359, -215, -199},0, {24, 301},{0xA9, 0xF6, 0x5C, 0xFE}}},
    {{{741, 256, -202},0, {402, 80},{0x17, 0x3C, 0x6E, 0xFE}}},
    {{{1091, -120, -258},0, {538, 221},{0x1C, 0xF5, 0x7B, 0xFE}}},
    {{{41, -451, 184},0, {166, 369},{0xE8, 0xBA, 0x67, 0xFE}}},
    {{{-159, -788, -317},0, {118, 512},{0xCE, 0xAE, 0x53, 0xFE}}},
    {{{591, -831, -343},0, {372, 512},{0x1B, 0xAA, 0x5A, 0xFE}}},
};

Gfx gNiw_L_WingDL_gi_niwatori_l_wing_mesh_layer_Opaque_tri_0[] = {
    gsSPVertex(gNiw_L_WingDL_gi_niwatori_l_wing_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(5, 0, 2, 0, 2, 6, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 4, 0),
    gsSPEndDisplayList(),
};

Gfx mat_gNiw_L_WingDL_f3d_material_037_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPClearGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPTileSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gNiw_L_WingDL_zelda_gi_niwatori_zelda_gi_niwatoriTex_000000_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
    gsSPEndDisplayList(),
};

Gfx gNiw_L_WingDL[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(gNiw_L_WingDL_gi_niwatori_l_wing_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPDisplayList(mat_gNiw_L_WingDL_f3d_material_037_layerOpaque),
    gsSPDisplayList(gNiw_L_WingDL_gi_niwatori_l_wing_mesh_layer_Opaque_tri_0),
    gsSPEndDisplayList(),
};

// =============================================================================================================================

Gfx gNiw_L_FootDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_niwTex_002080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_niwVtx_0006D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 object_niwTex_001280[] = {
#include "assets//objects/object_niw//object_niwTex_001280.rgb5a1.inc.c"
};

u64 object_niwTex_001480[] = {
#include "assets//objects/object_niw//object_niwTex_001480.rgb5a1.inc.c"
};

u64 object_niwTex_001580[] = {
#include "assets//objects/object_niw//object_niwTex_001580.rgb5a1.inc.c"
};

u64 object_niwTex_001600[] = {
#include "assets//objects/object_niw//object_niwTex_001600.rgb5a1.inc.c"
};

u64 object_niwTex_001680[] = {
#include "assets//objects/object_niw//object_niwTex_001680.rgb5a1.inc.c"
};

u64 object_niwTex_001880[] = {
#include "assets//objects/object_niw//object_niwTex_001880.rgb5a1.inc.c"
};

u64 object_niwTex_002080[] = {
#include "assets//objects/object_niw//object_niwTex_002080.rgb5a1.inc.c"
};

u64 object_niwTex_002180[] = {
#include "assets//objects/object_niw//object_niwTex_002180.rgb5a1.inc.c"
};

static Vtx object_niwVtx_002380[3] = {
    VTX(400, -246, 0, 768, 563, 0, 0, 127, 255),
    VTX(-400, -246, 0, -256, 563, 0, 0, 127, 255),
    VTX(0, 409, 0, 256, -256, 0, 0, 127, 255),
}; 

Gfx gNiw_HaneDispDL[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_niwTex_002180, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPEndDisplayList(),
}; 

Gfx gNiw_HaneDL[] = {
    gsSPVertex(&object_niwVtx_002380[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

StandardLimb sNiwSkelLimb_002440 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sNiwSkelLimb_00244C = { 
    { 0, 855, 262 },
    0x02, 0xFF,
    NULL
}; 

StandardLimb sNiwSkelLimb_002458 = { 
    { 0, 0, 0 },
    0x03, 0x0C,
    NULL
}; 

StandardLimb sNiwSkelLimb_002464 = { 
    { 0, 0, 0 },
    0x04, 0xFF,
    gNiw_BodyDL
}; 

StandardLimb sNiwSkelLimb_002470 = { 
    { 457, -640, 42 },
    0x05, 0x06,
    NULL
}; 

StandardLimb sNiwSkelLimb_00247C = { 
    { -200, 0, 0 }, // a - negative to front
    0xFF, 0xFF,
    gNiw_L_FootDL
}; 

StandardLimb sNiwSkelLimb_002488 = { 
    { 37, 183, 252 },
    0x07, 0x08,
    NULL
}; 

StandardLimb sNiwSkelLimb_002494 = { 
    { 0, 0, 200 },
    0xFF, 0xFF,
    gNiw_L_WingDL
}; 

StandardLimb sNiwSkelLimb_0024A0 = { 
    { 457, -640, -42 },
    0x09, 0x0A,
    NULL
}; 

StandardLimb sNiwSkelLimb_0024AC = { 
    { -200, 0, 0 }, // a - negative to front
    0xFF, 0xFF,
    gNiw_R_FootDL
}; 

StandardLimb sNiwSkelLimb_0024B8 = { 
    { 37, 183, -240 },
    0x0B, 0xFF,
    NULL
}; 

StandardLimb sNiwSkelLimb_0024C4 = { 
    { 0, 0, -200 },
    0xFF, 0xFF,
    gNiw_R_WingDL
}; 

StandardLimb sNiwSkelLimb_0024D0 = { 
    { 0, 0, 0 },
    0x0D, 0xFF,
    NULL
}; 
/* 
StandardLimb sNiwSkelLimb_0024DC = { 
    { 0, 0, 0 },
    0x0E, 0xFF,
    gNiw_NeckDL
}; 

StandardLimb sNiwSkelLimb_0024E8 = { 
    { 834, 0, 0 },
    0xFF, 0xFF,
    gNiw_HeadDL
}; 
*/
StandardLimb sNiwSkelLimb_0024DC = { 
    { 100, 200, 0 }, // a - back, negative front b - height, c - ?
    0x0E, 0xFF,
    gNiw_NeckDL
}; 

StandardLimb sNiwSkelLimb_0024E8 = { 
    { 900, 735, 0 }, // a - height, b - front, c - side
    0xFF, 0xFF,
    gNiw_HeadDL
}; 

static void* sNiwSkelLimbs[15] = {
    &sNiwSkelLimb_002440,
    &sNiwSkelLimb_00244C,
    &sNiwSkelLimb_002458,
    &sNiwSkelLimb_002464,
    &sNiwSkelLimb_002470,
    &sNiwSkelLimb_00247C,
    &sNiwSkelLimb_002488,
    &sNiwSkelLimb_002494,
    &sNiwSkelLimb_0024A0,
    &sNiwSkelLimb_0024AC,
    &sNiwSkelLimb_0024B8,
    &sNiwSkelLimb_0024C4,
    &sNiwSkelLimb_0024D0,
    &sNiwSkelLimb_0024DC,
    &sNiwSkelLimb_0024E8,
}; 

FlexSkeletonHeader gNiwSkel = { sNiwSkelLimbs, 15, 7 }; 

static u8 unaccounted_00253C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 


