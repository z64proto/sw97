#include "global.h"

#define TITLED_SCENE(name, title, unk_10, config, unk_12)                                            \
    {                                                                                                \
        (u32) _##name##SegmentRomStart, (u32)_##name##SegmentRomEnd, (u32)_##title##SegmentRomStart, \
            (u32)_##title##SegmentRomEnd, unk_10, config, unk_12, 0                                  \
    }

#define UNTITLED_SCENE(name, unk_10, config, unk_12) \
    { (u32) _##name##SegmentRomStart, (u32)_##name##SegmentRomEnd, 0, 0, unk_10, config, unk_12, 0 }

Scene gSceneTable[] = {
    /* 0x00 */ UNTITLED_SCENE(fstdan_scene, 0, 0, 1),
    /* 0x01 */ UNTITLED_SCENE(dodongos_cavern_scene, 0, 4, 1),
    /* 0x02 */ UNTITLED_SCENE(syotes_old_scene, 0, 0, 0),
    /* 0x03 */ UNTITLED_SCENE(syotes2_old_scene, 0, 0, 0),
    /* 0x04 */ UNTITLED_SCENE(test_map_scene, 0, 15, 2),
    /* 0x05 */ UNTITLED_SCENE(unfinished_deku_tree_scene, 0, 0, 1),
    /* 0x06 */ UNTITLED_SCENE(unfinished_gohma_scene, 0, 0, 1),
    /* 0x07 */ UNTITLED_SCENE(old_depth_test_scene, 0, 0, 0),
    /* 0x08 */ UNTITLED_SCENE(i_shop_scene, 0, 0, 0),
    /* 0x09 */ UNTITLED_SCENE(hyrule_field_scene, 0, 1, 0),
    /* 0x0A */ UNTITLED_SCENE(old_kakariko_village_scene, 0, 0, 0),
    /* 0x0B */ UNTITLED_SCENE(old_graveyard_scene, 0, 0, 0),
    /* 0x0C */ UNTITLED_SCENE(old_lost_woods_scene, 0, 9, 0),
    /* 0x0D */ UNTITLED_SCENE(kokiri_forest_scene, 0, 10, 0),
    /* 0x0E */ UNTITLED_SCENE(old_sacred_forest_meadow_scene, 0, 0, 0),
    /* 0x0F */ UNTITLED_SCENE(old_lake_hylia_scene, 0, 0, 0),
    /* 0x10 */ UNTITLED_SCENE(old_zoras_river_scene, 0, 0, 0),
    /* 0x11 */ UNTITLED_SCENE(old_pond_scene, 0, 0, 0),
    /* 0x12 */ UNTITLED_SCENE(gerudo_valley_scene, 0, 7, 0),
    /* 0x13 */ UNTITLED_SCENE(hyrule_castle_scene, 0, 2, 0),
    /* 0x14 */ UNTITLED_SCENE(death_mountain_trail_scene, 0, 0, 0),
    /* 0x15 */ UNTITLED_SCENE(death_mountain_crater_scene, 0, 13, 0),
    /* 0x16 */ UNTITLED_SCENE(unk_0x16_scene, 0, 0, 0),
    /* 0x17 */ UNTITLED_SCENE(unk_0x17_scene, 0, 0, 0),
    /* 0x18 */ UNTITLED_SCENE(pr_market_1_scene, 0, 0, 0),
    /* 0x19 */ UNTITLED_SCENE(pr_market_2_scene, 0, 0, 0),
    /* 0x1A */ UNTITLED_SCENE(fire_temple_scene, 0, 8, 1),
    /* 0x1B */ UNTITLED_SCENE(forest_temple_scene, 0, 0, 1),
    /* 0x1C */ UNTITLED_SCENE(archery_scene, 0, 0, 0),
    /* 0x1D */ UNTITLED_SCENE(old_sasatest_scene, 0, 0, 0),
    /* 0x1E */ UNTITLED_SCENE(pr_behind_tot_scene, 0, 0, 0),
    /* 0x1F */ UNTITLED_SCENE(old_testroom_scene, 0, 0, 0),
    /* 0x20 */ UNTITLED_SCENE(deku_tree_scene, 0, 3, 1),
    /* 0x21 */ UNTITLED_SCENE(jabu_test_scene, 0, 11, 0),
    /* 0x22 */ UNTITLED_SCENE(chamber_of_sages_scene, 0, 0, 0),
    /* 0x23 */ UNTITLED_SCENE(pr_outside_tot_scene, 0, 0, 0),
    /* 0x24 */ UNTITLED_SCENE(fairy_fountain_scene, 0, 0, 0),
    /* 0x25 */ UNTITLED_SCENE(temple_of_time_scene, 0, 5, 0),
    /* 0x26 */ UNTITLED_SCENE(unfinished_forest_temple_scene, 0, 0, 1),
    /* 0x27 */ UNTITLED_SCENE(lod_test_scene, 0, 0, 0),
    /* 0x28 */ UNTITLED_SCENE(old_sutaru_scene, 0, 0, 0),
    /* 0x29 */ UNTITLED_SCENE(unfinished_fire_temple_scene, 0, 0, 1),
    /* 0x2A */ UNTITLED_SCENE(pr_links_house_scene, 0, 0, 0),
    /* 0x2B */ UNTITLED_SCENE(pr_kokiri_house_1_scene, 0, 0, 0),
    /* 0x2C */ UNTITLED_SCENE(unk_0x2C_scene, 0, 14, 0),
    /* 0x2D */ UNTITLED_SCENE(old_hyrule_field_scene, 0, 0, 0),
    /* 0x2E */ UNTITLED_SCENE(unk_0x2E_scene, 0, 0, 0),
    /* 0x2F */ UNTITLED_SCENE(water_temple_scene, 0, 6, 1),
    /* 0x30 */ UNTITLED_SCENE(pr_kokiri_house_2_scene, 0, 0, 0),
    /* 0x31 */ UNTITLED_SCENE(grottos_scene, 0, 12, 0),
    /* 0x32 */ UNTITLED_SCENE(poe_race_scene, 0, 0, 1),
    /* 0x33 */ UNTITLED_SCENE(unk_0x33_scene, 0, 0, 0),
    /* 0x04 */ UNTITLED_SCENE(Spot04_OLD_SCENE, 0, 0, 0),
};
