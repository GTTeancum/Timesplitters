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

// Function: weatherCalcWindStrengthInDir
// Address: 0x2a8488 - 0x2a84ec
void weatherCalcWindStrengthInDir_0x2a8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherCalcWindStrengthInDir_0x2a8488");
#endif

    switch (ctx->pc) {
        case 0x2a849cu: goto label_2a849c;
        case 0x2a84b0u: goto label_2a84b0;
        default: break;
    }

    ctx->pc = 0x2a8488u;

    // 0x2a8488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a848c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a8490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8494: 0xc0aa01e  jal         func_2A8078
    ctx->pc = 0x2A8494u;
    SET_GPR_U32(ctx, 31, 0x2A849Cu);
    ctx->pc = 0x2A8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8494u;
    // 0x2a8498: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8078u, 0x2A8494u, 0x2A849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A849Cu;
label_2a849c:
    // 0x2a849c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a84a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84a4: 0xc44ca70c  lwc1        $f12, -0x58F4($v0)
    ctx->pc = 0x2a84a4u;
    { uint32_t bits = FAST_READ32(0x36A70Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a84a8: 0xc0aa032  jal         func_2A80C8
    ctx->pc = 0x2A84A8u;
    SET_GPR_U32(ctx, 31, 0x2A84B0u);
    ctx->pc = 0x2A84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A84A8u;
    // 0x2a84ac: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A80C8u, 0x2A84A8u, 0x2A84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84B0u;
label_2a84b0:
    // 0x2a84b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a84b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a84b4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2a84b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a84b8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a84b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a84bc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a84c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a84c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a84c4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2a84c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a84c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2a84c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2a84cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a84ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a84d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a84d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a84d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a84d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a84d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a84d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a84dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a84dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a84e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a84e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a84e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84E4u;
        // 0x2a84e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A84ECu;
}
