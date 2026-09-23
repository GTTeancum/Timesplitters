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

// Function: specialfxIsOutdoors
// Address: 0x2ae1d8 - 0x2ae240
void specialfxIsOutdoors_0x2ae1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxIsOutdoors_0x2ae1d8");
#endif

    switch (ctx->pc) {
        case 0x2ae230u: goto label_2ae230;
        default: break;
    }

    ctx->pc = 0x2ae1d8u;

    // 0x2ae1d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ae1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae1dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae1e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ae1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ae1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ae1e8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ae1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ae1ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ae1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ae1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ae1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ae1f8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2ae1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae1fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ae200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae204: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ae204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae208: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ae208u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae20c: 0x246e9800  addiu       $t6, $v1, -0x6800
    ctx->pc = 0x2ae20cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940672));
    // 0x2ae210: 0x69c20007  ldl         $v0, 0x7($t6)
    ctx->pc = 0x2ae210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ae214: 0x6dc20000  ldr         $v0, 0x0($t6)
    ctx->pc = 0x2ae214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ae218: 0x8dcc0008  lw          $t4, 0x8($t6)
    ctx->pc = 0x2ae218u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x3A9808u));
    // 0x2ae21c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2ae21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ae220: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2ae220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ae224: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x2ae224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x2ae228: 0xc09640e  jal         func_259038
    ctx->pc = 0x2AE228u;
    SET_GPR_U32(ctx, 31, 0x2AE230u);
    ctx->pc = 0x2AE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE228u;
    // 0x2ae22c: 0x240b0ff9  addiu       $t3, $zero, 0xFF9 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4089));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2AE228u, 0x2AE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE230u;
label_2ae230:
    // 0x2ae230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ae230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae234: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ae238: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE238u;
        // 0x2ae23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE240u;
}
