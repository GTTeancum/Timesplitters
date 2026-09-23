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

// Function: OpenXPM
// Address: 0x2b9180 - 0x2b94f8
void OpenXPM_0x2b9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OpenXPM_0x2b9180");
#endif

    switch (ctx->pc) {
        case 0x2b9200u: goto label_2b9200;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b9488u: goto label_2b9488;
        default: break;
    }

    ctx->pc = 0x2b9180u;

    // 0x2b9180: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b9184: 0x24c3fffe  addiu       $v1, $a2, -0x2
    ctx->pc = 0x2b9184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2b9188: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b918c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2b918cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b9190: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b9190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b9194: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b9194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9198: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b919c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b91a0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b91a4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b91a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b91a8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b91ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b91acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b91b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b91b4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B91B4u;
    {
        const bool branch_taken_0x2b91b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B4u;
        // 0x2b91b8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91b4) {
            ctx->pc = 0x2B92BCu;
            goto label_2b92bc;
        }
    }
    ctx->pc = 0x2B91BCu;
    // 0x2b91bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b91c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b91c4: 0x24429ba0  addiu       $v0, $v0, -0x6460
    ctx->pc = 0x2b91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941600));
    // 0x2b91c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b91cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b91d0: 0x800008  jr          $a0
    ctx->pc = 0x2B91D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B91D8u: goto label_2b91d8;
            case 0x2B9208u: goto label_2b9208;
            case 0x2B9240u: goto label_2b9240;
            case 0x2B9274u: goto label_2b9274;
            case 0x2B92BCu: goto label_2b92bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B91D8u;
label_2b91d8:
    // 0x2b91d8: 0x8f84b4b8  lw          $a0, -0x4B48($gp)
    ctx->pc = 0x2b91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b91dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b91e0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b91e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b91e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91e8: 0x24a59b40  addiu       $a1, $a1, -0x64C0
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941504));
    // 0x2b91ec: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2b91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2b91f0: 0x26670002  addiu       $a3, $s3, 0x2
    ctx->pc = 0x2b91f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b91f4: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2b91f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2b91f8: 0xc0b962c  jal         func_2E58B0
    ctx->pc = 0x2B91F8u;
    SET_GPR_U32(ctx, 31, 0x2B9200u);
    ctx->pc = 0x2B91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91F8u;
    // 0x2b91fc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E58B0u, 0x2B91F8u, 0x2B9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9200u;
label_2b9200:
    // 0x2b9200: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2B9200u;
    {
        const bool branch_taken_0x2b9200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9200u;
        // 0x2b9204: 0xa2600024  sb          $zero, 0x24($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9200) {
            ctx->pc = 0x2B92C0u;
            goto label_2b92c0;
        }
    }
    ctx->pc = 0x2B9208u;
label_2b9208:
    // 0x2b9208: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b9208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b920c: 0x8f84b4b8  lw          $a0, -0x4B48($gp)
    ctx->pc = 0x2b920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9210: 0x24a59b50  addiu       $a1, $a1, -0x64B0
    ctx->pc = 0x2b9210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941520));
    // 0x2b9214: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b9214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9218: 0x26670002  addiu       $a3, $s3, 0x2
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b921c: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2b921cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2b9220: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2b9220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9224: 0xc0b962c  jal         func_2E58B0
    ctx->pc = 0x2B9224u;
    SET_GPR_U32(ctx, 31, 0x2B922Cu);
    ctx->pc = 0x2B9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9224u;
    // 0x2b9228: 0x37aa0008  ori         $t2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E58B0u, 0x2B9224u, 0x2B922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B922Cu;
label_2b922c:
    // 0x2b922c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9234: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2b9234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2b9238: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B9238u;
    {
        const bool branch_taken_0x2b9238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9238u;
        // 0x2b923c: 0xa2620024  sb          $v0, 0x24($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9238) {
            ctx->pc = 0x2B92C0u;
            goto label_2b92c0;
        }
    }
    ctx->pc = 0x2B9240u;
label_2b9240:
    // 0x2b9240: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b9240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9244: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b9244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b9248: 0x8f84b4b8  lw          $a0, -0x4B48($gp)
    ctx->pc = 0x2b9248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b924c: 0x24a59b68  addiu       $a1, $a1, -0x6498
    ctx->pc = 0x2b924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941544));
    // 0x2b9250: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b9250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9254: 0x26670002  addiu       $a3, $s3, 0x2
    ctx->pc = 0x2b9254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b9258: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2b9258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2b925c: 0x26690025  addiu       $t1, $s3, 0x25
    ctx->pc = 0x2b925cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 37));
    // 0x2b9260: 0xc0b962c  jal         func_2E58B0
    ctx->pc = 0x2B9260u;
    SET_GPR_U32(ctx, 31, 0x2B9268u);
    ctx->pc = 0x2B9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9260u;
    // 0x2b9264: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E58B0u, 0x2B9260u, 0x2B9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9268u;
