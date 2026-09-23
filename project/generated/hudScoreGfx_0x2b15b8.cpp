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

// Function: hudScoreGfx
// Address: 0x2b15b8 - 0x2b1780
void hudScoreGfx_0x2b15b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudScoreGfx_0x2b15b8");
#endif

    switch (ctx->pc) {
        case 0x2b1618u: goto label_2b1618;
        case 0x2b1680u: goto label_2b1680;
        case 0x2b1688u: goto label_2b1688;
        case 0x2b16b8u: goto label_2b16b8;
        case 0x2b16d8u: goto label_2b16d8;
        case 0x2b1708u: goto label_2b1708;
        case 0x2b1750u: goto label_2b1750;
        default: break;
    }

    ctx->pc = 0x2b15b8u;

    // 0x2b15b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b15b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b15bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b15c0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b15c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b15c4: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x2b15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2b15c8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b15c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b15cc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2b15ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b15d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b15d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b15d4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2b15d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b15d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b15dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b15dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b15e0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b15e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b15e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b15e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b15e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b15ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b15ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b15f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b15f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b15f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b15f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b15f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b15fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b1600: 0x8c4799f0  lw          $a3, -0x6610($v0)
    ctx->pc = 0x2b1600u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3299F0u));
    // 0x2b1604: 0x8c690058  lw          $t1, 0x58($v1)
    ctx->pc = 0x2b1604u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b1608: 0x1284007  srav        $t0, $t0, $t1
    ctx->pc = 0x2b1608u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 9) & 0x1F));
    // 0x2b160c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2b160cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2b1610: 0xc0ac566  jal         func_2B1598
    ctx->pc = 0x2B1610u;
    SET_GPR_U32(ctx, 31, 0x2B1618u);
    ctx->pc = 0x2B1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1610u;
    // 0x2b1614: 0xf0b821  addu        $s7, $a3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1598u, 0x2B1610u, 0x2B1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1618u;
label_2b1618:
    // 0x2b1618: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b1618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b161c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2b161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b1620: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x2b1620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2b1624: 0x26830004  addiu       $v1, $s4, 0x4
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2b1628: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b1628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b162c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B162Cu;
    {
        const bool branch_taken_0x2b162c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b162c) {
            ctx->pc = 0x2B1630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B162Cu;
            // 0x2b1630: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1634u;
            goto label_2b1634;
        }
    }
    ctx->pc = 0x2B1634u;
label_2b1634:
    // 0x2b1634: 0x2048018  mult        $s0, $s0, $a0
    ctx->pc = 0x2b1634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b1638: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2b1638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2b163c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2b163cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2b1640: 0x34427f00  ori         $v0, $v0, 0x7F00
    ctx->pc = 0x2b1640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32512);
    // 0x2b1644: 0x8c84c4f0  lw          $a0, -0x3B10($a0)
    ctx->pc = 0x2b1644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2b1648: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x2b1648u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b164c: 0x8012  mflo        $s0
    ctx->pc = 0x2b164cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2b1650: 0x321300ff  andi        $s3, $s0, 0xFF
    ctx->pc = 0x2b1650u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2b1654: 0x1495001a  bne         $a0, $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B1654u;
    {
        const bool branch_taken_0x2b1654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1654u;
        // 0x2b1658: 0x262b025  or          $s6, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1654) {
            ctx->pc = 0x2B16C0u;
            goto label_2b16c0;
        }
    }
    ctx->pc = 0x2B165Cu;
    // 0x2b165c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2b165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b1660: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2b1660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2b1664: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2b1664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2b1668: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2b1668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2b166c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b166cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b1670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1674: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b1674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1678: 0xc0a241e  jal         func_289078
    ctx->pc = 0x2B1678u;
    SET_GPR_U32(ctx, 31, 0x2B1680u);
    ctx->pc = 0x2B167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1678u;
    // 0x2b167c: 0x8cb10ca8  lw          $s1, 0xCA8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x2B1678u, 0x2B1680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1680u;
label_2b1680:
    // 0x2b1680: 0xc087284  jal         func_21CA10
    ctx->pc = 0x2B1680u;
    SET_GPR_U32(ctx, 31, 0x2B1688u);
    ctx->pc = 0x2B1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1680u;
    // 0x2b1684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA10u, 0x2B1680u, 0x2B1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1688u;
