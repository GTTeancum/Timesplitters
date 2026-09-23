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

// Function: main_pageTick
// Address: 0x2073c0 - 0x207790
void main_pageTick_0x2073c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_pageTick_0x2073c0");
#endif

    switch (ctx->pc) {
        case 0x207410u: goto label_207410;
        case 0x207438u: goto label_207438;
        case 0x207468u: goto label_207468;
        case 0x207490u: goto label_207490;
        case 0x2074b8u: goto label_2074b8;
        case 0x2074d4u: goto label_2074d4;
        case 0x2074dcu: goto label_2074dc;
        case 0x2074fcu: goto label_2074fc;
        case 0x207510u: goto label_207510;
        case 0x207520u: goto label_207520;
        case 0x207540u: goto label_207540;
        case 0x207558u: goto label_207558;
        case 0x20764cu: goto label_20764c;
        case 0x2076b4u: goto label_2076b4;
        case 0x207714u: goto label_207714;
        case 0x20775cu: goto label_20775c;
        default: break;
    }

    ctx->pc = 0x2073c0u;

    // 0x2073c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2073c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2073c4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2073c8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2073c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2073cc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2073ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2073d0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2073d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2073d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2073d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2073d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2073d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2073dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2073dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2073e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2073e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2073e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2073e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2073e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2073e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2073ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2073ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2073f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2073F0u;
    {
        const bool branch_taken_0x2073f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073F0u;
        // 0x2073f4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073f0) {
            ctx->pc = 0x207408u;
            goto label_207408;
        }
    }
    ctx->pc = 0x2073F8u;
    // 0x2073f8: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x2073f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2073fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207400: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207400u;
    {
        const bool branch_taken_0x207400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x207404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207400u;
        // 0x207404: 0x8f829b40  lw          $v0, -0x64C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207400) {
            ctx->pc = 0x20741Cu;
            goto label_20741c;
        }
    }
    ctx->pc = 0x207408u;
label_207408:
    // 0x207408: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x207408u;
    SET_GPR_U32(ctx, 31, 0x207410u);
    ctx->pc = 0x20740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207408u;
    // 0x20740c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x207408u, 0x207410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207410u;
label_207410:
    // 0x207410: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x207414: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x207414u;
    {
        const bool branch_taken_0x207414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207414u;
        // 0x207418: 0x8f829b40  lw          $v0, -0x64C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207414) {
            ctx->pc = 0x207440u;
            goto label_207440;
        }
    }
    ctx->pc = 0x20741Cu;
label_20741c:
    // 0x20741c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x207420: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207420u;
    {
        const bool branch_taken_0x207420 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x207424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207420u;
        // 0x207424: 0xaf829b40  sw          $v0, -0x64C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207420) {
            ctx->pc = 0x207430u;
            goto label_207430;
        }
    }
    ctx->pc = 0x207428u;
    // 0x207428: 0x240204be  addiu       $v0, $zero, 0x4BE
    ctx->pc = 0x207428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1214));
    // 0x20742c: 0xaf829b40  sw          $v0, -0x64C0($gp)
    ctx->pc = 0x20742cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941504), GPR_U32(ctx, 2));
label_207430:
    // 0x207430: 0xc081800  jal         func_206000
    ctx->pc = 0x207430u;
    SET_GPR_U32(ctx, 31, 0x207438u);
    ctx->pc = 0x207434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207430u;
    // 0x207434: 0x8f849b40  lw          $a0, -0x64C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206000u, 0x207430u, 0x207438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207438u;
label_207438:
    // 0x207438: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x207438u;
    {
        const bool branch_taken_0x207438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207438u;
        // 0x20743c: 0x8f829b40  lw          $v0, -0x64C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207438) {
            ctx->pc = 0x207494u;
            goto label_207494;
        }
    }
    ctx->pc = 0x207440u;
