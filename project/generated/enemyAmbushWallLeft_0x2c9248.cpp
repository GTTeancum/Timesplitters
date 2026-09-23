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

// Function: enemyAmbushWallLeft
// Address: 0x2c9248 - 0x2c9a68
void enemyAmbushWallLeft_0x2c9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAmbushWallLeft_0x2c9248");
#endif

    switch (ctx->pc) {
        case 0x2c9278u: goto label_2c9278;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9330u: goto label_2c9330;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c9378u: goto label_2c9378;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c939cu: goto label_2c939c;
        case 0x2c93c0u: goto label_2c93c0;
        case 0x2c93fcu: goto label_2c93fc;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c9468u: goto label_2c9468;
        case 0x2c94a8u: goto label_2c94a8;
        case 0x2c94c4u: goto label_2c94c4;
        case 0x2c9524u: goto label_2c9524;
        case 0x2c958cu: goto label_2c958c;
        case 0x2c95a4u: goto label_2c95a4;
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c9688u: goto label_2c9688;
        case 0x2c96b4u: goto label_2c96b4;
        case 0x2c9720u: goto label_2c9720;
        case 0x2c9728u: goto label_2c9728;
        case 0x2c9778u: goto label_2c9778;
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c981cu: goto label_2c981c;
        case 0x2c983cu: goto label_2c983c;
        case 0x2c98b0u: goto label_2c98b0;
        case 0x2c98dcu: goto label_2c98dc;
        case 0x2c993cu: goto label_2c993c;
        case 0x2c9954u: goto label_2c9954;
        case 0x2c9994u: goto label_2c9994;
        case 0x2c99d8u: goto label_2c99d8;
        case 0x2c99f4u: goto label_2c99f4;
        case 0x2c9a20u: goto label_2c9a20;
        case 0x2c9a44u: goto label_2c9a44;
        default: break;
    }

    ctx->pc = 0x2c9248u;

    // 0x2c9248: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c9248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c924c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c9250: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c9250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c9254: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c9254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c9258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c925c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c9260: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c9260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c9264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9268: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c9268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c926c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c9270: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C9270u;
    SET_GPR_U32(ctx, 31, 0x2C9278u);
    ctx->pc = 0x2C9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9270u;
    // 0x2c9274: 0x8e320160  lw          $s2, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C9270u, 0x2C9278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9278u;
label_2c9278:
    // 0x2c9278: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c9278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c927c: 0x8e430aa8  lw          $v1, 0xAA8($s2)
    ctx->pc = 0x2c927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2728)));
    // 0x2c9280: 0xe6410aec  swc1        $f1, 0xAEC($s2)
    ctx->pc = 0x2c9280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c9284: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2c9284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c9288: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c9288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c928c: 0xe6400af0  swc1        $f0, 0xAF0($s2)
    ctx->pc = 0x2c928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c9290: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9294: 0xae400adc  sw          $zero, 0xADC($s2)
    ctx->pc = 0x2c9294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2780), GPR_U32(ctx, 0));
    // 0x2c9298: 0x104001ea  beqz        $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x2C9298u;
    {
        const bool branch_taken_0x2c9298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9298u;
        // 0x2c929c: 0xe6410af4  swc1        $f1, 0xAF4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9298) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C92A0u;
    // 0x2c92a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c92a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c92a8: 0x24429ec0  addiu       $v0, $v0, -0x6140
    ctx->pc = 0x2c92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942400));
    // 0x2c92ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c92b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c92b4: 0x800008  jr          $a0
    ctx->pc = 0x2C92B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C92BCu: goto label_2c92bc;
            case 0x2C9350u: goto label_2c9350;
            case 0x2C94DCu: goto label_2c94dc;
            case 0x2C96F8u: goto label_2c96f8;
            case 0x2C9920u: goto label_2c9920;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C92B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C92BCu;
label_2c92bc:
    // 0x2c92bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c92bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92c0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C92C0u;
    SET_GPR_U32(ctx, 31, 0x2C92C8u);
    ctx->pc = 0x2C92C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92C0u;
    // 0x2c92c4: 0x240501c7  addiu       $a1, $zero, 0x1C7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C92C0u, 0x2C92C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92C8u;
