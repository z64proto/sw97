#include "global.h"
#include "message_data_static.h"
#include "vt.h"

#include "textures/parameter_static/parameter_static.h"

#define BTN_A_SWAPPED BTN_B
#define BTN_B_SWAPPED BTN_A

#define R_TEXTBOX_X VREG(0)
#define R_TEXTBOX_X_TARGET XREG(72)
#define R_TEXTBOX_WIDTH_TARGET XREG(74)
#define R_TEXTBOX_WIDTH YREG(22)

s32 sLineCount = 0;

s16 D_8014B2F0 = 0;

u8 D_8014B2F4 = 0;

s16 D_8014B2F8 = 0;

s16 D_8014B2FC = 0;

u8 D_8014B300 = 0;

u16 D_8014B304 = 0; // next textid

s16 D_8014B308 = 0;

UNK_TYPE D_8014B30C = 0;

s16 D_8014B310 = 0xFF;

s16 D_8014B314 = 0;

s16 D_8014B318 = 0;

u16 D_8014B31C = 0;

MessageTableEntry D_8014B320[] = {
#define DECLARE_MESSAGE(textId, type, yPos, nesMessage, gerMessage, fraMessage) \
    { textId, (_SHIFTL(type, 4, 8) | _SHIFTL(yPos, 0, 8)), _message_##textId##_nes },
#define DECLARE_MESSAGE_FFFC
#include "../text/declare_messages.h"
#undef DECLARE_MESSAGE_FFFC
#undef DECLARE_MESSAGE
    { 0xFFFF, 0, NULL },
};

const char* D_8014F548[] = {
#define DECLARE_MESSAGE(textId, type, yPos, nesMessage, gerMessage, fraMessage) _message_##textId##_ger,
#include "../text/declare_messages.h"
#undef DECLARE_MESSAGE
    NULL,
};

const char* D_80151658[] = {
#define DECLARE_MESSAGE(textId, type, yPos, nesMessage, gerMessage, fraMessage) _message_##textId##_fra,
#include "../text/declare_messages.h"
#undef DECLARE_MESSAGE
    NULL,
};

MessageTableEntry D_80153768[] = {
#define DECLARE_MESSAGE(textId, type, yPos, staffMessage) \
    { textId, (_SHIFTL(type, 4, 8) | _SHIFTL(yPos, 0, 8)), _message_##textId##_staff },
#include "../text/declare_messages_staff.h"
#undef DECLARE_MESSAGE
    { 0xFFFF, 0, NULL },
};

MessageTableEntry* D_801538F0 = &D_8014B320[0];
const char** D_801538F4 = &D_8014F548[0];
const char** D_801538F8 = &D_80151658[0];
MessageTableEntry* D_801538FC = &D_80153768[0];

Color_RBG16 D_80153900[] = {
    { 0x00FF, 0x00FF, 0x00FF }, { 0x0032, 0x0014, 0x0000 }, { 0x00FF, 0x003C, 0x0000 }, { 0x00FF, 0x00FF, 0x00FF },
    { 0x00FF, 0x00FF, 0x00FF }, { 0x00FF, 0x00FF, 0x00FF }, { 0x00FF, 0x00FF, 0x00FF }, { 0x00FF, 0x00FF, 0x00FF },
};

Color_RBG16 D_80153930[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x00DC, 0x0096, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

s16 D_80153948[] = {
    0x0001,
    0x0002,
};

u8 D_8015394C[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

s16 D_80153958[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

s16 D_8015396C[] = {
    0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0008, 0x0007, 0x0006, 0x0009, 0x000A, 0x000B,
};

// bss
s32 D_801759A0;
s32 D_801759A4;
s16 D_801759A8;
s16 D_801759AA;
s16 D_801759AC;
s16 D_801759AE;
s16 D_801759B0;
s16 D_801759B2;
s16 D_801759B4;
s16 D_801759B6;
s16 D_801759B8;
s16 D_801759BA;
s16 D_801759BC;
s16 D_801759BE;

// Segment addresses
extern UNK_TYPE D_02002E40; // ocarina clef in parameter_static

void func_801069B0(void) {
    VREG(45) = 0xBD;
    VREG(46) = 0xB8;
    VREG(47) = 0xB3;
    VREG(48) = 0xAE;
    VREG(49) = 0xA9;
    D_8015394C[0] = 0xFF;
    D_80153958[8] = 0;
    D_80153958[7] = D_80153958[8];
    D_80153958[6] = D_80153958[8];
    D_80153958[5] = D_80153958[8];
    D_80153958[4] = D_80153958[8];
    D_80153958[3] = D_80153958[8];
    D_80153958[2] = D_80153958[8];
    D_80153958[1] = D_80153958[8];
    D_80153958[0] = D_80153958[8];
    D_801759A8 = 0x50;
    D_801759AC = 0xFF;
    D_801759AA = 0x96;
    D_801759AE = 0xA;
    D_801759B2 = 0xA;
    D_801759B0 = 0xA;
    D_801759B4 = 0xFF;
    D_801759B8 = 0xFF;
    D_801759B6 = 0x32;
    D_801759BA = 0xA;
    D_801759BE = 0xA;
    D_801759BC = 0xA;
}

void func_80106AA8(GlobalContext* globalCtx) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    globalCtx->msgCtx.msgMode++;

    if (globalCtx->msgCtx.msgMode == 0x2E) {
        func_800ED858(1);
        msgCtx->unk_E2B8 = func_800EE3D4(); // Na_StopOcarinaMode
        msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
        func_800ECC04(0xA000); // Na_StartOcarinaSinglePlayCheck2
        msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
    } else if (msgCtx->msgMode == 0x2C) {
        func_800ED858(6);
        msgCtx->unk_E2B8 = func_800EE3F8();
        msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
        func_800ED93C(0xE, 1);
        msgCtx->unk_E3E7 = 2;
    }
    func_801069B0();
}

u8 func_80106BC8(GlobalContext* globalCtx) {
    Input* curInput = &globalCtx->state.input[0];

    if (CHECK_BTN_ALL(curInput->press.button, BTN_A_SWAPPED) || CHECK_BTN_ALL(curInput->press.button, BTN_B_SWAPPED) ||
        CHECK_BTN_ALL(curInput->press.button, BTN_CUP)) {
        // spaceworld, change message advance sound
        // Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_PASS, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        // Audio_PlaySoundPitched(NA_SE_SY_ATTENTION_ON_OLD);
    }
    return CHECK_BTN_ALL(curInput->press.button, BTN_A_SWAPPED) ||
           CHECK_BTN_ALL(curInput->press.button, BTN_B_SWAPPED) || CHECK_BTN_ALL(curInput->press.button, BTN_CUP);
}

u8 func_80106C88(GlobalContext* globalCtx) {
    Input* curInput = &globalCtx->state.input[0];

    return CHECK_BTN_ALL(curInput->press.button, BTN_A_SWAPPED) ||
           CHECK_BTN_ALL(curInput->press.button, BTN_B_SWAPPED) || CHECK_BTN_ALL(curInput->press.button, BTN_CUP);
}

void func_80106CCC(GlobalContext* globalCtx) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    if (msgCtx->unk_E300 != 0) {
        msgCtx->unk_E3E7 = 2;
        msgCtx->msgMode = 0x36;
        msgCtx->unk_E3E4 = 0;
        Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    }
}

void func_80106D40(GlobalContext* globalCtx, u8 arg1) {
    static s16 D_80153984 = 0;

    MessageContext* msgCtx = &globalCtx->msgCtx;
    Input* curInput = &globalCtx->state.input[0];

    if (curInput->rel.stick_y > 0x1D && D_80153984 == 0) {
        D_80153984 = 1;
        msgCtx->choiceIndex--;
        if (msgCtx->choiceIndex > 0x80) {
            msgCtx->choiceIndex = 0;
        } else {
            Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
    } else if (curInput->rel.stick_y < -0x1D && D_80153984 == 0) {
        D_80153984 = 1;
        msgCtx->choiceIndex++;
        if (msgCtx->choiceIndex > arg1) {
            msgCtx->choiceIndex = arg1;
        } else {
            Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
    } else if (ABS(curInput->rel.stick_y) < 0x1E) {
        D_80153984 = 0;
    }
    msgCtx->unk_E3D8 = XREG(66);
    msgCtx->unk_E3DA = (arg1 == 1) ? XREG(68 + msgCtx->choiceIndex) : XREG(67 + msgCtx->choiceIndex);
}

void func_80106F1C(GlobalContext* globalCtx, void* textureImage, Gfx** p) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    Gfx* gfx = *p;
    s16 unk_E3D8 = msgCtx->unk_E3D8;
    s16 unk_E3DA = msgCtx->unk_E3DA;

    gDPPipeSync(gfx++);
    D_801759A0 = (XREG(57) / 100.0f) * 16.0f;
    D_801759A4 = 1024.0f / (XREG(57) / 100.0f);

    gDPLoadTextureBlock_4b(gfx++, textureImage, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                           G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    if (msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW) { // Draw drop shadow
        gDPSetPrimColor(gfx++, 0, 0, 0x00, 0x00, 0x00, msgCtx->unk_E3E2);
        gSPTextureRectangle(gfx++, (unk_E3D8 + XREG(60)) << 2, (unk_E3DA + XREG(60)) << 2,
                            (unk_E3D8 + XREG(60) + 13) << 2, (unk_E3DA + XREG(60) + 13) << 2, G_TX_RENDERTILE, 0, 0,
                            650 << 1, 650 << 1);
    }

    gDPPipeSync(gfx++);
    gDPSetPrimColor(gfx++, 0, 0, msgCtx->unk_E3DC, msgCtx->unk_E3DE, msgCtx->unk_E3E0, msgCtx->unk_E3E2);
    gSPTextureRectangle(gfx++, (unk_E3D8) << 2, (unk_E3DA) << 2, (unk_E3D8 + 13) << 2, (unk_E3DA + 13) << 2,
                        G_TX_RENDERTILE, 0, 0, 650 << 1, 650 << 1);
    *p = gfx;
}

// Open textbox
void func_80107244(GlobalContext* globalCtx, MessageContext* msgCtx) {
    static f32 widthCoefficients[] = {
        0.17f, 0.17f, 0.34f, 0.51f, 0.64f, 0.82f, 1.0f, 1.14f, 1.31f, 1.5f, 1.7f,
    };
    static f32 heightCoefficients[] = {
        0.49f, 0.1f, 0.2f, 0.3f, 0.37f, 0.49f, 0.58f, 0.67f, 0.77f, 0.88f, 1.0f,
    };
    // static u8 zoomSoundPlayed = false;

    u8 prev;

    f32 width = R_TEXTBOX_WIDTH_TARGET * (widthCoefficients[msgCtx->unk_E3E7] + widthCoefficients[msgCtx->unk_E3E7]);
    f32 height = XREG(75) * heightCoefficients[msgCtx->unk_E3E7];

    f32 u = XREG(76) / (widthCoefficients[msgCtx->unk_E3E7] + widthCoefficients[msgCtx->unk_E3E7]);
    f32 v = XREG(77) / heightCoefficients[msgCtx->unk_E3E7];

    // move y position
    VREG(1) = XREG(73) + (XREG(73) - (s16)(XREG(73) * heightCoefficients[msgCtx->unk_E3E7] + 0.5f)) / 2;

    // change alpha
    msgCtx->unk_E406 = msgCtx->unk_E404;

    prev = msgCtx->unk_E3E7++;

    // if (!zoomSoundPlayed) {
    //     Audio_PlaySoundPitched(NA_SE_SY_HP_RECOVER);
    //     zoomSoundPlayed = true;
    // }

    if (msgCtx->unk_E3E7 == ARRAY_COUNT(widthCoefficients)) {
        // Done growing the textbox, set text box position to final intended position
        R_TEXTBOX_X = R_TEXTBOX_X_TARGET;
        VREG(1) = XREG(73);
        msgCtx->msgMode = 3;
        // zoomSoundPlayed = false;
    }

    // grow text box width/height
    R_TEXTBOX_WIDTH = (s16)(width + 0.5f) / 2;
    YREG(23) = (s16)(height + 0.5f);

    // grow texture coords
    YREG(16) = u + 0.5f;
    YREG(17) = v + 0.5f;

    // move x position
    R_TEXTBOX_X = R_TEXTBOX_X_TARGET + R_TEXTBOX_WIDTH_TARGET - (R_TEXTBOX_WIDTH / 2);

    // adjust x and y position for actor if applicable
    if (msgCtx->unk_E408 != NULL) {
        s16 actorX = 0;
        s16 actorY = 0;

        Actor_GetProjectionPos(globalCtx, msgCtx->unk_E408, &actorX, &actorY);

        // some edge cases where the actor is off screen, we never want the textbox to be off screen
        // this is an issue in prerenders mostly
        actorX = CLAMP(actorX - (R_TEXTBOX_WIDTH / 2), 0, SCREEN_WIDTH);
        actorY = CLAMP(actorY, 0, SCREEN_HEIGHT);

        R_TEXTBOX_X = actorX + (R_TEXTBOX_X - actorX) * ((f32)prev / (f32)(ARRAY_COUNT(widthCoefficients) - 1));
        VREG(1) = actorY + (VREG(1) - actorY) * ((f32)prev / (f32)(ARRAY_COUNT(widthCoefficients) - 1));
    }
}

void func_80107448(GlobalContext* globalCtx, u16 textId) {
    const char* foundSeg;
    const char* nextSeg;
    MessageTableEntry* messageTableEntry;
    const char** languageSegmentTable;
    Font* font;
    const char* seg;

    messageTableEntry = D_801538F0;
    if (gSaveContext.language == LANGUAGE_ENG) {
        seg = messageTableEntry->segment;
        while (messageTableEntry->textId != 0xFFFF) {
            font = &globalCtx->msgCtx.font;
            if (messageTableEntry->textId == textId) {
                foundSeg = messageTableEntry->segment;
                font->xy = messageTableEntry->typePos;
                messageTableEntry++;
                nextSeg = messageTableEntry->segment;
                font->msgOffset = foundSeg - seg;
                font->msgLength = nextSeg - foundSeg;
                // Message found!!!
                osSyncPrintf(
                    " メッセージが,見つかった！！！ = %x  (data=%x) (data0=%x) (data1=%x) (data2=%x) (data3=%x)\n",
                    textId, font->msgOffset, font->msgLength, foundSeg, seg, nextSeg);
                return;
            }
            messageTableEntry++;
        }
    } else {
        languageSegmentTable = (gSaveContext.language == LANGUAGE_GER) ? D_801538F4 : D_801538F8;
        seg = messageTableEntry->segment;
        while (messageTableEntry->textId != 0xFFFF) {
            font = &globalCtx->msgCtx.font;
            if (messageTableEntry->textId == textId) {
                foundSeg = *languageSegmentTable;
                font->xy = messageTableEntry->typePos;
                languageSegmentTable++;
                nextSeg = *languageSegmentTable;
                font->msgOffset = foundSeg - seg;
                font->msgLength = nextSeg - foundSeg;
                // Message found!!!
                osSyncPrintf(
                    " メッセージが,見つかった！！！ = %x  (data=%x) (data0=%x) (data1=%x) (data2=%x) (data3=%x)\n",
                    textId, font->msgOffset, font->msgLength, foundSeg, seg, nextSeg);
                return;
            }
            messageTableEntry++;
            languageSegmentTable++;
        }
    }
    // Message not found!!!
    osSyncPrintf(" メッセージが,見つからなかった！！！ = %x\n", textId);
    font = &globalCtx->msgCtx.font;
    messageTableEntry = D_801538F0;
    if (gSaveContext.language == LANGUAGE_ENG) {
        foundSeg = messageTableEntry->segment;
        font->xy = messageTableEntry->typePos;
        messageTableEntry++;
        nextSeg = messageTableEntry->segment;
    } else {
        languageSegmentTable = (gSaveContext.language == LANGUAGE_GER) ? D_801538F4 : D_801538F8;
        foundSeg = *languageSegmentTable;
        font->xy = messageTableEntry->typePos;
        languageSegmentTable++;
        nextSeg = *languageSegmentTable;
    }
    font->msgOffset = foundSeg - seg;
    font->msgLength = nextSeg - foundSeg;
}

void func_80107628(GlobalContext* globalCtx, u16 textId) {
    const char* foundSeg;
    const char* nextSeg;
    const char* seg;
    MessageTableEntry* messageTableEntry = D_801538FC;
    Font* font;

    seg = messageTableEntry->segment;
    while (messageTableEntry->textId != 0xFFFF) {
        font = &globalCtx->msgCtx.font;
        if (messageTableEntry->textId == textId) {
            foundSeg = messageTableEntry->segment;
            font->xy = messageTableEntry->typePos;
            messageTableEntry++;
            nextSeg = messageTableEntry->segment;
            font->msgOffset = foundSeg - seg;
            font->msgLength = nextSeg - foundSeg;
            // Message found!!!
            osSyncPrintf(" メッセージが,見つかった！！！ = %x  (data=%x) (data0=%x) (data1=%x) (data2=%x) (data3=%x)\n",
                         textId, font->msgOffset, font->msgLength, foundSeg, seg, nextSeg);
            return;
        }
        messageTableEntry++;
    }
}

void func_801076CC(MessageContext* msgCtx, u16 colorParameter) {
    switch (colorParameter) {
        case 1:                                   // COLOR(RED)
            if (msgCtx->unk_E2FD == BOX_WOODEN) { // Orange
                msgCtx->unk_E3DC = 255;
                msgCtx->unk_E3DE = 80;
                msgCtx->unk_E3E0 = 50;
            } else { // Red 200, 20, 0
                msgCtx->unk_E3DC = 255;
                msgCtx->unk_E3DE = 30;
                msgCtx->unk_E3E0 = 0;
            }
            break;
        case 2:                                   // COLOR(GREEN)
            if (msgCtx->unk_E2FD == BOX_WOODEN) { // Green
                msgCtx->unk_E3DC = VREG(33);
                msgCtx->unk_E3DE = VREG(34);
                msgCtx->unk_E3E0 = VREG(35);
            } else { // Green slightly darker
                msgCtx->unk_E3DC = 0;
                msgCtx->unk_E3DE = 100;
                msgCtx->unk_E3E0 = 0;
            }
            break;
        case 3:                                   // COLOR(BLUE)
            if (msgCtx->unk_E2FD == BOX_WOODEN) { // Blue 60, 60, 165
                msgCtx->unk_E3DC = 30;
                msgCtx->unk_E3DE = 130;
                msgCtx->unk_E3E0 = 255;
            } else { // Blue slightly darker
                msgCtx->unk_E3DC = 50;
                msgCtx->unk_E3DE = 50;
                msgCtx->unk_E3E0 = 160;
            }
            break;
        case 4:                                   // COLOR(LIGHTBLUE)
            if (msgCtx->unk_E2FD == BOX_WOODEN) { // Light-Blue - Cyan, Alternative for regular box: 40, 100, 160
                msgCtx->unk_E3DC = 0x5A;
                msgCtx->unk_E3DE = 0xB4;
                msgCtx->unk_E3E0 = 0xFF;
            } else if (msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW) {
                msgCtx->unk_E3DC = 0x50;
                msgCtx->unk_E3DE = 0x96;
                msgCtx->unk_E3E0 = 0xB4;
            } else { // Cyan slightly darker
                msgCtx->unk_E3DC = 35;
                msgCtx->unk_E3DE = 90;
                msgCtx->unk_E3E0 = 150;
            }
            break;
        case 5:                                   // COLOR(PINK)
            if (msgCtx->unk_E2FD == BOX_WOODEN) { // Purple
                msgCtx->unk_E3DC = 210;
                msgCtx->unk_E3DE = 100;
                msgCtx->unk_E3E0 = 255;
            } else { // Purple slightly darker 150, 0, 255
                msgCtx->unk_E3DC = 120;
                msgCtx->unk_E3DE = 0;
                msgCtx->unk_E3E0 = 200;
            }
            break;
        case 6:                                   // COLOR(YELLOW)
            if (msgCtx->unk_E2FD == BOX_WOODEN) { // Yellow 150, 95, 0
                msgCtx->unk_E3DC = 255;
                msgCtx->unk_E3DE = 170;
                msgCtx->unk_E3E0 = 0;
            } else if (msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW) {
                msgCtx->unk_E3DC = 240;
                msgCtx->unk_E3DE = 150;
                msgCtx->unk_E3E0 = 0;
            } else { // Yellow slightly darker 240, 150, 0 / 200, 130, 0
                msgCtx->unk_E3DC = 190;
                msgCtx->unk_E3DE = 120;
                msgCtx->unk_E3E0 = 0;
            }
            break;
        case 7:
            msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 0;
            break;
        case 0: // required to match
        default:
            if (msgCtx->unk_E2FD == BOX_WOODEN || msgCtx->unk_E2FD == BOX_NONE_BOTTOM ||
                msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW) {
                msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 255;
            } else {
                msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 0;
            }
            break;
    }
}

void func_80107980(GlobalContext* globalCtx, Gfx** p, s16 arg2, s16 arg3) {
    static Color_RBG16 D_801539C8[] = {
        { 0, 0, 0 },
        { 255, 255, 255 },
    };
    /*     static Color_RBG16 D_801539D4[] = {
            { 255, 255, 255 },
            { 255, 255, 255 },
        }; */
    static s16 D_801539E0 = 0;
    static s16 D_801539E4 = 0;
    static s16 D_801539E8 = 0;
    static s16 D_801539EC = 12;
    static s16 D_801539F0 = 0;
    static s16 D_801539F4 = 0;
    static s16 D_801539F8 = 0;
    static s16 D_801539FC = 0;

    MessageContext* msgCtx = &globalCtx->msgCtx;
    Font* font = &msgCtx->font;
    Gfx* gfx = *p;
    u8 textColorType = 0;
    u8* iconTexture = font->iconBuf;

    if (!D_8014B308) {
        /* primR = (ABS(D_801539E0 - D_801539C8[D_801539F0].r)) / D_801539EC;
        primG = (ABS(D_801539E4 - D_801539C8[D_801539F0].g)) / D_801539EC;
        primB = (ABS(D_801539E8 - D_801539C8[D_801539F0].b)) / D_801539EC;

        if (D_801539E0 >= D_801539C8[D_801539F0].r) {
            D_801539E0 -= primR;
        } else {
            D_801539E0 += primR;
        }

        if (D_801539E4 >= D_801539C8[D_801539F0].g) {
            D_801539E4 -= primG;
        } else {
            D_801539E4 += primG;
        }

        if (D_801539E8 >= D_801539C8[D_801539F0].b) {
            D_801539E8 -= primB;
        } else {
            D_801539E8 += primB;
        }

        envR = (ABS(D_801539F4 - D_801539D4[D_801539F0].r)) / D_801539EC;
        envG = (ABS(D_801539F8 - D_801539D4[D_801539F0].g)) / D_801539EC;
        envB = (ABS(D_801539FC - D_801539D4[D_801539F0].b)) / D_801539EC;

        if (D_801539F4 >= D_801539D4[D_801539F0].r) {
            D_801539F4 -= envR;
        } else {
            D_801539F4 += envR;
        }

        if (D_801539F8 >= D_801539D4[D_801539F0].g) {
            D_801539F8 -= envG;
        } else {
            D_801539F8 += envG;
        }

        if (D_801539FC >= D_801539D4[D_801539F0].b) {
            D_801539FC -= envB;
        } else {
            D_801539FC += envB;
        }

        D_801539EC--;

        if (D_801539EC == 0) {
            D_801539E0 = D_801539C8[D_801539F0].r;
            D_801539E4 = D_801539C8[D_801539F0].g;
            D_801539E8 = D_801539C8[D_801539F0].b;
            D_801539F4 = D_801539D4[D_801539F0].r;
            D_801539F8 = D_801539D4[D_801539F0].g;
            D_801539FC = D_801539D4[D_801539F0].b;
            D_801539EC = 12;
            D_801539F0 ^= 1;
        } */

        if ((msgCtx->unk_E2FD == BOX_WOODEN) || (msgCtx->unk_E2FD == BOX_NONE_BOTTOM) ||
            (msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW)) {
            textColorType = 1;
        }

        gDPPipeSync(gfx++);

        gDPSetCombineLERP(gfx++, PRIMITIVE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, 0, TEXEL0, 0, TEXEL0, 0,
                          PRIMITIVE, 0);

        gDPSetPrimColor(gfx++, 0, 0, D_801539C8[textColorType].r, D_801539C8[textColorType].g,
                        D_801539C8[textColorType].b, 255);

        gDPLoadTextureBlock_4b(gfx++, iconTexture, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                               G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        D_801759A0 = 0.88f * 16.0f * ((f32)XREG(57) / 100.0f);
        D_801759A4 = 1.15f * 1024.0f / ((f32)XREG(57) / 100.0f);

        if (arg3 == XREG(65)) {
            static s16 lineOffsets[4] = {
                // how much further down the icon should be
                2,
                6,
                13,
                18,
            };

            ASSERT(sLineCount < ARRAY_COUNT(lineOffsets));

            arg3 += lineOffsets[sLineCount]; // adjustments made with YREG(11)
        }

        gSPTextureRectangle(gfx++, arg2 << 2, arg3 << 2, (arg2 + D_801759A0) << 2, (arg3 + D_801759A0) << 2,
                            G_TX_RENDERTILE, 0, 0, D_801759A4, D_801759A4);

        msgCtx->unk_E3E7++;

        *p = gfx;
    }
}

// font widths
u32 D_80153A00[] = {
    0x40400000, 0x40800000, 0x40800000, 0x41000000, 0x41000000, 0x41300000, 0x41200000, 0x40400000, 0x40A00000,
    0x40800000, 0x40C00000, 0x40E00000, 0x40400000, 0x40D00000, 0x40400000, 0x40A00000, 0x41000000, 0x41000000,
    0x41000000, 0x41000000, 0x41100000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x40400000,
    0x40800000, 0x40E00000, 0x41000000, 0x40E00000, 0x41000000, 0x41200000, 0x41200000, 0x41100000, 0x41200000,
    0x41100000, 0x41000000, 0x41000000, 0x41200000, 0x41100000, 0x40400000, 0x41000000, 0x41100000, 0x41000000,
    0x41300000, 0x41100000, 0x41200000, 0x41100000, 0x41200000, 0x41100000, 0x41000000, 0x41100000, 0x41100000,
    0x41100000, 0x41400000, 0x41100000, 0x41100000, 0x41000000, 0x40800000, 0x41000000, 0x40A00000, 0x40A00000,
    0x40400000, 0x40400000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x40C00000, 0x41000000,
    0x40E00000, 0x40400000, 0x40800000, 0x40E00000, 0x40400000, 0x41200000, 0x40E00000, 0x41000000, 0x41000000,
    0x41000000, 0x40C00000, 0x40E00000, 0x40C00000, 0x40E00000, 0x40E00000, 0x41200000, 0x40E00000, 0x40E00000,
    0x40E00000, 0x40800000, 0x40400000, 0x40800000, 0x40400000, 0x41200000, 0x40800000, 0x41200000, 0x41200000,
    0x41200000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x40A00000, 0x41200000, 0x41200000, 0x41100000,
    0x41100000, 0x41100000, 0x41300000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x41000000,
    0x41000000, 0x41000000, 0x41000000, 0x40A00000, 0x41000000, 0x41000000, 0x40E00000, 0x40E00000, 0x40E00000,
    0x41100000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000,
    0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000,
};

s16 D_80153C40[] = { 74, 74, 74, 0 };

s16 D_80153C48[] = { 72, 72, 72, 0 };

u16 func_801080B4(GlobalContext* globalCtx, u16 arg1, Gfx** p, u16 arg3) {
    Gfx* gfx = *p;
    MessageContext* msgCtx = &globalCtx->msgCtx;

    if (msgCtx->msgMode == 6) {
        Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    }

    gDPPipeSync(gfx++);
    gDPSetCombineMode(gfx++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
    if ((arg1 == ITEM_HEART_PIECE_2 || arg1 == ITEM_HEART_PIECE) && !gIsFullHeartPiece) {
        gDPSetPrimColor(gfx++, 0, 0, 255, 0, 0, msgCtx->unk_E3E2);
    } else {
        gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, msgCtx->unk_E3E2);
    }

    if ((arg1 == ITEM_HEART_PIECE_2 || arg1 == ITEM_HEART_PIECE) && !gIsFullHeartPiece) {
        gDPLoadTextureBlock(gfx++, (u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE, G_IM_FMT_IA, G_IM_SIZ_8b, 48,
                            48, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                            G_TX_NOLOD, G_TX_NOLOD);
    } else if (arg1 >= 0x66 && arg1 != 0x76 && arg1 != 0x75 && arg1 != ITEM_HEART_PIECE_2 && arg1 != ITEM_HEART_PIECE) {
        // 24 x 24 Item Icon Draw
        gDPLoadTextureBlock(gfx++, (u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE, G_IM_FMT_RGBA, G_IM_SIZ_32b,
                            24, 24, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                            G_TX_NOLOD, G_TX_NOLOD);
    } else {
        // 32 x 32 Item Icon Draw
        if (arg1 == 0x76) {
            gDPLoadTextureBlock(gfx++, g32MapIconTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                                G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        } else if (arg1 == 0x75) {
            gDPLoadTextureBlock(gfx++, g32CompassIconTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 32, 0,
                                G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);
        } else {
            gDPLoadTextureBlock(gfx++, (u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE, G_IM_FMT_RGBA,
                                G_IM_SIZ_32b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                                G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        }
    }
    gSPTextureRectangle(gfx++, (msgCtx->unk_E3D8 + YREG(71)) * 4, YREG(72) * 4,
                        (msgCtx->unk_E3D8 + YREG(71) + YREG(75)) * 4, (YREG(72) + YREG(75)) * 4, G_TX_RENDERTILE, 0, 0,
                        YREG(75) << 5, YREG(75) << 5);
    gDPPipeSync(gfx++);
    gDPSetCombineLERP(gfx++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

    msgCtx->unk_E3D8 += 0x20;
    arg3++;
    *p = gfx;
    return arg3;
}

void func_801083F8(GlobalContext* globalCtx) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    if (globalCtx->msgCtx.msgMode == 6) {
        globalCtx->msgCtx.unk_E3EE = 1;
        if (msgCtx->unk_E3F0 == 0x2A) {
            msgCtx->msgMode = 0x21;
            // Recording Start / Recording Start / Recording Start / Recording Start ->
            osSyncPrintf("録音開始 録音開始 録音開始 録音開始  -> ");
        } else if (msgCtx->unk_E3F0 == 0x2B) {
            // Recording Playback / Recording Playback / Recording Playback / Recording Playback ->
            osSyncPrintf("録音再生 録音再生 録音再生 録音再生  -> ");
            func_800ED858(1);
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3F8();
            D_8014B2F8 = D_8014B2FC = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            func_801069B0();
            msgCtx->unk_E3E7 = 3;
            msgCtx->msgMode = 0x23;
            func_800ED93C(0xF, 1);
        } else if (msgCtx->unk_E3F0 == 0x2C) {
            msgCtx->msgMode = 0x24;
            // 8 Note Recording Start / 8 Note Recording Start / 8 Note Recording Start ->
            osSyncPrintf("８音録音開始 ８音録音開始 ８音録音開始  -> ");
        } else if (msgCtx->unk_E3F0 == 0x2D) {
            // 8 Note Playback / 8 Note Playback / 8 Note Playback ->
            osSyncPrintf("８音再生 ８音再生 ８音再生  -> ");
            func_800ED858(1);
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3F8();
            D_8014B2F8 = D_8014B2FC = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            func_801069B0();
            msgCtx->unk_E3E7 = 3;
            msgCtx->msgMode = 0x28;
            func_800ED93C(0xD, 1);
        } else if (msgCtx->unk_E3F0 == 0x2E) {
            msgCtx->msgMode = 0x29;
            // Musical Round Start / Musical Round Start / Musical Round Start / Musical Round Start ->
            osSyncPrintf("輪唱開始 輪唱開始 輪唱開始 輪唱開始  -> ");
        } else if (msgCtx->unk_E3F0 == 0x2F) {
            msgCtx->msgMode = 0x31;
            // Frog Chorus / Frog Chorus ->
            osSyncPrintf("カエルの合唱 カエルの合唱  -> ");
        } else {
            // Ocarina（%d）
            osSyncPrintf("オカリナ（%d） ", msgCtx->unk_E3F0);
            if (msgCtx->unk_E3F0 == 0 || msgCtx->unk_E3F0 == 1 || msgCtx->unk_E3F0 >= 0x22) {
                msgCtx->msgMode = 9;
                osSyncPrintf("000000000000  -> ");
            } else if (msgCtx->unk_E3F0 >= 2 && msgCtx->unk_E3F0 < 0xE) {
                msgCtx->msgMode = 0xA;
                osSyncPrintf("111111111111  -> ");
            } else {
                msgCtx->msgMode = 0xB;
                osSyncPrintf("222222222222  -> ");
            }
        }
        osSyncPrintf("msg_mode=%d\n", msgCtx->msgMode);
    }
}

void func_801086B0(GlobalContext* globalCtx, Gfx** gfxP) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    u16 tmp;
    u8 phi_v0;
    u16 phi_a0;
    u16 phi_s2;
    u16 new_var;
    u16 sp128;
    Font* font = &globalCtx->msgCtx.font;
    Gfx* sp120 = *gfxP;
    f32* fontWidthTable = (f32*)&D_80153A00;

    globalCtx->msgCtx.unk_E3D8 = XREG(54);
    if (D_8014B308 == 0) {
        msgCtx->unk_E3DA = XREG(55);
    } else {
        msgCtx->unk_E3DA = YREG(1);
    }
    if (msgCtx->unk_E2FD == BOX_WOODEN || msgCtx->unk_E2FD == BOX_NONE_BOTTOM ||
        msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW) {
        msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 255;
    } else {
        msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 0;
    }
    msgCtx->unk_E3D0 = 0;
    sp128 = 0;

    for (phi_s2 = 0; phi_s2 < msgCtx->unk_E3D2; phi_s2++) {
        phi_v0 = msgCtx->unk_E306[phi_s2];
        switch (phi_v0) {
            case 1:
                msgCtx->unk_E3D8 = XREG(54);
                if ((msgCtx->unk_E3E6 == 1) || (msgCtx->unk_E3E6 == 3)) {
                    msgCtx->unk_E3D8 += 0x20;
                }
                if ((msgCtx->unk_E3E6 == 2) && (msgCtx->unk_E3DA != XREG(55))) {
                    msgCtx->unk_E3D8 += 0x20;
                }
                msgCtx->unk_E3DA += XREG(56);
                break;
            case 5:
                func_801076CC(msgCtx, msgCtx->unk_E306[++phi_s2] & 0xF);
                break;
            case 32:
                msgCtx->unk_E3D8 += 4; // this is the space width!
                break;
            case 4:
                if (msgCtx->msgMode == 6) {
                    if (D_8014B300 == 0) {
                        Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        msgCtx->msgMode = 0x34;
                        Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_TRIANGLE);
                    } else {
                        msgCtx->msgMode = 4;
                        msgCtx->unk_E3D6 = 0;
                        msgCtx->unk_E3CE++;
                    }
                }
                *gfxP = sp120;
                return;
            case 6:
                msgCtx->unk_E3D8 += msgCtx->unk_E306[++phi_s2];
                break;
            case 7:
                msgCtx->unk_E3E4 = 0x30;
                if (msgCtx->msgMode == 6) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    msgCtx->msgMode = 0x35;
                    Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_TRIANGLE);
                }
                *gfxP = sp120;
                return;
            case 8:
                if (phi_s2 + 1 == msgCtx->unk_E3D2 &&
                    (msgCtx->msgMode == 6 || (msgCtx->msgMode >= 9 && msgCtx->msgMode < 0x21))) {
                    phi_a0 = phi_s2;
                    while (true) {
                        tmp = msgCtx->unk_E306[phi_a0];
                        if (tmp == 6) {
                            phi_a0 += 2;
                        } else if ((tmp != 9) && (tmp != 0xA) && (tmp != 0xB) && (tmp != 0xC) && (tmp != 0xD) &&
                                   (tmp != 4) && (tmp != 2)) {
                            phi_a0++;
                        } else {
                            break;
                        }
                    }
                    phi_s2 = phi_a0 - 1;
                    msgCtx->unk_E3D2 = phi_s2 + 1;
                    if (phi_v0) {}
                }
            case 9:
                break;
            case 13:
                if (phi_s2 + 1 == msgCtx->unk_E3D2) {
                    if (msgCtx->msgMode == 6) {
                        msgCtx->msgMode = 7;
                        Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_TRIANGLE);
                    }
                    *gfxP = sp120;
                    return;
                }
                break;
            case 12:
                if (msgCtx->msgMode == 6) {
                    msgCtx->unk_E3E7 = msgCtx->unk_E306[++phi_s2];
                    msgCtx->msgMode = 8;
                }
                *gfxP = sp120;
                return;
            case 17:
                if (msgCtx->msgMode == 6) {
                    msgCtx->msgMode = 0x35;
                    msgCtx->unk_E3E4 = 0x60;
                    osSyncPrintf("タイマー (%x) (%x)", msgCtx->unk_E306[phi_s2 + 1],
                                 msgCtx->unk_E306[phi_s2 + 2]); // timer
                    msgCtx->unk_E3E7 = msgCtx->unk_E306[++phi_s2] << 8;
                    msgCtx->unk_E3E7 |= msgCtx->unk_E306[++phi_s2];
                    osSyncPrintf("合計wct=%x(%d)\n", msgCtx->unk_E3E7, msgCtx->unk_E3E7); // total wct
                }
                *gfxP = sp120;
                return;
            case 18:
                if (msgCtx->msgMode == 6 && D_8014B318 == 0) {
                    D_8014B318 = 1;
                    osSyncPrintf("サウンド（ＳＥ）\n"); // sfx
                    new_var = msgCtx->unk_E306[phi_s2 + 1] << 8;
                    Audio_PlaySoundGeneral((new_var) | msgCtx->unk_E306[phi_s2 + 2], &D_801333D4, 4, &D_801333E0,
                                           &D_801333E0, &D_801333E8);
                }
                phi_s2 += 2;
                break;
            case 19:
                phi_s2 = func_801080B4(globalCtx, msgCtx->unk_E306[phi_s2 + 1], &sp120, phi_s2);
                break;
            case 21:
                if (msgCtx->msgMode == 6) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                }
                gDPPipeSync(sp120++);
                gDPSetCombineMode(sp120++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
                gDPSetPrimColor(sp120++, 0, 0, D_80153930[msgCtx->unk_E3F9].r, D_80153930[msgCtx->unk_E3F9].g,
                                D_80153930[msgCtx->unk_E3F9].b, msgCtx->unk_E3E2);

                gDPLoadTextureBlock_4b(sp120++, ((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE), G_IM_FMT_I, 96,
                                       48, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                                       G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, (msgCtx->unk_E3D8 + 1) << 2,
                                    (XREG(61) + D_80153948[msgCtx->unk_E3FA]) << 2, (msgCtx->unk_E3D8 + 0x61) << 2,
                                    (XREG(61) + D_80153948[msgCtx->unk_E3FA] + 0x30) << 2, G_TX_RENDERTILE, 0, 0,
                                    0x0400, 0x0400);

                gDPLoadTextureBlock_4b(sp120++, ((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE + 0x900),
                                       G_IM_FMT_I, 96, 48, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                                       G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, (msgCtx->unk_E3D8 + 0x61) << 2,
                                    (XREG(61) + D_80153948[msgCtx->unk_E3FA]) << 2, (msgCtx->unk_E3D8 + 0xC2) << 2,
                                    (XREG(61) + D_80153948[msgCtx->unk_E3FA] + 0x30) << 2, G_TX_RENDERTILE, 0, 0,
                                    0x0400, 0x0400);

                gDPPipeSync(sp120++);
                gDPSetPrimColor(sp120++, 0, 0, D_80153900[msgCtx->unk_E3F8].r, D_80153900[msgCtx->unk_E3F8].g,
                                D_80153900[msgCtx->unk_E3F8].b, msgCtx->unk_E3E2);

                gDPLoadTextureBlock_4b(sp120++, ((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE), G_IM_FMT_I, 96,
                                       48, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                                       G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, msgCtx->unk_E3D8 << 2, XREG(61) << 2, (msgCtx->unk_E3D8 + 0x60) << 2,
                                    (XREG(61) + 0x30) << 2, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);

                gDPLoadTextureBlock_4b(sp120++, ((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE + 0x900),
                                       G_IM_FMT_I, 96, 48, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                                       G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, (msgCtx->unk_E3D8 + 0x60) << 2, XREG(61) << 2,
                                    (msgCtx->unk_E3D8 + 0xC0) << 2, (XREG(61) + 0x30) << 2, G_TX_RENDERTILE, 0, 0,
                                    0x0400, 0x0400);

                gDPPipeSync(sp120++);
                gDPSetCombineLERP(sp120++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0,
                                  PRIMITIVE, 0);

                msgCtx->unk_E3D8 += 0x20;
                break;
            case 20:
                msgCtx->unk_E3EA = msgCtx->unk_E306[++phi_s2];
                break;
            case 26:
                msgCtx->unk_E3D6 = 1;
                break;
            case 27:
                msgCtx->unk_E3E4 = 0x10;
                if (msgCtx->msgMode == 6) {
                    msgCtx->unk_E2FA = msgCtx->unk_E2F8;
                    msgCtx->unk_E3E7 = 4;
                    msgCtx->choiceIndex = 0;
                    Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_ARROW);
                }
                break;
            case 28:
                msgCtx->unk_E3E4 = 0x20;
                if (msgCtx->msgMode == 6) {
                    msgCtx->unk_E2FA = msgCtx->unk_E2F8;
                    msgCtx->unk_E3E7 = 4;
                    msgCtx->choiceIndex = 0;
                    Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_ARROW);
                }
                break;
            case 2:
                if (msgCtx->msgMode == 6) {
                    msgCtx->msgMode = 0x35;
                    if (msgCtx->unk_E3E4 == 0) {
                        Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_WOMAN - SFX_FLAG, &D_801333D4, 4, &D_801333E0,
                                               &D_801333E0, &D_801333E8);
                        Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_SQUARE);
                        if (globalCtx->csCtx.state == 0) {
                            Interface_SetDoAction(globalCtx, SW_DO_ACT_RETURN);
                        }
                    }
                }
                *gfxP = sp120;
                return;
            case 16:
                if (phi_s2 + 1 == msgCtx->unk_E3D2) {
                    func_801083F8(globalCtx);
                    *gfxP = sp120;
                    return;
                }
                break;
            case 14:
                if (msgCtx->msgMode == 6) {
                    msgCtx->msgMode = 0x35;
                    msgCtx->unk_E3E4 = 0x60;
                    msgCtx->unk_E3E7 = msgCtx->unk_E306[++phi_s2];
                    Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_SQUARE);
                    if (globalCtx->csCtx.state == 0) {
                        Interface_SetDoAction(globalCtx, SW_DO_ACT_RETURN);
                    }
                }
                *gfxP = sp120;
                return;
            case 10:
                if (msgCtx->msgMode == 6) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    msgCtx->msgMode = 0x35;
                    msgCtx->unk_E3E4 = 0x40;
                }
                *gfxP = sp120;
                return;
            case 11:
                if (msgCtx->msgMode == 6) {
                    msgCtx->msgMode = 0x35;
                    msgCtx->unk_E3E4 = 0x50;
                    Font_LoadMessageBoxEndIcon(font, MESSAGE_ICON_TRIANGLE);
                    // Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_END, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                    // &D_801333E8);
                }
                *gfxP = sp120;
                return;
            default:
                if (msgCtx->msgMode == 6 && phi_s2 + 1 == msgCtx->unk_E3D2 && msgCtx->unk_E3E8 == msgCtx->unk_E3EA) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                }
                func_80106F1C(globalCtx, &font->unk_8[sp128], &sp120);
                sp128 += 128;
                msgCtx->unk_E3D8 += (s32)(fontWidthTable[phi_v0 - 0x20] * (XREG(57) / 100.0f));
                break;
        }
    }
    if (msgCtx->unk_E3E8 == 0) {
        msgCtx->unk_E3D2 = phi_s2 + 1;
        msgCtx->unk_E3E8 = msgCtx->unk_E3EA;
    } else {
        msgCtx->unk_E3E8--;
    }
    *gfxP = sp120;
}

void func_80109968(GlobalContext* globalCtx, u16 itemIndex, s16 arg2) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    u8 heartPieces = (gSaveContext.inventory.questItems & 0xF0000000) >> 0x1C;

    if (itemIndex == 0x76) {
        interfaceCtx->mapPalette[30] = 255;
        interfaceCtx->mapPalette[31] = 255;
    }
    if ((itemIndex < 0x66) || gIsFullHeartPiece) {
        YREG(71) = XREG(54) - D_80153C40[gSaveContext.language];
        YREG(72) = arg2 + 6;
        YREG(75) = 32;
        if (gIsFullHeartPiece) {
            itemIndex = ITEM_FISHING_POLE + 3;
        }
        DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE,
                            (u32)_icon_item_staticSegmentRomStart + (itemIndex * 0x1000), 0x1000, "../z_message_PAL.c",
                            1473);
        // Item 32-0
        osSyncPrintf("アイテム32-0\n");
    } else if (itemIndex == 0x76 || itemIndex == 0x75) {
        YREG(71) = XREG(54) - D_80153C40[gSaveContext.language];
        YREG(72) = arg2 + 6;
        YREG(75) = 32;
    } else if ((itemIndex == ITEM_HEART_PIECE_2 || itemIndex == ITEM_HEART_PIECE) && !gIsFullHeartPiece) {
        YREG(71) = XREG(54) - D_80153C40[gSaveContext.language];
        YREG(72) = arg2 + 6;
        YREG(75) = 48;
        DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE,
                            (u32)_icon_item_staticSegmentRomStart + 0xAB418 + ((heartPieces - 1) * 0x900), 0x900,
                            "../z_message_PAL.c", __LINE__);
    } else {
        YREG(71) = XREG(54) - D_80153C48[gSaveContext.language];
        YREG(72) = arg2 + 10;
        YREG(75) = 24;
        DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + MESSAGE_STATIC_TEX_SIZE,
                            (u32)_icon_item_24_staticSegmentRomStart + 0xFFFC6A00 + (itemIndex * 0x900), 0x900,
                            "../z_message_PAL.c", 1482);
        // Item 24＝%d (%d) {%d}
        osSyncPrintf("アイテム24＝%d (%d) {%d}\n", itemIndex, itemIndex - 0x6C, 0x54);
    }
    msgCtx->unk_E3CE++;
    msgCtx->unk_E3E6 = 1;
}

