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

// Function: createlink
// Address: 0x264af8 - 0x264be4
void createlink_0x264af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("createlink_0x264af8");
#endif

    switch (ctx->pc) {
        case 0x264b14u: goto label_264b14;
        case 0x264b24u: goto label_264b24;
        case 0x264b3cu: goto label_264b3c;
        case 0x264b4cu: goto label_264b4c;
        default: break;
    }

    ctx->pc = 0x264af8u;

    // 0x264af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264b00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x264b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x264b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264b0c: 0xc0992b2  jal         func_264AC8
    ctx->pc = 0x264B0Cu;
    SET_GPR_U32(ctx, 31, 0x264B14u);
    ctx->pc = 0x264B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B0Cu;
    // 0x264b10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264AC8u, 0x264B0Cu, 0x264B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B14u;
label_264b14:
    // 0x264b14: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x264B14u;
    {
        const bool branch_taken_0x264b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B14u;
        // 0x264b18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b14) {
            ctx->pc = 0x264BD4u;
            goto label_264bd4;
        }
    }
    ctx->pc = 0x264B1Cu;
    // 0x264b1c: 0xc0992b2  jal         func_264AC8
    ctx->pc = 0x264B1Cu;
    SET_GPR_U32(ctx, 31, 0x264B24u);
    ctx->pc = 0x264B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B1Cu;
    // 0x264b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264AC8u, 0x264B1Cu, 0x264B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B24u;
label_264b24:
    // 0x264b24: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x264B24u;
    {
        const bool branch_taken_0x264b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B24u;
        // 0x264b28: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b24) {
            ctx->pc = 0x264BD4u;
            goto label_264bd4;
        }
    }
    ctx->pc = 0x264B2Cu;
    // 0x264b2c: 0x12110029  beq         $s0, $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x264B2Cu;
    {
        const bool branch_taken_0x264b2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x264B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B2Cu;
        // 0x264b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b2c) {
            ctx->pc = 0x264BD4u;
            goto label_264bd4;
        }
    }
    ctx->pc = 0x264B34u;
    // 0x264b34: 0xc099238  jal         func_2648E0
    ctx->pc = 0x264B34u;
    SET_GPR_U32(ctx, 31, 0x264B3Cu);
    ctx->pc = 0x264B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B34u;
    // 0x264b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2648E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2648E0u, 0x264B34u, 0x264B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B3Cu;
label_264b3c:
    // 0x264b3c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x264B3Cu;
    {
        const bool branch_taken_0x264b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B3Cu;
        // 0x264b40: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b3c) {
            ctx->pc = 0x264BD4u;
            goto label_264bd4;
        }
    }
    ctx->pc = 0x264B44u;
    // 0x264b44: 0xc09921a  jal         func_264868
    ctx->pc = 0x264B44u;
    SET_GPR_U32(ctx, 31, 0x264B4Cu);
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x264B44u, 0x264B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B4Cu;
label_264b4c:
    // 0x264b4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x264b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b50: 0x8f83a304  lw          $v1, -0x5CFC($gp)
    ctx->pc = 0x264b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943492)));
    // 0x264b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264b58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264B58u;
    {
        const bool branch_taken_0x264b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B58u;
        // 0x264b5c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b58) {
            ctx->pc = 0x264B68u;
            goto label_264b68;
        }
    }
    ctx->pc = 0x264B60u;
    // 0x264b60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x264b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264b64: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x264b64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_264b68:
    // 0x264b68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x264b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264b6c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264B6Cu;
    {
        const bool branch_taken_0x264b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B6Cu;
        // 0x264b70: 0x8f85a31c  lw          $a1, -0x5CE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b6c) {
            ctx->pc = 0x264B84u;
            goto label_264b84;
        }
    }
    ctx->pc = 0x264B74u;
    // 0x264b74: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x264b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x264b78: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x264b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x264b7c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x264b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x264b80: 0x8f85a31c  lw          $a1, -0x5CE4($gp)
    ctx->pc = 0x264b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943516)));
label_264b84:
    // 0x264b84: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x264b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x264b88: 0x8f84a318  lw          $a0, -0x5CE8($gp)
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943512)));
    // 0x264b8c: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x264b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264b90: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x264b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264b94: 0x824018  mult        $t0, $a0, $v0
    ctx->pc = 0x264b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x264b98: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x264b98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x264b9c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x264b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x264ba0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x264ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x264ba4: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x264ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x264ba8: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x264ba8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264bac: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x264bacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x264bb0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264BB0u;
    {
        const bool branch_taken_0x264bb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x264BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BB0u;
        // 0x264bb4: 0x8f82b8b8  lw          $v0, -0x4748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bb0) {
            ctx->pc = 0x264BC8u;
            goto label_264bc8;
        }
    }
    ctx->pc = 0x264BB8u;
    // 0x264bb8: 0x8f82b8b4  lw          $v0, -0x474C($gp)
    ctx->pc = 0x264bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949044)));
    // 0x264bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x264bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264BC0u;
    {
        const bool branch_taken_0x264bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BC0u;
        // 0x264bc4: 0xaf82b8b4  sw          $v0, -0x474C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bc0) {
            ctx->pc = 0x264BD0u;
            goto label_264bd0;
        }
    }
    ctx->pc = 0x264BC8u;
label_264bc8:
    // 0x264bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x264bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264bcc: 0xaf82b8b8  sw          $v0, -0x4748($gp)
    ctx->pc = 0x264bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949048), GPR_U32(ctx, 2));
label_264bd0:
    // 0x264bd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_264bd4:
    // 0x264bd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x264BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BDCu;
        // 0x264be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264BE4u;
}
