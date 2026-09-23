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

// Function: characterselect_pageDraw
// Address: 0x237e68 - 0x237e98
void characterselect_pageDraw_0x237e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("characterselect_pageDraw_0x237e68");
#endif

    switch (ctx->pc) {
        case 0x237e7cu: goto label_237e7c;
        default: break;
    }

    ctx->pc = 0x237e68u;

    // 0x237e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237e74: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x237E74u;
    SET_GPR_U32(ctx, 31, 0x237E7Cu);
    ctx->pc = 0x237E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E74u;
    // 0x237e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x237E74u, 0x237E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E7Cu;
label_237e7c:
    // 0x237e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e80: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x237e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x237e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237e88: 0x24a53ec8  addiu       $a1, $a1, 0x3EC8
    ctx->pc = 0x237e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16072));
    // 0x237e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237e90: 0x808c40a  j           func_231028
    ctx->pc = 0x237E90u;
    ctx->pc = 0x237E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E90u;
    // 0x237e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231028u;
    splitpageDraw_0x231028(rdram, ctx, runtime); return;
    ctx->pc = 0x237E98u;
}
