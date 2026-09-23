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

// Function: main
// Address: 0x2013b0 - 0x201880
void ps2_main_0x2013b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_main_0x2013b0");
#endif

    switch (ctx->pc) {
        case 0x2013f8u: goto label_2013f8;
        case 0x201438u: goto label_201438;
        case 0x201444u: goto label_201444;
        case 0x201450u: goto label_201450;
        case 0x20145cu: goto label_20145c;
        case 0x201468u: goto label_201468;
        case 0x201474u: goto label_201474;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014c4u: goto label_2014c4;
        case 0x20150cu: goto label_20150c;
        case 0x201534u: goto label_201534;
        case 0x201558u: goto label_201558;
        case 0x201588u: goto label_201588;
        case 0x201598u: goto label_201598;
        case 0x2015a8u: goto label_2015a8;
        case 0x2015b0u: goto label_2015b0;
        case 0x2015bcu: goto label_2015bc;
        case 0x2015c4u: goto label_2015c4;
        case 0x2015d0u: goto label_2015d0;
        case 0x2015e0u: goto label_2015e0;
        case 0x2015f0u: goto label_2015f0;
        case 0x2015f8u: goto label_2015f8;
        case 0x201600u: goto label_201600;
        case 0x201610u: goto label_201610;
        case 0x201618u: goto label_201618;
        case 0x2016a0u: goto label_2016a0;
        case 0x201720u: goto label_201720;
        case 0x201740u: goto label_201740;
        case 0x201778u: goto label_201778;
        case 0x2017c0u: goto label_2017c0;
        case 0x2017f0u: goto label_2017f0;
        case 0x201800u: goto label_201800;
        case 0x20180cu: goto label_20180c;
        case 0x201810u: goto label_201810;
        case 0x201818u: goto label_201818;
        case 0x201828u: goto label_201828;
        case 0x201830u: goto label_201830;
        case 0x201838u: goto label_201838;
        case 0x201844u: goto label_201844;
        case 0x20184cu: goto label_20184c;
        default: break;
    }

    ctx->pc = 0x2013b0u;

    // 0x2013b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2013b4: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2013b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2013b8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2013b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013bc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2013bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2013c0: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x2013c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2013c4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2013c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2013c8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2013c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2013cc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2013ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013d0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2013d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2013d4: 0x3c1601fb  lui         $s6, 0x1FB
    ctx->pc = 0x2013d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)507 << 16));
    // 0x2013d8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2013d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2013dc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2013dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2013e0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2013e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2013e4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2013e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2013e8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2013e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2013ec: 0x241004dc  addiu       $s0, $zero, 0x4DC
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    // 0x2013f0: 0xc0b84cc  jal         func_2E1330
    ctx->pc = 0x2013F0u;
    SET_GPR_U32(ctx, 31, 0x2013F8u);
    ctx->pc = 0x2013F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013F0u;
    // 0x2013f4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1330u, 0x2013F0u, 0x2013F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013F8u;
label_2013f8:
    // 0x2013f8: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x2013fc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x201400: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x201404: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x201408: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x20140c: 0x24c63750  addiu       $a2, $a2, 0x3750
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14160));
    // 0x201410: 0x24a54ac8  addiu       $a1, $a1, 0x4AC8
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19144));
    // 0x201414: 0x24845e40  addiu       $a0, $a0, 0x5E40
    ctx->pc = 0x201414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24128));
    // 0x201418: 0x246371b8  addiu       $v1, $v1, 0x71B8
    ctx->pc = 0x201418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29112));
    // 0x20141c: 0x24428530  addiu       $v0, $v0, -0x7AD0
    ctx->pc = 0x20141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935856));
    // 0x201420: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x201424: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x201424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201428: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20142c: 0x24b20004  addiu       $s2, $a1, 0x4
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x201430: 0x24d10004  addiu       $s1, $a2, 0x4
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x201434: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x201434u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x313754u));
label_201438:
    // 0x201438: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x201438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20143c: 0xc0804da  jal         func_201368
    ctx->pc = 0x20143Cu;
    SET_GPR_U32(ctx, 31, 0x201444u);
    ctx->pc = 0x201440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20143Cu;
    // 0x201440: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201368u, 0x20143Cu, 0x201444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201444u;
