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

// Function: signonplr_pageTick
// Address: 0x23e9a0 - 0x23f140
void signonplr_pageTick_0x23e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonplr_pageTick_0x23e9a0");
#endif

    switch (ctx->pc) {
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea7cu: goto label_23ea7c;
        case 0x23eae4u: goto label_23eae4;
        case 0x23eb2cu: goto label_23eb2c;
        case 0x23eb78u: goto label_23eb78;
        case 0x23ebd8u: goto label_23ebd8;
        case 0x23ebf0u: goto label_23ebf0;
        case 0x23ec38u: goto label_23ec38;
        case 0x23ec88u: goto label_23ec88;
        case 0x23ec98u: goto label_23ec98;
        case 0x23eca8u: goto label_23eca8;
        case 0x23ed2cu: goto label_23ed2c;
        case 0x23ed64u: goto label_23ed64;
        case 0x23ed84u: goto label_23ed84;
        case 0x23eda4u: goto label_23eda4;
        case 0x23eddcu: goto label_23eddc;
        case 0x23edf0u: goto label_23edf0;
        case 0x23ee30u: goto label_23ee30;
        case 0x23ee78u: goto label_23ee78;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef40u: goto label_23ef40;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efe4u: goto label_23efe4;
        case 0x23effcu: goto label_23effc;
        case 0x23f028u: goto label_23f028;
        case 0x23f048u: goto label_23f048;
        case 0x23f054u: goto label_23f054;
        case 0x23f0ecu: goto label_23f0ec;
        case 0x23f108u: goto label_23f108;
        default: break;
    }

    ctx->pc = 0x23e9a0u;

    // 0x23e9a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23e9a4: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x23e9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23e9a8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23e9ac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23e9b0: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x23e9b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x23e9b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23e9b8: 0x26c211f8  addiu       $v0, $s6, 0x11F8
    ctx->pc = 0x23e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23e9bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23e9c0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x23e9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9c4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x23e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x23e9c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23e9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23e9d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23e9d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23e9d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23e9dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e9e0: 0x9385b75a  lbu         $a1, -0x48A6($gp)
    ctx->pc = 0x23e9e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23e9e4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x23e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23e9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e9ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e9f0: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x23E9F0u;
    {
        const bool branch_taken_0x23e9f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9F0u;
        // 0x23e9f4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9f0) {
            ctx->pc = 0x23EA1Cu;
            goto label_23ea1c;
        }
    }
    ctx->pc = 0x23E9F8u;
    // 0x23e9f8: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23e9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23e9fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E9FCu;
    {
        const bool branch_taken_0x23e9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e9fc) {
            ctx->pc = 0x23EA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E9FCu;
            // 0x23ea00: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA20u;
            goto label_23ea20;
        }
    }
    ctx->pc = 0x23EA04u;
    // 0x23ea04: 0x9382b758  lbu         $v0, -0x48A8($gp)
    ctx->pc = 0x23ea04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23ea08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EA08u;
    {
        const bool branch_taken_0x23ea08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ea08) {
            ctx->pc = 0x23EA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA08u;
            // 0x23ea0c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA20u;
            goto label_23ea20;
        }
    }
    ctx->pc = 0x23EA10u;
    // 0x23ea10: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23ea10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23ea14: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EA14u;
    {
        const bool branch_taken_0x23ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea14) {
            ctx->pc = 0x23EA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA14u;
            // 0x23ea18: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA3Cu;
            goto label_23ea3c;
        }
    }
    ctx->pc = 0x23EA1Cu;
label_23ea1c:
    // 0x23ea1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x23ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_23ea20:
    // 0x23ea20: 0x2403ffc3  addiu       $v1, $zero, -0x3D
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x23ea24: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23ea28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23ea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23ea2c: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x23EA2Cu;
    SET_GPR_U32(ctx, 31, 0x23EA34u);
    ctx->pc = 0x23EA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA2Cu;
    // 0x23ea30: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x23EA2Cu, 0x23EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA34u;
label_23ea34:
    // 0x23ea34: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ea38: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23ea3c:
    // 0x23ea3c: 0x2794b738  addiu       $s4, $gp, -0x48C8
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23ea40: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23ea44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23ea44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23ea4c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23ea4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23ea50: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EA58u;
    // 0x23ea58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ea5c: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x23ea60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ea64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ea68: 0x800008  jr          $a0
    ctx->pc = 0x23EA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23EA70u: goto label_23ea70;
            case 0x23EAA8u: goto label_23eaa8;
            case 0x23EE88u: goto label_23ee88;
            case 0x23EED0u: goto label_23eed0;
            case 0x23EF90u: goto label_23ef90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EA68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23EA70u;
label_23ea70:
    // 0x23ea70: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ea74: 0xc08824c  jal         func_220930
    ctx->pc = 0x23EA74u;
    SET_GPR_U32(ctx, 31, 0x23EA7Cu);
    ctx->pc = 0x23EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA74u;
    // 0x23ea78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23EA74u, 0x23EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA7Cu;
