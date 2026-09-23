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

// Function: menuitemGfx
// Address: 0x20cf00 - 0x20cff4
void menuitemGfx_0x20cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuitemGfx_0x20cf00");
#endif

    switch (ctx->pc) {
        case 0x20cf84u: goto label_20cf84;
        case 0x20cf98u: goto label_20cf98;
        case 0x20cfdcu: goto label_20cfdc;
        default: break;
    }

    ctx->pc = 0x20cf00u;

    // 0x20cf00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20cf04: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20cf08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x20cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x20cf0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20cf10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cf10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cf14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20cf18: 0x246499f0  addiu       $a0, $v1, -0x6610
    ctx->pc = 0x20cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x20cf1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20cf20: 0x8c6299f0  lw          $v0, -0x6610($v1)
    ctx->pc = 0x20cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F0u));
    // 0x20cf24: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x20cf24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20cf28: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x20cf28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x20cf2c: 0x9624000e  lhu         $a0, 0xE($s1)
    ctx->pc = 0x20cf2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x20cf30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cf34: 0x8f869c68  lw          $a2, -0x6398($gp)
    ctx->pc = 0x20cf34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20cf38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20cf3c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20cf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20cf40: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x20cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20cf44: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CF44u;
    {
        const bool branch_taken_0x20cf44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x20CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF44u;
        // 0x20cf48: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf44) {
            ctx->pc = 0x20CF68u;
            goto label_20cf68;
        }
    }
    ctx->pc = 0x20CF4Cu;
    // 0x20cf4c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x20cf4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20cf50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20cf54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CF54u;
    {
        const bool branch_taken_0x20cf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF54u;
        // 0x20cf58: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf54) {
            ctx->pc = 0x20CF74u;
            goto label_20cf74;
        }
    }
    ctx->pc = 0x20CF5Cu;
    // 0x20cf5c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20cf60: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CF60u;
    {
        const bool branch_taken_0x20cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20cf60) {
            ctx->pc = 0x20CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CF60u;
            // 0x20cf64: 0x36520070  ori         $s2, $s2, 0x70 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)112);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CF78u;
            goto label_20cf78;
        }
    }
    ctx->pc = 0x20CF68u;
label_20cf68:
    // 0x20cf68: 0x3c12557f  lui         $s2, 0x557F
    ctx->pc = 0x20cf68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21887 << 16));
    // 0x20cf6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20CF6Cu;
    {
        const bool branch_taken_0x20cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF6Cu;
        // 0x20cf70: 0x3652557f  ori         $s2, $s2, 0x557F (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)21887);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf6c) {
            ctx->pc = 0x20CF78u;
            goto label_20cf78;
        }
    }
    ctx->pc = 0x20CF74u;
label_20cf74:
    // 0x20cf74: 0x36520070  ori         $s2, $s2, 0x70
    ctx->pc = 0x20cf74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)112);
label_20cf78:
    // 0x20cf78: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20cf7c: 0xc0832a4  jal         func_20CA90
    ctx->pc = 0x20CF7Cu;
    SET_GPR_U32(ctx, 31, 0x20CF84u);
    ctx->pc = 0x20CF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF7Cu;
    // 0x20cf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CA90u, 0x20CF7Cu, 0x20CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF84u;
label_20cf84:
    // 0x20cf84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20CF84u;
    {
        const bool branch_taken_0x20cf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF84u;
        // 0x20cf88: 0x2a0204de  slti        $v0, $s0, 0x4DE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1246) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf84) {
            ctx->pc = 0x20CFA0u;
            goto label_20cfa0;
        }
    }
    ctx->pc = 0x20CF8Cu;
    // 0x20cf8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cf90: 0xc0832a8  jal         func_20CAA0
    ctx->pc = 0x20CF90u;
    SET_GPR_U32(ctx, 31, 0x20CF98u);
    ctx->pc = 0x20CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF90u;
    // 0x20cf94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAA0u, 0x20CF90u, 0x20CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF98u;
label_20cf98:
    // 0x20cf98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cf9c: 0x2a0204de  slti        $v0, $s0, 0x4DE
    ctx->pc = 0x20cf9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1246) ? 1 : 0);
label_20cfa0:
    // 0x20cfa0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CFA0u;
    {
        const bool branch_taken_0x20cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFA0u;
        // 0x20cfa4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfa0) {
            ctx->pc = 0x20CFC8u;
            goto label_20cfc8;
        }
    }
    ctx->pc = 0x20CFA8u;
    // 0x20cfa8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x20cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x20cfac: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x20cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x20cfb0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20cfb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20cfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cfbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cfc0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20cfc4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x20cfc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cfc8:
    // 0x20cfc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20cfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20cfccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfd4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x20CFD4u;
    SET_GPR_U32(ctx, 31, 0x20CFDCu);
    ctx->pc = 0x20CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFD4u;
    // 0x20cfd8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x20CFD4u, 0x20CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFDCu;
label_20cfdc:
    // 0x20cfdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20cfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cfe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20cfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cfe4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x20cfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cfe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20cfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x20CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFECu;
        // 0x20cff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CFF4u;
}
