#include "global.h"
#include "objects/object_gi_nuts/object_gi_nuts.h"
#include "objects/object_gi_stick/object_gi_stick.h"
#include "textures/icon_item_static/icon_item_static.h"

Vtx SWGetItem32Vtx[4] = {
    VTX(-30, -30, 0, 0, 32 << 5, 255, 255, 255, 255),
    VTX(30, -30, 0, 32 << 5, 32 << 5, 255, 255, 255, 255),
    VTX(30, 30, 0, 32 << 5, 0, 255, 255, 255, 255),
    VTX(-30, 30, 0, 0, 0, 255, 255, 255, 255),
};

Vtx SWGetItem48Vtx[4] = {
    VTX(-30, -30, 0, 0, 48 << 5, 255, 255, 255, 255),
    VTX(30, -30, 0, 48 << 5, 48 << 5, 255, 255, 255, 255),
    VTX(30, 30, 0, 48 << 5, 0, 255, 255, 255, 255),
    VTX(-30, 30, 0, 0, 0, 255, 255, 255, 255),
};

Gfx gSWGetItem32DL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0,
                       TEXEL0),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x07000000, G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&SWGetItem32Vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gSWGetItem48DL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0,
                       0, 0, TEXEL0),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetPrimColor(0, 0, 255, 0, 0, 255),
    gsDPLoadTextureBlock(0x07000000, G_IM_FMT_IA, G_IM_SIZ_8b, 48, 48, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&SWGetItem48Vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

/**
 * Draw "Get Item" Model
 * Calls the corresponding draw function for the given draw ID
 */
void GetItem_Draw(GlobalContext* globalCtx, s16 drawId) {
    // sDrawItemTable[drawId].drawFunc(globalCtx, drawId);

    if (globalCtx->sceneNum == SCENE_PR_KOKIRI_HOUSE_1) {
        if (drawId == GID_NUTS) {
            GetItem_DrawDekuNuts(globalCtx);
            return;
        } else if (drawId == GID_STICK) {
            GetItem_DrawDekuSticks(globalCtx);
            return;
        }
    }

    OPEN_DISPS(globalCtx->state.gfxCtx);

    POLY_XLU_DISP = Gfx_CallSetupDL(POLY_XLU_DISP, 5);
    gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, __FILE__, __LINE__),
              G_MTX_MODELVIEW | G_MTX_LOAD);
    if (drawId == 0x13 && !gIsFullHeartPiece) {
        gSPDisplayList(POLY_XLU_DISP++, gSWGetItem48DL);
    } else {
        gSPDisplayList(POLY_XLU_DISP++, gSWGetItem32DL);
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void GetItem_DrawDekuNuts(GlobalContext* globalCtx) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 1 * (globalCtx->state.frames * 6),
                                1 * (globalCtx->state.frames * 6), 32, 32, 1, 1 * (globalCtx->state.frames * 6),
                                1 * (globalCtx->state.frames * 6), 32, 32));
    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_draw.c", 901),
              G_MTX_MODELVIEW | G_MTX_LOAD);
    gSPDisplayList(POLY_OPA_DISP++, gGiNutDL);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void GetItem_DrawDekuSticks(GlobalContext* globalCtx) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);
    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_draw.c", 963),
              G_MTX_MODELVIEW | G_MTX_LOAD);
    gSPDisplayList(POLY_OPA_DISP++, gGiStickDL);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
