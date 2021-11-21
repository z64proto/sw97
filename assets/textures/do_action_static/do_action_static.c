#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "do_action_static.h"

#ifndef USE_JP_DO_ACT 
u64 gAttackDoActionENGTex[] = {
#include "assets/textures/do_action_static/attack_eng.ia4.inc.c"
};

u64 gCheckDoActionENGTex[] = {
#include "assets/textures/do_action_static/check_eng.ia4.inc.c"
};

u64 gEnterDoActionENGTex[] = {
#include "assets/textures/do_action_static/enter_eng.ia4.inc.c"
};

u64 gReturnDoActionENGTex[] = {
#include "assets/textures/do_action_static/return_eng.ia4.inc.c"
};

u64 gOpenDoActionENGTex[] = {
#include "assets/textures/do_action_static/open_eng.ia4.inc.c"
};

u64 gJumpDoActionENGTex[] = {
#include "assets/textures/do_action_static/jump_eng.ia4.inc.c"
};

u64 gDecideDoActionENGTex[] = {
#include "assets/textures/do_action_static/decide_eng.ia4.inc.c"
};

u64 gDiveDoActionENGTex[] = {
#include "assets/textures/do_action_static/dive_eng.ia4.inc.c"
};

// u64 gFasterDoActionENGTex[] = {
// #include "assets/textures/do_action_static/faster_eng.ia4.inc.c"
// };
// Replace "Faster" with "Whip" for Spaceworld
u64 gDoActionWhipENGTex[] = {
#include "assets/textures/do_action_static/sw/whip_eng.ia4.inc.c"
};

u64 gThrowDoActionENGTex[] = {
#include "assets/textures/do_action_static/throw_eng.ia4.inc.c"
};

u64 gUnusedNaviDoActionENGTex[] = {
#include "assets/textures/do_action_static/navi_unused_eng.i4.inc.c"
};

u64 gClimbDoActionENGTex[] = {
#include "assets/textures/do_action_static/climb_eng.ia4.inc.c"
};

u64 gDropDoActionENGTex[] = {
#include "assets/textures/do_action_static/drop_eng.ia4.inc.c"
};

u64 gDownDoActionENGTex[] = {
#include "assets/textures/do_action_static/down_eng.ia4.inc.c"
};

u64 gSaveDoActionENGTex[] = {
#include "assets/textures/do_action_static/save_eng.ia4.inc.c"
};

u64 gSpeakDoActionENGTex[] = {
#include "assets/textures/do_action_static/speak_eng.ia4.inc.c"
};

u64 gNextDoActionENGTex[] = {
#include "assets/textures/do_action_static/next_eng.ia4.inc.c"
};

u64 gGrabDoActionENGTex[] = {
#include "assets/textures/do_action_static/grab_eng.ia4.inc.c"
};

u64 gStopDoActionENGTex[] = {
#include "assets/textures/do_action_static/stop_eng.ia4.inc.c"
};

u64 gPutAwayDoActionENGTex[] = {
#include "assets/textures/do_action_static/put_away_eng.ia4.inc.c"
};

u64 gReelDoActionENGTex[] = {
#include "assets/textures/do_action_static/reel_eng.ia4.inc.c"
};

u64 gNum1DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_1_eng.ia4.inc.c"
};

u64 gNum2DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_2_eng.ia4.inc.c"
};

u64 gNum3DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_3_eng.ia4.inc.c"
};

u64 gNum4DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_4_eng.ia4.inc.c"
};

u64 gNum5DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_5_eng.ia4.inc.c"
};

u64 gNum6DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_6_eng.ia4.inc.c"
};

u64 gNum7DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_7_eng.ia4.inc.c"
};

u64 gNum8DoActionENGTex[] = {
#include "assets/textures/do_action_static/num_8_eng.ia4.inc.c"
};

// extras for space world
u64 gDoActionResetENGTex[] = {
#include "assets/textures/do_action_static/sw/reset_eng.ia4.inc.c"
};

u64 gDoActionRideENGTex[] = {
#include "assets/textures/do_action_static/sw/ride_eng.ia4.inc.c"
};

u64 gDoActionViewENGTex[] = {
#include "assets/textures/do_action_static/sw/view_eng.ia4.inc.c"
};
#else
u64 gAttackDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/attack_eng.ia4.inc.c"
};

u64 gCheckDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/check_eng.ia4.inc.c"
};

u64 gEnterDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/enter_eng.ia4.inc.c"
};

u64 gReturnDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/return_eng.ia4.inc.c"
};

u64 gOpenDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/open_eng.ia4.inc.c"
};

u64 gJumpDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/jump_eng.ia4.inc.c"
};

u64 gDecideDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/decide_eng.ia4.inc.c"
};

u64 gDiveDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/dive_eng.ia4.inc.c"
};

// u64 gFasterDoActionENGTex[] = {
// #include "assets/textures/do_action_jp_static/faster_eng.ia4.inc.c"
// };
// Replace "Faster" with "Whip" for Spaceworld
u64 gDoActionWhipENGTex[] = {
#include "assets/textures/do_action_jp_static/sw/whip_eng.ia4.inc.c"
};

u64 gThrowDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/throw_eng.ia4.inc.c"
};

u64 gUnusedNaviDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/navi_unused_eng.i4.inc.c"
};

u64 gClimbDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/climb_eng.ia4.inc.c"
};

u64 gDropDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/drop_eng.ia4.inc.c"
};

u64 gDownDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/down_eng.ia4.inc.c"
};

u64 gSaveDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/save_eng.ia4.inc.c"
};

u64 gSpeakDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/speak_eng.ia4.inc.c"
};

u64 gNextDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/next_eng.ia4.inc.c"
};

u64 gGrabDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/grab_eng.ia4.inc.c"
};

u64 gStopDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/stop_eng.ia4.inc.c"
};

u64 gPutAwayDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/put_away_eng.ia4.inc.c"
};

u64 gReelDoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/reel_eng.ia4.inc.c"
};

u64 gNum1DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_1_eng.ia4.inc.c"
};

u64 gNum2DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_2_eng.ia4.inc.c"
};

u64 gNum3DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_3_eng.ia4.inc.c"
};

u64 gNum4DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_4_eng.ia4.inc.c"
};

u64 gNum5DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_5_eng.ia4.inc.c"
};

u64 gNum6DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_6_eng.ia4.inc.c"
};

u64 gNum7DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_7_eng.ia4.inc.c"
};

u64 gNum8DoActionENGTex[] = {
#include "assets/textures/do_action_jp_static/num_8_eng.ia4.inc.c"
};

// extras for space world
u64 gDoActionResetENGTex[] = {
#include "assets/textures/do_action_jp_static/sw/reset_eng.ia4.inc.c"
};

u64 gDoActionRideENGTex[] = {
#include "assets/textures/do_action_jp_static/sw/ride_eng.ia4.inc.c"
};

u64 gDoActionViewENGTex[] = {
#include "assets/textures/do_action_jp_static/sw/view_eng.ia4.inc.c"
};
#endif
