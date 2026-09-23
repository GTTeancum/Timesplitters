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

// Function: zbtestPreload
// Address: 0x2a65b8 - 0x2a6604
void zbtestPreload_0x2a65b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestPreload_0x2a65b8");
#endif

    switch (ctx->pc) {
        case 0x2a65d8u: goto label_2a65d8;
        case 0x2a65e8u: goto label_2a65e8;
        default: break;
    }

    ctx->pc = 0x2a65b8u;

    // 0x2a65b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a65b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a65bc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a65c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a65c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a65c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a65c8: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2a65c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a65cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a65ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a65d0: 0x2450a290  addiu       $s0, $v0, -0x5D70
    ctx->pc = 0x2a65d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943376));
    // 0x2a65d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a65d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36A290u));
label_2a65d8:
    // 0x2a65d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a65d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2a65dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a65e0: 0xc0870fa  jal         func_21C3E8
    ctx->pc = 0x2A65E0u;
    SET_GPR_U32(ctx, 31, 0x2A65E8u);
    ctx->pc = 0x2A65E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65E0u;
    // 0x2a65e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3E8u, 0x2A65E0u, 0x2A65E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65E8u;
label_2a65e8:
    // 0x2a65e8: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A65E8u;
    {
        const bool branch_taken_0x2a65e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2a65e8) {
            ctx->pc = 0x2A65ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A65E8u;
            // 0x2a65ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A65D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a65d8;
        }
    }
    ctx->pc = 0x2A65F0u;
    // 0x2a65f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a65f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a65f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a65f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a65f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a65f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a65fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A65FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65FCu;
        // 0x2a6600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A65FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6604u;
}
