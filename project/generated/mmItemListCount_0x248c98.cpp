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

// Function: mmItemListCount
// Address: 0x248c98 - 0x248cd0
void mmItemListCount_0x248c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmItemListCount_0x248c98");
#endif

    switch (ctx->pc) {
        case 0x248ca0u: goto label_248ca0;
        default: break;
    }

    ctx->pc = 0x248c98u;

    // 0x248c98: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x248C98u;
    {
        const bool branch_taken_0x248c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C98u;
        // 0x248c9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c98) {
            ctx->pc = 0x248CC8u;
            goto label_248cc8;
        }
    }
    ctx->pc = 0x248CA0u;
label_248ca0:
    // 0x248ca0: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248CA0u;
    {
        const bool branch_taken_0x248ca0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x248ca0) {
            ctx->pc = 0x248CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248CA0u;
            // 0x248ca4: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248CB0u;
            goto label_248cb0;
        }
    }
    ctx->pc = 0x248CA8u;
    // 0x248ca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x248CA8u;
    {
        const bool branch_taken_0x248ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CA8u;
        // 0x248cac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ca8) {
            ctx->pc = 0x248CBCu;
            goto label_248cbc;
        }
    }
    ctx->pc = 0x248CB0u;
label_248cb0:
    // 0x248cb0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x248cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x248cb4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x248cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x248cb8: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x248cb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_248cbc:
    // 0x248cbc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x248cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x248cc0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x248CC0u;
    {
        const bool branch_taken_0x248cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x248cc0) {
            ctx->pc = 0x248CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ca0;
        }
    }
    ctx->pc = 0x248CC8u;
label_248cc8:
    // 0x248cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x248CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CC8u;
        // 0x248ccc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248CD0u;
}
