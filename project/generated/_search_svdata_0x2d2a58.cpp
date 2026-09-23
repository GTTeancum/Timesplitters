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

// Function: _search_svdata
// Address: 0x2d2a58 - 0x2d2aa4
void _search_svdata_0x2d2a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_search_svdata_0x2d2a58");
#endif

    switch (ctx->pc) {
        case 0x2d2a68u: goto label_2d2a68;
        case 0x2d2a78u: goto label_2d2a78;
        default: break;
    }

    ctx->pc = 0x2d2a58u;

    // 0x2d2a58: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x2d2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2d2a5c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2A5Cu;
    {
        const bool branch_taken_0x2d2a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a5c) {
            ctx->pc = 0x2D2A9Cu;
            goto label_2d2a9c;
        }
    }
    ctx->pc = 0x2D2A64u;
    // 0x2d2a64: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d2a68:
    // 0x2d2a68: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2A68u;
    {
        const bool branch_taken_0x2d2a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a68) {
            ctx->pc = 0x2D2A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A68u;
            // 0x2d2a6c: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A94u;
            goto label_2d2a94;
        }
    }
    ctx->pc = 0x2D2A70u;
    // 0x2d2a70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2a74: 0x0  nop
    ctx->pc = 0x2d2a74u;
    // NOP
label_2d2a78:
    // 0x2d2a78: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2A78u;
    {
        const bool branch_taken_0x2d2a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d2a78) {
            ctx->pc = 0x2D2A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A78u;
            // 0x2d2a7c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A88u;
            goto label_2d2a88;
        }
    }
    ctx->pc = 0x2D2A80u;
    // 0x2d2a80: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A80u;
        // 0x2d2a84: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2A88u;
label_2d2a88:
    // 0x2d2a88: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D2A88u;
    {
        const bool branch_taken_0x2d2a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a88) {
            ctx->pc = 0x2D2A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A88u;
            // 0x2d2a8c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2a78;
        }
    }
    ctx->pc = 0x2D2A90u;
    // 0x2d2a90: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x2d2a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2d2a94:
    // 0x2d2a94: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D2A94u;
    {
        const bool branch_taken_0x2d2a94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a94) {
            ctx->pc = 0x2D2A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A94u;
            // 0x2d2a98: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2a68;
        }
    }
    ctx->pc = 0x2D2A9Cu;
label_2d2a9c:
    // 0x2d2a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A9Cu;
        // 0x2d2aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2AA4u;
}
