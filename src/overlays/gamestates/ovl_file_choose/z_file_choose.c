#include "ultra64.h"
#include "global.h"
#include "textures/title_static/title_static.h"

void FileSelect_FadeInMenuWindow(FileChooseContext* this);
void FileSelect_UpdateMenuMain(FileChooseContext* this);
void FileSelect_Exit(FileChooseContext* this);
void FileSelect_UpdateMenuSub(FileChooseContext* this);
void FileSelect_FadeOutMenuMain(FileChooseContext* this);
void FileSelect_DrawMenuMain(FileChooseContext* this);
void FileSelect_DrawMenuSub(FileChooseContext* this);
void FileSelect_FadeInMenuMain(FileChooseContext* this);
void FileSelect_DrawCredits(FileChooseContext* this);
void FileSelect_UpdateCredits(FileChooseContext* this);
void FileSelect_DrawTitle(GameState* thisx);
void FileSelect_DrawSkybox(GameState* thisx);
void FileSelect_Title(GameState* thisx);
void FileSelect_MenuMain(GameState* thisx);
void FileSelect_Update(GameState* thisx);

typedef enum {
    /* */ MAIN_HYRULE_TOUR,
    /* */ MAIN_DUNGEON_TOUR,
    /* */ MAIN_BATTLE_TOUR,
    /* */ MAIN_EXTRAS
} MainMenuIndex;

#define LABEL_SPACING 25

#define LABEL_X 68
#define LABEL_Y_BASE 80

#define LABEL_WIDTH 144
#define LABEL_HEIGHT 16

