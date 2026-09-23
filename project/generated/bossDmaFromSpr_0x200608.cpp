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

// Function: bossDmaFromSpr
// Address: 0x200608 - 0x200628
void bossDmaFromSpr_0x200608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossDmaFromSpr_0x200608");
#endif

    ctx->pc = 0x200608u;

    // 0x200608: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x200608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x20060c: 0x8f8393ac  lw          $v1, -0x6C54($gp)
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939564)));
    // 0x200610: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x200610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x200614: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x200618: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x20061c: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x20061cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
    // 0x200620: 0x80b3d5e  j           func_2CF578
    ctx->pc = 0x200620u;
    ctx->pc = 0x200624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200620u;
    // 0x200624: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF578u;
    sceDmaSendN_0x2cf578(rdram, ctx, runtime); return;
    ctx->pc = 0x200628u;
}
