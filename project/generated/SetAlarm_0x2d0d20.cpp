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

// Function: SetAlarm
// Address: 0x2d0d20 - 0x2d0d8c
void SetAlarm_0x2d0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAlarm_0x2d0d20");
#endif

    switch (ctx->pc) {
        case 0x2d0d48u: goto label_2d0d48;
        case 0x2d0d6cu: goto label_2d0d6c;
        default: break;
    }

    ctx->pc = 0x2d0d20u;

    // 0x2d0d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0d24: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d0d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d0d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0d30: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0d34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0d38: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0d3c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0D3Cu;
    {
        const bool branch_taken_0x2d0d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D3Cu;
        // 0x2d0d40: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d3c) {
            ctx->pc = 0x2D0D64u;
            goto label_2d0d64;
        }
    }
    ctx->pc = 0x2D0D44u;
    // 0x2d0d44: 0x0  nop
    ctx->pc = 0x2d0d44u;
    // NOP
label_2d0d48:
    // 0x2d0d48: 0x42000039  di
    ctx->pc = 0x2d0d48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0d4c: 0x40f  sync.p
    ctx->pc = 0x2d0d4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0d50: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0d54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0d58: 0x0  nop
    ctx->pc = 0x2d0d58u;
    // NOP
    // 0x2d0d5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0D5Cu;
    {
        const bool branch_taken_0x2d0d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d5c) {
            ctx->pc = 0x2D0D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0d48;
        }
    }
    ctx->pc = 0x2D0D64u;
label_2d0d64:
    // 0x2d0d64: 0xc0b3fa8  jal         func_2CFEA0
    ctx->pc = 0x2D0D64u;
    SET_GPR_U32(ctx, 31, 0x2D0D6Cu);
    ctx->pc = 0x2CFEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFEA0u, 0x2D0D64u, 0x2D0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D6Cu;
label_2d0d6c:
    // 0x2d0d6c: 0xf  sync
    ctx->pc = 0x2d0d6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0d70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D70u;
    {
        const bool branch_taken_0x2d0d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D70u;
        // 0x2d0d74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d70) {
            ctx->pc = 0x2D0D80u;
            goto label_2d0d80;
        }
    }
    ctx->pc = 0x2D0D78u;
    // 0x2d0d78: 0x42000038  ei
    ctx->pc = 0x2d0d78u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d80:
    // 0x2d0d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D84u;
        // 0x2d0d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D8Cu;
}