label_23ea7c:
    // 0x23ea7c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ea80: 0x2785b798  addiu       $a1, $gp, -0x4868
    ctx->pc = 0x23ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948760));
    // 0x23ea84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23ea84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ea88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ea8c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x23ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23ea90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ea94: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x23ea98: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x23ea98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ea9c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x23ea9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23eaa0: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x23EAA0u;
    {
        const bool branch_taken_0x23eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAA0u;
        // 0x23eaa4: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaa0) {
            ctx->pc = 0x23F114u;
            goto label_23f114;
        }
    }
    ctx->pc = 0x23EAA8u;
label_23eaa8:
    // 0x23eaa8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23eaac: 0x2783b740  addiu       $v1, $gp, -0x48C0
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948672));
    // 0x23eab0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23eab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23eab8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x23eab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eabc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EABCu;
    {
        const bool branch_taken_0x23eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eabc) {
            ctx->pc = 0x23EAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EABCu;
            // 0x23eac0: 0x96450004  lhu         $a1, 0x4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EAD0u;
            goto label_23ead0;
        }
    }
    ctx->pc = 0x23EAC4u;
    // 0x23eac4: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x23eac4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23eac8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x23eac8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x23eacc: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x23eaccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_23ead0:
    // 0x23ead0: 0x2ca207d0  sltiu       $v0, $a1, 0x7D0
    ctx->pc = 0x23ead0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x23ead4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23EAD4u;
    {
        const bool branch_taken_0x23ead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ead4) {
            ctx->pc = 0x23EAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EAD4u;
            // 0x23ead8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB0Cu;
            goto label_23eb0c;
        }
    }
    ctx->pc = 0x23EADCu;
    // 0x23eadc: 0xc088224  jal         func_220890
    ctx->pc = 0x23EADCu;
    SET_GPR_U32(ctx, 31, 0x23EAE4u);
    ctx->pc = 0x23EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EADCu;
    // 0x23eae0: 0x30b0ffff  andi        $s0, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23EADCu, 0x23EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAE4u;
label_23eae4:
    // 0x23eae4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x23eae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23eae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EAE8u;
    {
        const bool branch_taken_0x23eae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAE8u;
        // 0x23eaec: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eae8) {
            ctx->pc = 0x23EB00u;
            goto label_23eb00;
        }
    }
    ctx->pc = 0x23EAF0u;
    // 0x23eaf0: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23eaf4: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x23eaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x23eaf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23EAF8u;
    {
        const bool branch_taken_0x23eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAF8u;
        // 0x23eafc: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaf8) {
            ctx->pc = 0x23EB08u;
            goto label_23eb08;
        }
    }
    ctx->pc = 0x23EB00u;
label_23eb00:
    // 0x23eb00: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23eb04: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x23eb04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_23eb08:
    // 0x23eb08: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23eb0c:
    // 0x23eb0c: 0x2783b798  addiu       $v1, $gp, -0x4868
    ctx->pc = 0x23eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948760));
    // 0x23eb10: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x23eb14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23eb18: 0x26e46400  addiu       $a0, $s7, 0x6400
    ctx->pc = 0x23eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
    // 0x23eb1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23eb20: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x23eb20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x23eb24: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x23EB24u;
    SET_GPR_U32(ctx, 31, 0x23EB2Cu);
    ctx->pc = 0x23EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB24u;
    // 0x23eb28: 0x96450004  lhu         $a1, 0x4($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x23EB24u, 0x23EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB2Cu;
label_23eb2c:
    // 0x23eb2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23eb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb30: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x23EB30u;
    {
        const bool branch_taken_0x23eb30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB30u;
        // 0x23eb34: 0x9382b75a  lbu         $v0, -0x48A6($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb30) {
            ctx->pc = 0x23EBA0u;
            goto label_23eba0;
        }
    }
    ctx->pc = 0x23EB38u;
    // 0x23eb38: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x23eb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x23eb3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23eb40: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23EB40u;
    {
        const bool branch_taken_0x23eb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB40u;
        // 0x23eb44: 0x9382b75a  lbu         $v0, -0x48A6($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb40) {
            ctx->pc = 0x23EBA0u;
            goto label_23eba0;
        }
    }
    ctx->pc = 0x23EB48u;
    // 0x23eb48: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23eb4c: 0x26c211f8  addiu       $v0, $s6, 0x11F8
    ctx->pc = 0x23eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23eb50: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x23eb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23eb54: 0x96500004  lhu         $s0, 0x4($s2)
    ctx->pc = 0x23eb54u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23eb58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23eb5c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x23eb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x23eb60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23eb64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23eb68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eb6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23eb70: 0xc088224  jal         func_220890
    ctx->pc = 0x23EB70u;
    SET_GPR_U32(ctx, 31, 0x23EB78u);
    ctx->pc = 0x23EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB70u;
    // 0x23eb74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23EB70u, 0x23EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB78u;
