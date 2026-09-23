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

// Function: getPropViewportDrawFlags
// Address: 0x268f00 - 0x268f6c
void getPropViewportDrawFlags_0x268f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPropViewportDrawFlags_0x268f00");
#endif

    ctx->pc = 0x268f00u;

    // 0x268f00: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x268f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x268f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268f08: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x268F08u;
    {
        const bool branch_taken_0x268f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F08u;
        // 0x268f0c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f08) {
            ctx->pc = 0x268F4Cu;
            goto label_268f4c;
        }
    }
    ctx->pc = 0x268F10u;
    // 0x268f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268F10u;
    {
        const bool branch_taken_0x268f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F10u;
        // 0x268f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f10) {
            ctx->pc = 0x268F28u;
            goto label_268f28;
        }
    }
    ctx->pc = 0x268F18u;
    // 0x268f18: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x268F18u;
    {
        const bool branch_taken_0x268f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F18u;
        // 0x268f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f18) {
            ctx->pc = 0x268F44u;
            goto label_268f44;
        }
    }
    ctx->pc = 0x268F20u;
    // 0x268f20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x268F20u;
    {
        const bool branch_taken_0x268f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f20) {
            ctx->pc = 0x268F64u;
            goto label_268f64;
        }
    }
    ctx->pc = 0x268F28u;
label_268f28:
    // 0x268f28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x268f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268f2c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268F2Cu;
    {
        const bool branch_taken_0x268f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F2Cu;
        // 0x268f30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f2c) {
            ctx->pc = 0x268F54u;
            goto label_268f54;
        }
    }
    ctx->pc = 0x268F34u;
    // 0x268f34: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268F34u;
    {
        const bool branch_taken_0x268f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F34u;
        // 0x268f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f34) {
            ctx->pc = 0x268F5Cu;
            goto label_268f5c;
        }
    }
    ctx->pc = 0x268F3Cu;
    // 0x268f3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x268F3Cu;
    {
        const bool branch_taken_0x268f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f3c) {
            ctx->pc = 0x268F64u;
            goto label_268f64;
        }
    }
    ctx->pc = 0x268F44u;
label_268f44:
    // 0x268f44: 0x3e00008  jr          $ra
    ctx->pc = 0x268F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F44u;
        // 0x268f48: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F4Cu;
label_268f4c:
    // 0x268f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x268F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F4Cu;
        // 0x268f50: 0x3c020300  lui         $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F54u;
label_268f54:
    // 0x268f54: 0x3e00008  jr          $ra
    ctx->pc = 0x268F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F54u;
        // 0x268f58: 0x3c020700  lui         $v0, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F5Cu;
label_268f5c:
    // 0x268f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x268F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F5Cu;
        // 0x268f60: 0x3c020f00  lui         $v0, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F64u;
label_268f64:
    // 0x268f64: 0x3e00008  jr          $ra
    ctx->pc = 0x268F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F6Cu;
}
