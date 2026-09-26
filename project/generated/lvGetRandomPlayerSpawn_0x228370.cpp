#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: lvGetRandomPlayerSpawn
// Address: 0x228370 - 0x22838c
void lvGetRandomPlayerSpawn_0x228370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetRandomPlayerSpawn_0x228370");
#endif

    switch (ctx->pc) {
        case 0x228380u: goto label_228380;
        default: break;
    }

    // Optional process-local benchmark setting. Use the original RNG and
    // spawn selection algorithm, with a reproducible starting seed.
    static const char *testSeed = std::getenv("TS_TEST_SPAWN_SEED");
    if (testSeed && *testSeed) {
        static const uint32_t seed = static_cast<uint32_t>(std::strtoul(testSeed, nullptr, 0));
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947976), 0u);
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294947968), static_cast<uint64_t>(seed) + 1u);
        std::cerr << "[TS:test-spawn] seed=" << seed << '\n';
    }
    ctx->pc = 0x228370u;

    // 0x228370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228378: 0xc08a02c  jal         func_2280B0
    ctx->pc = 0x228378u;
    SET_GPR_U32(ctx, 31, 0x228380u);
    ctx->pc = 0x22837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228378u;
    // 0x22837c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x228378u, 0x228380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228380u;
label_228380:
    // 0x228380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228384: 0x3e00008  jr          $ra
    ctx->pc = 0x228384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228384u;
        // 0x228388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22838Cu;
}
