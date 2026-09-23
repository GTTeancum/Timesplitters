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

// Function: mmCalcFileSize
// Address: 0x247c38 - 0x247c78
void mmCalcFileSize_0x247c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCalcFileSize_0x247c38");
#endif

    switch (ctx->pc) {
        case 0x247c4cu: goto label_247c4c;
        case 0x247c60u: goto label_247c60;
        default: break;
    }

    ctx->pc = 0x247c38u;

    // 0x247c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247c44: 0xc0922f6  jal         func_248BD8
    ctx->pc = 0x247C44u;
    SET_GPR_U32(ctx, 31, 0x247C4Cu);
    ctx->pc = 0x247C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C44u;
    // 0x247c48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248BD8u, 0x247C44u, 0x247C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C4Cu;
label_247c4c:
    // 0x247c4c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x247c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x247c50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x247c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247c54: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x247c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x247c58: 0xc092334  jal         func_248CD0
    ctx->pc = 0x247C58u;
    SET_GPR_U32(ctx, 31, 0x247C60u);
    ctx->pc = 0x247C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C58u;
    // 0x247c5c: 0x261000cc  addiu       $s0, $s0, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x247C58u, 0x247C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C60u;
label_247c60:
    // 0x247c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x247c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x247c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247c70: 0x3e00008  jr          $ra
    ctx->pc = 0x247C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C70u;
        // 0x247c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247C78u;
}
