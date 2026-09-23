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

// Function: mcseqSlotGetShortName
// Address: 0x243458 - 0x2434a4
void mcseqSlotGetShortName_0x243458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqSlotGetShortName_0x243458");
#endif

    switch (ctx->pc) {
        case 0x243484u: goto label_243484;
        case 0x243490u: goto label_243490;
        default: break;
    }

    ctx->pc = 0x243458u;

    // 0x243458: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x243458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24345c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24345cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243460: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x243460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x243464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24346c: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x24346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x243470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243478: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x243478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24347c: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x24347Cu;
    SET_GPR_U32(ctx, 31, 0x243484u);
    ctx->pc = 0x243480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24347Cu;
    // 0x243480: 0x8ca405b4  lw          $a0, 0x5B4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x24347Cu, 0x243484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243484u;
label_243484:
    // 0x243484: 0x8f84b818  lw          $a0, -0x47E8($gp)
    ctx->pc = 0x243484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243488: 0xc090cca  jal         func_243328
    ctx->pc = 0x243488u;
    SET_GPR_U32(ctx, 31, 0x243490u);
    ctx->pc = 0x24348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243488u;
    // 0x24348c: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243328u, 0x243488u, 0x243490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243490u;
label_243490:
    // 0x243490: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x243490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x243494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24349c: 0x3e00008  jr          $ra
    ctx->pc = 0x24349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24349Cu;
        // 0x2434a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2434A4u;
}
