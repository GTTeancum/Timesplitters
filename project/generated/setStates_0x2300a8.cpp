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

// Function: setStates
// Address: 0x2300a8 - 0x2300b8
void setStates_0x2300a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setStates_0x2300a8");
#endif

    ctx->pc = 0x2300a8u;

    // 0x2300a8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2300a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2300ac: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x2300acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x2300b0: 0x80b9583  j           func_2E560C
    ctx->pc = 0x2300B0u;
    ctx->pc = 0x2300B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300B0u;
    // 0x2300b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x2300B8u;
}
