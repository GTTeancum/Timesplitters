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

// Function: bcopy
// Address: 0x2e4708 - 0x2e4718
void bcopy_0x2e4708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bcopy_0x2e4708");
#endif

    ctx->pc = 0x2e4708u;

    // 0x2e4708: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e4708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e470c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4710: 0x80b9542  j           func_2E5508
    ctx->pc = 0x2E4710u;
    ctx->pc = 0x2E4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4710u;
    // 0x2e4714: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5508u;
    memmove_0x2e5508(rdram, ctx, runtime); return;
    ctx->pc = 0x2E4718u;
}
