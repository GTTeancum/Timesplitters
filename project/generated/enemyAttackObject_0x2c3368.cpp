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

// Function: enemyAttackObject
// Address: 0x2c3368 - 0x2c38f0
void enemyAttackObject_0x2c3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAttackObject_0x2c3368");
#endif

    switch (ctx->pc) {
        case 0x2c33e8u: goto label_2c33e8;
        case 0x2c3458u: goto label_2c3458;
        case 0x2c34b4u: goto label_2c34b4;
        case 0x2c354cu: goto label_2c354c;
        case 0x2c359cu: goto label_2c359c;
        case 0x2c35a8u: goto label_2c35a8;
        case 0x2c35b8u: goto label_2c35b8;
        case 0x2c35c8u: goto label_2c35c8;
        case 0x2c35dcu: goto label_2c35dc;
        case 0x2c360cu: goto label_2c360c;
        case 0x2c3618u: goto label_2c3618;
        case 0x2c363cu: goto label_2c363c;
        case 0x2c369cu: goto label_2c369c;
        case 0x2c36b0u: goto label_2c36b0;
        case 0x2c36bcu: goto label_2c36bc;
        case 0x2c36e0u: goto label_2c36e0;
        case 0x2c3704u: goto label_2c3704;
        case 0x2c377cu: goto label_2c377c;
        case 0x2c379cu: goto label_2c379c;
        case 0x2c3824u: goto label_2c3824;
        default: break;
    }

    ctx->pc = 0x2c3368u;

    // 0x2c3368: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c336c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c3370: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c3370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c3374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c3378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c337c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c3380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3384: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x2c3384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2c3388: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c3388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c338c: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c338cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c3390: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3394: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3398: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x2c3398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c339c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c339cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c33a0: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x2c33a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c33a4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2c33a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c33a8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2c33a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c33ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c33acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c33b0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c33b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c33b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c33b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c33b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c33b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c33bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c33bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c33c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c33c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c33c4: 0x0  nop
    ctx->pc = 0x2c33c4u;
    // NOP
    // 0x2c33c8: 0x0  nop
    ctx->pc = 0x2c33c8u;
    // NOP
    // 0x2c33cc: 0x460c0504  c1          0xC0504
    ctx->pc = 0x2c33ccu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c33d0: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2c33d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c33d4: 0x0  nop
    ctx->pc = 0x2c33d4u;
    // NOP
    // 0x2c33d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C33D8u;
    {
        const bool branch_taken_0x2c33d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c33d8) {
            ctx->pc = 0x2C33DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C33D8u;
            // 0x2c33dc: 0x8e020ad4  lw          $v0, 0xAD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C33F0u;
            goto label_2c33f0;
        }
    }
    ctx->pc = 0x2C33E0u;
    // 0x2c33e0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C33E0u;
    SET_GPR_U32(ctx, 31, 0x2C33E8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C33E0u, 0x2C33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33E8u;
label_2c33e8:
    // 0x2c33e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c33e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c33ec: 0x8e020ad4  lw          $v0, 0xAD4($s0)
    ctx->pc = 0x2c33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
label_2c33f0:
    // 0x2c33f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C33F0u;
    {
        const bool branch_taken_0x2c33f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c33f0) {
            ctx->pc = 0x2C3450u;
            goto label_2c3450;
        }
    }
    ctx->pc = 0x2C33F8u;
    // 0x2c33f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c33fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C33FCu;
    {
        const bool branch_taken_0x2c33fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33FCu;
        // 0x2c3400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33fc) {
            ctx->pc = 0x2C3424u;
            goto label_2c3424;
        }
    }
    ctx->pc = 0x2C3404u;
    // 0x2c3404: 0xc6010b60  lwc1        $f1, 0xB60($s0)
    ctx->pc = 0x2c3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c340c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c340cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3410: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3414: 0x0  nop
    ctx->pc = 0x2c3414u;
    // NOP
    // 0x2c3418: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x2C3418u;
    {
        const bool branch_taken_0x2c3418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3418) {
            ctx->pc = 0x2C341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3418u;
            // 0x2c341c: 0x8e020a90  lw          $v0, 0xA90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3448u;
            goto label_2c3448;
        }
    }
    ctx->pc = 0x2C3420u;
    // 0x2c3420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3424:
    // 0x2c3424: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3424u;
    {
        const bool branch_taken_0x2c3424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3424) {
            ctx->pc = 0x2C3450u;
            goto label_2c3450;
        }
    }
    ctx->pc = 0x2C342Cu;
    // 0x2c342c: 0xc6010b60  lwc1        $f1, 0xB60($s0)
    ctx->pc = 0x2c342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3430: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c3430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c3434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3438: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c343c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C343Cu;
    {
        const bool branch_taken_0x2c343c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c343c) {
            ctx->pc = 0x2C3450u;
            goto label_2c3450;
        }
    }
    ctx->pc = 0x2C3444u;
    // 0x2c3444: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c3444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2c3448:
    // 0x2c3448: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c3448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c344c: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c344cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
