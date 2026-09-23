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

// Function: hittestLineCyl
// Address: 0x209dc8 - 0x20a080
void hittestLineCyl_0x209dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestLineCyl_0x209dc8");
#endif

    switch (ctx->pc) {
        case 0x209e64u: goto label_209e64;
        case 0x209ef0u: goto label_209ef0;
        default: break;
    }

    ctx->pc = 0x209dc8u;

    // 0x209dc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x209dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x209dcc: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x209dccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x209dd0: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x209dd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x209dd4: 0x46009e06  mov.s       $f24, $f19
    ctx->pc = 0x209dd4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[19]);
    // 0x209dd8: 0xe7be0080  swc1        $f30, 0x80($sp)
    ctx->pc = 0x209dd8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x209ddc: 0x46008dc6  mov.s       $f23, $f17
    ctx->pc = 0x209ddcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[17]);
    // 0x209de0: 0x4617b842  mul.s       $f1, $f23, $f23
    ctx->pc = 0x209de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x209de4: 0xc7be0090  lwc1        $f30, 0x90($sp)
    ctx->pc = 0x209de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x209de8: 0x4618c002  mul.s       $f0, $f24, $f24
    ctx->pc = 0x209de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x209dec: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x209decu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x209df0: 0x460cf6c1  sub.s       $f27, $f30, $f12
    ctx->pc = 0x209df0u;
    ctx->f[27] = FPU_SUB_S(ctx->f[30], ctx->f[12]);
    // 0x209df4: 0xe7bd0078  swc1        $f29, 0x78($sp)
    ctx->pc = 0x209df4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x209df8: 0xc7bd00a0  lwc1        $f29, 0xA0($sp)
    ctx->pc = 0x209df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x209dfc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x209dfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209e00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209e08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e0c: 0xe7bf0088  swc1        $f31, 0x88($sp)
    ctx->pc = 0x209e0cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x209e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e14: 0x0  nop
    ctx->pc = 0x209e14u;
    // NOP
    // 0x209e18: 0x0  nop
    ctx->pc = 0x209e18u;
    // NOP
    // 0x209e1c: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x209e1cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x209e20: 0xe7bc0070  swc1        $f28, 0x70($sp)
    ctx->pc = 0x209e20u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x209e24: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x209e24u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x209e28: 0x460087c6  mov.s       $f31, $f16
    ctx->pc = 0x209e28u;
    ctx->f[31] = FPU_MOV_S(ctx->f[16]);
    // 0x209e2c: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x209e2cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x209e30: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x209e30u;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x209e34: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x209e34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x209e38: 0x46009646  mov.s       $f25, $f18
    ctx->pc = 0x209e38u;
    ctx->f[25] = FPU_MOV_S(ctx->f[18]);
    // 0x209e3c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x209e3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x209e40: 0x460eed81  sub.s       $f22, $f29, $f14
    ctx->pc = 0x209e40u;
    ctx->f[22] = FPU_SUB_S(ctx->f[29], ctx->f[14]);
    // 0x209e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209e48: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x209e48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x209e4c: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x209e4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209e50: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x209e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x209e54: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x209E54u;
    {
        const bool branch_taken_0x209e54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E54u;
        // 0x209e58: 0xc7bc0098  lwc1        $f28, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e54) {
            ctx->pc = 0x209E68u;
            goto label_209e68;
        }
    }
    ctx->pc = 0x209E5Cu;
    // 0x209e5c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x209E5Cu;
    SET_GPR_U32(ctx, 31, 0x209E64u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x209E5Cu, 0x209E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E64u;
label_209e64:
    // 0x209e64: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x209e64u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_209e68:
    // 0x209e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209e70: 0x4617b042  mul.s       $f1, $f22, $f23
    ctx->pc = 0x209e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x209e74: 0x4618d882  mul.s       $f2, $f27, $f24
    ctx->pc = 0x209e74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[24]);
    // 0x209e78: 0x0  nop
    ctx->pc = 0x209e78u;
    // NOP
    // 0x209e7c: 0x0  nop
    ctx->pc = 0x209e7cu;
    // NOP
    // 0x209e80: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x209e80u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
    // 0x209e84: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x209e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x209e88: 0x46030d02  mul.s       $f20, $f1, $f3
    ctx->pc = 0x209e88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x209e8c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x209e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209e90: 0x0  nop
    ctx->pc = 0x209e90u;
    // NOP
    // 0x209e94: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x209E94u;
    {
        const bool branch_taken_0x209e94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E94u;
        // 0x209e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e94) {
            ctx->pc = 0x20A03Cu;
            goto label_20a03c;
        }
    }
    ctx->pc = 0x209E9Cu;
    // 0x209e9c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x209e9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x209ea0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x209ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209ea4: 0x0  nop
    ctx->pc = 0x209ea4u;
    // NOP
    // 0x209ea8: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x209EA8u;
    {
        const bool branch_taken_0x209ea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EA8u;
        // 0x209eac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ea8) {
            ctx->pc = 0x20A040u;
            goto label_20a040;
        }
    }
    ctx->pc = 0x209EB0u;
    // 0x209eb0: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x209eb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x209eb4: 0x4614a900  add.s       $f4, $f21, $f20
    ctx->pc = 0x209eb4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x209eb8: 0x4618b082  mul.s       $f2, $f22, $f24
    ctx->pc = 0x209eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x209ebc: 0x4617d802  mul.s       $f0, $f27, $f23
    ctx->pc = 0x209ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[23]);
    // 0x209ec0: 0x46012302  mul.s       $f12, $f4, $f1
    ctx->pc = 0x209ec0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x209ec4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x209ec4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x209ec8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x209ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x209ecc: 0x0  nop
    ctx->pc = 0x209eccu;
    // NOP
    // 0x209ed0: 0x0  nop
    ctx->pc = 0x209ed0u;
    // NOP
    // 0x209ed4: 0x460c0044  c1          0xC0044
    ctx->pc = 0x209ed4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x209ed8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x209ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209edc: 0x0  nop
    ctx->pc = 0x209edcu;
    // NOP
    // 0x209ee0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x209EE0u;
    {
        const bool branch_taken_0x209ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EE0u;
        // 0x209ee4: 0x46030582  mul.s       $f22, $f0, $f3 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ee0) {
            ctx->pc = 0x209EF4u;
            goto label_209ef4;
        }
    }
    ctx->pc = 0x209EE8u;
    // 0x209ee8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x209EE8u;
    SET_GPR_U32(ctx, 31, 0x209EF0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x209EE8u, 0x209EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EF0u;
label_209ef0:
    // 0x209ef0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x209ef0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_209ef4:
    // 0x209ef4: 0x4601b101  sub.s       $f4, $f22, $f1
    ctx->pc = 0x209ef4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x209ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209efc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x209efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f00: 0x0  nop
    ctx->pc = 0x209f00u;
    // NOP
    // 0x209f04: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x209F04u;
    {
        const bool branch_taken_0x209f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F04u;
        // 0x209f08: 0x4601b0c0  add.s       $f3, $f22, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f04) {
            ctx->pc = 0x209F30u;
            goto label_209f30;
        }
    }
    ctx->pc = 0x209F0Cu;
    // 0x209f0c: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x209f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x209f10: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x209f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x209f14: 0x4615a882  mul.s       $f2, $f21, $f21
    ctx->pc = 0x209f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x209f18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209f1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x209f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f20: 0x0  nop
    ctx->pc = 0x209f20u;
    // NOP
    // 0x209f24: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x209F24u;
    {
        const bool branch_taken_0x209f24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F24u;
        // 0x209f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f24) {
            ctx->pc = 0x20A03Cu;
            goto label_20a03c;
        }
    }
    ctx->pc = 0x209F2Cu;
    // 0x209f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209f30:
    // 0x209f30: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x209f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f34: 0x0  nop
    ctx->pc = 0x209f34u;
    // NOP
    // 0x209f38: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x209F38u;
    {
        const bool branch_taken_0x209f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209f38) {
            ctx->pc = 0x209F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F38u;
            // 0x209f3c: 0x46192082  mul.s       $f2, $f4, $f25 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F64u;
            goto label_209f64;
        }
    }
    ctx->pc = 0x209F40u;
    // 0x209f40: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x209f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x209f44: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x209f44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x209f48: 0x4615a882  mul.s       $f2, $f21, $f21
    ctx->pc = 0x209f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x209f4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x209f4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209f50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f54: 0x0  nop
    ctx->pc = 0x209f54u;
    // NOP
    // 0x209f58: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x209F58u;
    {
        const bool branch_taken_0x209f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F58u;
        // 0x209f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f58) {
            ctx->pc = 0x20A03Cu;
            goto label_20a03c;
        }
    }
    ctx->pc = 0x209F60u;
    // 0x209f60: 0x46192082  mul.s       $f2, $f4, $f25
    ctx->pc = 0x209f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[25]);
