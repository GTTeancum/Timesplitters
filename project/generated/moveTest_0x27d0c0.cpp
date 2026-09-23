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

// Function: moveTest
// Address: 0x27d0c0 - 0x27db0c
void moveTest_0x27d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveTest_0x27d0c0");
#endif

    switch (ctx->pc) {
        case 0x27d244u: goto label_27d244;
        case 0x27d268u: goto label_27d268;
        case 0x27d278u: goto label_27d278;
        case 0x27d2c0u: goto label_27d2c0;
        case 0x27d344u: goto label_27d344;
        case 0x27d360u: goto label_27d360;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d438u: goto label_27d438;
        case 0x27d804u: goto label_27d804;
        case 0x27d950u: goto label_27d950;
        case 0x27d96cu: goto label_27d96c;
        case 0x27da2cu: goto label_27da2c;
        default: break;
    }

    ctx->pc = 0x27d0c0u;

label_27d0c0:
    // 0x27d0c0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x27d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x27d0c4: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x27d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x27d0c8: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x27d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x27d0cc: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x27d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x27d0d0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x27d0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d0d4: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x27d0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x27d0d8: 0xe7b70218  swc1        $f23, 0x218($sp)
    ctx->pc = 0x27d0d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x27d0dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27d0dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0e0: 0xe7b60210  swc1        $f22, 0x210($sp)
    ctx->pc = 0x27d0e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x27d0e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27d0e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0e8: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x27d0e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x27d0ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d0f0: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x27d0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x27d0f4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27d0f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27d0f8: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x27d0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x27d0fc: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x27d0fcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x27d100: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x27d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x27d104: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x27d104u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x27d108: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x27d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x27d10c: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x27d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x27d110: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x27d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x27d114: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x27d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x27d118: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x27d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x27d11c: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x27d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x27d120: 0xe7b90228  swc1        $f25, 0x228($sp)
    ctx->pc = 0x27d120u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x27d124: 0xe7b80220  swc1        $f24, 0x220($sp)
    ctx->pc = 0x27d124u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x27d128: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x27d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x27d12c: 0xc6590004  lwc1        $f25, 0x4($s2)
    ctx->pc = 0x27d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27d130: 0xc6780004  lwc1        $f24, 0x4($s3)
    ctx->pc = 0x27d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27d134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d138: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x27d138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x27d13c: 0xafa7013c  sw          $a3, 0x13C($sp)
    ctx->pc = 0x27d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 7));
    // 0x27d140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d144: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d148: 0x8c621194  lw          $v0, 0x1194($v1)
    ctx->pc = 0x27d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4500)));
    // 0x27d14c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d150: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x27d150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x27d154: 0xafa90144  sw          $t1, 0x144($sp)
    ctx->pc = 0x27d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 9));
    // 0x27d158: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x27d158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x27d15c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x27d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x27d160: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27D160u;
    {
        const bool branch_taken_0x27d160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D160u;
        // 0x27d164: 0xafa40154  sw          $a0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d160) {
            ctx->pc = 0x27D1A8u;
            goto label_27d1a8;
        }
    }
    ctx->pc = 0x27D168u;
    // 0x27d168: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x27d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27d16c: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x27d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d170: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x27d170u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d174: 0x0  nop
    ctx->pc = 0x27d174u;
    // NOP
    // 0x27d178: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x27D178u;
    {
        const bool branch_taken_0x27d178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D178u;
        // 0x27d17c: 0xc6630008  lwc1        $f3, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d178) {
            ctx->pc = 0x27D1B4u;
            goto label_27d1b4;
        }
    }
    ctx->pc = 0x27D180u;
    // 0x27d180: 0x4619c032  c.eq.s      $f24, $f25
    ctx->pc = 0x27d180u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[24], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d184: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27D184u;
    {
        const bool branch_taken_0x27d184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d184) {
            ctx->pc = 0x27D1B4u;
            goto label_27d1b4;
        }
    }
    ctx->pc = 0x27D18Cu;
    // 0x27d18c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x27d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d190: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x27d190u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d194: 0x0  nop
    ctx->pc = 0x27d194u;
    // NOP
    // 0x27d198: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x27D198u;
    {
        const bool branch_taken_0x27d198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d198) {
            ctx->pc = 0x27D19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D198u;
            // 0x27d19c: 0xafa00154  sw          $zero, 0x154($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D1A0u;
    // 0x27d1a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D1A0u;
    {
        const bool branch_taken_0x27d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1A0u;
        // 0x27d1a4: 0x46042801  sub.s       $f0, $f5, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1a0) {
            ctx->pc = 0x27D1BCu;
            goto label_27d1bc;
        }
    }
    ctx->pc = 0x27D1A8u;
label_27d1a8:
    // 0x27d1a8: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x27d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27d1ac: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x27d1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d1b0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x27d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27d1b4:
    // 0x27d1b4: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x27d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d1b8:
    // 0x27d1b8: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x27d1b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_27d1bc:
    // 0x27d1bc: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x27d1bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x27d1c0: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x27d1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x27d1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27d1c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D1C8u;
    {
        const bool branch_taken_0x27d1c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1C8u;
        // 0x27d1cc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1c8) {
            ctx->pc = 0x27D1DCu;
            goto label_27d1dc;
        }
    }
    ctx->pc = 0x27D1D0u;
    // 0x27d1d0: 0x46152001  sub.s       $f0, $f4, $f21
    ctx->pc = 0x27d1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x27d1d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D1D4u;
    {
        const bool branch_taken_0x27d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1D4u;
        // 0x27d1d8: 0x46152840  add.s       $f1, $f5, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1d4) {
            ctx->pc = 0x27D1E4u;
            goto label_27d1e4;
        }
    }
    ctx->pc = 0x27D1DCu;
