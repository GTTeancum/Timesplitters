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

// Function: chrRestart
// Address: 0x284fc8 - 0x284ff4
void chrRestart_0x284fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrRestart_0x284fc8");
#endif

    ctx->pc = 0x284fc8u;

    // 0x284fc8: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x284fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x284fcc: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x284fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x284fd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x284fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x284fd4: 0x24071210  addiu       $a3, $zero, 0x1210
    ctx->pc = 0x284fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x284fd8: 0x38420066  xori        $v0, $v0, 0x66
    ctx->pc = 0x284fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)102);
    // 0x284fdc: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x284fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x284fe0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x284fe0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x284fe4: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x284fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x284fe8: 0x3012  mflo        $a2
    ctx->pc = 0x284fe8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x284fec: 0x80b9583  j           func_2E560C
    ctx->pc = 0x284FECu;
    ctx->pc = 0x284FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FECu;
    // 0x284ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    memset_0x2e560c(rdram, ctx, runtime); return;
    ctx->pc = 0x284FF4u;
}
