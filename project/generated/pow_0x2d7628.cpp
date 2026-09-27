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

// Function: pow
// Address: 0x2d7628 - 0x2d7a58
void pow_0x2d7628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pow_0x2d7628");
#endif

    switch (ctx->pc) {
        case 0x2d7658u: goto label_2d7658;
        case 0x2d7674u: goto label_2d7674;
        case 0x2d7684u: goto label_2d7684;
        case 0x2d7694u: goto label_2d7694;
        case 0x2d76c8u: goto label_2d76c8;
        case 0x2d76e0u: goto label_2d76e0;
        case 0x2d76f0u: goto label_2d76f0;
        case 0x2d7708u: goto label_2d7708;
        case 0x2d7718u: goto label_2d7718;
        case 0x2d774cu: goto label_2d774c;
        case 0x2d775cu: goto label_2d775c;
        case 0x2d776cu: goto label_2d776c;
        case 0x2d777cu: goto label_2d777c;
        case 0x2d77c0u: goto label_2d77c0;
        case 0x2d77dcu: goto label_2d77dc;
        case 0x2d77ecu: goto label_2d77ec;
        case 0x2d77fcu: goto label_2d77fc;
        case 0x2d780cu: goto label_2d780c;
        case 0x2d781cu: goto label_2d781c;
        case 0x2d782cu: goto label_2d782c;
        case 0x2d7880u: goto label_2d7880;
        case 0x2d7890u: goto label_2d7890;
        case 0x2d78d4u: goto label_2d78d4;
        case 0x2d78e4u: goto label_2d78e4;
        case 0x2d78f4u: goto label_2d78f4;
        case 0x2d7900u: goto label_2d7900;
        case 0x2d7934u: goto label_2d7934;
        case 0x2d7944u: goto label_2d7944;
        case 0x2d7954u: goto label_2d7954;
        case 0x2d7960u: goto label_2d7960;
        case 0x2d7970u: goto label_2d7970;
        case 0x2d7998u: goto label_2d7998;
        case 0x2d79a8u: goto label_2d79a8;
        case 0x2d79b8u: goto label_2d79b8;
        case 0x2d79f4u: goto label_2d79f4;
        case 0x2d7a04u: goto label_2d7a04;
        case 0x2d7a20u: goto label_2d7a20;
        default: break;
    }

    ctx->pc = 0x2d7628u;

    // 0x2d7628: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d7628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d762c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d7630: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7638: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d7638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d763c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2d763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2d7640: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2d7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2d7644: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d7648: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d764c: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x2d764cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x2d7650: 0xc0b61fa  jal         func_2D87E8
    ctx->pc = 0x2D7650u;
    SET_GPR_U32(ctx, 31, 0x2D7658u);
    ctx->pc = 0x2D7654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7650u;
    // 0x2d7654: 0xffb30060  sd          $s3, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D87E8u, 0x2D7650u, 0x2D7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7658u;
