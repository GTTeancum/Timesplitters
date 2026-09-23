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

// Function: storychr_pageTick
// Address: 0x23ba38 - 0x23bb90
void storychr_pageTick_0x23ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("storychr_pageTick_0x23ba38");
#endif

    switch (ctx->pc) {
        case 0x23ba6cu: goto label_23ba6c;
        case 0x23ba74u: goto label_23ba74;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23bab4u: goto label_23bab4;
        case 0x23bac0u: goto label_23bac0;
        case 0x23bac8u: goto label_23bac8;
        case 0x23bad8u: goto label_23bad8;
        case 0x23bae0u: goto label_23bae0;
        case 0x23bb3cu: goto label_23bb3c;
        case 0x23bb4cu: goto label_23bb4c;
        default: break;
    }

    ctx->pc = 0x23ba38u;

    // 0x23ba38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23ba38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23ba3c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23ba40: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23ba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23ba44: 0x24a54d08  addiu       $a1, $a1, 0x4D08
    ctx->pc = 0x23ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19720));
    // 0x23ba48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23ba48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ba50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23ba54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23ba5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23ba60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23ba64: 0xc08c086  jal         func_230218
    ctx->pc = 0x23BA64u;
    SET_GPR_U32(ctx, 31, 0x23BA6Cu);
    ctx->pc = 0x23BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA64u;
    // 0x23ba68: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23BA64u, 0x23BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA6Cu;
label_23ba6c:
    // 0x23ba6c: 0xc089584  jal         func_225610
    ctx->pc = 0x23BA6Cu;
    SET_GPR_U32(ctx, 31, 0x23BA74u);
    ctx->pc = 0x225610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225610u, 0x23BA6Cu, 0x23BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA74u;
label_23ba74:
    // 0x23ba74: 0xc08956a  jal         func_2255A8
    ctx->pc = 0x23BA74u;
    SET_GPR_U32(ctx, 31, 0x23BA7Cu);
    ctx->pc = 0x23BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA74u;
    // 0x23ba78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2255A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255A8u, 0x23BA74u, 0x23BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA7Cu;
label_23ba7c:
    // 0x23ba7c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x23ba7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x23ba80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ba84: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23BA84u;
    SET_GPR_U32(ctx, 31, 0x23BA8Cu);
    ctx->pc = 0x23BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA84u;
    // 0x23ba88: 0xaf909f54  sw          $s0, -0x60AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23BA84u, 0x23BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA8Cu;
label_23ba8c:
    // 0x23ba8c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ba90: 0x2784b738  addiu       $a0, $gp, -0x48C8
    ctx->pc = 0x23ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23ba94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ba98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ba9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23baa0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23baa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23baa4: 0x1465002f  bne         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x23BAA4u;
    {
        const bool branch_taken_0x23baa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x23BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAA4u;
        // 0x23baa8: 0x3c140035  lui         $s4, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baa4) {
            ctx->pc = 0x23BB64u;
            goto label_23bb64;
        }
    }
    ctx->pc = 0x23BAACu;
    // 0x23baac: 0xc08e03e  jal         func_2380F8
    ctx->pc = 0x23BAACu;
    SET_GPR_U32(ctx, 31, 0x23BAB4u);
    ctx->pc = 0x2380F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2380F8u, 0x23BAACu, 0x23BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAB4u;
label_23bab4:
    // 0x23bab4: 0x26844cf8  addiu       $a0, $s4, 0x4CF8
    ctx->pc = 0x23bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 19704));
    // 0x23bab8: 0xc08c46a  jal         func_2311A8
    ctx->pc = 0x23BAB8u;
    SET_GPR_U32(ctx, 31, 0x23BAC0u);
    ctx->pc = 0x23BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAB8u;
    // 0x23babc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2311A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2311A8u, 0x23BAB8u, 0x23BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAC0u;
label_23bac0:
    // 0x23bac0: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23BAC0u;
    SET_GPR_U32(ctx, 31, 0x23BAC8u);
    ctx->pc = 0x23BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAC0u;
    // 0x23bac4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23BAC0u, 0x23BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAC8u;
