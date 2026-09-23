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

// Function: creditsPreload
// Address: 0x2ae5f0 - 0x2ae63c
void creditsPreload_0x2ae5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsPreload_0x2ae5f0");
#endif

    switch (ctx->pc) {
        case 0x2ae610u: goto label_2ae610;
        case 0x2ae620u: goto label_2ae620;
        default: break;
    }

    ctx->pc = 0x2ae5f0u;

    // 0x2ae5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae5f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ae5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ae5f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae600: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ae600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ae604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ae608: 0x2450f6b8  addiu       $s0, $v0, -0x948
    ctx->pc = 0x2ae608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964920));
    // 0x2ae60c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae60cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F6B8u));
label_2ae610:
    // 0x2ae610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae614: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ae614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ae618: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2AE618u;
    SET_GPR_U32(ctx, 31, 0x2AE620u);
    ctx->pc = 0x2AE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE618u;
    // 0x2ae61c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2AE618u, 0x2AE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE620u;
label_2ae620:
    // 0x2ae620: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AE620u;
    {
        const bool branch_taken_0x2ae620 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2ae620) {
            ctx->pc = 0x2AE624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE620u;
            // 0x2ae624: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae610;
        }
    }
    ctx->pc = 0x2AE628u;
    // 0x2ae628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ae628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae62c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae634: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE634u;
        // 0x2ae638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE63Cu;
}
