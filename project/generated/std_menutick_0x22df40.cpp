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

// Function: std_menutick
// Address: 0x22df40 - 0x22e204
void std_menutick_0x22df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_menutick_0x22df40");
#endif

    switch (ctx->pc) {
        case 0x22df74u: goto label_22df74;
        case 0x22df90u: goto label_22df90;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfc4u: goto label_22dfc4;
        case 0x22e01cu: goto label_22e01c;
        case 0x22e100u: goto label_22e100;
        case 0x22e128u: goto label_22e128;
        case 0x22e150u: goto label_22e150;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1bcu: goto label_22e1bc;
        default: break;
    }

    ctx->pc = 0x22df40u;

    // 0x22df40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22df44: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22df48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22df4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22df50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22df50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22df58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22df5c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x22df5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22df60: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x22DF60u;
    {
        const bool branch_taken_0x22df60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF60u;
        // 0x22df64: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df60) {
            ctx->pc = 0x22E1E8u;
            goto label_22e1e8;
        }
    }
    ctx->pc = 0x22DF68u;
    // 0x22df68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22df68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df6c: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x22DF6Cu;
    SET_GPR_U32(ctx, 31, 0x22DF74u);
    ctx->pc = 0x22DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF6Cu;
    // 0x22df70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x22DF6Cu, 0x22DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF74u;
label_22df74:
    // 0x22df74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22df74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df78: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x22DF78u;
    {
        const bool branch_taken_0x22df78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF78u;
        // 0x22df7c: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df78) {
            ctx->pc = 0x22E1E8u;
            goto label_22e1e8;
        }
    }
    ctx->pc = 0x22DF80u;
    // 0x22df80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df84: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x22df84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22df88: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x22df8c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_22df90:
    // 0x22df90: 0xa71004  sllv        $v0, $a3, $a1
    ctx->pc = 0x22df90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x22df94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22df98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DF98u;
    {
        const bool branch_taken_0x22df98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF98u;
        // 0x22df9c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df98) {
            ctx->pc = 0x22DFACu;
            goto label_22dfac;
        }
    }
    ctx->pc = 0x22DFA0u;
    // 0x22dfa0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x22dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22dfa4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22DFA4u;
    {
        const bool branch_taken_0x22dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dfa4) {
            ctx->pc = 0x22DFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DFA4u;
            // 0x22dfa8: 0xa6420004  sh          $v0, 0x4($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E010u;
            goto label_22e010;
        }
    }
    ctx->pc = 0x22DFACu;
label_22dfac:
    // 0x22dfac: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x22dfacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22dfb0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22DFB0u;
    {
        const bool branch_taken_0x22dfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFB0u;
        // 0x22dfb4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfb0) {
            ctx->pc = 0x22DF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22df90;
        }
    }
    ctx->pc = 0x22DFB8u;
label_22dfb8:
    // 0x22dfb8: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x22dfb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22dfbc: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x22DFBCu;
    SET_GPR_U32(ctx, 31, 0x22DFC4u);
    ctx->pc = 0x22DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFBCu;
    // 0x22dfc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x22DFBCu, 0x22DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFC4u;
label_22dfc4:
    // 0x22dfc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22dfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dfc8: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22DFC8u;
    {
        const bool branch_taken_0x22dfc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFC8u;
        // 0x22dfcc: 0x8f86a004  lw          $a2, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfc8) {
            ctx->pc = 0x22E088u;
            goto label_22e088;
        }
    }
    ctx->pc = 0x22DFD0u;
    // 0x22dfd0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x22dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22dfd4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x22dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22dfd8: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22dfdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22dfe0: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x22dfe0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x22dfe4: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x22dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22dfe8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x22dfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22dfec: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x22dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22dff0: 0x5c600011  bgtzl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x22DFF0u;
    {
        const bool branch_taken_0x22dff0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x22dff0) {
            ctx->pc = 0x22DFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DFF0u;
            // 0x22dff4: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E038u;
            goto label_22e038;
        }
    }
    ctx->pc = 0x22DFF8u;
    // 0x22dff8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x22dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22dffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22e000: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x22e000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22e004: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x22e004u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x22e008: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22E008u;
    {
        const bool branch_taken_0x22e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E008u;
        // 0x22e00c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e008) {
            ctx->pc = 0x22E058u;
            goto label_22e058;
        }
    }
    ctx->pc = 0x22E010u;
