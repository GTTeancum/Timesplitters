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

// Function: setup_pageGfx
// Address: 0x20f5d8 - 0x20f5e0
void setup_pageGfx_0x20f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setup_pageGfx_0x20f5d8");
#endif

    ctx->pc = 0x20f5d8u;

    // 0x20f5d8: 0x8083d5c  j           func_20F570
    ctx->pc = 0x20F5D8u;
    ctx->pc = 0x20F570u;
    setup_vars_0x20f570(rdram, ctx, runtime); return;
    ctx->pc = 0x20F5E0u;
}
