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

// Function: __ieee754_atan2
// Address: 0x2d84b0 - 0x2d87e4
void ps2___ieee754_atan2_0x2d84b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_atan2_0x2d84b0");
#endif

    switch (ctx->pc) {
        case 0x2d8534u: goto label_2d8534;
        case 0x2d8554u: goto label_2d8554;
        case 0x2d871cu: goto label_2d871c;
        case 0x2d8724u: goto label_2d8724;
        case 0x2d872cu: goto label_2d872c;
        case 0x2d87a0u: goto label_2d87a0;
        case 0x2d87c0u: goto label_2d87c0;
        case 0x2d87d4u: goto label_2d87d4;
        default: break;
    }

    ctx->pc = 0x2d84b0u;

    // 0x2d84b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d84b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d84b4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2d84b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d84b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d84bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d84bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84c0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2d84c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d84c4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2d84c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2d84c8: 0x2603f  dsra32      $t4, $v0, 0
    ctx->pc = 0x2d84c8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d84cc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2d84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2d84d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2d84d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2d84d4: 0x1835024  and         $t2, $t4, $v1
    ctx->pc = 0x2d84d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x2d84d8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2d84d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84dc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2d84dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d84e0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2d84e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2d84e4: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x2d84e4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d84e8: 0x1234024  and         $t0, $t1, $v1
    ctx->pc = 0x2d84e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2d84ec: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2d84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2d84f0: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2d84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2d84f4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2d84f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2d84f8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2d84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d84fc: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x2d84fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2d8500: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2d8500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8504: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8504u;
    {
        const bool branch_taken_0x2d8504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8504u;
        // 0x2d8508: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8504) {
            ctx->pc = 0x2D8528u;
            goto label_2d8528;
        }
    }
    ctx->pc = 0x2D850Cu;
    // 0x2d850c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x2d850cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2d8510: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2d8510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2d8514: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2d8514u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d8518: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x2d8518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2d851c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2d851cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8520: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8520u;
    {
        const bool branch_taken_0x2d8520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8520u;
        // 0x2d8524: 0x3c02c010  lui         $v0, 0xC010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8520) {
            ctx->pc = 0x2D853Cu;
            goto label_2d853c;
        }
    }
    ctx->pc = 0x2D8528u;
label_2d8528:
    // 0x2d8528: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d8528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d852c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D852Cu;
    SET_GPR_U32(ctx, 31, 0x2D8534u);
    ctx->pc = 0x2D8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D852Cu;
    // 0x2d8530: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D852Cu, 0x2D8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8534u;
label_2d8534:
    // 0x2d8534: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2D8534u;
    {
        const bool branch_taken_0x2d8534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8534u;
        // 0x2d8538: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8534) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D853Cu;
label_2d853c:
    // 0x2d853c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2d853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2d8540: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2d8540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2d8544: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8544u;
    {
        const bool branch_taken_0x2d8544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8544u;
        // 0x2d8548: 0xc1783  sra         $v0, $t4, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8544) {
            ctx->pc = 0x2D855Cu;
            goto label_2d855c;
        }
    }
    ctx->pc = 0x2D854Cu;
    // 0x2d854c: 0xc0b5aea  jal         func_2D6BA8
    ctx->pc = 0x2D854Cu;
    SET_GPR_U32(ctx, 31, 0x2D8554u);
    ctx->pc = 0x2D8550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D854Cu;
    // 0x2d8550: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6BA8u, 0x2D854Cu, 0x2D8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8554u;
