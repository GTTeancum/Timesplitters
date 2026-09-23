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

// Function: propEditValidPropnum
// Address: 0x27c180 - 0x27c1bc
void propEditValidPropnum_0x27c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEditValidPropnum_0x27c180");
#endif

    ctx->pc = 0x27c180u;

    // 0x27c180: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x27c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27c184: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x27c184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x27c188: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x27c188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27c18c: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x27c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x27c190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c194: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27c194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27c198: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x27c198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27c19c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C19Cu;
    {
        const bool branch_taken_0x27c19c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C19Cu;
        // 0x27c1a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c19c) {
            ctx->pc = 0x27C1B0u;
            goto label_27c1b0;
        }
    }
    ctx->pc = 0x27C1A4u;
    // 0x27c1a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27c1a8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C1A8u;
    {
        const bool branch_taken_0x27c1a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c1a8) {
            ctx->pc = 0x27C1B4u;
            goto label_27c1b4;
        }
    }
    ctx->pc = 0x27C1B0u;
label_27c1b0:
    // 0x27c1b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c1b4:
    // 0x27c1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1B4u;
        // 0x27c1b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C1BCu;
}
