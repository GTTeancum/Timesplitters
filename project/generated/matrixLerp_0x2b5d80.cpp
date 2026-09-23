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

// Function: matrixLerp
// Address: 0x2b5d80 - 0x2b5f10
void matrixLerp_0x2b5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixLerp_0x2b5d80");
#endif

    ctx->pc = 0x2b5d80u;

    // 0x2b5d80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b5d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5d84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b5d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b5d88: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5d8c: 0x460c18c1  sub.s       $f3, $f3, $f12
    ctx->pc = 0x2b5d8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x2b5d90: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b5d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5d94: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2b5d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b5d98: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b5d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b5d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5da0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b5da4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2b5da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5da8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2b5da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5dac: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5db0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5db4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5db4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5db8: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x2b5db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2b5dbc: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x2b5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5dc0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2b5dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5dc4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5dc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5dc8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5dcc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5dccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5dd0: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x2b5dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2b5dd4: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x2b5dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5dd8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2b5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ddc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5de0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5de4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5de4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5de8: 0xe4c10030  swc1        $f1, 0x30($a2)
    ctx->pc = 0x2b5de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2b5dec: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2b5decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5df0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b5df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5df4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5df8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5dfc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5dfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5e00: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2b5e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b5e04: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2b5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5e08: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b5e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e0c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5e10: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5e14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5e18: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x2b5e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2b5e1c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x2b5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5e20: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2b5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5e24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5e28: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5e2c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5e2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5e30: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x2b5e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x2b5e34: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x2b5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5e38: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2b5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e3c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5e40: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5e44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5e48: 0xe4c10034  swc1        $f1, 0x34($a2)
    ctx->pc = 0x2b5e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x2b5e4c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2b5e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5e50: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b5e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e54: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5e58: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5e5c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5e5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5e60: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x2b5e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2b5e64: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2b5e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5e68: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e6c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5e70: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5e74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5e78: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x2b5e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2b5e7c: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x2b5e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5e80: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e84: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5e84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5e88: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5e8c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5e8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5e90: 0xe4c20028  swc1        $f2, 0x28($a2)
    ctx->pc = 0x2b5e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x2b5e94: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x2b5e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5e98: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2b5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5e9c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5ea0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5ea4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5ea8: 0xe4c10038  swc1        $f1, 0x38($a2)
    ctx->pc = 0x2b5ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x2b5eac: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2b5eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5eb0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2b5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5eb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5eb8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5ebc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5ebcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5ec0: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x2b5ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2b5ec4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x2b5ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5ec8: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2b5ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ecc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b5eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b5ed0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5ed4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5ed8: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x2b5ed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x2b5edc: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x2b5edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5ee0: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2b5ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ee4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5ee4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5ee8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b5ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b5eec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5ef0: 0xe4c2002c  swc1        $f2, 0x2C($a2)
    ctx->pc = 0x2b5ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x2b5ef4: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2b5ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ef8: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x2b5ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5efc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b5efcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b5f00: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2b5f00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b5f04: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x2b5f04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x2b5f08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F08u;
        // 0x2b5f0c: 0xe4c3003c  swc1        $f3, 0x3C($a2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5F10u;
}
