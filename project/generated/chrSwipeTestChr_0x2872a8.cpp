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

// Function: chrSwipeTestChr
// Address: 0x2872a8 - 0x287cbc
void chrSwipeTestChr_0x2872a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrSwipeTestChr_0x2872a8");
#endif

    switch (ctx->pc) {
        case 0x287320u: goto label_287320;
        case 0x28741cu: goto label_28741c;
        case 0x28742cu: goto label_28742c;
        case 0x287440u: goto label_287440;
        case 0x287450u: goto label_287450;
        case 0x287508u: goto label_287508;
        case 0x287558u: goto label_287558;
        case 0x287598u: goto label_287598;
        case 0x287654u: goto label_287654;
        case 0x287680u: goto label_287680;
        case 0x2878a0u: goto label_2878a0;
        case 0x2878bcu: goto label_2878bc;
        case 0x2878d0u: goto label_2878d0;
        case 0x287904u: goto label_287904;
        case 0x28793cu: goto label_28793c;
        case 0x28796cu: goto label_28796c;
        case 0x287ba4u: goto label_287ba4;
        case 0x287bb0u: goto label_287bb0;
        case 0x287bf8u: goto label_287bf8;
        case 0x287c60u: goto label_287c60;
        case 0x287c6cu: goto label_287c6c;
        default: break;
    }

    ctx->pc = 0x2872a8u;

    // 0x2872a8: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2872a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2872ac: 0xffb70210  sd          $s7, 0x210($sp)
    ctx->pc = 0x2872acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 23));
    // 0x2872b0: 0xffb60200  sd          $s6, 0x200($sp)
    ctx->pc = 0x2872b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 22));
    // 0x2872b4: 0xffb501f0  sd          $s5, 0x1F0($sp)
    ctx->pc = 0x2872b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 21));
    // 0x2872b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2872b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872bc: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x2872bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
    // 0x2872c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2872c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c4: 0xffb101b0  sd          $s1, 0x1B0($sp)
    ctx->pc = 0x2872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 17));
    // 0x2872c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2872c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872cc: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x2872ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x2872d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2872d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872d4: 0xe7b80260  swc1        $f24, 0x260($sp)
    ctx->pc = 0x2872d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2872d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2872d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872dc: 0xe7b70258  swc1        $f23, 0x258($sp)
    ctx->pc = 0x2872dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2872e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2872e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872e4: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x2872e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x2872e8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2872e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2872ec: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x2872ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x2872f0: 0xffb301d0  sd          $s3, 0x1D0($sp)
    ctx->pc = 0x2872f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 19));
    // 0x2872f4: 0xe7b60250  swc1        $f22, 0x250($sp)
    ctx->pc = 0x2872f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2872f8: 0xe7b50248  swc1        $f21, 0x248($sp)
    ctx->pc = 0x2872f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2872fc: 0xe7b40240  swc1        $f20, 0x240($sp)
    ctx->pc = 0x2872fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x287300: 0xffbe0220  sd          $fp, 0x220($sp)
    ctx->pc = 0x287300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 30));
    // 0x287304: 0x8ede0020  lw          $fp, 0x20($s6)
    ctx->pc = 0x287304u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x287308: 0x8ed30160  lw          $s3, 0x160($s6)
    ctx->pc = 0x287308u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x28730c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x28730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x287310: 0xafa80180  sw          $t0, 0x180($sp)
    ctx->pc = 0x287310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 8));
    // 0x287314: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x287314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x287318: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x287318u;
    SET_GPR_U32(ctx, 31, 0x287320u);
    ctx->pc = 0x28731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287318u;
    // 0x28731c: 0xafa90184  sw          $t1, 0x184($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x287318u, 0x287320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287320u;
