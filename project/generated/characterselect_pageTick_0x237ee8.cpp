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

// Function: characterselect_pageTick
// Address: 0x237ee8 - 0x238028
void characterselect_pageTick_0x237ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("characterselect_pageTick_0x237ee8");
#endif

    switch (ctx->pc) {
        case 0x237f1cu: goto label_237f1c;
        case 0x237f24u: goto label_237f24;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f64u: goto label_237f64;
        case 0x237f70u: goto label_237f70;
        case 0x237f78u: goto label_237f78;
        case 0x237f88u: goto label_237f88;
        case 0x237f90u: goto label_237f90;
        case 0x237fa8u: goto label_237fa8;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fd4u: goto label_237fd4;
        case 0x237fe4u: goto label_237fe4;
        default: break;
    }

    ctx->pc = 0x237ee8u;

    // 0x237ee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x237ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x237eec: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x237eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x237ef0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x237ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x237ef4: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8
    ctx->pc = 0x237ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
    // 0x237ef8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x237ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237f00: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x237f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x237f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x237f0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x237f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x237f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x237f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237f14: 0xc08c086  jal         func_230218
    ctx->pc = 0x237F14u;
    SET_GPR_U32(ctx, 31, 0x237F1Cu);
    ctx->pc = 0x237F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F14u;
    // 0x237f18: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x237F14u, 0x237F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F1Cu;
label_237f1c:
    // 0x237f1c: 0xc08956c  jal         func_2255B0
    ctx->pc = 0x237F1Cu;
    SET_GPR_U32(ctx, 31, 0x237F24u);
    ctx->pc = 0x2255B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255B0u, 0x237F1Cu, 0x237F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F24u;
label_237f24:
    // 0x237f24: 0xc08956a  jal         func_2255A8
    ctx->pc = 0x237F24u;
    SET_GPR_U32(ctx, 31, 0x237F2Cu);
    ctx->pc = 0x237F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F24u;
    // 0x237f28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2255A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255A8u, 0x237F24u, 0x237F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F2Cu;
label_237f2c:
    // 0x237f2c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x237f2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x237f30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x237f34: 0xc08a984  jal         func_22A610
    ctx->pc = 0x237F34u;
    SET_GPR_U32(ctx, 31, 0x237F3Cu);
    ctx->pc = 0x237F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F34u;
    // 0x237f38: 0xaf909f54  sw          $s0, -0x60AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x237F34u, 0x237F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F3Cu;
label_237f3c:
    // 0x237f3c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x237f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x237f40: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x237f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x237f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237f48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237f4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x237f50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x237f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237f54: 0x14650029  bne         $v1, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x237F54u;
    {
        const bool branch_taken_0x237f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x237F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F54u;
        // 0x237f58: 0x3c140035  lui         $s4, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f54) {
            ctx->pc = 0x237FFCu;
            goto label_237ffc;
        }
    }
    ctx->pc = 0x237F5Cu;
    // 0x237f5c: 0xc08e03e  jal         func_2380F8
    ctx->pc = 0x237F5Cu;
    SET_GPR_U32(ctx, 31, 0x237F64u);
    ctx->pc = 0x2380F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2380F8u, 0x237F5Cu, 0x237F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F64u;
label_237f64:
    // 0x237f64: 0x26843ec8  addiu       $a0, $s4, 0x3EC8
    ctx->pc = 0x237f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16072));
    // 0x237f68: 0xc08c46a  jal         func_2311A8
    ctx->pc = 0x237F68u;
    SET_GPR_U32(ctx, 31, 0x237F70u);
    ctx->pc = 0x237F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F68u;
    // 0x237f6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2311A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2311A8u, 0x237F68u, 0x237F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F70u;
label_237f70:
    // 0x237f70: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x237F70u;
    SET_GPR_U32(ctx, 31, 0x237F78u);
    ctx->pc = 0x237F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F70u;
    // 0x237f74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x237F70u, 0x237F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F78u;
