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

// Function: GSBufferWidth
// Address: 0x2b7010 - 0x2b7040
void GSBufferWidth_0x2b7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GSBufferWidth_0x2b7010");
#endif

    ctx->pc = 0x2b7010u;

    // 0x2b7010: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b7010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b7014: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x2b7014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2b7018: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7018u;
    {
        const bool branch_taken_0x2b7018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7018) {
            ctx->pc = 0x2B701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7018u;
            // 0x2b701c: 0x90820024  lbu         $v0, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7028u;
            goto label_2b7028;
        }
    }
    ctx->pc = 0x2B7020u;
    // 0x2b7020: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7020u;
    {
        const bool branch_taken_0x2b7020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7020u;
        // 0x2b7024: 0x32982  srl         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7020) {
            ctx->pc = 0x2B7038u;
            goto label_2b7038;
        }
    }
    ctx->pc = 0x2B7028u;
label_2b7028:
    // 0x2b7028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b7028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b702c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7034: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2b7034u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2b7038:
    // 0x2b7038: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7038u;
        // 0x2b703c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7040u;
}
