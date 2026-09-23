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

// Function: remoteGetPivoteOffset
// Address: 0x2694c0 - 0x269508
void remoteGetPivoteOffset_0x2694c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("remoteGetPivoteOffset_0x2694c0");
#endif

    switch (ctx->pc) {
        case 0x2694e4u: goto label_2694e4;
        default: break;
    }

    ctx->pc = 0x2694c0u;

    // 0x2694c0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2694c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2694c4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2694c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2694c8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2694c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2694cc: 0x240801a9  addiu       $t0, $zero, 0x1A9
    ctx->pc = 0x2694ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
    // 0x2694d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2694d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2694d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2694d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2694d8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2694d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2694dc: 0x14c80003  bne         $a2, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2694DCu;
    {
        const bool branch_taken_0x2694dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x2694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694DCu;
        // 0x2694e0: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694dc) {
            ctx->pc = 0x2694ECu;
            goto label_2694ec;
        }
    }
    ctx->pc = 0x2694E4u;
label_2694e4:
    // 0x2694e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2694E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2694E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694E4u;
        // 0x2694e8: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2694E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2694ECu;
label_2694ec:
    // 0x2694ec: 0x80830007  lb          $v1, 0x7($a0)
    ctx->pc = 0x2694ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2694f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2694f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2694f4: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2694F4u;
    {
        const bool branch_taken_0x2694f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2694f4) {
            ctx->pc = 0x2694E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2694e4;
        }
    }
    ctx->pc = 0x2694FCu;
    // 0x2694fc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2694fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x269500: 0x3e00008  jr          $ra
    ctx->pc = 0x269500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269500u;
        // 0x269504: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269508u;
}
