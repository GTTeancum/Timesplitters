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

// Function: emResetTexBuffer
// Address: 0x2b69a8 - 0x2b6a20
void emResetTexBuffer_0x2b69a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emResetTexBuffer_0x2b69a8");
#endif

    switch (ctx->pc) {
        case 0x2b69e4u: goto label_2b69e4;
        case 0x2b69f4u: goto label_2b69f4;
        case 0x2b6a04u: goto label_2b6a04;
        default: break;
    }

    ctx->pc = 0x2b69a8u;

    // 0x2b69a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b69a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b69ac: 0x24031a18  addiu       $v1, $zero, 0x1A18
    ctx->pc = 0x2b69acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6680));
    // 0x2b69b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b69b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b69b4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b69b8: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x2b69b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b69bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b69c0: 0x24428150  addiu       $v0, $v0, -0x7EB0
    ctx->pc = 0x2b69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
    // 0x2b69c4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b69c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b69c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69cc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b69ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b69d0: 0x8e061a14  lw          $a2, 0x1A14($s0)
    ctx->pc = 0x2b69d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x2b69d4: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x2b69d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2b69d8: 0x3012  mflo        $a2
    ctx->pc = 0x2b69d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2b69dc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B69DCu;
    SET_GPR_U32(ctx, 31, 0x2B69E4u);
    ctx->pc = 0x2B69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69DCu;
    // 0x2b69e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B69DCu, 0x2B69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69E4u;
label_2b69e4:
    // 0x2b69e4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2b69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2b69e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b69e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69ec: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B69ECu;
    SET_GPR_U32(ctx, 31, 0x2B69F4u);
    ctx->pc = 0x2B69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69ECu;
    // 0x2b69f0: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B69ECu, 0x2B69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69F4u;
label_2b69f4:
    // 0x2b69f4: 0x26041808  addiu       $a0, $s0, 0x1808
    ctx->pc = 0x2b69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6152));
    // 0x2b69f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b69f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69fc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B69FCu;
    SET_GPR_U32(ctx, 31, 0x2B6A04u);
    ctx->pc = 0x2B6A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69FCu;
    // 0x2b6a00: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B69FCu, 0x2B6A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A04u;
label_2b6a04:
    // 0x2b6a04: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x2b6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x2b6a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6a0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b6a10: 0xae031a08  sw          $v1, 0x1A08($s0)
    ctx->pc = 0x2b6a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6664), GPR_U32(ctx, 3));
    // 0x2b6a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6a18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A18u;
        // 0x2b6a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6A20u;
}
