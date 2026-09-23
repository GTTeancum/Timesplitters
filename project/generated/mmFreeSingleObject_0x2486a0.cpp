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

// Function: mmFreeSingleObject
// Address: 0x2486a0 - 0x248794
void mmFreeSingleObject_0x2486a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmFreeSingleObject_0x2486a0");
#endif

    switch (ctx->pc) {
        case 0x248700u: goto label_248700;
        case 0x248758u: goto label_248758;
        case 0x248760u: goto label_248760;
        default: break;
    }

    ctx->pc = 0x2486a0u;

    // 0x2486a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2486a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2486a4: 0x8f82a0f4  lw          $v0, -0x5F0C($gp)
    ctx->pc = 0x2486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x2486a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2486a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2486ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2486acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486b0: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2486B0u;
    {
        const bool branch_taken_0x2486b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2486B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486B0u;
        // 0x2486b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486b0) {
            ctx->pc = 0x2486BCu;
            goto label_2486bc;
        }
    }
    ctx->pc = 0x2486B8u;
    // 0x2486b8: 0xaf80a0f4  sw          $zero, -0x5F0C($gp)
    ctx->pc = 0x2486b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 0));
label_2486bc:
    // 0x2486bc: 0x8f82a12c  lw          $v0, -0x5ED4($gp)
    ctx->pc = 0x2486bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x2486c0: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2486C0u;
    {
        const bool branch_taken_0x2486c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2486C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486C0u;
        // 0x2486c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486c0) {
            ctx->pc = 0x2486E4u;
            goto label_2486e4;
        }
    }
    ctx->pc = 0x2486C8u;
    // 0x2486c8: 0x8f82a128  lw          $v0, -0x5ED8($gp)
    ctx->pc = 0x2486c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
    // 0x2486cc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2486ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2486d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2486d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2486d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2486d8: 0xaf83a12c  sw          $v1, -0x5ED4($gp)
    ctx->pc = 0x2486d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943020), GPR_U32(ctx, 3));
    // 0x2486dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2486DCu;
    {
        const bool branch_taken_0x2486dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486DCu;
        // 0x2486e0: 0xaf82a128  sw          $v0, -0x5ED8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486dc) {
            ctx->pc = 0x24873Cu;
            goto label_24873c;
        }
    }
    ctx->pc = 0x2486E4u;
label_2486e4:
    // 0x2486e4: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2486E4u;
    {
        const bool branch_taken_0x2486e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2486e4) {
            ctx->pc = 0x2486E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2486E4u;
            // 0x2486e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24873Cu;
            goto label_24873c;
        }
    }
    ctx->pc = 0x2486ECu;
    // 0x2486ec: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2486ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2486f0: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2486F0u;
    {
        const bool branch_taken_0x2486f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2486F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486F0u;
        // 0x2486f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486f0) {
            ctx->pc = 0x248720u;
            goto label_248720;
        }
    }
    ctx->pc = 0x2486F8u;
    // 0x2486f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2486f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2486fc: 0x0  nop
    ctx->pc = 0x2486fcu;
    // NOP
label_248700:
    // 0x248700: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x248700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248704: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x248704u;
    {
        const bool branch_taken_0x248704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248704u;
        // 0x248708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248704) {
            ctx->pc = 0x248740u;
            goto label_248740;
        }
    }
    ctx->pc = 0x24870Cu;
    // 0x24870c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x24870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x248710: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x248710u;
    {
        const bool branch_taken_0x248710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x248714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248710u;
        // 0x248714: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248710) {
            ctx->pc = 0x248700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248700;
        }
    }
    ctx->pc = 0x248718u;
    // 0x248718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248718u;
    {
        const bool branch_taken_0x248718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248718) {
            ctx->pc = 0x248724u;
            goto label_248724;
        }
    }
    ctx->pc = 0x248720u;
label_248720:
    // 0x248720: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248724:
    // 0x248724: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248724u;
    {
        const bool branch_taken_0x248724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248724u;
        // 0x248728: 0x8f82a128  lw          $v0, -0x5ED8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248724) {
            ctx->pc = 0x24873Cu;
            goto label_24873c;
        }
    }
    ctx->pc = 0x24872Cu;
    // 0x24872c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x248730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x248734: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x248734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x248738: 0xaf82a128  sw          $v0, -0x5ED8($gp)
    ctx->pc = 0x248738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943016), GPR_U32(ctx, 2));
label_24873c:
    // 0x24873c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248740:
    // 0x248740: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x248740u;
    {
        const bool branch_taken_0x248740 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x248744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248740u;
        // 0x248744: 0x8f83b824  lw          $v1, -0x47DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248740) {
            ctx->pc = 0x248770u;
            goto label_248770;
        }
    }
    ctx->pc = 0x248748u;
    // 0x248748: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x248748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x24874c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24874Cu;
    {
        const bool branch_taken_0x24874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24874Cu;
        // 0x248750: 0x8f82a138  lw          $v0, -0x5EC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24874c) {
            ctx->pc = 0x248774u;
            goto label_248774;
        }
    }
    ctx->pc = 0x248754u;
    // 0x248754: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x248754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_248758:
    // 0x248758: 0xc092286  jal         func_248A18
    ctx->pc = 0x248758u;
    SET_GPR_U32(ctx, 31, 0x248760u);
    ctx->pc = 0x24875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248758u;
    // 0x24875c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A18u, 0x248758u, 0x248760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248760u;
label_248760:
    // 0x248760: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248764: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x248764u;
    {
        const bool branch_taken_0x248764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248764) {
            ctx->pc = 0x248768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248764u;
            // 0x248768: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248758;
        }
    }
    ctx->pc = 0x24876Cu;
    // 0x24876c: 0x8f83b824  lw          $v1, -0x47DC($gp)
    ctx->pc = 0x24876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948900)));
label_248770:
    // 0x248770: 0x8f82a138  lw          $v0, -0x5EC8($gp)
    ctx->pc = 0x248770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943032)));
label_248774:
    // 0x248774: 0xaf90b824  sw          $s0, -0x47DC($gp)
    ctx->pc = 0x248774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948900), GPR_U32(ctx, 16));
    // 0x248778: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x248778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x24877c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248788: 0xaf82a138  sw          $v0, -0x5EC8($gp)
    ctx->pc = 0x248788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943032), GPR_U32(ctx, 2));
    // 0x24878c: 0x3e00008  jr          $ra
    ctx->pc = 0x24878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24878Cu;
        // 0x248790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248794u;
}