// This function replaces a debug print from an undecompiled function, hence the weird looking string arg
void Message_SaveLineCount(const char* jj, s16 lineCount) {
    osSyncPrintf(jj, lineCount);

    sLineCount = lineCount;
}

// Message_Decode
#ifdef NON_MATCHING
// Missing some useless moves, saved registers swapped, regalloc at the end, stack
void func_80109B3C(GlobalContext* globalCtx) {
    u8 temp_s2;
    u8 phi_s1;
    u8 temp_var;
    s32 phi_s1_2;
    s16 new_var;
    u16 phi_s0_3;
    s16 phi_s3;
    s16 sp86 = 0;
    f32 temp_f0_2;
    s16 sp7C[4]; // digits
    MessageContext* msgCtx = &globalCtx->msgCtx;
    Font* font = &globalCtx->msgCtx.font;
    s32 phi_s5 = 0;
    s16 phi_s4;
    s16 phi_s6 = 0;

    globalCtx->msgCtx.unk_E3E8 = 0;
    globalCtx->msgCtx.unk_E3D6 = globalCtx->msgCtx.unk_E3EA = globalCtx->msgCtx.unk_E3E8 = 0;
    D_8014B2F0 = 0;

    while (true) {
        temp_s2 = msgCtx->unk_E306[phi_s6] = font->msgBuf[msgCtx->unk_E3CE];

        phi_s1 = temp_s2;

        if (temp_s2 == 4 || temp_s2 == 7 || temp_s2 == 0xC || temp_s2 == 0xB || temp_s2 == 0x2) {
            msgCtx->msgMode = 6;
            msgCtx->unk_E3D2 = 1;
            XREG(55) = VREG(1) + 12;
            Message_SaveLineCount("ＪＪ＝%d\n", sp86);
            if (msgCtx->unk_E2FD != BOX_NONE_BOTTOM) {
                if (sp86 == 0) {
                    XREG(55) = (u16)(VREG(1) + 0x1A);
                } else if (sp86 == 1) {
                    XREG(55) = (u16)(VREG(1) + 0x14);
                } else if (sp86 == 2) {
                    XREG(55) = (u16)(VREG(1) + 0x10);
                }
            }
            if (phi_s1 == 7) {
                osSyncPrintf("NZ_NEXTMSG=%x, %x, %x\n", font->msgBuf[msgCtx->unk_E3CE],
                             font->msgBuf[msgCtx->unk_E3CE + 1], font->msgBuf[msgCtx->unk_E3CE + 2]);
                temp_s2 = font->msgBuf[msgCtx->unk_E3CE + 1];
                msgCtx->unk_E306[++phi_s6] = temp_s2;
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[msgCtx->unk_E3CE + 2];
                phi_s0_3 = temp_s2 << 8;

                D_8014B304 = msgCtx->unk_E306[phi_s6] | phi_s0_3;
            }
            if (temp_s2) {}
            if (phi_s1 == 0xC) {
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[msgCtx->unk_E3CE + 1];
                msgCtx->unk_E3CE += 2;
            }
            msgCtx->unk_E3D4 = phi_s6;
            if (D_8014B300 != 0) {
                msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
            }
            break;
        } else if (temp_s2 == 0xF) {
            for (phi_s4 = 8; phi_s4 > 0; phi_s4--) {
                if (gSaveContext.playerName[phi_s4 - 1] != 0x3E) {
                    break;
                }
            }
            osSyncPrintf("\n名前 ＝ ");
            for (phi_s3 = 0; phi_s3 < phi_s4; phi_s3++) {
                phi_s1 = gSaveContext.playerName[phi_s3];
                if (phi_s1 == 0x3E) {
                    phi_s1 = 0x20;
                } else if (phi_s1 == 0x40) {
                    phi_s1 = 0x2E;
                } else if (phi_s1 == 0x3F) {
                    phi_s1 = 0x2D;
                } else if (phi_s1 < 0xA) {
                    phi_s1 += 0x30;
                } else if (phi_s1 < 0x24) {
                    phi_s1 += 0x37;
                } else if (phi_s1 < 0x3E) {
                    phi_s1 += 0x3D;
                }
                if (phi_s1 != 0x20) {
                    Font_LoadChar(font, phi_s1 - 0x20, phi_s5);
                    phi_s5 += 0x80;
                }
                osSyncPrintf("%x ", phi_s1);
                msgCtx->unk_E306[phi_s6] = phi_s1;
                phi_s6++;
            }
            phi_s6--;
        } else if (temp_s2 == 0x16 || temp_s2 == 0x17) {
            osSyncPrintf("\nＥＶＥＮＴタイマー ＝ ");
            sp7C[0] = sp7C[1] = sp7C[2] = 0;
            if (temp_s2 == 0x17) {
                sp7C[3] = gSaveContext.timer1Value;
            } else {
                sp7C[3] = gSaveContext.timer2Value;
            }

            while (sp7C[3] >= 60) {
                sp7C[1]++;
                if (sp7C[1] >= 10) {
                    sp7C[0]++;
                    sp7C[1] -= 10;
                }
                sp7C[3] -= 60;
            }
            while (sp7C[3] >= 10) {
                sp7C[2]++;
                sp7C[3] -= 10;
            }

            for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                phi_s5 += 0x80;
                msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                phi_s6++;
                if (phi_s3 == 1) {
                    Font_LoadChar(font, 2, phi_s5);
                    phi_s5 += 0x80;
                    msgCtx->unk_E306[phi_s6] = 0x22;
                    phi_s6++;
                } else if (phi_s3 == 3) {
                    Font_LoadChar(font, 2, phi_s5);
                    phi_s5 += 0x80;
                    msgCtx->unk_E306[phi_s6] = 0x22;
                }
            }
        } else if (temp_s2 == 0x18) {
            osSyncPrintf("\n流鏑馬スコア ＝ %d\n", gSaveContext.minigameScore);
            sp7C[0] = sp7C[1] = sp7C[2] = 0;
            sp7C[3] = gSaveContext.minigameScore;

            while (sp7C[3] >= 1000) {
                sp7C[0]++;
                sp7C[3] -= 1000;
            }
            while (sp7C[3] >= 100) {
                sp7C[1]++;
                sp7C[3] -= 100;
            }
            while (sp7C[3] >= 10) {
                sp7C[2]++;
                sp7C[3] -= 10;
            }

            phi_s1_2 = 0;
            for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                if (phi_s3 == 3 || sp7C[phi_s3] != 0) {
                    phi_s1_2 = 1;
                }
                if (phi_s1_2 != 0) {
                    Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                    msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                    phi_s5 += 0x80;
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x19) {
            osSyncPrintf("\n金スタ合計数 ＝ %d", gSaveContext.inventory.gsTokens);
            sp7C[0] = sp7C[1] = 0;
            sp7C[2] = gSaveContext.inventory.gsTokens;

            while (sp7C[2] >= 100) {
                sp7C[0]++;
                sp7C[2] -= 100;
            }
            while (sp7C[2] >= 10) {
                sp7C[1]++;
                sp7C[2] -= 10;
            }

            phi_s1_2 = 0;
            for (phi_s3 = 0; phi_s3 < 3; phi_s3++) {
                if (phi_s3 == 2 || sp7C[phi_s3] != 0) {
                    phi_s1_2 = 1;
                }
                if (phi_s1_2 != 0) {
                    Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                    msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                    phi_s5 += 0x80;
                    osSyncPrintf("%x(%x) ", sp7C[phi_s3] + 0x10, sp7C[phi_s3]);
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x1D) {
            osSyncPrintf("\n釣り堀魚サイズ ＝ ");
            sp7C[0] = 0;
            sp7C[1] = gSaveContext.minigameScore;

            while (sp7C[1] >= 10) {
                sp7C[0]++;
                sp7C[1] -= 10;
            }

            for (phi_s3 = 0; phi_s3 < 2; phi_s3++) {
                if (phi_s3 == 1 || sp7C[phi_s3] != 0) {
                    Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                    msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                    phi_s5 += 0x80;
                    osSyncPrintf("%x(%x) ", sp7C[phi_s3] + 0x10, sp7C[phi_s3]);
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x1E) {
            phi_s0_3 = HIGH_SCORE(font->msgBuf[++msgCtx->unk_E3CE]);
            osSyncPrintf("ランキング＝%d\n", font->msgBuf[msgCtx->unk_E3CE]);
            if ((font->msgBuf[msgCtx->unk_E3CE] & 0xFF) == 2) {
                if (LINK_AGE_IN_YEARS == YEARS_CHILD) {
                    phi_s0_3 &= 0x7F;
                } else {
                    osSyncPrintf("HI_SCORE( kanfont->mbuff.nes_mes_buf[message->rdp] & 0xff000000 ) = %x\n",
                                 HIGH_SCORE(((u16*)font->msgBuf)[msgCtx->unk_E3CE] & 0xFF000000));
                    phi_s0_3 = ((HIGH_SCORE(font->msgBuf[msgCtx->unk_E3CE]) & 0xFF000000) >> 0x18) & 0x7F;
                }
                phi_s0_3 = SQ((f32)phi_s0_3) * 0.0036f + 0.5f;
                osSyncPrintf("score=%d\n", phi_s0_3);
            }
            switch (font->msgBuf[msgCtx->unk_E3CE] & 0xFF) {
                case HS_HBA:
                case HS_POE_POINTS:
                case HS_FISHING:
                    sp7C[0] = sp7C[1] = sp7C[2] = 0;
                    sp7C[3] = phi_s0_3;

                    while (sp7C[3] >= 1000) {
                        sp7C[0]++;
                        sp7C[3] -= 1000;
                    }
                    while (sp7C[3] >= 100) {
                        sp7C[1]++;
                        sp7C[3] -= 100;
                    }
                    while (sp7C[3] >= 10) {
                        sp7C[2]++;
                        sp7C[3] -= 10;
                    }
                    if (temp_s2) {}

                    phi_s1_2 = 0;
                    for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                        if (phi_s3 == 3 || sp7C[phi_s3] != 0) {
                            phi_s1_2 = 1;
                        }
                        if (phi_s1_2 != 0) {
                            Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                            msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                            phi_s5 += 0x80;
                            phi_s6++;
                        }
                    }
                    phi_s6--;
                    break;
                case HS_UNK_05:
                    break;
                case HS_HORSE_RACE:
                case HS_MARATHON:
                case HS_DAMPE_RACE:
                    sp7C[0] = sp7C[1] = sp7C[2] = 0;
                    sp7C[3] = phi_s0_3;

                    while (sp7C[3] >= 60) {
                        sp7C[1]++;
                        if (sp7C[1] >= 10) {
                            sp7C[0]++;
                            sp7C[1] -= 10;
                        }
                        sp7C[3] -= 60;
                    }
                    while (sp7C[3] >= 10) {
                        sp7C[2]++;
                        sp7C[3] -= 10;
                    }

                    for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                        Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                        phi_s5 += 0x80;
                        msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                        phi_s6++;
                        if (phi_s3 == 1) {
                            Font_LoadChar(font, 2, phi_s5);
                            phi_s5 += 0x80;
                            msgCtx->unk_E306[phi_s6] = 0x22;
                            phi_s6++;
                        } else if (phi_s3 == 3) {
                            Font_LoadChar(font, 2, phi_s5);
                            phi_s5 += 0x80;
                            msgCtx->unk_E306[phi_s6] = 0x22;
                        }
                    }
                    break;
            }
        } else if (temp_s2 == 0x1F) {
            osSyncPrintf("\nゼルダ時間 ＝ ");
            sp7C[0] = 0;
            temp_f0_2 = gSaveContext.dayTime * 0.021972656f;

            sp7C[1] = temp_f0_2 / 60.0f;
            while (sp7C[1] >= 10) {
                sp7C[0]++;
                sp7C[1] -= 10;
            }
            sp7C[2] = 0;
            sp7C[3] = (s16)temp_f0_2 % 60;
            while (sp7C[3] >= 10) {
                sp7C[2]++;
                sp7C[3] -= 10;
            }

            for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                phi_s5 += 0x80;
                msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                phi_s6++;
                if (phi_s3 == 1) {
                    Font_LoadChar(font, 0x1A, phi_s5);
                    phi_s5 += 0x80;
                    msgCtx->unk_E306[phi_s6] = 0x3A;
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x13) {
            msgCtx->unk_E306[++phi_s6] = font->msgBuf[msgCtx->unk_E3CE + 1];
            osSyncPrintf("ITEM_NO=(%d) (%d)\n", msgCtx->unk_E306[phi_s6], font->msgBuf[msgCtx->unk_E3CE + 1]);
            func_80109968(globalCtx, font->msgBuf[msgCtx->unk_E3CE + 1], VREG(1) + 0xA);
        } else if (temp_s2 == 0x15) {
            msgCtx->unk_E3F6 = font->msgBuf[msgCtx->unk_E3CE + 1] * 2;
            msgCtx->unk_E3F8 = (font->msgBuf[msgCtx->unk_E3CE + 2] & 0xF000) >> 4;
            msgCtx->unk_E3F9 = font->msgBuf[msgCtx->unk_E3CE + 2] & 0xF;
            msgCtx->unk_E3FA = (font->msgBuf[msgCtx->unk_E3CE + 3] & 0xF0) >> 4;
            msgCtx->unk_E3FB = font->msgBuf[msgCtx->unk_E3CE + 3] & 0xF;
            DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + 0x1000, // MESSAGE_STATIC_TEX_SIZE
                                (u32)_message_texture_staticSegmentRomStart + (msgCtx->unk_E3F6 * 0x900), 0x900,
                                "../z_message_PAL.c", 1830);
            DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + 0x1900, // MESSAGE_STATIC_TEX_SIZE + 0x900
                                (u32)_message_texture_staticSegmentRomStart + (msgCtx->unk_E3F6 * 0x900) + 0x900, 0x900,
                                "../z_message_PAL.c", 1834);
            msgCtx->unk_E3CE += 3;
            XREG(61) = VREG(1) + 8;
            sp86 = 2;
            XREG(54) = 0x32;
        } else if (temp_s2 == 5) {
            msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
        } else if (temp_s2 == 1) {
            sp86++;
        } else if (temp_s2 != 8 && temp_s2 != 9 && temp_s2 != 0xD && temp_s2 != 0x10 && temp_s2 != 0xA &&
                   temp_s2 != 0x1A) {
            if (temp_s2 == 0xE) {
                D_8014B2F0 = 1;
                osSyncPrintf("NZ_TIMER_END (key_off_flag=%d)\n", D_8014B2F0);
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 0x11) {
                D_8014B2F0 = 1;
                osSyncPrintf("NZ_BGM (key_off_flag=%d)\n", D_8014B2F0);
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 6 || temp_s2 == 0x14) {
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 0x12) {
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 0x1B) {
                msgCtx->unk_E3E6 = 2;
            } else if (temp_s2 == 0x1C) {
                msgCtx->unk_E3E6 = 3;
            } else if (temp_s2 != 0x20) {
                Font_LoadChar(font, temp_s2 - 0x20, phi_s5);
                phi_s5 += 0x80;
            }
        }
        phi_s6++;
        msgCtx->unk_E3CE++;
    }
}
#else
void func_80109B3C(GlobalContext* globalCtx);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_80109B3C.s")
#endif

void func_8010B0C0(GlobalContext* globalCtx, u16 textId) {
    static s16 D_80153C50[] = {
        0, 1, 3, 2, -1, -1, 4, 5,
    };

    MessageContext* msgCtx = &globalCtx->msgCtx;
    Font* sp30 = &msgCtx->font;
    s16 tmp;

    if (msgCtx->msgMode == 0) {
        gSaveContext.unk_13EE = gSaveContext.unk_13EA;
    }
    if (YREG(15) == 0x10) {
        Interface_ChangeAlpha(5);
    }

    sLineCount = 0;
    D_8014B318 = D_8014B2F4 = D_8014B300 = D_8014B308 = 0;

    if (textId >= 0x0500 && textId < 0x0600) { // text ids 0500 to 0600 are reserved for credits
        D_8014B308 = 1;
        XREG(57) = 0x55;
        XREG(56) = 6;
        XREG(54) = 0x14;
        YREG(1) = 0x30;
    } else {
        XREG(57) = 0x4B;
        XREG(56) = 11; // line spacing
        XREG(54) = 72; // x offset of text line start
    }
    if (textId == 0xC2 || textId == 0xFA) { // C2 = One piece of heart , FA = WINNER One piece of heart
        // Increments text id based on piece of heart count, assumes the piece of heart text is all
        // in order and that you don't have more than the intended amount of heart pieces.

        // Removed this logic for spaceworld.
        // textId += (gSaveContext.inventory.questItems & 0xF0000000 & 0xF0000000) >> 0x1C;
    } else if (msgCtx->unk_E2F8 == 0xC && CHECK_OWNED_EQUIP(EQUIP_SWORD, 2)) {
        textId = 0xB; // Traded Giant's Knife for Biggoron Sword
    } else if (msgCtx->unk_E2F8 == 0xB4 && (gSaveContext.eventChkInf[9] & 0x40)) {
        textId = 0xB5; // Destroyed Gold Skulltula
    }
    // Ocarina Staff + Dialog
    if (textId == 0x4077 || // Pierre?
        textId == 0x407A || // Pierre?
        textId == 0x2061 || // Learning Epona's Song
        textId == 0x5035 || // Guru-Guru in Windmill
        textId == 0x40AC) { // Ocarina Frog Minigame
        Interface_ChangeAlpha(1);
    }
    msgCtx->unk_E2F8 = textId;
    if (textId == 0x2030) { // Talking to Ingo as adult in Lon Lon Ranch for the first time before freeing Epona
        osSyncPrintf(VT_FGCOL(YELLOW));
        osSyncPrintf("？？？？？？？？？？？？？？？？  z_message.c  ？？？？？？？？？？？？？？？？？？\n");
        osSyncPrintf(VT_RST);
        gSaveContext.eventInf[0] = gSaveContext.eventInf[1] = gSaveContext.eventInf[2] = gSaveContext.eventInf[3] = 0;
    }

    if (D_8014B308 != 0) {
        func_80107628(globalCtx, textId);
        msgCtx->unk_E300 = sp30->msgLength;
        DmaMgr_SendRequest1((u32)sp30->msgBuf, (u32)(_staff_message_data_staticSegmentRomStart + sp30->msgOffset),
                            sp30->msgLength, "../z_message_PAL.c", 1954);
    } else {
        func_80107448(globalCtx, textId);
        msgCtx->unk_E300 = sp30->msgLength;
        DmaMgr_SendRequest1((u32)sp30->msgBuf, (u32)(_nes_message_data_staticSegmentRomStart + sp30->msgOffset),
                            sp30->msgLength, "../z_message_PAL.c", 1966);
    }
    msgCtx->unk_E2FC = sp30->xy;
    msgCtx->unk_E2FD = msgCtx->unk_E2FC >> 4;
    msgCtx->unk_E2FE = msgCtx->unk_E2FC & 0xF;
    tmp = msgCtx->unk_E2FD;
    // Text Box Type＝%d
    osSyncPrintf("吹き出し種類＝%d\n", msgCtx->unk_E2FD);
    if (tmp < BOX_NONE_BOTTOM || tmp == BOX_JAGGED || tmp == BOX_SQUARE) {
        DmaMgr_SendRequest1(msgCtx->textboxSegment, (u32)(_message_staticSegmentRomStart + (D_80153C50[tmp] * 0x800)),
                            0x800, "../z_message_PAL.c", 2006);
        if (tmp == BOX_NORMAL || tmp == BOX_JAGGED || tmp == BOX_SQUARE) {
            msgCtx->unk_E3FE = 255;
            msgCtx->unk_E400 = 255;
            msgCtx->unk_E402 = 255;
        } else if (tmp == BOX_WOODEN) {
            // iQue colors
            msgCtx->unk_E3FE = 150;
            msgCtx->unk_E400 = 80;
            msgCtx->unk_E402 = 0;
        } else if (tmp == BOX_BLUE) {
            msgCtx->unk_E3FE = 0;
            msgCtx->unk_E400 = 10;
            msgCtx->unk_E402 = 50;
        } else { // BOX_OCARINA
            msgCtx->unk_E3FE = 255;
            msgCtx->unk_E400 = 0;
            msgCtx->unk_E402 = 0;
        }
        if (tmp == BOX_WOODEN) {
            msgCtx->unk_E404 = 255;
        } else if (tmp == BOX_OCARINA) {
            msgCtx->unk_E404 = 180;
        } else {
            msgCtx->unk_E404 = 255;
        }
        msgCtx->unk_E406 = 0;
    }
    msgCtx->unk_E3E6 = msgCtx->unk_E3D6 = msgCtx->unk_E3E4 = 0;
    msgCtx->unk_E3CE = msgCtx->unk_E3D0 = msgCtx->unk_E3D2 = 0;
}

// Message_Begin
void func_8010B680(GlobalContext* globalCtx, u16 textId, Actor* actor) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    osSyncPrintf(VT_FGCOL(BLUE));
    // Message＝%x(%d)
    osSyncPrintf("めっせーじ＝%x(%d)\n", textId, actor);
    osSyncPrintf(VT_RST);
    msgCtx->unk_E3F0 = 0xFFFF;
    func_8010B0C0(globalCtx, textId);
    // Added for SW to play interface fade sound only if talking to an actor
    // (prevents sound in cutscenes where interface has already faded before text begins)
    if (actor != NULL) {
        Audio_PlaySoundPitched(NA_SE_SY_DUMMY_32);
    }
    msgCtx->unk_E408 = actor;
    msgCtx->msgMode = 1;
    msgCtx->unk_E3E7 = 0;
    msgCtx->unk_E3E8 = 0;
    globalCtx->msgCtx.unk_E3EE = 0;
}

