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

// Function: crcCheck
// Address: 0x2b3d50 - 0x2b3d7c
void crcCheck_0x2b3d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("crcCheck_0x2b3d50");
#endif

    switch (ctx->pc) {
        case 0x2b3d64u: goto label_2b3d64;
        default: break;
    }

    ctx->pc = 0x2b3d50u;

    // 0x2b3d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3d5c: 0xc0acf40  jal         func_2B3D00
    ctx->pc = 0x2B3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B3D64u);
    ctx->pc = 0x2B3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D5Cu;
    // 0x2b3d60: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D00u, 0x2B3D5Cu, 0x2B3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D64u;
label_2b3d64:
    // 0x2b3d64: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2b3d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2b3d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3d70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b3d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D74u;
        // 0x2b3d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D7Cu;
}
