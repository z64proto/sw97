#include "global.h"

// ------------------------------ Debug Save Data ------------------------------
static SavePlayerData sDebugSavePlayerData = {
    { 'Z', 'E', 'L', 'D', 'A', 'Z' },                   // newf
    0,                                                  // deaths
    { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E }, // playerName ( "LINK" )
    0,                                                  // n64ddFlag
    HEART_AMOUNT(8),                                    // healthCapacity
    HEART_AMOUNT(8),                                    // health
    0,                                                  // magicLevel
    0x30,                                               // magic
    0,                                                  // rupees
    8,                                                  // swordHealth
    0,                                                  // naviTimer
    0,                                                  // magicAcquired
    0,                                                  // unk_1F
    0,                                                  // doubleMagic
    0,                                                  // doubleDefense
    1, // 0,                                                  // bgsFlag
    0, // ocarinaGameReward
    {
        { ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE }, // buttonItems
        { SW_SLOT_NONE, SW_SLOT_NONE, SW_SLOT_NONE },            // cButtonSlots
        0,                                              // equipment
    },                                                  // childEquips
    {
        { ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE }, // buttonItems
        { SW_SLOT_NONE, SW_SLOT_NONE, SW_SLOT_NONE },            // cButtonSlots
        0,                                              // equipment
    },                                                  // adultEquips
    0,                                                  // unk_38
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // unk_3C
    0x51,                                               // savedSceneNum
};

static ItemEquips sDebugSaveEquips = {
    { ITEM_SWORD_MASTER, ITEM_BOW, ITEM_BOMB, ITEM_OCARINA_TIME }, // buttonItems
    { SW_SLOT_BOW, SW_SLOT_BOMB, SW_SLOT_OCARINA },                         // cButtonSlots
    0x1122,                                                        // equipment
};

static Inventory sDebugSaveInventory = {
    {
        ITEM_STICK,      ITEM_NUT,          ITEM_BOMB,    ITEM_BOW,        ITEM_ARROW_FIRE,   ITEM_DINS_FIRE,
        ITEM_SLINGSHOT,  ITEM_OCARINA_TIME, ITEM_BOMBCHU, ITEM_HOOKSHOT,   ITEM_ARROW_ICE,    ITEM_FARORES_WIND,
        ITEM_BOOMERANG,  ITEM_LENS,         ITEM_BEAN,    ITEM_HAMMER,     ITEM_ARROW_LIGHT,  ITEM_NAYRUS_LOVE,
        ITEM_POCKET_EGG, ITEM_LETTER_ZELDA, ITEM_BOTTLE,  ITEM_POTION_RED, ITEM_POTION_GREEN, ITEM_FAIRY,
    },                                                              // items
    { 50, 10, 16, 16, 1, 1, 20, 1, 16, 1, 1, 1, 1, 1, 1, 1 },       // ammo
    0x7777,                                                         // equipment
    0x124289,                                                       // upgrades
    0x1FFFFFF,                                                      // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // dungeonItems
    { 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8 },    // dungeonKeys
    0,                                                              // defenseHearts
    0,                                                              // gsTokens
};

static u16 sDebugSaveChecksum = 0;

// ------------------------------ Space World Save Data ------------------------------

static u16 sSWChecksum = 0;

static SavePlayerData sSWPlayerData = {
    { '\0', '\0', '\0', '\0', '\0', '\0' },             // newf
    0,                                                  // deaths
    { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E }, // playerName
    0,                                                  // n64ddFlag
    HEART_AMOUNT(8),                                    // healthCapacity
    HEART_AMOUNT(8),                                    // defense
    0,                                                  // magicLevel
    0x30,                                               // magic
    0,                                                  // rupees
    8, // 0,                                                  // swordHealth
    0, // naviTimer
    0, // magicAcquired
    0, // unk_1F
    0, // doubleMagic
    0, // doubleDefense
    1, // 0,                                                  // bgsFlag
    0, // ocarinaGameReward
    {
        { ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE }, // buttonItems
        { SW_SLOT_NONE, SW_SLOT_NONE, SW_SLOT_NONE },            // cButtonSlots
        0,                                              // equipment
    },                                                  // childEquips
    {
        { ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE }, // buttonItems
        { SW_SLOT_NONE, SW_SLOT_NONE, SW_SLOT_NONE },            // cButtonSlots
        0,                                              // equipment
    },                                                  // adultEquips
    0,                                                  // unk_38
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // unk_3C
    0x34,                                               // savedSceneNum
};

// ================================= Child Default =================================

static ItemEquips sChildEquips = {
    { ITEM_SWORD_KOKIRI, ITEM_STICK, ITEM_NUT, ITEM_BOOMERANG }, // buttonItems
    { SW_SLOT_STICK, SW_SLOT_NUT, SW_SLOT_BOOMERANG },                    // cButtonSlots
    0x1111,                                                      // equipment
};