label_23eb78:
    // 0x23eb78: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x23eb78u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23eb7c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EB7Cu;
    {
        const bool branch_taken_0x23eb7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB7Cu;
        // 0x23eb80: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb7c) {
            ctx->pc = 0x23EB9Cu;
            goto label_23eb9c;
        }
    }
    ctx->pc = 0x23EB84u;
    // 0x23eb84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23eb8c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23eb90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eb94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23eb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x23eb98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23eb9c:
    // 0x23eb9c: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23eb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
label_23eba0:
    // 0x23eba0: 0x5440012d  bnel        $v0, $zero, . + 4 + (0x12D << 2)
    ctx->pc = 0x23EBA0u;
    {
        const bool branch_taken_0x23eba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eba0) {
            ctx->pc = 0x23EBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EBA0u;
            // 0x23eba4: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EBA8u;
    // 0x23eba8: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23eba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23ebac: 0x5440012a  bnel        $v0, $zero, . + 4 + (0x12A << 2)
    ctx->pc = 0x23EBACu;
    {
        const bool branch_taken_0x23ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ebac) {
            ctx->pc = 0x23EBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EBACu;
            // 0x23ebb0: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EBB4u;
    // 0x23ebb4: 0x9382b758  lbu         $v0, -0x48A8($gp)
    ctx->pc = 0x23ebb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23ebb8: 0x54400127  bnel        $v0, $zero, . + 4 + (0x127 << 2)
    ctx->pc = 0x23EBB8u;
    {
        const bool branch_taken_0x23ebb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ebb8) {
            ctx->pc = 0x23EBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EBB8u;
            // 0x23ebbc: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EBC0u;
    // 0x23ebc0: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x23ebc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x23ebc4: 0x54400124  bnel        $v0, $zero, . + 4 + (0x124 << 2)
    ctx->pc = 0x23EBC4u;
    {
        const bool branch_taken_0x23ebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ebc4) {
            ctx->pc = 0x23EBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EBC4u;
            // 0x23ebc8: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EBCCu;
    // 0x23ebcc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ebd0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23EBD0u;
    SET_GPR_U32(ctx, 31, 0x23EBD8u);
    ctx->pc = 0x23EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBD0u;
    // 0x23ebd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23EBD0u, 0x23EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBD8u;
label_23ebd8:
    // 0x23ebd8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23ebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23ebdc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x23EBDCu;
    {
        const bool branch_taken_0x23ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBDCu;
        // 0x23ebe0: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebdc) {
            ctx->pc = 0x23ECA0u;
            goto label_23eca0;
        }
    }
    ctx->pc = 0x23EBE4u;
    // 0x23ebe4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x23ebe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23ebe8: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x23EBE8u;
    SET_GPR_U32(ctx, 31, 0x23EBF0u);
    ctx->pc = 0x23EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBE8u;
    // 0x23ebec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x23EBE8u, 0x23EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBF0u;
label_23ebf0:
    // 0x23ebf0: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ebf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ebf8: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x23EBF8u;
    {
        const bool branch_taken_0x23ebf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ebf8) {
            ctx->pc = 0x23EBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EBF8u;
            // 0x23ebfc: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC90u;
            goto label_23ec90;
        }
    }
    ctx->pc = 0x23EC00u;
    // 0x23ec00: 0x8f86b730  lw          $a2, -0x48D0($gp)
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23ec04: 0x18c0001c  blez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x23EC04u;
    {
        const bool branch_taken_0x23ec04 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x23EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC04u;
        // 0x23ec08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec04) {
            ctx->pc = 0x23EC78u;
            goto label_23ec78;
        }
    }
    ctx->pc = 0x23EC0Cu;
    // 0x23ec0c: 0x3c0701fc  lui         $a3, 0x1FC
    ctx->pc = 0x23ec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
    // 0x23ec10: 0x8ce21488  lw          $v0, 0x1488($a3)
    ctx->pc = 0x23ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC1488u));
    // 0x23ec14: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23EC14u;
    {
        const bool branch_taken_0x23ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC14u;
        // 0x23ec18: 0x9383b738  lbu         $v1, -0x48C8($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec14) {
            ctx->pc = 0x23EC78u;
            goto label_23ec78;
        }
    }
    ctx->pc = 0x23EC1Cu;
    // 0x23ec1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ec20: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EC20u;
    {
        const bool branch_taken_0x23ec20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ec20) {
            ctx->pc = 0x23EC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC20u;
            // 0x23ec24: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC38u;
            goto label_23ec38;
        }
    }
    ctx->pc = 0x23EC28u;
    // 0x23ec28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23ec2c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23EC2Cu;
    {
        const bool branch_taken_0x23ec2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ec2c) {
            ctx->pc = 0x23EC78u;
            goto label_23ec78;
        }
    }
    ctx->pc = 0x23EC34u;
    // 0x23ec34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23ec38:
    // 0x23ec38: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x23ec38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23ec3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23EC3Cu;
    {
        const bool branch_taken_0x23ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC3Cu;
        // 0x23ec40: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec3c) {
            ctx->pc = 0x23EC78u;
            goto label_23ec78;
        }
    }
    ctx->pc = 0x23EC44u;
    // 0x23ec44: 0x24e41488  addiu       $a0, $a3, 0x1488
    ctx->pc = 0x23ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5256));
    // 0x23ec48: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x23ec48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23ec4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ec50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ec54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EC54u;
    {
        const bool branch_taken_0x23ec54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC54u;
        // 0x23ec58: 0xb41021  addu        $v0, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec54) {
            ctx->pc = 0x23EC78u;
            goto label_23ec78;
        }
    }
    ctx->pc = 0x23EC5Cu;
    // 0x23ec5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ec60: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x23ec60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ec64: 0x5083fff4  beql        $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x23EC64u;
    {
        const bool branch_taken_0x23ec64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ec64) {
            ctx->pc = 0x23EC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC64u;
            // 0x23ec68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ec38;
        }
    }
    ctx->pc = 0x23EC6Cu;
    // 0x23ec6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23ec70: 0x5082fff1  beql        $a0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23EC70u;
    {
        const bool branch_taken_0x23ec70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ec70) {
            ctx->pc = 0x23EC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC70u;
            // 0x23ec74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ec38;
        }
    }
    ctx->pc = 0x23EC78u;
