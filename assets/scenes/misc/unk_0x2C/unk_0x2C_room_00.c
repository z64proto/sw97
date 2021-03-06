#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unk_0x2C_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unk_0x2C_scene.h"

#include "objects/gameplay_keep/gameplay_keep.h"

static SCmdRoomBehavior unk_0x2C_room_00Set0000Cmd00;
static SCmdBase unk_0x2C_room_00Set0000Cmd01;
static SCmdSkyboxDisables unk_0x2C_room_00Set0000Cmd02;
static SCmdMesh unk_0x2C_room_00Set0000Cmd03;
static SCmdEndMarker unk_0x2C_room_00Set0000Cmd04;
static Vtx unk_0x2C_room_00Vtx_000030[32];
static Vtx unk_0x2C_room_00Vtx_000230[32];
static Vtx unk_0x2C_room_00Vtx_000430[62];
static Vtx unk_0x2C_room_00Vtx_000810[32];
static Vtx unk_0x2C_room_00Vtx_000A10[52];
static Vtx unk_0x2C_room_00Vtx_000D50[8];
static Vtx unk_0x2C_room_00Vtx_0019C0[15];
static Vtx unk_0x2C_room_00Vtx_001AB0[3];
static Vtx unk_0x2C_room_00Vtx_001AE0[8];
static Vtx unk_0x2C_room_00Vtx_002C80[4];
static Vtx unk_0x2C_room_00Vtx_002CC0[8];
static s32 terminatorMaybe;

static SCmdRoomBehavior unk_0x2C_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase unk_0x2C_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables unk_0x2C_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdMesh unk_0x2C_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&unk_0x2C_room_00MeshHeader0x00360C }; // 0x0018

static SCmdEndMarker unk_0x2C_room_00Set0000Cmd04 = {  0x14, 0x00, 0x00 }; // 0x0020

