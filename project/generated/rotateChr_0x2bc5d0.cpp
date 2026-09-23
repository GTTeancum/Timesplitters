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

// Function: rotateChr
// Address: 0x2bc5d0 - 0x2bd004
void rotateChr_0x2bc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rotateChr_0x2bc5d0");
#endif

    switch (ctx->pc) {
        case 0x2bc618u: goto label_2bc618;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc6a4u: goto label_2bc6a4;
        case 0x2bc6b4u: goto label_2bc6b4;
        case 0x2bc6c0u: goto label_2bc6c0;
        case 0x2bc6d0u: goto label_2bc6d0;
        case 0x2bc6e0u: goto label_2bc6e0;
        case 0x2bc6e8u: goto label_2bc6e8;
        case 0x2bc714u: goto label_2bc714;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc764u: goto label_2bc764;
        case 0x2bc774u: goto label_2bc774;
        case 0x2bc780u: goto label_2bc780;
        case 0x2bc790u: goto label_2bc790;
        case 0x2bc7a0u: goto label_2bc7a0;
        case 0x2bc7a8u: goto label_2bc7a8;
        case 0x2bc7d0u: goto label_2bc7d0;
        case 0x2bc84cu: goto label_2bc84c;
        case 0x2bc8c8u: goto label_2bc8c8;
        case 0x2bc934u: goto label_2bc934;
        case 0x2bc964u: goto label_2bc964;
        case 0x2bc988u: goto label_2bc988;
        case 0x2bc998u: goto label_2bc998;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9bcu: goto label_2bc9bc;
        case 0x2bc9d4u: goto label_2bc9d4;
        case 0x2bc9e4u: goto label_2bc9e4;
        case 0x2bc9f8u: goto label_2bc9f8;
        case 0x2bca10u: goto label_2bca10;
        case 0x2bca1cu: goto label_2bca1c;
        case 0x2bcaccu: goto label_2bcacc;
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcae8u: goto label_2bcae8;
        case 0x2bcaf8u: goto label_2bcaf8;
        case 0x2bcb0cu: goto label_2bcb0c;
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbc0u: goto label_2bcbc0;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbe4u: goto label_2bcbe4;
        case 0x2bce58u: goto label_2bce58;
        case 0x2bcec4u: goto label_2bcec4;
        case 0x2bced0u: goto label_2bced0;
        case 0x2bcf04u: goto label_2bcf04;
        case 0x2bcf10u: goto label_2bcf10;
        case 0x2bcf20u: goto label_2bcf20;
        case 0x2bcf30u: goto label_2bcf30;
        case 0x2bcf54u: goto label_2bcf54;
        case 0x2bcf60u: goto label_2bcf60;
        case 0x2bcfb4u: goto label_2bcfb4;
        case 0x2bcfc8u: goto label_2bcfc8;
        default: break;
    }

    ctx->pc = 0x2bc5d0u;

    // 0x2bc5d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bc5d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bc5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc5d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2bc5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bc5dc: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2bc5dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bc5e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bc5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc5e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bc5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bc5e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bc5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bc5ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bc5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bc5f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bc5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bc5f4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2bc5f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bc5f8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2bc5f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc5fc: 0xc7969028  lwc1        $f22, -0x6FD8($gp)
    ctx->pc = 0x2bc5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bc600: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x2bc600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc604: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bc604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc608: 0x0  nop
    ctx->pc = 0x2bc608u;
    // NOP
    // 0x2bc60c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2BC60Cu;
    {
        const bool branch_taken_0x2bc60c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC60Cu;
        // 0x2bc610: 0x8e720160  lw          $s2, 0x160($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc60c) {
            ctx->pc = 0x2BC644u;
            goto label_2bc644;
        }
    }
    ctx->pc = 0x2BC614u;
    // 0x2bc614: 0x8e430a94  lw          $v1, 0xA94($s2)
    ctx->pc = 0x2bc614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
label_2bc618:
    // 0x2bc618: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bc618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bc61c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bc620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc624: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bc624u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc628: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x2bc628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x2bc62c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bc62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc630: 0x0  nop
    ctx->pc = 0x2bc630u;
    // NOP
    // 0x2bc634: 0x4501fff8  bc1t        . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BC634u;
    {
        const bool branch_taken_0x2bc634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc634) {
            ctx->pc = 0x2BC618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc618;
        }
    }
    ctx->pc = 0x2BC63Cu;
    // 0x2bc63c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC63Cu;
    {
        const bool branch_taken_0x2bc63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC63Cu;
        // 0x2bc640: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc63c) {
            ctx->pc = 0x2BC64Cu;
            goto label_2bc64c;
        }
    }
    ctx->pc = 0x2BC644u;
label_2bc644:
    // 0x2bc644: 0x8e430a94  lw          $v1, 0xA94($s2)
    ctx->pc = 0x2bc644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bc648: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2bc648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2bc64c:
    // 0x2bc64c: 0x14400264  bnez        $v0, . + 4 + (0x264 << 2)
    ctx->pc = 0x2BC64Cu;
    {
        const bool branch_taken_0x2bc64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC64Cu;
        // 0x2bc650: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc64c) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BC654u;
    // 0x2bc654: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2bc654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2bc658: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BC658u;
    {
        const bool branch_taken_0x2bc658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc658) {
            ctx->pc = 0x2BC720u;
            goto label_2bc720;
        }
    }
    ctx->pc = 0x2BC660u;
    // 0x2bc660: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x2bc660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc664: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2bc664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2bc668: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x2bc668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc66c: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2bc66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc670: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2bc670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc674: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x2bc674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bc678: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x2bc678u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bc67c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bc67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bc680: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC680u;
    {
        const bool branch_taken_0x2bc680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC680u;
        // 0x2bc684: 0x46011d01  sub.s       $f20, $f3, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc680) {
            ctx->pc = 0x2BC69Cu;
            goto label_2bc69c;
        }
    }
    ctx->pc = 0x2BC688u;
    // 0x2bc688: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC688u;
    SET_GPR_U32(ctx, 31, 0x2BC690u);
    ctx->pc = 0x2BC68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC688u;
    // 0x2bc68c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC688u, 0x2BC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC690u;
label_2bc690:
    // 0x2bc690: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x2bc690u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x2bc694: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC694u;
    {
        const bool branch_taken_0x2bc694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC694u;
        // 0x2bc698: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc694) {
            ctx->pc = 0x2BC6ACu;
            goto label_2bc6ac;
        }
    }
    ctx->pc = 0x2BC69Cu;
label_2bc69c:
    // 0x2bc69c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC69Cu;
    SET_GPR_U32(ctx, 31, 0x2BC6A4u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC69Cu, 0x2BC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6A4u;
label_2bc6a4:
    // 0x2bc6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc6a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bc6ac:
    // 0x2bc6ac: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC6ACu;
    SET_GPR_U32(ctx, 31, 0x2BC6B4u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC6ACu, 0x2BC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6B4u;
label_2bc6b4:
    // 0x2bc6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6b8: 0xc0b5d44  jal         func_2D7510
    ctx->pc = 0x2BC6B8u;
    SET_GPR_U32(ctx, 31, 0x2BC6C0u);
    ctx->pc = 0x2BC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC6B8u;
    // 0x2bc6bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x2BC6B8u, 0x2BC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6C0u;
label_2bc6c0:
    // 0x2bc6c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bc6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bc6c4: 0xdc259cc0  ld          $a1, -0x6340($at)
    ctx->pc = 0x2bc6c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CC0u));
    // 0x2bc6c8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BC6C8u;
    SET_GPR_U32(ctx, 31, 0x2BC6D0u);
    ctx->pc = 0x2BC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC6C8u;
    // 0x2bc6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BC6C8u, 0x2BC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6D0u;
label_2bc6d0:
    // 0x2bc6d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bc6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bc6d4: 0xdc259cc8  ld          $a1, -0x6338($at)
    ctx->pc = 0x2bc6d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CC8u));
    // 0x2bc6d8: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BC6D8u;
    SET_GPR_U32(ctx, 31, 0x2BC6E0u);
    ctx->pc = 0x2BC6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC6D8u;
    // 0x2bc6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BC6D8u, 0x2BC6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6E0u;
