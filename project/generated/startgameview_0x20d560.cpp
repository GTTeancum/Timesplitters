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

// Function: startgameview
// Address: 0x20d560 - 0x20d568
void startgameview_0x20d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startgameview_0x20d560");
#endif

    ctx->pc = 0x20d560u;

    // 0x20d560: 0x809f8c4  j           func_27E310
    ctx->pc = 0x20D560u;
    ctx->pc = 0x20D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D560u;
    // 0x20d564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E310u;
    camSetMode_0x27e310(rdram, ctx, runtime); return;
    ctx->pc = 0x20D568u;
}
