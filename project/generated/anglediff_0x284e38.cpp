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

// Function: anglediff
// Address: 0x284e38 - 0x284e8c
void anglediff_0x284e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anglediff_0x284e38");
#endif

    ctx->pc = 0x284e38u;

    // 0x284e38: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x284e38u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x284e3c: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x284e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x284e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e44: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x284e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284e48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x284E48u;
    {
        const bool branch_taken_0x284e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284e48) {
            ctx->pc = 0x284E60u;
            goto label_284e60;
        }
    }
    ctx->pc = 0x284E50u;
    // 0x284e50: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x284e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x284e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e58: 0x3e00008  jr          $ra
    ctx->pc = 0x284E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E58u;
        // 0x284e5c: 0x46006800  add.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E60u;
label_284e60:
    // 0x284e60: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x284e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x284e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e68: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x284e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284e6c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x284E6Cu;
    {
        const bool branch_taken_0x284e6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284e6c) {
            ctx->pc = 0x284E84u;
            goto label_284e84;
        }
    }
    ctx->pc = 0x284E74u;
    // 0x284e74: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x284e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x284e78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x284E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E7Cu;
        // 0x284e80: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E84u;
label_284e84:
    // 0x284e84: 0x3e00008  jr          $ra
    ctx->pc = 0x284E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E84u;
        // 0x284e88: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E8Cu;
}