label_2c3450:
    // 0x2c3450: 0xc0aff0a  jal         func_2BFC28
    ctx->pc = 0x2C3450u;
    SET_GPR_U32(ctx, 31, 0x2C3458u);
    ctx->pc = 0x2C3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3450u;
    // 0x2c3454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC28u, 0x2C3450u, 0x2C3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3458u;
label_2c3458:
    // 0x2c3458: 0x8e030aa8  lw          $v1, 0xAA8($s0)
    ctx->pc = 0x2c3458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2c345c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2c345cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c3460: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x2C3460u;
    {
        const bool branch_taken_0x2c3460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3460u;
        // 0x2c3464: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3460) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C3468u;
    // 0x2c3468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c346c: 0x24429df0  addiu       $v0, $v0, -0x6210
    ctx->pc = 0x2c346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942192));
    // 0x2c3470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3474: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3478: 0x800008  jr          $a0
    ctx->pc = 0x2C3478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3480u: goto label_2c3480;
            case 0x2C3488u: goto label_2c3488;
            case 0x2C34E8u: goto label_2c34e8;
            case 0x2C3590u: goto label_2c3590;
            case 0x2C3600u: goto label_2c3600;
            case 0x2C36A4u: goto label_2c36a4;
            case 0x2C36F8u: goto label_2c36f8;
            case 0x2C3750u: goto label_2c3750;
            case 0x2C3818u: goto label_2c3818;
            case 0x2C3888u: goto label_2c3888;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3478u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C3480u;
