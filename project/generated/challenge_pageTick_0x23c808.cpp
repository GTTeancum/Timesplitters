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

// Function: challenge_pageTick
// Address: 0x23c808 - 0x23c9c4
void challenge_pageTick_0x23c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challenge_pageTick_0x23c808");
#endif

    switch (ctx->pc) {
        case 0x23c868u: goto label_23c868;
        case 0x23c870u: goto label_23c870;
        case 0x23c880u: goto label_23c880;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c928u: goto label_23c928;
        case 0x23c944u: goto label_23c944;
        case 0x23c960u: goto label_23c960;
        case 0x23c978u: goto label_23c978;
        case 0x23c980u: goto label_23c980;
        case 0x23c988u: goto label_23c988;
        case 0x23c998u: goto label_23c998;
        case 0x23c9a4u: goto label_23c9a4;
        default: break;
    }

    ctx->pc = 0x23c808u;

    // 0x23c808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c80c: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23c810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c814: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23c814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23c818: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c81c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23c820: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x23c820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
    // 0x23c824: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23c828: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23c82c: 0x26102c18  addiu       $s0, $s0, 0x2C18
    ctx->pc = 0x23c82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11288));
    // 0x23c830: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23c830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23c834: 0x24a51308  addiu       $a1, $a1, 0x1308
    ctx->pc = 0x23c834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23c838: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23c83c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23c840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c844: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23c848: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23c848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23c84c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23c850: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23c850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23c854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c858: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23c858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23c85c: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x23c860: 0xc08c086  jal         func_230218
    ctx->pc = 0x23C860u;
    SET_GPR_U32(ctx, 31, 0x23C868u);
    ctx->pc = 0x23C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C860u;
    // 0x23c864: 0x24a54eb8  addiu       $a1, $a1, 0x4EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23C860u, 0x23C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C868u;
label_23c868:
    // 0x23c868: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23C868u;
    SET_GPR_U32(ctx, 31, 0x23C870u);
    ctx->pc = 0x23C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C868u;
    // 0x23c86c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23C868u, 0x23C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C870u;
label_23c870:
    // 0x23c870: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23c870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23c874: 0x245111f8  addiu       $s1, $v0, 0x11F8
    ctx->pc = 0x23c874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23c878: 0xc087c12  jal         func_21F048
    ctx->pc = 0x23C878u;
    SET_GPR_U32(ctx, 31, 0x23C880u);
    ctx->pc = 0x23C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C878u;
    // 0x23c87c: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x23C878u, 0x23C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C880u;
label_23c880:
    // 0x23c880: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c884: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x23c884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x23c888: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x23c888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x23c88c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c890: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x23c890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c894: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23c898: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23c898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c89c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23c89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c8a0: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x23c8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
    // 0x23c8a4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c8a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x23c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23c8ac: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x23c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x23c8b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23c8b4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23c8b8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x23c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x23c8bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23C8BCu;
    {
        const bool branch_taken_0x23c8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8BCu;
        // 0x23c8c0: 0xace34e58  sw          $v1, 0x4E58($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8bc) {
            ctx->pc = 0x23C908u;
            goto label_23c908;
        }
    }
    ctx->pc = 0x23C8C4u;
    // 0x23c8c4: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x23c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x23c8c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8cc: 0xc081546  jal         func_205518
    ctx->pc = 0x23C8CCu;
    SET_GPR_U32(ctx, 31, 0x23C8D4u);
    ctx->pc = 0x23C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8CCu;
    // 0x23c8d0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23C8CCu, 0x23C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8D4u;
label_23c8d4:
    // 0x23c8d4: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x23c8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x23c8d8: 0x2411001a  addiu       $s1, $zero, 0x1A
    ctx->pc = 0x23c8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x23c8dc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_23c8e0:
    // 0x23c8e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23c8e4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C8E4u;
    {
        const bool branch_taken_0x23c8e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E4u;
        // 0x23c8e8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8e4) {
            ctx->pc = 0x23C8F0u;
            goto label_23c8f0;
        }
    }
    ctx->pc = 0x23C8ECu;
    // 0x23c8ec: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x23c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_23c8f0:
    // 0x23c8f0: 0xc08940e  jal         func_225038
    ctx->pc = 0x23C8F0u;
    SET_GPR_U32(ctx, 31, 0x23C8F8u);
    ctx->pc = 0x23C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8F0u;
    // 0x23c8f4: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225038u, 0x23C8F0u, 0x23C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8F8u;