label_237f78:
    // 0x237f78: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x237f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x237f7c: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x237F7Cu;
    {
        const bool branch_taken_0x237f7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F7Cu;
        // 0x237f80: 0x24130b78  addiu       $s3, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f7c) {
            ctx->pc = 0x237FFCu;
            goto label_237ffc;
        }
    }
    ctx->pc = 0x237F84u;
    // 0x237f84: 0x0  nop
    ctx->pc = 0x237f84u;
    // NOP
label_237f88:
    // 0x237f88: 0xc08828c  jal         func_220A30
    ctx->pc = 0x237F88u;
    SET_GPR_U32(ctx, 31, 0x237F90u);
    ctx->pc = 0x237F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F88u;
    // 0x237f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x237F88u, 0x237F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F90u;
label_237f90:
    // 0x237f90: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x237f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x237f94: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x237f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x237f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237f9c: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x237f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x237fa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237FA0u;
    {
        const bool branch_taken_0x237fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FA0u;
        // 0x237fa4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fa0) {
            ctx->pc = 0x237FBCu;
            goto label_237fbc;
        }
    }
    ctx->pc = 0x237FA8u;
label_237fa8:
    // 0x237fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237fac: 0x28430050  slti        $v1, $v0, 0x50
    ctx->pc = 0x237facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x237fb0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x237FB0u;
    {
        const bool branch_taken_0x237fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FB0u;
        // 0x237fb4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fb0) {
            ctx->pc = 0x237FBCu;
            goto label_237fbc;
        }
    }
    ctx->pc = 0x237FB8u;
    // 0x237fb8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x237fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_237fbc:
    // 0x237fbc: 0xc0892ec  jal         func_224BB0
    ctx->pc = 0x237FBCu;
    SET_GPR_U32(ctx, 31, 0x237FC4u);
    ctx->pc = 0x237FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FBCu;
    // 0x237fc0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BB0u, 0x237FBCu, 0x237FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FC4u;
label_237fc4:
    // 0x237fc4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x237FC4u;
    {
        const bool branch_taken_0x237fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237fc4) {
            ctx->pc = 0x237FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FC4u;
            // 0x237fc8: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237fa8;
        }
    }
    ctx->pc = 0x237FCCu;
    // 0x237fcc: 0xc08e00a  jal         func_238028
    ctx->pc = 0x237FCCu;
    SET_GPR_U32(ctx, 31, 0x237FD4u);
    ctx->pc = 0x237FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FCCu;
    // 0x237fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238028u, 0x237FCCu, 0x237FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FD4u;
label_237fd4:
    // 0x237fd4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x237fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x237fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fdc: 0xc08e136  jal         func_2384D8
    ctx->pc = 0x237FDCu;
    SET_GPR_U32(ctx, 31, 0x237FE4u);
    ctx->pc = 0x237FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FDCu;
    // 0x237fe0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384D8u, 0x237FDCu, 0x237FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FE4u;
label_237fe4:
    // 0x237fe4: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x237fe8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x237fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x237fec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x237FECu;
    {
        const bool branch_taken_0x237fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FECu;
        // 0x237ff0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fec) {
            ctx->pc = 0x237F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f88;
        }
    }
    ctx->pc = 0x237FF4u;
    // 0x237ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x237FF4u;
    {
        const bool branch_taken_0x237ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FF4u;
        // 0x237ff8: 0x26853ec8  addiu       $a1, $s4, 0x3EC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ff4) {
            ctx->pc = 0x238004u;
            goto label_238004;
        }
    }
    ctx->pc = 0x237FFCu;
label_237ffc:
    // 0x237ffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x237ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238000: 0x26853ec8  addiu       $a1, $s4, 0x3EC8
    ctx->pc = 0x238000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16072));
label_238004:
    // 0x238004: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x238004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238008: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x238008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23800c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23800cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238010: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x238010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238014: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238018: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23801c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23801cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238020: 0x808c434  j           func_2310D0
    ctx->pc = 0x238020u;
    ctx->pc = 0x238024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238020u;
    // 0x238024: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310D0u;
    splitpageTick_0x2310d0(rdram, ctx, runtime); return;
    ctx->pc = 0x238028u;
}