label_201444:
    // 0x201444: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x201448: 0xc0804da  jal         func_201368
    ctx->pc = 0x201448u;
    SET_GPR_U32(ctx, 31, 0x201450u);
    ctx->pc = 0x20144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201448u;
    // 0x20144c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201368u, 0x201448u, 0x201450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201450u;
label_201450:
    // 0x201450: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x201454: 0xc0804da  jal         func_201368
    ctx->pc = 0x201454u;
    SET_GPR_U32(ctx, 31, 0x20145Cu);
    ctx->pc = 0x201458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201454u;
    // 0x201458: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201368u, 0x201454u, 0x20145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20145Cu;
label_20145c:
    // 0x20145c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x201460: 0xc0804da  jal         func_201368
    ctx->pc = 0x201460u;
    SET_GPR_U32(ctx, 31, 0x201468u);
    ctx->pc = 0x201464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201460u;
    // 0x201464: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201368u, 0x201460u, 0x201468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201468u;
label_201468:
    // 0x201468: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20146c: 0xc0804da  jal         func_201368
    ctx->pc = 0x20146Cu;
    SET_GPR_U32(ctx, 31, 0x201474u);
    ctx->pc = 0x201470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20146Cu;
    // 0x201470: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201368u, 0x20146Cu, 0x201474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201474u;
label_201474:
    // 0x201474: 0x603fff0  bgezl       $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x201474u;
    {
        const bool branch_taken_0x201474 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x201474) {
            ctx->pc = 0x201478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201474u;
            // 0x201478: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201438;
        }
    }
    ctx->pc = 0x20147Cu;
    // 0x20147c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201480u;
    {
        const bool branch_taken_0x201480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201480u;
        // 0x201484: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201480) {
            ctx->pc = 0x201490u;
            goto label_201490;
        }
    }
    ctx->pc = 0x201488u;
    // 0x201488: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20148c: 0x245e2c30  addiu       $fp, $v0, 0x2C30
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
label_201490:
    // 0x201490: 0xaf9793b0  sw          $s7, -0x6C50($gp)
    ctx->pc = 0x201490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939568), GPR_U32(ctx, 23));
    // 0x201494: 0x26d0c580  addiu       $s0, $s6, -0x3A80
    ctx->pc = 0x201494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
    // 0x201498: 0xaf9e93b4  sw          $fp, -0x6C4C($gp)
    ctx->pc = 0x201498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939572), GPR_U32(ctx, 30));
    // 0x20149c: 0xc080072  jal         func_2001C8
    ctx->pc = 0x20149Cu;
    SET_GPR_U32(ctx, 31, 0x2014A4u);
    ctx->pc = 0x2014A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20149Cu;
    // 0x2014a0: 0x2411002d  addiu       $s1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2001C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2001C8u, 0x20149Cu, 0x2014A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014A4u;
label_2014a4:
    // 0x2014a4: 0xc0acf14  jal         func_2B3C50
    ctx->pc = 0x2014A4u;
    SET_GPR_U32(ctx, 31, 0x2014ACu);
    ctx->pc = 0x2B3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C50u, 0x2014A4u, 0x2014ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014ACu;
label_2014ac:
    // 0x2014ac: 0xc0ada3e  jal         func_2B68F8
    ctx->pc = 0x2014ACu;
    SET_GPR_U32(ctx, 31, 0x2014B4u);
    ctx->pc = 0x2014B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014ACu;
    // 0x2014b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68F8u, 0x2014ACu, 0x2014B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014B4u;
label_2014b4:
    // 0x2014b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2014b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2014b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014bc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2014BCu;
    SET_GPR_U32(ctx, 31, 0x2014C4u);
    ctx->pc = 0x2014C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014BCu;
    // 0x2014c0: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2014BCu, 0x2014C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014C4u;
