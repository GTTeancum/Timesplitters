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

// Function: doorUnlock
// Address: 0x26c160 - 0x26c180
void doorUnlock_0x26c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("doorUnlock_0x26c160");
#endif

    ctx->pc = 0x26c160u;

    // 0x26c160: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x26c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x26c164: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26c164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26c168: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x26c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x26c16c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c170: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c174: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x26c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x26c178: 0x3e00008  jr          $ra
    ctx->pc = 0x26C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C178u;
        // 0x26c17c: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C180u;
}
