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

// Function: matrixToQuaternionNew
// Address: 0x2b5970 - 0x2b5c08
void matrixToQuaternionNew_0x2b5970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixToQuaternionNew_0x2b5970");
#endif

    switch (ctx->pc) {
        case 0x2b5a20u: goto label_2b5a20;
        case 0x2b5b28u: goto label_2b5b28;
        default: break;
    }

    ctx->pc = 0x2b5970u;

    // 0x2b5970: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b5970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b5974: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b5974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b5978: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2b5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2b597c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2b597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5980: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2b5980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2b5984: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b5984u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5988: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2b5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2b598c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5990: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b5990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2b5994: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2b5994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5998: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2b5998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2b599c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2b599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2b59a0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2b59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2b59a4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2b59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2b59a8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2b59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2b59ac: 0x24479a80  addiu       $a3, $v0, -0x6580
    ctx->pc = 0x2b59acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x2b59b0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2b59b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b59b4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2b59b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b59b8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2b59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A88u));
    // 0x2b59bc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2b59bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59c0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2b59c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59c4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b59c8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2b59c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b59cc: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2b59ccu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b59d0: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2b59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b59d4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2b59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b59d8: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x2b59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b59dc: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x2b59dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b59e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b59e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b59e4: 0x46040300  add.s       $f12, $f0, $f4
    ctx->pc = 0x2b59e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2b59e8: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2b59e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b59ec: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2B59ECu;
    {
        const bool branch_taken_0x2b59ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b59ec) {
            ctx->pc = 0x2B5A84u;
            goto label_2b5a84;
        }
    }
    ctx->pc = 0x2B59F4u;
    // 0x2b59f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b59f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b59f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b59f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b59fc: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2b59fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2b5a00: 0x0  nop
    ctx->pc = 0x2b5a00u;
    // NOP
    // 0x2b5a04: 0x0  nop
    ctx->pc = 0x2b5a04u;
    // NOP
    // 0x2b5a08: 0x460c0144  c1          0xC0144
    ctx->pc = 0x2b5a08u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b5a0c: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x2b5a0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5a10: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A10u;
    {
        const bool branch_taken_0x2b5a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5a10) {
            ctx->pc = 0x2B5A24u;
            goto label_2b5a24;
        }
    }
    ctx->pc = 0x2B5A18u;
    // 0x2b5a18: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5A18u;
    SET_GPR_U32(ctx, 31, 0x2B5A20u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5A18u, 0x2B5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A20u;
label_2b5a20:
    // 0x2b5a20: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2b5a20u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_2b5a24:
    // 0x2b5a24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b5a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5a2c: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x2b5a2cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
    // 0x2b5a30: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x2b5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b5a34: 0x46003942  mul.s       $f5, $f7, $f0
    ctx->pc = 0x2b5a34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2b5a38: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2b5a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5a3c: 0x0  nop
    ctx->pc = 0x2b5a3cu;
    // NOP
    // 0x2b5a40: 0x0  nop
    ctx->pc = 0x2b5a40u;
    // NOP
    // 0x2b5a44: 0x460701c3  div.s       $f7, $f0, $f7
    ctx->pc = 0x2b5a44u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[7];
    // 0x2b5a48: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x2b5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5a4c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2b5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5a50: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2b5a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5a54: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b5a54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b5a58: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5a5c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2b5a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2b5a60: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x2b5a60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2b5a64: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2b5a64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2b5a68: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2b5a68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2b5a6c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2b5a6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2b5a70: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b5a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b5a74: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2b5a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b5a78: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2b5a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b5a7c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2B5A7Cu;
    {
        const bool branch_taken_0x2b5a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A7Cu;
        // 0x2b5a80: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a7c) {
            ctx->pc = 0x2B5BD4u;
            goto label_2b5bd4;
        }
    }
    ctx->pc = 0x2B5A84u;
