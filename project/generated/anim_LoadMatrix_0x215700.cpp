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

// Function: anim_LoadMatrix
// Address: 0x215700 - 0x215714
void anim_LoadMatrix_0x215700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anim_LoadMatrix_0x215700");
#endif

    ctx->pc = 0x215700u;

    // 0x215700: 0x8f82b68c  lw          $v0, -0x4974($gp)
    ctx->pc = 0x215700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948492)));
    // 0x215704: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x215704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x215708: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21570c: 0x80855c8  j           func_215720
    ctx->pc = 0x21570Cu;
    ctx->pc = 0x215710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21570Cu;
    // 0x215710: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215720u;
    anim_SetModelview_0x215720(rdram, ctx, runtime); return;
    ctx->pc = 0x215714u;
}