label_209f64:
    // 0x209f64: 0x461fd400  add.s       $f16, $f26, $f31
    ctx->pc = 0x209f64u;
    ctx->f[16] = FPU_ADD_S(ctx->f[26], ctx->f[31]);
    // 0x209f68: 0x4602e000  add.s       $f0, $f28, $f2
    ctx->pc = 0x209f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[28], ctx->f[2]);
    // 0x209f6c: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x209f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f70: 0x0  nop
    ctx->pc = 0x209f70u;
    // NOP
    // 0x209f74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x209F74u;
    {
        const bool branch_taken_0x209f74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F74u;
        // 0x209f78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f74) {
            ctx->pc = 0x209F90u;
            goto label_209f90;
        }
    }
    ctx->pc = 0x209F7Cu;
    // 0x209f7c: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x209f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f80: 0x0  nop
    ctx->pc = 0x209f80u;
    // NOP
    // 0x209f84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x209F84u;
    {
        const bool branch_taken_0x209f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F84u;
        // 0x209f88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f84) {
            ctx->pc = 0x209F90u;
            goto label_209f90;
        }
    }
    ctx->pc = 0x209F8Cu;
    // 0x209f8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x209f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_209f90:
    // 0x209f90: 0x46191802  mul.s       $f0, $f3, $f25
    ctx->pc = 0x209f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x209f94: 0x4600e000  add.s       $f0, $f28, $f0
    ctx->pc = 0x209f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
    // 0x209f98: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x209f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209f9c: 0x0  nop
    ctx->pc = 0x209f9cu;
    // NOP
    // 0x209fa0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x209FA0u;
    {
        const bool branch_taken_0x209fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA0u;
        // 0x209fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fa0) {
            ctx->pc = 0x209FBCu;
            goto label_209fbc;
        }
    }
    ctx->pc = 0x209FA8u;
    // 0x209fa8: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x209fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209fac: 0x0  nop
    ctx->pc = 0x209facu;
    // NOP
    // 0x209fb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x209FB0u;
    {
        const bool branch_taken_0x209fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB0u;
        // 0x209fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fb0) {
            ctx->pc = 0x209FBCu;
            goto label_209fbc;
        }
    }
    ctx->pc = 0x209FB8u;
    // 0x209fb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x209fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_209fbc:
    // 0x209fbc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209FBCu;
    {
        const bool branch_taken_0x209fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x209FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FBCu;
        // 0x209fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fbc) {
            ctx->pc = 0x209FD4u;
            goto label_209fd4;
        }
    }
    ctx->pc = 0x209FC4u;
    // 0x209fc4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x209FC4u;
    {
        const bool branch_taken_0x209fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FC4u;
        // 0x209fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fc4) {
            ctx->pc = 0x20A000u;
            goto label_20a000;
        }
    }
    ctx->pc = 0x209FCCu;
    // 0x209fcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x209FCCu;
    {
        const bool branch_taken_0x209fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FCCu;
        // 0x209fd0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fcc) {
            ctx->pc = 0x20A040u;
            goto label_20a040;
        }
    }
    ctx->pc = 0x209FD4u;