label_2b5a84:
    // 0x2b5a84: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2b5a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5a88: 0x0  nop
    ctx->pc = 0x2b5a88u;
    // NOP
    // 0x2b5a8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5A8Cu;
    {
        const bool branch_taken_0x2b5a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A8Cu;
        // 0x2b5a90: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a8c) {
            ctx->pc = 0x2B5A98u;
            goto label_2b5a98;
        }
    }
    ctx->pc = 0x2B5A94u;
    // 0x2b5a94: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b5a94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5a98:
    // 0x2b5a98: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5a9c: 0x2a51818  mult        $v1, $s5, $a1
    ctx->pc = 0x2b5a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b5aa0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2b5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b5aa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5aa8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2b5aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5aac: 0x0  nop
    ctx->pc = 0x2b5aacu;
    // NOP
    // 0x2b5ab0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5AB0u;
    {
        const bool branch_taken_0x2b5ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5ab0) {
            ctx->pc = 0x2B5AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5AB0u;
            // 0x2b5ab4: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5AB8u;
            goto label_2b5ab8;
        }
    }
    ctx->pc = 0x2B5AB8u;
label_2b5ab8:
    // 0x2b5ab8: 0x2a51018  mult        $v0, $s5, $a1
    ctx->pc = 0x2b5ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b5abc: 0x15a080  sll         $s4, $s5, 2
    ctx->pc = 0x2b5abcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2b5ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5ac4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b5ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b5ac8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2b5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b5acc: 0xd41021  addu        $v0, $a2, $s4
    ctx->pc = 0x2b5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2b5ad0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5ad4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b5ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5ad8: 0x2451018  mult        $v0, $s2, $a1
    ctx->pc = 0x2b5ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b5adc: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x2b5adcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b5ae0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2b5ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b5ae4: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x2b5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x2b5ae8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b5ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5aec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b5aecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5af0: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x2b5af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b5af4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2b5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b5af8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b5af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5afc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5b00: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2b5b00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b5b04: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x2b5b04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2b5b08: 0x0  nop
    ctx->pc = 0x2b5b08u;
    // NOP
    // 0x2b5b0c: 0x0  nop
    ctx->pc = 0x2b5b0cu;
    // NOP
    // 0x2b5b10: 0x460c0144  c1          0xC0144
    ctx->pc = 0x2b5b10u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b5b14: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x2b5b14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5b18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5B18u;
    {
        const bool branch_taken_0x2b5b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5b18) {
            ctx->pc = 0x2B5B2Cu;
            goto label_2b5b2c;
        }
    }
    ctx->pc = 0x2B5B20u;
    // 0x2b5b20: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5B20u;
    SET_GPR_U32(ctx, 31, 0x2B5B28u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5B20u, 0x2B5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B28u;
label_2b5b28:
    // 0x2b5b28: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2b5b28u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_2b5b2c:
    // 0x2b5b2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b5b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b5b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b34: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x2b5b34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b5b38: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x2b5b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b5b3c: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x2b5b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b5b40: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2b5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2b5b44: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x2b5b44u;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
    // 0x2b5b48: 0x2672021  addu        $a0, $s3, $a3
    ctx->pc = 0x2b5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2b5b4c: 0x46003942  mul.s       $f5, $f7, $f0
    ctx->pc = 0x2b5b4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2b5b50: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2b5b54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b5b58: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2b5b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2b5b5c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5b60: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2b5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5b64: 0x0  nop
    ctx->pc = 0x2b5b64u;
    // NOP
    // 0x2b5b68: 0x0  nop
    ctx->pc = 0x2b5b68u;
    // NOP
    // 0x2b5b6c: 0x460701c3  div.s       $f7, $f0, $f7
    ctx->pc = 0x2b5b6cu;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[7];
    // 0x2b5b70: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x2b5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2b5b74: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2b5b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2b5b78: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2b5b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2b5b7c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2b5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b5b80: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2b5b84: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2b5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2b5b88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5b8c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b5b8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b5b90: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2b5b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5b94: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2b5b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2b5b98: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2b5b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2b5b9c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2b5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5ba0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b5ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ba4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b5ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b5ba8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2b5ba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2b5bac: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x2b5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x2b5bb0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b5bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b5bb4: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x2b5bb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b5bb8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2b5bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2b5bbc: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x2b5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x2b5bc0: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2b5bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2b5bc4: 0x2c84021  addu        $t0, $s6, $t0
    ctx->pc = 0x2b5bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x2b5bc8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b5bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b5bcc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b5bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b5bd0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2b5bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2b5bd4:
    // 0x2b5bd4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2b5bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b5bd8: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2b5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b5bdc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b5bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b5be0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2b5be0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b5be4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2b5be4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b5be8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2b5be8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b5bec: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2b5becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b5bf0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2b5bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5bf4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2b5bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5bf8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2b5bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5bfc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b5bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5c00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C00u;
        // 0x2b5c04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C08u;
}
