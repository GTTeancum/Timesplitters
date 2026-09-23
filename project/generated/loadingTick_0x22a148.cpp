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

// Function: loadingTick
// Address: 0x22a148 - 0x22a190
void loadingTick_0x22a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadingTick_0x22a148");
#endif

    switch (ctx->pc) {
        case 0x22a174u: goto label_22a174;
        case 0x22a184u: goto label_22a184;
        default: break;
    }

    ctx->pc = 0x22a148u;

    // 0x22a148: 0x8f82b71c  lw          $v0, -0x48E4($gp)
    ctx->pc = 0x22a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948636)));
    // 0x22a14c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22a14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22a150: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22a154: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22a158: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a15c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A15Cu;
    {
        const bool branch_taken_0x22a15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A15Cu;
        // 0x22a160: 0xaf82b71c  sw          $v0, -0x48E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a15c) {
            ctx->pc = 0x22A184u;
            goto label_22a184;
        }
    }
    ctx->pc = 0x22A164u;
    // 0x22a164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a16c: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x22A16Cu;
    SET_GPR_U32(ctx, 31, 0x22A174u);
    ctx->pc = 0x22A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A16Cu;
    // 0x22a170: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x22A16Cu, 0x22A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A174u;
label_22a174:
    // 0x22a174: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x22a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x22a178: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a17c: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x22A17Cu;
    SET_GPR_U32(ctx, 31, 0x22A184u);
    ctx->pc = 0x22A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A17Cu;
    // 0x22a180: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x22A17Cu, 0x22A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A184u;
label_22a184:
    // 0x22a184: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22a184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22a188: 0x3e00008  jr          $ra
    ctx->pc = 0x22A188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A188u;
        // 0x22a18c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A190u;
}
