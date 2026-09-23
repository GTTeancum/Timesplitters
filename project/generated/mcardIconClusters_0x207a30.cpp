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

// Function: mcardIconClusters
// Address: 0x207a30 - 0x207a5c
void mcardIconClusters_0x207a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcardIconClusters_0x207a30");
#endif

    ctx->pc = 0x207a30u;

    // 0x207a30: 0x2782b670  addiu       $v0, $gp, -0x4990
    ctx->pc = 0x207a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948464));
    // 0x207a34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x207a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x207a38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207a3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x207a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x207a40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x207a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207a44: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x207a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
    // 0x207a48: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x207a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x207a4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x207a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x207a50: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x207a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x207a54: 0x3e00008  jr          $ra
    ctx->pc = 0x207A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A54u;
        // 0x207a58: 0x21283  sra         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A5Cu;
}
