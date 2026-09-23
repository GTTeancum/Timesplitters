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

// Function: DisableIntc
// Address: 0x2d0b80 - 0x2d0be4
void DisableIntc_0x2d0b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableIntc_0x2d0b80");
#endif

    switch (ctx->pc) {
        case 0x2d0ba0u: goto label_2d0ba0;
        case 0x2d0bc4u: goto label_2d0bc4;
        default: break;
    }

    ctx->pc = 0x2d0b80u;

    // 0x2d0b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0b8c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0b90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0b94: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0b94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0b98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0B98u;
    {
        const bool branch_taken_0x2d0b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B98u;
        // 0x2d0b9c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b98) {
            ctx->pc = 0x2D0BBCu;
            goto label_2d0bbc;
        }
    }
    ctx->pc = 0x2D0BA0u;
label_2d0ba0:
    // 0x2d0ba0: 0x42000039  di
    ctx->pc = 0x2d0ba0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0ba4: 0x40f  sync.p
    ctx->pc = 0x2d0ba4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0ba8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0bac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0bb0: 0x0  nop
    ctx->pc = 0x2d0bb0u;
    // NOP
    // 0x2d0bb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0BB4u;
    {
        const bool branch_taken_0x2d0bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bb4) {
            ctx->pc = 0x2D0BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0ba0;
        }
    }
    ctx->pc = 0x2D0BBCu;
label_2d0bbc:
    // 0x2d0bbc: 0xc0b3f9c  jal         func_2CFE70
    ctx->pc = 0x2D0BBCu;
    SET_GPR_U32(ctx, 31, 0x2D0BC4u);
    ctx->pc = 0x2CFE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE70u, 0x2D0BBCu, 0x2D0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BC4u;
label_2d0bc4:
    // 0x2d0bc4: 0xf  sync
    ctx->pc = 0x2d0bc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0bc8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0BC8u;
    {
        const bool branch_taken_0x2d0bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BC8u;
        // 0x2d0bcc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bc8) {
            ctx->pc = 0x2D0BD8u;
            goto label_2d0bd8;
        }
    }
    ctx->pc = 0x2D0BD0u;
    // 0x2d0bd0: 0x42000038  ei
    ctx->pc = 0x2d0bd0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0bd8:
    // 0x2d0bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BDCu;
        // 0x2d0be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0BE4u;
}
