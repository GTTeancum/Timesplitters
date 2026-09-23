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

// Function: fileGetSector
// Address: 0x21a2f8 - 0x21a334
void fileGetSector_0x21a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileGetSector_0x21a2f8");
#endif

    switch (ctx->pc) {
        case 0x21a308u: goto label_21a308;
        default: break;
    }

    ctx->pc = 0x21a2f8u;

    // 0x21a2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a300: 0xc086854  jal         func_21A150
    ctx->pc = 0x21A300u;
    SET_GPR_U32(ctx, 31, 0x21A308u);
    ctx->pc = 0x21A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A150u, 0x21A300u, 0x21A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A308u;
label_21a308:
    // 0x21a308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A308u;
    {
        const bool branch_taken_0x21a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A308u;
        // 0x21a30c: 0x8f83b6c0  lw          $v1, -0x4940($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a308) {
            ctx->pc = 0x21A324u;
            goto label_21a324;
        }
    }
    ctx->pc = 0x21A310u;
    // 0x21a310: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x21a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21a314: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21a318: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x21a318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x21a31c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A31Cu;
    {
        const bool branch_taken_0x21a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A31Cu;
        // 0x21a320: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a31c) {
            ctx->pc = 0x21A328u;
            goto label_21a328;
        }
    }
    ctx->pc = 0x21A324u;
label_21a324:
    // 0x21a324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a328:
    // 0x21a328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a32c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A32Cu;
        // 0x21a330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A334u;
}
