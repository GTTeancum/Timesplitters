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

// Function: counthallpads
// Address: 0x264be8 - 0x264c34
void counthallpads_0x264be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("counthallpads_0x264be8");
#endif

    switch (ctx->pc) {
        case 0x264c00u: goto label_264c00;
        default: break;
    }

    ctx->pc = 0x264be8u;

    // 0x264be8: 0x8f88a348  lw          $t0, -0x5CB8($gp)
    ctx->pc = 0x264be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x264bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bf0: 0x1900000e  blez        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x264BF0u;
    {
        const bool branch_taken_0x264bf0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x264BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BF0u;
        // 0x264bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bf0) {
            ctx->pc = 0x264C2Cu;
            goto label_264c2c;
        }
    }
    ctx->pc = 0x264BF8u;
    // 0x264bf8: 0x8f87a2ec  lw          $a3, -0x5D14($gp)
    ctx->pc = 0x264bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264bfc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x264bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_264c00:
    // 0x264c00: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x264c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264c04: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x264c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x264c08: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x264c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264c0c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264C0Cu;
    {
        const bool branch_taken_0x264c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x264C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C0Cu;
        // 0x264c10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c0c) {
            ctx->pc = 0x264C20u;
            goto label_264c20;
        }
    }
    ctx->pc = 0x264C14u;
    // 0x264c14: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264c18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264c1c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x264c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_264c20:
    // 0x264c20: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x264c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x264c24: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x264C24u;
    {
        const bool branch_taken_0x264c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C24u;
        // 0x264c28: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c24) {
            ctx->pc = 0x264C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264c00;
        }
    }
    ctx->pc = 0x264C2Cu;
label_264c2c:
    // 0x264c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x264C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C2Cu;
        // 0x264c30: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C34u;
}
