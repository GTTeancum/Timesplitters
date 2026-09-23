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

// Function: matrixLook
// Address: 0x2b4f78 - 0x2b5204
void matrixLook_0x2b4f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixLook_0x2b4f78");
#endif

    switch (ctx->pc) {
        case 0x2b5008u: goto label_2b5008;
        case 0x2b5090u: goto label_2b5090;
        case 0x2b5120u: goto label_2b5120;
        default: break;
    }

    ctx->pc = 0x2b4f78u;

    // 0x2b4f78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b4f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b4f7c: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2b4f7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b4f80: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2b4f80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b4f84: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x2b4f84u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x2b4f88: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2b4f88u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2b4f8c: 0x4618c042  mul.s       $f1, $f24, $f24
    ctx->pc = 0x2b4f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x2b4f90: 0x4617b802  mul.s       $f0, $f23, $f23
    ctx->pc = 0x2b4f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x2b4f94: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2b4f94u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b4f98: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x2b4f98u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
    // 0x2b4f9c: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x2b4f9cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b4fa0: 0x4619c882  mul.s       $f2, $f25, $f25
    ctx->pc = 0x2b4fa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[25]);
    // 0x2b4fa4: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x2b4fa4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4fa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4fac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b4fb0: 0xe7bd0078  swc1        $f29, 0x78($sp)
    ctx->pc = 0x2b4fb0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b4fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4fb8: 0xe7bc0070  swc1        $f28, 0x70($sp)
    ctx->pc = 0x2b4fb8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b4fbc: 0x46007746  mov.s       $f29, $f14
    ctx->pc = 0x2b4fbcu;
    ctx->f[29] = FPU_MOV_S(ctx->f[14]);
    // 0x2b4fc0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2b4fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b4fc4: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2b4fc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b4fc8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2b4fc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b4fcc: 0x46006f06  mov.s       $f28, $f13
    ctx->pc = 0x2b4fccu;
    ctx->f[28] = FPU_MOV_S(ctx->f[13]);
    // 0x2b4fd0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b4fd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4fd4: 0x46009d86  mov.s       $f22, $f19
    ctx->pc = 0x2b4fd4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[19]);
    // 0x2b4fd8: 0x0  nop
    ctx->pc = 0x2b4fd8u;
    // NOP
    // 0x2b4fdc: 0x0  nop
    ctx->pc = 0x2b4fdcu;
    // NOP
    // 0x2b4fe0: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2b4fe0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b4fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4fe8: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x2b4fe8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b4fec: 0x46009506  mov.s       $f20, $f18
    ctx->pc = 0x2b4fecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[18]);
    // 0x2b4ff0: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2b4ff0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4ff4: 0x0  nop
    ctx->pc = 0x2b4ff4u;
    // NOP
    // 0x2b4ff8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4FF8u;
    {
        const bool branch_taken_0x2b4ff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FF8u;
        // 0x2b4ffc: 0xc7b50080  lwc1        $f21, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ff8) {
            ctx->pc = 0x2B500Cu;
            goto label_2b500c;
        }
    }
    ctx->pc = 0x2B5000u;
    // 0x2b5000: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5000u;
    SET_GPR_U32(ctx, 31, 0x2B5008u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5000u, 0x2B5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5008u;
label_2b5008:
    // 0x2b5008: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b5008u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b500c:
    // 0x2b500c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b500cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b5010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5014: 0x0  nop
    ctx->pc = 0x2b5014u;
    // NOP
    // 0x2b5018: 0x0  nop
    ctx->pc = 0x2b5018u;
    // NOP
    // 0x2b501c: 0x460101c3  div.s       $f7, $f0, $f1
    ctx->pc = 0x2b501cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[1];
    // 0x2b5020: 0x4607ce42  mul.s       $f25, $f25, $f7
    ctx->pc = 0x2b5020u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[7]);
    // 0x2b5024: 0x4607bdc2  mul.s       $f23, $f23, $f7
    ctx->pc = 0x2b5024u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[7]);
    // 0x2b5028: 0x4607c602  mul.s       $f24, $f24, $f7
    ctx->pc = 0x2b5028u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[7]);
    // 0x2b502c: 0x4619a102  mul.s       $f4, $f20, $f25
    ctx->pc = 0x2b502cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2b5030: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x2b5030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2b5034: 0x4618a8c2  mul.s       $f3, $f21, $f24
    ctx->pc = 0x2b5034u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x2b5038: 0x4617a842  mul.s       $f1, $f21, $f23
    ctx->pc = 0x2b5038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2b503c: 0x4618a082  mul.s       $f2, $f20, $f24
    ctx->pc = 0x2b503cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2b5040: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2b5040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b5044: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2b5044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2b5048: 0x4617b142  mul.s       $f5, $f22, $f23
    ctx->pc = 0x2b5048u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x2b504c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2b504cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b5050: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b5050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b5054: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2b5054u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b5058: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b5058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b505c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2b505cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2b5060: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2b5060u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2b5064: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2b5064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b5068: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x2b5068u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b506c: 0x0  nop
    ctx->pc = 0x2b506cu;
    // NOP
    // 0x2b5070: 0x0  nop
    ctx->pc = 0x2b5070u;
    // NOP
    // 0x2b5074: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2b5074u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b5078: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2b5078u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b507c: 0x0  nop
    ctx->pc = 0x2b507cu;
    // NOP
    // 0x2b5080: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5080u;
    {
        const bool branch_taken_0x2b5080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5080u;
        // 0x2b5084: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5080) {
            ctx->pc = 0x2B5090u;
            goto label_2b5090;
        }
    }
    ctx->pc = 0x2B5088u;
    // 0x2b5088: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5088u;
    SET_GPR_U32(ctx, 31, 0x2B5090u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5088u, 0x2B5090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5090u;
label_2b5090:
    // 0x2b5090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5094: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2b5094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2b5098: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2b5098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b509c: 0x0  nop
    ctx->pc = 0x2b509cu;
    // NOP
    // 0x2b50a0: 0x0  nop
    ctx->pc = 0x2b50a0u;
    // NOP
    // 0x2b50a4: 0x4600d1c3  div.s       $f7, $f26, $f0
    ctx->pc = 0x2b50a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[7] = ctx->f[26] / ctx->f[0];
    // 0x2b50a8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2b50a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b50ac: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2b50acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b50b0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b50b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b50b4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2b50b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2b50b8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2b50b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2b50bc: 0x4600b942  mul.s       $f5, $f23, $f0
    ctx->pc = 0x2b50bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2b50c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2b50c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b50c4: 0x4603c842  mul.s       $f1, $f25, $f3
    ctx->pc = 0x2b50c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x2b50c8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2b50c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b50cc: 0x4602c902  mul.s       $f4, $f25, $f2
    ctx->pc = 0x2b50ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x2b50d0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2b50d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b50d4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2b50d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2b50d8: 0x46050d81  sub.s       $f22, $f1, $f5
    ctx->pc = 0x2b50d8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2b50dc: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x2b50dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x2b50e0: 0x46040501  sub.s       $f20, $f0, $f4
    ctx->pc = 0x2b50e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b50e4: 0x4603c0c2  mul.s       $f3, $f24, $f3
    ctx->pc = 0x2b50e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x2b50e8: 0x4616b102  mul.s       $f4, $f22, $f22
    ctx->pc = 0x2b50e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2b50ec: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2b50ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b50f0: 0x46031541  sub.s       $f21, $f2, $f3
    ctx->pc = 0x2b50f0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b50f4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b50f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b50f8: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2b50f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2b50fc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2b50fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5100: 0x0  nop
    ctx->pc = 0x2b5100u;
    // NOP
    // 0x2b5104: 0x0  nop
    ctx->pc = 0x2b5104u;
    // NOP
    // 0x2b5108: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2b5108u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b510c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2b510cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5110: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5110u;
    {
        const bool branch_taken_0x2b5110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5110) {
            ctx->pc = 0x2B5120u;
            goto label_2b5120;
        }
    }
    ctx->pc = 0x2B5118u;
    // 0x2b5118: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B5118u;
    SET_GPR_U32(ctx, 31, 0x2B5120u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B5118u, 0x2B5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5120u;
label_2b5120:
    // 0x2b5120: 0x0  nop
    ctx->pc = 0x2b5120u;
    // NOP
    // 0x2b5124: 0x0  nop
    ctx->pc = 0x2b5124u;
    // NOP
    // 0x2b5128: 0x4600d1c3  div.s       $f7, $f26, $f0
    ctx->pc = 0x2b5128u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[7] = ctx->f[26] / ctx->f[0];
    // 0x2b512c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2b512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5130: 0x4618e0c2  mul.s       $f3, $f28, $f24
    ctx->pc = 0x2b5130u;
    ctx->f[3] = FPU_MUL_S(ctx->f[28], ctx->f[24]);
    // 0x2b5134: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2b5134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5138: 0x4617d882  mul.s       $f2, $f27, $f23
    ctx->pc = 0x2b5138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[23]);
    // 0x2b513c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2b513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5140: 0x4600d842  mul.s       $f1, $f27, $f0
    ctx->pc = 0x2b5140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    // 0x2b5144: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2b5144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b5148: 0x4605e182  mul.s       $f6, $f28, $f5
    ctx->pc = 0x2b5148u;
    ctx->f[6] = FPU_MUL_S(ctx->f[28], ctx->f[5]);
    // 0x2b514c: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x2b514cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b5150: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2b5150u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2b5154: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x2b5154u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b5158: 0x4607a502  mul.s       $f20, $f20, $f7
    ctx->pc = 0x2b5158u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x2b515c: 0xe61a003c  swc1        $f26, 0x3C($s0)
    ctx->pc = 0x2b515cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2b5160: 0x4607b582  mul.s       $f22, $f22, $f7
    ctx->pc = 0x2b5160u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[7]);
    // 0x2b5164: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x2b5164u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b5168: 0x4607ad42  mul.s       $f21, $f21, $f7
    ctx->pc = 0x2b5168u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[7]);
    // 0x2b516c: 0xe6180018  swc1        $f24, 0x18($s0)
    ctx->pc = 0x2b516cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b5170: 0x4614d802  mul.s       $f0, $f27, $f20
    ctx->pc = 0x2b5170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[20]);
    // 0x2b5174: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b5174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b5178: 0x4616e0c2  mul.s       $f3, $f28, $f22
    ctx->pc = 0x2b5178u;
    ctx->f[3] = FPU_MUL_S(ctx->f[28], ctx->f[22]);
    // 0x2b517c: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x2b517cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b5180: 0x4619e942  mul.s       $f5, $f29, $f25
    ctx->pc = 0x2b5180u;
    ctx->f[5] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x2b5184: 0xe6150024  swc1        $f21, 0x24($s0)
    ctx->pc = 0x2b5184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2b5188: 0x4604e902  mul.s       $f4, $f29, $f4
    ctx->pc = 0x2b5188u;
    ctx->f[4] = FPU_MUL_S(ctx->f[29], ctx->f[4]);
    // 0x2b518c: 0xe6190028  swc1        $f25, 0x28($s0)
    ctx->pc = 0x2b518cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b5190: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b5190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b5194: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b5194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b5198: 0x4615e8c2  mul.s       $f3, $f29, $f21
    ctx->pc = 0x2b5198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[29], ctx->f[21]);
    // 0x2b519c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b519cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2b51a0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2b51a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2b51a4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2b51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2b51a8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2b51a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2b51ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b51acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b51b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b51b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b51b4: 0xc7bd0078  lwc1        $f29, 0x78($sp)
    ctx->pc = 0x2b51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2b51b8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2b51b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2b51bc: 0xc7bc0070  lwc1        $f28, 0x70($sp)
    ctx->pc = 0x2b51bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2b51c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2b51c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2b51c4: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x2b51c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2b51c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b51c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b51cc: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x2b51ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b51d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b51d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b51d4: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2b51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b51d8: 0xe6020038  swc1        $f2, 0x38($s0)
    ctx->pc = 0x2b51d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b51dc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2b51dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2b51e0: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2b51e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b51e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b51e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b51e8: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2b51e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b51ec: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2b51ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b51f0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2b51f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b51f4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2b51f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b51f8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b51fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B51FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51FCu;
        // 0x2b5200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B51FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5204u;
}
