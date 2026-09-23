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

// Function: bgPortalEnableFromRooms
// Address: 0x257840 - 0x257860
void bgPortalEnableFromRooms_0x257840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalEnableFromRooms_0x257840");
#endif

    switch (ctx->pc) {
        case 0x257850u: goto label_257850;
        default: break;
    }

    ctx->pc = 0x257840u;

    // 0x257840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257848: 0xc095dee  jal         func_2577B8
    ctx->pc = 0x257848u;
    SET_GPR_U32(ctx, 31, 0x257850u);
    ctx->pc = 0x2577B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577B8u, 0x257848u, 0x257850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257850u;
label_257850:
    // 0x257850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x257854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257858: 0x8095de6  j           func_257798
    ctx->pc = 0x257858u;
    ctx->pc = 0x25785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257858u;
    // 0x25785c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257798u;
    bgPortalEnable_0x257798(rdram, ctx, runtime); return;
    ctx->pc = 0x257860u;
}