label_2014c4:
    // 0x2014c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2014c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2014c8: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x2014c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2014cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2014d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2014d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2014d4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2014d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2014d8: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x2014d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x2014dc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2014dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2014e0: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2014e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2014e4: 0xaec2c580  sw          $v0, -0x3A80($s6)
    ctx->pc = 0x2014e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294952320), GPR_U32(ctx, 2));
    // 0x2014e8: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x2014e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2014ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2014ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2014f0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2014f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2014f4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2014f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2014f8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2014f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2014fc: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2014FCu;
    {
        const bool branch_taken_0x2014fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x201500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014FCu;
        // 0x201500: 0x2ae20003  slti        $v0, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014fc) {
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x201504u;
    // 0x201504: 0xc0895fa  jal         func_2257E8
    ctx->pc = 0x201504u;
    SET_GPR_U32(ctx, 31, 0x20150Cu);
    ctx->pc = 0x201508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201504u;
    // 0x201508: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257E8u, 0x201504u, 0x20150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20150Cu;
label_20150c:
    // 0x20150c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x20150cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x201510: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x201510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_201514:
    // 0x201514: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201514u;
    {
        const bool branch_taken_0x201514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201514u;
        // 0x201518: 0x8ec2c580  lw          $v0, -0x3A80($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201514) {
            ctx->pc = 0x201540u;
            goto label_201540;
        }
    }
    ctx->pc = 0x20151Cu;
    // 0x20151c: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x20151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x201520: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201524: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201524u;
    {
        const bool branch_taken_0x201524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x201528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201524u;
        // 0x201528: 0x8ec2c580  lw          $v0, -0x3A80($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201524) {
            ctx->pc = 0x201540u;
            goto label_201540;
        }
    }
    ctx->pc = 0x20152Cu;
    // 0x20152c: 0xc0b91b8  jal         func_2E46E0
    ctx->pc = 0x20152Cu;
    SET_GPR_U32(ctx, 31, 0x201534u);
    ctx->pc = 0x2E46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46E0u, 0x20152Cu, 0x201534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201534u;
label_201534:
    // 0x201534: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x201534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x201538: 0xaec2c580  sw          $v0, -0x3A80($s6)
    ctx->pc = 0x201538u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294952320), GPR_U32(ctx, 2));
    // 0x20153c: 0x8ec2c580  lw          $v0, -0x3A80($s6)
    ctx->pc = 0x20153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952320)));
label_201540:
    // 0x201540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201544: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x201544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x201548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201548u;
    {
        const bool branch_taken_0x201548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201548u;
        // 0x20154c: 0x26d0c580  addiu       $s0, $s6, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201548) {
            ctx->pc = 0x201558u;
            goto label_201558;
        }
    }
    ctx->pc = 0x201550u;
    // 0x201550: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201550u;
    SET_GPR_U32(ctx, 31, 0x201558u);
    ctx->pc = 0x201554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201550u;
    // 0x201554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201550u, 0x201558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201558u;
label_201558:
    // 0x201558: 0xaf809398  sw          $zero, -0x6C68($gp)
    ctx->pc = 0x201558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939544), GPR_U32(ctx, 0));
    // 0x20155c: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x20155cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x201560: 0xaf80939c  sw          $zero, -0x6C64($gp)
    ctx->pc = 0x201560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 0));
    // 0x201564: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x201564u;
    {
        const bool branch_taken_0x201564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201564u;
        // 0x201568: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201564) {
            ctx->pc = 0x20158Cu;
            goto label_20158c;
        }
    }
    ctx->pc = 0x20156Cu;
    // 0x20156c: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x20156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x201570: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x201570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x201574: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201578: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201578u;
    {
        const bool branch_taken_0x201578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x201578) {
            ctx->pc = 0x20157Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201578u;
            // 0x20157c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201590u;
            goto label_201590;
        }
    }
    ctx->pc = 0x201580u;
    // 0x201580: 0xc0b91b8  jal         func_2E46E0
    ctx->pc = 0x201580u;
    SET_GPR_U32(ctx, 31, 0x201588u);
    ctx->pc = 0x2E46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46E0u, 0x201580u, 0x201588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201588u;