label_207440:
    // 0x207440: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x207440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x207444: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x207444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x207448: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x207448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20744c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20744Cu;
    {
        const bool branch_taken_0x20744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20744Cu;
        // 0x207450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20744c) {
            ctx->pc = 0x207460u;
            goto label_207460;
        }
    }
    ctx->pc = 0x207454u;
    // 0x207454: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x207454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x207458: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207458u;
    {
        const bool branch_taken_0x207458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207458u;
        // 0x20745c: 0x8f829b40  lw          $v0, -0x64C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207458) {
            ctx->pc = 0x207474u;
            goto label_207474;
        }
    }
    ctx->pc = 0x207460u;
label_207460:
    // 0x207460: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x207460u;
    SET_GPR_U32(ctx, 31, 0x207468u);
    ctx->pc = 0x207464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207460u;
    // 0x207464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x207460u, 0x207468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207468u;
label_207468:
    // 0x207468: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x207468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20746c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20746Cu;
    {
        const bool branch_taken_0x20746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20746Cu;
        // 0x207470: 0x8f829b40  lw          $v0, -0x64C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20746c) {
            ctx->pc = 0x207490u;
            goto label_207490;
        }
    }
    ctx->pc = 0x207474u;
label_207474:
    // 0x207474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207478: 0x284304bf  slti        $v1, $v0, 0x4BF
    ctx->pc = 0x207478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1215) ? 1 : 0);
    // 0x20747c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20747Cu;
    {
        const bool branch_taken_0x20747c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20747Cu;
        // 0x207480: 0xaf829b40  sw          $v0, -0x64C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20747c) {
            ctx->pc = 0x207488u;
            goto label_207488;
        }
    }
    ctx->pc = 0x207484u;
    // 0x207484: 0xaf809b40  sw          $zero, -0x64C0($gp)
    ctx->pc = 0x207484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941504), GPR_U32(ctx, 0));
label_207488:
    // 0x207488: 0xc081800  jal         func_206000
    ctx->pc = 0x207488u;
    SET_GPR_U32(ctx, 31, 0x207490u);
    ctx->pc = 0x20748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207488u;
    // 0x20748c: 0x8f849b40  lw          $a0, -0x64C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206000u, 0x207488u, 0x207490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x8f829b40  lw          $v0, -0x64C0($gp)
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
label_207494:
    // 0x207494: 0x24110024  addiu       $s1, $zero, 0x24
    ctx->pc = 0x207494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x207498: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x20749c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x20749cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x2074a0: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2074a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2074a4: 0x2670e180  addiu       $s0, $s3, -0x1E80
    ctx->pc = 0x2074a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959488));
    // 0x2074a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2074a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2074ac: 0x94540012  lhu         $s4, 0x12($v0)
    ctx->pc = 0x2074acu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2074b0: 0xc0817e6  jal         func_205F98
    ctx->pc = 0x2074B0u;
    SET_GPR_U32(ctx, 31, 0x2074B8u);
    ctx->pc = 0x2074B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074B0u;
    // 0x2074b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F98u, 0x2074B0u, 0x2074B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074B8u;
label_2074b8:
    // 0x2074b8: 0x8f839b40  lw          $v1, -0x64C0($gp)
    ctx->pc = 0x2074b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x2074bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2074bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074c0: 0x26c49558  addiu       $a0, $s6, -0x6AA8
    ctx->pc = 0x2074c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939992));
    // 0x2074c4: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x2074c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2074c8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2074c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2074cc: 0xc08b0c2  jal         func_22C308
    ctx->pc = 0x2074CCu;
    SET_GPR_U32(ctx, 31, 0x2074D4u);
    ctx->pc = 0x2074D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074CCu;
    // 0x2074d0: 0x94650014  lhu         $a1, 0x14($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C308u, 0x2074CCu, 0x2074D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074D4u;
label_2074d4:
    // 0x2074d4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2074D4u;
    SET_GPR_U32(ctx, 31, 0x2074DCu);
    ctx->pc = 0x2074D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074D4u;
    // 0x2074d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2074D4u, 0x2074DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074DCu;
