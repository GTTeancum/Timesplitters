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

// Function: propDeleteCorpse
// Address: 0x273a80 - 0x273ac0
void propDeleteCorpse_0x273a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propDeleteCorpse_0x273a80");
#endif

    ctx->pc = 0x273a80u;

    // 0x273a80: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x273A80u;
    {
        const bool branch_taken_0x273a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a80) {
            ctx->pc = 0x273AB8u;
            goto label_273ab8;
        }
    }
    ctx->pc = 0x273A88u;
    // 0x273a88: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x273a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x273a8c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x273A8Cu;
    {
        const bool branch_taken_0x273a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A8Cu;
        // 0x273a90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a8c) {
            ctx->pc = 0x273AB0u;
            goto label_273ab0;
        }
    }
    ctx->pc = 0x273A94u;
    // 0x273a94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x273a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273a98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273A98u;
    {
        const bool branch_taken_0x273a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A98u;
        // 0x273a9c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a98) {
            ctx->pc = 0x273AB0u;
            goto label_273ab0;
        }
    }
    ctx->pc = 0x273AA0u;
    // 0x273aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273aa4: 0x2442eb60  addiu       $v0, $v0, -0x14A0
    ctx->pc = 0x273aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x273aa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273aac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x273aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_273ab0:
    // 0x273ab0: 0x809a4d0  j           func_269340
    ctx->pc = 0x273AB0u;
    ctx->pc = 0x269340u;
    propDelete_0x269340(rdram, ctx, runtime); return;
    ctx->pc = 0x273AB8u;
label_273ab8:
    // 0x273ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x273AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273AC0u;
}