label_27d1dc:
    // 0x27d1dc: 0x46152801  sub.s       $f0, $f5, $f21
    ctx->pc = 0x27d1dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[21]);
    // 0x27d1e0: 0x46152040  add.s       $f1, $f4, $f21
    ctx->pc = 0x27d1e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[21]);
label_27d1e4:
    // 0x27d1e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d1e8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x27d1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d1ec: 0x4617c800  add.s       $f0, $f25, $f23
    ctx->pc = 0x27d1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x27d1f0: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x27d1f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d1f4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x27d1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1f8: 0x0  nop
    ctx->pc = 0x27d1f8u;
    // NOP
    // 0x27d1fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D1FCu;
    {
        const bool branch_taken_0x27d1fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1FCu;
        // 0x27d200: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1fc) {
            ctx->pc = 0x27D210u;
            goto label_27d210;
        }
    }
    ctx->pc = 0x27D204u;
    // 0x27d204: 0x46151001  sub.s       $f0, $f2, $f21
    ctx->pc = 0x27d204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x27d208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D208u;
    {
        const bool branch_taken_0x27d208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D208u;
        // 0x27d20c: 0x46151840  add.s       $f1, $f3, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d208) {
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27D210u;
label_27d210:
    // 0x27d210: 0x46151801  sub.s       $f0, $f3, $f21
    ctx->pc = 0x27d210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[21]);
    // 0x27d214: 0x46151040  add.s       $f1, $f2, $f21
    ctx->pc = 0x27d214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_27d218:
    // 0x27d218: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27d218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27d21c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x27d21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27d220: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x27d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x27d224: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x27D224u;
    {
        const bool branch_taken_0x27d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D224u;
        // 0x27d228: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d224) {
            ctx->pc = 0x27D324u;
            goto label_27d324;
        }
    }
    ctx->pc = 0x27D22Cu;
    // 0x27d22c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x27d22cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d230: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x27d230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x27d234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d238: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27d238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d23c: 0xc095cac  jal         func_2572B0
    ctx->pc = 0x27D23Cu;
    SET_GPR_U32(ctx, 31, 0x27D244u);
    ctx->pc = 0x27D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D23Cu;
    // 0x27d240: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2572B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2572B0u, 0x27D23Cu, 0x27D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D244u;
label_27d244:
    // 0x27d244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27d244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d248: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27D248u;
    {
        const bool branch_taken_0x27d248 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D248u;
        // 0x27d24c: 0xafa20148  sw          $v0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d248) {
            ctx->pc = 0x27D330u;
            goto label_27d330;
        }
    }
    ctx->pc = 0x27D250u;
    // 0x27d250: 0x27be0120  addiu       $fp, $sp, 0x120
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x27d254: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x27d254u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d258: 0x27b60124  addiu       $s6, $sp, 0x124
    ctx->pc = 0x27d258u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x27d25c: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x27d25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27d260: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x27d260u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27d264: 0x0  nop
    ctx->pc = 0x27d264u;
    // NOP
label_27d268:
    // 0x27d268: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x27d268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x27d26c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x27d26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x27d270: 0xc095d82  jal         func_257608
    ctx->pc = 0x27D270u;
    SET_GPR_U32(ctx, 31, 0x27D278u);
    ctx->pc = 0x27D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D270u;
    // 0x27d274: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257608u, 0x27D270u, 0x27D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D278u;
label_27d278:
    // 0x27d278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27d278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d27c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d280: 0x8f82a270  lw          $v0, -0x5D90($gp)
    ctx->pc = 0x27d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x27d284: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d288: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27d288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d28c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27d28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d294: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27d294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27d298: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x27d298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d29c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x27d29cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x27d2a0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x27d2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27d2a4: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x27d2a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2a8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x27d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x27d2ac: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x27d2acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2b0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x27d2b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2b4: 0x94450124  lhu         $a1, 0x124($v0)
    ctx->pc = 0x27d2b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x27d2b8: 0xc09f338  jal         func_27CCE0
    ctx->pc = 0x27D2B8u;
    SET_GPR_U32(ctx, 31, 0x27D2C0u);
    ctx->pc = 0x27D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D2B8u;
    // 0x27d2bc: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CCE0u, 0x27D2B8u, 0x27D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2C0u;
label_27d2c0:
    // 0x27d2c0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x27d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2c4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27d2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d2c8: 0x0  nop
    ctx->pc = 0x27d2c8u;
    // NOP
    // 0x27d2cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D2CCu;
    {
        const bool branch_taken_0x27d2cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2CCu;
        // 0x27d2d0: 0xc7a100d0  lwc1        $f1, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2cc) {
            ctx->pc = 0x27D2E4u;
            goto label_27d2e4;
        }
    }
    ctx->pc = 0x27D2D4u;
    // 0x27d2d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d2d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27d2d8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x27d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2dc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x27d2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27d2e0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x27d2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_27d2e4:
    // 0x27d2e4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x27d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2e8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x27d2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d2ec: 0x0  nop
    ctx->pc = 0x27d2ecu;
    // NOP
    // 0x27d2f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D2F0u;
    {
        const bool branch_taken_0x27d2f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2F0u;
        // 0x27d2f4: 0xc7a100c0  lwc1        $f1, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2f0) {
            ctx->pc = 0x27D308u;
            goto label_27d308;
        }
    }
    ctx->pc = 0x27D2F8u;
    // 0x27d2f8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27d2f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27d2fc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x27d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d300: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x27d300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d304: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27d308:
    // 0x27d308: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x27d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x27d30c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27d310: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x27d310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27d314: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x27D314u;
    {
        const bool branch_taken_0x27d314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D314u;
        // 0x27d318: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d314) {
            ctx->pc = 0x27D268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d268;
        }
    }
    ctx->pc = 0x27D31Cu;
    // 0x27d31c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27D31Cu;
    {
        const bool branch_taken_0x27d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D31Cu;
        // 0x27d320: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d31c) {
            ctx->pc = 0x27D334u;
            goto label_27d334;
        }
    }
    ctx->pc = 0x27D324u;