// Message_Continue
void func_8010B720(GlobalContext* globalCtx, u16 textId) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    osSyncPrintf(VT_FGCOL(GREEN));
    // Message＝%x message->msg_data
    osSyncPrintf("めっせーじ＝%x  message->msg_data\n", textId, msgCtx->unk_E300);
    osSyncPrintf(VT_RST);
    msgCtx->unk_E300 = 0;
    func_8010B0C0(globalCtx, textId);
    msgCtx->msgMode = 0;
    msgCtx->unk_E406 = msgCtx->unk_E404;
    msgCtx->msgMode = 5;
    msgCtx->unk_E3E7 = 3;
    msgCtx->unk_E3E4 = msgCtx->unk_E3CE = msgCtx->unk_E3D0 = msgCtx->unk_E3D2 = msgCtx->unk_E3E8 = 0;
    msgCtx->unk_E3E2 = 0xFF;
    if (YREG(31) == 0 && globalCtx->interfaceCtx.unk_1FA == 0) {
        Interface_SetDoAction(globalCtx, DO_ACT_NEXT);
    }
    msgCtx->unk_E406 = msgCtx->unk_E404;
}

u16 D_80153C58[] = {
    0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0100, 0x0080,
};

void func_8010B820(GlobalContext* globalCtx, u16 ocarinaActionId) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    s32 phi_s0_2;
    s16 phi_v0_3;
    s16 phi_s0;
    s16 sp4A;
    s32 phi_s0_3;

    osSyncPrintf(VT_FGCOL(GREEN));
    // Spaceworld - disable playing any songs
    /*for (phi_s0 = D_8014B31C = 0; phi_s0 < 0xC; phi_s0++) {
        if (CHECK_QUEST_ITEM(phi_s0 + 0x6)) {
            osSyncPrintf("ocarina_check_bit[%d]=%x\n", phi_s0, D_80153C58[phi_s0]);
            D_8014B31C |= D_80153C58[phi_s0];
        }
    }
    if (gSaveContext.scarecrowSpawnSongSet != 0) {
        D_8014B31C |= 0x1000;
    }*/
    osSyncPrintf("ocarina_bit = %x\n", D_8014B31C);
    osSyncPrintf(VT_RST);
    D_8014B314 = CHECK_QUEST_ITEM(QUEST_SONG_SUN);
    msgCtx->unk_E2B8 = func_800EE3C8();
    msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
    D_8014B2FC = 0;
    func_801069B0();
    msgCtx->unk_E410 = 0xFF;
    D_8014B310 = msgCtx->unk_E3F2 = msgCtx->unk_E410;

    // ☆☆☆☆☆ Ocarina Number＝%d(%d) ☆☆☆☆☆
    osSyncPrintf(VT_FGCOL(RED) "☆☆☆☆☆ オカリナ番号＝%d(%d) ☆☆☆☆☆\n" VT_RST, ocarinaActionId, 2);
    sp4A = 0;
    if (ocarinaActionId >= 0x893) {
        func_8010B0C0(globalCtx, ocarinaActionId);
        phi_s0_2 = ocarinaActionId + 0x86E;
    } else if (ocarinaActionId == 0x2E) {
        msgCtx->unk_E3F0 = ocarinaActionId;
        func_8010B0C0(globalCtx, 0x86D);
        phi_s0_2 = ocarinaActionId + 0x86E;
    } else if (ocarinaActionId == 1 || ocarinaActionId >= 0x22) {
        osSyncPrintf("ocarina_set 000000000000000000  = %d\n", ocarinaActionId);
        msgCtx->unk_E3F0 = ocarinaActionId;
        if (ocarinaActionId >= 0x22 && ocarinaActionId < 0x28) {
            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
        if (ocarinaActionId == 0x2D) {
            func_8010B0C0(globalCtx, 0x86F);
            phi_s0_2 = ocarinaActionId + 0x86E;
        } else {
            func_8010B0C0(globalCtx, 0x86E);
            phi_s0_2 = ocarinaActionId + 0x86E;
        }
    } else {
        msgCtx->unk_E3F0 = ocarinaActionId;
        sp4A = 1;
        if (ocarinaActionId >= 0xF) {
            osSyncPrintf("222222222\n");
            func_8010B0C0(globalCtx, 0x86D);
            phi_s0_2 = ocarinaActionId + 0x86E;
        } else {
            osSyncPrintf("333333333\n");
            phi_s0_2 = ocarinaActionId + 0x86E;
            func_8010B0C0(globalCtx, phi_s0_2);
        }
    }
    msgCtx->unk_E408 = NULL;
    // Ocarina Mode
    osSyncPrintf("オカリナモード = %d  (%x)\n", msgCtx->unk_E3F0, phi_s0_2);
    msgCtx->unk_E3E8 = 0;
    globalCtx->msgCtx.unk_E3EE = 0;
    R_TEXTBOX_X = 0x22;
    VREG(1) = 0x8E;
    YREG(16) = 256;
    YREG(17) = 512;
    R_TEXTBOX_WIDTH = 0x100;
    YREG(23) = 0x40;
    msgCtx->unk_E3E7 = 0;
    if (YREG(12) != 0) {
        msgCtx->msgMode = 4;
    } else {
        msgCtx->unk_E3E7 = 2;
        msgCtx->msgMode = 5;
    }
    msgCtx->unk_E406 = msgCtx->unk_E404;
    if (sp4A == 0) {
        Interface_LoadActionLabelB(globalCtx, 0x12);
        sp4A = gSaveContext.unk_13EA;
        Interface_ChangeAlpha(0xA);
        gSaveContext.unk_13EA = sp4A;
    }
    // Music Performance Start
    osSyncPrintf("演奏開始\n");
    if (ocarinaActionId == 1 || ocarinaActionId == 0x30) {
        msgCtx->msgMode = 9;
        msgCtx->unk_E2FD = 0x63;
    } else if (ocarinaActionId == 0x2F) {
        msgCtx->msgMode = 0x31;
        msgCtx->unk_E2FD = BOX_BLUE;
    } else if (ocarinaActionId == 0x2E) {
        Interface_ChangeAlpha(1);
        func_80109B3C(globalCtx);
        msgCtx->msgMode = 0x29;
    } else if (ocarinaActionId == 0x2B) {
        // ?????Recording Playback / Recording Playback / Recording Playback / Recording Playback ->
        osSyncPrintf("?????録音再生 録音再生 録音再生 録音再生  -> ");
        func_800ED858(1);
        func_800ED858(1);
        msgCtx->unk_E2B8 = func_800EE3F8();
        D_8014B2F8 = D_8014B2FC = 0;
        msgCtx->unk_E2B8->pos = D_8014B2F8;
        func_801069B0();
        msgCtx->unk_E3E7 = 3;
        msgCtx->msgMode = 0x23;
        func_800ED93C(0xF, 1);
        gSaveContext.unk_13EA = 0;
        Interface_ChangeAlpha(1);
    }
    for (phi_s0_3 = 0, phi_v0_3 = 0; phi_v0_3 < 0x30; phi_v0_3++, phi_s0_3 += 0x80) {
        func_8006EE50(&globalCtx->msgCtx.font, 0x8140, phi_s0_3);
    }
}

