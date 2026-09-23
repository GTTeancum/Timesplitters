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

// Function: memLocalFree
// Address: 0x201e50 - 0x201e70
void memLocalFree_0x201e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memLocalFree_0x201e50");
#endif

    ctx->pc = 0x201e50u;

    // 0x201e50: 0x8f829a6c  lw          $v0, -0x6594($gp)
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941292)));
    // 0x201e54: 0x8f839a74  lw          $v1, -0x658C($gp)
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941300)));
    // 0x201e58: 0x8f849a70  lw          $a0, -0x6590($gp)
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941296)));
    // 0x201e5c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201e60: 0xaf829a74  sw          $v0, -0x658C($gp)
    ctx->pc = 0x201e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 2));
    // 0x201e64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201e68: 0x3e00008  jr          $ra
    ctx->pc = 0x201E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E68u;
        // 0x201e6c: 0xaf849a70  sw          $a0, -0x6590($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E70u;
}
