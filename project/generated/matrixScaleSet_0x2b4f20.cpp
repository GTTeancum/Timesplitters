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

// Function: matrixScaleSet
// Address: 0x2b4f20 - 0x2b4f74
void matrixScaleSet_0x2b4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixScaleSet_0x2b4f20");
#endif

    switch (ctx->pc) {
        case 0x2b4f4cu: goto label_2b4f4c;
        default: break;
    }

    ctx->pc = 0x2b4f20u;

    // 0x2b4f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f2c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4f2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4f30: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4f30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4f34: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2b4f34u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2b4f38: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4f38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4f3c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b4f3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4f44: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4F44u;
    SET_GPR_U32(ctx, 31, 0x2B4F4Cu);
    ctx->pc = 0x2B4F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F44u;
    // 0x2b4f48: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4F44u, 0x2B4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F4Cu;
label_2b4f4c:
    // 0x2b4f4c: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x2b4f4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2b4f50: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x2b4f50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4f54: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x2b4f54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b4f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4f60: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4f64: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4f68: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F6Cu;
        // 0x2b4f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F74u;
}