label_2c3480:
    // 0x2c3480: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2C3480u;
    {
        const bool branch_taken_0x2c3480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3480u;
        // 0x2c3484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3480) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C3488u;
label_2c3488:
    // 0x2c3488: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2c3488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2c348c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c348cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3490: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c3490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3494: 0x0  nop
    ctx->pc = 0x2c3494u;
    // NOP
    // 0x2c3498: 0x45010102  bc1t        . + 4 + (0x102 << 2)
    ctx->pc = 0x2C3498u;
    {
        const bool branch_taken_0x2c3498 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3498u;
        // 0x2c349c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3498) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C34A0u;
    // 0x2c34a0: 0xc6000b28  lwc1        $f0, 0xB28($s0)
    ctx->pc = 0x2c34a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c34a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c34a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c34a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c34ac: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C34ACu;
    SET_GPR_U32(ctx, 31, 0x2C34B4u);
    ctx->pc = 0x2C34B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C34ACu;
    // 0x2c34b0: 0xe6000b3c  swc1        $f0, 0xB3C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2876), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C34ACu, 0x2C34B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34B4u;
label_2c34b4:
    // 0x2c34b4: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c34b8: 0xc7819138  lwc1        $f1, -0x6EC8($gp)
    ctx->pc = 0x2c34b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c34bc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c34bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c34c0: 0xc6020b5c  lwc1        $f2, 0xB5C($s0)
    ctx->pc = 0x2c34c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c34c4: 0xe6000aec  swc1        $f0, 0xAEC($s0)
    ctx->pc = 0x2c34c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c34c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2c34c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c34cc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2c34ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c34d0: 0xe6000af0  swc1        $f0, 0xAF0($s0)
    ctx->pc = 0x2c34d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c34d4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2c34d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c34d8: 0x450000f5  bc1f        . + 4 + (0xF5 << 2)
    ctx->pc = 0x2C34D8u;
    {
        const bool branch_taken_0x2c34d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34D8u;
        // 0x2c34dc: 0xe6010af4  swc1        $f1, 0xAF4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34d8) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C34E0u;
    // 0x2c34e0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2C34E0u;
    {
        const bool branch_taken_0x2c34e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34E0u;
        // 0x2c34e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34e0) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C34E8u;
label_2c34e8:
    // 0x2c34e8: 0xc6000b2c  lwc1        $f0, 0xB2C($s0)
    ctx->pc = 0x2c34e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c34ec: 0x8e020ae4  lw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2788)));
    // 0x2c34f0: 0xe6000b38  swc1        $f0, 0xB38($s0)
    ctx->pc = 0x2c34f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2872), bits); }
    // 0x2c34f4: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2c34f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2c34f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c34f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c34fc: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x2c34fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3500: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2c3500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3504: 0xe6020aec  swc1        $f2, 0xAEC($s0)
    ctx->pc = 0x2c3504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2796), bits); }
    // 0x2c3508: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2c3508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c350c: 0xe6000af0  swc1        $f0, 0xAF0($s0)
    ctx->pc = 0x2c350cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2800), bits); }
    // 0x2c3510: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2c3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3514: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3514u;
    {
        const bool branch_taken_0x2c3514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3514u;
        // 0x2c3518: 0xe6010af4  swc1        $f1, 0xAF4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3514) {
            ctx->pc = 0x2C352Cu;
            goto label_2c352c;
        }
    }
    ctx->pc = 0x2C351Cu;
    // 0x2c351c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3520: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c3520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c3524: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2C3524u;
    {
        const bool branch_taken_0x2c3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3524u;
        // 0x2c3528: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3524) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C352Cu;
label_2c352c:
    // 0x2c352c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2c352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2c3530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3534: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c3534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3538: 0x0  nop
    ctx->pc = 0x2c3538u;
    // NOP
    // 0x2c353c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2C353Cu;
    {
        const bool branch_taken_0x2c353c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C353Cu;
        // 0x2c3540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c353c) {
            ctx->pc = 0x2C3588u;
            goto label_2c3588;
        }
    }
    ctx->pc = 0x2C3544u;
    // 0x2c3544: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3544u;
    SET_GPR_U32(ctx, 31, 0x2C354Cu);
    ctx->pc = 0x2C3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3544u;
    // 0x2c3548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3544u, 0x2C354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C354Cu;
label_2c354c:
    // 0x2c354c: 0xc781913c  lwc1        $f1, -0x6EC4($gp)
    ctx->pc = 0x2c354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3550: 0xc6000b4c  lwc1        $f0, 0xB4C($s0)
    ctx->pc = 0x2c3550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3558: 0x0  nop
    ctx->pc = 0x2c3558u;
    // NOP
    // 0x2c355c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2C355Cu;
    {
        const bool branch_taken_0x2c355c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c355c) {
            ctx->pc = 0x2C3560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C355Cu;
            // 0x2c3560: 0x8e020a90  lw          $v0, 0xA90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C357Cu;
            goto label_2c357c;
        }
    }
    ctx->pc = 0x2C3564u;
    // 0x2c3564: 0xc6000b60  lwc1        $f0, 0xB60($s0)
    ctx->pc = 0x2c3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c356c: 0x0  nop
    ctx->pc = 0x2c356cu;
    // NOP
    // 0x2c3570: 0x450200d0  bc1fl       . + 4 + (0xD0 << 2)
    ctx->pc = 0x2C3570u;
    {
        const bool branch_taken_0x2c3570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3570) {
            ctx->pc = 0x2C3574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3570u;
            // 0x2c3574: 0x8e030ad4  lw          $v1, 0xAD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3578u;
    // 0x2c3578: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
label_2c357c:
    // 0x2c357c: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c357cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c3580: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2C3580u;
    {
        const bool branch_taken_0x2c3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3580u;
        // 0x2c3584: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3580) {
            ctx->pc = 0x2C36ECu;
            goto label_2c36ec;
        }
    }
    ctx->pc = 0x2C3588u;