label_27d324:
    // 0x27d324: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d328: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x27d328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d32c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x27d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_27d330:
    // 0x27d330: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x27d330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_27d334:
    // 0x27d334: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d338: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x27d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27d33c: 0xc095c72  jal         func_2571C8
    ctx->pc = 0x27D33Cu;
    SET_GPR_U32(ctx, 31, 0x27D344u);
    ctx->pc = 0x27D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D33Cu;
    // 0x27d340: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2571C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571C8u, 0x27D33Cu, 0x27D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D344u;
label_27d344:
    // 0x27d344: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x27D344u;
    {
        const bool branch_taken_0x27d344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D344u;
        // 0x27d348: 0xafa20148  sw          $v0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d344) {
            ctx->pc = 0x27D498u;
            goto label_27d498;
        }
    }
    ctx->pc = 0x27D34Cu;
    // 0x27d34c: 0x27be0128  addiu       $fp, $sp, 0x128
    ctx->pc = 0x27d34cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x27d350: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x27d350u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x27d354: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x27d354u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x27d358: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x27d358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x27d35c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x27d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_27d360:
    // 0x27d360: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x27D360u;
    {
        const bool branch_taken_0x27d360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D360u;
        // 0x27d364: 0x8fa4015c  lw          $a0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d360) {
            ctx->pc = 0x27D3F4u;
            goto label_27d3f4;
        }
    }
    ctx->pc = 0x27D368u;
    // 0x27d368: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x27d368u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27d36c: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x27d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x27d370: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27d370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d374: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27d374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27d378: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x27d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27d37c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x27d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x27d380: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27d380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d384: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27d384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d388: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27d388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27d38c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x27d38cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x27d390: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x27d390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27d394: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x27d394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d398: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x27d398u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d39c: 0xc09c382  jal         func_270E08
    ctx->pc = 0x27D39Cu;
    SET_GPR_U32(ctx, 31, 0x27D3A4u);
    ctx->pc = 0x27D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D39Cu;
    // 0x27d3a0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E08u, 0x27D39Cu, 0x27D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3A4u;
label_27d3a4:
    // 0x27d3a4: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x27d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27d3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d3ac: 0x0  nop
    ctx->pc = 0x27d3acu;
    // NOP
    // 0x27d3b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D3B0u;
    {
        const bool branch_taken_0x27d3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3B0u;
        // 0x27d3b4: 0xc7a100f0  lwc1        $f1, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3b0) {
            ctx->pc = 0x27D3C8u;
            goto label_27d3c8;
        }
    }
    ctx->pc = 0x27D3B8u;
    // 0x27d3b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d3b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27d3bc: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x27d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3c0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x27d3c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27d3c4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x27d3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_27d3c8:
    // 0x27d3c8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x27d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3cc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x27d3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d3d0: 0x0  nop
    ctx->pc = 0x27d3d0u;
    // NOP
    // 0x27d3d4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27D3D4u;
    {
        const bool branch_taken_0x27d3d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3D4u;
        // 0x27d3d8: 0xc7a100e0  lwc1        $f1, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d4) {
            ctx->pc = 0x27D3F8u;
            goto label_27d3f8;
        }
    }
    ctx->pc = 0x27D3DCu;
    // 0x27d3dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27d3dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27d3e0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x27d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3e4: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x27d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x27d3e8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x27d3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D3ECu;
    {
        const bool branch_taken_0x27d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3ECu;
        // 0x27d3f0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3ec) {
            ctx->pc = 0x27D3F8u;
            goto label_27d3f8;
        }
    }
    ctx->pc = 0x27D3F4u;
label_27d3f4:
    // 0x27d3f4: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27d3f8:
    // 0x27d3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d3fc: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x27d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x27d400: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x27d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x27d404: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27d404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d408: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x27d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x27d40c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27d40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d410: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x27d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x27d414: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27d414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27d418: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x27d418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27d41c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x27d41cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x27d420: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x27d420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d424: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x27d424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27d428: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x27d428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d42c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x27d42cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d430: 0xc09c382  jal         func_270E08
    ctx->pc = 0x27D430u;
    SET_GPR_U32(ctx, 31, 0x27D438u);
    ctx->pc = 0x27D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D430u;
    // 0x27d434: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E08u, 0x27D430u, 0x27D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D438u;
label_27d438:
    // 0x27d438: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x27d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d43c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27d43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d440: 0x0  nop
    ctx->pc = 0x27d440u;
    // NOP
    // 0x27d444: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D444u;
    {
        const bool branch_taken_0x27d444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D444u;
        // 0x27d448: 0xc7a100f0  lwc1        $f1, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d444) {
            ctx->pc = 0x27D45Cu;
            goto label_27d45c;
        }
    }
    ctx->pc = 0x27D44Cu;
    // 0x27d44c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d44cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27d450: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x27d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d454: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x27d454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27d458: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x27d458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_27d45c:
    // 0x27d45c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x27d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d460: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x27d460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d464: 0x0  nop
    ctx->pc = 0x27d464u;
    // NOP
    // 0x27d468: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27D468u;
    {
        const bool branch_taken_0x27d468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D468u;
        // 0x27d46c: 0xc7a100e0  lwc1        $f1, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d468) {
            ctx->pc = 0x27D484u;
            goto label_27d484;
        }
    }
    ctx->pc = 0x27D470u;
    // 0x27d470: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27d470u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27d474: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x27d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d478: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x27d478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x27d47c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x27d47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d480: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27d484:
    // 0x27d484: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x27d488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27d488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27d48c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x27d48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27d490: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x27D490u;
    {
        const bool branch_taken_0x27d490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D490u;
        // 0x27d494: 0x8fa30154  lw          $v1, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d490) {
            ctx->pc = 0x27D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d360;
        }
    }
    ctx->pc = 0x27D498u;
