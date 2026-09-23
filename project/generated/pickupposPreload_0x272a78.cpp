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

// Function: pickupposPreload
// Address: 0x272a78 - 0x272a88
void pickupposPreload_0x272a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupposPreload_0x272a78");
#endif

    ctx->pc = 0x272a78u;

    // 0x272a78: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x272a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x272a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a80: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x272A80u;
    ctx->pc = 0x272A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A80u;
    // 0x272a84: 0x24848028  addiu       $a0, $a0, -0x7FD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x272A88u;
}