label_2c3588:
    // 0x2c3588: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2C3588u;
    {
        const bool branch_taken_0x2c3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3588u;
        // 0x2c358c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3588) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C3590u;
label_2c3590:
    // 0x2c3590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3594: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3594u;
    SET_GPR_U32(ctx, 31, 0x2C359Cu);
    ctx->pc = 0x2C3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3594u;
    // 0x2c3598: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3594u, 0x2C359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C359Cu;
label_2c359c:
    // 0x2c359c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c359cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35a0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C35A0u;
    SET_GPR_U32(ctx, 31, 0x2C35A8u);
    ctx->pc = 0x2C35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35A0u;
    // 0x2c35a4: 0xc60c0adc  lwc1        $f12, 0xADC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C35A0u, 0x2C35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35A8u;
label_2c35a8:
    // 0x2c35a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c35a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c35acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35b0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C35B0u;
    SET_GPR_U32(ctx, 31, 0x2C35B8u);
    ctx->pc = 0x2C35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35B0u;
    // 0x2c35b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C35B0u, 0x2C35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35B8u;
label_2c35b8:
    // 0x2c35b8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C35B8u;
    {
        const bool branch_taken_0x2c35b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35B8u;
        // 0x2c35bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35b8) {
            ctx->pc = 0x2C35CCu;
            goto label_2c35cc;
        }
    }
    ctx->pc = 0x2C35C0u;
    // 0x2c35c0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C35C0u;
    SET_GPR_U32(ctx, 31, 0x2C35C8u);
    ctx->pc = 0x2C35C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35C0u;
    // 0x2c35c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C35C0u, 0x2C35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35C8u;
label_2c35c8:
    // 0x2c35c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c35c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c35cc:
    // 0x2c35cc: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2c35ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2c35d0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c35d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c35d4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C35D4u;
    SET_GPR_U32(ctx, 31, 0x2C35DCu);
    ctx->pc = 0x2C35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35D4u;
    // 0x2c35d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C35D4u, 0x2C35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35DCu;
label_2c35dc:
    // 0x2c35dc: 0x44300b5  bgezl       $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2C35DCu;
    {
        const bool branch_taken_0x2c35dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c35dc) {
            ctx->pc = 0x2C35E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C35DCu;
            // 0x2c35e0: 0x8e030ad4  lw          $v1, 0xAD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C35E4u;
    // 0x2c35e4: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2c35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c35e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c35ec: 0xae020aa8  sw          $v0, 0xAA8($s0)
    ctx->pc = 0x2c35ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    // 0x2c35f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c35f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c35f4: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c35f8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2C35F8u;
    {
        const bool branch_taken_0x2c35f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35F8u;
        // 0x2c35fc: 0xae030a90  sw          $v1, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35f8) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C3600u;
label_2c3600:
    // 0x2c3600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3604: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3604u;
    SET_GPR_U32(ctx, 31, 0x2C360Cu);
    ctx->pc = 0x2C3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3604u;
    // 0x2c3608: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3604u, 0x2C360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C360Cu;
label_2c360c:
    // 0x2c360c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3610: 0xc085608  jal         func_215820
    ctx->pc = 0x2C3610u;
    SET_GPR_U32(ctx, 31, 0x2C3618u);
    ctx->pc = 0x2C3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3610u;
    // 0x2c3614: 0x240501d9  addiu       $a1, $zero, 0x1D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C3610u, 0x2C3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3618u;
label_2c3618:
    // 0x2c3618: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3618u;
    {
        const bool branch_taken_0x2c3618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3618) {
            ctx->pc = 0x2C361Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3618u;
            // 0x2c361c: 0xc6010adc  lwc1        $f1, 0xADC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C363Cu;
            goto label_2c363c;
        }
    }
    ctx->pc = 0x2C3620u;
    // 0x2c3620: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c3620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c3624: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c362c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c362cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3630: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3634: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C3634u;
    {
        const bool branch_taken_0x2c3634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3634u;
        // 0x2c3638: 0x240501d9  addiu       $a1, $zero, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3634) {
            ctx->pc = 0x2C36D8u;
            goto label_2c36d8;
        }
    }
    ctx->pc = 0x2C363Cu;
