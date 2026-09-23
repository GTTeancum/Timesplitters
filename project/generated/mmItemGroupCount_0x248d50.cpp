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

// Function: mmItemGroupCount
// Address: 0x248d50 - 0x248d98
void mmItemGroupCount_0x248d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmItemGroupCount_0x248d50");
#endif

    switch (ctx->pc) {
        case 0x248d60u: goto label_248d60;
        default: break;
    }

    ctx->pc = 0x248d50u;

    // 0x248d50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d54: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x248D54u;
    {
        const bool branch_taken_0x248d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D54u;
        // 0x248d58: 0x3c070036  lui         $a3, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d54) {
            ctx->pc = 0x248D90u;
            goto label_248d90;
        }
    }
    ctx->pc = 0x248D5Cu;
    // 0x248d5c: 0x0  nop
    ctx->pc = 0x248d5cu;
    // NOP
label_248d60:
    // 0x248d60: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x248d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x248d64: 0x24e48320  addiu       $a0, $a3, -0x7CE0
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935328));
    // 0x248d68: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x248d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x248d6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x248d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x248d70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x248d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x248d74: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x248d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x248d78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x248d7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x248d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x248d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x248d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248d88: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x248D88u;
    {
        const bool branch_taken_0x248d88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x248D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D88u;
        // 0x248d8c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d88) {
            ctx->pc = 0x248D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d60;
        }
    }
    ctx->pc = 0x248D90u;
label_248d90:
    // 0x248d90: 0x3e00008  jr          $ra
    ctx->pc = 0x248D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D98u;
}
