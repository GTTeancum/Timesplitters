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

// Function: propGetNewExtref
// Address: 0x2692f0 - 0x26933c
void propGetNewExtref_0x2692f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propGetNewExtref_0x2692f0");
#endif

    switch (ctx->pc) {
        case 0x269308u: goto label_269308;
        default: break;
    }

    ctx->pc = 0x2692f0u;

    // 0x2692f0: 0x8f88b15c  lw          $t0, -0x4EA4($gp)
    ctx->pc = 0x2692f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x2692f4: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2692f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2692f8: 0x1900000e  blez        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2692F8u;
    {
        const bool branch_taken_0x2692f8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2692FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692F8u;
        // 0x2692fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692f8) {
            ctx->pc = 0x269334u;
            goto label_269334;
        }
    }
    ctx->pc = 0x269300u;
    // 0x269300: 0x8f87b07c  lw          $a3, -0x4F84($gp)
    ctx->pc = 0x269300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x269304: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x269304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_269308:
    // 0x269308: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x269308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26930c: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x26930cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x269310: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x269310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x269314: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x269314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269318: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x269318u;
    {
        const bool branch_taken_0x269318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269318u;
        // 0x26931c: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269318) {
            ctx->pc = 0x269324u;
            goto label_269324;
        }
    }
    ctx->pc = 0x269320u;
    // 0x269320: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x269320u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_269324:
    // 0x269324: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x269324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x269328: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x269328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x26932c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26932Cu;
    {
        const bool branch_taken_0x26932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26932Cu;
        // 0x269330: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26932c) {
            ctx->pc = 0x269308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269308;
        }
    }
    ctx->pc = 0x269334u;
label_269334:
    // 0x269334: 0x3e00008  jr          $ra
    ctx->pc = 0x269334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269334u;
        // 0x269338: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26933Cu;
}
