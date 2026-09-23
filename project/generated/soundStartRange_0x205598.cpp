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

// Function: soundStartRange
// Address: 0x205598 - 0x205808
void soundStartRange_0x205598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundStartRange_0x205598");
#endif

    switch (ctx->pc) {
        case 0x205618u: goto label_205618;
        case 0x205690u: goto label_205690;
        case 0x2056acu: goto label_2056ac;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056f0u: goto label_2056f0;
        case 0x205714u: goto label_205714;
        case 0x205760u: goto label_205760;
        case 0x20579cu: goto label_20579c;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057dcu: goto label_2057dc;
        default: break;
    }

    ctx->pc = 0x205598u;

    // 0x205598: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x205598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20559c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20559cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2055a0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2055a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2055a4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2055a8: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x2055a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2055ac: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2055b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2055b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2055b4: 0x2442e180  addiu       $v0, $v0, -0x1E80
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x2055b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2055b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2055bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2055bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2055c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2055c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2055c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2055cc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2055ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2055d0: 0x8c673798  lw          $a3, 0x3798($v1)
    ctx->pc = 0x2055d0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x353798u));
    // 0x2055d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2055d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2055d8: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2055D8u;
    {
        const bool branch_taken_0x2055d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055D8u;
        // 0x2055dc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055d8) {
            ctx->pc = 0x20567Cu;
            goto label_20567c;
        }
    }
    ctx->pc = 0x2055E0u;
    // 0x2055e0: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2055e4: 0x8f829b20  lw          $v0, -0x64E0($gp)
    ctx->pc = 0x2055e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941472)));
    // 0x2055e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2055E8u;
    {
        const bool branch_taken_0x2055e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2055ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055E8u;
        // 0x2055ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055e8) {
            ctx->pc = 0x2055FCu;
            goto label_2055fc;
        }
    }
    ctx->pc = 0x2055F0u;
    // 0x2055f0: 0xaf839b20  sw          $v1, -0x64E0($gp)
    ctx->pc = 0x2055f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941472), GPR_U32(ctx, 3));
    // 0x2055f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2055F4u;
    {
        const bool branch_taken_0x2055f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055F4u;
        // 0x2055f8: 0xaf809b24  sw          $zero, -0x64DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055f4) {
            ctx->pc = 0x205638u;
            goto label_205638;
        }
    }
    ctx->pc = 0x2055FCu;
label_2055fc:
    // 0x2055fc: 0x8f869b24  lw          $a2, -0x64DC($gp)
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941476)));
    // 0x205600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205604: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x205604u;
    {
        const bool branch_taken_0x205604 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x205608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205604u;
        // 0x205608: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205604) {
            ctx->pc = 0x205638u;
            goto label_205638;
        }
    }
    ctx->pc = 0x20560Cu;
    // 0x20560c: 0x3c0701fb  lui         $a3, 0x1FB
    ctx->pc = 0x20560cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)507 << 16));
    // 0x205610: 0x24e21600  addiu       $v0, $a3, 0x1600
    ctx->pc = 0x205610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5632));
    // 0x205614: 0x0  nop
    ctx->pc = 0x205614u;
    // NOP
label_205618:
    // 0x205618: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x205618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20561c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205620: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205624: 0x10890015  beq         $a0, $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x205624u;
    {
        const bool branch_taken_0x205624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x205628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205624u;
        // 0x205628: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205624) {
            ctx->pc = 0x20567Cu;
            goto label_20567c;
        }
    }
    ctx->pc = 0x20562Cu;
    // 0x20562c: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x20562cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x205630: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205630u;
    {
        const bool branch_taken_0x205630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205630u;
        // 0x205634: 0x24e21600  addiu       $v0, $a3, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205630) {
            ctx->pc = 0x205618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205618;
        }
    }
    ctx->pc = 0x205638u;
label_205638:
    // 0x205638: 0x28c20064  slti        $v0, $a2, 0x64
    ctx->pc = 0x205638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x20563c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20563Cu;
    {
        const bool branch_taken_0x20563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20563Cu;
        // 0x205640: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20563c) {
            ctx->pc = 0x20565Cu;
            goto label_20565c;
        }
    }
    ctx->pc = 0x205644u;
    // 0x205644: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x205648: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x205648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x20564c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x205650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205654: 0xaf869b24  sw          $a2, -0x64DC($gp)
    ctx->pc = 0x205654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941476), GPR_U32(ctx, 6));
    // 0x205658: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x205658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_20565c:
    // 0x20565c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x205660: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205660u;
    {
        const bool branch_taken_0x205660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205660u;
        // 0x205664: 0x8f839b08  lw          $v1, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205660) {
            ctx->pc = 0x20567Cu;
            goto label_20567c;
        }
    }
    ctx->pc = 0x205668u;
    // 0x205668: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205668u;
    {
        const bool branch_taken_0x205668 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205668u;
        // 0x20566c: 0x8f829b04  lw          $v0, -0x64FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205668) {
            ctx->pc = 0x205684u;
            goto label_205684;
        }
    }
    ctx->pc = 0x205670u;
    // 0x205670: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x205670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x205674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x205674u;
    {
        const bool branch_taken_0x205674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205674u;
        // 0x205678: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205674) {
            ctx->pc = 0x205690u;
            goto label_205690;
        }
    }
    ctx->pc = 0x20567Cu;
