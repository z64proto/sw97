#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "parameter_static.h"

u64 gHUDHeartEmptyTex[] = {
#include "assets/textures/parameter_static/hud_heart_empty.ia8.inc.c"
};

u64 gHUDHeartQuarterTex[] = {
#include "assets/textures/parameter_static/hud_heart_quarter.ia8.inc.c"
};

u64 gHUDHeartHalfTex[] = {
#include "assets/textures/parameter_static/hud_heart_half.ia8.inc.c"
};

u64 gHUDHeartThreeQuarterTex[] = {
#include "assets/textures/parameter_static/hud_heart_three_quarter.ia8.inc.c"
};

u64 gHUDHeartFullTex[] = {
#include "assets/textures/parameter_static/hud_heart_full.ia8.inc.c"
};

u64 gHUDDefenseHeartEmptyTex[] = {
#include "assets/textures/parameter_static/hud_defense_heart_empty.ia8.inc.c"
};

u64 gHUDDefenseHeartQuarterTex[] = {
#include "assets/textures/parameter_static/hud_defense_heart_quarter.ia8.inc.c"
};

u64 gHUDDefenseHeartHalfTex[] = {
#include "assets/textures/parameter_static/hud_defense_heart_half.ia8.inc.c"
};

u64 gHUDDefenseHeartThreeQuarterTex[] = {
#include "assets/textures/parameter_static/hud_defense_heart_three_quarter.ia8.inc.c"
};

u64 gHUDDefenseHeartFullTex[] = {
#include "assets/textures/parameter_static/hud_defense_heart_full.ia8.inc.c"
};

u64 gHUDActionButtonTex[] = {
#include "assets/textures/parameter_static/hud_action_button.ia8.inc.c"
};

u64 gHUDEmptyMapTex[] = {
#include "assets/textures/parameter_static/hud_empty_map.ia8.inc.c"
};

u64 gHUDCButtonLeftArrowTex[] = {
#include "assets/textures/parameter_static/hud_c_button_left_arrow.ia8.inc.c"
};

u64 gHUDCButtonDownArrowTex[] = {
#include "assets/textures/parameter_static/hud_c_button_down_arrow.ia8.inc.c"
};

u64 gHUDCButtonRightArrowTex[] = {
#include "assets/textures/parameter_static/hud_c_button_right_arrow.ia8.inc.c"
};

u64 gHUDSmallKeyCounterTex[] = {
#include "assets/textures/parameter_static/hud_small_key_counter.ia8.inc.c"
};

u64 gHUDRupeeCounterTex[] = {
#include "assets/textures/parameter_static/hud_rupee_counter.ia8.inc.c"
};

u64 gHUDTimerClockTex[] = {
#include "assets/textures/parameter_static/hud_timer_clock.ia8.inc.c"
};

u64 gHUDCarrotTex[] = {
#include "assets/textures/parameter_static/hud_carrot.rgba32.inc.c"
};

u64 gHUDExitMarkerTex[] = {
#include "assets/textures/parameter_static/hud_exit_marker.rgb5a1.inc.c"
};

u64 gHUDTreasureMarkerTex[] = {
#include "assets/textures/parameter_static/hud_treasure_marker.rgb5a1.inc.c"
};

u64 gHUDArrowMinigameScore[] = {
#include "assets/textures/parameter_static/hud_arrow_minigame_score.rgb5a1.inc.c"
};

u64 gHUDBossMarkerTex[] = {
#include "assets/textures/parameter_static/hud_boss_marker.ia8.inc.c"
};

u64 gHUDButtonATex[] = {
#include "assets/textures/parameter_static/hud_button_a.ia8.inc.c"
};

u64 gHUDButtonCDownTex[] = {
#include "assets/textures/parameter_static/hud_button_c_down.ia8.inc.c"
};

u64 gHUDButtonCRightTex[] = {
#include "assets/textures/parameter_static/hud_button_c_right.ia8.inc.c"
};

u64 gHUDButtonCLeftTex[] = {
#include "assets/textures/parameter_static/hud_button_c_left.ia8.inc.c"
};

u64 gHUDButtonCUpTex[] = {
#include "assets/textures/parameter_static/hud_button_c_up.ia8.inc.c"
};

u64 gHUDTrebleClefTex[] = {
#include "assets/textures/parameter_static/hud_treble_clef.i4.inc.c"
};

u64 gHUDNaviJPTex[] = {
#include "assets/textures/parameter_static/hud_navi_jp.ia4.inc.c"
};

u64 gHUDNaviENGTex[] = {
#include "assets/textures/parameter_static/hud_navi_eng.ia4.inc.c"
};

u64 gHUDCounterDigit0Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_0.i8.inc.c"
};

u64 gHUDCounterDigit1Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_1.i8.inc.c"
};

u64 gHUDCounterDigit2Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_2.i8.inc.c"
};

u64 gHUDCounterDigit3Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_3.i8.inc.c"
};

u64 gHUDCounterDigit4Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_4.i8.inc.c"
};

u64 gHUDCounterDigit5Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_5.i8.inc.c"
};

u64 gHUDCounterDigit6Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_6.i8.inc.c"
};

u64 gHUDCounterDigit7Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_7.i8.inc.c"
};

u64 gHUDCounterDigit8Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_8.i8.inc.c"
};

u64 gHUDCounterDigit9Tex[] = {
#include "assets/textures/parameter_static/hud_counter_digit_9.i8.inc.c"
};

u64 gHUDCounterColonTex[] = {
#include "assets/textures/parameter_static/hud_counter_colon.i8.inc.c"
};

u64 gHUDAmmo0Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_0.ia8.inc.c"
};

u64 gHUDAmmo1Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_1.ia8.inc.c"
};

u64 gHUDAmmo2Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_2.ia8.inc.c"
};

u64 gHUDAmmo3Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_3.ia8.inc.c"
};

u64 gHUDAmmo4Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_4.ia8.inc.c"
};

u64 gHUDAmmo5Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_5.ia8.inc.c"
};

u64 gHUDAmmo6Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_6.ia8.inc.c"
};

u64 gHUDAmmo7Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_7.ia8.inc.c"
};

u64 gHUDAmmo8Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_8.ia8.inc.c"
};

u64 gHUDAmmo9Tex[] = {
#include "assets/textures/parameter_static/hud_ammo_9.ia8.inc.c"
};

u64 gHUDUnusedAmmoHalf[] = {
#include "assets/textures/parameter_static/hud_unused_ammo_half.ia8.inc.c"
};

u64 gHUDMagicBarEndTex[] = {
#include "assets/textures/parameter_static/hud_magic_bar_end.ia8.inc.c"
};

u64 gHUDMagicBarMidTex[] = {
#include "assets/textures/parameter_static/hud_magic_bar_mid.ia8.inc.c"
};

u64 gHUDMagicBarFillTex[] = {
#include "assets/textures/parameter_static/hud_magic_bar_fill.ia8.inc.c"
};

u64 gHUDTreasureMarkerOpenedTex[] = {
#include "assets/textures/parameter_static/hud_treasure_marker_opened.ia8.inc.c"
};

// 32x item icons
u64 g32MapIconTex[] = {
#include "assets/textures/parameter_static/map32.rgba32.inc.c"
};

u64 g32CompassIconTex[] = {
#include "assets/textures/parameter_static/compass32.rgba32.inc.c"
};
