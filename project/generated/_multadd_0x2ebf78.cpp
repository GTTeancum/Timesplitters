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

// Function: _multadd
// Address: 0x2ebf78 - 0x2ec08c
void _multadd_0x2ebf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multadd_0x2ebf78");
#endif

    switch (ctx->pc) {
        case 0x2ebfb8u: goto label_2ebfb8;
        case 0x2ec024u: goto label_2ec024;
        case 0x2ec040u: goto label_2ec040;
        case 0x2ec04cu: goto label_2ec04c;
        default: break;
    }

    ctx->pc = 0x2ebf78u;

    // 0x2ebf78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ebf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ebf7c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2ebf7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ebf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ebf84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebf84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ebf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ebf8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ebf8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ebf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ebf94: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ebf94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ebf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ebf9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ebf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebfa4: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x2ebfa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ebfa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ebfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ebfac: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2ebfacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfb0: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2ebfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ebfb4: 0x0  nop
    ctx->pc = 0x2ebfb4u;
    // NOP
label_2ebfb8:
    // 0x2ebfb8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ebfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ebfbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ebfbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ebfc0: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x2ebfc0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ebfc4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ebfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ebfc8: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x2ebfc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ebfcc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2ebfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ebfd0: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x2ebfd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ebfd4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2ebfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ebfd8: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x2ebfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2ebfdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ebfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ebfe0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2ebfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ebfe4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2ebfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ebfe8: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x2ebfe8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ebfec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ebfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ebff0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2ebff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2ebff4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EBFF4u;
    {
        const bool branch_taken_0x2ebff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFF4u;
        // 0x2ebff8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebff4) {
            ctx->pc = 0x2EBFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebfb8;
        }
    }
    ctx->pc = 0x2EBFFCu;
    // 0x2ebffc: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EBFFCu;
    {
        const bool branch_taken_0x2ebffc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFFCu;
        // 0x2ec000: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebffc) {
            ctx->pc = 0x2EC06Cu;
            goto label_2ec06c;
        }
    }
    ctx->pc = 0x2EC004u;
    // 0x2ec004: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ec004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ec008: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ec008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ec00c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EC00Cu;
    {
        const bool branch_taken_0x2ec00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC00Cu;
        // 0x2ec010: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec00c) {
            ctx->pc = 0x2EC058u;
            goto label_2ec058;
        }
    }
    ctx->pc = 0x2EC014u;
    // 0x2ec014: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ec014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ec018: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ec018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec01c: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC01Cu;
    SET_GPR_U32(ctx, 31, 0x2EC024u);
    ctx->pc = 0x2EC020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC01Cu;
    // 0x2ec020: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC01Cu, 0x2EC024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC024u;
label_2ec024:
    // 0x2ec024: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2ec024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec02c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x2ec02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2ec030: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2ec030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2ec034: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ec034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ec038: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2EC038u;
    SET_GPR_U32(ctx, 31, 0x2EC040u);
    ctx->pc = 0x2EC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC038u;
    // 0x2ec03c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2EC038u, 0x2EC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC040u;
label_2ec040:
    // 0x2ec040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ec040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec044: 0xc0bafd2  jal         func_2EBF48
    ctx->pc = 0x2EC044u;
    SET_GPR_U32(ctx, 31, 0x2EC04Cu);
    ctx->pc = 0x2EC048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC044u;
    // 0x2ec048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF48u, 0x2EC044u, 0x2EC04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC04Cu;
label_2ec04c:
    // 0x2ec04c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2ec04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec050: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x2ec050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2ec054: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ec054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2ec058:
    // 0x2ec058: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2ec058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2ec05c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ec05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ec060: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2ec060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2ec064: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x2ec064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x2ec068: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ec068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ec06c:
    // 0x2ec06c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ec06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec070: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ec070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec074: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ec074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec078: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ec078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec07c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ec07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec084: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC084u;
        // 0x2ec088: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC08Cu;
}
