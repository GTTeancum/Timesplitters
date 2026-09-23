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

// Function: weaponSetDec
// Address: 0x232df0 - 0x232e64
void weaponSetDec_0x232df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weaponSetDec_0x232df0");
#endif

    switch (ctx->pc) {
        case 0x232e18u: goto label_232e18;
        case 0x232e20u: goto label_232e20;
        case 0x232e44u: goto label_232e44;
        default: break;
    }

    ctx->pc = 0x232df0u;

    // 0x232df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232df4: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x232df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x232df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x232e04: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x232e04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x232e08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232e0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x232e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x232e10: 0xc081546  jal         func_205518
    ctx->pc = 0x232E10u;
    SET_GPR_U32(ctx, 31, 0x232E18u);
    ctx->pc = 0x232E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E10u;
    // 0x232e14: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x232E10u, 0x232E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E18u;
label_232e18:
    // 0x232e18: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x232e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x232e1c: 0x8e223a30  lw          $v0, 0x3A30($s1)
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14896)));
label_232e20:
    // 0x232e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x232e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232e24: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x232E24u;
    {
        const bool branch_taken_0x232e24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x232E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E24u;
        // 0x232e28: 0xae223a30  sw          $v0, 0x3A30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e24) {
            ctx->pc = 0x232E30u;
            goto label_232e30;
        }
    }
    ctx->pc = 0x232E2Cu;
    // 0x232e2c: 0xae123a30  sw          $s2, 0x3A30($s0)
    ctx->pc = 0x232e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14896), GPR_U32(ctx, 18));
label_232e30:
    // 0x232e30: 0x8e043a30  lw          $a0, 0x3A30($s0)
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14896)));
    // 0x232e34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232E34u;
    {
        const bool branch_taken_0x232e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E34u;
        // 0x232e38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e34) {
            ctx->pc = 0x232E50u;
            goto label_232e50;
        }
    }
    ctx->pc = 0x232E3Cu;
    // 0x232e3c: 0xc08cb64  jal         func_232D90
    ctx->pc = 0x232E3Cu;
    SET_GPR_U32(ctx, 31, 0x232E44u);
    ctx->pc = 0x232E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E3Cu;
    // 0x232e40: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D90u, 0x232E3Cu, 0x232E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E44u;
label_232e44:
    // 0x232e44: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x232E44u;
    {
        const bool branch_taken_0x232e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E44u;
        // 0x232e48: 0x8e223a30  lw          $v0, 0x3A30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e44) {
            ctx->pc = 0x232E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232e20;
        }
    }
    ctx->pc = 0x232E4Cu;
    // 0x232e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x232e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_232e50:
    // 0x232e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x232e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x232E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E5Cu;
        // 0x232e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E64u;
}
