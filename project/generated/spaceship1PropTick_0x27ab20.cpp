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

// Function: spaceship1PropTick
// Address: 0x27ab20 - 0x27add4
void spaceship1PropTick_0x27ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spaceship1PropTick_0x27ab20");
#endif

    switch (ctx->pc) {
        case 0x27aca8u: goto label_27aca8;
        case 0x27ad04u: goto label_27ad04;
        case 0x27ad1cu: goto label_27ad1c;
        case 0x27ad40u: goto label_27ad40;
        default: break;
    }

    ctx->pc = 0x27ab20u;

    // 0x27ab20: 0x8f859da8  lw          $a1, -0x6258($gp)
    ctx->pc = 0x27ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x27ab24: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27ab24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27ab28: 0xc7818734  lwc1        $f1, -0x78CC($gp)
    ctx->pc = 0x27ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ab2c: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x27ab2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27ab30: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x27ab30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27ab34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27ab34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27ab38: 0xc7838738  lwc1        $f3, -0x78C8($gp)
    ctx->pc = 0x27ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ab3c: 0xc780873c  lwc1        $f0, -0x78C4($gp)
    ctx->pc = 0x27ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27ab44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27ab44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27ab48: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27ab48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27ab4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27ab50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27ab50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27ab54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ab54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab58: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27ab5c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27ab5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27ab60: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x27ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x27ab64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27ab64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27ab68: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x27ab68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x27ab6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27ab70: 0x26665c60  addiu       $a2, $s3, 0x5C60
    ctx->pc = 0x27ab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 23648));
    // 0x27ab74: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x27ab74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x27ab78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27ab7c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27ab7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x27ab80: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27ab84: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x27ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27ab88: 0xc7898740  lwc1        $f9, -0x78C0($gp)
    ctx->pc = 0x27ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27ab8c: 0x460009a4  .word       0x460009A4                   # cvt.w.s     $f6, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ab8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x27ab90: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x27ab90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27ab94: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x27ab94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x27ab98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ab98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27ab9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27ab9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x27aba0: 0xc7888744  lwc1        $f8, -0x78BC($gp)
    ctx->pc = 0x27aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27aba4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x27aba4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27aba8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27aba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27abac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x27abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27abb0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27abb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27abb4: 0xc62a0020  lwc1        $f10, 0x20($s1)
    ctx->pc = 0x27abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x27abb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27abbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x27abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27abc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27abc4: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x27abc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x27abc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27abcc: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x27abccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x27abd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27abd4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x27abd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x27abd8: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x27abd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x27abdc: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x27abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27abe0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27abe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27abe4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x27abe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27abe8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27abec: 0xc78b8748  lwc1        $f11, -0x78B8($gp)
    ctx->pc = 0x27abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x27abf0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x27abf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x27abf4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x27abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x27abf8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x27abf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x27abfc: 0xc6070028  lwc1        $f7, 0x28($s0)
    ctx->pc = 0x27abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27ac00: 0xa29023  subu        $s2, $a1, $v0
    ctx->pc = 0x27ac00u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ac04: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27ac04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x27ac08: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x27ac08u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x27ac0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x27ac0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27ac10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ac10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ac14: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ac14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27ac18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27ac18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27ac1c: 0xc606002c  lwc1        $f6, 0x2C($s0)
    ctx->pc = 0x27ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ac20: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x27ac20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x27ac24: 0xe6050030  swc1        $f5, 0x30($s0)
    ctx->pc = 0x27ac24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27ac28: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27ac2c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac30: 0x46001224  .word       0x46001224                   # cvt.w.s     $f8, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ac30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[8], &tmp, sizeof(tmp)); }
    // 0x27ac34: 0x44034000  mfc1        $v1, $f8
    ctx->pc = 0x27ac34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27ac38: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x27ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ac3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ac40: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x27ac40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x27ac44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27ac48: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x27ac48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x27ac4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27ac4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27ac50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ac54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ac54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ac58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27ac5c: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x27ac5cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x27ac60: 0xe6070034  swc1        $f7, 0x34($s0)
    ctx->pc = 0x27ac60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x27ac64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac68: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x27ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ac6c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x27ac6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x27ac70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ac70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ac74: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x27ac74u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x27ac78: 0xe6060038  swc1        $f6, 0x38($s0)
    ctx->pc = 0x27ac78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27ac7c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac80: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x27ac80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ac84: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x27ac84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x27ac88: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x27AC88u;
    {
        const bool branch_taken_0x27ac88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC88u;
        // 0x27ac8c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac88) {
            ctx->pc = 0x27ACE0u;
            goto label_27ace0;
        }
    }
    ctx->pc = 0x27AC90u;
    // 0x27ac90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27ac90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ac94: 0x0  nop
    ctx->pc = 0x27ac94u;
    // NOP
    // 0x27ac98: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x27AC98u;
    {
        const bool branch_taken_0x27ac98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ac98) {
            ctx->pc = 0x27AC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AC98u;
            // 0x27ac9c: 0xc6210020  lwc1        $f1, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ACE4u;
            goto label_27ace4;
        }
    }
    ctx->pc = 0x27ACA0u;
    // 0x27aca0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27ACA0u;
    SET_GPR_U32(ctx, 31, 0x27ACA8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27ACA0u, 0x27ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACA8u;
label_27aca8:
    // 0x27aca8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ACA8u;
    {
        const bool branch_taken_0x27aca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACA8u;
        // 0x27acac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aca8) {
            ctx->pc = 0x27ACBCu;
            goto label_27acbc;
        }
    }
    ctx->pc = 0x27ACB0u;
    // 0x27acb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27acb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27ACB4u;
    {
        const bool branch_taken_0x27acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACB4u;
        // 0x27acb8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acb4) {
            ctx->pc = 0x27ACD0u;
            goto label_27acd0;
        }
    }
    ctx->pc = 0x27ACBCu;
