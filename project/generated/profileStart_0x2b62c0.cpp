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

// Function: profileStart
// Address: 0x2b62c0 - 0x2b6300
void profileStart_0x2b62c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileStart_0x2b62c0");
#endif

    ctx->pc = 0x2b62c0u;

    // 0x2b62c0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b62c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b62c8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b62c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b62cc: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x2b62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x2b62d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b62d4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b62d8: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x2b62d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b62dc: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2b62e0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2b62e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b62e4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2b62e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b62e8: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2b62e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2b62ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b62ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b62f0: 0xad260018  sw          $a2, 0x18($t1)
    ctx->pc = 0x2b62f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 6));
    // 0x2b62f4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2b62f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2b62f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62F8u;
        // 0x2b62fc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6300u;
}