label_27d498:
    // 0x27d498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d4a0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x27d4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4a4: 0x0  nop
    ctx->pc = 0x27d4a4u;
    // NOP
    // 0x27d4a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D4A8u;
    {
        const bool branch_taken_0x27d4a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4A8u;
        // 0x27d4ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4a8) {
            ctx->pc = 0x27D4C0u;
            goto label_27d4c0;
        }
    }
    ctx->pc = 0x27D4B0u;
    // 0x27d4b0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x27d4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4b4: 0x0  nop
    ctx->pc = 0x27d4b4u;
    // NOP
    // 0x27d4b8: 0x45020111  bc1fl       . + 4 + (0x111 << 2)
    ctx->pc = 0x27D4B8u;
    {
        const bool branch_taken_0x27d4b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d4b8) {
            ctx->pc = 0x27D4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D4B8u;
            // 0x27d4bc: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D900u;
            goto label_27d900;
        }
    }
    ctx->pc = 0x27D4C0u;
label_27d4c0:
    // 0x27d4c0: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x27d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x27d4c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D4C4u;
    {
        const bool branch_taken_0x27d4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4C4u;
        // 0x27d4c8: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4c4) {
            ctx->pc = 0x27D4D8u;
            goto label_27d4d8;
        }
    }
    ctx->pc = 0x27D4CCu;
    // 0x27d4cc: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x27d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27d4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d4d4: 0xac621194  sw          $v0, 0x1194($v1)
    ctx->pc = 0x27d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4500), GPR_U32(ctx, 2));
label_27d4d8:
    // 0x27d4d8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x27d4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4dc: 0x0  nop
    ctx->pc = 0x27d4dcu;
    // NOP
    // 0x27d4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27D4E0u;
    {
        const bool branch_taken_0x27d4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4E0u;
        // 0x27d4e4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4e0) {
            ctx->pc = 0x27D4ECu;
            goto label_27d4ec;
        }
    }
    ctx->pc = 0x27D4E8u;
    // 0x27d4e8: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x27d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_27d4ec:
    // 0x27d4ec: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x27d4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d4f0: 0x0  nop
    ctx->pc = 0x27d4f0u;
    // NOP
    // 0x27d4f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D4F4u;
    {
        const bool branch_taken_0x27d4f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4F4u;
        // 0x27d4f8: 0x8fa2014c  lw          $v0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4f4) {
            ctx->pc = 0x27D504u;
            goto label_27d504;
        }
    }
    ctx->pc = 0x27D4FCu;
    // 0x27d4fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x27d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x27d500: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x27d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_27d504:
    // 0x27d504: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x27d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x27d508: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x27D508u;
    {
        const bool branch_taken_0x27d508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D508u;
        // 0x27d50c: 0x8fa2014c  lw          $v0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d508) {
            ctx->pc = 0x27D834u;
            goto label_27d834;
        }
    }
    ctx->pc = 0x27D510u;
    // 0x27d510: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x27d510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x27d514: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27d518: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27D518u;
    {
        const bool branch_taken_0x27d518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D518u;
        // 0x27d51c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d518) {
            ctx->pc = 0x27D558u;
            goto label_27d558;
        }
    }
    ctx->pc = 0x27D520u;
    // 0x27d520: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x27d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d524: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x27d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d528: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x27d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d52c: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x27d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d530: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27d530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27d534: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x27d534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27d538: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27d538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27d53c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d53cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d540: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x27d540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d544: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27D544u;
    {
        const bool branch_taken_0x27d544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d544) {
            ctx->pc = 0x27D558u;
            goto label_27d558;
        }
    }
    ctx->pc = 0x27D54Cu;
    // 0x27d54c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x27d54cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d550: 0x46002586  mov.s       $f22, $f4
    ctx->pc = 0x27d550u;
    ctx->f[22] = FPU_MOV_S(ctx->f[4]);
    // 0x27d554: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x27d554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27d558:
    // 0x27d558: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x27D558u;
    {
        const bool branch_taken_0x27d558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D558u;
        // 0x27d55c: 0xc7a60040  lwc1        $f6, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d558) {
            ctx->pc = 0x27D600u;
            goto label_27d600;
        }
    }
    ctx->pc = 0x27D560u;
    // 0x27d560: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x27d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d564: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x27d564u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x27d568: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x27d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d56c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x27d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d570: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27d570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x27d574: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x27d574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x27d578: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27d578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27d57c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x27d57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27d580: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x27d580u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d584: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x27d584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d588: 0x0  nop
    ctx->pc = 0x27d588u;
    // NOP
    // 0x27d58c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D58Cu;
    {
        const bool branch_taken_0x27d58c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D58Cu;
        // 0x27d590: 0xe7a20104  swc1        $f2, 0x104($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d58c) {
            ctx->pc = 0x27D5A4u;
            goto label_27d5a4;
        }
    }
    ctx->pc = 0x27D594u;
    // 0x27d594: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x27d594u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x27d598: 0xe7a60104  swc1        $f6, 0x104($sp)
    ctx->pc = 0x27d598u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x27d59c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x27d59cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x27d5a0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x27d5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_27d5a4:
    // 0x27d5a4: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x27d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d5a8: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x27d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d5ac: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x27d5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x27d5b0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x27d5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27d5b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d5b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d5b8: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x27d5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d5bc: 0x0  nop
    ctx->pc = 0x27d5bcu;
    // NOP
    // 0x27d5c0: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x27D5C0u;
    {
        const bool branch_taken_0x27d5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d5c0) {
            ctx->pc = 0x27D5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D5C0u;
            // 0x27d5c4: 0xe7a50100  swc1        $f5, 0x100($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D5F8u;
            goto label_27d5f8;
        }
    }
    ctx->pc = 0x27D5C8u;
    // 0x27d5c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d5d0: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x27d5d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x27d5d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27d5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27d5d8: 0x0  nop
    ctx->pc = 0x27d5d8u;
    // NOP
    // 0x27d5dc: 0x0  nop
    ctx->pc = 0x27d5dcu;
    // NOP
    // 0x27d5e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d5e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27d5e4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x27d5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d5e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27d5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27d5ec: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x27d5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x27d5f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D5F0u;
    {
        const bool branch_taken_0x27d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5F0u;
        // 0x27d5f4: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5f0) {
            ctx->pc = 0x27D60Cu;
            goto label_27d60c;
        }
    }
    ctx->pc = 0x27D5F8u;
