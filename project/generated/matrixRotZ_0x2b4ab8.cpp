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

// Function: matrixRotZ
// Address: 0x2b4ab8 - 0x2b4b18
void matrixRotZ_0x2b4ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixRotZ_0x2b4ab8");
#endif

    switch (ctx->pc) {
        case 0x2b4ad8u: goto label_2b4ad8;
        case 0x2b4ae0u: goto label_2b4ae0;
        case 0x2b4aecu: goto label_2b4aec;
        default: break;
    }

    ctx->pc = 0x2b4ab8u;

    // 0x2b4ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ac4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b4ac8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4ac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4acc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4ad0: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x2B4AD0u;
    SET_GPR_U32(ctx, 31, 0x2B4AD8u);
    ctx->pc = 0x2B4AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AD0u;
    // 0x2b4ad4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x2B4AD0u, 0x2B4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AD8u;
label_2b4ad8:
    // 0x2b4ad8: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B4AD8u;
    SET_GPR_U32(ctx, 31, 0x2B4AE0u);
    ctx->pc = 0x2B4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AD8u;
    // 0x2b4adc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B4AD8u, 0x2B4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AE0u;
label_2b4ae0:
    // 0x2b4ae0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b4ae0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4ae4: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2B4AE4u;
    SET_GPR_U32(ctx, 31, 0x2B4AECu);
    ctx->pc = 0x2B4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AE4u;
    // 0x2b4ae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2B4AE4u, 0x2B4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AECu;
label_2b4aec:
    // 0x2b4aec: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2b4aecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2b4af0: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x2b4af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b4af4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b4af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b4af8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2b4af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4afc: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2b4afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b4b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4b08: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2b4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4b0c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2b4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4b10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B10u;
        // 0x2b4b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4B18u;
}
