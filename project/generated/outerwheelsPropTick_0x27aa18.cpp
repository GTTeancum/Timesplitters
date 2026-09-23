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

// Function: outerwheelsPropTick
// Address: 0x27aa18 - 0x27aa7c
void outerwheelsPropTick_0x27aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("outerwheelsPropTick_0x27aa18");
#endif

    ctx->pc = 0x27aa18u;

    // 0x27aa18: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x27aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27aa1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27aa20: 0xc7818718  lwc1        $f1, -0x78E8($gp)
    ctx->pc = 0x27aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa24: 0xc783871c  lwc1        $f3, -0x78E4($gp)
    ctx->pc = 0x27aa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27aa28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x27aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x27aa2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27aa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27aa30: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27aa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27aa34: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x27aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x27aa38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27aa38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aa3c: 0xc7828720  lwc1        $f2, -0x78E0($gp)
    ctx->pc = 0x27aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27aa40: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x27aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa44: 0xc7848724  lwc1        $f4, -0x78DC($gp)
    ctx->pc = 0x27aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27aa48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27aa48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27aa4c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27aa4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27aa50: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27aa50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27aa54: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27aa54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27aa58: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x27aa58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27aa5c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27aa60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27aa64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27aa68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27aa6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27aa70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27aa70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x27AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA74u;
        // 0x27aa78: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AA7Cu;
}
