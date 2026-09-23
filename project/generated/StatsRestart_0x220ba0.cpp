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

// Function: StatsRestart
// Address: 0x220ba0 - 0x220ba8
void StatsRestart_0x220ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatsRestart_0x220ba0");
#endif

    ctx->pc = 0x220ba0u;

    // 0x220ba0: 0x8088292  j           func_220A48
    ctx->pc = 0x220BA0u;
    ctx->pc = 0x220A48u;
    StatsReset_0x220a48(rdram, ctx, runtime); return;
    ctx->pc = 0x220BA8u;
}
