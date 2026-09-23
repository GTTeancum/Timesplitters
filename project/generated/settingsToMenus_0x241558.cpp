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

// Function: settingsToMenus
// Address: 0x241558 - 0x241580
void settingsToMenus_0x241558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("settingsToMenus_0x241558");
#endif

    switch (ctx->pc) {
        case 0x241568u: goto label_241568;
        default: break;
    }

    ctx->pc = 0x241558u;

    // 0x241558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24155c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241560: 0xc088076  jal         func_2201D8
    ctx->pc = 0x241560u;
    SET_GPR_U32(ctx, 31, 0x241568u);
    ctx->pc = 0x2201D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201D8u, 0x241560u, 0x241568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241568u;
label_241568:
    // 0x241568: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24156c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24156cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x241570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241574: 0x24843810  addiu       $a0, $a0, 0x3810
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14352));
    // 0x241578: 0x808b0c2  j           func_22C308
    ctx->pc = 0x241578u;
    ctx->pc = 0x24157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241578u;
    // 0x24157c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x241580u;
}
