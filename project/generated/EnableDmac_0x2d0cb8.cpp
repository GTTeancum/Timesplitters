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

// Function: EnableDmac
// Address: 0x2d0cb8 - 0x2d0d1c
void EnableDmac_0x2d0cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableDmac_0x2d0cb8");
#endif

    switch (ctx->pc) {
        case 0x2d0cd8u: goto label_2d0cd8;
        case 0x2d0cfcu: goto label_2d0cfc;
        default: break;
    }

    ctx->pc = 0x2d0cb8u;

    // 0x2d0cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0cbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0cc4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d0cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0cc8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0ccc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0cccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0cd0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0CD0u;
    {
        const bool branch_taken_0x2d0cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CD0u;
        // 0x2d0cd4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cd0) {
            ctx->pc = 0x2D0CF4u;
            goto label_2d0cf4;
        }
    }
    ctx->pc = 0x2D0CD8u;
label_2d0cd8:
    // 0x2d0cd8: 0x42000039  di
    ctx->pc = 0x2d0cd8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d0cdc: 0x40f  sync.p
    ctx->pc = 0x2d0cdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0ce0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0ce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0ce8: 0x0  nop
    ctx->pc = 0x2d0ce8u;
    // NOP
    // 0x2d0cec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D0CECu;
    {
        const bool branch_taken_0x2d0cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0cec) {
            ctx->pc = 0x2D0CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0cd8;
        }
    }
    ctx->pc = 0x2D0CF4u;
label_2d0cf4:
    // 0x2d0cf4: 0xc0b3fa0  jal         func_2CFE80
    ctx->pc = 0x2D0CF4u;
    SET_GPR_U32(ctx, 31, 0x2D0CFCu);
    ctx->pc = 0x2CFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE80u, 0x2D0CF4u, 0x2D0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CFCu;
label_2d0cfc:
    // 0x2d0cfc: 0xf  sync
    ctx->pc = 0x2d0cfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0d00: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D00u;
    {
        const bool branch_taken_0x2d0d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D00u;
        // 0x2d0d04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d00) {
            ctx->pc = 0x2D0D10u;
            goto label_2d0d10;
        }
    }
    ctx->pc = 0x2D0D08u;
    // 0x2d0d08: 0x42000038  ei
    ctx->pc = 0x2d0d08u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d0d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0d10:
    // 0x2d0d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D14u;
        // 0x2d0d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D1Cu;
}
