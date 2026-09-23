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

// Function: hudReset
// Address: 0x2b0988 - 0x2b0990
void hudReset_0x2b0988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudReset_0x2b0988");
#endif

    ctx->pc = 0x2b0988u;

    // 0x2b0988: 0x80ac224  j           func_2B0890
    ctx->pc = 0x2B0988u;
    ctx->pc = 0x2B0890u;
    hudRestart_0x2b0890(rdram, ctx, runtime); return;
    ctx->pc = 0x2B0990u;
}