label_287320:
    // 0x287320: 0xc6cf004c  lwc1        $f15, 0x4C($s6)
    ctx->pc = 0x287320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x287324: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x287324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x287328: 0xc78089bc  lwc1        $f0, -0x7644($gp)
    ctx->pc = 0x287328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28732c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x28732cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x287330: 0xc6100000  lwc1        $f16, 0x0($s0)
    ctx->pc = 0x287330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x287334: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287338: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x287338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28733c: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x28733cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x287340: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x287340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x287344: 0xc62b0004  lwc1        $f11, 0x4($s1)
    ctx->pc = 0x287344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x287348: 0x46068101  sub.s       $f4, $f16, $f6
    ctx->pc = 0x287348u;
    ctx->f[4] = FPU_SUB_S(ctx->f[16], ctx->f[6]);
    // 0x28734c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x287350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287354: 0x460b7001  sub.s       $f0, $f14, $f11
    ctx->pc = 0x287354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[11]);
    // 0x287358: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x287358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28735c: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x28735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x287360: 0x0  nop
    ctx->pc = 0x287360u;
    // NOP
    // 0x287364: 0x0  nop
    ctx->pc = 0x287364u;
    // NOP
    // 0x287368: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x287368u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x28736c: 0xc6c80034  lwc1        $f8, 0x34($s6)
    ctx->pc = 0x28736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x287370: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x287370u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x287374: 0xc6c90038  lwc1        $f9, 0x38($s6)
    ctx->pc = 0x287374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x287378: 0x460a68c1  sub.s       $f3, $f13, $f10
    ctx->pc = 0x287378u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x28737c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28737cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287380: 0xc6c70030  lwc1        $f7, 0x30($s6)
    ctx->pc = 0x287380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x287384: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x287384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287388: 0x46087381  sub.s       $f14, $f14, $f8
    ctx->pc = 0x287388u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[8]);
    // 0x28738c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x28738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287390: 0x46096b41  sub.s       $f13, $f13, $f9
    ctx->pc = 0x287390u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[9]);
    // 0x287394: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x287394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287398: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x287398u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x28739c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28739cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2873a0: 0x24478870  addiu       $a3, $v0, -0x7790
    ctx->pc = 0x2873a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x2873a4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2873a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2873a8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2873a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2873ac: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2873acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A8878u));
    // 0x2873b0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2873b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2873b4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2873b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2873b8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x2873b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x2873bc: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x2873bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x2873c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2873c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2873c4: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2873c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2873c8: 0xe7ae0074  swc1        $f14, 0x74($sp)
    ctx->pc = 0x2873c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2873cc: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x2873ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2873d0: 0xe7ad0078  swc1        $f13, 0x78($sp)
    ctx->pc = 0x2873d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2873d4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2873d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2873d8: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x2873d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2873dc: 0x46085ac1  sub.s       $f11, $f11, $f8
    ctx->pc = 0x2873dcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x2873e0: 0xe7a50088  swc1        $f5, 0x88($sp)
    ctx->pc = 0x2873e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2873e4: 0x46095281  sub.s       $f10, $f10, $f9
    ctx->pc = 0x2873e4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
    // 0x2873e8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2873e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2873ec: 0x46078401  sub.s       $f16, $f16, $f7
    ctx->pc = 0x2873ecu;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[7]);
    // 0x2873f0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2873f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2873f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2873f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2873f8: 0x46007bc7  neg.s       $f15, $f15
    ctx->pc = 0x2873f8u;
    ctx->f[15] = FPU_NEG_S(ctx->f[15]);
    // 0x2873fc: 0xc457fa54  lwc1        $f23, -0x5AC($v0)
    ctx->pc = 0x2873fcu;
    { uint32_t bits = FAST_READ32(0x3AFA54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x287400: 0x46032600  add.s       $f24, $f4, $f3
    ctx->pc = 0x287400u;
    ctx->f[24] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x287404: 0xe7ab0064  swc1        $f11, 0x64($sp)
    ctx->pc = 0x287404u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x287408: 0xe7aa0068  swc1        $f10, 0x68($sp)
    ctx->pc = 0x287408u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28740c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28740cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x287410: 0xe7b00070  swc1        $f16, 0x70($sp)
    ctx->pc = 0x287410u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x287414: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x287414u;
    SET_GPR_U32(ctx, 31, 0x28741Cu);
    ctx->pc = 0x287418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287414u;
    // 0x287418: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x287414u, 0x28741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28741Cu;
label_28741c:
    // 0x28741c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x28741cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x287420: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287424: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x287424u;
    SET_GPR_U32(ctx, 31, 0x28742Cu);
    ctx->pc = 0x287428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287424u;
    // 0x287428: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x287424u, 0x28742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28742Cu;
label_28742c:
    // 0x28742c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x287430: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287434: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x287434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x287438: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x287438u;
    SET_GPR_U32(ctx, 31, 0x287440u);
    ctx->pc = 0x28743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287438u;
    // 0x28743c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x287438u, 0x287440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287440u;
label_287440:
    // 0x287440: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x287440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x287444: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287448: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x287448u;
    SET_GPR_U32(ctx, 31, 0x287450u);
    ctx->pc = 0x28744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287448u;
    // 0x28744c: 0xafa50190  sw          $a1, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x287448u, 0x287450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287450u;
label_287450:
    // 0x287450: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x287450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287454: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x287454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x287458: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x287458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28745c: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x28745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x287460: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x287460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287464: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x287464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x287468: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x287468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28746c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x28746cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x287470: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x287470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287474: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x287474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x287478: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x287478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28747c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x28747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287480: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x287480u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x287484: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x287484u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x287488: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x287488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x28748c: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x28748cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x287490: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x287490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x287494: 0x46070902  mul.s       $f4, $f1, $f7
    ctx->pc = 0x287494u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x287498: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x287498u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x28749c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x28749cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2874a0: 0xe7a700a0  swc1        $f7, 0xA0($sp)
    ctx->pc = 0x2874a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2874a4: 0x46031202  mul.s       $f8, $f2, $f3
    ctx->pc = 0x2874a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2874a8: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x2874a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2874ac: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x2874acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2874b0: 0xe7a600a4  swc1        $f6, 0xA4($sp)
    ctx->pc = 0x2874b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2874b4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2874b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2874b8: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x2874b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x2874bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2874bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2874c0: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2874c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2874c4: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x2874c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2874c8: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x2874c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2874cc: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2874ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2874d0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2874d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2874d4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2874d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2874d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2874d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2874dc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2874dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2874e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2874e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2874e4: 0x0  nop
    ctx->pc = 0x2874e4u;
    // NOP
    // 0x2874e8: 0x0  nop
    ctx->pc = 0x2874e8u;
    // NOP
    // 0x2874ec: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2874ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2874f0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2874f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2874f4: 0x0  nop
    ctx->pc = 0x2874f4u;
    // NOP
    // 0x2874f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2874F8u;
    {
        const bool branch_taken_0x2874f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2874FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874F8u;
        // 0x2874fc: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874f8) {
            ctx->pc = 0x287508u;
            goto label_287508;
        }
    }
    ctx->pc = 0x287500u;
    // 0x287500: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x287500u;
    SET_GPR_U32(ctx, 31, 0x287508u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x287500u, 0x287508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287508u;
label_287508:
    // 0x287508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28750c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28750cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287510: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x287510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287514: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x287514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287518: 0x0  nop
    ctx->pc = 0x287518u;
    // NOP
    // 0x28751c: 0x0  nop
    ctx->pc = 0x28751cu;
    // NOP
    // 0x287520: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x287520u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x287524: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x287524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287528: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x287528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28752c: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x28752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x287530: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x287530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x287534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x287534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287538: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x287538u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28753c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x28753cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x287540: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x287540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x287544: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x287544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x287548: 0x1840017c  blez        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x287548u;
    {
        const bool branch_taken_0x287548 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287548u;
        // 0x28754c: 0xe7a200c4  swc1        $f2, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287548) {
            ctx->pc = 0x287B3Cu;
            goto label_287b3c;
        }
    }
    ctx->pc = 0x287550u;
    // 0x287550: 0x26730bf4  addiu       $s3, $s3, 0xBF4
    ctx->pc = 0x287550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3060));
    // 0x287554: 0x0  nop
    ctx->pc = 0x287554u;
    // NOP