#define gDPSetImageTile(pkt, fmt, siz, uls, ult, lrs, lrt, pal, cms, cmt, masks, maskt, shifts, shiftt)                \
    do {                                                                                                               \
        gDPPipeSync(pkt);                                                                                              \
        gDPTileSync(pkt);                                                                                              \
        gDPSetTile(pkt, fmt, siz, (((((lrs) - (uls) + 1) * siz##_TILE_BYTES) + 7) >> 3), 0, G_TX_LOADTILE, 0, cmt,     \
                   maskt, shiftt, cms, masks, shifts);                                                                 \
        gDPTileSync(pkt);                                                                                              \
        gDPSetTile(pkt, fmt, siz, (((((lrs) - (uls) + 1) * siz##_LINE_BYTES) + 7) >> 3), 0, G_TX_RENDERTILE, pal, cmt, \
                   maskt, shiftt, cms, masks, shifts);                                                                 \
        gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls) << G_TEXTURE_IMAGE_FRAC, (ult) << G_TEXTURE_IMAGE_FRAC,             \
                       (lrs) << G_TEXTURE_IMAGE_FRAC, (lrt) << G_TEXTURE_IMAGE_FRAC);                                  \
    } while (0)

#define G_CC_INT552 TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0
#define G_CC_INT553 PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0
#define G_CC_INT10 PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, ENVIRONMENT
#define G_CC_INT11 PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, ENVIRONMENT, 0
#define G_CC_INT9 PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0
#define G_CC_INT444 0, 0, 0, TEXEL0, TEXEL0, 0, PRIMITIVE, 0
#define G_CC_INT3 TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0
#define G_CC_INT4 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0

static Gfx sFillRectSetupDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                          G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsDPSetOtherMode(G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                         G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_1PRIMITIVE,
                     G_AC_NONE | G_ZS_PIXEL | G_RM_CLD_SURF | G_RM_CLD_SURF2),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
    gsSPEndDisplayList(),
};

static Gfx* Gfx_TextureRectangleIA8(Gfx* head, void* texture, s16 texWidth, s16 texHeight, s16 rectLeft, s16 rectTop,
                                    s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy) {
    gDPLoadTextureBlock(head++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, texWidth, texHeight, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle(head++, rectLeft * 4, rectTop * 4, (rectLeft + rectWidth) * 4, (rectTop + rectHeight) * 4,
                        G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    gDPPipeSync(head++);

    return head;
}

static Gfx* Gfx_TextureRectangleIA16(Gfx* head, void* texture, s16 texWidth, s16 texHeight, s16 rectLeft, s16 rectTop,
                                     s16 rectWidth, s16 rectHeight, u16 dsdx, u16 dtdy) {
    gDPLoadTextureBlock(head++, texture, G_IM_FMT_IA, G_IM_SIZ_16b, texWidth, texHeight, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle(head++, rectLeft * 4, rectTop * 4, (rectLeft + rectWidth) * 4, (rectTop + rectHeight) * 4,
                        G_TX_RENDERTILE, 0, 0, dsdx, dtdy);

    gDPPipeSync(head++);

    return head;
}

static Gfx* Gfx_TextureMultiRectangle(Gfx* dlist, void* texture1, void* texture2, s16 width1, s16 height1, s16 width2,
                                      s16 height2, s16 xpos, s16 ypos, s16 xsize, s16 ysize, u16 xscale, u16 yscale,
                                      u16 xscale2, u16 yscale2, u16 flag) {
    gDPLoadMultiBlock_4b(dlist++, texture1, 0, G_TX_RENDERTILE, G_IM_FMT_I, width1, height1, 0,
                         G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD);
    if (!flag) {
        gDPLoadMultiBlock(dlist++, texture2, 256, G_TX_RENDERTILE + 1, G_IM_FMT_I, G_IM_SIZ_8b, width2, height2, 0,
                          G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, 5, xscale2, yscale2);
        gDPSetTileSize(dlist++, G_TX_RENDERTILE + 1, 0, VREG(27) & 0x7f, 31 << 2, (VREG(27) & 0x7f) + (31 << 2));
    }
    gSPTextureRectangle(dlist++, ((xpos)*0x4), ((ypos)*0x4), ((xpos + xsize) * 0x4), ((ypos + ysize) * 0x4),
                        G_TX_RENDERTILE, 0, 0, xscale, yscale);

    return dlist;
}

static void FileChoose_DrawImageRGBA32(GraphicsContext* gfxCtx, s16 centerX, s16 centerY, u8* addr, unsigned int sizex,
                                       unsigned int sizey) {

    int i, cnt, sx, sy;
    int cuty, size, remainder, texsize;
    u8* imageaddr;

    OPEN_DISPS(gfxCtx);

    func_80094CBC(gfxCtx);

    imageaddr = addr;

    size = (sizex * sizey * 4);
    sx = centerX - (sizex / 2);
    sy = centerY - (sizey / 2);
    cuty = (4096 / (sizex * 4));
    texsize = sizex * cuty * 4;

    cnt = size / texsize;
    remainder = size % texsize;
    if (remainder) {
        cnt++;
    }

    gDPSetImageTile(POLY_OPA_DISP++, G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, (sizex - 1), (cuty - 1), 0,
                    G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                    G_TX_NOLOD);

    size -= texsize;

    for (i = 0; i < cnt; i++) {
        gDPSetTextureImage(POLY_OPA_DISP++, G_IM_FMT_RGBA, G_IM_SIZ_32b, sizex, imageaddr);
        gDPLoadSync(POLY_OPA_DISP++);
        gDPLoadTile(POLY_OPA_DISP++, G_TX_LOADTILE, 0, 0, (sizex - 1) << G_TEXTURE_IMAGE_FRAC,
                    (cuty - 1) << G_TEXTURE_IMAGE_FRAC);

        gSPTextureRectangle(POLY_OPA_DISP++, sx << 2, sy << 2, (sx + sizex) << 2, (sy + cuty) << 2, 0, 0 << 5, 0 << 5,
                            1 << 10, 1 << 10);

        imageaddr += texsize;
        sy += cuty;

        if (size - texsize < 0) {
            if (size > 0) {
                cuty = size / (sizex * 4);
                size -= texsize;
                gDPSetImageTile(POLY_OPA_DISP++, G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, (sizex - 1), (cuty - 1), 0,
                                G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);
            }
        } else {
            size -= texsize;
        }
    }
    CLOSE_DISPS(gfxCtx);
}

static void moji_display(GraphicsContext* gfxCtx, u8* data, int xpos, int ypos) {
    OPEN_DISPS(gfxCtx);

    gDPLoadTextureBlock_4b(POLY_OPA_DISP++, data, G_IM_FMT_I, 16, 16, 0, G_TX_CLAMP, G_TX_CLAMP, G_TX_NOMASK,
                           G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle(POLY_OPA_DISP++, xpos << 2, ypos << 2, (xpos + 13) << 2, (ypos + 13) << 2, G_TX_RENDERTILE, 0,
                        0, 650 << 1, 650 << 1);

    CLOSE_DISPS(gfxCtx);
}

static s16 cursorColors[][3] = {
    { 255, 200, 200 }, // Dawn
    { 220, 220, 255 }, // Day
    { 255, 200, 70 },  // Dusk
    { 155, 255, 255 }, // Night
};

/* =================================== Update Functions =================================== */

#define CREDITS_FRAMES 200  // number of frames for the credits to last for
#define CREDITS_A_FRAMES 20 // number of frames for alpha change

void FileSelect_FadeInCredits(FileChooseContext* this) {
    this->creditsAlphaFrac = 1.0f;
    this->creditsTimer = CREDITS_A_FRAMES; // start credits out already fully opaque
    this->creditsPage = 0;

    FileSelect_DrawCredits(this);

    this->subAlpha -= 30;
    this->cursorAlpha -= 30;

    if (this->subAlpha <= 0) {
        this->subAlpha = 0;
        this->cursorAlpha = 0;
        this->creditsAlpha = 255;
        this->update = FileSelect_UpdateCredits;
        this->draw = FileSelect_DrawCredits;
    }
}

void FileSelect_FadeOutCredits(FileChooseContext* this) {
    FileSelect_DrawMenuSub(this);
    this->creditsAlpha -= 30;
    this->cursorAlpha += 30;

    if (this->creditsAlpha <= 0) {
        this->creditsAlpha = 0;
        this->subAlpha = 255;
        this->cursorAlpha = 255;
        this->update = FileSelect_UpdateMenuSub;
        this->draw = FileSelect_DrawMenuSub;
    }
}

void FileSelect_UpdateCredits(FileChooseContext* this) {
    Input* input = &this->state.input[0];

    // Update alpha
    if (this->creditsTimer < CREDITS_A_FRAMES) {
        this->creditsAlphaFrac = (f32)this->creditsTimer / CREDITS_A_FRAMES;
    } else if (this->creditsTimer > CREDITS_FRAMES - CREDITS_A_FRAMES) {
        this->creditsAlphaFrac =
            1.0f - (((f32)this->creditsTimer - (CREDITS_FRAMES - CREDITS_A_FRAMES)) / CREDITS_A_FRAMES);
    } else {
        this->creditsAlphaFrac = 1.0f;
    }

    // Update timer
    this->creditsTimer++;
    if (this->creditsTimer > CREDITS_FRAMES) {
        // Switch to next credits page
        this->creditsPage++;
        if (this->creditsPage > 2) {
            this->creditsPage = 0;
        }

        // Reset timer
        this->creditsTimer = 0;
    }

    // Exit back to the sub menu
    if (CHECK_BTN_ALL(input->press.button, BTN_B)) {
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_CLOSE, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        this->update = FileSelect_FadeOutCredits;
    }
}

void FileSelect_FadeInMenuWindow(FileChooseContext* this) {
    this->staticLabelsAlpha += 20;
    this->windowAlpha += 20;
    this->cursorAlpha += 20;
    this->mainAlpha += 20;

    if (this->windowAlpha >= 255) {
        this->mainAlpha = this->staticLabelsAlpha = this->cursorAlpha = this->windowAlpha = 255;
        this->draw = FileSelect_DrawMenuMain;
        this->update = FileSelect_UpdateMenuMain;
    }
}

void FileSelect_DrawTitle(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    Font* font = &this->font;
    u16 i, j, k, xpos, ypos;
    static s16 noAlpha = 0;
    static s16 noAlphaMode = 0;
    static s16 noAlphaCounter = 0;
    static u8 noController[] = {
        0x17, 0x18, 0x0C, 0x18, 0x17, 0x1D, 0x1B, 0x18, 0x15, 0x15, 0x0E, 0x1B,
    };

    OPEN_DISPS(this->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x01, this->staticSegment);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCycleType(POLY_OPA_DISP++, G_CYC_2CYCLE);
    gDPSetRenderMode(POLY_OPA_DISP++, G_RM_PASS, G_RM_XLU_SURF2);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_INT552, G_CC_INT553);

    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->titleAlpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 255, 150, 0, 255);

    FileChoose_DrawImageRGBA32(this->state.gfxCtx, ZREG(16), ZREG(17), gTitleTriforceTex, 112, 96);
    FileChoose_DrawImageRGBA32(this->state.gfxCtx, ZREG(14), ZREG(15), gTitleTextTex, 192, 48);
    FileChoose_DrawImageRGBA32(this->state.gfxCtx, ZREG(18), ZREG(19), gTitleSubtitleTex, 128, 32);

    if (!ZREG(5)) {
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_INT10, G_CC_INT10);
    } else if (ZREG(5) == 1) {
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_INT9, G_CC_INT9);
    }

    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->effectAlpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 255, 255, 0);

    for (i = 0, ypos = ZREG(8) - 7; i < 27; i++, ypos += 7) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, gTitleEffectsMaskTex + (264 * 7 * i), G_IM_FMT_I, G_IM_SIZ_8b, 264, 7, 0,
                            G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);
        gSPTextureRectangle(POLY_OPA_DISP++, (ZREG(7) << 2) - 20, ypos << 2, (ZREG(7) + 264) << 2, (ypos + 7) << 2,
                            G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
    }

    gDPLoadTextureBlock(POLY_OPA_DISP++, gTitleEffectsMaskTex + (264 * 7 * i), G_IM_FMT_I, G_IM_SIZ_8b, 264, 3, 0,
                        G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOLOD);
    gSPTextureRectangle(POLY_OPA_DISP++, (ZREG(7) << 8) - 20, ypos << 2, (ZREG(7) + 264) << 2, (ypos + 3) << 2,
                        G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    func_800944C4(this->state.gfxCtx);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_INT3, G_CC_INT3);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->logoAlpha);
    gDPLoadTextureBlock(POLY_OPA_DISP++, gTitleNintendoLogoTex, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 16, 0, G_TX_CLAMP,
                        G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle(POLY_OPA_DISP++, 94 << 2, 198 << 2, (94 + 128) << 2, (198 + 16) << 2, G_TX_RENDERTILE, 0, 0,
                        1 << 10, 1 << 10);

    if (gSaveContext.fileNum == 0xFEDC) {
        noAlpha = (260 / VREG(24)) * noAlphaCounter;
        if (noAlpha >= 255) {
            noAlpha = 255;
        }
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_INT4, G_CC_INT4);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, noAlpha);
        xpos = VREG(20) + 1;
        for (i = 0; i < 12; i++) {
            moji_display(this->state.gfxCtx, font->fontBuf + (FONT_CHAR_TEX_SIZE * noController[i]), xpos,
                         VREG(21) + 1);
            xpos += VREG(22);
            if (i == 1) {
                xpos += VREG(23);
            }
        }
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 100, 255, 255, noAlpha);
        xpos = VREG(20);
        for (i = 0; i < 12; i++) {
            moji_display(this->state.gfxCtx, font->fontBuf + (FONT_CHAR_TEX_SIZE * noController[i]), xpos, VREG(21));
            xpos += VREG(22);
            if (i == 1) {
                xpos += VREG(23);
            }
        }
        if (noAlphaMode) {
            if (!(--noAlphaCounter)) {
                noAlphaMode = 0;
            }
        } else if ((++noAlphaCounter) >= VREG(24)) {
            noAlphaMode = 1;
        }
    }

    CLOSE_DISPS(this->state.gfxCtx);
}