label_23ec78:
    // 0x23ec78: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EC78u;
    {
        const bool branch_taken_0x23ec78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x23EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC78u;
        // 0x23ec7c: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec78) {
            ctx->pc = 0x23EC90u;
            goto label_23ec90;
        }
    }
    ctx->pc = 0x23EC80u;
    // 0x23ec80: 0xc08c052  jal         func_230148
    ctx->pc = 0x23EC80u;
    SET_GPR_U32(ctx, 31, 0x23EC88u);
    ctx->pc = 0x230148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230148u, 0x23EC80u, 0x23EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC88u;
label_23ec88:
    // 0x23ec88: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x23EC88u;
    {
        const bool branch_taken_0x23ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec88) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EC90u;
label_23ec90:
    // 0x23ec90: 0xc081546  jal         func_205518
    ctx->pc = 0x23EC90u;
    SET_GPR_U32(ctx, 31, 0x23EC98u);
    ctx->pc = 0x23EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC90u;
    // 0x23ec94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23EC90u, 0x23EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC98u;
label_23ec98:
    // 0x23ec98: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x23EC98u;
    {
        const bool branch_taken_0x23ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec98) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23ECA0u;
label_23eca0:
    // 0x23eca0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23ECA0u;
    SET_GPR_U32(ctx, 31, 0x23ECA8u);
    ctx->pc = 0x23ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECA0u;
    // 0x23eca4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23ECA0u, 0x23ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECA8u;
label_23eca8:
    // 0x23eca8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x23eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x23ecac: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23ECACu;
    {
        const bool branch_taken_0x23ecac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECACu;
        // 0x23ecb0: 0x8f88a004  lw          $t0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecac) {
            ctx->pc = 0x23ED24u;
            goto label_23ed24;
        }
    }
    ctx->pc = 0x23ECB4u;
    // 0x23ecb4: 0x26c911f8  addiu       $t1, $s6, 0x11F8
    ctx->pc = 0x23ecb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23ecb8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ecbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ecc0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x23ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x23ecc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23ecc8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x23ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x23eccc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x23ECCCu;
    {
        const bool branch_taken_0x23eccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECCCu;
        // 0x23ecd0: 0x9382b758  lbu         $v0, -0x48A8($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eccc) {
            ctx->pc = 0x23ED24u;
            goto label_23ed24;
        }
    }
    ctx->pc = 0x23ECD4u;
    // 0x23ecd4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23ECD4u;
    {
        const bool branch_taken_0x23ecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECD4u;
        // 0x23ecd8: 0x3c0301fc  lui         $v1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecd4) {
            ctx->pc = 0x23ED24u;
            goto label_23ed24;
        }
    }
    ctx->pc = 0x23ECDCu;
    // 0x23ecdc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x23ecdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ece0: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x23ece0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23ece4: 0x24633310  addiu       $v1, $v1, 0x3310
    ctx->pc = 0x23ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13072));
    // 0x23ece8: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x23ece8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23ecec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ecf0: 0xa382b758  sb          $v0, -0x48A8($gp)
    ctx->pc = 0x23ecf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948696), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ecf4: 0x2787b7a0  addiu       $a3, $gp, -0x4860
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948768));
    // 0x23ecf8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23ecfc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x23ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x23ed00: 0x9085ffff  lbu         $a1, -0x1($a0)
    ctx->pc = 0x23ed00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x23ed04: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x23ed04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23ed08: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ed0c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23ed10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23ed14: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x23ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x23ed18: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23ed1c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x23ED1Cu;
    {
        const bool branch_taken_0x23ed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED1Cu;
        // 0x23ed20: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed1c) {
            ctx->pc = 0x23EE28u;
            goto label_23ee28;
        }
    }
    ctx->pc = 0x23ED24u;
label_23ed24:
    // 0x23ed24: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23ED24u;
    SET_GPR_U32(ctx, 31, 0x23ED2Cu);
    ctx->pc = 0x23ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED24u;
    // 0x23ed28: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23ED24u, 0x23ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED2Cu;