label_22e010:
    // 0x22e010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e014: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x22E014u;
    SET_GPR_U32(ctx, 31, 0x22E01Cu);
    ctx->pc = 0x22E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E014u;
    // 0x22e018: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x22E014u, 0x22E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E01Cu;
label_22e01c:
    // 0x22e01c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x22e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22e020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e024: 0x2403ffc3  addiu       $v1, $zero, -0x3D
    ctx->pc = 0x22e024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x22e028: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22e02c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22e030: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x22E030u;
    {
        const bool branch_taken_0x22e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E030u;
        // 0x22e034: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e030) {
            ctx->pc = 0x22DFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dfb8;
        }
    }
    ctx->pc = 0x22E038u;
label_22e038:
    // 0x22e038: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22e03c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22e03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22e040: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E040u;
    {
        const bool branch_taken_0x22e040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e040) {
            ctx->pc = 0x22E044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E040u;
            // 0x22e044: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E060u;
            goto label_22e060;
        }
    }
    ctx->pc = 0x22E048u;
    // 0x22e048: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x22e048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22e04c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x22e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e050: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x22e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x22e054: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22e054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_22e058:
    // 0x22e058: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x22e058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22e05c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x22e05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_22e060:
    // 0x22e060: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22e064: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x22e064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22e068: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E068u;
    {
        const bool branch_taken_0x22e068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e068) {
            ctx->pc = 0x22E06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E068u;
            // 0x22e06c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E090u;
            goto label_22e090;
        }
    }
    ctx->pc = 0x22E070u;
    // 0x22e070: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22e074: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x22e074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22e078: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x22e078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e07c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22e080: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22e080u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22e084: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_22e088:
    // 0x22e088: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22e08c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x22e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_22e090:
    // 0x22e090: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x22e090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x22e094: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22E094u;
    {
        const bool branch_taken_0x22e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E094u;
        // 0x22e098: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e094) {
            ctx->pc = 0x22E0F8u;
            goto label_22e0f8;
        }
    }
    ctx->pc = 0x22E09Cu;
    // 0x22e09c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x22e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22e0a0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x22e0a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22e0a8: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22E0A8u;
    {
        const bool branch_taken_0x22e0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22e0a8) {
            ctx->pc = 0x22E0F8u;
            goto label_22e0f8;
        }
    }
    ctx->pc = 0x22E0B0u;
    // 0x22e0b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x22e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22e0b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22e0b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22e0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22e0bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E0BCu;
    {
        const bool branch_taken_0x22e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0BCu;
        // 0x22e0c0: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0bc) {
            ctx->pc = 0x22E0CCu;
            goto label_22e0cc;
        }
    }
    ctx->pc = 0x22E0C4u;
    // 0x22e0c4: 0x2402028f  addiu       $v0, $zero, 0x28F
    ctx->pc = 0x22e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x22e0c8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x22e0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22e0cc:
    // 0x22e0cc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x22e0ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x22e0d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E0D0u;
    {
        const bool branch_taken_0x22e0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0D0u;
        // 0x22e0d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0d0) {
            ctx->pc = 0x22E0F8u;
            goto label_22e0f8;
        }
    }
    ctx->pc = 0x22E0D8u;
    // 0x22e0d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x22e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e0dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e0e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22e0e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e0e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e0f0: 0x808b0c2  j           func_22C308
    ctx->pc = 0x22E0F0u;
    ctx->pc = 0x22E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0F0u;
    // 0x22e0f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x22E0F8u;
label_22e0f8:
    // 0x22e0f8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22E0F8u;
    SET_GPR_U32(ctx, 31, 0x22E100u);
    ctx->pc = 0x22E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0F8u;
    // 0x22e0fc: 0x8f84a008  lw          $a0, -0x5FF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22E0F8u, 0x22E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E100u;
label_22e100:
    // 0x22e100: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x22e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x22e104: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22E104u;
    {
        const bool branch_taken_0x22e104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e104) {
            ctx->pc = 0x22E1A0u;
            goto label_22e1a0;
        }
    }
    ctx->pc = 0x22E10Cu;
    // 0x22e10c: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x22e10cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x22e110: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x22e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x22e114: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x22E114u;
    {
        const bool branch_taken_0x22e114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E114u;
        // 0x22e118: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e114) {
            ctx->pc = 0x22E1ECu;
            goto label_22e1ec;
        }
    }
    ctx->pc = 0x22E11Cu;
    // 0x22e11c: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x22e11cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22e120: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x22E120u;
    SET_GPR_U32(ctx, 31, 0x22E128u);
    ctx->pc = 0x22E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E120u;
    // 0x22e124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x22E120u, 0x22E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E128u;
