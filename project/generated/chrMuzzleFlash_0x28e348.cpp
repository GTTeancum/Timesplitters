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

// Function: chrMuzzleFlash
// Address: 0x28e348 - 0x28e360
void chrMuzzleFlash_0x28e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrMuzzleFlash_0x28e348");
#endif

    ctx->pc = 0x28e348u;

    // 0x28e348: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x28e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x28e34c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x28e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28e350: 0x94830124  lhu         $v1, 0x124($a0)
    ctx->pc = 0x28e350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x28e354: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x28e354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x28e358: 0x3e00008  jr          $ra
    ctx->pc = 0x28E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E358u;
        // 0x28e35c: 0xa4830124  sh          $v1, 0x124($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E360u;
}
