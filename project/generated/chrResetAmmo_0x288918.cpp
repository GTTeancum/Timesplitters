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

// Function: chrResetAmmo
// Address: 0x288918 - 0x288928
void chrResetAmmo_0x288918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrResetAmmo_0x288918");
#endif

    ctx->pc = 0x288918u;

    // 0x288918: 0x2484026c  addiu       $a0, $a0, 0x26C
    ctx->pc = 0x288918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
    // 0x28891c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288920: 0x80b9583  j           func_2E560C
    ctx->pc = 0x288920u;
    ctx->pc = 0x288924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288920u;
    // 0x288924: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x288928u;
}