label_20567c:
    // 0x20567c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x20567Cu;
    {
        const bool branch_taken_0x20567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20567Cu;
        // 0x205680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20567c) {
            ctx->pc = 0x2057ECu;
            goto label_2057ec;
        }
    }
    ctx->pc = 0x205684u;
label_205684:
    // 0x205684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205688: 0xc081550  jal         func_205540
    ctx->pc = 0x205688u;
    SET_GPR_U32(ctx, 31, 0x205690u);
    ctx->pc = 0x20568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205688u;
    // 0x20568c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x205540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205540u, 0x205688u, 0x205690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205690u;
label_205690:
    // 0x205690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x205694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x205698: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x205698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20569c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2056a0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2056a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2056a4: 0xc081270  jal         func_2049C0
    ctx->pc = 0x2056A4u;
    SET_GPR_U32(ctx, 31, 0x2056ACu);
    ctx->pc = 0x2056A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056A4u;
    // 0x2056a8: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2049C0u, 0x2056A4u, 0x2056ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056ACu;
label_2056ac:
    // 0x2056ac: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x2056acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2056b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2056b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2056b4: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2056b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2056b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2056bc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2056bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2056c0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2056c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2056c4: 0xc081242  jal         func_204908
    ctx->pc = 0x2056C4u;
    SET_GPR_U32(ctx, 31, 0x2056CCu);
    ctx->pc = 0x2056C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056C4u;
    // 0x2056c8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x2056C4u, 0x2056CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056CCu;
label_2056cc:
    // 0x2056cc: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x2056ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2056d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2056d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2056d4: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2056d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2056d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2056dc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2056dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2056e0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2056e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2056e4: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x2056e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x2056e8: 0xc081242  jal         func_204908
    ctx->pc = 0x2056E8u;
    SET_GPR_U32(ctx, 31, 0x2056F0u);
    ctx->pc = 0x2056ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056E8u;
    // 0x2056ec: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x2056E8u, 0x2056F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056F0u;
label_2056f0:
    // 0x2056f0: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x2056f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2056f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2056f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2056f8: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2056f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x205700: 0x96060012  lhu         $a2, 0x12($s0)
    ctx->pc = 0x205700u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x205704: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x205704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x205708: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x205708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x20570c: 0xc081242  jal         func_204908
    ctx->pc = 0x20570Cu;
    SET_GPR_U32(ctx, 31, 0x205714u);
    ctx->pc = 0x205710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20570Cu;
    // 0x205710: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x20570Cu, 0x205714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205714u;
label_205714:
    // 0x205714: 0x97a70004  lhu         $a3, 0x4($sp)
    ctx->pc = 0x205714u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x205718: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20571c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x20571cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x205720: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x205720u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x205724: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x205724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x205728: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x205728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20572c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x20572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x205730: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x205730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x205734: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x205734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x205738: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x205738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x20573c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x205740: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x205740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x205744: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x205744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x205748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20574c: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x20574cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x205750: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x205750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x205754: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x205754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x205758: 0xc081242  jal         func_204908
    ctx->pc = 0x205758u;
    SET_GPR_U32(ctx, 31, 0x205760u);
    ctx->pc = 0x20575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205758u;
    // 0x20575c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x205758u, 0x205760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205760u;
label_205760:
    // 0x205760: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x205760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x205764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205768: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x205768u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20576c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x20576cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205770: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x205770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x205774: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x205774u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205778: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x205778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20577c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x20577cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x205780: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x205780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x205784: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x205784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x205788: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x20578c: 0x34c6c020  ori         $a2, $a2, 0xC020
    ctx->pc = 0x20578cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49184);
    // 0x205790: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x205790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x205794: 0xc081242  jal         func_204908
    ctx->pc = 0x205794u;
    SET_GPR_U32(ctx, 31, 0x20579Cu);
    ctx->pc = 0x205798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205794u;
    // 0x205798: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x205794u, 0x20579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20579Cu;
label_20579c:
    // 0x20579c: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x20579cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2057a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2057a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2057a4: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2057a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2057a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2057ac: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2057b0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2057b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2057b4: 0x34a52040  ori         $a1, $a1, 0x2040
    ctx->pc = 0x2057b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8256);
    // 0x2057b8: 0xc081242  jal         func_204908
    ctx->pc = 0x2057B8u;
    SET_GPR_U32(ctx, 31, 0x2057C0u);
    ctx->pc = 0x2057BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2057B8u;
    // 0x2057bc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x2057B8u, 0x2057C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x2057c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2057c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2057c8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2057c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2057cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2057ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2057d0: 0x34a51500  ori         $a1, $a1, 0x1500
    ctx->pc = 0x2057d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5376);
    // 0x2057d4: 0xc081242  jal         func_204908
    ctx->pc = 0x2057D4u;
    SET_GPR_U32(ctx, 31, 0x2057DCu);
    ctx->pc = 0x2057D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2057D4u;
    // 0x2057d8: 0xc23004  sllv        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x2057D4u, 0x2057DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057DCu;
label_2057dc:
    // 0x2057dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2057dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2057e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2057e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2057e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2057e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2057ec:
    // 0x2057ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2057ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2057f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2057f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2057f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2057f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2057f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2057f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2057fc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2057fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205800: 0x3e00008  jr          $ra
    ctx->pc = 0x205800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205800u;
        // 0x205804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205808u;
}