label_2bc6e0:
    // 0x2bc6e0: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BC6E0u;
    SET_GPR_U32(ctx, 31, 0x2BC6E8u);
    ctx->pc = 0x2BC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC6E0u;
    // 0x2bc6e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BC6E0u, 0x2BC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6E8u;
label_2bc6e8:
    // 0x2bc6e8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2bc6e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc6ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc6f0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2bc6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc6f4: 0x0  nop
    ctx->pc = 0x2bc6f4u;
    // NOP
    // 0x2bc6f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC6F8u;
    {
        const bool branch_taken_0x2bc6f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6F8u;
        // 0x2bc6fc: 0xc66c0050  lwc1        $f12, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc6f8) {
            ctx->pc = 0x2BC70Cu;
            goto label_2bc70c;
        }
    }
    ctx->pc = 0x2BC700u;
    // 0x2bc700: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bc700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bc704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc708: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2bc708u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2bc70c:
    // 0x2bc70c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BC70Cu;
    SET_GPR_U32(ctx, 31, 0x2BC714u);
    ctx->pc = 0x2BC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC70Cu;
    // 0x2bc710: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BC70Cu, 0x2BC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC714u;
label_2bc714:
    // 0x2bc714: 0xe6400adc  swc1        $f0, 0xADC($s2)
    ctx->pc = 0x2bc714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2780), bits); }
    // 0x2bc718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC718u;
    {
        const bool branch_taken_0x2bc718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC718u;
        // 0x2bc71c: 0x8e430a94  lw          $v1, 0xA94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc718) {
            ctx->pc = 0x2BC728u;
            goto label_2bc728;
        }
    }
    ctx->pc = 0x2BC720u;
label_2bc720:
    // 0x2bc720: 0xc780902c  lwc1        $f0, -0x6FD4($gp)
    ctx->pc = 0x2bc720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc724: 0xe6400adc  swc1        $f0, 0xADC($s2)
    ctx->pc = 0x2bc724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2780), bits); }
label_2bc728:
    // 0x2bc728: 0xc6430aec  lwc1        $f3, 0xAEC($s2)
    ctx->pc = 0x2bc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc72c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2bc72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2bc730: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2bc730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc734: 0xc6420af4  lwc1        $f2, 0xAF4($s2)
    ctx->pc = 0x2bc734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc738: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x2bc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc73c: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x2bc73cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2bc740: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC740u;
    {
        const bool branch_taken_0x2bc740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC740u;
        // 0x2bc744: 0x46001501  sub.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc740) {
            ctx->pc = 0x2BC75Cu;
            goto label_2bc75c;
        }
    }
    ctx->pc = 0x2BC748u;
    // 0x2bc748: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC748u;
    SET_GPR_U32(ctx, 31, 0x2BC750u);
    ctx->pc = 0x2BC74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC748u;
    // 0x2bc74c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC748u, 0x2BC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC750u;
label_2bc750:
    // 0x2bc750: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x2bc750u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x2bc754: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC754u;
    {
        const bool branch_taken_0x2bc754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC754u;
        // 0x2bc758: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc754) {
            ctx->pc = 0x2BC76Cu;
            goto label_2bc76c;
        }
    }
    ctx->pc = 0x2BC75Cu;
label_2bc75c:
    // 0x2bc75c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC75Cu;
    SET_GPR_U32(ctx, 31, 0x2BC764u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC75Cu, 0x2BC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC764u;
label_2bc764:
    // 0x2bc764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bc76c:
    // 0x2bc76c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC76Cu;
    SET_GPR_U32(ctx, 31, 0x2BC774u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC76Cu, 0x2BC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC774u;
label_2bc774:
    // 0x2bc774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc778: 0xc0b5d44  jal         func_2D7510
    ctx->pc = 0x2BC778u;
    SET_GPR_U32(ctx, 31, 0x2BC780u);
    ctx->pc = 0x2BC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC778u;
    // 0x2bc77c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7510u, 0x2BC778u, 0x2BC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC780u;
label_2bc780:
    // 0x2bc780: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bc784: 0xdc259cd0  ld          $a1, -0x6330($at)
    ctx->pc = 0x2bc784u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CD0u));
    // 0x2bc788: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2BC788u;
    SET_GPR_U32(ctx, 31, 0x2BC790u);
    ctx->pc = 0x2BC78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC788u;
    // 0x2bc78c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2BC788u, 0x2BC790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC790u;
label_2bc790:
    // 0x2bc790: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2bc790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2bc794: 0xdc259cd8  ld          $a1, -0x6328($at)
    ctx->pc = 0x2bc794u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9CD8u));
    // 0x2bc798: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2BC798u;
    SET_GPR_U32(ctx, 31, 0x2BC7A0u);
    ctx->pc = 0x2BC79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC798u;
    // 0x2bc79c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2BC798u, 0x2BC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7A0u;
label_2bc7a0:
    // 0x2bc7a0: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2BC7A0u;
    SET_GPR_U32(ctx, 31, 0x2BC7A8u);
    ctx->pc = 0x2BC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7A0u;
    // 0x2bc7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2BC7A0u, 0x2BC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7A8u;
label_2bc7a8:
    // 0x2bc7a8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2bc7a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc7ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc7b0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2bc7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc7b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC7B4u;
    {
        const bool branch_taken_0x2bc7b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc7b4) {
            ctx->pc = 0x2BC7C8u;
            goto label_2bc7c8;
        }
    }
    ctx->pc = 0x2BC7BCu;
    // 0x2bc7bc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bc7c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc7c4: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x2bc7c4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_2bc7c8:
    // 0x2bc7c8: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BC7C8u;
    SET_GPR_U32(ctx, 31, 0x2BC7D0u);
    ctx->pc = 0x2BC7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7C8u;
    // 0x2bc7cc: 0xc66c004c  lwc1        $f12, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BC7C8u, 0x2BC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7D0u;
