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

// Function: set_cheat
// Address: 0x203628 - 0x203660
void set_cheat_0x203628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_cheat_0x203628");
#endif

    ctx->pc = 0x203628u;

    // 0x203628: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x20362c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203630: 0x2442df88  addiu       $v0, $v0, -0x2078
    ctx->pc = 0x203630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958984));
    // 0x203634: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x203634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x203638: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20363c: 0x2408008e  addiu       $t0, $zero, 0x8E
    ctx->pc = 0x20363cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x203640: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x203640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203648: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x203648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20364c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x20364cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x203650: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x203650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x203654: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x203654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203658: 0x8081546  j           func_205518
    ctx->pc = 0x203658u;
    ctx->pc = 0x20365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203658u;
    // 0x20365c: 0x106200a  movz        $a0, $t0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    soundStart_0x205518(rdram, ctx, runtime); return;
    ctx->pc = 0x203660u;
}