label_2c363c:
    // 0x2c363c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2c3640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3648: 0x0  nop
    ctx->pc = 0x2c3648u;
    // NOP
    // 0x2c364c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2C364Cu;
    {
        const bool branch_taken_0x2c364c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C364Cu;
        // 0x2c3650: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c364c) {
            ctx->pc = 0x2C3688u;
            goto label_2c3688;
        }
    }
    ctx->pc = 0x2C3654u;
    // 0x2c3654: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x2c3654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x2c3658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c365c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c365cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3660: 0x0  nop
    ctx->pc = 0x2c3660u;
    // NOP
    // 0x2c3664: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3664u;
    {
        const bool branch_taken_0x2c3664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3664) {
            ctx->pc = 0x2C3668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3664u;
            // 0x2c3668: 0xae000b4c  sw          $zero, 0xB4C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C368Cu;
            goto label_2c368c;
        }
    }
    ctx->pc = 0x2C366Cu;
    // 0x2c366c: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3670: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2c3670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2c3674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3678: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c367c: 0x0  nop
    ctx->pc = 0x2c367cu;
    // NOP
    // 0x2c3680: 0x4502008c  bc1fl       . + 4 + (0x8C << 2)
    ctx->pc = 0x2C3680u;
    {
        const bool branch_taken_0x2c3680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3680) {
            ctx->pc = 0x2C3684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3680u;
            // 0x2c3684: 0x8e030ad4  lw          $v1, 0xAD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3688u;
label_2c3688:
    // 0x2c3688: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2c368c:
    // 0x2c368c: 0xae020aa8  sw          $v0, 0xAA8($s0)
    ctx->pc = 0x2c368cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
    // 0x2c3690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3694: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3694u;
    SET_GPR_U32(ctx, 31, 0x2C369Cu);
    ctx->pc = 0x2C3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3694u;
    // 0x2c3698: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3694u, 0x2C369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C369Cu;
label_2c369c:
    // 0x2c369c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2C369Cu;
    {
        const bool branch_taken_0x2c369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C369Cu;
        // 0x2c36a0: 0x8e030ad4  lw          $v1, 0xAD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c369c) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C36A4u;
label_2c36a4:
    // 0x2c36a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36a8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C36A8u;
    SET_GPR_U32(ctx, 31, 0x2C36B0u);
    ctx->pc = 0x2C36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36A8u;
    // 0x2c36ac: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C36A8u, 0x2C36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36B0u;
label_2c36b0:
    // 0x2c36b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c36b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36b4: 0xc085608  jal         func_215820
    ctx->pc = 0x2C36B4u;
    SET_GPR_U32(ctx, 31, 0x2C36BCu);
    ctx->pc = 0x2C36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36B4u;
    // 0x2c36b8: 0x240501c1  addiu       $a1, $zero, 0x1C1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C36B4u, 0x2C36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36BCu;
label_2c36bc:
    // 0x2c36bc: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2C36BCu;
    {
        const bool branch_taken_0x2c36bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c36bc) {
            ctx->pc = 0x2C36C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36BCu;
            // 0x2c36c0: 0xc6010adc  lwc1        $f1, 0xADC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C363Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c363c;
        }
    }
    ctx->pc = 0x2C36C4u;
    // 0x2c36c4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c36c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c36c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c36c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c36cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c36ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36d0: 0xc78d9140  lwc1        $f13, -0x6EC0($gp)
    ctx->pc = 0x2c36d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c36d4: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x2c36d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
label_2c36d8:
    // 0x2c36d8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C36D8u;
    SET_GPR_U32(ctx, 31, 0x2C36E0u);
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C36D8u, 0x2C36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36E0u;
label_2c36e0:
    // 0x2c36e0: 0x8e020a90  lw          $v0, 0xA90($s0)
    ctx->pc = 0x2c36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c36e4: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c36e8: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c36e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_2c36ec:
    // 0x2c36ec: 0x8e030ad4  lw          $v1, 0xAD4($s0)
    ctx->pc = 0x2c36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2c36f0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2C36F0u;
    {
        const bool branch_taken_0x2c36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F0u;
        // 0x2c36f4: 0xae020a90  sw          $v0, 0xA90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36f0) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C36F8u;
label_2c36f8:
    // 0x2c36f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c36f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36fc: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C36FCu;
    SET_GPR_U32(ctx, 31, 0x2C3704u);
    ctx->pc = 0x2C3700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36FCu;
    // 0x2c3700: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C36FCu, 0x2C3704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3704u;
label_2c3704:
    // 0x2c3704: 0x8e030a90  lw          $v1, 0xA90($s0)
    ctx->pc = 0x2c3704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2704)));
    // 0x2c3708: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c3708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c370c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C370Cu;
    {
        const bool branch_taken_0x2c370c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C370Cu;
        // 0x2c3710: 0x34620006  ori         $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c370c) {
            ctx->pc = 0x2C3718u;
            goto label_2c3718;
        }
    }
    ctx->pc = 0x2C3714u;
    // 0x2c3714: 0xae020a90  sw          $v0, 0xA90($s0)
    ctx->pc = 0x2c3714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2704), GPR_U32(ctx, 2));
