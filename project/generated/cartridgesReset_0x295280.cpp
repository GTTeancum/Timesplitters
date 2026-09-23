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

// Function: cartridgesReset
// Address: 0x295280 - 0x295288
void cartridgesReset_0x295280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cartridgesReset_0x295280");
#endif

    ctx->pc = 0x295280u;

    // 0x295280: 0x80a549a  j           func_295268
    ctx->pc = 0x295280u;
    ctx->pc = 0x295268u;
    cartridgesRestart_0x295268(rdram, ctx, runtime); return;
    ctx->pc = 0x295288u;
}
