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

// Function: signonLoadStart
// Address: 0x2317b0 - 0x2317d8
void signonLoadStart_0x2317b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonLoadStart_0x2317b0");
#endif

    switch (ctx->pc) {
        case 0x2317c4u: goto label_2317c4;
        default: break;
    }

    ctx->pc = 0x2317b0u;

    // 0x2317b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2317b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2317b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2317b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2317b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2317bc: 0xc091354  jal         func_244D50
    ctx->pc = 0x2317BCu;
    SET_GPR_U32(ctx, 31, 0x2317C4u);
    ctx->pc = 0x2317C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317BCu;
    // 0x2317c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D50u, 0x2317BCu, 0x2317C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317C4u;
label_2317c4:
    // 0x2317c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2317c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2317c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2317cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2317ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2317d0: 0x808c5b2  j           func_2316C8
    ctx->pc = 0x2317D0u;
    ctx->pc = 0x2317D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317D0u;
    // 0x2317d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316C8u;
    signonLoadRetry_0x2316c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2317D8u;
}
