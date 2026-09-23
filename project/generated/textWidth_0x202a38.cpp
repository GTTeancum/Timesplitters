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

// Function: textWidth
// Address: 0x202a38 - 0x202a60
void textWidth_0x202a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textWidth_0x202a38");
#endif

    switch (ctx->pc) {
        case 0x202a50u: goto label_202a50;
        default: break;
    }

    ctx->pc = 0x202a38u;

    // 0x202a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202a3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x202a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x202a44: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x202a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x202a48: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x202A48u;
    SET_GPR_U32(ctx, 31, 0x202A50u);
    ctx->pc = 0x202A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A48u;
    // 0x202a4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x202A48u, 0x202A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A50u;
label_202a50:
    // 0x202a50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202a58: 0x3e00008  jr          $ra
    ctx->pc = 0x202A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A58u;
        // 0x202a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202A60u;
}
