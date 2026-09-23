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

// Function: soundLoad
// Address: 0x2052b8 - 0x20549c
void soundLoad_0x2052b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundLoad_0x2052b8");
#endif

    switch (ctx->pc) {
        case 0x205314u: goto label_205314;
        case 0x205340u: goto label_205340;
        case 0x205350u: goto label_205350;
        case 0x205360u: goto label_205360;
        case 0x205370u: goto label_205370;
        case 0x205384u: goto label_205384;
        case 0x20539cu: goto label_20539c;
        case 0x2053b0u: goto label_2053b0;
        case 0x205410u: goto label_205410;
        case 0x205424u: goto label_205424;
        case 0x205448u: goto label_205448;
        default: break;
    }

    ctx->pc = 0x2052b8u;

    // 0x2052b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2052b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2052bc: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2052bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2052c0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2052c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2052c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2052c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052c8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2052c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2052cc: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x2052ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2052d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2052d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2052d4: 0x3c170032  lui         $s7, 0x32
    ctx->pc = 0x2052d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
    // 0x2052d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2052d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2052dc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2052dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2052e0: 0x26f2e180  addiu       $s2, $s7, -0x1E80
    ctx->pc = 0x2052e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959488));
    // 0x2052e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2052e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2052e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2052e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2052ec: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2052f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2052f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2052f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2052f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2052f8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2052fc: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2052FCu;
    {
        const bool branch_taken_0x2052fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052FCu;
        // 0x205300: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052fc) {
            ctx->pc = 0x205474u;
            goto label_205474;
        }
    }
    ctx->pc = 0x205304u;
    // 0x205304: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x205304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x205308: 0x929021  addu        $s2, $a0, $s2
    ctx->pc = 0x205308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20530c: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x20530Cu;
    SET_GPR_U32(ctx, 31, 0x205314u);
    ctx->pc = 0x205310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20530Cu;
    // 0x205310: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x20530Cu, 0x205314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205314u;
label_205314:
    // 0x205314: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x205314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205318: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x205318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
    // 0x20531c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20531cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x205320: 0x2691003f  addiu       $s1, $s4, 0x3F
    ctx->pc = 0x205320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 63));
    // 0x205324: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x205324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x205328: 0x26102c80  addiu       $s0, $s0, 0x2C80
    ctx->pc = 0x205328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11392));
    // 0x20532c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x20532cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x205330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205338: 0xc0b491c  jal         func_2D2470
    ctx->pc = 0x205338u;
    SET_GPR_U32(ctx, 31, 0x205340u);
    ctx->pc = 0x20533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205338u;
    // 0x20533c: 0x2693ffc0  addiu       $s3, $s4, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2470u, 0x205338u, 0x205340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205340u;
label_205340:
    // 0x205340: 0x26150040  addiu       $s5, $s0, 0x40
    ctx->pc = 0x205340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x205344: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x205344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x205348: 0xc0b42bc  jal         func_2D0AF0
    ctx->pc = 0x205348u;
    SET_GPR_U32(ctx, 31, 0x205350u);
    ctx->pc = 0x20534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205348u;
    // 0x20534c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AF0u, 0x205348u, 0x205350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205350u;
label_205350:
    // 0x205350: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x205350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205358: 0xc086922  jal         func_21A488
    ctx->pc = 0x205358u;
    SET_GPR_U32(ctx, 31, 0x205360u);
    ctx->pc = 0x20535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205358u;
    // 0x20535c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A488u, 0x205358u, 0x205360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205360u;
label_205360:
    // 0x205360: 0x3263003f  andi        $v1, $s3, 0x3F
    ctx->pc = 0x205360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x205364: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x205364u;
    {
        const bool branch_taken_0x205364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205364u;
        // 0x205368: 0x2682ffb0  addiu       $v0, $s4, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205364) {
            ctx->pc = 0x205390u;
            goto label_205390;
        }
    }
    ctx->pc = 0x20536Cu;
    // 0x20536c: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x20536cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_205370:
    // 0x205370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205374: 0x2b32821  addu        $a1, $s5, $s3
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x205378: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x205378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20537c: 0xc0b91c2  jal         func_2E4708
    ctx->pc = 0x20537Cu;
    SET_GPR_U32(ctx, 31, 0x205384u);
    ctx->pc = 0x205380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20537Cu;
    // 0x205380: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4708u, 0x20537Cu, 0x205384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205384u;