label_2b1688:
    // 0x2b1688: 0x3c0a5a5a  lui         $t2, 0x5A5A
    ctx->pc = 0x2b1688u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23130 << 16));
    // 0x2b168c: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x2b168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x2b1690: 0x354a5a00  ori         $t2, $t2, 0x5A00
    ctx->pc = 0x2b1690u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)23040);
    // 0x2b1694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1698: 0x26a5025  or          $t2, $s3, $t2
    ctx->pc = 0x2b1698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) | GPR_U64(ctx, 10));
    // 0x2b169c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b169cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16a0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b16a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2b16a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16a8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2b16a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16ac: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2b16acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16b0: 0xc0ac508  jal         func_2B1420
    ctx->pc = 0x2B16B0u;
    SET_GPR_U32(ctx, 31, 0x2B16B8u);
    ctx->pc = 0x2B16B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16B0u;
    // 0x2b16b4: 0x24090016  addiu       $t1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1420u, 0x2B16B0u, 0x2B16B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16B8u;
label_2b16b8:
    // 0x2b16b8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B16B8u;
    {
        const bool branch_taken_0x2b16b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16B8u;
        // 0x2b16bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16b8) {
            ctx->pc = 0x2B1754u;
            goto label_2b1754;
        }
    }
    ctx->pc = 0x2B16C0u;
label_2b16c0:
    // 0x2b16c0: 0x18800023  blez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B16C0u;
    {
        const bool branch_taken_0x2b16c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16C0u;
        // 0x2b16c4: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16c0) {
            ctx->pc = 0x2B1750u;
            goto label_2b1750;
        }
    }
    ctx->pc = 0x2B16C8u;
    // 0x2b16c8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B16C8u;
    {
        const bool branch_taken_0x2b16c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16C8u;
        // 0x2b16cc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16c8) {
            ctx->pc = 0x2B1754u;
            goto label_2b1754;
        }
    }
    ctx->pc = 0x2B16D0u;
    // 0x2b16d0: 0xc0a241e  jal         func_289078
    ctx->pc = 0x2B16D0u;
    SET_GPR_U32(ctx, 31, 0x2B16D8u);
    ctx->pc = 0x2B16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16D0u;
    // 0x2b16d4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x2B16D0u, 0x2B16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16D8u;
label_2b16d8:
    // 0x2b16d8: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x2b16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b16dc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2b16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2b16e0: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2b16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2b16e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b16e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b16e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b16ec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2b16f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b16f4: 0x2484fba8  addiu       $a0, $a0, -0x458
    ctx->pc = 0x2b16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966184));
    // 0x2b16f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b16fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b16fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1700: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2B1700u;
    SET_GPR_U32(ctx, 31, 0x2B1708u);
    ctx->pc = 0x2B1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1700u;
    // 0x2b1704: 0x8c510cac  lw          $s1, 0xCAC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2B1700u, 0x2B1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1708u;
label_2b1708:
    // 0x2b1708: 0x8e4a0014  lw          $t2, 0x14($s2)
    ctx->pc = 0x2b1708u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b170c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b170cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b1710: 0x3c0b7f00  lui         $t3, 0x7F00
    ctx->pc = 0x2b1710u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32512 << 16));
    // 0x2b1714: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b1714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b1718: 0x90202a  slt         $a0, $a0, $s0
    ctx->pc = 0x2b1718u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b171c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2b171cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2b1720: 0x356b0080  ori         $t3, $t3, 0x80
    ctx->pc = 0x2b1720u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)128);
    // 0x2b1724: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x2b1724u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x2b1728: 0x2c4580b  movn        $t3, $s6, $a0
    ctx->pc = 0x2b1728u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 22));
    // 0x2b172c: 0x1535025  or          $t2, $t2, $s3
    ctx->pc = 0x2b172cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 19));
    // 0x2b1730: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x2b1730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x2b1734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b1738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b173c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b173cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1740: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2b1740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1744: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2b1744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1748: 0xc0ac508  jal         func_2B1420
    ctx->pc = 0x2B1748u;
    SET_GPR_U32(ctx, 31, 0x2B1750u);
    ctx->pc = 0x2B174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1748u;
    // 0x2b174c: 0x24090016  addiu       $t1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1420u, 0x2B1748u, 0x2B1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1750u;
label_2b1750:
    // 0x2b1750: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b1750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b1754:
    // 0x2b1754: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b1754u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1758: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b1758u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b175c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b175cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1760: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b1760u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1764: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b1764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1768: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b1768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b176c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b176cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1770: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1774: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b1774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1778: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1778u;
        // 0x2b177c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1780u;
}
