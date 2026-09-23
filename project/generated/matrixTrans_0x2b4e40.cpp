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

// Function: matrixTrans
// Address: 0x2b4e40 - 0x2b4e94
void matrixTrans_0x2b4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixTrans_0x2b4e40");
#endif

    switch (ctx->pc) {
        case 0x2b4e6cu: goto label_2b4e6c;
        default: break;
    }

    ctx->pc = 0x2b4e40u;

    // 0x2b4e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4e48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e4c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4e4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4e50: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4e50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4e54: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2b4e54u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2b4e58: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4e5c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b4e5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4e64: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4E64u;
    SET_GPR_U32(ctx, 31, 0x2B4E6Cu);
    ctx->pc = 0x2B4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E64u;
    // 0x2b4e68: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4E64u, 0x2B4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E6Cu;
label_2b4e6c:
    // 0x2b4e6c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x2b4e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b4e70: 0xe6150030  swc1        $f21, 0x30($s0)
    ctx->pc = 0x2b4e70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b4e74: 0xe6160034  swc1        $f22, 0x34($s0)
    ctx->pc = 0x2b4e74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2b4e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4e80: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2b4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4e84: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4e88: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E8Cu;
        // 0x2b4e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4E94u;
}
