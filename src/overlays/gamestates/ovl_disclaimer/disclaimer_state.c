/*
 * Space World '97 recreation disclaimer state
 */

#include "global.h"
#include "alloca.h"
#include "textures/disclaimer_gamestate_assets/disclaimer_assets.h"

#define FADE_SPEED 7
#define DURATION 110

typedef enum {
    ERROR_NONE,
    ERROR_RAM, // Expansion Pak not installed
    ERROR_EMU  // Unsupported emulator like ML64 being used
} ErrorTypes;

static ErrorTypes sCurError = ERROR_NONE;

static void* sErrorTextures[] = {
    NULL,
    gErrorRamTex,
    gErrorEmuTex,
};

#define CHECK_WORDS 200
#define CHECK_MAGIC 0xABABABAB

s32 Disclaimer_CheckIfEmulatorIsSupported(void) {
    s32 i;
    u32* ramCheck = 0x80600000;

    for (i = 0; i < CHECK_WORDS; i++) {
        if (ramCheck[i] != CHECK_MAGIC) {
            return false;
        }
    }
    return true;
}

// Gets any errors to display (like < 8mb of ram)
ErrorTypes Disclaimer_GetErrors() {
    if (osGetMemSize() < 0x00800000) {
        return ERROR_RAM;
    } else if (!Disclaimer_CheckIfEmulatorIsSupported()) {
        return ERROR_EMU;
    }

    return ERROR_NONE;
}

Gfx sFillRectangleSetupDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                          G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH | G_LOD),
    gsDPSetOtherMode(G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                         G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_1PRIMITIVE,
                     G_AC_NONE | G_ZS_PIXEL | G_RM_CLD_SURF | G_RM_CLD_SURF2),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
    gsSPEndDisplayList(),
};

void Disclaimer_Draw(DisclaimerContext* this) {
    Gfx* glistp;

    OPEN_DISPS(this->state.gfxCtx);

    // Load S2DEX
    gSPLoadUcodeEx(POLY_OPA_DISP++, OS_K0_TO_PHYSICAL(D_80113070), OS_K0_TO_PHYSICAL(D_801579A0), 0x800);
    glistp = POLY_OPA_DISP;

    if (sCurError == ERROR_NONE) {
        // Draw disclaimer message and Spaceworld Experience logo
        func_8009638C(&glistp, gDisclaimerMessageTex, 0, 256, 136, G_IM_FMT_I, G_IM_SIZ_4b, 0x0000, 0, 32, 36);
        func_8009638C(&glistp, gSpaceworldExperienceLogoTex, 0, 128, 32, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0000, 0, 102,
                      177);
    } else {
        // Draw error messages
        func_8009638C(&glistp, sErrorTextures[sCurError], 0, 256, 32, G_IM_FMT_I, G_IM_SIZ_4b, 0x0000, 0, 32, 104);
    }

    // Restore F3DZEX
    POLY_OPA_DISP = glistp;
    gSPLoadUcodeEx(POLY_OPA_DISP++, SysUcode_GetUCode(), SysUcode_GetUCodeData(), 0x800);

    // Draw screen overlay
    if (this->color != 0) {
        gDPPipeSync(POLY_OPA_DISP++);
        gSPDisplayList(POLY_OPA_DISP++, sFillRectangleSetupDL);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, this->color);
        gDPFillRectangle(POLY_OPA_DISP++, 0, 0, gScreenWidth - 1, gScreenHeight - 1);
    }

    CLOSE_DISPS(this->state.gfxCtx);
}

void Disclaimer_Main(GameState* thisx) {
    DisclaimerContext* this = (DisclaimerContext*)thisx;

    OPEN_DISPS(this->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0, NULL);
    gSPSegment(POLY_OPA_DISP++, 1, this->staticSegment);
    func_80095248(this->state.gfxCtx, 0, 0, 0);

    // Try to find a new error, but don't if one is already detected
    if (sCurError == ERROR_NONE) {
        sCurError = Disclaimer_GetErrors();
    }

    // Show display
    Disclaimer_Draw(this);

    // Fade in and out animation
    switch (this->animationState) {
        case 0:
            this->color -= FADE_SPEED;
            if (this->color <= 0) {
                this->color = 0;
                this->animationState++;
            }
            break;
        case 1:
            if (sCurError == ERROR_NONE) {
                this->timer++;
                if (this->timer > DURATION) {
                    this->animationState++;
                }
            }
            break;
        case 2:
            this->color += FADE_SPEED;
            if (this->color >= 255) {
                this->color = 255;
                this->animationState++;
            }
            break;
        default:
            this->exit = true;
    }

    if ((this->exit) && (sCurError == ERROR_NONE)) {
        thisx->running = false;
        SET_NEXT_GAMESTATE(&this->state, Title_Init, TitleContext);
    }

    CLOSE_DISPS(this->state.gfxCtx);
}

void Disclaimer_Destroy(GameState* thisx) {
}

void Disclaimer_Init(GameState* thisx) {
    DisclaimerContext* this = (DisclaimerContext*)thisx;
    u32 size = (u32)_disclaimer_assetsSegmentRomEnd - (u32)_disclaimer_assetsSegmentRomStart;

    // Allocate space for the textures and load them
    this->staticSegment = GameState_Alloc(&this->state, size, __FILE__, __LINE__);
    DmaMgr_SendRequest1(this->staticSegment, (u32)_disclaimer_assetsSegmentRomStart, size, __FILE__, __LINE__);

    R_UPDATE_RATE = 1;
    this->state.main = Disclaimer_Main;
    this->state.destroy = Disclaimer_Destroy;
    this->animationState = 0;
    this->color = 255;
    this->timer = 0;

    gSaveContext.checksum = 0; // for emu checking

// Exit early when debugging
#ifdef NDEBUG
    this->exit = false;
#else
    this->exit = true;
#endif
}
