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

// Function: obColour
// Address: 0x2606a0 - 0x2606ec
void obColour_0x2606a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obColour_0x2606a0");
#endif

    switch (ctx->pc) {
        case 0x2606c8u: goto label_2606c8;
        default: break;
    }

    ctx->pc = 0x2606a0u;

    // 0x2606a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2606a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2606a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2606a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2606a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2606ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2606acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2606b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2606b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2606b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2606b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2606bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2606c0: 0xc098138  jal         func_2604E0
    ctx->pc = 0x2606C0u;
    SET_GPR_U32(ctx, 31, 0x2606C8u);
    ctx->pc = 0x2606C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606C0u;
    // 0x2606c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2604E0u, 0x2606C0u, 0x2606C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606C8u;
label_2606c8:
    // 0x2606c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2606c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2606ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2606d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2606d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2606d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2606d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2606dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2606dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2606e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2606e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2606e4: 0x8098138  j           func_2604E0
    ctx->pc = 0x2606E4u;
    ctx->pc = 0x2606E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606E4u;
    // 0x2606e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2604E0u;
    partColour_0x2604e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2606ECu;
}
