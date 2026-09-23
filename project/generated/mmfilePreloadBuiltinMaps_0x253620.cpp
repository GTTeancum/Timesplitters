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

// Function: mmfilePreloadBuiltinMaps
// Address: 0x253620 - 0x253674
void mmfilePreloadBuiltinMaps_0x253620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfilePreloadBuiltinMaps_0x253620");
#endif

    switch (ctx->pc) {
        case 0x253648u: goto label_253648;
        case 0x253658u: goto label_253658;
        default: break;
    }

    ctx->pc = 0x253620u;

    // 0x253620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253624: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x253624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x253628: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x253628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25362c: 0x244272d8  addiu       $v0, $v0, 0x72D8
    ctx->pc = 0x25362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29400));
    // 0x253630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253634: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x253634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x253638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25363c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x25363cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x253640: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x253640u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3572DCu));
    // 0x253644: 0x0  nop
    ctx->pc = 0x253644u;
    // NOP
label_253648:
    // 0x253648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25364c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x25364cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x253650: 0xc0870b6  jal         func_21C2D8
    ctx->pc = 0x253650u;
    SET_GPR_U32(ctx, 31, 0x253658u);
    ctx->pc = 0x253654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253650u;
    // 0x253654: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C2D8u, 0x253650u, 0x253658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253658u;
label_253658:
    // 0x253658: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x253658u;
    {
        const bool branch_taken_0x253658 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x253658) {
            ctx->pc = 0x25365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253658u;
            // 0x25365c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253648;
        }
    }
    ctx->pc = 0x253660u;
    // 0x253660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253664: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x253664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25366c: 0x3e00008  jr          $ra
    ctx->pc = 0x25366Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25366Cu;
        // 0x253670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25366Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253674u;
}