label_2bc7d0:
    // 0x2bc7d0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2bc7d4: 0xe6400ae0  swc1        $f0, 0xAE0($s2)
    ctx->pc = 0x2bc7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2784), bits); }
    // 0x2bc7d8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2bc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2bc7dc: 0x2462fdca  addiu       $v0, $v1, -0x236
    ctx->pc = 0x2bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966730));
    // 0x2bc7e0: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x2bc7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x2bc7e4: 0x144001fe  bnez        $v0, . + 4 + (0x1FE << 2)
    ctx->pc = 0x2BC7E4u;
    {
        const bool branch_taken_0x2bc7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7E4u;
        // 0x2bc7e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7e4) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BC7ECu;
    // 0x2bc7ec: 0x240201d8  addiu       $v0, $zero, 0x1D8
    ctx->pc = 0x2bc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x2bc7f0: 0x106201fb  beq         $v1, $v0, . + 4 + (0x1FB << 2)
    ctx->pc = 0x2BC7F0u;
    {
        const bool branch_taken_0x2bc7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7F0u;
        // 0x2bc7f4: 0x240201d7  addiu       $v0, $zero, 0x1D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7f0) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BC7F8u;
    // 0x2bc7f8: 0x106201f9  beq         $v1, $v0, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x2BC7F8u;
    {
        const bool branch_taken_0x2bc7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7F8u;
        // 0x2bc7fc: 0x240201fe  addiu       $v0, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7f8) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BC800u;
    // 0x2bc800: 0x106201f7  beq         $v1, $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2BC800u;
    {
        const bool branch_taken_0x2bc800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC800u;
        // 0x2bc804: 0x240201fd  addiu       $v0, $zero, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc800) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BC808u;
    // 0x2bc808: 0x106201f5  beq         $v1, $v0, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x2BC808u;
    {
        const bool branch_taken_0x2bc808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC808u;
        // 0x2bc80c: 0x2462fdf4  addiu       $v0, $v1, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc808) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BC810u;
    // 0x2bc810: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2bc810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2bc814: 0x544001f3  bnel        $v0, $zero, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2BC814u;
    {
        const bool branch_taken_0x2bc814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc814) {
            ctx->pc = 0x2BC818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC814u;
            // 0x2bc818: 0xdfb30040  ld          $s3, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFE4u;
            goto label_2bcfe4;
        }
    }
    ctx->pc = 0x2BC81Cu;
    // 0x2bc81c: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2bc81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bc820: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2bc820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2bc824: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BC824u;
    {
        const bool branch_taken_0x2bc824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC824u;
        // 0x2bc828: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc824) {
            ctx->pc = 0x2BC870u;
            goto label_2bc870;
        }
    }
    ctx->pc = 0x2BC82Cu;
    // 0x2bc82c: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2bc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2bc830: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x2bc830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2bc834: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2bc834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bc838: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2bc838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bc83c: 0xc66c0050  lwc1        $f12, 0x50($s3)
    ctx->pc = 0x2bc83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc844: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BC844u;
    SET_GPR_U32(ctx, 31, 0x2BC84Cu);
    ctx->pc = 0x2BC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC844u;
    // 0x2bc848: 0xc44d0018  lwc1        $f13, 0x18($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BC844u, 0x2BC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC84Cu;
label_2bc84c:
    // 0x2bc84c: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2bc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2bc850: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x2bc850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bc854: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2bc854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bc858: 0xe6400ae0  swc1        $f0, 0xAE0($s2)
    ctx->pc = 0x2bc858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2784), bits); }
    // 0x2bc85c: 0xe6400adc  swc1        $f0, 0xADC($s2)
    ctx->pc = 0x2bc85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2780), bits); }
    // 0x2bc860: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2bc860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bc864: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2bc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2bc868: 0xc4560018  lwc1        $f22, 0x18($v0)
    ctx->pc = 0x2bc868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bc86c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bc870:
    // 0x2bc870: 0x5462003a  bnel        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2BC870u;
    {
        const bool branch_taken_0x2bc870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc870) {
            ctx->pc = 0x2BC874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC870u;
            // 0x2bc874: 0xc66c004c  lwc1        $f12, 0x4C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC95Cu;
            goto label_2bc95c;
        }
    }
    ctx->pc = 0x2BC878u;
    // 0x2bc878: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x2bc878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bc87c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2bc87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2bc880: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2BC880u;
    {
        const bool branch_taken_0x2bc880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC880u;
        // 0x2bc884: 0x8f88b4f0  lw          $t0, -0x4B10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc880) {
            ctx->pc = 0x2BC958u;
            goto label_2bc958;
        }
    }
    ctx->pc = 0x2BC888u;
    // 0x2bc888: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2bc888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc88c: 0x1900001a  blez        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BC88Cu;
    {
        const bool branch_taken_0x2bc88c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2BC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC88Cu;
        // 0x2bc890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc88c) {
            ctx->pc = 0x2BC8F8u;
            goto label_2bc8f8;
        }
    }
    ctx->pc = 0x2BC894u;
    // 0x2bc894: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x2bc894u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x2bc898: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x2bc898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2bc89c: 0x252223e8  addiu       $v0, $t1, 0x23E8
    ctx->pc = 0x2bc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 9192));
    // 0x2bc8a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bc8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3823ECu));
    // 0x2bc8a4: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2bc8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2bc8a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2bc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bc8ac: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC8ACu;
    {
        const bool branch_taken_0x2bc8ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8ACu;
        // 0x2bc8b0: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8ac) {
            ctx->pc = 0x2BC8C0u;
            goto label_2bc8c0;
        }
    }
    ctx->pc = 0x2BC8B4u;
    // 0x2bc8b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bc8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC8B8u;
    {
        const bool branch_taken_0x2bc8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B8u;
        // 0x2bc8bc: 0x8f87a2ec  lw          $a3, -0x5D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8b8) {
            ctx->pc = 0x2BC900u;
            goto label_2bc900;
        }
    }
    ctx->pc = 0x2BC8C0u;
label_2bc8c0:
    // 0x2bc8c0: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x2bc8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bc8c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bc8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2bc8c8:
    // 0x2bc8c8: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x2bc8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2bc8cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC8CCu;
    {
        const bool branch_taken_0x2bc8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8CCu;
        // 0x2bc8d0: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8cc) {
            ctx->pc = 0x2BC900u;
            goto label_2bc900;
        }
    }
    ctx->pc = 0x2BC8D4u;
    // 0x2bc8d4: 0x254223e8  addiu       $v0, $t2, 0x23E8
    ctx->pc = 0x2bc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 9192));
    // 0x2bc8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc8dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bc8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc8e0: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2bc8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2bc8e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bc8e8: 0x54c2fff7  bnel        $a2, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BC8E8u;
    {
        const bool branch_taken_0x2bc8e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc8e8) {
            ctx->pc = 0x2BC8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8E8u;
            // 0x2bc8ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc8c8;
        }
    }
    ctx->pc = 0x2BC8F0u;
    // 0x2bc8f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC8F0u;
    {
        const bool branch_taken_0x2bc8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F0u;
        // 0x2bc8f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8f0) {
            ctx->pc = 0x2BC900u;
            goto label_2bc900;
        }
    }
    ctx->pc = 0x2BC8F8u;
label_2bc8f8:
    // 0x2bc8f8: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x2bc8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bc8fc: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x2bc8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_2bc900:
    // 0x2bc900: 0x252223e8  addiu       $v0, $t1, 0x23E8
    ctx->pc = 0x2bc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 9192));
    // 0x2bc904: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2bc904u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2bc908: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bc908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bc90c: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x2bc90cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2bc910: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2bc910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bc914: 0xc66c0050  lwc1        $f12, 0x50($s3)
    ctx->pc = 0x2bc914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc918: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bc918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc91c: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2bc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2bc920: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2bc920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2bc924: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x2bc924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bc928: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2bc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bc92c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BC92Cu;
    SET_GPR_U32(ctx, 31, 0x2BC934u);
    ctx->pc = 0x2BC930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC92Cu;
    // 0x2bc930: 0xc44d0018  lwc1        $f13, 0x18($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BC92Cu, 0x2BC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC934u;
label_2bc934:
    // 0x2bc934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bc934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc938: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2bc938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bc93c: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x2bc93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2bc940: 0xe6400ae0  swc1        $f0, 0xAE0($s2)
    ctx->pc = 0x2bc940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2784), bits); }
    // 0x2bc944: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2bc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2bc948: 0xe6400adc  swc1        $f0, 0xADC($s2)
    ctx->pc = 0x2bc948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2780), bits); }
    // 0x2bc94c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2bc94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bc950: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bc950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bc954: 0xc4560018  lwc1        $f22, 0x18($v0)
    ctx->pc = 0x2bc954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2bc958:
    // 0x2bc958: 0xc66c004c  lwc1        $f12, 0x4C($s3)
    ctx->pc = 0x2bc958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bc95c:
    // 0x2bc95c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BC95Cu;
    SET_GPR_U32(ctx, 31, 0x2BC964u);
    ctx->pc = 0x2BC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC95Cu;
    // 0x2bc960: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BC95Cu, 0x2BC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC964u;
label_2bc964:
    // 0x2bc964: 0x8e430a94  lw          $v1, 0xA94($s2)
    ctx->pc = 0x2bc964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
    // 0x2bc968: 0x30620583  andi        $v0, $v1, 0x583
    ctx->pc = 0x2bc968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1411);
    // 0x2bc96c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BC96Cu;
    {
        const bool branch_taken_0x2bc96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC96Cu;
        // 0x2bc970: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc96c) {
            ctx->pc = 0x2BC9C4u;
            goto label_2bc9c4;
        }
    }
    ctx->pc = 0x2BC974u;
    // 0x2bc974: 0x30620208  andi        $v0, $v1, 0x208
    ctx->pc = 0x2bc974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)520);
    // 0x2bc978: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2BC978u;
    {
        const bool branch_taken_0x2bc978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC978u;
        // 0x2bc97c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc978) {
            ctx->pc = 0x2BCA90u;
            goto label_2bca90;
        }
    }
    ctx->pc = 0x2BC980u;
    // 0x2bc980: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC980u;
    SET_GPR_U32(ctx, 31, 0x2BC988u);
    ctx->pc = 0x2BC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC980u;
    // 0x2bc984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC980u, 0x2BC988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC988u;
