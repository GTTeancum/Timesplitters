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

// Function: nplayers_pageTick
// Address: 0x23fd70 - 0x23ff4c
void nplayers_pageTick_0x23fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("nplayers_pageTick_0x23fd70");
#endif

    switch (ctx->pc) {
        case 0x23fd90u: goto label_23fd90;
        case 0x23fd9cu: goto label_23fd9c;
        case 0x23fda4u: goto label_23fda4;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fdb8u: goto label_23fdb8;
        case 0x23fdc8u: goto label_23fdc8;
        case 0x23fdf8u: goto label_23fdf8;
        case 0x23fe80u: goto label_23fe80;
        case 0x23fe90u: goto label_23fe90;
        case 0x23fea4u: goto label_23fea4;
        case 0x23feb0u: goto label_23feb0;
        case 0x23fef0u: goto label_23fef0;
        case 0x23fef8u: goto label_23fef8;
        case 0x23ff24u: goto label_23ff24;
        case 0x23ff30u: goto label_23ff30;
        default: break;
    }

    ctx->pc = 0x23fd70u;

    // 0x23fd70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fd74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23fd78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23fd7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23fd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fd84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23fd88: 0xc080c0c  jal         func_203030
    ctx->pc = 0x23FD88u;
    SET_GPR_U32(ctx, 31, 0x23FD90u);
    ctx->pc = 0x23FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD88u;
    // 0x23fd8c: 0x3c120035  lui         $s2, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203030u, 0x23FD88u, 0x23FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD90u;
label_23fd90:
    // 0x23fd90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd94: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23FD94u;
    SET_GPR_U32(ctx, 31, 0x23FD9Cu);
    ctx->pc = 0x23FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD94u;
    // 0x23fd98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23FD94u, 0x23FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD9Cu;
label_23fd9c:
    // 0x23fd9c: 0xc08c050  jal         func_230140
    ctx->pc = 0x23FD9Cu;
    SET_GPR_U32(ctx, 31, 0x23FDA4u);
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x23FD9Cu, 0x23FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FDA4u;
label_23fda4:
    // 0x23fda4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fda8: 0xc08c086  jal         func_230218
    ctx->pc = 0x23FDA8u;
    SET_GPR_U32(ctx, 31, 0x23FDB0u);
    ctx->pc = 0x23FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FDA8u;
    // 0x23fdac: 0x264564e0  addiu       $a1, $s2, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23FDA8u, 0x23FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FDB0u;
label_23fdb0:
    // 0x23fdb0: 0xc0903a8  jal         func_240EA0
    ctx->pc = 0x23FDB0u;
    SET_GPR_U32(ctx, 31, 0x23FDB8u);
    ctx->pc = 0x240EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240EA0u, 0x23FDB0u, 0x23FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FDB8u;
label_23fdb8:
    // 0x23fdb8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23fdbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fdc0: 0x24436460  addiu       $v1, $v0, 0x6460
    ctx->pc = 0x23fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25696));
    // 0x23fdc4: 0x0  nop
    ctx->pc = 0x23fdc4u;
    // NOP
label_23fdc8:
    // 0x23fdc8: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23fdc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23fdcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23fdd0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x23fdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x23fdd4: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x23fdd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23fdd8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x23fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x23fddc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23FDDCu;
    {
        const bool branch_taken_0x23fddc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x23fddc) {
            ctx->pc = 0x23FDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fdc8;
        }
    }
    ctx->pc = 0x23FDE4u;
    // 0x23fde4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23fde8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23fde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdec: 0x24466460  addiu       $a2, $v0, 0x6460
    ctx->pc = 0x23fdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25696));
    // 0x23fdf0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x23fdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23fdf4: 0x0  nop
    ctx->pc = 0x23fdf4u;
    // NOP