label_27d5f8:
    // 0x27d5f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27D5F8u;
    {
        const bool branch_taken_0x27d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5F8u;
        // 0x27d5fc: 0xe7a50104  swc1        $f5, 0x104($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5f8) {
            ctx->pc = 0x27D60Cu;
            goto label_27d60c;
        }
    }
    ctx->pc = 0x27D600u;
label_27d600:
    // 0x27d600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d604: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x27d604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x27d608: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x27d608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_27d60c:
    // 0x27d60c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x27d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27d610: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x27D610u;
    {
        const bool branch_taken_0x27d610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d610) {
            ctx->pc = 0x27D614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D610u;
            // 0x27d614: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D6A4u;
            goto label_27d6a4;
        }
    }
    ctx->pc = 0x27D618u;
    // 0x27d618: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x27d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d61c: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x27d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d620: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x27d620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d624: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x27d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d628: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27d628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27d62c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27d62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27d630: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27d630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27d634: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d638: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x27d638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d63c: 0x0  nop
    ctx->pc = 0x27d63cu;
    // NOP
    // 0x27d640: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x27D640u;
    {
        const bool branch_taken_0x27d640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D640u;
        // 0x27d644: 0xc7a10100  lwc1        $f1, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d640) {
            ctx->pc = 0x27D6A0u;
            goto label_27d6a0;
        }
    }
    ctx->pc = 0x27D648u;
    // 0x27d648: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x27d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d64c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27d64cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27d650: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27d650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27d654: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d658: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x27d658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d65c: 0x0  nop
    ctx->pc = 0x27d65cu;
    // NOP
    // 0x27d660: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x27D660u;
    {
        const bool branch_taken_0x27d660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D660u;
        // 0x27d664: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d660) {
            ctx->pc = 0x27D694u;
            goto label_27d694;
        }
    }
    ctx->pc = 0x27D668u;
    // 0x27d668: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27d668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d66c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d670: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27d670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27d674: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x27d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x27d678: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d67c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27d67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27d680: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x27d680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x27d684: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d688: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27d68c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x27D68Cu;
    {
        const bool branch_taken_0x27d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D68Cu;
        // 0x27d690: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d68c) {
            ctx->pc = 0x27D738u;
            goto label_27d738;
        }
    }
    ctx->pc = 0x27D694u;
label_27d694:
    // 0x27d694: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x27d694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x27d698: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27D698u;
    {
        const bool branch_taken_0x27d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D698u;
        // 0x27d69c: 0xe7a20114  swc1        $f2, 0x114($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d698) {
            ctx->pc = 0x27D738u;
            goto label_27d738;
        }
    }
    ctx->pc = 0x27D6A0u;
label_27d6a0:
    // 0x27d6a0: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x27d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_27d6a4:
    // 0x27d6a4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x27d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27d6a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27D6A8u;
    {
        const bool branch_taken_0x27d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6A8u;
        // 0x27d6ac: 0xc787b468  lwc1        $f7, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6a8) {
            ctx->pc = 0x27D72Cu;
            goto label_27d72c;
        }
    }
    ctx->pc = 0x27D6B0u;
    // 0x27d6b0: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x27d6b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x27d6b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27d6b8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27d6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27d6bc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27d6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27d6c0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x27d6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x27d6c4: 0x0  nop
    ctx->pc = 0x27d6c4u;
    // NOP
    // 0x27d6c8: 0x0  nop
    ctx->pc = 0x27d6c8u;
    // NOP
    // 0x27d6cc: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x27d6ccu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x27d6d0: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x27d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27d6d4: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x27d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d6d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x27d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d6dc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x27d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d6e0: 0xc78487b8  lwc1        $f4, -0x7848($gp)
    ctx->pc = 0x27d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d6e4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x27d6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27d6e8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27d6e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x27d6ec: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x27d6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x27d6f0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x27d6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27d6f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27d6f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27d6f8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x27d6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x27d6fc: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x27d6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d700: 0x0  nop
    ctx->pc = 0x27d700u;
    // NOP
    // 0x27d704: 0x0  nop
    ctx->pc = 0x27d704u;
    // NOP
    // 0x27d708: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x27d708u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x27d70c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27d70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x27d710: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x27d710u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27d714: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27d714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27d718: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x27d718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x27d71c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27D71Cu;
    {
        const bool branch_taken_0x27d71c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D71Cu;
        // 0x27d720: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d71c) {
            ctx->pc = 0x27D738u;
            goto label_27d738;
        }
    }
    ctx->pc = 0x27D724u;
    // 0x27d724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27D724u;
    {
        const bool branch_taken_0x27d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D724u;
        // 0x27d728: 0x46003586  mov.s       $f22, $f6 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d724) {
            ctx->pc = 0x27D738u;
            goto label_27d738;
        }
    }
    ctx->pc = 0x27D72Cu;