label_2bc988:
    // 0x2bc988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc98c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc990: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BC990u;
    SET_GPR_U32(ctx, 31, 0x2BC998u);
    ctx->pc = 0x2BC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC990u;
    // 0x2bc994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BC990u, 0x2BC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC998u;
label_2bc998:
    // 0x2bc998: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC998u;
    {
        const bool branch_taken_0x2bc998 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC998u;
        // 0x2bc99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc998) {
            ctx->pc = 0x2BC9ACu;
            goto label_2bc9ac;
        }
    }
    ctx->pc = 0x2BC9A0u;
    // 0x2bc9a0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BC9A0u;
    SET_GPR_U32(ctx, 31, 0x2BC9A8u);
    ctx->pc = 0x2BC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9A0u;
    // 0x2bc9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BC9A0u, 0x2BC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9A8u;
label_2bc9a8:
    // 0x2bc9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc9ac:
    // 0x2bc9ac: 0x3405808e  ori         $a1, $zero, 0x808E
    ctx->pc = 0x2bc9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32910);
    // 0x2bc9b0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2bc9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2bc9b4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BC9B4u;
    SET_GPR_U32(ctx, 31, 0x2BC9BCu);
    ctx->pc = 0x2BC9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9B4u;
    // 0x2bc9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BC9B4u, 0x2BC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9BCu;
label_2bc9bc:
    // 0x2bc9bc: 0x4420035  bltzl       $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2BC9BCu;
    {
        const bool branch_taken_0x2bc9bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2bc9bc) {
            ctx->pc = 0x2BC9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC9BCu;
            // 0x2bc9c0: 0x8e420ae4  lw          $v0, 0xAE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCA94u;
            goto label_2bca94;
        }
    }
    ctx->pc = 0x2BC9C4u;
label_2bc9c4:
    // 0x2bc9c4: 0xc6550ae0  lwc1        $f21, 0xAE0($s2)
    ctx->pc = 0x2bc9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bc9c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bc9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9cc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BC9CCu;
    SET_GPR_U32(ctx, 31, 0x2BC9D4u);
    ctx->pc = 0x2BC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9CCu;
    // 0x2bc9d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BC9CCu, 0x2BC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9D4u;
label_2bc9d4:
    // 0x2bc9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9dc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BC9DCu;
    SET_GPR_U32(ctx, 31, 0x2BC9E4u);
    ctx->pc = 0x2BC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9DCu;
    // 0x2bc9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BC9DCu, 0x2BC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9E4u;
label_2bc9e4:
    // 0x2bc9e4: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC9E4u;
    {
        const bool branch_taken_0x2bc9e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bc9e4) {
            ctx->pc = 0x2BC9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC9E4u;
            // 0x2bc9e8: 0xc6410b40  lwc1        $f1, 0xB40($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCA00u;
            goto label_2bca00;
        }
    }
    ctx->pc = 0x2BC9ECu;
    // 0x2bc9ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9f0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BC9F0u;
    SET_GPR_U32(ctx, 31, 0x2BC9F8u);
    ctx->pc = 0x2BC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9F0u;
    // 0x2bc9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BC9F0u, 0x2BC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9F8u;
label_2bc9f8:
    // 0x2bc9f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9fc: 0xc6410b40  lwc1        $f1, 0xB40($s2)
    ctx->pc = 0x2bc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bca00:
    // 0x2bca00: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2bca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bca04: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2bca04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bca08: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BCA08u;
    SET_GPR_U32(ctx, 31, 0x2BCA10u);
    ctx->pc = 0x2BCA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA08u;
    // 0x2bca0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BCA08u, 0x2BCA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA10u;
label_2bca10:
    // 0x2bca10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca14: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCA14u;
    SET_GPR_U32(ctx, 31, 0x2BCA1Cu);
    ctx->pc = 0x2BCA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA14u;
    // 0x2bca18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCA14u, 0x2BCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA1Cu;
label_2bca1c:
    // 0x2bca1c: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BCA1Cu;
    {
        const bool branch_taken_0x2bca1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bca1c) {
            ctx->pc = 0x2BCA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCA1Cu;
            // 0x2bca20: 0xc6600054  lwc1        $f0, 0x54($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCA48u;
            goto label_2bca48;
        }
    }
    ctx->pc = 0x2BCA24u;
    // 0x2bca24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bca24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca28: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bca28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bca2c: 0x0  nop
    ctx->pc = 0x2bca2cu;
    // NOP
    // 0x2bca30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCA30u;
    {
        const bool branch_taken_0x2bca30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA30u;
        // 0x2bca34: 0xc6600054  lwc1        $f0, 0x54($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca30) {
            ctx->pc = 0x2BCA40u;
            goto label_2bca40;
        }
    }
    ctx->pc = 0x2BCA38u;
    // 0x2bca38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCA38u;
    {
        const bool branch_taken_0x2bca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA38u;
        // 0x2bca3c: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca38) {
            ctx->pc = 0x2BCA4Cu;
            goto label_2bca4c;
        }
    }
    ctx->pc = 0x2BCA40u;
label_2bca40:
    // 0x2bca40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCA40u;
    {
        const bool branch_taken_0x2bca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA40u;
        // 0x2bca44: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca40) {
            ctx->pc = 0x2BCA4Cu;
            goto label_2bca4c;
        }
    }
    ctx->pc = 0x2BCA48u;
label_2bca48:
    // 0x2bca48: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2bca48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2bca4c:
    // 0x2bca4c: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x2bca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x2bca50: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x2bca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca54: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bca58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bca58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bca5c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bca5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bca60: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCA60u;
    {
        const bool branch_taken_0x2bca60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bca60) {
            ctx->pc = 0x2BCA74u;
            goto label_2bca74;
        }
    }
    ctx->pc = 0x2BCA68u;
    // 0x2bca68: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2bca68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2bca6c: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x2bca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x2bca70: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bca70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2bca74:
    // 0x2bca74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bca74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bca78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bca7c: 0x0  nop
    ctx->pc = 0x2bca7cu;
    // NOP
    // 0x2bca80: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCA80u;
    {
        const bool branch_taken_0x2bca80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bca80) {
            ctx->pc = 0x2BCA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCA80u;
            // 0x2bca84: 0x8e420ae4  lw          $v0, 0xAE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCA94u;
            goto label_2bca94;
        }
    }
    ctx->pc = 0x2BCA88u;
    // 0x2bca88: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2bca88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bca8c: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x2bca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_2bca90:
    // 0x2bca90: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2bca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2bca94:
    // 0x2bca94: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2BCA94u;
    {
        const bool branch_taken_0x2bca94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bca94) {
            ctx->pc = 0x2BCA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCA94u;
            // 0x2bca98: 0xc66d0054  lwc1        $f13, 0x54($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB84u;
            goto label_2bcb84;
        }
    }
    ctx->pc = 0x2BCA9Cu;
    // 0x2bca9c: 0x8e420ad4  lw          $v0, 0xAD4($s2)
    ctx->pc = 0x2bca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2772)));
    // 0x2bcaa0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BCAA0u;
    {
        const bool branch_taken_0x2bcaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAA0u;
        // 0x2bcaa4: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcaa0) {
            ctx->pc = 0x2BCB80u;
            goto label_2bcb80;
        }
    }
    ctx->pc = 0x2BCAA8u;
    // 0x2bcaa8: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2bcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bcaac: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2bcaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2bcab0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2bcab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bcab4: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2BCAB4u;
    {
        const bool branch_taken_0x2bcab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcab4) {
            ctx->pc = 0x2BCAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCAB4u;
            // 0x2bcab8: 0xc66d0054  lwc1        $f13, 0x54($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB84u;
            goto label_2bcb84;
        }
    }
    ctx->pc = 0x2BCABCu;
    // 0x2bcabc: 0xc66c004c  lwc1        $f12, 0x4C($s3)
    ctx->pc = 0x2bcabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bcac0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2bcac0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2bcac4: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BCAC4u;
    SET_GPR_U32(ctx, 31, 0x2BCACCu);
    ctx->pc = 0x2BCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAC4u;
    // 0x2bcac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BCAC4u, 0x2BCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCACCu;
