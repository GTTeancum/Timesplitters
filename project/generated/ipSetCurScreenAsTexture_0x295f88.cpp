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

// Function: ipSetCurScreenAsTexture
// Address: 0x295f88 - 0x295f9c
void ipSetCurScreenAsTexture_0x295f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipSetCurScreenAsTexture_0x295f88");
#endif

    ctx->pc = 0x295f88u;

    // 0x295f88: 0x8f829374  lw          $v0, -0x6C8C($gp)
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939508)));
    // 0x295f8c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x295f90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x295f94: 0x80a5774  j           func_295DD0
    ctx->pc = 0x295F94u;
    ctx->pc = 0x295F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F94u;
    // 0x295f98: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD0u;
    ipSetScreenAsTexture_0x295dd0(rdram, ctx, runtime); return;
    ctx->pc = 0x295F9Cu;
}