label_23ed2c:
    // 0x23ed2c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23ed30: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x23ED30u;
    {
        const bool branch_taken_0x23ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED30u;
        // 0x23ed34: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed30) {
            ctx->pc = 0x23EE80u;
            goto label_23ee80;
        }
    }
    ctx->pc = 0x23ED38u;
    // 0x23ed38: 0x26d111f8  addiu       $s1, $s6, 0x11F8
    ctx->pc = 0x23ed38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4600));
    // 0x23ed3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ed40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ed44: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x23ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23ed48: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23ed4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x23ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x23ed50: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23ED50u;
    {
        const bool branch_taken_0x23ed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED50u;
        // 0x23ed54: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed50) {
            ctx->pc = 0x23EE28u;
            goto label_23ee28;
        }
    }
    ctx->pc = 0x23ED58u;
    // 0x23ed58: 0x96500004  lhu         $s0, 0x4($s2)
    ctx->pc = 0x23ed58u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23ed5c: 0xc088224  jal         func_220890
    ctx->pc = 0x23ED5Cu;
    SET_GPR_U32(ctx, 31, 0x23ED64u);
    ctx->pc = 0x23ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED5Cu;
    // 0x23ed60: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23ED5Cu, 0x23ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED64u;
label_23ed64:
    // 0x23ed64: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x23ed64u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23ed68: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23ED68u;
    {
        const bool branch_taken_0x23ed68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED68u;
        // 0x23ed6c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed68) {
            ctx->pc = 0x23EDC4u;
            goto label_23edc4;
        }
    }
    ctx->pc = 0x23ED70u;
    // 0x23ed70: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x23ed70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x23ed74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ed74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed78: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23ed7c: 0xc081546  jal         func_205518
    ctx->pc = 0x23ED7Cu;
    SET_GPR_U32(ctx, 31, 0x23ED84u);
    ctx->pc = 0x23ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED7Cu;
    // 0x23ed80: 0xa662000a  sh          $v0, 0xA($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23ED7Cu, 0x23ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED84u;
label_23ed84:
    // 0x23ed84: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ed88: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23ed8c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x23ed8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23ed90: 0x24423310  addiu       $v0, $v0, 0x3310
    ctx->pc = 0x23ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13072));
    // 0x23ed94: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x23ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ed98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ed9c: 0xc08824c  jal         func_220930
    ctx->pc = 0x23ED9Cu;
    SET_GPR_U32(ctx, 31, 0x23EDA4u);
    ctx->pc = 0x23EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED9Cu;
    // 0x23eda0: 0x9065ffff  lbu         $a1, -0x1($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23ED9Cu, 0x23EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA4u;
label_23eda4:
    // 0x23eda4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23eda8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23edac: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23edacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23edb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23edb4: 0x24755100  addiu       $s5, $v1, 0x5100
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 20736));
    // 0x23edb8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23edbc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x23EDBCu;
    {
        const bool branch_taken_0x23edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDBCu;
        // 0x23edc0: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edbc) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EDC4u;
label_23edc4:
    // 0x23edc4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x23edc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23edc8: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x23edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23edcc: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23EDCCu;
    {
        const bool branch_taken_0x23edcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDCCu;
        // 0x23edd0: 0x240207d1  addiu       $v0, $zero, 0x7D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edcc) {
            ctx->pc = 0x23EE38u;
            goto label_23ee38;
        }
    }
    ctx->pc = 0x23EDD4u;
    // 0x23edd4: 0xc088224  jal         func_220890
    ctx->pc = 0x23EDD4u;
    SET_GPR_U32(ctx, 31, 0x23EDDCu);
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23EDD4u, 0x23EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDDCu;
label_23eddc:
    // 0x23eddc: 0x28420090  slti        $v0, $v0, 0x90
    ctx->pc = 0x23eddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x23ede0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23EDE0u;
    {
        const bool branch_taken_0x23ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE0u;
        // 0x23ede4: 0x2404008d  addiu       $a0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ede0) {
            ctx->pc = 0x23EE24u;
            goto label_23ee24;
        }
    }
    ctx->pc = 0x23EDE8u;
    // 0x23ede8: 0xc081546  jal         func_205518
    ctx->pc = 0x23EDE8u;
    SET_GPR_U32(ctx, 31, 0x23EDF0u);
    ctx->pc = 0x23EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDE8u;
    // 0x23edec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23EDE8u, 0x23EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDF0u;
label_23edf0:
    // 0x23edf0: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23edf4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x23edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23edf8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23edfc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ee00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ee04: 0x24423298  addiu       $v0, $v0, 0x3298
    ctx->pc = 0x23ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12952));
    // 0x23ee08: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x23ee08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ee0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ee10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ee14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ee18: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23ee1c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x23EE1Cu;
    {
        const bool branch_taken_0x23ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE1Cu;
        // 0x23ee20: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee1c) {
            ctx->pc = 0x23F114u;
            goto label_23f114;
        }
    }
    ctx->pc = 0x23EE24u;
