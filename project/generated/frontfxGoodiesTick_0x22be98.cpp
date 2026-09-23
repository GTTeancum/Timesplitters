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

// Function: frontfxGoodiesTick
// Address: 0x22be98 - 0x22c064
void frontfxGoodiesTick_0x22be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxGoodiesTick_0x22be98");
#endif

    switch (ctx->pc) {
        case 0x22bef0u: goto label_22bef0;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf60u: goto label_22bf60;
        case 0x22bfa0u: goto label_22bfa0;
        case 0x22bff4u: goto label_22bff4;
        default: break;
    }

    ctx->pc = 0x22be98u;

    // 0x22be98: 0xc7809fdc  lwc1        $f0, -0x6024($gp)
    ctx->pc = 0x22be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22be9c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22be9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22bea0: 0xc7818178  lwc1        $f1, -0x7E88($gp)
    ctx->pc = 0x22bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bea4: 0x8f859fe0  lw          $a1, -0x6020($gp)
    ctx->pc = 0x22bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
    // 0x22bea8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22beac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22beb0: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x22beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x22beb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22beb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bebc: 0x28a20254  slti        $v0, $a1, 0x254
    ctx->pc = 0x22bebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)596) ? 1 : 0);
    // 0x22bec0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x22bec0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22bec4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22bec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22bec8: 0xaf859fe0  sw          $a1, -0x6020($gp)
    ctx->pc = 0x22bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942688), GPR_U32(ctx, 5));
    // 0x22becc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BECCu;
    {
        const bool branch_taken_0x22becc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BECCu;
        // 0x22bed0: 0xe7809fdc  swc1        $f0, -0x6024($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22becc) {
            ctx->pc = 0x22BEDCu;
            goto label_22bedc;
        }
    }
    ctx->pc = 0x22BED4u;
    // 0x22bed4: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x22bed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x22bed8: 0xaf859fe0  sw          $a1, -0x6020($gp)
    ctx->pc = 0x22bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942688), GPR_U32(ctx, 5));
label_22bedc:
    // 0x22bedc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x22bedcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22bee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22bee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bee4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x22bee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x22bee8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22bee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22beec: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x22beecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
label_22bef0:
    // 0x22bef0: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x22bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x22bef4: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x22bef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22bef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22befc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22befcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22bf00: 0x0  nop
    ctx->pc = 0x22bf00u;
    // NOP
    // 0x22bf04: 0x0  nop
    ctx->pc = 0x22bf04u;
    // NOP
    // 0x22bf08: 0x460c0004  c1          0xC0004
    ctx->pc = 0x22bf08u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x22bf0c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x22bf0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf10: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22BF10u;
    {
        const bool branch_taken_0x22bf10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf10) {
            ctx->pc = 0x22BF24u;
            goto label_22bf24;
        }
    }
    ctx->pc = 0x22BF18u;
    // 0x22bf18: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x22BF18u;
    SET_GPR_U32(ctx, 31, 0x22BF20u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x22BF18u, 0x22BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF20u;
label_22bf20:
    // 0x22bf20: 0x8f859fe0  lw          $a1, -0x6020($gp)
    ctx->pc = 0x22bf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
label_22bf24:
    // 0x22bf24: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x22bf24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf28: 0x0  nop
    ctx->pc = 0x22bf28u;
    // NOP
    // 0x22bf2c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x22BF2Cu;
    {
        const bool branch_taken_0x22bf2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF2Cu;
        // 0x22bf30: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf2c) {
            ctx->pc = 0x22BF74u;
            goto label_22bf74;
        }
    }
    ctx->pc = 0x22BF34u;
    // 0x22bf34: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x22bf34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bf38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22bf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bf3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22bf3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22bf40: 0x0  nop
    ctx->pc = 0x22bf40u;
    // NOP
    // 0x22bf44: 0x0  nop
    ctx->pc = 0x22bf44u;
    // NOP
    // 0x22bf48: 0x460c0004  c1          0xC0004
    ctx->pc = 0x22bf48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x22bf4c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x22bf4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf50: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22BF50u;
    {
        const bool branch_taken_0x22bf50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf50) {
            ctx->pc = 0x22BF64u;
            goto label_22bf64;
        }
    }
    ctx->pc = 0x22BF58u;
    // 0x22bf58: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x22BF58u;
    SET_GPR_U32(ctx, 31, 0x22BF60u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x22BF58u, 0x22BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF60u;
label_22bf60:
    // 0x22bf60: 0x8f859fe0  lw          $a1, -0x6020($gp)
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
label_22bf64:
    // 0x22bf64: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22bf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf68: 0x0  nop
    ctx->pc = 0x22bf68u;
    // NOP
    // 0x22bf6c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x22BF6Cu;
    {
        const bool branch_taken_0x22bf6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF6Cu;
        // 0x22bf70: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf6c) {
            ctx->pc = 0x22C010u;
            goto label_22c010;
        }
    }
    ctx->pc = 0x22BF74u;
