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

// Function: _strtol_r
// Address: 0x2e6520 - 0x2e6758
void _strtol_r_0x2e6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_strtol_r_0x2e6520");
#endif

    switch (ctx->pc) {
        case 0x2e6570u: goto label_2e6570;
        case 0x2e6628u: goto label_2e6628;
        case 0x2e6644u: goto label_2e6644;
        case 0x2e6658u: goto label_2e6658;
        case 0x2e6698u: goto label_2e6698;
        default: break;
    }

    ctx->pc = 0x2e6520u;

    // 0x2e6520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e6524: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e6524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e6528: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e6528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e652c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e6530: 0x2445c421  addiu       $a1, $v0, -0x3BDF
    ctx->pc = 0x2e6530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951969));
    // 0x2e6534: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2e6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2e6538: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2e6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2e653c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e653cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6540: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e6544: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e6544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6548: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2e6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2e654c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2e654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2e6550: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2e6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2e6554: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e6558: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2e6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2e655c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e6560: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e6560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e6564: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2e6564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2e6568: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2e6568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e656c: 0x0  nop
    ctx->pc = 0x2e656cu;
    // NOP
label_2e6570:
    // 0x2e6570: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2e6570u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e6574: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e6578: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2e6578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2e657c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e657cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6580: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e6580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e6584: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E6584u;
    {
        const bool branch_taken_0x2e6584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6584) {
            ctx->pc = 0x2E6570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6570;
        }
    }
    ctx->pc = 0x2E658Cu;
    // 0x2e658c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2e658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e6590: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6590u;
    {
        const bool branch_taken_0x2e6590 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6590u;
        // 0x2e6594: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6590) {
            ctx->pc = 0x2E65A4u;
            goto label_2e65a4;
        }
    }
    ctx->pc = 0x2E6598u;
    // 0x2e6598: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2e6598u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e659c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E659Cu;
    {
        const bool branch_taken_0x2e659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E659Cu;
        // 0x2e65a0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e659c) {
            ctx->pc = 0x2E65B0u;
            goto label_2e65b0;
        }
    }
    ctx->pc = 0x2E65A4u;
label_2e65a4:
    // 0x2e65a4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E65A4u;
    {
        const bool branch_taken_0x2e65a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e65a4) {
            ctx->pc = 0x2E65B4u;
            goto label_2e65b4;
        }
    }
    ctx->pc = 0x2E65ACu;
    // 0x2e65ac: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2e65acu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2e65b0:
    // 0x2e65b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e65b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e65b4:
    // 0x2e65b4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E65B4u;
    {
        const bool branch_taken_0x2e65b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65B4u;
        // 0x2e65b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65b4) {
            ctx->pc = 0x2E65C4u;
            goto label_2e65c4;
        }
    }
    ctx->pc = 0x2E65BCu;
    // 0x2e65bc: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E65BCu;
    {
        const bool branch_taken_0x2e65bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e65bc) {
            ctx->pc = 0x2E65F0u;
            goto label_2e65f0;
        }
    }
    ctx->pc = 0x2E65C4u;
label_2e65c4:
    // 0x2e65c4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2e65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e65c8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E65C8u;
    {
        const bool branch_taken_0x2e65c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65C8u;
        // 0x2e65cc: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65c8) {
            ctx->pc = 0x2E65F0u;
            goto label_2e65f0;
        }
    }
    ctx->pc = 0x2E65D0u;
    // 0x2e65d0: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e65d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E65D4u;
    {
        const bool branch_taken_0x2e65d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D4u;
        // 0x2e65d8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65d4) {
            ctx->pc = 0x2E65E4u;
            goto label_2e65e4;
        }
    }
    ctx->pc = 0x2E65DCu;
    // 0x2e65dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E65DCu;
    {
        const bool branch_taken_0x2e65dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e65dc) {
            ctx->pc = 0x2E65F0u;
            goto label_2e65f0;
        }
    }
    ctx->pc = 0x2E65E4u;
label_2e65e4:
    // 0x2e65e4: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x2e65e4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2e65e8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2e65e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e65ec: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2e65ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2e65f0:
    // 0x2e65f0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E65F0u;
    {
        const bool branch_taken_0x2e65f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65F0u;
        // 0x2e65f4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65f0) {
            ctx->pc = 0x2E6604u;
            goto label_2e6604;
        }
    }
    ctx->pc = 0x2E65F8u;
    // 0x2e65f8: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2e65f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e65fc: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x2e65fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x2e6600: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2e6600u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_2e6604:
    // 0x2e6604: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e6604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e6608: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e6608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e660c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2e660cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6610: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x2e6610u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x2e6614: 0x5ea00b  movn        $s4, $v0, $fp
    ctx->pc = 0x2e6614u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x2e6618: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2e6618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e661c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6620: 0xc0b8a0c  jal         func_2E2830
    ctx->pc = 0x2E6620u;
    SET_GPR_U32(ctx, 31, 0x2E6628u);
    ctx->pc = 0x2E6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6620u;
    // 0x2e6624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2830u, 0x2E6620u, 0x2E6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6628u;
label_2e6628:
    // 0x2e6628: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2e6628u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e662c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6634: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x2e6634u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e6638: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x2e6638u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2e663c: 0xc0b8898  jal         func_2E2260
    ctx->pc = 0x2E663Cu;
    SET_GPR_U32(ctx, 31, 0x2E6644u);
    ctx->pc = 0x2E6640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E663Cu;
    // 0x2e6640: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2260u, 0x2E663Cu, 0x2E6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6644u;
