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

// Function: propKill
// Address: 0x2728d0 - 0x272914
void propKill_0x2728d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propKill_0x2728d0");
#endif

    ctx->pc = 0x2728d0u;

    // 0x2728d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2728d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2728d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2728d8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2728D8u;
    {
        const bool branch_taken_0x2728d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2728DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728D8u;
        // 0x2728dc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728d8) {
            ctx->pc = 0x27290Cu;
            goto label_27290c;
        }
    }
    ctx->pc = 0x2728E0u;
    // 0x2728e0: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2728e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2728e4: 0xc44cf948  lwc1        $f12, -0x6B8($v0)
    ctx->pc = 0x2728e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2728e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2728e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728ec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2728ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2728f0: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2728f4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2728f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2728f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2728f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2728fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272900: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272904: 0x809c666  j           func_271998
    ctx->pc = 0x272904u;
    ctx->pc = 0x272908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272904u;
    // 0x272908: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    propDamage_0x271998(rdram, ctx, runtime); return;
    ctx->pc = 0x27290Cu;
label_27290c:
    // 0x27290c: 0x3e00008  jr          $ra
    ctx->pc = 0x27290Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27290Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272914u;
}
