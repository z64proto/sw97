#include "global.h"

#define GAMESTATE_OVERLAY(name, init, destroy, size)                                                         \
    {                                                                                                        \
        NULL, (u32)_ovl_##name##SegmentRomStart, (u32)_ovl_##name##SegmentRomEnd, _ovl_##name##SegmentStart, \
            _ovl_##name##SegmentEnd, 0, init, destroy, 0, 0, 0, size                                         \
    }
#define GAMESTATE_OVERLAY_INTERNAL(init, destroy, size) \
    { NULL, 0, 0, NULL, NULL, 0, init, destroy, 0, 0, 0, size }

GameStateOverlay gGameStateOverlayTable[] = {
    GAMESTATE_OVERLAY_INTERNAL(TitleSetup_Init, TitleSetup_Destroy, sizeof(GameState)),
    GAMESTATE_OVERLAY(select, Select_Init, Select_Destroy, sizeof(SelectContext)),
    GAMESTATE_OVERLAY(title, Title_Init, Title_Destroy, sizeof(TitleContext)),
    GAMESTATE_OVERLAY_INTERNAL(Gameplay_Init, Gameplay_Destroy, sizeof(GlobalContext)),
    GAMESTATE_OVERLAY(opening, Opening_Init, Opening_Destroy, sizeof(OpeningContext)),
    GAMESTATE_OVERLAY(file_choose, FileSelect_Init, FileSelect_Destroy, 0x1CAE0),
    GAMESTATE_OVERLAY(disclaimer, Disclaimer_Init, Disclaimer_Destroy, sizeof(DisclaimerContext)),
};