label_287558:
    // 0x287558: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x287558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x28755c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287560: 0x146200bd  bne         $v1, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x287560u;
    {
        const bool branch_taken_0x287560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x287564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287560u;
        // 0x287564: 0xc6610008  lwc1        $f1, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287560) {
            ctx->pc = 0x287858u;
            goto label_287858;
        }
    }
    ctx->pc = 0x287568u;
    // 0x287568: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x287568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28756c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x28756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x287570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287574: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x287574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x287578: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x287578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28757c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x28757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x287580: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x287580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287584: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x287584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x287588: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x287588u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28758c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x28758cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x287590: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x287590u;
    SET_GPR_U32(ctx, 31, 0x287598u);
    ctx->pc = 0x287594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287590u;
    // 0x287594: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x287590u, 0x287598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287598u;
label_287598:
    // 0x287598: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x287598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28759c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2875a0: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x2875a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2875a4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2875a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2875a8: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x2875a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2875ac: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2875acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2875b0: 0x46011941  sub.s       $f5, $f3, $f1
    ctx->pc = 0x2875b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2875b4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2875b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2875b8: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2875b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2875bc: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x2875bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2875c0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x2875c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2875c4: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x2875c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2875c8: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x2875c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2875cc: 0xe7a400e8  swc1        $f4, 0xE8($sp)
    ctx->pc = 0x2875ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2875d0: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2875d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2875d4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2875d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2875d8: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x2875d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2875dc: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x2875dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2875e0: 0x4607c000  add.s       $f0, $f24, $f7
    ctx->pc = 0x2875e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[7]);
    // 0x2875e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2875e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2875e8: 0x0  nop
    ctx->pc = 0x2875e8u;
    // NOP
    // 0x2875ec: 0x4501014e  bc1t        . + 4 + (0x14E << 2)
    ctx->pc = 0x2875ECu;
    {
        const bool branch_taken_0x2875ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2875F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875ECu;
        // 0x2875f0: 0x8fa70188  lw          $a3, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875ec) {
            ctx->pc = 0x287B28u;
            goto label_287b28;
        }
    }
    ctx->pc = 0x2875F4u;
    // 0x2875f4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2875f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2875f8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x2875f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2875fc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2875fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x287600: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x287600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287604: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x287604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x287608: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x287608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28760c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28760cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287610: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x287614: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x287614u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287618: 0x46141836  c.le.s      $f3, $f20
    ctx->pc = 0x287618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28761c: 0x0  nop
    ctx->pc = 0x28761cu;
    // NOP
    // 0x287620: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x287620u;
    {
        const bool branch_taken_0x287620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287620) {
            ctx->pc = 0x287624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287620u;
            // 0x287624: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x287628u;
            goto label_287628;
        }
    }
    ctx->pc = 0x287628u;
label_287628:
    // 0x287628: 0x4614a542  mul.s       $f21, $f20, $f20
    ctx->pc = 0x287628u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x28762c: 0x46153834  c.lt.s      $f7, $f21
    ctx->pc = 0x28762cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287630: 0x0  nop
    ctx->pc = 0x287630u;
    // NOP
    // 0x287634: 0x4501013b  bc1t        . + 4 + (0x13B << 2)
    ctx->pc = 0x287634u;
    {
        const bool branch_taken_0x287634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287634u;
        // 0x287638: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287634) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x28763Cu;
    // 0x28763c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x28763cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x287640: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x287640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x287644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287648: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x287648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28764c: 0xc082b74  jal         func_20ADD0
    ctx->pc = 0x28764Cu;
    SET_GPR_U32(ctx, 31, 0x287654u);
    ctx->pc = 0x287650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28764Cu;
    // 0x287650: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADD0u, 0x28764Cu, 0x287654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287654u;
label_287654:
    // 0x287654: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287658: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x287658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28765c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28765cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287660: 0x0  nop
    ctx->pc = 0x287660u;
    // NOP
    // 0x287664: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x287664u;
    {
        const bool branch_taken_0x287664 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287664u;
        // 0x287668: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287664) {
            ctx->pc = 0x287698u;
            goto label_287698;
        }
    }
    ctx->pc = 0x28766Cu;
    // 0x28766c: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x28766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x287670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287674: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x287674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287678: 0xc082b74  jal         func_20ADD0
    ctx->pc = 0x287678u;
    SET_GPR_U32(ctx, 31, 0x287680u);
    ctx->pc = 0x28767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287678u;
    // 0x28767c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADD0u, 0x287678u, 0x287680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287680u;
