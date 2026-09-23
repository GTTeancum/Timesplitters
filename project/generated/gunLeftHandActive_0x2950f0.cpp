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

// Function: gunLeftHandActive
// Address: 0x2950f0 - 0x295140
void gunLeftHandActive_0x2950f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunLeftHandActive_0x2950f0");
#endif

    switch (ctx->pc) {
        case 0x295104u: goto label_295104;
        default: break;
    }

    ctx->pc = 0x2950f0u;

    // 0x2950f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2950f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2950f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2950f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2950f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2950f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2950fc: 0xc0a542e  jal         func_2950B8
    ctx->pc = 0x2950FCu;
    SET_GPR_U32(ctx, 31, 0x295104u);
    ctx->pc = 0x295100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950FCu;
    // 0x295100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2950B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2950B8u, 0x2950FCu, 0x295104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295104u;
label_295104:
    // 0x295104: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295108: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x295108u;
    {
        const bool branch_taken_0x295108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295108u;
        // 0x29510c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295108) {
            ctx->pc = 0x295130u;
            goto label_295130;
        }
    }
    ctx->pc = 0x295110u;
    // 0x295110: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x295110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x295114: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x295114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x295118: 0x246390f8  addiu       $v1, $v1, -0x6F08
    ctx->pc = 0x295118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x29511c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29511cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x295120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295124: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x295124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x295128: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x295128u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29512c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29512cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_295130:
    // 0x295130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295138: 0x3e00008  jr          $ra
    ctx->pc = 0x295138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295138u;
        // 0x29513c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295140u;
}
