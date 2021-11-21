#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_blkobj.h"

static Vtx object_blkobjVtx_000000[32];
static Vtx object_blkobjVtx_000200[32];
static Vtx object_blkobjVtx_000400[5];
static Vtx object_blkobjVtx_000450[5];
static Vtx object_blkobjVtx_0004A0[24];
static Vtx object_blkobjVtx_000620[5];
static Vtx object_blkobjVtx_000670[10];
static Vtx object_blkobjVtx_000710[10];
static Vtx object_blkobjVtx_0007B0[4];
static Vtx object_blkobjVtx_0007F0[32];
static Vtx object_blkobjVtx_0009F0[4];
static Vtx object_blkobjVtx_000A30[4];
static Vtx object_blkobjVtx_000A70[4];
static Vtx object_blkobjVtx_000AB0[26];
static Vtx object_blkobjVtx_000C50[4];
static Vtx object_blkobjVtx_000C90[17];
static Vtx object_blkobjVtx_000DA0[4];
static Vtx object_blkobjVtx_000DE0[15];
static Vtx object_blkobjVtx_000ED0[5];
static Vtx object_blkobjVtx_000F20[6];
static Vtx object_blkobjVtx_000F80[8];
static Vtx object_blkobjVtx_001000[32];
static Vtx object_blkobjVtx_001200[32];
static Vtx object_blkobjVtx_001400[8];
static Vtx object_blkobjVtx_001480[6];
static Vtx object_blkobjVtx_001F30[10];
static Vtx object_blkobjVtx_001FD0[62];
static Vtx object_blkobjVtx_0023B0[32];
static Vtx object_blkobjVtx_0025B0[50];
static Vtx object_blkobjVtx_0028D0[26];
static Vtx object_blkobjVtx_002A70[12];
static Vtx object_blkobjVtx_002B30[32];
static Vtx object_blkobjVtx_002D30[24];
static Vtx object_blkobjVtx_002EB0[7];
static Vtx object_blkobjVtx_002F20[3];
static Vtx object_blkobjVtx_002F50[4];
static Vtx object_blkobjVtx_002F90[4];
static Vtx object_blkobjVtx_002FD0[5];
static Vtx object_blkobjVtx_003020[14];
static Vtx object_blkobjVtx_003100[23];
static Vtx object_blkobjVtx_003270[8];
static Vtx object_blkobjVtx_0032F0[11];
static Vtx object_blkobjVtx_0033A0[3];
static Vtx object_blkobjVtx_0033D0[4];
static Vtx object_blkobjVtx_003410[4];
static Vtx object_blkobjVtx_003450[14];
static Vtx object_blkobjVtx_003530[23];
static Vtx object_blkobjVtx_0036A0[8];
static Vtx object_blkobjVtx_003720[4];
static Vtx object_blkobjVtx_003760[14];
static Vtx object_blkobjVtx_003840[19];
static Vtx object_blkobjVtx_003970[8];
static Vtx object_blkobjVtx_0039F0[8];
static Vtx object_blkobjVtx_003A70[5];
static Vtx object_blkobjVtx_003AC0[5];
static Vtx object_blkobjVtx_003B10[11];
static Vtx object_blkobjVtx_003BC0[4];
static Vtx object_blkobjVtx_003C00[4];
static Vtx object_blkobjVtx_003C40[4];
static Vtx object_blkobjVtx_003C80[17];
static Vtx object_blkobjVtx_003D90[14];
static Vtx object_blkobjVtx_003E70[19];
static Vtx object_blkobjVtx_003FA0[8];
static Vtx object_blkobjVtx_004020[8];
static Vtx object_blkobjVtx_0040A0[5];
static Vtx object_blkobjVtx_0040F0[5];
static Vtx object_blkobjVtx_004140[7];
static Vtx object_blkobjVtx_0041B0[4];
static Vtx object_blkobjVtx_0041F0[4];
static Vtx object_blkobjVtx_004230[4];
static Vtx object_blkobjVtx_004270[8];
static Vtx object_blkobjVtx_0042F0[18];
static Vtx object_blkobjVtx_004410[12];
static Vtx object_blkobjVtx_0044D0[4];
static Vtx object_blkobjVtx_004510[12];
static Vtx object_blkobjVtx_0045D0[4];
static Vtx object_blkobjVtx_004610[30];
static Vtx object_blkobjVtx_0047F0[4];
static Vtx object_blkobjVtx_004830[12];
static Vtx object_blkobjVtx_0048F0[4];
static Vtx object_blkobjVtx_004930[12];
static Vtx object_blkobjVtx_0049F0[32];
static Vtx object_blkobjVtx_004BF0[32];
static Vtx object_blkobjVtx_004DF0[32];
static Vtx object_blkobjVtx_004FF0[32];
static Vtx object_blkobjVtx_0051F0[30];
static Vtx object_blkobjVtx_007590[62];
static Vtx object_blkobjVtx_007970[32];
static Vtx object_blkobjVtx_007B70[32];
static Vtx object_blkobjVtx_007D70[20];