label_2bcacc:
    // 0x2bcacc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bcaccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2bcad0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BCAD0u;
    SET_GPR_U32(ctx, 31, 0x2BCAD8u);
    ctx->pc = 0x2BCAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAD0u;
    // 0x2bcad4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BCAD0u, 0x2BCAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAD8u;
label_2bcad8:
    // 0x2bcad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcadc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcae0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCAE0u;
    SET_GPR_U32(ctx, 31, 0x2BCAE8u);
    ctx->pc = 0x2BCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAE0u;
    // 0x2bcae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCAE0u, 0x2BCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAE8u;
label_2bcae8:
    // 0x2bcae8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCAE8u;
    {
        const bool branch_taken_0x2bcae8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAE8u;
        // 0x2bcaec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcae8) {
            ctx->pc = 0x2BCAFCu;
            goto label_2bcafc;
        }
    }
    ctx->pc = 0x2BCAF0u;
    // 0x2bcaf0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BCAF0u;
    SET_GPR_U32(ctx, 31, 0x2BCAF8u);
    ctx->pc = 0x2BCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAF0u;
    // 0x2bcaf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BCAF0u, 0x2BCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAF8u;
label_2bcaf8:
    // 0x2bcaf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcafc:
    // 0x2bcafc: 0x3405808e  ori         $a1, $zero, 0x808E
    ctx->pc = 0x2bcafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32910);
    // 0x2bcb00: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2bcb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2bcb04: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCB04u;
    SET_GPR_U32(ctx, 31, 0x2BCB0Cu);
    ctx->pc = 0x2BCB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB04u;
    // 0x2bcb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCB04u, 0x2BCB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB0Cu;
label_2bcb0c:
    // 0x2bcb0c: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BCB0Cu;
    {
        const bool branch_taken_0x2bcb0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB0Cu;
        // 0x2bcb10: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb0c) {
            ctx->pc = 0x2BCB84u;
            goto label_2bcb84;
        }
    }
    ctx->pc = 0x2BCB14u;
    // 0x2bcb14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bcb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcb18: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x2bcb18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcb1c: 0x0  nop
    ctx->pc = 0x2bcb1cu;
    // NOP
    // 0x2bcb20: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BCB20u;
    {
        const bool branch_taken_0x2bcb20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB20u;
        // 0x2bcb24: 0xc661004c  lwc1        $f1, 0x4C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb20) {
            ctx->pc = 0x2BCB54u;
            goto label_2bcb54;
        }
    }
    ctx->pc = 0x2BCB28u;
    // 0x2bcb28: 0x3c014238  lui         $at, 0x4238
    ctx->pc = 0x2bcb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16952 << 16));
    // 0x2bcb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb30: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bcb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bcb34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bcb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcb38: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x2bcb38u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcb3c: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x2bcb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcb40: 0x0  nop
    ctx->pc = 0x2bcb40u;
    // NOP
    // 0x2bcb44: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x2BCB44u;
    {
        const bool branch_taken_0x2bcb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcb44) {
            ctx->pc = 0x2BCB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCB44u;
            // 0x2bcb48: 0x46026b41  sub.s       $f13, $f13, $f2 (Delay Slot)
            ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB84u;
            goto label_2bcb84;
        }
    }
    ctx->pc = 0x2BCB4Cu;
    // 0x2bcb4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BCB4Cu;
    {
        const bool branch_taken_0x2bcb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB4Cu;
        // 0x2bcb50: 0xc66c0050  lwc1        $f12, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb4c) {
            ctx->pc = 0x2BCB88u;
            goto label_2bcb88;
        }
    }
    ctx->pc = 0x2BCB54u;
label_2bcb54:
    // 0x2bcb54: 0x3c014238  lui         $at, 0x4238
    ctx->pc = 0x2bcb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16952 << 16));
    // 0x2bcb58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb5c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x2bcb5cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bcb60: 0x46026834  c.lt.s      $f13, $f2
    ctx->pc = 0x2bcb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcb64: 0x0  nop
    ctx->pc = 0x2bcb64u;
    // NOP
    // 0x2bcb68: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2BCB68u;
    {
        const bool branch_taken_0x2bcb68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcb68) {
            ctx->pc = 0x2BCB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCB68u;
            // 0x2bcb6c: 0xc66c0050  lwc1        $f12, 0x50($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB88u;
            goto label_2bcb88;
        }
    }
    ctx->pc = 0x2BCB70u;
    // 0x2bcb70: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bcb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bcb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCB78u;
    {
        const bool branch_taken_0x2bcb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB78u;
        // 0x2bcb7c: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb78) {
            ctx->pc = 0x2BCB84u;
            goto label_2bcb84;
        }
    }
    ctx->pc = 0x2BCB80u;
label_2bcb80:
    // 0x2bcb80: 0xc66d0054  lwc1        $f13, 0x54($s3)
    ctx->pc = 0x2bcb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2bcb84:
    // 0x2bcb84: 0xc66c0050  lwc1        $f12, 0x50($s3)
    ctx->pc = 0x2bcb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bcb88:
    // 0x2bcb88: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BCB88u;
    SET_GPR_U32(ctx, 31, 0x2BCB90u);
    ctx->pc = 0x2BCB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB88u;
    // 0x2bcb8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BCB88u, 0x2BCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB90u;
label_2bcb90:
    // 0x2bcb90: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bcb90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2bcb94: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BCB94u;
    SET_GPR_U32(ctx, 31, 0x2BCB9Cu);
    ctx->pc = 0x2BCB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB94u;
    // 0x2bcb98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BCB94u, 0x2BCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB9Cu;
label_2bcb9c:
    // 0x2bcb9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcba4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCBA4u;
    SET_GPR_U32(ctx, 31, 0x2BCBACu);
    ctx->pc = 0x2BCBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBA4u;
    // 0x2bcba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCBA4u, 0x2BCBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBACu;
label_2bcbac:
    // 0x2bcbac: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCBACu;
    {
        const bool branch_taken_0x2bcbac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bcbac) {
            ctx->pc = 0x2BCBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCBACu;
            // 0x2bcbb0: 0xc6410b40  lwc1        $f1, 0xB40($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCBC8u;
            goto label_2bcbc8;
        }
    }
    ctx->pc = 0x2BCBB4u;
    // 0x2bcbb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbb8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BCBB8u;
    SET_GPR_U32(ctx, 31, 0x2BCBC0u);
    ctx->pc = 0x2BCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB8u;
    // 0x2bcbbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BCBB8u, 0x2BCBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBC0u;
label_2bcbc0:
    // 0x2bcbc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbc4: 0xc6410b40  lwc1        $f1, 0xB40($s2)
    ctx->pc = 0x2bcbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bcbc8:
    // 0x2bcbc8: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2bcbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcbcc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2bcbccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bcbd0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BCBD0u;
    SET_GPR_U32(ctx, 31, 0x2BCBD8u);
    ctx->pc = 0x2BCBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBD0u;
    // 0x2bcbd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BCBD0u, 0x2BCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBD8u;
label_2bcbd8:
    // 0x2bcbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbdc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCBDCu;
    SET_GPR_U32(ctx, 31, 0x2BCBE4u);
    ctx->pc = 0x2BCBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBDCu;
    // 0x2bcbe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCBDCu, 0x2BCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBE4u;
