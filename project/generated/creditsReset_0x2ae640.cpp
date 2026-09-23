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

// Function: creditsReset
// Address: 0x2ae640 - 0x2ae690
void creditsReset_0x2ae640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsReset_0x2ae640");
#endif

    switch (ctx->pc) {
        case 0x2ae658u: goto label_2ae658;
        case 0x2ae670u: goto label_2ae670;
        case 0x2ae678u: goto label_2ae678;
        case 0x2ae680u: goto label_2ae680;
        default: break;
    }

    ctx->pc = 0x2ae640u;

    // 0x2ae640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae644: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ae644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ae648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae64c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae650: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2AE650u;
    SET_GPR_U32(ctx, 31, 0x2AE658u);
    ctx->pc = 0x2AE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE650u;
    // 0x2ae654: 0x34842c80  ori         $a0, $a0, 0x2C80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2AE650u, 0x2AE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE658u;
label_2ae658:
    // 0x2ae658: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ae658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ae65c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae660: 0xaf82b34c  sw          $v0, -0x4CB4($gp)
    ctx->pc = 0x2ae660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947660), GPR_U32(ctx, 2));
    // 0x2ae664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae668: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2AE668u;
    SET_GPR_U32(ctx, 31, 0x2AE670u);
    ctx->pc = 0x2AE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE668u;
    // 0x2ae66c: 0x34c62c80  ori         $a2, $a2, 0x2C80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2AE668u, 0x2AE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE670u;
label_2ae670:
    // 0x2ae670: 0xc0aba0e  jal         func_2AE838
    ctx->pc = 0x2AE670u;
    SET_GPR_U32(ctx, 31, 0x2AE678u);
    ctx->pc = 0x2AE838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE838u, 0x2AE670u, 0x2AE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE678u;
label_2ae678:
    // 0x2ae678: 0xc0abfc4  jal         func_2AFF10
    ctx->pc = 0x2AE678u;
    SET_GPR_U32(ctx, 31, 0x2AE680u);
    ctx->pc = 0x2AFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFF10u, 0x2AE678u, 0x2AE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE680u;
label_2ae680:
    // 0x2ae680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae684: 0xaf80b384  sw          $zero, -0x4C7C($gp)
    ctx->pc = 0x2ae684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947716), GPR_U32(ctx, 0));
    // 0x2ae688: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE688u;
        // 0x2ae68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE690u;
}