label_2c92c8:
    // 0x2c92c8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C92C8u;
    {
        const bool branch_taken_0x2c92c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92C8u;
        // 0x2c92cc: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92c8) {
            ctx->pc = 0x2C9328u;
            goto label_2c9328;
        }
    }
    ctx->pc = 0x2C92D0u;
    // 0x2c92d0: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2c92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c92d4: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x2c92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c92d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92dc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c92dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c92e0: 0xc6340034  lwc1        $f20, 0x34($s1)
    ctx->pc = 0x2c92e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c92e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c92e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c92e8: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x2c92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x2c92ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c92ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c92f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c92f4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c92f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c92f8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2c92f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2c92fc: 0xe6400b9c  swc1        $f0, 0xB9C($s2)
    ctx->pc = 0x2c92fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2972), bits); }
    // 0x2c9300: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c9300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c9304: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C9304u;
    SET_GPR_U32(ctx, 31, 0x2C930Cu);
    ctx->pc = 0x2C9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9304u;
    // 0x2c9308: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C9304u, 0x2C930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C930Cu;
label_2c930c:
    // 0x2c930c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9310: 0xe6340034  swc1        $f20, 0x34($s1)
    ctx->pc = 0x2c9310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c9314: 0xe6410b04  swc1        $f1, 0xB04($s2)
    ctx->pc = 0x2c9314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2820), bits); }
    // 0x2c9318: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c9318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c931c: 0xe6400b08  swc1        $f0, 0xB08($s2)
    ctx->pc = 0x2c931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2824), bits); }
    // 0x2c9320: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c9320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9324: 0xe6410b0c  swc1        $f1, 0xB0C($s2)
    ctx->pc = 0x2c9324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2828), bits); }
label_2c9328:
    // 0x2c9328: 0xc0b269a  jal         func_2C9A68
    ctx->pc = 0x2C9328u;
    SET_GPR_U32(ctx, 31, 0x2C9330u);
    ctx->pc = 0x2C932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9328u;
    // 0x2c932c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A68u, 0x2C9328u, 0x2C9330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9330u;
label_2c9330:
    // 0x2c9330: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9330u;
    {
        const bool branch_taken_0x2c9330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9330u;
        // 0x2c9334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9330) {
            ctx->pc = 0x2C933Cu;
            goto label_2c933c;
        }
    }
    ctx->pc = 0x2C9338u;
    // 0x2c9338: 0xae420aa8  sw          $v0, 0xAA8($s2)
    ctx->pc = 0x2c9338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 2));
label_2c933c:
    // 0x2c933c: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9340: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c9340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c9344: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c9344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c9348: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2C9348u;
    {
        const bool branch_taken_0x2c9348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9348u;
        // 0x2c934c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9348) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C9350u;
label_2c9350:
    // 0x2c9350: 0x8e530ae4  lw          $s3, 0xAE4($s2)
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9354: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c9354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9358: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2c9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c935c: 0xc66c0034  lwc1        $f12, 0x34($s3)
    ctx->pc = 0x2c935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c9360: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C9360u;
    SET_GPR_U32(ctx, 31, 0x2C9368u);
    ctx->pc = 0x2C9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9360u;
    // 0x2c9364: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C9360u, 0x2C9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9368u;
label_2c9368:
    // 0x2c9368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c936c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9370: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C9370u;
    SET_GPR_U32(ctx, 31, 0x2C9378u);
    ctx->pc = 0x2C9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9370u;
    // 0x2c9374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C9370u, 0x2C9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9378u;
label_2c9378:
    // 0x2c9378: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9378u;
    {
        const bool branch_taken_0x2c9378 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9378u;
        // 0x2c937c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9378) {
            ctx->pc = 0x2C938Cu;
            goto label_2c938c;
        }
    }
    ctx->pc = 0x2C9380u;
    // 0x2c9380: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C9380u;
    SET_GPR_U32(ctx, 31, 0x2C9388u);
    ctx->pc = 0x2C9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9380u;
    // 0x2c9384: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C9380u, 0x2C9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9388u;
label_2c9388:
    // 0x2c9388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c938c:
    // 0x2c938c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2c938cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2c9390: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c9390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c9394: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C9394u;
    SET_GPR_U32(ctx, 31, 0x2C939Cu);
    ctx->pc = 0x2C9398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9394u;
    // 0x2c9398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C9394u, 0x2C939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C939Cu;
label_2c939c:
    // 0x2c939c: 0x441003e  bgez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C939Cu;
    {
        const bool branch_taken_0x2c939c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C939Cu;
        // 0x2c93a0: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c939c) {
            ctx->pc = 0x2C9498u;
            goto label_2c9498;
        }
    }
    ctx->pc = 0x2C93A4u;
    // 0x2c93a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c93a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c93a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c93a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c93ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c93acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c93b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c93b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c93b4: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x2c93b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x2c93b8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C93B8u;
    SET_GPR_U32(ctx, 31, 0x2C93C0u);
    ctx->pc = 0x2C93BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93B8u;
    // 0x2c93bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C93B8u, 0x2C93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93C0u;
