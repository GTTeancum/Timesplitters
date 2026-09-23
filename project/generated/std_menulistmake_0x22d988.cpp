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

// Function: std_menulistmake
// Address: 0x22d988 - 0x22daf4
void std_menulistmake_0x22d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_menulistmake_0x22d988");
#endif

    switch (ctx->pc) {
        case 0x22da18u: goto label_22da18;
        case 0x22da3cu: goto label_22da3c;
        default: break;
    }

    ctx->pc = 0x22d988u;

    // 0x22d988: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22d98c: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x22d98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22d990: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22d994: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22d998: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22d99c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22d99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22d9a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22d9a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22d9a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22d9ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22d9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d9b4: 0x2654000c  addiu       $s4, $s2, 0xC
    ctx->pc = 0x22d9b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x22d9b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22d9bc: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x22d9c0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22d9c4: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x22d9c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x22d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22d9cc: 0x246699f0  addiu       $a2, $v1, -0x6610
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x22d9d0: 0x86450006  lh          $a1, 0x6($s2)
    ctx->pc = 0x22d9d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x22d9d4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x22d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x22d9d8: 0x8cc4005c  lw          $a0, 0x5C($a2)
    ctx->pc = 0x22d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x22d9dc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22d9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d9e0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x22d9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x22d9e4: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x22d9e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x22d9e8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x22d9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9ec: 0xa7a50002  sh          $a1, 0x2($sp)
    ctx->pc = 0x22d9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x22d9f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x22d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x22d9f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22d9f8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22d9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22d9fc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22D9FCu;
    {
        const bool branch_taken_0x22d9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9FCu;
        // 0x22da00: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9fc) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA04u;
    // 0x22da04: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x22da04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22da08: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22da08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22da0c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22DA0Cu;
    {
        const bool branch_taken_0x22da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA0Cu;
        // 0x22da10: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da0c) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA14u;
    // 0x22da14: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x22da14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_22da18:
    // 0x22da18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da1c: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x22da1cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22da20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22da20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da24: 0x8ec30058  lw          $v1, 0x58($s6)
    ctx->pc = 0x22da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x22da28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22da28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22da30: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x22da30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x22da34: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x22DA34u;
    SET_GPR_U32(ctx, 31, 0x22DA3Cu);
    ctx->pc = 0x22DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA34u;
    // 0x22da38: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x22DA34u, 0x22DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA3Cu;
label_22da3c:
    // 0x22da3c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x22da3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x22da40: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x22da40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22da44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22da44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22da48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22da48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22da4c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DA4Cu;
    {
        const bool branch_taken_0x22da4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA4Cu;
        // 0x22da50: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da4c) {
            ctx->pc = 0x22DA68u;
            goto label_22da68;
        }
    }
    ctx->pc = 0x22DA54u;
    // 0x22da54: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22da58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x22da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22da5c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22da60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22DA60u;
    {
        const bool branch_taken_0x22da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA60u;
        // 0x22da64: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da60) {
            ctx->pc = 0x22DA74u;
            goto label_22da74;
        }
    }
    ctx->pc = 0x22DA68u;
label_22da68:
    // 0x22da68: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22da6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x22da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22da70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22da74:
    // 0x22da74: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x22da74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22da78: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x22da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22da7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22da7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22da80: 0x96440002  lhu         $a0, 0x2($s2)
    ctx->pc = 0x22da80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x22da84: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x22da88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22da8c: 0xa7a50002  sh          $a1, 0x2($sp)
    ctx->pc = 0x22da8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x22da90: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x22da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x22da94: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22da94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22da98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22da9c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22da9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22daa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DAA0u;
    {
        const bool branch_taken_0x22daa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAA0u;
        // 0x22daa4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daa0) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DAA8u;
    // 0x22daa8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x22daa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22daac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22daacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22dab0: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x22DAB0u;
    {
        const bool branch_taken_0x22dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dab0) {
            ctx->pc = 0x22DAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DAB0u;
            // 0x22dab4: 0x86420004  lh          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22da18;
        }
    }
    ctx->pc = 0x22DAB8u;
label_22dab8:
    // 0x22dab8: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x22dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x22dabc: 0x2751023  subu        $v0, $s3, $s5
    ctx->pc = 0x22dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x22dac0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x22dac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x22dac4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22dac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22dac8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22dacc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22daccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22dad0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22dad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22dad4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22dad4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22dad8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22dad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22dadc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22dadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dae0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x22dae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x22dae4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22dae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dae8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22dae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22daec: 0x3e00008  jr          $ra
    ctx->pc = 0x22DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAECu;
        // 0x22daf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DAF4u;
}
