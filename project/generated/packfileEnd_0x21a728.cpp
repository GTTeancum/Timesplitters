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

// Function: packfileEnd
// Address: 0x21a728 - 0x21a74c
void packfileEnd_0x21a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("packfileEnd_0x21a728");
#endif

    ctx->pc = 0x21a728u;

    // 0x21a728: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x21a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x21a72c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A72Cu;
    {
        const bool branch_taken_0x21a72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A72Cu;
        // 0x21a730: 0x8f82b6b8  lw          $v0, -0x4948($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a72c) {
            ctx->pc = 0x21A744u;
            goto label_21a744;
        }
    }
    ctx->pc = 0x21A734u;
    // 0x21a734: 0x8f83b6bc  lw          $v1, -0x4944($gp)
    ctx->pc = 0x21a734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948540)));
    // 0x21a738: 0xaf809d58  sw          $zero, -0x62A8($gp)
    ctx->pc = 0x21a738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942040), GPR_U32(ctx, 0));
    // 0x21a73c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a740: 0xaf82b6b8  sw          $v0, -0x4948($gp)
    ctx->pc = 0x21a740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948536), GPR_U32(ctx, 2));
label_21a744:
    // 0x21a744: 0x3e00008  jr          $ra
    ctx->pc = 0x21A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A74Cu;
}
