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

// Function: mapmakerPreload
// Address: 0x2483e0 - 0x24840c
void mapmakerPreload_0x2483e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapmakerPreload_0x2483e0");
#endif

    switch (ctx->pc) {
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f8u: goto label_2483f8;
        case 0x248400u: goto label_248400;
        default: break;
    }

    ctx->pc = 0x2483e0u;

    // 0x2483e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2483e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2483e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2483e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2483e8: 0xc094032  jal         func_2500C8
    ctx->pc = 0x2483E8u;
    SET_GPR_U32(ctx, 31, 0x2483F0u);
    ctx->pc = 0x2500C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2500C8u, 0x2483E8u, 0x2483F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483F0u;
label_2483f0:
    // 0x2483f0: 0xc08bb38  jal         func_22ECE0
    ctx->pc = 0x2483F0u;
    SET_GPR_U32(ctx, 31, 0x2483F8u);
    ctx->pc = 0x22ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECE0u, 0x2483F0u, 0x2483F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483F8u;
label_2483f8:
    // 0x2483f8: 0xc08b894  jal         func_22E250
    ctx->pc = 0x2483F8u;
    SET_GPR_U32(ctx, 31, 0x248400u);
    ctx->pc = 0x22E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E250u, 0x2483F8u, 0x248400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248400u;
label_248400:
    // 0x248400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248404: 0x8094d88  j           func_253620
    ctx->pc = 0x248404u;
    ctx->pc = 0x248408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248404u;
    // 0x248408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253620u;
    mmfilePreloadBuiltinMaps_0x253620(rdram, ctx, runtime); return;
    ctx->pc = 0x24840Cu;
}