label_209fd4:
    // 0x209fd4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x209FD4u;
    {
        const bool branch_taken_0x209fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FD4u;
        // 0x209fd8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fd4) {
            ctx->pc = 0x20A000u;
            goto label_20a000;
        }
    }
    ctx->pc = 0x209FDCu;
    // 0x209fdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209FDCu;
    {
        const bool branch_taken_0x209fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FDCu;
        // 0x209fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fdc) {
            ctx->pc = 0x209FF4u;
            goto label_209ff4;
        }
    }
    ctx->pc = 0x209FE4u;
    // 0x209fe4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209FE4u;
    {
        const bool branch_taken_0x209fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FE4u;
        // 0x209fe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fe4) {
            ctx->pc = 0x20A000u;
            goto label_20a000;
        }
    }
    ctx->pc = 0x209FECu;
    // 0x209fec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x209FECu;
    {
        const bool branch_taken_0x209fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FECu;
        // 0x209ff0: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fec) {
            ctx->pc = 0x20A044u;
            goto label_20a044;
        }
    }
    ctx->pc = 0x209FF4u;
label_209ff4:
    // 0x209ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209ff8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x209FF8u;
    {
        const bool branch_taken_0x209ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x209FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FF8u;
        // 0x209ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ff8) {
            ctx->pc = 0x20A03Cu;
            goto label_20a03c;
        }
    }
    ctx->pc = 0x20A000u;
