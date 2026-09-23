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

// Function: obSetTexList
// Address: 0x260220 - 0x260258
void obSetTexList_0x260220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obSetTexList_0x260220");
#endif

    switch (ctx->pc) {
        case 0x260240u: goto label_260240;
        default: break;
    }

    ctx->pc = 0x260220u;

    // 0x260220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x260224: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26022c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26022cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x260234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x260238: 0xc09804a  jal         func_260128
    ctx->pc = 0x260238u;
    SET_GPR_U32(ctx, 31, 0x260240u);
    ctx->pc = 0x26023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260238u;
    // 0x26023c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260128u, 0x260238u, 0x260240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260240u;
label_260240:
    // 0x260240: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x260240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x260244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260248: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26024c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26024cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260250: 0x3e00008  jr          $ra
    ctx->pc = 0x260250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260250u;
        // 0x260254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260258u;
}
