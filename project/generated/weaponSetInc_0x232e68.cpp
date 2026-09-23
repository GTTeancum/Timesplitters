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

// Function: weaponSetInc
// Address: 0x232e68 - 0x232ed4
void weaponSetInc_0x232e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weaponSetInc_0x232e68");
#endif

    switch (ctx->pc) {
        case 0x232e8cu: goto label_232e8c;
        case 0x232e90u: goto label_232e90;
        case 0x232eb8u: goto label_232eb8;
        default: break;
    }

    ctx->pc = 0x232e68u;

    // 0x232e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232e6c: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x232e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232e7c: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x232e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x232e80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x232e84: 0xc081546  jal         func_205518
    ctx->pc = 0x232E84u;
    SET_GPR_U32(ctx, 31, 0x232E8Cu);
    ctx->pc = 0x232E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E84u;
    // 0x232e88: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x232E84u, 0x232E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E8Cu;
label_232e8c:
    // 0x232e8c: 0x8e223a30  lw          $v0, 0x3A30($s1)
    ctx->pc = 0x232e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14896)));
label_232e90:
    // 0x232e90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232e94: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x232e94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x232e98: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x232E98u;
    {
        const bool branch_taken_0x232e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E98u;
        // 0x232e9c: 0xae223a30  sw          $v0, 0x3A30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e98) {
            ctx->pc = 0x232EA4u;
            goto label_232ea4;
        }
    }
    ctx->pc = 0x232EA0u;
    // 0x232ea0: 0xae003a30  sw          $zero, 0x3A30($s0)
    ctx->pc = 0x232ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14896), GPR_U32(ctx, 0));
label_232ea4:
    // 0x232ea4: 0x8e043a30  lw          $a0, 0x3A30($s0)
    ctx->pc = 0x232ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14896)));
    // 0x232ea8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232EA8u;
    {
        const bool branch_taken_0x232ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EA8u;
        // 0x232eac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ea8) {
            ctx->pc = 0x232EC4u;
            goto label_232ec4;
        }
    }
    ctx->pc = 0x232EB0u;
    // 0x232eb0: 0xc08cb64  jal         func_232D90
    ctx->pc = 0x232EB0u;
    SET_GPR_U32(ctx, 31, 0x232EB8u);
    ctx->pc = 0x232EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EB0u;
    // 0x232eb4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D90u, 0x232EB0u, 0x232EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EB8u;
label_232eb8:
    // 0x232eb8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x232EB8u;
    {
        const bool branch_taken_0x232eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EB8u;
        // 0x232ebc: 0x8e223a30  lw          $v0, 0x3A30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232eb8) {
            ctx->pc = 0x232E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232e90;
        }
    }
    ctx->pc = 0x232EC0u;
    // 0x232ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232ec4:
    // 0x232ec4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x232ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232ECCu;
        // 0x232ed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232ED4u;
}
