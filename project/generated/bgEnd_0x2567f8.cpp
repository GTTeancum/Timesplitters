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

// Function: bgEnd
// Address: 0x2567f8 - 0x256830
void bgEnd_0x2567f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgEnd_0x2567f8");
#endif

    ctx->pc = 0x2567f8u;

    // 0x2567f8: 0x8f82935c  lw          $v0, -0x6CA4($gp)
    ctx->pc = 0x2567f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x2567fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2567FCu;
    {
        const bool branch_taken_0x2567fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567FCu;
        // 0x256800: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567fc) {
            ctx->pc = 0x256828u;
            goto label_256828;
        }
    }
    ctx->pc = 0x256804u;
    // 0x256804: 0xaf80a234  sw          $zero, -0x5DCC($gp)
    ctx->pc = 0x256804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 0));
    // 0x256808: 0x24627330  addiu       $v0, $v1, 0x7330
    ctx->pc = 0x256808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x25680c: 0xac607330  sw          $zero, 0x7330($v1)
    ctx->pc = 0x25680cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29488), GPR_U32(ctx, 0));
    // 0x256810: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x256810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x256814: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x256814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x256818: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x256818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x25681c: 0xaf80b894  sw          $zero, -0x476C($gp)
    ctx->pc = 0x25681cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949012), GPR_U32(ctx, 0));
    // 0x256820: 0xaf80a230  sw          $zero, -0x5DD0($gp)
    ctx->pc = 0x256820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 0));
    // 0x256824: 0xaf80a270  sw          $zero, -0x5D90($gp)
    ctx->pc = 0x256824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943344), GPR_U32(ctx, 0));
label_256828:
    // 0x256828: 0x3e00008  jr          $ra
    ctx->pc = 0x256828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256830u;
}
