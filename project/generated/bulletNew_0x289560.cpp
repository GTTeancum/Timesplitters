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

// Function: bulletNew
// Address: 0x289560 - 0x2895c8
void bulletNew_0x289560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletNew_0x289560");
#endif

    switch (ctx->pc) {
        case 0x289578u: goto label_289578;
        case 0x289598u: goto label_289598;
        case 0x2895a4u: goto label_2895a4;
        default: break;
    }

    ctx->pc = 0x289560u;

    // 0x289560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x289564: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x289564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x289568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28956c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x289570: 0xc0a2524  jal         func_289490
    ctx->pc = 0x289570u;
    SET_GPR_U32(ctx, 31, 0x289578u);
    ctx->pc = 0x289490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289490u, 0x289570u, 0x289578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289578u;
label_289578:
    // 0x289578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28957c: 0x2783b958  addiu       $v1, $gp, -0x46A8
    ctx->pc = 0x28957cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949208));
    // 0x289580: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x289580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x289584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28958c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28958cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289590: 0xc0a24b4  jal         func_2892D0
    ctx->pc = 0x289590u;
    SET_GPR_U32(ctx, 31, 0x289598u);
    ctx->pc = 0x289594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289590u;
    // 0x289594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2892D0u, 0x289590u, 0x289598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289598u;
label_289598:
    // 0x289598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28959c: 0xc0a2534  jal         func_2894D0
    ctx->pc = 0x28959Cu;
    SET_GPR_U32(ctx, 31, 0x2895A4u);
    ctx->pc = 0x2895A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28959Cu;
    // 0x2895a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2894D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2894D0u, 0x28959Cu, 0x2895A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895A4u;
label_2895a4:
    // 0x2895a4: 0x24030114  addiu       $v1, $zero, 0x114
    ctx->pc = 0x2895a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x2895a8: 0x8f82b948  lw          $v0, -0x46B8($gp)
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x2895ac: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x2895acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2895b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2895b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2895b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2895b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2895b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2895b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2895bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2895bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2895c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2895C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2895C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895C0u;
        // 0x2895c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2895C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2895C8u;
}
