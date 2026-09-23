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

// Function: enemyReset
// Address: 0x2ba040 - 0x2ba048
void enemyReset_0x2ba040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyReset_0x2ba040");
#endif

    ctx->pc = 0x2ba040u;

    // 0x2ba040: 0x80ae75c  j           func_2B9D70
    ctx->pc = 0x2BA040u;
    ctx->pc = 0x2B9D70u;
    enemyRestart_0x2b9d70(rdram, ctx, runtime); return;
    ctx->pc = 0x2BA048u;
}
