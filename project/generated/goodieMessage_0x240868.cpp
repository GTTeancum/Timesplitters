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

// Function: goodieMessage
// Address: 0x240868 - 0x2408ac
void goodieMessage_0x240868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodieMessage_0x240868");
#endif

    switch (ctx->pc) {
        case 0x240890u: goto label_240890;
        default: break;
    }

    ctx->pc = 0x240868u;

    // 0x240868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24086c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240874: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240874u;
    {
        const bool branch_taken_0x240874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x240878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240874u;
        // 0x240878: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240874) {
            ctx->pc = 0x240884u;
            goto label_240884;
        }
    }
    ctx->pc = 0x24087Cu;
    // 0x24087c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24087Cu;
    {
        const bool branch_taken_0x24087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24087Cu;
        // 0x240880: 0xaf80b7c0  sw          $zero, -0x4840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24087c) {
            ctx->pc = 0x24089Cu;
            goto label_24089c;
        }
    }
    ctx->pc = 0x240884u;
label_240884:
    // 0x240884: 0x24040091  addiu       $a0, $zero, 0x91
    ctx->pc = 0x240884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x240888: 0xc081546  jal         func_205518
    ctx->pc = 0x240888u;
    SET_GPR_U32(ctx, 31, 0x240890u);
    ctx->pc = 0x24088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240888u;
    // 0x24088c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x240888u, 0x240890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240890u;
label_240890:
    // 0x240890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240894: 0xaf90b7c4  sw          $s0, -0x483C($gp)
    ctx->pc = 0x240894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948804), GPR_U32(ctx, 16));
    // 0x240898: 0xaf83b7c0  sw          $v1, -0x4840($gp)
    ctx->pc = 0x240898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948800), GPR_U32(ctx, 3));
label_24089c:
    // 0x24089c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24089cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2408a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2408a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2408a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2408A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2408A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408A4u;
        // 0x2408a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2408A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2408ACu;
}
