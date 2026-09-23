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

// Function: iInvalidDCache
// Address: 0x2d0b68 - 0x2d0b7c
void iInvalidDCache_0x2d0b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iInvalidDCache_0x2d0b68");
#endif

    ctx->pc = 0x2d0b68u;

    // 0x2d0b68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d0b6c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x2d0b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x2d0b70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2d0b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2d0b74: 0x80b4292  j           func_2D0A48
    ctx->pc = 0x2D0B74u;
    ctx->pc = 0x2D0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B74u;
    // 0x2d0b78: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0A48u;
    _sceIDC_0x2d0a48(rdram, ctx, runtime); return;
    ctx->pc = 0x2D0B7Cu;
}