label_287680:
    // 0x287680: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287684: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x287684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287688: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x287688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28768c: 0x0  nop
    ctx->pc = 0x28768cu;
    // NOP
    // 0x287690: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x287690u;
    {
        const bool branch_taken_0x287690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287690u;
        // 0x287694: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287690) {
            ctx->pc = 0x2876B0u;
            goto label_2876b0;
        }
    }
    ctx->pc = 0x287698u;
label_287698:
    // 0x287698: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x287698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28769c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x28769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2876a0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2876a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2876a4: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2876a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2876a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2876A8u;
    {
        const bool branch_taken_0x2876a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876A8u;
        // 0x2876ac: 0xe7a200f8  swc1        $f2, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876a8) {
            ctx->pc = 0x2876ECu;
            goto label_2876ec;
        }
    }
    ctx->pc = 0x2876B0u;
label_2876b0:
    // 0x2876b0: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x2876b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2876b4: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x2876b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2876b8: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x2876b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2876bc: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2876bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2876c0: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x2876c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x2876c4: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2876c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2876c8: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x2876c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x2876cc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2876ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2876d0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2876d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2876d4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2876d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2876d8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2876d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2876dc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2876dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2876e0: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2876e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2876e4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2876e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2876e8: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2876e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2876ec:
    // 0x2876ec: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x2876ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2876f0: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x2876f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2876f4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2876f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2876f8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2876f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2876fc: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2876fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287700: 0x46070a81  sub.s       $f10, $f1, $f7
    ctx->pc = 0x287700u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x287704: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x287704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287708: 0x46081241  sub.s       $f9, $f2, $f8
    ctx->pc = 0x287708u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x28770c: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x28770cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x287710: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x287710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x287714: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x287714u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x287718: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x287718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28771c: 0xc7b000f0  lwc1        $f16, 0xF0($sp)
    ctx->pc = 0x28771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x287720: 0x46060301  sub.s       $f12, $f0, $f6
    ctx->pc = 0x287720u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x287724: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x287724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287728: 0xc7b100f4  lwc1        $f17, 0xF4($sp)
    ctx->pc = 0x287728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28772c: 0x46068341  sub.s       $f13, $f16, $f6
    ctx->pc = 0x28772cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[16], ctx->f[6]);
    // 0x287730: 0xc7b200f8  lwc1        $f18, 0xF8($sp)
    ctx->pc = 0x287730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x287734: 0x460a1882  mul.s       $f2, $f3, $f10
    ctx->pc = 0x287734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x287738: 0x46092002  mul.s       $f0, $f4, $f9
    ctx->pc = 0x287738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x28773c: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x28773cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x287740: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x287740u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x287744: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x287744u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x287748: 0x46078b81  sub.s       $f14, $f17, $f7
    ctx->pc = 0x287748u;
    ctx->f[14] = FPU_SUB_S(ctx->f[17], ctx->f[7]);
    // 0x28774c: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x28774cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x287750: 0x460892c1  sub.s       $f11, $f18, $f8
    ctx->pc = 0x287750u;
    ctx->f[11] = FPU_SUB_S(ctx->f[18], ctx->f[8]);
    // 0x287754: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x287754u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x287758: 0x460203c1  sub.s       $f15, $f0, $f2
    ctx->pc = 0x287758u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28775c: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x28775cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x287760: 0x460d1982  mul.s       $f6, $f3, $f13
    ctx->pc = 0x287760u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x287764: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x287764u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x287768: 0x460c19c2  mul.s       $f7, $f3, $f12
    ctx->pc = 0x287768u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x28776c: 0xe7ab00a8  swc1        $f11, 0xA8($sp)
    ctx->pc = 0x28776cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x287770: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x287770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x287774: 0xe7aa00b4  swc1        $f10, 0xB4($sp)
    ctx->pc = 0x287774u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x287778: 0x460b2002  mul.s       $f0, $f4, $f11
    ctx->pc = 0x287778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x28777c: 0xe7a900b8  swc1        $f9, 0xB8($sp)
    ctx->pc = 0x28777cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x287780: 0x460e18c2  mul.s       $f3, $f3, $f14
    ctx->pc = 0x287780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x287784: 0xe7af0110  swc1        $f15, 0x110($sp)
    ctx->pc = 0x287784u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x287788: 0x460b2882  mul.s       $f2, $f5, $f11
    ctx->pc = 0x287788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x28778c: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x28778cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x287790: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x287790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x287794: 0x460e2842  mul.s       $f1, $f5, $f14
    ctx->pc = 0x287794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x287798: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x287798u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x28779c: 0xe7a70114  swc1        $f7, 0x114($sp)
    ctx->pc = 0x28779cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2877a0: 0x460d20c2  mul.s       $f3, $f4, $f13
    ctx->pc = 0x2877a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2877a4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2877a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2877a8: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x2877a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2877ac: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x2877acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x2877b0: 0xe7a60124  swc1        $f6, 0x124($sp)
    ctx->pc = 0x2877b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2877b4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2877b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2877b8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x2877b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2877bc: 0x46042a01  sub.s       $f8, $f5, $f4
    ctx->pc = 0x2877bcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2877c0: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x2877c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2877c4: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x2877c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2877c8: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x2877c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2877cc: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x2877ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2877d0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2877d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2877d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2877d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2877d8: 0x46130034  c.lt.s      $f0, $f19
    ctx->pc = 0x2877d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2877dc: 0x0  nop
    ctx->pc = 0x2877dcu;
    // NOP
    // 0x2877e0: 0x450100d0  bc1t        . + 4 + (0xD0 << 2)
    ctx->pc = 0x2877E0u;
    {
        const bool branch_taken_0x2877e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2877E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877E0u;
        // 0x2877e4: 0xe7a80118  swc1        $f8, 0x118($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877e0) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x2877E8u;
    // 0x2877e8: 0x46096802  mul.s       $f0, $f13, $f9
    ctx->pc = 0x2877e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x2877ec: 0x460c5882  mul.s       $f2, $f11, $f12
    ctx->pc = 0x2877ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x2877f0: 0x46097042  mul.s       $f1, $f14, $f9
    ctx->pc = 0x2877f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x2877f4: 0x460a5902  mul.s       $f4, $f11, $f10
    ctx->pc = 0x2877f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x2877f8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2877f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2877fc: 0x460a68c2  mul.s       $f3, $f13, $f10
    ctx->pc = 0x2877fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x287800: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x287800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x287804: 0x460c7142  mul.s       $f5, $f14, $f12
    ctx->pc = 0x287804u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x287808: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x287808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x28780c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x28780cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x287810: 0x46017802  mul.s       $f0, $f15, $f1
    ctx->pc = 0x287810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x287814: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x287814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x287818: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x287818u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x28781c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28781cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287820: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x287820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x287824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287828: 0x46130034  c.lt.s      $f0, $f19
    ctx->pc = 0x287828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28782c: 0x0  nop
    ctx->pc = 0x28782cu;
    // NOP
    // 0x287830: 0x450100bc  bc1t        . + 4 + (0xBC << 2)
    ctx->pc = 0x287830u;
    {
        const bool branch_taken_0x287830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287830u;
        // 0x287834: 0xe7a30128  swc1        $f3, 0x128($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287830) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x287838u;
    // 0x287838: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x287838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28783c: 0x0  nop
    ctx->pc = 0x28783cu;
    // NOP
    // 0x287840: 0x450000b8  bc1f        . + 4 + (0xB8 << 2)
    ctx->pc = 0x287840u;
    {
        const bool branch_taken_0x287840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287840u;
        // 0x287844: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287840) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x287848u;
    // 0x287848: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x287848u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x28784c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x28784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287850: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x287850u;
    {
        const bool branch_taken_0x287850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287850u;
        // 0x287854: 0xc7a200d8  lwc1        $f2, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287850) {
            ctx->pc = 0x287AFCu;
            goto label_287afc;
        }
    }
    ctx->pc = 0x287858u;
label_287858:
    // 0x287858: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x287858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28785c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x28785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x287860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287864: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x287864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x287868: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x287868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28786c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x28786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x287870: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x287870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287874: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x287874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x287878: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x287878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28787c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x28787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x287880: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x287880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287884: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x287884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x287888: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x287888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28788c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x28788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x287890: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x287894: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x287894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x287898: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x287898u;
    SET_GPR_U32(ctx, 31, 0x2878A0u);
    ctx->pc = 0x28789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287898u;
    // 0x28789c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x287898u, 0x2878A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878A0u;
label_2878a0:
    // 0x2878a0: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x2878a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2878a4: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2878a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2878a8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2878a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2878ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2878acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878b0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2878b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2878b4: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x2878B4u;
    SET_GPR_U32(ctx, 31, 0x2878BCu);
    ctx->pc = 0x2878B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878B4u;
    // 0x2878b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x2878B4u, 0x2878BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878BCu;
label_2878bc:
    // 0x2878bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2878bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2878c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2878c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2878c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878c8: 0xc082b74  jal         func_20ADD0
    ctx->pc = 0x2878C8u;
    SET_GPR_U32(ctx, 31, 0x2878D0u);
    ctx->pc = 0x2878CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878C8u;
    // 0x2878cc: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADD0u, 0x2878C8u, 0x2878D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878D0u;
label_2878d0:
    // 0x2878d0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2878d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2878d4: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x2878d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x2878d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2878d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2878dc: 0x0  nop
    ctx->pc = 0x2878dcu;
    // NOP
    // 0x2878e0: 0x45010091  bc1t        . + 4 + (0x91 << 2)
    ctx->pc = 0x2878E0u;
    {
        const bool branch_taken_0x2878e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2878E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878E0u;
        // 0x2878e4: 0x8fa70188  lw          $a3, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878e0) {
            ctx->pc = 0x287B28u;
            goto label_287b28;
        }
    }
    ctx->pc = 0x2878E8u;
    // 0x2878e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2878e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2878ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2878f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878f4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2878f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2878f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2878f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878fc: 0xc082bc8  jal         func_20AF20
    ctx->pc = 0x2878FCu;
    SET_GPR_U32(ctx, 31, 0x287904u);
    ctx->pc = 0x287900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878FCu;
    // 0x287900: 0x27a90140  addiu       $t1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF20u, 0x2878FCu, 0x287904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287904u;
label_287904:
    // 0x287904: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x287904u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287908: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x287908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28790c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28790cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287910: 0x0  nop
    ctx->pc = 0x287910u;
    // NOP
    // 0x287914: 0x45010083  bc1t        . + 4 + (0x83 << 2)
    ctx->pc = 0x287914u;
    {
        const bool branch_taken_0x287914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287914u;
        // 0x287918: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287914) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x28791Cu;
    // 0x28791c: 0x27b10150  addiu       $s1, $sp, 0x150
    ctx->pc = 0x28791cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x287920: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x287924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28792c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28792cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287934: 0xc082c6a  jal         func_20B1A8
    ctx->pc = 0x287934u;
    SET_GPR_U32(ctx, 31, 0x28793Cu);
    ctx->pc = 0x287938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287934u;
    // 0x287938: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1A8u, 0x287934u, 0x28793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28793Cu;
label_28793c:
    // 0x28793c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x28793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287940: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x287940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287944: 0x0  nop
    ctx->pc = 0x287944u;
    // NOP
    // 0x287948: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x287948u;
    {
        const bool branch_taken_0x287948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287948u;
        // 0x28794c: 0xc7a00150  lwc1        $f0, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287948) {
            ctx->pc = 0x287980u;
            goto label_287980;
        }
    }
    ctx->pc = 0x287950u;
    // 0x287950: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x287950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x287954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28795c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x28795cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287960: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x287960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287964: 0xc082c6a  jal         func_20B1A8
    ctx->pc = 0x287964u;
    SET_GPR_U32(ctx, 31, 0x28796Cu);
    ctx->pc = 0x287968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287964u;
    // 0x287968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1A8u, 0x287964u, 0x28796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28796Cu;
label_28796c:
    // 0x28796c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x28796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287970: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x287970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287974: 0x0  nop
    ctx->pc = 0x287974u;
    // NOP
    // 0x287978: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x287978u;
    {
        const bool branch_taken_0x287978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287978u;
        // 0x28797c: 0xc7a00150  lwc1        $f0, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287978) {
            ctx->pc = 0x287994u;
            goto label_287994;
        }
    }
    ctx->pc = 0x287980u;