label_2d7658:
    // 0x2d7658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d765c: 0x8eb4b118  lw          $s4, -0x4EE8($s5)
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
    // 0x2d7660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7664: 0x128200f3  beq         $s4, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2D7664u;
    {
        const bool branch_taken_0x2d7664 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7664u;
        // 0x2d7668: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7664) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D766Cu;
    // 0x2d766c: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2D766Cu;
    SET_GPR_U32(ctx, 31, 0x2D7674u);
    ctx->pc = 0x2D7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D766Cu;
    // 0x2d7670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2D766Cu, 0x2D7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7674u;
label_2d7674:
    // 0x2d7674: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x2D7674u;
    {
        const bool branch_taken_0x2d7674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7674u;
        // 0x2d7678: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7674) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D767Cu;
    // 0x2d767c: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2D767Cu;
    SET_GPR_U32(ctx, 31, 0x2D7684u);
    ctx->pc = 0x2D7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D767Cu;
    // 0x2d7680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2D767Cu, 0x2D7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7684u;
label_2d7684:
    // 0x2d7684: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D7684u;
    {
        const bool branch_taken_0x2d7684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7684u;
        // 0x2d7688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7684) {
            ctx->pc = 0x2D76F8u;
            goto label_2d76f8;
        }
    }
    ctx->pc = 0x2D768Cu;
    // 0x2d768c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D768Cu;
    SET_GPR_U32(ctx, 31, 0x2D7694u);
    ctx->pc = 0x2D7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D768Cu;
    // 0x2d7690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D768Cu, 0x2D7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7694u;
label_2d7694:
    // 0x2d7694: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2D7694u;
    {
        const bool branch_taken_0x2d7694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7694u;
        // 0x2d7698: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7694) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D769Cu;
    // 0x2d769c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d76a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d76a4: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x2d76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x2d76a8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d76ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d76acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d76b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d76b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d76b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d76b8: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x2d76b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x2d76bc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2d76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2d76c0: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D76C0u;
    {
        const bool branch_taken_0x2d76c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76C0u;
        // 0x2d76c4: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76c0) {
            ctx->pc = 0x2D76D8u;
            goto label_2d76d8;
        }
    }
    ctx->pc = 0x2D76C8u;
label_2d76c8:
    // 0x2d76c8: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x2d76c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2d76cc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x2d76ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x2d76d0: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2D76D0u;
    {
        const bool branch_taken_0x2d76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76D0u;
        // 0x2d76d4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76d0) {
            ctx->pc = 0x2D7A0Cu;
            goto label_2d7a0c;
        }
    }
    ctx->pc = 0x2D76D8u;
label_2d76d8:
    // 0x2d76d8: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D76D8u;
    SET_GPR_U32(ctx, 31, 0x2D76E0u);
    ctx->pc = 0x2D76DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D76D8u;
    // 0x2d76dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D76D8u, 0x2D76E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76E0u;
label_2d76e0:
    // 0x2d76e0: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x2D76E0u;
    {
        const bool branch_taken_0x2d76e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76E0u;
        // 0x2d76e4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76e0) {
            ctx->pc = 0x2D7A10u;
            goto label_2d7a10;
        }
    }
    ctx->pc = 0x2D76E8u;
    // 0x2d76e8: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D76E8u;
    SET_GPR_U32(ctx, 31, 0x2D76F0u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D76E8u, 0x2D76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76F0u;
label_2d76f0:
    // 0x2d76f0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2D76F0u;
    {
        const bool branch_taken_0x2d76f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76F0u;
        // 0x2d76f4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76f0) {
            ctx->pc = 0x2D7A08u;
            goto label_2d7a08;
        }
    }
    ctx->pc = 0x2D76F8u;
label_2d76f8:
    // 0x2d76f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d76f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d76fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7700: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7700u;
    SET_GPR_U32(ctx, 31, 0x2D7708u);
    ctx->pc = 0x2D7704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7700u;
    // 0x2d7704: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7700u, 0x2D7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7708u;
label_2d7708:
    // 0x2d7708: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D7708u;
    {
        const bool branch_taken_0x2d7708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7708u;
        // 0x2d770c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7708) {
            ctx->pc = 0x2D77F4u;
            goto label_2d77f4;
        }
    }
    ctx->pc = 0x2D7710u;
    // 0x2d7710: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7710u;
    SET_GPR_U32(ctx, 31, 0x2D7718u);
    ctx->pc = 0x2D7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7710u;
    // 0x2d7714: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7710u, 0x2D7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7718u;
label_2d7718:
    // 0x2d7718: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7718u;
    {
        const bool branch_taken_0x2d7718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7718u;
        // 0x2d771c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7718) {
            ctx->pc = 0x2D7764u;
            goto label_2d7764;
        }
    }
    ctx->pc = 0x2D7720u;
    // 0x2d7720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7724: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x2d7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x2d7728: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d772c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d772cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7730: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x2d7730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x2d7734: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d7734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d7738: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d773c: 0x1680ffe2  bnez        $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2D773Cu;
    {
        const bool branch_taken_0x2d773c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D773Cu;
        // 0x2d7740: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d773c) {
            ctx->pc = 0x2D76C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d76c8;
        }
    }
    ctx->pc = 0x2D7744u;
    // 0x2d7744: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7744u;
    SET_GPR_U32(ctx, 31, 0x2D774Cu);
    ctx->pc = 0x2D7748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7744u;
    // 0x2d7748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7744u, 0x2D774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D774Cu;