label_2074dc:
    // 0x2074dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2074dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2074e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2074E0u;
    {
        const bool branch_taken_0x2074e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074E0u;
        // 0x2074e4: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074e0) {
            ctx->pc = 0x2074F4u;
            goto label_2074f4;
        }
    }
    ctx->pc = 0x2074E8u;
    // 0x2074e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2074e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2074ec: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2074ECu;
    {
        const bool branch_taken_0x2074ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074ECu;
        // 0x2074f0: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074ec) {
            ctx->pc = 0x207768u;
            goto label_207768;
        }
    }
    ctx->pc = 0x2074F4u;
label_2074f4:
    // 0x2074f4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2074F4u;
    SET_GPR_U32(ctx, 31, 0x2074FCu);
    ctx->pc = 0x2074F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074F4u;
    // 0x2074f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2074F4u, 0x2074FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074FCu;
label_2074fc:
    // 0x2074fc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2074fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x207500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207500u;
    {
        const bool branch_taken_0x207500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207500u;
        // 0x207504: 0x8f849b40  lw          $a0, -0x64C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207500) {
            ctx->pc = 0x207518u;
            goto label_207518;
        }
    }
    ctx->pc = 0x207508u;
    // 0x207508: 0xc081546  jal         func_205518
    ctx->pc = 0x207508u;
    SET_GPR_U32(ctx, 31, 0x207510u);
    ctx->pc = 0x20750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207508u;
    // 0x20750c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x207508u, 0x207510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207510u;
label_207510:
    // 0x207510: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x207510u;
    {
        const bool branch_taken_0x207510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207510) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207518u;
label_207518:
    // 0x207518: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x207518u;
    SET_GPR_U32(ctx, 31, 0x207520u);
    ctx->pc = 0x20751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207518u;
    // 0x20751c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x207518u, 0x207520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207520u;
label_207520:
    // 0x207520: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x207520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x207524: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207524u;
    {
        const bool branch_taken_0x207524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207524u;
        // 0x207528: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207524) {
            ctx->pc = 0x207570u;
            goto label_207570;
        }
    }
    ctx->pc = 0x20752Cu;
    // 0x20752c: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x20752cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x207530: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207530u;
    {
        const bool branch_taken_0x207530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207530u;
        // 0x207534: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207530) {
            ctx->pc = 0x207560u;
            goto label_207560;
        }
    }
    ctx->pc = 0x207538u;
    // 0x207538: 0xc08180a  jal         func_206028
    ctx->pc = 0x207538u;
    SET_GPR_U32(ctx, 31, 0x207540u);
    ctx->pc = 0x206028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206028u, 0x207538u, 0x207540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207540u;
label_207540:
    // 0x207540: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207544: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x207548: 0x24849bc8  addiu       $a0, $a0, -0x6438
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941640));
    // 0x20754c: 0x34a57f80  ori         $a1, $a1, 0x7F80
    ctx->pc = 0x20754cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32640);
    // 0x207550: 0xc081afa  jal         func_206BE8
    ctx->pc = 0x207550u;
    SET_GPR_U32(ctx, 31, 0x207558u);
    ctx->pc = 0x207554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207550u;
    // 0x207554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206BE8u, 0x207550u, 0x207558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207558u;
label_207558:
    // 0x207558: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x207558u;
    {
        const bool branch_taken_0x207558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207558) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207560u;
