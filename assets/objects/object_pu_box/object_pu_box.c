#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_pu_box.h"

static Vtx object_pu_boxVtx_0000C8[24];
static Vtx object_pu_boxVtx_000448[24];
static Vtx object_pu_boxVtx_0007C8[24];
static Vtx object_pu_boxVtx_000B48[24];

Gfx gUnknownUnusedBox1DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnknownUnusedBoxTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&object_pu_boxVtx_0000C8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_pu_boxVtx_0000C8[24] = {
    VTX(-3999, 0, -4000, 0, 1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 0, -1024, 0, 130, 0, 255),
    VTX(4000, 0, 3999, 2048, -1024, 0, 130, 0, 255),
    VTX(-3999, 0, 3999, 2048, 1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 2048, 1024, 127, 0, 0, 255),
    VTX(4000, 4000, -4000, 2048, 0, 127, 0, 0, 255),
    VTX(4000, 4000, 3999, 0, 0, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 0, 1024, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 2048, 1024, 0, 0, 126, 255),
    VTX(4000, 4000, 3999, 2048, 0, 0, 0, 126, 255),
    VTX(-3999, 4000, 3999, 0, 0, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 0, 1024, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 0, 1024, 130, 0, 0, 255),
    VTX(-3999, 4000, 3999, 0, 0, 130, 0, 0, 255),
    VTX(-3999, 4000, -4000, 2048, 0, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 2048, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 0, 1024, 0, 0, 129, 255),
    VTX(-3999, 4000, -4000, 0, 0, 0, 0, 129, 255),
    VTX(4000, 4000, -4000, 2048, 0, 0, 0, 129, 255),
    VTX(4000, 0, -4000, 2048, 1024, 0, 0, 129, 255),
    VTX(4000, 4000, -4000, 2048, 1024, 0, 127, 0, 255),
    VTX(-3999, 4000, -4000, 2048, -1024, 0, 127, 0, 255),
    VTX(-3999, 4000, 3999, 0, -1024, 0, 127, 0, 255),
    VTX(4000, 4000, 3999, 0, 1024, 0, 127, 0, 255),
}; 

