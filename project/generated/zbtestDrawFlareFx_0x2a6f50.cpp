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

// Function: zbtestDrawFlareFx
// Address: 0x2a6f50 - 0x2a6fa8
void zbtestDrawFlareFx_0x2a6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestDrawFlareFx_0x2a6f50");
#endif

    ctx->pc = 0x2a6f50u;

    // 0x2a6f50: 0x8f88b990  lw          $t0, -0x4670($gp)
    ctx->pc = 0x2a6f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949264)));
    // 0x2a6f54: 0x2902000c  slti        $v0, $t0, 0xC
    ctx->pc = 0x2a6f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2a6f58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A6F58u;
    {
        const bool branch_taken_0x2a6f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F58u;
        // 0x2a6f5c: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f58) {
            ctx->pc = 0x2A6FA0u;
            goto label_2a6fa0;
        }
    }
    ctx->pc = 0x2A6F60u;
    // 0x2a6f60: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6f64: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2a6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a6f68: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2a6f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a6f6c: 0xaf84b990  sw          $a0, -0x4670($gp)
    ctx->pc = 0x2a6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949264), GPR_U32(ctx, 4));
    // 0x2a6f70: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a6f74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a6f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f78: 0x2442a740  addiu       $v0, $v0, -0x58C0
    ctx->pc = 0x2a6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
    // 0x2a6f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6f80: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a6f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a6f84: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x2a6f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x2a6f88: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2a6f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f8c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2a6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x2a6f90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2a6f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2a6f94: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2a6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2a6f98: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2a6f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f9c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2a6f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2a6fa0:
    // 0x2a6fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6FA8u;
}
