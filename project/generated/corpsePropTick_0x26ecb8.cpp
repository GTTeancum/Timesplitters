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

// Function: corpsePropTick
// Address: 0x26ecb8 - 0x26ece4
void corpsePropTick_0x26ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("corpsePropTick_0x26ecb8");
#endif

    ctx->pc = 0x26ecb8u;

    // 0x26ecb8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ecbc: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x26ecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x26ecc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ECC0u;
    {
        const bool branch_taken_0x26ecc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECC0u;
        // 0x26ecc4: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecc0) {
            ctx->pc = 0x26ECD0u;
            goto label_26ecd0;
        }
    }
    ctx->pc = 0x26ECC8u;
    // 0x26ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECC8u;
        // 0x26eccc: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ECD0u;
label_26ecd0:
    // 0x26ecd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26ecd4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26ecd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECDCu;
        // 0x26ece0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ECE4u;
}
