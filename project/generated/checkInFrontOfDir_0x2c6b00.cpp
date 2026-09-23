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

// Function: checkInFrontOfDir
// Address: 0x2c6b00 - 0x2c6b4c
void checkInFrontOfDir_0x2c6b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkInFrontOfDir_0x2c6b00");
#endif

    ctx->pc = 0x2c6b00u;

    // 0x2c6b00: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b04: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2c6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6b08: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2c6b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6b0c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2c6b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6b10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c6b10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6b14: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c6b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b18: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2c6b18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2c6b1c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2c6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6b20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6b28: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c6b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c6b2c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2c6b2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c6b30: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c6b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c6b34: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2c6b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b38: 0x0  nop
    ctx->pc = 0x2c6b38u;
    // NOP
    // 0x2c6b3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C6B3Cu;
    {
        const bool branch_taken_0x2c6b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6b3c) {
            ctx->pc = 0x2C6B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6B3Cu;
            // 0x2c6b40: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6B44u;
            goto label_2c6b44;
        }
    }
    ctx->pc = 0x2C6B44u;
label_2c6b44:
    // 0x2c6b44: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B4Cu;
}