label_23ee24:
    // 0x23ee24: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x23ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_23ee28:
    // 0x23ee28: 0xc081546  jal         func_205518
    ctx->pc = 0x23EE28u;
    SET_GPR_U32(ctx, 31, 0x23EE30u);
    ctx->pc = 0x23EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE28u;
    // 0x23ee2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23EE28u, 0x23EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE30u;
label_23ee30:
    // 0x23ee30: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x23EE30u;
    {
        const bool branch_taken_0x23ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE30u;
        // 0x23ee34: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee30) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EE38u;
label_23ee38:
    // 0x23ee38: 0x54620087  bnel        $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x23EE38u;
    {
        const bool branch_taken_0x23ee38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ee38) {
            ctx->pc = 0x23EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EE38u;
            // 0x23ee3c: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EE40u;
    // 0x23ee40: 0x9382b750  lbu         $v0, -0x48B0($gp)
    ctx->pc = 0x23ee40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
    // 0x23ee44: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x23EE44u;
    {
        const bool branch_taken_0x23ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ee44) {
            ctx->pc = 0x23EE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EE44u;
            // 0x23ee48: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EE4Cu;
    // 0x23ee4c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x23ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ee50: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x23ee50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x23ee54: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23ee58: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x23ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x23ee5c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23ee5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ee60: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x23ee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x23ee64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ee6c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x23ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x23ee70: 0xc081546  jal         func_205518
    ctx->pc = 0x23EE70u;
    SET_GPR_U32(ctx, 31, 0x23EE78u);
    ctx->pc = 0x23EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE70u;
    // 0x23ee74: 0xa382b750  sb          $v0, -0x48B0($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948688), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23EE70u, 0x23EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE78u;
label_23ee78:
    // 0x23ee78: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x23EE78u;
    {
        const bool branch_taken_0x23ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee78) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EE80u;
label_23ee80:
    // 0x23ee80: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x23EE80u;
    {
        const bool branch_taken_0x23ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE80u;
        // 0x23ee84: 0x26f56400  addiu       $s5, $s7, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 25600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee80) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EE88u;
label_23ee88:
    // 0x23ee88: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x23ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23ee8c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23ee90: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23ee94: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x23ee94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23ee98: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x23ee98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23ee9c: 0x24a53298  addiu       $a1, $a1, 0x3298
    ctx->pc = 0x23ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12952));
    // 0x23eea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23eea4: 0x240800ae  addiu       $t0, $zero, 0xAE
    ctx->pc = 0x23eea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x23eea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23eea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eeac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23eeacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eeb0: 0xc08bf66  jal         func_22FD98
    ctx->pc = 0x23EEB0u;
    SET_GPR_U32(ctx, 31, 0x23EEB8u);
    ctx->pc = 0x23EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEB0u;
    // 0x23eeb4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FD98u, 0x23EEB0u, 0x23EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEB8u;
label_23eeb8:
    // 0x23eeb8: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23eebc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23eec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eec4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23eec8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x23EEC8u;
    {
        const bool branch_taken_0x23eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEC8u;
        // 0x23eecc: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eec8) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EED0u;
label_23eed0:
    // 0x23eed0: 0x9382b758  lbu         $v0, -0x48A8($gp)
    ctx->pc = 0x23eed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948696)));
    // 0x23eed4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x23EED4u;
    {
        const bool branch_taken_0x23eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EED4u;
        // 0x23eed8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eed4) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EEDCu;
    // 0x23eedc: 0x9382b75a  lbu         $v0, -0x48A6($gp)
    ctx->pc = 0x23eedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948698)));
    // 0x23eee0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x23EEE0u;
    {
        const bool branch_taken_0x23eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE0u;
        // 0x23eee4: 0x9382b750  lbu         $v0, -0x48B0($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eee0) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EEE8u;
    // 0x23eee8: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x23EEE8u;
    {
        const bool branch_taken_0x23eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE8u;
        // 0x23eeec: 0x9382b7a4  lbu         $v0, -0x485C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eee8) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EEF0u;
    // 0x23eef0: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x23EEF0u;
    {
        const bool branch_taken_0x23eef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eef0) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EEF8u;
    // 0x23eef8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x23eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23eefc: 0xc08be08  jal         func_22F820
    ctx->pc = 0x23EEFCu;
    SET_GPR_U32(ctx, 31, 0x23EF04u);
    ctx->pc = 0x23EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEFCu;
    // 0x23ef00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F820u, 0x23EEFCu, 0x23EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF04u;
label_23ef04:
    // 0x23ef04: 0x8f83a034  lw          $v1, -0x5FCC($gp)
    ctx->pc = 0x23ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x23ef08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23ef0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23EF0Cu;
    {
        const bool branch_taken_0x23ef0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF0Cu;
        // 0x23ef10: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef0c) {
            ctx->pc = 0x23EF64u;
            goto label_23ef64;
        }
    }
    ctx->pc = 0x23EF14u;
    // 0x23ef14: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ef18: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23ef1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ef20: 0x24423298  addiu       $v0, $v0, 0x3298
    ctx->pc = 0x23ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12952));
    // 0x23ef24: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23ef24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23ef28: 0xc0880b0  jal         func_2202C0
    ctx->pc = 0x23EF28u;
    SET_GPR_U32(ctx, 31, 0x23EF30u);
    ctx->pc = 0x23EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF28u;
    // 0x23ef2c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2202C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2202C0u, 0x23EF28u, 0x23EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF30u;
