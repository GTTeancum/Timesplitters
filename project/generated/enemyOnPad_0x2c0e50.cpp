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

// Function: enemyOnPad
// Address: 0x2c0e50 - 0x2c0ea8
void enemyOnPad_0x2c0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyOnPad_0x2c0e50");
#endif

    switch (ctx->pc) {
        case 0x2c0e68u: goto label_2c0e68;
        default: break;
    }

    ctx->pc = 0x2c0e50u;

    // 0x2c0e50: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x2c0e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2c0e54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c0e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e58: 0x19000011  blez        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C0E58u;
    {
        const bool branch_taken_0x2c0e58 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E58u;
        // 0x2c0e5c: 0x8c820160  lw          $v0, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e58) {
            ctx->pc = 0x2C0EA0u;
            goto label_2c0ea0;
        }
    }
    ctx->pc = 0x2C0E60u;
    // 0x2c0e60: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0e64: 0x0  nop
    ctx->pc = 0x2c0e64u;
    // NOP
label_2c0e68:
    // 0x2c0e68: 0x10c70009  beq         $a2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0E68u;
    {
        const bool branch_taken_0x2c0e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E68u;
        // 0x2c0e6c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e68) {
            ctx->pc = 0x2C0E90u;
            goto label_2c0e90;
        }
    }
    ctx->pc = 0x2C0E70u;
    // 0x2c0e70: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2c0e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c0e74: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2c0e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0e78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0e7c: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x2c0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x2c0e80: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0E80u;
    {
        const bool branch_taken_0x2c0e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c0e80) {
            ctx->pc = 0x2C0E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0E80u;
            // 0x2c0e84: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0E94u;
            goto label_2c0e94;
        }
    }
    ctx->pc = 0x2C0E88u;
    // 0x2c0e88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E88u;
        // 0x2c0e8c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E90u;
label_2c0e90:
    // 0x2c0e90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2c0e94:
    // 0x2c0e94: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2c0e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c0e98: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C0E98u;
    {
        const bool branch_taken_0x2c0e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e98) {
            ctx->pc = 0x2C0E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0e68;
        }
    }
    ctx->pc = 0x2C0EA0u;
label_2c0ea0:
    // 0x2c0ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EA0u;
        // 0x2c0ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0EA8u;
}
