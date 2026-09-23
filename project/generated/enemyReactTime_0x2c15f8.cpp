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

// Function: enemyReactTime
// Address: 0x2c15f8 - 0x2c18cc
void enemyReactTime_0x2c15f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyReactTime_0x2c15f8");
#endif

    switch (ctx->pc) {
        case 0x2c162cu: goto label_2c162c;
        case 0x2c167cu: goto label_2c167c;
        case 0x2c16c8u: goto label_2c16c8;
        case 0x2c1748u: goto label_2c1748;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c17dcu: goto label_2c17dc;
        case 0x2c1828u: goto label_2c1828;
        case 0x2c1874u: goto label_2c1874;
        default: break;
    }

    ctx->pc = 0x2c15f8u;

    // 0x2c15f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c15f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c15fc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2c15fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2c1600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1604: 0x24c5c4a8  addiu       $a1, $a2, -0x3B58
    ctx->pc = 0x2c1604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x2c1608: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c160c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2c160cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c1610: 0x5443003e  bnel        $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C1610u;
    {
        const bool branch_taken_0x2c1610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c1610) {
            ctx->pc = 0x2C1614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1610u;
            // 0x2c1614: 0x8c840160  lw          $a0, 0x160($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C170Cu;
            goto label_2c170c;
        }
    }
    ctx->pc = 0x2C1618u;
    // 0x2c1618: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x2c1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2c161c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C161Cu;
    {
        const bool branch_taken_0x2c161c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C161Cu;
        // 0x2c1620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c161c) {
            ctx->pc = 0x2C166Cu;
            goto label_2c166c;
        }
    }
    ctx->pc = 0x2C1624u;
    // 0x2c1624: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C1624u;
    SET_GPR_U32(ctx, 31, 0x2C162Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C1624u, 0x2C162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C162Cu;
label_2c162c:
    // 0x2c162c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C162Cu;
    {
        const bool branch_taken_0x2c162c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C162Cu;
        // 0x2c1630: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c162c) {
            ctx->pc = 0x2C1640u;
            goto label_2c1640;
        }
    }
    ctx->pc = 0x2C1634u;
    // 0x2c1634: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1638: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1638u;
    {
        const bool branch_taken_0x2c1638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1638u;
        // 0x2c163c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1638) {
            ctx->pc = 0x2C1654u;
            goto label_2c1654;
        }
    }
    ctx->pc = 0x2C1640u;
label_2c1640:
    // 0x2c1640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c1640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c1644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c1644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c1648: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c164c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c164cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c1650: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c1650u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c1654:
    // 0x2c1654: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c1654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c1658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c165c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c1660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1664: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C1664u;
    {
        const bool branch_taken_0x2c1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1664u;
        // 0x2c1668: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1664) {
            ctx->pc = 0x2C1700u;
            goto label_2c1700;
        }
    }
    ctx->pc = 0x2C166Cu;
label_2c166c:
    // 0x2c166c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C166Cu;
    {
        const bool branch_taken_0x2c166c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C166Cu;
        // 0x2c1670: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c166c) {
            ctx->pc = 0x2C16B8u;
            goto label_2c16b8;
        }
    }
    ctx->pc = 0x2C1674u;
    // 0x2c1674: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C1674u;
    SET_GPR_U32(ctx, 31, 0x2C167Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C1674u, 0x2C167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C167Cu;
label_2c167c:
    // 0x2c167c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C167Cu;
    {
        const bool branch_taken_0x2c167c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C167Cu;
        // 0x2c1680: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c167c) {
            ctx->pc = 0x2C1690u;
            goto label_2c1690;
        }
    }
    ctx->pc = 0x2C1684u;
    // 0x2c1684: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1688u;
    {
        const bool branch_taken_0x2c1688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1688u;
        // 0x2c168c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1688) {
            ctx->pc = 0x2C16A4u;
            goto label_2c16a4;
        }
    }
    ctx->pc = 0x2C1690u;
label_2c1690:
    // 0x2c1690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c1690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c1694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c1694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c1698: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c169c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c169cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c16a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c16a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c16a4:
    // 0x2c16a4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c16a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c16a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c16a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c16ac: 0xc78190d0  lwc1        $f1, -0x6F30($gp)
    ctx->pc = 0x2c16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c16b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C16B0u;
    {
        const bool branch_taken_0x2c16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16B0u;
        // 0x2c16b4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16b0) {
            ctx->pc = 0x2C1700u;
            goto label_2c1700;
        }
    }
    ctx->pc = 0x2C16B8u;