label_2d8554:
    // 0x2d8554: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2D8554u;
    {
        const bool branch_taken_0x2d8554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8554u;
        // 0x2d8558: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8554) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D855Cu;
label_2d855c:
    // 0x2d855c: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x2d855cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x2d8560: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d8560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d8564: 0x1061825  or          $v1, $t0, $a2
    ctx->pc = 0x2d8564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x2d8568: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8568u;
    {
        const bool branch_taken_0x2d8568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8568u;
        // 0x2d856c: 0x828025  or          $s0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8568) {
            ctx->pc = 0x2D859Cu;
            goto label_2d859c;
        }
    }
    ctx->pc = 0x2D8570u;
    // 0x2d8570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8574: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D8574u;
    {
        const bool branch_taken_0x2d8574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8574u;
        // 0x2d8578: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8574) {
            ctx->pc = 0x2D869Cu;
            goto label_2d869c;
        }
    }
    ctx->pc = 0x2D857Cu;
    // 0x2d857c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D857Cu;
    {
        const bool branch_taken_0x2d857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D857Cu;
        // 0x2d8580: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d857c) {
            ctx->pc = 0x2D8594u;
            goto label_2d8594;
        }
    }
    ctx->pc = 0x2D8584u;
    // 0x2d8584: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D8584u;
    {
        const bool branch_taken_0x2d8584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8584u;
        // 0x2d8588: 0x1471025  or          $v0, $t2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8584) {
            ctx->pc = 0x2D86ACu;
            goto label_2d86ac;
        }
    }
    ctx->pc = 0x2D858Cu;
    // 0x2d858c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D858Cu;
    {
        const bool branch_taken_0x2d858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d858c) {
            ctx->pc = 0x2D85A0u;
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D8594u;
label_2d8594:
    // 0x2d8594: 0x601008f  bgez        $s0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2D8594u;
    {
        const bool branch_taken_0x2d8594 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2D8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8594u;
        // 0x2d8598: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8594) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D859Cu;
label_2d859c:
    // 0x2d859c: 0x1471025  or          $v0, $t2, $a3
    ctx->pc = 0x2d859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
label_2d85a0:
    // 0x2d85a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D85A0u;
    {
        const bool branch_taken_0x2d85a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85A0u;
        // 0x2d85a4: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85a0) {
            ctx->pc = 0x2D85C8u;
            goto label_2d85c8;
        }
    }
    ctx->pc = 0x2D85A8u;
    // 0x2d85a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d85a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d85ac: 0xdc22a908  ld          $v0, -0x56F8($at)
    ctx->pc = 0x2d85acu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA908u));
    // 0x2d85b0: 0x5210089  bgez        $t1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2D85B0u;
    {
        const bool branch_taken_0x2d85b0 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2D85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85B0u;
        // 0x2d85b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85b0) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D85B8u;
    // 0x2d85b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d85b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d85bc: 0xdc22a910  ld          $v0, -0x56F0($at)
    ctx->pc = 0x2d85bcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA910u));
    // 0x2d85c0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2D85C0u;
    {
        const bool branch_taken_0x2d85c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85C0u;
        // 0x2d85c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85c0) {
            ctx->pc = 0x2D87DCu;
            goto label_2d87dc;
        }
    }
    ctx->pc = 0x2D85C8u;
label_2d85c8:
    // 0x2d85c8: 0x1542003c  bne         $t2, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D85C8u;
    {
        const bool branch_taken_0x2d85c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85C8u;
        // 0x2d85cc: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85c8) {
            ctx->pc = 0x2D86BCu;
            goto label_2d86bc;
        }
    }
    ctx->pc = 0x2D85D0u;
    // 0x2d85d0: 0x150a001f  bne         $t0, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D85D0u;
    {
        const bool branch_taken_0x2d85d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x2D85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85D0u;
        // 0x2d85d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85d0) {
            ctx->pc = 0x2D8650u;
            goto label_2d8650;
        }
    }
    ctx->pc = 0x2D85D8u;
    // 0x2d85d8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D85D8u;
    {
        const bool branch_taken_0x2d85d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85D8u;
        // 0x2d85dc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85d8) {
            ctx->pc = 0x2D8620u;
            goto label_2d8620;
        }
    }
    ctx->pc = 0x2D85E0u;
    // 0x2d85e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D85E0u;
    {
        const bool branch_taken_0x2d85e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85E0u;
        // 0x2d85e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85e0) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D85E8u;
    // 0x2d85e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D85E8u;
    {
        const bool branch_taken_0x2d85e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85E8u;
        // 0x2d85ec: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85e8) {
            ctx->pc = 0x2D8610u;
            goto label_2d8610;
        }
    }
    ctx->pc = 0x2D85F0u;
    // 0x2d85f0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2D85F0u;
    {
        const bool branch_taken_0x2d85f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d85f0) {
            ctx->pc = 0x2D86BCu;
            goto label_2d86bc;
        }
    }
    ctx->pc = 0x2D85F8u;
