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

// Function: EnableIntc
// Address: 0x2d0be8 - 0x2d0c4c
void EnableIntc_0x2d0be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableIntc_0x2d0be8");
#endif

    switch (ctx->pc) {
        case 0x2d0c08u: goto label_2d0c08;
        case 0x2d0c2cu: goto label_2d0c2c;
        default: break;
    }

    ctx->pc = 0x2d0be8u;

    // 0x2d0be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0bec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0bf4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0bf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0bfc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0bfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0c00: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C00u;
    {
        const bool branch_taken_0x2d0c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C00u;
        // 0x2d0c04: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c00) {
            ctx->pc = 0x2D0C24u;
            goto label_2d0c24;
        }
    }
    ctx->pc = 0x2D0C08u;
label_2d0c08:
    // 0x2d0c08: 0x42000039  di
    ctx->pc = 0x2d0c08u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0c0c: 0x40f  sync.p
    ctx->pc = 0x2d0c0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0c10: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0c14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0c18: 0x0  nop
    ctx->pc = 0x2d0c18u;
    // NOP
    // 0x2d0c1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0C1Cu;
    {
        const bool branch_taken_0x2d0c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c1c) {
            ctx->pc = 0x2D0C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0c08;
        }
    }
    ctx->pc = 0x2D0C24u;
label_2d0c24:
    // 0x2d0c24: 0xc0b3f98  jal         func_2CFE60
    ctx->pc = 0x2D0C24u;
    SET_GPR_U32(ctx, 31, 0x2D0C2Cu);
    ctx->pc = 0x2CFE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE60u, 0x2D0C24u, 0x2D0C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C2Cu;
label_2d0c2c:
    // 0x2d0c2c: 0xf  sync
    ctx->pc = 0x2d0c2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0c30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0C30u;
    {
        const bool branch_taken_0x2d0c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C30u;
        // 0x2d0c34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c30) {
            ctx->pc = 0x2D0C40u;
            goto label_2d0c40;
        }
    }
    ctx->pc = 0x2D0C38u;
    // 0x2d0c38: 0x42000038  ei
    ctx->pc = 0x2d0c38u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0c40:
    // 0x2d0c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C44u;
        // 0x2d0c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0C4Cu;
}
