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

// Function: textPrint
// Address: 0x2024f0 - 0x202a34
void textPrint_0x2024f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textPrint_0x2024f0");
#endif

    switch (ctx->pc) {
        case 0x202564u: goto label_202564;
        case 0x202570u: goto label_202570;
        case 0x202580u: goto label_202580;
        case 0x202590u: goto label_202590;
        case 0x20264cu: goto label_20264c;
        case 0x202684u: goto label_202684;
        case 0x202690u: goto label_202690;
        case 0x202770u: goto label_202770;
        case 0x2027d8u: goto label_2027d8;
        case 0x202920u: goto label_202920;
        case 0x202974u: goto label_202974;
        case 0x202990u: goto label_202990;
        case 0x2029d0u: goto label_2029d0;
        default: break;
    }

    ctx->pc = 0x2024f0u;

    // 0x2024f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2024f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2024f4: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x2024f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2024f8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2024f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2024fc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2024fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x202500: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x202500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202504: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x202504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x202508: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x202508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x20250c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x20250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x202510: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x202510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x202514: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x202514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x202518: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x202518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x20251c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x20251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x202520: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x202520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x202524: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x202524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x202528: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x202528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x20252c: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x20252cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x202530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202534: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x202534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x202538: 0x30740001  andi        $s4, $v1, 0x1
    ctx->pc = 0x202538u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20253c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x202540: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x202540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202544: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x202544u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202548: 0x12c0012e  beqz        $s6, . + 4 + (0x12E << 2)
    ctx->pc = 0x202548u;
    {
        const bool branch_taken_0x202548 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202548u;
        // 0x20254c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202548) {
            ctx->pc = 0x202A04u;
            goto label_202a04;
        }
    }
    ctx->pc = 0x202550u;
    // 0x202550: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x202550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x202554: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202554u;
    {
        const bool branch_taken_0x202554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202554) {
            ctx->pc = 0x202568u;
            goto label_202568;
        }
    }
    ctx->pc = 0x20255Cu;
    // 0x20255c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x20255Cu;
    SET_GPR_U32(ctx, 31, 0x202564u);
    ctx->pc = 0x202560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20255Cu;
    // 0x202560: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x20255Cu, 0x202564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202564u;
label_202564:
    // 0x202564: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x202564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_202568:
    // 0x202568: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x202568u;
    SET_GPR_U32(ctx, 31, 0x202570u);
    ctx->pc = 0x20256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202568u;
    // 0x20256c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x202568u, 0x202570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202570u;
label_202570:
    // 0x202570: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x202570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x202574: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x202574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202578: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x202578u;
    SET_GPR_U32(ctx, 31, 0x202580u);
    ctx->pc = 0x20257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202578u;
    // 0x20257c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x202578u, 0x202580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202580u;
label_202580:
    // 0x202580: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x202580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x202584: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x202584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202588: 0x10800107  beqz        $a0, . + 4 + (0x107 << 2)
    ctx->pc = 0x202588u;
    {
        const bool branch_taken_0x202588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202588u;
        // 0x20258c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202588) {
            ctx->pc = 0x2029A8u;
            goto label_2029a8;
        }
    }
    ctx->pc = 0x202590u;
label_202590:
    // 0x202590: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x202590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x202594: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x202594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x202598: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202598u;
    {
        const bool branch_taken_0x202598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202598u;
        // 0x20259c: 0x2aa20280  slti        $v0, $s5, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202598) {
            ctx->pc = 0x2025C8u;
            goto label_2025c8;
        }
    }
    ctx->pc = 0x2025A0u;
    // 0x2025a0: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2025a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2025a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2025a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2025a8: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x2025a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2025ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2025acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2025b0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2025b4: 0x2821007  srav        $v0, $v0, $s4
    ctx->pc = 0x2025b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2025b8: 0x8cd50000  lw          $s5, 0x0($a2)
    ctx->pc = 0x2025b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2025bc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2025bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2025c0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2025C0u;
    {
        const bool branch_taken_0x2025c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C0u;
        // 0x2025c4: 0xafa7001c  sw          $a3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c0) {
            ctx->pc = 0x202998u;
            goto label_202998;
        }
    }
    ctx->pc = 0x2025C8u;
