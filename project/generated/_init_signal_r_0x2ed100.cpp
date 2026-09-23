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

// Function: _init_signal_r
// Address: 0x2ed100 - 0x2ed170
void _init_signal_r_0x2ed100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_init_signal_r_0x2ed100");
#endif

    switch (ctx->pc) {
        case 0x2ed124u: goto label_2ed124;
        case 0x2ed140u: goto label_2ed140;
        default: break;
    }

    ctx->pc = 0x2ed100u;

    // 0x2ed100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed110: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x2ed110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x2ed114: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED114u;
    {
        const bool branch_taken_0x2ed114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED114u;
        // 0x2ed118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed114) {
            ctx->pc = 0x2ED160u;
            goto label_2ed160;
        }
    }
    ctx->pc = 0x2ED11Cu;
    // 0x2ed11c: 0xc0b9338  jal         func_2E4CE0
    ctx->pc = 0x2ED11Cu;
    SET_GPR_U32(ctx, 31, 0x2ED124u);
    ctx->pc = 0x2ED120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED11Cu;
    // 0x2ed120: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4CE0u, 0x2ED11Cu, 0x2ED124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED124u;
label_2ed124:
    // 0x2ed124: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED124u;
    {
        const bool branch_taken_0x2ed124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED124u;
        // 0x2ed128: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed124) {
            ctx->pc = 0x2ED134u;
            goto label_2ed134;
        }
    }
    ctx->pc = 0x2ED12Cu;
    // 0x2ed12c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ED12Cu;
    {
        const bool branch_taken_0x2ed12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED12Cu;
        // 0x2ed130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed12c) {
            ctx->pc = 0x2ED160u;
            goto label_2ed160;
        }
    }
    ctx->pc = 0x2ED134u;
label_2ed134:
    // 0x2ed134: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x2ed134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x2ed138: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2ed138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2ed13c: 0x0  nop
    ctx->pc = 0x2ed13cu;
    // NOP
label_2ed140:
    // 0x2ed140: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ed140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ed144: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ed144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ed148: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2ed14c: 0x0  nop
    ctx->pc = 0x2ed14cu;
    // NOP
    // 0x2ed150: 0x0  nop
    ctx->pc = 0x2ed150u;
    // NOP
    // 0x2ed154: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED154u;
    {
        const bool branch_taken_0x2ed154 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ed154) {
            ctx->pc = 0x2ED140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed140;
        }
    }
    ctx->pc = 0x2ED15Cu;
    // 0x2ed15c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed160:
    // 0x2ed160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed168: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED168u;
        // 0x2ed16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED170u;
}