label_207560:
    // 0x207560: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x207560u;
    {
        const bool branch_taken_0x207560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207560u;
        // 0x207564: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207560) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207568u;
    // 0x207568: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x207568u;
    {
        const bool branch_taken_0x207568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207568u;
        // 0x20756c: 0xaf829b60  sw          $v0, -0x64A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207568) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207570u;
label_207570:
    // 0x207570: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x207574: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207578: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x207578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x20757c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20757Cu;
    {
        const bool branch_taken_0x20757c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20757Cu;
        // 0x207580: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20757c) {
            ctx->pc = 0x2075DCu;
            goto label_2075dc;
        }
    }
    ctx->pc = 0x207584u;
    // 0x207584: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x207584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x207588: 0x2466fffb  addiu       $a2, $v1, -0x5
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x20758c: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x20758cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x207590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x207590u;
    {
        const bool branch_taken_0x207590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207590u;
        // 0x207594: 0x3863000a  xori        $v1, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207590) {
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207598u;
    // 0x207598: 0x8f849b44  lw          $a0, -0x64BC($gp)
    ctx->pc = 0x207598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941508)));
    // 0x20759c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2075a0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2075a4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2075a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2075a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2075ac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2075acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2075b0: 0x4610024  bgez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2075B0u;
    {
        const bool branch_taken_0x2075b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2075B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075B0u;
        // 0x2075b4: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075b0) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x2075B8u;
    // 0x2075b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2075bc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2075bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2075c0: 0x24428c60  addiu       $v0, $v0, -0x73A0
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937696));
    // 0x2075c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2075c8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2075c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2075cc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2075CCu;
    {
        const bool branch_taken_0x2075cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075CCu;
        // 0x2075d0: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075cc) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x2075D4u;
label_2075d4:
    // 0x2075d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2075D4u;
    {
        const bool branch_taken_0x2075d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075D4u;
        // 0x2075d8: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075d4) {
            ctx->pc = 0x207640u;
            goto label_207640;
        }
    }
    ctx->pc = 0x2075DCu;
label_2075dc:
    // 0x2075dc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2075DCu;
    {
        const bool branch_taken_0x2075dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075dc) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x2075E4u;
    // 0x2075e4: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x2075e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2075e8: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x2075e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x2075ec: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2075ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2075f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2075F0u;
    {
        const bool branch_taken_0x2075f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075F0u;
        // 0x2075f4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075f0) {
            ctx->pc = 0x207638u;
            goto label_207638;
        }
    }
    ctx->pc = 0x2075F8u;
    // 0x2075f8: 0x8f859b44  lw          $a1, -0x64BC($gp)
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941508)));
    // 0x2075fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2075fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x207600: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x207604: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207608: 0x24428c60  addiu       $v0, $v0, -0x73A0
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937696));
    // 0x20760c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x20760cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x207610: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207614: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20761c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x20761cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x207620: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x207624: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x207624u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207628: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207628u;
    {
        const bool branch_taken_0x207628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207628u;
        // 0x20762c: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207628) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207630u;
    // 0x207630: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207630u;
    {
        const bool branch_taken_0x207630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207630u;
        // 0x207634: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207630) {
            ctx->pc = 0x207644u;
            goto label_207644;
        }
    }
    ctx->pc = 0x207638u;
label_207638:
    // 0x207638: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x207638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x20763c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_207640:
    // 0x207640: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x207640u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_207644:
    // 0x207644: 0xc0817e6  jal         func_205F98
    ctx->pc = 0x207644u;
    SET_GPR_U32(ctx, 31, 0x20764Cu);
    ctx->pc = 0x207648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207644u;
    // 0x207648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F98u, 0x207644u, 0x20764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20764Cu;
label_20764c:
    // 0x20764c: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20764Cu;
    {
        const bool branch_taken_0x20764c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x207650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20764Cu;
        // 0x207650: 0x2a420240  slti        $v0, $s2, 0x240 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)576) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20764c) {
            ctx->pc = 0x207698u;
            goto label_207698;
        }
    }
    ctx->pc = 0x207654u;
    // 0x207654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207654u;
    {
        const bool branch_taken_0x207654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207654u;
        // 0x207658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207654) {
            ctx->pc = 0x207664u;
            goto label_207664;
        }
    }
    ctx->pc = 0x20765Cu;
    // 0x20765c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20765Cu;
    {
        const bool branch_taken_0x20765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20765Cu;
        // 0x207660: 0x2412023f  addiu       $s2, $zero, 0x23F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20765c) {
            ctx->pc = 0x20766Cu;
            goto label_20766c;
        }
    }
    ctx->pc = 0x207664u;