label_2c93c0:
    // 0x2c93c0: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c93c4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c93c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c93c8: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x2c93c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c93cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c93d0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c93d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c93d4: 0x8e430ae4  lw          $v1, 0xAE4($s2)
    ctx->pc = 0x2c93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c93d8: 0xae450aa8  sw          $a1, 0xAA8($s2)
    ctx->pc = 0x2c93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 5));
    // 0x2c93dc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2c93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c93e0: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2c93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c93e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c93e8: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x2c93e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c93ec: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2c93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c93f0: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2c93f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2c93f4: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2C93F4u;
    SET_GPR_U32(ctx, 31, 0x2C93FCu);
    ctx->pc = 0x2C93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93F4u;
    // 0x2c93f8: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2C93F4u, 0x2C93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93FCu;
label_2c93fc:
    // 0x2c93fc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c93fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c9400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9404: 0xc78291fc  lwc1        $f2, -0x6E04($gp)
    ctx->pc = 0x2c9404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c940c: 0x0  nop
    ctx->pc = 0x2c940cu;
    // NOP
    // 0x2c9410: 0x0  nop
    ctx->pc = 0x2c9410u;
    // NOP
    // 0x2c9414: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c9414u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2c9418: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c9418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c941c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C941Cu;
    {
        const bool branch_taken_0x2c941c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c941c) {
            ctx->pc = 0x2C944Cu;
            goto label_2c944c;
        }
    }
    ctx->pc = 0x2C9424u;
    // 0x2c9424: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c9424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c9428: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c942c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c942cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c9430:
    // 0x2c9430: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9434: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2c9434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9438: 0x0  nop
    ctx->pc = 0x2c9438u;
    // NOP
    // 0x2c943c: 0x0  nop
    ctx->pc = 0x2c943cu;
    // NOP
    // 0x2c9440: 0x0  nop
    ctx->pc = 0x2c9440u;
    // NOP
    // 0x2c9444: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C9444u;
    {
        const bool branch_taken_0x2c9444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9444) {
            ctx->pc = 0x2C9430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9430;
        }
    }
    ctx->pc = 0x2C944Cu;
label_2c944c:
    // 0x2c944c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c9450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c9454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9458: 0x0  nop
    ctx->pc = 0x2c9458u;
    // NOP
    // 0x2c945c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2C945Cu;
    {
        const bool branch_taken_0x2c945c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c945c) {
            ctx->pc = 0x2C9460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C945Cu;
            // 0x2c9460: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9488u;
            goto label_2c9488;
        }
    }
    ctx->pc = 0x2C9464u;
    // 0x2c9464: 0x0  nop
    ctx->pc = 0x2c9464u;
    // NOP
label_2c9468:
    // 0x2c9468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c9468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c946c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c946cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9470: 0x0  nop
    ctx->pc = 0x2c9470u;
    // NOP
    // 0x2c9474: 0x0  nop
    ctx->pc = 0x2c9474u;
    // NOP
    // 0x2c9478: 0x0  nop
    ctx->pc = 0x2c9478u;
    // NOP
    // 0x2c947c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C947Cu;
    {
        const bool branch_taken_0x2c947c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c947c) {
            ctx->pc = 0x2C9468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9468;
        }
    }
    ctx->pc = 0x2C9484u;
    // 0x2c9484: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2c9484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_2c9488:
    // 0x2c9488: 0xe6400b9c  swc1        $f0, 0xB9C($s2)
    ctx->pc = 0x2c9488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2972), bits); }
    // 0x2c948c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c9490: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x2C9490u;
    {
        const bool branch_taken_0x2c9490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9490u;
        // 0x2c9494: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9490) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C9498u;
label_2c9498:
    // 0x2c9498: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c9498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c949c: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2c94a0:
    // 0x2c94a0: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C94A0u;
    SET_GPR_U32(ctx, 31, 0x2C94A8u);
    ctx->pc = 0x2C94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94A0u;
    // 0x2c94a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C94A0u, 0x2C94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94A8u;
label_2c94a8:
    // 0x2c94a8: 0x10400166  beqz        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x2C94A8u;
    {
        const bool branch_taken_0x2c94a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A8u;
        // 0x2c94ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94a8) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C94B0u;
    // 0x2c94b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c94b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c94b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c94b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c94b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c94bc: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C94BCu;
    SET_GPR_U32(ctx, 31, 0x2C94C4u);
    ctx->pc = 0x2C94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94BCu;
    // 0x2c94c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C94BCu, 0x2C94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94C4u;
label_2c94c4:
    // 0x2c94c4: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c94c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c94cc: 0xae420a9c  sw          $v0, 0xA9C($s2)
    ctx->pc = 0x2c94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 2));
    // 0x2c94d0: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c94d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c94d4: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x2C94D4u;
    {
        const bool branch_taken_0x2c94d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94D4u;
        // 0x2c94d8: 0xae430aa0  sw          $v1, 0xAA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94d4) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C94DCu;
label_2c94dc:
    // 0x2c94dc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c94e0: 0xc7809200  lwc1        $f0, -0x6E00($gp)
    ctx->pc = 0x2c94e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c94e4: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x2c94e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c94e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c94e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c94ec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C94ECu;
    {
        const bool branch_taken_0x2c94ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c94ec) {
            ctx->pc = 0x2C951Cu;
            goto label_2c951c;
        }
    }
    ctx->pc = 0x2C94F4u;
    // 0x2c94f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c94f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c94f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c94f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c94fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c94fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9500: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9500u;
    {
        const bool branch_taken_0x2c9500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9500) {
            ctx->pc = 0x2C951Cu;
            goto label_2c951c;
        }
    }
    ctx->pc = 0x2C9508u;
    // 0x2c9508: 0x8e430a90  lw          $v1, 0xA90($s2)
    ctx->pc = 0x2c9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c950c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c9510: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9510u;
    {
        const bool branch_taken_0x2c9510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9510u;
        // 0x2c9514: 0x34620006  ori         $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9510) {
            ctx->pc = 0x2C951Cu;
            goto label_2c951c;
        }
    }
    ctx->pc = 0x2C9518u;
    // 0x2c9518: 0xae420a90  sw          $v0, 0xA90($s2)
    ctx->pc = 0x2c9518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
