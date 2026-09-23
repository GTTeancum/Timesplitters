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

// Function: crouchmode_onchange
// Address: 0x20f4c8 - 0x20f4f4
void crouchmode_onchange_0x20f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("crouchmode_onchange_0x20f4c8");
#endif

    ctx->pc = 0x20f4c8u;

    // 0x20f4c8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f4cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f4d0: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f4d4: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x20f4d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f4d8: 0x3062fffb  andi        $v0, $v1, 0xFFFB
    ctx->pc = 0x20f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x20f4dc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F4DCu;
    {
        const bool branch_taken_0x20f4dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4DCu;
        // 0x20f4e0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4dc) {
            ctx->pc = 0x20F4ECu;
            goto label_20f4ec;
        }
    }
    ctx->pc = 0x20F4E4u;
    // 0x20f4e4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x20f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x20f4e8: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x20f4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_20f4ec:
    // 0x20f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x20F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F4F4u;
}
