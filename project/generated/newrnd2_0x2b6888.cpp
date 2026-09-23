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

// Function: newrnd2
// Address: 0x2b6888 - 0x2b68cc
void newrnd2_0x2b6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("newrnd2_0x2b6888");
#endif

    ctx->pc = 0x2b6888u;

    // 0x2b6888: 0x2782b480  addiu       $v0, $gp, -0x4B80
    ctx->pc = 0x2b6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947968));
    // 0x2b688c: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2b688cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6890: 0x74ffc  dsll32      $t1, $a3, 31
    ctx->pc = 0x2b6890u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 31));
    // 0x2b6894: 0x94ffa  dsrl        $t1, $t1, 31
    ctx->pc = 0x2b6894u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 31);
    // 0x2b6898: 0x747f8  dsll        $t0, $a3, 31
    ctx->pc = 0x2b6898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 31);
    // 0x2b689c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2b689cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2b68a0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x2b68a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2b68a4: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x2b68a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x2b68a8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2b68a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2b68ac: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x2b68acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x2b68b0: 0x93d3a  dsrl        $a3, $t1, 20
    ctx->pc = 0x2b68b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) >> 20);
    // 0x2b68b4: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x2b68b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x2b68b8: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
    // 0x2b68bc: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x2b68bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x2b68c0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2b68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b68c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B68C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C4u;
        // 0x2b68c8: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B68C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B68CCu;
}
