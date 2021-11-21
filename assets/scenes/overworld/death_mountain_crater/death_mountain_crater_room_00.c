#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "death_mountain_crater_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "death_mountain_crater_scene.h"

static SCmdRoomBehavior death_mountain_crater_room_00Set0000Cmd00;
static SCmdBase death_mountain_crater_room_00Set0000Cmd01;
static SCmdSkyboxDisables death_mountain_crater_room_00Set0000Cmd02;
static SCmdTimeSettings death_mountain_crater_room_00Set0000Cmd03;
static SCmdMesh death_mountain_crater_room_00Set0000Cmd04;
static SCmdEndMarker death_mountain_crater_room_00Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx death_mountain_crater_room_00Vtx_000050[46];
static Vtx death_mountain_crater_room_00Vtx_000330[8];
static Vtx death_mountain_crater_room_00Vtx_0014E0[8];
static Vtx death_mountain_crater_room_00Vtx_001560[8];
static Vtx death_mountain_crater_room_00Vtx_0016A0[8];
static Vtx death_mountain_crater_room_00Vtx_001720[8];
static Vtx death_mountain_crater_room_00Vtx_0017A0[18];
static Vtx death_mountain_crater_room_00Vtx_0018C0[32];
static Vtx death_mountain_crater_room_00Vtx_001AC0[23];
static Vtx death_mountain_crater_room_00Vtx_001C30[16];
static Vtx death_mountain_crater_room_00Vtx_001D30[8];
static Vtx death_mountain_crater_room_00Vtx_004868[62];
static Vtx death_mountain_crater_room_00Vtx_004C48[32];
static Vtx death_mountain_crater_room_00Vtx_004E48[32];
static Vtx death_mountain_crater_room_00Vtx_005048[14];
static Vtx death_mountain_crater_room_00Vtx_005128[8];
static Vtx death_mountain_crater_room_00Vtx_006490[4];
static Vtx death_mountain_crater_room_00Vtx_0064D0[8];
static Vtx death_mountain_crater_room_00Vtx_006550[8];
static Vtx death_mountain_crater_room_00Vtx_0065D0[4];
static Vtx death_mountain_crater_room_00Vtx_006610[4];
static Vtx death_mountain_crater_room_00Vtx_006650[46];
static Vtx death_mountain_crater_room_00Vtx_006930[32];
static Vtx death_mountain_crater_room_00Vtx_006B30[40];
static Vtx death_mountain_crater_room_00Vtx_006DB0[32];
static Vtx death_mountain_crater_room_00Vtx_006FB0[32];
static Vtx death_mountain_crater_room_00Vtx_0071B0[31];
static Vtx death_mountain_crater_room_00Vtx_0073A0[32];
static Vtx death_mountain_crater_room_00Vtx_0075A0[22];
static Vtx death_mountain_crater_room_00Vtx_007700[8];
static Vtx death_mountain_crater_room_00Vtx_007780[2];
static Vtx death_mountain_crater_room_00Vtx_0077A0[63];
static Vtx death_mountain_crater_room_00Vtx_007B90[63];
static Vtx death_mountain_crater_room_00Vtx_007F80[32];
static Vtx death_mountain_crater_room_00Vtx_008180[38];
static Vtx death_mountain_crater_room_00Vtx_0083E0[32];
static Vtx death_mountain_crater_room_00Vtx_0085E0[62];
static Vtx death_mountain_crater_room_00Vtx_0089C0[32];
static Vtx death_mountain_crater_room_00Vtx_008BC0[32];
static Vtx death_mountain_crater_room_00Vtx_008DC0[49];
static Vtx death_mountain_crater_room_00Vtx_0090D0[32];
static Vtx death_mountain_crater_room_00Vtx_0092D0[27];
static Vtx death_mountain_crater_room_00Vtx_009480[6];
static Vtx death_mountain_crater_room_00Vtx_0094E0[6];
static Vtx death_mountain_crater_room_00Vtx_009540[6];
static Vtx death_mountain_crater_room_00Vtx_0095A0[4];
static Vtx death_mountain_crater_room_00Vtx_0095E0[4];
static Vtx death_mountain_crater_room_00Vtx_009620[32];
static Vtx death_mountain_crater_room_00Vtx_009820[94];
static Vtx death_mountain_crater_room_00Vtx_009E00[62];
static Vtx death_mountain_crater_room_00Vtx_00A1E0[32];
static Vtx death_mountain_crater_room_00Vtx_00A3E0[32];
static Vtx death_mountain_crater_room_00Vtx_00A5E0[27];
static Vtx death_mountain_crater_room_00Vtx_00A790[28];
static Vtx death_mountain_crater_room_00Vtx_00A950[8];
static Vtx death_mountain_crater_room_00Vtx_018440[32];
static Vtx death_mountain_crater_room_00Vtx_018640[24];
static Vtx death_mountain_crater_room_00Vtx_0187C0[28];
static Vtx death_mountain_crater_room_00Vtx_018980[48];
static Vtx death_mountain_crater_room_00Vtx_018C80[8];
static Vtx death_mountain_crater_room_00Vtx_01BFE0[3];
static Vtx death_mountain_crater_room_00Vtx_01C010[42];
static Vtx death_mountain_crater_room_00Vtx_01C2B0[8];

