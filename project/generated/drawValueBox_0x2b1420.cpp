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

// Function: drawValueBox
// Address: 0x2b1420 - 0x2b1594
void drawValueBox_0x2b1420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawValueBox_0x2b1420");
#endif

    switch (ctx->pc) {
        case 0x2b147cu: goto label_2b147c;
        case 0x2b14dcu: goto label_2b14dc;
        case 0x2b14f4u: goto label_2b14f4;
        case 0x2b1550u: goto label_2b1550;
        default: break;
    }

    ctx->pc = 0x2b1420u;

    // 0x2b1420: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b1420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b1424: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b1424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b1428: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b1428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b142c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b142cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1430: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b1430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b1434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1438: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b1438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b143c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2b143cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1440: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b1440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b1444: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2b1444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1448: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b1448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b144c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2b144cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1450: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b1450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b1454: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b1454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1458: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b1458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b145c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2b145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1460: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b1460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b1464: 0x213b821  addu        $s7, $s0, $s3
    ctx->pc = 0x2b1464u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2b1468: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b1468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b146c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2b146cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2b1470: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2b1470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x2b1474: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B1474u;
    SET_GPR_U32(ctx, 31, 0x2B147Cu);
    ctx->pc = 0x2B1478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1474u;
    // 0x2b1478: 0x8fbe00b0  lw          $fp, 0xB0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B1474u, 0x2B147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B147Cu;
label_2b147c:
    // 0x2b147c: 0x93849ab5  lbu         $a0, -0x654B($gp)
    ctx->pc = 0x2b147cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b1480: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b1480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2b1484: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2b1484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2b1488: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2b1488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b148c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1490: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1490u;
    {
        const bool branch_taken_0x2b1490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1490u;
        // 0x2b1494: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1490) {
            ctx->pc = 0x2B14ACu;
            goto label_2b14ac;
        }
    }
    ctx->pc = 0x2B1498u;
    // 0x2b1498: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2b1498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b149c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b14a0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b14a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b14a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B14A4u;
    {
        const bool branch_taken_0x2b14a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14A4u;
        // 0x2b14a8: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14a4) {
            ctx->pc = 0x2B14B8u;
            goto label_2b14b8;
        }
    }
    ctx->pc = 0x2B14ACu;
label_2b14ac:
    // 0x2b14ac: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x2b14acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b14b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b14b4: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x2b14b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2b14b8:
    // 0x2b14b8: 0x308200fe  andi        $v0, $a0, 0xFE
    ctx->pc = 0x2b14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x2b14bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b14bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b14c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14c4: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2b14c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b14c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2b14c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14cc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2b14ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b14d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14d4: 0xc0ac3f0  jal         func_2B0FC0
    ctx->pc = 0x2B14D4u;
    SET_GPR_U32(ctx, 31, 0x2B14DCu);
    ctx->pc = 0x2B14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14D4u;
    // 0x2b14d8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0FC0u, 0x2B14D4u, 0x2B14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14DCu;
label_2b14dc:
    // 0x2b14dc: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B14DCu;
    {
        const bool branch_taken_0x2b14dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14DCu;
        // 0x2b14e0: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14dc) {
            ctx->pc = 0x2B14ECu;
            goto label_2b14ec;
        }
    }
    ctx->pc = 0x2B14E4u;
    // 0x2b14e4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b14e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b14e8: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2b14e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
label_2b14ec:
    // 0x2b14ec: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B14ECu;
    SET_GPR_U32(ctx, 31, 0x2B14F4u);
    ctx->pc = 0x2B14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14ECu;
    // 0x2b14f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B14ECu, 0x2B14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14F4u;
label_2b14f4:
    // 0x2b14f4: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x2b14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b14f8: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x2b14f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b14fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b14fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b1500: 0x2f12023  subu        $a0, $s7, $s1
    ctx->pc = 0x2b1500u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2b1504: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1508: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1508u;
    {
        const bool branch_taken_0x2b1508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1508u;
        // 0x2b150c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1508) {
            ctx->pc = 0x2B1520u;
            goto label_2b1520;
        }
    }
    ctx->pc = 0x2B1510u;
    // 0x2b1510: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2b1510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b1514: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b1518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1518u;
    {
        const bool branch_taken_0x2b1518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1518u;
        // 0x2b151c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1518) {
            ctx->pc = 0x2B1528u;
            goto label_2b1528;
        }
    }
    ctx->pc = 0x2B1520u;
label_2b1520:
    // 0x2b1520: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2b1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b1524: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b1528:
    // 0x2b1528: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2b1528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b152c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b152cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b1530: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b1534: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x2b1534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b1538: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2b1538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b153c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1540: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2b1540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1548: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B1548u;
    SET_GPR_U32(ctx, 31, 0x2B1550u);
    ctx->pc = 0x2B154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1548u;
    // 0x2b154c: 0x30e800ff  andi        $t0, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B1548u, 0x2B1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1550u;
label_2b1550:
    // 0x2b1550: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1550u;
    {
        const bool branch_taken_0x2b1550 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1550u;
        // 0x2b1554: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1550) {
            ctx->pc = 0x2B1560u;
            goto label_2b1560;
        }
    }
    ctx->pc = 0x2B1558u;
    // 0x2b1558: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2b1558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2b155c: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2b155cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
label_2b1560:
    // 0x2b1560: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2b1560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1564: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b1564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b1568: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b1568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b156c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b156cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1570: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b1570u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1574: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b1574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1578: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b1578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b157c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b157cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1580: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b1580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1584: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1588: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b1588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b158c: 0x808089c  j           func_202270
    ctx->pc = 0x2B158Cu;
    ctx->pc = 0x2B1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B158Cu;
    // 0x2b1590: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x2B1594u;
}