label_2025c8:
    // 0x2025c8: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2025C8u;
    {
        const bool branch_taken_0x2025c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C8u;
        // 0x2025cc: 0x8fa9001c  lw          $t1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c8) {
            ctx->pc = 0x2029A4u;
            goto label_2029a4;
        }
    }
    ctx->pc = 0x2025D0u;
    // 0x2025d0: 0x292200e0  slti        $v0, $t1, 0xE0
    ctx->pc = 0x2025d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x2025d4: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2025D4u;
    {
        const bool branch_taken_0x2025d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025D4u;
        // 0x2025d8: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025d4) {
            ctx->pc = 0x2029A4u;
            goto label_2029a4;
        }
    }
    ctx->pc = 0x2025DCu;
    // 0x2025dc: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2025DCu;
    {
        const bool branch_taken_0x2025dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2025E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025DCu;
        // 0x2025e0: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025dc) {
            ctx->pc = 0x2026A4u;
            goto label_2026a4;
        }
    }
    ctx->pc = 0x2025E4u;
    // 0x2025e4: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x2025e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2025e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2025e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2025ec: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2025ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2025f0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2025f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2025f4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2025f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2025f8: 0x25320002  addiu       $s2, $t1, 0x2
    ctx->pc = 0x2025f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2025fc: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x202600: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x202600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x202604: 0x24639a48  addiu       $v1, $v1, -0x65B8
    ctx->pc = 0x202604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941256));
    // 0x202608: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20260c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202610: 0x8f849a9c  lw          $a0, -0x6564($gp)
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202618: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x202618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20261c: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x20261cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x202620: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x202620u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x202624: 0x2863000d  slti        $v1, $v1, 0xD
    ctx->pc = 0x202624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x202628: 0x123900b  movn        $s2, $t1, $v1
    ctx->pc = 0x202628u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 9));
    // 0x20262c: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x20262cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x202630: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x202634: 0x94b30002  lhu         $s3, 0x2($a1)
    ctx->pc = 0x202634u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x202638: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x202638u;
    {
        const bool branch_taken_0x202638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202638u;
        // 0x20263c: 0x94b00000  lhu         $s0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202638) {
            ctx->pc = 0x202698u;
            goto label_202698;
        }
    }
    ctx->pc = 0x202640u;
    // 0x202640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202644: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x202644u;
    SET_GPR_U32(ctx, 31, 0x20264Cu);
    ctx->pc = 0x202648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202644u;
    // 0x202648: 0x2908807  srav        $s1, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 20) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x202644u, 0x20264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20264Cu;
label_20264c:
    // 0x20264c: 0x26870001  addiu       $a3, $s4, 0x1
    ctx->pc = 0x20264cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x202650: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x202650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x202654: 0xf33807  srav        $a3, $s3, $a3
    ctx->pc = 0x202654u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 7) & 0x1F));
    // 0x202658: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20265c: 0x34427f7f  ori         $v0, $v0, 0x7F7F
    ctx->pc = 0x20265cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32639);
    // 0x202660: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x202660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x202664: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x202664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x202668: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x202668u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20266c: 0x135900  sll         $t3, $s3, 4
    ctx->pc = 0x20266cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x202670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202674: 0x2b13021  addu        $a2, $s5, $s1
    ctx->pc = 0x202674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x202678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x202678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20267c: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x20267Cu;
    SET_GPR_U32(ctx, 31, 0x202684u);
    ctx->pc = 0x202680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20267Cu;
    // 0x202680: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x20267Cu, 0x202684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202684u;
label_202684:
    // 0x202684: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x202684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202688: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x202688u;
    SET_GPR_U32(ctx, 31, 0x202690u);
    ctx->pc = 0x20268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202688u;
    // 0x20268c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x202688u, 0x202690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202690u;
