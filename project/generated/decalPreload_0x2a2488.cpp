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

// Function: decalPreload
// Address: 0x2a2488 - 0x2a24dc
void decalPreload_0x2a2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalPreload_0x2a2488");
#endif

    switch (ctx->pc) {
        case 0x2a24b0u: goto label_2a24b0;
        case 0x2a24c0u: goto label_2a24c0;
        default: break;
    }

    ctx->pc = 0x2a2488u;

    // 0x2a2488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a248c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a2490: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2494: 0x2442a1f8  addiu       $v0, $v0, -0x5E08
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943224));
    // 0x2a2498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a249c: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a24a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a24a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a24a4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2a24a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a24a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36A200u));
    // 0x2a24ac: 0x0  nop
    ctx->pc = 0x2a24acu;
    // NOP
label_2a24b0:
    // 0x2a24b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a24b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24b4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2a24b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2a24b8: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2A24B8u;
    SET_GPR_U32(ctx, 31, 0x2A24C0u);
    ctx->pc = 0x2A24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24B8u;
    // 0x2a24bc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2A24B8u, 0x2A24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24C0u;
label_2a24c0:
    // 0x2a24c0: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A24C0u;
    {
        const bool branch_taken_0x2a24c0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2a24c0) {
            ctx->pc = 0x2A24C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A24C0u;
            // 0x2a24c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A24B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a24b0;
        }
    }
    ctx->pc = 0x2A24C8u;
    // 0x2a24c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a24c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a24cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a24ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a24d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a24d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a24d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A24D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24D4u;
        // 0x2a24d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A24D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A24DCu;
}
