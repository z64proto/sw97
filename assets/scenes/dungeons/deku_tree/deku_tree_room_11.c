#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_11.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_11Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_11Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_11Set0000Cmd02;
static SCmdMesh deku_tree_room_11Set0000Cmd03;
static SCmdObjectList deku_tree_room_11Set0000Cmd04;
static SCmdActorList deku_tree_room_11Set0000Cmd05;
static SCmdEndMarker deku_tree_room_11Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_11Vtx_0000D0[24];
static Vtx deku_tree_room_11Vtx_000250[4];
static Vtx deku_tree_room_11Vtx_000290[32];
static Vtx deku_tree_room_11Vtx_000490[32];
static Vtx deku_tree_room_11Vtx_000690[62];
static Vtx deku_tree_room_11Vtx_000A70[32];
static Vtx deku_tree_room_11Vtx_000C70[32];
static Vtx deku_tree_room_11Vtx_000E70[13];
static Vtx deku_tree_room_11Vtx_000F40[12];
static Vtx deku_tree_room_11Vtx_001000[24];
static Vtx deku_tree_room_11Vtx_001180[89];
static Vtx deku_tree_room_11Vtx_001710[4];
static Vtx deku_tree_room_11Vtx_001750[8];

static SCmdEchoSettings deku_tree_room_11Set0000Cmd00 = {  0x16, 0, { 0 }, 0x0A }; // 0x0000

static SCmdRoomBehavior deku_tree_room_11Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_11Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_11Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_11MeshHeader0x0000B0 }; // 0x0018

static SCmdObjectList deku_tree_room_11Set0000Cmd04 = {  0x0B, 0x09, (u32)deku_tree_room_11ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_11Set0000Cmd05 = {  0x01, 0x06, (u32)deku_tree_room_11ActorList0x00004C }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_11Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_11ObjectList0x000038[9] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_YDAN_OBJECTS,
	OBJECT_GOL,
	OBJECT_ST,
	OBJECT_TP,
	OBJECT_DEKUBABA,
	OBJECT_DEKUNUTS,
}; 

ActorEntry deku_tree_room_11ActorList0x00004C[6] = {
	{ ACTOR_EN_GOMA, 1431, 1400, 3, 0, 0, 0, 0x0007 }, //0x00004C
	{ ACTOR_EN_GOMA, 1422, 1400, -73, 0, 0, 0, 0x0006 }, //0x00005C
	{ ACTOR_EN_DEKUNUTS, 1004, 1400, -995, 0, 0, 0, 0x0000 }, //0x00006C
	{ ACTOR_EN_DEKUNUTS, 1568, 1400, -569, 0, 0, 0, 0x0000 }, //0x00007C
	{ ACTOR_EN_DEKUNUTS, 1298, 1400, -22, 0, 0, 0, 0x0000 }, //0x00008C
	{ ACTOR_EN_DEKUNUTS, 1467, 1400, 462, 0, 0, 0, 0x0000 }, //0x00009C
}; 

static u32 padAC = 0;

MeshHeader2 deku_tree_room_11MeshHeader0x0000B0 = { { 2 }, 0x01, (u32)&deku_tree_room_11MeshDListEntry0x0000BC, (u32)&(deku_tree_room_11MeshDListEntry0x0000BC) + sizeof(deku_tree_room_11MeshDListEntry0x0000BC) }; 

