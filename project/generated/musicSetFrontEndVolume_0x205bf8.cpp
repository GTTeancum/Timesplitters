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

// Function: musicSetFrontEndVolume
// Address: 0x205bf8 - 0x205c38
void musicSetFrontEndVolume_0x205bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicSetFrontEndVolume_0x205bf8");
#endif

    ctx->pc = 0x205bf8u;

    // 0x205bf8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x205bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x205bfc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x205bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x205c00: 0x8c4737c0  lw          $a3, 0x37C0($v0)
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3537C0u));
    // 0x205c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c08: 0x8c683770  lw          $t0, 0x3770($v1)
    ctx->pc = 0x205c08u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x353770u));
    // 0x205c0c: 0x72380  sll         $a0, $a3, 14
    ctx->pc = 0x205c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
    // 0x205c10: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x205c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x205c14: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x205c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x205c18: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x205c18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x205c1c: 0x38c60066  xori        $a2, $a2, 0x66
    ctx->pc = 0x205c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)102);
    // 0x205c20: 0x8200a  movz        $a0, $zero, $t0
    ctx->pc = 0x205c20u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x205c24: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x205c24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x205c28: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x205c28u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x205c2c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x205c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x205c30: 0x80816f6  j           func_205BD8
    ctx->pc = 0x205C30u;
    ctx->pc = 0x205C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C30u;
    // 0x205c34: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205BD8u;
    musicSetVol_0x205bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x205C38u;
}
