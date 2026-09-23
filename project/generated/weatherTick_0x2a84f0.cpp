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

// Function: weatherTick
// Address: 0x2a84f0 - 0x2a8620
void weatherTick_0x2a84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherTick_0x2a84f0");
#endif

    switch (ctx->pc) {
        case 0x2a852cu: goto label_2a852c;
        default: break;
    }

    ctx->pc = 0x2a84f0u;

    // 0x2a84f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a84f4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2a84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a84f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a84fc: 0xc7828e3c  lwc1        $f2, -0x71C4($gp)
    ctx->pc = 0x2a84fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8500: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x2a8500u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x2a8504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a850c: 0x2630a6d0  addiu       $s0, $s1, -0x5930
    ctx->pc = 0x2a850cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944464));
    // 0x2a8510: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a8510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a8514: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2a8514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a8518: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2a8518u;
    { uint32_t bits = FAST_READ32(0x36A70Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a851c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a851cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8520: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a8520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a8524: 0xc0aa032  jal         func_2A80C8
    ctx->pc = 0x2A8524u;
    SET_GPR_U32(ctx, 31, 0x2A852Cu);
    ctx->pc = 0x2A8528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8524u;
    // 0x2a8528: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A80C8u, 0x2A8524u, 0x2A852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A852Cu;
label_2a852c:
    // 0x2a852c: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x2a852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8530: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x2a8530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x2a8534: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8538: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2a8538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a853c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2a853cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a8540: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a8540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8544: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8548: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2a8548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a854c: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x2a854cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2a8550: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8550u;
    {
        const bool branch_taken_0x2a8550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8550u;
        // 0x2a8554: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8550) {
            ctx->pc = 0x2A856Cu;
            goto label_2a856c;
        }
    }
    ctx->pc = 0x2A8558u;
    // 0x2a8558: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2a8558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2a855c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a855cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8560: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2a8560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8564u;
    {
        const bool branch_taken_0x2a8564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8564u;
        // 0x2a8568: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8564) {
            ctx->pc = 0x2A8580u;
            goto label_2a8580;
        }
    }
    ctx->pc = 0x2A856Cu;
label_2a856c:
    // 0x2a856c: 0x3c01c110  lui         $at, 0xC110
    ctx->pc = 0x2a856cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49424 << 16));
    // 0x2a8570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8574: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2a8574u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x2a8578: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2a8578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a857c: 0x0  nop
    ctx->pc = 0x2a857cu;
    // NOP
label_2a8580:
    // 0x2a8580: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8580u;
    {
        const bool branch_taken_0x2a8580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8580) {
            ctx->pc = 0x2A8584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8580u;
            // 0x2a8584: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8588u;
            goto label_2a8588;
        }
    }
    ctx->pc = 0x2A8588u;
label_2a8588:
    // 0x2a8588: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2a8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2a858c: 0x2623a6d0  addiu       $v1, $s1, -0x5930
    ctx->pc = 0x2a858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944464));
    // 0x2a8590: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2a8590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2a8594: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a8594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a8598: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2a8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a859c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2a859cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a85a0: 0x0  nop
    ctx->pc = 0x2a85a0u;
    // NOP
    // 0x2a85a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A85A4u;
    {
        const bool branch_taken_0x2a85a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85A4u;
        // 0x2a85a8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85a4) {
            ctx->pc = 0x2A85B0u;
            goto label_2a85b0;
        }
    }
    ctx->pc = 0x2A85ACu;
    // 0x2a85ac: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x2a85acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_2a85b0:
    // 0x2a85b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a85b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a85b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a85b8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2a85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a85bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a85bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a85c0: 0x0  nop
    ctx->pc = 0x2a85c0u;
    // NOP
    // 0x2a85c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2A85C4u;
    {
        const bool branch_taken_0x2a85c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85C4u;
        // 0x2a85c8: 0xe4620034  swc1        $f2, 0x34($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85c4) {
            ctx->pc = 0x2A85E8u;
            goto label_2a85e8;
        }
    }
    ctx->pc = 0x2A85CCu;
    // 0x2a85cc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2a85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a85d0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2a85d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a85d4: 0x0  nop
    ctx->pc = 0x2a85d4u;
    // NOP
    // 0x2a85d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A85D8u;
    {
        const bool branch_taken_0x2a85d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a85d8) {
            ctx->pc = 0x2A85DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A85D8u;
            // 0x2a85dc: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A85E0u;
            goto label_2a85e0;
        }
    }
    ctx->pc = 0x2A85E0u;
label_2a85e0:
    // 0x2a85e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A85E0u;
    {
        const bool branch_taken_0x2a85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85E0u;
        // 0x2a85e4: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85e0) {
            ctx->pc = 0x2A860Cu;
            goto label_2a860c;
        }
    }
    ctx->pc = 0x2A85E8u;
label_2a85e8:
    // 0x2a85e8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2a85e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a85ec: 0x3c01c110  lui         $at, 0xC110
    ctx->pc = 0x2a85ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49424 << 16));
    // 0x2a85f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a85f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a85f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a85f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a85f8: 0x0  nop
    ctx->pc = 0x2a85f8u;
    // NOP
    // 0x2a85fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A85FCu;
    {
        const bool branch_taken_0x2a85fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85FCu;
        // 0x2a8600: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85fc) {
            ctx->pc = 0x2A8608u;
            goto label_2a8608;
        }
    }
    ctx->pc = 0x2A8604u;
    // 0x2a8604: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2a8604u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2a8608:
    // 0x2a8608: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x2a8608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_2a860c:
    // 0x2a860c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a860cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8610: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a8610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8618: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8618u;
        // 0x2a861c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8620u;
}
