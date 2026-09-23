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

// Function: lookahead_onchange
// Address: 0x20f4f8 - 0x20f524
void lookahead_onchange_0x20f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lookahead_onchange_0x20f4f8");
#endif

    ctx->pc = 0x20f4f8u;

    // 0x20f4f8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20f4fc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f500: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f504: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x20f504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f508: 0x3062fff7  andi        $v0, $v1, 0xFFF7
    ctx->pc = 0x20f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x20f50c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F50Cu;
    {
        const bool branch_taken_0x20f50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F50Cu;
        // 0x20f510: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f50c) {
            ctx->pc = 0x20F51Cu;
            goto label_20f51c;
        }
    }
    ctx->pc = 0x20F514u;
    // 0x20f514: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x20f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x20f518: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x20f518u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_20f51c:
    // 0x20f51c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F524u;
}