label_202690:
    // 0x202690: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x202690u;
    {
        const bool branch_taken_0x202690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202690u;
        // 0x202694: 0x2b1a821  addu        $s5, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202690) {
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x202698u;
label_202698:
    // 0x202698: 0x2908807  srav        $s1, $s0, $s4
    ctx->pc = 0x202698u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 20) & 0x1F));
    // 0x20269c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x20269Cu;
    {
        const bool branch_taken_0x20269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20269Cu;
        // 0x2026a0: 0x2b1a821  addu        $s5, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20269c) {
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x2026A4u;
label_2026a4:
    // 0x2026a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2026A4u;
    {
        const bool branch_taken_0x2026a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026A4u;
        // 0x2026a8: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026a4) {
            ctx->pc = 0x2026C0u;
            goto label_2026c0;
        }
    }
    ctx->pc = 0x2026ACu;
    // 0x2026ac: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x2026acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x2026b0: 0x24c69920  addiu       $a2, $a2, -0x66E0
    ctx->pc = 0x2026b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940960));
    // 0x2026b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2026b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2026b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2026B8u;
    {
        const bool branch_taken_0x2026b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026B8u;
        // 0x2026bc: 0x90510000  lbu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026b8) {
            ctx->pc = 0x2026C4u;
            goto label_2026c4;
        }
    }
    ctx->pc = 0x2026C0u;
label_2026c0:
    // 0x2026c0: 0x92d10000  lbu         $s1, 0x0($s6)
    ctx->pc = 0x2026c0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2026c4:
    // 0x2026c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2026c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2026c8: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x2026c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2026cc: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x2026ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2026d0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2026d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2026d4: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x2026d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x2026d8: 0x12230041  beq         $s1, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2026D8u;
    {
        const bool branch_taken_0x2026d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2026DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026D8u;
        // 0x2026dc: 0xe28021  addu        $s0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026d8) {
            ctx->pc = 0x2027E0u;
            goto label_2027e0;
        }
    }
    ctx->pc = 0x2026E0u;
    // 0x2026e0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2026e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2026e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2026e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2026e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2026E8u;
    {
        const bool branch_taken_0x2026e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026E8u;
        // 0x2026ec: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026e8) {
            ctx->pc = 0x202768u;
            goto label_202768;
        }
    }
    ctx->pc = 0x2026F0u;
    // 0x2026f0: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2026F0u;
    {
        const bool branch_taken_0x2026f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2026F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026F0u;
        // 0x2026f4: 0x2a220032  slti        $v0, $s1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026f0) {
            ctx->pc = 0x202740u;
            goto label_202740;
        }
    }
    ctx->pc = 0x2026F8u;
    // 0x2026f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2026F8u;
    {
        const bool branch_taken_0x2026f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026F8u;
        // 0x2026fc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026f8) {
            ctx->pc = 0x202718u;
            goto label_202718;
        }
    }
    ctx->pc = 0x202700u;
    // 0x202700: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202700u;
    {
        const bool branch_taken_0x202700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x202704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202700u;
        // 0x202704: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202700) {
            ctx->pc = 0x202724u;
            goto label_202724;
        }
    }
    ctx->pc = 0x202708u;
    // 0x202708: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202708u;
    {
        const bool branch_taken_0x202708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202708u;
        // 0x20270c: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202708) {
            ctx->pc = 0x202730u;
            goto label_202730;
        }
    }
    ctx->pc = 0x202710u;
    // 0x202710: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x202710u;
    {
        const bool branch_taken_0x202710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202710u;
        // 0x202714: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202710) {
            ctx->pc = 0x202760u;
            goto label_202760;
        }
    }
    ctx->pc = 0x202718u;
label_202718:
    // 0x202718: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x202718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x20271c: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20271Cu;
    {
        const bool branch_taken_0x20271c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x202720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20271Cu;
        // 0x202720: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20271c) {
            ctx->pc = 0x20275Cu;
            goto label_20275c;
        }
    }
    ctx->pc = 0x202724u;
label_202724:
    // 0x202724: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x202728: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x202728u;
    {
        const bool branch_taken_0x202728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202728u;
        // 0x20272c: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202728) {
            ctx->pc = 0x20277Cu;
            goto label_20277c;
        }
    }
    ctx->pc = 0x202730u;
label_202730:
    // 0x202730: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x202730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x202734: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x202734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x202738: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x202738u;
    {
        const bool branch_taken_0x202738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202738u;
        // 0x20273c: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202738) {
            ctx->pc = 0x20277Cu;
            goto label_20277c;
        }
    }
    ctx->pc = 0x202740u;
label_202740:
    // 0x202740: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x202740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202744: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x202744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x202748: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x202748u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20274c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x202750: 0x2821007  srav        $v0, $v0, $s4
    ctx->pc = 0x202750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x202754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x202754u;
    {
        const bool branch_taken_0x202754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202754u;
        // 0x202758: 0x2457fffc  addiu       $s7, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202754) {
            ctx->pc = 0x20277Cu;
            goto label_20277c;
        }
    }
    ctx->pc = 0x20275Cu;
