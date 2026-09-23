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

// Function: __main
// Address: 0x2e1330 - 0x2e1350
void ps2___main_0x2e1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x2e1330");
#endif

    ctx->pc = 0x2e1330u;

    // 0x2e1330: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2e1330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2e1334: 0x8c625364  lw          $v0, 0x5364($v1)
    ctx->pc = 0x2e1334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FF5364u));
    // 0x2e1338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1338u;
    {
        const bool branch_taken_0x2e1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1338u;
        // 0x2e133c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1338) {
            ctx->pc = 0x2E1348u;
            goto label_2e1348;
        }
    }
    ctx->pc = 0x2E1340u;
    // 0x2e1340: 0x80b84a0  j           func_2E1280
    ctx->pc = 0x2E1340u;
    ctx->pc = 0x2E1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1340u;
    // 0x2e1344: 0xac625364  sw          $v0, 0x5364($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 21348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1280u;
    ps2___do_global_ctors_0x2e1280(rdram, ctx, runtime); return;
    ctx->pc = 0x2E1348u;
label_2e1348:
    // 0x2e1348: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1350u;
}
