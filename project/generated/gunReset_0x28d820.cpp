#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gunReset
// Address: 0x28d820 - 0x28d828
void gunReset_0x28d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunReset_0x28d820");
#endif

    ctx->pc = 0x28d820u;

    // 0x28d820: 0x80a3606  j           func_28D818
    ctx->pc = 0x28D820u;
    ctx->pc = 0x28D818u;
    gunRestart_0x28d818(rdram, ctx, runtime); return;
    ctx->pc = 0x28D828u;
}
