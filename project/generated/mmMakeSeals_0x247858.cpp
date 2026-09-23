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

// Function: mmMakeSeals
// Address: 0x247858 - 0x247a00
void mmMakeSeals_0x247858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmMakeSeals_0x247858");
#endif

    switch (ctx->pc) {
        case 0x2478c8u: goto label_2478c8;
        case 0x247948u: goto label_247948;
        case 0x24795cu: goto label_24795c;
        case 0x24796cu: goto label_24796c;
        case 0x24797cu: goto label_24797c;
        case 0x2479a4u: goto label_2479a4;
        default: break;
    }

    ctx->pc = 0x247858u;

    // 0x247858: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x247858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24785c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x247860: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x247860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x247864: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x247864u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247868: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x247868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24786c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247870: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x247870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x247874: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x247874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247878: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x247878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24787c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x247880: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x247880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x247884: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x247884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x247888: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x247888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24788c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x247890: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x247890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x247894: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x247894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x247898: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24789c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2478a0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2478a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2478a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2478a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2478a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2478ac: 0x8c560024  lw          $s6, 0x24($v0)
    ctx->pc = 0x2478acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2478b0: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x2478b4: 0x18600045  blez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2478B4u;
    {
        const bool branch_taken_0x2478b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2478B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478B4u;
        // 0x2478b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478b4) {
            ctx->pc = 0x2479CCu;
            goto label_2479cc;
        }
    }
    ctx->pc = 0x2478BCu;
    // 0x2478bc: 0x3c1effe0  lui         $fp, 0xFFE0
    ctx->pc = 0x2478bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65504 << 16));
    // 0x2478c0: 0x26d20020  addiu       $s2, $s6, 0x20
    ctx->pc = 0x2478c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x2478c4: 0x0  nop
    ctx->pc = 0x2478c4u;
    // NOP
label_2478c8:
    // 0x2478c8: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x2478c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2478cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2478ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2478d0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2478d4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2478d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2478d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2478d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2478dc: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2478dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2478e0: 0xaf82a0dc  sw          $v0, -0x5F24($gp)
    ctx->pc = 0x2478e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 2));
    // 0x2478e4: 0x31d40  sll         $v1, $v1, 21
    ctx->pc = 0x2478e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
    // 0x2478e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2478ec: 0x42540  sll         $a0, $a0, 21
    ctx->pc = 0x2478ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
    // 0x2478f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2478f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2478f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2478f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2478f8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2478f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2478fc: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2478FCu;
    {
        const bool branch_taken_0x2478fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x247900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478FCu;
        // 0x247900: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478fc) {
            ctx->pc = 0x247950u;
            goto label_247950;
        }
    }
    ctx->pc = 0x247904u;
    // 0x247904: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x247904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x247908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247908u;
    {
        const bool branch_taken_0x247908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247908u;
        // 0x24790c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247908) {
            ctx->pc = 0x247920u;
            goto label_247920;
        }
    }
    ctx->pc = 0x247910u;
    // 0x247910: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x247910u;
    {
        const bool branch_taken_0x247910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247910u;
        // 0x247914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247910) {
            ctx->pc = 0x247940u;
            goto label_247940;
        }
    }
    ctx->pc = 0x247918u;
    // 0x247918: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x247918u;
    {
        const bool branch_taken_0x247918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247918u;
        // 0x24791c: 0x8ec2001c  lw          $v0, 0x1C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247918) {
            ctx->pc = 0x2479B4u;
            goto label_2479b4;
        }
    }
    ctx->pc = 0x247920u;
label_247920:
    // 0x247920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x247920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247924: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x247924u;
    {
        const bool branch_taken_0x247924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247924u;
        // 0x247928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247924) {
            ctx->pc = 0x247964u;
            goto label_247964;
        }
    }
    ctx->pc = 0x24792Cu;
    // 0x24792c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x247930: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x247930u;
    {
        const bool branch_taken_0x247930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247930u;
        // 0x247934: 0x21e2021  addu        $a0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247930) {
            ctx->pc = 0x247974u;
            goto label_247974;
        }
    }
    ctx->pc = 0x247938u;
    // 0x247938: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x247938u;
    {
        const bool branch_taken_0x247938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247938u;
        // 0x24793c: 0x8ec2001c  lw          $v0, 0x1C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247938) {
            ctx->pc = 0x2479B4u;
            goto label_2479b4;
        }
    }
    ctx->pc = 0x247940u;