label_20a000:
    // 0x20a000: 0x46182002  mul.s       $f0, $f4, $f24
    ctx->pc = 0x20a000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x20a004: 0x46172042  mul.s       $f1, $f4, $f23
    ctx->pc = 0x20a004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x20a008: 0x4602e080  add.s       $f2, $f28, $f2
    ctx->pc = 0x20a008u;
    ctx->f[2] = FPU_ADD_S(ctx->f[28], ctx->f[2]);
    // 0x20a00c: 0x4600e800  add.s       $f0, $f29, $f0
    ctx->pc = 0x20a00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    // 0x20a010: 0x4601f040  add.s       $f1, $f30, $f1
    ctx->pc = 0x20a010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[30], ctx->f[1]);
    // 0x20a014: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x20a014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20a018: 0x4600b907  neg.s       $f4, $f23
    ctx->pc = 0x20a018u;
    ctx->f[4] = FPU_NEG_S(ctx->f[23]);
    // 0x20a01c: 0x4600c8c7  neg.s       $f3, $f25
    ctx->pc = 0x20a01cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[25]);
    // 0x20a020: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20a020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x20a024: 0x4600c087  neg.s       $f2, $f24
    ctx->pc = 0x20a024u;
    ctx->f[2] = FPU_NEG_S(ctx->f[24]);
    // 0x20a028: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x20a028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20a02c: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x20a02cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x20a030: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x20a030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x20a034: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x20a034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x20a038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a03c:
    // 0x20a03c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20a040:
    // 0x20a040: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20a040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a044:
    // 0x20a044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a048: 0xc7bf0088  lwc1        $f31, 0x88($sp)
    ctx->pc = 0x20a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x20a04c: 0xc7be0080  lwc1        $f30, 0x80($sp)
    ctx->pc = 0x20a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x20a050: 0xc7bd0078  lwc1        $f29, 0x78($sp)
    ctx->pc = 0x20a050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x20a054: 0xc7bc0070  lwc1        $f28, 0x70($sp)
    ctx->pc = 0x20a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x20a058: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x20a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x20a05c: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x20a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x20a060: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x20a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20a064: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x20a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20a068: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x20a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20a06c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x20a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20a070: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x20a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a074: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x20a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a078: 0x3e00008  jr          $ra
    ctx->pc = 0x20A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A078u;
        // 0x20a07c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A080u;
}
