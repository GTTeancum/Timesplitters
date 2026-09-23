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

// Function: hittestMoveCircleToCircle
// Address: 0x2094a0 - 0x2095b8
void hittestMoveCircleToCircle_0x2094a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestMoveCircleToCircle_0x2094a0");
#endif

    switch (ctx->pc) {
        case 0x209520u: goto label_209520;
        case 0x209558u: goto label_209558;
        default: break;
    }

    ctx->pc = 0x2094a0u;

    // 0x2094a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2094a4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2094a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2094a8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2094a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2094ac: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x2094acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x2094b0: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x2094b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x2094b4: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2094b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2094b8: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2094b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2094bc: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x2094bcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2094c0: 0x46006706  mov.s       $f28, $f12
    ctx->pc = 0x2094c0u;
    ctx->f[28] = FPU_MOV_S(ctx->f[12]);
    // 0x2094c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2094c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2094c8: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x2094c8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2094cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2094ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2094d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2094d4: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x2094d4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2094d8: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2094d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2094dc: 0x46008e86  mov.s       $f26, $f17
    ctx->pc = 0x2094dcu;
    ctx->f[26] = FPU_MOV_S(ctx->f[17]);
    // 0x2094e0: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2094e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2094e4: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x2094e4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x2094e8: 0x0  nop
    ctx->pc = 0x2094e8u;
    // NOP
    // 0x2094ec: 0x0  nop
    ctx->pc = 0x2094ecu;
    // NOP
    // 0x2094f0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2094f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2094f4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2094f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2094f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2094f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2094fc: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2094fcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x209500: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x209500u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x209504: 0x460096c6  mov.s       $f27, $f18
    ctx->pc = 0x209504u;
    ctx->f[27] = FPU_MOV_S(ctx->f[18]);
    // 0x209508: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x209508u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20950c: 0x0  nop
    ctx->pc = 0x20950cu;
    // NOP
    // 0x209510: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x209510u;
    {
        const bool branch_taken_0x209510 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209510u;
        // 0x209514: 0x46009d06  mov.s       $f20, $f19 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209510) {
            ctx->pc = 0x209520u;
            goto label_209520;
        }
    }
    ctx->pc = 0x209518u;
    // 0x209518: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x209518u;
    SET_GPR_U32(ctx, 31, 0x209520u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x209518u, 0x209520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209520u;
label_209520:
    // 0x209520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209524: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x209524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x209528: 0x4614c380  add.s       $f14, $f24, $f20
    ctx->pc = 0x209528u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
    // 0x20952c: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x20952cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x209530: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x209530u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x209534: 0x0  nop
    ctx->pc = 0x209534u;
    // NOP
    // 0x209538: 0x0  nop
    ctx->pc = 0x209538u;
    // NOP
    // 0x20953c: 0x4600bd03  div.s       $f20, $f23, $f0
    ctx->pc = 0x20953cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[20] = ctx->f[23] / ctx->f[0];
    // 0x209540: 0x4600d446  mov.s       $f17, $f26
    ctx->pc = 0x209540u;
    ctx->f[17] = FPU_MOV_S(ctx->f[26]);
    // 0x209544: 0x4600dc86  mov.s       $f18, $f27
    ctx->pc = 0x209544u;
    ctx->f[18] = FPU_MOV_S(ctx->f[27]);
    // 0x209548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20954c: 0x4614abc2  mul.s       $f15, $f21, $f20
    ctx->pc = 0x20954cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x209550: 0xc0823dc  jal         func_208F70
    ctx->pc = 0x209550u;
    SET_GPR_U32(ctx, 31, 0x209558u);
    ctx->pc = 0x209554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209550u;
    // 0x209554: 0x4614b402  mul.s       $f16, $f22, $f20 (Delay Slot)
    ctx->f[16] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F70u, 0x209550u, 0x209558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209558u;
label_209558:
    // 0x209558: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x209558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20955c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20955Cu;
    {
        const bool branch_taken_0x20955c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20955c) {
            ctx->pc = 0x20956Cu;
            goto label_20956c;
        }
    }
    ctx->pc = 0x209564u;
    // 0x209564: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209564u;
    {
        const bool branch_taken_0x209564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209564u;
        // 0x209568: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209564) {
            ctx->pc = 0x209584u;
            goto label_209584;
        }
    }
    ctx->pc = 0x20956Cu;
label_20956c:
    // 0x20956c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20956cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x209570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209574: 0x0  nop
    ctx->pc = 0x209574u;
    // NOP
    // 0x209578: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x209578u;
    {
        const bool branch_taken_0x209578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209578) {
            ctx->pc = 0x20957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209578u;
            // 0x20957c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209584u;
            goto label_209584;
        }
    }
    ctx->pc = 0x209580u;
    // 0x209580: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x209580u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_209584:
    // 0x209584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20958c: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x20958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x209590: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x209590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x209594: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x209594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x209598: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x209598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20959c: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x20959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2095a0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2095a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2095a4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2095a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2095a8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2095a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2095ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2095acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2095b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2095B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2095B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095B0u;
        // 0x2095b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2095B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2095B8u;
}