label_2b9268:
    // 0x2b9268: 0x92630025  lbu         $v1, 0x25($s3)
    ctx->pc = 0x2b9268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b926c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B926Cu;
    {
        const bool branch_taken_0x2b926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B926Cu;
        // 0x2b9270: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b926c) {
            ctx->pc = 0x2B92ACu;
            goto label_2b92ac;
        }
    }
    ctx->pc = 0x2B9274u;
label_2b9274:
    // 0x2b9274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9278: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2b9278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2b927c: 0x8f84b4b8  lw          $a0, -0x4B48($gp)
    ctx->pc = 0x2b927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9280: 0x24a59b80  addiu       $a1, $a1, -0x6480
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941568));
    // 0x2b9284: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b9284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9288: 0x26670002  addiu       $a3, $s3, 0x2
    ctx->pc = 0x2b9288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b928c: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2b928cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2b9290: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2b9290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9294: 0x37aa0008  ori         $t2, $sp, 0x8
    ctx->pc = 0x2b9294u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2b9298: 0x266b0025  addiu       $t3, $s3, 0x25
    ctx->pc = 0x2b9298u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 37));
    // 0x2b929c: 0xc0b962c  jal         func_2E58B0
    ctx->pc = 0x2B929Cu;
    SET_GPR_U32(ctx, 31, 0x2B92A4u);
    ctx->pc = 0x2B92A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B929Cu;
    // 0x2b92a0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E58B0u, 0x2B929Cu, 0x2B92A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92A4u;
label_2b92a4:
    // 0x2b92a4: 0x92630025  lbu         $v1, 0x25($s3)
    ctx->pc = 0x2b92a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b92a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b92ac:
    // 0x2b92ac: 0xa2620024  sb          $v0, 0x24($s3)
    ctx->pc = 0x2b92acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b92b0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2b92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2b92b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B92B4u;
    {
        const bool branch_taken_0x2b92b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B4u;
        // 0x2b92b8: 0xa2630025  sb          $v1, 0x25($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b4) {
            ctx->pc = 0x2B92C0u;
            goto label_2b92c0;
        }
    }
    ctx->pc = 0x2B92BCu;
label_2b92bc:
    // 0x2b92bc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2b92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2b92c0:
    // 0x2b92c0: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x2b92c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b92c4: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B92C4u;
    SET_GPR_U32(ctx, 31, 0x2B92CCu);
    ctx->pc = 0x2B92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92C4u;
    // 0x2b92c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B92C4u, 0x2B92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92CCu;
label_2b92cc:
    // 0x2b92cc: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x2b92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b92d0: 0x8f84b4b8  lw          $a0, -0x4B48($gp)
    ctx->pc = 0x2b92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b92d4: 0xc0ae44c  jal         func_2B9130
    ctx->pc = 0x2B92D4u;
    SET_GPR_U32(ctx, 31, 0x2B92DCu);
    ctx->pc = 0x2B92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92D4u;
    // 0x2b92d8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9130u, 0x2B92D4u, 0x2B92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92DCu;
label_2b92dc:
    // 0x2b92dc: 0x92650024  lbu         $a1, 0x24($s3)
    ctx->pc = 0x2b92dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b92e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b92e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b92e4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2b92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2b92e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B92E8u;
    {
        const bool branch_taken_0x2b92e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E8u;
        // 0x2b92ec: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92e8) {
            ctx->pc = 0x2B9324u;
            goto label_2b9324;
        }
    }
    ctx->pc = 0x2B92F0u;
    // 0x2b92f0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b92f4: 0x2442db00  addiu       $v0, $v0, -0x2500
    ctx->pc = 0x2b92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x2b92f8: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2b92f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2b92fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b92fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9300: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9300u;
    SET_GPR_U32(ctx, 31, 0x2B9308u);
    ctx->pc = 0x2B9304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9300u;
    // 0x2b9304: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9300u, 0x2B9308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9308u;
label_2b9308:
    // 0x2b9308: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x2b9308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2b930c: 0xc0ae414  jal         func_2B9050
    ctx->pc = 0x2B930Cu;
    SET_GPR_U32(ctx, 31, 0x2B9314u);
    ctx->pc = 0x2B9310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B930Cu;
    // 0x2b9310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9050u, 0x2B930Cu, 0x2B9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9314u;
