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

// Function: bulletTypeExplosive
// Address: 0x2894b0 - 0x2894cc
void bulletTypeExplosive_0x2894b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletTypeExplosive_0x2894b0");
#endif

    ctx->pc = 0x2894b0u;

    // 0x2894b0: 0x28830013  slti        $v1, $a0, 0x13
    ctx->pc = 0x2894b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2894b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2894B4u;
    {
        const bool branch_taken_0x2894b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894B4u;
        // 0x2894b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894b4) {
            ctx->pc = 0x2894C4u;
            goto label_2894c4;
        }
    }
    ctx->pc = 0x2894BCu;
    // 0x2894bc: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2894bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2894c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2894c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2894c4:
    // 0x2894c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2894C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2894C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2894CCu;
}