label_23c8f8:
    // 0x23c8f8: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23C8F8u;
    {
        const bool branch_taken_0x23c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8f8) {
            ctx->pc = 0x23C8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8F8u;
            // 0x23c8fc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c8e0;
        }
    }
    ctx->pc = 0x23C900u;
    // 0x23c900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23C900u;
    {
        const bool branch_taken_0x23c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c900) {
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C908u;
label_23c908:
    // 0x23c908: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x23c908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x23c90c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23C90Cu;
    {
        const bool branch_taken_0x23c90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C90Cu;
        // 0x23c910: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c90c) {
            ctx->pc = 0x23C954u;
            goto label_23c954;
        }
    }
    ctx->pc = 0x23C914u;
    // 0x23c914: 0xc081546  jal         func_205518
    ctx->pc = 0x23C914u;
    SET_GPR_U32(ctx, 31, 0x23C91Cu);
    ctx->pc = 0x23C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C914u;
    // 0x23c918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23C914u, 0x23C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C91Cu;
label_23c91c:
    // 0x23c91c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c920: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x23c920u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x23c924: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x23c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_23c928:
    // 0x23c928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23c92c: 0x2843001b  slti        $v1, $v0, 0x1B
    ctx->pc = 0x23c92cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x23c930: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C930u;
    {
        const bool branch_taken_0x23c930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C930u;
        // 0x23c934: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c930) {
            ctx->pc = 0x23C93Cu;
            goto label_23c93c;
        }
    }
    ctx->pc = 0x23C938u;
    // 0x23c938: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23c938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_23c93c:
    // 0x23c93c: 0xc08940e  jal         func_225038
    ctx->pc = 0x23C93Cu;
    SET_GPR_U32(ctx, 31, 0x23C944u);
    ctx->pc = 0x23C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C93Cu;
    // 0x23c940: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225038u, 0x23C93Cu, 0x23C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C944u;
label_23c944:
    // 0x23c944: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23C944u;
    {
        const bool branch_taken_0x23c944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c944) {
            ctx->pc = 0x23C948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C944u;
            // 0x23c948: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c928;
        }
    }
    ctx->pc = 0x23C94Cu;
    // 0x23c94c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23C94Cu;
    {
        const bool branch_taken_0x23c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c94c) {
            ctx->pc = 0x23C958u;
            goto label_23c958;
        }
    }
    ctx->pc = 0x23C954u;
label_23c954:
    // 0x23c954: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x23c954u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
label_23c958:
    // 0x23c958: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C958u;
    SET_GPR_U32(ctx, 31, 0x23C960u);
    ctx->pc = 0x23C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C958u;
    // 0x23c95c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C958u, 0x23C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C960u;
label_23c960:
    // 0x23c960: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23c960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23c964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C964u;
    {
        const bool branch_taken_0x23c964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C964u;
        // 0x23c968: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c964) {
            ctx->pc = 0x23C988u;
            goto label_23c988;
        }
    }
    ctx->pc = 0x23C96Cu;
    // 0x23c96c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c970: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x23C970u;
    SET_GPR_U32(ctx, 31, 0x23C978u);
    ctx->pc = 0x23C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C970u;
    // 0x23c974: 0x24a54e18  addiu       $a1, $a1, 0x4E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x23C970u, 0x23C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C978u;
label_23c978:
    // 0x23c978: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23C978u;
    SET_GPR_U32(ctx, 31, 0x23C980u);
    ctx->pc = 0x23C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C978u;
    // 0x23c97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23C978u, 0x23C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C980u;
label_23c980:
    // 0x23c980: 0xc08c070  jal         func_2301C0
    ctx->pc = 0x23C980u;
    SET_GPR_U32(ctx, 31, 0x23C988u);
    ctx->pc = 0x23C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C980u;
    // 0x23c984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301C0u, 0x23C980u, 0x23C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C988u;
label_23c988:
    // 0x23c988: 0x26704e28  addiu       $s0, $s3, 0x4E28
    ctx->pc = 0x23c988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20008));
    // 0x23c98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c990: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23C990u;
    SET_GPR_U32(ctx, 31, 0x23C998u);
    ctx->pc = 0x23C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C990u;
    // 0x23c994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23C990u, 0x23C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C998u;
label_23c998:
    // 0x23c998: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x23c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23c99c: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23C99Cu;
    SET_GPR_U32(ctx, 31, 0x23C9A4u);
    ctx->pc = 0x23C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C99Cu;
    // 0x23c9a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23C99Cu, 0x23C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9A4u;
label_23c9a4:
    // 0x23c9a4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x23c9a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23c9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c9ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23c9acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c9b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23c9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c9b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9BCu;
        // 0x23c9c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C9C4u;
}