label_2d85f8:
    // 0x2d85f8: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D85F8u;
    {
        const bool branch_taken_0x2d85f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85F8u;
        // 0x2d85fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85f8) {
            ctx->pc = 0x2D8630u;
            goto label_2d8630;
        }
    }
    ctx->pc = 0x2D8600u;
    // 0x2d8600: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8600u;
    {
        const bool branch_taken_0x2d8600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8600u;
        // 0x2d8604: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8600) {
            ctx->pc = 0x2D8640u;
            goto label_2d8640;
        }
    }
    ctx->pc = 0x2D8608u;
    // 0x2d8608: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2D8608u;
    {
        const bool branch_taken_0x2d8608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8608) {
            ctx->pc = 0x2D86BCu;
            goto label_2d86bc;
        }
    }
    ctx->pc = 0x2D8610u;
label_2d8610:
    // 0x2d8610: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8614: 0xdc22a918  ld          $v0, -0x56E8($at)
    ctx->pc = 0x2d8614u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA918u));
    // 0x2d8618: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2D8618u;
    {
        const bool branch_taken_0x2d8618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8618u;
        // 0x2d861c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8618) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D8620u;
label_2d8620:
    // 0x2d8620: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8624: 0xdc22a920  ld          $v0, -0x56E0($at)
    ctx->pc = 0x2d8624u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA920u));
    // 0x2d8628: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2D8628u;
    {
        const bool branch_taken_0x2d8628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8628u;
        // 0x2d862c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8628) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D8630u;
label_2d8630:
    // 0x2d8630: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8634: 0xdc22a928  ld          $v0, -0x56D8($at)
    ctx->pc = 0x2d8634u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA928u));
    // 0x2d8638: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2D8638u;
    {
        const bool branch_taken_0x2d8638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8638u;
        // 0x2d863c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8638) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D8640u;
label_2d8640:
    // 0x2d8640: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8644: 0xdc22a930  ld          $v0, -0x56D0($at)
    ctx->pc = 0x2d8644u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA930u));
    // 0x2d8648: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2D8648u;
    {
        const bool branch_taken_0x2d8648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8648u;
        // 0x2d864c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8648) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D8650u;
label_2d8650:
    // 0x2d8650: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8650u;
    {
        const bool branch_taken_0x2d8650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8650u;
        // 0x2d8654: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8650) {
            ctx->pc = 0x2D8690u;
            goto label_2d8690;
        }
    }
    ctx->pc = 0x2D8658u;
    // 0x2d8658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8658u;
    {
        const bool branch_taken_0x2d8658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8658u;
        // 0x2d865c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8658) {
            ctx->pc = 0x2D8670u;
            goto label_2d8670;
        }
    }
    ctx->pc = 0x2D8660u;
    // 0x2d8660: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8660u;
    {
        const bool branch_taken_0x2d8660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8660u;
        // 0x2d8664: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8660) {
            ctx->pc = 0x2D8688u;
            goto label_2d8688;
        }
    }
    ctx->pc = 0x2D8668u;
    // 0x2d8668: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D8668u;
    {
        const bool branch_taken_0x2d8668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8668) {
            ctx->pc = 0x2D86BCu;
            goto label_2d86bc;
        }
    }
    ctx->pc = 0x2D8670u;
label_2d8670:
    // 0x2d8670: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8670u;
    {
        const bool branch_taken_0x2d8670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8670u;
        // 0x2d8674: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8670) {
            ctx->pc = 0x2D869Cu;
            goto label_2d869c;
        }
    }
    ctx->pc = 0x2D8678u;
    // 0x2d8678: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8678u;
    {
        const bool branch_taken_0x2d8678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8678u;
        // 0x2d867c: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8678) {
            ctx->pc = 0x2D86ACu;
            goto label_2d86ac;
        }
    }
    ctx->pc = 0x2D8680u;
    // 0x2d8680: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D8680u;
    {
        const bool branch_taken_0x2d8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8680) {
            ctx->pc = 0x2D86BCu;
            goto label_2d86bc;
        }
    }
    ctx->pc = 0x2D8688u;