label_2c951c:
    // 0x2c951c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C951Cu;
    SET_GPR_U32(ctx, 31, 0x2C9524u);
    ctx->pc = 0x2C9520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C951Cu;
    // 0x2c9520: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C951Cu, 0x2C9524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9524u;
label_2c9524:
    // 0x2c9524: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x2C9524u;
    {
        const bool branch_taken_0x2c9524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9524u;
        // 0x2c9528: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9524) {
            ctx->pc = 0x2C9A48u;
            goto label_2c9a48;
        }
    }
    ctx->pc = 0x2C952Cu;
    // 0x2c952c: 0x8e530ae4  lw          $s3, 0xAE4($s2)
    ctx->pc = 0x2c952cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9530: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c9530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9534: 0xc6630030  lwc1        $f3, 0x30($s3)
    ctx->pc = 0x2c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9538: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2c9538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c953c: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x2c953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c9540: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c9540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c9544: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9548: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c9548u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c954c: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x2c954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c9550: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c9550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c9554: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c9554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c9558: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c9558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c955c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c955cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c9560: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c9560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c9564: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c9564u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9568: 0x0  nop
    ctx->pc = 0x2c9568u;
    // NOP
    // 0x2c956c: 0x0  nop
    ctx->pc = 0x2c956cu;
    // NOP
    // 0x2c9570: 0x460c0504  c1          0xC0504
    ctx->pc = 0x2c9570u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c9574: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2c9574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9578: 0x0  nop
    ctx->pc = 0x2c9578u;
    // NOP
    // 0x2c957c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C957Cu;
    {
        const bool branch_taken_0x2c957c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c957c) {
            ctx->pc = 0x2C9580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C957Cu;
            // 0x2c9580: 0x8e4402a8  lw          $a0, 0x2A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9598u;
            goto label_2c9598;
        }
    }
    ctx->pc = 0x2C9584u;
    // 0x2c9584: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C9584u;
    SET_GPR_U32(ctx, 31, 0x2C958Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C9584u, 0x2C958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C958Cu;
label_2c958c:
    // 0x2c958c: 0x8e530ae4  lw          $s3, 0xAE4($s2)
    ctx->pc = 0x2c958cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9590: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c9590u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c9594: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c9594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2c9598:
    // 0x2c9598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c9598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c959c: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C959Cu;
    SET_GPR_U32(ctx, 31, 0x2C95A4u);
    ctx->pc = 0x2C95A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C959Cu;
    // 0x2c95a0: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C959Cu, 0x2C95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95A4u;
label_2c95a4:
    // 0x2c95a4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C95A4u;
    {
        const bool branch_taken_0x2c95a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c95a4) {
            ctx->pc = 0x2C95A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C95A4u;
            // 0x2c95a8: 0xc622004c  lwc1        $f2, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C961Cu;
            goto label_2c961c;
        }
    }
    ctx->pc = 0x2C95ACu;
    // 0x2c95ac: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C95ACu;
    SET_GPR_U32(ctx, 31, 0x2C95B4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C95ACu, 0x2C95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95B4u;
label_2c95b4:
    // 0x2c95b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C95B4u;
    {
        const bool branch_taken_0x2c95b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95B4u;
        // 0x2c95b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95b4) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C95BCu;
    // 0x2c95bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c95bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c95c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C95C0u;
    {
        const bool branch_taken_0x2c95c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95C0u;
        // 0x2c95c4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95c0) {
            ctx->pc = 0x2C95DCu;
            goto label_2c95dc;
        }
    }
    ctx->pc = 0x2C95C8u;
label_2c95c8:
    // 0x2c95c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c95c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c95cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c95ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c95d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c95d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c95d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c95d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c95d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c95d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c95dc:
    // 0x2c95dc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c95dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c95e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c95e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c95e4: 0xc7819204  lwc1        $f1, -0x6DFC($gp)
    ctx->pc = 0x2c95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c95e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c95e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c95ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c95ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c95f0: 0x0  nop
    ctx->pc = 0x2c95f0u;
    // NOP
    // 0x2c95f4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C95F4u;
    {
        const bool branch_taken_0x2c95f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95F4u;
        // 0x2c95f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95f4) {
            ctx->pc = 0x2C9614u;
            goto label_2c9614;
        }
    }
    ctx->pc = 0x2C95FCu;
    // 0x2c95fc: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2c95fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2c9600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9604: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c9604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9608: 0x0  nop
    ctx->pc = 0x2c9608u;
    // NOP
    // 0x2c960c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2C960Cu;
    {
        const bool branch_taken_0x2c960c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c960c) {
            ctx->pc = 0x2C9610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C960Cu;
            // 0x2c9610: 0xc622004c  lwc1        $f2, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C961Cu;
            goto label_2c961c;
        }
    }
    ctx->pc = 0x2C9614u;
