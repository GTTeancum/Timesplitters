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

// Function: gvDispIndex
// Address: 0x22c378 - 0x22c3b0
void gvDispIndex_0x22c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gvDispIndex_0x22c378");
#endif

    switch (ctx->pc) {
        case 0x22c388u: goto label_22c388;
        default: break;
    }

    ctx->pc = 0x22c378u;

    // 0x22c378: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22c37c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22C37Cu;
    {
        const bool branch_taken_0x22c37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C37Cu;
        // 0x22c380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c37c) {
            ctx->pc = 0x22C3A8u;
            goto label_22c3a8;
        }
    }
    ctx->pc = 0x22C384u;
    // 0x22c384: 0x0  nop
    ctx->pc = 0x22c384u;
    // NOP
label_22c388:
    // 0x22c388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c38c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C38Cu;
    {
        const bool branch_taken_0x22c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C38Cu;
        // 0x22c390: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c38c) {
            ctx->pc = 0x22C39Cu;
            goto label_22c39c;
        }
    }
    ctx->pc = 0x22C394u;
    // 0x22c394: 0x3e00008  jr          $ra
    ctx->pc = 0x22C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C394u;
        // 0x22c398: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C39Cu;
label_22c39c:
    // 0x22c39c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22c3a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22C3A0u;
    {
        const bool branch_taken_0x22c3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3A0u;
        // 0x22c3a4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3a0) {
            ctx->pc = 0x22C388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c388;
        }
    }
    ctx->pc = 0x22C3A8u;
label_22c3a8:
    // 0x22c3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3A8u;
        // 0x22c3ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C3B0u;
}
