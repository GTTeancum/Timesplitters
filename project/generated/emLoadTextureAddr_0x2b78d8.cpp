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

// Function: emLoadTextureAddr
// Address: 0x2b78d8 - 0x2b7900
void emLoadTextureAddr_0x2b78d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emLoadTextureAddr_0x2b78d8");
#endif

    ctx->pc = 0x2b78d8u;

    // 0x2b78d8: 0x8f83b498  lw          $v1, -0x4B68($gp)
    ctx->pc = 0x2b78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x2b78dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b78dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b78e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78e4: 0x8c621a08  lw          $v0, 0x1A08($v1)
    ctx->pc = 0x2b78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6664)));
    // 0x2b78e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b78e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2b78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2b78f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b78f4: 0xac621a08  sw          $v0, 0x1A08($v1)
    ctx->pc = 0x2b78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6664), GPR_U32(ctx, 2));
    // 0x2b78f8: 0x80adc64  j           func_2B7190
    ctx->pc = 0x2B78F8u;
    ctx->pc = 0x2B78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B78F8u;
    // 0x2b78fc: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    emLoadTexture_0x2b7190(rdram, ctx, runtime); return;
    ctx->pc = 0x2B7900u;
}