label_27d72c:
    // 0x27d72c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d730: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x27d730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x27d734: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x27d734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_27d738:
    // 0x27d738: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x27D738u;
    {
        const bool branch_taken_0x27d738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D738u;
        // 0x27d73c: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d738) {
            ctx->pc = 0x27D930u;
            goto label_27d930;
        }
    }
    ctx->pc = 0x27D740u;
    // 0x27d740: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x27d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x27d744: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27D744u;
    {
        const bool branch_taken_0x27d744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D744u;
        // 0x27d748: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d744) {
            ctx->pc = 0x27D7A4u;
            goto label_27d7a4;
        }
    }
    ctx->pc = 0x27D74Cu;
    // 0x27d74c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d750: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x27d750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x27d754: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x27d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d758: 0xc78587bc  lwc1        $f5, -0x7844($gp)
    ctx->pc = 0x27d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27d75c: 0xc7a60110  lwc1        $f6, 0x110($sp)
    ctx->pc = 0x27d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27d760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d764: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x27d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d768: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x27d768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x27d76c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x27d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d770: 0xc7a70114  lwc1        $f7, 0x114($sp)
    ctx->pc = 0x27d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27d774: 0x4604b102  mul.s       $f4, $f22, $f4
    ctx->pc = 0x27d774u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
    // 0x27d778: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x27d778u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x27d77c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27d77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27d780: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x27d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x27d784: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x27d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x27d788: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d78c: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x27d78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x27d790: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d794: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27d794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x27d798: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27d798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27d79c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27D79Cu;
    {
        const bool branch_taken_0x27d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D79Cu;
        // 0x27d7a0: 0x46070000  add.s       $f0, $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d79c) {
            ctx->pc = 0x27D7DCu;
            goto label_27d7dc;
        }
    }
    ctx->pc = 0x27D7A4u;
label_27d7a4:
    // 0x27d7a4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27d7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d7a8: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x27d7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x27d7ac: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x27d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d7b0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x27d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d7b4: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x27d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d7bc: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x27d7bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x27d7c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27d7c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27d7c4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x27d7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x27d7c8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d7cc: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x27d7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x27d7d0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d7d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27d7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27d7d8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27d7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27d7dc:
    // 0x27d7dc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x27d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x27d7e0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x27d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x27d7e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27d7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27d7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7ec: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27d7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27d7f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27d7f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27d7f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27d7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27d7f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7fc: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x27D7FCu;
    SET_GPR_U32(ctx, 31, 0x27D804u);
    ctx->pc = 0x27D800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7FCu;
    // 0x27d800: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    goto label_27d0c0;
    ctx->pc = 0x27D804u;
label_27d804:
    // 0x27d804: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x27d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d808: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x27d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d80c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x27d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x27d810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d814: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x27d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d818: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27d81c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x27d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d820: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27d820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27d824: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x27d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d828: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27d828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27d82c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27D82Cu;
    {
        const bool branch_taken_0x27d82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D82Cu;
        // 0x27d830: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d82c) {
            ctx->pc = 0x27D930u;
            goto label_27d930;
        }
    }
    ctx->pc = 0x27D834u;
label_27d834:
    // 0x27d834: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x27d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x27d838: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x27d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27d83c: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x27d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x27d840: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27D840u;
    {
        const bool branch_taken_0x27d840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D840u;
        // 0x27d844: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d840) {
            ctx->pc = 0x27D87Cu;
            goto label_27d87c;
        }
    }
    ctx->pc = 0x27D848u;
    // 0x27d848: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x27d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d84c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x27d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d850: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x27d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d854: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x27d854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27d858: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27d858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27d85c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x27d85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27d860: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27d860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27d864: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27d864u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d868: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x27d868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d86c: 0x0  nop
    ctx->pc = 0x27d86cu;
    // NOP
    // 0x27d870: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x27D870u;
    {
        const bool branch_taken_0x27d870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d870) {
            ctx->pc = 0x27D874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D870u;
            // 0x27d874: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D8B8u;
            goto label_27d8b8;
        }
    }
    ctx->pc = 0x27D878u;
    // 0x27d878: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x27d878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_27d87c:
    // 0x27d87c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x27d87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27d880: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27D880u;
    {
        const bool branch_taken_0x27d880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D880u;
        // 0x27d884: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d880) {
            ctx->pc = 0x27D8D0u;
            goto label_27d8d0;
        }
    }
    ctx->pc = 0x27D888u;
    // 0x27d888: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x27d888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d88c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x27d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d890: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x27d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d894: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27d894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27d898: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27d898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27d89c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27d89cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27d8a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d8a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27d8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d8a8: 0x0  nop
    ctx->pc = 0x27d8a8u;
    // NOP
    // 0x27d8ac: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x27D8ACu;
    {
        const bool branch_taken_0x27d8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d8ac) {
            ctx->pc = 0x27D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D8ACu;
            // 0x27d8b0: 0x4603b042  mul.s       $f1, $f22, $f3 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D8D8u;
            goto label_27d8d8;
        }
    }
    ctx->pc = 0x27D8B4u;
    // 0x27d8b4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8b8:
    // 0x27d8b8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x27d8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x27d8bc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d8c0: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x27d8c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x27d8c4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27D8C8u;
    {
        const bool branch_taken_0x27d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8C8u;
        // 0x27d8cc: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8c8) {
            ctx->pc = 0x27D930u;
            goto label_27d930;
        }
    }
    ctx->pc = 0x27D8D0u;
