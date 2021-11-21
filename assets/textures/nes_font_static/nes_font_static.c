#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "nes_font_static.h"

u64 gMsgCharSpaceTex[] = {
#include "assets/textures/nes_font_static/msg_char_space.i4.inc.c"
};

u64 gMsgCharExclamationMarkTex[] = {
#include "assets/textures/nes_font_static/msg_char_exclamation_mark.i4.inc.c"
};

u64 gMsgCharQuotationMarkTex[] = {
#include "assets/textures/nes_font_static/msg_char_quotation_mark.i4.inc.c"
};

u64 gMsgCharNumberSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_number_sign.i4.inc.c"
};

u64 gMsgCharDollarSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_dollar_sign.i4.inc.c"
};

u64 gMsgCharPercentSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_percent_sign.i4.inc.c"
};

u64 gMsgCharAmpersandTex[] = {
#include "assets/textures/nes_font_static/msg_char_ampersand.i4.inc.c"
};

u64 gMsgCharApostropheTex[] = {
#include "assets/textures/nes_font_static/msg_char_apostrophe.i4.inc.c"
};

u64 gMsgCharLeftParenthesesTex[] = {
#include "assets/textures/nes_font_static/msg_char_left_parentheses.i4.inc.c"
};

u64 gMsgCharRightParenthesesTex[] = {
#include "assets/textures/nes_font_static/msg_char_right_parentheses.i4.inc.c"
};

u64 gMsgCharAsteriskTex[] = {
#include "assets/textures/nes_font_static/msg_char_asterisk.i4.inc.c"
};

u64 gMsgCharPlusSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_plus_sign.i4.inc.c"
};

u64 gMsgCharCommaTex[] = {
#include "assets/textures/nes_font_static/msg_char_comma.i4.inc.c"
};

u64 gMsgCharHyphenMinusTex[] = {
#include "assets/textures/nes_font_static/msg_char_hyphen_minus.i4.inc.c"
};

u64 gMsgCharPeriodTex[] = {
#include "assets/textures/nes_font_static/msg_char_period.i4.inc.c"
};

u64 gMsgCharSlashTex[] = {
#include "assets/textures/nes_font_static/msg_char_slash.i4.inc.c"
};

u64 gMsgChar0Tex[] = {
#include "assets/textures/nes_font_static/msg_char_0.i4.inc.c"
};

u64 gMsgChar1Tex[] = {
#include "assets/textures/nes_font_static/msg_char_1.i4.inc.c"
};

u64 gMsgChar2Tex[] = {
#include "assets/textures/nes_font_static/msg_char_2.i4.inc.c"
};

u64 gMsgChar3Tex[] = {
#include "assets/textures/nes_font_static/msg_char_3.i4.inc.c"
};

u64 gMsgChar4Tex[] = {
#include "assets/textures/nes_font_static/msg_char_4.i4.inc.c"
};

u64 gMsgChar5Tex[] = {
#include "assets/textures/nes_font_static/msg_char_5.i4.inc.c"
};

u64 gMsgChar6Tex[] = {
#include "assets/textures/nes_font_static/msg_char_6.i4.inc.c"
};

u64 gMsgChar7Tex[] = {
#include "assets/textures/nes_font_static/msg_char_7.i4.inc.c"
};

u64 gMsgChar8Tex[] = {
#include "assets/textures/nes_font_static/msg_char_8.i4.inc.c"
};

u64 gMsgChar9Tex[] = {
#include "assets/textures/nes_font_static/msg_char_9.i4.inc.c"
};

u64 gMsgCharColonTex[] = {
#include "assets/textures/nes_font_static/msg_char_colon.i4.inc.c"
};

u64 gMsgCharSemicolonTex[] = {
#include "assets/textures/nes_font_static/msg_char_semi_colon.i4.inc.c"
};

u64 gMsgCharLessThanSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_less_than_sign.i4.inc.c"
};

u64 gMsgCharEqualsSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_equals_sign.i4.inc.c"
};

u64 gMsgCharGreaterThanSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_greater_than_sign.i4.inc.c"
};

u64 gMsgCharQuestionMarkTex[] = {
#include "assets/textures/nes_font_static/msg_char_question_mark.i4.inc.c"
};

u64 gMsgCharAtSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_at_sign.i4.inc.c"
};

u64 gMsgCharUppercaseATex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_A.i4.inc.c"
};

u64 gMsgCharUppercaseBTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_B.i4.inc.c"
};

u64 gMsgCharUppercaseCTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_C.i4.inc.c"
};

u64 gMsgCharUppercaseDTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_D.i4.inc.c"
};

u64 gMsgCharUppercaseETex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_E.i4.inc.c"
};

u64 gMsgCharUppercaseFTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_F.i4.inc.c"
};

u64 gMsgCharUppercaseGTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_G.i4.inc.c"
};

u64 gMsgCharUppercaseHTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_H.i4.inc.c"
};

