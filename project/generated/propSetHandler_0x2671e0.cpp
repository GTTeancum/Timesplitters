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

// Function: propSetHandler
// Address: 0x2671e0 - 0x2671fc
void propSetHandler_0x2671e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propSetHandler_0x2671e0");
#endif

    ctx->pc = 0x2671e0u;

    // 0x2671e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2671e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2671e4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2671e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2671e8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2671e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2671ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2671ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671f0: 0xac670170  sw          $a3, 0x170($v1)
    ctx->pc = 0x2671f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 7));
    // 0x2671f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2671F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2671F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671F4u;
        // 0x2671f8: 0xac860168  sw          $a2, 0x168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2671F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2671FCu;
}
