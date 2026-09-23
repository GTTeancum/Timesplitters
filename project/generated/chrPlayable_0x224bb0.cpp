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

// Function: chrPlayable
// Address: 0x224bb0 - 0x224bfc
void chrPlayable_0x224bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrPlayable_0x224bb0");
#endif

    switch (ctx->pc) {
        case 0x224bf0u: goto label_224bf0;
        default: break;
    }

    ctx->pc = 0x224bb0u;

    // 0x224bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224bb4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x224bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224bbc: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x224bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x224bc0: 0x24a231d8  addiu       $v0, $a1, 0x31D8
    ctx->pc = 0x224bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12760));
    // 0x224bc4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x224bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x224bc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224bcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224BCCu;
    {
        const bool branch_taken_0x224bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BCCu;
        // 0x224bd0: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bcc) {
            ctx->pc = 0x224BE0u;
            goto label_224be0;
        }
    }
    ctx->pc = 0x224BD4u;
    // 0x224bd4: 0x8043df89  lb          $v1, -0x2077($v0)
    ctx->pc = 0x224bd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958985)));
    // 0x224bd8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x224BD8u;
    {
        const bool branch_taken_0x224bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BD8u;
        // 0x224bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bd8) {
            ctx->pc = 0x224BF0u;
            goto label_224bf0;
        }
    }
    ctx->pc = 0x224BE0u;
label_224be0:
    // 0x224be0: 0x24a431d8  addiu       $a0, $a1, 0x31D8
    ctx->pc = 0x224be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12760));
    // 0x224be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224be8: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224BE8u;
    SET_GPR_U32(ctx, 31, 0x224BF0u);
    ctx->pc = 0x224BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BE8u;
    // 0x224bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224BE8u, 0x224BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BF0u;
label_224bf0:
    // 0x224bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x224BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BF4u;
        // 0x224bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224BFCu;
}
