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

// Function: newrndseed
// Address: 0x2b68f8 - 0x2b6910
void newrndseed_0x2b68f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("newrndseed_0x2b68f8");
#endif

    ctx->pc = 0x2b68f8u;

    // 0x2b68f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b68f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b68fc: 0xaf80b488  sw          $zero, -0x4B78($gp)
    ctx->pc = 0x2b68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947976), GPR_U32(ctx, 0));
    // 0x2b6900: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b6900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2b6904: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x2b6904u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x2b6908: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6908u;
        // 0x2b690c: 0xff84b480  sd          $a0, -0x4B80($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294947968), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6910u;
}