void FileSelect_Title(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    Input* input = &this->state.input[0];

    OPEN_DISPS(this->state.gfxCtx);

    func_80095248(this->state.gfxCtx, 0, 0, 0);

    FileSelect_DrawSkybox(thisx);
    FileSelect_Update(thisx);
    FileSelect_DrawTitle(thisx);

    if (this->alphaMode == Title_Goto) {
        this->mainAlpha = 0;
        this->state.main = FileSelect_MenuMain;
        this->draw = FileSelect_DrawMenuMain;
        this->update = FileSelect_FadeInMenuWindow;
    }

    switch (this->alphaMode) {
        case Title_Fillin:
            this->screenFillAlpha -= VREG(10);
            if (this->screenFillAlpha <= 0) {
                this->screenFillAlpha = 0;
                if (gSkipTitle) {
                    this->alphaMode = Title_Goto;
                } else {
                    this->alphaMode = Title_Wait;
                }
            }
            break;

        case Title_Wait:
            if (!--VREG(8))
                this->alphaMode = Title_Effectin;
            break;

        case Title_Effectin:
            if ((this->effectAlpha += VREG(4)) >= 255) {
                this->effectAlpha = 255;
                this->alphaMode = Title_Fadein;
            }
            break;

        case Title_Fadein:
            if ((this->titleAlpha += VREG(5)) >= 210) {
                this->titleAlpha = 210;
                this->alphaMode = Title_Effectout;
            }
            break;

        case Title_Effectout:
            if ((this->effectAlpha -= VREG(7)) <= 0) {
                this->effectAlpha = 0;
                this->alphaMode = Title_Logoin;
            }
            break;

        case Title_Logoin:
            if ((this->logoAlpha += VREG(6)) >= 255) {
                this->logoAlpha = 255;
                this->alphaMode = Title_Timewait;
            }
            break;

        case Title_Timewait:
            if (this->bgmCounter >= 4626) {
                Audio_SetBGM(0x100000FF | (VREG(11) << 16));
                this->screenFillAlpha = 0;
                this->alphaMode = Title_Fillout;
            }
            break;

        case Title_Fillout:
            this->screenFillAlpha += VREG(10);
            if (this->screenFillAlpha > 254) {
                this->screenFillAlpha = 255;
                Save_InitDebug();
                gSaveContext.linkAge = 1;
                gSaveContext.gameMode = 1;
                gSaveContext.nextCutsceneIndex = 0xFFF0;
                gSaveContext.sceneSetupIndex = 1;
                gSkipN64Logo = true;
                SET_NEXT_GAMESTATE(&this->state, Title_Init, TitleContext);
                this->playingGame = false;
                this->state.running = false;
            }
            break;

        case Title_Goto:
            this->titleAlpha -= VREG(0);
            this->logoAlpha -= VREG(0);
            this->effectAlpha -= VREG(0);
            if (this->titleAlpha <= 0) {
                this->titleAlpha = 0;
            }
            if (this->logoAlpha <= 0) {
                this->logoAlpha = 0;
            }
            if (this->effectAlpha <= 0) {
                this->effectAlpha = 0;
            }
        default:
            break;
    }

    if (this->timer <= 0) {
        this->timer = 0;
        if ((this->alphaMode < Title_Timewait) && (this->alphaMode > Title_Fillin)) {
            if ((this->alphaMode < Title_Timewait) && (this->alphaMode > Title_Wait)) {
                if (CHECK_BTN_ALL(input->press.button, BTN_START) || CHECK_BTN_ALL(input->press.button, BTN_A) ||
                    CHECK_BTN_ALL(input->press.button, BTN_B)) {
                    VREG(8) = this->screenFillAlpha = 0;
                    this->titleAlpha = 210;
                    this->logoAlpha = 255;
                    this->effectAlpha = 0;
                    this->screenFillAlpha = 0;
                    this->timer = 20;
                    this->alphaMode = Title_Timewait;
                }
            } else if (this->alphaMode < Title_Effectin) {
                if (CHECK_BTN_ALL(input->press.button, BTN_START) || CHECK_BTN_ALL(input->press.button, BTN_A) ||
                    CHECK_BTN_ALL(input->press.button, BTN_B)) {
                    VREG(8) = this->screenFillAlpha = 0;
                    this->screenFillAlpha = 0;
                    this->timer = 20;
                    this->alphaMode = Title_Effectin;
                }
            }
        } else if (this->alphaMode == Title_Fadein || this->alphaMode == Title_Timewait) {
            if (CHECK_BTN_ALL(input->press.button, BTN_START) || CHECK_BTN_ALL(input->press.button, BTN_A) ||
                CHECK_BTN_ALL(input->press.button, BTN_B)) {
                Audio_PlaySoundGeneral(NA_SE_SY_FSEL_DECIDE_L, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                this->screenFillAlpha = 0;
                this->alphaMode = Title_Goto;
            }
        }
    } else {
        this->timer--;
    }

    this->bgmCounter++;

    // Draw screen overlay
    gDPPipeSync(POLY_OPA_DISP++);
    gSPDisplayList(POLY_OPA_DISP++, sFillRectSetupDL);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, this->screenFillAlpha);
    gDPFillRectangle(POLY_OPA_DISP++, 0, 0, gScreenWidth - 1, gScreenHeight - 1);

    CLOSE_DISPS(this->state.gfxCtx);
}

