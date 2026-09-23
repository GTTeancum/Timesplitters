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

// Function: emRestart
// Address: 0x2b6ac8 - 0x2b6ad0
void emRestart_0x2b6ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emRestart_0x2b6ac8");
#endif

    ctx->pc = 0x2b6ac8u;

    // 0x2b6ac8: 0x80adaaa  j           func_2B6AA8
    ctx->pc = 0x2B6AC8u;
    ctx->pc = 0x2B6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6AC8u;
    // 0x2b6acc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AA8u;
    emSelectTexBuffer_0x2b6aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B6AD0u;
}