void func_8010BD58(GlobalContext* globalCtx, u16 arg1) {
    globalCtx->msgCtx.unk_E40E = 0;
    func_8010B820(globalCtx, arg1);
}

void func_8010BD88(GlobalContext* globalCtx, u16 arg1) {
    globalCtx->msgCtx.unk_E40E = 1;
    func_8010B820(globalCtx, arg1);
}

// Talk states?
u8 func_8010BDBC(MessageContext* msgCtx) {
    u8 ret;
    if (msgCtx->unk_E300 == 0) {
        ret = 0;
    } else if (msgCtx->msgMode == 0x35) {
        if (msgCtx->unk_E3E4 == 0x30) {
            ret = 1;
        } else if (msgCtx->unk_E3E4 == 0x10 || msgCtx->unk_E3E4 == 0x20) {
            ret = 4;
        } else if (msgCtx->unk_E3E4 == 0x50 || msgCtx->unk_E3E4 == 0x40) {
            ret = 5;
        } else if (msgCtx->unk_E3E4 == 0x60) {
            ret = 3;
        } else {
            ret = 6;
        }
    } else if (msgCtx->msgMode == 0x34) {
        ret = 10;
    } else if (msgCtx->msgMode == 0x1A) {
        ret = 7;
    } else if (msgCtx->unk_E3EE == 3) {
        ret = 8;
    } else if (msgCtx->msgMode == 0x1F) {
        ret = 9;
    } else if (msgCtx->msgMode == 0x36 && msgCtx->unk_E3E7 == 1) {
        ret = 2;
    } else {
        ret = 3;
    }
    return ret;
}