label_23fdf8:
    // 0x23fdf8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FDF8u;
    {
        const bool branch_taken_0x23fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDF8u;
        // 0x23fdfc: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdf8) {
            ctx->pc = 0x23FE24u;
            goto label_23fe24;
        }
    }
    ctx->pc = 0x23FE00u;
    // 0x23fe00: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x23fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23fe04: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x23fe04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23fe08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FE08u;
    {
        const bool branch_taken_0x23fe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE08u;
        // 0x23fe0c: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe08) {
            ctx->pc = 0x23FE1Cu;
            goto label_23fe1c;
        }
    }
    ctx->pc = 0x23FE10u;
    // 0x23fe10: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x23fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x23fe14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23FE14u;
    {
        const bool branch_taken_0x23fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE14u;
        // 0x23fe18: 0xa4620016  sh          $v0, 0x16($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe14) {
            ctx->pc = 0x23FE28u;
            goto label_23fe28;
        }
    }
    ctx->pc = 0x23FE1Cu;
label_23fe1c:
    // 0x23fe1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23FE1Cu;
    {
        const bool branch_taken_0x23fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE1Cu;
        // 0x23fe20: 0xa4600016  sh          $zero, 0x16($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe1c) {
            ctx->pc = 0x23FE28u;
            goto label_23fe28;
        }
    }
    ctx->pc = 0x23FE24u;
label_23fe24:
    // 0x23fe24: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x23fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23fe28:
    // 0x23fe28: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x23fe28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23fe2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE2Cu;
    {
        const bool branch_taken_0x23fe2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fe2c) {
            ctx->pc = 0x23FE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE2Cu;
            // 0x23fe30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE4Cu;
            goto label_23fe4c;
        }
    }
    ctx->pc = 0x23FE34u;
    // 0x23fe34: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x23fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23fe38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23fe3c: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x23fe3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23fe40: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23fe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23fe44: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x23fe44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23fe48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23fe4c:
    // 0x23fe4c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x23fe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23fe50: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x23FE50u;
    {
        const bool branch_taken_0x23fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE50u;
        // 0x23fe54: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe50) {
            ctx->pc = 0x23FDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fdf8;
        }
    }
    ctx->pc = 0x23FE58u;
    // 0x23fe58: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x23fe58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23fe5c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23fe5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23fe60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23FE60u;
    {
        const bool branch_taken_0x23fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fe60) {
            ctx->pc = 0x23FE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE60u;
            // 0x23fe64: 0xa6300004  sh          $s0, 0x4($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE68u;
            goto label_23fe68;
        }
    }
    ctx->pc = 0x23FE68u;
label_23fe68:
    // 0x23fe68: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x23fe68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23fe6c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23FE6Cu;
    {
        const bool branch_taken_0x23fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE6Cu;
        // 0x23fe70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe6c) {
            ctx->pc = 0x23FE78u;
            goto label_23fe78;
        }
    }
    ctx->pc = 0x23FE74u;
    // 0x23fe74: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x23fe74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_23fe78:
    // 0x23fe78: 0xc08a96c  jal         func_22A5B0
    ctx->pc = 0x23FE78u;
    SET_GPR_U32(ctx, 31, 0x23FE80u);
    ctx->pc = 0x23FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE78u;
    // 0x23fe7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A5B0u, 0x23FE78u, 0x23FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE80u;
label_23fe80:
    // 0x23fe80: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23FE80u;
    {
        const bool branch_taken_0x23fe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE80u;
        // 0x23fe84: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe80) {
            ctx->pc = 0x23FF34u;
            goto label_23ff34;
        }
    }
    ctx->pc = 0x23FE88u;
    // 0x23fe88: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23FE88u;
    SET_GPR_U32(ctx, 31, 0x23FE90u);
    ctx->pc = 0x23FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE88u;
    // 0x23fe8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23FE88u, 0x23FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE90u;