label_2bcbe4:
    // 0x2bcbe4: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BCBE4u;
    {
        const bool branch_taken_0x2bcbe4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bcbe4) {
            ctx->pc = 0x2BCBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCBE4u;
            // 0x2bcbe8: 0xc6600050  lwc1        $f0, 0x50($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC10u;
            goto label_2bcc10;
        }
    }
    ctx->pc = 0x2BCBECu;
    // 0x2bcbec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcbf0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bcbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcbf4: 0x0  nop
    ctx->pc = 0x2bcbf4u;
    // NOP
    // 0x2bcbf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCBF8u;
    {
        const bool branch_taken_0x2bcbf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBF8u;
        // 0x2bcbfc: 0xc6600050  lwc1        $f0, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbf8) {
            ctx->pc = 0x2BCC08u;
            goto label_2bcc08;
        }
    }
    ctx->pc = 0x2BCC00u;
    // 0x2bcc00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCC00u;
    {
        const bool branch_taken_0x2bcc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC00u;
        // 0x2bcc04: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc00) {
            ctx->pc = 0x2BCC14u;
            goto label_2bcc14;
        }
    }
    ctx->pc = 0x2BCC08u;
label_2bcc08:
    // 0x2bcc08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCC08u;
    {
        const bool branch_taken_0x2bcc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC08u;
        // 0x2bcc0c: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc08) {
            ctx->pc = 0x2BCC14u;
            goto label_2bcc14;
        }
    }
    ctx->pc = 0x2BCC10u;
label_2bcc10:
    // 0x2bcc10: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2bcc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2bcc14:
    // 0x2bcc14: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2bcc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2bcc18: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x2bcc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc1c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2bcc20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bcc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcc24: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bcc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcc28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCC28u;
    {
        const bool branch_taken_0x2bcc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcc28) {
            ctx->pc = 0x2BCC3Cu;
            goto label_2bcc3c;
        }
    }
    ctx->pc = 0x2BCC30u;
    // 0x2bcc30: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2bcc30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2bcc34: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2bcc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2bcc38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bcc38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2bcc3c:
    // 0x2bcc3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcc3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bcc40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcc44: 0x0  nop
    ctx->pc = 0x2bcc44u;
    // NOP
    // 0x2bcc48: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCC48u;
    {
        const bool branch_taken_0x2bcc48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcc48) {
            ctx->pc = 0x2BCC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCC48u;
            // 0x2bcc4c: 0x8e460ae4  lw          $a2, 0xAE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC5Cu;
            goto label_2bcc5c;
        }
    }
    ctx->pc = 0x2BCC50u;
    // 0x2bcc50: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2bcc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bcc54: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2bcc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2bcc58: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2bcc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2bcc5c:
    // 0x2bcc5c: 0x10c000a5  beqz        $a2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2BCC5Cu;
    {
        const bool branch_taken_0x2bcc5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC5Cu;
        // 0x2bcc60: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc5c) {
            ctx->pc = 0x2BCEF4u;
            goto label_2bcef4;
        }
    }
    ctx->pc = 0x2BCC64u;
    // 0x2bcc64: 0x8e420ad4  lw          $v0, 0xAD4($s2)
    ctx->pc = 0x2bcc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2772)));
    // 0x2bcc68: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2BCC68u;
    {
        const bool branch_taken_0x2bcc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC68u;
        // 0x2bcc6c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc68) {
            ctx->pc = 0x2BCEF4u;
            goto label_2bcef4;
        }
    }
    ctx->pc = 0x2BCC70u;
    // 0x2bcc70: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2bcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2bcc74: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2BCC74u;
    {
        const bool branch_taken_0x2bcc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC74u;
        // 0x2bcc78: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc74) {
            ctx->pc = 0x2BCEF4u;
            goto label_2bcef4;
        }
    }
    ctx->pc = 0x2BCC7Cu;
    // 0x2bcc7c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2bcc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bcc80: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BCC80u;
    {
        const bool branch_taken_0x2bcc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC80u;
        // 0x2bcc84: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc80) {
            ctx->pc = 0x2BCCBCu;
            goto label_2bccbc;
        }
    }
    ctx->pc = 0x2BCC88u;
    // 0x2bcc88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCC88u;
    {
        const bool branch_taken_0x2bcc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC88u;
        // 0x2bcc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc88) {
            ctx->pc = 0x2BCCA0u;
            goto label_2bcca0;
        }
    }
    ctx->pc = 0x2BCC90u;
    // 0x2bcc90: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BCC90u;
    {
        const bool branch_taken_0x2bcc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC90u;
        // 0x2bcc94: 0xc7a50000  lwc1        $f5, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc90) {
            ctx->pc = 0x2BCD54u;
            goto label_2bcd54;
        }
    }
    ctx->pc = 0x2BCC98u;
    // 0x2bcc98: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2BCC98u;
    {
        const bool branch_taken_0x2bcc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC98u;
        // 0x2bcc9c: 0xc7a40004  lwc1        $f4, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc98) {
            ctx->pc = 0x2BCE20u;
            goto label_2bce20;
        }
    }
    ctx->pc = 0x2BCCA0u;
label_2bcca0:
    // 0x2bcca0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2bcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bcca4: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2BCCA4u;
    {
        const bool branch_taken_0x2bcca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCA4u;
        // 0x2bcca8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcca4) {
            ctx->pc = 0x2BCD54u;
            goto label_2bcd54;
        }
    }
    ctx->pc = 0x2BCCACu;
    // 0x2bccac: 0x1082004b  beq         $a0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2BCCACu;
    {
        const bool branch_taken_0x2bccac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCACu;
        // 0x2bccb0: 0xc7a50000  lwc1        $f5, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccac) {
            ctx->pc = 0x2BCDDCu;
            goto label_2bcddc;
        }
    }
    ctx->pc = 0x2BCCB4u;
    // 0x2bccb4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2BCCB4u;
    {
        const bool branch_taken_0x2bccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCB4u;
        // 0x2bccb8: 0xc7a40004  lwc1        $f4, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccb4) {
            ctx->pc = 0x2BCE20u;
            goto label_2bce20;
        }
    }
    ctx->pc = 0x2BCCBCu;
label_2bccbc:
    // 0x2bccbc: 0x8e430178  lw          $v1, 0x178($s2)
    ctx->pc = 0x2bccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x2bccc0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BCCC0u;
    {
        const bool branch_taken_0x2bccc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BCCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCC0u;
        // 0x2bccc4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccc0) {
            ctx->pc = 0x2BCCECu;
            goto label_2bccec;
        }
    }
    ctx->pc = 0x2BCCC8u;
    // 0x2bccc8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BCCC8u;
    {
        const bool branch_taken_0x2bccc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCC8u;
        // 0x2bcccc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccc8) {
            ctx->pc = 0x2BCCECu;
            goto label_2bccec;
        }
    }
    ctx->pc = 0x2BCCD0u;
    // 0x2bccd0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCCD0u;
    {
        const bool branch_taken_0x2bccd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCD0u;
        // 0x2bccd4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccd0) {
            ctx->pc = 0x2BCCECu;
            goto label_2bccec;
        }
    }
    ctx->pc = 0x2BCCD8u;
    // 0x2bccd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCCD8u;
    {
        const bool branch_taken_0x2bccd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCD8u;
        // 0x2bccdc: 0x2462fff2  addiu       $v0, $v1, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccd8) {
            ctx->pc = 0x2BCCECu;
            goto label_2bccec;
        }
    }
    ctx->pc = 0x2BCCE0u;
    // 0x2bcce0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2bcce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2bcce4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BCCE4u;
    {
        const bool branch_taken_0x2bcce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcce4) {
            ctx->pc = 0x2BCCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCCE4u;
            // 0x2bcce8: 0xc6400bc0  lwc1        $f0, 0xBC0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCD38u;
            goto label_2bcd38;
        }
    }
    ctx->pc = 0x2BCCECu;