void func_8010BED8(GlobalContext* globalCtx, Gfx** p) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    Gfx* gfx = *p;

    if (msgCtx->unk_E2FD >= BOX_NONE_BOTTOM && msgCtx->unk_E2FD != BOX_SQUARE && msgCtx->unk_E2FD != BOX_JAGGED) {
        return;
    }

    gDPPipeSync(gfx++);
    gDPSetPrimColor(gfx++, 0, 0, msgCtx->unk_E3FE, msgCtx->unk_E400, msgCtx->unk_E402, msgCtx->unk_E406);

    if (msgCtx->unk_E2FD == BOX_OCARINA) {
        gDPSetEnvColor(gfx++, 0, 0, 0, 255);
    } else {
        gDPSetEnvColor(gfx++, 50, 20, 0, 255);
    }

    gDPLoadTextureBlock(gfx++, msgCtx->textboxSegment, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR, G_TX_MIRROR, 6,
                        5, G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(gfx++, R_TEXTBOX_X << 2, VREG(1) << 2, (R_TEXTBOX_X + R_TEXTBOX_WIDTH) << 2,
                        (VREG(1) + YREG(23)) << 2, G_TX_RENDERTILE, 0, 0, YREG(16) << 1, YREG(17) << 1);

    if (msgCtx->unk_E2FD == BOX_OCARINA) {
        gDPPipeSync(gfx++);

        gDPSetCombineLERP(gfx++, 1, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 1, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE,
                          0);

        gDPSetPrimColor(gfx++, 0, 0, 255, 100, 0, 255);

        gDPLoadTextureBlock_4b(gfx++, &D_02002E40, G_IM_FMT_I, 16, 32, 0, G_TX_MIRROR, G_TX_MIRROR, G_TX_NOMASK,
                               G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        gSPTextureRectangle(gfx++, VREG(7) << 2, VREG(8) << 2, (VREG(7) + 16) << 2, (VREG(8) + 32) << 2,
                            G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
    }

    *p = gfx;
}

// Message_SetView ?
void func_8010C358(View* view) {
    func_800AB2C4(view);
    SET_FULLSCREEN_VIEWPORT(view);
}

// Message_DrawMain ?
#ifdef NON_EQUIVALENT
// Many small issues throughout, regalloc, stack
void func_8010C39C(GlobalContext* globalCtx, Gfx** p) {
    // oceff actor ids
    static s16 D_80153C68[] = {
        0x0040, 0x0200, 0x0400, 0x0800, 0x1000, 0x0000, 0x0199, 0x0198,
    };
    // oceff actor params
    static s16 D_80153C78[] = { 0x018A, 0x017E, 0x018A, 0x018B, 0x01CB, 0x0000, 0x0000,
                                0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000 };
    // texture segment addrs
    static u64* D_80153C94[] = {
        0x02002940, 0x02002A40, 0x02002B40, 0x02002C40, 0x02002D40,
    };
    static Color_RBG16 D_80153CA8[] = {
        { 0x0050, 0x00FF, 0x0096 },
        { 0x0064, 0x00FF, 0x00C8 },
    };
    static Color_RBG16 D_80153CB4[] = {
        { 0x000A, 0x000A, 0x000A },
        { 0x0032, 0x00FF, 0x0032 },
    };
    static Color_RBG16 D_80153CC0[] = {
        { 0x00FF, 0x00FF, 0x0032 },
        { 0x00FF, 0x00FF, 0x00B4 },
    };
    static Color_RBG16 D_80153CCC[] = {
        { 0x000A, 0x000A, 0x000A },
        { 0x006E, 0x006E, 0x0032 },
    };
    static s16 D_80153CD8 = 0x000C;
    static s16 D_80153CDC = 0x0001;
    static s16 D_80153CE0[] = {
        0x0034, 0x0033, 0x0035, 0x0036, 0x0037, 0x0025, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049,
    };

    Player* player = PLAYER;
    Gfx* gfx = *p;
    MessageContext* msgCtx;
    s16 g1;
    s16 r1;
    u8 temp_a0_9;
    u16 phi_a2;
    u16 phi_a3;
    s16 b1;
    s16 r2;
    s16 g2;
    s16 r3;
    s16 g3;
    s16 r4;
    s16 g4;
    u16 phi_a3_3;
    u16 phi_v0_10;
    u16 phi_a3_4;
    u16 phi_a3_5;
    u16 phi_v0_11;
    u16 phi_a3_6;
    u16 phi_a3_7;
    s32 phi_a3_8;
    u16 phi_a3_9;
    s16 b2;
    s16 b3;
    s16 b4;
    u8 pos;
    s16 temp_abc;

    gSPSegment(gfx++, 0x02, globalCtx->interfaceCtx.parameterSegment);
    msgCtx = &globalCtx->msgCtx; // s1
    gSPSegment(gfx++, 0x07, msgCtx->textboxSegment);

    if (msgCtx->unk_E300 == 0) {
        goto end;
    }

    if (msgCtx->unk_E3F0 != 0x2F && msgCtx->msgMode != 0x17 && msgCtx->msgMode >= 2 && msgCtx->msgMode < 0x36 &&
        msgCtx->unk_E2FD < 4) {
        func_8010C358(&msgCtx->view);
        func_8009457C(&gfx);
        func_8010BED8(globalCtx, &gfx);
    }

    func_8009457C(&gfx);

    gDPSetAlphaCompare(gfx++, G_AC_NONE);
    gDPSetCombineLERP(gfx++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

    switch (msgCtx->msgMode) {
        case 1:
        case 2:
        case 3:
        case 4:
            break;
        case 5:
            if (msgCtx->unk_E3E7 == 1) {
                for (phi_a3 = 0, phi_a2 = 0; phi_a3 < 0x30; phi_a3++, phi_a2 += 0x80) {
                    func_8006EE50(&globalCtx->msgCtx.font, 0x8140, phi_a2);
                }
                func_801086B0(globalCtx, &gfx);
            }
            break;
        case 6:
        case 8:
            func_801086B0(globalCtx, &gfx);
            break;
        case 7:
        case 52:
            func_801086B0(globalCtx, &gfx);
            func_80107980(globalCtx, &gfx, XREG(64), XREG(65));
            break;
        case 9:
        case 10:
        case 11:
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3D4();
            msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
            globalCtx->msgCtx.unk_E3EE = 1;
            func_801069B0();
            D_80153CDC = 1;
            D_80153CD8 = 3;
            if (msgCtx->msgMode == 9) {
                if ((msgCtx->unk_E3F0 == 0) || (msgCtx->unk_E3F0 == 1) || (msgCtx->unk_E3F0 == 0x2C) ||
                    (msgCtx->unk_E3F0 == 0x30) || (msgCtx->unk_E3F0 >= 0x22)) {
                    if ((msgCtx->unk_E3F0 == 1) || (msgCtx->unk_E3F0 == 0x30)) {
                        func_800ECC04(D_8014B31C + 0xC000);
                    } else {
                        // On Stage Performance
                        osSyncPrintf("台上演奏\n");
                        func_800ECC04(D_8014B31C);
                    }
                } else {
                    osSyncPrintf("Na_StartOcarinaSinglePlayCheck2( message->ocarina_no );\n");
                    func_800ECC04((1 << msgCtx->unk_E3F0) + 0x8000);
                }
                msgCtx->msgMode = 0xC;
            } else if (msgCtx->msgMode == 0xA) {
                msgCtx->unk_E3E7 = 0x14;
                msgCtx->msgMode = 0x18;
            } else {
                func_800ECC04((1 << (msgCtx->unk_E3F0 + 0x11)) + 0x8000);
                // Performance Check
                osSyncPrintf("演奏チェック=%d\n", msgCtx->unk_E3F0 - 0xF);
                msgCtx->msgMode = 0x1B;
            }
            if ((msgCtx->unk_E3F0 != 1) && (msgCtx->unk_E3F0 != 0x30)) {
                func_801086B0(globalCtx, &gfx);
            }
            break;
        case 12:
            msgCtx->unk_E2B8 = func_800EE3D4();
            if (msgCtx->unk_E2B8->pos != 0) { // missing move around here
                osSyncPrintf("locate=%d  onpu_pt=%d\n", msgCtx->unk_E2B8->pos, D_8014B2F8);
                if (msgCtx->unk_E2B8->pos == 1 && D_8014B2F8 == 8) {
                    D_8014B2F8 = 0;
                }
                if ((D_8014B2F8 + 1) == msgCtx->unk_E2B8->pos) {
                    // single reordering somewhere in here
                    msgCtx->unk_E410 = D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                    D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                    D_8014B2F8++;
                    msgCtx->unk_E3EC = msgCtx->unk_E2B8->state;
                }
            }
            if (msgCtx->unk_E2B8->state < 0xD) {
                if ((msgCtx->unk_E2B8->state == 0xC) ||
                    (((&gBitFlags[6])[D_8015396C[msgCtx->unk_E2B8->state]] & gSaveContext.inventory.questItems) != 0)) {
                    D_8014B310 = msgCtx->unk_E3F2 = msgCtx->unk_E3EC = msgCtx->unk_E2B8->state;
                    msgCtx->msgMode = 0xD;
                    msgCtx->unk_E3E7 = 0x14;
                    if (msgCtx->unk_E3F0 == 0x30) {
                        if ((msgCtx->unk_E2B8->state < 6) || (msgCtx->unk_E2B8->state == 0xC)) {
                            func_800ED858(0);
                            Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                                   &D_801333E8);
                            msgCtx->msgMode = 9;
                        } else {
                            // Ocarina_Flog Correct Example Performance
                            osSyncPrintf("Ocarina_Flog 正解模範演奏=%x\n", msgCtx->unk_E3EC);
                            func_8010B720(globalCtx, 0x86F);
                            msgCtx->msgMode = 0x11;
                            msgCtx->unk_E2FD = 3;
                            msgCtx->unk_E3E7 = 0xA;
                            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                                   &D_801333E8);
                            Interface_ChangeAlpha(1);
                        }
                    } else if (msgCtx->unk_E3F0 == 0x28) {
                        if (msgCtx->unk_E2B8->state < 0xC) {
                            func_800ED858(0);
                            Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                                   &D_801333E8);
                            msgCtx->unk_E3E7 = 0xA;
                            msgCtx->msgMode = 0xE;
                        } else {
                            // Ocarina_Flog Correct Example Performance
                            osSyncPrintf("Ocarina_Flog 正解模範演奏=%x\n", msgCtx->unk_E3EC);
                            func_8010B720(globalCtx, 0x86F);
                            msgCtx->msgMode = 0x11;
                            msgCtx->unk_E2FD = 3;
                            msgCtx->unk_E3E7 = 0xA;
                            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                                   &D_801333E8);
                            Interface_ChangeAlpha(1);
                        }
                    } else if (msgCtx->unk_E3F0 == 1) {
                        // Ocarina_Flog Correct Example Performance
                        osSyncPrintf("Ocarina_Free 正解模範演奏=%x\n", msgCtx->unk_E3EC);
                        func_8010B720(globalCtx, 0x86F);
                        msgCtx->msgMode = 0x11;
                        msgCtx->unk_E2FD = 3;
                        msgCtx->unk_E3E7 = 0xA;
                        Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                    } else {
                        Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                    }
                    Interface_ChangeAlpha(1);
                } else {
                    func_800ED858(0);
                    Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                           &D_801333E8);
                    msgCtx->msgMode = 9;
                }
            } else if (msgCtx->unk_E2B8->state == 0xFF) {
                func_800ED858(0);
                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                msgCtx->unk_E3E7 = 0xA;
                msgCtx->msgMode = 0xE;
            } else if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_B_SWAPPED)) {
                func_800ED858(0);
                globalCtx->msgCtx.unk_E3EE = 4;
                func_80106CCC(globalCtx);
            }
            if ((msgCtx->unk_E3F0 != 1) && (msgCtx->unk_E3F0 != 0x30)) {
                func_801086B0(globalCtx, &gfx);
            }
            break;
        case 13:
        case 28:
        case 39:
            r1 = ABS(D_801759A8 - D_80153CA8[D_80153CDC].r) / D_80153CD8;
            g1 = ABS(D_801759AC - D_80153CA8[D_80153CDC].g) / D_80153CD8;
            b1 = ABS(D_801759AA - D_80153CA8[D_80153CDC].b) / D_80153CD8;

            if (D_801759A8 >= D_80153CA8[D_80153CDC].r) {
                D_801759A8 -= r1;
            } else {
                D_801759A8 += r1;
            }
            if (D_801759AC >= D_80153CA8[D_80153CDC].g) {
                D_801759AC -= g1;
            } else {
                D_801759AC += g1;
            }
            if (D_801759AA >= D_80153CA8[D_80153CDC].b) {
                D_801759AA -= b1;
            } else {
                D_801759AA += b1;
            }

            r2 = ABS(D_801759AE - D_80153CB4[D_80153CDC].r) / D_80153CD8;
            g2 = ABS(D_801759B2 - D_80153CB4[D_80153CDC].g) / D_80153CD8;
            b2 = ABS(D_801759B0 - D_80153CB4[D_80153CDC].b) / D_80153CD8;

            if (D_801759BA >= D_80153CB4[D_80153CDC].r) {
                D_801759AE -= r2;
            } else {
                D_801759AE += r2;
            }
            if (D_801759BE >= D_80153CB4[D_80153CDC].g) {
                D_801759B2 -= g2;
            } else {
                D_801759B2 += g2;
            }
            if (D_801759BC >= D_80153CB4[D_80153CDC].b) {
                D_801759B0 -= b2;
            } else {
                D_801759B0 += b2;
            }

            r3 = ABS(D_801759B4 - D_80153CC0[D_80153CDC].r) / D_80153CD8;
            g3 = ABS(D_801759B8 - D_80153CC0[D_80153CDC].g) / D_80153CD8;
            b3 = ABS(D_801759B6 - D_80153CC0[D_80153CDC].b) / D_80153CD8;

            if (D_801759B4 >= D_80153CC0[D_80153CDC].r) {
                D_801759B4 -= r3;
            } else {
                D_801759B4 += r3;
            }
            if (D_801759B8 >= D_80153CC0[D_80153CDC].g) {
                D_801759B8 -= g3;
            } else {
                D_801759B8 += g3;
            }
            if (D_801759B6 >= D_80153CC0[D_80153CDC].b) {
                D_801759B6 -= b3;
            } else {
                D_801759B6 += b3;
            }

            r4 = ABS(D_801759BA - D_80153CCC[D_80153CDC].r) / D_80153CD8;
            g4 = ABS(D_801759BE - D_80153CCC[D_80153CDC].g) / D_80153CD8;
            b4 = ABS(D_801759BC - D_80153CCC[D_80153CDC].b) / D_80153CD8;

            if (D_801759BA >= D_80153CCC[D_80153CDC].r) {
                D_801759BA -= r4;
            } else {
                D_801759BA += r4;
            }
            if (D_801759BE >= D_80153CCC[D_80153CDC].g) {
                D_801759BE -= g4;
            } else {
                D_801759BE += g4;
            }
            if (D_801759BC >= D_80153CCC[D_80153CDC].b) {
                D_801759BC -= b4;
            } else {
                D_801759BC += b4;
            }

            D_80153CD8--;
            if (D_80153CD8 == 0) {
                D_801759A8 = D_80153CA8[D_80153CDC].r;
                D_801759AC = D_80153CA8[D_80153CDC].g;
                D_801759AA = D_80153CA8[D_80153CDC].b;
                D_801759AE = D_80153CB4[D_80153CDC].r;
                D_801759B2 = D_80153CB4[D_80153CDC].g;
                D_801759B0 = D_80153CB4[D_80153CDC].b;
                D_801759B4 = D_80153CC0[D_80153CDC].r;
                D_801759B8 = D_80153CC0[D_80153CDC].g;
                D_801759B6 = D_80153CC0[D_80153CDC].b;
                D_801759BA = D_80153CCC[D_80153CDC].r;
                D_801759BE = D_80153CCC[D_80153CDC].g;
                D_801759BC = D_80153CCC[D_80153CDC].b;
                D_80153CDC ^= 1;
                D_80153CD8 = 3;
            }

            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                func_800ED858(0);
                if (msgCtx->msgMode == 0xD) {
                    // Correct Example Performance
                    osSyncPrintf("正解模範演奏=%x\n", msgCtx->unk_E3EC);
                    func_8010B720(globalCtx, 0x86F);
                    msgCtx->msgMode = 0x11;
                    msgCtx->unk_E2FD = 3;
                    msgCtx->unk_E3E7 = 1;
                } else if (msgCtx->msgMode == 0x1C) {
                    if (msgCtx->unk_E3EC >= 6) {
                        func_8010B720(globalCtx, 0x86F);
                        msgCtx->msgMode = 0x11;
                        msgCtx->unk_E2FD = 3;
                        msgCtx->unk_E3E7 = 1;
                    } else {
                        func_80106CCC(globalCtx);
                        globalCtx->msgCtx.unk_E3EE = 4;
                    }
                } else {
                    func_80106CCC(globalCtx);
                    globalCtx->msgCtx.unk_E3EE = 3;
                }
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 14:
        case 29:
            func_801086B0(globalCtx, &gfx);
        case 15:
            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                VREG(51) = 1;
                if (msgCtx->msgMode == 0x1D) {
                    // kokokokokoko
                    osSyncPrintf("ここここここ\n");
                    func_8010B720(globalCtx, 0x88B);
                    func_80109B3C(globalCtx);
                    msgCtx->msgMode = 0x1E;
                } else {
                    msgCtx->msgMode = 0x10;
                }
                // Cancel
                osSyncPrintf("キャンセル\n");
            }
            break;
        case 16:
        case 30:
            // loop has some weirdness going on
            for (phi_a3_3 = 0; phi_a3_3 < 5; phi_a3_3++) {
                (&VREG(45))[(s32)phi_a3_3] += VREG(51);
            }
            VREG(51) += VREG(51);
            if (VREG(51) >= 0x226) {
                D_8015394C[0] = 0xFF;
                D_80153958[8] = D_80153958[7] = D_80153958[6] = D_80153958[5] = D_80153958[4] = D_80153958[3] =
                    D_80153958[2] = D_80153958[1] = D_80153958[0] = 0;
                if (msgCtx->msgMode == 0x1E) {
                    msgCtx->msgMode = 0x1F;
                } else {
                    msgCtx->msgMode = 9;
                }
            }
            break;
        case 17:
            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                func_800ED858(0);
                osSyncPrintf(VT_FGCOL(GREEN));
                osSyncPrintf("Na_StopOcarinaMode();\n");
                osSyncPrintf("Na_StopOcarinaMode();\n");
                osSyncPrintf("Na_StopOcarinaMode();\n");
                osSyncPrintf(VT_RST);
                func_80109B3C(globalCtx);
                msgCtx->msgMode = 0x12;
                msgCtx->unk_E2B8 = func_800EE3D4();
                D_8014B2F8 = 0;
                msgCtx->unk_E2B8->pos = D_8014B2F8;
                func_801069B0();
                if (msgCtx->unk_E3EC >= 6 && msgCtx->unk_E3EC < 0xD) {
                    Actor_Spawn(&globalCtx->actorCtx, globalCtx, D_80153C68[msgCtx->unk_E3EC],
                                player->actor.world.pos.x, player->actor.world.pos.y, player->actor.world.pos.z, 0, 0,
                                0, D_80153C78[msgCtx->unk_E3EC]);
                }
            }
            break;
        case 18:
            func_801086B0(globalCtx, &gfx);
            func_800ED858(1);
            func_800ED858(1);
            func_800ED93C(msgCtx->unk_E3EC + 1, 1);
            if (0xC != msgCtx->unk_E3EC) {
                func_800F5C64(D_80153CE0[msgCtx->unk_E3EC]);
                func_800F7260(0x20);
            }
            globalCtx->msgCtx.unk_E3EE = 1;
            if (msgCtx->unk_E3F0 == 1) {
                msgCtx->unk_E3F0 = 0x29;
            }
            if (msgCtx->unk_E3F0 == 0x30) {
                msgCtx->unk_E3F0 = 0x31;
            }
            D_8014B2F8 = 0;
            msgCtx->msgMode = 0x13;
            break;
        case 24:
            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                // ocarina_no=%d Song Chosen=%d
                osSyncPrintf("ocarina_no=%d  選曲=%d\n", msgCtx->unk_E3F0, 0x16);
                if (msgCtx->unk_E3F0 < 8) {
                    func_800ED858(4);
                } else if (msgCtx->unk_E3F0 == 9) {
                    func_800ED858(2);
                } else if (msgCtx->unk_E3F0 == 0xA) {
                    func_800ED858(3);
                } else if (msgCtx->unk_E3F0 == 0xD) {
                    func_800ED858(5);
                } else {
                    func_800ED858(1);
                }
                // Example Performance
                osSyncPrintf("模範演奏=%x\n", msgCtx->unk_E3F0 - 2);
                func_800ED93C(msgCtx->unk_E3F0 - 1, 2);
                D_8014B2F8 = 0;
                msgCtx->msgMode = 0x19;
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 20:
            func_8010B720(globalCtx, msgCtx->unk_E3EC + 0x893);
            func_80109B3C(globalCtx);
            msgCtx->msgMode = 0x15;
            msgCtx->unk_E3E7 = 0x14;
            func_801086B0(globalCtx, &gfx);
            break;
        case 21:
            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                msgCtx->msgMode = 0x16;
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 22:
            func_800ED858(0);
            func_801069B0();
            msgCtx->msgMode = 0x17;
            msgCtx->unk_E3E7 = 2;
            func_801086B0(globalCtx, &gfx);
            break;
        case 23:
            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                if (msgCtx->unk_E3EC < 6 && ((msgCtx->unk_E3F0 < 0xF) || (msgCtx->unk_E3F0 >= 0x15))) {
                    // weird loading differences around here
                    if ((msgCtx->unk_E40C != 0) || (globalCtx->interfaceCtx.restrictions.warpSongs == 3)) {
                        func_8010B680(globalCtx, 0x88C, NULL);
                        globalCtx->msgCtx.unk_E3EE = 4;
                    } else if ((gSaveContext.eventInf[0] & 0xF) != 1) {
                        func_8010B680(globalCtx, msgCtx->unk_E3EC + 0x88D, NULL);
                        globalCtx->msgCtx.unk_E3EE = 1;
                    } else {
                        func_80106CCC(globalCtx);
                    }
                } else {
                    func_80106CCC(globalCtx);
                    if (msgCtx->unk_E3EC == 7) {
                        DREG(53) = 1;
                    }
                    osSyncPrintf(VT_FGCOL(YELLOW));
                    osSyncPrintf("☆☆☆ocarina=%d   message->ocarina_no=%d  ", msgCtx->unk_E3EC, msgCtx->unk_E3F0);
                    if (msgCtx->unk_E3F0 == 0x29) {
                        globalCtx->msgCtx.unk_E3EE = 1;
                        if (msgCtx->unk_E3EC == 0xC) {
                            globalCtx->msgCtx.unk_E3EE = 0xB;
                        }
                    } else if (msgCtx->unk_E3F0 >= 0x1C) {
                        osSyncPrintf(VT_FGCOL(YELLOW));
                        osSyncPrintf("Ocarina_PC_Wind=%d(%d) ☆☆☆   ", 0x1C, msgCtx->unk_E3F0 - 0x1C);
                        if (msgCtx->unk_E3F0 == (msgCtx->unk_E3EC + 0x1C)) {
                            globalCtx->msgCtx.unk_E3EE = 3;
                        } else {
                            globalCtx->msgCtx.unk_E3EE = msgCtx->unk_E3EC - 1;
                        }
                    } else {
                        osSyncPrintf(VT_FGCOL(GREEN));
                        osSyncPrintf("Ocarina_C_Wind=%d(%d) ☆☆☆   ", 0xF, msgCtx->unk_E3F0 - 0xF);
                        if (msgCtx->unk_E3F0 == (msgCtx->unk_E3EC + 0xF)) {
                            globalCtx->msgCtx.unk_E3EE = 3;
                        } else {
                            globalCtx->msgCtx.unk_E3EE = 4;
                        }
                    }
                    osSyncPrintf(VT_RST);
                    osSyncPrintf("→  OCARINA_MODE=%d\n", globalCtx->msgCtx.unk_E3EE);
                }
            }
            break;
        case 19:
        case 25:
            msgCtx->unk_E2B8 = func_800EE3F8();
            if (msgCtx->unk_E2B8->state == 0) {
                if (msgCtx->msgMode == 0x13) {
                    msgCtx->msgMode = 0x14;
                } else {
                    msgCtx->msgMode = 0x1A;
                }
                osSyncPrintf("onpu_buff[%d]=%x\n", msgCtx->unk_E2B8->pos, D_8015394C[msgCtx->unk_E2B8->pos]);
            } else {
                if ((D_8014B2F8 != 0) && (msgCtx->unk_E2B8->pos == 1)) {
                    D_8014B2F8 = 0;
                }
                if ((msgCtx->unk_E2B8->pos != 0) && (msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1))) {
                    msgCtx->unk_E410 = D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                    D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                    D_8014B2F8++;
                }
            }
        case 26:
            func_801086B0(globalCtx, &gfx);
            break;
        case 27:
            msgCtx->unk_E2B8 = func_800EE3D4();
            if (msgCtx->unk_E2B8->pos != 0 && msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                // doesn't increment like it should but uses old value from D_8014B2F8 + 1 above
                D_8014B2F8++;
            }
            if (msgCtx->unk_E2B8->state < 0xD) {
                osSyncPrintf("M_OCARINA20 : ocarina_no=%x    status=%x\n", msgCtx->unk_E3F0, msgCtx->unk_E2B8->state);
                msgCtx->unk_E3EC = msgCtx->unk_E2B8->state;
                msgCtx->msgMode = 0x1C;
                Item_Give(globalCtx, D_8015396C[msgCtx->unk_E2B8->state] + 0x5A);
                osSyncPrintf(VT_FGCOL(YELLOW));
                // z_message.c Song Acquired
                osSyncPrintf("z_message.c 取得メロディ＝%d\n", msgCtx->unk_E2B8->state + 0x5A);
                osSyncPrintf(VT_RST);
                msgCtx->unk_E3E7 = 0x14;
                Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            } else if (msgCtx->unk_E2B8->state == 0xFF) {
                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                msgCtx->unk_E3E7 = 0xA;
                msgCtx->msgMode = 0x1D;
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 31:
            func_801086B0(globalCtx, &gfx);
            if (func_80106BC8(globalCtx) != 0) {
                func_8010BD58(globalCtx, msgCtx->unk_E3F0);
            }
            break;
        case 33:
            // Scarecrow Recording Initialization
            osSyncPrintf("案山子録音 初期化\n");
            func_800EE170(1);
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3C8();
            D_8014B2F8 = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            D_8014B2FC = 0;
            func_801069B0();
            msgCtx->msgMode = 0x22;
            func_801086B0(globalCtx, &gfx);
            break;
        case 34:
            msgCtx->unk_E2B8 = func_800EE3C8();
            osSyncPrintf("\nonpu_pt=%d, locate=%d", D_8014B2F8, msgCtx->unk_E2B8->pos);
            if ((msgCtx->unk_E2B8->pos != 0) && (msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1))) {
                if (D_8014B2FC >= 8) {
                    for (phi_v0_10 = D_8014B2FC - 8, phi_a3_4 = 0; phi_v0_10 > 0, phi_a3_4 < 8;
                         phi_v0_10++, phi_a3_4++) {
                        D_8015394C[phi_v0_10] = D_8015394C[phi_v0_10 + 1];
                    }
                    D_8014B2FC--;
                }
                osSyncPrintf("    入力ボタン【%d】=%d", D_8014B2FC, msgCtx->unk_E2B8->noteIdx);
                msgCtx->unk_E410 = D_8015394C[D_8014B2FC] = msgCtx->unk_E2B8->noteIdx;
                D_8014B2FC++;
                D_8015394C[D_8014B2FC] = 0xFF;
                D_8014B2F8++;
                if (msgCtx->unk_E2B8->pos == 8) {
                    D_8014B2F8 = 0;
                }
            }
            if ((msgCtx->unk_E2B8->state == 0) ||
                CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_B_SWAPPED)) {
                if (D_8014B2FC != 0) {
                    osSyncPrintf("録音終了！！！！！！！！！  message->info->status=%d \n", msgCtx->unk_E2B8->state);
                    gSaveContext.scarecrowCustomSongSet = 1;
                }
                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                osSyncPrintf("aaaaaaaaaaaaaa\n");
                func_800EE170(0);
                msgCtx->unk_E3E7 = 0xA;
                globalCtx->msgCtx.unk_E3EE = 4;
                func_80106CCC(globalCtx);
                osSyncPrintf("録音終了！！！！！！！！！録音終了\n");
                osSyncPrintf(VT_FGCOL(YELLOW));
                osSyncPrintf("\n====================================================================\n");
                MemCopy(gSaveContext.scarecrowCustomSong, gScarecrowCustomSongPtr,
                        sizeof(gSaveContext.scarecrowCustomSong));
                for (phi_a3_5 = 0; phi_a3_5 < (s32)sizeof(gSaveContext.scarecrowCustomSong); phi_a3_5++) {
                    osSyncPrintf("%d, ", gSaveContext.scarecrowCustomSong[phi_a3_5]);
                }
                osSyncPrintf(VT_RST);
                osSyncPrintf("\n====================================================================\n");
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 35:
        case 40:
            msgCtx->unk_E2B8 = func_800EE3F8();
            if (msgCtx->unk_E2B8->pos != 0 && msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                if (D_8014B2FC >= 8) {
                    for (phi_v0_11 = D_8014B2FC - 8, phi_a3_6 = 0; phi_a3_6 < 8; phi_v0_11++, phi_a3_6++) {
                        D_8015394C[phi_v0_11] = D_8015394C[phi_v0_11 + 1];
                    }
                    D_8014B2FC--;
                }
                D_8015394C[D_8014B2FC] = msgCtx->unk_E2B8->noteIdx;
                D_8014B2FC++;
                D_8015394C[D_8014B2FC] = 0xFF;
                // takes the increment from up above instead of new increment
                D_8014B2F8++;
                if (msgCtx->unk_E2B8->pos == 8) {
                    D_8014B2FC = D_8014B2F8 = 0;
                }
            }
            osSyncPrintf("status=%d (%d)\n", msgCtx->unk_E2B8->state, 0);
            if (msgCtx->unk_E3E7 == 0) {
                if (msgCtx->unk_E2B8->state == 0) {
                    osSyncPrintf("bbbbbbbbbbb\n");
                    func_800ED858(0);
                    globalCtx->msgCtx.unk_E3EE = 0xF;
                    func_80106CCC(globalCtx);
                }
            } else {
                msgCtx->unk_E3E7--;
            }
            break;
        case 36:
            func_800EE170(2);
            func_800ED858(1);
            msgCtx->msgMode = 0x25;
            func_801086B0(globalCtx, &gfx);
            break;
        case 37:
            msgCtx->unk_E2B8 = func_800EE3C8();
            if (msgCtx->unk_E2B8->pos != 0) {
                if (msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                    msgCtx->unk_E410 = D_8015394C[D_8014B2F8] = msgCtx->unk_E2B8->noteIdx;
                    D_8014B2F8++;
                    D_8015394C[D_8014B2F8] = 0xFF;
                }
            }
            if (msgCtx->unk_E2B8->state == 0) {
                osSyncPrintf("８音録音ＯＫ！\n");
                msgCtx->unk_E3E7 = 0x14;
                gSaveContext.scarecrowSpawnSongSet = 1;
                msgCtx->msgMode = 0x27;
                Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                osSyncPrintf(VT_FGCOL(YELLOW));
                osSyncPrintf("\n====================================================================\n");
                MemCopy(gSaveContext.scarecrowSpawnSong, gScarecrowSpawnSongPtr,
                        sizeof(gSaveContext.scarecrowSpawnSong));
                for (phi_a3_7 = 0; phi_a3_7 < (s32)sizeof(gSaveContext.scarecrowSpawnSong); phi_a3_7++) {
                    osSyncPrintf("%d, ", gSaveContext.scarecrowSpawnSong[phi_a3_7]);
                }
                osSyncPrintf(VT_RST);
                osSyncPrintf("\n====================================================================\n");
            } else if ((msgCtx->unk_E2B8->state == 0xFF) ||
                       CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_B_SWAPPED)) {
                osSyncPrintf("すでに存在する曲吹いた！！！ \n");
                func_800EE170(0);
                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                func_80106CCC(globalCtx);
                msgCtx->msgMode = 0x26;
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 38:
            osSyncPrintf("cccccccccccc\n");
            func_800ED858(0);
            func_8010B680(globalCtx, 0x40AD, NULL); // Bonooru doesn't remember your song
            globalCtx->msgCtx.unk_E3EE = 4;
            break;
        case 41:
            func_800ED858(1);
            func_800ED858(6);
            func_800EE57C(gSaveContext.ocarinaGameReward);
            msgCtx->unk_E2B8 = func_800EE3F8();
            D_8014B2F8 = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            func_801069B0();
            func_800ED93C(0xE, 1);
            msgCtx->msgMode = 0x2A;
            msgCtx->unk_E3E7 = 2;
            break;
        case 42:
        case 44:
            Audio_PlaySoundGeneral(NA_SE_SY_METRONOME_LV - SFX_FLAG, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                   &D_801333E8);
            msgCtx->unk_E2B8 = func_800EE3F8();
            if (msgCtx->unk_E2B8->pos != 0) {
                if (msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                    D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                    D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                    // takes from above instead of new increment
                    D_8014B2F8++;
                }
            }
            if (msgCtx->unk_E3E7 == 0) {
                if (msgCtx->unk_E2B8->state == 0) {
                    if (msgCtx->msgMode == 0x2A) {
                        Audio_PlaySoundGeneral(NA_SE_SY_METRONOME, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                    } else {
                        Audio_PlaySoundGeneral(NA_SE_SY_METRONOME_2, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                    }
                    msgCtx->msgMode++;
                }
            } else {
                msgCtx->unk_E3E7--;
            }
            break;
        case 43:
        case 45:
            msgCtx->unk_E2B8 = func_800EE3F8();
            if (msgCtx->unk_E2B8->pos != 0 && msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                D_8014B2F8++;
            }
            break;
        case 46:
            Audio_PlaySoundGeneral(NA_SE_SY_METRONOME_LV - SFX_FLAG, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                   &D_801333E8);
            msgCtx->unk_E2B8 = func_800EE3D4();
            if (msgCtx->unk_E2B8->pos != 0 && msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                D_8014B2F8++;
            }
            if (msgCtx->unk_E2B8->state == 0xFF) {
                osSyncPrintf("輪唱失敗！！！！！！！！！\n");
                func_800ED858(0);
                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                msgCtx->unk_E3E7 = 0xA;
                globalCtx->msgCtx.unk_E3EE = 3;
            } else if (msgCtx->unk_E2B8->state == 0xD) {
                osSyncPrintf("輪唱成功！！！！！！！！！\n");
                Audio_PlaySoundGeneral(NA_SE_SY_GET_ITEM, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                msgCtx->msgMode = 0x2F;
                msgCtx->unk_E3E7 = 0x1E;
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 47:
            msgCtx->unk_E2B8 = func_800EE3D4();
            if (msgCtx->unk_E2B8->pos != 0) {
                if (msgCtx->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                    D_8015394C[msgCtx->unk_E2B8->pos - 1] = msgCtx->unk_E2B8->noteIdx;
                    D_8015394C[msgCtx->unk_E2B8->pos] = 0xFF;
                    D_8014B2F8++;
                }
            }
            msgCtx->unk_E3E7--;
            if (msgCtx->unk_E3E7 == 0) {
                if (func_800EE5EC() != 1) {
                    Audio_PlaySoundGeneral(NA_SE_SY_METRONOME, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    msgCtx->unk_E2B8 = func_800EE3D4();
                    D_8014B2F8 = 0;
                    msgCtx->unk_E2B8->pos = D_8014B2F8;
                    func_801069B0();
                    msgCtx->msgMode = 0x30;
                } else {
                    globalCtx->msgCtx.unk_E3EE = 0xF;
                }
            }
            func_801086B0(globalCtx, &gfx);
            break;
        case 48:
            if (!func_800F8FF4(NA_SE_SY_METRONOME)) {
                msgCtx->unk_E2B8 = func_800EE3F8();
                D_8014B2F8 = 0;
                msgCtx->unk_E2B8->pos = D_8014B2F8;
                func_801069B0();
                func_800ED93C(0xE, 1);
            }
            break;
        case 49:
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3D4();
            D_8014B2F8 = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            globalCtx->msgCtx.unk_E3EE = 1;
            func_801069B0();
            func_800ECC04(D_8014B31C + 0xC000);
            msgCtx->msgMode = 0x32;
            break;
        case 50:
            msgCtx->unk_E2B8 = func_800EE3D4();
            if (msgCtx->unk_E2B8->pos != 0 && msgCtx->unk_E2B8->pos == D_8014B2F8 + 1) {
                msgCtx->unk_E410 = msgCtx->unk_E2B8->noteIdx;
                msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
                func_801069B0();
                msgCtx->msgMode = 0x33;
            }
        case 51:
            break;
        case 53:
            func_801086B0(globalCtx, &gfx);
            switch (msgCtx->unk_E3E4) {
                case 0x10:
                    func_80106D40(globalCtx, 1);
                    func_80107980(globalCtx, &gfx, msgCtx->unk_E3D8, msgCtx->unk_E3DA);
                    break;
                case 0x20:
                    func_80106D40(globalCtx, 2);
                    func_80107980(globalCtx, &gfx, msgCtx->unk_E3D8, msgCtx->unk_E3DA);
                    break;
                case 0x40:
                    if (msgCtx->unk_E2F8 >= 0x6D && msgCtx->unk_E2F8 < 0x73) {
                        msgCtx->unk_E3E7++;
                        if (msgCtx->unk_E3E7 >= 0x1F) {
                            msgCtx->unk_E3E7 = 2;
                            msgCtx->msgMode = 0x36;
                        }
                    }
                    break;
                case 0x50:
                case 0x60:
                    func_80107980(globalCtx, &gfx, XREG(64), XREG(65));
                    break;
            }
            break;
        case 54:
            break;
        case 55:
            break;
        case 32:
            msgCtx->msgMode = 6;
            break;
    }

    if (msgCtx->msgMode >= 0xC && msgCtx->msgMode < 0x34 && msgCtx->unk_E3F0 != 1 && msgCtx->unk_E3F0 != 0x30) {
        func_8009457C(&gfx);

        gDPSetCombineLERP(gfx++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                          ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

        if (msgCtx->msgMode == 0x1B) {
            temp_abc = msgCtx->unk_E3F0 - 0xF;
            for (phi_a3_8 = 0; phi_a3_8 < D_80131C00[temp_abc].len; phi_a3_8++) {
                temp_a0_9 = D_80131C00[temp_abc].notesIdx[phi_a3_8];

                gDPPipeSync(gfx++);
                gDPSetPrimColor(gfx++, 0, 0, 150, 150, 150, 150);
                gDPSetEnvColor(gfx++, 10, 10, 10, 0);

                gDPLoadTextureBlock(gfx++, D_80153C94[temp_a0_9], G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);

                gSPTextureRectangle(gfx++, VREG(28) << 2, (&VREG(35))[temp_a0_9] << 2, (VREG(28) + 0x10) << 2,
                                    ((&VREG(35))[temp_a0_9] + 0x10) << 2, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);
                VREG(28) += VREG(29);
            }
        }

        if (msgCtx->msgMode != 0x21 && msgCtx->msgMode != 0x29 && D_8015394C[phi_a3_9] != 0xFF) {
            for (phi_a3_9 = 0; phi_a3_9 < 8; phi_a3_9++, VREG(28) += VREG(29)) {
                if (D_80153958[phi_a3_9] != 0xFF) {
                    D_80153958[phi_a3_9] += VREG(50);
                    if (D_80153958[phi_a3_9] >= 0xFF) {
                        D_80153958[phi_a3_9] = 0xFF;
                    }
                }

                gDPPipeSync(gfx++);
                if (D_8015394C[phi_a3_9] == 0) {
                    gDPSetPrimColor(gfx++, 0, 0, D_801759A8, D_801759AC, D_801759AA, D_80153958[phi_a3_9]);
                    gDPSetEnvColor(gfx++, D_801759AE, D_801759B2, D_801759B0, 0);
                } else {
                    gDPSetPrimColor(gfx++, 0, 0, D_801759B4, D_801759B8, D_801759B6, D_80153958[phi_a3_9]);
                    gDPSetEnvColor(gfx++, D_801759BA, D_801759BE, D_801759BC, 0);
                }

                gDPLoadTextureBlock(gfx++, D_80153C94[D_8015394C[phi_a3_9]], G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);

                gSPTextureRectangle(gfx++, VREG(28) << 2, (&VREG(35))[D_8015394C[phi_a3_9]] << 2,
                                    (VREG(28) + 0x10) << 2, ((&VREG(35))[D_8015394C[phi_a3_9]] + 0x10) << 2,
                                    G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);
            }
        }
    }

end:
    *p = gfx;
}
#else
void func_8010C39C(GlobalContext* globalCtx, Gfx** p);
s16 D_80153C68[] = {
    0x0040, 0x0200, 0x0400, 0x0800, 0x1000, 0x0000, 0x0199, 0x0198,
};
s16 D_80153C78[] = { 0x018A, 0x017E, 0x018A, 0x018B, 0x01CB, 0x0000, 0x0000,
                     0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000 };
// texture segment addrs
u64* D_80153C94[] = {
    0x02002940, 0x02002A40, 0x02002B40, 0x02002C40, 0x02002D40,
};
Vec3s D_80153CA8[] = {
    { 0x0050, 0x00FF, 0x0096 },
    { 0x0064, 0x00FF, 0x00C8 },
};
Vec3s D_80153CB4[] = {
    { 0x000A, 0x000A, 0x000A },
    { 0x0032, 0x00FF, 0x0032 },
};
Vec3s D_80153CC0[] = {
    { 0x00FF, 0x00FF, 0x0032 },
    { 0x00FF, 0x00FF, 0x00B4 },
};
Vec3s D_80153CCC[] = {
    { 0x000A, 0x000A, 0x000A },
    { 0x006E, 0x006E, 0x0032 },
};
s16 D_80153CD8 = 0x000C;
s16 D_80153CDC = 0x0001;
s16 D_80153CE0[] = {
    0x0034, 0x0033, 0x0035, 0x0036, 0x0037, 0x0025, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049,
};
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_8010C39C.s")
#endif

// Message_DrawSetup ?
void func_8010F2CC(s16* arg0, GraphicsContext* gfxCtx) {
    static s16 D_80153CF8 = 0;
    static s16 D_80153CFC = 0;

    OPEN_DISPS(gfxCtx);

    if (D_80153CF8 != *arg0) {
        D_80153CF8 = *arg0;
        D_80153CFC = 0x1E;
    }
    if (D_80153CFC != 0) {
        D_80153CFC -= 1;
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCycleType(POLY_OPA_DISP++, G_CYC_FILL);
        gDPSetRenderMode(POLY_OPA_DISP++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(POLY_OPA_DISP++, RGBA8(0, 1, 0, 1));
        gDPFillRectangle(POLY_OPA_DISP++, 0, 110, 319, 150);
        gDPPipeSync(POLY_OPA_DISP++);
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCycleType(POLY_OPA_DISP++, G_CYC_FILL);
        gDPSetRenderMode(POLY_OPA_DISP++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(POLY_OPA_DISP++, RGBA8(255, 255, 255, 255));
        gDPFillRectangle(POLY_OPA_DISP++, 40, 120, 60, 140);
        gDPPipeSync(POLY_OPA_DISP++);
    }
    CLOSE_DISPS(gfxCtx);
}

// Message_DrawDebug ?
void func_8010F494(GlobalContext* globalCtx, Gfx** p) {
    GfxPrint printer;

    GfxPrint_Init(&printer);
    GfxPrint_Open(&printer, *p);
    GfxPrint_SetPos(&printer, 6, 26);
    GfxPrint_SetColor(&printer, 255, 60, 0, 255);
    GfxPrint_Printf(&printer, "%s", "MESSAGE");
    GfxPrint_SetPos(&printer, 14, 26);
    GfxPrint_Printf(&printer, "%s", "=");
    GfxPrint_SetPos(&printer, 16, 26);
    GfxPrint_Printf(&printer, "%x", globalCtx->msgCtx.unk_E2F8);
    *p = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);
}

// Message_Draw ?
void func_8010F58C(GlobalContext* globalCtx) {
    Gfx* plusOne;
    Gfx* polyOpaP;
    s16 sp4E;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    sp4E = gSaveContext.scarecrowCustomSongSet;
    func_8010F2CC(&sp4E, globalCtx->state.gfxCtx);
    if (BREG(0) != 0 && globalCtx->msgCtx.unk_E2F8 != 0) {
        plusOne = Graph_GfxPlusOne(polyOpaP = POLY_OPA_DISP);
        gSPDisplayList(OVERLAY_DISP++, plusOne);
        func_8010F494(globalCtx, &plusOne);
        gSPEndDisplayList(plusOne++);
        Graph_BranchDlist(polyOpaP, plusOne);
        POLY_OPA_DISP = plusOne;
    }

    plusOne = Graph_GfxPlusOne(polyOpaP = POLY_OPA_DISP);
    gSPDisplayList(OVERLAY_DISP++, plusOne);
    func_8010C39C(globalCtx, &plusOne);
    gSPEndDisplayList(plusOne++);
    Graph_BranchDlist(polyOpaP, plusOne);
    POLY_OPA_DISP = plusOne;
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void Message_Update(GlobalContext* globalCtx) {
    static s16 D_80153D00[] = {
        // textbox x offsets
        35, 35, 35, 35, 35, 35, 35, 35,
    };
    static s16 D_80153D0C[] = {
        // textbox  middle position y offsets
        0x008E, 0x008E, 0x008E, 0x008E, 0x00AE, 0x008E, 0x008E, 0x008E,
    };
    static s16 D_80153D18[] = {
        // textbox top position y offsets
        0x0026, 0x0026, 0x0026, 0x0026, 0x00AE, 0x0026, 0x0026, 0x0026,
    };
    static s16 D_80153D24[] = {
        // textbox  bottom position y offsets
        0x005A, 0x005A, 0x005A, 0x005A, 0x00AE, 0x005A, 0x005A, 0x005A,
    };
    static s16 D_80153D30[] = {
        // end marker y offsets
        24, 24, 24, 24, 6, 24, 24, 24,
    };
    static u8 D_80153D74 = 0;
    static u16 D_80153D78 = 0;
    MessageContext* msgCtx = &globalCtx->msgCtx;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;
    Player* player = PLAYER;
    Input* curInput = &globalCtx->state.input[0];
    s16 phi_v1_2;
    s16 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;

    if (BREG(0) != 0) {
        if (CHECK_BTN_ALL(curInput->press.button, BTN_DDOWN) && CHECK_BTN_ALL(curInput->cur.button, BTN_L)) {
            osSyncPrintf("msgno=%d\n", D_80153D78);
            func_8010B680(globalCtx, YREG(79), NULL);
            D_80153D78 = (D_80153D78 + 1) % 10;
        }
        if (YREG(78) != 0) {
            while (YREG(79) != 0x8000) {
                MessageTableEntry* entry = &D_801538F0[0];
                while (entry->textId != 0xFFFD) {
                    if (entry->textId == YREG(79)) {
                        // The message was found! !! !!
                        osSyncPrintf(" メッセージが,見つかった！！！ = %x\n", YREG(79));
                        func_8010B680(globalCtx, YREG(79), NULL);
                        YREG(79)++;
                        YREG(78) = 0;
                        return;
                    }
                    entry++;
                }
                YREG(79)++;
            }
        }
    }

    if (msgCtx->unk_E300 != 0) {
        switch (msgCtx->msgMode) {
            case 1:
                D_8014B2F4++;
                /* if (D_8014B2F4 == 1) {
                    Audio_PlaySoundPitched(NA_SE_SY_DUMMY_32);
                } */

                phi_v1_2 = 0;
                if (YREG(15) == 0x40) {
                    if (D_8014B2F4 >= 4) {
                        phi_v1_2 = 1;
                    }
                } else if (YREG(15) != 0 || globalCtx->sceneNum == SCENE_HAIRAL_NIWA) {
                    phi_v1_2 = 1;
                } else if (D_8014B2F4 >= 4 || msgCtx->unk_E408 == NULL) {
                    phi_v1_2 = 1;
                }

                if (phi_v1_2 != 0) {
                    if (msgCtx->unk_E408 != NULL) {
                        Actor_GetProjectionPos(globalCtx, &PLAYER->actor, &sp44, &sp40);
                        Actor_GetProjectionPos(globalCtx, msgCtx->unk_E408, &sp44, &sp3E);
                        if (sp40 >= sp3E) {
                            sp42 = ((sp40 - sp3E) / 2) + sp3E;
                        } else {
                            sp42 = ((sp3E - sp40) / 2) + sp40;
                        }
                        osSyncPrintf("dxpos=%d   dypos=%d  dypos1  dypos2=%d\n", sp44, sp42, sp40, sp3E);
                    } else {
                        R_TEXTBOX_X = R_TEXTBOX_X_TARGET;
                        VREG(1) = XREG(73);
                    }

                    phi_v1_2 = msgCtx->unk_E2FD;

                    if (!msgCtx->unk_E2FE) { // pos variable
                        if (YREG(15) || globalCtx->sceneNum == SCENE_HAIRAL_NIWA) {
                            if (sp42 < XREG(92)) {
                                XREG(73) = D_80153D0C[phi_v1_2];
                            } else {
                                XREG(73) = D_80153D18[phi_v1_2];
                            }
                        } else if (globalCtx->sceneNum == SCENE_MARKET_DAY ||
                                   globalCtx->sceneNum == SCENE_MARKET_NIGHT ||
                                   globalCtx->sceneNum == SCENE_MARKET_RUINS) {
                            if (sp42 < XREG(93)) {
                                XREG(73) = D_80153D0C[phi_v1_2];
                            } else {
                                XREG(73) = D_80153D18[phi_v1_2];
                            }
                        } else {
                            if (sp42 < XREG(94)) {
                                XREG(73) = D_80153D0C[phi_v1_2];
                            } else {
                                XREG(73) = D_80153D18[phi_v1_2];
                            }
                        }
                    } else {
                        if (msgCtx->unk_E2FE == POS_TOP) {
                            XREG(73) = D_80153D18[phi_v1_2];
                        } else if (msgCtx->unk_E2FE == POS_BOTTOM) {
                            XREG(73) = D_80153D24[phi_v1_2];
                        } else {
                            XREG(73) = D_80153D0C[phi_v1_2];
                        }
                    }

                    R_TEXTBOX_X_TARGET = D_80153D00[phi_v1_2];
                    XREG(65) = D_80153D30[phi_v1_2] + XREG(73);
                    XREG(67) = XREG(73) + 0x16;
                    XREG(68) = XREG(73) + 0x22;
                    XREG(69) = XREG(73) + 0x2E;
                    osSyncPrintf("message->msg_disp_type=%x\n", msgCtx->unk_E2FC & 0xF0);

                    // added for spaceworld, dont let the msgMode move on until the interface is done changing
                    if (D_8014B2F4 >= 13) {
                        if (msgCtx->unk_E2FD == BOX_NONE_BOTTOM || msgCtx->unk_E2FD == BOX_NONE_NO_SHADOW) {
                            msgCtx->msgMode = 3;
                            R_TEXTBOX_X = R_TEXTBOX_X_TARGET;
                            VREG(1) = XREG(73);
                            R_TEXTBOX_WIDTH = 128;
                            YREG(23) = 32;
                            YREG(16) = 256;
                            YREG(17) = 512;
                        } else {
                            func_80107244(globalCtx, msgCtx);
                            Audio_PlaySoundPitched(NA_SE_SY_HP_RECOVER);
                            func_800F691C(0);
                            msgCtx->unk_E3E7 = 0;
                            msgCtx->msgMode = 2;
                        }
                    }
                }
                break;
            case 2:
                func_80107244(globalCtx, msgCtx);
                break;
            case 3:
                msgCtx->msgMode = 4;
                if (YREG(31) == 0) {
                    Interface_SetDoAction(globalCtx, DO_ACT_NEXT);
                }
                break;
            case 4:
                func_80109B3C(globalCtx);
                if (D_8014B2F0 != 0) {
                    Interface_ChangeAlpha(1);
                }
                if (D_80153D74 != 0) {
                    msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
                    D_80153D74 = 0;
                }
                break;
            case 5:
                msgCtx->unk_E3E7--;
                if (msgCtx->unk_E3E7 == 0) {
                    func_80109B3C(globalCtx);
                }
                break;
            case 6:
                Audio_PlaySoundPitched(NA_SE_SY_MESSAGE_WOMAN);

                if (msgCtx->unk_E2FD != 4 && YREG(31) == 0) {
                    if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_START)) {
                        func_80106CCC(globalCtx);
                    } else if (func_80106BC8(globalCtx) != 0) {
                        msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
                    } /* if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_B_SWAPPED) && msgCtx->unk_E3D6 ==
                    0) { D_8014B300 = 1; msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
                    } */
                }
                break;
            case 7:
                if (YREG(31) == 0 && func_80106BC8(globalCtx) != 0) {
                    msgCtx->msgMode = 6;
                    msgCtx->unk_E3D2++;
                } else if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_START)) {
                    func_80106CCC(globalCtx);
                }
                break;
            case 8:
                msgCtx->unk_E3E7--;
                if (msgCtx->unk_E3E7 == 0) {
                    msgCtx->msgMode = 4;
                }
                break;
            case 52:
                if (func_80106BC8(globalCtx) != 0) {
                    msgCtx->msgMode = 4;
                    msgCtx->unk_E3D6 = 0;
                    msgCtx->unk_E3CE++;
                    // D_80153D74 = 1;
                } else if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_START)) {
                    if (YREG(15) != 0x10) {
                        func_80106CCC(globalCtx);
                    }
                }
                break;
            case 53:
                if (msgCtx->unk_E3E4 == 0x60) {
                    msgCtx->unk_E3E7--;
                    if (msgCtx->unk_E3E7 == 0) {
                        func_80106CCC(globalCtx);
                    }
                } else if (msgCtx->unk_E3E4 != 0x40 && msgCtx->unk_E3E4 != 0x50) {
                    if (YREG(31) == 0) {
                        if (msgCtx->unk_E3E4 == 0x10 && globalCtx->msgCtx.unk_E3EE == 1) {
                            if (func_80106BC8(globalCtx) != 0) {
                                osSyncPrintf("OCARINA_MODE=%d -> ", globalCtx->msgCtx.unk_E3EE);
                                globalCtx->msgCtx.unk_E3EE = (msgCtx->choiceIndex == 0) ? 2 : 4;
                                osSyncPrintf("InRaceSeq=%d(%d) OCARINA_MODE=%d  -->  ", gSaveContext.eventInf[0] & 0xF,
                                             1, globalCtx->msgCtx.unk_E3EE);
                                func_80106CCC(globalCtx);
                                osSyncPrintf("OCARINA_MODE=%d\n", globalCtx->msgCtx.unk_E3EE);
                            }
                        } else if (func_80106C88(globalCtx) != 0) {
                            osSyncPrintf("select=%d\n", msgCtx->unk_E3E4);
                            if (msgCtx->unk_E3E4 == 0x30) {
                                // spaceworld, change message advance sound
                                // Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_PASS, &D_801333D4, 4, &D_801333E0,
                                // &D_801333E0,
                                //                        &D_801333E8);
                                // Audio_PlaySoundPitched(NA_SE_SY_ATTENTION_ON_OLD);
                                func_8010B720(globalCtx, D_8014B304);
                            } else {
                                // Audio_PlaySoundGeneral(NA_SE_SY_DECIDE, &D_801333D4, 4, &D_801333E0, &D_801333E0,
                                //                       &D_801333E8);
                                func_80106CCC(globalCtx);
                            }
                        } else if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_START)) {
                            func_80106CCC(globalCtx);
                        }
                    }
                }
                break;
            case 54:
                msgCtx->unk_E3E7--;
                if (msgCtx->unk_E3E7 != 0) {
                    break;
                }
                if ((msgCtx->unk_E2F8 >= 0xC2 && msgCtx->unk_E2F8 < 0xC7) ||
                    (msgCtx->unk_E2F8 >= 0xFA && msgCtx->unk_E2F8 < 0xFE)) {
                    gSaveContext.healthAccumulator = 0x140;
                }
                if ((msgCtx->unk_E2F8 == 0x301F) || (msgCtx->unk_E2F8 == 0xA) || (msgCtx->unk_E2F8 == 0xC) ||
                    (msgCtx->unk_E2F8 == 0xCF) || (msgCtx->unk_E2F8 == 0x21C) || (msgCtx->unk_E2F8 == 9) ||
                    (msgCtx->unk_E2F8 == 0x4078) || (msgCtx->unk_E2F8 == 0x2015) || (msgCtx->unk_E2F8 == 0x3040)) {
                    gSaveContext.unk_13EE = 0x32;
                }
                if (globalCtx->csCtx.state == 0) {
                    osSyncPrintf(VT_FGCOL(GREEN));
                    osSyncPrintf("day_time=%x  active_camera=%d  ", gSaveContext.cutsceneIndex,
                                 globalCtx->activeCamera);
                    if (msgCtx->unk_E2F8 != 0x2061 && msgCtx->unk_E2F8 != 0x2025 && msgCtx->unk_E2F8 != 0x208C &&
                        ((msgCtx->unk_E2F8 < 0x88D || msgCtx->unk_E2F8 >= 0x893) || msgCtx->choiceIndex != 0) &&
                        (msgCtx->unk_E2F8 != 0x3055 && gSaveContext.cutsceneIndex < 0xFFF0)) {
                        osSyncPrintf("=== day_time=%x ", ((void)0, gSaveContext.cutsceneIndex));
                        if (globalCtx->activeCamera == 0) {
                            if (gSaveContext.unk_13EE == 0 || gSaveContext.unk_13EE == 1 ||
                                gSaveContext.unk_13EE == 2) {
                                gSaveContext.unk_13EE = 0x32;
                            }
                            gSaveContext.unk_13EA = 0;
                            Interface_ChangeAlpha(gSaveContext.unk_13EE);
                        }
                    }
                }
                osSyncPrintf(VT_RST);
                msgCtx->unk_E300 = 0;
                msgCtx->msgMode = 0;
                interfaceCtx->unk_1FA = interfaceCtx->unk_1FC = 0;
                msgCtx->unk_E3E7 = 0;
                msgCtx->unk_E2F8 = msgCtx->unk_E3E7;

                if (msgCtx->unk_E3E4 == 0x40) {
                    msgCtx->unk_E3E4 = 0;
                    globalCtx->msgCtx.unk_E3EE = 2;
                } else {
                    msgCtx->unk_E3E4 = 0;
                }
                // Spaceworld -- changed max heart pieces to 8 instead of 4
                // Also moved this logic from z_message to z_parameter
                /*if ((s32)(gSaveContext.inventory.questItems & 0xF0000000) == 0x80000000) {
                    gSaveContext.inventory.questItems ^= 0x80000000;
                    gSaveContext.healthCapacity += 0x10;
                    gSaveContext.health += 0x10;
                }*/
                if (msgCtx->unk_E3F0 != 0x31) {
                    if (D_8014B310 == 6) {
                        player->naviTextId = -0xE0;
                        player->naviActor->flags |= 0x10000;
                    }
                    if (msgCtx->unk_E3F0 == 0x29 &&
                        (globalCtx->msgCtx.unk_E3EE == 1 || globalCtx->msgCtx.unk_E3EE == 0xB)) {
                        globalCtx->msgCtx.unk_E3EE = 4;
                        if (msgCtx->unk_E3F2 == 9) {
                            globalCtx->msgCtx.unk_E3EE = 1;
                        }
                    }
                }
                D_8014B310 = 0xFF;
                osSyncPrintf("OCARINA_MODE=%d   chk_ocarina_no=%d\n", globalCtx->msgCtx.unk_E3EE, msgCtx->unk_E3F2);
                break;
            case 55:
                break;
            default:
                msgCtx->unk_E410 = 0xFF;
                break;
        }
    }
}

void Message_SetTables(void) {
    D_801538F0 = D_8014B320;
    D_801538F4 = D_8014F548;
    D_801538F8 = D_80151658;
    D_801538FC = D_80153768;
}

UNK_TYPE D_80153D7C = 0x00000000;

s16 D_80153D80 = 0x0000;