label_23fe90:
    // 0x23fe90: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x23fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x23fe94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FE94u;
    {
        const bool branch_taken_0x23fe94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE94u;
        // 0x23fe98: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe94) {
            ctx->pc = 0x23FEA8u;
            goto label_23fea8;
        }
    }
    ctx->pc = 0x23FE9Cu;
    // 0x23fe9c: 0xc0adae8  jal         func_2B6BA0
    ctx->pc = 0x23FE9Cu;
    SET_GPR_U32(ctx, 31, 0x23FEA4u);
    ctx->pc = 0x2B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6BA0u, 0x23FE9Cu, 0x23FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEA4u;
label_23fea4:
    // 0x23fea4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_23fea8:
    // 0x23fea8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23FEA8u;
    SET_GPR_U32(ctx, 31, 0x23FEB0u);
    ctx->pc = 0x23FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEA8u;
    // 0x23feac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23FEA8u, 0x23FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEB0u;
label_23feb0:
    // 0x23feb0: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23feb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23feb4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x23FEB4u;
    {
        const bool branch_taken_0x23feb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23feb4) {
            ctx->pc = 0x23FEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FEB4u;
            // 0x23feb8: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF14u;
            goto label_23ff14;
        }
    }
    ctx->pc = 0x23FEBCu;
    // 0x23febc: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x23febcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23fec0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23fec4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x23fec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x23fec8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23FEC8u;
    {
        const bool branch_taken_0x23fec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEC8u;
        // 0x23fecc: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fec8) {
            ctx->pc = 0x23FF14u;
            goto label_23ff14;
        }
    }
    ctx->pc = 0x23FED0u;
    // 0x23fed0: 0xaf83b730  sw          $v1, -0x48D0($gp)
    ctx->pc = 0x23fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948656), GPR_U32(ctx, 3));
    // 0x23fed4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23fed8: 0x264364e0  addiu       $v1, $s2, 0x64E0
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 25824));
    // 0x23fedc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fee0: 0x9782b730  lhu         $v0, -0x48D0($gp)
    ctx->pc = 0x23fee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23fee4: 0x24a56440  addiu       $a1, $a1, 0x6440
    ctx->pc = 0x23fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25664));
    // 0x23fee8: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23FEE8u;
    SET_GPR_U32(ctx, 31, 0x23FEF0u);
    ctx->pc = 0x23FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEE8u;
    // 0x23feec: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23FEE8u, 0x23FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEF0u;
label_23fef0:
    // 0x23fef0: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x23FEF0u;
    SET_GPR_U32(ctx, 31, 0x23FEF8u);
    ctx->pc = 0x23FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEF0u;
    // 0x23fef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x23FEF0u, 0x23FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEF8u;
label_23fef8:
    // 0x23fef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23fef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fefc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23ff00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ff04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23ff04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ff08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ff08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ff0c: 0x808c02a  j           func_2300A8
    ctx->pc = 0x23FF0Cu;
    ctx->pc = 0x23FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF0Cu;
    // 0x23ff10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    setStates_0x2300a8(rdram, ctx, runtime); return;
    ctx->pc = 0x23FF14u;
label_23ff14:
    // 0x23ff14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff18: 0x26106450  addiu       $s0, $s0, 0x6450
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25680));
    // 0x23ff1c: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23FF1Cu;
    SET_GPR_U32(ctx, 31, 0x23FF24u);
    ctx->pc = 0x23FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF1Cu;
    // 0x23ff20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23FF1Cu, 0x23FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF24u;
label_23ff24:
    // 0x23ff24: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23ff28: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23FF28u;
    SET_GPR_U32(ctx, 31, 0x23FF30u);
    ctx->pc = 0x23FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF28u;
    // 0x23ff2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23FF28u, 0x23FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF30u;
label_23ff30:
    // 0x23ff30: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23ff34:
    // 0x23ff34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23ff34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ff38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23ff38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ff3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23ff3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ff40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ff40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ff44: 0x3e00008  jr          $ra
    ctx->pc = 0x23FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF44u;
        // 0x23ff48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FF4Cu;
}
