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

// Function: __assert
// Address: 0x2e46a8 - 0x2e46dc
void ps2___assert_0x2e46a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___assert_0x2e46a8");
#endif

    switch (ctx->pc) {
        case 0x2e46d0u: goto label_2e46d0;
        default: break;
    }

    ctx->pc = 0x2e46a8u;

    // 0x2e46a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e46ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2e46acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2e46b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e46b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e46b4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e46b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46b8: 0x8c43330c  lw          $v1, 0x330C($v0)
    ctx->pc = 0x2e46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e46bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e46bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46c0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2e46c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2e46c4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2e46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e46c8: 0xc0b9260  jal         func_2E4980
    ctx->pc = 0x2E46C8u;
    SET_GPR_U32(ctx, 31, 0x2E46D0u);
    ctx->pc = 0x2E46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46C8u;
    // 0x2e46cc: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4980u, 0x2E46C8u, 0x2E46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46D0u;
label_2e46d0:
    // 0x2e46d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e46d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e46d4: 0x80ba6f4  j           func_2E9BD0
    ctx->pc = 0x2E46D4u;
    ctx->pc = 0x2E46D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46D4u;
    // 0x2e46d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BD0u;
    abort_0x2e9bd0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E46DCu;
}
