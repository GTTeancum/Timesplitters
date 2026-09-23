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

// Function: std_menuitemmake
// Address: 0x22d7c0 - 0x22d988
void std_menuitemmake_0x22d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_menuitemmake_0x22d7c0");
#endif

    switch (ctx->pc) {
        case 0x22d81cu: goto label_22d81c;
        case 0x22d85cu: goto label_22d85c;
        case 0x22d870u: goto label_22d870;
        case 0x22d884u: goto label_22d884;
        case 0x22d924u: goto label_22d924;
        default: break;
    }

    ctx->pc = 0x22d7c0u;

    // 0x22d7c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22d7c4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22d7c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22d7cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22d7ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d7d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22d7d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22d7dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22d7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d7e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22d7e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22d7e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22d7ec: 0x86750002  lh          $s5, 0x2($s3)
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x22d7f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x22d7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d7f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22d7f8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22d7fc: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x22D7FCu;
    {
        const bool branch_taken_0x22d7fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7FCu;
        // 0x22d800: 0x86720000  lh          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d7fc) {
            ctx->pc = 0x22D884u;
            goto label_22d884;
        }
    }
    ctx->pc = 0x22D804u;
    // 0x22d804: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x22d804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x22d808: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x22d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x22d80c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D80Cu;
    {
        const bool branch_taken_0x22d80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D80Cu;
        // 0x22d810: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d80c) {
            ctx->pc = 0x22D824u;
            goto label_22d824;
        }
    }
    ctx->pc = 0x22D814u;
    // 0x22d814: 0xc08089c  jal         func_202270
    ctx->pc = 0x22D814u;
    SET_GPR_U32(ctx, 31, 0x22D81Cu);
    ctx->pc = 0x22D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D814u;
    // 0x22d818: 0x8f84a028  lw          $a0, -0x5FD8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22D814u, 0x22D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D81Cu;
label_22d81c:
    // 0x22d81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d820: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x22d820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d824:
    // 0x22d824: 0x28c204de  slti        $v0, $a2, 0x4DE
    ctx->pc = 0x22d824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x22d828: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22D828u;
    {
        const bool branch_taken_0x22d828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D828u;
        // 0x22d82c: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d828) {
            ctx->pc = 0x22D864u;
            goto label_22d864;
        }
    }
    ctx->pc = 0x22D830u;
    // 0x22d830: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22d830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x22d834: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x22d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x22d838: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x22d838u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22d83c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22d840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22d840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d844: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d848: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x22d848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x22d84c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d850: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22d850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22d854: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x22D854u;
    SET_GPR_U32(ctx, 31, 0x22D85Cu);
    ctx->pc = 0x22D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D854u;
    // 0x22d858: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x22D854u, 0x22D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D85Cu;
label_22d85c:
    // 0x22d85c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22D85Cu;
    {
        const bool branch_taken_0x22d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D85Cu;
        // 0x22d860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d85c) {
            ctx->pc = 0x22D874u;
            goto label_22d874;
        }
    }
    ctx->pc = 0x22D864u;
label_22d864:
    // 0x22d864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22d864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d868: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x22D868u;
    SET_GPR_U32(ctx, 31, 0x22D870u);
    ctx->pc = 0x22D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D868u;
    // 0x22d86c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x22D868u, 0x22D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D870u;
label_22d870:
    // 0x22d870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22d874:
    // 0x22d874: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D874u;
    {
        const bool branch_taken_0x22d874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22d874) {
            ctx->pc = 0x22D878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D874u;
            // 0x22d878: 0x9604000a  lhu         $a0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D888u;
            goto label_22d888;
        }
    }
    ctx->pc = 0x22D87Cu;
    // 0x22d87c: 0xc08089c  jal         func_202270
    ctx->pc = 0x22D87Cu;
    SET_GPR_U32(ctx, 31, 0x22D884u);
    ctx->pc = 0x22D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D87Cu;
    // 0x22d880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22D87Cu, 0x22D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D884u;
