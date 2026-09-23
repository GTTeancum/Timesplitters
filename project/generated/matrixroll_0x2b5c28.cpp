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

// Function: matrixroll
// Address: 0x2b5c28 - 0x2b5d80
void matrixroll_0x2b5c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixroll_0x2b5c28");
#endif

    switch (ctx->pc) {
        case 0x2b5c80u: goto label_2b5c80;
        case 0x2b5c94u: goto label_2b5c94;
        case 0x2b5cb0u: goto label_2b5cb0;
        default: break;
    }

    ctx->pc = 0x2b5c28u;

    // 0x2b5c28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b5c2c: 0xc7808fcc  lwc1        $f0, -0x7034($gp)
    ctx->pc = 0x2b5c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5c30: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b5c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b5c34: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2b5c34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5c38: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2b5c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b5c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5c40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b5c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b5c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5c48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b5c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c4c: 0x0  nop
    ctx->pc = 0x2b5c4cu;
    // NOP
    // 0x2b5c50: 0x0  nop
    ctx->pc = 0x2b5c50u;
    // NOP
    // 0x2b5c54: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x2b5c54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x2b5c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c5c: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x2b5c5cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b5c60: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2b5c60u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b5c64: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2b5c64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b5c68: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2b5c68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b5c6c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2b5c6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b5c70: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2b5c70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b5c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5c78: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B5C78u;
    SET_GPR_U32(ctx, 31, 0x2B5C80u);
    ctx->pc = 0x2B5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C78u;
    // 0x2b5c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B5C78u, 0x2B5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C80u;
label_2b5c80:
    // 0x2b5c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5c84: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2b5c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2b5c88: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2b5c88u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2b5c8c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B5C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C94u);
    ctx->pc = 0x2B5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C8Cu;
    // 0x2b5c90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B5C8Cu, 0x2B5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C94u;
label_2b5c94:
    // 0x2b5c94: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x2b5c94u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x2b5c98: 0xc6370004  lwc1        $f23, 0x4($s1)
    ctx->pc = 0x2b5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b5c9c: 0x4619d541  sub.s       $f21, $f26, $f25
    ctx->pc = 0x2b5c9cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[26], ctx->f[25]);
    // 0x2b5ca0: 0xc6340008  lwc1        $f20, 0x8($s1)
    ctx->pc = 0x2b5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5ca4: 0xc6360000  lwc1        $f22, 0x0($s1)
    ctx->pc = 0x2b5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b5ca8: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B5CA8u;
    SET_GPR_U32(ctx, 31, 0x2B5CB0u);
    ctx->pc = 0x2B5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CA8u;
    // 0x2b5cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B5CA8u, 0x2B5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CB0u;
label_2b5cb0:
    // 0x2b5cb0: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x2b5cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2b5cb4: 0xe61a003c  swc1        $f26, 0x3C($s0)
    ctx->pc = 0x2b5cb4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2b5cb8: 0x4617a902  mul.s       $f4, $f21, $f23
    ctx->pc = 0x2b5cb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2b5cbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5cc0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b5cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b5cc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b5cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5cc8: 0x4616b082  mul.s       $f2, $f22, $f22
    ctx->pc = 0x2b5cc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2b5ccc: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x2b5cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b5cd0: 0x46140942  mul.s       $f5, $f1, $f20
    ctx->pc = 0x2b5cd0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2b5cd4: 0x4617b8c2  mul.s       $f3, $f23, $f23
    ctx->pc = 0x2b5cd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x2b5cd8: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2b5cd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2b5cdc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2b5cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b5ce0: 0x4616c582  mul.s       $f22, $f24, $f22
    ctx->pc = 0x2b5ce0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x2b5ce4: 0x4614c502  mul.s       $f20, $f24, $f20
    ctx->pc = 0x2b5ce4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x2b5ce8: 0x4617c602  mul.s       $f24, $f24, $f23
    ctx->pc = 0x2b5ce8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x2b5cec: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2b5cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2b5cf0: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2b5cf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2b5cf4: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2b5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b5cf8: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x2b5cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x2b5cfc: 0x4603ad42  mul.s       $f21, $f21, $f3
    ctx->pc = 0x2b5cfcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x2b5d00: 0x461620c0  add.s       $f3, $f4, $f22
    ctx->pc = 0x2b5d00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[22]);
    // 0x2b5d04: 0x46140980  add.s       $f6, $f1, $f20
    ctx->pc = 0x2b5d04u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2b5d08: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2b5d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b5d0c: 0x461829c1  sub.s       $f7, $f5, $f24
    ctx->pc = 0x2b5d0cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[5], ctx->f[24]);
    // 0x2b5d10: 0x46191080  add.s       $f2, $f2, $f25
    ctx->pc = 0x2b5d10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[25]);
    // 0x2b5d14: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x2b5d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2b5d18: 0x4619ad40  add.s       $f21, $f21, $f25
    ctx->pc = 0x2b5d18u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x2b5d1c: 0xe6060010  swc1        $f6, 0x10($s0)
    ctx->pc = 0x2b5d1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b5d20: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2b5d20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2b5d24: 0xe6070020  swc1        $f7, 0x20($s0)
    ctx->pc = 0x2b5d24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b5d28: 0x46182940  add.s       $f5, $f5, $f24
    ctx->pc = 0x2b5d28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[24]);
    // 0x2b5d2c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2b5d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b5d30: 0x46162101  sub.s       $f4, $f4, $f22
    ctx->pc = 0x2b5d30u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[22]);
    // 0x2b5d34: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x2b5d34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b5d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d3c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2b5d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b5d40: 0xe6050008  swc1        $f5, 0x8($s0)
    ctx->pc = 0x2b5d40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b5d44: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x2b5d44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b5d48: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2b5d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b5d4c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2b5d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2b5d50: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2b5d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2b5d54: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2b5d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b5d58: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2b5d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b5d5c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2b5d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2b5d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5d64: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2b5d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b5d68: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2b5d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b5d6c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2b5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b5d70: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2b5d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b5d74: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b5d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D78u;
        // 0x2b5d7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5D80u;
}
