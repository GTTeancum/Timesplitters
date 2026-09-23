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

// Function: matrixTransRotZXY
// Address: 0x2b4ce0 - 0x2b4e40
void matrixTransRotZXY_0x2b4ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixTransRotZXY_0x2b4ce0");
#endif

    switch (ctx->pc) {
        case 0x2b4d34u: goto label_2b4d34;
        case 0x2b4d40u: goto label_2b4d40;
        case 0x2b4d4cu: goto label_2b4d4c;
        case 0x2b4d58u: goto label_2b4d58;
        case 0x2b4d64u: goto label_2b4d64;
        case 0x2b4d70u: goto label_2b4d70;
        default: break;
    }

    ctx->pc = 0x2b4ce0u;

    // 0x2b4ce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b4ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b4ce4: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x2b4ce4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b4ce8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4cec: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x2b4cecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4cf0: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x2b4cf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x2b4cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4cf8: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x2b4cf8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b4cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d00: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x2b4d00u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b4d04: 0x46007706  mov.s       $f28, $f14
    ctx->pc = 0x2b4d04u;
    ctx->f[28] = FPU_MOV_S(ctx->f[14]);
    // 0x2b4d08: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2b4d08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b4d0c: 0x46006ec6  mov.s       $f27, $f13
    ctx->pc = 0x2b4d0cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[13]);
    // 0x2b4d10: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4d10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4d14: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x2b4d14u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
    // 0x2b4d18: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x2b4d18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x2b4d1c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2b4d1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b4d20: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2b4d20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b4d24: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4d24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4d2c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2B4D34u);
    ctx->pc = 0x2B4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D2Cu;
    // 0x2b4d30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4D2Cu, 0x2B4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D34u;
label_2b4d34:
    // 0x2b4d34: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2b4d34u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4d38: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4D38u;
    SET_GPR_U32(ctx, 31, 0x2B4D40u);
    ctx->pc = 0x2B4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D38u;
    // 0x2b4d3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4D38u, 0x2B4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D40u;
label_2b4d40:
    // 0x2b4d40: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2b4d40u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4d44: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4D44u;
    SET_GPR_U32(ctx, 31, 0x2B4D4Cu);
    ctx->pc = 0x2B4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D44u;
    // 0x2b4d48: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4D44u, 0x2B4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D4Cu;
label_2b4d4c:
    // 0x2b4d4c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b4d4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4d50: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4D50u;
    SET_GPR_U32(ctx, 31, 0x2B4D58u);
    ctx->pc = 0x2B4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D50u;
    // 0x2b4d54: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4D50u, 0x2B4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D58u;
label_2b4d58:
    // 0x2b4d58: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4d58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4d5c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B4D64u);
    ctx->pc = 0x2B4D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D5Cu;
    // 0x2b4d60: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4D5Cu, 0x2B4D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D64u;
label_2b4d64:
    // 0x2b4d64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b4d64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4d68: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4D68u;
    SET_GPR_U32(ctx, 31, 0x2B4D70u);
    ctx->pc = 0x2B4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D68u;
    // 0x2b4d6c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4D68u, 0x2B4D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D70u;
label_2b4d70:
    // 0x2b4d70: 0x4616b982  mul.s       $f6, $f23, $f22
    ctx->pc = 0x2b4d70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x2b4d74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b4d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4d7c: 0x4615b942  mul.s       $f5, $f23, $f21
    ctx->pc = 0x2b4d7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x2b4d80: 0xe61a0030  swc1        $f26, 0x30($s0)
    ctx->pc = 0x2b4d80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b4d84: 0x4600b107  neg.s       $f4, $f22
    ctx->pc = 0x2b4d84u;
    ctx->f[4] = FPU_NEG_S(ctx->f[22]);
    // 0x2b4d88: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x2b4d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2b4d8c: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x2b4d8cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x2b4d90: 0xe61b0034  swc1        $f27, 0x34($s0)
    ctx->pc = 0x2b4d90u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2b4d94: 0x46050202  mul.s       $f8, $f0, $f5
    ctx->pc = 0x2b4d94u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b4d98: 0xe61c0038  swc1        $f28, 0x38($s0)
    ctx->pc = 0x2b4d98u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b4d9c: 0x460601c2  mul.s       $f7, $f0, $f6
    ctx->pc = 0x2b4d9cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2b4da0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b4da4: 0x4616a0c2  mul.s       $f3, $f20, $f22
    ctx->pc = 0x2b4da4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2b4da8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2b4dac: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x2b4dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2b4db0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2b4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2b4db4: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x2b4db4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x2b4db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4dbc: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x2b4dbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x2b4dc0: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x2b4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2b4dc4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2b4dc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b4dc8: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x2b4dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2b4dcc: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2b4dccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2b4dd0: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x2b4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b4dd4: 0x4615c542  mul.s       $f21, $f24, $f21
    ctx->pc = 0x2b4dd4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x2b4dd8: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x2b4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b4ddc: 0x4616c582  mul.s       $f22, $f24, $f22
    ctx->pc = 0x2b4ddcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x2b4de0: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x2b4de0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2b4de4: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2b4de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2b4de8: 0xe6150028  swc1        $f21, 0x28($s0)
    ctx->pc = 0x2b4de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4dec: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2b4decu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2b4df0: 0xe6160020  swc1        $f22, 0x20($s0)
    ctx->pc = 0x2b4df0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b4df4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2b4df4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2b4df8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b4df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b4dfc: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2b4dfcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2b4e00: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b4e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b4e04: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2b4e04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2b4e08: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2b4e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b4e0c: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x2b4e0cu;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
    // 0x2b4e10: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2b4e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4e14: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x2b4e14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b4e18: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x2b4e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b4e1c: 0xe6170024  swc1        $f23, 0x24($s0)
    ctx->pc = 0x2b4e1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2b4e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4e24: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2b4e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b4e28: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2b4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b4e2c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4e30: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4e34: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4e38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E38u;
        // 0x2b4e3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4E40u;
}
