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

// Function: musicSetVol
// Address: 0x205bd8 - 0x205bf4
void musicSetVol_0x205bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicSetVol_0x205bd8");
#endif

    ctx->pc = 0x205bd8u;

    // 0x205bd8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x205bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x205bdc: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x205bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x205be0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x205be4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x205be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x205be8: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x205be8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x205bec: 0x808177a  j           func_205DE8
    ctx->pc = 0x205BECu;
    ctx->pc = 0x205BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BECu;
    // 0x205bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    stream_RPC_0x205de8(rdram, ctx, runtime); return;
    ctx->pc = 0x205BF4u;
}