label_2d8688:
    // 0x2d8688: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2D8688u;
    {
        const bool branch_taken_0x2d8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8688u;
        // 0x2d868c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8688) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D8690u;
label_2d8690:
    // 0x2d8690: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d8694: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2D8694u;
    {
        const bool branch_taken_0x2d8694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8694u;
        // 0x2d8698: 0xdc62a900  ld          $v0, -0x5700($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294945024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8694) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D869Cu;
label_2d869c:
    // 0x2d869c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d869cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d86a0: 0xdc22a938  ld          $v0, -0x56C8($at)
    ctx->pc = 0x2d86a0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA938u));
    // 0x2d86a4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2D86A4u;
    {
        const bool branch_taken_0x2d86a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86A4u;
        // 0x2d86a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86a4) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D86ACu;
label_2d86ac:
    // 0x2d86ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d86acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d86b0: 0xdc22a940  ld          $v0, -0x56C0($at)
    ctx->pc = 0x2d86b0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA940u));
    // 0x2d86b4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2D86B4u;
    {
        const bool branch_taken_0x2d86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86B4u;
        // 0x2d86b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86b4) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D86BCu;
label_2d86bc:
    // 0x2d86bc: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D86BCu;
    {
        const bool branch_taken_0x2d86bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86BCu;
        // 0x2d86c0: 0x10a1023  subu        $v0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86bc) {
            ctx->pc = 0x2D86E4u;
            goto label_2d86e4;
        }
    }
    ctx->pc = 0x2D86C4u;
    // 0x2d86c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d86c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d86c8: 0xdc22a948  ld          $v0, -0x56B8($at)
    ctx->pc = 0x2d86c8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA948u));
    // 0x2d86cc: 0x5210042  bgez        $t1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D86CCu;
    {
        const bool branch_taken_0x2d86cc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2D86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86CCu;
        // 0x2d86d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86cc) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D86D4u;
    // 0x2d86d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d86d8: 0xdc22a950  ld          $v0, -0x56B0($at)
    ctx->pc = 0x2d86d8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA950u));
    // 0x2d86dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2D86DCu;
    {
        const bool branch_taken_0x2d86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86DCu;
        // 0x2d86e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86dc) {
            ctx->pc = 0x2D87DCu;
            goto label_2d87dc;
        }
    }
    ctx->pc = 0x2D86E4u;
label_2d86e4:
    // 0x2d86e4: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2d86e8: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x2d86e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2d86ec: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D86ECu;
    {
        const bool branch_taken_0x2d86ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d86ec) {
            ctx->pc = 0x2D8704u;
            goto label_2d8704;
        }
    }
    ctx->pc = 0x2D86F4u;
    // 0x2d86f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d86f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d86f8: 0xdc23a958  ld          $v1, -0x56A8($at)
    ctx->pc = 0x2d86f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AA958u));
    // 0x2d86fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D86FCu;
    {
        const bool branch_taken_0x2d86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86FCu;
        // 0x2d8700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86fc) {
            ctx->pc = 0x2D8734u;
            goto label_2d8734;
        }
    }
    ctx->pc = 0x2D8704u;
label_2d8704:
    // 0x2d8704: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8704u;
    {
        const bool branch_taken_0x2d8704 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x2D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8704u;
        // 0x2d8708: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8704) {
            ctx->pc = 0x2D8714u;
            goto label_2d8714;
        }
    }
    ctx->pc = 0x2D870Cu;
    // 0x2d870c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D870Cu;
    {
        const bool branch_taken_0x2d870c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D870Cu;
        // 0x2d8710: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d870c) {
            ctx->pc = 0x2D8730u;
            goto label_2d8730;
        }
    }
    ctx->pc = 0x2D8714u;
label_2d8714:
    // 0x2d8714: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2D8714u;
    SET_GPR_U32(ctx, 31, 0x2D871Cu);
    ctx->pc = 0x2D8718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8714u;
    // 0x2d8718: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2D8714u, 0x2D871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D871Cu;
label_2d871c:
    // 0x2d871c: 0xc0b5bee  jal         func_2D6FB8
    ctx->pc = 0x2D871Cu;
    SET_GPR_U32(ctx, 31, 0x2D8724u);
    ctx->pc = 0x2D8720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D871Cu;
    // 0x2d8720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FB8u, 0x2D871Cu, 0x2D8724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8724u;