label_2c16b8:
    // 0x2c16b8: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C16B8u;
    {
        const bool branch_taken_0x2c16b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c16b8) {
            ctx->pc = 0x2C16BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16B8u;
            // 0x2c16bc: 0x8c840160  lw          $a0, 0x160($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C170Cu;
            goto label_2c170c;
        }
    }
    ctx->pc = 0x2C16C0u;
    // 0x2c16c0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C16C0u;
    SET_GPR_U32(ctx, 31, 0x2C16C8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C16C0u, 0x2C16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16C8u;
label_2c16c8:
    // 0x2c16c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C16C8u;
    {
        const bool branch_taken_0x2c16c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16C8u;
        // 0x2c16cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16c8) {
            ctx->pc = 0x2C16DCu;
            goto label_2c16dc;
        }
    }
    ctx->pc = 0x2C16D0u;
    // 0x2c16d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c16d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c16d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C16D4u;
    {
        const bool branch_taken_0x2c16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16D4u;
        // 0x2c16d8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16d4) {
            ctx->pc = 0x2C16F0u;
            goto label_2c16f0;
        }
    }
    ctx->pc = 0x2C16DCu;
label_2c16dc:
    // 0x2c16dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c16dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c16e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c16e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c16e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c16e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c16e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c16ec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c16ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c16f0:
    // 0x2c16f0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c16f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c16f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c16f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c16f8: 0xc78190d4  lwc1        $f1, -0x6F2C($gp)
    ctx->pc = 0x2c16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c16fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c16fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2c1700:
    // 0x2c1700: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c1700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1704: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2C1704u;
    {
        const bool branch_taken_0x2c1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1704u;
        // 0x2c1708: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1704) {
            ctx->pc = 0x2C18C0u;
            goto label_2c18c0;
        }
    }
    ctx->pc = 0x2C170Cu;
label_2c170c:
    // 0x2c170c: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58
    ctx->pc = 0x2c170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x2c1710: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1718: 0x90440031  lbu         $a0, 0x31($v0)
    ctx->pc = 0x2c1718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 49)));
    // 0x2c171c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2c171cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c1720: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2C1720u;
    {
        const bool branch_taken_0x2c1720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1720u;
        // 0x2c1724: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1720) {
            ctx->pc = 0x2C18BCu;
            goto label_2c18bc;
        }
    }
    ctx->pc = 0x2C1728u;
    // 0x2c1728: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c1728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c172c: 0x24429d60  addiu       $v0, $v0, -0x62A0
    ctx->pc = 0x2c172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942048));
    // 0x2c1730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c1734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1738: 0x800008  jr          $a0
    ctx->pc = 0x2C1738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C1740u: goto label_2c1740;
            case 0x2C1788u: goto label_2c1788;
            case 0x2C17D4u: goto label_2c17d4;
            case 0x2C1820u: goto label_2c1820;
            case 0x2C186Cu: goto label_2c186c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1738u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C1740u;
label_2c1740:
    // 0x2c1740: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C1740u;
    SET_GPR_U32(ctx, 31, 0x2C1748u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C1740u, 0x2C1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1748u;
label_2c1748:
    // 0x2c1748: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1748u;
    {
        const bool branch_taken_0x2c1748 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1748u;
        // 0x2c174c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1748) {
            ctx->pc = 0x2C175Cu;
            goto label_2c175c;
        }
    }
    ctx->pc = 0x2C1750u;
    // 0x2c1750: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1754: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1754u;
    {
        const bool branch_taken_0x2c1754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1754u;
        // 0x2c1758: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1754) {
            ctx->pc = 0x2C1770u;
            goto label_2c1770;
        }
    }
    ctx->pc = 0x2C175Cu;
label_2c175c:
    // 0x2c175c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c1760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c1760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c1764: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1768: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c1768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c176c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c176cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c1770:
    // 0x2c1770: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c1770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c1774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1778: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x2c177c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c177cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1780: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C1780u;
    {
        const bool branch_taken_0x2c1780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1780u;
        // 0x2c1784: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1780) {
            ctx->pc = 0x2C18B4u;
            goto label_2c18b4;
        }
    }
    ctx->pc = 0x2C1788u;
label_2c1788:
    // 0x2c1788: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C1788u;
    SET_GPR_U32(ctx, 31, 0x2C1790u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C1788u, 0x2C1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1790u;
label_2c1790:
    // 0x2c1790: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1790u;
    {
        const bool branch_taken_0x2c1790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1790u;
        // 0x2c1794: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1790) {
            ctx->pc = 0x2C17A4u;
            goto label_2c17a4;
        }
    }
    ctx->pc = 0x2C1798u;
    // 0x2c1798: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c179c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C179Cu;
    {
        const bool branch_taken_0x2c179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C179Cu;
        // 0x2c17a0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c179c) {
            ctx->pc = 0x2C17B8u;
            goto label_2c17b8;
        }
    }
    ctx->pc = 0x2C17A4u;
label_2c17a4:
    // 0x2c17a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c17a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c17ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c17acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c17b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c17b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c17b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c17b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c17b8:
    // 0x2c17b8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c17b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c17bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c17bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c17c0: 0xc78290d8  lwc1        $f2, -0x6F28($gp)
    ctx->pc = 0x2c17c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c17c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c17c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c17c8: 0xc78190dc  lwc1        $f1, -0x6F24($gp)
    ctx->pc = 0x2c17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c17cc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2C17CCu;
    {
        const bool branch_taken_0x2c17cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17CCu;
        // 0x2c17d0: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17cc) {
            ctx->pc = 0x2C18B4u;
            goto label_2c18b4;
        }
    }
    ctx->pc = 0x2C17D4u;
