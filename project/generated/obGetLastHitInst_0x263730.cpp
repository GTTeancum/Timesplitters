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

// Function: obGetLastHitInst
// Address: 0x263730 - 0x263768
void obGetLastHitInst_0x263730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obGetLastHitInst_0x263730");
#endif

    ctx->pc = 0x263730u;

    // 0x263730: 0x8f83a2a8  lw          $v1, -0x5D58($gp)
    ctx->pc = 0x263730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943400)));
    // 0x263734: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x263734u;
    {
        const bool branch_taken_0x263734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263734) {
            ctx->pc = 0x263760u;
            goto label_263760;
        }
    }
    ctx->pc = 0x26373Cu;
    // 0x26373c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26373Cu;
    {
        const bool branch_taken_0x26373c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x263740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26373Cu;
        // 0x263740: 0x8f82a2b0  lw          $v0, -0x5D50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26373c) {
            ctx->pc = 0x263748u;
            goto label_263748;
        }
    }
    ctx->pc = 0x263744u;
    // 0x263744: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x263744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_263748:
    // 0x263748: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x263748u;
    {
        const bool branch_taken_0x263748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263748u;
        // 0x26374c: 0x8f82a2b8  lw          $v0, -0x5D48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263748) {
            ctx->pc = 0x263754u;
            goto label_263754;
        }
    }
    ctx->pc = 0x263750u;
    // 0x263750: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x263750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_263754:
    // 0x263754: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x263754u;
    {
        const bool branch_taken_0x263754 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x263758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263754u;
        // 0x263758: 0x8f82a2c0  lw          $v0, -0x5D40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263754) {
            ctx->pc = 0x263760u;
            goto label_263760;
        }
    }
    ctx->pc = 0x26375Cu;
    // 0x26375c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x26375cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_263760:
    // 0x263760: 0x3e00008  jr          $ra
    ctx->pc = 0x263760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263760u;
        // 0x263764: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263768u;
}