label_201588:
    // 0x201588: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x201588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_20158c:
    // 0x20158c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20158cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_201590:
    // 0x201590: 0xc080030  jal         func_2000C0
    ctx->pc = 0x201590u;
    SET_GPR_U32(ctx, 31, 0x201598u);
    ctx->pc = 0x201594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201590u;
    // 0x201594: 0x2484db80  addiu       $a0, $a0, -0x2480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000C0u, 0x201590u, 0x201598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201598u;
label_201598:
    // 0x201598: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x201598u;
    {
        const bool branch_taken_0x201598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201598) {
            ctx->pc = 0x20159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201598u;
            // 0x20159c: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2015C8u;
            goto label_2015c8;
        }
    }
    ctx->pc = 0x2015A0u;
    // 0x2015a0: 0xc080060  jal         func_200180
    ctx->pc = 0x2015A0u;
    SET_GPR_U32(ctx, 31, 0x2015A8u);
    ctx->pc = 0x200180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200180u, 0x2015A0u, 0x2015A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015A8u;
label_2015a8:
    // 0x2015a8: 0xc0b91b8  jal         func_2E46E0
    ctx->pc = 0x2015A8u;
    SET_GPR_U32(ctx, 31, 0x2015B0u);
    ctx->pc = 0x2015ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015A8u;
    // 0x2015ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46E0u, 0x2015A8u, 0x2015B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015B0u;
label_2015b0:
    // 0x2015b0: 0x26c3c580  addiu       $v1, $s6, -0x3A80
    ctx->pc = 0x2015b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
    // 0x2015b4: 0xc0b3772  jal         func_2CDDC8
    ctx->pc = 0x2015B4u;
    SET_GPR_U32(ctx, 31, 0x2015BCu);
    ctx->pc = 0x2015B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015B4u;
    // 0x2015b8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDC8u, 0x2015B4u, 0x2015BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015BCu;
label_2015bc:
    // 0x2015bc: 0xc0ada3e  jal         func_2B68F8
    ctx->pc = 0x2015BCu;
    SET_GPR_U32(ctx, 31, 0x2015C4u);
    ctx->pc = 0x2015C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015BCu;
    // 0x2015c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68F8u, 0x2015BCu, 0x2015C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015C4u;
label_2015c4:
    // 0x2015c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2015c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2015c8:
    // 0x2015c8: 0xc080030  jal         func_2000C0
    ctx->pc = 0x2015C8u;
    SET_GPR_U32(ctx, 31, 0x2015D0u);
    ctx->pc = 0x2015CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015C8u;
    // 0x2015cc: 0x248438e8  addiu       $a0, $a0, 0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000C0u, 0x2015C8u, 0x2015D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015D0u;
label_2015d0:
    // 0x2015d0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2015D0u;
    {
        const bool branch_taken_0x2015d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015D0u;
        // 0x2015d4: 0x26c2c580  addiu       $v0, $s6, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015d0) {
            ctx->pc = 0x201668u;
            goto label_201668;
        }
    }
    ctx->pc = 0x2015D8u;
    // 0x2015d8: 0xc080050  jal         func_200140
    ctx->pc = 0x2015D8u;
    SET_GPR_U32(ctx, 31, 0x2015E0u);
    ctx->pc = 0x200140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200140u, 0x2015D8u, 0x2015E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015E0u;
label_2015e0:
    // 0x2015e0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2015E0u;
    {
        const bool branch_taken_0x2015e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2015E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015E0u;
        // 0x2015e4: 0x26c2c580  addiu       $v0, $s6, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015e0) {
            ctx->pc = 0x201668u;
            goto label_201668;
        }
    }
    ctx->pc = 0x2015E8u;
    // 0x2015e8: 0xc080060  jal         func_200180
    ctx->pc = 0x2015E8u;
    SET_GPR_U32(ctx, 31, 0x2015F0u);
    ctx->pc = 0x200180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200180u, 0x2015E8u, 0x2015F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015F0u;
label_2015f0:
    // 0x2015f0: 0xc0b91b8  jal         func_2E46E0
    ctx->pc = 0x2015F0u;
    SET_GPR_U32(ctx, 31, 0x2015F8u);
    ctx->pc = 0x2015F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015F0u;
    // 0x2015f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46E0u, 0x2015F0u, 0x2015F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015F8u;
