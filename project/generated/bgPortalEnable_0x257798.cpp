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

// Function: bgPortalEnable
// Address: 0x257798 - 0x2577b8
void bgPortalEnable_0x257798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalEnable_0x257798");
#endif

    ctx->pc = 0x257798u;

    // 0x257798: 0x8f82a244  lw          $v0, -0x5DBC($gp)
    ctx->pc = 0x257798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x25779c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25779cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2577a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2577a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2577a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2577a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2577a8: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2577a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2577ac: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2577acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2577b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2577B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2577B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577B0u;
        // 0x2577b4: 0xa4620016  sh          $v0, 0x16($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2577B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2577B8u;
}