label_2d774c:
    // 0x2d774c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D774Cu;
    {
        const bool branch_taken_0x2d774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D774Cu;
        // 0x2d7750: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d774c) {
            ctx->pc = 0x2D7A10u;
            goto label_2d7a10;
        }
    }
    ctx->pc = 0x2D7754u;
    // 0x2d7754: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7754u;
    SET_GPR_U32(ctx, 31, 0x2D775Cu);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7754u, 0x2D775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D775Cu;
label_2d775c:
    // 0x2d775c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2D775Cu;
    {
        const bool branch_taken_0x2d775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D775Cu;
        // 0x2d7760: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d775c) {
            ctx->pc = 0x2D7A08u;
            goto label_2d7a08;
        }
    }
    ctx->pc = 0x2D7764u;
label_2d7764:
    // 0x2d7764: 0xc0b6fb0  jal         func_2DBEC0
    ctx->pc = 0x2D7764u;
    SET_GPR_U32(ctx, 31, 0x2D776Cu);
    ctx->pc = 0x2D7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7764u;
    // 0x2d7768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2D7764u, 0x2D776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D776Cu;
label_2d776c:
    // 0x2d776c: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D776Cu;
    {
        const bool branch_taken_0x2d776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D776Cu;
        // 0x2d7770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d776c) {
            ctx->pc = 0x2D7A30u;
            goto label_2d7a30;
        }
    }
    ctx->pc = 0x2D7774u;
    // 0x2d7774: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7774u;
    SET_GPR_U32(ctx, 31, 0x2D777Cu);
    ctx->pc = 0x2D7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7774u;
    // 0x2d7778: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7774u, 0x2D777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D777Cu;
label_2d777c:
    // 0x2d777c: 0x44100ad  bgez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x2D777Cu;
    {
        const bool branch_taken_0x2d777c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D777Cu;
        // 0x2d7780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d777c) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D7784u;
    // 0x2d7784: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d778c: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x2d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x2d7790: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d7790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7794: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7798: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x2d7798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x2d779c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d77a0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D77A0u;
    {
        const bool branch_taken_0x2d77a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77A0u;
        // 0x2d77a4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77a0) {
            ctx->pc = 0x2D77B0u;
            goto label_2d77b0;
        }
    }
    ctx->pc = 0x2D77A8u;
    // 0x2d77a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D77A8u;
    {
        const bool branch_taken_0x2d77a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77A8u;
        // 0x2d77ac: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77a8) {
            ctx->pc = 0x2D77C4u;
            goto label_2d77c4;
        }
    }
    ctx->pc = 0x2D77B0u;
label_2d77b0:
    // 0x2d77b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d77b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d77b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77b8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D77B8u;
    SET_GPR_U32(ctx, 31, 0x2D77C0u);
    ctx->pc = 0x2D77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77B8u;
    // 0x2d77bc: 0xdc45b110  ld          $a1, -0x4EF0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294947088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D77B8u, 0x2D77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77C0u;
label_2d77c0:
    // 0x2d77c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2d77c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2d77c4:
    // 0x2d77c4: 0x8ea3b118  lw          $v1, -0x4EE8($s5)
    ctx->pc = 0x2d77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
    // 0x2d77c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d77cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D77CCu;
    {
        const bool branch_taken_0x2d77cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d77cc) {
            ctx->pc = 0x2D77E4u;
            goto label_2d77e4;
        }
    }
    ctx->pc = 0x2D77D4u;
    // 0x2d77d4: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D77D4u;
    SET_GPR_U32(ctx, 31, 0x2D77DCu);
    ctx->pc = 0x2D77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77D4u;
    // 0x2d77d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D77D4u, 0x2D77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77DCu;