label_20275c:
    // 0x20275c: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x20275cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_202760:
    // 0x202760: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202760u;
    {
        const bool branch_taken_0x202760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202760u;
        // 0x202764: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202760) {
            ctx->pc = 0x202778u;
            goto label_202778;
        }
    }
    ctx->pc = 0x202768u;
label_202768:
    // 0x202768: 0xc0808aa  jal         func_2022A8
    ctx->pc = 0x202768u;
    SET_GPR_U32(ctx, 31, 0x202770u);
    ctx->pc = 0x20276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202768u;
    // 0x20276c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2022A8u, 0x202768u, 0x202770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202770u;
label_202770:
    // 0x202770: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x202770u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202774: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x202774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_202778:
    // 0x202778: 0x282b807  srav        $s7, $v0, $s4
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_20277c:
    // 0x20277c: 0x960b0002  lhu         $t3, 0x2($s0)
    ctx->pc = 0x20277cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x202780: 0x2843007  srav        $a2, $a0, $s4
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
    // 0x202784: 0x82070008  lb          $a3, 0x8($s0)
    ctx->pc = 0x202784u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202788: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x20278c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x20278cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x202790: 0xb4900  sll         $t1, $t3, 4
    ctx->pc = 0x202790u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x202794: 0x2872807  srav        $a1, $a3, $s4
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 20) & 0x1F));
    // 0x202798: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x202798u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20279c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2027a0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2027a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2027a4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2027a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2027a8: 0x1045021  addu        $t2, $t0, $a0
    ctx->pc = 0x2027a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2027ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2027b0: 0x2873807  srav        $a3, $a3, $s4
    ctx->pc = 0x2027b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 20) & 0x1F));
    // 0x2027b4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2027b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2027b8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2027bc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2027bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2027c0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2027c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2027c4: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2027c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2027c8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2027cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2027ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2027d0: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2027D0u;
    SET_GPR_U32(ctx, 31, 0x2027D8u);
    ctx->pc = 0x2027D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027D0u;
    // 0x2027d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2027D0u, 0x2027D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027D8u;
label_2027d8:
    // 0x2027d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2027D8u;
    {
        const bool branch_taken_0x2027d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027D8u;
        // 0x2027dc: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027d8) {
            ctx->pc = 0x202850u;
            goto label_202850;
        }
    }
    ctx->pc = 0x2027E0u;
label_2027e0:
    // 0x2027e0: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x2027e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2027e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2027E4u;
    {
        const bool branch_taken_0x2027e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027E4u;
        // 0x2027e8: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027e4) {
            ctx->pc = 0x202828u;
            goto label_202828;
        }
    }
    ctx->pc = 0x2027ECu;
    // 0x2027ec: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x2027ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x2027f0: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x2027f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
    // 0x2027f4: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x2027f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2027fc: 0x24e79a23  addiu       $a3, $a3, -0x65DD
    ctx->pc = 0x2027fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941219));
    // 0x202800: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x202800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20280c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x202810: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x202810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202814: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x202814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202818: 0x400013  mtlo        $v0
    ctx->pc = 0x202818u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x20281c: 0x70641800  madd        $v1, $v1, $a0
    ctx->pc = 0x20281cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202820: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x202820u;
    {
        const bool branch_taken_0x202820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202820u;
        // 0x202824: 0x9462fec4  lhu         $v0, -0x13C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294966980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202820) {
            ctx->pc = 0x202848u;
            goto label_202848;
        }
    }
    ctx->pc = 0x202828u;
label_202828:
    // 0x202828: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x202828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x20282c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x202830: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202830u;
    {
        const bool branch_taken_0x202830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202830u;
        // 0x202834: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202830) {
            ctx->pc = 0x202844u;
            goto label_202844;
        }
    }
    ctx->pc = 0x202838u;
    // 0x202838: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x202838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20283c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20283Cu;
    {
        const bool branch_taken_0x20283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20283Cu;
        // 0x202840: 0x283b807  srav        $s7, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20283c) {
            ctx->pc = 0x20284Cu;
            goto label_20284c;
        }
    }
    ctx->pc = 0x202844u;
