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

// Function: statsDebug
// Address: 0x220010 - 0x22007c
void statsDebug_0x220010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statsDebug_0x220010");
#endif

    switch (ctx->pc) {
        case 0x220018u: goto label_220018;
        case 0x220048u: goto label_220048;
        default: break;
    }

    ctx->pc = 0x220010u;

    // 0x220010: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x220010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x220014: 0x0  nop
    ctx->pc = 0x220014u;
    // NOP
label_220018:
    // 0x220018: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22001c: 0x0  nop
    ctx->pc = 0x22001cu;
    // NOP
    // 0x220020: 0x0  nop
    ctx->pc = 0x220020u;
    // NOP
    // 0x220024: 0x0  nop
    ctx->pc = 0x220024u;
    // NOP
    // 0x220028: 0x0  nop
    ctx->pc = 0x220028u;
    // NOP
    // 0x22002c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22002Cu;
    {
        const bool branch_taken_0x22002c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x22002c) {
            ctx->pc = 0x220018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220018;
        }
    }
    ctx->pc = 0x220034u;
    // 0x220034: 0x24050e10  addiu       $a1, $zero, 0xE10
    ctx->pc = 0x220034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x220038: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x220038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22003c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x22003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x220040: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x220040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x220044: 0x0  nop
    ctx->pc = 0x220044u;
    // NOP
label_220048:
    // 0x220048: 0x50a30001  beql        $a1, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x220048u;
    {
        const bool branch_taken_0x220048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220048) {
            ctx->pc = 0x22004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220048u;
            // 0x22004c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220050u;
            goto label_220050;
        }
    }
    ctx->pc = 0x220050u;
label_220050:
    // 0x220050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x220050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220054: 0x50a30001  beql        $a1, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x220054u;
    {
        const bool branch_taken_0x220054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220054) {
            ctx->pc = 0x220058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220054u;
            // 0x220058: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22005Cu;
            goto label_22005c;
        }
    }
    ctx->pc = 0x22005Cu;
label_22005c:
    // 0x22005c: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x22005Cu;
    {
        const bool branch_taken_0x22005c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22005c) {
            ctx->pc = 0x220060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22005Cu;
            // 0x220060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220064u;
            goto label_220064;
        }
    }
    ctx->pc = 0x220064u;
label_220064:
    // 0x220064: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x220064u;
    {
        const bool branch_taken_0x220064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220064) {
            ctx->pc = 0x220068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220064u;
            // 0x220068: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22006Cu;
            goto label_22006c;
        }
    }
    ctx->pc = 0x22006Cu;
label_22006c:
    // 0x22006c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22006Cu;
    {
        const bool branch_taken_0x22006c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x22006c) {
            ctx->pc = 0x220048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220048;
        }
    }
    ctx->pc = 0x220074u;
    // 0x220074: 0x3e00008  jr          $ra
    ctx->pc = 0x220074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22007Cu;
}
