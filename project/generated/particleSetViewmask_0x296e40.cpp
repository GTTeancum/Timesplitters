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

// Function: particleSetViewmask
// Address: 0x296e40 - 0x296e50
void particleSetViewmask_0x296e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleSetViewmask_0x296e40");
#endif

    ctx->pc = 0x296e40u;

    // 0x296e40: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296E40u;
    {
        const bool branch_taken_0x296e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e40) {
            ctx->pc = 0x296E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296E40u;
            // 0x296e44: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296E48u;
            goto label_296e48;
        }
    }
    ctx->pc = 0x296E48u;
label_296e48:
    // 0x296e48: 0x3e00008  jr          $ra
    ctx->pc = 0x296E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E50u;
}