label_2015f8:
    // 0x2015f8: 0xc080050  jal         func_200140
    ctx->pc = 0x2015F8u;
    SET_GPR_U32(ctx, 31, 0x201600u);
    ctx->pc = 0x2015FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015F8u;
    // 0x2015fc: 0xaf82939c  sw          $v0, -0x6C64($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200140u, 0x2015F8u, 0x201600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201600u;
label_201600:
    // 0x201600: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201600u;
    {
        const bool branch_taken_0x201600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201600) {
            ctx->pc = 0x201610u;
            goto label_201610;
        }
    }
    ctx->pc = 0x201608u;
    // 0x201608: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x201608u;
    SET_GPR_U32(ctx, 31, 0x201610u);
    ctx->pc = 0x20160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201608u;
    // 0x20160c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x201608u, 0x201610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201610u;
label_201610:
    // 0x201610: 0xc080060  jal         func_200180
    ctx->pc = 0x201610u;
    SET_GPR_U32(ctx, 31, 0x201618u);
    ctx->pc = 0x200180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200180u, 0x201610u, 0x201618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201618u;
label_201618:
    // 0x201618: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x201618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20161c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x20161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x201620: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201620u;
    {
        const bool branch_taken_0x201620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201620u;
        // 0x201624: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201620) {
            ctx->pc = 0x20165Cu;
            goto label_20165c;
        }
    }
    ctx->pc = 0x201628u;
    // 0x201628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201628u;
    {
        const bool branch_taken_0x201628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201628u;
        // 0x20162c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201628) {
            ctx->pc = 0x201640u;
            goto label_201640;
        }
    }
    ctx->pc = 0x201630u;
    // 0x201630: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201630u;
    {
        const bool branch_taken_0x201630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201630u;
        // 0x201634: 0x26c2c580  addiu       $v0, $s6, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201630) {
            ctx->pc = 0x201654u;
            goto label_201654;
        }
    }
    ctx->pc = 0x201638u;
    // 0x201638: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201638u;
    {
        const bool branch_taken_0x201638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201638u;
        // 0x20163c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201638) {
            ctx->pc = 0x20166Cu;
            goto label_20166c;
        }
    }
    ctx->pc = 0x201640u;
label_201640:
    // 0x201640: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x201640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x201644: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201644u;
    {
        const bool branch_taken_0x201644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201644u;
        // 0x201648: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201644) {
            ctx->pc = 0x20165Cu;
            goto label_20165c;
        }
    }
    ctx->pc = 0x20164Cu;
    // 0x20164c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20164Cu;
    {
        const bool branch_taken_0x20164c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20164Cu;
        // 0x201650: 0x26c2c580  addiu       $v0, $s6, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20164c) {
            ctx->pc = 0x201668u;
            goto label_201668;
        }
    }
    ctx->pc = 0x201654u;
label_201654:
    // 0x201654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x201654u;
    {
        const bool branch_taken_0x201654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201654u;
        // 0x201658: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201654) {
            ctx->pc = 0x201660u;
            goto label_201660;
        }
    }
    ctx->pc = 0x20165Cu;