label_2bccec:
    // 0x2bccec: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x2bccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bccf0: 0xc7819030  lwc1        $f1, -0x6FD0($gp)
    ctx->pc = 0x2bccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bccf4: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x2bccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bccf8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bccf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bccfc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bccfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcd00: 0x0  nop
    ctx->pc = 0x2bcd00u;
    // NOP
    // 0x2bcd04: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2BCD04u;
    {
        const bool branch_taken_0x2bcd04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcd04) {
            ctx->pc = 0x2BCD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCD04u;
            // 0x2bcd08: 0xc6400bc0  lwc1        $f0, 0xBC0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCD38u;
            goto label_2bcd38;
        }
    }
    ctx->pc = 0x2BCD0Cu;
    // 0x2bcd0c: 0xc6410bc0  lwc1        $f1, 0xBC0($s2)
    ctx->pc = 0x2bcd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd10: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2bcd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcd14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bcd14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bcd18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bcd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcd1c: 0xc6400bc4  lwc1        $f0, 0xBC4($s2)
    ctx->pc = 0x2bcd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcd20: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2bcd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bcd24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bcd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bcd2c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2bcd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcd30: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2BCD30u;
    {
        const bool branch_taken_0x2bcd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD30u;
        // 0x2bcd34: 0xc6410bc8  lwc1        $f1, 0xBC8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd30) {
            ctx->pc = 0x2BCDD0u;
            goto label_2bcdd0;
        }
    }
    ctx->pc = 0x2BCD38u;
label_2bcd38:
    // 0x2bcd38: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x2bcd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd3c: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x2bcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x2bcd40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bcd40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd44: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bcd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcd48: 0xc6410bc4  lwc1        $f1, 0xBC4($s2)
    ctx->pc = 0x2bcd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2BCD4Cu;
    {
        const bool branch_taken_0x2bcd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD4Cu;
        // 0x2bcd50: 0xc4400bc4  lwc1        $f0, 0xBC4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd4c) {
            ctx->pc = 0x2BCE00u;
            goto label_2bce00;
        }
    }
    ctx->pc = 0x2BCD54u;
label_2bcd54:
    // 0x2bcd54: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2bcd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bcd58: 0x2442ff37  addiu       $v0, $v0, -0xC9
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967095));
    // 0x2bcd5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bcd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bcd60: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BCD60u;
    {
        const bool branch_taken_0x2bcd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd60) {
            ctx->pc = 0x2BCD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCD60u;
            // 0x2bcd64: 0xc4a101fc  lwc1        $f1, 0x1FC($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCD94u;
            goto label_2bcd94;
        }
    }
    ctx->pc = 0x2BCD68u;
    // 0x2bcd68: 0xc4a001fc  lwc1        $f0, 0x1FC($a1)
    ctx->pc = 0x2bcd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcd6c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2bcd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd70: 0xc6420bc0  lwc1        $f2, 0xBC0($s2)
    ctx->pc = 0x2bcd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcd74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bcd74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2bcd78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2bcd7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bcd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcd80: 0xc6410bc4  lwc1        $f1, 0xBC4($s2)
    ctx->pc = 0x2bcd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd84: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2bcd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcd88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bcd88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bcd8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BCD8Cu;
    {
        const bool branch_taken_0x2bcd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD8Cu;
        // 0x2bcd90: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd8c) {
            ctx->pc = 0x2BCDC0u;
            goto label_2bcdc0;
        }
    }
    ctx->pc = 0x2BCD94u;
label_2bcd94:
    // 0x2bcd94: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2bcd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcd98: 0xc6420bc0  lwc1        $f2, 0xBC0($s2)
    ctx->pc = 0x2bcd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcd9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcd9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcda0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bcda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bcda4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bcda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcda8: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x2bcda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdac: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2bcdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcdb0: 0xc6420bc4  lwc1        $f2, 0xBC4($s2)
    ctx->pc = 0x2bcdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcdb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bcdb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcdb8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2bcdb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2bcdbc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bcdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2bcdc0:
    // 0x2bcdc0: 0xc4a20204  lwc1        $f2, 0x204($a1)
    ctx->pc = 0x2bcdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcdc4: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2bcdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdc8: 0xc6410bc8  lwc1        $f1, 0xBC8($s2)
    ctx->pc = 0x2bcdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcdcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bcdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2bcdd0:
    // 0x2bcdd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bcdd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bcdd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BCDD4u;
    {
        const bool branch_taken_0x2bcdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDD4u;
        // 0x2bcdd8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcdd4) {
            ctx->pc = 0x2BCE18u;
            goto label_2bce18;
        }
    }
    ctx->pc = 0x2BCDDCu;
label_2bcddc:
    // 0x2bcddc: 0xc6400bc0  lwc1        $f0, 0xBC0($s2)
    ctx->pc = 0x2bcddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcde0: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x2bcde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcde4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bcde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bcde8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bcde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcdec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bcdecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bcdf0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bcdf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcdf4: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x2bcdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdf8: 0xc6410bc4  lwc1        $f1, 0xBC4($s2)
    ctx->pc = 0x2bcdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcdfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bcdfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2bce00:
    // 0x2bce00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bce00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bce04: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2bce04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bce08: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x2bce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce0c: 0xc6400bc8  lwc1        $f0, 0xBC8($s2)
    ctx->pc = 0x2bce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bce10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bce10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bce14: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2bce14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bce18:
    // 0x2bce18: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x2bce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bce1c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2bce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2bce20:
    // 0x2bce20: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2bce20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2bce24: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2bce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bce28: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2bce28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2bce2c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2bce2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bce30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bce30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bce34: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2bce34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bce38: 0x0  nop
    ctx->pc = 0x2bce38u;
    // NOP
    // 0x2bce3c: 0x0  nop
    ctx->pc = 0x2bce3cu;
    // NOP
    // 0x2bce40: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2bce40u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2bce44: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2bce44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bce48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2BCE48u;
    {
        const bool branch_taken_0x2bce48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bce48) {
            ctx->pc = 0x2BCE68u;
            goto label_2bce68;
        }
    }
    ctx->pc = 0x2BCE50u;
    // 0x2bce50: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2BCE50u;
    SET_GPR_U32(ctx, 31, 0x2BCE58u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2BCE50u, 0x2BCE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE58u;
label_2bce58:
    // 0x2bce58: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x2bce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bce5c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bce5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bce60: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2bce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bce64: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2bce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bce68:
    // 0x2bce68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bce6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bce6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce70: 0x0  nop
    ctx->pc = 0x2bce70u;
    // NOP
    // 0x2bce74: 0x0  nop
    ctx->pc = 0x2bce74u;
    // NOP
    // 0x2bce78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2bce78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2bce7c: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x2bce7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bce80: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2bce80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bce84: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2bce84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bce88: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2bce88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bce8c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2bce8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bce90: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x2bce90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bce94: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bce94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bce98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2bce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bce9c: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x2bce9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2bcea0: 0x0  nop
    ctx->pc = 0x2bcea0u;
    // NOP
    // 0x2bcea4: 0x0  nop
    ctx->pc = 0x2bcea4u;
    // NOP
    // 0x2bcea8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2bcea8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2bceac: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2bceacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bceb0: 0x0  nop
    ctx->pc = 0x2bceb0u;
    // NOP
    // 0x2bceb4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCEB4u;
    {
        const bool branch_taken_0x2bceb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bceb4) {
            ctx->pc = 0x2BCEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCEB4u;
            // 0x2bceb8: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCEC8u;
            goto label_2bcec8;
        }
    }
    ctx->pc = 0x2BCEBCu;
    // 0x2bcebc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2BCEBCu;
    SET_GPR_U32(ctx, 31, 0x2BCEC4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2BCEBCu, 0x2BCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEC4u;
label_2bcec4:
    // 0x2bcec4: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2bcec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bcec8:
    // 0x2bcec8: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2BCEC8u;
    SET_GPR_U32(ctx, 31, 0x2BCED0u);
    ctx->pc = 0x2BCECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEC8u;
    // 0x2bcecc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2BCEC8u, 0x2BCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCED0u;
label_2bced0:
    // 0x2bced0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2bced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2bced4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bced4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bced8: 0xc7829034  lwc1        $f2, -0x6FCC($gp)
    ctx->pc = 0x2bced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcedc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bcedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bcee0: 0x0  nop
    ctx->pc = 0x2bcee0u;
    // NOP
    // 0x2bcee4: 0x0  nop
    ctx->pc = 0x2bcee4u;
    // NOP
    // 0x2bcee8: 0x46020343  div.s       $f13, $f0, $f2
    ctx->pc = 0x2bcee8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[2];
    // 0x2bceec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCEECu;
    {
        const bool branch_taken_0x2bceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEECu;
        // 0x2bcef0: 0xc64c0b98  lwc1        $f12, 0xB98($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bceec) {
            ctx->pc = 0x2BCEFCu;
            goto label_2bcefc;
        }
    }
    ctx->pc = 0x2BCEF4u;
