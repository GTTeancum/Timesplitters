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

// Function: spaceship2PropTick
// Address: 0x27add8 - 0x27aeac
void spaceship2PropTick_0x27add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spaceship2PropTick_0x27add8");
#endif

    ctx->pc = 0x27add8u;

    // 0x27add8: 0xc7829da8  lwc1        $f2, -0x6258($gp)
    ctx->pc = 0x27add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27addc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27addcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27ade0: 0xc7818754  lwc1        $f1, -0x78AC($gp)
    ctx->pc = 0x27ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ade4: 0xc7848758  lwc1        $f4, -0x78A8($gp)
    ctx->pc = 0x27ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ade8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x27ade8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x27adec: 0xc780875c  lwc1        $f0, -0x78A4($gp)
    ctx->pc = 0x27adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27adf0: 0x24c65c60  addiu       $a2, $a2, 0x5C60
    ctx->pc = 0x27adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23648));
    // 0x27adf4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27adf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27adf8: 0xc7838760  lwc1        $f3, -0x78A0($gp)
    ctx->pc = 0x27adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27adfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27ae00: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27ae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27ae04: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27ae04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27ae08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27ae08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x27ae0c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27ae0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x27ae10: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x27ae10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x27ae14: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27ae14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27ae18: 0xc4860024  lwc1        $f6, 0x24($a0)
    ctx->pc = 0x27ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ae1c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27ae1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27ae20: 0xc4870028  lwc1        $f7, 0x28($a0)
    ctx->pc = 0x27ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27ae24: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27ae24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27ae28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x27ae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x27ae2c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x27ae2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x27ae30: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x27ae30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x27ae34: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x27ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ae38: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27ae38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27ae3c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x27ae3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x27ae40: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ae40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x27ae44: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x27ae44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27ae48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ae48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27ae4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27ae4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27ae50: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ae50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27ae54: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x27ae54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x27ae58: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27ae5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ae60: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x27ae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x27ae64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27ae68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ae6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ae70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27ae74: 0x30a507ff  andi        $a1, $a1, 0x7FF
    ctx->pc = 0x27ae74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x27ae78: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x27ae78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x27ae7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27ae80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27ae84: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x27ae84u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x27ae88: 0xe4860030  swc1        $f6, 0x30($a0)
    ctx->pc = 0x27ae88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x27ae8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ae90: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x27ae90u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x27ae94: 0xe4870034  swc1        $f7, 0x34($a0)
    ctx->pc = 0x27ae94u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x27ae98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ae9c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x27ae9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x27aea0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27aea0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27aea4: 0x3e00008  jr          $ra
    ctx->pc = 0x27AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEA4u;
        // 0x27aea8: 0xe4830038  swc1        $f3, 0x38($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AEACu;
}