label_20165c:
    // 0x20165c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_201660:
    // 0x201660: 0xaf829398  sw          $v0, -0x6C68($gp)
    ctx->pc = 0x201660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939544), GPR_U32(ctx, 2));
    // 0x201664: 0x26c2c580  addiu       $v0, $s6, -0x3A80
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
label_201668:
    // 0x201668: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x201668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20166c:
    // 0x20166c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x201670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201674: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x201674u;
    {
        const bool branch_taken_0x201674 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x201678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201674u;
        // 0x201678: 0x8ec4c580  lw          $a0, -0x3A80($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201674) {
            ctx->pc = 0x2016F8u;
            goto label_2016f8;
        }
    }
    ctx->pc = 0x20167Cu;
    // 0x20167c: 0x3c1201e9  lui         $s2, 0x1E9
    ctx->pc = 0x20167cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)489 << 16));
    // 0x201680: 0x3c1001eb  lui         $s0, 0x1EB
    ctx->pc = 0x201680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)491 << 16));
    // 0x201684: 0x3c1401eb  lui         $s4, 0x1EB
    ctx->pc = 0x201684u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)491 << 16));
    // 0x201688: 0x3c1101ec  lui         $s1, 0x1EC
    ctx->pc = 0x201688u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)492 << 16));
    // 0x20168c: 0x3c130020  lui         $s3, 0x20
    ctx->pc = 0x20168cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
    // 0x201690: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x201690u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x201694: 0x26b547f0  addiu       $s5, $s5, 0x47F0
    ctx->pc = 0x201694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18416));
    // 0x201698: 0x3c170020  lui         $s7, 0x20
    ctx->pc = 0x201698u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
    // 0x20169c: 0x0  nop
    ctx->pc = 0x20169cu;
    // NOP
label_2016a0:
    // 0x2016a0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2016a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2016a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2016A4u;
    {
        const bool branch_taken_0x2016a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016A4u;
        // 0x2016a8: 0x26c2c580  addiu       $v0, $s6, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016a4) {
            ctx->pc = 0x2016B8u;
            goto label_2016b8;
        }
    }
    ctx->pc = 0x2016ACu;
    // 0x2016ac: 0x24c2c580  addiu       $v0, $a2, -0x3A80
    ctx->pc = 0x2016acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952320));
    // 0x2016b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2016B0u;
    {
        const bool branch_taken_0x2016b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016B0u;
        // 0x2016b4: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016b0) {
            ctx->pc = 0x2016BCu;
            goto label_2016bc;
        }
    }
    ctx->pc = 0x2016B8u;
label_2016b8:
    // 0x2016b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2016bc:
    // 0x2016bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2016c0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2016C0u;
    {
        const bool branch_taken_0x2016c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016C0u;
        // 0x2016c4: 0xa0430015  sb          $v1, 0x15($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016c0) {
            ctx->pc = 0x2016D4u;
            goto label_2016d4;
        }
    }
    ctx->pc = 0x2016C8u;
    // 0x2016c8: 0x26c3c580  addiu       $v1, $s6, -0x3A80
    ctx->pc = 0x2016c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
    // 0x2016cc: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2016ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2016d0: 0xa0620015  sb          $v0, 0x15($v1)
    ctx->pc = 0x2016d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 2));
label_2016d4:
    // 0x2016d4: 0x26c3c580  addiu       $v1, $s6, -0x3A80
    ctx->pc = 0x2016d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
    // 0x2016d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2016d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2016dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2016dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2016e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2016e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2016e4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2016e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2016e8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2016E8u;
    {
        const bool branch_taken_0x2016e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016E8u;
        // 0x2016ec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016e8) {
            ctx->pc = 0x2016A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2016a0;
        }
    }
    ctx->pc = 0x2016F0u;
    // 0x2016f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2016F0u;
    {
        const bool branch_taken_0x2016f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016f0) {
            ctx->pc = 0x201718u;
            goto label_201718;
        }
    }
    ctx->pc = 0x2016F8u;
label_2016f8:
    // 0x2016f8: 0x3c1201e9  lui         $s2, 0x1E9
    ctx->pc = 0x2016f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)489 << 16));
    // 0x2016fc: 0x3c1001eb  lui         $s0, 0x1EB
    ctx->pc = 0x2016fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)491 << 16));
    // 0x201700: 0x3c1401eb  lui         $s4, 0x1EB
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)491 << 16));
    // 0x201704: 0x3c1101ec  lui         $s1, 0x1EC
    ctx->pc = 0x201704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)492 << 16));
    // 0x201708: 0x3c130020  lui         $s3, 0x20
    ctx->pc = 0x201708u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
    // 0x20170c: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x20170cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x201710: 0x26b547f0  addiu       $s5, $s5, 0x47F0
    ctx->pc = 0x201710u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18416));
    // 0x201714: 0x3c170020  lui         $s7, 0x20
    ctx->pc = 0x201714u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
