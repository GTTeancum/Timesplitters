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

// Function: _mprec_log10
// Address: 0x2ece50 - 0x2ecebc
void _mprec_log10_0x2ece50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mprec_log10_0x2ece50");
#endif

    switch (ctx->pc) {
        case 0x2ece90u: goto label_2ece90;
        case 0x2ecea0u: goto label_2ecea0;
        default: break;
    }

    ctx->pc = 0x2ece50u;

    // 0x2ece50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ece50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ece54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ece54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ece58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ece58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece5c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2ece5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2ece60: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2ece60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2ece64: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x2ece64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2ece68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECE68u;
    {
        const bool branch_taken_0x2ece68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE68u;
        // 0x2ece6c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece68) {
            ctx->pc = 0x2ECE88u;
            goto label_2ece88;
        }
    }
    ctx->pc = 0x2ECE70u;
    // 0x2ece70: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ece70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ece74: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2ece74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ece78: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x2ece78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
    // 0x2ece7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ece7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ece80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ECE80u;
    {
        const bool branch_taken_0x2ece80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE80u;
        // 0x2ece84: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece80) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECE88u;
label_2ece88:
    // 0x2ece88: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECE88u;
    {
        const bool branch_taken_0x2ece88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2ECE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE88u;
        // 0x2ece8c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece88) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECE90u;
label_2ece90:
    // 0x2ece90: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2ece90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2ece94: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2ece94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2ece98: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ECE98u;
    SET_GPR_U32(ctx, 31, 0x2ECEA0u);
    ctx->pc = 0x2ECE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE98u;
    // 0x2ece9c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ECE98u, 0x2ECEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEA0u;
label_2ecea0:
    // 0x2ecea0: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2ECEA0u;
    {
        const bool branch_taken_0x2ecea0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2ECEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEA0u;
        // 0x2ecea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecea0) {
            ctx->pc = 0x2ECE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ece90;
        }
    }
    ctx->pc = 0x2ECEA8u;
    // 0x2ecea8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ecea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eceac:
    // 0x2eceac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eceb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eceb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEB4u;
        // 0x2eceb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECEBCu;
}
