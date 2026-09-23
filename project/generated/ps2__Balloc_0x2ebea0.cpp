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

// Function: _Balloc
// Address: 0x2ebea0 - 0x2ebf48
void ps2__Balloc_0x2ebea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Balloc_0x2ebea0");
#endif

    switch (ctx->pc) {
        case 0x2ebeccu: goto label_2ebecc;
        case 0x2ebf10u: goto label_2ebf10;
        default: break;
    }

    ctx->pc = 0x2ebea0u;

    // 0x2ebea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebea4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ebea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ebea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebeac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ebeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ebeb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebeb4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2ebeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ebeb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBEB8u;
    {
        const bool branch_taken_0x2ebeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEB8u;
        // 0x2ebebc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebeb8) {
            ctx->pc = 0x2EBED8u;
            goto label_2ebed8;
        }
    }
    ctx->pc = 0x2EBEC0u;
    // 0x2ebec0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ebec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebec4: 0xc0bba3e  jal         func_2EE8F8
    ctx->pc = 0x2EBEC4u;
    SET_GPR_U32(ctx, 31, 0x2EBECCu);
    ctx->pc = 0x2EBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEC4u;
    // 0x2ebec8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8F8u, 0x2EBEC4u, 0x2EBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBECCu;
label_2ebecc:
    // 0x2ebecc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EBECCu;
    {
        const bool branch_taken_0x2ebecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBECCu;
        // 0x2ebed0: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebecc) {
            ctx->pc = 0x2EBF1Cu;
            goto label_2ebf1c;
        }
    }
    ctx->pc = 0x2EBED4u;
    // 0x2ebed4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ebed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ebed8:
    // 0x2ebed8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ebed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ebedc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2ebedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ebee0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ebee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ebee4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBEE4u;
    {
        const bool branch_taken_0x2ebee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEE4u;
        // 0x2ebee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebee4) {
            ctx->pc = 0x2EBEF8u;
            goto label_2ebef8;
        }
    }
    ctx->pc = 0x2EBEECu;
    // 0x2ebeec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ebeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ebef0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EBEF0u;
    {
        const bool branch_taken_0x2ebef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEF0u;
        // 0x2ebef4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebef0) {
            ctx->pc = 0x2EBF28u;
            goto label_2ebf28;
        }
    }
    ctx->pc = 0x2EBEF8u;
label_2ebef8:
    // 0x2ebef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebefc: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x2ebefcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2ebf00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ebf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebf04: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2ebf04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ebf08: 0xc0bba3e  jal         func_2EE8F8
    ctx->pc = 0x2EBF08u;
    SET_GPR_U32(ctx, 31, 0x2EBF10u);
    ctx->pc = 0x2EBF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF08u;
    // 0x2ebf0c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8F8u, 0x2EBF08u, 0x2EBF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF10u;
label_2ebf10:
    // 0x2ebf10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ebf10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf14: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBF14u;
    {
        const bool branch_taken_0x2ebf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf14) {
            ctx->pc = 0x2EBF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF14u;
            // 0x2ebf18: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF24u;
            goto label_2ebf24;
        }
    }
    ctx->pc = 0x2EBF1Cu;
label_2ebf1c:
    // 0x2ebf1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBF1Cu;
    {
        const bool branch_taken_0x2ebf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF1Cu;
        // 0x2ebf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf1c) {
            ctx->pc = 0x2EBF34u;
            goto label_2ebf34;
        }
    }
    ctx->pc = 0x2EBF24u;
label_2ebf24:
    // 0x2ebf24: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x2ebf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_2ebf28:
    // 0x2ebf28: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ebf28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2ebf2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ebf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf30: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2ebf30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2ebf34:
    // 0x2ebf34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebf38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ebf38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebf3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebf3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebf40: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF40u;
        // 0x2ebf44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF48u;
}