label_2c9614:
    // 0x2c9614: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2C9614u;
    {
        const bool branch_taken_0x2c9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9614u;
        // 0x2c9618: 0xae420aa8  sw          $v0, 0xAA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9614) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C961Cu;
label_2c961c:
    // 0x2c961c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c961cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c9620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9624: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9628: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c9628u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c962c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c9630: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c9630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c9634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9638: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2c9638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c963c: 0xe622004c  swc1        $f2, 0x4C($s1)
    ctx->pc = 0x2c963cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c9640: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2c9644: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9644u;
    {
        const bool branch_taken_0x2c9644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9644u;
        // 0x2c9648: 0xe6220054  swc1        $f2, 0x54($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9644) {
            ctx->pc = 0x2C9654u;
            goto label_2c9654;
        }
    }
    ctx->pc = 0x2C964Cu;
    // 0x2c964c: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2c964cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c9650: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c9650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2c9654:
    // 0x2c9654: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9658: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c9658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c965c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C965Cu;
    {
        const bool branch_taken_0x2c965c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c965c) {
            ctx->pc = 0x2C966Cu;
            goto label_2c966c;
        }
    }
    ctx->pc = 0x2C9664u;
    // 0x2c9664: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c9664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c9668: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_2c966c:
    // 0x2c966c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c966cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c9670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9678: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c9678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c967c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9680: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C9680u;
    SET_GPR_U32(ctx, 31, 0x2C9688u);
    ctx->pc = 0x2C9684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9680u;
    // 0x2c9684: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C9680u, 0x2C9688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9688u;
label_2c9688:
    // 0x2c9688: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c9688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c968c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c968cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9690: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c9694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9698: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c9698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c969c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c96a0: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c96a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c96a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c96a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c96a8: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c96ac: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C96ACu;
    SET_GPR_U32(ctx, 31, 0x2C96B4u);
    ctx->pc = 0x2C96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C96ACu;
    // 0x2c96b0: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C96ACu, 0x2C96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96B4u;
label_2c96b4:
    // 0x2c96b4: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c96b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c96b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c96bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c96bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c96c0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c96c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c96c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c96c8: 0xe6400aec  swc1        $f0, 0xAEC($s2)
    ctx->pc = 0x2c96c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c96cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c96ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c96d0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c96d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c96d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c96d8: 0xe6410af0  swc1        $f1, 0xAF0($s2)
    ctx->pc = 0x2c96d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c96dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c96dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c96e0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c96e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c96e4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c96e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c96e8: 0xe6400af4  swc1        $f0, 0xAF4($s2)
    ctx->pc = 0x2c96e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
    // 0x2c96ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c96ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c96f0: 0x80af174  j           func_2BC5D0
    ctx->pc = 0x2C96F0u;
    ctx->pc = 0x2C96F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C96F0u;
    // 0x2c96f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    rotateChr_0x2bc5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C96F8u;
