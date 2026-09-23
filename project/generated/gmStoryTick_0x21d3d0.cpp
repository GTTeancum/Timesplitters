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

// Function: gmStoryTick
// Address: 0x21d3d0 - 0x21d464
void gmStoryTick_0x21d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmStoryTick_0x21d3d0");
#endif

    switch (ctx->pc) {
        case 0x21d3e8u: goto label_21d3e8;
        case 0x21d42cu: goto label_21d42c;
        case 0x21d434u: goto label_21d434;
        default: break;
    }

    ctx->pc = 0x21d3d0u;

    // 0x21d3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d3dc: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x21d3e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D3E0u;
    {
        const bool branch_taken_0x21d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3E0u;
        // 0x21d3e4: 0x8f86b59c  lw          $a2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3e0) {
            ctx->pc = 0x21D3ECu;
            goto label_21d3ec;
        }
    }
    ctx->pc = 0x21D3E8u;
label_21d3e8:
    // 0x21d3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d3ec:
    // 0x21d3ec: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21d3f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x21d3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d3f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21D3F4u;
    {
        const bool branch_taken_0x21d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F4u;
        // 0x21d3f8: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3f4) {
            ctx->pc = 0x21D42Cu;
            goto label_21d42c;
        }
    }
    ctx->pc = 0x21D3FCu;
    // 0x21d3fc: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x21d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x21d400: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x21d400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21d404: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21d408: 0x8c4300f8  lw          $v1, 0xF8($v0)
    ctx->pc = 0x21d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x21d40c: 0x1860fff6  blez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x21D40Cu;
    {
        const bool branch_taken_0x21d40c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D40Cu;
        // 0x21d410: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d40c) {
            ctx->pc = 0x21D3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d3e8;
        }
    }
    ctx->pc = 0x21D414u;
    // 0x21d414: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d418: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21d41c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x21d420: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21d420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21d424: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21D424u;
    SET_GPR_U32(ctx, 31, 0x21D42Cu);
    ctx->pc = 0x21D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D424u;
    // 0x21d428: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21D424u, 0x21D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D42Cu;
label_21d42c:
    // 0x21d42c: 0xc087332  jal         func_21CCC8
    ctx->pc = 0x21D42Cu;
    SET_GPR_U32(ctx, 31, 0x21D434u);
    ctx->pc = 0x21CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCC8u, 0x21D42Cu, 0x21D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D434u;
label_21d434:
    // 0x21d434: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D434u;
    {
        const bool branch_taken_0x21d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D434u;
        // 0x21d438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d434) {
            ctx->pc = 0x21D45Cu;
            goto label_21d45c;
        }
    }
    ctx->pc = 0x21D43Cu;
    // 0x21d43c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d440: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21d444: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21d448: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21d448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21d44c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21d44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21d450: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x21d450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32C4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32C4F8u, _value); } while (0);
    // 0x21d454: 0x80874d2  j           func_21D348
    ctx->pc = 0x21D454u;
    ctx->pc = 0x21D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D454u;
    // 0x21d458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21D45Cu;
label_21d45c:
    // 0x21d45c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D45Cu;
        // 0x21d460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D464u;
}
