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

// Function: starfieldPreload
// Address: 0x2a8628 - 0x2a8670
void starfieldPreload_0x2a8628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("starfieldPreload_0x2a8628");
#endif

    switch (ctx->pc) {
        case 0x2a864cu: goto label_2a864c;
        default: break;
    }

    ctx->pc = 0x2a8628u;

    // 0x2a8628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a862c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2a862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2a8630: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2a8630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a8634: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A8634u;
    {
        const bool branch_taken_0x2a8634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8634u;
        // 0x2a8638: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8634) {
            ctx->pc = 0x2A8664u;
            goto label_2a8664;
        }
    }
    ctx->pc = 0x2A863Cu;
    // 0x2a863c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a863cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a8640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8644: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2A8644u;
    SET_GPR_U32(ctx, 31, 0x2A864Cu);
    ctx->pc = 0x2A8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8644u;
    // 0x2a8648: 0x24849608  addiu       $a0, $a0, -0x69F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2A8644u, 0x2A864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A864Cu;
label_2a864c:
    // 0x2a864c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a864cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a8650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8658: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x2a8658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
    // 0x2a865c: 0x80870fa  j           func_21C3E8
    ctx->pc = 0x2A865Cu;
    ctx->pc = 0x2A8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A865Cu;
    // 0x2a8660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    preloadAddTexName_0x21c3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8664u;
label_2a8664:
    // 0x2a8664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8668: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8668u;
        // 0x2a866c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8670u;
}