label_202844:
    // 0x202844: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x202844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_202848:
    // 0x202848: 0x282b807  srav        $s7, $v0, $s4
    ctx->pc = 0x202848u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_20284c:
    // 0x20284c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x20284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_202850:
    // 0x202850: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x202850u;
    {
        const bool branch_taken_0x202850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202850) {
            ctx->pc = 0x202854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202850u;
            // 0x202854: 0x2b7a821  addu        $s5, $s5, $s7 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x202858u;
    // 0x202858: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x202858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20285c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x20285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x202860: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x202860u;
    {
        const bool branch_taken_0x202860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202860u;
        // 0x202864: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202860) {
            ctx->pc = 0x202990u;
            goto label_202990;
        }
    }
    ctx->pc = 0x202868u;
    // 0x202868: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x202868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x20286c: 0x246399a0  addiu       $v1, $v1, -0x6660
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941088));
    // 0x202870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202874: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x202874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202878: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x202878u;
    {
        const bool branch_taken_0x202878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202878u;
        // 0x20287c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202878) {
            ctx->pc = 0x202990u;
            goto label_202990;
        }
    }
    ctx->pc = 0x202880u;
    // 0x202880: 0x8f889a9c  lw          $t0, -0x6564($gp)
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202884: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202888: 0x3c090032  lui         $t1, 0x32
    ctx->pc = 0x202888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50 << 16));
    // 0x20288c: 0x69880  sll         $s3, $a2, 2
    ctx->pc = 0x20288cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202890: 0x25299a20  addiu       $t1, $t1, -0x65E0
    ctx->pc = 0x202890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941216));
    // 0x202894: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x202898: 0x2691821  addu        $v1, $s3, $t1
    ctx->pc = 0x202898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x20289c: 0x2624ffbf  addiu       $a0, $s1, -0x41
    ctx->pc = 0x20289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967231));
    // 0x2028a0: 0x241e003d  addiu       $fp, $zero, 0x3D
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2028a4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2028a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2028a8: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x2028a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2028ac: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x2028acu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2028b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2028b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028b4: 0xa2f00a  movz        $fp, $a1, $v0
    ctx->pc = 0x2028b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
    // 0x2028b8: 0x2c84001a  sltiu       $a0, $a0, 0x1A
    ctx->pc = 0x2028b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2028bc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2028BCu;
    {
        const bool branch_taken_0x2028bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2028C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028BCu;
        // 0x2028c0: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028bc) {
            ctx->pc = 0x2028D0u;
            goto label_2028d0;
        }
    }
    ctx->pc = 0x2028C4u;
    // 0x2028c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2028c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2028c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2028C8u;
    {
        const bool branch_taken_0x2028c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028C8u;
        // 0x2028cc: 0x2828007  srav        $s0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028c8) {
            ctx->pc = 0x2028D4u;
            goto label_2028d4;
        }
    }
    ctx->pc = 0x2028D0u;
label_2028d0:
    // 0x2028d0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2028d4:
    // 0x2028d4: 0x246a9a20  addiu       $t2, $v1, -0x65E0
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941216));
    // 0x2028d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2028dc: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2028e0: 0x24c3fffb  addiu       $v1, $a2, -0x5
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
    // 0x2028e4: 0xe29021  addu        $s2, $a3, $v0
    ctx->pc = 0x2028e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2028e8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2028e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2028ec: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x2028ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2028f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2028f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2028f4: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x2028f4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2028f8: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x2028f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2028fc: 0x2e61823  subu        $v1, $s7, $a2
    ctx->pc = 0x2028fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x202900: 0x8f84b628  lw          $a0, -0x49D8($gp)
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948392)));
    // 0x202904: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x202908: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20290c: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20290Cu;
    {
        const bool branch_taken_0x20290c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x202910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20290Cu;
        // 0x202910: 0x38843  sra         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20290c) {
            ctx->pc = 0x20292Cu;
            goto label_20292c;
        }
    }
    ctx->pc = 0x202914u;
    // 0x202914: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x202914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x202918: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x202918u;
    SET_GPR_U32(ctx, 31, 0x202920u);
    ctx->pc = 0x20291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202918u;
    // 0x20291c: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x202918u, 0x202920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202920u;