label_2d77dc:
    // 0x2d77dc: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2D77DCu;
    {
        const bool branch_taken_0x2d77dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77DCu;
        // 0x2d77e0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77dc) {
            ctx->pc = 0x2D7A10u;
            goto label_2d7a10;
        }
    }
    ctx->pc = 0x2D77E4u;
label_2d77e4:
    // 0x2d77e4: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D77E4u;
    SET_GPR_U32(ctx, 31, 0x2D77ECu);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D77E4u, 0x2D77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77ECu;
label_2d77ec:
    // 0x2d77ec: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2D77ECu;
    {
        const bool branch_taken_0x2d77ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77ECu;
        // 0x2d77f0: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77ec) {
            ctx->pc = 0x2D7A08u;
            goto label_2d7a08;
        }
    }
    ctx->pc = 0x2D77F4u;
label_2d77f4:
    // 0x2d77f4: 0xc0b6fb0  jal         func_2DBEC0
    ctx->pc = 0x2D77F4u;
    SET_GPR_U32(ctx, 31, 0x2D77FCu);
    ctx->pc = 0x2D77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77F4u;
    // 0x2d77f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2D77F4u, 0x2D77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77FCu;
label_2d77fc:
    // 0x2d77fc: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D77FCu;
    {
        const bool branch_taken_0x2d77fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d77fc) {
            ctx->pc = 0x2D7800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D77FCu;
            // 0x2d7800: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D798Cu;
            goto label_2d798c;
        }
    }
    ctx->pc = 0x2D7804u;
    // 0x2d7804: 0xc0b6fb0  jal         func_2DBEC0
    ctx->pc = 0x2D7804u;
    SET_GPR_U32(ctx, 31, 0x2D780Cu);
    ctx->pc = 0x2D7808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7804u;
    // 0x2d7808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2D7804u, 0x2D780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D780Cu;
label_2d780c:
    // 0x2d780c: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x2D780Cu;
    {
        const bool branch_taken_0x2d780c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d780c) {
            ctx->pc = 0x2D7810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D780Cu;
            // 0x2d7810: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D798Cu;
            goto label_2d798c;
        }
    }
    ctx->pc = 0x2D7814u;
    // 0x2d7814: 0xc0b6fb0  jal         func_2DBEC0
    ctx->pc = 0x2D7814u;
    SET_GPR_U32(ctx, 31, 0x2D781Cu);
    ctx->pc = 0x2D7818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7814u;
    // 0x2d7818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2D7814u, 0x2D781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D781Cu;
label_2d781c:
    // 0x2d781c: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D781Cu;
    {
        const bool branch_taken_0x2d781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d781c) {
            ctx->pc = 0x2D7820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D781Cu;
            // 0x2d7820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D798Cu;
            goto label_2d798c;
        }
    }
    ctx->pc = 0x2D7824u;
    // 0x2d7824: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2D7824u;
    SET_GPR_U32(ctx, 31, 0x2D782Cu);
    ctx->pc = 0x2D7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7824u;
    // 0x2d7828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2D7824u, 0x2D782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D782Cu;
label_2d782c:
    // 0x2d782c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D782Cu;
    {
        const bool branch_taken_0x2d782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D782Cu;
        // 0x2d7830: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d782c) {
            ctx->pc = 0x2D7898u;
            goto label_2d7898;
        }
    }
    ctx->pc = 0x2D7834u;
    // 0x2d7834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7838: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x2d7838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x2d783c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d7840: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d7840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d7844: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x2d7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x2d7848: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d7848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d784c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D784Cu;
    {
        const bool branch_taken_0x2d784c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D784Cu;
        // 0x2d7850: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d784c) {
            ctx->pc = 0x2D785Cu;
            goto label_2d785c;
        }
    }
    ctx->pc = 0x2D7854u;
    // 0x2d7854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7854u;
    {
        const bool branch_taken_0x2d7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7854u;
        // 0x2d7858: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7854) {
            ctx->pc = 0x2D7868u;
            goto label_2d7868;
        }
    }
    ctx->pc = 0x2D785Cu;