static SCmdRoomBehavior death_mountain_crater_room_00Set0000Cmd00 = { 0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase death_mountain_crater_room_00Set0000Cmd01 = { 0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables death_mountain_crater_room_00Set0000Cmd02 = { 0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings death_mountain_crater_room_00Set0000Cmd03 = {
    0x10, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x01
}; // 0x0018

static SCmdMesh death_mountain_crater_room_00Set0000Cmd04 = {
    0x0A, 0, (u32)&death_mountain_crater_room_00MeshHeader0x00003C
}; // 0x0020

static SCmdEndMarker death_mountain_crater_room_00Set0000Cmd05 = { 0x14, 0x00, 0x00 }; // 0x0028

static u8 unaccounted_000030[4] = {
    0x01,
    0x00,
    0x00,
    0x00,
};

MeshEntry0 death_mountain_crater_room_00MeshDListEntry0x000034[1] = {
    { (u32)death_mountain_crater_room_00Dlist0x01BFA8, (u32)death_mountain_crater_room_00Dlist0x01CC30 },

};

MeshHeader0 death_mountain_crater_room_00MeshHeader0x00003C = {
    { 0 },
    1,
    death_mountain_crater_room_00MeshDListEntry0x000034,
    (u32)death_mountain_crater_room_00MeshDListEntry0x000034 + (sizeof(MeshEntry0) * ARRAY_COUNT(death_mountain_crater_room_00MeshDListEntry0x000034)),
};

static Vtx death_mountain_crater_room_00Vtx_000050[46] = {
    VTX(2602, 4400, -3025, 5461, 3213, 133, 133, 133, 255),  VTX(1985, 3080, -531, 3207, -619, 15, 15, 15, 255),
    VTX(3332, 3880, -1407, 4569, 224, 133, 133, 133, 255),   VTX(3365, 4160, 328, 5044, -2650, 133, 133, 133, 255),
    VTX(2211, 3600, -2211, 4096, 2048, 15, 15, 15, 255),     VTX(3127, 3360, 0, 3680, -2002, 15, 15, 15, 255),
    VTX(3365, 4160, 328, 3413, 1686, 133, 133, 133, 255),    VTX(1719, 3140, 695, 1673, 32, 15, 15, 15, 255),
    VTX(3332, 3940, 1407, 3038, -37, 133, 133, 133, 255),    VTX(2737, 4520, 2815, 4028, -2645, 133, 133, 133, 255),
    VTX(3127, 3360, 0, 2048, 2048, 15, 15, 15, 255),         VTX(2211, 3720, 2211, 2662, -2037, 15, 15, 15, 255),
    VTX(2737, 4520, 2815, 3413, 2335, 133, 133, 133, 255),   VTX(722, 3260, 1708, 1263, 239, 15, 15, 15, 255),
    VTX(1368, 4060, 3371, 2628, -168, 133, 133, 133, 255),   VTX(13, 4400, 4290, 3209, -2951, 133, 133, 133, 255),
    VTX(2211, 3720, 2211, 2048, 2048, 15, 15, 15, 255),      VTX(13, 3600, 3490, 1843, -2291, 15, 15, 15, 255),
    VTX(-1683, 3360, 1977, 1512, -1671, 15, 15, 15, 255),    VTX(-2209, 4160, 2581, 2878, -2151, 133, 133, 133, 255),
    VTX(-338, 3080, 2325, 1034, 687, 15, 15, 15, 255),       VTX(-1368, 3880, 3371, 2400, -336, 133, 133, 133, 255),
    VTX(13, 4400, 4290, 3287, 2421, 133, 133, 133, 255),     VTX(13, 3600, 3490, 1922, 1944, 15, 15, 15, 255),
    VTX(-2209, 4160, 2581, 5084, 2128, 133, 133, 133, 255),  VTX(-1719, 3140, 695, 3343, 158, 15, 15, 15, 255),
    VTX(-3332, 3940, 1407, 4709, -635, 133, 133, 133, 255),  VTX(-3927, 4520, 0, 5699, -3140, 133, 133, 133, 255),
    VTX(-3127, 3720, 0, 4333, -2279, 15, 15, 15, 255),       VTX(-1683, 3360, 1977, 3719, 1894, 15, 15, 15, 255),
    VTX(-3927, 4520, 0, 4983, 2986, 133, 133, 133, 255),     VTX(-1772, 3200, -340, 2731, 1002, 15, 15, 15, 255),
    VTX(-3332, 4000, -1407, 4096, 378, 133, 133, 133, 255),  VTX(-2506, 4280, -2354, 4574, -1662, 133, 133, 133, 255),
    VTX(-2211, 3480, -2211, 3209, -1637, 15, 15, 15, 255),   VTX(-3127, 3720, 0, 3618, 2448, 15, 15, 15, 255),
    VTX(0, 4160, -3927, 5257, -2487, 133, 133, 133, 255),    VTX(1215, 3080, -1685, 3413, -4658, 15, 15, 15, 255),
    VTX(1368, 3880, -3371, 4779, -4846, 133, 133, 133, 255), VTX(2602, 4400, -3025, 5666, -6967, 133, 133, 133, 255),
    VTX(0, 3360, -3127, 3891, -2522, 15, 15, 15, 255),       VTX(2211, 3600, -2211, 4301, -6335, 15, 15, 15, 255),
    VTX(-2506, 4280, -2354, 5461, 1720, 133, 133, 133, 255), VTX(-1161, 3020, -1875, 3311, -596, 15, 15, 15, 255),
    VTX(-1368, 3820, -3371, 4676, -177, 133, 133, 133, 255), VTX(-2211, 3480, -2211, 4096, 1210, 15, 15, 15, 255),
};

static Vtx death_mountain_crater_room_00Vtx_000330[8] = {
    VTX(-3927, 3020, -3927, 0, 0, 0, 0, 0, 0), VTX(-3927, 3020, 4290, 0, 0, 0, 0, 0, 0),
    VTX(-3927, 4520, -3927, 0, 0, 0, 0, 0, 0), VTX(-3927, 4520, 4290, 0, 0, 0, 0, 0, 0),
    VTX(3365, 3020, -3927, 0, 0, 0, 0, 0, 0),  VTX(3365, 3020, 4290, 0, 0, 0, 0, 0, 0),
    VTX(3365, 4520, -3927, 0, 0, 0, 0, 0, 0),  VTX(3365, 4520, 4290, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x0003B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_000330[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_0004E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_crater_room_00Vtx_000050[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 1, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 7, 0, 7, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(25, 28, 27, 0, 24, 29, 25, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_000050[30], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 7, 0, 7, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 6, 14, 0),
    gsSP2Triangles(12, 15, 13, 0, 13, 10, 6, 0),
    gsSPEndDisplayList(),
};

u64 death_mountain_crater_room_00Tex_0004E0[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_0004E0.rgb5a1.inc.c"
};

static Vtx death_mountain_crater_room_00Vtx_0014E0[8] = {
    VTX(-1424, 705, -113, 2048, 992, 91, 91, 91, 255),   VTX(-1120, 553, -271, 2048, -9852, 53, 53, 53, 255),
    VTX(-1120, 553, -391, 0, -9852, 53, 53, 53, 255),    VTX(-1424, 705, -233, 0, 992, 91, 91, 91, 255),
    VTX(-761, 531, -289, 2048, -20727, 53, 53, 53, 255), VTX(-760, 531, -409, 0, -20727, 53, 53, 53, 255),
    VTX(-438, 408, -292, 2048, -30319, 53, 53, 53, 255), VTX(-439, 408, -412, 0, -30319, 53, 53, 53, 255),
};

static Vtx death_mountain_crater_room_00Vtx_001560[8] = {
    VTX(-1424, 408, -412, 0, 0, 0, 0, 0, 0), VTX(-1424, 408, -113, 0, 0, 0, 0, 0, 0),
    VTX(-1424, 705, -412, 0, 0, 0, 0, 0, 0), VTX(-1424, 705, -113, 0, 0, 0, 0, 0, 0),
    VTX(-438, 408, -412, 0, 0, 0, 0, 0, 0),  VTX(-438, 408, -113, 0, 0, 0, 0, 0, 0),
    VTX(-438, 705, -412, 0, 0, 0, 0, 0, 0),  VTX(-438, 705, -113, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x0015E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_001560[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_sceneTex_003ED0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 2, 0, 6, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0014E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSPEndDisplayList(),
};

static Vtx death_mountain_crater_room_00Vtx_0016A0[8] = {
    VTX(-63, 662, -1259, 0, -3556, 133, 133, 133, 255),
    VTX(-63, 462, -1659, 0, 512, 7, 7, 7, 255),
    VTX(57, 462, -1659, 1024, 512, 7, 7, 7, 255),
    VTX(57, 662, -1259, 1024, -3556, 133, 133, 133, 255),
    VTX(57, -638, -39, 0, 0, 0, 0, 0, 255),
    VTX(57, -838, -39, 0, 512, 0, 0, 0, 255),
    VTX(-63, -838, -39, 1024, 512, 0, 0, 0, 255),
    VTX(-63, -638, -39, 1024, 0, 0, 0, 0, 255),
};

static Vtx death_mountain_crater_room_00Vtx_001720[8] = {
    VTX(-183, 462, -2199, 2048, -2048, 31, 31, 31, 255), VTX(177, 462, -2199, -256, -2048, 31, 31, 31, 255),
    VTX(177, 462, -1659, -256, 1408, 23, 23, 23, 255),   VTX(-183, 462, -1659, 2048, 1408, 23, 23, 23, 255),
    VTX(57, 256, -1827, 0, 1024, 23, 23, 23, 255),       VTX(57, -638, -39, 0, -8216, 0, 0, 0, 255),
    VTX(-63, -638, -39, 1024, -8216, 0, 0, 0, 255),      VTX(-63, 256, -1827, 1024, 1024, 23, 23, 23, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0017A0[18] = {
    VTX(-63, 262, -1839, 1024, 2048, 77, 77, 77, 255),   VTX(-183, 262, -1839, 2560, 3584, 31, 31, 31, 255),
    VTX(-63, 262, -1827, 1178, 1894, 77, 77, 77, 255),   VTX(-183, 262, -1659, 4864, 1280, 7, 7, 7, 255),
    VTX(-63, 262, -1659, 3328, -256, 23, 23, 23, 255),   VTX(57, 262, -1659, 1792, -1792, 23, 23, 23, 255),
    VTX(177, 262, -1659, 256, -3328, 7, 7, 7, 255),      VTX(57, 262, -1827, -358, 358, 77, 77, 77, 255),
    VTX(177, 262, -1839, -2048, -1024, 31, 31, 31, 255), VTX(57, 262, -1839, -512, 512, 77, 77, 77, 255),
    VTX(177, 162, -2039, -3686, 2867, 7, 7, 7, 255),     VTX(177, 162, -2199, -410, 5325, 7, 7, 7, 255),
    VTX(57, 162, -2039, -1843, 410, 77, 77, 77, 255),    VTX(-183, 162, -2199, 5120, -2048, 7, 7, 7, 255),
    VTX(-63, 162, -2039, 0, -2048, 77, 77, 77, 255),     VTX(57, 262, -1659, 1792, -1792, 23, 23, 23, 255),
    VTX(57, 262, -1827, -358, 358, 77, 77, 77, 255),     VTX(-183, 162, -2039, 1843, -4506, 7, 7, 7, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0018C0[32] = {
    VTX(57, 262, -1827, 0, 922, 77, 77, 77, 255),        VTX(57, 256, -1827, 0, 1024, 23, 23, 23, 255),
    VTX(-63, 256, -1827, 2048, 1024, 23, 23, 23, 255),   VTX(-63, 262, -1827, 2048, 922, 77, 77, 77, 255),
    VTX(-63, 262, -1827, -6963, -5461, 77, 77, 77, 255), VTX(-63, 256, -1827, -6963, -5359, 23, 23, 23, 255),
    VTX(-63, 262, -1839, -7168, -5461, 77, 77, 77, 255), VTX(-63, 462, -1259, 4779, 0, 23, 23, 23, 255),
    VTX(-63, 262, -1659, -2048, 3413, 23, 23, 23, 255),  VTX(-63, 662, -1259, 4779, -3413, 79, 0, 0, 255),
    VTX(-183, 462, -1659, 5120, -1024, 23, 23, 23, 255), VTX(-63, 462, -1659, 3072, -1024, 7, 7, 7, 255),
    VTX(-63, 262, -1659, 3072, 2389, 23, 23, 23, 255),   VTX(-183, 262, -1659, 5120, 2389, 7, 7, 7, 255),
    VTX(-63, 256, -1827, -6963, -5359, 23, 23, 23, 255), VTX(-63, 162, -2039, -10581, -3755, 77, 77, 77, 255),
    VTX(57, 256, -1827, -6963, -5359, 23, 23, 23, 255),  VTX(57, 262, -1827, -6963, -5461, 77, 77, 77, 255),
    VTX(57, 262, -1839, -7168, -5461, 77, 77, 77, 255),  VTX(57, 162, -2039, -10581, -3755, 77, 77, 77, 255),
    VTX(57, -838, -39, 23552, 13312, 0, 0, 0, 255),      VTX(57, -638, -39, 23552, 9899, 0, 0, 0, 255),
    VTX(-63, -638, -39, 23552, 9899, 0, 0, 0, 255),      VTX(-63, -838, -39, 23552, 13312, 0, 0, 0, 255),
    VTX(-183, 462, -1659, -4096, 0, 23, 23, 23, 255),    VTX(-183, 262, -1659, -4096, 3413, 7, 7, 7, 255),
    VTX(-183, 262, -1839, -1024, 3413, 31, 31, 31, 255), VTX(-183, 462, -2199, 5120, 0, 31, 31, 31, 255),
    VTX(-183, 162, -2039, 2389, 5120, 7, 7, 7, 255),     VTX(177, 462, -2199, 0, 1024, 31, 31, 31, 255),
    VTX(177, 162, -2199, 0, 6144, 7, 7, 7, 255),         VTX(177, 162, -2039, 2731, 6144, 7, 7, 7, 255),
};

static Vtx death_mountain_crater_room_00Vtx_001AC0[23] = {
    VTX(177, 262, -1839, 6144, 4437, 31, 31, 31, 255),   VTX(177, 462, -2199, 0, 1024, 31, 31, 31, 255),
    VTX(177, 162, -2039, 2731, 6144, 7, 7, 7, 255),      VTX(177, 462, -1659, 9216, 1024, 23, 23, 23, 255),
    VTX(177, 262, -1659, 9216, 4437, 7, 7, 7, 255),      VTX(177, 262, -1659, -1024, 2389, 7, 7, 7, 255),
    VTX(57, 262, -1659, 1024, 2389, 23, 23, 23, 255),    VTX(57, 462, -1659, 1024, -1024, 7, 7, 7, 255),
    VTX(177, 462, -1659, -1024, -1024, 23, 23, 23, 255), VTX(-183, 462, -2199, 0, 0, 31, 31, 31, 255),
    VTX(-183, 162, -2199, 0, 5120, 7, 7, 7, 255),        VTX(177, 162, -2199, 6144, 5120, 7, 7, 7, 255),
    VTX(177, 462, -2199, 6144, 0, 31, 31, 31, 255),      VTX(-183, 162, -2039, 2389, 5120, 7, 7, 7, 255),
    VTX(-183, 162, -2199, 5120, 5120, 7, 7, 7, 255),     VTX(-183, 462, -2199, 5120, 0, 31, 31, 31, 255),
    VTX(-63, 262, -1659, -2048, 3413, 23, 23, 23, 255),  VTX(-63, 462, -1659, -2048, 0, 7, 7, 7, 255),
    VTX(-63, 662, -1259, 4779, -3413, 79, 0, 0, 255),    VTX(57, 662, -1259, 4779, -3413, 79, 0, 0, 255),
    VTX(57, 262, -1659, -2048, 3413, 23, 23, 23, 255),   VTX(57, 462, -1259, 4779, 0, 23, 23, 23, 255),
    VTX(57, 462, -1659, -2048, 0, 7, 7, 7, 255),
};

static Vtx death_mountain_crater_room_00Vtx_001C30[16] = {
    VTX(57, 462, -1259, 0, -9216, 23, 23, 23, 255),    VTX(57, 262, -1659, 0, 1024, 23, 23, 23, 255),
    VTX(-63, 262, -1659, 2048, 1024, 23, 23, 23, 255), VTX(-63, 462, -1259, 2048, -9216, 23, 23, 23, 255),
    VTX(177, 262, -1839, 0, -4096, 31, 31, 31, 255),   VTX(177, 162, -2039, 0, 1024, 7, 7, 7, 255),
    VTX(57, 162, -2039, 2048, 1024, 77, 77, 77, 255),  VTX(57, 262, -1839, 2048, -4096, 77, 77, 77, 255),
    VTX(-63, 262, -1839, 0, -4096, 77, 77, 77, 255),   VTX(-63, 162, -2039, 0, 1024, 77, 77, 77, 255),
    VTX(-183, 162, -2039, 2048, 1024, 7, 7, 7, 255),   VTX(-183, 262, -1839, 2048, -4096, 31, 31, 31, 255),
    VTX(-63, 162, -2039, 0, -24576, 77, 77, 77, 255),  VTX(-63, -838, -39, 0, 26624, 0, 0, 0, 255),
    VTX(57, -838, -39, 2048, 26624, 0, 0, 0, 255),     VTX(57, 162, -2039, 2048, -24576, 77, 77, 77, 255),
};

static Vtx death_mountain_crater_room_00Vtx_001D30[8] = {
    VTX(-183, -838, -2199, 0, 0, 0, 0, 0, 0), VTX(-183, -838, -39, 0, 0, 0, 0, 0, 0),
    VTX(-183, 662, -2199, 0, 0, 0, 0, 0, 0),  VTX(-183, 662, -39, 0, 0, 0, 0, 0, 0),
    VTX(177, -838, -2199, 0, 0, 0, 0, 0, 0),  VTX(177, -838, -39, 0, 0, 0, 0, 0, 0),
    VTX(177, 662, -2199, 0, 0, 0, 0, 0, 0),   VTX(177, 662, -39, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x001DB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_001D30[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_sceneTex_003AD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, 1, 1, 5, 4, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0016A0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_002068, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_001720[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_002868, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0017A0[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(13, 14, 12, 0, 2, 4, 15, 0),
    gsSP2Triangles(2, 15, 16, 0, 14, 13, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_003068, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0018C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(6, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 16, 0, 14, 22, 23, 0),
    gsSP2Triangles(14, 23, 15, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 27, 26, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_001AC0[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(19, 22, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_003868, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_001C30[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

u64 death_mountain_crater_room_00Tex_002068[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_002068.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_002868[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_002868.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_003068[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_003068.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_003868[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_003868.rgb5a1.inc.c"
};

static Vtx death_mountain_crater_room_00Vtx_004868[62] = {
    VTX(1411, 200, 372, 6827, 1805, 255, 255, 255, 255),    VTX(1012, 200, 654, 5461, 1569, 255, 255, 255, 255),
    VTX(1134, 200, 919, 5461, 3138, 255, 255, 255, 255),    VTX(1286, 200, 273, 6827, 902, 255, 255, 255, 255),
    VTX(889, 200, 390, 5461, 0, 255, 255, 255, 255),        VTX(1160, 200, 174, 6827, 0, 255, 255, 255, 255),
    VTX(1456, 200, -325, 8192, 1605, 255, 255, 255, 255),   VTX(1308, 200, -249, 8192, 803, 255, 255, 255, 255),
    VTX(1286, 200, 273, 6827, 902, 255, 255, 255, 255),     VTX(1600, 200, 0, 7463, 2760, 255, 255, 255, 255),
    VTX(1160, 200, -174, 8192, 0, 255, 255, 255, 255),      VTX(-1097, 200, -974, -4096, 2890, 255, 255, 255, 255),
    VTX(-401, 228, -997, -5461, 3013, 255, 255, 255, 255),  VTX(-397, 200, -1071, -5461, 3314, 255, 255, 255, 255),
    VTX(-405, 240, -923, -5461, 2712, 255, 255, 255, 255),  VTX(-418, 248, -665, -5461, 1657, 255, 255, 255, 255),
    VTX(-987, 200, -636, -4096, 1445, 255, 255, 255, 255),  VTX(-876, 200, -298, -4096, 0, 255, 255, 255, 255),
    VTX(-431, 240, -407, -5461, 603, 255, 255, 255, 255),   VTX(-435, 228, -333, -5461, 301, 255, 255, 255, 255),
    VTX(-438, 200, -260, -5461, 0, 255, 255, 255, 255),     VTX(-1424, 200, -386, -2731, 2451, 255, 255, 255, 255),
    VTX(-1292, 200, -280, -2731, 1225, 255, 255, 255, 255), VTX(-1171, 200, -964, -3917, 3196, 255, 255, 255, 255),
    VTX(-987, 200, -636, -4096, 1445, 255, 255, 255, 255),  VTX(-1160, 200, -174, -2731, 0, 255, 255, 255, 255),
    VTX(-1433, 200, 317, -1365, 2108, 255, 255, 255, 255),  VTX(-1297, 200, 245, -1365, 1054, 255, 255, 255, 255),
    VTX(-1550, 200, -99, -2163, 3333, 255, 255, 255, 255),  VTX(-1160, 200, 174, -1365, 0, 255, 255, 255, 255),
    VTX(-1061, 200, 948, 0, 3233, 255, 255, 255, 255),      VTX(-981, 200, 644, 0, 1617, 255, 255, 255, 255),
    VTX(-1131, 200, 924, -193, 3426, 255, 255, 255, 255),   VTX(-1297, 200, 245, -1365, 1054, 255, 255, 255, 255),
    VTX(-1433, 200, 317, -1365, 2108, 255, 255, 255, 255),  VTX(-1425, 200, 345, -1317, 2201, 255, 255, 255, 255),
    VTX(-901, 200, 340, 0, 0, 255, 255, 255, 255),          VTX(-1160, 200, 174, -1365, 0, 255, 255, 255, 255),
    VTX(-31, 202, 1296, 2389, 3718, 255, 255, 255, 255),    VTX(-82, 305, 611, 2389, 1518, 255, 255, 255, 255),
    VTX(-440, 292, 729, 1365, 1512, 255, 255, 255, 255),    VTX(-477, 201, 1145, 1365, 3024, 255, 255, 255, 255),
    VTX(-115, 292, 155, 2389, 51, 255, 255, 255, 255),      VTX(-415, 272, 452, 1365, 504, 255, 255, 255, 255),
    VTX(-124, 274, 41, 2389, -316, 255, 255, 255, 255),     VTX(-409, 252, 383, 1365, 252, 255, 255, 255, 255),
    VTX(-128, 255, -16, 2389, -499, 255, 255, 255, 255),    VTX(-406, 232, 348, 1365, 126, 255, 255, 255, 255),
    VTX(-132, 224, -73, 2389, -683, 255, 255, 255, 255),    VTX(-403, 200, 314, 1365, 0, 255, 255, 255, 255),
    VTX(-1061, 200, 948, 0, 3233, 255, 255, 255, 255),      VTX(-981, 200, 644, 0, 1617, 255, 255, 255, 255),
    VTX(1134, 200, 919, 5461, 3138, 255, 255, 255, 255),    VTX(1012, 200, 654, 5461, 1569, 255, 255, 255, 255),
    VTX(528, 292, 731, 4096, 1580, 255, 255, 255, 255),     VTX(1131, 200, 924, 5451, 3159, 255, 255, 255, 255),
    VTX(889, 200, 390, 5461, 0, 255, 255, 255, 255),        VTX(497, 272, 478, 4096, 527, 255, 255, 255, 255),
    VTX(490, 252, 414, 4096, 263, 255, 255, 255, 255),      VTX(486, 232, 383, 4096, 132, 255, 255, 255, 255),
    VTX(482, 200, 351, 4096, 0, 255, 255, 255, 255),        VTX(574, 201, 1112, 4096, 3161, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_004C48[32] = {
    VTX(574, 201, 1112, 4096, 3161, 255, 255, 255, 255),   VTX(528, 292, 731, 4096, 1580, 255, 255, 255, 255),
    VTX(177, 305, 602, 3072, 1451, 255, 255, 255, 255),    VTX(206, 201, 1236, 3072, 3585, 255, 255, 255, 255),
    VTX(497, 272, 478, 4096, 527, 255, 255, 255, 255),     VTX(158, 292, 178, 3072, 29, 255, 255, 255, 255),
    VTX(490, 252, 414, 4096, 263, 255, 255, 255, 255),     VTX(153, 274, 73, 3072, -327, 255, 255, 255, 255),
    VTX(486, 232, 383, 4096, 132, 255, 255, 255, 255),     VTX(150, 255, 20, 3072, -505, 255, 255, 255, 255),
    VTX(482, 200, 351, 4096, 0, 255, 255, 255, 255),       VTX(148, 224, -33, 3072, -683, 255, 255, 255, 255),
    VTX(177, 305, 602, 3072, 1451, 255, 255, 255, 255),    VTX(-82, 305, 611, 2389, 1518, 255, 255, 255, 255),
    VTX(-31, 202, 1296, 2389, 3718, 255, 255, 255, 255),   VTX(0, 202, 1306, 2476, 3762, 255, 255, 255, 255),
    VTX(158, 292, 178, 3072, 29, 255, 255, 255, 255),      VTX(-115, 292, 155, 2389, 51, 255, 255, 255, 255),
    VTX(153, 274, 73, 3072, -327, 255, 255, 255, 255),     VTX(-124, 274, 41, 2389, -316, 255, 255, 255, 255),
    VTX(-128, 255, -16, 2389, -499, 255, 255, 255, 255),   VTX(-132, 224, -73, 2389, -683, 255, 255, 255, 255),
    VTX(-162, 208, -905, -6144, 2561, 255, 255, 255, 255), VTX(-161, 238, -857, -6144, 2360, 255, 255, 255, 255),
    VTX(145, 237, -862, -6827, 2372, 255, 255, 255, 255),  VTX(143, 207, -906, -6827, 2575, 255, 255, 255, 255),
    VTX(-161, 252, -808, -6144, 2158, 255, 255, 255, 255), VTX(148, 252, -818, -6827, 2169, 255, 255, 255, 255),
    VTX(-159, 267, -638, -6144, 1451, 255, 255, 255, 255), VTX(158, 267, -666, -6827, 1458, 255, 255, 255, 255),
    VTX(-157, 266, -468, -6144, 745, 255, 255, 255, 255),  VTX(167, 266, -514, -6827, 747, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_004E48[32] = {
    VTX(-157, 266, -468, -6144, 745, 255, 255, 255, 255),   VTX(-156, 256, -419, -6144, 543, 255, 255, 255, 255),
    VTX(170, 256, -470, -6827, 544, 255, 255, 255, 255),    VTX(167, 266, -514, -6827, 747, 255, 255, 255, 255),
    VTX(-156, 230, -371, -6144, 341, 255, 255, 255, 255),   VTX(172, 230, -427, -6827, 341, 255, 255, 255, 255),
    VTX(976, 200, -993, -8875, 2413, 255, 255, 255, 255),   VTX(1030, 200, -677, -9037, 1394, 255, 255, 255, 255),
    VTX(1171, 200, -964, -9198, 2788, 255, 255, 255, 255),  VTX(889, 200, -390, -8875, 0, 255, 255, 255, 255),
    VTX(1160, 200, -174, -10240, 0, 255, 255, 255, 255),    VTX(1308, 200, -249, -10240, 803, 255, 255, 255, 255),
    VTX(1030, 200, -677, -9037, 1394, 255, 255, 255, 255),  VTX(1456, 200, -325, -10240, 1605, 255, 255, 255, 255),
    VTX(396, 200, -1079, -7509, 3186, 255, 255, 255, 255),  VTX(404, 229, -1007, -7509, 2896, 255, 255, 255, 255),
    VTX(412, 241, -936, -7509, 2607, 255, 255, 255, 255),   VTX(440, 251, -687, -7509, 1593, 255, 255, 255, 255),
    VTX(469, 245, -438, -7509, 579, 255, 255, 255, 255),    VTX(477, 233, -366, -7509, 290, 255, 255, 255, 255),
    VTX(485, 206, -295, -7509, 0, 255, 255, 255, 255),      VTX(143, 207, -906, -6827, 2575, 255, 255, 255, 255),
    VTX(145, 237, -862, -6827, 2372, 255, 255, 255, 255),   VTX(270, 200, -1097, -7175, 3246, 255, 255, 255, 255),
    VTX(148, 252, -818, -6827, 2169, 255, 255, 255, 255),   VTX(158, 267, -666, -6827, 1458, 255, 255, 255, 255),
    VTX(167, 266, -514, -6827, 747, 255, 255, 255, 255),    VTX(170, 256, -470, -6827, 544, 255, 255, 255, 255),
    VTX(-397, 200, -1071, -5461, 3314, 255, 255, 255, 255), VTX(-401, 228, -997, -5461, 3013, 255, 255, 255, 255),
    VTX(-279, 200, -1087, -5844, 3222, 255, 255, 255, 255), VTX(-161, 238, -857, -6144, 2360, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_005048[14] = {
    VTX(-161, 238, -857, -6144, 2360, 255, 255, 255, 255),  VTX(-162, 208, -905, -6144, 2561, 255, 255, 255, 255),
    VTX(-279, 200, -1087, -5844, 3222, 255, 255, 255, 255), VTX(-401, 228, -997, -5461, 3013, 255, 255, 255, 255),
    VTX(-405, 240, -923, -5461, 2712, 255, 255, 255, 255),  VTX(-161, 252, -808, -6144, 2158, 255, 255, 255, 255),
    VTX(-418, 248, -665, -5461, 1657, 255, 255, 255, 255),  VTX(-159, 267, -638, -6144, 1451, 255, 255, 255, 255),
    VTX(-431, 240, -407, -5461, 603, 255, 255, 255, 255),   VTX(-157, 266, -468, -6144, 745, 255, 255, 255, 255),
    VTX(-435, 228, -333, -5461, 301, 255, 255, 255, 255),   VTX(-156, 256, -419, -6144, 543, 255, 255, 255, 255),
    VTX(-438, 200, -260, -5461, 0, 255, 255, 255, 255),     VTX(-156, 230, -371, -6144, 341, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_005128[8] = {
    VTX(-1550, 200, -1097, 0, 0, 0, 0, 0, 0), VTX(-1550, 200, 1306, 0, 0, 0, 0, 0, 0),
    VTX(-1550, 305, -1097, 0, 0, 0, 0, 0, 0), VTX(-1550, 305, 1306, 0, 0, 0, 0, 0, 0),
    VTX(1600, 200, -1097, 0, 0, 0, 0, 0, 0),  VTX(1600, 200, 1306, 0, 0, 0, 0, 0, 0),
    VTX(1600, 305, -1097, 0, 0, 0, 0, 0, 0),  VTX(1600, 305, 1306, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x0051A8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_005128[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_005490, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 120, 120, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&death_mountain_crater_room_00Vtx_004868[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 0, 0),
    gsSP2Triangles(6, 0, 9, 0, 7, 10, 5, 0),
    gsSP2Triangles(7, 5, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 11, 15, 14, 0),
    gsSP2Triangles(11, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(17, 18, 15, 0, 17, 19, 18, 0),
    gsSP2Triangles(17, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 11, 0, 22, 11, 23, 0),
    gsSP2Triangles(22, 25, 24, 0, 25, 17, 24, 0),
    gsSP2Triangles(26, 27, 22, 0, 26, 22, 21, 0),
    gsSP2Triangles(26, 21, 28, 0, 27, 29, 25, 0),
    gsSP1Triangle(27, 25, 22, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_004868[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(11, 10, 20, 0, 10, 21, 20, 0),
    gsSP2Triangles(10, 6, 21, 0, 10, 13, 6, 0),
    gsSP2Triangles(13, 15, 6, 0, 15, 17, 6, 0),
    gsSP2Triangles(17, 19, 6, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(26, 27, 24, 0, 26, 28, 27, 0),
    gsSP2Triangles(26, 29, 28, 0, 26, 30, 29, 0),
    gsSP1Triangle(24, 31, 25, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_004C48[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(3, 12, 13, 0, 3, 13, 14, 0),
    gsSP2Triangles(3, 14, 15, 0, 12, 16, 17, 0),
    gsSP2Triangles(12, 17, 13, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 17, 0, 18, 9, 20, 0),
    gsSP2Triangles(18, 20, 19, 0, 9, 11, 21, 0),
    gsSP2Triangles(9, 21, 20, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 23, 26, 27, 0),
    gsSP2Triangles(23, 27, 24, 0, 26, 28, 29, 0),
    gsSP2Triangles(26, 29, 27, 0, 28, 30, 31, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_004E48[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(11, 13, 8, 0, 11, 8, 12, 0),
    gsSP2Triangles(14, 15, 6, 0, 15, 16, 6, 0),
    gsSP2Triangles(16, 17, 6, 0, 17, 9, 6, 0),
    gsSP2Triangles(17, 18, 9, 0, 18, 19, 9, 0),
    gsSP2Triangles(19, 20, 9, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 15, 23, 0, 15, 14, 23, 0),
    gsSP2Triangles(22, 24, 16, 0, 22, 16, 15, 0),
    gsSP2Triangles(24, 25, 17, 0, 24, 17, 16, 0),
    gsSP2Triangles(25, 26, 18, 0, 25, 18, 17, 0),
    gsSP2Triangles(26, 27, 19, 0, 26, 19, 18, 0),
    gsSP2Triangles(27, 5, 20, 0, 27, 20, 19, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_005048[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 5, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 7, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 9, 0, 10, 12, 13, 0),
    gsSP1Triangle(10, 13, 11, 0),
    gsSPEndDisplayList(),
};

u64 death_mountain_crater_room_00Tex_005490[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_005490.rgb5a1.inc.c"
};

static Vtx death_mountain_crater_room_00Vtx_006490[4] = {
    VTX(-994, 720, 828, 111, 543, 31, 31, 31, 255),
    VTX(-1003, 719, 816, 111, 955, 31, 31, 31, 255),
    VTX(-1008, 720, 837, 391, 543, 31, 31, 31, 255),
    VTX(-1018, 714, 818, 391, 955, 31, 31, 31, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0064D0[8] = {
    VTX(-1087, 353, 868, 512, 36, 91, 91, 91, 255), VTX(-1086, 413, 867, 512, 1024, 85, 85, 85, 255),
    VTX(-1061, 412, 850, 0, 1024, 85, 85, 85, 255), VTX(-1063, 352, 851, 0, 36, 91, 91, 91, 255),
    VTX(-1013, 361, 816, 512, 36, 91, 91, 91, 255), VTX(-1012, 421, 815, 512, 1024, 85, 85, 85, 255),
    VTX(-987, 421, 798, 0, 1024, 85, 85, 85, 255),  VTX(-988, 361, 798, 0, 36, 91, 91, 91, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006550[8] = {
    VTX(-1037, 411, 833, 1024, -1024, 85, 85, 85, 255), VTX(-1086, 413, 867, 0, -1024, 85, 85, 85, 255),
    VTX(-1083, 533, 865, 0, 995, 61, 61, 61, 255),      VTX(-1034, 531, 831, 1024, 995, 61, 61, 61, 255),
    VTX(-984, 541, 799, 2048, 995, 61, 61, 61, 255),    VTX(-987, 421, 798, 2048, -1024, 85, 85, 85, 255),
    VTX(-1036, 422, 832, 1024, -1024, 85, 85, 85, 255), VTX(-1035, 542, 831, 1024, 995, 61, 61, 61, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0065D0[4] = {
    VTX(-901, 768, 1229, 3003, 2041, 23, 23, 23, 255),
    VTX(-901, 1000, 1230, 3010, -1920, 139, 139, 139, 255),
    VTX(-741, 1000, 1130, -2, -1920, 61, 61, 61, 255),
    VTX(-743, 768, 1131, 31, 2041, 23, 23, 23, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006610[4] = {
    VTX(-63, 462, -1259, 0, 512, 23, 23, 23, 255),
    VTX(-63, 462, -1207, 0, 0, 23, 23, 23, 255),
    VTX(57, 462, -1207, 1024, 0, 23, 23, 23, 255),
    VTX(57, 462, -1259, 1024, 512, 23, 23, 23, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006650[46] = {
    VTX(-104, 462, -1494, -2326, -3750, 0, 0, 0, 255),    VTX(-138, 462, -1494, -2593, -3572, 0, 0, 0, 255),
    VTX(-163, 462, -1359, -2074, -2372, 15, 15, 15, 255), VTX(-263, 462, -1279, -2441, -1217, 38, 38, 38, 255),
    VTX(-181, 452, -1177, -1260, -844, 85, 85, 85, 255),  VTX(-116, 462, -1245, -1111, -1727, 61, 61, 61, 255),
    VTX(-116, 462, -1245, -1111, -1727, 61, 61, 61, 255), VTX(-83, 462, -1207, -650, -1602, 85, 85, 85, 255),
    VTX(-83, 462, -1232, -778, -1793, 85, 85, 85, 255),   VTX(-63, 462, -1207, -492, -1707, 91, 91, 91, 255),
    VTX(175, 454, -1177, 1540, -2713, 85, 85, 85, 255),   VTX(57, 462, -1207, 453, -2337, 91, 91, 91, 255),
    VTX(303, 382, -1013, 3412, -2094, 77, 77, 77, 255),   VTX(192, 382, -1166, 1734, -2719, 38, 38, 38, 255),
    VTX(127, 424, -1053, 1813, -1491, 38, 38, 38, 255),   VTX(257, 382, -1279, 1655, -3947, 7, 7, 7, 255),
    VTX(-309, 382, -1013, -1407, 1118, 77, 77, 77, 255),  VTX(-198, 382, -1166, -1338, -671, 38, 38, 38, 255),
    VTX(-263, 382, -1279, -2441, -1217, 7, 7, 7, 255),    VTX(-116, 411, -1065, -165, -302, 38, 38, 38, 255),
    VTX(110, 426, -1063, 1624, -1479, 38, 38, 38, 255),   VTX(-133, 408, -1053, -235, -126, 38, 38, 38, 255),
    VTX(-189, 342, -893, 169, 1433, 38, 38, 38, 255),     VTX(183, 342, -893, 3097, -519, 38, 38, 38, 255),
    VTX(-323, 382, -1494, -4048, -2602, 0, 0, 0, 255),    VTX(-138, 382, -1494, -2593, -3572, 0, 0, 0, 255),
    VTX(317, 382, -1494, 993, -5963, 0, 0, 0, 255),       VTX(133, 382, -1494, -461, -4994, 0, 0, 0, 255),
    VTX(-203, 342, -879, 132, 1619, 38, 38, 38, 255),     VTX(197, 342, -879, 3282, -482, 38, 38, 38, 255),
    VTX(257, 462, -1279, 1655, -3947, 38, 38, 38, 255),   VTX(192, 462, -1391, 551, -4493, 34, 135, 134, 255),
    VTX(133, 462, -1494, -461, -4994, 0, 0, 0, 255),      VTX(157, 462, -1359, 447, -4052, 15, 15, 15, 255),
    VTX(99, 462, -1494, -728, -4816, 0, 0, 0, 255),       VTX(110, 462, -1245, 672, -2915, 61, 61, 61, 255),
    VTX(175, 454, -1177, 1540, -2713, 85, 85, 85, 255),   VTX(77, 462, -1207, 610, -2442, 85, 85, 85, 255),
    VTX(57, 462, -1207, 453, -2337, 91, 91, 91, 255),     VTX(77, 462, -1232, 483, -2633, 85, 85, 85, 255),
    VTX(183, 342, -893, 3097, -519, 38, 38, 38, 255),     VTX(303, 382, -1013, 3412, -2094, 77, 77, 77, 255),
    VTX(127, 424, -1053, 1813, -1491, 38, 38, 38, 255),   VTX(-138, 462, -1494, -2593, -3572, 0, 0, 0, 255),
    VTX(-263, 462, -1279, -2441, -1217, 38, 38, 38, 255), VTX(-163, 462, -1359, -2074, -2372, 15, 15, 15, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006930[32] = {
    VTX(257, 462, -1279, 6166, 199, 38, 38, 38, 255),      VTX(175, 454, -1177, 2847, -114, 85, 85, 85, 255),
    VTX(117, 445, -1076, -127, -107, 91, 91, 91, 255),     VTX(139, 445, -1075, 118, 199, 91, 91, 91, 255),
    VTX(-203, 342, -879, -1170, 892, 85, 85, 85, 255),     VTX(-189, 342, -893, -644, 892, 38, 38, 38, 255),
    VTX(-189, 382, -893, -644, -132, 77, 77, 77, 255),     VTX(-203, 382, -879, -1170, -132, 116, 116, 116, 255),
    VTX(-203, 382, -879, 5365, 215, 116, 116, 116, 255),   VTX(-189, 382, -893, 5365, -118, 77, 77, 77, 255),
    VTX(-309, 382, -1013, 1020, -118, 77, 77, 77, 255),    VTX(-323, 382, -999, 1020, 215, 38, 38, 38, 255),
    VTX(-203, 342, -879, 4344, 890, 85, 85, 85, 255),      VTX(-203, 382, -879, 4344, -134, 116, 116, 116, 255),
    VTX(-323, 382, -999, 0, -134, 153, 153, 153, 255),     VTX(-323, 342, -999, 0, 890, 139, 139, 139, 255),
    VTX(317, 382, -999, 4096, 199, 38, 38, 38, 255),       VTX(303, 382, -1013, 4096, -87, 77, 77, 77, 255),
    VTX(183, 382, -893, -248, -87, 77, 77, 77, 255),       VTX(197, 382, -879, -248, 199, 116, 116, 116, 255),
    VTX(197, 382, -879, 312, -96, 116, 116, 116, 255),     VTX(183, 382, -893, -200, -96, 77, 77, 77, 255),
    VTX(183, 342, -893, -200, 928, 38, 38, 38, 255),       VTX(197, 342, -879, 312, 928, 85, 85, 85, 255),
    VTX(317, 342, -999, 3072, -106, 139, 139, 139, 255),   VTX(317, 382, -999, 3072, -1130, 153, 153, 153, 255),
    VTX(197, 382, -879, -1272, -1130, 116, 116, 116, 255), VTX(197, 342, -879, -1272, -106, 85, 85, 85, 255),
    VTX(-133, 408, -1053, -117, 781, 38, 38, 38, 255),     VTX(-116, 411, -1065, 395, 704, 38, 38, 38, 255),
    VTX(-116, 443, -1063, 395, -117, 91, 91, 91, 255),     VTX(-133, 443, -1053, -117, -117, 91, 91, 91, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006B30[40] = {
    VTX(303, 382, -1013, 4492, 918, 77, 77, 77, 255),     VTX(317, 382, -999, 4141, 1257, 38, 38, 38, 255),
    VTX(317, 382, -1494, 16830, 932, 0, 0, 0, 255),       VTX(-323, 382, -999, 1803, 258, 38, 38, 38, 255),
    VTX(-309, 382, -1013, 1452, -114, 77, 77, 77, 255),   VTX(-323, 382, -1494, -10886, -114, 0, 0, 0, 255),
    VTX(257, 382, -1279, -704, 1930, 7, 7, 7, 255),       VTX(133, 382, -1494, 5678, 1930, 0, 0, 0, 255),
    VTX(133, 462, -1494, 5678, -118, 0, 0, 0, 255),       VTX(257, 462, -1279, -704, -118, 38, 38, 38, 255),
    VTX(117, 429, -1076, -146, 839, 38, 38, 38, 255),     VTX(117, 445, -1076, -120, 1243, 38, 38, 38, 255),
    VTX(175, 454, -1177, 2855, 1243, 38, 38, 38, 255),    VTX(-133, 443, -1053, 5518, 225, 91, 91, 91, 255),
    VTX(-116, 443, -1063, 5518, -104, 91, 91, 91, 255),   VTX(-181, 452, -1177, 2162, -104, 85, 85, 85, 255),
    VTX(-263, 462, -1279, -1157, 225, 38, 38, 38, 255),   VTX(-133, 408, -1053, 3537, -254, 38, 38, 38, 255),
    VTX(-133, 443, -1053, 3470, -1149, 91, 91, 91, 255),  VTX(-263, 462, -1279, -3205, -1149, 38, 38, 38, 255),
    VTX(-198, 382, -1166, 267, 644, 38, 38, 38, 255),     VTX(257, 382, -1279, 3953, 907, 7, 7, 7, 255),
    VTX(257, 462, -1279, 4104, -1135, 38, 38, 38, 255),   VTX(192, 382, -1166, 634, 662, 38, 38, 38, 255),
    VTX(-309, 382, -1013, 3871, -121, 77, 77, 77, 255),   VTX(-189, 382, -893, -474, -121, 77, 77, 77, 255),
    VTX(-189, 342, -893, -474, 903, 38, 38, 38, 255),     VTX(183, 342, -893, 1054, -798, 38, 38, 38, 255),
    VTX(183, 382, -893, 1054, 226, 77, 77, 77, 255),      VTX(303, 382, -1013, -3291, 226, 77, 77, 77, 255),
    VTX(-181, 452, -1177, 2723, -106, 38, 38, 38, 255),   VTX(-116, 443, -1063, -633, -106, 38, 38, 38, 255),
    VTX(-116, 411, -1065, -653, 717, 38, 38, 38, 255),    VTX(192, 382, -1166, 634, 662, 38, 38, 38, 255),
    VTX(257, 462, -1279, 4104, -1135, 38, 38, 38, 255),   VTX(139, 445, -1075, -1943, -1135, 91, 91, 91, 255),
    VTX(139, 416, -1075, -1997, -410, 77, 77, 77, 255),   VTX(-198, 382, -1166, 267, 644, 38, 38, 38, 255),
    VTX(-263, 462, -1279, -3205, -1149, 38, 38, 38, 255), VTX(-263, 382, -1279, -3052, 893, 7, 7, 7, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006DB0[32] = {
    VTX(208, 895, -1282, -395, 1845, 31, 31, 31, 255),     VTX(144, 903, -1161, 974, 441, 53, 53, 53, 255),
    VTX(213, 903, -1121, 191, -1184, 53, 53, 53, 255),     VTX(301, 895, -1282, -1653, 659, 31, 31, 31, 255),
    VTX(161, 843, -1151, 1097, -1162, 148, 148, 148, 255), VTX(144, 903, -1161, 359, -2297, 91, 91, 91, 255),
    VTX(208, 895, -1282, -683, -341, 53, 53, 53, 255),     VTX(231, 835, -1282, -37, 950, 85, 85, 85, 255),
    VTX(203, 843, -1127, 1198, 849, 183, 183, 183, 255),   VTX(213, 903, -1121, 793, -387, 107, 107, 107, 255),
    VTX(144, 903, -1161, -688, 449, 107, 107, 107, 255),   VTX(161, 843, -1151, 309, 1351, 161, 161, 161, 255),
    VTX(287, 835, -1279, 1707, 341, 61, 61, 61, 255),      VTX(301, 895, -1282, 1088, -896, 85, 85, 85, 255),
    VTX(213, 903, -1121, -530, 1361, 153, 153, 153, 255),  VTX(203, 843, -1127, 175, 2474, 183, 183, 183, 255),
    VTX(287, 835, -1279, 878, -1383, 61, 61, 61, 255),     VTX(203, 843, -1127, -837, 417, 183, 183, 183, 255),
    VTX(161, 843, -1151, -341, 1365, 161, 161, 161, 255),  VTX(231, 835, -1282, 1155, -131, 85, 85, 85, 255),
    VTX(206, 835, -1422, 883, -1305, 0, 0, 0, 255),        VTX(287, 835, -1279, -750, 374, 61, 61, 61, 255),
    VTX(231, 835, -1282, 27, 997, 85, 85, 85, 255),        VTX(165, 835, -1398, 1365, -341, 23, 23, 23, 255),
    VTX(206, 835, -1422, 1707, 341, 0, 0, 0, 255),         VTX(217, 895, -1428, 1092, -887, 7, 7, 7, 255),
    VTX(301, 895, -1282, -593, 798, 85, 85, 85, 255),      VTX(287, 835, -1279, 61, 1996, 61, 61, 61, 255),
    VTX(231, 835, -1282, 1290, -409, 85, 85, 85, 255),     VTX(208, 895, -1282, 539, -1563, 53, 53, 53, 255),
    VTX(148, 895, -1388, -683, -341, 7, 7, 7, 255),        VTX(165, 835, -1398, -48, 929, 23, 23, 23, 255),
};

static Vtx death_mountain_crater_room_00Vtx_006FB0[32] = {
    VTX(148, 895, -1388, 141, 1244, 7, 7, 7, 255),         VTX(208, 895, -1282, 1363, 22, 31, 31, 31, 255),
    VTX(301, 895, -1282, 1024, -2048, 31, 31, 31, 255),    VTX(217, 895, -1428, -662, -362, 7, 7, 7, 255),
    VTX(-190, 856, -1493, 1024, -1024, 23, 23, 23, 255),   VTX(-285, 811, -1378, -307, 307, 23, 23, 23, 255),
    VTX(-222, 808, -1328, 375, 1673, 23, 23, 23, 255),     VTX(-127, 852, -1443, 1707, 341, 23, 23, 23, 255),
    VTX(-91, 682, -1235, -5105, -2033, 31, 31, 31, 255),   VTX(-91, 682, -1207, -4096, -1024, 31, 31, 31, 255),
    VTX(-3, 702, -1183, 31, -115, 31, 31, 31, 255),        VTX(-3, 702, -1199, -554, -700, 31, 31, 31, 255),
    VTX(85, 682, -1207, 2341, -1024, 31, 31, 31, 255),     VTX(85, 682, -1235, 1331, -2033, 31, 31, 31, 255),
    VTX(57, 662, -1259, 2780, 1938, 133, 133, 133, 255),   VTX(57, 662, -1232, 2056, 1034, 139, 139, 139, 255),
    VTX(-63, 662, -1232, -370, 1842, 139, 139, 139, 255),  VTX(-63, 662, -1259, 354, 2747, 133, 133, 133, 255),
    VTX(57, 662, -1207, 1401, 216, 139, 139, 139, 255),    VTX(-3, 662, -1183, -481, -217, 214, 214, 214, 255),
    VTX(-63, 662, -1207, -1024, 1024, 139, 139, 139, 255), VTX(77, 652, -1232, 2460, 899, 107, 107, 107, 255),
    VTX(77, 652, -1207, 1805, 81, 139, 139, 139, 255),     VTX(77, 652, -1207, 141, 1117, 139, 139, 139, 255),
    VTX(77, 652, -1232, 1024, 1024, 107, 107, 107, 255),   VTX(85, 682, -1235, 1024, -136, 61, 61, 61, 255),
    VTX(85, 682, -1207, 20, -31, 139, 139, 139, 255),      VTX(-83, 652, -1207, -1428, 1159, 139, 139, 139, 255),
    VTX(-83, 652, -1232, -774, 1977, 107, 107, 107, 255),  VTX(-91, 682, -1207, 1024, 2048, 139, 139, 139, 255),
    VTX(-91, 682, -1235, 15, 2048, 61, 61, 61, 255),       VTX(-83, 652, -1232, 136, 894, 107, 107, 107, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0071B0[31] = {
    VTX(-91, 682, -1207, 1024, 2048, 139, 139, 139, 255), VTX(-83, 652, -1232, 136, 894, 107, 107, 107, 255),
    VTX(-83, 652, -1207, 1024, 894, 139, 139, 139, 255),  VTX(-260, 753, -1380, 1530, 90, 69, 69, 69, 255),
    VTX(-285, 811, -1378, 990, -990, 38, 38, 38, 255),    VTX(-190, 856, -1493, -341, 341, 23, 23, 23, 255),
    VTX(-165, 798, -1496, 198, 1421, 53, 53, 53, 255),    VTX(-223, 751, -1350, 1075, 933, 153, 153, 153, 255),
    VTX(-222, 808, -1328, 783, -136, 122, 122, 122, 255), VTX(-285, 811, -1378, -512, 512, 85, 85, 85, 255),
    VTX(-260, 753, -1380, 298, 1322, 153, 153, 153, 255), VTX(-128, 795, -1466, 1673, 375, 53, 53, 53, 255),
    VTX(-127, 852, -1443, 1150, -669, 23, 23, 23, 255),   VTX(-222, 808, -1328, -181, 662, 122, 122, 122, 255),
    VTX(-223, 751, -1350, 341, 1707, 153, 153, 153, 255), VTX(-128, 795, -1466, 922, -1126, 53, 53, 53, 255),
    VTX(-223, 751, -1350, -410, 205, 153, 153, 153, 255), VTX(-260, 753, -1380, 0, 1024, 153, 153, 153, 255),
    VTX(-165, 798, -1496, 1331, -307, 53, 53, 53, 255),   VTX(48, 788, -1486, 1566, -542, 23, 23, 23, 255),
    VTX(1, 818, -1461, 952, -1771, 15, 15, 15, 255),      VTX(74, 818, -1323, -614, -205, 161, 161, 161, 255),
    VTX(121, 788, -1348, 0, 1024, 139, 139, 139, 255),    VTX(121, 788, -1348, 2048, -422, 139, 139, 139, 255),
    VTX(74, 818, -1323, 241, -783, 161, 161, 161, 255),   VTX(52, 742, -1311, 241, 1626, 15, 15, 15, 255),
    VTX(108, 742, -1341, 2048, 1024, 15, 15, 15, 255),    VTX(-21, 742, -1449, -80, 1466, 7, 7, 7, 255),
    VTX(52, 742, -1311, 1486, -100, 15, 15, 15, 255),     VTX(74, 818, -1323, 683, -1707, 161, 161, 161, 255),
    VTX(1, 818, -1461, -883, -141, 15, 15, 15, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0073A0[32] = {
    VTX(77, 552, -1232, 0, 1132, 61, 61, 61, 255),     VTX(77, 652, -1232, 0, 108, 139, 139, 139, 255),
    VTX(57, 662, -1232, 1024, 0, 139, 139, 139, 255),  VTX(57, 552, -1232, 1024, 1132, 61, 61, 61, 255),
    VTX(57, 552, -1232, 0, 1132, 61, 61, 61, 255),     VTX(57, 662, -1232, 0, 0, 139, 139, 139, 255),
    VTX(57, 662, -1259, 1024, 0, 133, 133, 133, 255),  VTX(57, 462, -1259, 1024, 2048, 23, 23, 23, 255),
    VTX(-63, 662, -1259, 1024, 0, 133, 133, 133, 255), VTX(-63, 552, -1232, 0, 1132, 61, 61, 61, 255),
    VTX(-63, 462, -1259, 1024, 2048, 23, 23, 23, 255), VTX(-63, 462, -1207, 0, 2048, 23, 23, 23, 255),
    VTX(-63, 462, -1232, 1024, 2048, 23, 23, 23, 255), VTX(-63, 552, -1232, 1024, 0, 61, 61, 61, 255),
    VTX(-63, 552, -1207, 0, 0, 61, 61, 61, 255),       VTX(-63, 462, -1232, 0, 2048, 23, 23, 23, 255),
    VTX(57, 462, -1232, 0, 2048, 23, 23, 23, 255),     VTX(57, 462, -1232, 0, 2048, 23, 23, 23, 255),
    VTX(57, 462, -1207, 1024, 2048, 23, 23, 23, 255),  VTX(57, 552, -1207, 1024, 0, 61, 61, 61, 255),
    VTX(57, 552, -1232, 0, 0, 61, 61, 61, 255),        VTX(57, 552, -1232, 0, 2048, 31, 31, 31, 255),
    VTX(57, 552, -1207, 134, 1895, 31, 31, 31, 255),   VTX(77, 552, -1207, 8, 1784, 31, 31, 31, 255),
    VTX(77, 552, -1232, -126, 1938, 31, 31, 31, 255),  VTX(-83, 552, -1232, 0, 2048, 31, 31, 31, 255),
    VTX(-83, 552, -1207, 149, 1978, 31, 31, 31, 255),  VTX(-63, 552, -1207, 92, 1855, 31, 31, 31, 255),
    VTX(-63, 552, -1232, -58, 1925, 31, 31, 31, 255),  VTX(-83, 552, -1207, 0, 0, 61, 61, 61, 255),
    VTX(-83, 552, -1232, 1024, 0, 61, 61, 61, 255),    VTX(-83, 462, -1232, 1024, 2048, 23, 23, 23, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0075A0[22] = {
    VTX(-83, 552, -1207, 0, 0, 61, 61, 61, 255),       VTX(-83, 462, -1232, 1024, 2048, 23, 23, 23, 255),
    VTX(-83, 462, -1207, 0, 2048, 23, 23, 23, 255),    VTX(-63, 552, -1207, 0, 0, 61, 61, 61, 255),
    VTX(-83, 552, -1207, 1024, 0, 61, 61, 61, 255),    VTX(-83, 462, -1207, 1024, 2048, 23, 23, 23, 255),
    VTX(-63, 462, -1207, 0, 2048, 23, 23, 23, 255),    VTX(77, 552, -1232, 1024, 0, 61, 61, 61, 255),
    VTX(77, 552, -1207, 0, 0, 61, 61, 61, 255),        VTX(77, 462, -1207, 0, 2048, 23, 23, 23, 255),
    VTX(77, 462, -1232, 1024, 2048, 23, 23, 23, 255),  VTX(57, 462, -1207, 0, 2048, 23, 23, 23, 255),
    VTX(77, 462, -1207, 1024, 2048, 23, 23, 23, 255),  VTX(77, 552, -1207, 1024, 0, 61, 61, 61, 255),
    VTX(57, 552, -1207, 0, 0, 61, 61, 61, 255),        VTX(-83, 652, -1232, 0, 108, 139, 139, 139, 255),
    VTX(-83, 552, -1232, 0, 1132, 61, 61, 61, 255),    VTX(-63, 552, -1232, 1024, 1132, 61, 61, 61, 255),
    VTX(-63, 662, -1232, 1024, 0, 139, 139, 139, 255), VTX(-63, 552, -1232, 0, 1132, 61, 61, 61, 255),
    VTX(-63, 662, -1259, 1024, 0, 133, 133, 133, 255), VTX(-63, 662, -1232, 0, 0, 139, 139, 139, 255),
};

static Vtx death_mountain_crater_room_00Vtx_007700[8] = {
    VTX(57, 662, -1207, 1365, 1024, 139, 139, 139, 255),   VTX(77, 652, -1207, 2048, 1024, 139, 139, 139, 255),
    VTX(85, 682, -1207, 2048, 0, 139, 139, 139, 255),      VTX(-83, 652, -1207, -2048, 1024, 139, 139, 139, 255),
    VTX(-63, 662, -1207, -1365, 1024, 139, 139, 139, 255), VTX(-91, 682, -1207, -2048, 0, 139, 139, 139, 255),
    VTX(-3, 662, -1183, 0, 1024, 214, 214, 214, 255),      VTX(-3, 702, -1183, 0, 0, 77, 77, 77, 255),
};

static Vtx death_mountain_crater_room_00Vtx_007780[2] = {
    VTX(175, 454, -1177, 28, 1039, 85, 85, 85, 255),
    VTX(77, 462, -1207, 28, 1962, 85, 85, 85, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0077A0[63] = {
    VTX(-1600, 1000, 0, 960, 806, 116, 116, 116, 255),       VTX(-1849, 931, 69, 988, 412, 107, 107, 107, 255),
    VTX(-1665, 723, -102, 0, 1024, 38, 38, 38, 255),         VTX(-1612, 716, -233, -362, 1386, 133, 133, 133, 255),
    VTX(-1791, 2560, -1729, 1638, -1163, 31, 31, 31, 255),   VTX(-2211, 3480, -2211, 3209, -1637, 15, 15, 15, 255),
    VTX(-1772, 3200, -340, 2731, 1002, 15, 15, 15, 255),     VTX(-1341, 2280, -516, 1161, 437, 61, 61, 61, 255),
    VTX(-3127, 3720, 0, 3618, 2448, 15, 15, 15, 255),        VTX(-2533, 2800, 0, 2048, 2048, 23, 23, 23, 255),
    VTX(-1131, 1000, -924, -1024, -344, 91, 91, 91, 255),    VTX(-1600, 1000, 0, -1024, 1420, 116, 116, 116, 255),
    VTX(-1612, 716, -233, -1509, 1062, 133, 133, 133, 255),  VTX(-1131, 320, -924, -2185, -344, 255, 255, 255, 255),
    VTX(-1550, 200, -99, -2389, 1231, 255, 255, 255, 255),   VTX(-1171, 200, -964, -2389, -380, 255, 255, 255, 255),
    VTX(50, 1335, -263, 436, -2733, 177, 177, 177, 255),     VTX(22, 1556, -369, 813, -2681, 45, 45, 45, 255),
    VTX(-102, 1400, -269, 546, -2473, 116, 116, 116, 255),   VTX(-85, 1517, -393, 746, -2497, 45, 45, 45, 255),
    VTX(-119, 1335, -269, 436, -2445, 177, 177, 177, 255),   VTX(270, 200, -1097, -1502, -3071, 255, 255, 255, 255),
    VTX(1171, 200, -964, -1502, -4616, 255, 255, 255, 255),  VTX(1131, 320, -924, -1297, -4549, 255, 255, 255, 255),
    VTX(317, 342, -999, -1259, -3157, 139, 139, 139, 255),   VTX(317, 382, -999, -1191, -3157, 153, 153, 153, 255),
    VTX(474, 944, -963, -232, -3425, 148, 148, 148, 255),    VTX(-1171, 200, -964, -1502, -619, 255, 255, 255, 255),
    VTX(-279, 200, -1087, -1502, -2136, 255, 255, 255, 255), VTX(-323, 342, -999, -1259, -2065, 139, 139, 139, 255),
    VTX(-1131, 320, -924, -1297, -689, 255, 255, 255, 255),  VTX(-1131, 320, -924, -1297, -689, 255, 255, 255, 255),
    VTX(-323, 382, -999, -1191, -2065, 153, 153, 153, 255),  VTX(-491, 874, -874, -352, -1783, 148, 148, 148, 255),
    VTX(-323, 342, -999, -1259, -2065, 139, 139, 139, 255),  VTX(-85, 1517, -393, 746, -2497, 45, 45, 45, 255),
    VTX(22, 1556, -369, 813, -2681, 45, 45, 45, 255),        VTX(-193, 1720, -1123, 1092, -2281, 15, 15, 15, 255),
    VTX(255, 1620, -1078, 922, -3047, 15, 15, 15, 255),      VTX(1131, 320, -924, -1297, -4549, 255, 255, 255, 255),
    VTX(1131, 1000, -924, -137, -4549, 91, 91, 91, 255),     VTX(549, 1412, -871, 567, -3558, 91, 91, 91, 255),
    VTX(474, 944, -963, -232, -3425, 148, 148, 148, 255),    VTX(-491, 1400, -874, 546, -1783, 91, 91, 91, 255),
    VTX(-1131, 1000, -924, -137, -689, 91, 91, 91, 255),     VTX(-252, 1304, -692, 383, -2200, 148, 148, 148, 255),
    VTX(-102, 1400, -269, 546, -2473, 116, 116, 116, 255),   VTX(-119, 1335, -269, 436, -2445, 177, 177, 177, 255),
    VTX(50, 1335, -263, 436, -2733, 177, 177, 177, 255),     VTX(275, 1304, -647, 383, -3101, 148, 148, 148, 255),
    VTX(122, 1144, -715, -502, -2792, 122, 122, 122, 255),   VTX(-159, 1168, -818, -462, -2307, 122, 122, 122, 255),
    VTX(0, 1933, -1599, 1455, -2589, 7, 7, 7, 255),          VTX(0, 2800, -2445, 2935, -2552, 31, 31, 31, 255),
    VTX(0, 3360, -3127, 3891, -2522, 15, 15, 15, 255),       VTX(-1161, 3020, -1875, 3311, -596, 15, 15, 15, 255),
    VTX(-925, 2280, -1303, 2048, -1024, 45, 45, 45, 255),    VTX(-2211, 3480, -2211, 4096, 1210, 15, 15, 15, 255),
    VTX(-1791, 2560, -1729, 2526, 473, 31, 31, 31, 255),     VTX(1058, 2460, -1252, 2355, -4410, 45, 45, 45, 255),
    VTX(1215, 3080, -1685, 3413, -4658, 15, 15, 15, 255),    VTX(1791, 2920, -1729, 3140, -5640, 31, 31, 31, 255),
    VTX(2211, 3600, -2211, 4301, -6335, 15, 15, 15, 255),
};

static Vtx death_mountain_crater_room_00Vtx_007B90[63] = {
    VTX(61, 923, 648, 2285, 934, 177, 177, 177, 255),      VTX(-78, 923, 639, 2312, 700, 177, 177, 177, 255),
    VTX(-75, 971, 627, 2389, 707, 31, 31, 31, 255),        VTX(67, 970, 636, 2360, 945, 31, 31, 31, 255),
    VTX(-1550, 200, -99, 2346, -1656, 255, 255, 255, 255), VTX(-1612, 716, -233, 3176, -1735, 133, 133, 133, 255),
    VTX(-1423, 701, -234, 3133, -1414, 85, 85, 85, 255),   VTX(590, 1000, 974, 1968, 1769, 69, 69, 69, 255),
    VTX(1131, 1000, 924, 1956, 2696, 85, 85, 85, 255),     VTX(1131, 200, 924, 907, 2696, 255, 255, 255, 255),
    VTX(474, 674, 944, 1586, 1577, 153, 153, 153, 255),    VTX(-145, 1000, 768, 2282, 561, 31, 31, 31, 255),
    VTX(-143, 839, 788, 2048, 560, 153, 153, 153, 255),    VTX(-620, 672, 1003, 1655, -289, 153, 153, 153, 255),
    VTX(-622, 962, 1061, 1971, -304, 85, 85, 85, 255),     VTX(127, 839, 758, 2048, 1024, 153, 153, 153, 255),
    VTX(127, 1000, 758, 2260, 1024, 31, 31, 31, 255),      VTX(0, 202, 1306, 633, 703, 255, 255, 255, 255),
    VTX(-1131, 200, 924, 1184, -1142, 255, 255, 255, 255), VTX(-858, 713, 895, 1855, -672, 85, 85, 85, 255),
    VTX(-994, 713, 827, 1946, -890, 85, 85, 85, 255),      VTX(-1187, 713, 963, 1822, -1243, 85, 85, 85, 255),
    VTX(-791, 906, 970, -96, 254, 139, 139, 139, 255),     VTX(-741, 1000, 1130, -265, 1077, 85, 85, 85, 255),
    VTX(-622, 962, 1061, 356, 1008, 85, 85, 85, 255),      VTX(-743, 768, 1131, -279, 457, 23, 23, 23, 255),
    VTX(-741, 1000, 1130, 533, 480, 85, 85, 85, 255),      VTX(-833, 713, 996, -484, 997, 23, 23, 23, 255),
    VTX(-791, 906, 970, 191, 1055, 139, 139, 139, 255),    VTX(-858, 713, 895, -493, 1361, 85, 85, 85, 255),
    VTX(-791, 906, 970, 2019, -574, 139, 139, 139, 255),   VTX(-1769, 973, 218, 763, 976, 120, 120, 255, 255),
    VTX(-1849, 931, 69, 705, 1486, 107, 107, 107, 255),    VTX(-1600, 1000, 0, 1482, 1362, 116, 116, 116, 255),
    VTX(-1689, 911, 319, 904, 1950, 107, 107, 107, 255),   VTX(-1490, 710, 538, 241, 1144, 133, 133, 133, 255),
    VTX(-1740, 744, 372, 241, 2051, 38, 38, 38, 255),      VTX(-1292, 2365, 1902, 2020, 2216, 23, 23, 23, 255),
    VTX(-1298, 2446, 1908, 2160, 2217, 45, 45, 45, 255),   VTX(-1173, 2381, 1987, 2049, 2456, 45, 45, 45, 255),
    VTX(-1143, 2643, 1958, 2495, 2450, 31, 31, 31, 255),   VTX(-1302, 2561, 1817, 2355, 2092, 53, 53, 53, 255),
    VTX(-1293, 2498, 1725, 2248, 1981, 23, 23, 23, 255),   VTX(-1181, 2701, 1677, 2595, 2036, 61, 61, 61, 255),
    VTX(-1171, 2381, 1677, 2048, 2048, 69, 69, 69, 255),   VTX(-1284, 2371, 1723, 2031, 1987, 15, 15, 15, 255),
    VTX(-1423, 701, -114, -820, -596, 85, 85, 85, 255),    VTX(-1550, 200, -99, -1674, -712, 255, 255, 255, 255),
    VTX(-1423, 701, -234, -820, -754, 85, 85, 85, 255),    VTX(-656, 1409, 1625, 389, 2534, 85, 85, 85, 255),
    VTX(-1131, 1000, 924, -309, 1093, 116, 116, 116, 255), VTX(-1683, 3360, 1977, 3719, 1894, 15, 15, 15, 255),
    VTX(-2533, 2800, 0, 2763, -1640, 23, 23, 23, 255),     VTX(-3127, 3720, 0, 4333, -2279, 15, 15, 15, 255),
    VTX(-1719, 3140, 695, 3343, 158, 15, 15, 15, 255),     VTX(-1781, 2220, 334, 1773, -388, 61, 61, 61, 255),
    VTX(-1600, 1000, 0, -309, -635, 116, 116, 116, 255),   VTX(-759, 1000, 1418, -309, 2148, 23, 23, 23, 255),
    VTX(-901, 1000, 1230, -309, 1746, 69, 69, 69, 255),    VTX(-996, 713, 1141, -798, 1525, 31, 31, 31, 255),
    VTX(-1187, 713, 963, -798, 1085, 85, 85, 85, 255),     VTX(-901, 768, 1229, -705, 1746, 23, 23, 23, 255),
    VTX(-1490, 710, 538, -803, 195, 133, 133, 133, 255),
};

static Vtx death_mountain_crater_room_00Vtx_007F80[32] = {
    VTX(-1689, 911, 319, -379, -200, 107, 107, 107, 255),  VTX(-1131, 1000, 924, -309, 1093, 116, 116, 116, 255),
    VTX(-1490, 710, 538, -803, 195, 133, 133, 133, 255),   VTX(-1689, 911, 319, -232, -196, 107, 107, 107, 255),
    VTX(-1769, 973, 218, -458, -467, 120, 120, 255, 255),  VTX(-1131, 1000, 924, -683, 1030, 116, 116, 116, 255),
    VTX(-1600, 1000, 0, -683, -738, 116, 116, 116, 255),   VTX(-1187, 713, 963, -798, 1085, 85, 85, 85, 255),
    VTX(-1131, 200, 924, -1674, 1093, 255, 255, 255, 255), VTX(-1425, 200, 345, -1674, 10, 255, 255, 255, 255),
    VTX(-1258, 710, 219, -803, 24, 85, 85, 85, 255),       VTX(-1550, 200, -99, -1674, -712, 255, 255, 255, 255),
    VTX(-1423, 701, -114, -820, -596, 85, 85, 85, 255),    VTX(-1315, 710, 386, -803, 183, 85, 85, 85, 255),
    VTX(-1425, 200, 345, 1286, -109, 255, 255, 255, 255),  VTX(-1315, 710, 386, 2156, -205, 85, 85, 85, 255),
    VTX(-1490, 710, 538, 2156, 190, 133, 133, 133, 255),   VTX(-1683, 3360, 1977, 1512, -1671, 15, 15, 15, 255),
    VTX(-338, 3080, 2325, 1034, 687, 15, 15, 15, 255),     VTX(-1143, 2643, 1958, 289, -819, 31, 31, 31, 255),
    VTX(-1173, 2381, 1987, -158, -849, 45, 45, 45, 255),   VTX(-222, 2220, 2151, -433, 769, 45, 45, 45, 255),
    VTX(574, 1785, 2267, -1176, 2112, 45, 45, 45, 255),    VTX(13, 3600, 3490, 1922, 1944, 15, 15, 15, 255),
    VTX(-759, 1000, 1418, -2515, -526, 23, 23, 23, 255),   VTX(-493, 1414, 1359, -1810, -136, 177, 177, 177, 255),
    VTX(-520, 1000, 1282, -2515, -225, 23, 23, 23, 255),   VTX(-656, 1409, 1625, -1817, -238, 85, 85, 85, 255),
    VTX(-222, 2210, 1795, -451, 558, 148, 148, 148, 255),  VTX(-485, 1409, 1729, -1817, 97, 23, 23, 23, 255),
    VTX(246, 1000, 1135, -2515, 912, 23, 23, 23, 255),     VTX(-1171, 2381, 1677, -159, -1030, 69, 69, 69, 255),
};

static Vtx death_mountain_crater_room_00Vtx_008180[38] = {
    VTX(-485, 1409, 1729, -1817, 97, 23, 23, 23, 255),    VTX(-222, 2210, 1795, -451, 558, 148, 148, 148, 255),
    VTX(421, 1785, 1955, -1176, 1681, 23, 23, 23, 255),   VTX(-759, 1000, 1418, -2515, -526, 23, 23, 23, 255),
    VTX(-656, 1409, 1625, -1824, -570, 85, 85, 85, 255),  VTX(-493, 1414, 1359, -1810, -136, 177, 177, 177, 255),
    VTX(2211, 3720, 2211, 2048, 2048, 15, 15, 15, 255),   VTX(1791, 2800, 1729, 478, 1818, 31, 31, 31, 255),
    VTX(722, 3260, 1708, 1263, 239, 15, 15, 15, 255),     VTX(660, 1785, 1732, -1255, 126, 139, 139, 139, 255),
    VTX(574, 1785, 2267, -1255, -444, 45, 45, 45, 255),   VTX(13, 3600, 3490, 1843, -2291, 15, 15, 15, 255),
    VTX(1131, 1000, 924, -2594, 1496, 85, 85, 85, 255),   VTX(290, 1000, 1330, -2594, -96, 23, 23, 23, 255),
    VTX(-377, 1412, 1553, -1891, -1276, 23, 23, 23, 255), VTX(1131, 200, 924, -3345, -712, 255, 255, 255, 255),
    VTX(1131, 1000, 924, -1980, -712, 85, 85, 85, 255),   VTX(1600, 1000, 0, -1980, 1051, 91, 91, 91, 255),
    VTX(1600, 200, 0, -3345, 1051, 255, 255, 255, 255),   VTX(1791, 2800, 1729, 1092, -1551, 31, 31, 31, 255),
    VTX(2211, 3720, 2211, 2662, -2037, 15, 15, 15, 255),  VTX(1719, 3140, 695, 1673, 32, 15, 15, 15, 255),
    VTX(1364, 2400, 688, 410, -189, 61, 61, 61, 255),     VTX(3127, 3360, 0, 2048, 2048, 15, 15, 15, 255),
    VTX(2533, 2800, 0, 1092, 1660, 31, 31, 31, 255),      VTX(1131, 320, -924, -1500, 415, 255, 255, 255, 255),
    VTX(1171, 200, -964, -1705, 463, 255, 255, 255, 255), VTX(1600, 200, 0, -1708, -1316, 255, 255, 255, 255),
    VTX(1600, 1000, 0, -343, -1318, 91, 91, 91, 255),     VTX(1131, 1000, -924, -340, 413, 91, 91, 91, 255),
    VTX(2533, 2800, 0, 2726, -1737, 31, 31, 31, 255),     VTX(3127, 3360, 0, 3680, -2002, 15, 15, 15, 255),
    VTX(1985, 3080, -531, 3207, -619, 15, 15, 15, 255),   VTX(1608, 2460, -352, 2149, -745, 61, 61, 61, 255),
    VTX(2211, 3600, -2211, 4096, 2048, 15, 15, 15, 255),  VTX(1791, 2920, -1729, 2936, 1442, 31, 31, 31, 255),
    VTX(1600, 1000, 0, -343, -1318, 91, 91, 91, 255),     VTX(1131, 1000, -924, -340, 413, 91, 91, 91, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0083E0[32] = {
    VTX(-765, 515, -302, 0, 0, 15, 15, 15, 255),          VTX(-757, 515, -302, 0, 256, 15, 15, 15, 255),
    VTX(-757, 727, -302, 6784, 256, 168, 168, 168, 255),  VTX(-765, 727, -302, 6784, 0, 168, 168, 168, 255),
    VTX(-761, 515, -298, 0, 256, 15, 15, 15, 255),        VTX(-761, 727, -298, 6784, 256, 168, 168, 168, 255),
    VTX(-761, 727, -306, 6784, 0, 168, 168, 168, 255),    VTX(-761, 515, -306, 0, 0, 15, 15, 15, 255),
    VTX(-760, 515, -386, 0, 256, 15, 15, 15, 255),        VTX(-760, 727, -386, 6784, 256, 168, 168, 168, 255),
    VTX(-760, 727, -394, 6784, 0, 168, 168, 168, 255),    VTX(-760, 515, -394, 0, 0, 15, 15, 15, 255),
    VTX(-764, 515, -390, 0, 0, 15, 15, 15, 255),          VTX(-756, 515, -390, 0, 256, 15, 15, 15, 255),
    VTX(-756, 727, -390, 6784, 256, 168, 168, 168, 255),  VTX(-764, 727, -390, 6784, 0, 168, 168, 168, 255),
    VTX(-1120, 537, -371, 0, 256, 15, 15, 15, 255),       VTX(-1120, 749, -371, 6784, 256, 168, 168, 168, 255),
    VTX(-1120, 749, -379, 6784, 0, 168, 168, 168, 255),   VTX(-1120, 537, -379, 0, 0, 15, 15, 15, 255),
    VTX(-1124, 537, -374, 0, 0, 15, 15, 15, 255),         VTX(-1116, 537, -374, 0, 256, 15, 15, 15, 255),
    VTX(-1116, 749, -374, 6784, 256, 168, 168, 168, 255), VTX(-1124, 749, -374, 6784, 0, 168, 168, 168, 255),
    VTX(-1124, 537, -286, 0, 0, 15, 15, 15, 255),         VTX(-1116, 537, -286, 0, 256, 15, 15, 15, 255),
    VTX(-1116, 749, -286, 6784, 256, 168, 168, 168, 255), VTX(-1124, 749, -286, 6784, 0, 168, 168, 168, 255),
    VTX(-1120, 537, -282, 0, 256, 15, 15, 15, 255),       VTX(-1120, 749, -282, 6784, 256, 168, 168, 168, 255),
    VTX(-1120, 749, -290, 6784, 0, 168, 168, 168, 255),   VTX(-1120, 537, -290, 0, 0, 15, 15, 15, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0085E0[62] = {
    VTX(-83, 652, -1232, 211, 3290, 139, 139, 139, 255), VTX(-91, 682, -1235, 284, 3562, 139, 139, 139, 255),
    VTX(-116, 462, -1245, 512, 1603, 31, 31, 31, 255),   VTX(85, 682, -1235, -287, 3562, 139, 139, 139, 255),
    VTX(77, 652, -1232, -215, 3290, 139, 139, 139, 255), VTX(110, 462, -1245, -516, 1603, 31, 31, 31, 255),
    VTX(-272, 382, -1250, 512, 4096, 7, 7, 7, 255),      VTX(-272, 633, -1250, 512, 1865, 198, 198, 198, 255),
    VTX(-293, 612, -1279, 0, 2047, 69, 69, 69, 255),     VTX(-293, 382, -1279, 0, 4096, 7, 7, 7, 255),
    VTX(-239, 382, -1261, 512, 4096, 7, 7, 7, 255),      VTX(-239, 594, -1261, 512, 2210, 198, 198, 198, 255),
    VTX(-272, 633, -1250, 0, 1865, 198, 198, 198, 255),  VTX(-272, 382, -1250, 0, 4096, 7, 7, 7, 255),
    VTX(-239, 382, -1296, 512, 4096, 7, 7, 7, 255),      VTX(-239, 633, -1296, 512, 1865, 69, 69, 69, 255),
    VTX(-239, 594, -1261, 0, 2210, 198, 198, 198, 255),  VTX(-239, 382, -1261, 0, 4096, 7, 7, 7, 255),
    VTX(127, 382, -1083, 512, 4096, 15, 15, 15, 255),    VTX(127, 700, -1083, 512, 1266, 38, 38, 38, 255),
    VTX(156, 674, -1063, 0, 1502, 69, 69, 69, 255),      VTX(156, 382, -1063, 0, 4096, 15, 15, 15, 255),
    VTX(99, 382, -1063, 512, 4096, 15, 15, 15, 255),     VTX(99, 691, -1063, 512, 1345, 69, 69, 69, 255),
    VTX(127, 700, -1083, 0, 1266, 38, 38, 38, 255),      VTX(127, 382, -1083, 0, 4096, 15, 15, 15, 255),
    VTX(110, 382, -1029, 512, 4096, 15, 15, 15, 255),    VTX(110, 677, -1029, 512, 1473, 198, 198, 198, 255),
    VTX(99, 691, -1063, 0, 1345, 69, 69, 69, 255),       VTX(99, 382, -1063, 0, 4096, 15, 15, 15, 255),
    VTX(145, 382, -1029, 512, 4096, 15, 15, 15, 255),    VTX(145, 700, -1029, 512, 1266, 198, 198, 198, 255),
    VTX(110, 677, -1029, 0, 1473, 198, 198, 198, 255),   VTX(110, 382, -1029, 0, 4096, 15, 15, 15, 255),
    VTX(156, 382, -1063, 512, 4096, 15, 15, 15, 255),    VTX(156, 674, -1063, 512, 1502, 69, 69, 69, 255),
    VTX(145, 700, -1029, 0, 1266, 198, 198, 198, 255),   VTX(145, 382, -1029, 0, 4096, 15, 15, 15, 255),
    VTX(-133, 382, -1474, 512, 4096, 0, 0, 0, 255),      VTX(-133, 835, -1474, 512, 0, 53, 53, 53, 255),
    VTX(-161, 835, -1494, 0, 0, 53, 53, 53, 255),        VTX(-161, 382, -1494, 0, 4096, 0, 0, 0, 255),
    VTX(-104, 382, -1494, 512, 4096, 0, 0, 0, 255),      VTX(-104, 835, -1494, 512, 0, 53, 53, 53, 255),
    VTX(-133, 835, -1474, 0, 0, 53, 53, 53, 255),        VTX(-133, 382, -1474, 0, 4096, 0, 0, 0, 255),
    VTX(266, 835, -1307, 512, 0, 31, 31, 31, 255),       VTX(287, 835, -1279, 0, 0, 61, 61, 61, 255),
    VTX(287, 382, -1279, 0, 4096, 7, 7, 7, 255),         VTX(266, 382, -1307, 512, 4096, 7, 7, 7, 255),
    VTX(266, 382, -1250, 0, 4096, 7, 7, 7, 255),         VTX(287, 382, -1279, 512, 4096, 7, 7, 7, 255),
    VTX(287, 835, -1279, 512, 0, 61, 61, 61, 255),       VTX(266, 835, -1250, 0, 0, 168, 168, 168, 255),
    VTX(233, 382, -1261, 0, 4096, 7, 7, 7, 255),         VTX(266, 382, -1250, 512, 4096, 7, 7, 7, 255),
    VTX(266, 835, -1250, 512, 0, 168, 168, 168, 255),    VTX(233, 835, -1261, 0, 0, 168, 168, 168, 255),
    VTX(233, 382, -1296, 0, 4096, 7, 7, 7, 255),         VTX(233, 382, -1261, 512, 4096, 7, 7, 7, 255),
    VTX(233, 835, -1261, 512, 0, 168, 168, 168, 255),    VTX(233, 835, -1296, 0, 0, 61, 61, 61, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0089C0[32] = {
    VTX(266, 382, -1307, 0, 4096, 7, 7, 7, 255),          VTX(233, 382, -1296, 512, 4096, 7, 7, 7, 255),
    VTX(233, 835, -1296, 512, 0, 61, 61, 61, 255),        VTX(266, 835, -1307, 0, 0, 31, 31, 31, 255),
    VTX(-192, 382, -1421, 0, 4096, 0, 0, 0, 255),         VTX(-192, 764, -1421, 0, 692, 7, 7, 7, 255),
    VTX(-168, 764, -1394, 512, 692, 31, 31, 31, 255),     VTX(-168, 382, -1394, 512, 4096, 0, 0, 0, 255),
    VTX(-224, 382, -1406, 0, 4096, 0, 0, 0, 255),         VTX(-224, 764, -1406, 0, 692, 31, 31, 31, 255),
    VTX(-192, 764, -1421, 512, 692, 7, 7, 7, 255),        VTX(-192, 382, -1421, 512, 4096, 0, 0, 0, 255),
    VTX(-220, 382, -1371, 0, 4096, 0, 0, 0, 255),         VTX(-220, 725, -1371, 0, 1047, 153, 153, 153, 255),
    VTX(-224, 764, -1406, 512, 692, 31, 31, 31, 255),     VTX(-224, 382, -1406, 512, 4096, 0, 0, 0, 255),
    VTX(-186, 382, -1364, 0, 4096, 0, 0, 0, 255),         VTX(-186, 740, -1364, 0, 908, 153, 153, 153, 255),
    VTX(-220, 725, -1371, 512, 1047, 153, 153, 153, 255), VTX(-220, 382, -1371, 512, 4096, 0, 0, 0, 255),
    VTX(-168, 382, -1394, 0, 4096, 0, 0, 0, 255),         VTX(-168, 764, -1394, 0, 692, 31, 31, 31, 255),
    VTX(-186, 740, -1364, 512, 908, 153, 153, 153, 255),  VTX(-186, 382, -1364, 512, 4096, 0, 0, 0, 255),
    VTX(186, 382, -1137, 0, 4096, 15, 15, 15, 255),       VTX(186, 843, -1137, 0, -4, 153, 153, 153, 255),
    VTX(162, 821, -1163, 512, 191, 61, 61, 61, 255),      VTX(162, 382, -1163, 512, 4096, 15, 15, 15, 255),
    VTX(218, 382, -1151, 0, 4096, 15, 15, 15, 255),       VTX(218, 843, -1151, 0, 0, 153, 153, 153, 255),
    VTX(186, 843, -1137, 512, 0, 153, 153, 153, 255),     VTX(186, 382, -1137, 512, 4096, 15, 15, 15, 255),
};

static Vtx death_mountain_crater_room_00Vtx_008BC0[32] = {
    VTX(214, 382, -1186, 0, 4096, 15, 15, 15, 255),   VTX(214, 821, -1186, 0, 195, 31, 31, 31, 255),
    VTX(218, 843, -1151, 512, 0, 153, 153, 153, 255), VTX(218, 382, -1151, 512, 4096, 15, 15, 15, 255),
    VTX(180, 382, -1193, 0, 4096, 15, 15, 15, 255),   VTX(180, 843, -1193, 0, -4, 31, 31, 31, 255),
    VTX(214, 821, -1186, 512, 191, 31, 31, 31, 255),  VTX(214, 382, -1186, 512, 4096, 15, 15, 15, 255),
    VTX(162, 382, -1163, 0, 4096, 15, 15, 15, 255),   VTX(162, 821, -1163, 0, 191, 61, 61, 61, 255),
    VTX(180, 843, -1193, 512, -4, 31, 31, 31, 255),   VTX(180, 382, -1193, 512, 4096, 15, 15, 15, 255),
    VTX(127, 382, -1474, 512, 4096, 0, 0, 0, 255),    VTX(127, 835, -1474, 512, 0, 53, 53, 53, 255),
    VTX(99, 835, -1494, 0, 0, 53, 53, 53, 255),       VTX(99, 382, -1494, 0, 4096, 0, 0, 0, 255),
    VTX(156, 382, -1494, 512, 4096, 0, 0, 0, 255),    VTX(156, 835, -1494, 512, 0, 53, 53, 53, 255),
    VTX(127, 835, -1474, 0, 0, 53, 53, 53, 255),      VTX(127, 382, -1474, 0, 4096, 0, 0, 0, 255),
    VTX(-272, 382, -1307, 512, 4096, 7, 7, 7, 255),   VTX(-272, 633, -1307, 512, 1865, 38, 38, 38, 255),
    VTX(-239, 633, -1296, 0, 1865, 69, 69, 69, 255),  VTX(-239, 382, -1296, 0, 4096, 7, 7, 7, 255),
    VTX(-293, 382, -1279, 512, 4096, 7, 7, 7, 255),   VTX(-293, 612, -1279, 512, 2047, 69, 69, 69, 255),
    VTX(-272, 633, -1307, 0, 1865, 38, 38, 38, 255),  VTX(-272, 382, -1307, 0, 4096, 7, 7, 7, 255),
    VTX(162, 382, -1394, 0, 4096, 0, 0, 0, 255),      VTX(180, 382, -1364, 512, 4096, 0, 0, 0, 255),
    VTX(180, 835, -1364, 512, 0, 107, 107, 107, 255), VTX(162, 835, -1394, 0, 0, 45, 45, 45, 255),
};

static Vtx death_mountain_crater_room_00Vtx_008DC0[49] = {
    VTX(180, 382, -1364, 0, 4096, 0, 0, 0, 255),           VTX(214, 382, -1371, 512, 4096, 0, 0, 0, 255),
    VTX(214, 835, -1371, 512, 0, 107, 107, 107, 255),      VTX(180, 835, -1364, 0, 0, 107, 107, 107, 255),
    VTX(214, 382, -1371, 512, 4096, 0, 0, 0, 255),         VTX(218, 382, -1406, 0, 4096, 0, 0, 0, 255),
    VTX(218, 835, -1406, 0, 0, 45, 45, 45, 255),           VTX(218, 382, -1406, 512, 4096, 0, 0, 0, 255),
    VTX(186, 382, -1421, 0, 4096, 0, 0, 0, 255),           VTX(186, 835, -1421, 0, 0, 15, 15, 15, 255),
    VTX(218, 835, -1406, 512, 0, 45, 45, 45, 255),         VTX(186, 382, -1421, 512, 4096, 0, 0, 0, 255),
    VTX(162, 382, -1394, 0, 4096, 0, 0, 0, 255),           VTX(162, 835, -1394, 0, 0, 45, 45, 45, 255),
    VTX(186, 835, -1421, 512, 0, 15, 15, 15, 255),         VTX(-116, 462, -1245, -516, 1603, 31, 31, 31, 255),
    VTX(-116, 742, -1245, -516, 4096, 198, 198, 198, 255), VTX(-163, 742, -1359, 512, 4096, 77, 77, 77, 255),
    VTX(-163, 462, -1359, 512, 1603, 15, 15, 15, 255),     VTX(157, 462, -1359, -516, 1603, 15, 15, 15, 255),
    VTX(157, 742, -1359, -516, 4096, 77, 77, 77, 255),     VTX(110, 742, -1245, 512, 4096, 198, 198, 198, 255),
    VTX(110, 462, -1245, 512, 1603, 31, 31, 31, 255),      VTX(-3, 702, -1199, -516, 3742, 148, 148, 148, 255),
    VTX(-3, 742, -1199, -516, 4096, 206, 206, 206, 255),   VTX(-116, 742, -1245, 512, 4096, 198, 198, 198, 255),
    VTX(-91, 682, -1235, 284, 3562, 139, 139, 139, 255),   VTX(-116, 462, -1245, 512, 1603, 31, 31, 31, 255),
    VTX(110, 462, -1245, -516, 1603, 31, 31, 31, 255),     VTX(110, 742, -1245, -516, 4096, 198, 198, 198, 255),
    VTX(85, 682, -1235, -287, 3562, 139, 139, 139, 255),   VTX(110, 742, -1245, -516, 4096, 198, 198, 198, 255),
    VTX(-3, 742, -1199, 512, 4096, 206, 206, 206, 255),    VTX(-3, 702, -1199, 512, 3742, 148, 148, 148, 255),
    VTX(85, 682, -1235, -287, 3562, 139, 139, 139, 255),   VTX(-83, 652, -1232, 211, 3290, 139, 139, 139, 255),
    VTX(-116, 462, -1245, 512, 1603, 31, 31, 31, 255),     VTX(-83, 462, -1232, 211, 1603, 23, 23, 23, 255),
    VTX(110, 462, -1245, -516, 1603, 31, 31, 31, 255),     VTX(77, 652, -1232, -215, 3290, 139, 139, 139, 255),
    VTX(77, 462, -1232, -215, 1603, 23, 23, 23, 255),      VTX(-163, 462, -1359, 512, 1603, 15, 15, 15, 255),
    VTX(-163, 742, -1359, 512, 4096, 77, 77, 77, 255),     VTX(-104, 742, -1494, -730, 4096, 38, 38, 38, 255),
    VTX(-104, 462, -1494, -730, 1603, 0, 0, 0, 255),       VTX(99, 742, -1494, -730, 4096, 38, 38, 38, 255),
    VTX(157, 742, -1359, 512, 4096, 77, 77, 77, 255),      VTX(157, 462, -1359, 512, 1603, 15, 15, 15, 255),
    VTX(99, 462, -1494, -730, 1603, 0, 0, 0, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0090D0[32] = {
    VTX(-995, 713, 844, 1024, 1024, 15, 15, 15, 255),    VTX(-991, 761, 844, 1024, 0, 7, 7, 7, 255),
    VTX(-1003, 762, 836, 512, 0, 133, 133, 133, 255),    VTX(-1007, 714, 836, 512, 1024, 91, 91, 91, 255),
    VTX(-1436, 702, -218, 512, 1024, 15, 15, 15, 255),   VTX(-1431, 750, -218, 512, 0, 15, 15, 15, 255),
    VTX(-1419, 749, -225, 0, 0, 177, 177, 177, 255),     VTX(-1424, 701, -225, 0, 1024, 77, 77, 77, 255),
    VTX(-1424, 701, -225, 1536, 1024, 77, 77, 77, 255),  VTX(-1419, 749, -225, 1536, 0, 177, 177, 177, 255),
    VTX(-1419, 749, -209, 1024, 0, 177, 177, 177, 255),  VTX(-1424, 701, -209, 1024, 1024, 77, 77, 77, 255),
    VTX(-1419, 749, -225, -79, 630, 177, 177, 177, 255), VTX(-1431, 750, -218, 433, 630, 15, 15, 15, 255),
    VTX(-1419, 749, -209, 236, 158, 177, 177, 177, 255), VTX(-1419, 749, -137, -79, 630, 177, 177, 177, 255),
    VTX(-1431, 750, -130, 433, 630, 15, 15, 15, 255),    VTX(-1419, 749, -121, 236, 158, 177, 177, 177, 255),
    VTX(-1424, 701, -121, 1024, 1024, 77, 77, 77, 255),  VTX(-1419, 749, -121, 1024, 0, 177, 177, 177, 255),
    VTX(-1431, 750, -130, 512, 0, 15, 15, 15, 255),      VTX(-1436, 702, -130, 512, 1024, 15, 15, 15, 255),
    VTX(-1424, 701, -137, 1536, 1024, 77, 77, 77, 255),  VTX(-1419, 749, -137, 1536, 0, 177, 177, 177, 255),
    VTX(-1419, 749, -137, 0, 0, 177, 177, 177, 255),     VTX(-1424, 701, -137, 0, 1024, 77, 77, 77, 255),
    VTX(-414, 447, -307, 461, 666, 23, 23, 23, 255),     VTX(-426, 450, -315, 645, 112, 177, 177, 177, 255),
    VTX(-426, 450, -299, 21, 282, 177, 177, 177, 255),   VTX(-991, 761, 828, -79, 630, 133, 133, 133, 255),
    VTX(-1003, 762, 836, 433, 630, 133, 133, 133, 255),  VTX(-991, 761, 844, 236, 158, 7, 7, 7, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0092D0[27] = {
    VTX(-1007, 714, 836, 512, 1024, 91, 91, 91, 255),  VTX(-1003, 762, 836, 512, 0, 133, 133, 133, 255),
    VTX(-991, 761, 828, 0, 0, 133, 133, 133, 255),     VTX(-995, 713, 828, 0, 1024, 91, 91, 91, 255),
    VTX(-995, 713, 828, 1536, 1024, 91, 91, 91, 255),  VTX(-991, 761, 828, 1536, 0, 133, 133, 133, 255),
    VTX(-991, 761, 844, 1024, 0, 7, 7, 7, 255),        VTX(-995, 713, 844, 1024, 1024, 15, 15, 15, 255),
    VTX(-439, 404, -315, 512, 1024, 77, 77, 77, 255),  VTX(-426, 450, -315, 512, 0, 177, 177, 177, 255),
    VTX(-414, 447, -307, 0, 0, 23, 23, 23, 255),       VTX(-428, 401, -307, 0, 1024, 23, 23, 23, 255),
    VTX(-426, 450, -299, -512, 0, 177, 177, 177, 255), VTX(-439, 404, -299, -512, 1024, 77, 77, 77, 255),
    VTX(-439, 404, -299, 1024, 1024, 77, 77, 77, 255), VTX(-426, 450, -299, 1024, 0, 177, 177, 177, 255),
    VTX(-440, 404, -389, 1024, 1024, 77, 77, 77, 255), VTX(-426, 450, -389, 1024, 0, 177, 177, 177, 255),
    VTX(-426, 450, -405, 512, 0, 177, 177, 177, 255),  VTX(-440, 404, -405, 512, 1024, 77, 77, 77, 255),
    VTX(-428, 401, -397, 0, 1024, 23, 23, 23, 255),    VTX(-415, 447, -397, 0, 0, 23, 23, 23, 255),
    VTX(-426, 450, -389, -512, 0, 177, 177, 177, 255), VTX(-440, 404, -389, -512, 1024, 77, 77, 77, 255),
    VTX(-415, 447, -397, 461, 666, 23, 23, 23, 255),   VTX(-426, 450, -405, 645, 112, 177, 177, 177, 255),
    VTX(-426, 450, -389, 21, 282, 177, 177, 177, 255),
};

static Vtx death_mountain_crater_room_00Vtx_009480[6] = {
    VTX(-1083, 529, 865, 2048, 958, 61, 61, 61, 255), VTX(-996, 721, 814, 0, -2094, 31, 31, 31, 255),
    VTX(-984, 543, 799, 0, 958, 61, 61, 61, 255),     VTX(-1081, 529, 869, 2048, 958, 61, 61, 61, 255),
    VTX(-994, 721, 818, 0, -2094, 7, 7, 7, 255),      VTX(-981, 543, 802, 0, 958, 61, 61, 61, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0094E0[6] = {
    VTX(-760, 527, -409, 0, -20727, 153, 153, 153, 255),    VTX(-761, 527, -289, 2048, -20727, 153, 153, 153, 255),
    VTX(-439, 404, -292, 2048, -30319, 153, 153, 153, 255), VTX(-439, 404, -412, 0, -30319, 153, 153, 153, 255),
    VTX(-1119, 550, -391, 0, -9852, 153, 153, 153, 255),    VTX(-1120, 550, -271, 2048, -9852, 153, 153, 153, 255),
};

static Vtx death_mountain_crater_room_00Vtx_009540[6] = {
    VTX(-1083, 529, 865, 2048, 958, 61, 61, 61, 255), VTX(-1107, 685, 834, 2048, -2094, 31, 31, 31, 255),
    VTX(-996, 721, 814, 0, -2094, 31, 31, 31, 255),   VTX(-1081, 529, 869, 2048, 958, 61, 61, 61, 255),
    VTX(-1105, 685, 837, 2048, -2094, 7, 7, 7, 255),  VTX(-994, 721, 818, 0, -2094, 7, 7, 7, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0095A0[4] = {
    VTX(-1424, 701, -113, 2048, 992, 177, 177, 177, 255),
    VTX(-1120, 550, -271, 2048, -9852, 153, 153, 153, 255),
    VTX(-1119, 550, -391, 0, -9852, 153, 153, 153, 255),
    VTX(-1423, 701, -233, 0, 992, 177, 177, 177, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0095E0[4] = {
    VTX(-263, 382, -1279, 2127, 683, 7, 7, 7, 255),
    VTX(-263, 462, -1279, 2127, 0, 38, 38, 38, 255),
    VTX(-138, 462, -1494, 0, 0, 0, 0, 0, 255),
    VTX(-138, 382, -1494, 0, 683, 0, 0, 0, 255),
};

static Vtx death_mountain_crater_room_00Vtx_009620[32] = {
    VTX(-176, 342, -371, 1409, 530, 45, 45, 45, 255),      VTX(-156, 230, -371, 482, 652, 255, 255, 255, 255),
    VTX(-445, 405, -411, 1984, -1755, 45, 45, 45, 255),    VTX(-438, 200, -260, -24, -1466, 255, 255, 255, 255),
    VTX(501, 430, -373, 2217, 6146, 45, 45, 45, 255),      VTX(485, 206, -295, 202, 6091, 255, 255, 255, 255),
    VTX(172, 230, -427, 632, 3245, 255, 255, 255, 255),    VTX(192, 342, -427, 1563, 3454, 45, 45, 45, 255),
    VTX(197, 342, -879, 1243, 28, 85, 85, 85, 255),        VTX(143, 207, -906, 0, 0, 255, 255, 255, 255),
    VTX(270, 200, -1097, 0, 1963, 255, 255, 255, 255),     VTX(317, 342, -999, 1441, 1447, 139, 139, 139, 255),
    VTX(108, 370, -759, 1195, 2861, 45, 45, 45, 255),      VTX(88, 314, -759, 717, 2872, 191, 191, 191, 255),
    VTX(143, 207, -906, -195, 4095, 255, 255, 255, 255),   VTX(197, 342, -879, 956, 3837, 85, 85, 85, 255),
    VTX(108, 382, -639, 1297, 1839, 45, 45, 45, 255),      VTX(88, 354, -639, 1058, 1850, 191, 191, 191, 255),
    VTX(136, 370, -519, 1195, 803, 45, 45, 45, 255),       VTX(116, 314, -519, 717, 813, 53, 53, 53, 255),
    VTX(-323, 342, -999, 2650, -2001, 139, 139, 139, 255), VTX(-279, 200, -1087, 1653, -1880, 255, 255, 255, 255),
    VTX(-162, 208, -905, 1365, -530, 255, 255, 255, 255),  VTX(-203, 342, -879, 2423, -759, 85, 85, 85, 255),
    VTX(-203, 342, -879, 956, 4048, 85, 85, 85, 255),      VTX(-162, 208, -905, -193, 4254, 255, 255, 255, 255),
    VTX(-100, 314, -759, 717, 2972, 191, 191, 191, 255),   VTX(-120, 370, -759, 1195, 2982, 45, 45, 45, 255),
    VTX(-72, 354, -639, 1058, 1935, 191, 191, 191, 255),   VTX(-92, 382, -639, 1297, 1945, 45, 45, 45, 255),
    VTX(-44, 314, -519, 717, 898, 191, 191, 191, 255),     VTX(-64, 370, -519, 1195, 909, 45, 45, 45, 255),
};

static Vtx death_mountain_crater_room_00Vtx_009820[94] = {
    VTX(-64, 370, -519, 1195, 909, 45, 45, 45, 255),       VTX(-44, 314, -519, 717, 898, 191, 191, 191, 255),
    VTX(-156, 230, -371, 0, -303, 255, 255, 255, 255),     VTX(-176, 342, -371, 956, -293, 45, 45, 45, 255),
    VTX(172, 230, -427, 0, 0, 255, 255, 255, 255),         VTX(116, 314, -519, 717, 813, 53, 53, 53, 255),
    VTX(136, 370, -519, 1195, 803, 45, 45, 45, 255),       VTX(192, 342, -427, 956, -11, 45, 45, 45, 255),
    VTX(-144, 342, -79, 827, 1406, 45, 45, 45, 255),       VTX(148, 224, -33, -210, 3863, 255, 255, 255, 255),
    VTX(159, 308, -44, 509, 3965, 45, 45, 45, 255),        VTX(-132, 224, -73, -162, 1465, 255, 255, 255, 255),
    VTX(-132, 224, -73, -1573, 481, 255, 255, 255, 255),   VTX(-144, 342, -79, -817, 452, 45, 45, 45, 255),
    VTX(-403, 200, 314, -1726, 3095, 255, 255, 255, 255),  VTX(-337, 361, 343, -694, 3248, 214, 214, 214, 255),
    VTX(-220, 598, -115, 822, 260, 77, 77, 77, 255),       VTX(-441, 604, 377, 857, 3520, 53, 53, 53, 255),
    VTX(-244, 815, 39, 2211, 1259, 38, 38, 38, 255),       VTX(-444, 405, -291, -993, 2725, 45, 45, 45, 255),
    VTX(-220, 598, -115, 0, 0, 77, 77, 77, 255),           VTX(-144, 342, -79, -2296, -155, 45, 45, 45, 255),
    VTX(-1050, 970, -386, -4203, -3819, 15, 15, 15, 255),  VTX(-832, 1071, -235, -3756, -3212, 15, 15, 15, 255),
    VTX(-656, 892, -414, -2805, -3226, 15, 15, 15, 255),   VTX(-1072, 1100, -14, -4846, -2352, 15, 15, 15, 255),
    VTX(-244, 815, 39, -1954, 63, 38, 38, 38, 255),        VTX(-472, 1216, 72, -3071, -1795, 15, 15, 15, 255),
    VTX(-244, 815, 39, 0, -683, 38, 38, 38, 255),          VTX(-832, 1071, -235, 0, 3284, 15, 15, 15, 255),
    VTX(-472, 1216, 72, 1398, 1173, 15, 15, 15, 255),      VTX(-489, 947, 468, 3054, 4125, 31, 31, 31, 255),
    VTX(-244, 815, 39, 2211, 1259, 38, 38, 38, 255),       VTX(-472, 1216, 72, 4779, 1587, 15, 15, 15, 255),
    VTX(-489, 947, 468, 2620, 2004, 31, 31, 31, 255),      VTX(-472, 1216, 72, 4439, 1658, 15, 15, 15, 255),
    VTX(-618, 1032, 264, 3280, 1132, 7, 7, 7, 255),        VTX(-1072, 1100, -14, 3921, -1452, 15, 15, 15, 255),
    VTX(-893, 891, 396, 2399, -98, 31, 31, 31, 255),       VTX(-441, 604, 377, 857, 3520, 53, 53, 53, 255),
    VTX(-917, 762, 438, 1707, -197, 38, 38, 38, 255),      VTX(-438, 200, -260, -2718, -52, 255, 255, 255, 255),
    VTX(-876, 200, -298, -2292, 3615, 255, 255, 255, 255), VTX(-444, 405, -291, -1075, -50, 45, 45, 45, 255),
    VTX(-220, 598, -115, 0, 0, 77, 77, 77, 255),           VTX(-444, 405, -291, -993, 2725, 45, 45, 45, 255),
    VTX(-692, 694, -258, 1824, 3791, 107, 107, 107, 255),  VTX(-244, 815, 39, 1684, -884, 38, 38, 38, 255),
    VTX(-244, 815, 39, -1024, -2048, 38, 38, 38, 255),     VTX(-714, 713, -456, 65, 3681, 61, 61, 61, 255),
    VTX(-656, 892, -414, 1147, 2750, 15, 15, 15, 255),     VTX(-692, 694, -258, -1024, 2651, 107, 107, 107, 255),
    VTX(-714, 713, -456, 65, 3681, 107, 107, 107, 255),    VTX(-780, 588, 291, 1024, 255, 61, 61, 61, 255),
    VTX(-441, 604, 377, 1024, 2048, 53, 53, 53, 255),      VTX(-1160, 200, -174, -2668, 6152, 255, 255, 255, 255),
    VTX(-1130, 449, -260, -491, 5789, 214, 214, 214, 255), VTX(-1059, 630, -227, 642, 5215, 133, 133, 133, 255),
    VTX(-1120, 713, -191, 1130, 5764, 107, 107, 107, 255), VTX(-692, 694, -258, 1028, 2072, 107, 107, 107, 255),
    VTX(-911, 752, -442, 2389, 3730, 177, 177, 177, 255),  VTX(-1120, 753, -431, 2474, 5507, 77, 77, 77, 255),
    VTX(-1120, 753, -431, 2474, 5507, 77, 77, 77, 255),    VTX(-1050, 970, -386, 3818, 4958, 15, 15, 15, 255),
    VTX(-911, 752, -442, 2389, 3730, 61, 61, 61, 255),     VTX(-692, 694, -258, 1028, 2072, 107, 107, 107, 255),
    VTX(-911, 752, -442, 2389, 3730, 177, 177, 177, 255),  VTX(-714, 713, -456, 2048, 2048, 107, 107, 107, 255),
    VTX(-656, 892, -414, 3136, 1595, 15, 15, 15, 255),     VTX(-714, 713, -456, 2048, 2048, 61, 61, 61, 255),
    VTX(-979, 361, 294, -123, -779, 214, 214, 214, 255),   VTX(-337, 361, 343, -133, 2465, 214, 214, 214, 255),
    VTX(-441, 604, 377, 1024, 2048, 53, 53, 53, 255),      VTX(-780, 588, 291, 1024, 255, 61, 61, 61, 255),
    VTX(-1160, 200, -174, -1726, 395, 255, 255, 255, 255), VTX(-1160, 200, 174, -1726, 2608, 255, 255, 255, 255),
    VTX(-1171, 270, 83, -1282, 2039, 214, 214, 214, 255),  VTX(-1130, 449, -260, -136, -176, 214, 214, 214, 255),
    VTX(-1093, 495, 174, 161, 2575, 133, 133, 133, 255),   VTX(-1059, 630, -227, 1024, 0, 133, 133, 133, 255),
    VTX(-1082, 658, 283, 1203, 3264, 77, 77, 77, 255),     VTX(-1120, 713, -191, 1560, 263, 107, 107, 107, 255),
    VTX(-1048, 838, 162, 2355, 2476, 31, 31, 31, 255),     VTX(-1120, 753, -431, 1816, -1267, 77, 77, 77, 255),
    VTX(-1050, 970, -386, 3202, -1018, 15, 15, 15, 255),   VTX(-1072, 1100, -14, 4033, 1364, 15, 15, 15, 255),
    VTX(-901, 200, 340, -972, -373, 255, 255, 255, 255),   VTX(-403, 200, 314, -906, 2067, 255, 255, 255, 255),
    VTX(-1160, 200, 174, -790, -1867, 255, 255, 255, 255), VTX(-1171, 270, 83, -336, -2017, 214, 214, 214, 255),
    VTX(-1093, 495, 174, 682, -1462, 133, 133, 133, 255),  VTX(-917, 762, 438, 1707, -197, 38, 38, 38, 255),
    VTX(-1082, 658, 283, 1362, -1233, 77, 77, 77, 255),    VTX(-893, 891, 396, 2399, -98, 31, 31, 31, 255),
};

static Vtx death_mountain_crater_room_00Vtx_009E00[62] = {
    VTX(-1082, 658, 283, 1362, -1233, 77, 77, 77, 255),     VTX(-893, 891, 396, 2399, -98, 31, 31, 31, 255),
    VTX(-1048, 838, 162, 2405, -1173, 31, 31, 31, 255),     VTX(-1072, 1100, -14, 3921, -1452, 15, 15, 15, 255),
    VTX(501, 430, -373, -1755, -902, 45, 45, 45, 255),      VTX(159, 308, -44, -2894, 1201, 45, 45, 45, 255),
    VTX(230, 489, 102, -2154, 1886, 53, 53, 53, 255),       VTX(570, 569, -272, -1162, -462, 133, 133, 133, 255),
    VTX(236, 954, 25, 247, 2126, 15, 15, 15, 255),          VTX(501, 718, -255, -471, -30, 69, 69, 69, 255),
    VTX(159, 308, -44, -923, -782, 45, 45, 45, 255),        VTX(148, 224, -33, -1281, -790, 255, 255, 255, 255),
    VTX(482, 200, 351, -1383, 1352, 255, 255, 255, 255),    VTX(1127, 950, 57, 2058, 4422, 31, 31, 31, 255),
    VTX(939, 771, -289, 1143, 2718, 45, 45, 45, 255),       VTX(965, 1189, -203, 3282, 3046, 15, 15, 15, 255),
    VTX(1127, 950, 57, 1469, -456, 31, 31, 31, 255),        VTX(965, 1189, -203, 270, -1131, 15, 15, 15, 255),
    VTX(983, 1063, 84, 955, -570, 23, 23, 23, 255),         VTX(484, 1021, -259, 2420, 757, 15, 15, 15, 255),
    VTX(965, 1189, -203, 1968, -350, 15, 15, 15, 255),      VTX(484, 1021, -259, 1024, 380, 15, 15, 15, 255),
    VTX(455, 1264, 188, 1661, 2684, 15, 15, 15, 255),       VTX(983, 1063, 84, 996, 679, 23, 23, 23, 255),
    VTX(811, 975, 334, 181, 2068, 23, 23, 23, 255),         VTX(509, 919, 369, 1686, 1491, 23, 23, 23, 255),
    VTX(811, 975, 334, 1921, 2388, 23, 23, 23, 255),        VTX(455, 1264, 188, 3155, 820, 15, 15, 15, 255),
    VTX(327, 1101, 15, 2462, -67, 15, 15, 15, 255),         VTX(327, 1101, 15, 1024, 2048, 15, 15, 15, 255),
    VTX(1160, 200, 174, -3325, -464, 255, 255, 255, 255),   VTX(1160, 200, -174, -2893, -1959, 255, 255, 255, 255),
    VTX(1081, 362, -138, -2165, -1404, 214, 214, 214, 255), VTX(1160, 200, -174, -1781, 3994, 255, 255, 255, 255),
    VTX(889, 200, -390, -1781, 2240, 255, 255, 255, 255),   VTX(737, 371, -343, -904, 1677, 214, 214, 214, 255),
    VTX(1081, 362, -138, -952, 3727, 214, 214, 214, 255),   VTX(1153, 352, 198, -2602, -149, 214, 214, 214, 255),
    VTX(841, 540, -304, -42, 2240, 133, 133, 133, 255),     VTX(1056, 548, 55, -1493, -278, 77, 77, 77, 255),
    VTX(1056, 548, 55, 0, 4096, 77, 77, 77, 255),           VTX(939, 771, -289, 1143, 2718, 45, 45, 45, 255),
    VTX(1127, 950, 57, 2058, 4422, 31, 31, 31, 255),        VTX(802, 839, 476, -670, 2533, 38, 38, 38, 255),
    VTX(1127, 950, 57, 522, 66, 31, 31, 31, 255),           VTX(983, 1063, 84, 996, 679, 23, 23, 23, 255),
    VTX(811, 975, 334, 181, 2068, 23, 23, 23, 255),         VTX(485, 206, -295, -1752, 670, 255, 255, 255, 255),
    VTX(501, 430, -373, -606, 546, 45, 45, 45, 255),        VTX(570, 569, -272, 109, 1108, 133, 133, 133, 255),
    VTX(501, 718, -255, 873, 843, 69, 69, 69, 255),         VTX(484, 1021, -259, 2420, 757, 15, 15, 15, 255),
    VTX(795, 567, 423, -1955, 1975, 85, 85, 85, 255),       VTX(501, 430, -373, -1755, -902, 45, 45, 45, 255),
    VTX(230, 489, 102, -2154, 1886, 53, 53, 53, 255),       VTX(305, 764, 67, -718, 1897, 107, 107, 107, 255),
    VTX(570, 569, -272, -1162, -462, 133, 133, 133, 255),   VTX(236, 954, 25, 247, 2126, 15, 15, 15, 255),
    VTX(501, 718, -255, -471, -30, 69, 69, 69, 255),        VTX(327, 1101, 15, 1024, 2048, 15, 15, 15, 255),
    VTX(484, 1021, -259, 1024, 380, 15, 15, 15, 255),       VTX(763, 373, 491, -3012, 2098, 214, 214, 214, 255),
};

static Vtx death_mountain_crater_room_00Vtx_00A1E0[32] = {
    VTX(159, 308, -44, -923, -782, 45, 45, 45, 255),      VTX(482, 200, 351, -1383, 1352, 255, 255, 255, 255),
    VTX(373, 379, 328, -622, 931, 214, 214, 214, 255),    VTX(230, 489, 102, -151, -152, 53, 53, 53, 255),
    VTX(542, 649, 433, 532, 1773, 85, 85, 85, 255),       VTX(305, 764, 67, 1024, 0, 107, 107, 107, 255),
    VTX(571, 777, 427, 1077, 1854, 45, 45, 45, 255),      VTX(236, 954, 25, 1833, -341, 15, 15, 15, 255),
    VTX(509, 919, 369, 1686, 1491, 23, 23, 23, 255),      VTX(327, 1101, 15, 2462, -67, 15, 15, 15, 255),
    VTX(889, 200, 390, -3696, 1136, 255, 255, 255, 255),  VTX(1160, 200, 174, -3325, -464, 255, 255, 255, 255),
    VTX(1153, 352, 198, -2602, -149, 214, 214, 214, 255), VTX(763, 373, 491, -3012, 2098, 214, 214, 214, 255),
    VTX(889, 200, 390, -1383, 2799, 255, 255, 255, 255),  VTX(763, 373, 491, -645, 2659, 214, 214, 214, 255),
    VTX(795, 567, 423, 182, 2580, 85, 85, 85, 255),       VTX(802, 839, 476, 1344, 2746, 38, 38, 38, 255),
    VTX(811, 975, 334, 1921, 2388, 23, 23, 23, 255),      VTX(-444, 405, -291, 1744, -1497, 45, 45, 45, 255),
    VTX(-445, 405, -411, 1984, -1755, 45, 45, 45, 255),   VTX(-438, 200, -260, -24, -1466, 255, 255, 255, 255),
    VTX(-162, 208, -905, -547, 3234, 255, 255, 255, 255), VTX(143, 207, -906, 2048, 3076, 255, 255, 255, 255),
    VTX(88, 314, -759, 1506, 1811, 191, 191, 191, 255),   VTX(-100, 314, -759, -95, 1910, 191, 191, 191, 255),
    VTX(88, 354, -639, 1441, 774, 191, 191, 191, 255),    VTX(-72, 354, -639, 79, 858, 191, 191, 191, 255),
    VTX(-44, 314, -519, 255, -161, 191, 191, 191, 255),   VTX(116, 314, -519, 1618, -246, 53, 53, 53, 255),
    VTX(172, 230, -427, 2048, -1024, 255, 255, 255, 255), VTX(-156, 230, -371, -775, -1327, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_00A3E0[32] = {
    VTX(-272, 633, -1307, 0, 1024, 15, 15, 15, 255),       VTX(-293, 612, -1279, -1043, 1024, 45, 45, 45, 255),
    VTX(-272, 633, -1250, -1022, 1545, 77, 77, 77, 255),   VTX(162, 821, -1163, -147, 1024, 61, 61, 61, 255),
    VTX(186, 843, -1137, -88, 1554, 153, 153, 153, 255),   VTX(180, 843, -1193, 915, 1024, 31, 31, 31, 255),
    VTX(218, 843, -1151, -201, 1024, 153, 153, 153, 255),  VTX(214, 821, -1186, 528, 1410, 31, 31, 31, 255),
    VTX(180, 843, -1193, 1258, 1024, 31, 31, 31, 255),     VTX(-168, 764, -1394, -206, 1091, 31, 31, 31, 255),
    VTX(-220, 725, -1371, 1286, 1577, 153, 153, 153, 255), VTX(-186, 740, -1364, 887, 1126, 153, 153, 153, 255),
    VTX(-168, 764, -1394, -1492, 1510, 31, 31, 31, 255),   VTX(-224, 764, -1406, -84, 1703, 31, 31, 31, 255),
    VTX(-220, 725, -1371, 0, 1024, 153, 153, 153, 255),    VTX(-168, 764, -1394, 279, 1453, 31, 31, 31, 255),
    VTX(-192, 764, -1421, 0, 1024, 7, 7, 7, 255),          VTX(-224, 764, -1406, -902, 1024, 31, 31, 31, 255),
    VTX(-491, 874, -874, -683, -1707, 148, 148, 148, 255), VTX(-323, 606, -1494, 3413, 341, 15, 15, 15, 255),
    VTX(-252, 904, -1494, 3413, -1707, 23, 23, 23, 255),   VTX(-323, 382, -999, 0, 1707, 38, 38, 38, 255),
    VTX(-323, 382, -1494, 3413, 1707, 0, 0, 0, 255),       VTX(317, 382, -1494, -849, 1370, 0, 0, 0, 255),
    VTX(474, 944, -963, 2564, -2044, 148, 148, 148, 255),  VTX(317, 864, -1494, -849, -2044, 23, 23, 23, 255),
    VTX(99, 835, -1494, 0, 1024, 53, 53, 53, 255),         VTX(127, 835, -1474, 0, 1475, 53, 53, 53, 255),
    VTX(156, 835, -1494, 858, 1614, 53, 53, 53, 255),      VTX(-161, 835, -1494, 0, 1024, 53, 53, 53, 255),
    VTX(-133, 835, -1474, 0, 1475, 53, 53, 53, 255),       VTX(-104, 835, -1494, 858, 1614, 53, 53, 53, 255),
};

static Vtx death_mountain_crater_room_00Vtx_00A5E0[27] = {
    VTX(317, 382, -1494, -849, 1370, 0, 0, 0, 255),        VTX(317, 382, -999, 1881, 1370, 38, 38, 38, 255),
    VTX(474, 944, -963, 2564, -2044, 148, 148, 148, 255),  VTX(-138, 382, -1494, 293, 1036, 0, 0, 0, 255),
    VTX(-323, 606, -1494, -1035, -516, 15, 15, 15, 255),   VTX(-323, 382, -1494, -1007, 1059, 0, 0, 0, 255),
    VTX(-104, 742, -1494, 486, -1502, 23, 23, 23, 255),    VTX(-252, 904, -1494, -575, -2624, 23, 23, 23, 255),
    VTX(133, 382, -1494, 2198, 1002, 0, 0, 0, 255),        VTX(317, 382, -1494, 3497, 979, 0, 0, 0, 255),
    VTX(99, 742, -1494, 1914, -1528, 23, 23, 23, 255),     VTX(317, 864, -1494, 3437, -2410, 23, 23, 23, 255),
    VTX(156, 674, -1063, -101, 1083, 53, 53, 53, 255),     VTX(127, 700, -1083, 630, 1514, 31, 31, 31, 255),
    VTX(145, 700, -1029, 866, 793, 133, 133, 133, 255),    VTX(127, 700, -1083, 1258, 1024, 31, 31, 31, 255),
    VTX(99, 691, -1063, 979, 580, 23, 23, 23, 255),        VTX(145, 700, -1029, -201, 1024, 133, 133, 133, 255),
    VTX(99, 691, -1063, 0, 1024, 23, 23, 23, 255),         VTX(110, 677, -1029, -974, 1024, 107, 107, 107, 255),
    VTX(145, 700, -1029, -1009, 1563, 133, 133, 133, 255), VTX(-239, 633, -1296, 0, 1024, 15, 15, 15, 255),
    VTX(-272, 633, -1250, -1460, 1024, 77, 77, 77, 255),   VTX(-239, 594, -1261, -730, 1586, 153, 153, 153, 255),
    VTX(-239, 633, -1296, 1258, 1024, 15, 15, 15, 255),    VTX(-272, 633, -1307, 979, 595, 15, 15, 15, 255),
    VTX(-272, 633, -1250, -201, 1024, 77, 77, 77, 255),
};

static Vtx death_mountain_crater_room_00Vtx_00A790[28] = {
    VTX(-491, 874, -874, -1689, -510, 148, 148, 148, 255), VTX(-252, 904, -1494, -1015, 2023, 23, 23, 23, 255),
    VTX(-159, 1168, -818, 34, -977, 122, 122, 122, 255),   VTX(474, 944, -963, 2418, 635, 148, 148, 148, 255),
    VTX(122, 1144, -715, 1267, -1046, 122, 122, 122, 255), VTX(317, 864, -1494, 1361, 2660, 23, 23, 23, 255),
    VTX(157, 742, -1359, 726, 1417, 23, 23, 23, 255),      VTX(99, 742, -1494, 1638, 1024, 0, 0, 0, 255),
    VTX(-104, 742, -1494, 1638, -339, 0, 0, 0, 255),       VTX(-163, 742, -1359, 726, -732, 23, 23, 23, 255),
    VTX(-116, 742, -1245, -34, -417, 38, 38, 38, 255),     VTX(-3, 742, -1199, -348, 343, 53, 53, 53, 255),
    VTX(110, 742, -1245, -34, 1102, 38, 38, 38, 255),      VTX(-203, 342, -879, 132, 1619, 38, 38, 38, 255),
    VTX(-120, 370, -759, 1418, 2127, 45, 45, 45, 255),     VTX(108, 370, -759, 3214, 929, 45, 45, 45, 255),
    VTX(197, 342, -879, 3282, -482, 38, 38, 38, 255),      VTX(-92, 382, -639, 2269, 2925, 45, 45, 45, 255),
    VTX(108, 382, -639, 3844, 1875, 45, 45, 45, 255),      VTX(-64, 370, -519, 3119, 3723, 45, 45, 45, 255),
    VTX(136, 370, -519, 4695, 2673, 45, 45, 45, 255),      VTX(-176, 342, -371, 3014, 5477, 45, 45, 45, 255),
    VTX(192, 342, -427, 5619, 3104, 45, 45, 45, 255),      VTX(-144, 342, -79, 4800, 7609, 45, 45, 45, 255),
    VTX(159, 308, -44, 7365, 6293, 45, 45, 45, 255),       VTX(-444, 405, -291, 1316, 7510, 45, 45, 45, 255),
    VTX(501, 430, -373, 8328, 1908, 45, 45, 45, 255),      VTX(-445, 405, -411, 680, 6569, 45, 45, 45, 255),
};

static Vtx death_mountain_crater_room_00Vtx_00A950[8] = {
    VTX(-3127, 200, -3127, 0, 0, 0, 0, 0, 0),  VTX(-3127, 200, 3490, 0, 0, 0, 0, 0, 0),
    VTX(-3127, 3720, -3127, 0, 0, 0, 0, 0, 0), VTX(-3127, 3720, 3490, 0, 0, 0, 0, 0, 0),
    VTX(3127, 200, -3127, 0, 0, 0, 0, 0, 0),   VTX(3127, 200, 3490, 0, 0, 0, 0, 0, 0),
    VTX(3127, 3720, -3127, 0, 0, 0, 0, 0, 0),  VTX(3127, 3720, 3490, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x00A9D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_00A950[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_00BC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 2, 4, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 120, 120, 255, 255),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006490[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0064D0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_00C040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 2, 0, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006550[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_00D040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0065D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_sceneTex_003AD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, 1, 1, 5, 4, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006610[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_00E040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006650[0], 32, 0),
    gsSP2Triangles(0, 1, 1, 0, 0, 1, 2, 0),
    gsSP2Triangles(3, 3, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 2, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 4, 10, 0),
    gsSP2Triangles(9, 10, 11, 0, 7, 4, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 12, 15, 0),
    gsSP2Triangles(12, 15, 13, 0, 16, 16, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 4, 19, 20, 0),
    gsSP2Triangles(4, 20, 10, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 14, 0, 21, 16, 22, 0),
    gsSP2Triangles(16, 21, 17, 0, 19, 21, 14, 0),
    gsSP2Triangles(19, 14, 20, 0, 24, 18, 25, 0),
    gsSP2Triangles(24, 16, 18, 0, 12, 26, 15, 0),
    gsSP2Triangles(26, 27, 15, 0, 22, 28, 29, 0),
    gsSP1Triangle(22, 29, 23, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006650[30], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 2, 4, 0, 2, 4, 3, 0),
    gsSP2Triangles(0, 3, 5, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 6, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 5, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 14, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_00F040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006930[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006B30[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 22, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006B30[30], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 8, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_00F840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006DB0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_006FB0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 20, 0),
    gsSP2Triangles(15, 20, 16, 0, 15, 21, 22, 0),
    gsSP2Triangles(15, 22, 18, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 16, 0),
    gsSP2Triangles(27, 16, 20, 0, 29, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0071B0[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_010040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0073A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 4, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 4, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 10, 9, 0, 7, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0075A0[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 19, 20, 0),
    gsSP1Triangle(19, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_011040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_007700[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 6, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_012040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 0, 0, 4, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_007780[0], 2, 0),
    gsSP1Triangle(0, 0, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_012440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0077A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 7, 11, 0, 7, 9, 11, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 10, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 18, 20, 16, 0),
    gsSP2Triangles(18, 16, 16, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(26, 25, 23, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0077A0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 12, 0, 2, 0),
    gsSP2Triangles(12, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(12, 2, 14, 0, 17, 18, 10, 0),
    gsSP2Triangles(18, 11, 10, 0, 11, 18, 19, 0),
    gsSP2Triangles(18, 17, 19, 0, 16, 14, 20, 0),
    gsSP2Triangles(14, 2, 20, 0, 17, 16, 20, 0),
    gsSP2Triangles(17, 20, 19, 0, 5, 10, 7, 0),
    gsSP2Triangles(5, 17, 10, 0, 15, 4, 12, 0),
    gsSP2Triangles(4, 6, 12, 0, 13, 12, 6, 0),
    gsSP2Triangles(7, 10, 9, 0, 7, 21, 6, 0),
    gsSP2Triangles(6, 21, 13, 0, 21, 7, 9, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(21, 25, 13, 0, 25, 27, 13, 0),
    gsSP2Triangles(21, 22, 25, 0, 23, 22, 28, 0),
    gsSP2Triangles(23, 28, 29, 0, 28, 30, 31, 0),
    gsSP2Triangles(28, 31, 29, 0, 22, 21, 28, 0),
    gsSP2Triangles(21, 9, 28, 0, 9, 30, 28, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_007B90[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 7, 10, 15, 0),
    gsSP2Triangles(7, 15, 16, 0, 17, 10, 9, 0),
    gsSP2Triangles(13, 17, 18, 0, 17, 15, 10, 0),
    gsSP2Triangles(12, 17, 13, 0, 17, 12, 15, 0),
    gsSP2Triangles(18, 19, 13, 0, 18, 13, 13, 0),
    gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 27, 28, 0),
    gsSP2Triangles(13, 19, 30, 0, 13, 30, 14, 0),
    gsSP2Triangles(1, 12, 11, 0, 1, 11, 2, 0),
    gsSP2Triangles(12, 1, 0, 0, 12, 0, 15, 0),
    gsSP2Triangles(16, 15, 0, 0, 16, 0, 3, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_007B90[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 11, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 12, 9, 10, 0),
    gsSP2Triangles(18, 19, 13, 0, 12, 20, 9, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(23, 12, 24, 0, 12, 13, 24, 0),
    gsSP2Triangles(23, 20, 12, 0, 25, 24, 19, 0),
    gsSP2Triangles(24, 13, 19, 0, 25, 21, 24, 0),
    gsSP2Triangles(18, 26, 19, 0, 27, 28, 19, 0),
    gsSP2Triangles(28, 29, 19, 0, 27, 30, 28, 0),
    gsSP1Triangle(19, 29, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_007F80[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 2, 0),
    gsSP2Triangles(2, 8, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 9, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(18, 22, 21, 0, 18, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(26, 25, 30, 0, 27, 31, 28, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_008180[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(7, 12, 9, 0, 12, 13, 9, 0),
    gsSP2Triangles(13, 14, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 16, 22, 17, 0),
    gsSP2Triangles(22, 24, 17, 0, 16, 19, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 25, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_008180[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 3, 5, 7, 0),
    gsSP1Triangle(6, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_013440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, 0, 2, 6, 3, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0083E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_013840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, 0, 0, 4, 7,
                         0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0085E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0085E0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0089C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_008BC0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_008DC0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 28, 29, 30, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_008DC0[31], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 7, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_014840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 0, 0, 4, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0090D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 5, 0, 11, 5, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(21, 20, 24, 0, 21, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0092D0[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 9, 0, 14, 9, 8, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(19, 18, 21, 0, 19, 21, 20, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_sceneTex_003ED0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 2, 0, 6, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009480[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0094E0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009540[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0095A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_014C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA,
                       COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0095E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_015440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009620[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 12, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009820[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 13, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 22, 25, 0),
    gsSP2Triangles(26, 24, 23, 0, 27, 23, 25, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009820[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 5, 6, 0),
    gsSP2Triangles(8, 1, 0, 0, 9, 3, 5, 0),
    gsSP2Triangles(9, 5, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 21, 0),
    gsSP2Triangles(22, 23, 3, 0, 22, 3, 9, 0),
    gsSP2Triangles(11, 24, 25, 0, 11, 25, 12, 0),
    gsSP2Triangles(12, 25, 26, 0, 12, 26, 27, 0),
    gsSP2Triangles(12, 27, 28, 0, 28, 27, 29, 0),
    gsSP1Triangle(27, 30, 29, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009820[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 7, 0, 2, 1, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(24, 25, 9, 0, 24, 9, 8, 0),
    gsSP2Triangles(26, 24, 8, 0, 26, 8, 27, 0),
    gsSP2Triangles(27, 8, 11, 0, 27, 11, 28, 0),
    gsSP2Triangles(28, 11, 29, 0, 28, 29, 30, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009E00[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 14, 19, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 21, 29, 22, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_009E00[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 2, 2, 0),
    gsSP2Triangles(0, 2, 7, 0, 6, 5, 8, 0),
    gsSP2Triangles(6, 8, 6, 0, 7, 2, 9, 0),
    gsSP2Triangles(6, 8, 10, 0, 10, 8, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 4, 17, 18, 0),
    gsSP2Triangles(4, 18, 5, 0, 5, 18, 19, 0),
    gsSP2Triangles(5, 19, 8, 0, 8, 19, 20, 0),
    gsSP2Triangles(8, 20, 11, 0, 11, 20, 21, 0),
    gsSP2Triangles(22, 9, 14, 0, 22, 14, 13, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(26, 25, 27, 0, 28, 27, 29, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 7, 9, 0),
    gsSP1Triangle(31, 9, 22, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_00A1E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(1, 14, 15, 0, 1, 15, 2, 0),
    gsSP2Triangles(2, 15, 16, 0, 2, 16, 4, 0),
    gsSP2Triangles(4, 16, 17, 0, 4, 17, 6, 0),
    gsSP2Triangles(6, 17, 18, 0, 6, 18, 8, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 25, 24, 26, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(28, 26, 29, 0, 30, 31, 28, 0),
    gsSP1Triangle(30, 28, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_016440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_00A3E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_00A5E0[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 7, 6, 10, 0),
    gsSP2Triangles(7, 10, 11, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_017440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0,
                         0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_00A790[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 12, 0, 2, 5, 4, 0),
    gsSP2Triangles(2, 1, 5, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(14, 18, 15, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 23, 21, 0),
    gsSP2Triangles(22, 24, 26, 0, 25, 21, 27, 0),
    gsSPEndDisplayList(),
};

u64 death_mountain_crater_room_00Tex_00BC40[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_00BC40.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_00C040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_00C040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_00D040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_00D040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_00E040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_00E040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_00F040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_00F040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_00F840[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_00F840.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_010040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_010040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_011040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_011040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_012040[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_012040.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_012440[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_012440.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_013440[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_013440.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_013840[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_013840.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_014840[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_014840.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_014C40[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_014C40.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_015440[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_015440.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_016440[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_016440.rgb5a1.inc.c"
};

u64 death_mountain_crater_room_00Tex_017440[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_017440.rgb5a1.inc.c"
};

static Vtx death_mountain_crater_room_00Vtx_018440[32] = {
    VTX(-1740, 744, 372, 3096, 991, 255, 255, 255, 255),     VTX(-1490, 710, 538, 3303, -709, 255, 255, 255, 255),
    VTX(-1315, 710, 386, 2079, -1219, 255, 255, 255, 255),   VTX(-1258, 710, 219, 1078, -1085, 255, 255, 255, 255),
    VTX(-1423, 701, -114, -205, 614, 255, 255, 255, 255),    VTX(-1665, 723, -102, 474, 1824, 255, 255, 255, 255),
    VTX(-1423, 701, -234, -820, 919, 255, 255, 255, 255),    VTX(-1612, 716, -233, -332, 1887, 255, 255, 255, 255),
    VTX(127, 1000, 758, -2048, 2048, 255, 255, 255, 255),    VTX(246, 1000, 1135, -1334, -2423, 255, 255, 255, 255),
    VTX(590, 1000, 974, -5684, -2545, 255, 255, 255, 255),   VTX(290, 1000, 1330, -785, -4646, 255, 255, 255, 255),
    VTX(1131, 1000, 924, -11483, -4796, 255, 255, 255, 255), VTX(-520, 1000, 1282, 7266, -12, 255, 255, 255, 255),
    VTX(-622, 962, 1061, 7173, 2771, 255, 255, 255, 255),    VTX(-741, 1000, 1130, 8741, 2683, 255, 255, 255, 255),
    VTX(-901, 1000, 1230, 10893, 2479, 255, 255, 255, 255),  VTX(-145, 1000, 768, 790, 3338, 255, 255, 255, 255),
    VTX(-759, 1000, 1418, 10403, -178, 255, 255, 255, 255),  VTX(67, 970, 636, -2056, 3603, 255, 255, 255, 255),
    VTX(-75, 971, 627, -651, 4426, 255, 255, 255, 255),      VTX(-1812, 2333, 1698, 2150, 2765, 0, 0, 0, 255),
    VTX(-1821, 2460, 1701, 2827, 816, 0, 0, 0, 255),         VTX(-1830, 2523, 1792, 1793, -652, 0, 0, 0, 255),
    VTX(-1826, 2409, 1883, -232, 569, 0, 0, 0, 255),         VTX(-1820, 2327, 1878, -614, 1843, 0, 0, 0, 255),
    VTX(-2345, 980, 295, 1066, 2160, 0, 0, 0, 255),          VTX(-2072, 954, 183, 1384, 1461, 255, 255, 255, 255),
    VTX(-2038, 971, 245, 1082, 1332, 255, 255, 255, 255),    VTX(-1849, 931, 69, 1825, 491, 255, 255, 255, 255),
    VTX(-1769, 973, 218, 1104, 188, 255, 255, 255, 255),     VTX(-2272, 980, 438, 448, 1878, 0, 0, 0, 255),
};

static Vtx death_mountain_crater_room_00Vtx_018640[24] = {
    VTX(-2272, 980, 438, 448, 1878, 0, 0, 0, 255),          VTX(-2038, 971, 245, 1082, 1332, 255, 255, 255, 255),
    VTX(-1994, 971, 327, 727, 1158, 255, 255, 255, 255),    VTX(-1769, 973, 218, 1104, 188, 255, 255, 255, 255),
    VTX(-1969, 946, 372, 421, 1069, 255, 255, 255, 255),    VTX(-1689, 911, 319, 382, -116, 255, 255, 255, 255),
    VTX(-2106, 768, 121, 2746, 3507, 255, 255, 255, 255),   VTX(-2377, 794, 232, 3567, 4116, 0, 0, 0, 255),
    VTX(-2237, 788, 507, 4617, 2699, 0, 0, 0, 255),         VTX(-1940, 762, 426, 3884, 1876, 255, 255, 255, 255),
    VTX(-1665, 723, -102, 474, 1824, 255, 255, 255, 255),   VTX(-1740, 744, 372, 3096, 991, 255, 255, 255, 255),
    VTX(-1609, 2424, 1893, -308, 7738, 255, 255, 255, 255), VTX(-1826, 2409, 1883, -308, 10322, 0, 0, 0, 255),
    VTX(-1830, 2523, 1792, 1425, 10322, 0, 0, 0, 255),      VTX(-1601, 2539, 1803, 1425, 7601, 255, 255, 255, 255),
    VTX(-1298, 2446, 1908, -308, 4036, 255, 255, 255, 255), VTX(-1302, 2561, 1817, 1425, 4036, 255, 255, 255, 255),
    VTX(-1601, 2539, 1803, 240, 7601, 255, 255, 255, 255),  VTX(-1830, 2523, 1792, 240, 10322, 0, 0, 0, 255),
    VTX(-1821, 2460, 1701, 1556, 10322, 0, 0, 0, 255),      VTX(-1594, 2477, 1711, 1556, 7615, 255, 255, 255, 255),
    VTX(-1302, 2561, 1817, 240, 4036, 255, 255, 255, 255),  VTX(-1293, 2498, 1725, 1556, 4036, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_0187C0[28] = {
    VTX(-1940, 762, 426, 1830, 2048, 255, 255, 255, 255),
    VTX(-2237, 788, 507, 3631, 2048, 0, 0, 0, 255),
    VTX(-2272, 980, 438, 3930, 143, 0, 0, 0, 255),
    VTX(-1969, 946, 372, 2206, 191, 255, 255, 255, 255),
    VTX(-1608, 2342, 1888, 5420, 2048, 255, 255, 255, 255),
    VTX(-1820, 2327, 1878, 9039, 2048, 0, 0, 0, 255),
    VTX(-1826, 2409, 1883, 9039, 334, 0, 0, 0, 255),
    VTX(-1609, 2424, 1893, 5323, 334, 255, 255, 255, 255),
    VTX(-1292, 2365, 1902, 0, 2048, 255, 255, 255, 255),
    VTX(-1298, 2446, 1908, 0, 334, 255, 255, 255, 255),
    VTX(-1740, 744, 372, -105, 2048, 255, 255, 255, 255),
    VTX(-1689, 911, 319, -318, 260, 255, 255, 255, 255),
    VTX(-2072, 954, 183, 1590, 138, 255, 255, 255, 255),
    VTX(-2345, 980, 295, -163, 138, 0, 0, 0, 255),
    VTX(-2377, 794, 232, 0, 2048, 0, 0, 0, 255),
    VTX(-2106, 768, 121, 1733, 2048, 255, 255, 255, 255),
    VTX(-1849, 931, 69, 4023, 138, 255, 255, 255, 255),
    VTX(-1665, 723, -102, 6528, 2048, 255, 255, 255, 255),
    VTX(-2377, 794, 232, 2834, 2048, 0, 0, 0, 255),
    VTX(-2345, 980, 295, 2140, 83, 0, 0, 0, 255),
    VTX(-2272, 980, 438, 451, 47, 0, 0, 0, 255),
    VTX(-2237, 788, 507, -404, 2048, 0, 0, 0, 255),
    VTX(-1594, 2477, 1711, 3834, 396, 255, 255, 255, 255),
    VTX(-1821, 2460, 1701, 65, 396, 0, 0, 0, 255),
    VTX(-1812, 2333, 1698, 0, 2048, 0, 0, 0, 255),
    VTX(-1593, 2349, 1708, 3620, 2048, 255, 255, 255, 255),
    VTX(-1293, 2498, 1725, 8816, 396, 255, 255, 255, 255),
    VTX(-1284, 2371, 1723, 8751, 2048, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_018980[48] = {
    VTX(-377, 1412, 1553, 0, 2048, 255, 255, 255, 255),    VTX(-493, 1414, 1359, 2048, 2048, 255, 255, 255, 255),
    VTX(-656, 1409, 1625, 2048, -341, 255, 255, 255, 255), VTX(660, 1785, 1732, 0, 2048, 255, 255, 255, 255),
    VTX(421, 1785, 1955, 2048, -1365, 255, 255, 255, 255), VTX(574, 1785, 2267, 0, -4779, 255, 255, 255, 255),
    VTX(-743, 768, 1131, 0, -1707, 255, 255, 255, 255),    VTX(-833, 713, 996, 0, 341, 255, 255, 255, 255),
    VTX(-996, 713, 1141, 2048, 341, 255, 255, 255, 255),   VTX(-901, 768, 1229, 2048, -1707, 255, 255, 255, 255),
    VTX(-833, 713, 996, 0, 341, 255, 255, 255, 255),       VTX(-858, 713, 895, 0, 2048, 255, 255, 255, 255),
    VTX(-996, 713, 1141, 2048, 341, 255, 255, 255, 255),   VTX(-1187, 713, 963, 2048, 3755, 255, 255, 255, 255),
    VTX(-994, 713, 827, 0, 3755, 255, 255, 255, 255),      VTX(574, 1785, 2267, 2048, -22869, 255, 255, 255, 255),
    VTX(421, 1785, 1955, 0, -21845, 255, 255, 255, 255),   VTX(-222, 2220, 2151, 2048, -13653, 255, 255, 255, 255),
    VTX(-222, 2210, 1795, 0, -13653, 255, 255, 255, 255),  VTX(-222, 2220, 2151, 2048, -13653, 255, 255, 255, 255),
    VTX(-222, 2210, 1795, 0, -13653, 255, 255, 255, 255),  VTX(-1173, 2381, 1987, 2048, -4096, 255, 255, 255, 255),
    VTX(-1171, 2381, 1677, 0, -4096, 255, 255, 255, 255),  VTX(-1173, 2381, 1987, 2048, -4096, 255, 255, 255, 255),
    VTX(-1171, 2381, 1677, 0, -4096, 255, 255, 255, 255),  VTX(-1292, 2365, 1902, 2048, -2731, 255, 255, 255, 255),
    VTX(-1284, 2371, 1723, 0, -2731, 255, 255, 255, 255),  VTX(421, 1785, 1955, 2048, -11605, 255, 255, 255, 255),
    VTX(660, 1785, 1732, 0, -12971, 255, 255, 255, 255),   VTX(-485, 1409, 1729, 2048, 2048, 255, 255, 255, 255),
    VTX(-377, 1412, 1553, 0, 1365, 255, 255, 255, 255),    VTX(290, 1000, 1330, 2048, -11605, 255, 255, 255, 255),
    VTX(-493, 1414, 1359, 0, 2048, 255, 255, 255, 255),    VTX(-377, 1412, 1553, 2048, 2048, 255, 255, 255, 255),
    VTX(246, 1000, 1135, 0, -11605, 255, 255, 255, 255),   VTX(-377, 1412, 1553, 0, -2731, 255, 255, 255, 255),
    VTX(-656, 1409, 1625, 2048, -341, 255, 255, 255, 255), VTX(-485, 1409, 1729, 2048, -2731, 255, 255, 255, 255),
    VTX(-377, 1412, 1553, 0, 2048, 255, 255, 255, 255),    VTX(-377, 1412, 1553, 0, -341, 255, 255, 255, 255),
    VTX(-1593, 2349, 1708, 0, 71, 255, 255, 255, 255),     VTX(-1812, 2333, 1698, 0, 2048, 0, 0, 0, 255),
    VTX(-1820, 2327, 1878, 2048, 2048, 0, 0, 0, 255),      VTX(-1602, 2345, 1815, 1217, 109, 255, 255, 255, 255),
    VTX(-1284, 2371, 1723, 0, -2731, 255, 255, 255, 255),  VTX(-1602, 2345, 1815, 1217, 109, 255, 255, 255, 255),
    VTX(-1608, 2342, 1888, 2048, 135, 255, 255, 255, 255), VTX(-1292, 2365, 1902, 2048, -2731, 255, 255, 255, 255),
};

static Vtx death_mountain_crater_room_00Vtx_018C80[8] = {
    VTX(-2377, 701, -234, 0, 0, 0, 0, 0, 0),  VTX(-2377, 701, 2267, 0, 0, 0, 0, 0, 0),
    VTX(-2377, 2561, -234, 0, 0, 0, 0, 0, 0), VTX(-2377, 2561, 2267, 0, 0, 0, 0, 0, 0),
    VTX(1131, 701, -234, 0, 0, 0, 0, 0, 0),   VTX(1131, 701, 2267, 0, 0, 0, 0, 0, 0),
    VTX(1131, 2561, -234, 0, 0, 0, 0, 0, 0),  VTX(1131, 2561, 2267, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x018D00[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_018C80[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_018FA8, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, SHADE, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 29, 15, 13, 255),
    gsSPVertex(&death_mountain_crater_room_00Vtx_018440[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 4, 5, 0, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 17, 14, 13, 0),
    gsSP2Triangles(13, 9, 17, 0, 9, 8, 17, 0),
    gsSP2Triangles(18, 13, 16, 0, 8, 19, 20, 0),
    gsSP2Triangles(8, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSP2Triangles(27, 30, 28, 0, 31, 26, 28, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_018640[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(5, 2, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 6, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 12, 15, 0),
    gsSP2Triangles(16, 15, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 18, 21, 0),
    gsSP1Triangle(22, 21, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_019FA8, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_0187C0[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_01AFA8, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_018980[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(11, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_018980[31], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(4, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 9, 12, 0),
    gsSP2Triangles(14, 11, 15, 0, 16, 13, 14, 0),
    gsSP1Triangle(16, 14, 15, 0),
    gsSPEndDisplayList(),
};

u64 death_mountain_crater_room_00Tex_018FA8[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_018FA8.i8.inc.c"
};

u64 death_mountain_crater_room_00Tex_019FA8[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_019FA8.i8.inc.c"
};

u64 death_mountain_crater_room_00Tex_01AFA8[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_01AFA8.i8.inc.c"
};

Gfx death_mountain_crater_room_00Dlist0x01BFA8[] = {
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x0003B0),
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x0015E0),
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x001DB0),
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x0051A8),
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x00A9D0),
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x018D00),
    gsSPEndDisplayList(),
};

static Vtx death_mountain_crater_room_00Vtx_01BFE0[3] = {
    VTX(-3, 683, -1173, -301, 1545, 59, 43, 95, 255),
    VTX(10, 683, -1180, 0, 1024, 59, 43, 95, 255),
    VTX(1, 695, -1180, -602, 1024, 59, 43, 95, 255),
};

static Vtx death_mountain_crater_room_00Vtx_01C010[42] = {
    VTX(10, 683, -1180, -301, 1545, 117, 0, 234, 255),    VTX(7, 675, -1193, 0, 1024, 117, 0, 234, 255),
    VTX(7, 690, -1193, -602, 1024, 117, 0, 234, 255),     VTX(-3, 683, -1173, -301, 1545, 234, 69, 95, 255),
    VTX(1, 695, -1180, 0, 1024, 234, 69, 95, 255),        VTX(-13, 690, -1180, -602, 1024, 234, 69, 95, 255),
    VTX(1, 695, -1180, -301, 1545, 36, 112, 234, 255),    VTX(7, 690, -1193, 0, 1024, 36, 112, 234, 255),
    VTX(-7, 695, -1193, -602, 1024, 36, 112, 234, 255),   VTX(-3, 683, -1173, -301, 1545, 183, 0, 95, 255),
    VTX(-13, 690, -1180, 0, 1024, 183, 0, 95, 255),       VTX(-13, 675, -1180, -602, 1024, 183, 0, 95, 255),
    VTX(-13, 690, -1180, -301, 1545, 161, 69, 234, 255),  VTX(-7, 695, -1193, 0, 1024, 161, 69, 234, 255),
    VTX(-15, 683, -1193, -602, 1024, 161, 69, 234, 255),  VTX(-3, 683, -1173, -301, 1545, 234, 187, 95, 255),
    VTX(-13, 675, -1180, 0, 1024, 234, 187, 95, 255),     VTX(1, 671, -1180, -602, 1024, 234, 187, 95, 255),
    VTX(-13, 675, -1180, -301, 1545, 161, 187, 234, 255), VTX(-15, 683, -1193, 0, 1024, 161, 187, 234, 255),
    VTX(-7, 671, -1193, -602, 1024, 161, 187, 234, 255),  VTX(-3, 683, -1173, -301, 1545, 59, 213, 95, 255),
    VTX(1, 671, -1180, 0, 1024, 59, 213, 95, 255),        VTX(10, 683, -1180, -602, 1024, 59, 213, 95, 255),
    VTX(1, 671, -1180, -301, 1545, 36, 144, 234, 255),    VTX(-7, 671, -1193, 0, 1024, 36, 144, 234, 255),
    VTX(7, 675, -1193, -602, 1024, 36, 144, 234, 255),    VTX(-15, 683, -1193, -301, 1545, 139, 0, 22, 255),
    VTX(-13, 675, -1180, 0, 1024, 139, 0, 22, 255),       VTX(-13, 690, -1180, -602, 1024, 139, 0, 22, 255),
    VTX(-7, 695, -1193, -602, 1024, 220, 112, 22, 255),   VTX(-13, 690, -1180, -301, 1545, 220, 112, 22, 255),
    VTX(1, 695, -1180, 0, 1024, 220, 112, 22, 255),       VTX(7, 690, -1193, -602, 1024, 95, 69, 22, 255),
    VTX(1, 695, -1180, -301, 1545, 95, 69, 22, 255),      VTX(10, 683, -1180, 0, 1024, 95, 69, 22, 255),
    VTX(7, 675, -1193, -301, 1545, 95, 187, 22, 255),     VTX(10, 683, -1180, 0, 1024, 95, 187, 22, 255),
    VTX(1, 671, -1180, -602, 1024, 95, 187, 22, 255),     VTX(-7, 671, -1193, -301, 1545, 220, 144, 22, 255),
    VTX(1, 671, -1180, 0, 1024, 220, 144, 22, 255),       VTX(-13, 675, -1180, -602, 1024, 220, 144, 22, 255),
};

static Vtx death_mountain_crater_room_00Vtx_01C2B0[8] = {
    VTX(-15, 671, -1193, 0, 0, 0, 0, 0, 0), VTX(-15, 671, -1173, 0, 0, 0, 0, 0, 0),
    VTX(-15, 695, -1193, 0, 0, 0, 0, 0, 0), VTX(-15, 695, -1173, 0, 0, 0, 0, 0, 0),
    VTX(10, 671, -1193, 0, 0, 0, 0, 0, 0),  VTX(10, 671, -1173, 0, 0, 0, 0, 0, 0),
    VTX(10, 695, -1193, 0, 0, 0, 0, 0, 0),  VTX(10, 695, -1173, 0, 0, 0, 0, 0, 0),
};

Gfx death_mountain_crater_room_00Dlist0x01C330[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&death_mountain_crater_room_00Vtx_01C2B0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPLoadTextureBlock(death_mountain_crater_room_00Tex_01C430, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0,
                         0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 120, 120, 255, 127),
    gsSPVertex(&death_mountain_crater_room_00Vtx_01BFE0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPVertex(&death_mountain_crater_room_00Vtx_01C010[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&death_mountain_crater_room_00Vtx_01C010[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

u64 death_mountain_crater_room_00Tex_01C430[] = {
#include "assets/scenes/overworld/death_mountain_crater//death_mountain_crater_room_00Tex_01C430.rgb5a1.inc.c"
};

Gfx death_mountain_crater_room_00Dlist0x01CC30[] = {
    gsSPDisplayList(death_mountain_crater_room_00Dlist0x01C330),
    gsSPEndDisplayList(),
};