label_287980:
    // 0x287980: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x287980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287984: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x287984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287988: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x287988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x28798c: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x28798cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x287990: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x287990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_287994:
    // 0x287994: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x287994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x287998: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x287998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28799c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x28799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2879a0: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2879a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2879a4: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2879a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2879a8: 0x46070a81  sub.s       $f10, $f1, $f7
    ctx->pc = 0x2879a8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2879ac: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2879acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2879b0: 0x46081241  sub.s       $f9, $f2, $f8
    ctx->pc = 0x2879b0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2879b4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2879b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2879b8: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x2879b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2879bc: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x2879bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2879c0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2879c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2879c4: 0xc7b00140  lwc1        $f16, 0x140($sp)
    ctx->pc = 0x2879c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2879c8: 0x46060301  sub.s       $f12, $f0, $f6
    ctx->pc = 0x2879c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2879cc: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x2879ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2879d0: 0xc7b10144  lwc1        $f17, 0x144($sp)
    ctx->pc = 0x2879d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2879d4: 0x46068341  sub.s       $f13, $f16, $f6
    ctx->pc = 0x2879d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[16], ctx->f[6]);
    // 0x2879d8: 0xc7b20148  lwc1        $f18, 0x148($sp)
    ctx->pc = 0x2879d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2879dc: 0x460a1882  mul.s       $f2, $f3, $f10
    ctx->pc = 0x2879dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2879e0: 0x46092002  mul.s       $f0, $f4, $f9
    ctx->pc = 0x2879e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x2879e4: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x2879e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2879e8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2879e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x2879ec: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x2879ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2879f0: 0x46078b81  sub.s       $f14, $f17, $f7
    ctx->pc = 0x2879f0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[17], ctx->f[7]);
    // 0x2879f4: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2879f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2879f8: 0x460892c1  sub.s       $f11, $f18, $f8
    ctx->pc = 0x2879f8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[18], ctx->f[8]);
    // 0x2879fc: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x2879fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x287a00: 0x460203c1  sub.s       $f15, $f0, $f2
    ctx->pc = 0x287a00u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x287a04: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x287a04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x287a08: 0x460d1982  mul.s       $f6, $f3, $f13
    ctx->pc = 0x287a08u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x287a0c: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x287a0cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x287a10: 0x460c19c2  mul.s       $f7, $f3, $f12
    ctx->pc = 0x287a10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x287a14: 0xe7ab00a8  swc1        $f11, 0xA8($sp)
    ctx->pc = 0x287a14u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x287a18: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x287a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x287a1c: 0xe7aa00b4  swc1        $f10, 0xB4($sp)
    ctx->pc = 0x287a1cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x287a20: 0x460b2002  mul.s       $f0, $f4, $f11
    ctx->pc = 0x287a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x287a24: 0xe7a900b8  swc1        $f9, 0xB8($sp)
    ctx->pc = 0x287a24u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x287a28: 0x460e18c2  mul.s       $f3, $f3, $f14
    ctx->pc = 0x287a28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x287a2c: 0xe7af0160  swc1        $f15, 0x160($sp)
    ctx->pc = 0x287a2cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x287a30: 0x460b2882  mul.s       $f2, $f5, $f11
    ctx->pc = 0x287a30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x287a34: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x287a34u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x287a38: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x287a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x287a3c: 0x460e2842  mul.s       $f1, $f5, $f14
    ctx->pc = 0x287a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x287a40: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x287a40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x287a44: 0xe7a70164  swc1        $f7, 0x164($sp)
    ctx->pc = 0x287a44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x287a48: 0x460d20c2  mul.s       $f3, $f4, $f13
    ctx->pc = 0x287a48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x287a4c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x287a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x287a50: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x287a50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x287a54: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x287a54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x287a58: 0xe7a60174  swc1        $f6, 0x174($sp)
    ctx->pc = 0x287a58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x287a5c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x287a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x287a60: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x287a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x287a64: 0x46042a01  sub.s       $f8, $f5, $f4
    ctx->pc = 0x287a64u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x287a68: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x287a68u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x287a6c: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x287a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x287a70: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x287a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x287a74: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x287a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x287a78: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x287a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x287a7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287a80: 0x46130034  c.lt.s      $f0, $f19
    ctx->pc = 0x287a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287a84: 0x0  nop
    ctx->pc = 0x287a84u;
    // NOP
    // 0x287a88: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x287A88u;
    {
        const bool branch_taken_0x287a88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A88u;
        // 0x287a8c: 0xe7a80168  swc1        $f8, 0x168($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a88) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x287A90u;
    // 0x287a90: 0x46096802  mul.s       $f0, $f13, $f9
    ctx->pc = 0x287a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x287a94: 0x460c5882  mul.s       $f2, $f11, $f12
    ctx->pc = 0x287a94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x287a98: 0x46097042  mul.s       $f1, $f14, $f9
    ctx->pc = 0x287a98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x287a9c: 0x460a5902  mul.s       $f4, $f11, $f10
    ctx->pc = 0x287a9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x287aa0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x287aa0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x287aa4: 0x460a68c2  mul.s       $f3, $f13, $f10
    ctx->pc = 0x287aa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x287aa8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x287aa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x287aac: 0x460c7142  mul.s       $f5, $f14, $f12
    ctx->pc = 0x287aacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x287ab0: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x287ab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x287ab4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x287ab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x287ab8: 0x46017802  mul.s       $f0, $f15, $f1
    ctx->pc = 0x287ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x287abc: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x287abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x287ac0: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x287ac0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x287ac4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x287ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287ac8: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x287ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x287acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287ad0: 0x46130034  c.lt.s      $f0, $f19
    ctx->pc = 0x287ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287ad4: 0x0  nop
    ctx->pc = 0x287ad4u;
    // NOP
    // 0x287ad8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x287AD8u;
    {
        const bool branch_taken_0x287ad8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AD8u;
        // 0x287adc: 0xe7a30178  swc1        $f3, 0x178($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ad8) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x287AE0u;
    // 0x287ae0: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x287ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287ae4: 0x0  nop
    ctx->pc = 0x287ae4u;
    // NOP
    // 0x287ae8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x287AE8u;
    {
        const bool branch_taken_0x287ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AE8u;
        // 0x287aec: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ae8) {
            ctx->pc = 0x287B24u;
            goto label_287b24;
        }
    }
    ctx->pc = 0x287AF0u;
    // 0x287af0: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x287af0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x287af4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x287af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287af8: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x287af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_287afc:
    // 0x287afc: 0x46008001  sub.s       $f0, $f16, $f0
    ctx->pc = 0x287afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x287b00: 0x46018841  sub.s       $f1, $f17, $f1
    ctx->pc = 0x287b00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[17], ctx->f[1]);
    // 0x287b04: 0xe7b00000  swc1        $f16, 0x0($sp)
    ctx->pc = 0x287b04u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x287b08: 0x46029081  sub.s       $f2, $f18, $f2
    ctx->pc = 0x287b08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x287b0c: 0xe7b10004  swc1        $f17, 0x4($sp)
    ctx->pc = 0x287b0cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287b10: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x287b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x287b14: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x287b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x287b18: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x287b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x287b1c: 0xe7b20008  swc1        $f18, 0x8($sp)
    ctx->pc = 0x287b1cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x287b20: 0xaf94b240  sw          $s4, -0x4DC0($gp)
    ctx->pc = 0x287b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947392), GPR_U32(ctx, 20));
