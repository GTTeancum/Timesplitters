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

// Function: gameResetAfter
// Address: 0x21ede8 - 0x21eeb4
void gameResetAfter_0x21ede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gameResetAfter_0x21ede8");
#endif

    switch (ctx->pc) {
        case 0x21ee78u: goto label_21ee78;
        case 0x21ee88u: goto label_21ee88;
        default: break;
    }

    ctx->pc = 0x21ede8u;

    // 0x21ede8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21edec: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x21edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x21edf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21edf4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21edf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EDF8u;
    {
        const bool branch_taken_0x21edf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF8u;
        // 0x21edfc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf8) {
            ctx->pc = 0x21EE20u;
            goto label_21ee20;
        }
    }
    ctx->pc = 0x21EE00u;
    // 0x21ee00: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x21ee00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21ee04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EE04u;
    {
        const bool branch_taken_0x21ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE04u;
        // 0x21ee08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee04) {
            ctx->pc = 0x21EE2Cu;
            goto label_21ee2c;
        }
    }
    ctx->pc = 0x21EE0Cu;
    // 0x21ee0c: 0x2862006a  slti        $v0, $v1, 0x6A
    ctx->pc = 0x21ee0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)106) ? 1 : 0);
    // 0x21ee10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE10u;
    {
        const bool branch_taken_0x21ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE10u;
        // 0x21ee14: 0x28620065  slti        $v0, $v1, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee10) {
            ctx->pc = 0x21EE28u;
            goto label_21ee28;
        }
    }
    ctx->pc = 0x21EE18u;
    // 0x21ee18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EE18u;
    {
        const bool branch_taken_0x21ee18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE18u;
        // 0x21ee1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee18) {
            ctx->pc = 0x21EE2Cu;
            goto label_21ee2c;
        }
    }
    ctx->pc = 0x21EE20u;
label_21ee20:
    // 0x21ee20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21EE20u;
    {
        const bool branch_taken_0x21ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE20u;
        // 0x21ee24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee20) {
            ctx->pc = 0x21EE2Cu;
            goto label_21ee2c;
        }
    }
    ctx->pc = 0x21EE28u;
label_21ee28:
    // 0x21ee28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21ee2c:
    // 0x21ee2c: 0xaf829dac  sw          $v0, -0x6254($gp)
    ctx->pc = 0x21ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942124), GPR_U32(ctx, 2));
    // 0x21ee30: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x21ee30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x21ee34: 0x2602c4a8  addiu       $v0, $s0, -0x3B58
    ctx->pc = 0x21ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
    // 0x21ee38: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x21ee3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21ee40: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x21ee40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x21ee44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EE44u;
    {
        const bool branch_taken_0x21ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE44u;
        // 0x21ee48: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee44) {
            ctx->pc = 0x21EE88u;
            goto label_21ee88;
        }
    }
    ctx->pc = 0x21EE4Cu;
    // 0x21ee4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ee50: 0x244208d0  addiu       $v0, $v0, 0x8D0
    ctx->pc = 0x21ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2256));
    // 0x21ee54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ee58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ee5c: 0x800008  jr          $a0
    ctx->pc = 0x21EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EE64u: goto label_21ee64;
            case 0x21EE70u: goto label_21ee70;
            case 0x21EE80u: goto label_21ee80;
            case 0x21EE88u: goto label_21ee88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21EE64u;
label_21ee64:
    // 0x21ee64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ee68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21EE68u;
    {
        const bool branch_taken_0x21ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE68u;
        // 0x21ee6c: 0xaf82b6f8  sw          $v0, -0x4908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee68) {
            ctx->pc = 0x21EE88u;
            goto label_21ee88;
        }
    }
    ctx->pc = 0x21EE70u;
label_21ee70:
    // 0x21ee70: 0xc08775e  jal         func_21DD78
    ctx->pc = 0x21EE70u;
    SET_GPR_U32(ctx, 31, 0x21EE78u);
    ctx->pc = 0x21DD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DD78u, 0x21EE70u, 0x21EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE78u;
label_21ee78:
    // 0x21ee78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21EE78u;
    {
        const bool branch_taken_0x21ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE78u;
        // 0x21ee7c: 0x2603c4a8  addiu       $v1, $s0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee78) {
            ctx->pc = 0x21EE8Cu;
            goto label_21ee8c;
        }
    }
    ctx->pc = 0x21EE80u;
label_21ee80:
    // 0x21ee80: 0xc08766e  jal         func_21D9B8
    ctx->pc = 0x21EE80u;
    SET_GPR_U32(ctx, 31, 0x21EE88u);
    ctx->pc = 0x21D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D9B8u, 0x21EE80u, 0x21EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE88u;
label_21ee88:
    // 0x21ee88: 0x2603c4a8  addiu       $v1, $s0, -0x3B58
    ctx->pc = 0x21ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
label_21ee8c:
    // 0x21ee8c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21ee90: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x21ee94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EE94u;
    {
        const bool branch_taken_0x21ee94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE94u;
        // 0x21ee98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee94) {
            ctx->pc = 0x21EEA8u;
            goto label_21eea8;
        }
    }
    ctx->pc = 0x21EE9Cu;
    // 0x21ee9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ee9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eea0: 0x8087cc4  j           func_21F310
    ctx->pc = 0x21EEA0u;
    ctx->pc = 0x21EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEA0u;
    // 0x21eea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F310u;
    challengeRestart_0x21f310(rdram, ctx, runtime); return;
    ctx->pc = 0x21EEA8u;
label_21eea8:
    // 0x21eea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21eea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eeac: 0x3e00008  jr          $ra
    ctx->pc = 0x21EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEACu;
        // 0x21eeb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EEB4u;
}
