// Native FX route for the 0x3FE0 kicks (make TS_NATIVE_FX=1, Xbox only):
// the pending kicks, their flush to the GS and the counters. The decoder
// and GS sides are in the patched copies (tools/patch_native_fx.py); see
// xbox_native_fx.h.
#include "xbox_native_fx.h"

#if TS_NATIVE_FX
#include "runtime/gs/gs_frontend.h"

XboxNativeFxPending g_xboxNativeFx;
XboxNativeFxStats g_xboxNativeFxStats;

namespace
{
    // PACKED, NLOOP 0, EOP, NREG 1, REGS NOP: nothing for a GS that does
    // not know it (the hook knows it by its address).
    alignas(16) const uint8_t kToken[16] = {0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
                                            0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#if !TS_GIF_DIRECT
    // The run buffer (the direct GIF decoder's 128-primitive one is not
    // built): 16 primitives, 1.9 KB, zeroed storage (GSVertex's initialisers
    // would put an array of it in the image's data); a longer run goes on
    // as the next one.
    constexpr uint32_t kRunPrims = 16u;
    alignas(GSVertex) uint8_t g_run[kRunPrims * 3u * sizeof(GSVertex)];
#endif
}

const uint8_t *xboxNativeFxToken()
{
    return kToken;
}

#if !TS_GIF_DIRECT
GSVertex *xboxNativeFxRunBuffer(uint32_t &capacity)
{
    capacity = kRunPrims;
    return reinterpret_cast<GSVertex *>(g_run); // the decoder writes each vertex before reading it
}
#endif

void xboxNativeFxFlush()
{
    XboxNativeFxPending &p = g_xboxNativeFx;
    if (p.count == 0u || !p.gs)
    {
        p.count = 0u;
        return;
    }
    ++g_xboxNativeFxStats.flushes;
    g_xboxNativeFxStats.spans += p.count;
    // The patched GS takes the spans on PATH1 (its hook clears nothing: the
    // count is cleared here once it returns).
    p.gs->processGIFPacket(kToken, 16u, GifPathId::Path1);
    p.count = 0u;
}
#endif