label_202920:
    // 0x202920: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x202920u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x202924: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x202924u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202928: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x202928u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20292c:
    // 0x20292c: 0x1531021  addu        $v0, $t2, $s3
    ctx->pc = 0x20292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x202930: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202934: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x202934u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x202938: 0x1265021  addu        $t2, $t1, $a2
    ctx->pc = 0x202938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x20293c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x20293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x202940: 0x2b12021  addu        $a0, $s5, $s1
    ctx->pc = 0x202940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x202944: 0x3c75821  addu        $t3, $fp, $a3
    ctx->pc = 0x202944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x202948: 0x2863007  srav        $a2, $a2, $s4
    ctx->pc = 0x202948u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 20) & 0x1F));
    // 0x20294c: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x202950: 0x2873807  srav        $a3, $a3, $s4
    ctx->pc = 0x202950u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 20) & 0x1F));
    // 0x202954: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x202954u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x202958: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x202958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20295c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x202960: 0x1e4900  sll         $t1, $fp, 4
    ctx->pc = 0x202960u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x202964: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x202968: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20296c: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x20296Cu;
    SET_GPR_U32(ctx, 31, 0x202974u);
    ctx->pc = 0x202970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20296Cu;
    // 0x202970: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x20296Cu, 0x202974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202974u;
label_202974:
    // 0x202974: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x202978: 0x8f83b628  lw          $v1, -0x49D8($gp)
    ctx->pc = 0x202978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948392)));
    // 0x20297c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x20297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x202980: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202980u;
    {
        const bool branch_taken_0x202980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x202980) {
            ctx->pc = 0x202984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202980u;
            // 0x202984: 0x2b7a821  addu        $s5, $s5, $s7 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202994u;
            goto label_202994;
        }
    }
    ctx->pc = 0x202988u;
    // 0x202988: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x202988u;
    SET_GPR_U32(ctx, 31, 0x202990u);
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x202988u, 0x202990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202990u;
label_202990:
    // 0x202990: 0x2b7a821  addu        $s5, $s5, $s7
    ctx->pc = 0x202990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_202994:
    // 0x202994: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x202994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_202998:
    // 0x202998: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x202998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20299c: 0x1480fefc  bnez        $a0, . + 4 + (-0x104 << 2)
    ctx->pc = 0x20299Cu;
    {
        const bool branch_taken_0x20299c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2029A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20299Cu;
        // 0x2029a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20299c) {
            ctx->pc = 0x202590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202590;
        }
    }
    ctx->pc = 0x2029A4u;
label_2029a4:
    // 0x2029a4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2029a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2029a8:
    // 0x2029a8: 0xacd50000  sw          $s5, 0x0($a2)
    ctx->pc = 0x2029a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 21));
    // 0x2029ac: 0x8fa9001c  lw          $t1, 0x1C($sp)
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2029b0: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x2029b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2029b4: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x2029b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x2029b8: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2029b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2029bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2029bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2029c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2029C0u;
    {
        const bool branch_taken_0x2029c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2029C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029C0u;
        // 0x2029c4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029c0) {
            ctx->pc = 0x2029D4u;
            goto label_2029d4;
        }
    }
    ctx->pc = 0x2029C8u;
    // 0x2029c8: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2029C8u;
    SET_GPR_U32(ctx, 31, 0x2029D0u);
    ctx->pc = 0x2029CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029C8u;
    // 0x2029cc: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2029C8u, 0x2029D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029D0u;
label_2029d0:
    // 0x2029d0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2029d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2029d4:
    // 0x2029d4: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2029d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2029d8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2029d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2029dc: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2029dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2029e0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2029e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2029e4: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2029e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2029e8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2029e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2029ec: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2029ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2029f0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2029f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2029f4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2029f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2029f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2029f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2029fc: 0x80adf34  j           func_2B7CD0
    ctx->pc = 0x2029FCu;
    ctx->pc = 0x202A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029FCu;
    // 0x202a00: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    dlSetZB_0x2b7cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x202A04u;
label_202a04:
    // 0x202a04: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x202a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x202a08: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x202a08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x202a0c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x202a0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202a10: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x202a10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x202a14: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x202a14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x202a18: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x202a18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x202a1c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x202a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202a20: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x202a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202a24: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x202a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202a28: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x202a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x202A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A2Cu;
        // 0x202a30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202A34u;
}
