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

// Function: padFileOutName
// Address: 0x2640e8 - 0x264124
void padFileOutName_0x2640e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padFileOutName_0x2640e8");
#endif

    switch (ctx->pc) {
        case 0x264110u: goto label_264110;
        default: break;
    }

    ctx->pc = 0x2640e8u;

    // 0x2640e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2640ec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2640ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2640f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2640f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2640f4: 0x24a52778  addiu       $a1, $a1, 0x2778
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10104));
    // 0x2640f8: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x2640f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x2640fc: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x2640fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x264100: 0x26106450  addiu       $s0, $s0, 0x6450
    ctx->pc = 0x264100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25680));
    // 0x264104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264108: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x264108u;
    SET_GPR_U32(ctx, 31, 0x264110u);
    ctx->pc = 0x26410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264108u;
    // 0x26410c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x264108u, 0x264110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264110u;
label_264110:
    // 0x264110: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26411c: 0x3e00008  jr          $ra
    ctx->pc = 0x26411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26411Cu;
        // 0x264120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264124u;
}
