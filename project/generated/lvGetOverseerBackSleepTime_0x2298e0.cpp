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

// Function: lvGetOverseerBackSleepTime
// Address: 0x2298e0 - 0x229924
void lvGetOverseerBackSleepTime_0x2298e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetOverseerBackSleepTime_0x2298e0");
#endif

    ctx->pc = 0x2298e0u;

    // 0x2298e0: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2298e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2298e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2298e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2298e8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2298E8u;
    {
        const bool branch_taken_0x2298e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2298ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298E8u;
        // 0x2298ec: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298e8) {
            ctx->pc = 0x229908u;
            goto label_229908;
        }
    }
    ctx->pc = 0x2298F0u;
    // 0x2298f0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2298F0u;
    {
        const bool branch_taken_0x2298f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2298f0) {
            ctx->pc = 0x229918u;
            goto label_229918;
        }
    }
    ctx->pc = 0x2298F8u;
    // 0x2298f8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2298f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2298fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2298fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229900: 0x3e00008  jr          $ra
    ctx->pc = 0x229900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229908u;
label_229908:
    // 0x229908: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x22990c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22990cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229910: 0x3e00008  jr          $ra
    ctx->pc = 0x229910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229918u;
label_229918:
    // 0x229918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22991c: 0x3e00008  jr          $ra
    ctx->pc = 0x22991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229924u;
}
