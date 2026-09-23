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

// Function: kprintf
// Address: 0x2d1d38 - 0x2d1d80
void kprintf_0x2d1d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kprintf_0x2d1d38");
#endif

    switch (ctx->pc) {
        case 0x2d1d74u: goto label_2d1d74;
        default: break;
    }

    ctx->pc = 0x2d1d38u;

    // 0x2d1d38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d1d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d1d3c: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x2d1d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x2d1d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1d44: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2d1d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d1d48: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x2d1d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x2d1d4c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x2d1d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x2d1d50: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x2d1d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x2d1d54: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x2d1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x2d1d58: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x2d1d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x2d1d5c: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x2d1d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x2d1d60: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x2d1d60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d1d64: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x2d1d64u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d1d68: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x2d1d68u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d1d6c: 0xc0b45f8  jal         func_2D17E0
    ctx->pc = 0x2D1D6Cu;
    SET_GPR_U32(ctx, 31, 0x2D1D74u);
    ctx->pc = 0x2D1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D6Cu;
    // 0x2d1d70: 0xe7b20054  swc1        $f18, 0x54($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D17E0u, 0x2D1D6Cu, 0x2D1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D74u;
label_2d1d74:
    // 0x2d1d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D78u;
        // 0x2d1d7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D80u;
}