label_2c3718:
    // 0x2c3718: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c3718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c371c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2c371cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x2c3720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3728: 0x0  nop
    ctx->pc = 0x2c3728u;
    // NOP
    // 0x2c372c: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x2C372Cu;
    {
        const bool branch_taken_0x2c372c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C372Cu;
        // 0x2c3730: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c372c) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C3734u;
    // 0x2c3734: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2c3738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c373c: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c373cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c3740: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c3744: 0xae040aa8  sw          $a0, 0xAA8($s0)
    ctx->pc = 0x2c3744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 4));
    // 0x2c3748: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2C3748u;
    {
        const bool branch_taken_0x2c3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3748u;
        // 0x2c374c: 0xae020a94  sw          $v0, 0xA94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3748) {
            ctx->pc = 0x2C38B0u;
            goto label_2c38b0;
        }
    }
    ctx->pc = 0x2C3750u;
label_2c3750:
    // 0x2c3750: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2c3750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2c3754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3758: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c3758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c375c: 0x0  nop
    ctx->pc = 0x2c375cu;
    // NOP
    // 0x2c3760: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3760u;
    {
        const bool branch_taken_0x2c3760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3760u;
        // 0x2c3764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3760) {
            ctx->pc = 0x2C3770u;
            goto label_2c3770;
        }
    }
    ctx->pc = 0x2C3768u;
    // 0x2c3768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3768u;
    {
        const bool branch_taken_0x2c3768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3768u;
        // 0x2c376c: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3768) {
            ctx->pc = 0x2C377Cu;
            goto label_2c377c;
        }
    }
    ctx->pc = 0x2C3770u;
label_2c3770:
    // 0x2c3770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3774: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C3774u;
    SET_GPR_U32(ctx, 31, 0x2C377Cu);
    ctx->pc = 0x2C3778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3774u;
    // 0x2c3778: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C3774u, 0x2C377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C377Cu;
