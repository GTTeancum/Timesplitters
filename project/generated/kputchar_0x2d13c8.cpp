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

// Function: kputchar
// Address: 0x2d13c8 - 0x2d13fc
void kputchar_0x2d13c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputchar_0x2d13c8");
#endif

    switch (ctx->pc) {
        case 0x2d13d0u: goto label_2d13d0;
        default: break;
    }

    ctx->pc = 0x2d13c8u;

    // 0x2d13c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d13cc: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x2d13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_2d13d0:
    // 0x2d13d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d13d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2d13d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2d13d8: 0x0  nop
    ctx->pc = 0x2d13d8u;
    // NOP
    // 0x2d13dc: 0x0  nop
    ctx->pc = 0x2d13dcu;
    // NOP
    // 0x2d13e0: 0x0  nop
    ctx->pc = 0x2d13e0u;
    // NOP
    // 0x2d13e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D13E4u;
    {
        const bool branch_taken_0x2d13e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13E4u;
        // 0x2d13e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13e4) {
            ctx->pc = 0x2D13D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d13d0;
        }
    }
    ctx->pc = 0x2D13ECu;
    // 0x2d13ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d13f0: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x2d13f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x2d13f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D13F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13F4u;
        // 0x2d13f8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D13F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D13FCu;
}
