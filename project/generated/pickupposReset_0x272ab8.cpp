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

// Function: pickupposReset
// Address: 0x272ab8 - 0x272ac0
void pickupposReset_0x272ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupposReset_0x272ab8");
#endif

    ctx->pc = 0x272ab8u;

    // 0x272ab8: 0x809caa2  j           func_272A88
    ctx->pc = 0x272AB8u;
    ctx->pc = 0x272A88u;
    pickupposRestart_0x272a88(rdram, ctx, runtime); return;
    ctx->pc = 0x272AC0u;
}
