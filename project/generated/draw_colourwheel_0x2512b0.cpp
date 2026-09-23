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

// Function: draw_colourwheel
// Address: 0x2512b0 - 0x251600
void draw_colourwheel_0x2512b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("draw_colourwheel_0x2512b0");
#endif

    switch (ctx->pc) {
        case 0x2513b0u: goto label_2513b0;
        case 0x251454u: goto label_251454;
        case 0x2514b4u: goto label_2514b4;
        case 0x251538u: goto label_251538;
        case 0x251548u: goto label_251548;
        case 0x251550u: goto label_251550;
        case 0x251574u: goto label_251574;
        case 0x251584u: goto label_251584;
        case 0x25158cu: goto label_25158c;
        case 0x2515a4u: goto label_2515a4;
        default: break;
    }

    ctx->pc = 0x2512b0u;

    // 0x2512b0: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x2512b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x2512b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2512b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2512b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2512b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2512bc: 0xffb702d0  sd          $s7, 0x2D0($sp)
    ctx->pc = 0x2512bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 23));
    // 0x2512c0: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x2512c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
    // 0x2512c4: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x2512c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x2512c8: 0xffb502b0  sd          $s5, 0x2B0($sp)
    ctx->pc = 0x2512c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 21));
    // 0x2512cc: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x2512ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x2512d0: 0xffb402a0  sd          $s4, 0x2A0($sp)
    ctx->pc = 0x2512d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 20));
    // 0x2512d4: 0x24150018  addiu       $s5, $zero, 0x18
    ctx->pc = 0x2512d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2512d8: 0xffb30290  sd          $s3, 0x290($sp)
    ctx->pc = 0x2512d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 19));
    // 0x2512dc: 0xffb20280  sd          $s2, 0x280($sp)
    ctx->pc = 0x2512dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
    // 0x2512e0: 0x26f35c60  addiu       $s3, $s7, 0x5C60
    ctx->pc = 0x2512e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 23648));
    // 0x2512e4: 0xffb10270  sd          $s1, 0x270($sp)
    ctx->pc = 0x2512e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
    // 0x2512e8: 0x3c127f7f  lui         $s2, 0x7F7F
    ctx->pc = 0x2512e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32639 << 16));
    // 0x2512ec: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x2512ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
    // 0x2512f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2512f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512f4: 0xe7bf0348  swc1        $f31, 0x348($sp)
    ctx->pc = 0x2512f4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x2512f8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2512f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512fc: 0xe7be0340  swc1        $f30, 0x340($sp)
    ctx->pc = 0x2512fcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x251300: 0x36527f80  ori         $s2, $s2, 0x7F80
    ctx->pc = 0x251300u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32640);
    // 0x251304: 0xe7bd0338  swc1        $f29, 0x338($sp)
    ctx->pc = 0x251304u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
    // 0x251308: 0xe7bc0330  swc1        $f28, 0x330($sp)
    ctx->pc = 0x251308u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x25130c: 0xe7bb0328  swc1        $f27, 0x328($sp)
    ctx->pc = 0x25130cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x251310: 0xe7ba0320  swc1        $f26, 0x320($sp)
    ctx->pc = 0x251310u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x251314: 0xe7b90318  swc1        $f25, 0x318($sp)
    ctx->pc = 0x251314u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x251318: 0xe7b80310  swc1        $f24, 0x310($sp)
    ctx->pc = 0x251318u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x25131c: 0xe7b70308  swc1        $f23, 0x308($sp)
    ctx->pc = 0x25131cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x251320: 0xe7b60300  swc1        $f22, 0x300($sp)
    ctx->pc = 0x251320u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x251324: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x251324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
    // 0x251328: 0xe7b502f8  swc1        $f21, 0x2F8($sp)
    ctx->pc = 0x251328u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x25132c: 0xe7b402f0  swc1        $f20, 0x2F0($sp)
    ctx->pc = 0x25132cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x251330: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x251330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x251334: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251338: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x251338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25133c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x25133cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251340: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x251340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x251344: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x251344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x251348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x251348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25134c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25134cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x251350: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x251350u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x251354: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x251354u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x251358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25135c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x25135cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x251360: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x251360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x251364: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x251364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x251368: 0xc79f828c  lwc1        $f31, -0x7D74($gp)
    ctx->pc = 0x251368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x25136c: 0x46040681  sub.s       $f26, $f0, $f4
    ctx->pc = 0x25136cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x251370: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x251370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x251374: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x251374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x251378: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x251378u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25137c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25137cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251380: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x251380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x251384: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x251384u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x251388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25138c: 0xc79d8290  lwc1        $f29, -0x7D70($gp)
    ctx->pc = 0x25138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x251390: 0x46021ec1  sub.s       $f27, $f3, $f2
    ctx->pc = 0x251390u;
    ctx->f[27] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x251394: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x251394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x251398: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x251398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x25139c: 0x4600b864  .word       0x4600B864                   # cvt.w.s     $f1, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25139cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2513a0: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x2513a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x2513a4: 0x46030600  add.s       $f24, $f0, $f3
    ctx->pc = 0x2513a4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2513a8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2513a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2513ac: 0x0  nop
    ctx->pc = 0x2513acu;
    // NOP
