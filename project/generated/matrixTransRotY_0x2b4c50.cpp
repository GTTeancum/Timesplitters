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

// Function: matrixTransRotY
// Address: 0x2b4c50 - 0x2b4ce0
void matrixTransRotY_0x2b4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixTransRotY_0x2b4c50");
#endif

    switch (ctx->pc) {
        case 0x2b4c88u: goto label_2b4c88;
        case 0x2b4c90u: goto label_2b4c90;
        case 0x2b4c9cu: goto label_2b4c9c;
        default: break;
    }

    ctx->pc = 0x2b4c50u;

    // 0x2b4c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b4c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c5c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2b4c5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b4c60: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2b4c60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b4c64: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x2b4c64u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x2b4c68: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4c68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4c6c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2b4c6cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4c70: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4c74: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2b4c74u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2b4c78: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4c7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4c80: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4C80u;
    SET_GPR_U32(ctx, 31, 0x2B4C88u);
    ctx->pc = 0x2B4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C80u;
    // 0x2b4c84: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4C80u, 0x2B4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C88u;
label_2b4c88:
    // 0x2b4c88: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4C88u;
    SET_GPR_U32(ctx, 31, 0x2B4C90u);
    ctx->pc = 0x2B4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C88u;
    // 0x2b4c8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4C88u, 0x2B4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C90u;
label_2b4c90:
    // 0x2b4c90: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4c90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4c94: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4C94u;
    SET_GPR_U32(ctx, 31, 0x2B4C9Cu);
    ctx->pc = 0x2B4C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C94u;
    // 0x2b4c98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4C94u, 0x2B4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C9Cu;
label_2b4c9c:
    // 0x2b4c9c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2b4c9cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2b4ca0: 0xe6160038  swc1        $f22, 0x38($s0)
    ctx->pc = 0x2b4ca0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b4ca4: 0xe6170030  swc1        $f23, 0x30($s0)
    ctx->pc = 0x2b4ca4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b4ca8: 0xe6180034  swc1        $f24, 0x34($s0)
    ctx->pc = 0x2b4ca8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2b4cac: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x2b4cacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b4cb0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2b4cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4cb4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b4cb8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2b4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4cc4: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2b4cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b4cc8: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2b4cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b4ccc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4cd0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4cd4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4CD8u;
        // 0x2b4cdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4CE0u;
}