static Vtx object_blkobjVtx_000000[32] = {
    VTX(-940, 90, -1000, 0, 0, 53, 95, 99, 255),
    VTX(-940, 420, -1000, 2816, 0, 53, 95, 99, 255),
    VTX(-940, 90, -940, 0, 1024, 106, 168, 174, 255),
    VTX(-940, 420, -940, 2816, 1024, 53, 95, 99, 255),
    VTX(-940, 90, -940, 0, 0, 106, 168, 174, 255),
    VTX(-1000, 420, -940, 2816, 1024, 53, 95, 99, 255),
    VTX(-1000, 90, -940, 0, 1024, 62, 112, 116, 255),
    VTX(-940, 420, -940, 2816, 0, 53, 95, 99, 255),
    VTX(940, 90, 940, 0, 0, 106, 168, 174, 255),
    VTX(940, 420, 940, 2816, 0, 53, 95, 99, 255),
    VTX(1000, 420, 940, 2816, 1024, 53, 95, 99, 255),
    VTX(1000, 90, 940, 0, 1024, 62, 112, 116, 255),
    VTX(940, 420, 1000, 2816, 1024, 53, 95, 99, 255),
    VTX(940, 420, 940, 2816, 0, 106, 168, 174, 255),
    VTX(940, 90, 940, 0, 0, 140, 187, 191, 255),
    VTX(940, 90, 1000, 0, 1024, 62, 112, 116, 255),
    VTX(-940, 90, 940, 0, 0, 140, 187, 191, 255),
    VTX(-940, 420, 940, 2816, 0, 106, 168, 174, 255),
    VTX(-940, 420, 1000, 2816, 1024, 53, 95, 99, 255),
    VTX(-940, 90, 1000, 0, 1024, 62, 112, 116, 255),
    VTX(-1000, 420, 940, 2816, 1024, 53, 95, 99, 255),
    VTX(-940, 420, 940, 2816, 0, 53, 95, 99, 255),
    VTX(-940, 90, 940, 0, 0, 106, 168, 174, 255),
    VTX(-1000, 90, 940, 0, 1024, 62, 112, 116, 255),
    VTX(1000, 420, -940, 2816, 1024, 53, 95, 99, 255),
    VTX(940, 420, -940, 2816, 0, 106, 168, 174, 255),
    VTX(940, 90, -940, 0, 0, 156, 196, 200, 255),
    VTX(1000, 90, -940, 0, 1024, 53, 95, 99, 255),
    VTX(940, 90, -940, 0, 1024, 106, 168, 174, 255),
    VTX(940, 420, -940, 2816, 1024, 53, 95, 99, 255),
    VTX(940, 420, -1000, 2816, 0, 53, 95, 99, 255),
    VTX(940, 90, -1000, 0, 0, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000200[32] = {
    VTX(-940, 300, 1000, 0, 1024, 53, 95, 99, 255),
    VTX(-940, 420, 1000, 0, -1024, 53, 95, 99, 255),
    VTX(-470, 300, 1000, 4096, 1024, 106, 168, 174, 255),
    VTX(-1000, 300, 470, 0, -3072, 106, 168, 174, 255),
    VTX(-1000, 420, 940, 2048, 1024, 53, 95, 99, 255),
    VTX(-1000, 300, 940, 0, 1024, 53, 95, 99, 255),
    VTX(-1000, 420, 0, 2048, -7168, 53, 95, 99, 255),
    VTX(-1000, 300, 0, 0, -7168, 53, 95, 99, 255),
    VTX(-1000, 300, -470, 0, -11264, 106, 168, 174, 255),
    VTX(-1000, 300, -940, 0, -15360, 53, 95, 99, 255),
    VTX(-1000, 420, -940, 2048, -15360, 53, 95, 99, 255),
    VTX(0, 420, 1000, 8192, -1024, 53, 95, 99, 255),
    VTX(0, 300, 1000, 8192, 1024, 53, 95, 99, 255),
    VTX(940, 420, 1000, 16384, -1024, 53, 95, 99, 255),
    VTX(940, 300, 1000, 16384, 1024, 53, 95, 99, 255),
    VTX(470, 300, 1000, 12288, 1024, 106, 168, 174, 255),
    VTX(470, 300, -1000, 12288, 1024, 106, 168, 174, 255),
    VTX(940, 300, -1000, 16384, 1024, 53, 95, 99, 255),
    VTX(940, 420, -1000, 16384, -1024, 53, 95, 99, 255),
    VTX(-470, 300, -1000, 4096, 1024, 106, 168, 174, 255),
    VTX(-940, 420, -1000, 0, -1024, 53, 95, 99, 255),
    VTX(-940, 300, -1000, 0, 1024, 53, 95, 99, 255),
    VTX(0, 420, -1000, 8192, -1024, 53, 95, 99, 255),
    VTX(0, 300, -1000, 8192, 1024, 53, 95, 99, 255),
    VTX(1000, 300, 470, 0, -3072, 106, 168, 174, 255),
    VTX(1000, 420, 940, 2048, 1024, 53, 95, 99, 255),
    VTX(1000, 420, 0, 2048, -7168, 53, 95, 99, 255),
    VTX(1000, 300, 940, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 300, 0, 0, -7168, 53, 95, 99, 255),
    VTX(1000, 300, -470, 0, -11264, 106, 168, 174, 255),
    VTX(1000, 420, -940, 2048, -15360, 53, 95, 99, 255),
    VTX(1000, 300, -940, 0, -15360, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000400[5] = {
    VTX(-1000, 240, 50, 2048, 0, 53, 95, 99, 255),
    VTX(-1000, 140, 50, 2048, 1024, 53, 95, 99, 255),
    VTX(-1000, 180, 0, 1024, 614, 194, 234, 238, 255),
    VTX(-1000, 240, -50, 0, 0, 53, 95, 99, 255),
    VTX(-1000, 140, -50, 0, 1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000450[5] = {
    VTX(1000, 140, -50, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 180, 0, 1024, 768, 189, 216, 218, 255),
    VTX(1000, 300, -50, 0, 0, 53, 95, 99, 255),
    VTX(1000, 140, 50, 2048, 1024, 53, 95, 99, 255),
    VTX(1000, 300, 50, 2048, 0, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_0004A0[24] = {
    VTX(-1000, 20, -30, -1024, 1024, 106, 168, 174, 255),
    VTX(-1000, 20, -50, -1024, 0, 106, 168, 174, 255),
    VTX(-1000, 120, -30, 4096, 1024, 106, 168, 174, 255),
    VTX(-1000, 140, -50, 5120, 0, 53, 95, 99, 255),
    VTX(-1000, 20, 50, -1024, 5120, 106, 168, 174, 255),
    VTX(-1000, 120, 30, 4096, 4096, 106, 168, 174, 255),
    VTX(-1000, 140, 50, 5120, 5120, 53, 95, 99, 255),
    VTX(-1000, 20, 30, -1024, 4096, 106, 168, 174, 255),
    VTX(-1000, 140, -50, 4096, 0, 53, 95, 99, 255),
    VTX(-1000, 140, 50, -1024, 0, 53, 95, 99, 255),
    VTX(-1000, 120, 30, 0, 1024, 106, 168, 174, 255),
    VTX(-1000, 120, -30, 3072, 1024, 106, 168, 174, 255),
    VTX(1000, 120, -30, 3072, 1024, 106, 168, 174, 255),
    VTX(1000, 120, 30, 0, 1024, 106, 168, 174, 255),
    VTX(1000, 140, 50, -1024, 0, 53, 95, 99, 255),
    VTX(1000, 140, -50, 4096, 0, 53, 95, 99, 255),
    VTX(1000, 140, 50, 5120, 5120, 53, 95, 99, 255),
    VTX(1000, 120, 30, 4096, 4096, 106, 168, 174, 255),
    VTX(1000, 20, 50, -1024, 5120, 62, 112, 116, 255),
    VTX(1000, 120, -30, 4096, 1024, 106, 168, 174, 255),
    VTX(1000, 140, -50, 5120, 0, 53, 95, 99, 255),
    VTX(1000, 20, -50, -1024, 0, 62, 112, 116, 255),
    VTX(1000, 20, -30, -1024, 1024, 106, 168, 174, 255),
    VTX(1000, 20, 30, -1024, 4096, 106, 168, 174, 255),
}; 

static Vtx object_blkobjVtx_000620[5] = {
    VTX(1000, 420, -1000, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 420, 1000, 20480, 1024, 53, 95, 99, 255),
    VTX(0, 420, 0, 10240, -9216, 89, 159, 165, 255),
    VTX(-1000, 420, 1000, 20480, -19456, 53, 95, 99, 255),
    VTX(-1000, 420, -1000, 0, -19456, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000670[10] = {
    VTX(1000, 20, 50, 0, 1024, 106, 168, 174, 255),
    VTX(1000, 160, 130, 1024, 0, 197, 221, 224, 255),
    VTX(1000, 300, 50, 2048, 1024, 53, 95, 99, 255),
    VTX(1000, 300, 210, 2048, -1024, 53, 95, 99, 255),
    VTX(1000, 20, 210, 0, -1024, 106, 168, 174, 255),
    VTX(1000, 20, -50, 0, -1024, 106, 168, 174, 255),
    VTX(1000, 160, -130, 1024, 0, 197, 221, 224, 255),
    VTX(1000, 20, -210, 0, 1024, 106, 168, 174, 255),
    VTX(1000, 300, -50, 2048, -1024, 53, 95, 99, 255),
    VTX(1000, 300, -210, 2048, 1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000710[10] = {
    VTX(-910, 20, 0, 1024, 0, 197, 221, 224, 255),
    VTX(-820, 20, 90, 2048, -1024, 106, 168, 174, 255),
    VTX(-820, 20, -90, 0, -1024, 106, 168, 174, 255),
    VTX(-1000, 20, 90, 2048, 1024, 53, 95, 99, 255),
    VTX(-1000, 20, -90, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 20, -210, 0, -1024, 53, 95, 99, 255),
    VTX(820, 20, -210, 0, 1024, 106, 168, 174, 255),
    VTX(910, 20, 0, 3072, 0, 197, 221, 224, 255),
    VTX(1000, 20, 210, 6144, -1024, 53, 95, 99, 255),
    VTX(820, 20, 210, 6144, 1024, 106, 168, 174, 255),
}; 

static Vtx object_blkobjVtx_0007B0[4] = {
    VTX(-1000, 20, -90, 0, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, -90, -220, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, 90, -220, 3001, 53, 95, 99, 255),
    VTX(-1000, 20, 90, 0, 3001, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_0007F0[32] = {
    VTX(-940, 0, -1000, 0, 0, 53, 95, 99, 255),
    VTX(-940, 90, -940, 1024, 1024, 153, 153, 153, 255),
    VTX(-940, 0, -940, 0, 1024, 153, 153, 153, 255),
    VTX(-940, 90, -1000, 1024, 0, 53, 95, 99, 255),
    VTX(-940, 0, -940, 0, 0, 179, 179, 179, 255),
    VTX(-940, 90, -940, 1024, 0, 179, 179, 179, 255),
    VTX(-1000, 90, -940, 1024, 1024, 62, 112, 116, 255),
    VTX(-1000, 0, -940, 0, 1024, 127, 127, 127, 255),
    VTX(940, 90, 940, 1024, 0, 153, 153, 153, 255),
    VTX(1000, 90, 940, 1024, 1024, 62, 112, 116, 255),
    VTX(1000, 0, 940, 0, 1024, 153, 153, 153, 255),
    VTX(940, 0, 940, 0, 0, 153, 153, 153, 255),
    VTX(940, 0, 1000, 0, 0, 153, 153, 153, 255),
    VTX(940, 90, 1000, 1024, 0, 62, 112, 116, 255),
    VTX(940, 90, 940, 1024, 1024, 140, 187, 191, 255),
    VTX(940, 0, 940, 0, 1024, 153, 153, 153, 255),
    VTX(-940, 90, 940, 1024, 0, 140, 187, 191, 255),
    VTX(-940, 90, 1000, 1024, 1024, 62, 112, 116, 255),
    VTX(-940, 0, 1000, 0, 1024, 53, 95, 99, 255),
    VTX(-940, 0, 940, 0, 0, 179, 179, 179, 255),
    VTX(-1000, 0, 940, 0, 0, 127, 127, 127, 255),
    VTX(-1000, 90, 940, 1024, 0, 62, 112, 116, 255),
    VTX(-940, 90, 940, 1024, 1024, 179, 179, 179, 255),
    VTX(-940, 0, 940, 0, 1024, 179, 179, 179, 255),
    VTX(1000, 0, -940, 0, 0, 53, 95, 99, 255),
    VTX(1000, 90, -940, 1024, 0, 53, 95, 99, 255),
    VTX(940, 90, -940, 1024, 1024, 156, 196, 200, 255),
    VTX(940, 0, -940, 0, 1024, 153, 153, 153, 255),
    VTX(940, 90, -940, 1024, 0, 153, 153, 153, 255),
    VTX(940, 90, -1000, 1024, 1024, 53, 95, 99, 255),
    VTX(940, 0, -1000, 0, 1024, 53, 95, 99, 255),
    VTX(940, 0, -940, 0, 0, 153, 153, 153, 255),
}; 

static Vtx object_blkobjVtx_0009F0[4] = {
    VTX(-820, 0, -1000, 2048, -1024, 53, 95, 99, 255),
    VTX(-1000, 0, -1000, 2048, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, -820, 0, 1024, 53, 95, 99, 255),
    VTX(-820, 0, -820, 0, -1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000A30[4] = {
    VTX(820, 0, -1000, 2048, -15189, 53, 95, 99, 255),
    VTX(-820, 0, -1000, 2048, 12800, 53, 95, 99, 255),
    VTX(-820, 0, -820, -1024, 12800, 53, 95, 99, 255),
    VTX(820, 0, -820, -1024, -15189, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000A70[4] = {
    VTX(1000, 0, -1000, 2048, -1024, 53, 95, 99, 255),
    VTX(820, 0, -1000, 2048, 1024, 53, 95, 99, 255),
    VTX(820, 0, -820, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 0, -820, 0, -1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000AB0[26] = {
    VTX(820, 10, -210, 10752, 768, 197, 221, 224, 255),
    VTX(820, 0, -210, 10752, 1024, 123, 177, 182, 255),
    VTX(820, 0, 210, 0, 1024, 123, 177, 182, 255),
    VTX(820, 10, 210, 0, 768, 197, 221, 224, 255),
    VTX(820, 20, -210, 10752, 512, 53, 95, 99, 255),
    VTX(820, 20, 210, 0, 512, 53, 95, 99, 255),
    VTX(820, 10, 210, 0, 768, 197, 221, 224, 255),
    VTX(820, 0, 210, 0, 1024, 123, 177, 182, 255),
    VTX(1000, 0, 210, 4608, 1024, 53, 95, 99, 255),
    VTX(1000, 10, 210, 4608, 768, 197, 221, 224, 255),
    VTX(820, 20, 210, 0, 512, 53, 95, 99, 255),
    VTX(1000, 20, 210, 4608, 512, 53, 95, 99, 255),
    VTX(1000, 10, -210, 4608, 768, 197, 221, 224, 255),
    VTX(1000, 0, -210, 4608, 1024, 53, 95, 99, 255),
    VTX(820, 0, -210, 0, 1024, 123, 177, 182, 255),
    VTX(820, 10, -210, 0, 768, 197, 221, 224, 255),
    VTX(820, 20, -210, 0, 512, 53, 95, 99, 255),
    VTX(1000, 20, -210, 4608, 512, 53, 95, 99, 255),
    VTX(820, 0, -210, -1024, 1536, 123, 177, 182, 255),
    VTX(1000, 0, -210, -1024, -1536, 53, 95, 99, 255),
    VTX(1000, 0, -820, 9387, -1536, 53, 95, 99, 255),
    VTX(820, 0, -820, 9387, 1536, 53, 95, 99, 255),
    VTX(1000, 0, 820, -18603, -1536, 53, 95, 99, 255),
    VTX(1000, 0, 210, -8192, -1536, 53, 95, 99, 255),
    VTX(820, 0, 210, -8192, 1536, 123, 177, 182, 255),
    VTX(820, 0, 820, -18603, 1536, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000C50[4] = {
    VTX(820, 0, 1000, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 0, 1000, 0, -1024, 53, 95, 99, 255),
    VTX(1000, 0, 820, 2048, -1024, 53, 95, 99, 255),
    VTX(820, 0, 820, 2048, 1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000C90[17] = {
    VTX(-820, 0, -90, -2048, -512, 123, 177, 182, 255),
    VTX(-820, 0, -820, 10411, -512, 53, 95, 99, 255),
    VTX(-1000, 0, -820, 10411, 2560, 53, 95, 99, 255),
    VTX(-1000, 0, -90, -2048, 2560, 53, 95, 99, 255),
    VTX(-820, 10, -90, 1024, 853, 197, 221, 224, 255),
    VTX(-820, 0, -90, 1024, 1024, 123, 177, 182, 255),
    VTX(-1000, 0, -90, -2048, 1024, 53, 95, 99, 255),
    VTX(-1000, 10, -90, -2048, 853, 197, 221, 224, 255),
    VTX(-820, 20, -90, 1024, 683, 53, 95, 99, 255),
    VTX(-1000, 20, -90, -2048, 683, 53, 95, 99, 255),
    VTX(-820, 0, 90, -5120, -512, 123, 177, 182, 255),
    VTX(-1000, 0, 820, -17579, 2560, 53, 95, 99, 255),
    VTX(-820, 0, 820, -17579, -512, 53, 95, 99, 255),
    VTX(820, 0, 820, 2048, -15189, 53, 95, 99, 255),
    VTX(-820, 0, 820, 2048, 12800, 53, 95, 99, 255),
    VTX(-820, 0, 1000, -1024, 12800, 53, 95, 99, 255),
    VTX(820, 0, 1000, -1024, -15189, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000DA0[4] = {
    VTX(-1000, 0, 820, 2048, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, 1000, 0, 1024, 53, 95, 99, 255),
    VTX(-820, 0, 1000, 0, -1024, 53, 95, 99, 255),
    VTX(-820, 0, 820, 2048, -1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000DE0[15] = {
    VTX(-820, 0, 90, -5120, -512, 123, 177, 182, 255),
    VTX(-1000, 0, 90, -5120, 2560, 53, 95, 99, 255),
    VTX(-1000, 0, 820, -17579, 2560, 53, 95, 99, 255),
    VTX(-1000, 10, 90, -2048, 853, 197, 221, 224, 255),
    VTX(-1000, 0, 90, -2048, 1024, 53, 95, 99, 255),
    VTX(-820, 0, 90, 1024, 1024, 123, 177, 182, 255),
    VTX(-820, 10, 90, 1024, 853, 197, 221, 224, 255),
    VTX(-1000, 20, 90, -2048, 683, 53, 95, 99, 255),
    VTX(-820, 20, 90, 1024, 683, 53, 95, 99, 255),
    VTX(-820, 10, 90, 0, 853, 197, 221, 224, 255),
    VTX(-820, 0, 90, 0, 1024, 123, 177, 182, 255),
    VTX(-820, 0, -90, 3072, 1024, 123, 177, 182, 255),
    VTX(-820, 10, -90, 3072, 853, 197, 221, 224, 255),
    VTX(-820, 20, 90, 0, 683, 53, 95, 99, 255),
    VTX(-820, 20, -90, 3072, 683, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_000ED0[5] = {
    VTX(820, 0, 820, 0, -17636, 53, 95, 99, 255),
    VTX(820, 0, 90, 8192, -17636, 123, 177, 182, 255),
    VTX(0, 0, 90, 8192, -8306, 106, 168, 174, 255),
    VTX(-820, 0, 820, 0, 1024, 53, 95, 99, 255),
    VTX(-820, 0, 90, 8192, 1024, 123, 177, 182, 255),
}; 

static Vtx object_blkobjVtx_000F20[6] = {
    VTX(820, 0, -90, 2048, 1024, 123, 177, 182, 255),
    VTX(0, 0, -90, 2048, -8306, 106, 168, 174, 255),
    VTX(0, 0, 90, 0, -8306, 106, 168, 174, 255),
    VTX(820, 0, 90, 0, 1024, 123, 177, 182, 255),
    VTX(-820, 0, -90, 2048, -17636, 123, 177, 182, 255),
    VTX(-820, 0, 90, 0, -17636, 123, 177, 182, 255),
}; 

static Vtx object_blkobjVtx_000F80[8] = {
    VTX(820, 0, -820, 18404, -17636, 53, 95, 99, 255),
    VTX(0, 0, -90, 10212, -8306, 106, 168, 174, 255),
    VTX(820, 0, -90, 10212, -17636, 123, 177, 182, 255),
    VTX(-820, 0, -820, 18404, 1024, 53, 95, 99, 255),
    VTX(-820, 0, -90, 10212, 1024, 123, 177, 182, 255),
    VTX(820, 0, 820, 0, -17636, 53, 95, 99, 255),
    VTX(0, 0, 90, 8192, -8306, 106, 168, 174, 255),
    VTX(-820, 0, 820, 0, 1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_001000[32] = {
    VTX(1020, 120, 30, 0, 1104, 53, 95, 99, 255),
    VTX(1000, 120, 30, -220, 1104, 53, 95, 99, 255),
    VTX(1020, 120, -30, 0, 1763, 53, 95, 99, 255),
    VTX(1000, 120, 30, -10, 315, 53, 95, 99, 255),
    VTX(1000, 120, -30, -10, 974, 53, 95, 99, 255),
    VTX(1020, 120, -30, 210, 974, 53, 95, 99, 255),
    VTX(1020, 120, -30, 0, 974, 53, 95, 99, 255),
    VTX(1000, 120, -30, -220, 974, 53, 95, 99, 255),
    VTX(1000, 20, -30, -220, 2072, 53, 95, 99, 255),
    VTX(1020, 20, -30, 0, 2072, 53, 95, 99, 255),
    VTX(1000, 20, 30, -10, 6, 53, 95, 99, 255),
    VTX(1000, 120, 30, -10, 1104, 53, 95, 99, 255),
    VTX(1020, 120, 30, 210, 1104, 53, 95, 99, 255),
    VTX(1020, 20, 30, 210, 6, 53, 95, 99, 255),
    VTX(1020, 20, -30, 0, 1024, 53, 95, 99, 255),
    VTX(1000, 20, -30, -220, 1024, 53, 95, 99, 255),
    VTX(1000, 20, 30, -220, 1683, 53, 95, 99, 255),
    VTX(1020, 20, 30, 0, 1683, 53, 95, 99, 255),
    VTX(-1020, 120, 30, 2560, 512, 53, 95, 99, 255),
    VTX(-1000, 120, 30, 2560, 1024, 106, 168, 174, 255),
    VTX(-1000, 20, 30, 0, 1024, 106, 168, 174, 255),
    VTX(-1020, 20, 30, 0, 512, 53, 95, 99, 255),
    VTX(-1000, 20, -30, 1536, 1024, 106, 168, 174, 255),
    VTX(-1020, 20, -30, 1536, 512, 53, 95, 99, 255),
    VTX(-1020, 120, -30, 1536, 512, 53, 95, 99, 255),
    VTX(-1000, 120, -30, 1536, 1024, 106, 168, 174, 255),
    VTX(-1000, 120, 30, 0, 1024, 106, 168, 174, 255),
    VTX(-1020, 120, 30, 0, 512, 53, 95, 99, 255),
    VTX(-1020, 20, -30, 0, 512, 53, 95, 99, 255),
    VTX(-1000, 20, -30, 0, 1024, 106, 168, 174, 255),
    VTX(-1000, 120, -30, 2560, 1024, 106, 168, 174, 255),
    VTX(-1020, 120, -30, 2560, 512, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_001200[32] = {
    VTX(0, 300, 1000, -4506, -2048, 53, 95, 99, 255),
    VTX(0, 0, 1000, -4506, 1024, 53, 95, 99, 255),
    VTX(-470, 0, 1000, -9318, 1024, 106, 168, 174, 255),
    VTX(-940, 0, 1000, -14131, 1024, 53, 95, 99, 255),
    VTX(-940, 300, 1000, -14131, -2048, 53, 95, 99, 255),
    VTX(470, 0, 1000, 307, 1024, 106, 168, 174, 255),
    VTX(940, 300, 1000, 5120, -2048, 53, 95, 99, 255),
    VTX(940, 0, 1000, 5120, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, 470, 7987, 1024, 106, 168, 174, 255),
    VTX(-1000, 140, 50, 3686, -410, 106, 168, 174, 255),
    VTX(-1000, 300, 940, 12800, -2048, 53, 95, 99, 255),
    VTX(-1000, 240, 50, 3686, -1434, 53, 95, 99, 255),
    VTX(-1000, 240, -50, 2662, -1434, 53, 95, 99, 255),
    VTX(-1000, 300, -50, 2662, -2048, 53, 95, 99, 255),
    VTX(-1000, 300, 50, 3686, -2048, 53, 95, 99, 255),
    VTX(-1000, 300, -940, -6451, -2048, 53, 95, 99, 255),
    VTX(-1000, 140, -50, 2662, -410, 106, 168, 174, 255),
    VTX(-1000, 0, -50, 2662, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, -470, -1638, 1024, 106, 168, 174, 255),
    VTX(-1000, 0, 50, 3686, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, 940, 12800, 1024, 53, 95, 99, 255),
    VTX(-1000, 0, -940, -6451, 1024, 53, 95, 99, 255),
    VTX(1000, 300, -940, -6451, -2048, 53, 95, 99, 255),
    VTX(1000, 0, -940, -6451, 1024, 53, 95, 99, 255),
    VTX(1000, 0, -575, -2714, 1024, 106, 168, 174, 255),
    VTX(1000, 300, -210, 1024, -2048, 53, 95, 99, 255),
    VTX(1000, 0, -210, 1024, 1024, 53, 95, 99, 255),
    VTX(1000, 300, 210, 5325, -2048, 53, 95, 99, 255),
    VTX(1000, 0, 210, 5325, 1024, 53, 95, 99, 255),
    VTX(1000, 0, 575, 9062, 1024, 106, 168, 174, 255),
    VTX(1000, 300, 940, 12800, -2048, 53, 95, 99, 255),
    VTX(1000, 0, 940, 12800, 1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_001400[8] = {
    VTX(470, 0, -1000, 307, 1024, 106, 168, 174, 255),
    VTX(940, 0, -1000, 5120, 1024, 53, 95, 99, 255),
    VTX(940, 300, -1000, 5120, -2048, 53, 95, 99, 255),
    VTX(0, 300, -1000, -4506, -2048, 53, 95, 99, 255),
    VTX(-470, 0, -1000, -9318, 1024, 106, 168, 174, 255),
    VTX(-940, 300, -1000, -14131, -2048, 53, 95, 99, 255),
    VTX(-940, 0, -1000, -14131, 1024, 53, 95, 99, 255),
    VTX(0, 0, -1000, -4506, 1024, 53, 95, 99, 255),
}; 

static Vtx object_blkobjVtx_001480[6] = {
    VTX(1000, 10, -1000, 1707, -2048, 62, 112, 116, 255),
    VTX(0, 10, 0, 3413, -341, 106, 168, 174, 255),
    VTX(1000, 10, 1000, 5120, -2048, 62, 112, 116, 255),
    VTX(-1000, 10, -1000, 1707, 1365, 62, 112, 116, 255),
    VTX(-1000, 10, 1000, 5120, 1365, 62, 112, 116, 255),
    VTX(0, 10, 0, 3413, -341, 106, 168, 174, 255),
}; 

Gfx gIllusionRoomNormalDL[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, ENVIRONMENT,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPDisplayList(0x08000000),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(128, 128, 255, 255, 255, 255),
    gsSPVertex(&object_blkobjVtx_000000[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_009090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000200[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 3, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 6, 8, 0),
    gsSP2Triangles(8, 6, 7, 0, 2, 1, 11, 0),
    gsSP2Triangles(11, 12, 2, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 11, 13, 0, 12, 11, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(16, 22, 23, 0, 18, 22, 16, 0),
    gsSP2Triangles(19, 23, 22, 0, 22, 20, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP2Triangles(26, 28, 24, 0, 28, 26, 29, 0),
    gsSP2Triangles(29, 26, 30, 0, 30, 31, 29, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00C090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000400[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 2, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00D090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000450[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 2, 1, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_009890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0004A0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 17, 23, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00B890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000620[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 4, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00C890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000670[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 5, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 7, 6, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00B090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000710[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 2, 4, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 5, 7, 0),
    gsSP2Triangles(7, 6, 9, 0, 8, 7, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0007B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0007F0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00A890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0009F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000A30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00A890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000A70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000AB0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00A890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000C50[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000C90[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(13, 15, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00A890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000DA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000DE0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 9, 12, 0),
    gsSP1Triangle(13, 12, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00A890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000ED0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00B090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000F20[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00A890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_000F80[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(1, 0, 3, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_001000[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&object_blkobjVtx_001200[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 0, 6, 0),
    gsSP2Triangles(1, 0, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(10, 11, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(15, 12, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(15, 16, 18, 0, 8, 19, 9, 0),
    gsSP2Triangles(8, 10, 20, 0, 18, 21, 15, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
    gsSP2Triangles(26, 25, 24, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 27, 0, 31, 30, 29, 0),
    gsSPVertex(&object_blkobjVtx_001400[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 0, 3, 7, 0),
    gsSP2Triangles(3, 5, 4, 0, 4, 7, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00D890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 14),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 15, 0, 5, 14),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_blkobjTex_00A090),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 14, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 14, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, 0, 0, 0, PRIMITIVE,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 153),
    gsSPDisplayList(0x0D000000),
    gsSPVertex(&object_blkobjVtx_001480[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 5, 0, 4, 2, 5, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001F28[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_blkobjVtx_001F30[10] = {
    VTX(-1010, -50, 0, 512, 1024, 255, 248, 195, 255),
    VTX(-1010, -100, -30, 1024, 0, 127, 127, 127, 255),
    VTX(-1010, 0, -30, 1024, 2048, 191, 217, 197, 255),
    VTX(-1010, -100, 30, 0, 0, 127, 127, 127, 255),
    VTX(-1010, 0, 30, 0, 2048, 191, 217, 197, 255),
    VTX(1010, 0, 30, 0, 2048, 191, 217, 197, 255),
    VTX(1010, 0, -30, 1024, 2048, 191, 217, 197, 255),
    VTX(1010, -50, 0, 512, 1024, 255, 248, 195, 255),
    VTX(1010, -100, 30, 0, 0, 127, 127, 127, 255),
    VTX(1010, -100, -30, 1024, 0, 127, 127, 127, 255),
}; 

static Vtx object_blkobjVtx_001FD0[62] = {
    VTX(4, 16, 18, 1769, -357, 113, 111, 110, 255),
    VTX(-5, 114, 16, 1334, -75, 134, 121, 91, 255),
    VTX(-15, 114, -2, 1346, 642, 106, 102, 43, 255),
    VTX(-10, 16, -6, 1781, 359, 134, 121, 91, 255),
    VTX(3, 185, 12, 898, 208, 113, 111, 110, 255),
    VTX(-7, 187, -3, 911, 925, 81, 81, 81, 255),
    VTX(-10, 16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(-15, 114, -2, 438, 1024, 106, 102, 43, 255),
    VTX(6, 114, -2, 438, 303, 116, 116, 107, 255),
    VTX(19, 16, -6, 0, 303, 134, 121, 91, 255),
    VTX(-7, 187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(11, 185, -4, 875, 303, 134, 121, 91, 255),
    VTX(19, 16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(6, 114, -2, 438, 1024, 116, 116, 107, 255),
    VTX(-5, 114, 16, 438, 303, 134, 121, 91, 255),
    VTX(4, 16, 18, 0, 303, 113, 111, 110, 255),
    VTX(11, 185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(3, 185, 12, 875, 303, 113, 111, 110, 255),
    VTX(13, 234, 43, 438, 303, 113, 111, 110, 255),
    VTX(17, 237, 37, 438, 1024, 134, 121, 91, 255),
    VTX(17, 237, 37, 438, 303, 134, 121, 91, 255),
    VTX(11, 240, 41, 438, 1024, 134, 121, 91, 255),
    VTX(11, 240, 41, 1346, 642, 134, 121, 91, 255),
    VTX(13, 234, 43, 1334, -75, 113, 111, 110, 255),
    VTX(56, 264, 94, 898, 208, 116, 116, 107, 255),
    VTX(56, 264, 94, 875, 1024, 116, 116, 107, 255),
    VTX(56, 264, 94, 875, 303, 116, 116, 107, 255),
    VTX(3, 225, -37, 438, 303, 134, 121, 91, 255),
    VTX(-37, 269, -89, 875, 303, 134, 121, 91, 255),
    VTX(-1, 220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-1, 220, -38, 438, 303, 113, 111, 110, 255),
    VTX(-37, 269, -89, 875, 1024, 134, 121, 91, 255),
    VTX(7, 218, -38, 438, 1024, 113, 111, 110, 255),
    VTX(7, 218, -38, 1346, 642, 113, 111, 110, 255),
    VTX(-37, 269, -89, 898, 208, 134, 121, 91, 255),
    VTX(3, 225, -37, 1334, -75, 134, 121, 91, 255),
    VTX(7, 218, -38, 438, 1024, 106, 102, 43, 255),
    VTX(56, 238, -96, 875, 303, 116, 116, 107, 255),
    VTX(3, 225, -37, 438, 303, 113, 111, 110, 255),
    VTX(-1, 220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(56, 238, -96, 875, 1024, 116, 116, 107, 255),
    VTX(7, 218, -38, 438, 303, 106, 102, 43, 255),
    VTX(3, 225, -37, 1334, -75, 113, 111, 110, 255),
    VTX(56, 238, -96, 898, 208, 116, 116, 107, 255),
    VTX(-1, 220, -38, 1346, 642, 113, 111, 110, 255),
    VTX(-7, 187, -3, 911, 925, 81, 81, 81, 255),
    VTX(3, 192, 9, 898, 208, 113, 111, 110, 255),
    VTX(11, 185, -4, 875, 303, 134, 121, 91, 255),
    VTX(-7, 187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(3, 192, 9, 875, 303, 113, 111, 110, 255),
    VTX(11, 185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(-30, 182, 22, 438, 1024, 106, 102, 43, 255),
    VTX(-80, 196, 49, 875, 303, 134, 121, 91, 255),
    VTX(-35, 174, 15, 438, 303, 113, 111, 110, 255),
    VTX(-29, 184, 14, 438, 1024, 134, 121, 91, 255),
    VTX(-80, 196, 49, 875, 1024, 81, 81, 81, 255),
    VTX(-30, 182, 22, 438, 303, 106, 102, 43, 255),
    VTX(-35, 174, 15, 1334, -75, 113, 111, 110, 255),
    VTX(-80, 196, 49, 898, 208, 134, 121, 91, 255),
    VTX(-29, 184, 14, 1346, 642, 134, 121, 91, 255),
    VTX(7, 164, 1, 911, 925, 81, 81, 81, 255),
    VTX(-7, 157, 1, 898, 208, 113, 111, 110, 255),
}; 

static Vtx object_blkobjVtx_0023B0[32] = {
    VTX(-30, 182, 22, 438, 303, 106, 102, 43, 255),
    VTX(7, 164, 1, 875, 1024, 81, 81, 81, 255),
    VTX(-29, 184, 14, 438, 1024, 134, 121, 91, 255),
    VTX(1, 160, 12, 875, 303, 134, 121, 91, 255),
    VTX(-7, 157, 1, 875, 303, 113, 111, 110, 255),
    VTX(1, 160, 12, 875, 1024, 134, 121, 91, 255),
    VTX(-30, 182, 22, 438, 1024, 106, 102, 43, 255),
    VTX(-35, 174, 15, 438, 303, 113, 111, 110, 255),
    VTX(-10, -16, -6, 1781, 359, 134, 121, 91, 255),
    VTX(-15, -114, -2, 1346, 642, 106, 102, 43, 255),
    VTX(-5, -114, 16, 1334, -75, 134, 121, 91, 255),
    VTX(4, -16, 18, 1769, -357, 113, 111, 110, 255),
    VTX(3, -185, 12, 898, 208, 113, 111, 110, 255),
    VTX(-7, -187, -3, 911, 925, 81, 81, 81, 255),
    VTX(19, -16, -6, 0, 303, 134, 121, 91, 255),
    VTX(6, -114, -2, 438, 303, 116, 116, 107, 255),
    VTX(-15, -114, -2, 438, 1024, 106, 102, 43, 255),
    VTX(-10, -16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(-7, -187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(11, -185, -4, 875, 303, 134, 121, 91, 255),
    VTX(4, -16, 18, 0, 303, 113, 111, 110, 255),
    VTX(-5, -114, 16, 438, 303, 134, 121, 91, 255),
    VTX(6, -114, -2, 438, 1024, 116, 116, 107, 255),
    VTX(19, -16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(3, -185, 12, 875, 303, 113, 111, 110, 255),
    VTX(11, -185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(17, -237, 37, 438, 1024, 134, 121, 91, 255),
    VTX(13, -234, 43, 438, 303, 113, 111, 110, 255),
    VTX(11, -240, 41, 438, 1024, 134, 121, 91, 255),
    VTX(17, -237, 37, 438, 303, 134, 121, 91, 255),
    VTX(13, -234, 43, 1334, -75, 113, 111, 110, 255),
    VTX(11, -240, 41, 1346, 642, 134, 121, 91, 255),
}; 

static Vtx object_blkobjVtx_0025B0[50] = {
    VTX(11, -240, 41, 1346, 642, 134, 121, 91, 255),
    VTX(56, -264, 94, 898, 208, 116, 116, 107, 255),
    VTX(13, -234, 43, 1334, -75, 113, 111, 110, 255),
    VTX(17, -237, 37, 438, 303, 134, 121, 91, 255),
    VTX(56, -264, 94, 875, 1024, 116, 116, 107, 255),
    VTX(11, -240, 41, 438, 1024, 134, 121, 91, 255),
    VTX(13, -234, 43, 438, 303, 113, 111, 110, 255),
    VTX(56, -264, 94, 875, 303, 116, 116, 107, 255),
    VTX(17, -237, 37, 438, 1024, 134, 121, 91, 255),
    VTX(-1, -220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-37, -269, -89, 875, 303, 134, 121, 91, 255),
    VTX(3, -225, -37, 438, 303, 134, 121, 91, 255),
    VTX(7, -218, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-37, -269, -89, 875, 1024, 134, 121, 91, 255),
    VTX(-1, -220, -38, 438, 303, 113, 111, 110, 255),
    VTX(3, -225, -37, 1334, -75, 134, 121, 91, 255),
    VTX(-37, -269, -89, 898, 208, 134, 121, 91, 255),
    VTX(7, -218, -38, 1346, 642, 113, 111, 110, 255),
    VTX(3, -225, -37, 438, 303, 113, 111, 110, 255),
    VTX(56, -238, -96, 875, 303, 116, 116, 107, 255),
    VTX(7, -218, -38, 438, 1024, 106, 102, 43, 255),
    VTX(7, -218, -38, 438, 303, 106, 102, 43, 255),
    VTX(56, -238, -96, 875, 1024, 116, 116, 107, 255),
    VTX(-1, -220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-1, -220, -38, 1346, 642, 113, 111, 110, 255),
    VTX(56, -238, -96, 898, 208, 116, 116, 107, 255),
    VTX(3, -225, -37, 1334, -75, 113, 111, 110, 255),
    VTX(3, -192, 9, 898, 208, 113, 111, 110, 255),
    VTX(-7, -187, -3, 911, 925, 81, 81, 81, 255),
    VTX(-7, -187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(11, -185, -4, 875, 303, 134, 121, 91, 255),
    VTX(7, -218, -38, 438, 1024, 106, 102, 43, 255),
    VTX(11, -185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(3, -192, 9, 875, 303, 113, 111, 110, 255),
    VTX(3, -225, -37, 438, 303, 113, 111, 110, 255),
    VTX(-35, -174, 15, 438, 303, 113, 111, 110, 255),
    VTX(-80, -196, 49, 875, 303, 134, 121, 91, 255),
    VTX(-30, -182, 22, 438, 1024, 106, 102, 43, 255),
    VTX(-30, -182, 22, 438, 303, 106, 102, 43, 255),
    VTX(-80, -196, 49, 875, 1024, 81, 81, 81, 255),
    VTX(-29, -184, 14, 438, 1024, 134, 121, 91, 255),
    VTX(-29, -184, 14, 1346, 642, 134, 121, 91, 255),
    VTX(-80, -196, 49, 898, 208, 134, 121, 91, 255),
    VTX(-35, -174, 15, 1334, -75, 113, 111, 110, 255),
    VTX(-7, -157, 1, 898, 208, 113, 111, 110, 255),
    VTX(7, -164, 1, 911, 925, 81, 81, 81, 255),
    VTX(7, -164, 1, 875, 1024, 81, 81, 81, 255),
    VTX(1, -160, 12, 875, 303, 134, 121, 91, 255),
    VTX(1, -160, 12, 875, 1024, 134, 121, 91, 255),
    VTX(-7, -157, 1, 875, 303, 113, 111, 110, 255),
}; 

static Vtx object_blkobjVtx_0028D0[26] = {
    VTX(717, 10, 10, -5522, -5182, 116, 116, 107, 255),
    VTX(779, 10, 253, -3983, -7784, 116, 116, 107, 255),
    VTX(820, 20, 210, -4693, -7765, 189, 187, 186, 255),
    VTX(820, 20, -210, -8277, -4181, 189, 187, 186, 255),
    VTX(900, 10, -290, -9643, -4181, 116, 116, 107, 255),
    VTX(780, 10, -250, -8277, -3499, 116, 116, 107, 255),
    VTX(1000, 20, -210, -9813, -5717, 116, 116, 107, 255),
    VTX(768, 0, -270, -8344, -3225, 116, 116, 107, 255),
    VTX(698, 0, 10, -5357, -5017, 116, 116, 107, 255),
    VTX(898, 0, -310, -9794, -3993, 116, 116, 107, 255),
    VTX(1008, 0, -260, -10306, -5358, 116, 116, 107, 255),
    VTX(1068, 0, -220, -10477, -6212, 116, 116, 107, 255),
    VTX(748, 0, 250, -3736, -7492, 116, 116, 107, 255),
    VTX(808, 0, 290, -3906, -8345, 116, 116, 107, 255),
    VTX(898, 0, 310, -4504, -9284, 116, 116, 107, 255),
    VTX(900, 10, 290, -4693, -9131, 116, 116, 107, 255),
    VTX(1038, 0, 260, -6125, -10052, 116, 116, 107, 255),
    VTX(999, 10, 243, -5938, -9579, 116, 116, 107, 255),
    VTX(1020, 20, 30, -7936, -7936, 116, 116, 107, 255),
    VTX(1068, 0, 50, -8173, -8516, 116, 116, 107, 255),
    VTX(1020, 20, -30, -8448, -7424, 116, 116, 107, 255),
    VTX(1030, 20, -210, -10069, -5973, 116, 116, 107, 255),
    VTX(1000, 20, -30, -8277, -7253, 116, 116, 107, 255),
    VTX(1030, 20, 210, -6485, -9557, 116, 116, 107, 255),
    VTX(1000, 20, 30, -7765, -7765, 116, 116, 107, 255),
    VTX(1000, 20, 210, -6229, -9301, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_002A70[12] = {
    VTX(1038, 0, 260, -6125, -10052, 116, 116, 107, 255),
    VTX(1055, 0, 210, -6695, -9767, 116, 116, 107, 255),
    VTX(1030, 20, 210, -6485, -9557, 116, 116, 107, 255),
    VTX(999, 10, 243, -5938, -9579, 116, 116, 107, 255),
    VTX(1000, 20, 210, -6229, -9301, 116, 116, 107, 255),
    VTX(1068, 0, 50, -8173, -8516, 116, 116, 107, 255),
    VTX(-1030, 20, 90, 10069, 9045, 116, 116, 107, 255),
    VTX(-1068, 0, 50, 10052, 9709, 116, 116, 107, 255),
    VTX(-1055, 0, 90, 10279, 9255, 116, 116, 107, 255),
    VTX(-999, 10, 123, 10091, 8498, 116, 116, 107, 255),
    VTX(-1000, 20, 90, 9813, 8789, 116, 116, 107, 255),
    VTX(-1038, 0, 140, 10564, 8685, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_002B30[32] = {
    VTX(-900, 10, 170, 9643, 7253, 116, 116, 107, 255),
    VTX(-779, 10, 133, 8296, 6543, 116, 116, 107, 255),
    VTX(-820, 20, 90, 8277, 7253, 189, 187, 186, 255),
    VTX(-999, 10, 123, 10091, 8498, 116, 116, 107, 255),
    VTX(-1000, 20, 90, 9813, 8789, 116, 116, 107, 255),
    VTX(-1000, 20, 30, 9301, 9301, 116, 116, 107, 255),
    VTX(-1020, 20, 30, 9472, 9472, 116, 116, 107, 255),
    VTX(-1030, 20, 90, 10069, 9045, 116, 116, 107, 255),
    VTX(-1068, 0, 50, 10052, 9709, 116, 116, 107, 255),
    VTX(-1030, 20, -90, 8533, 10581, 116, 116, 107, 255),
    VTX(-1000, 20, -90, 8277, 10325, 116, 116, 107, 255),
    VTX(-1068, 0, -100, 8772, 10989, 116, 116, 107, 255),
    VTX(-1020, 20, -30, 8960, 9984, 116, 116, 107, 255),
    VTX(-1000, 20, -30, 8789, 9813, 116, 116, 107, 255),
    VTX(-1038, 0, 140, 10564, 8685, 116, 116, 107, 255),
    VTX(-898, 0, 190, 9796, 7064, 116, 116, 107, 255),
    VTX(-808, 0, 170, 8857, 6466, 116, 116, 107, 255),
    VTX(-748, 0, 130, 8004, 6296, 116, 116, 107, 255),
    VTX(-717, 10, 10, 6718, 7058, 116, 116, 107, 255),
    VTX(-698, 0, 10, 6553, 6893, 116, 116, 107, 255),
    VTX(-900, 10, -170, 6741, 10155, 116, 116, 107, 255),
    VTX(-898, 0, -190, 6553, 10306, 116, 116, 107, 255),
    VTX(-1008, 0, -140, 7918, 10818, 116, 116, 107, 255),
    VTX(-768, 0, -150, 5785, 8856, 116, 116, 107, 255),
    VTX(-780, 10, -130, 6059, 8789, 116, 116, 107, 255),
    VTX(91, 10, 91, 512, -521, 116, 116, 107, 255),
    VTX(102, 10, -13, -471, 259, 116, 116, 107, 255),
    VTX(0, 20, 0, 512, 1024, 189, 187, 186, 255),
    VTX(0, 10, 128, 1604, -68, 116, 116, 107, 255),
    VTX(-62, 10, 88, 1793, 806, 116, 116, 107, 255),
    VTX(-109, 10, 0, 1440, 1952, 116, 116, 107, 255),
    VTX(-84, 10, -71, 621, 2350, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_002D30[24] = {
    VTX(0, 10, -128, -580, 2116, 116, 116, 107, 255),
    VTX(-84, 10, -71, 621, 2350, 116, 116, 107, 255),
    VTX(0, 20, 0, 512, 1024, 189, 187, 186, 255),
    VTX(91, 10, -91, -1033, 1024, 116, 116, 107, 255),
    VTX(102, 10, -13, -471, 259, 116, 116, 107, 255),
    VTX(-717, 10, 10, 6718, 7058, 116, 116, 107, 255),
    VTX(-780, 10, -130, 6059, 8789, 116, 116, 107, 255),
    VTX(-820, 20, -90, 6741, 8789, 189, 187, 186, 255),
    VTX(-900, 10, -170, 6741, 10155, 116, 116, 107, 255),
    VTX(-1000, 20, -90, 8277, 10325, 116, 116, 107, 255),
    VTX(-820, 20, 90, 8277, 7253, 189, 187, 186, 255),
    VTX(-779, 10, 133, 8296, 6543, 116, 116, 107, 255),
    VTX(122, 0, -13, -640, 90, 116, 116, 107, 255),
    VTX(91, 10, 91, 512, -521, 116, 116, 107, 255),
    VTX(105, 0, 105, 512, -760, 116, 116, 107, 255),
    VTX(0, 10, 128, 1604, -68, 116, 116, 107, 255),
    VTX(0, 0, 148, 1774, -238, 116, 116, 107, 255),
    VTX(-62, 10, 88, 1793, 806, 116, 116, 107, 255),
    VTX(-75, 0, 100, 2008, 806, 116, 116, 107, 255),
    VTX(-109, 10, 0, 1440, 1952, 116, 116, 107, 255),
    VTX(-129, 0, 0, 1610, 2122, 116, 116, 107, 255),
    VTX(-98, 0, -85, 621, 2590, 116, 116, 107, 255),
    VTX(0, 0, -148, -750, 2286, 116, 116, 107, 255),
    VTX(109, 0, -109, -1341, 1024, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_002EB0[7] = {
    VTX(-1020, 20, 30, 0, 1024, 116, 116, 107, 255),
    VTX(-1000, 20, 30, 1024, 1024, 179, 179, 179, 255),
    VTX(-1000, 20, -30, 1024, -2048, 135, 135, 135, 255),
    VTX(-1020, 20, -30, 0, -2048, 116, 116, 107, 255),
    VTX(-1000, 20, 60, 1024, 1024, 255, 248, 195, 255),
    VTX(-1000, 260, 90, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 20, 90, 0, 1024, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_002F20[3] = {
    VTX(-1000, 320, 150, -1536, -1024, 135, 135, 135, 255),
    VTX(-1000, 260, 90, 0, 1024, 135, 135, 135, 255),
    VTX(-1000, 260, 0, 2304, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_002F50[4] = {
    VTX(-1000, 260, 60, 0, -1024, 255, 248, 195, 255),
    VTX(-1000, 120, 30, 512, 1024, 255, 255, 255, 255),
    VTX(-1000, 120, -30, 1536, 1024, 135, 135, 135, 255),
    VTX(-1000, 260, -60, 2048, -1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_002F90[4] = {
    VTX(-1000, 320, -150, 6144, -1024, 255, 255, 255, 255),
    VTX(-1000, 320, 150, -1536, -1024, 135, 135, 135, 255),
    VTX(-1000, 260, 0, 2304, 1024, 255, 248, 195, 255),
    VTX(-1000, 260, -90, 4608, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_002FD0[5] = {
    VTX(-910, 20, 0, 1229, 512, 255, 255, 255, 255),
    VTX(-820, 20, 90, 0, 1126, 116, 116, 107, 255),
    VTX(-820, 20, -90, 0, -102, 116, 116, 107, 255),
    VTX(-1000, 20, -90, 2458, -102, 116, 116, 107, 255),
    VTX(-1000, 20, 90, 2458, 1126, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_003020[14] = {
    VTX(-1000, 120, -30, 1536, 1024, 135, 135, 135, 255),
    VTX(-1000, 120, -60, 2048, 1024, 255, 255, 255, 255),
    VTX(-1000, 260, -60, 2048, -1024, 255, 248, 195, 255),
    VTX(-1000, 120, -60, 0, -1024, 255, 255, 255, 255),
    VTX(-1000, 120, -30, 341, -1024, 135, 135, 135, 255),
    VTX(-1000, 20, -30, 341, 1024, 135, 135, 135, 255),
    VTX(-1000, 20, -60, 0, 1024, 179, 179, 179, 255),
    VTX(-1000, 120, 30, 512, 1024, 255, 255, 255, 255),
    VTX(-1000, 260, 60, 0, -1024, 255, 248, 195, 255),
    VTX(-1000, 120, 60, 0, 1024, 255, 248, 195, 255),
    VTX(-1000, 120, 60, 2048, -1024, 255, 248, 195, 255),
    VTX(-1000, 20, 60, 2048, 1024, 255, 248, 195, 255),
    VTX(-1000, 20, 30, 1707, 1024, 179, 179, 179, 255),
    VTX(-1000, 120, 30, 1707, -1024, 255, 255, 255, 255),
}; 

static Vtx object_blkobjVtx_003100[23] = {
    VTX(-1020, 120, -30, 0, -2048, 135, 135, 135, 255),
    VTX(-1000, 120, 30, 1024, 1024, 255, 255, 255, 255),
    VTX(-1020, 120, 30, 0, 1024, 127, 127, 127, 255),
    VTX(-1000, 120, -30, 1024, -2048, 135, 135, 135, 255),
    VTX(-1020, 20, -30, 1024, 1024, 116, 116, 107, 255),
    VTX(-1000, 20, -30, 0, 1024, 135, 135, 135, 255),
    VTX(-1000, 120, -30, 0, -4096, 135, 135, 135, 255),
    VTX(-1020, 120, -30, 1024, -4096, 135, 135, 135, 255),
    VTX(-1020, 20, 30, 1024, 1024, 116, 116, 107, 255),
    VTX(-1020, 120, 30, 1024, -4096, 127, 127, 127, 255),
    VTX(-1000, 120, 30, 0, -4096, 255, 255, 255, 255),
    VTX(-1000, 20, 30, 0, 1024, 179, 179, 179, 255),
    VTX(-1000, 260, -90, 1024, -4096, 255, 248, 195, 255),
    VTX(-1000, 20, -60, 0, 1024, 179, 179, 179, 255),
    VTX(-1000, 20, -90, 1024, 1024, 116, 116, 107, 255),
    VTX(-1000, 260, -60, 0, -4096, 255, 248, 195, 255),
    VTX(-1000, 20, 60, 1024, 1024, 255, 248, 195, 255),
    VTX(-1000, 260, 60, 1024, -4096, 255, 248, 195, 255),
    VTX(-1000, 260, 90, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 20, 90, 1024, 1024, 255, 248, 195, 255),
    VTX(-1030, 260, 90, 0, -4096, 135, 135, 135, 255),
    VTX(-1030, 20, 90, 0, 1024, 116, 116, 107, 255),
    VTX(-1000, 260, 90, 1024, -4096, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_003270[8] = {
    VTX(-1030, 260, 90, 3072, 1024, 135, 135, 135, 255),
    VTX(-1000, 260, 90, 2304, 1024, 135, 135, 135, 255),
    VTX(-1000, 320, 150, 2304, -1024, 116, 116, 107, 255),
    VTX(-1030, 320, 150, 3072, -1024, 163, 163, 163, 255),
    VTX(-1030, 320, -150, 3072, -1024, 163, 163, 163, 255),
    VTX(-1000, 320, -150, 2304, -1024, 116, 116, 107, 255),
    VTX(-1000, 260, -90, 2304, 1024, 135, 135, 135, 255),
    VTX(-1030, 260, -90, 3072, 1024, 135, 135, 135, 255),
}; 

static Vtx object_blkobjVtx_0032F0[11] = {
    VTX(-1030, 260, -90, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 260, -90, 1024, -4096, 255, 248, 195, 255),
    VTX(-1000, 20, -90, 1024, 1024, 255, 248, 195, 255),
    VTX(-1030, 20, -90, 0, 1024, 116, 116, 107, 255),
    VTX(-1030, 320, -150, 0, 1024, 116, 116, 107, 255),
    VTX(-1030, 320, 150, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 320, -150, 1024, 1024, 255, 248, 195, 255),
    VTX(-1000, 320, 150, 1024, -4096, 255, 248, 195, 255),
    VTX(-1000, 0, 90, 0, 1024, 116, 116, 107, 255),
    VTX(-1000, -240, 90, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 0, 60, 1024, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_0033A0[3] = {
    VTX(-1000, -240, 0, 2304, 1024, 255, 248, 195, 255),
    VTX(-1000, -240, 90, 0, 1024, 135, 135, 135, 255),
    VTX(-1000, -300, 150, -1536, -1024, 135, 135, 135, 255),
}; 

static Vtx object_blkobjVtx_0033D0[4] = {
    VTX(-1000, -240, -60, 2048, -1024, 255, 248, 195, 255),
    VTX(-1000, -100, -30, 1536, 1024, 135, 135, 135, 255),
    VTX(-1000, -100, 30, 512, 1024, 255, 255, 255, 255),
    VTX(-1000, -240, 60, 0, -1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_003410[4] = {
    VTX(-1000, -240, 0, 2304, 1024, 255, 248, 195, 255),
    VTX(-1000, -300, 150, -1536, -1024, 135, 135, 135, 255),
    VTX(-1000, -300, -150, 6144, -1024, 255, 255, 255, 255),
    VTX(-1000, -240, -90, 4608, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_003450[14] = {
    VTX(-1000, -240, -60, 2048, -1024, 255, 248, 195, 255),
    VTX(-1000, -100, -60, 2048, 1024, 255, 255, 255, 255),
    VTX(-1000, -100, -30, 1536, 1024, 135, 135, 135, 255),
    VTX(-1000, 0, -60, 0, 1024, 179, 179, 179, 255),
    VTX(-1000, 0, -30, 341, 1024, 135, 135, 135, 255),
    VTX(-1000, -100, -30, 341, -1024, 135, 135, 135, 255),
    VTX(-1000, -100, -60, 0, -1024, 255, 255, 255, 255),
    VTX(-1000, -100, 60, 0, 1024, 255, 248, 195, 255),
    VTX(-1000, -240, 60, 0, -1024, 255, 248, 195, 255),
    VTX(-1000, -100, 30, 512, 1024, 255, 255, 255, 255),
    VTX(-1000, -100, 30, 1707, -1024, 255, 255, 255, 255),
    VTX(-1000, 0, 30, 1707, 1024, 179, 179, 179, 255),
    VTX(-1000, 0, 60, 2048, 1024, 255, 248, 195, 255),
    VTX(-1000, -100, 60, 2048, -1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_003530[23] = {
    VTX(-1020, -100, 30, 0, 1024, 127, 127, 127, 255),
    VTX(-1000, -100, 30, 1024, 1024, 255, 255, 255, 255),
    VTX(-1020, -100, -30, 0, -2048, 135, 135, 135, 255),
    VTX(-1000, -100, -30, 1024, -2048, 135, 135, 135, 255),
    VTX(-1020, -100, -30, 1024, -4096, 135, 135, 135, 255),
    VTX(-1000, -100, -30, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 0, -30, 0, 1024, 135, 135, 135, 255),
    VTX(-1020, 0, -30, 1024, 1024, 116, 116, 107, 255),
    VTX(-1000, 0, 30, 0, 1024, 179, 179, 179, 255),
    VTX(-1000, -100, 30, 0, -4096, 255, 255, 255, 255),
    VTX(-1020, -100, 30, 1024, -4096, 127, 127, 127, 255),
    VTX(-1020, 0, 30, 1024, 1024, 116, 116, 107, 255),
    VTX(-1000, 0, -90, 1024, 1024, 116, 116, 107, 255),
    VTX(-1000, 0, -60, 0, 1024, 179, 179, 179, 255),
    VTX(-1000, -240, -90, 1024, -4096, 255, 248, 195, 255),
    VTX(-1000, -240, -60, 0, -4096, 255, 248, 195, 255),
    VTX(-1000, -240, 90, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, -240, 60, 1024, -4096, 255, 248, 195, 255),
    VTX(-1000, 0, 60, 1024, 1024, 255, 248, 195, 255),
    VTX(-1030, 0, 90, 0, 1024, 116, 116, 107, 255),
    VTX(-1030, -240, 90, 0, -4096, 135, 135, 135, 255),
    VTX(-1000, 0, 90, 1024, 1024, 255, 248, 195, 255),
    VTX(-1000, -240, 90, 1024, -4096, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_0036A0[8] = {
    VTX(-1030, -300, 150, 3072, -1024, 163, 163, 163, 255),
    VTX(-1000, -300, 150, 2304, -1024, 116, 116, 107, 255),
    VTX(-1000, -240, 90, 2304, 1024, 135, 135, 135, 255),
    VTX(-1030, -240, 90, 3072, 1024, 135, 135, 135, 255),
    VTX(-1030, -240, -90, 3072, 1024, 135, 135, 135, 255),
    VTX(-1000, -240, -90, 2304, 1024, 135, 135, 135, 255),
    VTX(-1000, -300, -150, 2304, -1024, 116, 116, 107, 255),
    VTX(-1030, -300, -150, 3072, -1024, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_003720[4] = {
    VTX(-1000, 0, -90, 1024, 1024, 255, 248, 195, 255),
    VTX(-1000, -240, -90, 1024, -4096, 255, 248, 195, 255),
    VTX(-1030, -240, -90, 0, -4096, 135, 135, 135, 255),
    VTX(-1030, 0, -90, 0, 1024, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_003760[14] = {
    VTX(1000, 260, -60, 2048, -1024, 135, 135, 135, 255),
    VTX(1000, 120, -30, 1536, 1024, 193, 190, 142, 255),
    VTX(1000, 120, 30, 512, 1024, 255, 255, 255, 255),
    VTX(1000, 260, 60, 0, -1024, 135, 135, 135, 255),
    VTX(1000, 120, 60, 0, 1024, 255, 248, 195, 255),
    VTX(1000, 120, 30, 1707, -1024, 255, 255, 255, 255),
    VTX(1000, 20, 30, 1707, 1024, 179, 179, 179, 255),
    VTX(1000, 20, 60, 2048, 1024, 255, 248, 195, 255),
    VTX(1000, 120, 60, 2048, -1024, 255, 248, 195, 255),
    VTX(1000, 120, -60, 2048, 1024, 216, 216, 216, 255),
    VTX(1000, 20, -60, 0, 1024, 163, 163, 163, 255),
    VTX(1000, 20, -30, 341, 1024, 135, 135, 135, 255),
    VTX(1000, 120, -30, 341, -1024, 193, 190, 142, 255),
    VTX(1000, 120, -60, 0, -1024, 216, 216, 216, 255),
}; 

static Vtx object_blkobjVtx_003840[19] = {
    VTX(1020, 120, 30, 0, 1024, 81, 81, 81, 255),
    VTX(1000, 120, 30, 1024, 1024, 163, 163, 163, 255),
    VTX(1020, 120, -30, 0, -2048, 81, 81, 81, 255),
    VTX(1000, 120, -30, 1024, -2048, 193, 190, 142, 255),
    VTX(1020, 120, -30, 1024, -4096, 81, 81, 81, 255),
    VTX(1000, 120, -30, 0, -4096, 193, 190, 142, 255),
    VTX(1000, 20, -30, 0, 1024, 255, 248, 195, 255),
    VTX(1020, 20, -30, 1024, 1024, 81, 81, 81, 255),
    VTX(1000, 20, 30, 0, 1024, 255, 248, 195, 255),
    VTX(1000, 120, 30, 0, -4096, 163, 163, 163, 255),
    VTX(1020, 120, 30, 1024, -4096, 81, 81, 81, 255),
    VTX(1020, 20, 30, 1024, 1024, 81, 81, 81, 255),
    VTX(1000, 20, 180, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, 260, 210, 0, -4096, 63, 63, 63, 255),
    VTX(1000, 260, 180, 1024, -4096, 163, 163, 163, 255),
    VTX(1000, 20, 210, 0, 1024, 63, 63, 63, 255),
    VTX(1000, 20, -180, 0, 1024, 255, 248, 195, 255),
    VTX(1000, 260, -180, 0, -4096, 163, 163, 163, 255),
    VTX(1000, 260, -210, 1024, -4096, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_003970[8] = {
    VTX(1000, 140, 60, 3940, -1024, 193, 190, 142, 255),
    VTX(1000, 20, 60, 3940, 1024, 255, 248, 195, 255),
    VTX(1000, 20, 180, 138, 1024, 255, 248, 195, 255),
    VTX(1000, 140, 180, 138, -1024, 255, 248, 195, 255),
    VTX(1000, 140, -180, 3940, -1024, 193, 190, 142, 255),
    VTX(1000, 20, -180, 3940, 1024, 255, 248, 195, 255),
    VTX(1000, 20, -60, 138, 1024, 216, 216, 216, 255),
    VTX(1000, 140, -60, 138, -1024, 216, 216, 216, 255),
}; 

static Vtx object_blkobjVtx_0039F0[8] = {
    VTX(1000, 140, 60, 2048, -1024, 193, 190, 142, 255),
    VTX(1000, 140, 180, 0, -1024, 255, 248, 195, 255),
    VTX(1000, 260, 180, 0, -3072, 255, 248, 195, 255),
    VTX(1000, 260, 60, 2048, -3072, 163, 163, 163, 255),
    VTX(1000, 140, -180, 2048, -1024, 193, 190, 142, 255),
    VTX(1000, 140, -60, 0, -1024, 216, 216, 216, 255),
    VTX(1000, 260, -60, 0, -3072, 163, 163, 163, 255),
    VTX(1000, 260, -180, 2048, -3072, 193, 190, 142, 255),
}; 

static Vtx object_blkobjVtx_003A70[5] = {
    VTX(1000, 280, 270, 0, 1024, 193, 190, 142, 255),
    VTX(1000, 340, 270, 0, -1024, 163, 163, 163, 255),
    VTX(1000, 280, 0, 6144, 1024, 163, 163, 163, 255),
    VTX(1000, 340, -270, 12288, -1024, 163, 163, 163, 255),
    VTX(1000, 280, -270, 12288, 1024, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_003AC0[5] = {
    VTX(1000, 260, 210, -512, 512, 135, 135, 135, 255),
    VTX(1000, 280, 270, -2048, 0, 193, 190, 142, 255),
    VTX(1000, 280, 0, 4864, 0, 163, 163, 163, 255),
    VTX(1000, 280, -270, 11776, 0, 163, 163, 163, 255),
    VTX(1000, 260, -210, 10240, 512, 135, 135, 135, 255),
}; 

static Vtx object_blkobjVtx_003B10[11] = {
    VTX(1000, 20, -210, 1024, 1024, 163, 163, 163, 255),
    VTX(1000, 20, -180, 0, 1024, 255, 248, 195, 255),
    VTX(1000, 260, -210, 1024, -4096, 163, 163, 163, 255),
    VTX(1020, 20, -30, 0, -2048, 81, 81, 81, 255),
    VTX(1000, 20, -30, 1024, -2048, 255, 248, 195, 255),
    VTX(1000, 20, 30, 1024, 1024, 176, 138, 17, 255),
    VTX(1020, 20, 30, 0, 1024, 81, 81, 81, 255),
    VTX(1000, 280, -270, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 340, -270, 0, 0, 135, 135, 135, 255),
    VTX(1030, 280, -270, 0, 1024, 116, 116, 107, 255),
    VTX(1000, 340, -270, 1024, 0, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_003BC0[4] = {
    VTX(1000, 260, -210, 2304, 0, 116, 116, 107, 255),
    VTX(1000, 280, -270, 2304, 785, 135, 135, 135, 255),
    VTX(1030, 280, -270, 3072, 785, 135, 135, 135, 255),
    VTX(1030, 260, -210, 3072, 0, 135, 135, 135, 255),
}; 

static Vtx object_blkobjVtx_003C00[4] = {
    VTX(1030, 340, 270, 0, 0, 135, 135, 135, 255),
    VTX(1000, 340, 270, 1024, 0, 255, 248, 195, 255),
    VTX(1000, 280, 270, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 280, 270, 0, 1024, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_003C40[4] = {
    VTX(1030, 260, 210, 3072, 0, 135, 135, 135, 255),
    VTX(1030, 280, 270, 3072, 785, 135, 135, 135, 255),
    VTX(1000, 280, 270, 2304, 785, 135, 135, 135, 255),
    VTX(1000, 260, 210, 2304, 0, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_003C80[17] = {
    VTX(1000, 340, -270, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, 340, 270, 1024, -9216, 255, 248, 195, 255),
    VTX(1030, 340, 270, 0, -9216, 135, 135, 135, 255),
    VTX(1030, 340, -270, 0, 1024, 116, 116, 107, 255),
    VTX(1000, 20, -210, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 260, -210, 0, -4096, 135, 135, 135, 255),
    VTX(1030, 20, -210, 0, 1024, 116, 116, 107, 255),
    VTX(1000, 260, -210, 1024, -4096, 255, 248, 195, 255),
    VTX(1030, 260, 210, 0, -4096, 135, 135, 135, 255),
    VTX(1000, 260, 210, 1024, -4096, 255, 248, 195, 255),
    VTX(1000, 20, 210, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 20, 210, 0, 1024, 116, 116, 107, 255),
    VTX(1000, 20, -210, -171, 1024, 116, 116, 107, 255),
    VTX(910, 20, 0, 1621, 448, 255, 255, 255, 255),
    VTX(1000, 20, 210, 3413, 1024, 116, 116, 107, 255),
    VTX(820, 20, 210, 3413, -128, 116, 116, 107, 255),
    VTX(820, 20, -210, -171, -128, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_003D90[14] = {
    VTX(1000, -240, 60, 0, -1024, 135, 135, 135, 255),
    VTX(1000, -100, 30, 512, 1024, 255, 255, 255, 255),
    VTX(1000, -100, -30, 1536, 1024, 193, 190, 142, 255),
    VTX(1000, -240, -60, 2048, -1024, 135, 135, 135, 255),
    VTX(1000, -100, 60, 0, 1024, 255, 248, 195, 255),
    VTX(1000, -100, 60, 2048, -1024, 255, 248, 195, 255),
    VTX(1000, 0, 60, 2048, 1024, 255, 248, 195, 255),
    VTX(1000, 0, 30, 1707, 1024, 179, 179, 179, 255),
    VTX(1000, -100, 30, 1707, -1024, 255, 255, 255, 255),
    VTX(1000, -100, -60, 2048, 1024, 216, 216, 216, 255),
    VTX(1000, -100, -60, 0, -1024, 216, 216, 216, 255),
    VTX(1000, -100, -30, 341, -1024, 193, 190, 142, 255),
    VTX(1000, 0, -30, 341, 1024, 135, 135, 135, 255),
    VTX(1000, 0, -60, 0, 1024, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_003E70[19] = {
    VTX(1020, -100, -30, 0, -2048, 81, 81, 81, 255),
    VTX(1000, -100, 30, 1024, 1024, 163, 163, 163, 255),
    VTX(1020, -100, 30, 0, 1024, 81, 81, 81, 255),
    VTX(1000, -100, -30, 1024, -2048, 193, 190, 142, 255),
    VTX(1020, 0, -30, 1024, 1024, 81, 81, 81, 255),
    VTX(1000, 0, -30, 0, 1024, 255, 248, 195, 255),
    VTX(1000, -100, -30, 0, -4096, 193, 190, 142, 255),
    VTX(1020, -100, -30, 1024, -4096, 81, 81, 81, 255),
    VTX(1020, 0, 30, 1024, 1024, 81, 81, 81, 255),
    VTX(1020, -100, 30, 1024, -4096, 81, 81, 81, 255),
    VTX(1000, -100, 30, 0, -4096, 163, 163, 163, 255),
    VTX(1000, 0, 30, 0, 1024, 255, 248, 195, 255),
    VTX(1000, -240, 180, 1024, -4096, 163, 163, 163, 255),
    VTX(1000, -240, 210, 0, -4096, 63, 63, 63, 255),
    VTX(1000, 0, 180, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, 0, 210, 0, 1024, 63, 63, 63, 255),
    VTX(1000, -240, -210, 1024, -4096, 163, 163, 163, 255),
    VTX(1000, -240, -180, 0, -4096, 163, 163, 163, 255),
    VTX(1000, 0, -180, 0, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_003FA0[8] = {
    VTX(1000, -120, 180, 138, -1024, 255, 248, 195, 255),
    VTX(1000, 0, 180, 138, 1024, 255, 248, 195, 255),
    VTX(1000, 0, 60, 3940, 1024, 255, 248, 195, 255),
    VTX(1000, -120, 60, 3940, -1024, 193, 190, 142, 255),
    VTX(1000, -120, -60, 138, -1024, 216, 216, 216, 255),
    VTX(1000, 0, -60, 138, 1024, 216, 216, 216, 255),
    VTX(1000, 0, -180, 3940, 1024, 255, 248, 195, 255),
    VTX(1000, -120, -180, 3940, -1024, 193, 190, 142, 255),
}; 

static Vtx object_blkobjVtx_004020[8] = {
    VTX(1000, -240, 60, 2048, -3072, 163, 163, 163, 255),
    VTX(1000, -240, 180, 0, -3072, 255, 248, 195, 255),
    VTX(1000, -120, 180, 0, -1024, 255, 248, 195, 255),
    VTX(1000, -120, 60, 2048, -1024, 193, 190, 142, 255),
    VTX(1000, -240, -180, 2048, -3072, 193, 190, 142, 255),
    VTX(1000, -240, -60, 0, -3072, 163, 163, 163, 255),
    VTX(1000, -120, -60, 0, -1024, 216, 216, 216, 255),
    VTX(1000, -120, -180, 2048, -1024, 193, 190, 142, 255),
}; 

static Vtx object_blkobjVtx_0040A0[5] = {
    VTX(1000, -260, 0, 6144, 1024, 163, 163, 163, 255),
    VTX(1000, -320, 270, 0, -1024, 163, 163, 163, 255),
    VTX(1000, -260, 270, 0, 1024, 193, 190, 142, 255),
    VTX(1000, -260, -270, 12288, 1024, 163, 163, 163, 255),
    VTX(1000, -320, -270, 12288, -1024, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_0040F0[5] = {
    VTX(1000, -260, 0, 4864, 0, 163, 163, 163, 255),
    VTX(1000, -260, 270, -2048, 0, 193, 190, 142, 255),
    VTX(1000, -240, 210, -512, 512, 135, 135, 135, 255),
    VTX(1000, -240, -210, 10240, 512, 135, 135, 135, 255),
    VTX(1000, -260, -270, 11776, 0, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_004140[7] = {
    VTX(1000, -240, -210, 1024, -4096, 163, 163, 163, 255),
    VTX(1000, 0, -180, 0, 1024, 255, 248, 195, 255),
    VTX(1000, 0, -210, 1024, 1024, 163, 163, 163, 255),
    VTX(1030, -260, -270, 0, 1024, 116, 116, 107, 255),
    VTX(1030, -320, -270, 0, 0, 135, 135, 135, 255),
    VTX(1000, -260, -270, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, -320, -270, 1024, 0, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_0041B0[4] = {
    VTX(1030, -240, -210, 3072, 0, 135, 135, 135, 255),
    VTX(1030, -260, -270, 3072, 785, 135, 135, 135, 255),
    VTX(1000, -260, -270, 2304, 785, 135, 135, 135, 255),
    VTX(1000, -240, -210, 2304, 0, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_0041F0[4] = {
    VTX(1000, -260, 270, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, -320, 270, 1024, 0, 255, 248, 195, 255),
    VTX(1030, -320, 270, 0, 0, 135, 135, 135, 255),
    VTX(1030, -260, 270, 0, 1024, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_004230[4] = {
    VTX(1000, -240, 210, 2304, 0, 116, 116, 107, 255),
    VTX(1000, -260, 270, 2304, 785, 135, 135, 135, 255),
    VTX(1030, -260, 270, 3072, 785, 135, 135, 135, 255),
    VTX(1030, -240, 210, 3072, 0, 135, 135, 135, 255),
}; 

static Vtx object_blkobjVtx_004270[8] = {
    VTX(1030, 0, -210, 0, 1024, 116, 116, 107, 255),
    VTX(1030, -240, -210, 0, -4096, 135, 135, 135, 255),
    VTX(1000, 0, -210, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, -240, -210, 1024, -4096, 255, 248, 195, 255),
    VTX(1000, 0, 210, 1024, 1024, 255, 248, 195, 255),
    VTX(1000, -240, 210, 1024, -4096, 255, 248, 195, 255),
    VTX(1030, -240, 210, 0, -4096, 135, 135, 135, 255),
    VTX(1030, 0, 210, 0, 1024, 116, 116, 107, 255),
}; 

static Vtx object_blkobjVtx_0042F0[18] = {
    VTX(453, -190, -1140, 3053, 1024, 163, 163, 163, 255),
    VTX(423, -110, -1170, 2584, 614, 163, 163, 163, 255),
    VTX(523, -110, -1150, 3522, 634, 255, 248, 195, 255),
    VTX(453, -190, -1140, 1069, 1024, 163, 163, 163, 255),
    VTX(523, -110, -1150, 636, 634, 255, 248, 195, 255),
    VTX(443, -110, -1090, 1502, 599, 255, 248, 195, 255),
    VTX(453, -190, -1140, 2043, 1024, 163, 163, 163, 255),
    VTX(523, 10, -1150, 3496, 20, 255, 248, 195, 255),
    VTX(403, 10, -1190, 2613, -1, 255, 248, 195, 255),
    VTX(523, 10, -1150, 610, 20, 255, 248, 195, 255),
    VTX(423, 10, -1050, 1555, -31, 103, 103, 158, 255),
    VTX(523, 130, -1150, 3522, 634, 255, 248, 195, 255),
    VTX(423, 130, -1170, 2584, 614, 163, 163, 163, 255),
    VTX(453, 210, -1140, 3053, 1024, 163, 163, 163, 255),
    VTX(443, 130, -1090, 1502, 599, 255, 248, 195, 255),
    VTX(523, 130, -1150, 636, 634, 255, 248, 195, 255),
    VTX(453, 210, -1140, 1069, 1024, 163, 163, 163, 255),
    VTX(453, 210, -1140, 2043, 1024, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_004410[12] = {
    VTX(-305, 117, 1160, 3072, 983, 216, 216, 216, 255),
    VTX(-277, 143, 1131, 3072, 0, 163, 163, 163, 255),
    VTX(-267, 10, 1019, -495, 0, 255, 248, 195, 255),
    VTX(-298, 10, 1070, 201, 983, 255, 248, 195, 255),
    VTX(-267, 100, 1183, 0, 2007, 216, 216, 216, 255),
    VTX(-260, 10, 1107, 2422, 2007, 255, 248, 195, 255),
    VTX(-230, 10, 1057, 3119, 1024, 255, 248, 195, 255),
    VTX(-238, 126, 1154, 0, 1024, 163, 163, 163, 255),
    VTX(-270, 149, 1224, -53, 983, 163, 163, 163, 255),
    VTX(-309, 166, 1201, -53, 0, 163, 163, 163, 255),
    VTX(-480, 10, 1372, 5845, 0, 255, 248, 195, 255),
    VTX(-423, 10, 1377, 5212, 983, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_0044D0[4] = {
    VTX(-480, 10, 1372, 4096, -1024, 255, 248, 195, 255),
    VTX(-309, 166, 1201, 0, -1024, 163, 163, 163, 255),
    VTX(-303, 93, 1139, 0, 1024, 216, 216, 216, 255),
    VTX(-394, 10, 1230, 2170, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_004510[12] = {
    VTX(-238, 126, 1154, -655, 41, 163, 163, 163, 255),
    VTX(-230, 10, 1057, 2463, 41, 255, 248, 195, 255),
    VTX(-267, 10, 1019, 2912, 1024, 255, 248, 195, 255),
    VTX(-277, 143, 1131, -655, 1024, 163, 163, 163, 255),
    VTX(-394, 10, 1230, 3072, 0, 255, 248, 195, 255),
    VTX(-303, 93, 1139, -53, 0, 216, 216, 216, 255),
    VTX(-265, 76, 1162, -53, 983, 216, 216, 216, 255),
    VTX(-337, 10, 1235, 2439, 983, 255, 248, 195, 255),
    VTX(-303, 93, 1139, 0, 1024, 216, 216, 216, 255),
    VTX(-298, 10, 1070, 2215, 1024, 255, 248, 195, 255),
    VTX(-260, 10, 1107, 1766, 41, 255, 248, 195, 255),
    VTX(-265, 76, 1162, 0, 41, 216, 216, 216, 255),
}; 

static Vtx object_blkobjVtx_0045D0[4] = {
    VTX(-337, 10, 1235, 1730, 1024, 255, 248, 195, 255),
    VTX(-265, 76, 1162, 0, 1024, 216, 216, 216, 255),
    VTX(-270, 149, 1224, 0, -1024, 163, 163, 163, 255),
    VTX(-423, 10, 1377, 3656, -1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_004610[30] = {
    VTX(-267, 100, 1183, 0, 1024, 216, 216, 216, 255),
    VTX(-238, 126, 1154, 0, 0, 163, 163, 163, 255),
    VTX(-242, 175, 1196, 1024, 0, 163, 163, 163, 255),
    VTX(-270, 149, 1224, 1024, 1024, 163, 163, 163, 255),
    VTX(-280, 192, 1172, 1024, 0, 163, 163, 163, 255),
    VTX(-242, 175, 1196, 1024, 1024, 163, 163, 163, 255),
    VTX(-277, 143, 1131, 0, 0, 163, 163, 163, 255),
    VTX(-238, 126, 1154, 0, 1024, 163, 163, 163, 255),
    VTX(-309, 166, 1201, 1024, 1024, 163, 163, 163, 255),
    VTX(-305, 117, 1160, 0, 1024, 216, 216, 216, 255),
    VTX(-277, 143, 1131, 0, 0, 163, 163, 163, 255),
    VTX(-280, 192, 1172, 0, 0, 163, 163, 163, 255),
    VTX(-309, 166, 1201, 1024, 0, 163, 163, 163, 255),
    VTX(-270, 149, 1224, 1024, 1024, 163, 163, 163, 255),
    VTX(-242, 175, 1196, 0, 1024, 163, 163, 163, 255),
    VTX(-242, -155, 1196, 0, 1024, 163, 163, 163, 255),
    VTX(-270, -129, 1224, 1024, 1024, 163, 163, 163, 255),
    VTX(-309, -146, 1201, 1024, 0, 163, 163, 163, 255),
    VTX(-280, -172, 1172, 0, 0, 163, 163, 163, 255),
    VTX(-305, -97, 1160, 0, 1024, 216, 216, 216, 255),
    VTX(-277, -123, 1131, 0, 0, 163, 163, 163, 255),
    VTX(-280, -172, 1172, 1024, 0, 163, 163, 163, 255),
    VTX(-309, -146, 1201, 1024, 1024, 163, 163, 163, 255),
    VTX(-277, -123, 1131, 0, 0, 163, 163, 163, 255),
    VTX(-238, -106, 1154, 0, 1024, 163, 163, 163, 255),
    VTX(-242, -155, 1196, 1024, 1024, 163, 163, 163, 255),
    VTX(-270, -129, 1224, 1024, 1024, 163, 163, 163, 255),
    VTX(-242, -155, 1196, 1024, 0, 163, 163, 163, 255),
    VTX(-267, -80, 1183, 0, 1024, 216, 216, 216, 255),
    VTX(-238, -106, 1154, 0, 0, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_0047F0[4] = {
    VTX(-423, 10, 1377, 3656, -1024, 255, 248, 195, 255),
    VTX(-270, -129, 1224, 0, -1024, 163, 163, 163, 255),
    VTX(-265, -56, 1162, 0, 1024, 216, 216, 216, 255),
    VTX(-337, 10, 1235, 1730, 1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_004830[12] = {
    VTX(-265, -56, 1162, 0, 41, 216, 216, 216, 255),
    VTX(-260, 10, 1107, 1766, 41, 255, 248, 195, 255),
    VTX(-298, 10, 1070, 2215, 1024, 255, 248, 195, 255),
    VTX(-303, -73, 1139, 0, 1024, 216, 216, 216, 255),
    VTX(-337, 10, 1235, 2439, 983, 255, 248, 195, 255),
    VTX(-265, -56, 1162, -53, 983, 216, 216, 216, 255),
    VTX(-303, -73, 1139, -53, 0, 216, 216, 216, 255),
    VTX(-394, 10, 1230, 3072, 0, 255, 248, 195, 255),
    VTX(-277, -123, 1131, -655, 1024, 163, 163, 163, 255),
    VTX(-267, 10, 1019, 2912, 1024, 255, 248, 195, 255),
    VTX(-230, 10, 1057, 2463, 41, 255, 248, 195, 255),
    VTX(-238, -106, 1154, -655, 41, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_0048F0[4] = {
    VTX(-394, 10, 1230, 2170, 1024, 255, 248, 195, 255),
    VTX(-303, -73, 1139, 0, 1024, 216, 216, 216, 255),
    VTX(-309, -146, 1201, 0, -1024, 163, 163, 163, 255),
    VTX(-480, 10, 1372, 4096, -1024, 255, 248, 195, 255),
}; 

static Vtx object_blkobjVtx_004930[12] = {
    VTX(-423, 10, 1377, 5212, 983, 255, 248, 195, 255),
    VTX(-480, 10, 1372, 5845, 0, 255, 248, 195, 255),
    VTX(-309, -146, 1201, -53, 0, 163, 163, 163, 255),
    VTX(-270, -129, 1224, -53, 983, 163, 163, 163, 255),
    VTX(-230, 10, 1057, 3119, 1024, 255, 248, 195, 255),
    VTX(-267, -80, 1183, 0, 2007, 216, 216, 216, 255),
    VTX(-238, -106, 1154, 0, 1024, 163, 163, 163, 255),
    VTX(-260, 10, 1107, 2422, 2007, 255, 248, 195, 255),
    VTX(-298, 10, 1070, 201, 983, 255, 248, 195, 255),
    VTX(-267, 10, 1019, -495, 0, 255, 248, 195, 255),
    VTX(-305, -97, 1160, 3072, 983, 216, 216, 216, 255),
    VTX(-277, -123, 1131, 3072, 0, 163, 163, 163, 255),
}; 

static Vtx object_blkobjVtx_0049F0[32] = {
    VTX(0, 10, -800, -1024, 683, 158, 187, 179, 255),
    VTX(0, 10, -1600, -2389, 683, 158, 187, 179, 255),
    VTX(-800, 10, -1600, -2389, 2048, 158, 187, 179, 255),
    VTX(-800, 10, -800, -1024, 2048, 158, 187, 179, 255),
    VTX(800, 10, -800, -1024, -683, 158, 187, 179, 255),
    VTX(800, 10, -1600, -2389, -683, 158, 187, 179, 255),
    VTX(1600, 10, -800, -1024, -2048, 158, 187, 179, 255),
    VTX(1600, 10, -1600, -2389, -2048, 158, 187, 179, 255),
    VTX(240, 10, -239, -66, 272, 158, 187, 179, 255),
    VTX(91, 10, -91, 187, 528, 158, 187, 179, 255),
    VTX(102, 10, -13, 319, 508, 158, 187, 179, 255),
    VTX(0, 10, -286, -146, 683, 158, 187, 179, 255),
    VTX(0, 10, -128, 123, 683, 158, 187, 179, 255),
    VTX(717, 10, 10, 358, -541, 158, 187, 179, 255),
    VTX(780, 10, -250, -85, -649, 158, 187, 179, 255),
    VTX(1600, 10, 0, 341, -2048, 158, 187, 179, 255),
    VTX(900, 10, -290, -154, -853, 158, 187, 179, 255),
    VTX(1600, 10, 800, 1707, -2048, 158, 187, 179, 255),
    VTX(900, 10, 290, 836, -853, 158, 187, 179, 255),
    VTX(800, 10, 800, 1707, -683, 158, 187, 179, 255),
    VTX(779, 10, 253, 773, -648, 158, 187, 179, 255),
    VTX(999, 10, 243, 757, -1023, 158, 187, 179, 255),
    VTX(180, 10, 223, 723, 376, 158, 187, 179, 255),
    VTX(0, 10, 800, 1707, 683, 158, 187, 179, 255),
    VTX(0, 10, 257, 780, 683, 158, 187, 179, 255),
    VTX(91, 10, 91, 496, 528, 158, 187, 179, 255),
    VTX(0, 10, 128, 560, 683, 158, 187, 179, 255),
    VTX(0, 10, 1600, 3072, 683, 158, 187, 179, 255),
    VTX(-800, 10, 800, 1707, 2048, 158, 187, 179, 255),
    VTX(-800, 10, 1600, 3072, 2048, 158, 187, 179, 255),
    VTX(800, 10, 1600, 3072, -683, 158, 187, 179, 255),
    VTX(1600, 10, 1600, 3072, -2048, 158, 187, 179, 255),
}; 

static Vtx object_blkobjVtx_004BF0[32] = {
    VTX(-800, 10, 1600, 3072, 2048, 158, 187, 179, 255),
    VTX(-800, 10, 800, 1707, 2048, 158, 187, 179, 255),
    VTX(-1600, 10, 800, 1707, 3413, 158, 187, 179, 255),
    VTX(-1600, 10, 1600, 3072, 3413, 158, 187, 179, 255),
    VTX(-800, 10, -800, -1024, 2048, 158, 187, 179, 255),
    VTX(-800, 10, -1600, -2389, 2048, 158, 187, 179, 255),
    VTX(-1600, 10, -1600, -2389, 3413, 158, 187, 179, 255),
    VTX(-1600, 10, -800, -1024, 3413, 158, 187, 179, 255),
    VTX(-791, 10, -482, -482, 2032, 158, 187, 179, 255),
    VTX(-340, 10, -199, 2, 1262, 158, 187, 179, 255),
    VTX(0, 10, -800, -1024, 683, 158, 187, 179, 255),
    VTX(-780, 10, -130, 119, 2014, 158, 187, 179, 255),
    VTX(-717, 10, 10, 358, 1907, 158, 187, 179, 255),
    VTX(-365, 10, 9, 357, 1306, 158, 187, 179, 255),
    VTX(-779, 10, 133, 568, 2013, 158, 187, 179, 255),
    VTX(-789, 10, 439, 1090, 2029, 158, 187, 179, 255),
    VTX(-365, 10, 9, 357, 1306, 158, 187, 179, 255),
    VTX(-900, 10, 170, 631, 2219, 158, 187, 179, 255),
    VTX(-999, 10, 123, 552, 2388, 158, 187, 179, 255),
    VTX(-1176, 10, 323, 892, 2690, 158, 187, 179, 255),
    VTX(-789, 10, 439, 1090, 2029, 158, 187, 179, 255),
    VTX(-1000, 10, -113, 149, 2389, 158, 187, 179, 255),
    VTX(-900, 10, -170, 51, 2219, 158, 187, 179, 255),
    VTX(-1148, 10, -393, -330, 2642, 158, 187, 179, 255),
    VTX(-1326, 10, -9, 326, 2946, 158, 187, 179, 255),
    VTX(-1600, 10, 0, 341, 3413, 158, 187, 179, 255),
    VTX(0, 10, 257, 780, 683, 158, 187, 179, 255),
    VTX(0, 10, 128, 560, 683, 158, 187, 179, 255),
    VTX(-62, 10, 88, 491, 789, 158, 187, 179, 255),
    VTX(-163, 10, 176, 642, 961, 158, 187, 179, 255),
    VTX(0, 10, 800, 1707, 683, 158, 187, 179, 255),
    VTX(-109, 10, 0, 341, 868, 158, 187, 179, 255),
}; 

static Vtx object_blkobjVtx_004DF0[32] = {
    VTX(0, 10, -800, -1024, 683, 158, 187, 179, 255),
    VTX(-340, 10, -199, 2, 1262, 158, 187, 179, 255),
    VTX(0, 10, -286, -146, 683, 158, 187, 179, 255),
    VTX(-84, 10, -71, 220, 826, 158, 187, 179, 255),
    VTX(0, 10, -128, 123, 683, 158, 187, 179, 255),
    VTX(-365, 10, 9, 357, 1306, 158, 187, 179, 255),
    VTX(-109, 10, 0, 341, 868, 158, 187, 179, 255),
    VTX(1600, 10, 0, 341, -2048, 158, 187, 179, 255),
    VTX(955, 10, 7, 354, -948, 158, 187, 179, 255),
    VTX(999, 10, 243, 757, -1023, 158, 187, 179, 255),
    VTX(900, 10, -290, -154, -853, 158, 187, 179, 255),
    VTX(240, 10, -239, -66, 272, 158, 187, 179, 255),
    VTX(102, 10, -13, 319, 508, 158, 187, 179, 255),
    VTX(281, 10, 0, 341, 203, 158, 187, 179, 255),
    VTX(717, 10, 10, 358, -541, 158, 187, 179, 255),
    VTX(91, 10, 91, 496, 528, 158, 187, 179, 255),
    VTX(180, 10, 223, 723, 376, 158, 187, 179, 255),
    VTX(2400, 10, 0, 341, -3413, 158, 187, 179, 255),
    VTX(1600, 10, 0, 341, -2048, 158, 187, 179, 255),
    VTX(1600, 10, 800, 1707, -2048, 158, 187, 179, 255),
    VTX(2400, 10, 800, 1707, -3413, 158, 187, 179, 255),
    VTX(1600, 10, 1600, 3072, -2048, 158, 187, 179, 255),
    VTX(2400, 10, 1600, 3072, -3413, 158, 187, 179, 255),
    VTX(2400, 10, -800, -1024, -3413, 158, 187, 179, 255),
    VTX(1600, 10, -800, -1024, -2048, 158, 187, 179, 255),
    VTX(2400, 10, -1600, -2389, -3413, 158, 187, 179, 255),
    VTX(1600, 10, -1600, -2389, -2048, 158, 187, 179, 255),
    VTX(-1600, 10, -800, -1024, 3413, 158, 187, 179, 255),
    VTX(-1600, 10, -1600, -2389, 3413, 158, 187, 179, 255),
    VTX(-2400, 10, -1600, -2389, 4779, 158, 187, 179, 255),
    VTX(-2400, 10, -800, -1024, 4779, 158, 187, 179, 255),
    VTX(-1600, 10, 0, 341, 3413, 158, 187, 179, 255),
}; 

static Vtx object_blkobjVtx_004FF0[32] = {
    VTX(-1600, 10, 0, 341, 3413, 158, 187, 179, 255),
    VTX(-2400, 10, -800, -1024, 4779, 158, 187, 179, 255),
    VTX(-2400, 10, 0, 341, 4779, 158, 187, 179, 255),
    VTX(-2400, 10, 1600, 3072, 4779, 158, 187, 179, 255),
    VTX(-1600, 10, 1600, 3072, 3413, 158, 187, 179, 255),
    VTX(-1600, 10, 800, 1707, 3413, 158, 187, 179, 255),
    VTX(-2400, 10, 800, 1707, 4779, 158, 187, 179, 255),
    VTX(1600, 10, -4000, -6485, -2048, 158, 187, 179, 255),
    VTX(-2400, 10, -4000, -6485, 4779, 158, 187, 179, 255),
    VTX(-2400, 10, -2400, -3755, 4779, 158, 187, 179, 255),
    VTX(1600, 10, -2400, -3755, -2048, 158, 187, 179, 255),
    VTX(-2400, 10, -1600, -2389, 4779, 158, 187, 179, 255),
    VTX(-1600, 10, -1600, -2389, 3413, 158, 187, 179, 255),
    VTX(-1600, 10, -2400, -3755, 3413, 158, 187, 179, 255),
    VTX(-2400, 10, 2400, 4437, 4779, 158, 187, 179, 255),
    VTX(-1600, 10, 2400, 4437, 3413, 158, 187, 179, 255),
    VTX(-1600, 10, 1600, 3072, 3413, 158, 187, 179, 255),
    VTX(-2400, 10, 1600, 3072, 4779, 158, 187, 179, 255),
    VTX(-800, 10, 2400, 4437, 2048, 158, 187, 179, 255),
    VTX(-800, 10, 1600, 3072, 2048, 158, 187, 179, 255),
    VTX(-800, 10, -1600, -2389, 2048, 158, 187, 179, 255),
    VTX(-800, 10, -2400, -3755, 2048, 158, 187, 179, 255),
    VTX(0, 10, 2400, 4437, 683, 158, 187, 179, 255),
    VTX(0, 10, 1600, 3072, 683, 158, 187, 179, 255),
    VTX(0, 10, -1600, -2389, 683, 158, 187, 179, 255),
    VTX(0, 10, -2400, -3755, 683, 158, 187, 179, 255),
    VTX(800, 10, 2400, 4437, -683, 158, 187, 179, 255),
    VTX(1600, 10, 2400, 4437, -2048, 158, 187, 179, 255),
    VTX(1600, 10, 1600, 3072, -2048, 158, 187, 179, 255),
    VTX(800, 10, 1600, 3072, -683, 158, 187, 179, 255),
    VTX(800, 10, -1600, -2389, -683, 158, 187, 179, 255),
    VTX(1600, 10, -1600, -2389, -2048, 158, 187, 179, 255),
}; 

static Vtx object_blkobjVtx_0051F0[30] = {
    VTX(800, 10, -1600, -2389, -683, 158, 187, 179, 255),
    VTX(1600, 10, -2400, -3755, -2048, 158, 187, 179, 255),
    VTX(800, 10, -2400, -3755, -683, 158, 187, 179, 255),
    VTX(0, 10, -1600, -2389, 683, 158, 187, 179, 255),
    VTX(0, 10, -2400, -3755, 683, 158, 187, 179, 255),
    VTX(2400, 10, 1600, 3072, -3413, 158, 187, 179, 255),
    VTX(1600, 10, 1600, 3072, -2048, 158, 187, 179, 255),
    VTX(1600, 10, 2400, 4437, -2048, 158, 187, 179, 255),
    VTX(2400, 10, 2400, 4437, -3413, 158, 187, 179, 255),
    VTX(2400, 10, -2400, -3755, -3413, 158, 187, 179, 255),
    VTX(1600, 10, -2400, -3755, -2048, 158, 187, 179, 255),
    VTX(1600, 10, -1600, -2389, -2048, 158, 187, 179, 255),
    VTX(2400, 10, -1600, -2389, -3413, 158, 187, 179, 255),
    VTX(3200, 10, -2400, -3755, -4779, 158, 187, 179, 255),
    VTX(3200, 10, 2400, 4437, -4779, 158, 187, 179, 255),
    VTX(-2400, 10, 4000, 7168, 4779, 158, 187, 179, 255),
    VTX(1600, 10, 4000, 7168, -2048, 158, 187, 179, 255),
    VTX(-2400, 10, 2400, 4437, 4779, 158, 187, 179, 255),
    VTX(2400, 10, 4000, 7168, -3413, 158, 187, 179, 255),
    VTX(3200, 10, 4000, 7168, -4779, 158, 187, 179, 255),
    VTX(3200, 10, -4000, -6485, -4779, 158, 187, 179, 255),
    VTX(2400, 10, -4000, -6485, -3413, 158, 187, 179, 255),
    VTX(1600, 10, -4000, -6485, -2048, 158, 187, 179, 255),
    VTX(-2400, 10, -2400, -3755, 4779, 158, 187, 179, 255),
    VTX(-2400, 10, -4000, -6485, 4779, 158, 187, 179, 255),
    VTX(-3200, 10, -4000, -6485, 6144, 158, 187, 179, 255),
    VTX(-3200, 10, -2400, -3755, 6144, 158, 187, 179, 255),
    VTX(-3200, 10, 4000, 7168, 6144, 158, 187, 179, 255),
    VTX(-2400, 10, 2400, 4437, 4779, 158, 187, 179, 255),
    VTX(-3200, 10, 2400, 4437, 6144, 158, 187, 179, 255),
}; 

Gfx gIllusionRoomIllusionDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00E890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, ENVIRONMENT,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPDisplayList(0x08000000),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_blkobjVtx_001F30[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 0, 4, 0, 0, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 8, 7, 0, 6, 9, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_013090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_001FD0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 17, 19, 0, 17, 16, 19, 0),
    gsSP2Triangles(20, 11, 10, 0, 20, 10, 21, 0),
    gsSP2Triangles(22, 4, 23, 0, 22, 5, 4, 0),
    gsSP2Triangles(23, 24, 22, 0, 21, 25, 20, 0),
    gsSP2Triangles(19, 26, 18, 0, 27, 28, 29, 0),
    gsSPVertex(&object_blkobjVtx_001FD0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 12, 0, 11, 17, 18, 0),
    gsSP2Triangles(11, 18, 9, 0, 19, 20, 6, 0),
    gsSP2Triangles(8, 19, 6, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 27, 0),
    gsSPVertex(&object_blkobjVtx_0023B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 9, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 15, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 24, 27, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 18, 19, 0, 28, 19, 29, 0),
    gsSP2Triangles(30, 12, 31, 0, 12, 13, 31, 0),
    gsSPVertex(&object_blkobjVtx_0025B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 24, 0),
    gsSP2Triangles(26, 27, 24, 0, 23, 29, 30, 0),
    gsSP1Triangle(23, 30, 21, 0),
    gsSPVertex(&object_blkobjVtx_0025B0[31], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 10, 0),
    gsSP2Triangles(12, 13, 10, 0, 9, 15, 7, 0),
    gsSP2Triangles(15, 16, 7, 0, 6, 17, 18, 0),
    gsSP1Triangle(6, 18, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0028D0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 4, 3, 0),
    gsSP2Triangles(3, 5, 0, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 0, 0, 5, 4, 9, 0),
    gsSP2Triangles(5, 9, 7, 0, 6, 10, 4, 0),
    gsSP2Triangles(6, 11, 10, 0, 10, 9, 4, 0),
    gsSP2Triangles(8, 12, 0, 0, 12, 1, 0, 0),
    gsSP2Triangles(12, 13, 1, 0, 1, 13, 14, 0),
    gsSP2Triangles(1, 14, 15, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 11, 0),
    gsSP2Triangles(18, 11, 20, 0, 11, 21, 20, 0),
    gsSP2Triangles(21, 6, 22, 0, 21, 22, 20, 0),
    gsSP2Triangles(11, 6, 21, 0, 19, 18, 23, 0),
    gsSP2Triangles(18, 24, 25, 0, 18, 25, 23, 0),
    gsSP2Triangles(2, 17, 25, 0, 2, 15, 17, 0),
    gsSP1Triangle(2, 1, 15, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, ENVIRONMENT,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&object_blkobjVtx_002A70[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 6, 8, 0, 9, 8, 11, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, ENVIRONMENT,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPVertex(&object_blkobjVtx_002B30[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 10, 0),
    gsSP2Triangles(12, 10, 9, 0, 12, 9, 11, 0),
    gsSP2Triangles(12, 11, 8, 0, 12, 8, 6, 0),
    gsSP2Triangles(3, 14, 15, 0, 3, 15, 0, 0),
    gsSP2Triangles(0, 15, 16, 0, 0, 16, 1, 0),
    gsSP2Triangles(1, 16, 17, 0, 18, 1, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(22, 11, 10, 0, 20, 22, 10, 0),
    gsSP2Triangles(23, 21, 20, 0, 23, 20, 24, 0),
    gsSP2Triangles(18, 19, 23, 0, 18, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 25, 27, 0),
    gsSP2Triangles(29, 28, 27, 0, 30, 29, 27, 0),
    gsSP1Triangle(31, 30, 27, 0),
    gsSPVertex(&object_blkobjVtx_002D30[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 6, 8, 0),
    gsSP2Triangles(10, 5, 7, 0, 10, 11, 5, 0),
    gsSP2Triangles(12, 4, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(16, 15, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 17, 19, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 19, 1, 0, 20, 1, 21, 0),
    gsSP2Triangles(21, 1, 0, 0, 21, 0, 22, 0),
    gsSP2Triangles(22, 0, 3, 0, 22, 3, 23, 0),
    gsSP2Triangles(23, 3, 4, 0, 23, 4, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_002EB0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_002F20[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_002F50[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_002F90[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_002FD0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003020[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003100[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(19, 22, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003270[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0032F0[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0033A0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0033D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003410[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003450[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003530[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(20, 22, 21, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0036A0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003720[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003760[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 0, 9, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003840[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_011090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003970[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_011890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0039F0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00F890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003A70[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003AC0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003B10[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 10, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003BC0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003C00[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003C40[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003C80[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(12, 16, 13, 0, 16, 15, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003D90[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 2, 9, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003E70[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_011090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_003FA0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_011890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004020[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00F890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0040A0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0040F0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004140[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0041B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0041F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004230[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004270[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00D890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0042F0[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 1, 0, 7, 2, 1, 0),
    gsSP2Triangles(7, 1, 8, 0, 5, 4, 9, 0),
    gsSP2Triangles(10, 5, 9, 0, 8, 1, 5, 0),
    gsSP2Triangles(8, 5, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 12, 14, 17, 0),
    gsSP2Triangles(8, 12, 11, 0, 8, 11, 7, 0),
    gsSP2Triangles(9, 15, 14, 0, 9, 14, 10, 0),
    gsSP2Triangles(14, 12, 8, 0, 10, 14, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004410[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_009090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0044D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004510[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_009090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0045D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004610[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 4, 9, 0, 4, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 21, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_009090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0047F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004830[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_009090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_0048F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_008890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_blkobjVtx_004930[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_00D890),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 14),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 15, 0, 5, 14),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_blkobjTex_00A090),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 14, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 14, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, COMBINED, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetPrimColor(128, 128, 255, 255, 255, 186),
    gsSPDisplayList(0x0D000000),
    gsSPVertex(&object_blkobjVtx_0049F0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 8, 0),
    gsSP2Triangles(14, 4, 8, 0, 4, 0, 11, 0),
    gsSP2Triangles(4, 11, 8, 0, 15, 6, 16, 0),
    gsSP2Triangles(6, 4, 16, 0, 4, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(17, 21, 18, 0, 17, 15, 21, 0),
    gsSP2Triangles(13, 20, 18, 0, 13, 18, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 24, 0),
    gsSP2Triangles(19, 20, 22, 0, 20, 13, 22, 0),
    gsSP2Triangles(27, 23, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(30, 19, 23, 0, 30, 23, 27, 0),
    gsSP2Triangles(31, 17, 19, 0, 31, 19, 30, 0),
    gsSPVertex(&object_blkobjVtx_004BF0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 10, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 9, 0),
    gsSP2Triangles(9, 12, 13, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 17, 0),
    gsSP2Triangles(19, 2, 1, 0, 19, 1, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 7, 23, 8, 0),
    gsSP2Triangles(7, 8, 4, 0, 23, 22, 8, 0),
    gsSP2Triangles(22, 11, 8, 0, 18, 21, 24, 0),
    gsSP2Triangles(25, 2, 19, 0, 25, 19, 24, 0),
    gsSP2Triangles(19, 18, 24, 0, 7, 25, 24, 0),
    gsSP2Triangles(7, 24, 23, 0, 24, 21, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 15, 29, 16, 0),
    gsSP2Triangles(29, 28, 16, 0, 15, 30, 29, 0),
    gsSP2Triangles(15, 1, 30, 0, 31, 16, 28, 0),
    gsSP2Triangles(30, 26, 29, 0, 26, 28, 29, 0),
    gsSPVertex(&object_blkobjVtx_004DF0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 18, 0, 23, 18, 17, 0),
    gsSP2Triangles(25, 26, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(31, 27, 30, 0),
    gsSPVertex(&object_blkobjVtx_004FF0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 2, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 15, 18, 19, 0),
    gsSP2Triangles(15, 19, 16, 0, 12, 20, 21, 0),
    gsSP2Triangles(12, 21, 13, 0, 18, 22, 23, 0),
    gsSP2Triangles(18, 23, 19, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 22, 26, 29, 0),
    gsSP2Triangles(22, 29, 23, 0, 30, 31, 10, 0),
    gsSPVertex(&object_blkobjVtx_0051F0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(13, 8, 14, 0, 15, 16, 7, 0),
    gsSP2Triangles(15, 7, 17, 0, 18, 19, 14, 0),
    gsSP2Triangles(18, 14, 8, 0, 16, 18, 8, 0),
    gsSP2Triangles(16, 8, 7, 0, 13, 20, 21, 0),
    gsSP2Triangles(13, 21, 9, 0, 21, 22, 10, 0),
    gsSP2Triangles(21, 10, 9, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 15, 28, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 23, 26, 0),
    gsSP1Triangle(28, 26, 29, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006C68[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gIllusionRoomCol_camDataList_00006C70[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gIllusionRoomCol_polygonTypes_00006C78[] = {
   0x00000000, 0x000007CA,
   0x00000000, 0x000007C1,
}; 

CollisionPoly gIllusionRoomCol_polygons_00006C88[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0xFDCE, 0xAC82, 0x60FD, 0x0066 }, // 0x00006C88
   { 0x0000, 0x0001, 0x0003, 0x0002, 0xCE00, 0x9CB6, 0x3F71, 0x0077 }, // 0x00006C98
   { 0x0000, 0x0002, 0x0003, 0x0004, 0x4C43, 0x4BFE, 0x453B, 0xFF9A }, // 0x00006CA8
   { 0x0000, 0x0002, 0x0004, 0x0005, 0x451B, 0x662C, 0x222E, 0xFF79 }, // 0x00006CB8
   { 0x0000, 0x0005, 0x0001, 0x0000, 0xCFC9, 0x1133, 0x8AB0, 0xFFE9 }, // 0x00006CC8
   { 0x0000, 0x0005, 0x0004, 0x0001, 0xEB8D, 0x28E6, 0x8873, 0xFFCE }, // 0x00006CD8
   { 0x0000, 0x0000, 0x0006, 0x0005, 0xBE25, 0x1CED, 0x9620, 0xFFD3 }, // 0x00006CE8
   { 0x0000, 0x0005, 0x0006, 0x0002, 0x3220, 0x70A1, 0x226C, 0xFF66 }, // 0x00006CF8
   { 0x0000, 0x0002, 0x0006, 0x0000, 0x1608, 0xA574, 0x57BF, 0x0077 }, // 0x00006D08
   { 0x0000, 0x0007, 0x0008, 0x0009, 0x6BE9, 0x37EE, 0x2820, 0xFFA7 }, // 0x00006D18
   { 0x0000, 0x0008, 0x000A, 0x0009, 0x6DB6, 0x354B, 0x26D1, 0xFFAB }, // 0x00006D28
   { 0x0000, 0x0009, 0x000A, 0x000B, 0xF0E7, 0xA3E9, 0xA865, 0x0084 }, // 0x00006D38
   { 0x0000, 0x0009, 0x000B, 0x000C, 0xE990, 0xA641, 0xA78A, 0x0080 }, // 0x00006D48
   { 0x0000, 0x000C, 0x0008, 0x0007, 0x9F01, 0x43DC, 0x30AF, 0xFF99 }, // 0x00006D58
   { 0x0000, 0x000C, 0x000B, 0x0008, 0xA12E, 0x4613, 0x31D1, 0xFF96 }, // 0x00006D68
   { 0x0000, 0x0007, 0x000D, 0x000C, 0xACA9, 0x4E33, 0xC65D, 0xFF68 }, // 0x00006D78
   { 0x0000, 0x000C, 0x000D, 0x0009, 0xE4AE, 0x92B6, 0xC33B, 0x00AA }, // 0x00006D88
   { 0x0000, 0x0009, 0x000D, 0x0007, 0x56E1, 0x2552, 0x5644, 0xFFD5 }, // 0x00006D98
   { 0x0000, 0x0009, 0x000E, 0x0007, 0x6ADF, 0x40F6, 0xE4C2, 0xFF83 }, // 0x00006DA8
   { 0x0000, 0x000C, 0x000E, 0x0009, 0xE74B, 0x9D2E, 0xB27E, 0x0093 }, // 0x00006DB8
   { 0x0000, 0x0007, 0x000E, 0x000C, 0xB3FC, 0x2A02, 0x5E05, 0xFFD3 }, // 0x00006DC8
   { 0x0000, 0x000F, 0x0010, 0x0011, 0x4AD5, 0x982E, 0xFDFA, 0x00B7 }, // 0x00006DD8
   { 0x0000, 0x0012, 0x0010, 0x000F, 0x0E0B, 0x6EFE, 0xC1D1, 0xFF43 }, // 0x00006DE8
   { 0x0000, 0x0011, 0x0010, 0x0012, 0x9F6F, 0xFBC7, 0x53E7, 0xFFF5 }, // 0x00006DF8
   { 0x0000, 0x0012, 0x000B, 0x0013, 0x95A1, 0xEB85, 0x442F, 0x001A }, // 0x00006E08
   { 0x0000, 0x0012, 0x0013, 0x0011, 0x9112, 0xEF98, 0x3DB7, 0x0015 }, // 0x00006E18
   { 0x0000, 0x000F, 0x000A, 0x000B, 0x032F, 0x4EFF, 0x9B57, 0xFF8A }, // 0x00006E28
   { 0x0000, 0x000F, 0x000B, 0x0012, 0xEBD4, 0x54B9, 0xA233, 0xFF81 }, // 0x00006E38
   { 0x0000, 0x0013, 0x000A, 0x000F, 0x682C, 0xCAEA, 0x3416, 0x0045 }, // 0x00006E48
   { 0x0000, 0x0011, 0x0013, 0x000F, 0x6BCA, 0xCCC0, 0x2E3C, 0x0043 }, // 0x00006E58
   { 0x0000, 0x0014, 0x000A, 0x0013, 0x7257, 0xF98F, 0x392B, 0x0001 }, // 0x00006E68
   { 0x0000, 0x0014, 0x0013, 0x0015, 0x6CF9, 0xF779, 0x4298, 0x0004 }, // 0x00006E78
   { 0x0000, 0x0016, 0x0014, 0x0015, 0x6CC2, 0x0BB7, 0x4277, 0xFFF2 }, // 0x00006E88
   { 0x0000, 0x0016, 0x0015, 0x0017, 0x6C1E, 0x0B4F, 0x4393, 0xFFF2 }, // 0x00006E98
   { 0x0000, 0x000B, 0x000A, 0x0014, 0xF890, 0xFCED, 0x8042, 0x0001 }, // 0x00006EA8
   { 0x0000, 0x0018, 0x000B, 0x0014, 0x0000, 0xFE3F, 0x8004, 0x0000 }, // 0x00006EB8
   { 0x0000, 0x0019, 0x0018, 0x0014, 0x0000, 0x0538, 0x801C, 0xFFF9 }, // 0x00006EC8
   { 0x0000, 0x0019, 0x0014, 0x0016, 0x0000, 0x0538, 0x801C, 0xFFF9 }, // 0x00006ED8
   { 0x0000, 0x0013, 0x000B, 0x0018, 0x96CA, 0x0C84, 0x47CF, 0xFFEA }, // 0x00006EE8
   { 0x0000, 0x0015, 0x0013, 0x0018, 0x90FD, 0x0FFC, 0x3DAD, 0xFFE6 }, // 0x00006EF8
   { 0x0000, 0x0017, 0x0015, 0x0018, 0x9063, 0xF704, 0x3E02, 0xFFFC }, // 0x00006F08
   { 0x0000, 0x0017, 0x0018, 0x0019, 0x91AB, 0xF7BE, 0x405C, 0xFFFB }, // 0x00006F18
   { 0x0001, 0x001A, 0x001B, 0x001C, 0xE7D8, 0x7D8B, 0x062A, 0x007D }, // 0x00006F28
   { 0x0001, 0x001D, 0x001A, 0x001C, 0xF3A2, 0x7F66, 0x0000, 0x003B }, // 0x00006F38
   { 0x0001, 0x001E, 0x001F, 0x001D, 0xF827, 0x7D91, 0xE875, 0xFFF8 }, // 0x00006F48
   { 0x0001, 0x0020, 0x001E, 0x001D, 0x0000, 0x7F02, 0xF020, 0xFFD2 }, // 0x00006F58
   { 0x0001, 0x001D, 0x001F, 0x001A, 0xE6C7, 0x7D56, 0xF9E3, 0x0084 }, // 0x00006F68
   { 0x0001, 0x001F, 0x0021, 0x0022, 0xBF9E, 0x6D73, 0xEFE8, 0x0160 }, // 0x00006F78
   { 0x0001, 0x001F, 0x0022, 0x001A, 0xC4C3, 0x708D, 0xF1A5, 0x0144 }, // 0x00006F88
   { 0x0001, 0x001F, 0x001E, 0x0023, 0xED9C, 0x7205, 0xC8D4, 0xFFFB }, // 0x00006F98
   { 0x0001, 0x001F, 0x0023, 0x0021, 0xF0CB, 0x7516, 0xCE94, 0xFFF3 }, // 0x00006FA8
   { 0x0001, 0x0020, 0x0024, 0x001E, 0x170A, 0x7621, 0xD46F, 0xFEF2 }, // 0x00006FB8
   { 0x0001, 0x0024, 0x0023, 0x001E, 0x1A6A, 0x6EF1, 0xC5E3, 0xFEBA }, // 0x00006FC8
   { 0x0001, 0x0022, 0x0025, 0x001A, 0xC4AA, 0x70BD, 0x0C5D, 0x0143 }, // 0x00006FD8
   { 0x0001, 0x0025, 0x001B, 0x001A, 0xD7EF, 0x7922, 0x0A39, 0x00D6 }, // 0x00006FE8
   { 0x0001, 0x0025, 0x0026, 0x001B, 0xD811, 0x69D4, 0x3BE7, 0x0074 }, // 0x00006FF8
   { 0x0001, 0x001B, 0x0026, 0x0027, 0xF72D, 0x795C, 0x27B8, 0xFFDE }, // 0x00007008
   { 0x0001, 0x001B, 0x0027, 0x0028, 0xEF11, 0x7225, 0x3761, 0xFFF1 }, // 0x00007018
   { 0x0001, 0x0028, 0x0027, 0x0029, 0x14C4, 0x7020, 0x3A23, 0xFEE2 }, // 0x00007028
   { 0x0001, 0x0028, 0x0029, 0x002A, 0x1056, 0x7A33, 0x2268, 0xFF36 }, // 0x00007038
   { 0x0001, 0x001C, 0x002A, 0x002B, 0x0000, 0x7A7F, 0x251F, 0xFFB0 }, // 0x00007048
   { 0x0001, 0x001C, 0x0028, 0x002A, 0x0521, 0x7F70, 0x0ACD, 0xFFBA }, // 0x00007058
   { 0x0001, 0x001C, 0x001B, 0x0028, 0xF913, 0x7DC9, 0x16A6, 0xFFF4 }, // 0x00007068
   { 0x0001, 0x002C, 0x002D, 0x002E, 0x06ED, 0x7DC9, 0x16A6, 0x0009 }, // 0x00007078
   { 0x0001, 0x002F, 0x002C, 0x002E, 0xFADF, 0x7F70, 0x0ACD, 0xFFC4 }, // 0x00007088
   { 0x0001, 0x0030, 0x002F, 0x002E, 0x0000, 0x7A7F, 0x251F, 0xFFD3 }, // 0x00007098
   { 0x0001, 0x002F, 0x0031, 0x0032, 0xF205, 0x790F, 0x2724, 0xFF64 }, // 0x000070A8
   { 0x0001, 0x002F, 0x0032, 0x002C, 0xE46C, 0x6EAB, 0x3A18, 0xFEE8 }, // 0x000070B8
   { 0x0001, 0x002C, 0x0032, 0x0033, 0x0C70, 0x726F, 0x37F9, 0x0004 }, // 0x000070C8
   { 0x0001, 0x002C, 0x0033, 0x002D, 0x0D0A, 0x77FA, 0x2AA6, 0x001A }, // 0x000070D8
   { 0x0001, 0x002D, 0x0033, 0x0034, 0x27EF, 0x69D4, 0x3BE7, 0x00AD }, // 0x000070E8
   { 0x0001, 0x0035, 0x002D, 0x0034, 0x2894, 0x77A8, 0x1474, 0x00D8 }, // 0x000070F8
   { 0x0001, 0x0035, 0x0034, 0x0036, 0x3A86, 0x6F31, 0x1862, 0x013D }, // 0x00007108
   { 0x0001, 0x0037, 0x0038, 0x0039, 0xE596, 0x6EF1, 0xC5E3, 0xFEF0 }, // 0x00007118
   { 0x0001, 0x0037, 0x0039, 0x003A, 0xE8F6, 0x7621, 0xD46F, 0xFF1B }, // 0x00007128
   { 0x0001, 0x003B, 0x0038, 0x0037, 0x1109, 0x7223, 0xC8A2, 0x0025 }, // 0x00007138
   { 0x0001, 0x003B, 0x0037, 0x003C, 0x1047, 0x7531, 0xCF2C, 0x0028 }, // 0x00007148
   { 0x0001, 0x0035, 0x0036, 0x003B, 0x3A6A, 0x6EFC, 0xE672, 0x0141 }, // 0x00007158
   { 0x0001, 0x0035, 0x003B, 0x003C, 0x3607, 0x7175, 0xE7B0, 0x0128 }, // 0x00007168
   { 0x0001, 0x003D, 0x003E, 0x003F, 0x0CA8, 0x7F5D, 0x0157, 0xFFEC }, // 0x00007178
   { 0x0001, 0x0040, 0x003D, 0x003F, 0x040D, 0x7F8B, 0x09F7, 0xFFEC }, // 0x00007188
   { 0x0001, 0x0041, 0x0040, 0x003F, 0xF994, 0x7F72, 0x09F5, 0xFFEC }, // 0x00007198
   { 0x0001, 0x0042, 0x0041, 0x003F, 0xF452, 0x7F4F, 0x063D, 0xFFEC }, // 0x000071A8
   { 0x0001, 0x0043, 0x0042, 0x003F, 0xF450, 0x7F65, 0xFBE2, 0xFFEC }, // 0x000071B8
   { 0x0001, 0x0044, 0x0043, 0x003F, 0xF93F, 0x7F6E, 0xF60B, 0xFFEC }, // 0x000071C8
   { 0x0001, 0x0045, 0x0044, 0x003F, 0x040D, 0x7F8B, 0xF609, 0xFFEC }, // 0x000071D8
   { 0x0001, 0x003E, 0x0045, 0x003F, 0x0C45, 0x7F65, 0xFE45, 0xFFEC }, // 0x000071E8
   { 0x0001, 0x0035, 0x003C, 0x0046, 0x15AF, 0x7DC5, 0xF63E, 0x0070 }, // 0x000071F8
   { 0x0001, 0x0046, 0x0037, 0x003A, 0x0000, 0x7F02, 0xF020, 0xFFE1 }, // 0x00007208
   { 0x0001, 0x0046, 0x003C, 0x0037, 0x07D9, 0x7D91, 0xE875, 0x000E }, // 0x00007218
   { 0x0001, 0x002E, 0x0035, 0x0046, 0x0C5E, 0x7F66, 0x0000, 0x003B }, // 0x00007228
   { 0x0001, 0x002E, 0x002D, 0x0035, 0x141B, 0x7E00, 0x0A22, 0x0066 }, // 0x00007238
   { 0x0001, 0x0047, 0x003E, 0x003D, 0x392D, 0x725B, 0x060C, 0xFFCA }, // 0x00007248
   { 0x0001, 0x0047, 0x003D, 0x0048, 0x4397, 0x6C42, 0x09BD, 0xFFC1 }, // 0x00007258
   { 0x0001, 0x0048, 0x003D, 0x0040, 0x172D, 0x703D, 0x38FF, 0xFFBE }, // 0x00007268
   { 0x0001, 0x0048, 0x0040, 0x0049, 0x170F, 0x709C, 0x384E, 0xFFBF }, // 0x00007278
   { 0x0001, 0x0049, 0x0040, 0x0041, 0xDC84, 0x6DFF, 0x3700, 0xFFC0 }, // 0x00007288
   { 0x0001, 0x0049, 0x0041, 0x004A, 0xDD31, 0x6E84, 0x3663, 0xFFC1 }, // 0x00007298
   { 0x0001, 0x004A, 0x0041, 0x0042, 0xC70E, 0x6E86, 0x1E6A, 0xFFC7 }, // 0x000072A8
   { 0x0001, 0x004A, 0x0042, 0x004B, 0xC85C, 0x6F49, 0x1E0C, 0xFFC8 }, // 0x000072B8
   { 0x0001, 0x004B, 0x0042, 0x0043, 0xC775, 0x7117, 0xEC17, 0xFFC7 }, // 0x000072C8
   { 0x0001, 0x004B, 0x0043, 0x004C, 0xC57A, 0x6FD0, 0xEAA8, 0xFFC5 }, // 0x000072D8
   { 0x0001, 0x004C, 0x0043, 0x0044, 0xDF22, 0x71D4, 0xCF90, 0xFFC7 }, // 0x000072E8
   { 0x0001, 0x004C, 0x0044, 0x004D, 0xDCA2, 0x6E07, 0xC8FD, 0xFFC0 }, // 0x000072F8
   { 0x0001, 0x004D, 0x0044, 0x0045, 0x16E6, 0x70A3, 0xC7AF, 0xFFBF }, // 0x00007308
   { 0x0001, 0x004D, 0x0045, 0x004E, 0x1130, 0x7564, 0xCFF8, 0xFFC8 }, // 0x00007318
   { 0x0001, 0x004E, 0x0045, 0x003E, 0x37ED, 0x72DD, 0xF81D, 0xFFCA }, // 0x00007328
   { 0x0001, 0x004E, 0x003E, 0x0047, 0x3923, 0x7246, 0xF843, 0xFFC9 }, // 0x00007338
   { 0x0001, 0x0030, 0x002E, 0x0046, 0x0000, 0x7FFF, 0x0000, 0xFFEC }, // 0x00007348
   { 0x0001, 0x0030, 0x0046, 0x003A, 0x0000, 0x7FFF, 0x0000, 0xFFEC }, // 0x00007358
   { 0x0001, 0x001C, 0x002B, 0x0020, 0x0000, 0x7FFF, 0x0000, 0xFFEC }, // 0x00007368
   { 0x0001, 0x001C, 0x0020, 0x001D, 0x0000, 0x7FFF, 0x0000, 0xFFEC }, // 0x00007378

}; 

Vec3s gIllusionRoomCol_vtx_00007388[] = {
   { -35, 174, 15 }, // 0x00007388
   { -7, 157, 1 }, // 0x0000738E
   { -30, 182, 22 }, // 0x00007394
   { 1, 160, 12 }, // 0x0000739A
   { 7, 164, 1 }, // 0x000073A0
   { -29, 184, 14 }, // 0x000073A6
   { -80, 196, 49 }, // 0x000073AC
   { 3, 225, -37 }, // 0x000073B2
   { 3, 192, 9 }, // 0x000073B8
   { 7, 218, -38 }, // 0x000073BE
   { 11, 185, -4 }, // 0x000073C4
   { -7, 187, -3 }, // 0x000073CA
   { -1, 220, -38 }, // 0x000073D0
   { 56, 238, -96 }, // 0x000073D6
   { -37, 269, -89 }, // 0x000073DC
   { 17, 237, 37 }, // 0x000073E2
   { 56, 264, 94 }, // 0x000073E8
   { 13, 234, 43 }, // 0x000073EE
   { 11, 240, 41 }, // 0x000073F4
   { 3, 185, 12 }, // 0x000073FA
   { 6, 114, -2 }, // 0x00007400
   { -5, 114, 16 }, // 0x00007406
   { 19, 16, -6 }, // 0x0000740C
   { 4, 16, 18 }, // 0x00007412
   { -15, 114, -2 }, // 0x00007418
   { -10, 16, -6 }, // 0x0000741E
   { 717, 10, 10 }, // 0x00007424
   { 779, 10, 253 }, // 0x0000742A
   { 820, 20, 210 }, // 0x00007430
   { 820, 20, -210 }, // 0x00007436
   { 900, 10, -290 }, // 0x0000743C
   { 780, 10, -250 }, // 0x00007442
   { 1000, 20, -210 }, // 0x00007448
   { 768, 0, -270 }, // 0x0000744E
   { 698, 0, 10 }, // 0x00007454
   { 898, 0, -310 }, // 0x0000745A
   { 1008, 0, -260 }, // 0x00007460
   { 748, 0, 250 }, // 0x00007466
   { 808, 0, 290 }, // 0x0000746C
   { 898, 0, 310 }, // 0x00007472
   { 900, 10, 290 }, // 0x00007478
   { 1038, 0, 260 }, // 0x0000747E
   { 999, 10, 243 }, // 0x00007484
   { 1000, 20, 210 }, // 0x0000748A
   { -900, 10, 170 }, // 0x00007490
   { -779, 10, 133 }, // 0x00007496
   { -820, 20, 90 }, // 0x0000749C
   { -999, 10, 123 }, // 0x000074A2
   { -1000, 20, 90 }, // 0x000074A8
   { -1038, 0, 140 }, // 0x000074AE
   { -898, 0, 190 }, // 0x000074B4
   { -808, 0, 170 }, // 0x000074BA
   { -748, 0, 130 }, // 0x000074C0
   { -717, 10, 10 }, // 0x000074C6
   { -698, 0, 10 }, // 0x000074CC
   { -900, 10, -170 }, // 0x000074D2
   { -898, 0, -190 }, // 0x000074D8
   { -1008, 0, -140 }, // 0x000074DE
   { -1000, 20, -90 }, // 0x000074E4
   { -768, 0, -150 }, // 0x000074EA
   { -780, 10, -130 }, // 0x000074F0
   { 91, 10, 91 }, // 0x000074F6
   { 102, 10, -13 }, // 0x000074FC
   { 0, 20, 0 }, // 0x00007502
   { 0, 10, 128 }, // 0x00007508
   { -62, 10, 88 }, // 0x0000750E
   { -109, 10, 0 }, // 0x00007514
   { -84, 10, -71 }, // 0x0000751A
   { 0, 10, -128 }, // 0x00007520
   { 91, 10, -91 }, // 0x00007526
   { -820, 20, -90 }, // 0x0000752C
   { 122, 0, -13 }, // 0x00007532
   { 105, 0, 105 }, // 0x00007538
   { 0, 0, 148 }, // 0x0000753E
   { -75, 0, 100 }, // 0x00007544
   { -129, 0, 0 }, // 0x0000754A
   { -98, 0, -85 }, // 0x00007550
   { 0, 0, -148 }, // 0x00007556
   { 109, 0, -109 }, // 0x0000755C
}; 

CollisionHeader gIllusionRoomCol = { -1038, 0, -310, 1038, 269, 310, 79, gIllusionRoomCol_vtx_00007388, 112, gIllusionRoomCol_polygons_00006C88, gIllusionRoomCol_polygonTypes_00006C78, &gIllusionRoomCol_camDataList_00006C70, 0, 0 }; 

static Vtx object_blkobjVtx_007590[62] = {
    VTX(-30, -182, 22, 438, 1024, 106, 102, 43, 255),
    VTX(-7, -157, 1, 875, 303, 113, 111, 110, 255),
    VTX(-35, -174, 15, 438, 303, 113, 111, 110, 255),
    VTX(1, -160, 12, 875, 1024, 134, 121, 91, 255),
    VTX(7, -164, 1, 875, 1024, 81, 81, 81, 255),
    VTX(1, -160, 12, 875, 303, 134, 121, 91, 255),
    VTX(-30, -182, 22, 438, 303, 106, 102, 43, 255),
    VTX(-29, -184, 14, 438, 1024, 134, 121, 91, 255),
    VTX(-35, -174, 15, 1334, -75, 113, 111, 110, 255),
    VTX(-7, -157, 1, 898, 208, 113, 111, 110, 255),
    VTX(-29, -184, 14, 1346, 642, 134, 121, 91, 255),
    VTX(7, -164, 1, 911, 925, 81, 81, 81, 255),
    VTX(-80, -196, 49, 898, 208, 134, 121, 91, 255),
    VTX(-80, -196, 49, 875, 1024, 81, 81, 81, 255),
    VTX(-80, -196, 49, 875, 303, 134, 121, 91, 255),
    VTX(7, -218, -38, 438, 1024, 106, 102, 43, 255),
    VTX(3, -192, 9, 875, 303, 113, 111, 110, 255),
    VTX(3, -225, -37, 438, 303, 113, 111, 110, 255),
    VTX(11, -185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(-1, -220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-7, -187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(11, -185, -4, 875, 303, 134, 121, 91, 255),
    VTX(7, -218, -38, 438, 303, 106, 102, 43, 255),
    VTX(3, -225, -37, 1334, -75, 113, 111, 110, 255),
    VTX(3, -192, 9, 898, 208, 113, 111, 110, 255),
    VTX(-1, -220, -38, 1346, 642, 113, 111, 110, 255),
    VTX(-7, -187, -3, 911, 925, 81, 81, 81, 255),
    VTX(56, -238, -96, 898, 208, 116, 116, 107, 255),
    VTX(56, -238, -96, 875, 1024, 116, 116, 107, 255),
    VTX(56, -238, -96, 875, 303, 116, 116, 107, 255),
    VTX(3, -225, -37, 1334, -75, 134, 121, 91, 255),
    VTX(-37, -269, -89, 898, 208, 134, 121, 91, 255),
    VTX(7, -218, -38, 1346, 642, 113, 111, 110, 255),
    VTX(7, -218, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-37, -269, -89, 875, 1024, 134, 121, 91, 255),
    VTX(-1, -220, -38, 438, 303, 113, 111, 110, 255),
    VTX(-1, -220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-37, -269, -89, 875, 303, 134, 121, 91, 255),
    VTX(3, -225, -37, 438, 303, 134, 121, 91, 255),
    VTX(13, -234, 43, 438, 303, 113, 111, 110, 255),
    VTX(56, -264, 94, 875, 303, 116, 116, 107, 255),
    VTX(17, -237, 37, 438, 1024, 134, 121, 91, 255),
    VTX(17, -237, 37, 438, 303, 134, 121, 91, 255),
    VTX(56, -264, 94, 875, 1024, 116, 116, 107, 255),
    VTX(11, -240, 41, 438, 1024, 134, 121, 91, 255),
    VTX(11, -240, 41, 1346, 642, 134, 121, 91, 255),
    VTX(56, -264, 94, 898, 208, 116, 116, 107, 255),
    VTX(13, -234, 43, 1334, -75, 113, 111, 110, 255),
    VTX(3, -185, 12, 898, 208, 113, 111, 110, 255),
    VTX(-7, -187, -3, 911, 925, 81, 81, 81, 255),
    VTX(-7, -187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(11, -185, -4, 875, 303, 134, 121, 91, 255),
    VTX(11, -185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(3, -185, 12, 875, 303, 113, 111, 110, 255),
    VTX(-5, -114, 16, 438, 303, 134, 121, 91, 255),
    VTX(6, -114, -2, 438, 1024, 116, 116, 107, 255),
    VTX(4, -16, 18, 0, 303, 113, 111, 110, 255),
    VTX(19, -16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(6, -114, -2, 438, 303, 116, 116, 107, 255),
    VTX(-15, -114, -2, 438, 1024, 106, 102, 43, 255),
    VTX(19, -16, -6, 0, 303, 134, 121, 91, 255),
    VTX(-10, -16, -6, 0, 1024, 134, 121, 91, 255),
}; 

static Vtx object_blkobjVtx_007970[32] = {
    VTX(-15, -114, -2, 1346, 642, 106, 102, 43, 255),
    VTX(-7, -187, -3, 911, 925, 81, 81, 81, 255),
    VTX(3, -185, 12, 898, 208, 113, 111, 110, 255),
    VTX(-5, -114, 16, 1334, -75, 134, 121, 91, 255),
    VTX(-10, -16, -6, 1781, 359, 134, 121, 91, 255),
    VTX(4, -16, 18, 1769, -357, 113, 111, 110, 255),
    VTX(-35, 174, 15, 438, 303, 113, 111, 110, 255),
    VTX(-7, 157, 1, 875, 303, 113, 111, 110, 255),
    VTX(-30, 182, 22, 438, 1024, 106, 102, 43, 255),
    VTX(1, 160, 12, 875, 1024, 134, 121, 91, 255),
    VTX(-30, 182, 22, 438, 303, 106, 102, 43, 255),
    VTX(1, 160, 12, 875, 303, 134, 121, 91, 255),
    VTX(7, 164, 1, 875, 1024, 81, 81, 81, 255),
    VTX(-29, 184, 14, 438, 1024, 134, 121, 91, 255),
    VTX(-29, 184, 14, 1346, 642, 134, 121, 91, 255),
    VTX(-7, 157, 1, 898, 208, 113, 111, 110, 255),
    VTX(-35, 174, 15, 1334, -75, 113, 111, 110, 255),
    VTX(7, 164, 1, 911, 925, 81, 81, 81, 255),
    VTX(-80, 196, 49, 898, 208, 134, 121, 91, 255),
    VTX(-80, 196, 49, 875, 1024, 81, 81, 81, 255),
    VTX(-80, 196, 49, 875, 303, 134, 121, 91, 255),
    VTX(3, 225, -37, 438, 303, 113, 111, 110, 255),
    VTX(3, 192, 9, 875, 303, 113, 111, 110, 255),
    VTX(7, 218, -38, 438, 1024, 106, 102, 43, 255),
    VTX(11, 185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(7, 218, -38, 438, 303, 106, 102, 43, 255),
    VTX(11, 185, -4, 875, 303, 134, 121, 91, 255),
    VTX(-7, 187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(-1, 220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(-1, 220, -38, 1346, 642, 113, 111, 110, 255),
    VTX(3, 192, 9, 898, 208, 113, 111, 110, 255),
    VTX(3, 225, -37, 1334, -75, 113, 111, 110, 255),
}; 

static Vtx object_blkobjVtx_007B70[32] = {
    VTX(-1, 220, -38, 1346, 642, 113, 111, 110, 255),
    VTX(-7, 187, -3, 911, 925, 81, 81, 81, 255),
    VTX(3, 192, 9, 898, 208, 113, 111, 110, 255),
    VTX(3, 225, -37, 1334, -75, 113, 111, 110, 255),
    VTX(56, 238, -96, 898, 208, 116, 116, 107, 255),
    VTX(-1, 220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(56, 238, -96, 875, 1024, 116, 116, 107, 255),
    VTX(7, 218, -38, 438, 303, 106, 102, 43, 255),
    VTX(7, 218, -38, 438, 1024, 106, 102, 43, 255),
    VTX(56, 238, -96, 875, 303, 116, 116, 107, 255),
    VTX(3, 225, -37, 438, 303, 113, 111, 110, 255),
    VTX(7, 218, -38, 1346, 642, 113, 111, 110, 255),
    VTX(-37, 269, -89, 898, 208, 134, 121, 91, 255),
    VTX(3, 225, -37, 1334, -75, 134, 121, 91, 255),
    VTX(-1, 220, -38, 438, 303, 113, 111, 110, 255),
    VTX(-37, 269, -89, 875, 1024, 134, 121, 91, 255),
    VTX(7, 218, -38, 438, 1024, 113, 111, 110, 255),
    VTX(3, 225, -37, 438, 303, 134, 121, 91, 255),
    VTX(-37, 269, -89, 875, 303, 134, 121, 91, 255),
    VTX(-1, 220, -38, 438, 1024, 113, 111, 110, 255),
    VTX(17, 237, 37, 438, 1024, 134, 121, 91, 255),
    VTX(56, 264, 94, 875, 303, 116, 116, 107, 255),
    VTX(13, 234, 43, 438, 303, 113, 111, 110, 255),
    VTX(11, 240, 41, 438, 1024, 134, 121, 91, 255),
    VTX(56, 264, 94, 875, 1024, 116, 116, 107, 255),
    VTX(17, 237, 37, 438, 303, 134, 121, 91, 255),
    VTX(13, 234, 43, 1334, -75, 113, 111, 110, 255),
    VTX(56, 264, 94, 898, 208, 116, 116, 107, 255),
    VTX(11, 240, 41, 1346, 642, 134, 121, 91, 255),
    VTX(3, 185, 12, 898, 208, 113, 111, 110, 255),
    VTX(11, 185, -4, 875, 303, 134, 121, 91, 255),
    VTX(-7, 187, -3, 875, 1024, 81, 81, 81, 255),
}; 

static Vtx object_blkobjVtx_007D70[20] = {
    VTX(3, 185, 12, 875, 303, 113, 111, 110, 255),
    VTX(11, 185, -4, 875, 1024, 134, 121, 91, 255),
    VTX(17, 237, 37, 438, 1024, 134, 121, 91, 255),
    VTX(13, 234, 43, 438, 303, 113, 111, 110, 255),
    VTX(6, 114, -2, 438, 1024, 116, 116, 107, 255),
    VTX(-5, 114, 16, 438, 303, 134, 121, 91, 255),
    VTX(19, 16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(4, 16, 18, 0, 303, 113, 111, 110, 255),
    VTX(-7, 187, -3, 875, 1024, 81, 81, 81, 255),
    VTX(11, 185, -4, 875, 303, 134, 121, 91, 255),
    VTX(6, 114, -2, 438, 303, 116, 116, 107, 255),
    VTX(-15, 114, -2, 438, 1024, 106, 102, 43, 255),
    VTX(-10, 16, -6, 0, 1024, 134, 121, 91, 255),
    VTX(19, 16, -6, 0, 303, 134, 121, 91, 255),
    VTX(3, 185, 12, 898, 208, 113, 111, 110, 255),
    VTX(-7, 187, -3, 911, 925, 81, 81, 81, 255),
    VTX(-15, 114, -2, 1346, 642, 106, 102, 43, 255),
    VTX(-5, 114, 16, 1334, -75, 134, 121, 91, 255),
    VTX(4, 16, 18, 1769, -357, 113, 111, 110, 255),
    VTX(-10, 16, -6, 1781, 359, 134, 121, 91, 255),
}; 

Gfx gIllusionRoomTreeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_blkobjTex_013090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, ENVIRONMENT,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPDisplayList(0x08000000),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_blkobjVtx_007590[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 12, 8, 0, 6, 13, 7, 0),
    gsSP2Triangles(2, 14, 0, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 25, 27, 23, 0),
    gsSP2Triangles(22, 28, 19, 0, 17, 29, 15, 0),
    gsSPVertex(&object_blkobjVtx_007590[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 17, 18, 15, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 12, 0),
    gsSP2Triangles(11, 22, 23, 0, 11, 23, 9, 0),
    gsSP2Triangles(24, 23, 22, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 21, 20, 0, 28, 20, 29, 0),
    gsSP2Triangles(30, 28, 29, 0, 30, 29, 31, 0),
    gsSPVertex(&object_blkobjVtx_007970[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 14, 0, 13, 19, 10, 0),
    gsSP2Triangles(8, 20, 6, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_blkobjVtx_007B70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 1, 29, 0, 28, 29, 26, 0),
    gsSP2Triangles(25, 30, 31, 0, 25, 31, 23, 0),
    gsSPVertex(&object_blkobjVtx_007D70[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 11, 10, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(18, 17, 16, 0, 18, 16, 19, 0),
    gsSPEndDisplayList(),
}; 

u64 object_blkobjTex_008090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_008090.rgb5a1.inc.c"
};

u64 object_blkobjTex_008890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_008890.rgb5a1.inc.c"
};

u64 object_blkobjTex_009090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_009090.rgb5a1.inc.c"
};

u64 object_blkobjTex_009890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_009890.rgb5a1.inc.c"
};

u64 object_blkobjTex_00A090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00A090.ia16.inc.c"
};

u64 object_blkobjTex_00A890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00A890.rgb5a1.inc.c"
};

u64 object_blkobjTex_00B090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00B090.rgb5a1.inc.c"
};

u64 object_blkobjTex_00B890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00B890.rgb5a1.inc.c"
};

u64 object_blkobjTex_00C090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00C090.rgb5a1.inc.c"
};

u64 object_blkobjTex_00C890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00C890.rgb5a1.inc.c"
};

u64 object_blkobjTex_00D090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00D090.rgb5a1.inc.c"
};

u64 object_blkobjTex_00D890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00D890.rgb5a1.inc.c"
};

u64 object_blkobjTex_00E090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00E090.rgb5a1.inc.c"
};

u64 object_blkobjTex_00E890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00E890.rgb5a1.inc.c"
};

u64 object_blkobjTex_00F890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_00F890.rgb5a1.inc.c"
};

u64 object_blkobjTex_010090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_010090.rgb5a1.inc.c"
};

u64 object_blkobjTex_010890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_010890.rgb5a1.inc.c"
};

u64 object_blkobjTex_011090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_011090.rgb5a1.inc.c"
};

u64 object_blkobjTex_011890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_011890.rgb5a1.inc.c"
};

u64 object_blkobjTex_012090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_012090.rgb5a1.inc.c"
};

u64 object_blkobjTex_012890[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_012890.rgb5a1.inc.c"
};

u64 object_blkobjTex_013090[] = {
#include "assets/objects/object_blkobj//object_blkobjTex_013090.rgb5a1.inc.c"
};