label_201718:
    // 0x201718: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x201718u;
    SET_GPR_U32(ctx, 31, 0x201720u);
    ctx->pc = 0x20171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201718u;
    // 0x20171c: 0x26c4c580  addiu       $a0, $s6, -0x3A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x201718u, 0x201720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201720u;
label_201720:
    // 0x201720: 0x26051f80  addiu       $a1, $s0, 0x1F80
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8064));
    // 0x201724: 0x26431f80  addiu       $v1, $s2, 0x1F80
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8064));
    // 0x201728: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x201728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20172c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20172Cu;
    {
        const bool branch_taken_0x20172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20172c) {
            ctx->pc = 0x201730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20172Cu;
            // 0x201730: 0x26251f80  addiu       $a1, $s1, 0x1F80 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8064));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201760u;
            goto label_201760;
        }
    }
    ctx->pc = 0x201734u;
    // 0x201734: 0x3c04494e  lui         $a0, 0x494E
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18766 << 16));
    // 0x201738: 0x34844954  ori         $a0, $a0, 0x4954
    ctx->pc = 0x201738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18772);
    // 0x20173c: 0x0  nop
    ctx->pc = 0x20173cu;
    // NOP
label_201740:
    // 0x201740: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x201740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x201744: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201748: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x201748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20174c: 0x0  nop
    ctx->pc = 0x20174cu;
    // NOP
    // 0x201750: 0x0  nop
    ctx->pc = 0x201750u;
    // NOP
    // 0x201754: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201754u;
    {
        const bool branch_taken_0x201754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201754) {
            ctx->pc = 0x201740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201740;
        }
    }
    ctx->pc = 0x20175Cu;
    // 0x20175c: 0x26251f80  addiu       $a1, $s1, 0x1F80
    ctx->pc = 0x20175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8064));
label_201760:
    // 0x201760: 0x26831f80  addiu       $v1, $s4, 0x1F80
    ctx->pc = 0x201760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x201764: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x201764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x201768: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x201768u;
    {
        const bool branch_taken_0x201768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201768u;
        // 0x20176c: 0x26620c48  addiu       $v0, $s3, 0xC48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201768) {
            ctx->pc = 0x201798u;
            goto label_201798;
        }
    }
    ctx->pc = 0x201770u;
    // 0x201770: 0x3c04494e  lui         $a0, 0x494E
    ctx->pc = 0x201770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18766 << 16));
    // 0x201774: 0x34844954  ori         $a0, $a0, 0x4954
    ctx->pc = 0x201774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18772);
label_201778:
    // 0x201778: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x201778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20177c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201780: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x201780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x201784: 0x0  nop
    ctx->pc = 0x201784u;
    // NOP
    // 0x201788: 0x0  nop
    ctx->pc = 0x201788u;
    // NOP
    // 0x20178c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20178Cu;
    {
        const bool branch_taken_0x20178c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20178c) {
            ctx->pc = 0x201778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201778;
        }
    }
    ctx->pc = 0x201794u;
    // 0x201794: 0x26620c48  addiu       $v0, $s3, 0xC48
    ctx->pc = 0x201794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3144));
label_201798:
    // 0x201798: 0x26431f80  addiu       $v1, $s2, 0x1F80
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8064));
    // 0x20179c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x20179cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2017a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2017a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2017a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2017a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2017a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017ac: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2017acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2017b0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2017b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x2017b4: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x2017b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x2017b8: 0xc0b3fc8  jal         func_2CFF20
    ctx->pc = 0x2017B8u;
    SET_GPR_U32(ctx, 31, 0x2017C0u);
    ctx->pc = 0x2017BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017B8u;
    // 0x2017bc: 0xafb50010  sw          $s5, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF20u, 0x2017B8u, 0x2017C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017C0u;
