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

// Function: preloadGetTexNum
// Address: 0x21c6c8 - 0x21c724
void preloadGetTexNum_0x21c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadGetTexNum_0x21c6c8");
#endif

    switch (ctx->pc) {
        case 0x21c6e0u: goto label_21c6e0;
        default: break;
    }

    ctx->pc = 0x21c6c8u;

    // 0x21c6c8: 0x8f879d70  lw          $a3, -0x6290($gp)
    ctx->pc = 0x21c6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c6cc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x21c6ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6d0: 0x18e00012  blez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x21C6D0u;
    {
        const bool branch_taken_0x21c6d0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x21C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6D0u;
        // 0x21c6d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6d0) {
            ctx->pc = 0x21C71Cu;
            goto label_21c71c;
        }
    }
    ctx->pc = 0x21C6D8u;
    // 0x21c6d8: 0x3c0801fb  lui         $t0, 0x1FB
    ctx->pc = 0x21c6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)507 << 16));
    // 0x21c6dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21c6e0:
    // 0x21c6e0: 0x25044c60  addiu       $a0, $t0, 0x4C60
    ctx->pc = 0x21c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 19552));
    // 0x21c6e4: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x21c6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21c6e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c6f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c6f4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C6F4u;
    {
        const bool branch_taken_0x21c6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x21C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6F4u;
        // 0x21c6f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6f4) {
            ctx->pc = 0x21C710u;
            goto label_21c710;
        }
    }
    ctx->pc = 0x21C6FCu;
    // 0x21c6fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21c700: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C700u;
    {
        const bool branch_taken_0x21c700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x21C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C700u;
        // 0x21c704: 0xc7102a  slt         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c700) {
            ctx->pc = 0x21C714u;
            goto label_21c714;
        }
    }
    ctx->pc = 0x21C708u;
    // 0x21c708: 0x3e00008  jr          $ra
    ctx->pc = 0x21C708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C708u;
        // 0x21c70c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C710u;
label_21c710:
    // 0x21c710: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x21c710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21c714:
    // 0x21c714: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x21C714u;
    {
        const bool branch_taken_0x21c714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C714u;
        // 0x21c718: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c714) {
            ctx->pc = 0x21C6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c6e0;
        }
    }
    ctx->pc = 0x21C71Cu;
label_21c71c:
    // 0x21c71c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C71Cu;
        // 0x21c720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C724u;
}
