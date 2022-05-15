#ifndef _Z_EN_ELF_H_
#define _Z_EN_ELF_H_

#include "ultra64.h"
#include "global.h"
#include "overlays/actors/ovl_Elf_Msg/z_elf_msg.h"

struct EnElf;

typedef void (*EnElfActionFunc)(struct EnElf*, GlobalContext*);
typedef void (*EnElfUnkFunc)(struct EnElf*, GlobalContext*);

typedef struct EnElf {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ Vec3s jointTable[15];
    /* 0x01EA */ Vec3s morphTable[15];
    /* 0x0244 */ Color_RGBAf innerColor;
    /* 0x0254 */ Color_RGBAf outerColor;
    /* 0x0264 */ LightInfo lightInfoGlow;
    /* 0x0274 */ LightNode* lightNodeGlow;
    /* 0x0278 */ LightInfo lightInfoNoGlow;
    /* 0x0288 */ LightNode* lightNodeNoGlow;
    /* 0x028C */ Vec3f unk_28C;
    /* 0x0298 */ ElfMsg* elfMsg;
    /* 0x029C */ f32 color_morf_ratio;
    /* 0x02A0 */ f32 max_speedf;
    /* 0x02A4 */ f32 kankyo;
    /* 0x02A8 */ s16 active_mode;
    /* 0x02AA */ s16 rad_v;
    /* 0x02AC */ s16 rad_h;
    /* 0x02AE */ s16 speed_rad_v;
    /* 0x02B0 */ s16 speed_rad_h;
    /* 0x02B4 */ f32 radius_v;
    /* 0x02B8 */ f32 radius_h;
    /* 0x02BC */ s16 spin_angle;
    /* 0x02BE */ u16 timer;
    /* 0x02C0 */ s16 disp_counter;
    /* 0x02C2 */ s16 disappearTimer;
    /* 0x02C4 */ u16 fairyFlags;
    /* 0x02C6 */ u8 color_change;
    /* 0x02C7 */ u8 sound_stop;
    /* 0x02C8 */ EnElfUnkFunc revise;
    /* 0x02CC */ EnElfActionFunc actionFunc;
                 u8 spawnMode;
                 u8 spiritFlag;
} EnElf; // size = 0x02D0

typedef enum {
    /* 0x00 */ FAIRY_NAVI,
    /* 0x01 */ FAIRY_REVIVE_BOTTLE,
    /* 0x02 */ FAIRY_HEAL_TIMED,
    /* 0x03 */ FAIRY_KOKIRI,
    /* 0x04 */ FAIRY_SPAWNER,
    /* 0x05 */ FAIRY_REVIVE_DEATH,
    /* 0x06 */ FAIRY_HEAL,
    /* 0x07 */ FAIRY_HEAL_BIG
} FairyType;

extern const ActorInit En_Elf_InitVars;

#endif
