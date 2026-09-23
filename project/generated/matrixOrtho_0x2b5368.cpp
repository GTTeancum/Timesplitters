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

// Function: matrixOrtho
// Address: 0x2b5368 - 0x2b5424
void matrixOrtho_0x2b5368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixOrtho_0x2b5368");
#endif

    ctx->pc = 0x2b5368u;

    // 0x2b5368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b536c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b536cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5370: 0x460e6101  sub.s       $f4, $f12, $f14
    ctx->pc = 0x2b5370u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x2b5374: 0x460f6941  sub.s       $f5, $f13, $f15
    ctx->pc = 0x2b5374u;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x2b5378: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b5378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b537c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b537cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5380: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2b5380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2b5384: 0x461088c0  add.s       $f3, $f17, $f16
    ctx->pc = 0x2b5384u;
    ctx->f[3] = FPU_ADD_S(ctx->f[17], ctx->f[16]);
    // 0x2b5388: 0x460c7081  sub.s       $f2, $f14, $f12
    ctx->pc = 0x2b5388u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x2b538c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b538cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b5390: 0x460d7801  sub.s       $f0, $f15, $f13
    ctx->pc = 0x2b5390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    // 0x2b5394: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2b5394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2b5398: 0x46118401  sub.s       $f16, $f16, $f17
    ctx->pc = 0x2b5398u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[17]);
    // 0x2b539c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2b539cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2b53a0: 0x460c7380  add.s       $f14, $f14, $f12
    ctx->pc = 0x2b53a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
    // 0x2b53a4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2b53a8: 0x460d7bc0  add.s       $f15, $f15, $f13
    ctx->pc = 0x2b53a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[13]);
    // 0x2b53ac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2b53acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2b53b0: 0x0  nop
    ctx->pc = 0x2b53b0u;
    // NOP
    // 0x2b53b4: 0x0  nop
    ctx->pc = 0x2b53b4u;
    // NOP
    // 0x2b53b8: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x2b53b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
    // 0x2b53bc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2b53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2b53c0: 0x0  nop
    ctx->pc = 0x2b53c0u;
    // NOP
    // 0x2b53c4: 0x0  nop
    ctx->pc = 0x2b53c4u;
    // NOP
    // 0x2b53c8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b53c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2b53cc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2b53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2b53d0: 0x0  nop
    ctx->pc = 0x2b53d0u;
    // NOP
    // 0x2b53d4: 0x0  nop
    ctx->pc = 0x2b53d4u;
    // NOP
    // 0x2b53d8: 0x461018c3  div.s       $f3, $f3, $f16
    ctx->pc = 0x2b53d8u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[16];
    // 0x2b53dc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2b53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2b53e0: 0x0  nop
    ctx->pc = 0x2b53e0u;
    // NOP
    // 0x2b53e4: 0x0  nop
    ctx->pc = 0x2b53e4u;
    // NOP
    // 0x2b53e8: 0x46047383  div.s       $f14, $f14, $f4
    ctx->pc = 0x2b53e8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[4];
    // 0x2b53ec: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2b53ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2b53f0: 0x0  nop
    ctx->pc = 0x2b53f0u;
    // NOP
    // 0x2b53f4: 0x0  nop
    ctx->pc = 0x2b53f4u;
    // NOP
    // 0x2b53f8: 0x46057bc3  div.s       $f15, $f15, $f5
    ctx->pc = 0x2b53f8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[5];
    // 0x2b53fc: 0x0  nop
    ctx->pc = 0x2b53fcu;
    // NOP
    // 0x2b5400: 0x0  nop
    ctx->pc = 0x2b5400u;
    // NOP
    // 0x2b5404: 0x46100843  div.s       $f1, $f1, $f16
    ctx->pc = 0x2b5404u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[16];
    // 0x2b5408: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2b5408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b540c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2b540cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b5410: 0xe4830038  swc1        $f3, 0x38($a0)
    ctx->pc = 0x2b5410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2b5414: 0xe48e0030  swc1        $f14, 0x30($a0)
    ctx->pc = 0x2b5414u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2b5418: 0xe48f0034  swc1        $f15, 0x34($a0)
    ctx->pc = 0x2b5418u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2b541c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B541Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B541Cu;
        // 0x2b5420: 0xe4810028  swc1        $f1, 0x28($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B541Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5424u;
}
