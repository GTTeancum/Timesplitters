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

// Function: bgPortalDisable
// Address: 0x257778 - 0x257798
void bgPortalDisable_0x257778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalDisable_0x257778");
#endif

    ctx->pc = 0x257778u;

    // 0x257778: 0x8f82a244  lw          $v0, -0x5DBC($gp)
    ctx->pc = 0x257778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x25777c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25777cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x257780: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x257780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257784: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x257784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257788: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x257788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x25778c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x257790: 0x3e00008  jr          $ra
    ctx->pc = 0x257790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257790u;
        // 0x257794: 0xa4620016  sh          $v0, 0x16($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257798u;
}
