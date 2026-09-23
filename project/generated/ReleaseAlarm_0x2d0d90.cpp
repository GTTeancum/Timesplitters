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

// Function: ReleaseAlarm
// Address: 0x2d0d90 - 0x2d0df4
void ReleaseAlarm_0x2d0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseAlarm_0x2d0d90");
#endif

    switch (ctx->pc) {
        case 0x2d0db0u: goto label_2d0db0;
        case 0x2d0dd4u: goto label_2d0dd4;
        default: break;
    }

    ctx->pc = 0x2d0d90u;

    // 0x2d0d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0d9c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0da0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0da4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0da8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0DA8u;
    {
        const bool branch_taken_0x2d0da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DA8u;
        // 0x2d0dac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0da8) {
            ctx->pc = 0x2D0DCCu;
            goto label_2d0dcc;
        }
    }
    ctx->pc = 0x2D0DB0u;
label_2d0db0:
    // 0x2d0db0: 0x42000039  di
    ctx->pc = 0x2d0db0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0db4: 0x40f  sync.p
    ctx->pc = 0x2d0db4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0db8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0dbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0dc0: 0x0  nop
    ctx->pc = 0x2d0dc0u;
    // NOP
    // 0x2d0dc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0DC4u;
    {
        const bool branch_taken_0x2d0dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0dc4) {
            ctx->pc = 0x2D0DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0db0;
        }
    }
    ctx->pc = 0x2D0DCCu;
label_2d0dcc:
    // 0x2d0dcc: 0xc0b3fac  jal         func_2CFEB0
    ctx->pc = 0x2D0DCCu;
    SET_GPR_U32(ctx, 31, 0x2D0DD4u);
    ctx->pc = 0x2CFEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFEB0u, 0x2D0DCCu, 0x2D0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DD4u;
label_2d0dd4:
    // 0x2d0dd4: 0xf  sync
    ctx->pc = 0x2d0dd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0dd8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0DD8u;
    {
        const bool branch_taken_0x2d0dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DD8u;
        // 0x2d0ddc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dd8) {
            ctx->pc = 0x2D0DE8u;
            goto label_2d0de8;
        }
    }
    ctx->pc = 0x2D0DE0u;
    // 0x2d0de0: 0x42000038  ei
    ctx->pc = 0x2d0de0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0de8:
    // 0x2d0de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DECu;
        // 0x2d0df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0DF4u;
}
