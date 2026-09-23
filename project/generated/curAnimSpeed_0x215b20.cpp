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

// Function: curAnimSpeed
// Address: 0x215b20 - 0x215b40
void curAnimSpeed_0x215b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("curAnimSpeed_0x215b20");
#endif

    ctx->pc = 0x215b20u;

    // 0x215b20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x215b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215b24: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x215b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215b28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b2c: 0x0  nop
    ctx->pc = 0x215b2cu;
    // NOP
    // 0x215b30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x215B30u;
    {
        const bool branch_taken_0x215b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215b30) {
            ctx->pc = 0x215B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215B30u;
            // 0x215b34: 0xe481008c  swc1        $f1, 0x8C($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B38u;
            goto label_215b38;
        }
    }
    ctx->pc = 0x215B38u;
label_215b38:
    // 0x215b38: 0x3e00008  jr          $ra
    ctx->pc = 0x215B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B38u;
        // 0x215b3c: 0xe48c008c  swc1        $f12, 0x8C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215B40u;
}