label_247940:
    // 0x247940: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x247940u;
    SET_GPR_U32(ctx, 31, 0x247948u);
    ctx->pc = 0x247944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247940u;
    // 0x247944: 0x23e2821  addu        $a1, $s1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x247940u, 0x247948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247948u;
label_247948:
    // 0x247948: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x247948u;
    {
        const bool branch_taken_0x247948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247948u;
        // 0x24794c: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247948) {
            ctx->pc = 0x247980u;
            goto label_247980;
        }
    }
    ctx->pc = 0x247950u;
label_247950:
    // 0x247950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247954: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x247954u;
    SET_GPR_U32(ctx, 31, 0x24795Cu);
    ctx->pc = 0x247958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247954u;
    // 0x247958: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x247954u, 0x24795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24795Cu;
label_24795c:
    // 0x24795c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24795Cu;
    {
        const bool branch_taken_0x24795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24795Cu;
        // 0x247960: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24795c) {
            ctx->pc = 0x247980u;
            goto label_247980;
        }
    }
    ctx->pc = 0x247964u;
label_247964:
    // 0x247964: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x247964u;
    SET_GPR_U32(ctx, 31, 0x24796Cu);
    ctx->pc = 0x247968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247964u;
    // 0x247968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x247964u, 0x24796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24796Cu;
label_24796c:
    // 0x24796c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24796Cu;
    {
        const bool branch_taken_0x24796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24796Cu;
        // 0x247970: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24796c) {
            ctx->pc = 0x247980u;
            goto label_247980;
        }
    }
    ctx->pc = 0x247974u;
label_247974:
    // 0x247974: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x247974u;
    SET_GPR_U32(ctx, 31, 0x24797Cu);
    ctx->pc = 0x247978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247974u;
    // 0x247978: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x247974u, 0x24797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24797Cu;
label_24797c:
    // 0x24797c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_247980:
    // 0x247980: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x247980u;
    {
        const bool branch_taken_0x247980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247980u;
        // 0x247984: 0x103543  sra         $a2, $s0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247980) {
            ctx->pc = 0x2479ACu;
            goto label_2479ac;
        }
    }
    ctx->pc = 0x247988u;
    // 0x247988: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x247988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x24798c: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x24798cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x247990: 0x113d43  sra         $a3, $s1, 21
    ctx->pc = 0x247990u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 21));
    // 0x247994: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x247994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x247998: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24799c: 0xc0927a0  jal         func_249E80
    ctx->pc = 0x24799Cu;
    SET_GPR_U32(ctx, 31, 0x2479A4u);
    ctx->pc = 0x2479A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24799Cu;
    // 0x2479a0: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E80u, 0x24799Cu, 0x2479A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479A4u;
label_2479a4:
    // 0x2479a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2479A4u;
    {
        const bool branch_taken_0x2479a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2479a4) {
            ctx->pc = 0x2479A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2479A4u;
            // 0x2479a8: 0x8ec2001c  lw          $v0, 0x1C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2479B4u;
            goto label_2479b4;
        }
    }
    ctx->pc = 0x2479ACu;
label_2479ac:
    // 0x2479ac: 0x2759825  or          $s3, $s3, $s5
    ctx->pc = 0x2479acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 21));
    // 0x2479b0: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x2479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_2479b4:
    // 0x2479b4: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2479b8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2479b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2479bc: 0x3075fffe  andi        $s5, $v1, 0xFFFE
    ctx->pc = 0x2479bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x2479c0: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2479c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2479c4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2479C4u;
    {
        const bool branch_taken_0x2479c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2479C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479C4u;
        // 0x2479c8: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479c4) {
            ctx->pc = 0x2478C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2478c8;
        }
    }
    ctx->pc = 0x2479CCu;
label_2479cc:
    // 0x2479cc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2479ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2479d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2479d4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2479d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2479d8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2479d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2479dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2479dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2479e0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2479e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2479e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2479e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2479e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2479e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2479ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2479ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2479f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2479f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2479f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2479f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2479f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2479F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2479FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479F8u;
        // 0x2479fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2479F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A00u;
}
