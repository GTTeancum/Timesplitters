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

// Function: pickupPropDelete
// Address: 0x273618 - 0x273658
void pickupPropDelete_0x273618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupPropDelete_0x273618");
#endif

    ctx->pc = 0x273618u;

    // 0x273618: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x273618u;
    {
        const bool branch_taken_0x273618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273618) {
            ctx->pc = 0x273650u;
            goto label_273650;
        }
    }
    ctx->pc = 0x273620u;
    // 0x273620: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x273620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x273624: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x273624u;
    {
        const bool branch_taken_0x273624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273624u;
        // 0x273628: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273624) {
            ctx->pc = 0x273648u;
            goto label_273648;
        }
    }
    ctx->pc = 0x27362Cu;
    // 0x27362c: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x27362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x273630: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273630u;
    {
        const bool branch_taken_0x273630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273630u;
        // 0x273634: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273630) {
            ctx->pc = 0x273648u;
            goto label_273648;
        }
    }
    ctx->pc = 0x273638u;
    // 0x273638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27363c: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x27363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x273640: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273644: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x273644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_273648:
    // 0x273648: 0x809a4d0  j           func_269340
    ctx->pc = 0x273648u;
    ctx->pc = 0x269340u;
    propDelete_0x269340(rdram, ctx, runtime); return;
    ctx->pc = 0x273650u;
label_273650:
    // 0x273650: 0x3e00008  jr          $ra
    ctx->pc = 0x273650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273658u;
}
