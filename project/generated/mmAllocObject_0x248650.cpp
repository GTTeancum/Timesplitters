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

// Function: mmAllocObject
// Address: 0x248650 - 0x24869c
void mmAllocObject_0x248650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmAllocObject_0x248650");
#endif

    switch (ctx->pc) {
        case 0x24867cu: goto label_24867c;
        default: break;
    }

    ctx->pc = 0x248650u;

    // 0x248650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248658: 0x8f90b824  lw          $s0, -0x47DC($gp)
    ctx->pc = 0x248658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948900)));
    // 0x24865c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24865Cu;
    {
        const bool branch_taken_0x24865c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x248660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24865Cu;
        // 0x248660: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24865c) {
            ctx->pc = 0x248688u;
            goto label_248688;
        }
    }
    ctx->pc = 0x248664u;
    // 0x248664: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x248664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x248668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24866c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24866cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248670: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x248670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x248674: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x248674u;
    SET_GPR_U32(ctx, 31, 0x24867Cu);
    ctx->pc = 0x248678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248674u;
    // 0x248678: 0xaf82b824  sw          $v0, -0x47DC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948900), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x248674u, 0x24867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24867Cu;
label_24867c:
    // 0x24867c: 0x8f83a138  lw          $v1, -0x5EC8($gp)
    ctx->pc = 0x24867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943032)));
    // 0x248680: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x248684: 0xaf83a138  sw          $v1, -0x5EC8($gp)
    ctx->pc = 0x248684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943032), GPR_U32(ctx, 3));
label_248688:
    // 0x248688: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x248688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24868c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248694: 0x3e00008  jr          $ra
    ctx->pc = 0x248694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248694u;
        // 0x248698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24869Cu;
}
