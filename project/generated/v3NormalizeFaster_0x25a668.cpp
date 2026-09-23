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

// Function: v3NormalizeFaster
// Address: 0x25a668 - 0x25a70c
void v3NormalizeFaster_0x25a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("v3NormalizeFaster_0x25a668");
#endif

    switch (ctx->pc) {
        case 0x25a6c0u: goto label_25a6c0;
        default: break;
    }

    ctx->pc = 0x25a668u;

    // 0x25a668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a66c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a678: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a67c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x25a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a680: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a684: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x25a684u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x25a688: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a68c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25a68cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25a690: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25a690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25a694: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25a694u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a698: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x25a698u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25a69c: 0x0  nop
    ctx->pc = 0x25a69cu;
    // NOP
    // 0x25a6a0: 0x0  nop
    ctx->pc = 0x25a6a0u;
    // NOP
    // 0x25a6a4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25a6a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25a6a8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25a6a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a6ac: 0x0  nop
    ctx->pc = 0x25a6acu;
    // NOP
    // 0x25a6b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25A6B0u;
    {
        const bool branch_taken_0x25a6b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6B0u;
        // 0x25a6b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6b0) {
            ctx->pc = 0x25A6C4u;
            goto label_25a6c4;
        }
    }
    ctx->pc = 0x25A6B8u;
    // 0x25a6b8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25A6B8u;
    SET_GPR_U32(ctx, 31, 0x25A6C0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25A6B8u, 0x25A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6C0u;
label_25a6c0:
    // 0x25a6c0: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x25a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25a6c4:
    // 0x25a6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a6c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25a6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25a6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a6d0: 0x0  nop
    ctx->pc = 0x25a6d0u;
    // NOP
    // 0x25a6d4: 0x0  nop
    ctx->pc = 0x25a6d4u;
    // NOP
    // 0x25a6d8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x25a6d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x25a6dc: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x25a6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25a6e0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x25a6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25a6e4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a6e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25a6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25a6ec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25a6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25a6f0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a6f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25a6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25a6fc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x25a6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25a700: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a704: 0x3e00008  jr          $ra
    ctx->pc = 0x25A704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A704u;
        // 0x25a708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A70Cu;
}
