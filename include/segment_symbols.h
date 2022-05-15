#ifndef _SEGMENT_SYMBOLS_H_
#define _SEGMENT_SYMBOLS_H_

#include "z64.h"

#define DECLARE_SEGMENT(name)          \
    extern u8 _##name##SegmentStart[]; \
    extern u8 _##name##SegmentEnd[];

#define DECLARE_ROM_SEGMENT(name)         \
    extern u8 _##name##SegmentRomStart[]; \
    extern u8 _##name##SegmentRomEnd[];

#define DECLARE_TEXT_SEGMENT(name)         \
    extern u8 _##name##SegmentTextStart[]; \
    extern u8 _##name##SegmentTextEnd[];

#define DECLARE_DATA_SEGMENT(name)         \
    extern u8 _##name##SegmentDataStart[]; \
    extern u8 _##name##SegmentDataEnd[];

#define DECLARE_RODATA_SEGMENT(name)         \
    extern u8 _##name##SegmentRoDataStart[]; \
    extern u8 _##name##SegmentRoDataEnd[];

#define DECLARE_BSS_SEGMENT(name)         \
    extern u8 _##name##SegmentBssStart[]; \
    extern u8 _##name##SegmentBssEnd[];

#define DECLARE_SEGMENTS(name)   \
    DECLARE_SEGMENT(name)        \
    DECLARE_ROM_SEGMENT(name)    \
    DECLARE_TEXT_SEGMENT(name)   \
    DECLARE_DATA_SEGMENT(name)   \
    DECLARE_RODATA_SEGMENT(name) \
    DECLARE_BSS_SEGMENT(name)

// Generated from spec by build
#include "include/segment_symbols.h"

#endif