label_2513b0:
    // 0x2513b0: 0x461fb002  mul.s       $f0, $f22, $f31
    ctx->pc = 0x2513b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[31]);
    // 0x2513b4: 0x0  nop
    ctx->pc = 0x2513b4u;
    // NOP
    // 0x2513b8: 0x0  nop
    ctx->pc = 0x2513b8u;
    // NOP
    // 0x2513bc: 0x461e0003  div.s       $f0, $f0, $f30
    ctx->pc = 0x2513bcu;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[30];
    // 0x2513c0: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x2513c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x2513c4: 0x461c0000  add.s       $f0, $f0, $f28
    ctx->pc = 0x2513c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[28]);
    // 0x2513c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2513c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2513cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2513ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2513d0: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x2513d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2513d4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2513d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2513d8: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2513d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2513dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2513dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2513e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2513e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2513e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2513e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2513e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2513e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2513ec: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x2513ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2513f0: 0x1635000e  bne         $s1, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2513F0u;
    {
        const bool branch_taken_0x2513f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x2513F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513F0u;
        // 0x2513f4: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513f0) {
            ctx->pc = 0x25142Cu;
            goto label_25142c;
        }
    }
    ctx->pc = 0x2513F8u;
    // 0x2513f8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2513f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2513fc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2513fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x251400: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x251400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x251404: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x251404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x251408: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x251408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x25140c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x25140cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x251410: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x251410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251414: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x251414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251418: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x251418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25141c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x25141cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251420: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x251420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251424: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x251424u;
    {
        const bool branch_taken_0x251424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251424u;
        // 0x251428: 0xb6040010  sdr         $a0, 0x10($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251424) {
            ctx->pc = 0x251488u;
            goto label_251488;
        }
    }
    ctx->pc = 0x25142Cu;
label_25142c:
    // 0x25142c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x25142cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x251430: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x251430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x251434: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x251434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x251438: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x251438u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x25143c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x25143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x251440: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x251440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x251444: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x251448: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x251448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25144c: 0xc08b984  jal         func_22E610
    ctx->pc = 0x25144Cu;
    SET_GPR_U32(ctx, 31, 0x251454u);
    ctx->pc = 0x251450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25144Cu;
    // 0x251450: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E610u, 0x25144Cu, 0x251454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251454u;
label_251454:
    // 0x251454: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x251454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x251458: 0x461aa002  mul.s       $f0, $f20, $f26
    ctx->pc = 0x251458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    // 0x25145c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x251460: 0x461ba842  mul.s       $f1, $f21, $f27
    ctx->pc = 0x251460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[27]);
    // 0x251464: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x251464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x251468: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x251468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x25146c: 0x4601c041  sub.s       $f1, $f24, $f1
    ctx->pc = 0x25146cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x251470: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x251474: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x251474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x251478: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x251478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25147c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25147cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x251480: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x251480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x251484: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x251484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_251488:
    // 0x251488: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x251488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x25148c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25148cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x251490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x251494: 0x2a220019  slti        $v0, $s1, 0x19
    ctx->pc = 0x251494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x251498: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x251498u;
    {
        const bool branch_taken_0x251498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251498u;
        // 0x25149c: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251498) {
            ctx->pc = 0x2513B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2513b0;
        }
    }
    ctx->pc = 0x2514A0u;
    // 0x2514a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2514a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514a4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2514a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2514a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514ac: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x2514ACu;
    SET_GPR_U32(ctx, 31, 0x2514B4u);
    ctx->pc = 0x2514B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514ACu;
    // 0x2514b0: 0x26d099f0  addiu       $s0, $s6, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x2514ACu, 0x2514B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514B4u;
label_2514b4:
    // 0x2514b4: 0xc7818294  lwc1        $f1, -0x7D6C($gp)
    ctx->pc = 0x2514b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2514b8: 0x26e45c60  addiu       $a0, $s7, 0x5C60
    ctx->pc = 0x2514b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 23648));
    // 0x2514bc: 0xc780a1fc  lwc1        $f0, -0x5E04($gp)
    ctx->pc = 0x2514bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2514c0: 0xc6c399f0  lwc1        $f3, -0x6610($s6)
    ctx->pc = 0x2514c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294941168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2514c4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2514c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2514c8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2514c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2514cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2514ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2514d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2514d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2514d4: 0xc7828298  lwc1        $f2, -0x7D68($gp)
    ctx->pc = 0x2514d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2514d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2514d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2514dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2514dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2514e0: 0x461718c0  add.s       $f3, $f3, $f23
    ctx->pc = 0x2514e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[23]);
    // 0x2514e4: 0xc785a200  lwc1        $f5, -0x5E00($gp)
    ctx->pc = 0x2514e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2514e8: 0x0  nop
    ctx->pc = 0x2514e8u;
    // NOP
    // 0x2514ec: 0x0  nop
    ctx->pc = 0x2514ecu;
    // NOP
    // 0x2514f0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2514f0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2514f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2514f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2514f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2514f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2514fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2514fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251500: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x251500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251504: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x251504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x251508: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x251508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x25150c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x25150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x251510: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x251510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251514: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x251514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251518: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x251518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25151c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x251520: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x251520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x251524: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x251524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x251528: 0x46056302  mul.s       $f12, $f12, $f5
    ctx->pc = 0x251528u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x25152c: 0x461a6302  mul.s       $f12, $f12, $f26
    ctx->pc = 0x25152cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[26]);
    // 0x251530: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x251530u;
    SET_GPR_U32(ctx, 31, 0x251538u);
    ctx->pc = 0x251534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251530u;
    // 0x251534: 0x460c1b00  add.s       $f12, $f3, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x251530u, 0x251538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251538u;
