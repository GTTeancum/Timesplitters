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

// Function: sceVu0TransposeMatrix
// Address: 0x2d5f60 - 0x2d5fa4
void sceVu0TransposeMatrix_0x2d5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0TransposeMatrix_0x2d5f60");
#endif

    ctx->pc = 0x2d5f60u;

    // 0x2d5f60: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x2d5f60u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d5f64: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x2d5f64u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d5f68: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x2d5f68u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d5f6c: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x2d5f6cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d5f70: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x2d5f70u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2d5f74: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x2d5f74u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2d5f78: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x2d5f78u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x2d5f7c: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x2d5f7cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x2d5f80: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x2d5f80u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x2d5f84: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x2d5f84u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x2d5f88: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x2d5f88u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x2d5f8c: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x2d5f8cu;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x2d5f90: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x2d5f90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x2d5f94: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x2d5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x2d5f98: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x2d5f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x2d5f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F9Cu;
        // 0x2d5fa0: 0x7c8b0030  sq          $t3, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5FA4u;
}
