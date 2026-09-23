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

// Function: vtxlistcolour
// Address: 0x2a7a50 - 0x2a7ab0
void vtxlistcolour_0x2a7a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vtxlistcolour_0x2a7a50");
#endif

    switch (ctx->pc) {
        case 0x2a7a68u: goto label_2a7a68;
        default: break;
    }

    ctx->pc = 0x2a7a50u;

    // 0x2a7a50: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2a7a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a54: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2a7a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a58: 0x70034688  pextlb      $t0, $zero, $v1
    ctx->pc = 0x2a7a58u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2a7a5c: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x2a7a5cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2a7a60: 0x70024e88  pextlb      $t1, $zero, $v0
    ctx->pc = 0x2a7a60u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2a7a64: 0x70094e88  pextlb      $t1, $zero, $t1
    ctx->pc = 0x2a7a64u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
label_2a7a68:
    // 0x2a7a68: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2a7a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7a6c: 0x70073e88  pextlb      $a3, $zero, $a3
    ctx->pc = 0x2a7a6cu;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2a7a70: 0x70073e88  pextlb      $a3, $zero, $a3
    ctx->pc = 0x2a7a70u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2a7a74: 0x70e85148  psubh       $t2, $a3, $t0
    ctx->pc = 0x2a7a74u;
    SET_GPR_VEC(ctx, 10, PS2_PSUBH(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x2a7a78: 0xcc800004  pref        0x00, 0x4($a0)
    ctx->pc = 0x2a7a78u;
    // PREF instruction (ignored)
    // 0x2a7a7c: 0x71495709  pmulth      $t2, $t2, $t1
    ctx->pc = 0x2a7a7cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 10, result); }
    // 0x2a7a80: 0x20840004  addi        $a0, $a0, 0x4
    ctx->pc = 0x2a7a80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x2a7a84: 0x20a50004  addi        $a1, $a1, 0x4
    ctx->pc = 0x2a7a84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x2a7a88: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x2a7a88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x2a7a8c: 0x700a5a36  psrlh       $t3, $t2, 8
    ctx->pc = 0x2a7a8cu;
    SET_GPR_VEC(ctx, 11, _mm_srli_epi16(GPR_VEC(ctx, 10), 8));
    // 0x2a7a90: 0x710b5908  paddh       $t3, $t0, $t3
    ctx->pc = 0x2a7a90u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x2a7a94: 0x716759e8  pminh       $t3, $t3, $a3
    ctx->pc = 0x2a7a94u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x2a7a98: 0x700b5ec8  ppacb       $t3, $zero, $t3
    ctx->pc = 0x2a7a98u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
    // 0x2a7a9c: 0x700b5ec8  ppacb       $t3, $zero, $t3
    ctx->pc = 0x2a7a9cu;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
    // 0x2a7aa0: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A7AA0u;
    {
        const bool branch_taken_0x2a7aa0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AA0u;
        // 0x2a7aa4: 0xacabfffc  sw          $t3, -0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7aa0) {
            ctx->pc = 0x2A7A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7a68;
        }
    }
    ctx->pc = 0x2A7AA8u;
    // 0x2a7aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AB0u;
}