label_207664:
    // 0x207664: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x207664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x207668: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x207668u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_20766c:
    // 0x20766c: 0x8f849b40  lw          $a0, -0x64C0($gp)
    ctx->pc = 0x20766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x207670: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x207670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x207674: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x207678: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x20767c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x20767cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x207680: 0x244220a8  addiu       $v0, $v0, 0x20A8
    ctx->pc = 0x207680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8360));
    // 0x207684: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207688: 0x2665e180  addiu       $a1, $s3, -0x1E80
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959488));
    // 0x20768c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x20768cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207690: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x207694: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x207694u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
label_207698:
    // 0x207698: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x207698u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x20769c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076a0: 0x26319580  addiu       $s1, $s1, -0x6A80
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940032));
    // 0x2076a4: 0x24140024  addiu       $s4, $zero, 0x24
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2076a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076ac: 0xc0818b0  jal         func_2062C0
    ctx->pc = 0x2076ACu;
    SET_GPR_U32(ctx, 31, 0x2076B4u);
    ctx->pc = 0x2076B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2076ACu;
    // 0x2076b0: 0x24120018  addiu       $s2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062C0u, 0x2076ACu, 0x2076B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076B4u;
label_2076b4:
    // 0x2076b4: 0x2673e180  addiu       $s3, $s3, -0x1E80
    ctx->pc = 0x2076b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959488));
    // 0x2076b8: 0x8f829b40  lw          $v0, -0x64C0($gp)
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x2076bc: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x2076c0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2076c4: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x2076c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2076c8: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2076c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2076cc: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x2076ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2076d0: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x2076d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2076d4: 0x96c49558  lhu         $a0, -0x6AA8($s6)
    ctx->pc = 0x2076d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294939992)));
    // 0x2076d8: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2076dc: 0x24c6001e  addiu       $a2, $a2, 0x1E
    ctx->pc = 0x2076dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x2076e0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2076e4: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2076e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2076ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2076ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076f0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2076f4: 0xa4440014  sh          $a0, 0x14($v0)
    ctx->pc = 0x2076f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x2076f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2076f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076fc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207700: 0x256b6d18  addiu       $t3, $t3, 0x6D18
    ctx->pc = 0x207700u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27928));
    // 0x207704: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x207704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x207708: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x20770c: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x20770Cu;
    SET_GPR_U32(ctx, 31, 0x207714u);
    ctx->pc = 0x207710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20770Cu;
    // 0x207710: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x20770Cu, 0x207714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207714u;
label_207714:
    // 0x207714: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x207714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x207718: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x20771c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x20771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x207720: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x207720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x207724: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x207724u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x207728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20772c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x20772cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x207730: 0x1080c3  sra         $s0, $s0, 3
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 3));
    // 0x207734: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x207734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x207738: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x207738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    // 0x20773c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207740: 0x8f829b40  lw          $v0, -0x64C0($gp)
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x207744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207748: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x207748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20774c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x207750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x207750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x207754: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x207754u;
    SET_GPR_U32(ctx, 31, 0x20775Cu);
    ctx->pc = 0x207758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207754u;
    // 0x207758: 0xacc395b0  sw          $v1, -0x6A50($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294940080), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x207754u, 0x20775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20775Cu;
label_20775c:
    // 0x20775c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x207760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207764: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x207764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
label_207768:
    // 0x207768: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x207768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20776c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x20776cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x207770: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x207770u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207774: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x207774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207778: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x207778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20777c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20777cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207780: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x207780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207788: 0x3e00008  jr          $ra
    ctx->pc = 0x207788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207788u;
        // 0x20778c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207790u;
}
