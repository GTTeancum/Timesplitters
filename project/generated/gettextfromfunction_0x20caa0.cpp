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

// Function: gettextfromfunction
// Address: 0x20caa0 - 0x20cac0
void gettextfromfunction_0x20caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gettextfromfunction_0x20caa0");
#endif

    switch (ctx->pc) {
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        default: break;
    }

    ctx->pc = 0x20caa0u;

label_20caa0:
    // 0x20caa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20caa4:
    // 0x20caa4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20caa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20caa8:
    // 0x20caa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20caac:
    // 0x20caac: 0x40f809  jalr        $v0
label_20cab0:
    if (ctx->pc == 0x20CAB0u) {
        ctx->pc = 0x20CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAACu;
        // 0x20cab0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAB4u;
        goto label_20cab4;
    }
    ctx->pc = 0x20CAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CAB4u);
        ctx->pc = 0x20CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAACu;
        // 0x20cab0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CAACu, 0x20CAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CAB4u;
label_20cab4:
    // 0x20cab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cab8:
    // 0x20cab8: 0x3e00008  jr          $ra
label_20cabc:
    if (ctx->pc == 0x20CABCu) {
        ctx->pc = 0x20CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAB8u;
        // 0x20cabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAC0u;
        goto label_fallthrough_0x20cab8;
    }
    ctx->pc = 0x20CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAB8u;
        // 0x20cabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cab8:
    ctx->pc = 0x20CAC0u;
}
