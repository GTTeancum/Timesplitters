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

// Function: particleUpdateGroundHeight
// Address: 0x296eb0 - 0x296ec0
void particleUpdateGroundHeight_0x296eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleUpdateGroundHeight_0x296eb0");
#endif

    ctx->pc = 0x296eb0u;

    // 0x296eb0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296EB0u;
    {
        const bool branch_taken_0x296eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x296eb0) {
            ctx->pc = 0x296EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296EB0u;
            // 0x296eb4: 0xe48c0028  swc1        $f12, 0x28($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x296EB8u;
            goto label_296eb8;
        }
    }
    ctx->pc = 0x296EB8u;
label_296eb8:
    // 0x296eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x296EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296EC0u;
}
