#include "global.h"

// Allocate 660kb for decompressing files (the largest file currently is around 640kb compressed, but add a bit more
// space just in case)
u8 gLZODecodeBuf[1024 * 660];
