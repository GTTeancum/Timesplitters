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

// Function: weatherRestart
// Address: 0x2a8018 - 0x2a802c
void weatherRestart_0x2a8018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherRestart_0x2a8018");
#endif

    ctx->pc = 0x2a8018u;

    // 0x2a8018: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a8018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a801c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a801cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8020: 0x2484a6d0  addiu       $a0, $a0, -0x5930
    ctx->pc = 0x2a8020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944464));
    // 0x2a8024: 0x80b9583  j           func_2E560C
    ctx->pc = 0x2A8024u;
    ctx->pc = 0x2A8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8024u;
    // 0x2a8028: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x2A802Cu;
}