static u8 unaccounted_000028[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx unk_0x2C_room_00Vtx_000030[32] = {
    VTX(-71, 103, -279, 12417, -1823, 177, 237, 168, 255),
    VTX(-48, 72, -283, 13217, -1233, 202, 199, 166, 255),
    VTX(-78, 72, -257, 13674, -1995, 169, 203, 193, 255),
    VTX(-33, 103, -301, 12305, -842, 220, 237, 144, 255),
    VTX(-10, 72, -296, 13071, -258, 247, 199, 151, 255),
    VTX(11, 103, -306, 12287, 285, 12, 237, 139, 255),
    VTX(30, 72, -292, 13117, 762, 33, 203, 154, 255),
    VTX(-53, 137, -292, 11446, -1362, 197, 19, 154, 255),
    VTX(-11, 137, -306, 11503, -285, 244, 19, 139, 255),
    VTX(-30, 168, -292, 10673, -762, 223, 53, 154, 255),
    VTX(-72, 200, -200, 7930, -1855, 173, 86, 0, 255),
    VTX(-88, 168, -239, 9654, -2253, 159, 57, 215, 255),
    VTX(-96, 168, -200, 7930, -2466, 149, 53, 0, 255),
    VTX(-59, 200, -243, 9169, -1501, 194, 91, 211, 255),
    VTX(-64, 168, -272, 10400, -1650, 187, 57, 177, 255),
    VTX(-22, 200, -269, 9730, -573, 230, 86, 177, 255),
    VTX(-39, 220, -200, 7930, -995, 212, 111, 0, 255),
    VTX(-12, 220, -237, 8820, -307, 242, 111, 214, 255),
    VTX(0, 228, -200, 7930, 0, 0, 120, 0, 255),
    VTX(53, 103, -292, 12344, 1362, 59, 237, 154, 255),
    VTX(64, 72, -272, 13390, 1650, 69, 199, 177, 255),
    VTX(30, 72, -292, 13117, 762, 33, 203, 154, 255),
    VTX(86, 103, -263, 12549, 2204, 96, 237, 187, 255),
    VTX(88, 72, -239, 14136, 2253, 97, 199, 215, 255),
    VTX(104, 103, -222, 13518, 2665, 115, 237, 231, 255),
    VTX(96, 72, -200, 15860, 2466, 107, 203, 0, 255),
    VTX(71, 137, -279, 11373, 1823, 79, 19, 168, 255),
    VTX(97, 137, -243, 10972, 2489, 108, 19, 208, 255),
    VTX(78, 168, -257, 10116, 1995, 87, 53, 193, 255),
    VTX(-22, 200, -269, 9730, -573, 230, 86, 177, 255),
    VTX(10, 168, -296, 10719, 258, 9, 57, 151, 255),
    VTX(-30, 168, -292, 10673, -762, 223, 53, 154, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_000230[32] = {
    VTX(22, 200, -269, 9730, 573, 24, 91, 183, 255),
    VTX(10, 168, -296, 10719, 258, 9, 57, 151, 255),
    VTX(-22, 200, -269, 9730, -573, 230, 86, 177, 255),
    VTX(48, 168, -283, 10573, 1233, 54, 57, 166, 255),
    VTX(59, 200, -243, 9169, 1501, 67, 86, 207, 255),
    VTX(78, 168, -257, 10116, 1995, 87, 53, 193, 255),
    VTX(-12, 220, -237, 8820, -307, 242, 111, 214, 255),
    VTX(31, 220, -223, 8494, 805, 35, 111, 230, 255),
    VTX(0, 228, -200, 7930, 0, 0, 120, 0, 255),
    VTX(104, 103, -178, 2342, 2665, 115, 237, 25, 255),
    VTX(88, 72, -161, 1724, 2253, 97, 199, 41, 255),
    VTX(96, 72, -200, 0, 2466, 107, 203, 0, 255),
    VTX(86, 103, -137, 3311, 2204, 96, 237, 69, 255),
    VTX(64, 72, -128, 2470, 1650, 69, 199, 79, 255),
    VTX(53, 103, -108, 3516, 1362, 59, 237, 102, 255),
    VTX(30, 72, -108, 2743, 762, 33, 203, 102, 255),
    VTX(97, 137, -157, 4888, 2489, 108, 19, 48, 255),
    VTX(71, 137, -121, 4487, 1823, 79, 19, 88, 255),
    VTX(78, 168, -143, 5744, 1995, 87, 53, 63, 255),
    VTX(59, 200, -243, 9169, 1501, 67, 86, 207, 255),
    VTX(94, 168, -220, 8925, 2412, 103, 57, 233, 255),
    VTX(78, 168, -257, 10116, 1995, 87, 53, 193, 255),
    VTX(72, 200, -200, 7930, 1855, 77, 91, 0, 255),
    VTX(94, 168, -180, 6935, 2412, 103, 57, 23, 255),
    VTX(59, 200, -157, 6691, 1501, 67, 86, 49, 255),
    VTX(31, 220, -223, 8494, 805, 35, 111, 230, 255),
    VTX(31, 220, -177, 7366, 805, 35, 111, 26, 255),
    VTX(0, 228, -200, 7930, 0, 0, 120, 0, 255),
    VTX(11, 103, -94, 3573, 285, 12, 237, 117, 255),
    VTX(-10, 72, -104, 2789, -258, 247, 199, 105, 255),
    VTX(30, 72, -108, 2743, 762, 33, 203, 102, 255),
    VTX(-33, 103, -99, 3555, -842, 220, 237, 112, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_000430[62] = {
    VTX(-33, 103, -99, 3555, -842, 220, 237, 112, 255),
    VTX(-48, 72, -117, 2643, -1233, 202, 199, 90, 255),
    VTX(-10, 72, -104, 2789, -258, 247, 199, 105, 255),
    VTX(-71, 103, -121, 3443, -1823, 177, 237, 88, 255),
    VTX(-78, 72, -143, 2186, -1995, 169, 203, 63, 255),
    VTX(-11, 137, -94, 4357, -285, 244, 19, 117, 255),
    VTX(11, 103, -94, 3573, 285, 12, 237, 117, 255),
    VTX(-53, 137, -108, 4414, -1362, 197, 19, 102, 255),
    VTX(-30, 168, -108, 5187, -762, 223, 53, 102, 255),
    VTX(59, 200, -157, 6691, 1501, 67, 86, 49, 255),
    VTX(48, 168, -117, 5287, 1233, 54, 57, 90, 255),
    VTX(78, 168, -143, 5744, 1995, 87, 53, 63, 255),
    VTX(22, 200, -131, 6130, 573, 24, 91, 73, 255),
    VTX(10, 168, -104, 5141, 258, 9, 57, 105, 255),
    VTX(-22, 200, -131, 6130, -573, 230, 86, 79, 255),
    VTX(31, 220, -177, 7366, 805, 35, 111, 26, 255),
    VTX(-12, 220, -163, 7040, -307, 242, 111, 42, 255),
    VTX(0, 228, -200, 7930, 0, 0, 120, 0, 255),
    VTX(-97, 103, -157, 3042, -2489, 148, 237, 48, 255),
    VTX(-94, 72, -180, 995, -2412, 153, 199, 23, 255),
    VTX(-78, 72, -143, 2186, -1995, 169, 203, 63, 255),
    VTX(-106, 103, -200, 0, -2724, 138, 237, 0, 255),
    VTX(-106, 103, -200, 15860, -2724, 138, 237, 0, 255),
    VTX(-94, 72, -220, 14865, -2412, 153, 199, 233, 255),
    VTX(-94, 72, -180, 16855, -2412, 153, 199, 23, 255),
    VTX(-97, 103, -243, 12818, -2489, 148, 237, 208, 255),
    VTX(-78, 72, -257, 13674, -1995, 169, 203, 193, 255),
    VTX(-104, 137, -178, 5588, -2665, 141, 19, 25, 255),
    VTX(-104, 137, -222, 10272, -2665, 141, 19, 231, 255),
    VTX(-96, 168, -200, 7930, -2466, 149, 53, 0, 255),
    VTX(-22, 200, -131, 6130, -573, 230, 86, 79, 255),
    VTX(-64, 168, -128, 5460, -1650, 187, 57, 79, 255),
    VTX(-30, 168, -108, 5187, -762, 223, 53, 102, 255),
    VTX(-59, 200, -157, 6691, -1501, 194, 91, 45, 255),
    VTX(-88, 168, -161, 6206, -2253, 159, 57, 41, 255),
    VTX(-72, 200, -200, 7930, -1855, 173, 86, 0, 255),
    VTX(-96, 168, -200, 7930, -2466, 149, 53, 0, 255),
    VTX(-12, 220, -163, 7040, -307, 242, 111, 42, 255),
    VTX(-39, 220, -200, 7930, -995, 212, 111, 0, 255),
    VTX(0, 228, -200, 7930, 0, 0, 120, 0, 255),
    VTX(71, 137, -279, 11373, 1823, 79, 19, 168, 255),
    VTX(48, 168, -283, 10573, 1233, 54, 57, 166, 255),
    VTX(78, 168, -257, 10116, 1995, 87, 53, 193, 255),
    VTX(33, 137, -301, 11485, 842, 36, 19, 144, 255),
    VTX(10, 168, -296, 10719, 258, 9, 57, 151, 255),
    VTX(-11, 137, -306, 11503, -285, 244, 19, 139, 255),
    VTX(-30, 168, -292, 10673, -762, 223, 53, 154, 255),
    VTX(53, 103, -292, 12344, 1362, 59, 237, 154, 255),
    VTX(11, 103, -306, 12287, 285, 12, 237, 139, 255),
    VTX(30, 72, -292, 13117, 762, 33, 203, 154, 255),
    VTX(72, 40, -200, 15860, 1855, 83, 170, 0, 255),
    VTX(88, 72, -239, 14136, 2253, 97, 199, 215, 255),
    VTX(96, 72, -200, 15860, 2466, 107, 203, 0, 255),
    VTX(59, 40, -243, 14621, 1501, 62, 165, 211, 255),
    VTX(64, 72, -272, 13390, 1650, 69, 199, 177, 255),
    VTX(22, 40, -269, 14060, 573, 26, 170, 177, 255),
    VTX(39, 20, -200, 15860, 995, 44, 145, 0, 255),
    VTX(12, 20, -237, 14970, 307, 14, 145, 214, 255),
    VTX(0, 12, -200, 15860, 0, 0, 136, 0, 255),
    VTX(-53, 137, -292, 11446, -1362, 197, 19, 154, 255),
    VTX(-64, 168, -272, 10400, -1650, 187, 57, 177, 255),
    VTX(-30, 168, -292, 10673, -762, 223, 53, 154, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_000810[32] = {
    VTX(-86, 137, -263, 11241, -2204, 160, 19, 187, 255),
    VTX(-64, 168, -272, 10400, -1650, 187, 57, 177, 255),
    VTX(-53, 137, -292, 11446, -1362, 197, 19, 154, 255),
    VTX(-88, 168, -239, 9654, -2253, 159, 57, 215, 255),
    VTX(-104, 137, -222, 10272, -2665, 141, 19, 231, 255),
    VTX(-96, 168, -200, 7930, -2466, 149, 53, 0, 255),
    VTX(-71, 103, -279, 12417, -1823, 177, 237, 168, 255),
    VTX(-97, 103, -243, 12818, -2489, 148, 237, 208, 255),
    VTX(-78, 72, -257, 13674, -1995, 169, 203, 193, 255),
    VTX(22, 40, -269, 14060, 573, 26, 170, 177, 255),
    VTX(-10, 72, -296, 13071, -258, 247, 199, 151, 255),
    VTX(30, 72, -292, 13117, 762, 33, 203, 154, 255),
    VTX(-22, 40, -269, 14060, -573, 232, 165, 183, 255),
    VTX(-48, 72, -283, 13217, -1233, 202, 199, 166, 255),
    VTX(-59, 40, -243, 14621, -1501, 189, 170, 207, 255),
    VTX(12, 20, -237, 14970, 307, 14, 145, 214, 255),
    VTX(-31, 20, -223, 15296, -805, 221, 145, 230, 255),
    VTX(0, 12, -200, 15860, 0, 0, 136, 0, 255),
    VTX(-104, 137, -178, 5588, -2665, 141, 19, 25, 255),
    VTX(-88, 168, -161, 6206, -2253, 159, 57, 41, 255),
    VTX(-96, 168, -200, 7930, -2466, 149, 53, 0, 255),
    VTX(-86, 137, -137, 4619, -2204, 160, 19, 69, 255),
    VTX(-64, 168, -128, 5460, -1650, 187, 57, 79, 255),
    VTX(-53, 137, -108, 4414, -1362, 197, 19, 102, 255),
    VTX(-30, 168, -108, 5187, -762, 223, 53, 102, 255),
    VTX(-97, 103, -157, 3042, -2489, 148, 237, 48, 255),
    VTX(-71, 103, -121, 3443, -1823, 177, 237, 88, 255),
    VTX(-78, 72, -143, 2186, -1995, 169, 203, 63, 255),
    VTX(-59, 40, -243, 14621, -1501, 189, 170, 207, 255),
    VTX(-94, 72, -220, 14865, -2412, 153, 199, 233, 255),
    VTX(-78, 72, -257, 13674, -1995, 169, 203, 193, 255),
    VTX(-72, 40, -200, 15860, -1855, 179, 165, 0, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_000A10[52] = {
    VTX(-72, 40, -200, 15860, -1855, 179, 165, 0, 255),
    VTX(-94, 72, -180, 16855, -2412, 153, 199, 23, 255),
    VTX(-94, 72, -220, 14865, -2412, 153, 199, 233, 255),
    VTX(-59, 40, -157, 1239, -1501, 189, 170, 49, 255),
    VTX(-94, 72, -180, 995, -2412, 153, 199, 23, 255),
    VTX(-72, 40, -200, 0, -1855, 179, 165, 0, 255),
    VTX(-78, 72, -143, 2186, -1995, 169, 203, 63, 255),
    VTX(-31, 20, -223, 15296, -805, 221, 145, 230, 255),
    VTX(-59, 40, -243, 14621, -1501, 189, 170, 207, 255),
    VTX(-31, 20, -177, 16424, -805, 221, 145, 26, 255),
    VTX(-31, 20, -177, 564, -805, 221, 145, 26, 255),
    VTX(0, 12, -200, 15860, 0, 0, 136, 0, 255),
    VTX(-11, 137, -94, 4357, -285, 244, 19, 117, 255),
    VTX(10, 168, -104, 5141, 258, 9, 57, 105, 255),
    VTX(-30, 168, -108, 5187, -762, 223, 53, 102, 255),
    VTX(33, 137, -99, 4375, 842, 36, 19, 112, 255),
    VTX(48, 168, -117, 5287, 1233, 54, 57, 90, 255),
    VTX(71, 137, -121, 4487, 1823, 79, 19, 88, 255),
    VTX(78, 168, -143, 5744, 1995, 87, 53, 63, 255),
    VTX(11, 103, -94, 3573, 285, 12, 237, 117, 255),
    VTX(53, 103, -108, 3516, 1362, 59, 237, 102, 255),
    VTX(30, 72, -108, 2743, 762, 33, 203, 102, 255),
    VTX(-59, 40, -157, 1239, -1501, 189, 170, 49, 255),
    VTX(-48, 72, -117, 2643, -1233, 202, 199, 90, 255),
    VTX(-78, 72, -143, 2186, -1995, 169, 203, 63, 255),
    VTX(-22, 40, -131, 1800, -573, 232, 165, 73, 255),
    VTX(-10, 72, -104, 2789, -258, 247, 199, 105, 255),
    VTX(22, 40, -131, 1800, 573, 26, 170, 79, 255),
    VTX(-31, 20, -177, 564, -805, 221, 145, 26, 255),
    VTX(12, 20, -163, 890, 307, 14, 145, 42, 255),
    VTX(0, 12, -200, 0, 0, 0, 136, 0, 255),
    VTX(97, 137, -157, 4888, 2489, 108, 19, 48, 255),
    VTX(94, 168, -180, 6935, 2412, 103, 57, 23, 255),
    VTX(78, 168, -143, 5744, 1995, 87, 53, 63, 255),
    VTX(106, 137, -200, 7930, 2724, 118, 19, 0, 255),
    VTX(94, 168, -220, 8925, 2412, 103, 57, 233, 255),
    VTX(97, 137, -243, 10972, 2489, 108, 19, 208, 255),
    VTX(78, 168, -257, 10116, 1995, 87, 53, 193, 255),
    VTX(104, 103, -178, 2342, 2665, 115, 237, 25, 255),
    VTX(104, 103, -222, 13518, 2665, 115, 237, 231, 255),
    VTX(104, 103, -178, 18202, 2665, 115, 237, 25, 255),
    VTX(96, 72, -200, 15860, 2466, 107, 203, 0, 255),
    VTX(22, 40, -131, 1800, 573, 26, 170, 79, 255),
    VTX(64, 72, -128, 2470, 1650, 69, 199, 79, 255),
    VTX(30, 72, -108, 2743, 762, 33, 203, 102, 255),
    VTX(59, 40, -157, 1239, 1501, 62, 165, 45, 255),
    VTX(88, 72, -161, 1724, 2253, 97, 199, 41, 255),
    VTX(72, 40, -200, 0, 1855, 83, 170, 0, 255),
    VTX(96, 72, -200, 0, 2466, 107, 203, 0, 255),
    VTX(12, 20, -163, 890, 307, 14, 145, 42, 255),
    VTX(39, 20, -200, 0, 995, 44, 145, 0, 255),
    VTX(0, 12, -200, 0, 0, 0, 136, 0, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_000D50[8] = {
    VTX(-106, 12, -306, 0, 0, 0, 0, 0, 0),
    VTX(-106, 12, -94, 0, 0, 0, 0, 0, 0),
    VTX(-106, 228, -306, 0, 0, 0, 0, 0, 0),
    VTX(-106, 228, -94, 0, 0, 0, 0, 0, 0),
    VTX(106, 12, -306, 0, 0, 0, 0, 0, 0),
    VTX(106, 12, -94, 0, 0, 0, 0, 0, 0),
    VTX(106, 228, -306, 0, 0, 0, 0, 0, 0),
    VTX(106, 228, -94, 0, 0, 0, 0, 0, 0),
}; 

Gfx unk_0x2C_room_00DL_000DD0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&unk_0x2C_room_00Vtx_000D50[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(unk_0x2C_room_00Tex_0011C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gUnknownCircle3Tex, 0x01F0, 1, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                          G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x07000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, 1, COMBINED, TEXEL0, COMBINED, 1, COMBINED, TEXEL0, 
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unk_0x2C_room_00Vtx_000030[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 3, 0, 0),
    gsSP2Triangles(8, 3, 7, 0, 8, 5, 3, 0),
    gsSP2Triangles(9, 8, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 11, 10, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 14, 13, 0, 15, 9, 14, 0),
    gsSP2Triangles(16, 13, 10, 0, 17, 13, 16, 0),
    gsSP2Triangles(17, 15, 13, 0, 18, 17, 16, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 20, 19, 0),
    gsSP2Triangles(22, 23, 20, 0, 24, 23, 22, 0),
    gsSP2Triangles(24, 25, 23, 0, 26, 22, 19, 0),
    gsSP2Triangles(27, 22, 26, 0, 27, 24, 22, 0),
    gsSP2Triangles(28, 27, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_000230[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 0, 6, 0),
    gsSP2Triangles(7, 4, 0, 0, 8, 7, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 10, 9, 0),
    gsSP2Triangles(12, 13, 10, 0, 14, 13, 12, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 12, 9, 0),
    gsSP2Triangles(17, 12, 16, 0, 17, 14, 12, 0),
    gsSP2Triangles(18, 17, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 20, 19, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 23, 22, 0, 24, 18, 23, 0),
    gsSP2Triangles(25, 22, 19, 0, 26, 22, 25, 0),
    gsSP2Triangles(26, 24, 22, 0, 27, 26, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 29, 28, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_000430[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 0, 6, 0),
    gsSP2Triangles(7, 0, 5, 0, 7, 3, 0, 0),
    gsSP2Triangles(8, 7, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 13, 12, 0, 14, 8, 13, 0),
    gsSP2Triangles(15, 12, 9, 0, 16, 12, 15, 0),
    gsSP2Triangles(16, 14, 12, 0, 17, 16, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 21, 18, 0),
    gsSP2Triangles(28, 22, 27, 0, 28, 25, 22, 0),
    gsSP1Triangle(29, 28, 27, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_000430[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 3, 0, 0),
    gsSP2Triangles(8, 3, 7, 0, 8, 5, 3, 0),
    gsSP2Triangles(9, 8, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 11, 10, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 14, 13, 0, 15, 16, 14, 0),
    gsSP2Triangles(17, 13, 10, 0, 18, 13, 17, 0),
    gsSP2Triangles(18, 15, 13, 0, 19, 18, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(23, 24, 21, 0, 25, 24, 23, 0),
    gsSP2Triangles(25, 19, 24, 0, 26, 23, 20, 0),
    gsSP2Triangles(27, 23, 26, 0, 27, 25, 23, 0),
    gsSP2Triangles(28, 27, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_000810[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 0, 6, 0),
    gsSP2Triangles(7, 4, 0, 0, 8, 7, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 10, 9, 0),
    gsSP2Triangles(12, 13, 10, 0, 14, 13, 12, 0),
    gsSP2Triangles(14, 8, 13, 0, 15, 12, 9, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 14, 12, 0),
    gsSP2Triangles(17, 16, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 19, 18, 0, 21, 22, 19, 0),
    gsSP2Triangles(23, 22, 21, 0, 23, 24, 22, 0),
    gsSP2Triangles(25, 21, 18, 0, 26, 21, 25, 0),
    gsSP2Triangles(26, 23, 21, 0, 27, 26, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 29, 28, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_000A10[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 0, 8, 0),
    gsSP2Triangles(9, 0, 7, 0, 10, 3, 5, 0),
    gsSP2Triangles(11, 9, 7, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 13, 12, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 16, 15, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 15, 12, 0, 20, 15, 19, 0),
    gsSP2Triangles(20, 17, 15, 0, 21, 20, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 26, 25, 0),
    gsSP2Triangles(27, 21, 26, 0, 28, 25, 22, 0),
    gsSP2Triangles(29, 25, 28, 0, 29, 27, 25, 0),
    gsSP1Triangle(30, 29, 28, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_000A10[31], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 3, 0, 0),
    gsSP2Triangles(8, 3, 9, 0, 8, 5, 3, 0),
    gsSP2Triangles(10, 8, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 12, 11, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 15, 14, 0, 16, 17, 15, 0),
    gsSP2Triangles(18, 14, 11, 0, 19, 14, 18, 0),
    gsSP2Triangles(19, 16, 14, 0, 20, 19, 18, 0),
    gsSPEndDisplayList(),
}; 

u64 unk_0x2C_room_00Tex_0011C0[] = {
#include "assets/scenes/misc/unk_0x2C//unk_0x2C_room_00Tex_0011C0.rgb5a1.inc.c"
};

static Vtx unk_0x2C_room_00Vtx_0019C0[15] = {
    VTX(-2000, 0, -2000, -5632, -5632, 0, 120, 0, 255),
    VTX(-2000, 0, 0, -5632, 7168, 0, 120, 0, 255),
    VTX(0, 0, 0, 7168, 7168, 0, 120, 0, 255),
    VTX(0, 0, -2000, -6144, -5632, 0, 120, 0, 255),
    VTX(0, 0, 0, -6144, 7168, 0, 120, 0, 255),
    VTX(2000, 0, 0, 6656, 7168, 0, 120, 0, 255),
    VTX(2000, 0, -2000, 6656, -5632, 0, 120, 0, 255),
    VTX(-2000, 0, 0, -5632, -6144, 0, 120, 0, 255),
    VTX(-2000, 0, 2000, -5632, 6656, 0, 120, 0, 255),
    VTX(0, 0, 2000, 7168, 6656, 0, 120, 0, 255),
    VTX(0, 0, 0, 7168, -6144, 0, 120, 0, 255),
    VTX(0, 0, 0, -6144, -6144, 0, 120, 0, 255),
    VTX(0, 0, 2000, -6144, 6656, 0, 120, 0, 255),
    VTX(2000, 0, 2000, 6656, 6656, 0, 120, 0, 255),
    VTX(2000, 0, 0, 6656, -6144, 0, 120, 0, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_001AB0[3] = {
    VTX(0, 0, 0, 7168, 7168, 0, 120, 0, 255),
    VTX(0, 0, -2000, 7168, -5632, 0, 120, 0, 255),
    VTX(-2000, 0, -2000, -5632, -5632, 0, 120, 0, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_001AE0[8] = {
    VTX(-2000, 0, -2000, 0, 0, 0, 0, 0, 0),
    VTX(-2000, 0, 2000, 0, 0, 0, 0, 0, 0),
    VTX(-2000, 0, -2000, 0, 0, 0, 0, 0, 0),
    VTX(-2000, 0, 2000, 0, 0, 0, 0, 0, 0),
    VTX(2000, 0, -2000, 0, 0, 0, 0, 0, 0),
    VTX(2000, 0, 2000, 0, 0, 0, 0, 0, 0),
    VTX(2000, 0, -2000, 0, 0, 0, 0, 0, 0),
    VTX(2000, 0, 2000, 0, 0, 0, 0, 0, 0),
}; 

Gfx unk_0x2C_room_00DL_001B60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&unk_0x2C_room_00Vtx_001AE0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPLoadTextureBlock(unk_0x2C_room_00Tex_001C68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(unk_0x2C_room_00Tex_002468, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | 
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, 0, SHADE, 0, 0,
                       0, 0, SHADE),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unk_0x2C_room_00Vtx_0019C0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP1Triangle(13, 14, 11, 0),
    gsSPVertex(&unk_0x2C_room_00Vtx_001AB0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 unk_0x2C_room_00Tex_001C68[] = {
#include "assets/scenes/misc/unk_0x2C//unk_0x2C_room_00Tex_001C68.rgb5a1.inc.c"
};

u64 unk_0x2C_room_00Tex_002468[] = {
#include "assets/scenes/misc/unk_0x2C//unk_0x2C_room_00Tex_002468.rgb5a1.inc.c"
};

Gfx unk_0x2C_room_00DL_002C68[] = {
    gsSPDisplayList(unk_0x2C_room_00DL_000DD0),
    gsSPDisplayList(unk_0x2C_room_00DL_001B60),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x2C_room_00Vtx_002C80[4] = {
    VTX(200, 0, 160, 0, 3072, 136, 0, 0, 255),
    VTX(200, 80, 160, 1024, 3072, 136, 0, 0, 255),
    VTX(200, 80, -160, 1024, -1024, 136, 0, 0, 255),
    VTX(200, 0, -160, 0, -1024, 136, 0, 0, 255),
}; 

static Vtx unk_0x2C_room_00Vtx_002CC0[8] = {
    VTX(200, 0, -160, 0, 0, 0, 0, 0, 0),
    VTX(200, 0, 160, 0, 0, 0, 0, 0, 0),
    VTX(200, 80, -160, 0, 0, 0, 0, 0, 0),
    VTX(200, 80, 160, 0, 0, 0, 0, 0, 0),
    VTX(200, 0, -160, 0, 0, 0, 0, 0, 0),
    VTX(200, 0, 160, 0, 0, 0, 0, 0, 0),
    VTX(200, 80, -160, 0, 0, 0, 0, 0, 0),
    VTX(200, 80, 160, 0, 0, 0, 0, 0, 0),
}; 

Gfx unk_0x2C_room_00DL_002D40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&unk_0x2C_room_00Vtx_002CC0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(unk_0x2C_room_00Tex_002DF0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unk_0x2C_room_00Vtx_002C80[0], 4, 0),
    gsSP1Quadrangle(0, 1, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 unk_0x2C_room_00Tex_002DF0[] = {
#include "assets/scenes/misc/unk_0x2C//unk_0x2C_room_00Tex_002DF0.ia16.inc.c"
};

Gfx unk_0x2C_room_00DL_0035F0[] = {
    gsSPDisplayList(unk_0x2C_room_00DL_002D40),
    gsSPEndDisplayList(),
}; 

static s32 terminatorMaybe = {  0x01000000  }; 

MeshEntry0 unk_0x2C_room_00MeshDListEntry0x003604[1] = {
	{ (u32)unk_0x2C_room_00DL_002C68, (u32)unk_0x2C_room_00DL_0035F0 },

}; 

MeshHeader0 unk_0x2C_room_00MeshHeader0x00360C = { { 0 }, 0x01, (u32)&unk_0x2C_room_00MeshDListEntry0x003604, (u32)&(unk_0x2C_room_00MeshDListEntry0x003604) + sizeof(unk_0x2C_room_00MeshDListEntry0x003604) }; 


