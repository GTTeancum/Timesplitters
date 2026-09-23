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

// Function: soundStop
// Address: 0x2054a0 - 0x2054bc
void soundStop_0x2054a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundStop_0x2054a0");
#endif

    ctx->pc = 0x2054a0u;

    // 0x2054a0: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x2054a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2054a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2054a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2054a8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2054a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2054ac: 0xc23004  sllv        $a2, $v0, $a2
    ctx->pc = 0x2054acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2054b0: 0x34851600  ori         $a1, $a0, 0x1600
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5632);
    // 0x2054b4: 0x8081242  j           func_204908
    ctx->pc = 0x2054B4u;
    ctx->pc = 0x2054B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054B4u;
    // 0x2054b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    soundBatchAdd_0x204908(rdram, ctx, runtime); return;
    ctx->pc = 0x2054BCu;
}