label_2017c0:
    // 0x2017c0: 0x26e30f20  addiu       $v1, $s7, 0xF20
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 3872));
    // 0x2017c4: 0x26851f80  addiu       $a1, $s4, 0x1F80
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x2017c8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2017c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2017cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2017ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2017d0: 0xaf829344  sw          $v0, -0x6CBC($gp)
    ctx->pc = 0x2017d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939460), GPR_U32(ctx, 2));
    // 0x2017d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2017d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2017d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2017dc: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2017dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2017e0: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2017e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2017e4: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2017e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x2017e8: 0xc0b3fc8  jal         func_2CFF20
    ctx->pc = 0x2017E8u;
    SET_GPR_U32(ctx, 31, 0x2017F0u);
    ctx->pc = 0x2017ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017E8u;
    // 0x2017ec: 0xafb50010  sw          $s5, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF20u, 0x2017E8u, 0x2017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017F0u;
label_2017f0:
    // 0x2017f0: 0x8f849344  lw          $a0, -0x6CBC($gp)
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939460)));
    // 0x2017f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2017f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017f8: 0xc0b3fd0  jal         func_2CFF40
    ctx->pc = 0x2017F8u;
    SET_GPR_U32(ctx, 31, 0x201800u);
    ctx->pc = 0x2017FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017F8u;
    // 0x2017fc: 0xaf829348  sw          $v0, -0x6CB8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF40u, 0x2017F8u, 0x201800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201800u;
label_201800:
    // 0x201800: 0x8f849348  lw          $a0, -0x6CB8($gp)
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x201804: 0xc0b3fd0  jal         func_2CFF40
    ctx->pc = 0x201804u;
    SET_GPR_U32(ctx, 31, 0x20180Cu);
    ctx->pc = 0x201808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201804u;
    // 0x201808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF40u, 0x201804u, 0x20180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20180Cu;
label_20180c:
    // 0x20180c: 0x0  nop
    ctx->pc = 0x20180cu;
    // NOP
label_201810:
    // 0x201810: 0xc0b38b6  jal         func_2CE2D8
    ctx->pc = 0x201810u;
    SET_GPR_U32(ctx, 31, 0x201818u);
    ctx->pc = 0x201814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201810u;
    // 0x201814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE2D8u, 0x201810u, 0x201818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201818u;
label_201818:
    // 0x201818: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x201818u;
    {
        const bool branch_taken_0x201818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201818) {
            ctx->pc = 0x201810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201810;
        }
    }
    ctx->pc = 0x201820u;
    // 0x201820: 0xc0b42fa  jal         func_2D0BE8
    ctx->pc = 0x201820u;
    SET_GPR_U32(ctx, 31, 0x201828u);
    ctx->pc = 0x201824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201820u;
    // 0x201824: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BE8u, 0x201820u, 0x201828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201828u;
label_201828:
    // 0x201828: 0xc0b42fa  jal         func_2D0BE8
    ctx->pc = 0x201828u;
    SET_GPR_U32(ctx, 31, 0x201830u);
    ctx->pc = 0x20182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201828u;
    // 0x20182c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BE8u, 0x201828u, 0x201830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201830u;
label_201830:
    // 0x201830: 0xc0b3a4e  jal         func_2CE938
    ctx->pc = 0x201830u;
    SET_GPR_U32(ctx, 31, 0x201838u);
    ctx->pc = 0x2CE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE938u, 0x201830u, 0x201838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201838u;
label_201838:
    // 0x201838: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x20183c: 0xc0b3a1c  jal         func_2CE870
    ctx->pc = 0x20183Cu;
    SET_GPR_U32(ctx, 31, 0x201844u);
    ctx->pc = 0x201840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20183Cu;
    // 0x201840: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE870u, 0x20183Cu, 0x201844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201844u;
label_201844:
    // 0x201844: 0xc0b4010  jal         func_2D0040
    ctx->pc = 0x201844u;
    SET_GPR_U32(ctx, 31, 0x20184Cu);
    ctx->pc = 0x2D0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0040u, 0x201844u, 0x20184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20184Cu;
label_20184c:
    // 0x20184c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x20184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x201850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201854: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x201854u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x201858: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x201858u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20185c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x20185cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201860: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x201860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x201864: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x201864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201868: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x201868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20186c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x20186cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201870: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x201870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201874: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x201874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201878: 0x3e00008  jr          $ra
    ctx->pc = 0x201878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201878u;
        // 0x20187c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201880u;
}
