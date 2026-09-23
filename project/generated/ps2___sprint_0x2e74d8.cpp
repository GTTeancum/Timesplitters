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

// Function: __sprint
// Address: 0x2e74d8 - 0x2e751c
void ps2___sprint_0x2e74d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sprint_0x2e74d8");
#endif

    switch (ctx->pc) {
        case 0x2e7504u: goto label_2e7504;
        default: break;
    }

    ctx->pc = 0x2e74d8u;

    // 0x2e74d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e74d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e74dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e74dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e74e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e74e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e74e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e74e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e74ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E74ECu;
    {
        const bool branch_taken_0x2e74ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74ECu;
        // 0x2e74f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74ec) {
            ctx->pc = 0x2E74FCu;
            goto label_2e74fc;
        }
    }
    ctx->pc = 0x2E74F4u;
    // 0x2e74f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E74F4u;
    {
        const bool branch_taken_0x2e74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74F4u;
        // 0x2e74f8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74f4) {
            ctx->pc = 0x2E750Cu;
            goto label_2e750c;
        }
    }
    ctx->pc = 0x2E74FCu;
label_2e74fc:
    // 0x2e74fc: 0xc0badc2  jal         func_2EB708
    ctx->pc = 0x2E74FCu;
    SET_GPR_U32(ctx, 31, 0x2E7504u);
    ctx->pc = 0x2E7500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74FCu;
    // 0x2e7500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB708u, 0x2E74FCu, 0x2E7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7504u;
label_2e7504:
    // 0x2e7504: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e7508: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e7508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2e750c:
    // 0x2e750c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e750cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e7510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7514: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7514u;
        // 0x2e7518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E751Cu;
}