label_23bac8:
    // 0x23bac8: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23bacc: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x23BACCu;
    {
        const bool branch_taken_0x23bacc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BACCu;
        // 0x23bad0: 0x3c1301fc  lui         $s3, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bacc) {
            ctx->pc = 0x23BB64u;
            goto label_23bb64;
        }
    }
    ctx->pc = 0x23BAD4u;
    // 0x23bad4: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x23bad4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
label_23bad8:
    // 0x23bad8: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23BAD8u;
    SET_GPR_U32(ctx, 31, 0x23BAE0u);
    ctx->pc = 0x23BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAD8u;
    // 0x23badc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23BAD8u, 0x23BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAE0u;
label_23bae0:
    // 0x23bae0: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x23bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x23bae4: 0x266511f8  addiu       $a1, $s3, 0x11F8
    ctx->pc = 0x23bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4600));
    // 0x23bae8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x23bae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23baec: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x23baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x23baf0: 0x8f849dd8  lw          $a0, -0x6228($gp)
    ctx->pc = 0x23baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x23baf4: 0x2645c338  addiu       $a1, $s2, -0x3CC8
    ctx->pc = 0x23baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951736));
    // 0x23baf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23bafc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23bb00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bb04: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x23bb04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23bb08: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x23bb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x23bb0c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x23bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23bb10: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BB10u;
    {
        const bool branch_taken_0x23bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x23bb10) {
            ctx->pc = 0x23BB34u;
            goto label_23bb34;
        }
    }
    ctx->pc = 0x23BB18u;
    // 0x23bb18: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x23bb18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x23bb1c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BB1Cu;
    {
        const bool branch_taken_0x23bb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB1Cu;
        // 0x23bb20: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb1c) {
            ctx->pc = 0x23BB34u;
            goto label_23bb34;
        }
    }
    ctx->pc = 0x23BB24u;
    // 0x23bb24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bb28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bb2c: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x23bb2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x23bb30: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x23bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_23bb34:
    // 0x23bb34: 0xc08e00a  jal         func_238028
    ctx->pc = 0x23BB34u;
    SET_GPR_U32(ctx, 31, 0x23BB3Cu);
    ctx->pc = 0x23BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB34u;
    // 0x23bb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238028u, 0x23BB34u, 0x23BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB3Cu;
label_23bb3c:
    // 0x23bb3c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x23bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23bb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23bb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb44: 0xc08e136  jal         func_2384D8
    ctx->pc = 0x23BB44u;
    SET_GPR_U32(ctx, 31, 0x23BB4Cu);
    ctx->pc = 0x23BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB44u;
    // 0x23bb48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384D8u, 0x23BB44u, 0x23BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB4Cu;
label_23bb4c:
    // 0x23bb4c: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23bb50: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23bb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bb54: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x23BB54u;
    {
        const bool branch_taken_0x23bb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB54u;
        // 0x23bb58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb54) {
            ctx->pc = 0x23BAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bad8;
        }
    }
    ctx->pc = 0x23BB5Cu;
    // 0x23bb5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23BB5Cu;
    {
        const bool branch_taken_0x23bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB5Cu;
        // 0x23bb60: 0x26854cf8  addiu       $a1, $s4, 0x4CF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 19704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb5c) {
            ctx->pc = 0x23BB6Cu;
            goto label_23bb6c;
        }
    }
    ctx->pc = 0x23BB64u;
label_23bb64:
    // 0x23bb64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb68: 0x26854cf8  addiu       $a1, $s4, 0x4CF8
    ctx->pc = 0x23bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 19704));
label_23bb6c:
    // 0x23bb6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23bb70: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23bb70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23bb74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23bb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23bb78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23bb78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bb7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23bb7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bb80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23bb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bb88: 0x808c434  j           func_2310D0
    ctx->pc = 0x23BB88u;
    ctx->pc = 0x23BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB88u;
    // 0x23bb8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310D0u;
    splitpageTick_0x2310d0(rdram, ctx, runtime); return;
    ctx->pc = 0x23BB90u;
}