void FileSelect_UpdateMenuMain(FileChooseContext* this) {
    Input* input = &this->state.input[0];

    if (ABS(this->stickRelY) > 30) {
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

        if (this->stickRelY > 30) {
            this->buttonIndex--;
            if (this->buttonIndex < MAIN_HYRULE_TOUR) {
                this->buttonIndex = MAIN_EXTRAS;
            }
        } else {
            this->buttonIndex++;
            if (this->buttonIndex > MAIN_EXTRAS) {
                this->buttonIndex = MAIN_HYRULE_TOUR;
            }
        }
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_A)) {
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_DECIDE_L, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        this->subMenu = this->buttonIndex;
        this->buttonIndex = 0;
        this->update = FileSelect_FadeOutMenuMain;
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_B)) {
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_DECIDE_L, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        this->timer = 0;
        this->exitTitle = true;
        this->update = FileSelect_Exit;
    }
}

void FileSelect_UpdateMenuSub(FileChooseContext* this) {
    Input* input = &this->state.input[0];
    static s32 menuEntryCount[] = {
        4, // MAIN_HYRULE_TOUR
        3, // MAIN_DUNGEON_TOUR
        3, // MAIN_BATTLE_TOUR
        2, // MAIN_EXTRAS
    };
    s32 max = menuEntryCount[this->subMenu] - 1;

    if (ABS(this->stickRelY) > 30) {
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

        if (this->stickRelY > 30) {
            this->buttonIndex--;

            if (this->buttonIndex < 0) {
                this->buttonIndex = max;
            }
        } else {
            this->buttonIndex++;
            if (this->buttonIndex > max) {
                this->buttonIndex = 0;
            }
        }
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_A)) {
        // Play selection sound effect
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_DECIDE_L, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);

        if ((this->subMenu != MAIN_EXTRAS) || ((this->buttonIndex == 0) && (this->subMenu == MAIN_EXTRAS))) {
            // Exit to game
            this->timer = 0;
            this->update = FileSelect_Exit;
        } else {
            // Switch to credits menu
            this->update = FileSelect_FadeInCredits;
        }
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_B)) {
        Audio_PlaySoundGeneral(NA_SE_SY_FSEL_CLOSE, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        this->buttonIndex = this->subMenu;
        this->update = FileSelect_FadeInMenuMain;
    }
}

void FileSelect_FadeOutMenuMain(FileChooseContext* this) {
    this->mainAlpha -= 30;

    if (this->mainAlpha <= 0) {
        this->mainAlpha = 0;
        this->subAlpha = 255;
        this->update = FileSelect_UpdateMenuSub;
        this->draw = FileSelect_DrawMenuSub;
    }
}

void FileSelect_FadeInMenuMain(FileChooseContext* this) {
    this->subAlpha -= 30;

    if (this->subAlpha <= 0) {
        this->subAlpha = 0;
        this->mainAlpha = 255;
        this->update = FileSelect_UpdateMenuMain;
        this->draw = FileSelect_DrawMenuMain;
    }
}

