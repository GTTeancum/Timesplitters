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

// Function: hudShowScore
// Address: 0x2b0f70 - 0x2b0fbc
void hudShowScore_0x2b0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudShowScore_0x2b0f70");
#endif

    ctx->pc = 0x2b0f70u;

    // 0x2b0f70: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x2b0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b0f74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b0f78: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b0f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b0f7c: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x2b0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x2b0f80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2b0f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0f88: 0x8c850114  lw          $a1, 0x114($a0)
    ctx->pc = 0x2b0f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2b0f8c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0F8Cu;
    {
        const bool branch_taken_0x2b0f8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F8Cu;
        // 0x2b0f90: 0xac830118  sw          $v1, 0x118($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f8c) {
            ctx->pc = 0x2B0FA0u;
            goto label_2b0fa0;
        }
    }
    ctx->pc = 0x2B0F94u;
    // 0x2b0f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F98u;
        // 0x2b0f9c: 0xac820114  sw          $v0, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0FA0u;
label_2b0fa0:
    // 0x2b0fa0: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x2b0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2b0fa4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2b0fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b0fa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0FA8u;
    {
        const bool branch_taken_0x2b0fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FA8u;
        // 0x2b0fac: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fa8) {
            ctx->pc = 0x2B0FB4u;
            goto label_2b0fb4;
        }
    }
    ctx->pc = 0x2B0FB0u;
    // 0x2b0fb0: 0xac820114  sw          $v0, 0x114($a0)
    ctx->pc = 0x2b0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
label_2b0fb4:
    // 0x2b0fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0FBCu;
}