label_251538:
    // 0x251538: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x251538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25153c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x25153cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x251540: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x251540u;
    SET_GPR_U32(ctx, 31, 0x251548u);
    ctx->pc = 0x251544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251540u;
    // 0x251544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x251540u, 0x251548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251548u;
label_251548:
    // 0x251548: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x251548u;
    SET_GPR_U32(ctx, 31, 0x251550u);
    ctx->pc = 0x25154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251548u;
    // 0x25154c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x251548u, 0x251550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251550u;
label_251550:
    // 0x251550: 0xc781a200  lwc1        $f1, -0x5E00($gp)
    ctx->pc = 0x251550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251554: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x251554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x251558: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x251558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25155c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x25155cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x251560: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x251560u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x251564: 0x46186300  add.s       $f12, $f12, $f24
    ctx->pc = 0x251564u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[24]);
    // 0x251568: 0x461ba502  mul.s       $f20, $f20, $f27
    ctx->pc = 0x251568u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
    // 0x25156c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x25156Cu;
    SET_GPR_U32(ctx, 31, 0x251574u);
    ctx->pc = 0x251570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25156Cu;
    // 0x251570: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x25156Cu, 0x251574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251574u;
label_251574:
    // 0x251574: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x251574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x251578: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x251578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x25157c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x25157Cu;
    SET_GPR_U32(ctx, 31, 0x251584u);
    ctx->pc = 0x251580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25157Cu;
    // 0x251580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x25157Cu, 0x251584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251584u;
label_251584:
    // 0x251584: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x251584u;
    SET_GPR_U32(ctx, 31, 0x25158Cu);
    ctx->pc = 0x251588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251584u;
    // 0x251588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x251584u, 0x25158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25158Cu;
label_25158c:
    // 0x25158c: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x251590: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x251590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x251594: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x251594u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x251598: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x251598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25159c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x25159Cu;
    SET_GPR_U32(ctx, 31, 0x2515A4u);
    ctx->pc = 0x2515A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25159Cu;
    // 0x2515a0: 0x34a57f80  ori         $a1, $a1, 0x7F80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x25159Cu, 0x2515A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515A4u;
label_2515a4:
    // 0x2515a4: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x2515a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2515a8: 0xdfb702d0  ld          $s7, 0x2D0($sp)
    ctx->pc = 0x2515a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2515ac: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x2515acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2515b0: 0xdfb502b0  ld          $s5, 0x2B0($sp)
    ctx->pc = 0x2515b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2515b4: 0xdfb402a0  ld          $s4, 0x2A0($sp)
    ctx->pc = 0x2515b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2515b8: 0xdfb30290  ld          $s3, 0x290($sp)
    ctx->pc = 0x2515b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2515bc: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x2515bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2515c0: 0xdfb10270  ld          $s1, 0x270($sp)
    ctx->pc = 0x2515c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2515c4: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x2515c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2515c8: 0xc7bf0348  lwc1        $f31, 0x348($sp)
    ctx->pc = 0x2515c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2515cc: 0xc7be0340  lwc1        $f30, 0x340($sp)
    ctx->pc = 0x2515ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2515d0: 0xc7bd0338  lwc1        $f29, 0x338($sp)
    ctx->pc = 0x2515d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2515d4: 0xc7bc0330  lwc1        $f28, 0x330($sp)
    ctx->pc = 0x2515d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2515d8: 0xc7bb0328  lwc1        $f27, 0x328($sp)
    ctx->pc = 0x2515d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2515dc: 0xc7ba0320  lwc1        $f26, 0x320($sp)
    ctx->pc = 0x2515dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2515e0: 0xc7b90318  lwc1        $f25, 0x318($sp)
    ctx->pc = 0x2515e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2515e4: 0xc7b80310  lwc1        $f24, 0x310($sp)
    ctx->pc = 0x2515e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2515e8: 0xc7b70308  lwc1        $f23, 0x308($sp)
    ctx->pc = 0x2515e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2515ec: 0xc7b60300  lwc1        $f22, 0x300($sp)
    ctx->pc = 0x2515ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2515f0: 0xc7b502f8  lwc1        $f21, 0x2F8($sp)
    ctx->pc = 0x2515f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2515f4: 0xc7b402f0  lwc1        $f20, 0x2F0($sp)
    ctx->pc = 0x2515f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2515f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2515F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2515FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515F8u;
        // 0x2515fc: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2515F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251600u;
}