label_2d785c:
    // 0x2d785c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7860: 0xdc43a860  ld          $v1, -0x57A0($v0)
    ctx->pc = 0x2d7860u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AA860u));
    // 0x2d7864: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2d7864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2d7868:
    // 0x2d7868: 0x8ea3b118  lw          $v1, -0x4EE8($s5)
    ctx->pc = 0x2d7868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
    // 0x2d786c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7870: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7870u;
    {
        const bool branch_taken_0x2d7870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7870) {
            ctx->pc = 0x2D7888u;
            goto label_2d7888;
        }
    }
    ctx->pc = 0x2D7878u;
    // 0x2d7878: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D7878u;
    SET_GPR_U32(ctx, 31, 0x2D7880u);
    ctx->pc = 0x2D787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7878u;
    // 0x2d787c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D7878u, 0x2D7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7880u;
label_2d7880:
    // 0x2d7880: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D7880u;
    {
        const bool branch_taken_0x2d7880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7880u;
        // 0x2d7884: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7880) {
            ctx->pc = 0x2D7A10u;
            goto label_2d7a10;
        }
    }
    ctx->pc = 0x2D7888u;
label_2d7888:
    // 0x2d7888: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7888u;
    SET_GPR_U32(ctx, 31, 0x2D7890u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7888u, 0x2D7890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7890u;
label_2d7890:
    // 0x2d7890: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2D7890u;
    {
        const bool branch_taken_0x2d7890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7890u;
        // 0x2d7894: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7890) {
            ctx->pc = 0x2D7A08u;
            goto label_2d7a08;
        }
    }
    ctx->pc = 0x2D7898u;
label_2d7898:
    // 0x2d7898: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d7898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d789c: 0x2442a858  addiu       $v0, $v0, -0x57A8
    ctx->pc = 0x2d789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944856));
    // 0x2d78a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d78a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d78a8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2d78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2d78ac: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x2d78acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x2d78b0: 0x16800019  bnez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D78B0u;
    {
        const bool branch_taken_0x2d78b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78B0u;
        // 0x2d78b4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78b0) {
            ctx->pc = 0x2D7918u;
            goto label_2d7918;
        }
    }
    ctx->pc = 0x2D78B8u;
    // 0x2d78b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d78b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d78bc: 0xdc22a868  ld          $v0, -0x5798($at)
    ctx->pc = 0x2d78bcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA868u));
    // 0x2d78c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d78c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78c4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2d78c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2d78c8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d78c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d78cc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D78CCu;
    SET_GPR_U32(ctx, 31, 0x2D78D4u);
    ctx->pc = 0x2D78D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78CCu;
    // 0x2d78d0: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D78CCu, 0x2D78D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78D4u;
label_2d78d4:
    // 0x2d78d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d78d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d78d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78dc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D78DCu;
    SET_GPR_U32(ctx, 31, 0x2D78E4u);
    ctx->pc = 0x2D78E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78DCu;
    // 0x2d78e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D78DCu, 0x2D78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78E4u;
label_2d78e4:
    // 0x2d78e4: 0x4410024  bgez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D78E4u;
    {
        const bool branch_taken_0x2d78e4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78E4u;
        // 0x2d78e8: 0x8ea3b118  lw          $v1, -0x4EE8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78e4) {
            ctx->pc = 0x2D7978u;
            goto label_2d7978;
        }
    }
    ctx->pc = 0x2D78ECu;
    // 0x2d78ec: 0xc0b6fd0  jal         func_2DBF40
    ctx->pc = 0x2D78ECu;
    SET_GPR_U32(ctx, 31, 0x2D78F4u);
    ctx->pc = 0x2D78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78ECu;
    // 0x2d78f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF40u, 0x2D78ECu, 0x2D78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78F4u;
label_2d78f4:
    // 0x2d78f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d78f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78f8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D78F8u;
    SET_GPR_U32(ctx, 31, 0x2D7900u);
    ctx->pc = 0x2D78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78F8u;
    // 0x2d78fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D78F8u, 0x2D7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7900u;
