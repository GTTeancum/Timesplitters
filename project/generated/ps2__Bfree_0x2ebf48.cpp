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

// Function: _Bfree
// Address: 0x2ebf48 - 0x2ebf74
void ps2__Bfree_0x2ebf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Bfree_0x2ebf48");
#endif

    ctx->pc = 0x2ebf48u;

    // 0x2ebf48: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBF48u;
    {
        const bool branch_taken_0x2ebf48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf48) {
            ctx->pc = 0x2EBF6Cu;
            goto label_2ebf6c;
        }
    }
    ctx->pc = 0x2EBF50u;
    // 0x2ebf50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ebf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ebf54: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2ebf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ebf58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ebf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ebf5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ebf60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ebf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ebf64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ebf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2ebf68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2ebf68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2ebf6c:
    // 0x2ebf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF74u;
}