label_2c377c:
    // 0x2c377c: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3780: 0xc7809144  lwc1        $f0, -0x6EBC($gp)
    ctx->pc = 0x2c3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3784: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3788: 0x0  nop
    ctx->pc = 0x2c3788u;
    // NOP
    // 0x2c378c: 0x45020049  bc1fl       . + 4 + (0x49 << 2)
    ctx->pc = 0x2C378Cu;
    {
        const bool branch_taken_0x2c378c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c378c) {
            ctx->pc = 0x2C3790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C378Cu;
            // 0x2c3790: 0x8e030ad4  lw          $v1, 0xAD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3794u;
    // 0x2c3794: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C3794u;
    SET_GPR_U32(ctx, 31, 0x2C379Cu);
    ctx->pc = 0x2C3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3794u;
    // 0x2c3798: 0xae000b4c  sw          $zero, 0xB4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C3794u, 0x2C379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C379Cu;
label_2c379c:
    // 0x2c379c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C379Cu;
    {
        const bool branch_taken_0x2c379c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C379Cu;
        // 0x2c37a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c379c) {
            ctx->pc = 0x2C37B0u;
            goto label_2c37b0;
        }
    }
    ctx->pc = 0x2C37A4u;
    // 0x2c37a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c37a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c37a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C37A8u;
    {
        const bool branch_taken_0x2c37a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A8u;
        // 0x2c37ac: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37a8) {
            ctx->pc = 0x2C37C4u;
            goto label_2c37c4;
        }
    }
    ctx->pc = 0x2C37B0u;
label_2c37b0:
    // 0x2c37b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c37b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c37b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c37b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c37b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c37b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c37bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c37bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c37c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c37c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c37c4:
    // 0x2c37c4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c37c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c37c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c37c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c37cc: 0xc7819148  lwc1        $f1, -0x6EB8($gp)
    ctx->pc = 0x2c37ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c37d0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c37d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c37d4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2c37d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c37d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C37D8u;
    {
        const bool branch_taken_0x2c37d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c37d8) {
            ctx->pc = 0x2C37F8u;
            goto label_2c37f8;
        }
    }
    ctx->pc = 0x2C37E0u;
    // 0x2c37e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2c37e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2c37e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c37e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c37e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c37e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c37ec: 0x0  nop
    ctx->pc = 0x2c37ecu;
    // NOP
    // 0x2c37f0: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x2C37F0u;
    {
        const bool branch_taken_0x2c37f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F0u;
        // 0x2c37f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37f0) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C37F8u;
label_2c37f8:
    // 0x2c37f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c37f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c37fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c37fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3800: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c3800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3804: 0x0  nop
    ctx->pc = 0x2c3804u;
    // NOP
    // 0x2c3808: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x2C3808u;
    {
        const bool branch_taken_0x2c3808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3808u;
        // 0x2c380c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3808) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C3810u;
    // 0x2c3810: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3810u;
    {
        const bool branch_taken_0x2c3810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3810u;
        // 0x2c3814: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3810) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C3818u;
label_2c3818:
    // 0x2c3818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c381c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C381Cu;
    SET_GPR_U32(ctx, 31, 0x2C3824u);
    ctx->pc = 0x2C3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C381Cu;
    // 0x2c3820: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C381Cu, 0x2C3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3824u;
label_2c3824:
    // 0x2c3824: 0x8e030a94  lw          $v1, 0xA94($s0)
    ctx->pc = 0x2c3824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x2c3828: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2c3828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2c382c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C382Cu;
    {
        const bool branch_taken_0x2c382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C382Cu;
        // 0x2c3830: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c382c) {
            ctx->pc = 0x2C383Cu;
            goto label_2c383c;
        }
    }
    ctx->pc = 0x2C3834u;
    // 0x2c3834: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c3834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3838: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x2c3838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
label_2c383c:
    // 0x2c383c: 0xc6010b4c  lwc1        $f1, 0xB4C($s0)
    ctx->pc = 0x2c383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3840: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c3840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c3844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3848: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c384c: 0x0  nop
    ctx->pc = 0x2c384cu;
    // NOP
    // 0x2c3850: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3850u;
    {
        const bool branch_taken_0x2c3850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3850u;
        // 0x2c3854: 0x8e030ad4  lw          $v1, 0xAD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3850) {
            ctx->pc = 0x2C3878u;
            goto label_2c3878;
        }
    }
    ctx->pc = 0x2C3858u;
    // 0x2c3858: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3858u;
    {
        const bool branch_taken_0x2c3858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3858u;
        // 0x2c385c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3858) {
            ctx->pc = 0x2C3880u;
            goto label_2c3880;
        }
    }
    ctx->pc = 0x2C3860u;
    // 0x2c3860: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c3864: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c3868: 0xae020a9c  sw          $v0, 0xA9C($s0)
    ctx->pc = 0x2c3868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 2));
    // 0x2c386c: 0xae030aa0  sw          $v1, 0xAA0($s0)
    ctx->pc = 0x2c386cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 3));
    // 0x2c3870: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C3870u;
    {
        const bool branch_taken_0x2c3870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3870u;
        // 0x2c3874: 0xae000aa8  sw          $zero, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3870) {
            ctx->pc = 0x2C38D0u;
            goto label_2c38d0;
        }
    }
    ctx->pc = 0x2C3878u;