label_2d7900:
    // 0x2d7900: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D7900u;
    {
        const bool branch_taken_0x2d7900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7900u;
        // 0x2d7904: 0x8ea3b118  lw          $v1, -0x4EE8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7900) {
            ctx->pc = 0x2D7978u;
            goto label_2d7978;
        }
    }
    ctx->pc = 0x2D7908u;
    // 0x2d7908: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2d7908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2d790c: 0xdc22a870  ld          $v0, -0x5790($at)
    ctx->pc = 0x2d790cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3AA870u));
    // 0x2d7910: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D7910u;
    {
        const bool branch_taken_0x2d7910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7910u;
        // 0x2d7914: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7910) {
            ctx->pc = 0x2D7978u;
            goto label_2d7978;
        }
    }
    ctx->pc = 0x2D7918u;
label_2d7918:
    // 0x2d7918: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d791c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2d791cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2d7920: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2d7920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2d7924: 0xdc51b110  ld          $s1, -0x4EF0($v0)
    ctx->pc = 0x2d7924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 4294947088)));
    // 0x2d7928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d792c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2D792Cu;
    SET_GPR_U32(ctx, 31, 0x2D7934u);
    ctx->pc = 0x2D7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D792Cu;
    // 0x2d7930: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2D792Cu, 0x2D7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7934u;
label_2d7934:
    // 0x2d7934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d793c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D793Cu;
    SET_GPR_U32(ctx, 31, 0x2D7944u);
    ctx->pc = 0x2D7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D793Cu;
    // 0x2d7940: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D793Cu, 0x2D7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7944u;
label_2d7944:
    // 0x2d7944: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D7944u;
    {
        const bool branch_taken_0x2d7944 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7944u;
        // 0x2d7948: 0x8ea3b118  lw          $v1, -0x4EE8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7944) {
            ctx->pc = 0x2D7978u;
            goto label_2d7978;
        }
    }
    ctx->pc = 0x2D794Cu;
    // 0x2d794c: 0xc0b6fd0  jal         func_2DBF40
    ctx->pc = 0x2D794Cu;
    SET_GPR_U32(ctx, 31, 0x2D7954u);
    ctx->pc = 0x2D7950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D794Cu;
    // 0x2d7950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF40u, 0x2D794Cu, 0x2D7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7954u;
label_2d7954:
    // 0x2d7954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7958: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7958u;
    SET_GPR_U32(ctx, 31, 0x2D7960u);
    ctx->pc = 0x2D795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7958u;
    // 0x2d795c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7958u, 0x2D7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7960u;
label_2d7960:
    // 0x2d7960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7960u;
    {
        const bool branch_taken_0x2d7960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7960u;
        // 0x2d7964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7960) {
            ctx->pc = 0x2D7974u;
            goto label_2d7974;
        }
    }
    ctx->pc = 0x2D7968u;
    // 0x2d7968: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2D7968u;
    SET_GPR_U32(ctx, 31, 0x2D7970u);
    ctx->pc = 0x2D796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7968u;
    // 0x2d796c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2D7968u, 0x2D7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7970u;
label_2d7970:
    // 0x2d7970: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2d7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2d7974:
    // 0x2d7974: 0x8ea3b118  lw          $v1, -0x4EE8($s5)
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
label_2d7978:
    // 0x2d7978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d797c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D797Cu;
    {
        const bool branch_taken_0x2d797c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d797c) {
            ctx->pc = 0x2D79FCu;
            goto label_2d79fc;
        }
    }
    ctx->pc = 0x2D7984u;
    // 0x2d7984: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D7984u;
    {
        const bool branch_taken_0x2d7984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7984) {
            ctx->pc = 0x2D79ECu;
            goto label_2d79ec;
        }
    }
    ctx->pc = 0x2D798Cu;
label_2d798c:
    // 0x2d798c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7990: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7990u;
    SET_GPR_U32(ctx, 31, 0x2D7998u);
    ctx->pc = 0x2D7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7990u;
    // 0x2d7994: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7990u, 0x2D7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7998u;
