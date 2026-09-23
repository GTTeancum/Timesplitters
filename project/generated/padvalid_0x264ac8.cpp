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

// Function: padvalid
// Address: 0x264ac8 - 0x264af4
void padvalid_0x264ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padvalid_0x264ac8");
#endif

    ctx->pc = 0x264ac8u;

    // 0x264ac8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264AC8u;
    {
        const bool branch_taken_0x264ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC8u;
        // 0x264acc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ac8) {
            ctx->pc = 0x264AECu;
            goto label_264aec;
        }
    }
    ctx->pc = 0x264AD0u;
    // 0x264ad0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x264ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x264ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264AD8u;
    {
        const bool branch_taken_0x264ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ad8) {
            ctx->pc = 0x264AECu;
            goto label_264aec;
        }
    }
    ctx->pc = 0x264AE0u;
    // 0x264ae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x264ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264ae4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x264ae4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x264ae8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x264ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_264aec:
    // 0x264aec: 0x3e00008  jr          $ra
    ctx->pc = 0x264AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AECu;
        // 0x264af0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264AF4u;
}
