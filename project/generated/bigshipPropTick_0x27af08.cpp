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

// Function: bigshipPropTick
// Address: 0x27af08 - 0x27af64
void bigshipPropTick_0x27af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bigshipPropTick_0x27af08");
#endif

    ctx->pc = 0x27af08u;

    // 0x27af08: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x27af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27af0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27af0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27af10: 0xc781876c  lwc1        $f1, -0x7894($gp)
    ctx->pc = 0x27af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27af14: 0xc7838770  lwc1        $f3, -0x7890($gp)
    ctx->pc = 0x27af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27af18: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x27af18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x27af1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27af1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27af20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27af20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27af24: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x27af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x27af28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27af28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27af2c: 0xc7848774  lwc1        $f4, -0x788C($gp)
    ctx->pc = 0x27af2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27af30: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x27af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27af34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27af34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27af38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27af38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27af3c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27af3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27af40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x27af40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27af44: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27af48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27af4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27af50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27af54: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27af54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27af58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27af58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF5Cu;
        // 0x27af60: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AF64u;
}