label_2d7998:
    // 0x2d7998: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D7998u;
    {
        const bool branch_taken_0x2d7998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7998u;
        // 0x2d799c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7998) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D79A0u;
    // 0x2d79a0: 0xc0b6fb0  jal         func_2DBEC0
    ctx->pc = 0x2D79A0u;
    SET_GPR_U32(ctx, 31, 0x2D79A8u);
    ctx->pc = 0x2D79A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79A0u;
    // 0x2d79a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2D79A0u, 0x2D79A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79A8u;
label_2d79a8:
    // 0x2d79a8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D79A8u;
    {
        const bool branch_taken_0x2d79a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79A8u;
        // 0x2d79ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79a8) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D79B0u;
    // 0x2d79b0: 0xc0b6fb0  jal         func_2DBEC0
    ctx->pc = 0x2D79B0u;
    SET_GPR_U32(ctx, 31, 0x2D79B8u);
    ctx->pc = 0x2D79B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79B0u;
    // 0x2d79b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEC0u, 0x2D79B0u, 0x2D79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79B8u;
label_2d79b8:
    // 0x2d79b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D79B8u;
    {
        const bool branch_taken_0x2d79b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79B8u;
        // 0x2d79bc: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79b8) {
            ctx->pc = 0x2D7A30u;
            goto label_2d7a30;
        }
    }
    ctx->pc = 0x2D79C0u;
    // 0x2d79c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d79c4: 0x2463a858  addiu       $v1, $v1, -0x57A8
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944856));
    // 0x2d79c8: 0x8ea5b118  lw          $a1, -0x4EE8($s5)
    ctx->pc = 0x2d79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947096)));
    // 0x2d79cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d79ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d79d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d79d4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d79d8: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x2d79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x2d79dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d79dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d79e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d79e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d79e4: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D79E4u;
    {
        const bool branch_taken_0x2d79e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79E4u;
        // 0x2d79e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79e4) {
            ctx->pc = 0x2D79FCu;
            goto label_2d79fc;
        }
    }
    ctx->pc = 0x2D79ECu;
label_2d79ec:
    // 0x2d79ec: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D79ECu;
    SET_GPR_U32(ctx, 31, 0x2D79F4u);
    ctx->pc = 0x2D79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79ECu;
    // 0x2d79f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D79ECu, 0x2D79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79F4u;
label_2d79f4:
    // 0x2d79f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D79F4u;
    {
        const bool branch_taken_0x2d79f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79F4u;
        // 0x2d79f8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79f4) {
            ctx->pc = 0x2D7A10u;
            goto label_2d7a10;
        }
    }
    ctx->pc = 0x2D79FCu;
label_2d79fc:
    // 0x2d79fc: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D79FCu;
    SET_GPR_U32(ctx, 31, 0x2D7A04u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D79FCu, 0x2D7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A04u;
label_2d7a04:
    // 0x2d7a04: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2d7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2d7a08:
    // 0x2d7a08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d7a0c:
    // 0x2d7a0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7a10:
    // 0x2d7a10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7A10u;
    {
        const bool branch_taken_0x2d7a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a10) {
            ctx->pc = 0x2D7A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7A10u;
            // 0x2d7a14: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D7A18u;
    // 0x2d7a18: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D7A18u;
    SET_GPR_U32(ctx, 31, 0x2D7A20u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D7A18u, 0x2D7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A20u;
label_2d7a20:
    // 0x2d7a20: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7a24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7a28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D7A28u;
    {
        const bool branch_taken_0x2d7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A28u;
        // 0x2d7a2c: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a28) {
            ctx->pc = 0x2D7A34u;
            goto label_2d7a34;
        }
    }
    ctx->pc = 0x2D7A30u;
label_2d7a30:
    // 0x2d7a30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d7a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7a34:
    // 0x2d7a34: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d7a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7a38: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2d7a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7a3c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2d7a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7a40: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2d7a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7a44: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d7a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7a48: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d7a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7a4c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d7a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A50u;
        // 0x2d7a54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7A58u;
}
