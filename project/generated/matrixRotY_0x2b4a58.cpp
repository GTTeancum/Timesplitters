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

// Function: matrixRotY
// Address: 0x2b4a58 - 0x2b4ab8
void matrixRotY_0x2b4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixRotY_0x2b4a58");
#endif

    switch (ctx->pc) {
        case 0x2b4a78u: goto label_2b4a78;
        case 0x2b4a80u: goto label_2b4a80;
        case 0x2b4a8cu: goto label_2b4a8c;
        default: break;
    }

    ctx->pc = 0x2b4a58u;

    // 0x2b4a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a64: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4a68: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4a68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4a6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4a70: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4A70u;
    SET_GPR_U32(ctx, 31, 0x2B4A78u);
    ctx->pc = 0x2B4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A70u;
    // 0x2b4a74: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4A70u, 0x2B4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A78u;
label_2b4a78:
    // 0x2b4a78: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4A78u;
    SET_GPR_U32(ctx, 31, 0x2B4A80u);
    ctx->pc = 0x2B4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A78u;
    // 0x2b4a7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4A78u, 0x2B4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A80u;
label_2b4a80:
    // 0x2b4a80: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4a80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4a84: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4A84u;
    SET_GPR_U32(ctx, 31, 0x2B4A8Cu);
    ctx->pc = 0x2B4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A84u;
    // 0x2b4a88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4A84u, 0x2B4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A8Cu;
label_2b4a8c:
    // 0x2b4a8c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2b4a8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2b4a90: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x2b4a90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b4a94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2b4a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4a98: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2b4a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4a9c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2b4a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b4aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4aa8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4aac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AB0u;
        // 0x2b4ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4AB8u;
}