label_287b24:
    // 0x287b24: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x287b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_287b28:
    // 0x287b28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x287b28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x287b2c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x287b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x287b30: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x287b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287b34: 0x1440fe88  bnez        $v0, . + 4 + (-0x178 << 2)
    ctx->pc = 0x287B34u;
    {
        const bool branch_taken_0x287b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B34u;
        // 0x287b38: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b34) {
            ctx->pc = 0x287558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287558;
        }
    }
    ctx->pc = 0x287B3Cu;
label_287b3c:
    // 0x287b3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x287b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x287b40: 0xc440fa54  lwc1        $f0, -0x5AC($v0)
    ctx->pc = 0x287b40u;
    { uint32_t bits = FAST_READ32(0x3AFA54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b44: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x287b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287b48: 0x0  nop
    ctx->pc = 0x287b48u;
    // NOP
    // 0x287b4c: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x287B4Cu;
    {
        const bool branch_taken_0x287b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B4Cu;
        // 0x287b50: 0x8fa30180  lw          $v1, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b4c) {
            ctx->pc = 0x287C74u;
            goto label_287c74;
        }
    }
    ctx->pc = 0x287B54u;
    // 0x287b54: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x287B54u;
    {
        const bool branch_taken_0x287b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B54u;
        // 0x287b58: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b54) {
            ctx->pc = 0x287BB0u;
            goto label_287bb0;
        }
    }
    ctx->pc = 0x287B5Cu;
    // 0x287b5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b60: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x287b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287b64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x287b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287b68: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x287b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287b6c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x287b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x287b70: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x287b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x287b74: 0xc78089c0  lwc1        $f0, -0x7640($gp)
    ctx->pc = 0x287b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287b78: 0xc6cf004c  lwc1        $f15, 0x4C($s6)
    ctx->pc = 0x287b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x287b7c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x287b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287b84: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x287b84u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x287b88: 0xc6cc0030  lwc1        $f12, 0x30($s6)
    ctx->pc = 0x287b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x287b8c: 0xc6cd0034  lwc1        $f13, 0x34($s6)
    ctx->pc = 0x287b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x287b90: 0x0  nop
    ctx->pc = 0x287b90u;
    // NOP
    // 0x287b94: 0x0  nop
    ctx->pc = 0x287b94u;
    // NOP
    // 0x287b98: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x287b98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x287b9c: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x287B9Cu;
    SET_GPR_U32(ctx, 31, 0x287BA4u);
    ctx->pc = 0x287BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B9Cu;
    // 0x287ba0: 0xc6ce0038  lwc1        $f14, 0x38($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x287B9Cu, 0x287BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BA4u;
