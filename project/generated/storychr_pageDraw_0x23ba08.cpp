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

// Function: storychr_pageDraw
// Address: 0x23ba08 - 0x23ba38
void storychr_pageDraw_0x23ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("storychr_pageDraw_0x23ba08");
#endif

    switch (ctx->pc) {
        case 0x23ba1cu: goto label_23ba1c;
        default: break;
    }

    ctx->pc = 0x23ba08u;

    // 0x23ba08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ba0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ba10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ba14: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23BA14u;
    SET_GPR_U32(ctx, 31, 0x23BA1Cu);
    ctx->pc = 0x23BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA14u;
    // 0x23ba18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23BA14u, 0x23BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA1Cu;
label_23ba1c:
    // 0x23ba1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba20: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23ba24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ba24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ba28: 0x24a54cf8  addiu       $a1, $a1, 0x4CF8
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19704));
    // 0x23ba2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ba2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ba30: 0x808c40a  j           func_231028
    ctx->pc = 0x23BA30u;
    ctx->pc = 0x23BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA30u;
    // 0x23ba34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231028u;
    splitpageDraw_0x231028(rdram, ctx, runtime); return;
    ctx->pc = 0x23BA38u;
}
