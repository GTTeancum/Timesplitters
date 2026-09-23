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

// Function: specialfxGfx
// Address: 0x2abdf8 - 0x2abe9c
void specialfxGfx_0x2abdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxGfx_0x2abdf8");
#endif

    switch (ctx->pc) {
        case 0x2abe30u: goto label_2abe30;
        case 0x2abe5cu: goto label_2abe5c;
        case 0x2abe6cu: goto label_2abe6c;
        default: break;
    }

    ctx->pc = 0x2abdf8u;

    // 0x2abdf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2abdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2abdfc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2abdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2abe00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2abe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2abe04: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2abe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2abe08: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2abe08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2abe0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2abe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2abe10: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2abe10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2abe14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2abe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2abe18: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2abe1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abe20: 0x2451c268  addiu       $s1, $v0, -0x3D98
    ctx->pc = 0x2abe20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951528));
    // 0x2abe24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2abe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2abe28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2abe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe2c: 0x0  nop
    ctx->pc = 0x2abe2cu;
    // NOP
label_2abe30:
    // 0x2abe30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2abe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2abe34: 0x5054000e  beql        $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2ABE34u;
    {
        const bool branch_taken_0x2abe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2abe34) {
            ctx->pc = 0x2ABE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE34u;
            // 0x2abe38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE70u;
            goto label_2abe70;
        }
    }
    ctx->pc = 0x2ABE3Cu;
    // 0x2abe3c: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABE3Cu;
    {
        const bool branch_taken_0x2abe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2abe3c) {
            ctx->pc = 0x2ABE54u;
            goto label_2abe54;
        }
    }
    ctx->pc = 0x2ABE44u;
    // 0x2abe44: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABE44u;
    {
        const bool branch_taken_0x2abe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2abe44) {
            ctx->pc = 0x2ABE64u;
            goto label_2abe64;
        }
    }
    ctx->pc = 0x2ABE4Cu;
    // 0x2abe4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABE4Cu;
    {
        const bool branch_taken_0x2abe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE4Cu;
        // 0x2abe50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe4c) {
            ctx->pc = 0x2ABE70u;
            goto label_2abe70;
        }
    }
    ctx->pc = 0x2ABE54u;
label_2abe54:
    // 0x2abe54: 0xc0aae1c  jal         func_2AB870
    ctx->pc = 0x2ABE54u;
    SET_GPR_U32(ctx, 31, 0x2ABE5Cu);
    ctx->pc = 0x2ABE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE54u;
    // 0x2abe58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB870u, 0x2ABE54u, 0x2ABE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE5Cu;
label_2abe5c:
    // 0x2abe5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABE5Cu;
    {
        const bool branch_taken_0x2abe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE5Cu;
        // 0x2abe60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe5c) {
            ctx->pc = 0x2ABE70u;
            goto label_2abe70;
        }
    }
    ctx->pc = 0x2ABE64u;
label_2abe64:
    // 0x2abe64: 0xc0aacd0  jal         func_2AB340
    ctx->pc = 0x2ABE64u;
    SET_GPR_U32(ctx, 31, 0x2ABE6Cu);
    ctx->pc = 0x2ABE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE64u;
    // 0x2abe68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB340u, 0x2ABE64u, 0x2ABE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE6Cu;
label_2abe6c:
    // 0x2abe6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2abe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2abe70:
    // 0x2abe70: 0x2a020038  slti        $v0, $s0, 0x38
    ctx->pc = 0x2abe70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x2abe74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2ABE74u;
    {
        const bool branch_taken_0x2abe74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE74u;
        // 0x2abe78: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe74) {
            ctx->pc = 0x2ABE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abe30;
        }
    }
    ctx->pc = 0x2ABE7Cu;
    // 0x2abe7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2abe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abe80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2abe80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2abe84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2abe84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abe88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2abe88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abe8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2abe8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abe90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abe90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abe94: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE94u;
        // 0x2abe98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABE9Cu;
}
