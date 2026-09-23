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

// Function: propDump
// Address: 0x266e98 - 0x266ec0
void propDump_0x266e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propDump_0x266e98");
#endif

    switch (ctx->pc) {
        case 0x266ea0u: goto label_266ea0;
        default: break;
    }

    ctx->pc = 0x266e98u;

    // 0x266e98: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x266E98u;
    {
        const bool branch_taken_0x266e98 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x266E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E98u;
        // 0x266e9c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e98) {
            ctx->pc = 0x266EB8u;
            goto label_266eb8;
        }
    }
    ctx->pc = 0x266EA0u;
label_266ea0:
    // 0x266ea0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x266ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x266ea4: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x266EA4u;
    {
        const bool branch_taken_0x266ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266ea4) {
            ctx->pc = 0x266EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266EA4u;
            // 0x266ea8: 0x28420081  slti        $v0, $v0, 0x81 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266EACu;
            goto label_266eac;
        }
    }
    ctx->pc = 0x266EACu;
label_266eac:
    // 0x266eac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x266eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x266eb0: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x266EB0u;
    {
        const bool branch_taken_0x266eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x266EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB0u;
        // 0x266eb4: 0x24840250  addiu       $a0, $a0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266eb0) {
            ctx->pc = 0x266EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266ea0;
        }
    }
    ctx->pc = 0x266EB8u;
label_266eb8:
    // 0x266eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x266EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266EC0u;
}
