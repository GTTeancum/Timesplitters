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

// Function: soundSelectBuffer
// Address: 0x204460 - 0x204478
void soundSelectBuffer_0x204460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundSelectBuffer_0x204460");
#endif

    ctx->pc = 0x204460u;

    // 0x204460: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x204464: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x204468: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x204468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x20446c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204470: 0x3e00008  jr          $ra
    ctx->pc = 0x204470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204470u;
        // 0x204474: 0xaf849af4  sw          $a0, -0x650C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941428), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204478u;
}
