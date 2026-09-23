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

// Function: obLoadSetClip
// Address: 0x25eb28 - 0x25eb30
void obLoadSetClip_0x25eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obLoadSetClip_0x25eb28");
#endif

    ctx->pc = 0x25eb28u;

    // 0x25eb28: 0x3e00008  jr          $ra
    ctx->pc = 0x25EB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB28u;
        // 0x25eb2c: 0xaf84a2a4  sw          $a0, -0x5D5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943396), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EB30u;
}
