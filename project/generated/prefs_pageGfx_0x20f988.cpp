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

// Function: prefs_pageGfx
// Address: 0x20f988 - 0x20f990
void prefs_pageGfx_0x20f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prefs_pageGfx_0x20f988");
#endif

    ctx->pc = 0x20f988u;

    // 0x20f988: 0x8083e36  j           func_20F8D8
    ctx->pc = 0x20F988u;
    ctx->pc = 0x20F8D8u;
    prefs_vars_0x20f8d8(rdram, ctx, runtime); return;
    ctx->pc = 0x20F990u;
}