label_287ba4:
    // 0x287ba4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x287ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x287ba8: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x287BA8u;
    SET_GPR_U32(ctx, 31, 0x287BB0u);
    ctx->pc = 0x287BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BA8u;
    // 0x287bac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x287BA8u, 0x287BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BB0u;
label_287bb0:
    // 0x287bb0: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x287bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x287bb4: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x287BB4u;
    {
        const bool branch_taken_0x287bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BB4u;
        // 0x287bb8: 0xc7a70010  lwc1        $f7, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bb4) {
            ctx->pc = 0x287C6Cu;
            goto label_287c6c;
        }
    }
    ctx->pc = 0x287BBCu;
    // 0x287bbc: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x287bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x287bc0: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x287bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x287bc4: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x287bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287bc8: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x287bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x287bcc: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x287bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x287bd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287bd4: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287bd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287bd8: 0x0  nop
    ctx->pc = 0x287bd8u;
    // NOP
    // 0x287bdc: 0x0  nop
    ctx->pc = 0x287bdcu;
    // NOP
    // 0x287be0: 0x460c0044  c1          0xC0044
    ctx->pc = 0x287be0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x287be4: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x287be4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287be8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x287BE8u;
    {
        const bool branch_taken_0x287be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287be8) {
            ctx->pc = 0x287C08u;
            goto label_287c08;
        }
    }
    ctx->pc = 0x287BF0u;
    // 0x287bf0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x287BF0u;
    SET_GPR_U32(ctx, 31, 0x287BF8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x287BF0u, 0x287BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BF8u;
label_287bf8:
    // 0x287bf8: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x287bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x287bfc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x287bfcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x287c00: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x287c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x287c04: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x287c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_287c08:
    // 0x287c08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287c0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287c10: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x287c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x287c14: 0x0  nop
    ctx->pc = 0x287c14u;
    // NOP
    // 0x287c18: 0x0  nop
    ctx->pc = 0x287c18u;
    // NOP
    // 0x287c1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x287c1cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x287c20: 0xc78489c4  lwc1        $f4, -0x763C($gp)
    ctx->pc = 0x287c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287c24: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x287c28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x287c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287c2c: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x287c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x287c30: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x287c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x287c34: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x287c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x287c38: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x287c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x287c3c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x287c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x287c40: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x287c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x287c44: 0xc6cc004c  lwc1        $f12, 0x4C($s6)
    ctx->pc = 0x287c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x287c48: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x287c48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x287c4c: 0x0  nop
    ctx->pc = 0x287c4cu;
    // NOP
    // 0x287c50: 0x0  nop
    ctx->pc = 0x287c50u;
    // NOP
    // 0x287c54: 0x46036303  div.s       $f12, $f12, $f3
    ctx->pc = 0x287c54u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[3];
    // 0x287c58: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x287C58u;
    SET_GPR_U32(ctx, 31, 0x287C60u);
    ctx->pc = 0x287C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C58u;
    // 0x287c5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x287C58u, 0x287C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C60u;
label_287c60:
    // 0x287c60: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x287c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x287c64: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x287C64u;
    SET_GPR_U32(ctx, 31, 0x287C6Cu);
    ctx->pc = 0x287C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C64u;
    // 0x287c68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x287C64u, 0x287C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C6Cu;
label_287c6c:
    // 0x287c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287C6Cu;
    {
        const bool branch_taken_0x287c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C6Cu;
        // 0x287c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c6c) {
            ctx->pc = 0x287C78u;
            goto label_287c78;
        }
    }
    ctx->pc = 0x287C74u;
