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

// Function: DisableDmac
// Address: 0x2d0c50 - 0x2d0cb4
void DisableDmac_0x2d0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableDmac_0x2d0c50");
#endif

    switch (ctx->pc) {
        case 0x2d0c70u: goto label_2d0c70;
        case 0x2d0c94u: goto label_2d0c94;
        default: break;
    }

    ctx->pc = 0x2d0c50u;

    // 0x2d0c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0c5c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0c60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0c64: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0c64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0c68: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0C68u;
    {
        const bool branch_taken_0x2d0c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C68u;
        // 0x2d0c6c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c68) {
            ctx->pc = 0x2D0C8Cu;
            goto label_2d0c8c;
        }
    }
    ctx->pc = 0x2D0C70u;
label_2d0c70:
    // 0x2d0c70: 0x42000039  di
    ctx->pc = 0x2d0c70u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0c74: 0x40f  sync.p
    ctx->pc = 0x2d0c74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0c78: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0c7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0c80: 0x0  nop
    ctx->pc = 0x2d0c80u;
    // NOP
    // 0x2d0c84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0C84u;
    {
        const bool branch_taken_0x2d0c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c84) {
            ctx->pc = 0x2D0C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0c70;
        }
    }
    ctx->pc = 0x2D0C8Cu;
label_2d0c8c:
    // 0x2d0c8c: 0xc0b3fa4  jal         func_2CFE90
    ctx->pc = 0x2D0C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D0C94u);
    ctx->pc = 0x2CFE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE90u, 0x2D0C8Cu, 0x2D0C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C94u;
label_2d0c94:
    // 0x2d0c94: 0xf  sync
    ctx->pc = 0x2d0c94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0c98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0C98u;
    {
        const bool branch_taken_0x2d0c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C98u;
        // 0x2d0c9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c98) {
            ctx->pc = 0x2D0CA8u;
            goto label_2d0ca8;
        }
    }
    ctx->pc = 0x2D0CA0u;
    // 0x2d0ca0: 0x42000038  ei
    ctx->pc = 0x2d0ca0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0ca8:
    // 0x2d0ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CACu;
        // 0x2d0cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0CB4u;
}
