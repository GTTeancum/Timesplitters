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

// Function: mapnameedit_pageDraw
// Address: 0x24d1f0 - 0x24d220
void mapnameedit_pageDraw_0x24d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapnameedit_pageDraw_0x24d1f0");
#endif

    switch (ctx->pc) {
        case 0x24d204u: goto label_24d204;
        default: break;
    }

    ctx->pc = 0x24d1f0u;

    // 0x24d1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d1fc: 0xc09319c  jal         func_24C670
    ctx->pc = 0x24D1FCu;
    SET_GPR_U32(ctx, 31, 0x24D204u);
    ctx->pc = 0x24D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1FCu;
    // 0x24d200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C670u, 0x24D1FCu, 0x24D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D204u;
label_24d204:
    // 0x24d204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d214: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d218: 0x808bc3c  j           func_22F0F0
    ctx->pc = 0x24D218u;
    ctx->pc = 0x24D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D218u;
    // 0x24d21c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F0F0u;
    stringeditDraw_0x22f0f0(rdram, ctx, runtime); return;
    ctx->pc = 0x24D220u;
}
