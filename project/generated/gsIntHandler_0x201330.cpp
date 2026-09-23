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

// Function: gsIntHandler
// Address: 0x201330 - 0x201368
void gsIntHandler_0x201330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gsIntHandler_0x201330");
#endif

    switch (ctx->pc) {
        case 0x201350u: goto label_201350;
        default: break;
    }

    ctx->pc = 0x201330u;

    // 0x201330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201334: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x201334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x201338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20133c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x20133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x201340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201344: 0x8f849338  lw          $a0, -0x6CC8($gp)
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939448)));
    // 0x201348: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x201348u;
    SET_GPR_U32(ctx, 31, 0x201350u);
    ctx->pc = 0x20134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201348u;
    // 0x20134c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x201348u, 0x201350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201350u;
label_201350:
    // 0x201350: 0xf  sync
    ctx->pc = 0x201350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x201354: 0x42000038  ei
    ctx->pc = 0x201354u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x201358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20135c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201360: 0x3e00008  jr          $ra
    ctx->pc = 0x201360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201360u;
        // 0x201364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201368u;
}