static u8 unaccounted_000248[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gUnknownUnusedBox1Col_camDataList_00000250[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gUnknownUnusedBox1Col_polygonTypes_00000258[] = {
   0x01000000, 0x000007C0,
}; 

CollisionPoly gUnknownUnusedBox1Col_polygons_00000260[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000260
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000270
   { 0x0000, 0x0001, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00000280
   { 0x0000, 0x0001, 0x0005, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00000290
   { 0x0000, 0x0002, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x000002A0
   { 0x0000, 0x0002, 0x0006, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x000002B0
   { 0x0000, 0x0003, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x000002C0
   { 0x0000, 0x0003, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x000002D0
   { 0x0000, 0x0000, 0x0007, 0x0004, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x000002E0
   { 0x0000, 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x000002F0
   { 0x0000, 0x0004, 0x0007, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xF060 }, // 0x00000300
   { 0x0000, 0x0004, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xF060 }, // 0x00000310

}; 

Vec3s gUnknownUnusedBox1Col_vtx_00000320[] = {
   { -3999, 0, -4000 }, // 0x00000320
   { 4000, 0, -4000 }, // 0x00000326
   { 4000, 0, 3999 }, // 0x0000032C
   { -3999, 0, 3999 }, // 0x00000332
   { 4000, 4000, -4000 }, // 0x00000338
   { 4000, 4000, 3999 }, // 0x0000033E
   { -3999, 4000, 3999 }, // 0x00000344
   { -3999, 4000, -4000 }, // 0x0000034A
}; 

CollisionHeader gUnknownUnusedBox1Col = { -3999, 0, -4000, 4000, 4000, 3999, 8, gUnknownUnusedBox1Col_vtx_00000320, 12, gUnknownUnusedBox1Col_polygons_00000260, gUnknownUnusedBox1Col_polygonTypes_00000258, &gUnknownUnusedBox1Col_camDataList_00000250, 0, 0 }; 

static u32 pad37C = 0;

Gfx gUnknownUnusedBox2DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnknownUnusedBoxTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&object_pu_boxVtx_000448[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_pu_boxVtx_000448[24] = {
    VTX(-3999, 0, -4000, 0, 1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 0, -1024, 0, 130, 0, 255),
    VTX(4000, 0, 3999, 2048, -1024, 0, 130, 0, 255),
    VTX(-3999, 0, 3999, 2048, 1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 0, 1024, 127, 0, 0, 255),
    VTX(4000, 8000, -4000, 0, -1024, 127, 0, 0, 255),
    VTX(4000, 8000, 3999, 2048, -1024, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 2048, 1024, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 2048, 1024, 0, 0, 126, 255),
    VTX(4000, 8000, 3999, 2048, -1024, 0, 0, 126, 255),
    VTX(-3999, 8000, 3999, 0, -1024, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 0, 1024, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 2048, 1024, 130, 0, 0, 255),
    VTX(-3999, 8000, 3999, 2048, -1024, 130, 0, 0, 255),
    VTX(-3999, 8000, -4000, 0, -1024, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 0, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 0, 1024, 0, 0, 129, 255),
    VTX(-3999, 8000, -4000, 0, -1024, 0, 0, 129, 255),
    VTX(4000, 8000, -4000, 2048, -1024, 0, 0, 129, 255),
    VTX(4000, 0, -4000, 2048, 1024, 0, 0, 129, 255),
    VTX(4000, 8000, -4000, 2048, 1024, 0, 127, 0, 255),
    VTX(-3999, 8000, -4000, 2048, -1024, 0, 127, 0, 255),
    VTX(-3999, 8000, 3999, 0, -1024, 0, 127, 0, 255),
    VTX(4000, 8000, 3999, 0, 1024, 0, 127, 0, 255),
}; 

static u8 unaccounted_0005C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gUnknownUnusedBox2Col_camDataList_000005D0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gUnknownUnusedBox2Col_polygonTypes_000005D8[] = {
   0x01000000, 0x000007C0,
}; 

CollisionPoly gUnknownUnusedBox2Col_polygons_000005E0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000005E0
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000005F0
   { 0x0000, 0x0001, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00000600
   { 0x0000, 0x0001, 0x0005, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00000610
   { 0x0000, 0x0002, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x00000620
   { 0x0000, 0x0002, 0x0006, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x00000630
   { 0x0000, 0x0003, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x00000640
   { 0x0000, 0x0003, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x00000650
   { 0x0000, 0x0000, 0x0007, 0x0004, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x00000660
   { 0x0000, 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x00000670
   { 0x0000, 0x0004, 0x0007, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xE0C0 }, // 0x00000680
   { 0x0000, 0x0004, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xE0C0 }, // 0x00000690

}; 

Vec3s gUnknownUnusedBox2Col_vtx_000006A0[] = {
   { -3999, 0, -4000 }, // 0x000006A0
   { 4000, 0, -4000 }, // 0x000006A6
   { 4000, 0, 3999 }, // 0x000006AC
   { -3999, 0, 3999 }, // 0x000006B2
   { 4000, 8000, -4000 }, // 0x000006B8
   { 4000, 8000, 3999 }, // 0x000006BE
   { -3999, 8000, 3999 }, // 0x000006C4
   { -3999, 8000, -4000 }, // 0x000006CA
}; 

CollisionHeader gUnknownUnusedBox2Col = { -3999, 0, -4000, 4000, 8000, 3999, 8, gUnknownUnusedBox2Col_vtx_000006A0, 12, gUnknownUnusedBox2Col_polygons_000005E0, gUnknownUnusedBox2Col_polygonTypes_000005D8, &gUnknownUnusedBox2Col_camDataList_000005D0, 0, 0 }; 

static u32 pad6FC = 0;

Gfx gUnknownUnusedBox3DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnknownUnusedBoxTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&object_pu_boxVtx_0007C8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_pu_boxVtx_0007C8[24] = {
    VTX(-3999, 0, -4000, 2048, -1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 2048, 1024, 0, 130, 0, 255),
    VTX(4000, 0, 3999, 0, 1024, 0, 130, 0, 255),
    VTX(-3999, 0, 3999, 0, -1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 2048, 1024, 127, 0, 0, 255),
    VTX(4000, 12000, -4000, 2048, -2048, 127, 0, 0, 255),
    VTX(4000, 12000, 3999, 0, -2048, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 0, 1024, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 0, 1024, 0, 0, 126, 255),
    VTX(4000, 12000, 3999, 0, -2048, 0, 0, 126, 255),
    VTX(-3999, 12000, 3999, 2048, -2048, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 2048, 1024, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 0, 1024, 130, 0, 0, 255),
    VTX(-3999, 12000, 3999, 0, -2048, 130, 0, 0, 255),
    VTX(-3999, 12000, -4000, 2048, -2048, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 2048, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 2048, 1024, 0, 0, 129, 255),
    VTX(-3999, 12000, -4000, 2048, -2048, 0, 0, 129, 255),
    VTX(4000, 12000, -4000, 0, -2048, 0, 0, 129, 255),
    VTX(4000, 0, -4000, 0, 1024, 0, 0, 129, 255),
    VTX(4000, 12000, -4000, 2048, 1024, 0, 127, 0, 255),
    VTX(-3999, 12000, -4000, 2048, -1024, 0, 127, 0, 255),
    VTX(-3999, 12000, 3999, 0, -1024, 0, 127, 0, 255),
    VTX(4000, 12000, 3999, 0, 1024, 0, 127, 0, 255),
}; 

static u8 unaccounted_000948[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gUnknownUnusedBox3Col_camDataList_00000950[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gUnknownUnusedBox3Col_polygonTypes_00000958[] = {
   0x01000000, 0x000007C0,
}; 

CollisionPoly gUnknownUnusedBox3Col_polygons_00000960[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000960
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000970
   { 0x0000, 0x0001, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00000980
   { 0x0000, 0x0001, 0x0005, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00000990
   { 0x0000, 0x0002, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x000009A0
   { 0x0000, 0x0002, 0x0006, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x000009B0
   { 0x0000, 0x0003, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x000009C0
   { 0x0000, 0x0003, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x000009D0
   { 0x0000, 0x0000, 0x0007, 0x0004, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x000009E0
   { 0x0000, 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x000009F0
   { 0x0000, 0x0004, 0x0007, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xD120 }, // 0x00000A00
   { 0x0000, 0x0004, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xD120 }, // 0x00000A10

}; 

Vec3s gUnknownUnusedBox3Col_vtx_00000A20[] = {
   { -3999, 0, -4000 }, // 0x00000A20
   { 4000, 0, -4000 }, // 0x00000A26
   { 4000, 0, 3999 }, // 0x00000A2C
   { -3999, 0, 3999 }, // 0x00000A32
   { 4000, 12000, -4000 }, // 0x00000A38
   { 4000, 12000, 3999 }, // 0x00000A3E
   { -3999, 12000, 3999 }, // 0x00000A44
   { -3999, 12000, -4000 }, // 0x00000A4A
}; 

CollisionHeader gUnknownUnusedBox3Col = { -3999, 0, -4000, 4000, 12000, 3999, 8, gUnknownUnusedBox3Col_vtx_00000A20, 12, gUnknownUnusedBox3Col_polygons_00000960, gUnknownUnusedBox3Col_polygonTypes_00000958, &gUnknownUnusedBox3Col_camDataList_00000950, 0, 0 }; 

static u32 padA7C = 0;

Gfx gUnknownUnusedBox4DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnknownUnusedBoxTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&object_pu_boxVtx_000B48[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_pu_boxVtx_000B48[24] = {
    VTX(-3999, 0, -4000, 0, -1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 2048, -1024, 0, 130, 0, 255),
    VTX(4000, 0, 3999, 2048, 1024, 0, 130, 0, 255),
    VTX(-3999, 0, 3999, 0, 1024, 0, 130, 0, 255),
    VTX(4000, 0, -4000, 0, 1024, 127, 0, 0, 255),
    VTX(4000, 16000, -4000, 0, -3072, 127, 0, 0, 255),
    VTX(4000, 16000, 3999, 2048, -3072, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 2048, 1024, 127, 0, 0, 255),
    VTX(4000, 0, 3999, 2048, 1024, 0, 0, 126, 255),
    VTX(4000, 16000, 3999, 2048, -3072, 0, 0, 126, 255),
    VTX(-3999, 16000, 3999, 0, -3072, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 0, 1024, 0, 0, 126, 255),
    VTX(-3999, 0, 3999, 2048, 1024, 130, 0, 0, 255),
    VTX(-3999, 16000, 3999, 2048, -3072, 130, 0, 0, 255),
    VTX(-3999, 16000, -4000, 0, -3072, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 0, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, -4000, 0, 1024, 0, 0, 129, 255),
    VTX(-3999, 16000, -4000, 0, -3072, 0, 0, 129, 255),
    VTX(4000, 16000, -4000, 2048, -3072, 0, 0, 129, 255),
    VTX(4000, 0, -4000, 2048, 1024, 0, 0, 129, 255),
    VTX(4000, 16000, -4000, 2048, -1024, 0, 127, 0, 255),
    VTX(-3999, 16000, -4000, 0, -1024, 0, 127, 0, 255),
    VTX(-3999, 16000, 3999, 0, 1024, 0, 127, 0, 255),
    VTX(4000, 16000, 3999, 2048, 1024, 0, 127, 0, 255),
}; 

u64 gUnknownUnusedBoxTex[] = {
#include "assets/objects/object_pu_box/unknown_unused_box.rgb5a1.inc.c"
};

static u8 unaccounted_0014C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gUnknownUnusedBox4Col_camDataList_000014D0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gUnknownUnusedBox4Col_polygonTypes_000014D8[] = {
   0x01000000, 0x000007C0,
}; 

CollisionPoly gUnknownUnusedBox4Col_polygons_000014E0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000014E0
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000014F0
   { 0x0000, 0x0001, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00001500
   { 0x0000, 0x0001, 0x0005, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00001510
   { 0x0000, 0x0002, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x00001520
   { 0x0000, 0x0002, 0x0006, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF061 }, // 0x00001530
   { 0x0000, 0x0003, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x00001540
   { 0x0000, 0x0003, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000, 0xF061 }, // 0x00001550
   { 0x0000, 0x0000, 0x0007, 0x0004, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x00001560
   { 0x0000, 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0xF060 }, // 0x00001570
   { 0x0000, 0x0004, 0x0007, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xC180 }, // 0x00001580
   { 0x0000, 0x0004, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xC180 }, // 0x00001590

}; 

Vec3s gUnknownUnusedBox4Col_vtx_000015A0[] = {
   { -3999, 0, -4000 }, // 0x000015A0
   { 4000, 0, -4000 }, // 0x000015A6
   { 4000, 0, 3999 }, // 0x000015AC
   { -3999, 0, 3999 }, // 0x000015B2
   { 4000, 16000, -4000 }, // 0x000015B8
   { 4000, 16000, 3999 }, // 0x000015BE
   { -3999, 16000, 3999 }, // 0x000015C4
   { -3999, 16000, -4000 }, // 0x000015CA
}; 

CollisionHeader gUnknownUnusedBox4Col = { -3999, 0, -4000, 4000, 16000, 3999, 8, gUnknownUnusedBox4Col_vtx_000015A0, 12, gUnknownUnusedBox4Col_polygons_000014E0, gUnknownUnusedBox4Col_polygonTypes_000014D8, &gUnknownUnusedBox4Col_camDataList_000014D0, 0, 0 }; 

static u32 pad15FC = 0;