label_2c96f8:
    // 0x2c96f8: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c96fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c96fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c9700: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C9700u;
    {
        const bool branch_taken_0x2c9700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9700u;
        // 0x2c9704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9700) {
            ctx->pc = 0x2C9814u;
            goto label_2c9814;
        }
    }
    ctx->pc = 0x2C9708u;
    // 0x2c9708: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c9708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c970c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9710: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c9710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c9714: 0x240501c8  addiu       $a1, $zero, 0x1C8
    ctx->pc = 0x2c9714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    // 0x2c9718: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C9718u;
    SET_GPR_U32(ctx, 31, 0x2C9720u);
    ctx->pc = 0x2C971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9718u;
    // 0x2c971c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C9718u, 0x2C9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9720u;
label_2c9720:
    // 0x2c9720: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9720u;
    SET_GPR_U32(ctx, 31, 0x2C9728u);
    ctx->pc = 0x2C9724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9720u;
    // 0x2c9724: 0xe6540b4c  swc1        $f20, 0xB4C($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9720u, 0x2C9728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9728u;
label_2c9728:
    // 0x2c9728: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9728u;
    {
        const bool branch_taken_0x2c9728 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9728u;
        // 0x2c972c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9728) {
            ctx->pc = 0x2C973Cu;
            goto label_2c973c;
        }
    }
    ctx->pc = 0x2C9730u;
    // 0x2c9730: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9734u;
    {
        const bool branch_taken_0x2c9734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9734u;
        // 0x2c9738: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9734) {
            ctx->pc = 0x2C9750u;
            goto label_2c9750;
        }
    }
    ctx->pc = 0x2C973Cu;
label_2c973c:
    // 0x2c973c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9744: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9748: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c974c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c974cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c9750:
    // 0x2c9750: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c9750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c9754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9758: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c9758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c975c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9760: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c9760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c9764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c9764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9768: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2C9768u;
    {
        const bool branch_taken_0x2c9768 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9768) {
            ctx->pc = 0x2C97B8u;
            goto label_2c97b8;
        }
    }
    ctx->pc = 0x2C9770u;
    // 0x2c9770: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C9770u;
    SET_GPR_U32(ctx, 31, 0x2C9778u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C9770u, 0x2C9778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9778u;
label_2c9778:
    // 0x2c9778: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9778u;
    {
        const bool branch_taken_0x2c9778 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9778u;
        // 0x2c977c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9778) {
            ctx->pc = 0x2C978Cu;
            goto label_2c978c;
        }
    }
    ctx->pc = 0x2C9780u;
    // 0x2c9780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9784u;
    {
        const bool branch_taken_0x2c9784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9784u;
        // 0x2c9788: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9784) {
            ctx->pc = 0x2C97A0u;
            goto label_2c97a0;
        }
    }
    ctx->pc = 0x2C978Cu;
label_2c978c:
    // 0x2c978c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c9794: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c9798: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c9798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c979c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c979cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c97a0:
    // 0x2c97a0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c97a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c97a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c97a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c97a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c97a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c97ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c97acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c97b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C97B0u;
    {
        const bool branch_taken_0x2c97b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97B0u;
        // 0x2c97b4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97b0) {
            ctx->pc = 0x2C9800u;
            goto label_2c9800;
        }
    }
    ctx->pc = 0x2C97B8u;
label_2c97b8:
    // 0x2c97b8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C97B8u;
    SET_GPR_U32(ctx, 31, 0x2C97C0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C97B8u, 0x2C97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97C0u;
label_2c97c0:
    // 0x2c97c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C97C0u;
    {
        const bool branch_taken_0x2c97c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97C0u;
        // 0x2c97c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97c0) {
            ctx->pc = 0x2C97D4u;
            goto label_2c97d4;
        }
    }
    ctx->pc = 0x2C97C8u;
    // 0x2c97c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c97c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c97cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C97CCu;
    {
        const bool branch_taken_0x2c97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97CCu;
        // 0x2c97d0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97cc) {
            ctx->pc = 0x2C97E8u;
            goto label_2c97e8;
        }
    }
    ctx->pc = 0x2C97D4u;
label_2c97d4:
    // 0x2c97d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c97d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c97d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c97dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c97dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c97e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c97e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c97e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c97e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c97e8:
    // 0x2c97e8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c97e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c97ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c97ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c97f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c97f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c97f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c97f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c97f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c97f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c97fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c97fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c9800:
    // 0x2c9800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9804: 0xe6400aac  swc1        $f0, 0xAAC($s2)
    ctx->pc = 0x2c9804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2732), bits); }
    // 0x2c9808: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c980c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2C980Cu;
    {
        const bool branch_taken_0x2c980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C980Cu;
        // 0x2c9810: 0xae420aa8  sw          $v0, 0xAA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c980c) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C9814u;
label_2c9814:
    // 0x2c9814: 0xc085608  jal         func_215820
    ctx->pc = 0x2C9814u;
    SET_GPR_U32(ctx, 31, 0x2C981Cu);
    ctx->pc = 0x2C9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9814u;
    // 0x2c9818: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C9814u, 0x2C981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C981Cu;
label_2c981c:
    // 0x2c981c: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C981Cu;
    {
        const bool branch_taken_0x2c981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C981Cu;
        // 0x2c9820: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c981c) {
            ctx->pc = 0x2C9A48u;
            goto label_2c9a48;
        }
    }
    ctx->pc = 0x2C9824u;
    // 0x2c9824: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c9824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9828: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c9828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c982c: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c9830: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2c9830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2c9834: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C9834u;
    SET_GPR_U32(ctx, 31, 0x2C983Cu);
    ctx->pc = 0x2C9838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9834u;
    // 0x2c9838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C9834u, 0x2C983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C983Cu;