label_2e6644:
    // 0x2e6644: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2e6644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2e6648: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e6648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e664c: 0x2470c421  addiu       $s0, $v1, -0x3BDF
    ctx->pc = 0x2e664cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951969));
    // 0x2e6650: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6650u;
    {
        const bool branch_taken_0x2e6650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6650u;
        // 0x2e6654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6650) {
            ctx->pc = 0x2E66A4u;
            goto label_2e66a4;
        }
    }
    ctx->pc = 0x2E6658u;
label_2e6658:
    // 0x2e6658: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2e6658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e665c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E665Cu;
    {
        const bool branch_taken_0x2e665c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e665c) {
            ctx->pc = 0x2E66D8u;
            goto label_2e66d8;
        }
    }
    ctx->pc = 0x2E6664u;
    // 0x2e6664: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6664u;
    {
        const bool branch_taken_0x2e6664 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2E6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6664u;
        // 0x2e6668: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6664) {
            ctx->pc = 0x2E6688u;
            goto label_2e6688;
        }
    }
    ctx->pc = 0x2E666Cu;
    // 0x2e666c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E666Cu;
    {
        const bool branch_taken_0x2e666c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e666c) {
            ctx->pc = 0x2E6670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E666Cu;
            // 0x2e6670: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E669Cu;
            goto label_2e669c;
        }
    }
    ctx->pc = 0x2E6674u;
    // 0x2e6674: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6674u;
    {
        const bool branch_taken_0x2e6674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x2E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6674u;
        // 0x2e6678: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6674) {
            ctx->pc = 0x2E6690u;
            goto label_2e6690;
        }
    }
    ctx->pc = 0x2E667Cu;
    // 0x2e667c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x2e667cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2e6680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6680u;
    {
        const bool branch_taken_0x2e6680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6680) {
            ctx->pc = 0x2E6690u;
            goto label_2e6690;
        }
    }
    ctx->pc = 0x2E6688u;
label_2e6688:
    // 0x2e6688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6688u;
    {
        const bool branch_taken_0x2e6688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6688u;
        // 0x2e668c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6688) {
            ctx->pc = 0x2E669Cu;
            goto label_2e669c;
        }
    }
    ctx->pc = 0x2E6690u;
label_2e6690:
    // 0x2e6690: 0xc0b9192  jal         func_2E4648
    ctx->pc = 0x2E6690u;
    SET_GPR_U32(ctx, 31, 0x2E6698u);
    ctx->pc = 0x2E6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6690u;
    // 0x2e6694: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4648u, 0x2E6690u, 0x2E6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6698u;
label_2e6698:
    // 0x2e6698: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x2e6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_2e669c:
    // 0x2e669c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2e669cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e66a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e66a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e66a4:
    // 0x2e66a4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e66a8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2e66a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e66ac: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x2e66acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2e66b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E66B0u;
    {
        const bool branch_taken_0x2e66b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66B0u;
        // 0x2e66b4: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66b0) {
            ctx->pc = 0x2E66C0u;
            goto label_2e66c0;
        }
    }
    ctx->pc = 0x2E66B8u;
    // 0x2e66b8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E66B8u;
    {
        const bool branch_taken_0x2e66b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66B8u;
        // 0x2e66bc: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66b8) {
            ctx->pc = 0x2E6658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6658;
        }
    }
    ctx->pc = 0x2E66C0u;
label_2e66c0:
    // 0x2e66c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E66C0u;
    {
        const bool branch_taken_0x2e66c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66C0u;
        // 0x2e66c4: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66c0) {
            ctx->pc = 0x2E66D8u;
            goto label_2e66d8;
        }
    }
    ctx->pc = 0x2E66C8u;
    // 0x2e66c8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e66c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e66cc: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x2e66ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x2e66d0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E66D0u;
    {
        const bool branch_taken_0x2e66d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66D0u;
        // 0x2e66d4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66d0) {
            ctx->pc = 0x2E6658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6658;
        }
    }
    ctx->pc = 0x2E66D8u;
label_2e66d8:
    // 0x2e66d8: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2E66D8u;
    {
        const bool branch_taken_0x2e66d8 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x2E66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66D8u;
        // 0x2e66dc: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66d8) {
            ctx->pc = 0x2E6704u;
            goto label_2e6704;
        }
    }
    ctx->pc = 0x2E66E0u;
    // 0x2e66e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e66e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e66e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e66e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e66e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e66ec: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2e66ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x2e66f0: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x2e66f0u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2e66f4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2e66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2e66f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e66fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E66FCu;
    {
        const bool branch_taken_0x2e66fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66FCu;
        // 0x2e6700: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66fc) {
            ctx->pc = 0x2E6708u;
            goto label_2e6708;
        }
    }
    ctx->pc = 0x2E6704u;
label_2e6704:
    // 0x2e6704: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x2e6704u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2e6708:
    // 0x2e6708: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e6708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e670c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E670Cu;
    {
        const bool branch_taken_0x2e670c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E670Cu;
        // 0x2e6710: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e670c) {
            ctx->pc = 0x2E6724u;
            goto label_2e6724;
        }
    }
    ctx->pc = 0x2E6714u;
    // 0x2e6714: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2e6714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e6718: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x2e6718u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e671c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6720: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e6720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e6724:
    // 0x2e6724: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e6724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6728: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e6728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e672c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2e672cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6730: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2e6730u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6734: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2e6734u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6738: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2e6738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e673c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e673cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6740: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2e6740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6744: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e6744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6748: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2e6748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e674c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e674cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6750: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6750u;
        // 0x2e6754: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6758u;
}