label_23ef30:
    // 0x23ef30: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ef34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23ef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef38: 0xc08824c  jal         func_220930
    ctx->pc = 0x23EF38u;
    SET_GPR_U32(ctx, 31, 0x23EF40u);
    ctx->pc = 0x23EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF38u;
    // 0x23ef3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23EF38u, 0x23EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF40u;
label_23ef40:
    // 0x23ef40: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23ef44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ef48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23ef48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ef4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ef50: 0xa382b75a  sb          $v0, -0x48A6($gp)
    ctx->pc = 0x23ef50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948698), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ef54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ef58: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23ef5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23EF5Cu;
    {
        const bool branch_taken_0x23ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF5Cu;
        // 0x23ef60: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef5c) {
            ctx->pc = 0x23EF88u;
            goto label_23ef88;
        }
    }
    ctx->pc = 0x23EF64u;
label_23ef64:
    // 0x23ef64: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x23ef68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EF68u;
    {
        const bool branch_taken_0x23ef68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF68u;
        // 0x23ef6c: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef68) {
            ctx->pc = 0x23EF88u;
            goto label_23ef88;
        }
    }
    ctx->pc = 0x23EF70u;
    // 0x23ef70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ef74: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x23ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x23ef78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ef7c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23ef80: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x23ef80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23ef84: 0xa6450004  sh          $a1, 0x4($s2)
    ctx->pc = 0x23ef84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 5));
label_23ef88:
    // 0x23ef88: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x23EF88u;
    {
        const bool branch_taken_0x23ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF88u;
        // 0x23ef8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef88) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23EF90u;
label_23ef90:
    // 0x23ef90: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x23ef90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ef94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ef94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23EF98u;
    {
        const bool branch_taken_0x23ef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF98u;
        // 0x23ef9c: 0x3c130035  lui         $s3, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef98) {
            ctx->pc = 0x23EFDCu;
            goto label_23efdc;
        }
    }
    ctx->pc = 0x23EFA0u;
label_23efa0:
    // 0x23efa0: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23efa4: 0x24423310  addiu       $v0, $v0, 0x3310
    ctx->pc = 0x23efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13072));
    // 0x23efa8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23efac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23efb0: 0xc08828c  jal         func_220A30
    ctx->pc = 0x23EFB0u;
    SET_GPR_U32(ctx, 31, 0x23EFB8u);
    ctx->pc = 0x23EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFB0u;
    // 0x23efb4: 0x90500000  lbu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x23EFB0u, 0x23EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFB8u;
label_23efb8:
    // 0x23efb8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EFB8u;
    {
        const bool branch_taken_0x23efb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB8u;
        // 0x23efbc: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb8) {
            ctx->pc = 0x23EFD8u;
            goto label_23efd8;
        }
    }
    ctx->pc = 0x23EFC0u;
    // 0x23efc0: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23efc4: 0x2784b798  addiu       $a0, $gp, -0x4868
    ctx->pc = 0x23efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948760));
    // 0x23efc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23efcc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23efd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23efd4: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x23efd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_23efd8:
    // 0x23efd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23efd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23efdc:
    // 0x23efdc: 0xc088224  jal         func_220890
    ctx->pc = 0x23EFDCu;
    SET_GPR_U32(ctx, 31, 0x23EFE4u);
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x23EFDCu, 0x23EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFE4u;
label_23efe4:
    // 0x23efe4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23efe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23efe8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x23EFE8u;
    {
        const bool branch_taken_0x23efe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE8u;
        // 0x23efec: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efe8) {
            ctx->pc = 0x23EFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EFF0u;
    // 0x23eff0: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23eff4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23EFF4u;
    SET_GPR_U32(ctx, 31, 0x23EFFCu);
    ctx->pc = 0x23EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFF4u;
    // 0x23eff8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23EFF4u, 0x23EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFFCu;
label_23effc:
    // 0x23effc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23f000: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23F000u;
    {
        const bool branch_taken_0x23f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F000u;
        // 0x23f004: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f000) {
            ctx->pc = 0x23F054u;
            goto label_23f054;
        }
    }
    ctx->pc = 0x23F008u;
    // 0x23f008: 0x2786b798  addiu       $a2, $gp, -0x4868
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948760));
    // 0x23f00c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f010: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f014: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23f018: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23f01c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x23f01cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f020: 0xc08824c  jal         func_220930
    ctx->pc = 0x23F020u;
    SET_GPR_U32(ctx, 31, 0x23F028u);
    ctx->pc = 0x23F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F020u;
    // 0x23f024: 0xa6430004  sh          $v1, 0x4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220930u, 0x23F020u, 0x23F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F028u;