label_2b9314:
    // 0x2b9314: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2b9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9318: 0x92650024  lbu         $a1, 0x24($s3)
    ctx->pc = 0x2b9318u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b931c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b9320: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2b9320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b9324:
    // 0x2b9324: 0x8f84b4bc  lw          $a0, -0x4B44($gp)
    ctx->pc = 0x2b9324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948028)));
    // 0x2b9328: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2b9328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2b932c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B932Cu;
    {
        const bool branch_taken_0x2b932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B932Cu;
        // 0x2b9330: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b932c) {
            ctx->pc = 0x2B9424u;
            goto label_2b9424;
        }
    }
    ctx->pc = 0x2B9334u;
    // 0x2b9334: 0x96700000  lhu         $s0, 0x0($s3)
    ctx->pc = 0x2b9334u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b9338: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B9338u;
    SET_GPR_U32(ctx, 31, 0x2B9340u);
    ctx->pc = 0x2B933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9338u;
    // 0x2b933c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B9338u, 0x2B9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9340u;
label_2b9340:
    // 0x2b9340: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x2b9340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b9344: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9344u;
    {
        const bool branch_taken_0x2b9344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9344u;
        // 0x2b9348: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9344) {
            ctx->pc = 0x2B9358u;
            goto label_2b9358;
        }
    }
    ctx->pc = 0x2B934Cu;
    // 0x2b934c: 0xc0ad230  jal         func_2B48C0
    ctx->pc = 0x2B934Cu;
    SET_GPR_U32(ctx, 31, 0x2B9354u);
    ctx->pc = 0x2B9350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B934Cu;
    // 0x2b9350: 0x96640002  lhu         $a0, 0x2($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48C0u, 0x2B934Cu, 0x2B9354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9354u;
label_2b9354:
    // 0x2b9354: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2b9354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9358:
    // 0x2b9358: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x2b9358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b935c: 0x8e710014  lw          $s1, 0x14($s3)
    ctx->pc = 0x2b935cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2b9360: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2B9360u;
    {
        const bool branch_taken_0x2b9360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9360u;
        // 0x2b9364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9360) {
            ctx->pc = 0x2B94C8u;
            goto label_2b94c8;
        }
    }
    ctx->pc = 0x2B9368u;
    // 0x2b9368: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x2b9368u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x2b936c: 0x37deff80  ori         $fp, $fp, 0xFF80
    ctx->pc = 0x2b936cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65408);
label_2b9370:
    // 0x2b9370: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x2b9370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b9374: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b9374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9378: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2b9378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b937c: 0xa3a007  srav        $s4, $v1, $a1
    ctx->pc = 0x2b937cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2b9380: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2b9380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b9384: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2b9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b9388: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x2b9388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2b938c: 0xa4b806  srlv        $s7, $a0, $a1
    ctx->pc = 0x2b938cu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2b9390: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9390u;
    {
        const bool branch_taken_0x2b9390 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9390u;
        // 0x2b9394: 0x438018  mult        $s0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9390) {
            ctx->pc = 0x2B93CCu;
            goto label_2b93cc;
        }
    }
    ctx->pc = 0x2B9398u;
    // 0x2b9398: 0x24b60001  addiu       $s6, $a1, 0x1
    ctx->pc = 0x2b9398u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b939c: 0x0  nop
    ctx->pc = 0x2b939cu;
    // NOP
label_2b93a0:
    // 0x2b93a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b93a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b93a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b93a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93ac: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2B93ACu;
    SET_GPR_U32(ctx, 31, 0x2B93B4u);
    ctx->pc = 0x2B93B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93ACu;
    // 0x2b93b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2B93ACu, 0x2B93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93B4u;
label_2b93b4:
    // 0x2b93b4: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x2b93b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2b93b8: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x2b93b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2b93bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B93BCu;
    {
        const bool branch_taken_0x2b93bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93BCu;
        // 0x2b93c0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93bc) {
            ctx->pc = 0x2B93A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b93a0;
        }
    }
    ctx->pc = 0x2B93C4u;
    // 0x2b93c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B93C4u;
    {
        const bool branch_taken_0x2b93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93C4u;
        // 0x2b93c8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93c4) {
            ctx->pc = 0x2B93D4u;
            goto label_2b93d4;
        }
    }
    ctx->pc = 0x2B93CCu;
label_2b93cc:
    // 0x2b93cc: 0x24b60001  addiu       $s6, $a1, 0x1
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b93d0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2b93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2b93d4:
    // 0x2b93d4: 0x2e22018  mult        $a0, $s7, $v0
    ctx->pc = 0x2b93d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b93d8: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x2b93d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b93dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B93DCu;
    {
        const bool branch_taken_0x2b93dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93DCu;
        // 0x2b93e0: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93dc) {
            ctx->pc = 0x2B9404u;
            goto label_2b9404;
        }
    }
    ctx->pc = 0x2B93E4u;
    // 0x2b93e4: 0x0  nop
    ctx->pc = 0x2b93e4u;
    // NOP
