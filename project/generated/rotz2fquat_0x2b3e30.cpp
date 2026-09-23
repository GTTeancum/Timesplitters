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

// Function: rotz2fquat
// Address: 0x2b3e30 - 0x2b3e84
void rotz2fquat_0x2b3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rotz2fquat_0x2b3e30");
#endif

    switch (ctx->pc) {
        case 0x2b3e58u: goto label_2b3e58;
        case 0x2b3e6cu: goto label_2b3e6c;
        default: break;
    }

    ctx->pc = 0x2b3e30u;

    // 0x2b3e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3e34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e3c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b3e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b3e40: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2b3e40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3e48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3e50: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B3E50u;
    SET_GPR_U32(ctx, 31, 0x2B3E58u);
    ctx->pc = 0x2B3E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E50u;
    // 0x2b3e54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B3E50u, 0x2B3E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E58u;
label_2b3e58:
    // 0x2b3e58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b3e5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b3e5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b3e60: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b3e64: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B3E64u;
    SET_GPR_U32(ctx, 31, 0x2B3E6Cu);
    ctx->pc = 0x2B3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E64u;
    // 0x2b3e68: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B3E64u, 0x2B3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E6Cu;
label_2b3e6c:
    // 0x2b3e6c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2b3e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b3e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3e78: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b3e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E7Cu;
        // 0x2b3e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3E84u;
}