label_2c983c:
    // 0x2c983c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2C983Cu;
    {
        const bool branch_taken_0x2c983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C983Cu;
        // 0x2c9840: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c983c) {
            ctx->pc = 0x2C9A48u;
            goto label_2c9a48;
        }
    }
    ctx->pc = 0x2C9844u;
    // 0x2c9844: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x2c9844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9848: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c9848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c984c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c984cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9850: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9854: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c9854u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c9858: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c985c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c9860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9864: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2c9864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9868: 0xe622004c  swc1        $f2, 0x4C($s1)
    ctx->pc = 0x2c9868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2c986c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2c9870: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9870u;
    {
        const bool branch_taken_0x2c9870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9870u;
        // 0x2c9874: 0xe6220054  swc1        $f2, 0x54($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9870) {
            ctx->pc = 0x2C9880u;
            goto label_2c9880;
        }
    }
    ctx->pc = 0x2C9878u;
    // 0x2c9878: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2c9878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c987c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2c987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2c9880:
    // 0x2c9880: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9884: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c9884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9888: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9888u;
    {
        const bool branch_taken_0x2c9888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9888) {
            ctx->pc = 0x2C9898u;
            goto label_2c9898;
        }
    }
    ctx->pc = 0x2C9890u;
    // 0x2c9890: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c9890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c9894: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2c9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_2c9898:
    // 0x2c9898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c989c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c989cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c98a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c98a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c98a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c98a8: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C98A8u;
    SET_GPR_U32(ctx, 31, 0x2C98B0u);
    ctx->pc = 0x2C98ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98A8u;
    // 0x2c98ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C98A8u, 0x2C98B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98B0u;
label_2c98b0:
    // 0x2c98b0: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c98b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c98b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c98b8: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c98bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c98bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98c0: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c98c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c98c4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c98c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c98c8: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c98cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c98ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c98d0: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c98d4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C98D4u;
    SET_GPR_U32(ctx, 31, 0x2C98DCu);
    ctx->pc = 0x2C98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98D4u;
    // 0x2c98d8: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C98D4u, 0x2C98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98DCu;
label_2c98dc:
    // 0x2c98dc: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c98e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c98e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c98e8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c98e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c98ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c98ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c98f0: 0xe6400aec  swc1        $f0, 0xAEC($s2)
    ctx->pc = 0x2c98f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c98f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c98f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c98f8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c98fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c98fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9900: 0xe6410af0  swc1        $f1, 0xAF0($s2)
    ctx->pc = 0x2c9900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c9904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9908: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c9908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c990c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c9910: 0xe6400af4  swc1        $f0, 0xAF4($s2)
    ctx->pc = 0x2c9910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
    // 0x2c9914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c9914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9918: 0x80af174  j           func_2BC5D0
    ctx->pc = 0x2C9918u;
    ctx->pc = 0x2C991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9918u;
    // 0x2c991c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    rotateChr_0x2bc5d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9920u;
label_2c9920:
    // 0x2c9920: 0xc6410b4c  lwc1        $f1, 0xB4C($s2)
    ctx->pc = 0x2c9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9924: 0xc6400aac  lwc1        $f0, 0xAAC($s2)
    ctx->pc = 0x2c9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9928: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c992c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2C992Cu;
    {
        const bool branch_taken_0x2c992c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c992c) {
            ctx->pc = 0x2C998Cu;
            goto label_2c998c;
        }
    }
    ctx->pc = 0x2C9934u;
    // 0x2c9934: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C9934u;
    SET_GPR_U32(ctx, 31, 0x2C993Cu);
    ctx->pc = 0x2C9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9934u;
    // 0x2c9938: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C9934u, 0x2C993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C993Cu;