static Inventory sChildInventory = {
    { ITEM_STICK,     ITEM_NUT, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      ITEM_BOOMERANG, 0xFF,     0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }, // items
    { 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                                      // ammo
    0x1111,                                                                                   // equipment
    0x120200,                                                                                 // upgrades
    0,                                                                                        // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                           // dungeonItems
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    }, // dungeonKeys
    0, // defenseHearts
    0, // gsTokens
};

// ================================= Child DC/DMT =================================

static ItemEquips sChildDCEquips = {
    { ITEM_SWORD_KOKIRI, ITEM_STICK, ITEM_NUT, ITEM_SLINGSHOT }, // buttonItems
    { SW_SLOT_STICK, SW_SLOT_NUT, SW_SLOT_SLINGSHOT },                    // cButtonSlots
    0x1111,                                                      // equipment
};

static Inventory sChildDCInventory = {
    { ITEM_STICK, ITEM_NUT, 0xFF, 0xFF, 0xFF, 0xFF,
      ITEM_SLINGSHOT, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      ITEM_BOOMERANG, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }, // items
    { 1, 10, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                                               // ammo
    0x1111,                                                                                             // equipment
    0x124200,                                                                                           // upgrades
    0,                                                                                                  // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                                     // dungeonItems
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    }, // dungeonKeys
    0, // defenseHearts
    0, // gsTokens
};

// ================================= Child Castle =================================

static ItemEquips sChildCastleEquips = {
    { ITEM_SWORD_KOKIRI, ITEM_NONE, ITEM_NONE, ITEM_NONE }, // buttonItems
    { SW_SLOT_NONE, SW_SLOT_NONE, SW_SLOT_NONE },                    // cButtonSlots
    0x1111,                                                 // equipment
};

static Inventory sChildCastleInventory = {
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }, // items
    { 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                        // ammo
    0x1111,                                                                     // equipment
    0x120200,                                                                   // upgrades
    0,                                                                          // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },             // dungeonItems
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    }, // dungeonKeys
    0, // defenseHearts
    0, // gsTokens
};

// ================================= Child Gohma =================================

static ItemEquips sChildGohmaEquips = {
    { ITEM_SWORD_KOKIRI, ITEM_STICK, ITEM_NUT, ITEM_SLINGSHOT }, // buttonItems
    { SW_SLOT_STICK, SW_SLOT_NUT, SW_SLOT_SLINGSHOT },                    // cButtonSlots
    0x1111,                                                      // equipment
};

static Inventory sChildGohmaInventory = {
    { ITEM_STICK, ITEM_NUT, 0xFF, 0xFF, 0xFF, 0xFF,
      ITEM_SLINGSHOT, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      ITEM_BOOMERANG, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }, // items
    { 1, 10, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                                               // ammo
    0x1111,                                                                                             // equipment
    0x124200,                                                                                           // upgrades
    0,                                                                                                  // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                                     // dungeonItems
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    }, // dungeonKeys
    0, // defenseHearts
    0, // gsTokens
};

// ================================= Child King Dodongo =================================

static ItemEquips sChildKDEquips = {
    { ITEM_SWORD_KOKIRI, ITEM_BOMB, ITEM_BOOMERANG, ITEM_SLINGSHOT }, // buttonItems
    { SW_SLOT_BOMB, SW_SLOT_BOOMERANG, SW_SLOT_SLINGSHOT },                    // cButtonSlots
    0x1111,                                                           // equipment
};

static Inventory sChildKDInventory = {
    { ITEM_STICK, ITEM_NUT, ITEM_BOMB, 0xFF, 0xFF, 0xFF,
      ITEM_SLINGSHOT, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      ITEM_BOOMERANG, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }, // items
    { 1, 10, 16, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                                                   // ammo
    0x1111,                                                         // equipment
    0x124208,                                                       // upgrades
    0,                                                              // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // dungeonItems
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    }, // dungeonKeys
    0, // defenseHearts
    0, // gsTokens
};

// ================================= Adult =================================

static ItemEquips sAdultEquips = {
    { ITEM_SWORD_MASTER, ITEM_BOW, ITEM_BOMB, ITEM_HAMMER }, // buttonItems
    { SW_SLOT_BOW, SW_SLOT_BOMB, SW_SLOT_HAMMER },                    // cButtonSlots
    0x1122,                                                  // equipment
};

static Inventory sAdultInventory = {
    {
        0xFF, 0xFF, ITEM_BOMB, ITEM_BOW, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, ITEM_HAMMER, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    },                                                              // items
    { 1, 10, 16, 16, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0 },         // ammo
    0x1126,                                                         // equipment
    0x125A09,                                                       // upgrades
    0,                                                              // questItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // dungeonItems
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    }, // dungeonKeys
    0, // defenseHearts
    0, // gsTokens
};
