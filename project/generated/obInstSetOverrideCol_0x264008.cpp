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

// Function: obInstSetOverrideCol
// Address: 0x264008 - 0x26401c
void obInstSetOverrideCol_0x264008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstSetOverrideCol_0x264008");
#endif

    ctx->pc = 0x264008u;

    // 0x264008: 0xac870144  sw          $a3, 0x144($a0)
    ctx->pc = 0x264008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 7));
    // 0x26400c: 0xe48c0138  swc1        $f12, 0x138($a0)
    ctx->pc = 0x26400cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x264010: 0xac85013c  sw          $a1, 0x13C($a0)
    ctx->pc = 0x264010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 5));
    // 0x264014: 0x3e00008  jr          $ra
    ctx->pc = 0x264014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264014u;
        // 0x264018: 0xac860140  sw          $a2, 0x140($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26401Cu;
}