label_27d8d0:
    // 0x27d8d0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x27d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27d8d4: 0x4603b042  mul.s       $f1, $f22, $f3
    ctx->pc = 0x27d8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_27d8d8:
    // 0x27d8d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8dc: 0x4604b082  mul.s       $f2, $f22, $f4
    ctx->pc = 0x27d8dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
    // 0x27d8e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d8e4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x27d8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x27d8e8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d8ec: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x27d8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x27d8f0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d8f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27d8f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27d8f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27D8F8u;
    {
        const bool branch_taken_0x27d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8F8u;
        // 0x27d8fc: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8f8) {
            ctx->pc = 0x27D930u;
            goto label_27d930;
        }
    }
    ctx->pc = 0x27D900u;
label_27d900:
    // 0x27d900: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D900u;
    {
        const bool branch_taken_0x27d900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D900u;
        // 0x27d904: 0x8fa20150  lw          $v0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d900) {
            ctx->pc = 0x27D90Cu;
            goto label_27d90c;
        }
    }
    ctx->pc = 0x27D908u;
    // 0x27d908: 0xac401194  sw          $zero, 0x1194($v0)
    ctx->pc = 0x27d908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4500), GPR_U32(ctx, 0));
label_27d90c:
    // 0x27d90c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x27d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x27d910: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D910u;
    {
        const bool branch_taken_0x27d910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D910u;
        // 0x27d914: 0x8fa40154  lw          $a0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d910) {
            ctx->pc = 0x27D934u;
            goto label_27d934;
        }
    }
    ctx->pc = 0x27D918u;
    // 0x27d918: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x27d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d91c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27d91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27d920: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x27d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d924: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27d924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27d928: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x27d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d92c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27d92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27d930:
    // 0x27d930: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x27d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_27d934:
    // 0x27d934: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27D934u;
    {
        const bool branch_taken_0x27d934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D934u;
        // 0x27d938: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d934) {
            ctx->pc = 0x27D978u;
            goto label_27d978;
        }
    }
    ctx->pc = 0x27D93Cu;
    // 0x27d93c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27D93Cu;
    {
        const bool branch_taken_0x27d93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D93Cu;
        // 0x27d940: 0x8fa30148  lw          $v1, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d93c) {
            ctx->pc = 0x27D978u;
            goto label_27d978;
        }
    }
    ctx->pc = 0x27D944u;
    // 0x27d944: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27D944u;
    {
        const bool branch_taken_0x27d944 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D944u;
        // 0x27d948: 0x8fb0015c  lw          $s0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d944) {
            ctx->pc = 0x27D978u;
            goto label_27d978;
        }
    }
    ctx->pc = 0x27D94Cu;
    // 0x27d94c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x27d94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27d950:
    // 0x27d950: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27d950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d954: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27d954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d958: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x27d958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x27d95c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27d95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d960: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27d960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27d964: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x27D964u;
    SET_GPR_U32(ctx, 31, 0x27D96Cu);
    ctx->pc = 0x27D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D964u;
    // 0x27d968: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x27D964u, 0x27D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D96Cu;
label_27d96c:
    // 0x27d96c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27d96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x27d970: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27D970u;
    {
        const bool branch_taken_0x27d970 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D970u;
        // 0x27d974: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d970) {
            ctx->pc = 0x27D950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d950;
        }
    }
    ctx->pc = 0x27D978u;
label_27d978:
    // 0x27d978: 0x8fb0013c  lw          $s0, 0x13C($sp)
    ctx->pc = 0x27d978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x27d97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d980: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x27d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d988: 0x264800a  movz        $s0, $s3, $a0
    ctx->pc = 0x27d988u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x27d98c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d990: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27d990u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d994: 0x0  nop
    ctx->pc = 0x27d994u;
    // NOP
    // 0x27d998: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x27D998u;
    {
        const bool branch_taken_0x27d998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D998u;
        // 0x27d99c: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d998) {
            ctx->pc = 0x27D9B8u;
            goto label_27d9b8;
        }
    }
    ctx->pc = 0x27D9A0u;
    // 0x27d9a0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d9a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d9a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x27d9a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d9ac: 0x0  nop
    ctx->pc = 0x27d9acu;
    // NOP
    // 0x27d9b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27D9B0u;
    {
        const bool branch_taken_0x27d9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d9b0) {
            ctx->pc = 0x27D9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D9B0u;
            // 0x27d9b4: 0xafa00154  sw          $zero, 0x154($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D9B8u;
            goto label_27d9b8;
        }
    }
    ctx->pc = 0x27D9B8u;
label_27d9b8:
    // 0x27d9b8: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x27d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x27d9bc: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x27D9BCu;
    {
        const bool branch_taken_0x27d9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d9bc) {
            ctx->pc = 0x27D9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D9BCu;
            // 0x27d9c0: 0xe6190004  swc1        $f25, 0x4($s0) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DA14u;
            goto label_27da14;
        }
    }
    ctx->pc = 0x27D9C4u;
    // 0x27d9c4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x27d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27d9c8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d9cc: 0xc4821198  lwc1        $f2, 0x1198($a0)
    ctx->pc = 0x27d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d9d0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x27d9d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d9d4: 0x0  nop
    ctx->pc = 0x27d9d4u;
    // NOP
    // 0x27d9d8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x27D9D8u;
    {
        const bool branch_taken_0x27d9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d9d8) {
            ctx->pc = 0x27D9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D9D8u;
            // 0x27d9dc: 0xe6190004  swc1        $f25, 0x4($s0) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DA14u;
            goto label_27da14;
        }
    }
    ctx->pc = 0x27D9E0u;
    // 0x27d9e0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x27d9e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27d9e4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x27d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27d9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D9E8u;
    {
        const bool branch_taken_0x27d9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9E8u;
        // 0x27d9ec: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9e8) {
            ctx->pc = 0x27D9F8u;
            goto label_27d9f8;
        }
    }
    ctx->pc = 0x27D9F0u;
    // 0x27d9f0: 0x8c82119c  lw          $v0, 0x119C($a0)
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4508)));
    // 0x27d9f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_27d9f8:
    // 0x27d9f8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d9fc: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x27d9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27da00: 0x0  nop
    ctx->pc = 0x27da00u;
    // NOP
    // 0x27da04: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x27DA04u;
    {
        const bool branch_taken_0x27da04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27da04) {
            ctx->pc = 0x27DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DA04u;
            // 0x27da08: 0xe6180004  swc1        $f24, 0x4($s0) (Delay Slot)
            { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DA88u;
            goto label_27da88;
        }
    }
    ctx->pc = 0x27DA0Cu;
    // 0x27da0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27DA0Cu;
    {
        const bool branch_taken_0x27da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA0Cu;
        // 0x27da10: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da0c) {
            ctx->pc = 0x27DA80u;
            goto label_27da80;
        }
    }
    ctx->pc = 0x27DA14u;