void FileSelect_Exit(FileChooseContext* this) {
    this->screenFillAlpha += 20;
    this->staticLabelsAlpha -= 20;
    this->windowAlpha -= 20;
    this->mainAlpha -= 20;
    this->subAlpha -= 20;
    this->cursorAlpha -= 20;
    this->timer++;

    if (this->screenFillAlpha >= 255) {
        this->mainAlpha = this->subAlpha = this->cursorAlpha = 0;
        this->screenFillAlpha = 255;
    }

    if (this->staticLabelsAlpha < 0) {
        this->staticLabelsAlpha = 0;
    }

    if (this->alphaMode != Title_Fillout) {
        if (this->timer > 5) {
            Audio_SetBGM(NA_BGM_STOP);
        }
    }

    if (this->timer > 20) {
        if (this->exitTitle) {
            Save_InitDebug();
            gSaveContext.linkAge = 1;
            gSaveContext.gameMode = 1;
            gSaveContext.nextCutsceneIndex = 0xFFF0;
            gSaveContext.sceneSetupIndex = 1;
            gSkipN64Logo = true;
            SET_NEXT_GAMESTATE(&this->state, Title_Init, TitleContext);
            this->playingGame = false;
        } else if (this->subMenu == MAIN_HYRULE_TOUR) {
            switch (this->buttonIndex) {
                case 0:
                    Save_InitSpaceWorld(SAVE_CHILD_DEFAULT);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_PR_LINKS_HOUSE, 0, 2, false, true);
                    break;
                case 1:
                    Save_InitSpaceWorld(SAVE_CHILD_CASTLE);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_HYRULE_CASTLE, 0, 2, false, true);
                    break;
                case 2:
                    Save_InitSpaceWorld(SAVE_ADULT_DEFAULT);
                    gSaveContext.linkAge = 0;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_HYRULE_FIELD, 0, 2, false, true);
                    AREG(6) = true; // start on horse
                    break;
                case 3:
                    Save_InitSpaceWorld(SAVE_CHILD_DC_DMT);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_DEATH_MOUNTAIN_TRAIL, 0, 2, false, true);
                    break;
            }
            this->playingGame = true;
        } else if (this->subMenu == MAIN_DUNGEON_TOUR) {
            switch (this->buttonIndex) {
                case 0:
                    Save_InitSpaceWorld(SAVE_DEKU_TREE);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_DEKU_TREE, 0, 2, false, true);
                    break;
                case 1:
                    Save_InitSpaceWorld(SAVE_CHILD_DC_DMT);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_DODONGOS_CAVERN, 0, 2, false, true);
                    break;
                case 2:
                    Save_InitSpaceWorld(SAVE_ADULT_DEFAULT);
                    gSaveContext.linkAge = 0;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_SPECIAL_COURSE, 0, 2, false, true);
                    break;
            }
            this->playingGame = true;
        } else if (this->subMenu == MAIN_BATTLE_TOUR) {
            switch (this->buttonIndex) {
                case 0:
                    Save_InitSpaceWorld(SAVE_CHILD_GOHMA);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_DEKU_TREE, 1, 2, false, true);
                    break;
                case 1:
                    Save_InitSpaceWorld(SAVE_CHILD_KD);
                    gSaveContext.linkAge = 1;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_DODONGOS_CAVERN, 1, 2, false, true);
                    break;
                case 2:
                    Save_InitSpaceWorld(SAVE_ADULT_DEFAULT);
                    gSaveContext.linkAge = 0;
                    gSaveContext.entranceIndex = ENTRANCE(SCENE_OLD_SUTARU, 0, 2, false, true);
                    break;
            }
            this->playingGame = true;
        } else if (this->subMenu == MAIN_EXTRAS) {
            gSaveContext.linkAge = 0;
            Save_InitDebug();

            gSaveContext.gameMode = 0;
            SET_NEXT_GAMESTATE(&this->state, Select_Init, SelectContext);
            this->playingGame = false;
        }

        if (this->playingGame) {
            gSaveContext.gameMode = 0;
            gSaveContext.cutsceneIndex = 0xFFEF;
            gSaveContext.unk_13F6 = gSaveContext.magic;
            gSaveContext.dayTime = gSaveContext.environmentTime = 0x8000;
            gSaveContext.unk_13F4 = 0;
            gSaveContext.magicLevel = gSaveContext.magic = 0;
            gSaveContext.buttonStatus[4] = BTN_ENABLED;
            gSaveContext.buttonStatus[3] = BTN_ENABLED;
            gSaveContext.buttonStatus[2] = BTN_ENABLED;
            gSaveContext.buttonStatus[1] = BTN_ENABLED;
            gSaveContext.buttonStatus[0] = BTN_ENABLED;
            gSaveContext.unk_13E7 = gSaveContext.unk_13E8 = gSaveContext.unk_13EA = gSaveContext.unk_13EC = 0;
            gSaveContext.respawnFlag = 0;
            gSaveContext.respawn[RESPAWN_MODE_DOWN].entranceIndex = -1;
            gSaveContext.seqIndex = 0xFF;
            gSaveContext.nightSeqIndex = 0xFF;
            gSaveContext.showTitleCard = false;
            D_8011FB30 = 0;
            SET_NEXT_GAMESTATE(&this->state, Gameplay_Init, GlobalContext);
        }

        this->state.running = false;
    }
}

/* =================================== Draw Functions =================================== */

// Draws the panel background; drawn as 2D rather than it being 3D in the final game
#define PANEL_ULX ((SCREEN_WIDTH / 2) - (((64 * 3) + 48) / 2))
#define PANEL_ULY 40

Gfx* FileSelect_DrawPanel(GameState* thisx, Gfx* dList, s16 alpha) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    static void* panelTextures[5][4] = {
        // clang-format off
        { gFileSelectBackground00Tex, gFileSelectBackground10Tex, gFileSelectBackground20Tex, gFileSelectBackground30Tex },
        { gFileSelectBackground01Tex, gFileSelectBackground11Tex, gFileSelectBackground21Tex, gFileSelectBackground31Tex },
        { gFileSelectBackground02Tex, gFileSelectBackground12Tex, gFileSelectBackground22Tex, gFileSelectBackground32Tex },
        { gFileSelectBackground03Tex, gFileSelectBackground13Tex, gFileSelectBackground23Tex, gFileSelectBackground33Tex },
        { gFileSelectBackground04Tex, gFileSelectBackground14Tex, gFileSelectBackground24Tex, gFileSelectBackground34Tex },
        // clang-format on
    };
    s32 i, j;
    s16 x, y;
    s32 xTex, yTex;

    // Clear attributes before drawing
    dList = func_800944A0(dList);

    // Set combiner
    gDPSetCombineLERP(dList++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

    // Set the panel color
    gDPSetPrimColor(dList++, 0, 0, this->panelCol[0], this->panelCol[1], this->panelCol[2], alpha);
    gDPSetEnvColor(dList++, 0, 0, 0, 255);

    for (yTex = 0, y = PANEL_ULY; yTex < 5; yTex++, y += 32) {
        for (xTex = 0, x = PANEL_ULX; xTex < 4; xTex++, x += 64) {
            if (xTex >= 3) {
                // Furthest texture to the right has a width of 48 rather than 64
                // Draw panel texture
                dList =
                    Gfx_TextureRectangleIA16(dList, panelTextures[yTex][xTex], 48, 32, x, y, 48, 32, 1 << 10, 1 << 10);
            } else {
                // Draw panel texture
                dList =
                    Gfx_TextureRectangleIA16(dList, panelTextures[yTex][xTex], 64, 32, x, y, 64, 32, 1 << 10, 1 << 10);
            }
        }
    }

    return dList;
}

// Sets up the displaylist if a button is solid
void FileSelect_SetupLabelDL(FileChooseContext* this, u8 alpha) {
    OPEN_DISPS(this->state.gfxCtx);
    func_800944C4(this->state.gfxCtx);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, this->cursorCol[0], this->cursorCol[1], this->cursorCol[2], alpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, alpha);

    CLOSE_DISPS(this->state.gfxCtx);
}

