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

// Function: bgRoomGetLevel
// Address: 0x256fa0 - 0x256fd0
void bgRoomGetLevel_0x256fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgRoomGetLevel_0x256fa0");
#endif

    ctx->pc = 0x256fa0u;

    // 0x256fa0: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x256fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x256fa4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x256fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x256fa8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x256fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x256fac: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x256facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x256fb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x256fb4: 0x24a57330  addiu       $a1, $a1, 0x7330
    ctx->pc = 0x256fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
    // 0x256fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256fbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256fc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256fc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x256fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x256fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x256FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FC8u;
        // 0x256fcc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256FD0u;
}