label_22bf74:
    // 0x22bf74: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x22bf74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bf78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22bf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bf7c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22bf7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22bf80: 0x0  nop
    ctx->pc = 0x22bf80u;
    // NOP
    // 0x22bf84: 0x0  nop
    ctx->pc = 0x22bf84u;
    // NOP
    // 0x22bf88: 0x460c0004  c1          0xC0004
    ctx->pc = 0x22bf88u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x22bf8c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x22bf8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf90: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x22BF90u;
    {
        const bool branch_taken_0x22bf90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bf90) {
            ctx->pc = 0x22BFA4u;
            goto label_22bfa4;
        }
    }
    ctx->pc = 0x22BF98u;
    // 0x22bf98: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x22BF98u;
    SET_GPR_U32(ctx, 31, 0x22BFA0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x22BF98u, 0x22BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFA0u;
label_22bfa0:
    // 0x22bfa0: 0x8f859fe0  lw          $a1, -0x6020($gp)
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
label_22bfa4:
    // 0x22bfa4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x22bfa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bfa8: 0x0  nop
    ctx->pc = 0x22bfa8u;
    // NOP
    // 0x22bfac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22BFACu;
    {
        const bool branch_taken_0x22bfac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFACu;
        // 0x22bfb0: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfac) {
            ctx->pc = 0x22BFC4u;
            goto label_22bfc4;
        }
    }
    ctx->pc = 0x22BFB4u;
    // 0x22bfb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22bfb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfbc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22BFBCu;
    {
        const bool branch_taken_0x22bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFBCu;
        // 0x22bfc0: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfbc) {
            ctx->pc = 0x22C018u;
            goto label_22c018;
        }
    }
    ctx->pc = 0x22BFC4u;
label_22bfc4:
    // 0x22bfc4: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x22bfc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bfc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22bfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bfcc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22bfccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22bfd0: 0x0  nop
    ctx->pc = 0x22bfd0u;
    // NOP
    // 0x22bfd4: 0x0  nop
    ctx->pc = 0x22bfd4u;
    // NOP
    // 0x22bfd8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x22bfd8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x22bfdc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x22bfdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bfe0: 0x0  nop
    ctx->pc = 0x22bfe0u;
    // NOP
    // 0x22bfe4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x22BFE4u;
    {
        const bool branch_taken_0x22bfe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bfe4) {
            ctx->pc = 0x22BFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BFE4u;
            // 0x22bfe8: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BFFCu;
            goto label_22bffc;
        }
    }
    ctx->pc = 0x22BFECu;
    // 0x22bfec: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x22BFECu;
    SET_GPR_U32(ctx, 31, 0x22BFF4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x22BFECu, 0x22BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFF4u;
label_22bff4:
    // 0x22bff4: 0x8f859fe0  lw          $a1, -0x6020($gp)
    ctx->pc = 0x22bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
    // 0x22bff8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22bff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_22bffc:
    // 0x22bffc: 0x0  nop
    ctx->pc = 0x22bffcu;
    // NOP
    // 0x22c000: 0x0  nop
    ctx->pc = 0x22c000u;
    // NOP
    // 0x22c004: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x22c004u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x22c008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22C008u;
    {
        const bool branch_taken_0x22c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C008u;
        // 0x22c00c: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c008) {
            ctx->pc = 0x22C018u;
            goto label_22c018;
        }
    }
    ctx->pc = 0x22C010u;
label_22c010:
    // 0x22c010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c014: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22c014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_22c018:
    // 0x22c018: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x22c01c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22c01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c020: 0x26232b40  addiu       $v1, $s1, 0x2B40
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
    // 0x22c024: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x22c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22c028: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22c028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22c02c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22c02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22c030: 0x2a040200  slti        $a0, $s0, 0x200
    ctx->pc = 0x22c030u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x22c034: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x22c034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x22c038: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22c038u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22c03c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22c03cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22c040: 0x1480ffab  bnez        $a0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x22C040u;
    {
        const bool branch_taken_0x22c040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C040u;
        // 0x22c044: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c040) {
            ctx->pc = 0x22BEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bef0;
        }
    }
    ctx->pc = 0x22C048u;
    // 0x22c048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c04c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22c04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c054: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x22c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22c058: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c05c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C05Cu;
        // 0x22c060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C064u;
}