label_2c3878:
    // 0x2c3878: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3878u;
    {
        const bool branch_taken_0x2c3878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3878u;
        // 0x2c387c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3878) {
            ctx->pc = 0x2C38BCu;
            goto label_2c38bc;
        }
    }
    ctx->pc = 0x2C3880u;
label_2c3880:
    // 0x2c3880: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C3880u;
    {
        const bool branch_taken_0x2c3880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3880u;
        // 0x2c3884: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3880) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3888u;
label_2c3888:
    // 0x2c3888: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2c3888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2c388c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c388cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3890: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c3890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3894: 0x0  nop
    ctx->pc = 0x2c3894u;
    // NOP
    // 0x2c3898: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3898u;
    {
        const bool branch_taken_0x2c3898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3898u;
        // 0x2c389c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3898) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C38A0u;
    // 0x2c38a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c38a4:
    // 0x2c38a4: 0x8e030ad4  lw          $v1, 0xAD4($s0)
    ctx->pc = 0x2c38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
    // 0x2c38a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C38A8u;
    {
        const bool branch_taken_0x2c38a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38A8u;
        // 0x2c38ac: 0xae020aa8  sw          $v0, 0xAA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38a8) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C38B0u;
label_2c38b0:
    // 0x2c38b0: 0x8e030ad4  lw          $v1, 0xAD4($s0)
    ctx->pc = 0x2c38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2772)));
label_2c38b4:
    // 0x2c38b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C38B4u;
    {
        const bool branch_taken_0x2c38b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38B4u;
        // 0x2c38b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38b4) {
            ctx->pc = 0x2C38D8u;
            goto label_2c38d8;
        }
    }
    ctx->pc = 0x2C38BCu;
label_2c38bc:
    // 0x2c38bc: 0x8e020aa8  lw          $v0, 0xAA8($s0)
    ctx->pc = 0x2c38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2728)));
    // 0x2c38c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c38c4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C38C4u;
    {
        const bool branch_taken_0x2c38c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38C4u;
        // 0x2c38c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38c4) {
            ctx->pc = 0x2C38D8u;
            goto label_2c38d8;
        }
    }
    ctx->pc = 0x2C38CCu;
    // 0x2c38cc: 0xae030aa8  sw          $v1, 0xAA8($s0)
    ctx->pc = 0x2c38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 3));
label_2c38d0:
    // 0x2c38d0: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
    // 0x2c38d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c38d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c38d8:
    // 0x2c38d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c38d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c38dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c38dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c38e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c38e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38e4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c38e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c38e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38E8u;
        // 0x2c38ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C38F0u;
}