label_27da14:
    // 0x27da14: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27da14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27da18: 0xc78c87c0  lwc1        $f12, -0x7840($gp)
    ctx->pc = 0x27da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27da1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da20: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x27da20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x27da24: 0xc09f27c  jal         func_27C9F0
    ctx->pc = 0x27DA24u;
    SET_GPR_U32(ctx, 31, 0x27DA2Cu);
    ctx->pc = 0x27DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA24u;
    // 0x27da28: 0x27a60134  addiu       $a2, $sp, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C9F0u, 0x27DA24u, 0x27DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA2Cu;
label_27da2c:
    // 0x27da2c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x27da2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27da30: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x27da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x27da34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DA34u;
    {
        const bool branch_taken_0x27da34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA34u;
        // 0x27da38: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da34) {
            ctx->pc = 0x27DA50u;
            goto label_27da50;
        }
    }
    ctx->pc = 0x27DA3Cu;
    // 0x27da3c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x27da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x27da40: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x27da40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27da44: 0xe4801198  swc1        $f0, 0x1198($a0)
    ctx->pc = 0x27da44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4504), bits); }
    // 0x27da48: 0xac82119c  sw          $v0, 0x119C($a0)
    ctx->pc = 0x27da48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4508), GPR_U32(ctx, 2));
    // 0x27da4c: 0xac8311a0  sw          $v1, 0x11A0($a0)
    ctx->pc = 0x27da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 3));
label_27da50:
    // 0x27da50: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x27da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27da54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DA54u;
    {
        const bool branch_taken_0x27da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA54u;
        // 0x27da58: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da54) {
            ctx->pc = 0x27DA64u;
            goto label_27da64;
        }
    }
    ctx->pc = 0x27DA5Cu;
    // 0x27da5c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x27da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27da60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27da60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_27da64:
    // 0x27da64: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da68: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x27da68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27da6c: 0x0  nop
    ctx->pc = 0x27da6cu;
    // NOP
    // 0x27da70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27DA70u;
    {
        const bool branch_taken_0x27da70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA70u;
        // 0x27da74: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da70) {
            ctx->pc = 0x27DA80u;
            goto label_27da80;
        }
    }
    ctx->pc = 0x27DA78u;
    // 0x27da78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DA78u;
    {
        const bool branch_taken_0x27da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA78u;
        // 0x27da7c: 0xe6180004  swc1        $f24, 0x4($s0) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da78) {
            ctx->pc = 0x27DA88u;
            goto label_27da88;
        }
    }
    ctx->pc = 0x27DA80u;
label_27da80:
    // 0x27da80: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x27da80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x27da84: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x27da84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_27da88:
    // 0x27da88: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x27da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da8c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x27da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27da90: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x27da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x27da94: 0xe780b928  swc1        $f0, -0x46D8($gp)
    ctx->pc = 0x27da94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949160), bits); }
    // 0x27da98: 0xe781b92c  swc1        $f1, -0x46D4($gp)
    ctx->pc = 0x27da98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949164), bits); }
    // 0x27da9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DA9Cu;
    {
        const bool branch_taken_0x27da9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA9Cu;
        // 0x27daa0: 0x8fa40158  lw          $a0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da9c) {
            ctx->pc = 0x27DAB8u;
            goto label_27dab8;
        }
    }
    ctx->pc = 0x27DAA4u;
    // 0x27daa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27daa8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x27daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27daac: 0xac6411bc  sw          $a0, 0x11BC($v1)
    ctx->pc = 0x27daacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4540), GPR_U32(ctx, 4));
    // 0x27dab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DAB0u;
    {
        const bool branch_taken_0x27dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAB0u;
        // 0x27dab4: 0xac6211b8  sw          $v0, 0x11B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dab0) {
            ctx->pc = 0x27DAC0u;
            goto label_27dac0;
        }
    }
    ctx->pc = 0x27DAB8u;
label_27dab8:
    // 0x27dab8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x27dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27dabc: 0xac4011b8  sw          $zero, 0x11B8($v0)
    ctx->pc = 0x27dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4536), GPR_U32(ctx, 0));
label_27dac0:
    // 0x27dac0: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x27dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x27dac4: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x27dac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x27dac8: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x27dac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x27dacc: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x27daccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x27dad0: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x27dad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x27dad4: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x27dad4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x27dad8: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x27dad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x27dadc: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x27dadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x27dae0: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x27dae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x27dae4: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x27dae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x27dae8: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x27dae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27daec: 0xc7b90228  lwc1        $f25, 0x228($sp)
    ctx->pc = 0x27daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27daf0: 0xc7b80220  lwc1        $f24, 0x220($sp)
    ctx->pc = 0x27daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27daf4: 0xc7b70218  lwc1        $f23, 0x218($sp)
    ctx->pc = 0x27daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27daf8: 0xc7b60210  lwc1        $f22, 0x210($sp)
    ctx->pc = 0x27daf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27dafc: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x27dafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27db00: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x27db00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27db04: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB04u;
        // 0x27db08: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DB0Cu;
}
