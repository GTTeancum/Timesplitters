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

// Function: specialPropDelete
// Address: 0x2783c0 - 0x278400
void specialPropDelete_0x2783c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialPropDelete_0x2783c0");
#endif

    ctx->pc = 0x2783c0u;

    // 0x2783c0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2783C0u;
    {
        const bool branch_taken_0x2783c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2783c0) {
            ctx->pc = 0x2783F8u;
            goto label_2783f8;
        }
    }
    ctx->pc = 0x2783C8u;
    // 0x2783c8: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2783c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2783cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2783CCu;
    {
        const bool branch_taken_0x2783cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783CCu;
        // 0x2783d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783cc) {
            ctx->pc = 0x2783F0u;
            goto label_2783f0;
        }
    }
    ctx->pc = 0x2783D4u;
    // 0x2783d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2783d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2783d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2783D8u;
    {
        const bool branch_taken_0x2783d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2783DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783D8u;
        // 0x2783dc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783d8) {
            ctx->pc = 0x2783F0u;
            goto label_2783f0;
        }
    }
    ctx->pc = 0x2783E0u;
    // 0x2783e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2783e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2783e4: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x2783e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x2783e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2783e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2783ec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2783ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2783f0:
    // 0x2783f0: 0x809a4d0  j           func_269340
    ctx->pc = 0x2783F0u;
    ctx->pc = 0x269340u;
    propDelete_0x269340(rdram, ctx, runtime); return;
    ctx->pc = 0x2783F8u;
label_2783f8:
    // 0x2783f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2783F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2783F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278400u;
}
