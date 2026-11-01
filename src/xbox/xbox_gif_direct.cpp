#include "xbox_gif_direct.h"

// The decoder itself is a template in xbox_gif_direct.h, instantiated in the
// patched GS front end (tools/patch_gif_direct.py). Here: its counters and
// the run buffer (18 KB), which exist only with TS_GIF_DIRECT=1.
XboxGifDirectStats g_xboxGifDirectStats;

#if TS_GIF_DIRECT
namespace
{
    xbox_gif_direct::Scratch s_scratch;
}

xbox_gif_direct::Scratch &xbox_gif_direct::scratch()
{
    return s_scratch;
}
#endif
