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

// Function: cheatsArcade
// Address: 0x2255b0 - 0x22560c
void cheatsArcade_0x2255b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatsArcade_0x2255b0");
#endif

    switch (ctx->pc) {
        case 0x2255d0u: goto label_2255d0;
        default: break;
    }

    ctx->pc = 0x2255b0u;

    // 0x2255b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2255b4: 0x8f869f4c  lw          $a2, -0x60B4($gp)
    ctx->pc = 0x2255b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2255b8: 0x24423868  addiu       $v0, $v0, 0x3868
    ctx->pc = 0x2255b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14440));
    // 0x2255bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2255bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255c0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2255c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2255c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2255c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2255cc: 0x0  nop
    ctx->pc = 0x2255ccu;
    // NOP
label_2255d0:
    // 0x2255d0: 0x661007  srav        $v0, $a2, $v1
    ctx->pc = 0x2255d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x2255d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2255d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2255d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2255D8u;
    {
        const bool branch_taken_0x2255d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2255d8) {
            ctx->pc = 0x2255DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2255D8u;
            // 0x2255dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2255F8u;
            goto label_2255f8;
        }
    }
    ctx->pc = 0x2255E0u;
    // 0x2255e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2255e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2255e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2255e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2255e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2255E8u;
    {
        const bool branch_taken_0x2255e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255E8u;
        // 0x2255ec: 0x671004  sllv        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255e8) {
            ctx->pc = 0x2255F4u;
            goto label_2255f4;
        }
    }
    ctx->pc = 0x2255F0u;
    // 0x2255f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2255f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2255f4:
    // 0x2255f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2255f8:
    // 0x2255f8: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x2255f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2255fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2255FCu;
    {
        const bool branch_taken_0x2255fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255FCu;
        // 0x225600: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255fc) {
            ctx->pc = 0x2255D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2255d0;
        }
    }
    ctx->pc = 0x225604u;
    // 0x225604: 0x3e00008  jr          $ra
    ctx->pc = 0x225604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225604u;
        // 0x225608: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22560Cu;
}
