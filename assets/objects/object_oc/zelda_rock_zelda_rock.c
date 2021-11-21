#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "zelda_rock_zelda_rock.h"

static Vtx zelda_rock_zelda_rockVtx_000058[4];

Gfx orock_model[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ostone_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&zelda_rock_zelda_rockVtx_000058[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx zelda_rock_zelda_rockVtx_000058[] = {
    #include "../assets/objects/object_oc/zelda_rock_zelda_rockVtx_000058.vtx.inc"
};

u64 ostone_txt[] = {
    #include "assets/objects/object_oc/ostone_txt.rgb5a1.inc.c"
};

static u8 possiblePadding_000898[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


