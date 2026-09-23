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

// Function: DPRINT
// Address: 0x2d59a0 - 0x2d59d8
void DPRINT_0x2d59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DPRINT_0x2d59a0");
#endif

    ctx->pc = 0x2d59a0u;

    // 0x2d59a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d59a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d59a4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2d59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2d59a8: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x2d59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x2d59ac: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x2d59acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x2d59b0: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x2d59b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x2d59b4: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x2d59b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x2d59b8: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x2d59b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x2d59bc: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x2d59bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x2d59c0: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x2d59c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d59c4: 0xe7ae003c  swc1        $f14, 0x3C($sp)
    ctx->pc = 0x2d59c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d59c8: 0xe7b00040  swc1        $f16, 0x40($sp)
    ctx->pc = 0x2d59c8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d59cc: 0xe7b20044  swc1        $f18, 0x44($sp)
    ctx->pc = 0x2d59ccu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d59d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D59D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59D0u;
        // 0x2d59d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D59D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D59D8u;
}
