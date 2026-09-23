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

// Function: curAnimComplete
// Address: 0x215b00 - 0x215b1c
void curAnimComplete_0x215b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("curAnimComplete_0x215b00");
#endif

    ctx->pc = 0x215b00u;

    // 0x215b00: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x215b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x215b04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215B04u;
    {
        const bool branch_taken_0x215b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215b04) {
            ctx->pc = 0x215B14u;
            goto label_215b14;
        }
    }
    ctx->pc = 0x215B0Cu;
    // 0x215b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x215B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B0Cu;
        // 0x215b10: 0x8c820098  lw          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215B14u;
label_215b14:
    // 0x215b14: 0x3e00008  jr          $ra
    ctx->pc = 0x215B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B14u;
        // 0x215b18: 0x8c8200d8  lw          $v0, 0xD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215B1Cu;
}