label_2b93e8:
    // 0x2b93e8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2b93e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b93ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b93ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b93f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b93f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b93f4: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x2b93f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b93f8: 0x0  nop
    ctx->pc = 0x2b93f8u;
    // NOP
    // 0x2b93fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B93FCu;
    {
        const bool branch_taken_0x2b93fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b93fc) {
            ctx->pc = 0x2B93E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b93e8;
        }
    }
    ctx->pc = 0x2B9404u;
label_2b9404:
    // 0x2b9404: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x2b9404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2b9408: 0x2623007f  addiu       $v1, $s1, 0x7F
    ctx->pc = 0x2b9408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
    // 0x2b940c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b940cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9410: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b9410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b9414: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2B9414u;
    {
        const bool branch_taken_0x2b9414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9414u;
        // 0x2b9418: 0x7e8824  and         $s1, $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9414) {
            ctx->pc = 0x2B9370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9370;
        }
    }
    ctx->pc = 0x2B941Cu;
    // 0x2b941c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2B941Cu;
    {
        const bool branch_taken_0x2b941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B941Cu;
        // 0x2b9420: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b941c) {
            ctx->pc = 0x2B94CCu;
            goto label_2b94cc;
        }
    }
    ctx->pc = 0x2B9424u;
label_2b9424:
    // 0x2b9424: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2b9424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9428: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x2b9428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b942c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9430: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B9430u;
    {
        const bool branch_taken_0x2b9430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9430u;
        // 0x2b9434: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9430) {
            ctx->pc = 0x2B94C8u;
            goto label_2b94c8;
        }
    }
    ctx->pc = 0x2B9438u;
    // 0x2b9438: 0x2414007f  addiu       $s4, $zero, 0x7F
    ctx->pc = 0x2b9438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b943c: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x2b943cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9440:
    // 0x2b9440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9444: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2b9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b9448: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x2b9448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2b944c: 0x3012  mflo        $a2
    ctx->pc = 0x2b944cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2b9450: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2B9450u;
    SET_GPR_U32(ctx, 31, 0x2B9458u);
    ctx->pc = 0x2B9454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9450u;
    // 0x2b9454: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2B9450u, 0x2B9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9458u;
label_2b9458:
    // 0x2b9458: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2b9458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b945c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2b945cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b9460: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b9460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b9464: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2b9464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b9468: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2b9468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b946c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2b946cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9470: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x2b9470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2b9474: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b9474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b9478: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B9478u;
    {
        const bool branch_taken_0x2b9478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9478u;
        // 0x2b947c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9478) {
            ctx->pc = 0x2B94B0u;
            goto label_2b94b0;
        }
    }
    ctx->pc = 0x2B9480u;
    // 0x2b9480: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2b9480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b9484: 0x0  nop
    ctx->pc = 0x2b9484u;
    // NOP
label_2b9488:
    // 0x2b9488: 0xa2340000  sb          $s4, 0x0($s1)
    ctx->pc = 0x2b9488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x2b948c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b948cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b9490: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b9494: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2b9494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b9498: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2b9498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b949c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b949cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b94a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B94A0u;
    {
        const bool branch_taken_0x2b94a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A0u;
        // 0x2b94a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94a0) {
            ctx->pc = 0x2B9488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9488;
        }
    }
    ctx->pc = 0x2B94A8u;
    // 0x2b94a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B94A8u;
    {
        const bool branch_taken_0x2b94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A8u;
        // 0x2b94ac: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94a8) {
            ctx->pc = 0x2B94B8u;
            goto label_2b94b8;
        }
    }
    ctx->pc = 0x2B94B0u;
label_2b94b0:
    // 0x2b94b0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2b94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b94b4: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x2b94b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2b94b8:
    // 0x2b94b8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2b94b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b94bc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b94bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b94c0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2B94C0u;
    {
        const bool branch_taken_0x2b94c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b94c0) {
            ctx->pc = 0x2B94C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B94C0u;
            // 0x2b94c4: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9440;
        }
    }
    ctx->pc = 0x2B94C8u;
label_2b94c8:
    // 0x2b94c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b94c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b94cc:
    // 0x2b94cc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b94ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b94d0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b94d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b94d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b94d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b94d8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b94d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b94dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b94dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b94e0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b94e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b94e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b94e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b94e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b94e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b94ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b94ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b94f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B94F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94F0u;
        // 0x2b94f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B94F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B94F8u;
}
