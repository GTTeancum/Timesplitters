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

// Function: zbtestEndAddGlow
// Address: 0x2a6e28 - 0x2a6e60
void zbtestEndAddGlow_0x2a6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestEndAddGlow_0x2a6e28");
#endif

    ctx->pc = 0x2a6e28u;

    // 0x2a6e28: 0x8f82b980  lw          $v0, -0x4680($gp)
    ctx->pc = 0x2a6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949248)));
    // 0x2a6e2c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a6e30: 0x2463a0a0  addiu       $v1, $v1, -0x5F60
    ctx->pc = 0x2a6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942880));
    // 0x2a6e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a6e38: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2a6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6e3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a6e40: 0x28620048  slti        $v0, $v1, 0x48
    ctx->pc = 0x2a6e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x2a6e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6E44u;
    {
        const bool branch_taken_0x2a6e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E44u;
        // 0x2a6e48: 0x8f82b320  lw          $v0, -0x4CE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e44) {
            ctx->pc = 0x2A6E58u;
            goto label_2a6e58;
        }
    }
    ctx->pc = 0x2A6E4Cu;
    // 0x2a6e4c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6E4Cu;
    {
        const bool branch_taken_0x2a6e4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E4Cu;
        // 0x2a6e50: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e4c) {
            ctx->pc = 0x2A6E58u;
            goto label_2a6e58;
        }
    }
    ctx->pc = 0x2A6E54u;
    // 0x2a6e54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a6e58:
    // 0x2a6e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6E60u;
}
