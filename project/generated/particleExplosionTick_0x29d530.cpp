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

// Function: particleExplosionTick
// Address: 0x29d530 - 0x29d554
void particleExplosionTick_0x29d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleExplosionTick_0x29d530");
#endif

    ctx->pc = 0x29d530u;

    // 0x29d530: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29d530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d534: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x29d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29d538: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x29d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x29d53c: 0x8c4403c4  lw          $a0, 0x3C4($v0)
    ctx->pc = 0x29d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x29d540: 0x244703a8  addiu       $a3, $v0, 0x3A8
    ctx->pc = 0x29d540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 936));
    // 0x29d544: 0x8c4603a4  lw          $a2, 0x3A4($v0)
    ctx->pc = 0x29d544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x29d548: 0x244803b4  addiu       $t0, $v0, 0x3B4
    ctx->pc = 0x29d548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 948));
    // 0x29d54c: 0x809d470  j           func_2751C0
    ctx->pc = 0x29D54Cu;
    ctx->pc = 0x29D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D54Cu;
    // 0x29d550: 0x8c4903c0  lw          $t1, 0x3C0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751C0u;
    explosionDamage_0x2751c0(rdram, ctx, runtime); return;
    ctx->pc = 0x29D554u;
}