label_2bcef4:
    // 0x2bcef4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2bcef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bcef8: 0xc64c0b98  lwc1        $f12, 0xB98($s2)
    ctx->pc = 0x2bcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2bcefc:
    // 0x2bcefc: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2BCEFCu;
    SET_GPR_U32(ctx, 31, 0x2BCF04u);
    ctx->pc = 0x2BCF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEFCu;
    // 0x2bcf00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2BCEFCu, 0x2BCF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF04u;
label_2bcf04:
    // 0x2bcf04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bcf04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2bcf08: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BCF08u;
    SET_GPR_U32(ctx, 31, 0x2BCF10u);
    ctx->pc = 0x2BCF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF08u;
    // 0x2bcf0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BCF08u, 0x2BCF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF10u;
label_2bcf10:
    // 0x2bcf10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf18: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCF18u;
    SET_GPR_U32(ctx, 31, 0x2BCF20u);
    ctx->pc = 0x2BCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF18u;
    // 0x2bcf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCF18u, 0x2BCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF20u;
label_2bcf20:
    // 0x2bcf20: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCF20u;
    {
        const bool branch_taken_0x2bcf20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF20u;
        // 0x2bcf24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf20) {
            ctx->pc = 0x2BCF34u;
            goto label_2bcf34;
        }
    }
    ctx->pc = 0x2BCF28u;
    // 0x2bcf28: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2BCF28u;
    SET_GPR_U32(ctx, 31, 0x2BCF30u);
    ctx->pc = 0x2BCF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF28u;
    // 0x2bcf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2BCF28u, 0x2BCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF30u;
label_2bcf30:
    // 0x2bcf30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcf30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf34:
    // 0x2bcf34: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2bcf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2bcf38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bcf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcf3c: 0xc6400b40  lwc1        $f0, 0xB40($s2)
    ctx->pc = 0x2bcf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcf40: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x2bcf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcf44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bcf44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bcf48: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x2bcf48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bcf4c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2BCF4Cu;
    SET_GPR_U32(ctx, 31, 0x2BCF54u);
    ctx->pc = 0x2BCF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF4Cu;
    // 0x2bcf50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2BCF4Cu, 0x2BCF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF54u;
label_2bcf54:
    // 0x2bcf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf58: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2BCF58u;
    SET_GPR_U32(ctx, 31, 0x2BCF60u);
    ctx->pc = 0x2BCF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF58u;
    // 0x2bcf5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2BCF58u, 0x2BCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF60u;
label_2bcf60:
    // 0x2bcf60: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BCF60u;
    {
        const bool branch_taken_0x2bcf60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bcf60) {
            ctx->pc = 0x2BCF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF60u;
            // 0x2bcf64: 0xc6400b98  lwc1        $f0, 0xB98($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCF8Cu;
            goto label_2bcf8c;
        }
    }
    ctx->pc = 0x2BCF68u;
    // 0x2bcf68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf6c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bcf6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcf70: 0x0  nop
    ctx->pc = 0x2bcf70u;
    // NOP
    // 0x2bcf74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCF74u;
    {
        const bool branch_taken_0x2bcf74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF74u;
        // 0x2bcf78: 0xc6400b98  lwc1        $f0, 0xB98($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf74) {
            ctx->pc = 0x2BCF84u;
            goto label_2bcf84;
        }
    }
    ctx->pc = 0x2BCF7Cu;
    // 0x2bcf7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCF7Cu;
    {
        const bool branch_taken_0x2bcf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF7Cu;
        // 0x2bcf80: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf7c) {
            ctx->pc = 0x2BCF90u;
            goto label_2bcf90;
        }
    }
    ctx->pc = 0x2BCF84u;
label_2bcf84:
    // 0x2bcf84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCF84u;
    {
        const bool branch_taken_0x2bcf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF84u;
        // 0x2bcf88: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf84) {
            ctx->pc = 0x2BCF90u;
            goto label_2bcf90;
        }
    }
    ctx->pc = 0x2BCF8Cu;
label_2bcf8c:
    // 0x2bcf8c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2bcf8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2bcf90:
    // 0x2bcf90: 0xe6400b98  swc1        $f0, 0xB98($s2)
    ctx->pc = 0x2bcf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2968), bits); }
    // 0x2bcf94: 0xc6400b98  lwc1        $f0, 0xB98($s2)
    ctx->pc = 0x2bcf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcf98: 0xc7949038  lwc1        $f20, -0x6FC8($gp)
    ctx->pc = 0x2bcf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcf9c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bcf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcfa0: 0x0  nop
    ctx->pc = 0x2bcfa0u;
    // NOP
    // 0x2bcfa4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2BCFA4u;
    {
        const bool branch_taken_0x2bcfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFA4u;
        // 0x2bcfa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfa4) {
            ctx->pc = 0x2BCFD4u;
            goto label_2bcfd4;
        }
    }
    ctx->pc = 0x2BCFACu;
    // 0x2bcfac: 0xc085608  jal         func_215820
    ctx->pc = 0x2BCFACu;
    SET_GPR_U32(ctx, 31, 0x2BCFB4u);
    ctx->pc = 0x2BCFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFACu;
    // 0x2bcfb0: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BCFACu, 0x2BCFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFB4u;
label_2bcfb4:
    // 0x2bcfb4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BCFB4u;
    {
        const bool branch_taken_0x2bcfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcfb4) {
            ctx->pc = 0x2BCFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCFB4u;
            // 0x2bcfb8: 0xe6540b98  swc1        $f20, 0xB98($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2968), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFD4u;
            goto label_2bcfd4;
        }
    }
    ctx->pc = 0x2BCFBCu;
    // 0x2bcfbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bcfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfc0: 0xc085608  jal         func_215820
    ctx->pc = 0x2BCFC0u;
    SET_GPR_U32(ctx, 31, 0x2BCFC8u);
    ctx->pc = 0x2BCFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFC0u;
    // 0x2bcfc4: 0x240501de  addiu       $a1, $zero, 0x1DE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2BCFC0u, 0x2BCFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFC8u;
label_2bcfc8:
    // 0x2bcfc8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCFC8u;
    {
        const bool branch_taken_0x2bcfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcfc8) {
            ctx->pc = 0x2BCFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCFC8u;
            // 0x2bcfcc: 0xc6600050  lwc1        $f0, 0x50($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFD8u;
            goto label_2bcfd8;
        }
    }
    ctx->pc = 0x2BCFD0u;
    // 0x2bcfd0: 0xe6540b98  swc1        $f20, 0xB98($s2)
    ctx->pc = 0x2bcfd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2968), bits); }
label_2bcfd4:
    // 0x2bcfd4: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2bcfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcfd8:
    // 0x2bcfd8: 0xe6400b9c  swc1        $f0, 0xB9C($s2)
    ctx->pc = 0x2bcfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2972), bits); }
    // 0x2bcfdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bcfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bcfe0:
    // 0x2bcfe0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2bcfe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bcfe4:
    // 0x2bcfe4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bcfe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bcfe8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bcfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bcfec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bcfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcff0: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2bcff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bcff4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2bcff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bcff8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2bcff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFFCu;
        // 0x2bd000: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD004u;
}
