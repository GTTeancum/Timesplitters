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

// Function: zbtestDrawTorch
// Address: 0x2a6fa8 - 0x2a7008
void zbtestDrawTorch_0x2a6fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zbtestDrawTorch_0x2a6fa8");
#endif

    ctx->pc = 0x2a6fa8u;

    // 0x2a6fa8: 0x8f88b994  lw          $t0, -0x466C($gp)
    ctx->pc = 0x2a6fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949268)));
    // 0x2a6fac: 0x5010014  bgez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A6FACu;
    {
        const bool branch_taken_0x2a6fac = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2A6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FACu;
        // 0x2a6fb0: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fac) {
            ctx->pc = 0x2A7000u;
            goto label_2a7000;
        }
    }
    ctx->pc = 0x2A6FB4u;
    // 0x2a6fb4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2a6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2a6fb8: 0xaf82b994  sw          $v0, -0x466C($gp)
    ctx->pc = 0x2a6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949268), GPR_U32(ctx, 2));
    // 0x2a6fbc: 0x2463a860  addiu       $v1, $v1, -0x57A0
    ctx->pc = 0x2a6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944864));
    // 0x2a6fc0: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x2a6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2a6fc4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a6fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6fcc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a6fd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a6fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a6fd4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2a6fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2a6fd8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2a6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fdc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a6fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a6fe0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2a6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6fe4: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a6fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a6fe8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2a6fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a6ff0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2a6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6ff4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x2a6ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a6ff8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2a6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ffc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a6ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_2a7000:
    // 0x2a7000: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7008u;
}
