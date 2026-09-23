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

// Function: timeMake
// Address: 0x2b6630 - 0x2b6650
void timeMake_0x2b6630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timeMake_0x2b6630");
#endif

    ctx->pc = 0x2b6630u;

    // 0x2b6630: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2b6634: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x2b6634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2b6638: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x2b6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x2b663c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b663cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b6640: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b6640u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 4));
    // 0x2b6644: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2b6644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2b6648: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6648u;
        // 0x2b664c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6650u;
}