// Draws the labels for the main menu of the file select
void FileSelect_DrawMenuMain(FileChooseContext* this) {
    static void* mainMenuLabelTextures[] = {
        gFileSelectHyruleTourTex,
        gFileSelectDungeonTourTex,
        gFileSelectBattleTourTex,
        gFileSelectExtrasTex,
    };
    s32 i;

    OPEN_DISPS(this->state.gfxCtx);

    // Setup displaylist
    FileSelect_SetupLabelDL(this, this->mainAlpha);

    for (i = 0; i < ARRAY_COUNT(mainMenuLabelTextures); i++) {
        // Draw the label
        POLY_OPA_DISP =
            Gfx_TextureRectangleIA8(POLY_OPA_DISP, mainMenuLabelTextures[i], LABEL_WIDTH, LABEL_HEIGHT, LABEL_X,
                                    LABEL_Y_BASE + (LABEL_SPACING * i), LABEL_WIDTH, LABEL_HEIGHT, 1 << 10, 1 << 10);
    }

    CLOSE_DISPS(this->state.gfxCtx);
}

// Draws the labels for the sub menus of the file select
void FileSelect_DrawMenuSub(FileChooseContext* this) {
    static void* subLabelTextures[][5] = {
        {
            gFileSelectLinksHouseTex,
            gFileSelectHyruleCastleTex,
            gFileSelectHyruleFieldTex,
            gFileSelectDeathMountainTex,
        },
        {
            gFileSelectInsideTheDekuTreeTex,
            gFileSelectDodongosCavernTex,
            gFileSelectSpecialCourseTex,
        },
        {
            gFileSelectGohmaTex,
            gFileSelectKingDodongoTex,
            gFileSelectStalfosTex,
        },
        {
            gFileSelectMapSelectTex,
            gFileSelectCreditsTex,
        },
    };
    s32 i;

    OPEN_DISPS(this->state.gfxCtx);

    // Setup displaylist
    FileSelect_SetupLabelDL(this, this->subAlpha);

    for (i = 0; subLabelTextures[this->subMenu][i] != NULL; i++) {
        // Draw the label
        POLY_OPA_DISP = Gfx_TextureRectangleIA8(POLY_OPA_DISP, subLabelTextures[this->subMenu][i], LABEL_WIDTH,
                                                LABEL_HEIGHT, LABEL_X, LABEL_Y_BASE + (LABEL_SPACING * i), LABEL_WIDTH,
                                                LABEL_HEIGHT, 1 << 10, 1 << 10);
    }

    CLOSE_DISPS(this->state.gfxCtx);
}

void FileSelect_DrawCredits(FileChooseContext* this) {
    static void* creditsTextures[][7] = {
        {
            gFileSelectCreditsPg1Tex0, gFileSelectCreditsPg1Tex1, gFileSelectCreditsPg1Tex2, gFileSelectCreditsPg1Tex3,
            gFileSelectCreditsPg1Tex4,
            gFileSelectCreditsPg1Tex5, // Add CDi to the programmers list
        },
        {
            gFileSelectCreditsPg2Tex0,
            gFileSelectCreditsPg2Tex1,
            gFileSelectCreditsPg2Tex2,
            gFileSelectCreditsPg2Tex3,
            gFileSelectCreditsPg2Tex4,
            gFileSelectCreditsPg2Tex5,
        },
        {
            gFileSelectCreditsPg3Tex0,
            gFileSelectCreditsPg3Tex1,
            gFileSelectCreditsPg3Tex2,
            gFileSelectCreditsPg3Tex3,
            gFileSelectCreditsPg3Tex4,
        },
    };
    s32 i;
    s16 y = LABEL_Y_BASE;

    OPEN_DISPS(this->state.gfxCtx);

    // Set up displaylist
    FileSelect_SetupLabelDL(this, (s16)(this->creditsAlpha * this->creditsAlphaFrac));

    // Draw credits text
    for (i = 0, y = LABEL_Y_BASE; creditsTextures[this->creditsPage][i] != NULL; i++, y += 16) {
        POLY_OPA_DISP = Gfx_TextureRectangleIA8(POLY_OPA_DISP, creditsTextures[this->creditsPage][i], 192, 16, LABEL_X,
                                                y, 192, 16, 1 << 10, 1 << 10);
    }

    CLOSE_DISPS(this->state.gfxCtx);
}

/* =================================== Main Functions =================================== */

void FileSelect_SetupView(FileChooseContext* this, f32 eyeX, f32 eyeY, f32 eyeZ) {
    Vec3f eye;
    Vec3f lookAt;
    Vec3f up;

    lookAt.x = lookAt.y = lookAt.z = 0.0f;
    up.x = up.z = 0.0f;

    eye.x = eyeX;
    eye.y = eyeY;
    eye.z = eyeZ;

    up.y = 1.0f;

    func_800AA358(&this->view, &eye, &lookAt, &up);
    func_800AAA50(&this->view, 0x7F);
}

static Vec3f skyEye;

void FileSelect_DrawSkybox(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    f32 eyeX;
    f32 eyeY;
    f32 eyeZ;

    OPEN_DISPS(this->state.gfxCtx);

    gDPPipeSync(POLY_OPA_DISP++);

    FileSelect_SetupView(this, skyEye.x, skyEye.y, skyEye.z);
    SkyboxDraw_Draw(&this->skyboxCtx, this->state.gfxCtx, 1, this->envCtx.unk_13, skyEye.x, skyEye.y, skyEye.z);
    gDPSetTextureLUT(POLY_OPA_DISP++, G_TT_NONE);
    ZREG(11) += ZREG(10);
    func_8006FC88(1, &this->envCtx, &this->skyboxCtx);
    gSaveContext.environmentTime += gTimeSpeed;
    gDPPipeSync(POLY_OPA_DISP++);
    func_800949A8(this->state.gfxCtx);
    FileSelect_SetupView(this, 0.0f, 0.0f, 64.0f);

    CLOSE_DISPS(this->state.gfxCtx);
}