u64 gMsgCharUppercaseITex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_I.i4.inc.c"
};

u64 gMsgCharUppercaseJTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_J.i4.inc.c"
};

u64 gMsgCharUppercaseKTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_K.i4.inc.c"
};

u64 gMsgCharUppercaseLTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_L.i4.inc.c"
};

u64 gMsgCharUppercaseMTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_M.i4.inc.c"
};

u64 gMsgCharUppercaseNTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_N.i4.inc.c"
};

u64 gMsgCharUppercaseOTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_O.i4.inc.c"
};

u64 gMsgCharUppercasePTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_P.i4.inc.c"
};

u64 gMsgCharUppercaseQTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_Q.i4.inc.c"
};

u64 gMsgCharUppercaseRTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_R.i4.inc.c"
};

u64 gMsgCharUppercaseSTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_S.i4.inc.c"
};

u64 gMsgCharUppercaseTTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_T.i4.inc.c"
};

u64 gMsgCharUppercaseUTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_U.i4.inc.c"
};

u64 gMsgCharUppercaseVTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_V.i4.inc.c"
};

u64 gMsgCharUppercaseWTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_W.i4.inc.c"
};

u64 gMsgCharUppercaseXTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_X.i4.inc.c"
};

u64 gMsgCharUppercaseYTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_Y.i4.inc.c"
};

u64 gMsgCharUppercaseZTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_Z.i4.inc.c"
};

u64 gMsgCharLeftSquareBracketTex[] = {
#include "assets/textures/nes_font_static/msg_char_left_square_bracket.i4.inc.c"
};

u64 gMsgCharYenSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_yen_sign.i4.inc.c"
};

u64 gMsgCharRightSquareBracketTex[] = {
#include "assets/textures/nes_font_static/msg_char_right_square_bracket.i4.inc.c"
};

u64 gMsgCharCaretTex[] = {
#include "assets/textures/nes_font_static/msg_char_caret.i4.inc.c"
};

u64 gMsgCharUnderscoreTex[] = {
#include "assets/textures/nes_font_static/msg_char_underscore.i4.inc.c"
};

u64 gMsgCharGraveAccentTex[] = {
#include "assets/textures/nes_font_static/msg_char_grave_accent.i4.inc.c"
};

u64 gMsgCharLowercaseATex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_a.i4.inc.c"
};

u64 gMsgCharLowercaseBTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_b.i4.inc.c"
};

u64 gMsgCharLowercaseCTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_c.i4.inc.c"
};

u64 gMsgCharLowercaseDTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_d.i4.inc.c"
};

u64 gMsgCharLowercaseETex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_e.i4.inc.c"
};

u64 gMsgCharLowercaseFTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_f.i4.inc.c"
};

u64 gMsgCharLowercaseGTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_g.i4.inc.c"
};

u64 gMsgCharLowercaseHTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_h.i4.inc.c"
};

u64 gMsgCharLowercaseITex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_i.i4.inc.c"
};

u64 gMsgCharLowercaseJTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_j.i4.inc.c"
};

u64 gMsgCharLowercaseKTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_k.i4.inc.c"
};

u64 gMsgCharLowercaseLTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_l.i4.inc.c"
};

u64 gMsgCharLowercaseMTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_m.i4.inc.c"
};

u64 gMsgCharLowercaseNTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_n.i4.inc.c"
};

u64 gMsgCharLowercaseOTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_o.i4.inc.c"
};

u64 gMsgCharLowercasePTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_p.i4.inc.c"
};

u64 gMsgCharLowercaseQTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_q.i4.inc.c"
};

u64 gMsgCharLowercaseRTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_r.i4.inc.c"
};

u64 gMsgCharLowercaseSTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_s.i4.inc.c"
};

u64 gMsgCharLowercaseTTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_t.i4.inc.c"
};

u64 gMsgCharLowercaseUTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_u.i4.inc.c"
};

u64 gMsgCharLowercaseVTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_v.i4.inc.c"
};

u64 gMsgCharLowercaseWTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_w.i4.inc.c"
};

u64 gMsgCharLowercaseXTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_x.i4.inc.c"
};

u64 gMsgCharLowercaseYTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_y.i4.inc.c"
};

u64 gMsgCharLowercaseZTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_z.i4.inc.c"
};

u64 gMsgCharLeftCurlyBracketTex[] = {
#include "assets/textures/nes_font_static/msg_char_left_curly_bracket.i4.inc.c"
};

u64 gMsgCharVerticalBarTex[] = {
#include "assets/textures/nes_font_static/msg_char_vertical_bar.i4.inc.c"
};

u64 gMsgCharRightCurlyBracketTex[] = {
#include "assets/textures/nes_font_static/msg_char_right_curly_bracket.i4.inc.c"
};

u64 gMsgCharOverlineTex[] = {
#include "assets/textures/nes_font_static/msg_char_overline.i4.inc.c"
};

u64 gMsgCharUppercaseAccentedATex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_accented_A.i4.inc.c"
};

