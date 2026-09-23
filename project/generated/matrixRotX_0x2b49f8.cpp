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

// Function: matrixRotX
// Address: 0x2b49f8 - 0x2b4a58
void matrixRotX_0x2b49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixRotX_0x2b49f8");
#endif

    switch (ctx->pc) {
        case 0x2b4a18u: goto label_2b4a18;
        case 0x2b4a20u: goto label_2b4a20;
        case 0x2b4a2cu: goto label_2b4a2c;
        default: break;
    }

    ctx->pc = 0x2b49f8u;

    // 0x2b49f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b49f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b49fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b49fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a04: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4a04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4a08: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4a08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4a0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4a10: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4A10u;
    SET_GPR_U32(ctx, 31, 0x2B4A18u);
    ctx->pc = 0x2B4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A10u;
    // 0x2b4a14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4A10u, 0x2B4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A18u;
label_2b4a18:
    // 0x2b4a18: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4A18u;
    SET_GPR_U32(ctx, 31, 0x2B4A20u);
    ctx->pc = 0x2B4A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A18u;
    // 0x2b4a1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4A18u, 0x2B4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A20u;
label_2b4a20:
    // 0x2b4a20: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4a20u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4a24: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4A24u;
    SET_GPR_U32(ctx, 31, 0x2B4A2Cu);
    ctx->pc = 0x2B4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A24u;
    // 0x2b4a28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4A24u, 0x2B4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A2Cu;
label_2b4a2c:
    // 0x2b4a2c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2b4a2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2b4a30: 0xe6150018  swc1        $f21, 0x18($s0)
    ctx->pc = 0x2b4a30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b4a34: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2b4a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4a38: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b4a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b4a3c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x2b4a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2b4a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4a48: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4a4c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A50u;
        // 0x2b4a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4A58u;
}
