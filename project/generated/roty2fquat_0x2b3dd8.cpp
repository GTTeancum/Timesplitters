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

// Function: roty2fquat
// Address: 0x2b3dd8 - 0x2b3e2c
void roty2fquat_0x2b3dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roty2fquat_0x2b3dd8");
#endif

    switch (ctx->pc) {
        case 0x2b3e00u: goto label_2b3e00;
        case 0x2b3e10u: goto label_2b3e10;
        default: break;
    }

    ctx->pc = 0x2b3dd8u;

    // 0x2b3dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3ddc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3de4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b3de4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b3de8: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2b3de8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3df8: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B3DF8u;
    SET_GPR_U32(ctx, 31, 0x2B3E00u);
    ctx->pc = 0x2B3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3DF8u;
    // 0x2b3dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B3DF8u, 0x2B3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E00u;
label_2b3e00:
    // 0x2b3e00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b3e04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b3e04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b3e08: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B3E08u;
    SET_GPR_U32(ctx, 31, 0x2B3E10u);
    ctx->pc = 0x2B3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E08u;
    // 0x2b3e0c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B3E08u, 0x2B3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E10u;
label_2b3e10:
    // 0x2b3e10: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b3e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b3e14: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b3e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b3e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3e20: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E24u;
        // 0x2b3e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3E2Cu;
}