label_22e128:
    // 0x22e128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e12c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22E12Cu;
    {
        const bool branch_taken_0x22e12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e12c) {
            ctx->pc = 0x22E130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E12Cu;
            // 0x22e130: 0x9623000a  lhu         $v1, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E15Cu;
            goto label_22e15c;
        }
    }
    ctx->pc = 0x22E134u;
    // 0x22e134: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x22e134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22e138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e13c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E13Cu;
    {
        const bool branch_taken_0x22e13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e13c) {
            ctx->pc = 0x22E140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E13Cu;
            // 0x22e140: 0x9623000a  lhu         $v1, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E15Cu;
            goto label_22e15c;
        }
    }
    ctx->pc = 0x22E144u;
    // 0x22e144: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x22e144u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22e148: 0xc08b77e  jal         func_22DDF8
    ctx->pc = 0x22E148u;
    SET_GPR_U32(ctx, 31, 0x22E150u);
    ctx->pc = 0x22E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E148u;
    // 0x22e14c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDF8u, 0x22E148u, 0x22E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E150u;
label_22e150:
    // 0x22e150: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x22e150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22e154: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22E154u;
    {
        const bool branch_taken_0x22e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E154u;
        // 0x22e158: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e154) {
            ctx->pc = 0x22E1E8u;
            goto label_22e1e8;
        }
    }
    ctx->pc = 0x22E15Cu;
label_22e15c:
    // 0x22e15c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x22e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x22e160: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22E160u;
    {
        const bool branch_taken_0x22e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E160u;
        // 0x22e164: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e160) {
            ctx->pc = 0x22E1ECu;
            goto label_22e1ec;
        }
    }
    ctx->pc = 0x22E168u;
    // 0x22e168: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22e16c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22E16Cu;
    {
        const bool branch_taken_0x22e16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E16Cu;
        // 0x22e170: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e16c) {
            ctx->pc = 0x22E1ECu;
            goto label_22e1ec;
        }
    }
    ctx->pc = 0x22E174u;
    // 0x22e174: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x22e174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22e178: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22E178u;
    {
        const bool branch_taken_0x22e178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E178u;
        // 0x22e17c: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e178) {
            ctx->pc = 0x22E1F0u;
            goto label_22e1f0;
        }
    }
    ctx->pc = 0x22E180u;
    // 0x22e180: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22e184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e18c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e190: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e198: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x22E198u;
    ctx->pc = 0x22E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E198u;
    // 0x22e19c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x22E1A0u;
label_22e1a0:
    // 0x22e1a0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22E1A0u;
    SET_GPR_U32(ctx, 31, 0x22E1A8u);
    ctx->pc = 0x22E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1A0u;
    // 0x22e1a4: 0x8f84a008  lw          $a0, -0x5FF8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22E1A0u, 0x22E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1A8u;
label_22e1a8:
    // 0x22e1a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22e1ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22E1ACu;
    {
        const bool branch_taken_0x22e1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1ACu;
        // 0x22e1b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1ac) {
            ctx->pc = 0x22E1E8u;
            goto label_22e1e8;
        }
    }
    ctx->pc = 0x22E1B4u;
    // 0x22e1b4: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x22E1B4u;
    SET_GPR_U32(ctx, 31, 0x22E1BCu);
    ctx->pc = 0x22E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1B4u;
    // 0x22e1b8: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x22E1B4u, 0x22E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1BCu;
label_22e1bc:
    // 0x22e1bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1c0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22E1C0u;
    {
        const bool branch_taken_0x22e1c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1C0u;
        // 0x22e1c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1c0) {
            ctx->pc = 0x22E1ECu;
            goto label_22e1ec;
        }
    }
    ctx->pc = 0x22E1C8u;
    // 0x22e1c8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x22e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22e1cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e1d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e1d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e1d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e1e0: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x22E1E0u;
    ctx->pc = 0x22E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1E0u;
    // 0x22e1e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x22E1E8u;
label_22e1e8:
    // 0x22e1e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e1ec:
    // 0x22e1ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e1f0:
    // 0x22e1f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e1f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1FCu;
        // 0x22e200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E204u;
}