label_2c993c:
    // 0x2c993c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C993Cu;
    {
        const bool branch_taken_0x2c993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C993Cu;
        // 0x2c9940: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c993c) {
            ctx->pc = 0x2C998Cu;
            goto label_2c998c;
        }
    }
    ctx->pc = 0x2C9944u;
    // 0x2c9944: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9944u;
    {
        const bool branch_taken_0x2c9944 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9944u;
        // 0x2c9948: 0x2404008a  addiu       $a0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9944) {
            ctx->pc = 0x2C9954u;
            goto label_2c9954;
        }
    }
    ctx->pc = 0x2C994Cu;
    // 0x2c994c: 0xc081546  jal         func_205518
    ctx->pc = 0x2C994Cu;
    SET_GPR_U32(ctx, 31, 0x2C9954u);
    ctx->pc = 0x2C9950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C994Cu;
    // 0x2c9950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2C994Cu, 0x2C9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9954u;
label_2c9954:
    // 0x2c9954: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x2c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c9958: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c9958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c995c: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x2c995cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c9960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9964: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2c9964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9968: 0xae430aa8  sw          $v1, 0xAA8($s2)
    ctx->pc = 0x2c9968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2728), GPR_U32(ctx, 3));
    // 0x2c996c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9970: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9974: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c9974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c9978: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c9978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c997c: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c997cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c9980: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c9980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9984: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C9984u;
    {
        const bool branch_taken_0x2c9984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9984u;
        // 0x2c9988: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9984) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C998Cu;
label_2c998c:
    // 0x2c998c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C998Cu;
    SET_GPR_U32(ctx, 31, 0x2C9994u);
    ctx->pc = 0x2C9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C998Cu;
    // 0x2c9990: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C998Cu, 0x2C9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9994u;
label_2c9994:
    // 0x2c9994: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C9994u;
    {
        const bool branch_taken_0x2c9994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9994u;
        // 0x2c9998: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9994) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C999Cu;
    // 0x2c999c: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2c999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x2c99a0: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c99a4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c99a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c99a8: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c99ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c99acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c99b0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2c99b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c99b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c99b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c99bc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c99c0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c99c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c99c4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c99c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c99c8: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c99c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c99cc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2c99ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c99d0: 0xc0b1a60  jal         func_2C6980
    ctx->pc = 0x2C99D0u;
    SET_GPR_U32(ctx, 31, 0x2C99D8u);
    ctx->pc = 0x2C99D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99D0u;
    // 0x2c99d4: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6980u, 0x2C99D0u, 0x2C99D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99D8u;
label_2c99d8:
    // 0x2c99d8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C99D8u;
    {
        const bool branch_taken_0x2c99d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99D8u;
        // 0x2c99dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d8) {
            ctx->pc = 0x2C9A44u;
            goto label_2c9a44;
        }
    }
    ctx->pc = 0x2C99E0u;
    // 0x2c99e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c99e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c99e4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c99e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c99e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c99ec: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C99ECu;
    SET_GPR_U32(ctx, 31, 0x2C99F4u);
    ctx->pc = 0x2C99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99ECu;
    // 0x2c99f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C99ECu, 0x2C99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99F4u;
label_2c99f4:
    // 0x2c99f4: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c99f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c99f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c99fc: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c9a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a04: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c9a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c9a08: 0xe6540b4c  swc1        $f20, 0xB4C($s2)
    ctx->pc = 0x2c9a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2892), bits); }
    // 0x2c9a0c: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c9a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c9a10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a14: 0xae460a9c  sw          $a2, 0xA9C($s2)
    ctx->pc = 0x2c9a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 6));
    // 0x2c9a18: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C9A18u;
    SET_GPR_U32(ctx, 31, 0x2C9A20u);
    ctx->pc = 0x2C9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A18u;
    // 0x2c9a1c: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C9A18u, 0x2C9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A20u;
label_2c9a20:
    // 0x2c9a20: 0x8e420ae4  lw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c9a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a28: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c9a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a2c: 0xe6400aec  swc1        $f0, 0xAEC($s2)
    ctx->pc = 0x2c9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2796), bits); }
    // 0x2c9a30: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c9a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9a34: 0xe6410af0  swc1        $f1, 0xAF0($s2)
    ctx->pc = 0x2c9a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2800), bits); }
    // 0x2c9a38: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c9a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a3c: 0xc0af174  jal         func_2BC5D0
    ctx->pc = 0x2C9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A44u);
    ctx->pc = 0x2C9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A3Cu;
    // 0x2c9a40: 0xe6400af4  swc1        $f0, 0xAF4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2804), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D0u, 0x2C9A3Cu, 0x2C9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A44u;
label_2c9a44:
    // 0x2c9a44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c9a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9a48:
    // 0x2c9a48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c9a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9a4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c9a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9a50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c9a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9a54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c9a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9a5c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c9a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c9a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A60u;
        // 0x2c9a64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9A68u;
}
