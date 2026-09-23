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

// Function: soundStartLoop
// Address: 0x2058c8 - 0x2058ec
void soundStartLoop_0x2058c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundStartLoop_0x2058c8");
#endif

    switch (ctx->pc) {
        case 0x2058e0u: goto label_2058e0;
        default: break;
    }

    ctx->pc = 0x2058c8u;

    // 0x2058c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2058c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2058cc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2058ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2058d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2058d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2058d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2058d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2058d8: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x2058D8u;
    SET_GPR_U32(ctx, 31, 0x2058E0u);
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x2058D8u, 0x2058E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058E0u;
label_2058e0:
    // 0x2058e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2058e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2058e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2058E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E4u;
        // 0x2058e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058ECu;
}
