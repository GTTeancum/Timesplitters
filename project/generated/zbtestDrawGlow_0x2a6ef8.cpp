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

// Function: zbtestDrawGlow
// Address: 0x2a6ef8 - 0x2a6f50
void zbtestDrawGlow_0x2a6ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestDrawGlow_0x2a6ef8");
#endif

    ctx->pc = 0x2a6ef8u;

    // 0x2a6ef8: 0x8f88b98c  lw          $t0, -0x4674($gp)
    ctx->pc = 0x2a6ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949260)));
    // 0x2a6efc: 0x2902003c  slti        $v0, $t0, 0x3C
    ctx->pc = 0x2a6efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2a6f00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A6F00u;
    {
        const bool branch_taken_0x2a6f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F00u;
        // 0x2a6f04: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f00) {
            ctx->pc = 0x2A6F48u;
            goto label_2a6f48;
        }
    }
    ctx->pc = 0x2A6F08u;
    // 0x2a6f08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2a6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a6f0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a6f0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a6f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a6f14: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2a6f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a6f18: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a6f1c: 0x2463a0b0  addiu       $v1, $v1, -0x5F50
    ctx->pc = 0x2a6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942896));
    // 0x2a6f20: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a6f24: 0xaf84b98c  sw          $a0, -0x4674($gp)
    ctx->pc = 0x2a6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949260), GPR_U32(ctx, 4));
    // 0x2a6f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6f2c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a6f30: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2a6f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a6f34: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x2a6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x2a6f38: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2a6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2a6f3c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2a6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2a6f40: 0xe44c000c  swc1        $f12, 0xC($v0)
    ctx->pc = 0x2a6f40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a6f44: 0xe44d0010  swc1        $f13, 0x10($v0)
    ctx->pc = 0x2a6f44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2a6f48:
    // 0x2a6f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6F50u;
}
