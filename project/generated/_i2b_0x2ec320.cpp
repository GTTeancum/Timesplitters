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

// Function: _i2b
// Address: 0x2ec320 - 0x2ec358
void _i2b_0x2ec320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_i2b_0x2ec320");
#endif

    switch (ctx->pc) {
        case 0x2ec338u: goto label_2ec338;
        default: break;
    }

    ctx->pc = 0x2ec320u;

    // 0x2ec320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec328: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ec328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec32c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec330: 0xc0bafa8  jal         func_2EBEA0
    ctx->pc = 0x2EC330u;
    SET_GPR_U32(ctx, 31, 0x2EC338u);
    ctx->pc = 0x2EC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC330u;
    // 0x2ec334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBEA0u, 0x2EC330u, 0x2EC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC338u;
label_2ec338:
    // 0x2ec338: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ec338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec33c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ec33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec340: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x2ec340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x2ec344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec34c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x2ec34cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x2ec350: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC350u;
        // 0x2ec354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC358u;
}