label_27acbc:
    // 0x27acbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27acc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27acc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27acc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27acc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27acc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27acc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27accc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27acccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27acd0:
    // 0x27acd0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x27acd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x27acd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27acd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27acd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27acd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27acdc: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x27acdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_27ace0:
    // 0x27ace0: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x27ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ace4:
    // 0x27ace4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ace8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x27ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27acec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27acecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27acf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27acf4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27acf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27acf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27acf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27acfc: 0xc09d194  jal         func_274650
    ctx->pc = 0x27ACFCu;
    SET_GPR_U32(ctx, 31, 0x27AD04u);
    ctx->pc = 0x27AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACFCu;
    // 0x27ad00: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27ACFCu, 0x27AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD04u;
label_27ad04:
    // 0x27ad04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ad10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27ad10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ad14: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27AD14u;
    SET_GPR_U32(ctx, 31, 0x27AD1Cu);
    ctx->pc = 0x27AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD14u;
    // 0x27ad18: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27AD14u, 0x27AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD1Cu;
label_27ad1c:
    // 0x27ad1c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27AD1Cu;
    {
        const bool branch_taken_0x27ad1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD1Cu;
        // 0x27ad20: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad1c) {
            ctx->pc = 0x27ADBCu;
            goto label_27adbc;
        }
    }
    ctx->pc = 0x27AD24u;
    // 0x27ad24: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x27ad24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ad28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27ad28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad2c: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x27ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x27ad30: 0x19200022  blez        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x27AD30u;
    {
        const bool branch_taken_0x27ad30 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x27AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD30u;
        // 0x27ad34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad30) {
            ctx->pc = 0x27ADBCu;
            goto label_27adbc;
        }
    }
    ctx->pc = 0x27AD38u;
    // 0x27ad38: 0x8f889da8  lw          $t0, -0x6258($gp)
    ctx->pc = 0x27ad38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x27ad3c: 0x0  nop
    ctx->pc = 0x27ad3cu;
    // NOP
label_27ad40:
    // 0x27ad40: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x27ad40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ad44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ad48: 0xc782874c  lwc1        $f2, -0x78B4($gp)
    ctx->pc = 0x27ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ad4c: 0xc7848750  lwc1        $f4, -0x78B0($gp)
    ctx->pc = 0x27ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ad50: 0x26635c60  addiu       $v1, $s3, 0x5C60
    ctx->pc = 0x27ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 23648));
    // 0x27ad54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27ad54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27ad58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27ad58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27ad5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x27ad5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x27ad60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27ad60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27ad64: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x27ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad68: 0xe9202a  slt         $a0, $a3, $t1
    ctx->pc = 0x27ad68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x27ad6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27ad6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27ad70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27ad70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27ad74: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ad74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x27ad78: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x27ad78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27ad7c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x27ad7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x27ad80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ad84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ad88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27ad8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ad90: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x27ad90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x27ad94: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x27ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad98: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x27ad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x27ad9c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x27ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ada0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x27ada0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x27ada4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ada8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x27ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x27adac: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x27adacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x27adb0: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27ADB0u;
    {
        const bool branch_taken_0x27adb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADB0u;
        // 0x27adb4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adb0) {
            ctx->pc = 0x27AD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ad40;
        }
    }
    ctx->pc = 0x27ADB8u;
    // 0x27adb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27adbc:
    // 0x27adbc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27adbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27adc0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27adc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27adc4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27adc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27adc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27adc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x27ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADCCu;
        // 0x27add0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ADD4u;
}