static void FileSelect_UpdatePanelColor(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;

    s16 rc, gc, bc, k;

    if (this->envCtx.unk_13) {
        k = 256 - this->envCtx.unk_13;
        rc = (ABS(this->panelCol[0] - XREG(84 + this->envCtx.unk_11))) / k;
        gc = (ABS(this->panelCol[1] - XREG(88 + this->envCtx.unk_11))) / k;
        bc = (ABS(this->panelCol[2] - XREG(92 + this->envCtx.unk_11))) / k;

        if (this->panelCol[0] >= XREG(84 + this->envCtx.unk_11)) {
            this->panelCol[0] -= rc;
        } else {
            this->panelCol[0] += rc;
        }
        if (this->panelCol[1] >= XREG(88 + this->envCtx.unk_11)) {
            this->panelCol[1] -= gc;
        } else {
            this->panelCol[1] += gc;
        }
        if (this->panelCol[2] >= XREG(92 + this->envCtx.unk_11)) {
            this->panelCol[2] -= bc;
        } else {
            this->panelCol[2] += bc;
        }
    } else {
        this->panelCol[0] = XREG(84 + this->envCtx.unk_10);
        this->panelCol[1] = XREG(88 + this->envCtx.unk_10);
        this->panelCol[2] = XREG(92 + this->envCtx.unk_10);
    }
}

void FileSelect_UpdateCursorColor(FileChooseContext* this) {
    short rc, gc, bc, ac;

    if (this->envCtx.unk_13) {
        ac = 256 - this->envCtx.unk_13;
        rc = (ABS(this->cursorCol[0] - cursorColors[this->envCtx.unk_11][0])) / ac;
        gc = (ABS(this->cursorCol[1] - cursorColors[this->envCtx.unk_11][1])) / ac;
        bc = (ABS(this->cursorCol[2] - cursorColors[this->envCtx.unk_11][2])) / ac;

        if (this->cursorCol[0] >= cursorColors[this->envCtx.unk_11][0]) {
            this->cursorCol[0] -= rc;
        } else {
            this->cursorCol[0] += rc;
        }
        if (this->cursorCol[1] >= cursorColors[this->envCtx.unk_11][1]) {
            this->cursorCol[1] -= gc;
        } else {
            this->cursorCol[1] += gc;
        }
        if (this->cursorCol[2] >= cursorColors[this->envCtx.unk_11][2]) {
            this->cursorCol[2] -= bc;
        } else {
            this->cursorCol[2] += bc;
        }
    } else {
        this->cursorCol[0] = cursorColors[this->envCtx.unk_10][0];
        this->cursorCol[1] = cursorColors[this->envCtx.unk_10][1];
        this->cursorCol[2] = cursorColors[this->envCtx.unk_10][2];
    }
}

void FileSelect_Update(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;

    if (this->update != NULL) {
        this->update(this);
    }

    if (this->draw != NULL) {
        this->draw(this);
    }
}

void FileSelect_MenuMain(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    Input* controller1 = &this->state.input[0];

    OPEN_DISPS(this->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x01, this->staticSegment);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);

    func_80095248(this->state.gfxCtx, 0, 0, 0);

    this->stickRelX = controller1->rel.stick_x;
    this->stickRelY = controller1->rel.stick_y;

    if (this->stickRelX < -30) {
        if (this->xIndexOffset == -1) {
            this->inputTimerX--;
            if (this->inputTimerX < 0) {
                this->inputTimerX = 2;
            } else {
                this->stickRelX = 0;
            }
        } else {
            this->inputTimerX = 10;
            this->xIndexOffset = -1;
        }
    } else {
        if (this->stickRelX > 30) {
            if (this->xIndexOffset == 1) {
                this->inputTimerX--;
                if (this->inputTimerX < 0) {
                    this->inputTimerX = 2;
                } else {
                    this->stickRelX = 0;
                }
            } else {
                this->inputTimerX = 10;
                this->xIndexOffset = 1;
            }
        } else {
            this->xIndexOffset = 0;
        }
    }

    if (this->stickRelY < -30) {
        if (this->yIndexOffset == -1) {
            this->inputTimerY -= 1;
            if (this->inputTimerY < 0) {
                this->inputTimerY = 2;
            } else {
                this->stickRelY = 0;
            }
        } else {
            this->inputTimerY = 10;
            this->yIndexOffset = -1;
        }
    } else {
        if (this->stickRelY > 30) {
            if (this->yIndexOffset == 1) {
                this->inputTimerY -= 1;
                if (this->inputTimerY < 0) {
                    this->inputTimerY = 2;
                } else {
                    this->stickRelY = 0;
                }
            } else {
                this->inputTimerY = 10;
                this->yIndexOffset = 1;
            }
        } else {
            this->yIndexOffset = 0;
        }
    }

    FileSelect_UpdateCursorColor(this);
    FileSelect_UpdatePanelColor(thisx);

    FileSelect_DrawSkybox(thisx);

    // Draw panel background
    POLY_OPA_DISP = FileSelect_DrawPanel(thisx, POLY_OPA_DISP, this->windowAlpha * (200.0f / 255.0f));

    FileSelect_Update(thisx);

    // Draw cursor
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->cursorAlpha);

    if ((this->update != FileSelect_FadeOutMenuMain) && (this->update != FileSelect_FadeInMenuMain)) {
        POLY_OPA_DISP = Gfx_TextureRectangleIA8(POLY_OPA_DISP, gFileSelectCursorTex, 16, 16, 55,
                                                80 + (LABEL_SPACING * this->buttonIndex), 16, 16, 1 << 10, 1 << 10);
    }

    func_800944C4(this->state.gfxCtx);
    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 0);

    // Draw controls at the bottom of the screen
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->staticLabelsAlpha);
    POLY_OPA_DISP =
        Gfx_TextureRectangleIA8(POLY_OPA_DISP, gFileSelectControlsTex, 192, 16, 72, 208, 192, 16, 1 << 10, 1 << 10);

    // Draw "SELECT FILE" label
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->staticLabelsAlpha);
    POLY_OPA_DISP =
        Gfx_TextureRectangleIA8(POLY_OPA_DISP, gFileSelectSelectFileTex, 96, 16, 64, 50, 96, 16, 1 << 10, 1 << 10);

    // Draw screen overlay
    gDPPipeSync(POLY_OPA_DISP++);
    gSPDisplayList(POLY_OPA_DISP++, sFillRectSetupDL);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, this->screenFillAlpha);
    gDPFillRectangle(POLY_OPA_DISP++, 0, 0, gScreenWidth - 1, gScreenHeight - 1);

    CLOSE_DISPS(this->state.gfxCtx);
}

