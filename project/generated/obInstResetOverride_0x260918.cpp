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

// Function: obInstResetOverride
// Address: 0x260918 - 0x260940
void obInstResetOverride_0x260918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstResetOverride_0x260918");
#endif

    ctx->pc = 0x260918u;

    // 0x260918: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x260918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26091c: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x26091cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x260920: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x260920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    // 0x260924: 0xac820128  sw          $v0, 0x128($a0)
    ctx->pc = 0x260924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 2));
    // 0x260928: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x260928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x26092c: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x26092cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x260930: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x260930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x260934: 0xac80013c  sw          $zero, 0x13C($a0)
    ctx->pc = 0x260934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
    // 0x260938: 0x3e00008  jr          $ra
    ctx->pc = 0x260938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260938u;
        // 0x26093c: 0xac800140  sw          $zero, 0x140($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260940u;
}