MeshEntry2 deku_tree_room_11MeshDListEntry0x0000BC[1] = {
	{ 1112, 1640, -415, 1229, (u32)deku_tree_room_11Dlist0x0017D0, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_11Vtx_0000D0[24] = {
    VTX(904, 1440, -833, 1145, 512, 51, 51, 51, 255),
    VTX(904, 1480, -833, 1145, 0, 255, 255, 255, 255),
    VTX(876, 1440, -749, 0, 512, 51, 51, 51, 255),
    VTX(876, 1480, -749, 0, 0, 255, 255, 255, 255),
    VTX(833, 1440, -904, 1280, 512, 51, 51, 51, 255),
    VTX(833, 1480, -904, 1280, 0, 255, 255, 255, 255),
    VTX(904, 1480, -833, 0, 0, 255, 255, 255, 255),
    VTX(904, 1440, -833, 0, 512, 51, 51, 51, 255),
    VTX(749, 1440, -876, 1145, 512, 51, 51, 51, 255),
    VTX(833, 1480, -904, 0, 0, 255, 255, 255, 255),
    VTX(833, 1440, -904, 0, 512, 51, 51, 51, 255),
    VTX(749, 1480, -876, 1145, 0, 255, 255, 255, 255),
    VTX(904, 1440, -720, -512, 0, 255, 255, 255, 255),
    VTX(904, 1400, -720, -512, 512, 0, 0, 0, 255),
    VTX(947, 1440, -848, 1205, 0, 255, 255, 255, 255),
    VTX(947, 1400, -848, 1205, 512, 51, 51, 51, 255),
    VTX(947, 1400, -848, -256, 512, 51, 51, 51, 255),
    VTX(848, 1400, -947, 1536, 512, 51, 51, 51, 255),
    VTX(848, 1440, -947, 1536, 0, 255, 255, 255, 255),
    VTX(947, 1440, -848, -256, 0, 255, 255, 255, 255),
    VTX(848, 1400, -947, -693, 512, 51, 51, 51, 255),
    VTX(720, 1400, -904, 1024, 512, 0, 0, 0, 255),
    VTX(848, 1440, -947, -693, 0, 255, 255, 255, 255),
    VTX(720, 1440, -904, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_11Vtx_000250[4] = {
    VTX(819, 1480, -777, 753, 64, 255, 255, 255, 255),
    VTX(833, 1480, -791, 753, 128, 255, 255, 255, 255),
    VTX(791, 1480, -833, 907, 128, 255, 255, 255, 255),
    VTX(777, 1480, -819, 907, 64, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_11Vtx_000290[32] = {
    VTX(1446, 1880, 744, -1034, 1014, 0, 0, 0, 255),
    VTX(1449, 1880, 444, -10, 1024, 255, 255, 255, 255),
    VTX(1749, 1880, 441, 0, 2048, 0, 0, 0, 255),
    VTX(904, 1480, -833, 702, 384, 255, 255, 255, 255),
    VTX(833, 1480, -904, 958, 384, 255, 255, 255, 255),
    VTX(749, 1480, -876, 1060, 128, 255, 255, 255, 255),
    VTX(876, 1480, -749, 600, 128, 255, 255, 255, 255),
    VTX(876, 1440, -749, 600, 128, 51, 51, 51, 255),
    VTX(904, 1440, -720, 497, 128, 255, 255, 255, 255),
    VTX(947, 1440, -848, 651, 512, 255, 255, 255, 255),
    VTX(904, 1440, -833, 702, 384, 51, 51, 51, 255),
    VTX(848, 1440, -947, 1009, 512, 255, 255, 255, 255),
    VTX(833, 1440, -904, 958, 384, 51, 51, 51, 255),
    VTX(720, 1440, -904, 1163, 128, 255, 255, 255, 255),
    VTX(749, 1440, -876, 1060, 128, 51, 51, 51, 255),
    VTX(878, 1880, -1171, 2154, 1024, 255, 255, 255, 255),
    VTX(476, 1880, -1149, 3072, 0, 0, 0, 0, 255),
    VTX(900, 1880, -1573, 3072, 2048, 0, 0, 0, 255),
    VTX(1449, 1880, -600, -600, 1024, 255, 255, 255, 255),
    VTX(1149, 1880, -476, -176, 0, 0, 0, 0, 255),
    VTX(476, 1880, -1149, 3072, 0, 0, 0, 0, 255),
    VTX(1749, 1880, -724, -1024, 2048, 0, 0, 0, 255),
    VTX(1749, 1880, -724, 3979, 2048, 0, 0, 0, 255),
    VTX(1449, 1880, -600, 3555, 1024, 255, 255, 255, 255),
    VTX(1149, 1880, -476, 3131, 0, 0, 0, 0, 255),
    VTX(1149, 1880, 448, -21, 0, 0, 0, 0, 255),
    VTX(1717, 1400, -69, 1395, 1940, 255, 255, 255, 255),
    VTX(1630, 1400, -69, 1395, 1644, 0, 0, 0, 255),
    VTX(1609, 1400, -17, 1261, 1570, 0, 0, 0, 255),
    VTX(1670, 1400, 44, 1104, 1779, 255, 255, 255, 255),
    VTX(1661, 1400, -204, 1741, 1749, 255, 255, 255, 255),
    VTX(1600, 1400, -143, 1584, 1540, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_11Vtx_000490[32] = {
    VTX(1547, 1400, -251, 1861, 1361, 255, 255, 255, 255),
    VTX(1547, 1400, -165, 1639, 1361, 0, 0, 0, 255),
    VTX(1600, 1400, -143, 1584, 1540, 0, 0, 0, 255),
    VTX(1661, 1400, -204, 1741, 1749, 255, 255, 255, 255),
    VTX(1412, 1400, -195, 1718, 900, 255, 255, 255, 255),
    VTX(1474, 1400, -134, 1561, 1109, 0, 0, 0, 255),
    VTX(1365, 1400, -82, 1427, 740, 255, 255, 255, 255),
    VTX(1452, 1400, -82, 1427, 1035, 0, 0, 0, 255),
    VTX(1421, 1400, 53, 1081, 931, 255, 255, 255, 255),
    VTX(1483, 1400, -8, 1238, 1140, 0, 0, 0, 255),
    VTX(1535, 1400, 100, 961, 1318, 255, 255, 255, 255),
    VTX(1535, 1400, 14, 1183, 1318, 0, 0, 0, 255),
    VTX(1670, 1400, 44, 1104, 1779, 255, 255, 255, 255),
    VTX(1609, 1400, -17, 1261, 1570, 0, 0, 0, 255),
    VTX(1149, 1400, -476, -1412, 0, 0, 0, 0, 255),
    VTX(1216, 1400, -547, -1405, 334, 0, 0, 0, 255),
    VTX(1099, 1400, -621, -1059, 230, 255, 255, 255, 255),
    VTX(1185, 1400, -621, -1216, 439, 0, 0, 0, 255),
    VTX(1207, 1400, -673, -1160, 617, 0, 0, 0, 255),
    VTX(1146, 1400, -734, -938, 617, 255, 255, 255, 255),
    VTX(1281, 1400, -704, -1239, 869, 0, 0, 0, 255),
    VTX(1281, 1400, -790, -1082, 1078, 255, 255, 255, 255),
    VTX(1333, 1400, -682, -1372, 943, 0, 0, 0, 255),
    VTX(1394, 1400, -743, -1372, 1239, 255, 255, 255, 255),
    VTX(1364, 1400, -608, -1562, 839, 0, 0, 0, 255),
    VTX(1450, 1400, -608, -1718, 1048, 255, 255, 255, 255),
    VTX(1450, 1400, -608, 2775, 1030, 255, 255, 255, 255),
    VTX(1364, 1400, -608, 2775, 734, 0, 0, 0, 255),
    VTX(1342, 1400, -556, 2641, 660, 0, 0, 0, 255),
    VTX(1403, 1400, -495, 2484, 869, 255, 255, 255, 255),
    VTX(1403, 1400, -495, 2484, 869, 255, 255, 255, 255),
    VTX(1268, 1400, -525, 2563, 408, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_11Vtx_000690[62] = {
    VTX(1403, 1400, -495, 2484, 869, 255, 255, 255, 255),
    VTX(1268, 1400, -525, 2563, 408, 0, 0, 0, 255),
    VTX(1268, 1400, -439, 2341, 408, 255, 255, 255, 255),
    VTX(1216, 1400, -547, 2618, 230, 0, 0, 0, 255),
    VTX(1149, 1400, -476, 2436, 0, 0, 0, 0, 255),
    VTX(1054, 1400, -956, -371, 931, 255, 255, 255, 255),
    VTX(1054, 1400, -1043, -214, 1140, 0, 0, 0, 255),
    VTX(1002, 1400, -1064, -80, 1066, 0, 0, 0, 255),
    VTX(940, 1400, -1003, -80, 770, 255, 255, 255, 255),
    VTX(1189, 1400, -1012, -514, 1392, 255, 255, 255, 255),
    VTX(1128, 1400, -1073, -292, 1392, 0, 0, 0, 255),
    VTX(1236, 1400, -1126, -394, 1779, 255, 255, 255, 255),
    VTX(1149, 1400, -1126, -237, 1570, 0, 0, 0, 255),
    VTX(1189, 1400, -1012, -514, 1392, 255, 255, 255, 255),
    VTX(1180, 1400, -1261, -48, 1970, 255, 255, 255, 255),
    VTX(1119, 1400, -1199, -48, 1675, 0, 0, 0, 255),
    VTX(1067, 1400, -1308, 243, 1810, 255, 255, 255, 255),
    VTX(1067, 1400, -1221, 86, 1601, 0, 0, 0, 255),
    VTX(931, 1400, -1252, 386, 1349, 255, 255, 255, 255),
    VTX(993, 1400, -1191, 164, 1349, 0, 0, 0, 255),
    VTX(884, 1400, -1138, 266, 961, 255, 255, 255, 255),
    VTX(971, 1400, -1138, 109, 1170, 0, 0, 0, 255),
    VTX(900, 1400, -1573, 1024, 2048, 0, 0, 0, 255),
    VTX(1180, 1400, -1261, -48, 1970, 255, 255, 255, 255),
    VTX(1749, 1400, -724, -2048, 2048, 0, 0, 0, 255),
    VTX(1394, 1400, -743, -1372, 1239, 255, 255, 255, 255),
    VTX(1189, 1400, -1012, -514, 1392, 255, 255, 255, 255),
    VTX(1281, 1400, -790, -1082, 1078, 255, 255, 255, 255),
    VTX(1067, 1400, -1308, 243, 1810, 255, 255, 255, 255),
    VTX(931, 1400, -1252, 386, 1349, 255, 255, 255, 255),
    VTX(1450, 1400, -608, -1718, 1048, 255, 255, 255, 255),
    VTX(1450, 1400, -608, 2775, 1030, 255, 255, 255, 255),
    VTX(1403, 1400, -495, 2484, 869, 255, 255, 255, 255),
    VTX(1547, 1400, -251, 1861, 1361, 255, 255, 255, 255),
    VTX(1749, 1400, -724, 3072, 2048, 0, 0, 0, 255),
    VTX(1661, 1400, -204, 1741, 1749, 255, 255, 255, 255),
    VTX(1717, 1400, -69, 1395, 1940, 255, 255, 255, 255),
    VTX(1749, 1400, 441, 88, 2048, 0, 0, 0, 255),
    VTX(1670, 1400, 44, 1104, 1779, 255, 255, 255, 255),
    VTX(1535, 1400, 100, 961, 1318, 255, 255, 255, 255),
    VTX(1446, 1400, 744, -688, 1014, 0, 0, 0, 255),
    VTX(720, 1400, -904, 139, 0, 0, 0, 0, 255),
    VTX(848, 1400, -947, -15, 410, 0, 0, 0, 255),
    VTX(884, 1400, -1138, 266, 961, 255, 255, 255, 255),
    VTX(476, 1400, -1149, 1024, 0, 0, 0, 0, 255),
    VTX(931, 1400, -1252, 386, 1349, 255, 255, 255, 255),
    VTX(900, 1400, -1573, 1024, 2048, 0, 0, 0, 255),
    VTX(940, 1400, -1003, -80, 770, 255, 255, 255, 255),
    VTX(947, 1400, -848, -373, 410, 0, 0, 0, 255),
    VTX(1054, 1400, -956, -371, 931, 255, 255, 255, 255),
    VTX(1099, 1400, -621, -1059, 230, 255, 255, 255, 255),
    VTX(1146, 1400, -734, -938, 617, 255, 255, 255, 255),
    VTX(904, 1400, -720, -527, 0, 0, 0, 0, 255),
    VTX(1281, 1400, -790, -1082, 1078, 255, 255, 255, 255),
    VTX(1189, 1400, -1012, -514, 1392, 255, 255, 255, 255),
    VTX(1149, 1400, -476, -1412, 0, 0, 0, 0, 255),
    VTX(1365, 1400, -82, 1427, 740, 255, 255, 255, 255),
    VTX(1412, 1400, -195, 1718, 900, 255, 255, 255, 255),
    VTX(1268, 1400, -439, 2341, 408, 255, 255, 255, 255),
    VTX(1149, 1400, -476, 2436, 0, 0, 0, 0, 255),
    VTX(1149, 1400, 448, 72, 0, 0, 0, 0, 255),
    VTX(1421, 1400, 53, 1081, 931, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_11Vtx_000A70[32] = {
    VTX(1368, 1500, 667, -960, 1195, 255, 255, 255, 255),
    VTX(1149, 1400, 448, 1024, 2048, 0, 0, 0, 255),
    VTX(1149, 1640, 448, 1024, 0, 255, 255, 255, 255),
    VTX(1446, 1880, 744, -1664, -2048, 0, 0, 0, 255),
    VTX(1446, 1640, 744, -1664, 0, 119, 119, 119, 255),
    VTX(1149, 1880, 448, 1024, -2048, 0, 0, 0, 255),
    VTX(1368, 1400, 667, -960, 2048, 0, 0, 0, 255),
    VTX(1446, 1400, 744, -1664, 2048, 0, 0, 0, 255),
    VTX(1410, 1400, 709, -1344, 2048, 0, 0, 0, 255),
    VTX(1410, 1500, 709, -1344, 1195, 255, 255, 255, 255),
    VTX(1749, 1400, 441, 4608, 2048, 0, 0, 0, 255),
    VTX(1749, 1640, 441, 4608, 0, 255, 255, 255, 255),
    VTX(1749, 1640, -724, -2853, 0, 255, 255, 255, 255),
    VTX(1749, 1400, -724, -2853, 2048, 0, 0, 0, 255),
    VTX(833, 1480, -791, 3804, 3413, 255, 255, 255, 255),
    VTX(833, 1580, -791, 3804, 2560, 255, 255, 255, 255),
    VTX(1149, 1640, -476, 0, 2048, 255, 255, 255, 255),
    VTX(791, 1580, -833, 4316, 2560, 255, 255, 255, 255),
    VTX(476, 1640, -1149, 8120, 2048, 119, 119, 119, 255),
    VTX(791, 1480, -833, 4316, 3413, 255, 255, 255, 255),
    VTX(476, 1400, -1149, 8120, 4096, 0, 0, 0, 255),
    VTX(720, 1440, -904, 5169, 3755, 255, 255, 255, 255),
    VTX(720, 1400, -904, 5169, 4096, 0, 0, 0, 255),
    VTX(749, 1480, -876, 4828, 3413, 255, 255, 255, 255),
    VTX(904, 1400, -720, 2951, 4096, 0, 0, 0, 255),
    VTX(904, 1440, -720, 2951, 3755, 255, 255, 255, 255),
    VTX(1149, 1400, -476, 0, 4096, 0, 0, 0, 255),
    VTX(876, 1480, -749, 3292, 3413, 255, 255, 255, 255),
    VTX(749, 1440, -876, 4828, 3755, 51, 51, 51, 255),
    VTX(876, 1440, -749, 3292, 3755, 51, 51, 51, 255),
    VTX(476, 1880, -1149, 8120, 0, 0, 0, 0, 255),
    VTX(1149, 1880, -476, 0, 0, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_11Vtx_000C70[32] = {
    VTX(1749, 1640, 441, 4608, 0, 255, 255, 255, 255),
    VTX(1749, 1880, 441, 4608, -2048, 0, 0, 0, 255),
    VTX(1749, 1880, -724, -2853, -2048, 0, 0, 0, 255),
    VTX(1749, 1640, -724, -2853, 0, 255, 255, 255, 255),
    VTX(1149, 1400, -476, 1045, 2048, 0, 0, 0, 255),
    VTX(1149, 1640, -476, 1045, 0, 255, 255, 255, 255),
    VTX(1149, 1640, 448, -4864, 0, 255, 255, 255, 255),
    VTX(1149, 1400, 448, -4864, 2048, 0, 0, 0, 255),
    VTX(1149, 1880, -476, 1045, -2048, 0, 0, 0, 255),
    VTX(1149, 1880, 448, -4864, -2048, 0, 0, 0, 255),
    VTX(1446, 1400, 744, 2743, 2048, 0, 0, 0, 255),
    VTX(1749, 1640, 441, 0, 0, 255, 255, 255, 255),
    VTX(1749, 1400, 441, 0, 2048, 0, 0, 0, 255),
    VTX(1446, 1640, 744, 2743, 0, 119, 119, 119, 255),
    VTX(1446, 1880, 744, 2743, -2048, 0, 0, 0, 255),
    VTX(1749, 1880, 441, 0, -2048, 0, 0, 0, 255),
    VTX(1749, 1400, -724, 4352, 2048, 0, 0, 0, 255),
    VTX(1749, 1640, -724, 4352, 0, 255, 255, 255, 255),
    VTX(900, 1640, -1573, -3329, 0, 119, 119, 119, 255),
    VTX(900, 1400, -1573, -3329, 2048, 0, 0, 0, 255),
    VTX(1749, 1880, -724, 4352, -2048, 0, 0, 0, 255),
    VTX(900, 1880, -1573, -3329, -2048, 0, 0, 0, 255),
    VTX(900, 1400, -1573, 2560, 2048, 0, 0, 0, 255),
    VTX(900, 1640, -1573, 2560, 0, 119, 119, 119, 255),
    VTX(476, 1640, -1149, -1280, 0, 119, 119, 119, 255),
    VTX(476, 1400, -1149, -1280, 2048, 0, 0, 0, 255),
    VTX(900, 1880, -1573, 2560, -2048, 0, 0, 0, 255),
    VTX(476, 1880, -1149, -1280, -2048, 0, 0, 0, 255),
    VTX(1354, 1400, 681, 256, 2048, 0, 0, 0, 255),
    VTX(1368, 1400, 667, 512, 2048, 0, 0, 0, 255),
    VTX(1368, 1500, 667, 512, 768, 255, 255, 255, 255),
    VTX(1354, 1500, 681, 256, 768, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_11Vtx_000E70[13] = {
    VTX(1354, 1500, 681, 1280, 1024, 255, 255, 255, 255),
    VTX(1368, 1500, 667, 1280, 768, 255, 255, 255, 255),
    VTX(1410, 1500, 709, 512, 768, 255, 255, 255, 255),
    VTX(1396, 1500, 723, 512, 1024, 255, 255, 255, 255),
    VTX(1396, 1500, 723, 256, 768, 255, 255, 255, 255),
    VTX(1410, 1500, 709, 512, 768, 255, 255, 255, 255),
    VTX(1410, 1400, 709, 512, 2048, 0, 0, 0, 255),
    VTX(1396, 1400, 723, 256, 2048, 0, 0, 0, 255),
    VTX(1446, 1400, 744, -1664, 2048, 0, 0, 0, 255),
    VTX(1410, 1500, 709, -1344, 1195, 255, 255, 255, 255),
    VTX(1446, 1640, 744, -1664, 0, 119, 119, 119, 255),
    VTX(1368, 1500, 667, -960, 1195, 255, 255, 255, 255),
    VTX(1149, 1640, 448, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_11Vtx_000F40[12] = {
    VTX(777, 1480, -819, 0, 1792, 255, 255, 255, 255),
    VTX(791, 1480, -833, 0, 1536, 255, 255, 255, 255),
    VTX(791, 1580, -833, 1280, 1536, 255, 255, 255, 255),
    VTX(777, 1580, -819, 1280, 1792, 255, 255, 255, 255),
    VTX(777, 1580, -819, 1024, 1792, 255, 255, 255, 255),
    VTX(791, 1580, -833, 1024, 1536, 255, 255, 255, 255),
    VTX(833, 1580, -791, 256, 1536, 255, 255, 255, 255),
    VTX(819, 1580, -777, 256, 1792, 255, 255, 255, 255),
    VTX(819, 1580, -777, 1280, 1792, 255, 255, 255, 255),
    VTX(833, 1580, -791, 1280, 1536, 255, 255, 255, 255),
    VTX(833, 1480, -791, 0, 1536, 255, 255, 255, 255),
    VTX(819, 1480, -777, 0, 1792, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_11Vtx_001000[24] = {
    VTX(1630, 1640, -69, -3840, 2048, 140, 216, 140, 255),
    VTX(1600, 1640, -143, -3328, 2048, 140, 216, 140, 255),
    VTX(1547, 1640, -165, -3072, 1536, 140, 216, 140, 255),
    VTX(1474, 1640, -134, -3072, 512, 140, 216, 140, 255),
    VTX(1452, 1640, -82, -3328, 0, 140, 216, 140, 255),
    VTX(1483, 1640, -8, -3840, 0, 140, 216, 140, 255),
    VTX(1535, 1640, 14, -4096, 512, 140, 216, 140, 255),
    VTX(1609, 1640, -17, -4096, 1536, 140, 216, 140, 255),
    VTX(1364, 1640, -608, 0, 1536, 140, 216, 140, 255),
    VTX(1333, 1640, -682, 512, 1536, 140, 216, 140, 255),
    VTX(1281, 1640, -704, 768, 1024, 140, 216, 140, 255),
    VTX(1207, 1640, -673, 768, 0, 140, 216, 140, 255),
    VTX(1185, 1640, -621, 512, -512, 140, 216, 140, 255),
    VTX(1216, 1640, -547, 0, -512, 140, 216, 140, 255),
    VTX(1268, 1640, -525, -256, 0, 140, 216, 140, 255),
    VTX(1342, 1640, -556, -256, 1024, 140, 216, 140, 255),
    VTX(1149, 1640, -1126, 3584, 1536, 140, 216, 140, 255),
    VTX(1119, 1640, -1199, 4096, 1536, 140, 216, 140, 255),
    VTX(1067, 1640, -1221, 4352, 1024, 140, 216, 140, 255),
    VTX(993, 1640, -1191, 4352, 0, 140, 216, 140, 255),
    VTX(971, 1640, -1138, 4096, -512, 140, 216, 140, 255),
    VTX(1002, 1640, -1064, 3584, -512, 140, 216, 140, 255),
    VTX(1054, 1640, -1043, 3328, 0, 140, 216, 140, 255),
    VTX(1128, 1640, -1073, 3328, 1024, 140, 216, 140, 255),
}; 

static Vtx deku_tree_room_11Vtx_001180[89] = {
    VTX(1609, 1400, -17, 5539, 0, 0, 0, 0, 255),
    VTX(1630, 1400, -69, 4701, 0, 0, 0, 0, 255),
    VTX(1630, 1520, -69, 4701, 1024, 255, 255, 255, 255),
    VTX(1609, 1520, -17, 5539, 1024, 255, 255, 255, 255),
    VTX(1630, 1640, -69, 4701, 2048, 140, 216, 140, 255),
    VTX(1609, 1640, -17, 5539, 2048, 140, 216, 140, 255),
    VTX(1535, 1400, 14, 6749, 0, 0, 0, 0, 255),
    VTX(1535, 1520, 14, 6749, 1024, 255, 255, 255, 255),
    VTX(1535, 1640, 14, 6749, 2048, 140, 216, 140, 255),
    VTX(1483, 1400, -8, 7587, 0, 0, 0, 0, 255),
    VTX(1483, 1520, -8, 7587, 1024, 255, 255, 255, 255),
    VTX(1483, 1640, -8, 7587, 2048, 140, 216, 140, 255),
    VTX(1452, 1400, -82, 8797, 0, 0, 0, 0, 255),
    VTX(1452, 1520, -82, 8797, 1024, 255, 255, 255, 255),
    VTX(1452, 1640, -82, 8797, 2048, 140, 216, 140, 255),
    VTX(1474, 1400, -134, 1443, 0, 0, 0, 0, 255),
    VTX(1452, 1400, -82, 605, 0, 0, 0, 0, 255),
    VTX(1452, 1520, -82, 605, 1024, 255, 255, 255, 255),
    VTX(1474, 1520, -134, 1443, 1024, 255, 255, 255, 255),
    VTX(1452, 1640, -82, 605, 2048, 140, 216, 140, 255),
    VTX(1474, 1640, -134, 1443, 2048, 140, 216, 140, 255),
    VTX(1547, 1400, -165, 2653, 0, 0, 0, 0, 255),
    VTX(1547, 1520, -165, 2653, 1024, 255, 255, 255, 255),
    VTX(1547, 1640, -165, 2653, 2048, 140, 216, 140, 255),
    VTX(1600, 1400, -143, 3491, 0, 0, 0, 0, 255),
    VTX(1600, 1520, -143, 3491, 1024, 255, 255, 255, 255),
    VTX(1600, 1640, -143, 3491, 2048, 140, 216, 140, 255),
    VTX(1342, 1400, -556, 5539, 0, 0, 0, 0, 255),
    VTX(1364, 1400, -608, 4701, 0, 0, 0, 0, 255),
    VTX(1364, 1520, -608, 4701, 1024, 255, 255, 255, 255),
    VTX(1342, 1520, -556, 5539, 1024, 255, 255, 255, 255),
    VTX(1364, 1520, -608, 4701, 1024, 255, 255, 255, 255),
    VTX(1364, 1640, -608, 4701, 2048, 140, 216, 140, 255),
    VTX(1342, 1640, -556, 5539, 2048, 140, 216, 140, 255),
    VTX(1342, 1520, -556, 5539, 1024, 255, 255, 255, 255),
    VTX(1268, 1400, -525, 6749, 0, 0, 0, 0, 255),
    VTX(1342, 1400, -556, 5539, 0, 0, 0, 0, 255),
    VTX(1268, 1520, -525, 6749, 1024, 255, 255, 255, 255),
    VTX(1268, 1640, -525, 6749, 2048, 140, 216, 140, 255),
    VTX(1216, 1400, -547, 7587, 0, 0, 0, 0, 255),
    VTX(1216, 1520, -547, 7587, 1024, 255, 255, 255, 255),
    VTX(1216, 1640, -547, 7587, 2048, 140, 216, 140, 255),
    VTX(1185, 1400, -621, 8797, 0, 0, 0, 0, 255),
    VTX(1185, 1520, -621, 8797, 1024, 255, 255, 255, 255),
    VTX(1185, 1640, -621, 8797, 2048, 140, 216, 140, 255),
    VTX(1207, 1400, -673, 1443, 0, 0, 0, 0, 255),
    VTX(1185, 1400, -621, 605, 0, 0, 0, 0, 255),
    VTX(1185, 1520, -621, 605, 1024, 255, 255, 255, 255),
    VTX(1207, 1520, -673, 1443, 1024, 255, 255, 255, 255),
    VTX(1185, 1640, -621, 605, 2048, 140, 216, 140, 255),
    VTX(1207, 1640, -673, 1443, 2048, 140, 216, 140, 255),
    VTX(1281, 1400, -704, 2653, 0, 0, 0, 0, 255),
    VTX(1281, 1520, -704, 2653, 1024, 255, 255, 255, 255),
    VTX(1281, 1640, -704, 2653, 2048, 140, 216, 140, 255),
    VTX(1333, 1400, -682, 3491, 0, 0, 0, 0, 255),
    VTX(1333, 1520, -682, 3491, 1024, 255, 255, 255, 255),
    VTX(1333, 1640, -682, 3491, 2048, 140, 216, 140, 255),
    VTX(1364, 1400, -608, 4701, 0, 0, 0, 0, 255),
    VTX(1128, 1400, -1073, 5539, 0, 0, 0, 0, 255),
    VTX(1149, 1400, -1126, 4701, 0, 0, 0, 0, 255),
    VTX(1149, 1520, -1126, 4701, 1024, 255, 255, 255, 255),
    VTX(1128, 1520, -1073, 5539, 1024, 255, 255, 255, 255),
    VTX(1149, 1520, -1126, 4701, 1024, 255, 255, 255, 255),
    VTX(1149, 1640, -1126, 4701, 2048, 140, 216, 140, 255),
    VTX(1128, 1640, -1073, 5539, 2048, 140, 216, 140, 255),
    VTX(1128, 1520, -1073, 5539, 1024, 255, 255, 255, 255),
    VTX(1054, 1400, -1043, 6749, 0, 0, 0, 0, 255),
    VTX(1128, 1400, -1073, 5539, 0, 0, 0, 0, 255),
    VTX(1054, 1520, -1043, 6749, 1024, 255, 255, 255, 255),
    VTX(1054, 1640, -1043, 6749, 2048, 140, 216, 140, 255),
    VTX(1002, 1400, -1064, 7587, 0, 0, 0, 0, 255),
    VTX(1002, 1520, -1064, 7587, 1024, 255, 255, 255, 255),
    VTX(1002, 1640, -1064, 7587, 2048, 140, 216, 140, 255),
    VTX(971, 1400, -1138, 8797, 0, 0, 0, 0, 255),
    VTX(971, 1520, -1138, 8797, 1024, 255, 255, 255, 255),
    VTX(971, 1640, -1138, 8797, 2048, 140, 216, 140, 255),
    VTX(993, 1400, -1191, 1443, 0, 0, 0, 0, 255),
    VTX(971, 1400, -1138, 605, 0, 0, 0, 0, 255),
    VTX(971, 1520, -1138, 605, 1024, 255, 255, 255, 255),
    VTX(993, 1520, -1191, 1443, 1024, 255, 255, 255, 255),
    VTX(971, 1640, -1138, 605, 2048, 140, 216, 140, 255),
    VTX(993, 1640, -1191, 1443, 2048, 140, 216, 140, 255),
    VTX(1067, 1400, -1221, 2653, 0, 0, 0, 0, 255),
    VTX(1067, 1520, -1221, 2653, 1024, 255, 255, 255, 255),
    VTX(1067, 1640, -1221, 2653, 2048, 140, 216, 140, 255),
    VTX(1119, 1400, -1199, 3491, 0, 0, 0, 0, 255),
    VTX(1119, 1520, -1199, 3491, 1024, 255, 255, 255, 255),
    VTX(1119, 1640, -1199, 3491, 2048, 140, 216, 140, 255),
    VTX(1149, 1400, -1126, 4701, 0, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_11Vtx_001710[4] = {
    VTX(1396, 1400, 723, 0, 0, 0, 0, 0, 255),
    VTX(1410, 1400, 709, 0, 0, 0, 0, 0, 255),
    VTX(1368, 1400, 667, 0, 0, 0, 0, 0, 255),
    VTX(1354, 1400, 681, 0, 0, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_11Vtx_001750[8] = {
    VTX(1377, 1400, -1746, 0, 0, 0, 0, 0, 0),
    VTX(2185, 1400, 475, 0, 0, 0, 0, 0, 0),
    VTX(1377, 1880, -1746, 0, 0, 0, 0, 0, 0),
    VTX(2185, 1880, 475, 0, 0, 0, 0, 0, 0),
    VTX(389, 1400, -1387, 0, 0, 0, 0, 0, 0),
    VTX(1198, 1400, 835, 0, 0, 0, 0, 0, 0),
    VTX(389, 1880, -1387, 0, 0, 0, 0, 0, 0),
    VTX(1198, 1880, 835, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_11Dlist0x0017D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_11Vtx_001750[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_11Tex_001F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_11Vtx_0000D0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_11Tex_002F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 238, 238, 238, 255),
    gsSPVertex(&deku_tree_room_11Vtx_000250[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_11Vtx_000290[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 19, 20, 15, 0),
    gsSP2Triangles(18, 15, 21, 0, 15, 17, 21, 0),
    gsSP2Triangles(1, 22, 2, 0, 1, 23, 22, 0),
    gsSP2Triangles(1, 24, 23, 0, 1, 25, 24, 0),
    gsSP2Triangles(0, 25, 1, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 31, 27, 0),
    gsSP1Triangle(30, 27, 26, 0),
    gsSPVertex(&deku_tree_room_11Vtx_000490[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(30, 28, 31, 0),
    gsSPVertex(&deku_tree_room_11Vtx_000690[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 6, 5, 0, 11, 12, 10, 0),
    gsSP2Triangles(11, 10, 13, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 12, 11, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 18, 19, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 20, 21, 19, 0),
    gsSP2Triangles(20, 19, 18, 0, 8, 7, 21, 0),
    gsSP2Triangles(8, 21, 20, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 11, 24, 0, 11, 25, 24, 0),
    gsSP2Triangles(11, 26, 27, 0, 11, 27, 25, 0),
    gsSP2Triangles(22, 28, 23, 0, 22, 29, 28, 0),
    gsSP1Triangle(25, 30, 24, 0),
    gsSPVertex(&deku_tree_room_11Vtx_000690[31], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(5, 6, 3, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 14, 15, 13, 0),
    gsSP2Triangles(11, 16, 12, 0, 11, 17, 18, 0),
    gsSP2Triangles(11, 18, 16, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 17, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 18, 0),
    gsSP2Triangles(21, 24, 19, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 9, 8, 0),
    gsSP2Triangles(29, 8, 30, 0, 26, 2, 1, 0),
    gsSP2Triangles(26, 1, 27, 0, 25, 29, 30, 0),
    gsSP1Triangle(25, 28, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_11Tex_003F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_11Vtx_000A70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 3, 0, 0, 6, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 18, 16, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 18, 21, 0, 18, 19, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 16, 26, 0),
    gsSP2Triangles(27, 14, 16, 0, 28, 21, 23, 0),
    gsSP2Triangles(21, 18, 23, 0, 29, 27, 25, 0),
    gsSP2Triangles(27, 16, 25, 0, 18, 30, 31, 0),
    gsSP1Triangle(18, 31, 16, 0),
    gsSPVertex(&deku_tree_room_11Vtx_000C70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(13, 14, 11, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&deku_tree_room_11Vtx_000E70[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP1Triangle(9, 12, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 238, 238, 238, 255),
    gsSPVertex(&deku_tree_room_11Vtx_000F40[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_11Tex_004F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_11Vtx_001000[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 16, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00FAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_11Vtx_001180[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(3, 5, 8, 0, 3, 8, 7, 0),
    gsSP2Triangles(9, 6, 7, 0, 9, 7, 10, 0),
    gsSP2Triangles(7, 8, 11, 0, 7, 11, 10, 0),
    gsSP2Triangles(12, 9, 10, 0, 12, 10, 13, 0),
    gsSP2Triangles(10, 11, 14, 0, 10, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 15, 18, 0, 21, 18, 22, 0),
    gsSP2Triangles(18, 20, 23, 0, 18, 23, 22, 0),
    gsSP2Triangles(24, 21, 22, 0, 24, 22, 25, 0),
    gsSP2Triangles(22, 23, 26, 0, 22, 26, 25, 0),
    gsSP2Triangles(1, 24, 25, 0, 1, 25, 2, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 2, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&deku_tree_room_11Vtx_001180[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 6, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsSP2Triangles(8, 4, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(6, 7, 10, 0, 6, 10, 9, 0),
    gsSP2Triangles(11, 8, 9, 0, 11, 9, 12, 0),
    gsSP2Triangles(9, 10, 13, 0, 9, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 14, 17, 0, 20, 17, 21, 0),
    gsSP2Triangles(17, 19, 22, 0, 17, 22, 21, 0),
    gsSP2Triangles(23, 20, 21, 0, 23, 21, 24, 0),
    gsSP2Triangles(21, 22, 25, 0, 21, 25, 24, 0),
    gsSP2Triangles(26, 23, 24, 0, 26, 24, 0, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&deku_tree_room_11Vtx_001180[62], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 6, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsSP2Triangles(8, 4, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(6, 7, 10, 0, 6, 10, 9, 0),
    gsSP2Triangles(11, 8, 9, 0, 11, 9, 12, 0),
    gsSP2Triangles(9, 10, 13, 0, 9, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 14, 17, 0, 20, 17, 21, 0),
    gsSP2Triangles(17, 19, 22, 0, 17, 22, 21, 0),
    gsSP2Triangles(23, 20, 21, 0, 23, 21, 24, 0),
    gsSP2Triangles(21, 22, 25, 0, 21, 25, 24, 0),
    gsSP2Triangles(26, 23, 24, 0, 26, 24, 0, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&deku_tree_room_11Vtx_001710[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001F10[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x17, 0xD0, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_11Tex_001F20[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_11Tex_001F20.rgb5a1.inc.c"
};

u64 deku_tree_room_11Tex_002F20[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_11Tex_002F20.rgb5a1.inc.c"
};

u64 deku_tree_room_11Tex_003F20[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_11Tex_003F20.rgb5a1.inc.c"
};

u64 deku_tree_room_11Tex_004F20[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_11Tex_004F20.rgb5a1.inc.c"
};