label_2d8724:
    // 0x2d8724: 0xc0b5aea  jal         func_2D6BA8
    ctx->pc = 0x2D8724u;
    SET_GPR_U32(ctx, 31, 0x2D872Cu);
    ctx->pc = 0x2D8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8724u;
    // 0x2d8728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6BA8u, 0x2D8724u, 0x2D872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D872Cu;
label_2d872c:
    // 0x2d872c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d872cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8730:
    // 0x2d8730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8734:
    // 0x2d8734: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8734u;
    {
        const bool branch_taken_0x2d8734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8734u;
        // 0x2d8738: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8734) {
            ctx->pc = 0x2D8768u;
            goto label_2d8768;
        }
    }
    ctx->pc = 0x2D873Cu;
    // 0x2d873c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2d873cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d8740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8740u;
    {
        const bool branch_taken_0x2d8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8740u;
        // 0x2d8744: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8740) {
            ctx->pc = 0x2D8758u;
            goto label_2d8758;
        }
    }
    ctx->pc = 0x2D8748u;
    // 0x2d8748: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8748u;
    {
        const bool branch_taken_0x2d8748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8748u;
        // 0x2d874c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8748) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D8750u;
    // 0x2d8750: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D8750u;
    {
        const bool branch_taken_0x2d8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8750) {
            ctx->pc = 0x2D87B0u;
            goto label_2d87b0;
        }
    }
    ctx->pc = 0x2D8758u;
label_2d8758:
    // 0x2d8758: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8758u;
    {
        const bool branch_taken_0x2d8758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8758) {
            ctx->pc = 0x2D8790u;
            goto label_2d8790;
        }
    }
    ctx->pc = 0x2D8760u;
    // 0x2d8760: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8760u;
    {
        const bool branch_taken_0x2d8760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8760) {
            ctx->pc = 0x2D87B0u;
            goto label_2d87b0;
        }
    }
    ctx->pc = 0x2D8768u;
label_2d8768:
    // 0x2d8768: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2d8768u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d876c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d8770: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2d8774: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2d8774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2d8778: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2d8778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2d877c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2d877cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2d8780: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d8780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d8784: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d8784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d8788: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8788u;
    {
        const bool branch_taken_0x2d8788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8788u;
        // 0x2d878c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8788) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D8790u;
label_2d8790:
    // 0x2d8790: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d8794: 0xdc25a960  ld          $a1, -0x56A0($at)
    ctx->pc = 0x2d8794u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AA960u));
    // 0x2d8798: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D8798u;
    SET_GPR_U32(ctx, 31, 0x2D87A0u);
    ctx->pc = 0x2D879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8798u;
    // 0x2d879c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D8798u, 0x2D87A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87A0u;
label_2d87a0:
    // 0x2d87a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d87a4: 0xdc24a968  ld          $a0, -0x5698($at)
    ctx->pc = 0x2d87a4u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x3AA968u));
    // 0x2d87a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D87A8u;
    {
        const bool branch_taken_0x2d87a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87A8u;
        // 0x2d87ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87a8) {
            ctx->pc = 0x2D87CCu;
            goto label_2d87cc;
        }
    }
    ctx->pc = 0x2D87B0u;
label_2d87b0:
    // 0x2d87b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d87b4: 0xdc25a970  ld          $a1, -0x5690($at)
    ctx->pc = 0x2d87b4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AA970u));
    // 0x2d87b8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D87B8u;
    SET_GPR_U32(ctx, 31, 0x2D87C0u);
    ctx->pc = 0x2D87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87B8u;
    // 0x2d87bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D87B8u, 0x2D87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87C0u;
label_2d87c0:
    // 0x2d87c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d87c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d87c4: 0xdc25a978  ld          $a1, -0x5688($at)
    ctx->pc = 0x2d87c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AA978u));
    // 0x2d87c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d87c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d87cc:
    // 0x2d87cc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D87CCu;
    SET_GPR_U32(ctx, 31, 0x2D87D4u);
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D87CCu, 0x2D87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87D4u;
label_2d87d4:
    // 0x2d87d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d87d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d87d8:
    // 0x2d87d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d87d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d87dc:
    // 0x2d87dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D87DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87DCu;
        // 0x2d87e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D87DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D87E4u;
}