void FileSelect_InitContext(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    EnvironmentContext* envCtx = &this->envCtx;

    this->timer = 0;

    this->screenFillAlpha = 255;
    this->subAlpha = 0;
    this->staticLabelsAlpha = 0;

    ZREG(5) = 1;
    ZREG(7) = 32;
    ZREG(8) = 22;
    ZREG(9) = 20;
    ZREG(10) = -10;
    ZREG(11) = 0;
    ZREG(12) = 1000;
    ZREG(13) = -700;

    ZREG(14) = 164 - 2;
    ZREG(15) = 104;
    ZREG(16) = 160;
    ZREG(17) = 100 - 4;
    ZREG(18) = 162 - 2;
    ZREG(19) = 152 + 2;
    ZREG(20) = 214;

    XREG(13) = 580;
    XREG(14) = 400;
    XREG(35) = 20;
    XREG(36) = 20;
    XREG(37) = 20;
    XREG(43) = 8;
    XREG(44) = -78;
    XREG(45) = 0;
    XREG(46) = 0;
    XREG(47) = 0;
    XREG(48) = 0;
    XREG(49) = 3;
    XREG(50) = 8;
    XREG(51) = 8;
    XREG(52) = 10;
    XREG(73) = 0;

    // Panel Color R
    XREG(84) = 255; // Dawn
    XREG(85) = 150; // Day
    XREG(86) = 200; // Dusk
    XREG(87) = 100; // Night

    // Panel Color G
    XREG(88) = 215; // Dawn
    XREG(89) = 150; // Day
    XREG(90) = 150; // Dusk
    XREG(91) = 150; // Night

    // Panel Color B
    XREG(92) = 225; // Dawn
    XREG(93) = 255; // Day
    XREG(94) = 100; // Dusk
    XREG(95) = 255; // Night

    VREG(0) = 14;
    VREG(1) = 5;
    VREG(2) = 4;
    VREG(4) = 1;
    VREG(5) = 6;
    VREG(6) = 2;
    VREG(7) = 6;
    VREG(8) = 80;
    this->screenFillAlpha = 255;
    VREG(10) = 10;
    VREG(11) = 30;
    VREG(12) = -100;
    VREG(13) = -85;
    VREG(14) = 4;
    VREG(16) = 25;
    VREG(17) = 1;
    VREG(18) = 1;
    VREG(20) = 92;
    VREG(21) = 180;
    VREG(22) = 11;
    VREG(23) = 10;
    VREG(24) = 26;
    VREG(25) = 2;
    VREG(26) = 1;
    VREG(27) = 0;
    VREG(28) = 0;
    VREG(29) = 160;
    VREG(30) = 64;
    VREG(31) = 154;
    VREG(32) = 152;
    VREG(33) = 106;
    WREG(38) = 16;
    WREG(39) = 9;
    WREG(40) = 10;
    WREG(41) = 14;
    WREG(42) = 11;
    WREG(43) = 12;

    ShrinkWindow_SetVal(0);

    gSaveContext.environmentTime = 0;
    gSaveContext.dayTime = 0;

    // Skybox_Init
    func_800B0E50(&this->state, &this->skyboxCtx, 1);

    gTimeSpeed = 10;

    envCtx->unk_19 = 0;
    envCtx->unk_1A = 0;
    envCtx->unk_21 = 0;
    envCtx->unk_22 = 0;
    envCtx->unk_44 = 0;
    envCtx->unk_10 = 0x63;
    envCtx->unk_11 = 0x63;
    envCtx->unk_1F = 0;
    envCtx->unk_20 = 0;
    envCtx->unk_BD = 0;
    envCtx->gloomySky = 2;
    envCtx->skyDisabled = 0;
    envCtx->unk_13 = 0;
    envCtx->unk_84 = 0.0f;
    envCtx->unk_88 = 0.0f;

    func_8006FC88(1, &this->envCtx, &this->skyboxCtx);

    gSaveContext.buttonStatus[0] = gSaveContext.buttonStatus[1] = gSaveContext.buttonStatus[2] =
        gSaveContext.buttonStatus[3] = gSaveContext.buttonStatus[4] = BTN_ENABLED;

    this->update = NULL;
    this->draw = NULL;
    this->cursorDir = 1;
    this->cursorTimer = 20;
    this->buttonIndex = MAIN_HYRULE_TOUR;
    this->mainAlpha = 0;
    this->exitTitle = false;
    this->playingGame = false;
    this->creditsPage = this->creditsTimer = this->creditsAlphaFrac = 0;
    this->cursorAlpha = this->windowAlpha = 0;

    this->alphaMode = Title_Fillin;
    this->effectAlpha = 0;
    this->titleAlpha = 0;
    this->logoAlpha = 0;
    this->bgmCounter = 0;

    this->panelCol[0] = XREG(84 + this->envCtx.unk_10);
    this->panelCol[1] = XREG(88 + this->envCtx.unk_10);
    this->panelCol[2] = XREG(92 + this->envCtx.unk_10);
    this->cursorCol[0] = cursorColors[this->envCtx.unk_10][0];
    this->cursorCol[1] = cursorColors[this->envCtx.unk_10][1];
    this->cursorCol[2] = cursorColors[this->envCtx.unk_10][2];
}

void FileSelect_Destroy(GameState* thisx) {
}

void FileSelect_Init(GameState* thisx) {
    FileChooseContext* this = (FileChooseContext*)thisx;
    u32 size = (u32)_title_staticSegmentRomEnd - (u32)_title_staticSegmentRomStart;

    // Allocate and load the static segment
    this->staticSegment = GameState_Alloc(&this->state, size, "../z_file_choose.c", 3392);
    DmaMgr_SendRequest1(this->staticSegment, (u32)_title_staticSegmentRomStart, size, "../z_file_choose.c", 3394);

    // Set the frame rate to 60fps
    R_UPDATE_RATE = 1;

    Matrix_Init(&this->state);
    View_Init(&this->view, this->state.gfxCtx);

    this->state.main = FileSelect_Title;
    this->state.destroy = FileSelect_Destroy;

    // Initialize various values for the file select
    FileSelect_InitContext(thisx);

    // Load font for "No Controller" text
    Font_LoadOrderedFont(&this->font);

    // Opening title BGM for Spaceworld
    Audio_SetBGM(0xF000000A);
    Audio_SetBGM(0x1E);

    // Set the initial sky rotation and don't ever set it again so the sky won't rotate in spaceworld
    skyEye.x = 1400;
    skyEye.y = -200;
    skyEye.z = 600;
}