label_205384:
    // 0x205384: 0x3262003f  andi        $v0, $s3, 0x3F
    ctx->pc = 0x205384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x205388: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205388u;
    {
        const bool branch_taken_0x205388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205388u;
        // 0x20538c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205388) {
            ctx->pc = 0x205370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205370;
        }
    }
    ctx->pc = 0x205390u;
label_205390:
    // 0x205390: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x205390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205394: 0xc0b491c  jal         func_2D2470
    ctx->pc = 0x205394u;
    SET_GPR_U32(ctx, 31, 0x20539Cu);
    ctx->pc = 0x205398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205394u;
    // 0x205398: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2470u, 0x205394u, 0x20539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20539Cu;
label_20539c:
    // 0x20539c: 0x8f85b630  lw          $a1, -0x49D0($gp)
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948400)));
    // 0x2053a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2053a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2053a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053a8: 0xc0b7664  jal         func_2DD990
    ctx->pc = 0x2053A8u;
    SET_GPR_U32(ctx, 31, 0x2053B0u);
    ctx->pc = 0x2053ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053A8u;
    // 0x2053ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD990u, 0x2053A8u, 0x2053B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053B0u;
label_2053b0:
    // 0x2053b0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2053b4: 0x8f899af4  lw          $t1, -0x650C($gp)
    ctx->pc = 0x2053b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941428)));
    // 0x2053b8: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x2053b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2053bc: 0x26e3e180  addiu       $v1, $s7, -0x1E80
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959488));
    // 0x2053c0: 0x8d2c0008  lw          $t4, 0x8($t1)
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2053c4: 0x246b0018  addiu       $t3, $v1, 0x18
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2053c8: 0x8f88b630  lw          $t0, -0x49D0($gp)
    ctx->pc = 0x2053c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948400)));
    // 0x2053cc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2053ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2053d4: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x2053d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x2053d8: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x2053d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2053dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2053dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2053e0: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x2053e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x2053e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2053e8: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x2053e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x2053ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2053ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2053f0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2053f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2053f4: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2053f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2053f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2053fc: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x2053fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x205400: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x205400u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x205404: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x205404u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x205408: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x205408u;
    SET_GPR_U32(ctx, 31, 0x205410u);
    ctx->pc = 0x20540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205408u;
    // 0x20540c: 0x8d690000  lw          $t1, 0x0($t3) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x205408u, 0x205410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205410u;
label_205410:
    // 0x205410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205414: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x205414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x205418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20541c: 0xc0b7684  jal         func_2DDA10
    ctx->pc = 0x20541Cu;
    SET_GPR_U32(ctx, 31, 0x205424u);
    ctx->pc = 0x205420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20541Cu;
    // 0x205420: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA10u, 0x20541Cu, 0x205424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205424u;
label_205424:
    // 0x205424: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x205424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x205428: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x20542c: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x20542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x205430: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205434: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x205434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205438: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205438u;
    {
        const bool branch_taken_0x205438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205438u;
        // 0x20543c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205438) {
            ctx->pc = 0x205474u;
            goto label_205474;
        }
    }
    ctx->pc = 0x205440u;
    // 0x205440: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x205440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x205444: 0x3484423f  ori         $a0, $a0, 0x423F
    ctx->pc = 0x205444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16959);
label_205448:
    // 0x205448: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20544c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205450: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x205450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x205454: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x205454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x205458: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x205458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20545c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205460: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x205460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x205464: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205468: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x205468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20546c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x20546Cu;
    {
        const bool branch_taken_0x20546c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20546Cu;
        // 0x205470: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20546c) {
            ctx->pc = 0x205448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205448;
        }
    }
    ctx->pc = 0x205474u;
label_205474:
    // 0x205474: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x205474u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x205478: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x205478u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20547c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x20547cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205480: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x205480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205484: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x205484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205488: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x205488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20548c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x20548cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205490: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x205490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205494: 0x3e00008  jr          $ra
    ctx->pc = 0x205494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205494u;
        // 0x205498: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20549Cu;
}