label_22d884:
    // 0x22d884: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x22d884u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_22d888:
    // 0x22d888: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x22d888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x22d88c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D88Cu;
    {
        const bool branch_taken_0x22d88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D88Cu;
        // 0x22d890: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d88c) {
            ctx->pc = 0x22D8A4u;
            goto label_22d8a4;
        }
    }
    ctx->pc = 0x22D894u;
    // 0x22d894: 0x2842012c  slti        $v0, $v0, 0x12C
    ctx->pc = 0x22d894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x22d898: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D898u;
    {
        const bool branch_taken_0x22d898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D898u;
        // 0x22d89c: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d898) {
            ctx->pc = 0x22D8A4u;
            goto label_22d8a4;
        }
    }
    ctx->pc = 0x22D8A0u;
    // 0x22d8a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22d8a4:
    // 0x22d8a4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x22d8a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22d8a8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x22d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22d8ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D8ACu;
    {
        const bool branch_taken_0x22d8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8ACu;
        // 0x22d8b0: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8ac) {
            ctx->pc = 0x22D8C8u;
            goto label_22d8c8;
        }
    }
    ctx->pc = 0x22D8B4u;
    // 0x22d8b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d8b8: 0x2652ffe0  addiu       $s2, $s2, -0x20
    ctx->pc = 0x22d8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x22d8bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x22d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22d8c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22d8c4: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x22d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_22d8c8:
    // 0x22d8c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D8C8u;
    {
        const bool branch_taken_0x22d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8C8u;
        // 0x22d8cc: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8c8) {
            ctx->pc = 0x22D8F0u;
            goto label_22d8f0;
        }
    }
    ctx->pc = 0x22D8D0u;
    // 0x22d8d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d8d4: 0x8c6299fc  lw          $v0, -0x6604($v1)
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941180)));
    // 0x22d8d8: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x22d8d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22d8dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22d8e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x22d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22d8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d8e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22d8e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22d8ec: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x22d8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22d8f0:
    // 0x22d8f0: 0x97a80004  lhu         $t0, 0x4($sp)
    ctx->pc = 0x22d8f0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22d8f4: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x22d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x22d8f8: 0x3c0b0023  lui         $t3, 0x23
    ctx->pc = 0x22d8f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)35 << 16));
    // 0x22d8fc: 0x87a70000  lh          $a3, 0x0($sp)
    ctx->pc = 0x22d8fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d900: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x22d900u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x22d904: 0x96090008  lhu         $t1, 0x8($s0)
    ctx->pc = 0x22d904u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22d908: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x22d90c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22d90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d910: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x22d910u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x22d914: 0x256bd230  addiu       $t3, $t3, -0x2DD0
    ctx->pc = 0x22d914u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955568));
    // 0x22d918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d91c: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x22D91Cu;
    SET_GPR_U32(ctx, 31, 0x22D924u);
    ctx->pc = 0x22D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D91Cu;
    // 0x22d920: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x22D91Cu, 0x22D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D924u;
label_22d924:
    // 0x22d924: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d928: 0x28a204de  slti        $v0, $a1, 0x4DE
    ctx->pc = 0x22d928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x22d92c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22D92Cu;
    {
        const bool branch_taken_0x22d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D92Cu;
        // 0x22d930: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d92c) {
            ctx->pc = 0x22D960u;
            goto label_22d960;
        }
    }
    ctx->pc = 0x22D934u;
    // 0x22d934: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x22d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x22d938: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x22d938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x22d93c: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x22d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x22d940: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22d940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22d944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22d944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22d948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d94c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22d950: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x22d950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22d954: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22d958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D958u;
    {
        const bool branch_taken_0x22d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D958u;
        // 0x22d95c: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d958) {
            ctx->pc = 0x22D964u;
            goto label_22d964;
        }
    }
    ctx->pc = 0x22D960u;
label_22d960:
    // 0x22d960: 0xae850014  sw          $a1, 0x14($s4)
    ctx->pc = 0x22d960u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 5));
label_22d964:
    // 0x22d964: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22d964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d968: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22d968u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d96c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22d96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d970: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22d970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d974: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22d974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d978: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22d978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d97c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22d97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d980: 0x3e00008  jr          $ra
    ctx->pc = 0x22D980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D980u;
        // 0x22d984: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D988u;
}