label_287c74:
    // 0x287c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287c78:
    // 0x287c78: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x287c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x287c7c: 0xdfbe0220  ld          $fp, 0x220($sp)
    ctx->pc = 0x287c7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x287c80: 0xdfb70210  ld          $s7, 0x210($sp)
    ctx->pc = 0x287c80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x287c84: 0xdfb60200  ld          $s6, 0x200($sp)
    ctx->pc = 0x287c84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x287c88: 0xdfb501f0  ld          $s5, 0x1F0($sp)
    ctx->pc = 0x287c88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x287c8c: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x287c8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x287c90: 0xdfb301d0  ld          $s3, 0x1D0($sp)
    ctx->pc = 0x287c90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x287c94: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x287c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x287c98: 0xdfb101b0  ld          $s1, 0x1B0($sp)
    ctx->pc = 0x287c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x287c9c: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x287c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x287ca0: 0xc7b80260  lwc1        $f24, 0x260($sp)
    ctx->pc = 0x287ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x287ca4: 0xc7b70258  lwc1        $f23, 0x258($sp)
    ctx->pc = 0x287ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x287ca8: 0xc7b60250  lwc1        $f22, 0x250($sp)
    ctx->pc = 0x287ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x287cac: 0xc7b50248  lwc1        $f21, 0x248($sp)
    ctx->pc = 0x287cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x287cb0: 0xc7b40240  lwc1        $f20, 0x240($sp)
    ctx->pc = 0x287cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x287CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CB4u;
        // 0x287cb8: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287CBCu;
}
