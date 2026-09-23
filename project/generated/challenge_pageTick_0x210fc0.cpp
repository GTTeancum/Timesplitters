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

// Function: challenge_pageTick
// Address: 0x210fc0 - 0x210fc8
void challenge_pageTick_0x210fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challenge_pageTick_0x210fc0");
#endif

    ctx->pc = 0x210fc0u;

    // 0x210fc0: 0x808422e  j           func_2108B8
    ctx->pc = 0x210FC0u;
    ctx->pc = 0x2108B8u;
    tickRetryQuit_0x2108b8(rdram, ctx, runtime); return;
    ctx->pc = 0x210FC8u;
}
