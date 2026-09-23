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

// Function: rot2fquat
// Address: 0x2b3e88 - 0x2b3f8c
void rot2fquat_0x2b3e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rot2fquat_0x2b3e88");
#endif

    switch (ctx->pc) {
        case 0x2b3ed8u: goto label_2b3ed8;
        case 0x2b3ee4u: goto label_2b3ee4;
        case 0x2b3ef0u: goto label_2b3ef0;
        case 0x2b3efcu: goto label_2b3efc;
        case 0x2b3f08u: goto label_2b3f08;
        case 0x2b3f14u: goto label_2b3f14;
        default: break;
    }

    ctx->pc = 0x2b3e88u;

    // 0x2b3e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b3e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b3e8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e94: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b3e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b3e98: 0xc4940000  lwc1        $f20, 0x0($a0)
    ctx->pc = 0x2b3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3ea0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2b3ea0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b3ea4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2b3ea4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b3ea8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b3ea8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b3eac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b3eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3eb0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b3eb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b3eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3eb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b3eb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b3ebc: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2b3ebcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b3ec0: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2b3ec0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b3ec4: 0xc4970004  lwc1        $f23, 0x4($a0)
    ctx->pc = 0x2b3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b3ec8: 0xc4980008  lwc1        $f24, 0x8($a0)
    ctx->pc = 0x2b3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b3ecc: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2b3eccu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2b3ed0: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B3ED0u;
    SET_GPR_U32(ctx, 31, 0x2B3ED8u);
    ctx->pc = 0x2B3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3ED0u;
    // 0x2b3ed4: 0x4600c602  mul.s       $f24, $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B3ED0u, 0x2B3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3ED8u;
label_2b3ed8:
    // 0x2b3ed8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b3ed8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3edc: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B3EDCu;
    SET_GPR_U32(ctx, 31, 0x2B3EE4u);
    ctx->pc = 0x2B3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EDCu;
    // 0x2b3ee0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B3EDCu, 0x2B3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EE4u;
label_2b3ee4:
    // 0x2b3ee4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b3ee4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3ee8: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B3EE8u;
    SET_GPR_U32(ctx, 31, 0x2B3EF0u);
    ctx->pc = 0x2B3EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EE8u;
    // 0x2b3eec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B3EE8u, 0x2B3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EF0u;
label_2b3ef0:
    // 0x2b3ef0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b3ef0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3ef4: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B3EF4u;
    SET_GPR_U32(ctx, 31, 0x2B3EFCu);
    ctx->pc = 0x2B3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EF4u;
    // 0x2b3ef8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B3EF4u, 0x2B3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EFCu;
label_2b3efc:
    // 0x2b3efc: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x2b3efcu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3f00: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B3F00u;
    SET_GPR_U32(ctx, 31, 0x2B3F08u);
    ctx->pc = 0x2B3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F00u;
    // 0x2b3f04: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B3F00u, 0x2B3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F08u;
label_2b3f08:
    // 0x2b3f08: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2b3f08u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3f0c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B3F0Cu;
    SET_GPR_U32(ctx, 31, 0x2B3F14u);
    ctx->pc = 0x2B3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F0Cu;
    // 0x2b3f10: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B3F0Cu, 0x2B3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F14u;
label_2b3f14:
    // 0x2b3f14: 0x4615b042  mul.s       $f1, $f22, $f21
    ctx->pc = 0x2b3f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2b3f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3f1c: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x2b3f1cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2b3f20: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2b3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b3f24: 0x4619b582  mul.s       $f22, $f22, $f25
    ctx->pc = 0x2b3f24u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2b3f28: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x2b3f28u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2b3f2c: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x2b3f2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3f30: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x2b3f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b3f34: 0x4617b102  mul.s       $f4, $f22, $f23
    ctx->pc = 0x2b3f34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x2b3f38: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x2b3f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b3f3c: 0x4617a0c2  mul.s       $f3, $f20, $f23
    ctx->pc = 0x2b3f3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2b3f40: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2b3f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2b3f44: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x2b3f44u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2b3f48: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2b3f48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b3f4c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2b3f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b3f50: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2b3f50u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2b3f54: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2b3f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2b3f58: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2b3f58u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2b3f5c: 0x4615b581  sub.s       $f22, $f22, $f21
    ctx->pc = 0x2b3f5cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x2b3f60: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2b3f60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2b3f64: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2b3f64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b3f68: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x2b3f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b3f6c: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x2b3f6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b3f70: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x2b3f70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b3f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3f78: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b3f7c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b3f80: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b3f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3f84: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F84u;
        // 0x2b3f88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3F8Cu;
}