label_2c17d4:
    // 0x2c17d4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C17D4u;
    SET_GPR_U32(ctx, 31, 0x2C17DCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C17D4u, 0x2C17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17DCu;
label_2c17dc:
    // 0x2c17dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C17DCu;
    {
        const bool branch_taken_0x2c17dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17DCu;
        // 0x2c17e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17dc) {
            ctx->pc = 0x2C17F0u;
            goto label_2c17f0;
        }
    }
    ctx->pc = 0x2C17E4u;
    // 0x2c17e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c17e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c17e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C17E8u;
    {
        const bool branch_taken_0x2c17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17E8u;
        // 0x2c17ec: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17e8) {
            ctx->pc = 0x2C1804u;
            goto label_2c1804;
        }
    }
    ctx->pc = 0x2C17F0u;
label_2c17f0:
    // 0x2c17f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c17f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c17f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c17f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c17f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c17f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c17fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c17fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c1800: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c1800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c1804:
    // 0x2c1804: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c1804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c1808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c180c: 0xc78290e0  lwc1        $f2, -0x6F20($gp)
    ctx->pc = 0x2c180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1814: 0xc78190e4  lwc1        $f1, -0x6F1C($gp)
    ctx->pc = 0x2c1814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1818: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C1818u;
    {
        const bool branch_taken_0x2c1818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1818u;
        // 0x2c181c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1818) {
            ctx->pc = 0x2C18B4u;
            goto label_2c18b4;
        }
    }
    ctx->pc = 0x2C1820u;
label_2c1820:
    // 0x2c1820: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C1820u;
    SET_GPR_U32(ctx, 31, 0x2C1828u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C1820u, 0x2C1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1828u;
label_2c1828:
    // 0x2c1828: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1828u;
    {
        const bool branch_taken_0x2c1828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1828u;
        // 0x2c182c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1828) {
            ctx->pc = 0x2C183Cu;
            goto label_2c183c;
        }
    }
    ctx->pc = 0x2C1830u;
    // 0x2c1830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1834: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1834u;
    {
        const bool branch_taken_0x2c1834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1834u;
        // 0x2c1838: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1834) {
            ctx->pc = 0x2C1850u;
            goto label_2c1850;
        }
    }
    ctx->pc = 0x2C183Cu;
label_2c183c:
    // 0x2c183c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c1840: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c1844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1848: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c1848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c184c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c184cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c1850:
    // 0x2c1850: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c1850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c1854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1858: 0xc78290e8  lwc1        $f2, -0x6F18($gp)
    ctx->pc = 0x2c1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c185c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c185cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1860: 0xc78190ec  lwc1        $f1, -0x6F14($gp)
    ctx->pc = 0x2c1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1864: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C1864u;
    {
        const bool branch_taken_0x2c1864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1864u;
        // 0x2c1868: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1864) {
            ctx->pc = 0x2C18B4u;
            goto label_2c18b4;
        }
    }
    ctx->pc = 0x2C186Cu;
label_2c186c:
    // 0x2c186c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C186Cu;
    SET_GPR_U32(ctx, 31, 0x2C1874u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C186Cu, 0x2C1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1874u;
label_2c1874:
    // 0x2c1874: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1874u;
    {
        const bool branch_taken_0x2c1874 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1874u;
        // 0x2c1878: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1874) {
            ctx->pc = 0x2C1888u;
            goto label_2c1888;
        }
    }
    ctx->pc = 0x2C187Cu;
    // 0x2c187c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c187cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1880: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1880u;
    {
        const bool branch_taken_0x2c1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1880u;
        // 0x2c1884: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1880) {
            ctx->pc = 0x2C189Cu;
            goto label_2c189c;
        }
    }
    ctx->pc = 0x2C1888u;
label_2c1888:
    // 0x2c1888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c1888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c188c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c1890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1894: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c1894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c1898: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c1898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c189c:
    // 0x2c189c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c189cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c18a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c18a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c18a4: 0xc78290f0  lwc1        $f2, -0x6F10($gp)
    ctx->pc = 0x2c18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c18a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c18a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c18ac: 0xc78190f4  lwc1        $f1, -0x6F0C($gp)
    ctx->pc = 0x2c18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c18b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c18b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2c18b4:
    // 0x2c18b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C18B4u;
    {
        const bool branch_taken_0x2c18b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B4u;
        // 0x2c18b8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18b4) {
            ctx->pc = 0x2C18C0u;
            goto label_2c18c0;
        }
    }
    ctx->pc = 0x2C18BCu;
label_2c18bc:
    // 0x2c18bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c18bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c18c0:
    // 0x2c18c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c18c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C18C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18C4u;
        // 0x2c18c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C18C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C18CCu;
}
