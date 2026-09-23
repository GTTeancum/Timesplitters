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

// Function: hr_findroute
// Address: 0x265fc0 - 0x265ffc
void hr_findroute_0x265fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_findroute_0x265fc0");
#endif

    switch (ctx->pc) {
        case 0x265fd0u: goto label_265fd0;
        default: break;
    }

    ctx->pc = 0x265fc0u;

    // 0x265fc0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x265fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x265fc4: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x265FC4u;
    {
        const bool branch_taken_0x265fc4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x265FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FC4u;
        // 0x265fc8: 0x3c0701fc  lui         $a3, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fc4) {
            ctx->pc = 0x265FF4u;
            goto label_265ff4;
        }
    }
    ctx->pc = 0x265FCCu;
    // 0x265fcc: 0x24e26490  addiu       $v0, $a3, 0x6490
    ctx->pc = 0x265fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 25744));
label_265fd0:
    // 0x265fd0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x265fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x265fd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265fd8: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x265fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x265fdc: 0x54850003  bnel        $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265FDCu;
    {
        const bool branch_taken_0x265fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x265fdc) {
            ctx->pc = 0x265FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FDCu;
            // 0x265fe0: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265FECu;
            goto label_265fec;
        }
    }
    ctx->pc = 0x265FE4u;
    // 0x265fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x265FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FE4u;
        // 0x265fe8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265FECu;
label_265fec:
    // 0x265fec: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x265FECu;
    {
        const bool branch_taken_0x265fec = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x265FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FECu;
        // 0x265ff0: 0x24e26490  addiu       $v0, $a3, 0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 25744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fec) {
            ctx->pc = 0x265FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265fd0;
        }
    }
    ctx->pc = 0x265FF4u;
label_265ff4:
    // 0x265ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x265FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FF4u;
        // 0x265ff8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265FFCu;
}
