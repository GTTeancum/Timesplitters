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

// Function: DisplayChallengeDebug
// Address: 0x21f780 - 0x21f804
void DisplayChallengeDebug_0x21f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisplayChallengeDebug_0x21f780");
#endif

    switch (ctx->pc) {
        case 0x21f794u: goto label_21f794;
        case 0x21f79cu: goto label_21f79c;
        case 0x21f7d8u: goto label_21f7d8;
        default: break;
    }

    ctx->pc = 0x21f780u;

    // 0x21f780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f78c: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21F78Cu;
    SET_GPR_U32(ctx, 31, 0x21F794u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x21F78Cu, 0x21F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F794u;
label_21f794:
    // 0x21f794: 0xc087cc6  jal         func_21F318
    ctx->pc = 0x21F794u;
    SET_GPR_U32(ctx, 31, 0x21F79Cu);
    ctx->pc = 0x21F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F794u;
    // 0x21f798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F318u, 0x21F794u, 0x21F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F79Cu;
label_21f79c:
    // 0x21f79c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21f7a0: 0x8c63c4ec  lw          $v1, -0x3B14($v1)
    ctx->pc = 0x21f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4ECu));
    // 0x21f7a4: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x21f7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x21f7a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21F7A8u;
    {
        const bool branch_taken_0x21f7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7A8u;
        // 0x21f7ac: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7a8) {
            ctx->pc = 0x21F7F4u;
            goto label_21f7f4;
        }
    }
    ctx->pc = 0x21F7B0u;
    // 0x21f7b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f7b4: 0x244209e0  addiu       $v0, $v0, 0x9E0
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
    // 0x21f7b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f7bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f7c0: 0x800008  jr          $a0
    ctx->pc = 0x21F7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F7C8u: goto label_21f7c8;
            case 0x21F7F4u: goto label_21f7f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F7C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21F7C8u;
label_21f7c8:
    // 0x21f7c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x21f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21f7cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f7d0: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F7D0u;
    {
        const bool branch_taken_0x21f7d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7D0u;
        // 0x21f7d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7d0) {
            ctx->pc = 0x21F7F8u;
            goto label_21f7f8;
        }
    }
    ctx->pc = 0x21F7D8u;
label_21f7d8:
    // 0x21f7d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x21f7dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f7e0: 0x0  nop
    ctx->pc = 0x21f7e0u;
    // NOP
    // 0x21f7e4: 0x0  nop
    ctx->pc = 0x21f7e4u;
    // NOP
    // 0x21f7e8: 0x0  nop
    ctx->pc = 0x21f7e8u;
    // NOP
    // 0x21f7ec: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21F7ECu;
    {
        const bool branch_taken_0x21f7ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21f7ec) {
            ctx->pc = 0x21F7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f7d8;
        }
    }
    ctx->pc = 0x21F7F4u;
label_21f7f4:
    // 0x21f7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f7f8:
    // 0x21f7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7FCu;
        // 0x21f800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F804u;
}