label_23f028:
    // 0x23f028: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23f02c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f030: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23f034: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f038: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23f03c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x23f03cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f040: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x23F040u;
    SET_GPR_U32(ctx, 31, 0x23F048u);
    ctx->pc = 0x23F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F040u;
    // 0x23f044: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x23F040u, 0x23F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F048u;
label_23f048:
    // 0x23f048: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x23f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x23f04c: 0xc081546  jal         func_205518
    ctx->pc = 0x23F04Cu;
    SET_GPR_U32(ctx, 31, 0x23F054u);
    ctx->pc = 0x23F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F04Cu;
    // 0x23f050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23F04Cu, 0x23F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F054u;
label_23f054:
    // 0x23f054: 0x26755100  addiu       $s5, $s3, 0x5100
    ctx->pc = 0x23f054u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 20736));
label_23f058:
    // 0x23f058: 0x12a0002e  beqz        $s5, . + 4 + (0x2E << 2)
    ctx->pc = 0x23F058u;
    {
        const bool branch_taken_0x23f058 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F058u;
        // 0x23f05c: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f058) {
            ctx->pc = 0x23F114u;
            goto label_23f114;
        }
    }
    ctx->pc = 0x23F060u;
    // 0x23f060: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f064: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f068: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23f06c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23f06cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f070: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x23F070u;
    {
        const bool branch_taken_0x23f070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F070u;
        // 0x23f074: 0x3c060035  lui         $a2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f070) {
            ctx->pc = 0x23F0ACu;
            goto label_23f0ac;
        }
    }
    ctx->pc = 0x23F078u;
    // 0x23f078: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23f07c: 0x8c439a4c  lw          $v1, -0x65B4($v0)
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x23f080: 0x24c45150  addiu       $a0, $a2, 0x5150
    ctx->pc = 0x23f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20816));
    // 0x23f084: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F084u;
    {
        const bool branch_taken_0x23f084 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F084u;
        // 0x23f088: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f084) {
            ctx->pc = 0x23F090u;
            goto label_23f090;
        }
    }
    ctx->pc = 0x23F08Cu;
    // 0x23f08c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23f090:
    // 0x23f090: 0x94c35150  lhu         $v1, 0x5150($a2)
    ctx->pc = 0x23f090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20816)));
    // 0x23f094: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x23f094u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f098: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23f098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23f09c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F09Cu;
    {
        const bool branch_taken_0x23f09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f09c) {
            ctx->pc = 0x23F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F09Cu;
            // 0x23f0a0: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F0ACu;
            goto label_23f0ac;
        }
    }
    ctx->pc = 0x23F0A4u;
    // 0x23f0a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F0A4u;
    {
        const bool branch_taken_0x23f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0A4u;
        // 0x23f0a8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0a4) {
            ctx->pc = 0x23F0B0u;
            goto label_23f0b0;
        }
    }
    ctx->pc = 0x23F0ACu;
label_23f0ac:
    // 0x23f0ac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23f0b0:
    // 0x23f0b0: 0x8f84b730  lw          $a0, -0x48D0($gp)
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23f0b4: 0x24425100  addiu       $v0, $v0, 0x5100
    ctx->pc = 0x23f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20736));
    // 0x23f0b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f0bc: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F0BCu;
    {
        const bool branch_taken_0x23f0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x23F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0BCu;
        // 0x23f0c0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0bc) {
            ctx->pc = 0x23F0C8u;
            goto label_23f0c8;
        }
    }
    ctx->pc = 0x23F0C4u;
    // 0x23f0c4: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x23f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_23f0c8:
    // 0x23f0c8: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x23f0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f0cc: 0x24c35150  addiu       $v1, $a2, 0x5150
    ctx->pc = 0x23f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20816));
    // 0x23f0d0: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F0D0u;
    {
        const bool branch_taken_0x23f0d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x23F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D0u;
        // 0x23f0d4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0d0) {
            ctx->pc = 0x23F0DCu;
            goto label_23f0dc;
        }
    }
    ctx->pc = 0x23F0D8u;
    // 0x23f0d8: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x23f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_23f0dc:
    // 0x23f0dc: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x23f0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f0e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0e4: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23F0E4u;
    SET_GPR_U32(ctx, 31, 0x23F0ECu);
    ctx->pc = 0x23F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0E4u;
    // 0x23f0e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23F0E4u, 0x23F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0ECu;
label_23f0ec:
    // 0x23f0ec: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23f0f0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23f0f4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x23f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23f0f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23f0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0fc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x23f0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23f100: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23F100u;
    SET_GPR_U32(ctx, 31, 0x23F108u);
    ctx->pc = 0x23F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F100u;
    // 0x23f104: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23F100u, 0x23F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F108u;
label_23f108:
    // 0x23f108: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x23f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23f10c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f110: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x23f110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_23f114:
    // 0x23f114: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23f114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f118: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23f118u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f11c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23f11cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f120: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23f120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f128: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23f128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f12c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23f12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23f130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f138: 0x3e00008  jr          $ra
    ctx->pc = 0x23F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F138u;
        // 0x23f13c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F140u;
}
