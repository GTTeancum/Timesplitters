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

// Function: toggledebug
// Address: 0x20c940 - 0x20c9a8
void toggledebug_0x20c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toggledebug_0x20c940");
#endif

    switch (ctx->pc) {
        case 0x20c968u: goto label_20c968;
        default: break;
    }

    ctx->pc = 0x20c940u;

    // 0x20c940: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20c944: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20c948: 0x8f8b9c60  lw          $t3, -0x63A0($gp)
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941792)));
    // 0x20c94c: 0x24459a78  addiu       $a1, $v0, -0x6588
    ctx->pc = 0x20c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941304));
    // 0x20c950: 0x8f899c64  lw          $t1, -0x639C($gp)
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941796)));
    // 0x20c954: 0x24649a50  addiu       $a0, $v1, -0x65B0
    ctx->pc = 0x20c954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941264));
    // 0x20c958: 0x8f8a9c68  lw          $t2, -0x6398($gp)
    ctx->pc = 0x20c958u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20c95c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x20c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20c960: 0x8f889c6c  lw          $t0, -0x6394($gp)
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941804)));
    // 0x20c964: 0x8f879c70  lw          $a3, -0x6390($gp)
    ctx->pc = 0x20c964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941808)));
label_20c968:
    // 0x20c968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20c968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20c96c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20c96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x20c970: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20c974: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20c974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20c978: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20c978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20c97c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x20c980: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20C980u;
    {
        const bool branch_taken_0x20c980 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x20C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C980u;
        // 0x20c984: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c980) {
            ctx->pc = 0x20C968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c968;
        }
    }
    ctx->pc = 0x20C988u;
    // 0x20c988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c98c: 0xaf899c60  sw          $t1, -0x63A0($gp)
    ctx->pc = 0x20c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941792), GPR_U32(ctx, 9));
    // 0x20c990: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x20c990u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20c994: 0xaf8b9c64  sw          $t3, -0x639C($gp)
    ctx->pc = 0x20c994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941796), GPR_U32(ctx, 11));
    // 0x20c998: 0xaf889c68  sw          $t0, -0x6398($gp)
    ctx->pc = 0x20c998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941800), GPR_U32(ctx, 8));
    // 0x20c99c: 0xaf8a9c6c  sw          $t2, -0x6394($gp)
    ctx->pc = 0x20c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941804), GPR_U32(ctx, 10));
    // 0x20c9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x20C9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0xaf879c70  sw          $a3, -0x6390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941808), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C9A8u;
}
