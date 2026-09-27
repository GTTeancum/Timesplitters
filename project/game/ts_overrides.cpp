// TimeSplitters-specific runtime overrides.
#include "game_overrides.h"

#include <cstdlib>

namespace
{
    // The game links its own copy of libkernel's SIF RPC client. Its calls
    // write SIF command packets into IOP memory, but nothing on the emulated
    // IOP side reads those packets, so RPC servers running as IOP guest code
    // (the FRD music stream driver, sid 0x534A4521) never saw a request and
    // the game had no music. TS_SIF_RPC_BRIDGE=1 routes bind/call through the
    // runtime's SIF RPC bridge, which dispatches to IOP guest servers. It is
    // off by default: the driver then streams through the emulated SPU2 but
    // does not yet play correct audio (see KNOWN-ISSUES.md).
    void applyTimeSplittersOverrides(PS2Runtime &runtime)
    {
        const char *bridge = std::getenv("TS_SIF_RPC_BRIDGE");
        if (!(bridge && *bridge == '1'))
            return;
        ps2_game_overrides::bindAddressHandler(runtime, 0x2D2B58u, "sceSifBindRpc");
        ps2_game_overrides::bindAddressHandler(runtime, 0x2D2D08u, "sceSifCallRpc");
    }
}

PS2_REGISTER_GAME_OVERRIDE("TimeSplitters SIF RPC", "SLUS_200.90", 0u, 0u, applyTimeSplittersOverrides)