u64 gMsgCharUppercaseCircumflexedITex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_circumflexed_I.i4.inc.c"
};

u64 gMsgCharUppercaseCircumflexedATex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_circumflexed_A.i4.inc.c"
};

u64 gMsgCharUppercaseDiaeresisATex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_diaeresis_A.i4.inc.c"
};

u64 gMsgCharUppercaseLatinScriptCTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_latinscript_C.i4.inc.c"
};

u64 gMsgCharUppercaseGraveAccentedETex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_grave_accented_E.i4.inc.c"
};

u64 gMsgCharUppercaseAccentedETex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_accented_E.i4.inc.c"
};

u64 gMsgCharUppercaseCircumflexedETex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_circumflexed_E.i4.inc.c"
};

u64 gMsgCharUppercaseDiaeresisETex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_diaeresis_E.i4.inc.c"
};

u64 gMsgCharUppercaseDiaeresisITex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_diaeresis_I.i4.inc.c"
};

u64 gMsgCharUppercaseCircumflexedOTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_circumflexed_O.i4.inc.c"
};

u64 gMsgCharUppercaseDiaeresisOTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_diaeresis_O.i4.inc.c"
};

u64 gMsgCharUppercaseGraveAccentedUTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_grave_accented_U.i4.inc.c"
};

u64 gMsgCharUppercaseCircumflexedUTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_circumflexed_U.i4.inc.c"
};

u64 gMsgCharUppercaseDiaeresisUTex[] = {
#include "assets/textures/nes_font_static/msg_char_uppercase_diaeresis_U.i4.inc.c"
};

u64 gMsgCharEszettTex[] = {
#include "assets/textures/nes_font_static/msg_char_eszett.i4.inc.c"
};

u64 gMsgCharLowercaseGraveAccentedATex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_grave_accented_a.i4.inc.c"
};

u64 gMsgCharLowercaseAccentedATex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_accented_a.i4.inc.c"
};

u64 gMsgCharLowercaseCircumflexedATex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_circumflexed_a.i4.inc.c"
};

u64 gMsgCharLowercaseDiaeresisATex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_diaeresis_a.i4.inc.c"
};

u64 gMsgCharLowercaseLatinScriptCTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_latin_script_c.i4.inc.c"
};

u64 gMsgCharLowercaseGraveAccentedETex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_grave_accented_e.i4.inc.c"
};

u64 gMsgCharLowercaseAccentedETex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_accented_e.i4.inc.c"
};

u64 gMsgCharLowercaseCircumflexedETex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_circumflexed_e.i4.inc.c"
};

u64 gMsgCharLowercaseDiaeresisETex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_diaeresis_e.i4.inc.c"
};

u64 gMsgCharLowercaseDiaeresisITex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_diaeresis_i.i4.inc.c"
};

u64 gMsgCharLowercaseCircumflexedOTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_circumflexed_o.i4.inc.c"
};

u64 gMsgCharLowercaseDiaeresisOTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_diaeresis_o.i4.inc.c"
};

u64 gMsgCharLowercaseGraveAccentedUTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_grave_accented_u.i4.inc.c"
};

u64 gMsgCharLowercaseCircumflexedUTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_circumflexed_u.i4.inc.c"
};

u64 gMsgCharLowercaseDiaeresisUTex[] = {
#include "assets/textures/nes_font_static/msg_char_lowercase_diaeresis_u.i4.inc.c"
};

u64 gMsgCharAButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_a_button.i4.inc.c"
};

u64 gMsgCharBButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_b_button.i4.inc.c"
};

u64 gMsgCharCButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_c_button.i4.inc.c"
};

u64 gMsgCharLTriggerTex[] = {
#include "assets/textures/nes_font_static/msg_char_l_trigger.i4.inc.c"
};

u64 gMsgCharRTriggerTex[] = {
#include "assets/textures/nes_font_static/msg_char_r_trigger.i4.inc.c"
};

u64 gMsgCharZTriggerTex[] = {
#include "assets/textures/nes_font_static/msg_char_z_trigger.i4.inc.c"
};

u64 gMsgCharCUpButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_c_up_button.i4.inc.c"
};

u64 gMsgCharCDownButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_c_down_button.i4.inc.c"
};

u64 gMsgCharCLeftButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_c_left_button.i4.inc.c"
};

u64 gMsgCharCRightButtonTex[] = {
#include "assets/textures/nes_font_static/msg_char_c_right_button.i4.inc.c"
};

u64 gMsgCharZTargetSignTex[] = {
#include "assets/textures/nes_font_static/msg_char_z_target_sign.i4.inc.c"
};

u64 gMsgCharAnalogStickTex[] = {
#include "assets/textures/nes_font_static/msg_char_analog_stick.i4.inc.c"
};

u64 gMsgCharDPadTex[] = {
#include "assets/textures/nes_font_static/msg_char_dpad.i4.inc.c"
};


