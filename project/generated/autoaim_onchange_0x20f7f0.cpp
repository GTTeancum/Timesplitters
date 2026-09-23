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

// Function: autoaim_onchange
// Address: 0x20f7f0 - 0x20f81c
void autoaim_onchange_0x20f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("autoaim_onchange_0x20f7f0");
#endif

    ctx->pc = 0x20f7f0u;

    // 0x20f7f0: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f7f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f7f8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f7fc: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x20f7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f800: 0x3062ff7f  andi        $v0, $v1, 0xFF7F
    ctx->pc = 0x20f800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x20f804: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F804u;
    {
        const bool branch_taken_0x20f804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F804u;
        // 0x20f808: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f804) {
            ctx->pc = 0x20F814u;
            goto label_20f814;
        }
    }
    ctx->pc = 0x20F80Cu;
    // 0x20f80c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x20f80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x20f810: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x20f810u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_20f814:
    // 0x20f814: 0x3e00008  jr          $ra
    ctx->pc = 0x20F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F81Cu;
}
