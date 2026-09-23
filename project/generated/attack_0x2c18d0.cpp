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

// Function: attack
// Address: 0x2c18d0 - 0x2c3364
void attack_0x2c18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("attack_0x2c18d0");
#endif

    switch (ctx->pc) {
        case 0x2c1928u: goto label_2c1928;
        case 0x2c19a0u: goto label_2c19a0;
        case 0x2c19c4u: goto label_2c19c4;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c1a58u: goto label_2c1a58;
        case 0x2c1a68u: goto label_2c1a68;
        case 0x2c1a78u: goto label_2c1a78;
        case 0x2c1a8cu: goto label_2c1a8c;
        case 0x2c1a9cu: goto label_2c1a9c;
        case 0x2c1af0u: goto label_2c1af0;
        case 0x2c1b00u: goto label_2c1b00;
        case 0x2c1b58u: goto label_2c1b58;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1becu: goto label_2c1bec;
        case 0x2c1c14u: goto label_2c1c14;
        case 0x2c1c3cu: goto label_2c1c3c;
        case 0x2c1c90u: goto label_2c1c90;
        case 0x2c1cc0u: goto label_2c1cc0;
        case 0x2c1cd0u: goto label_2c1cd0;
        case 0x2c1ce0u: goto label_2c1ce0;
        case 0x2c1cf4u: goto label_2c1cf4;
        case 0x2c1d0cu: goto label_2c1d0c;
        case 0x2c1d54u: goto label_2c1d54;
        case 0x2c1dd8u: goto label_2c1dd8;
        case 0x2c1de0u: goto label_2c1de0;
        case 0x2c1de8u: goto label_2c1de8;
        case 0x2c1e1cu: goto label_2c1e1c;
        case 0x2c1e24u: goto label_2c1e24;
        case 0x2c1e5cu: goto label_2c1e5c;
        case 0x2c1e6cu: goto label_2c1e6c;
        case 0x2c1e7cu: goto label_2c1e7c;
        case 0x2c1e90u: goto label_2c1e90;
        case 0x2c1eacu: goto label_2c1eac;
        case 0x2c1eb8u: goto label_2c1eb8;
        case 0x2c1ec8u: goto label_2c1ec8;
        case 0x2c1ed8u: goto label_2c1ed8;
        case 0x2c1eecu: goto label_2c1eec;
        case 0x2c1f1cu: goto label_2c1f1c;
        case 0x2c1f28u: goto label_2c1f28;
        case 0x2c1f4cu: goto label_2c1f4c;
        case 0x2c1facu: goto label_2c1fac;
        case 0x2c1fe4u: goto label_2c1fe4;
        case 0x2c1ff0u: goto label_2c1ff0;
        case 0x2c2014u: goto label_2c2014;
        case 0x2c2038u: goto label_2c2038;
        case 0x2c2134u: goto label_2c2134;
        case 0x2c213cu: goto label_2c213c;
        case 0x2c2158u: goto label_2c2158;
        case 0x2c222cu: goto label_2c222c;
        case 0x2c223cu: goto label_2c223c;
        case 0x2c2264u: goto label_2c2264;
        case 0x2c2274u: goto label_2c2274;
        case 0x2c22e0u: goto label_2c22e0;
        case 0x2c236cu: goto label_2c236c;
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23b8u: goto label_2c23b8;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23e8u: goto label_2c23e8;
        case 0x2c248cu: goto label_2c248c;
        case 0x2c24ecu: goto label_2c24ec;
        case 0x2c2594u: goto label_2c2594;
        case 0x2c25e4u: goto label_2c25e4;
        case 0x2c26b0u: goto label_2c26b0;
        case 0x2c26c0u: goto label_2c26c0;
        case 0x2c26d0u: goto label_2c26d0;
        case 0x2c26e4u: goto label_2c26e4;
        case 0x2c2724u: goto label_2c2724;
        case 0x2c27ecu: goto label_2c27ec;
        case 0x2c2860u: goto label_2c2860;
        case 0x2c2870u: goto label_2c2870;
        case 0x2c28acu: goto label_2c28ac;
        case 0x2c290cu: goto label_2c290c;
        case 0x2c291cu: goto label_2c291c;
        case 0x2c292cu: goto label_2c292c;
        case 0x2c2940u: goto label_2c2940;
        case 0x2c297cu: goto label_2c297c;
        case 0x2c299cu: goto label_2c299c;
        case 0x2c29e0u: goto label_2c29e0;
        case 0x2c29ecu: goto label_2c29ec;
        case 0x2c2a58u: goto label_2c2a58;
        case 0x2c2a74u: goto label_2c2a74;
        case 0x2c2a7cu: goto label_2c2a7c;
        case 0x2c2a8cu: goto label_2c2a8c;
        case 0x2c2a9cu: goto label_2c2a9c;
        case 0x2c2ab0u: goto label_2c2ab0;
        case 0x2c2ae4u: goto label_2c2ae4;
        case 0x2c2af4u: goto label_2c2af4;
        case 0x2c2b04u: goto label_2c2b04;
        case 0x2c2b14u: goto label_2c2b14;
        case 0x2c2b24u: goto label_2c2b24;
        case 0x2c2b34u: goto label_2c2b34;
        case 0x2c2b78u: goto label_2c2b78;
        case 0x2c2b94u: goto label_2c2b94;
        case 0x2c2ba4u: goto label_2c2ba4;
        case 0x2c2be4u: goto label_2c2be4;
        case 0x2c2c28u: goto label_2c2c28;
        case 0x2c2c34u: goto label_2c2c34;
        case 0x2c2ca0u: goto label_2c2ca0;
        case 0x2c2cbcu: goto label_2c2cbc;
        case 0x2c2cc4u: goto label_2c2cc4;
        case 0x2c2cd4u: goto label_2c2cd4;
        case 0x2c2ce4u: goto label_2c2ce4;
        case 0x2c2cf8u: goto label_2c2cf8;
        case 0x2c2d24u: goto label_2c2d24;
        case 0x2c2d34u: goto label_2c2d34;
        case 0x2c2d88u: goto label_2c2d88;
        case 0x2c2da4u: goto label_2c2da4;
        case 0x2c2db4u: goto label_2c2db4;
        case 0x2c2decu: goto label_2c2dec;
        case 0x2c2e40u: goto label_2c2e40;
        case 0x2c2e50u: goto label_2c2e50;
        case 0x2c2e94u: goto label_2c2e94;
        case 0x2c2ea8u: goto label_2c2ea8;
        case 0x2c2ebcu: goto label_2c2ebc;
        case 0x2c2ed0u: goto label_2c2ed0;
        case 0x2c2f20u: goto label_2c2f20;
        case 0x2c2f48u: goto label_2c2f48;
        case 0x2c2f6cu: goto label_2c2f6c;
        case 0x2c2f80u: goto label_2c2f80;
        case 0x2c2fa8u: goto label_2c2fa8;
        case 0x2c2fd0u: goto label_2c2fd0;
        case 0x2c3074u: goto label_2c3074;
        case 0x2c30e0u: goto label_2c30e0;
        case 0x2c3144u: goto label_2c3144;
        case 0x2c3188u: goto label_2c3188;
        case 0x2c3198u: goto label_2c3198;
        case 0x2c31a8u: goto label_2c31a8;
        case 0x2c31bcu: goto label_2c31bc;
        case 0x2c31ccu: goto label_2c31cc;
        case 0x2c31e0u: goto label_2c31e0;
        case 0x2c31f0u: goto label_2c31f0;
        case 0x2c31f8u: goto label_2c31f8;
        case 0x2c3258u: goto label_2c3258;
        case 0x2c328cu: goto label_2c328c;
        case 0x2c32b4u: goto label_2c32b4;
        case 0x2c32c4u: goto label_2c32c4;
        default: break;
    }

    ctx->pc = 0x2c18d0u;

    // 0x2c18d0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2c18d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2c18d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c18d8: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x2c18d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x2c18dc: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x2c18dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x2c18e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c18e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c18e4: 0xffb70230  sd          $s7, 0x230($sp)
    ctx->pc = 0x2c18e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 23));
    // 0x2c18e8: 0xffb60220  sd          $s6, 0x220($sp)
    ctx->pc = 0x2c18e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 22));
    // 0x2c18ec: 0xffb50210  sd          $s5, 0x210($sp)
    ctx->pc = 0x2c18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 21));
    // 0x2c18f0: 0xffb40200  sd          $s4, 0x200($sp)
    ctx->pc = 0x2c18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 20));
    // 0x2c18f4: 0xffb301f0  sd          $s3, 0x1F0($sp)
    ctx->pc = 0x2c18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 19));
    // 0x2c18f8: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x2c18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x2c18fc: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x2c18fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2c1900: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x2c1900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2c1904: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x2c1904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2c1908: 0xffb101d0  sd          $s1, 0x1D0($sp)
    ctx->pc = 0x2c1908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 17));
    // 0x2c190c: 0x8e510160  lw          $s1, 0x160($s2)
    ctx->pc = 0x2c190cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x2c1910: 0x8e240ae4  lw          $a0, 0xAE4($s1)
    ctx->pc = 0x2c1910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c1914: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c1918: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1918u;
    {
        const bool branch_taken_0x2c1918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c1918) {
            ctx->pc = 0x2C191Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1918u;
            // 0x2c191c: 0xc4800030  lwc1        $f0, 0x30($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1930u;
            goto label_2c1930;
        }
    }
    ctx->pc = 0x2C1920u;
    // 0x2c1920: 0xc0b0cda  jal         func_2C3368
    ctx->pc = 0x2C1920u;
    SET_GPR_U32(ctx, 31, 0x2C1928u);
    ctx->pc = 0x2C1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1920u;
    // 0x2c1924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3368u, 0x2C1920u, 0x2C1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1928u;
label_2c1928:
    // 0x2c1928: 0x10000681  b           . + 4 + (0x681 << 2)
    ctx->pc = 0x2C1928u;
    {
        const bool branch_taken_0x2c1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1928u;
        // 0x2c192c: 0xdfbf0240  ld          $ra, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1928) {
            ctx->pc = 0x2C3330u;
            goto label_2c3330;
        }
    }
    ctx->pc = 0x2C1930u;
label_2c1930:
    // 0x2c1930: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c1930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c1934: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x2c1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1938: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c1938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c193c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2c193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1940: 0xe6200af4  swc1        $f0, 0xAF4($s1)
    ctx->pc = 0x2c1940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c1944: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2c1944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1948: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2c1948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c194c: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x2c194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1950: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2c1950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1954: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x2c1954u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c1958: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c195c: 0x46021d81  sub.s       $f22, $f3, $f2
    ctx->pc = 0x2c195cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c1960: 0xc4840038  lwc1        $f4, 0x38($a0)
    ctx->pc = 0x2c1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1964: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c1964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c1968: 0x46040d01  sub.s       $f20, $f1, $f4
    ctx->pc = 0x2c1968u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c196c: 0x4616b082  mul.s       $f2, $f22, $f22
    ctx->pc = 0x2c196cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2c1970: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2c1970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c1974: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c1978: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c1978u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c197c: 0x0  nop
    ctx->pc = 0x2c197cu;
    // NOP
    // 0x2c1980: 0x0  nop
    ctx->pc = 0x2c1980u;
    // NOP
    // 0x2c1984: 0x460c0584  c1          0xC0584
    ctx->pc = 0x2c1984u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c1988: 0x4616b032  c.eq.s      $f22, $f22
    ctx->pc = 0x2c1988u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c198c: 0x0  nop
    ctx->pc = 0x2c198cu;
    // NOP
    // 0x2c1990: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1990u;
    {
        const bool branch_taken_0x2c1990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1990) {
            ctx->pc = 0x2C1994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1990u;
            // 0x2c1994: 0x8e220ad4  lw          $v0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C19A8u;
            goto label_2c19a8;
        }
    }
    ctx->pc = 0x2C1998u;
    // 0x2c1998: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C1998u;
    SET_GPR_U32(ctx, 31, 0x2C19A0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C1998u, 0x2C19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19A0u;
label_2c19a0:
    // 0x2c19a0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2c19a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2c19a4: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
label_2c19a8:
    // 0x2c19a8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C19A8u;
    {
        const bool branch_taken_0x2c19a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c19a8) {
            ctx->pc = 0x2C19ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C19A8u;
            // 0x2c19ac: 0x8e2302a8  lw          $v1, 0x2A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A14u;
            goto label_2c1a14;
        }
    }
    ctx->pc = 0x2C19B0u;
    // 0x2c19b0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c19b4: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C19B4u;
    {
        const bool branch_taken_0x2c19b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19B4u;
        // 0x2c19b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19b4) {
            ctx->pc = 0x2C19E0u;
            goto label_2c19e0;
        }
    }
    ctx->pc = 0x2C19BCu;
    // 0x2c19bc: 0xc0b057e  jal         func_2C15F8
    ctx->pc = 0x2C19BCu;
    SET_GPR_U32(ctx, 31, 0x2C19C4u);
    ctx->pc = 0x2C19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C19BCu;
    // 0x2c19c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F8u, 0x2C19BCu, 0x2C19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19C4u;
label_2c19c4:
    // 0x2c19c4: 0xc6210b60  lwc1        $f1, 0xB60($s1)
    ctx->pc = 0x2c19c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c19c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c19c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c19cc: 0x0  nop
    ctx->pc = 0x2c19ccu;
    // NOP
    // 0x2c19d0: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x2C19D0u;
    {
        const bool branch_taken_0x2c19d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c19d0) {
            ctx->pc = 0x2C19D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C19D0u;
            // 0x2c19d4: 0x8e220a90  lw          $v0, 0xA90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A08u;
            goto label_2c1a08;
        }
    }
    ctx->pc = 0x2C19D8u;
    // 0x2c19d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c19dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c19e0:
    // 0x2c19e0: 0x54a2000c  bnel        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C19E0u;
    {
        const bool branch_taken_0x2c19e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c19e0) {
            ctx->pc = 0x2C19E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C19E0u;
            // 0x2c19e4: 0x8e2302a8  lw          $v1, 0x2A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A14u;
            goto label_2c1a14;
        }
    }
    ctx->pc = 0x2C19E8u;
    // 0x2c19e8: 0xc0b057e  jal         func_2C15F8
    ctx->pc = 0x2C19E8u;
    SET_GPR_U32(ctx, 31, 0x2C19F0u);
    ctx->pc = 0x2C19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C19E8u;
    // 0x2c19ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F8u, 0x2C19E8u, 0x2C19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19F0u;
label_2c19f0:
    // 0x2c19f0: 0xc6210b60  lwc1        $f1, 0xB60($s1)
    ctx->pc = 0x2c19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c19f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c19f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c19f8: 0x0  nop
    ctx->pc = 0x2c19f8u;
    // NOP
    // 0x2c19fc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C19FCu;
    {
        const bool branch_taken_0x2c19fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c19fc) {
            ctx->pc = 0x2C1A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C19FCu;
            // 0x2c1a00: 0x8e2302a8  lw          $v1, 0x2A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A14u;
            goto label_2c1a14;
        }
    }
    ctx->pc = 0x2C1A04u;
    // 0x2c1a04: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
label_2c1a08:
    // 0x2c1a08: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c1a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c1a0c: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
    // 0x2c1a10: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x2c1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_2c1a14:
    // 0x2c1a14: 0x2414001c  addiu       $s4, $zero, 0x1C
    ctx->pc = 0x2c1a14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c1a18: 0x8f84a2ec  lw          $a0, -0x5D14($gp)
    ctx->pc = 0x2c1a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c1a1c: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x2c1a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c1a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1a24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c1a28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c1a2c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2C1A2Cu;
    {
        const bool branch_taken_0x2c1a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a2c) {
            ctx->pc = 0x2C1C0Cu;
            goto label_2c1c0c;
        }
    }
    ctx->pc = 0x2C1A34u;
    // 0x2c1a34: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c1a38: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2C1A38u;
    {
        const bool branch_taken_0x2c1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A38u;
        // 0x2c1a3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a38) {
            ctx->pc = 0x2C1C0Cu;
            goto label_2c1c0c;
        }
    }
    ctx->pc = 0x2C1A40u;
    // 0x2c1a40: 0x8e220ae4  lw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c1a44: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a48: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x2c1a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c1a4c: 0xae200aa8  sw          $zero, 0xAA8($s1)
    ctx->pc = 0x2c1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 0));
    // 0x2c1a50: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C1A50u;
    SET_GPR_U32(ctx, 31, 0x2C1A58u);
    ctx->pc = 0x2C1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A50u;
    // 0x2c1a54: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C1A50u, 0x2C1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A58u;
label_2c1a58:
    // 0x2c1a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a60: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1A60u;
    SET_GPR_U32(ctx, 31, 0x2C1A68u);
    ctx->pc = 0x2C1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A60u;
    // 0x2c1a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1A60u, 0x2C1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A68u;
label_2c1a68:
    // 0x2c1a68: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1A68u;
    {
        const bool branch_taken_0x2c1a68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A68u;
        // 0x2c1a6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a68) {
            ctx->pc = 0x2C1A7Cu;
            goto label_2c1a7c;
        }
    }
    ctx->pc = 0x2C1A70u;
    // 0x2c1a70: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C1A70u;
    SET_GPR_U32(ctx, 31, 0x2C1A78u);
    ctx->pc = 0x2C1A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A70u;
    // 0x2c1a74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C1A70u, 0x2C1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A78u;
label_2c1a78:
    // 0x2c1a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a7c:
    // 0x2c1a7c: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x2c1a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2c1a80: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2c1a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2c1a84: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1A84u;
    SET_GPR_U32(ctx, 31, 0x2C1A8Cu);
    ctx->pc = 0x2C1A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A84u;
    // 0x2c1a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1A84u, 0x2C1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A8Cu;
label_2c1a8c:
    // 0x2c1a8c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C1A8Cu;
    {
        const bool branch_taken_0x2c1a8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A8Cu;
        // 0x2c1a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a8c) {
            ctx->pc = 0x2C1AE8u;
            goto label_2c1ae8;
        }
    }
    ctx->pc = 0x2C1A94u;
    // 0x2c1a94: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1A94u;
    SET_GPR_U32(ctx, 31, 0x2C1A9Cu);
    ctx->pc = 0x2C1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A94u;
    // 0x2c1a98: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1A94u, 0x2C1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A9Cu;
label_2c1a9c:
    // 0x2c1a9c: 0xc6200b10  lwc1        $f0, 0xB10($s1)
    ctx->pc = 0x2c1a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1aa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c1aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c1aa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1aa8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2c1aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2c1aac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c1aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c1ab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1ab4: 0xc6220b60  lwc1        $f2, 0xB60($s1)
    ctx->pc = 0x2c1ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1ab8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c1ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c1abc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c1abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1ac0: 0x0  nop
    ctx->pc = 0x2c1ac0u;
    // NOP
    // 0x2c1ac4: 0x4502060b  bc1fl       . + 4 + (0x60B << 2)
    ctx->pc = 0x2C1AC4u;
    {
        const bool branch_taken_0x2c1ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1ac4) {
            ctx->pc = 0x2C1AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1AC4u;
            // 0x2c1ac8: 0x8e240ae4  lw          $a0, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32F4u;
            goto label_2c32f4;
        }
    }
    ctx->pc = 0x2C1ACCu;
    // 0x2c1acc: 0x8e220ad4  lw          $v0, 0xAD4($s1)
    ctx->pc = 0x2c1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c1ad0: 0x50400608  beql        $v0, $zero, . + 4 + (0x608 << 2)
    ctx->pc = 0x2C1AD0u;
    {
        const bool branch_taken_0x2c1ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ad0) {
            ctx->pc = 0x2C1AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1AD0u;
            // 0x2c1ad4: 0x8e240ae4  lw          $a0, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32F4u;
            goto label_2c32f4;
        }
    }
    ctx->pc = 0x2C1AD8u;
    // 0x2c1ad8: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c1adc: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c1adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c1ae0: 0x10000603  b           . + 4 + (0x603 << 2)
    ctx->pc = 0x2C1AE0u;
    {
        const bool branch_taken_0x2c1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AE0u;
        // 0x2c1ae4: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ae0) {
            ctx->pc = 0x2C32F0u;
            goto label_2c32f0;
        }
    }
    ctx->pc = 0x2C1AE8u;
label_2c1ae8:
    // 0x2c1ae8: 0xc0b04ca  jal         func_2C1328
    ctx->pc = 0x2C1AE8u;
    SET_GPR_U32(ctx, 31, 0x2C1AF0u);
    ctx->pc = 0x2C1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1AE8u;
    // 0x2c1aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1328u, 0x2C1AE8u, 0x2C1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AF0u;
label_2c1af0:
    // 0x2c1af0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c1af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1af4: 0x262402a8  addiu       $a0, $s1, 0x2A8
    ctx->pc = 0x2c1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
    // 0x2c1af8: 0xc0afda0  jal         func_2BF680
    ctx->pc = 0x2C1AF8u;
    SET_GPR_U32(ctx, 31, 0x2C1B00u);
    ctx->pc = 0x2C1AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1AF8u;
    // 0x2c1afc: 0xae3302ac  sw          $s3, 0x2AC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF680u, 0x2C1AF8u, 0x2C1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B00u;
label_2c1b00:
    // 0x2c1b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b04: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c1b08: 0x12020603  beq         $s0, $v0, . + 4 + (0x603 << 2)
    ctx->pc = 0x2C1B08u;
    {
        const bool branch_taken_0x2c1b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B08u;
        // 0x2c1b0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b08) {
            ctx->pc = 0x2C3318u;
            goto label_2c3318;
        }
    }
    ctx->pc = 0x2C1B10u;
    // 0x2c1b10: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C1B10u;
    {
        const bool branch_taken_0x2c1b10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B10u;
        // 0x2c1b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b10) {
            ctx->pc = 0x2C1B60u;
            goto label_2c1b60;
        }
    }
    ctx->pc = 0x2C1B18u;
    // 0x2c1b18: 0xc6200b10  lwc1        $f0, 0xB10($s1)
    ctx->pc = 0x2c1b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c1b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c1b20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1b24: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2c1b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2c1b28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c1b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c1b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1b30: 0xc6220b60  lwc1        $f2, 0xB60($s1)
    ctx->pc = 0x2c1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1b34: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c1b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c1b38: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c1b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1b3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1B3Cu;
    {
        const bool branch_taken_0x2c1b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1b3c) {
            ctx->pc = 0x2C1B50u;
            goto label_2c1b50;
        }
    }
    ctx->pc = 0x2C1B44u;
    // 0x2c1b44: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c1b48: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c1b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c1b4c: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
label_2c1b50:
    // 0x2c1b50: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1B50u;
    SET_GPR_U32(ctx, 31, 0x2C1B58u);
    ctx->pc = 0x2C1B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B50u;
    // 0x2c1b54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1B50u, 0x2C1B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B58u;
label_2c1b58:
    // 0x2c1b58: 0x100005f5  b           . + 4 + (0x5F5 << 2)
    ctx->pc = 0x2C1B58u;
    {
        const bool branch_taken_0x2c1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B58u;
        // 0x2c1b5c: 0xdfbf0240  ld          $ra, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b58) {
            ctx->pc = 0x2C3330u;
            goto label_2c3330;
        }
    }
    ctx->pc = 0x2C1B60u;
label_2c1b60:
    // 0x2c1b60: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1B60u;
    SET_GPR_U32(ctx, 31, 0x2C1B68u);
    ctx->pc = 0x2C1B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B60u;
    // 0x2c1b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1B60u, 0x2C1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B68u;
label_2c1b68:
    // 0x2c1b68: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x2c1b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c1b6c: 0xc6200b2c  lwc1        $f0, 0xB2C($s1)
    ctx->pc = 0x2c1b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b70: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2c1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c1b74: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2c1b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2c1b78: 0xc78690f8  lwc1        $f6, -0x6F08($gp)
    ctx->pc = 0x2c1b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1b80: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c1b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1b84: 0xe6240aec  swc1        $f4, 0xAEC($s1)
    ctx->pc = 0x2c1b84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c1b88: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x2c1b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1b8c: 0xe6250af0  swc1        $f5, 0xAF0($s1)
    ctx->pc = 0x2c1b8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c1b90: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2c1b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1b94: 0xe6230af4  swc1        $f3, 0xAF4($s1)
    ctx->pc = 0x2c1b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c1b98: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c1b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b9c: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2c1b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1ba0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1ba4: 0x46040541  sub.s       $f21, $f0, $f4
    ctx->pc = 0x2c1ba4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c1ba8: 0x46051581  sub.s       $f22, $f2, $f5
    ctx->pc = 0x2c1ba8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c1bac: 0x46030d01  sub.s       $f20, $f1, $f3
    ctx->pc = 0x2c1bacu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c1bb0: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c1bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c1bb4: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2c1bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2c1bb8: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c1bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c1bbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1bc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c1bc4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2c1bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1bc8: 0x0  nop
    ctx->pc = 0x2c1bc8u;
    // NOP
    // 0x2c1bcc: 0x450005c8  bc1f        . + 4 + (0x5C8 << 2)
    ctx->pc = 0x2C1BCCu;
    {
        const bool branch_taken_0x2c1bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BCCu;
        // 0x2c1bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bcc) {
            ctx->pc = 0x2C32F0u;
            goto label_2c32f0;
        }
    }
    ctx->pc = 0x2C1BD4u;
    // 0x2c1bd4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x2c1bd8: 0xae3002a8  sw          $s0, 0x2A8($s1)
    ctx->pc = 0x2c1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 16));
    // 0x2c1bdc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1be0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c1be4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1BE4u;
    SET_GPR_U32(ctx, 31, 0x2C1BECu);
    ctx->pc = 0x2C1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1BE4u;
    // 0x2c1be8: 0xae220698  sw          $v0, 0x698($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1BE4u, 0x2C1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BECu;
label_2c1bec:
    // 0x2c1bec: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c1bf0: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x2c1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x2c1bf4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c1bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2c1bf8: 0x107305bd  beq         $v1, $s3, . + 4 + (0x5BD << 2)
    ctx->pc = 0x2C1BF8u;
    {
        const bool branch_taken_0x2c1bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BF8u;
        // 0x2c1bfc: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bf8) {
            ctx->pc = 0x2C32F0u;
            goto label_2c32f0;
        }
    }
    ctx->pc = 0x2C1C00u;
    // 0x2c1c00: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x2c1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
    // 0x2c1c04: 0x100005ba  b           . + 4 + (0x5BA << 2)
    ctx->pc = 0x2C1C04u;
    {
        const bool branch_taken_0x2c1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C04u;
        // 0x2c1c08: 0xae200a84  sw          $zero, 0xA84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c04) {
            ctx->pc = 0x2C32F0u;
            goto label_2c32f0;
        }
    }
    ctx->pc = 0x2C1C0Cu;
label_2c1c0c:
    // 0x2c1c0c: 0xc0aff0a  jal         func_2BFC28
    ctx->pc = 0x2C1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1C14u);
    ctx->pc = 0x2C1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C0Cu;
    // 0x2c1c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC28u, 0x2C1C0Cu, 0x2C1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C14u;
label_2c1c14:
    // 0x2c1c14: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2c1c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c1c18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1c1c: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1C1Cu;
    {
        const bool branch_taken_0x2c1c1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C1Cu;
        // 0x2c1c20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c1c) {
            ctx->pc = 0x2C1C44u;
            goto label_2c1c44;
        }
    }
    ctx->pc = 0x2C1C24u;
    // 0x2c1c24: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c1c28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1c2c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1C2Cu;
    {
        const bool branch_taken_0x2c1c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C2Cu;
        // 0x2c1c30: 0x2c620013  sltiu       $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c2c) {
            ctx->pc = 0x2C1C4Cu;
            goto label_2c1c4c;
        }
    }
    ctx->pc = 0x2C1C34u;
    // 0x2c1c34: 0xc0b0e3c  jal         func_2C38F0
    ctx->pc = 0x2C1C34u;
    SET_GPR_U32(ctx, 31, 0x2C1C3Cu);
    ctx->pc = 0x2C1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C34u;
    // 0x2c1c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C38F0u, 0x2C1C34u, 0x2C1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C3Cu;
label_2c1c3c:
    // 0x2c1c3c: 0x100005a1  b           . + 4 + (0x5A1 << 2)
    ctx->pc = 0x2C1C3Cu;
    {
        const bool branch_taken_0x2c1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C3Cu;
        // 0x2c1c40: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c3c) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C1C44u;
label_2c1c44:
    // 0x2c1c44: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c1c48: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x2c1c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_2c1c4c:
    // 0x2c1c4c: 0x1040059d  beqz        $v0, . + 4 + (0x59D << 2)
    ctx->pc = 0x2C1C4Cu;
    {
        const bool branch_taken_0x2c1c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C4Cu;
        // 0x2c1c50: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c4c) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C1C54u;
    // 0x2c1c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1c58: 0x24429d80  addiu       $v0, $v0, -0x6280
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942080));
    // 0x2c1c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1c60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1c64: 0x800008  jr          $a0
    ctx->pc = 0x2C1C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C1C6Cu: goto label_2c1c6c;
            case 0x2C1CA8u: goto label_2c1ca8;
            case 0x2C1D78u: goto label_2c1d78;
            case 0x2C1EA0u: goto label_2c1ea0;
            case 0x2C1F10u: goto label_2c1f10;
            case 0x2C1FB4u: goto label_2c1fb4;
            case 0x2C202Cu: goto label_2c202c;
            case 0x2C20C0u: goto label_2c20c0;
            case 0x2C22CCu: goto label_2c22cc;
            case 0x2C2388u: goto label_2c2388;
            case 0x2C24E0u: goto label_2c24e0;
            case 0x2C2558u: goto label_2c2558;
            case 0x2C258Cu: goto label_2c258c;
            case 0x2C2868u: goto label_2c2868;
            case 0x2C2950u: goto label_2c2950;
            case 0x2C2AD8u: goto label_2c2ad8;
            case 0x2C2BC8u: goto label_2c2bc8;
            case 0x2C2D18u: goto label_2c2d18;
            case 0x2C2DF4u: goto label_2c2df4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1C64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C1C6Cu;
label_2c1c6c:
    // 0x2c1c6c: 0xc6210b60  lwc1        $f1, 0xB60($s1)
    ctx->pc = 0x2c1c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1c70: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c1c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2c1c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1c78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1c7c: 0x0  nop
    ctx->pc = 0x2c1c7cu;
    // NOP
    // 0x2c1c80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1C80u;
    {
        const bool branch_taken_0x2c1c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C80u;
        // 0x2c1c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c80) {
            ctx->pc = 0x2C1C98u;
            goto label_2c1c98;
        }
    }
    ctx->pc = 0x2C1C88u;
    // 0x2c1c88: 0xc0b2d6e  jal         func_2CB5B8
    ctx->pc = 0x2C1C88u;
    SET_GPR_U32(ctx, 31, 0x2C1C90u);
    ctx->pc = 0x2C1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1C88u;
    // 0x2c1c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5B8u, 0x2C1C88u, 0x2C1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C90u;
label_2c1c90:
    // 0x2c1c90: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c1c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c1c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1c98:
    // 0x2c1c98: 0x54a2058a  bnel        $a1, $v0, . + 4 + (0x58A << 2)
    ctx->pc = 0x2C1C98u;
    {
        const bool branch_taken_0x2c1c98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1c98) {
            ctx->pc = 0x2C1C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C98u;
            // 0x2c1c9c: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C1CA0u;
    // 0x2c1ca0: 0x1000041a  b           . + 4 + (0x41A << 2)
    ctx->pc = 0x2C1CA0u;
    {
        const bool branch_taken_0x2c1ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CA0u;
        // 0x2c1ca4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ca0) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C1CA8u;
label_2c1ca8:
    // 0x2c1ca8: 0x8e220ae4  lw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c1cac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c1cacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cb0: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c1cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1cb4: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x2c1cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c1cb8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C1CB8u;
    SET_GPR_U32(ctx, 31, 0x2C1CC0u);
    ctx->pc = 0x2C1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CB8u;
    // 0x2c1cbc: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C1CB8u, 0x2C1CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CC0u;
label_2c1cc0:
    // 0x2c1cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cc8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1CC8u;
    SET_GPR_U32(ctx, 31, 0x2C1CD0u);
    ctx->pc = 0x2C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CC8u;
    // 0x2c1ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1CC8u, 0x2C1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CD0u;
label_2c1cd0:
    // 0x2c1cd0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1CD0u;
    {
        const bool branch_taken_0x2c1cd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CD0u;
        // 0x2c1cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cd0) {
            ctx->pc = 0x2C1CE4u;
            goto label_2c1ce4;
        }
    }
    ctx->pc = 0x2C1CD8u;
    // 0x2c1cd8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C1CD8u;
    SET_GPR_U32(ctx, 31, 0x2C1CE0u);
    ctx->pc = 0x2C1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CD8u;
    // 0x2c1cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C1CD8u, 0x2C1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CE0u;
label_2c1ce0:
    // 0x2c1ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ce4:
    // 0x2c1ce4: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x2c1ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2c1ce8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2c1ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2c1cec: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1CECu;
    SET_GPR_U32(ctx, 31, 0x2C1CF4u);
    ctx->pc = 0x2C1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1CECu;
    // 0x2c1cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1CECu, 0x2C1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CF4u;
label_2c1cf4:
    // 0x2c1cf4: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1CF4u;
    {
        const bool branch_taken_0x2c1cf4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CF4u;
        // 0x2c1cf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cf4) {
            ctx->pc = 0x2C1D14u;
            goto label_2c1d14;
        }
    }
    ctx->pc = 0x2C1CFCu;
    // 0x2c1cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d00: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c1d04: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1D04u;
    SET_GPR_U32(ctx, 31, 0x2C1D0Cu);
    ctx->pc = 0x2C1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D04u;
    // 0x2c1d08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1D04u, 0x2C1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D0Cu;
label_2c1d0c:
    // 0x2c1d0c: 0x1000056e  b           . + 4 + (0x56E << 2)
    ctx->pc = 0x2C1D0Cu;
    {
        const bool branch_taken_0x2c1d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D0Cu;
        // 0x2c1d10: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d0c) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C1D14u;
label_2c1d14:
    // 0x2c1d14: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x2c1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c1d18: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1d1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c1d20: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c1d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c1d24: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x2c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x2c1d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d2c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d30: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2c1d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1d34: 0x0  nop
    ctx->pc = 0x2c1d34u;
    // NOP
    // 0x2c1d38: 0x450103f4  bc1t        . + 4 + (0x3F4 << 2)
    ctx->pc = 0x2C1D38u;
    {
        const bool branch_taken_0x2c1d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D38u;
        // 0x2c1d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d38) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C1D40u;
    // 0x2c1d40: 0xc6200b28  lwc1        $f0, 0xB28($s1)
    ctx->pc = 0x2c1d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c1d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1d4c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D54u);
    ctx->pc = 0x2C1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D4Cu;
    // 0x2c1d50: 0xe6200b3c  swc1        $f0, 0xB3C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2876), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1D4Cu, 0x2C1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D54u;
label_2c1d54:
    // 0x2c1d54: 0x8e220ae4  lw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c1d58: 0x8e240ad4  lw          $a0, 0xAD4($s1)
    ctx->pc = 0x2c1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c1d5c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c1d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d60: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c1d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c1d64: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c1d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1d68: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c1d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c1d6c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d70: 0x10000555  b           . + 4 + (0x555 << 2)
    ctx->pc = 0x2C1D70u;
    {
        const bool branch_taken_0x2c1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D70u;
        // 0x2c1d74: 0xe6200af4  swc1        $f0, 0xAF4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d70) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C1D78u;
label_2c1d78:
    // 0x2c1d78: 0x8e250ae4  lw          $a1, 0xAE4($s1)
    ctx->pc = 0x2c1d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c1d7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1d80: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x2c1d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c1d84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c1d88: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2c1d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1d8c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x2c1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x2c1d90: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c1d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c1d94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c1d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c1d98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c1d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1d9c: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c1d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c1da0: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2c1da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1da4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2c1da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1da8: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c1da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c1dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1db0: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2c1db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1db4: 0xe6200af4  swc1        $f0, 0xAF4($s1)
    ctx->pc = 0x2c1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c1db8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c1db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1dbc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c1dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1dc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c1dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c1dc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c1dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c1dc8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2c1dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1dcc: 0x0  nop
    ctx->pc = 0x2c1dccu;
    // NOP
    // 0x2c1dd0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2C1DD0u;
    {
        const bool branch_taken_0x2c1dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DD0u;
        // 0x2c1dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1dd0) {
            ctx->pc = 0x2C1E08u;
            goto label_2c1e08;
        }
    }
    ctx->pc = 0x2C1DD8u;
label_2c1dd8:
    // 0x2c1dd8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1DD8u;
    SET_GPR_U32(ctx, 31, 0x2C1DE0u);
    ctx->pc = 0x2C1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DD8u;
    // 0x2c1ddc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1DD8u, 0x2C1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DE0u;
label_2c1de0:
    // 0x2c1de0: 0xc0b057e  jal         func_2C15F8
    ctx->pc = 0x2C1DE0u;
    SET_GPR_U32(ctx, 31, 0x2C1DE8u);
    ctx->pc = 0x2C1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DE0u;
    // 0x2c1de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F8u, 0x2C1DE0u, 0x2C1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DE8u;
label_2c1de8:
    // 0x2c1de8: 0xc6210b60  lwc1        $f1, 0xB60($s1)
    ctx->pc = 0x2c1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1dec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1df0: 0x0  nop
    ctx->pc = 0x2c1df0u;
    // NOP
    // 0x2c1df4: 0x45000533  bc1f        . + 4 + (0x533 << 2)
    ctx->pc = 0x2C1DF4u;
    {
        const bool branch_taken_0x2c1df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DF4u;
        // 0x2c1df8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1df4) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C1DFCu;
    // 0x2c1dfc: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c1e00: 0x10000530  b           . + 4 + (0x530 << 2)
    ctx->pc = 0x2C1E00u;
    {
        const bool branch_taken_0x2c1e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E00u;
        // 0x2c1e04: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e00) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C1E08u;
label_2c1e08:
    // 0x2c1e08: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x2c1e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1e0c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2C1E0Cu;
    {
        const bool branch_taken_0x2c1e0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1e0c) {
            ctx->pc = 0x2C1E48u;
            goto label_2c1e48;
        }
    }
    ctx->pc = 0x2C1E14u;
    // 0x2c1e14: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1E14u;
    SET_GPR_U32(ctx, 31, 0x2C1E1Cu);
    ctx->pc = 0x2C1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E14u;
    // 0x2c1e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1E14u, 0x2C1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E1Cu;
label_2c1e1c:
    // 0x2c1e1c: 0xc0b057e  jal         func_2C15F8
    ctx->pc = 0x2C1E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C1E24u);
    ctx->pc = 0x2C1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E1Cu;
    // 0x2c1e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F8u, 0x2C1E1Cu, 0x2C1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E24u;
label_2c1e24:
    // 0x2c1e24: 0xc6210b60  lwc1        $f1, 0xB60($s1)
    ctx->pc = 0x2c1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1e28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1e2c: 0x0  nop
    ctx->pc = 0x2c1e2cu;
    // NOP
    // 0x2c1e30: 0x45020525  bc1fl       . + 4 + (0x525 << 2)
    ctx->pc = 0x2C1E30u;
    {
        const bool branch_taken_0x2c1e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1e30) {
            ctx->pc = 0x2C1E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1E30u;
            // 0x2c1e34: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C1E38u;
    // 0x2c1e38: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c1e3c: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c1e40: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2C1E40u;
    {
        const bool branch_taken_0x2c1e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E40u;
        // 0x2c1e44: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e40) {
            ctx->pc = 0x2C2020u;
            goto label_2c2020;
        }
    }
    ctx->pc = 0x2C1E48u;
label_2c1e48:
    // 0x2c1e48: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2c1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c1e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e50: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x2c1e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c1e54: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C1E54u;
    SET_GPR_U32(ctx, 31, 0x2C1E5Cu);
    ctx->pc = 0x2C1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E54u;
    // 0x2c1e58: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C1E54u, 0x2C1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E5Cu;
label_2c1e5c:
    // 0x2c1e5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e64: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1E64u;
    SET_GPR_U32(ctx, 31, 0x2C1E6Cu);
    ctx->pc = 0x2C1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E64u;
    // 0x2c1e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1E64u, 0x2C1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E6Cu;
label_2c1e6c:
    // 0x2c1e6c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1E6Cu;
    {
        const bool branch_taken_0x2c1e6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E6Cu;
        // 0x2c1e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e6c) {
            ctx->pc = 0x2C1E80u;
            goto label_2c1e80;
        }
    }
    ctx->pc = 0x2C1E74u;
    // 0x2c1e74: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C1E74u;
    SET_GPR_U32(ctx, 31, 0x2C1E7Cu);
    ctx->pc = 0x2C1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E74u;
    // 0x2c1e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C1E74u, 0x2C1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E7Cu;
label_2c1e7c:
    // 0x2c1e7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e80:
    // 0x2c1e80: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x2c1e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x2c1e84: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2c1e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2c1e88: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1E88u;
    SET_GPR_U32(ctx, 31, 0x2C1E90u);
    ctx->pc = 0x2C1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E88u;
    // 0x2c1e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1E88u, 0x2C1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E90u;
label_2c1e90:
    // 0x2c1e90: 0x1c40ffd1  bgtz        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2C1E90u;
    {
        const bool branch_taken_0x2c1e90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E90u;
        // 0x2c1e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e90) {
            ctx->pc = 0x2C1DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1dd8;
        }
    }
    ctx->pc = 0x2C1E98u;
    // 0x2c1e98: 0x1000039c  b           . + 4 + (0x39C << 2)
    ctx->pc = 0x2C1E98u;
    {
        const bool branch_taken_0x2c1e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E98u;
        // 0x2c1e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e98) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C1EA0u;
label_2c1ea0:
    // 0x2c1ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ea4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1EA4u;
    SET_GPR_U32(ctx, 31, 0x2C1EACu);
    ctx->pc = 0x2C1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EA4u;
    // 0x2c1ea8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1EA4u, 0x2C1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EACu;
label_2c1eac:
    // 0x2c1eac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c1eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1eb0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C1EB0u;
    SET_GPR_U32(ctx, 31, 0x2C1EB8u);
    ctx->pc = 0x2C1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EB0u;
    // 0x2c1eb4: 0xc62c0adc  lwc1        $f12, 0xADC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C1EB0u, 0x2C1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EB8u;
label_2c1eb8:
    // 0x2c1eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c1ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ec0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1EC0u;
    SET_GPR_U32(ctx, 31, 0x2C1EC8u);
    ctx->pc = 0x2C1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EC0u;
    // 0x2c1ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1EC0u, 0x2C1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EC8u;
label_2c1ec8:
    // 0x2c1ec8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1EC8u;
    {
        const bool branch_taken_0x2c1ec8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EC8u;
        // 0x2c1ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ec8) {
            ctx->pc = 0x2C1EDCu;
            goto label_2c1edc;
        }
    }
    ctx->pc = 0x2C1ED0u;
    // 0x2c1ed0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C1ED0u;
    SET_GPR_U32(ctx, 31, 0x2C1ED8u);
    ctx->pc = 0x2C1ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ED0u;
    // 0x2c1ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C1ED0u, 0x2C1ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1ED8u;
label_2c1ed8:
    // 0x2c1ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1edc:
    // 0x2c1edc: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2c1edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x2c1ee0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c1ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c1ee4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C1EE4u;
    SET_GPR_U32(ctx, 31, 0x2C1EECu);
    ctx->pc = 0x2C1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EE4u;
    // 0x2c1ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C1EE4u, 0x2C1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EECu;
label_2c1eec:
    // 0x2c1eec: 0x44304f6  bgezl       $v0, . + 4 + (0x4F6 << 2)
    ctx->pc = 0x2C1EECu;
    {
        const bool branch_taken_0x2c1eec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c1eec) {
            ctx->pc = 0x2C1EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1EECu;
            // 0x2c1ef0: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C1EF4u;
    // 0x2c1ef4: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c1ef8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1efc: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c1f00: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c1f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c1f04: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c1f08: 0x100004ee  b           . + 4 + (0x4EE << 2)
    ctx->pc = 0x2C1F08u;
    {
        const bool branch_taken_0x2c1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F08u;
        // 0x2c1f0c: 0xae230a90  sw          $v1, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f08) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C1F10u;
label_2c1f10:
    // 0x2c1f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f14: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1F14u;
    SET_GPR_U32(ctx, 31, 0x2C1F1Cu);
    ctx->pc = 0x2C1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F14u;
    // 0x2c1f18: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1F14u, 0x2C1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F1Cu;
label_2c1f1c:
    // 0x2c1f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f20: 0xc085608  jal         func_215820
    ctx->pc = 0x2C1F20u;
    SET_GPR_U32(ctx, 31, 0x2C1F28u);
    ctx->pc = 0x2C1F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F20u;
    // 0x2c1f24: 0x240501d9  addiu       $a1, $zero, 0x1D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C1F20u, 0x2C1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F28u;
label_2c1f28:
    // 0x2c1f28: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1F28u;
    {
        const bool branch_taken_0x2c1f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f28) {
            ctx->pc = 0x2C1F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F28u;
            // 0x2c1f2c: 0xc6210adc  lwc1        $f1, 0xADC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F4Cu;
            goto label_2c1f4c;
        }
    }
    ctx->pc = 0x2C1F30u;
    // 0x2c1f30: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c1f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c1f34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1f40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c1f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c1f44: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2C1F44u;
    {
        const bool branch_taken_0x2c1f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F44u;
        // 0x2c1f48: 0x240501d9  addiu       $a1, $zero, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f44) {
            ctx->pc = 0x2C200Cu;
            goto label_2c200c;
        }
    }
    ctx->pc = 0x2C1F4Cu;
label_2c1f4c:
    // 0x2c1f4c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c1f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2c1f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1f58: 0x0  nop
    ctx->pc = 0x2c1f58u;
    // NOP
    // 0x2c1f5c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2C1F5Cu;
    {
        const bool branch_taken_0x2c1f5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F5Cu;
        // 0x2c1f60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f5c) {
            ctx->pc = 0x2C1F98u;
            goto label_2c1f98;
        }
    }
    ctx->pc = 0x2C1F64u;
    // 0x2c1f64: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x2c1f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x2c1f68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1f70: 0x0  nop
    ctx->pc = 0x2c1f70u;
    // NOP
    // 0x2c1f74: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1F74u;
    {
        const bool branch_taken_0x2c1f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1f74) {
            ctx->pc = 0x2C1F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F74u;
            // 0x2c1f78: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F9Cu;
            goto label_2c1f9c;
        }
    }
    ctx->pc = 0x2C1F7Cu;
    // 0x2c1f7c: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1f80: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2c1f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2c1f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1f88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1f8c: 0x0  nop
    ctx->pc = 0x2c1f8cu;
    // NOP
    // 0x2c1f90: 0x450204cd  bc1fl       . + 4 + (0x4CD << 2)
    ctx->pc = 0x2C1F90u;
    {
        const bool branch_taken_0x2c1f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1f90) {
            ctx->pc = 0x2C1F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F90u;
            // 0x2c1f94: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C1F98u;
label_2c1f98:
    // 0x2c1f98: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
label_2c1f9c:
    // 0x2c1f9c: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c1fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fa4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1FA4u;
    SET_GPR_U32(ctx, 31, 0x2C1FACu);
    ctx->pc = 0x2C1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FA4u;
    // 0x2c1fa8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1FA4u, 0x2C1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FACu;
label_2c1fac:
    // 0x2c1fac: 0x100004c6  b           . + 4 + (0x4C6 << 2)
    ctx->pc = 0x2C1FACu;
    {
        const bool branch_taken_0x2c1fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FACu;
        // 0x2c1fb0: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fac) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C1FB4u;
label_2c1fb4:
    // 0x2c1fb4: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2c1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c1fb8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2c1fbc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2c1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2c1fc0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c1fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c1fc4: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2c1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2c1fc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1fcc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c1fd0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2c1fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2c1fd4: 0x1040034c  beqz        $v0, . + 4 + (0x34C << 2)
    ctx->pc = 0x2C1FD4u;
    {
        const bool branch_taken_0x2c1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FD4u;
        // 0x2c1fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fd4) {
            ctx->pc = 0x2C2D08u;
            goto label_2c2d08;
        }
    }
    ctx->pc = 0x2C1FDCu;
    // 0x2c1fdc: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C1FDCu;
    SET_GPR_U32(ctx, 31, 0x2C1FE4u);
    ctx->pc = 0x2C1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FDCu;
    // 0x2c1fe0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C1FDCu, 0x2C1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FE4u;
label_2c1fe4:
    // 0x2c1fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fe8: 0xc085608  jal         func_215820
    ctx->pc = 0x2C1FE8u;
    SET_GPR_U32(ctx, 31, 0x2C1FF0u);
    ctx->pc = 0x2C1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FE8u;
    // 0x2c1fec: 0x240501c1  addiu       $a1, $zero, 0x1C1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C1FE8u, 0x2C1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FF0u;
label_2c1ff0:
    // 0x2c1ff0: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2C1FF0u;
    {
        const bool branch_taken_0x2c1ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ff0) {
            ctx->pc = 0x2C1FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1FF0u;
            // 0x2c1ff4: 0xc6210adc  lwc1        $f1, 0xADC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1f4c;
        }
    }
    ctx->pc = 0x2C1FF8u;
    // 0x2c1ff8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c1ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c1ffc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2004: 0xc78d90fc  lwc1        $f13, -0x6F04($gp)
    ctx->pc = 0x2c2004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c2008: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x2c2008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
label_2c200c:
    // 0x2c200c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C200Cu;
    SET_GPR_U32(ctx, 31, 0x2C2014u);
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C200Cu, 0x2C2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2014u;
label_2c2014:
    // 0x2c2014: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c2018: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c2018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c201c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2c201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_2c2020:
    // 0x2c2020: 0x8e240ad4  lw          $a0, 0xAD4($s1)
    ctx->pc = 0x2c2020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c2024: 0x100004a8  b           . + 4 + (0x4A8 << 2)
    ctx->pc = 0x2C2024u;
    {
        const bool branch_taken_0x2c2024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2024u;
        // 0x2c2028: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2024) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C202Cu;
label_2c202c:
    // 0x2c202c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2030: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C2030u;
    SET_GPR_U32(ctx, 31, 0x2C2038u);
    ctx->pc = 0x2C2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2030u;
    // 0x2c2034: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C2030u, 0x2C2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2038u;
label_2c2038:
    // 0x2c2038: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c203c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c2040: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2040u;
    {
        const bool branch_taken_0x2c2040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2040u;
        // 0x2c2044: 0x34620006  ori         $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2040) {
            ctx->pc = 0x2C204Cu;
            goto label_2c204c;
        }
    }
    ctx->pc = 0x2C2048u;
    // 0x2c2048: 0xae220a90  sw          $v0, 0xA90($s1)
    ctx->pc = 0x2c2048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
label_2c204c:
    // 0x2c204c: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2050: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2c2050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x2c2054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2058: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c205c: 0x0  nop
    ctx->pc = 0x2c205cu;
    // NOP
    // 0x2c2060: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2060u;
    {
        const bool branch_taken_0x2c2060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2060u;
        // 0x2c2064: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2060) {
            ctx->pc = 0x2C2080u;
            goto label_2c2080;
        }
    }
    ctx->pc = 0x2C2068u;
    // 0x2c2068: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c206c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2070: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c2070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c2074: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c2074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c2078: 0xae240aa8  sw          $a0, 0xAA8($s1)
    ctx->pc = 0x2c2078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 4));
    // 0x2c207c: 0xae220a94  sw          $v0, 0xA94($s1)
    ctx->pc = 0x2c207cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
label_2c2080:
    // 0x2c2080: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x2c2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c2084: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c2084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2088: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c2088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c208c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c208cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c2090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2094: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c2094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c2098: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x2c2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x2c209c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c20a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c20a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c20a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c20a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c20a8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2c20a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c20ac: 0x0  nop
    ctx->pc = 0x2c20acu;
    // NOP
    // 0x2c20b0: 0x45030484  bc1tl       . + 4 + (0x484 << 2)
    ctx->pc = 0x2C20B0u;
    {
        const bool branch_taken_0x2c20b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c20b0) {
            ctx->pc = 0x2C20B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C20B0u;
            // 0x2c20b4: 0xae240aa8  sw          $a0, 0xAA8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C20B8u;
    // 0x2c20b8: 0x10000483  b           . + 4 + (0x483 << 2)
    ctx->pc = 0x2C20B8u;
    {
        const bool branch_taken_0x2c20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20B8u;
        // 0x2c20bc: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20b8) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C20C0u;
label_2c20c0:
    // 0x2c20c0: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c20c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2c20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c20c8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c20c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2c20cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c20ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c20d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c20d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c20d4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2c20d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c20d8: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x2c20dc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c20e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c20e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c20e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c20e8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c20e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c20ec: 0x0  nop
    ctx->pc = 0x2c20ecu;
    // NOP
    // 0x2c20f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C20F0u;
    {
        const bool branch_taken_0x2c20f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20F0u;
        // 0x2c20f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20f0) {
            ctx->pc = 0x2C2100u;
            goto label_2c2100;
        }
    }
    ctx->pc = 0x2C20F8u;
    // 0x2c20f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C20F8u;
    {
        const bool branch_taken_0x2c20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20F8u;
        // 0x2c20fc: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20f8) {
            ctx->pc = 0x2C2134u;
            goto label_2c2134;
        }
    }
    ctx->pc = 0x2C2100u;
label_2c2100:
    // 0x2c2100: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2c2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c2104: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c2104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c2108: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c210c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2110: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c2110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c2114: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2c2114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2118: 0x0  nop
    ctx->pc = 0x2c2118u;
    // NOP
    // 0x2c211c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C211Cu;
    {
        const bool branch_taken_0x2c211c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C211Cu;
        // 0x2c2120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c211c) {
            ctx->pc = 0x2C212Cu;
            goto label_2c212c;
        }
    }
    ctx->pc = 0x2C2124u;
    // 0x2c2124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2124u;
    {
        const bool branch_taken_0x2c2124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2124u;
        // 0x2c2128: 0xae250aa8  sw          $a1, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2124) {
            ctx->pc = 0x2C2134u;
            goto label_2c2134;
        }
    }
    ctx->pc = 0x2C212Cu;
label_2c212c:
    // 0x2c212c: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C212Cu;
    SET_GPR_U32(ctx, 31, 0x2C2134u);
    ctx->pc = 0x2C2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C212Cu;
    // 0x2c2130: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C212Cu, 0x2C2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2134u;
label_2c2134:
    // 0x2c2134: 0xc0b057e  jal         func_2C15F8
    ctx->pc = 0x2C2134u;
    SET_GPR_U32(ctx, 31, 0x2C213Cu);
    ctx->pc = 0x2C2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2134u;
    // 0x2c2138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F8u, 0x2C2134u, 0x2C213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C213Cu;
label_2c213c:
    // 0x2c213c: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2140: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2144: 0x0  nop
    ctx->pc = 0x2c2144u;
    // NOP
    // 0x2c2148: 0x4502045f  bc1fl       . + 4 + (0x45F << 2)
    ctx->pc = 0x2C2148u;
    {
        const bool branch_taken_0x2c2148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2148) {
            ctx->pc = 0x2C214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2148u;
            // 0x2c214c: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2150u;
    // 0x2c2150: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C2150u;
    SET_GPR_U32(ctx, 31, 0x2C2158u);
    ctx->pc = 0x2C2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2150u;
    // 0x2c2154: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C2150u, 0x2C2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2158u;
label_2c2158:
    // 0x2c2158: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2158u;
    {
        const bool branch_taken_0x2c2158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2158u;
        // 0x2c215c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2158) {
            ctx->pc = 0x2C2170u;
            goto label_2c2170;
        }
    }
    ctx->pc = 0x2C2160u;
    // 0x2c2160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c2160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2164: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c2164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c2168: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2168u;
    {
        const bool branch_taken_0x2c2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2168u;
        // 0x2c216c: 0xc6350b10  lwc1        $f21, 0xB10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2168) {
            ctx->pc = 0x2C2188u;
            goto label_2c2188;
        }
    }
    ctx->pc = 0x2C2170u;
label_2c2170:
    // 0x2c2170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c2174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c2174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c2178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c2178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c217c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c217cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c2180: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2c2180u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2c2184: 0xc6350b10  lwc1        $f21, 0xB10($s1)
    ctx->pc = 0x2c2184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c2188:
    // 0x2c2188: 0xc7809100  lwc1        $f0, -0x6F00($gp)
    ctx->pc = 0x2c2188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c218c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c2190: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c2190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2194: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2c2194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2c2198: 0xc7819104  lwc1        $f1, -0x6EFC($gp)
    ctx->pc = 0x2c2198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c219c: 0x46026502  mul.s       $f20, $f12, $f2
    ctx->pc = 0x2c219cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2c21a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c21a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c21a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c21a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c21a8: 0x0  nop
    ctx->pc = 0x2c21a8u;
    // NOP
    // 0x2c21ac: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2C21ACu;
    {
        const bool branch_taken_0x2c21ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21ACu;
        // 0x2c21b0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21ac) {
            ctx->pc = 0x2C220Cu;
            goto label_2c220c;
        }
    }
    ctx->pc = 0x2C21B4u;
    // 0x2c21b4: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x2c21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c21b8: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x2c21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x2c21bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c21bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c21c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c21c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c21c4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c21c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c21c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c21cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c21ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c21d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c21d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c21d4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c21d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c21d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2C21D8u;
    {
        const bool branch_taken_0x2c21d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c21d8) {
            ctx->pc = 0x2C220Cu;
            goto label_2c220c;
        }
    }
    ctx->pc = 0x2C21E0u;
    // 0x2c21e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c21e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c21e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c21e8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2c21e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c21ec: 0x0  nop
    ctx->pc = 0x2c21ecu;
    // NOP
    // 0x2c21f0: 0x450002c6  bc1f        . + 4 + (0x2C6 << 2)
    ctx->pc = 0x2C21F0u;
    {
        const bool branch_taken_0x2c21f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21F0u;
        // 0x2c21f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21f0) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C21F8u;
    // 0x2c21f8: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x2c21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x2c21fc: 0x144002c3  bnez        $v0, . + 4 + (0x2C3 << 2)
    ctx->pc = 0x2C21FCu;
    {
        const bool branch_taken_0x2c21fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21FCu;
        // 0x2c2200: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21fc) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2204u;
    // 0x2c2204: 0x100002c1  b           . + 4 + (0x2C1 << 2)
    ctx->pc = 0x2C2204u;
    {
        const bool branch_taken_0x2c2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2204u;
        // 0x2c2208: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2204) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C220Cu;
label_2c220c:
    // 0x2c220c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c2210: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2c2210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2c2214: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2c2214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2218: 0x0  nop
    ctx->pc = 0x2c2218u;
    // NOP
    // 0x2c221c: 0x450102bb  bc1t        . + 4 + (0x2BB << 2)
    ctx->pc = 0x2C221Cu;
    {
        const bool branch_taken_0x2c221c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C221Cu;
        // 0x2c2220: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c221c) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2224u;
    // 0x2c2224: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C2224u;
    SET_GPR_U32(ctx, 31, 0x2C222Cu);
    ctx->pc = 0x2C2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2224u;
    // 0x2c2228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C2224u, 0x2C222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C222Cu;
label_2c222c:
    // 0x2c222c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2c222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2c2230: 0xdc259dd0  ld          $a1, -0x6230($at)
    ctx->pc = 0x2c2230u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9DD0u));
    // 0x2c2234: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2234u;
    SET_GPR_U32(ctx, 31, 0x2C223Cu);
    ctx->pc = 0x2C2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2234u;
    // 0x2c2238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2234u, 0x2C223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C223Cu;
label_2c223c:
    // 0x2c223c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C223Cu;
    {
        const bool branch_taken_0x2c223c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c223c) {
            ctx->pc = 0x2C225Cu;
            goto label_2c225c;
        }
    }
    ctx->pc = 0x2C2244u;
    // 0x2c2244: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x2c2244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2248: 0x0  nop
    ctx->pc = 0x2c2248u;
    // NOP
    // 0x2c224c: 0x450002ae  bc1f        . + 4 + (0x2AE << 2)
    ctx->pc = 0x2C224Cu;
    {
        const bool branch_taken_0x2c224c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C224Cu;
        // 0x2c2250: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c224c) {
            ctx->pc = 0x2C2D08u;
            goto label_2c2d08;
        }
    }
    ctx->pc = 0x2C2254u;
    // 0x2c2254: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x2C2254u;
    {
        const bool branch_taken_0x2c2254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2254u;
        // 0x2c2258: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2254) {
            ctx->pc = 0x2C2D10u;
            goto label_2c2d10;
        }
    }
    ctx->pc = 0x2C225Cu;
label_2c225c:
    // 0x2c225c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C225Cu;
    SET_GPR_U32(ctx, 31, 0x2C2264u);
    ctx->pc = 0x2C2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C225Cu;
    // 0x2c2260: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C225Cu, 0x2C2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2264u;
label_2c2264:
    // 0x2c2264: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2c2264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2c2268: 0xdc259dd8  ld          $a1, -0x6228($at)
    ctx->pc = 0x2c2268u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9DD8u));
    // 0x2c226c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C226Cu;
    SET_GPR_U32(ctx, 31, 0x2C2274u);
    ctx->pc = 0x2C2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C226Cu;
    // 0x2c2270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C226Cu, 0x2C2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2274u;
label_2c2274:
    // 0x2c2274: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2274u;
    {
        const bool branch_taken_0x2c2274 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c2274) {
            ctx->pc = 0x2C2278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2274u;
            // 0x2c2278: 0x8e240178  lw          $a0, 0x178($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2294u;
            goto label_2c2294;
        }
    }
    ctx->pc = 0x2C227Cu;
    // 0x2c227c: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x2c227cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2280: 0x0  nop
    ctx->pc = 0x2c2280u;
    // NOP
    // 0x2c2284: 0x450002a0  bc1f        . + 4 + (0x2A0 << 2)
    ctx->pc = 0x2C2284u;
    {
        const bool branch_taken_0x2c2284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2284u;
        // 0x2c2288: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2284) {
            ctx->pc = 0x2C2D08u;
            goto label_2c2d08;
        }
    }
    ctx->pc = 0x2C228Cu;
    // 0x2c228c: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x2C228Cu;
    {
        const bool branch_taken_0x2c228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C228Cu;
        // 0x2c2290: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c228c) {
            ctx->pc = 0x2C2D10u;
            goto label_2c2d10;
        }
    }
    ctx->pc = 0x2C2294u;
label_2c2294:
    // 0x2c2294: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2c2298: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2c2298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2c229c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c229cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c22a0: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2c22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2c22a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c22a8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c22ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c22acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c22b0: 0x10400296  beqz        $v0, . + 4 + (0x296 << 2)
    ctx->pc = 0x2C22B0u;
    {
        const bool branch_taken_0x2c22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22B0u;
        // 0x2c22b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22b0) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C22B8u;
    // 0x2c22b8: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x2c22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x2c22bc: 0x14400293  bnez        $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x2C22BCu;
    {
        const bool branch_taken_0x2c22bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22BCu;
        // 0x2c22c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22bc) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C22C4u;
    // 0x2c22c4: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x2C22C4u;
    {
        const bool branch_taken_0x2c22c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22C4u;
        // 0x2c22c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22c4) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C22CCu;
label_2c22cc:
    // 0x2c22cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c22d0: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C22D0u;
    {
        const bool branch_taken_0x2c22d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22D0u;
        // 0x2c22d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22d0) {
            ctx->pc = 0x2C22E0u;
            goto label_2c22e0;
        }
    }
    ctx->pc = 0x2C22D8u;
    // 0x2c22d8: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C22D8u;
    SET_GPR_U32(ctx, 31, 0x2C22E0u);
    ctx->pc = 0x2C22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22D8u;
    // 0x2c22dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C22D8u, 0x2C22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22E0u;
label_2c22e0:
    // 0x2c22e0: 0x8e230a94  lw          $v1, 0xA94($s1)
    ctx->pc = 0x2c22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c22e4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2c22e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2c22e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C22E8u;
    {
        const bool branch_taken_0x2c22e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E8u;
        // 0x2c22ec: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22e8) {
            ctx->pc = 0x2C22F8u;
            goto label_2c22f8;
        }
    }
    ctx->pc = 0x2C22F0u;
    // 0x2c22f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c22f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c22f4: 0xae220a94  sw          $v0, 0xA94($s1)
    ctx->pc = 0x2c22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
label_2c22f8:
    // 0x2c22f8: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c22f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c22fc: 0xc7809108  lwc1        $f0, -0x6EF8($gp)
    ctx->pc = 0x2c22fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2300: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2304: 0x0  nop
    ctx->pc = 0x2c2304u;
    // NOP
    // 0x2c2308: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2308u;
    {
        const bool branch_taken_0x2c2308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2308u;
        // 0x2c230c: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2308) {
            ctx->pc = 0x2C2330u;
            goto label_2c2330;
        }
    }
    ctx->pc = 0x2C2310u;
    // 0x2c2310: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2310u;
    {
        const bool branch_taken_0x2c2310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2310) {
            ctx->pc = 0x2C2314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2310u;
            // 0x2c2314: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C233Cu;
            goto label_2c233c;
        }
    }
    ctx->pc = 0x2C2318u;
    // 0x2c2318: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c231c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2c231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c2320: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c2320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2c2324: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2c2324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
    // 0x2c2328: 0x100003ff  b           . + 4 + (0x3FF << 2)
    ctx->pc = 0x2C2328u;
    {
        const bool branch_taken_0x2c2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2328u;
        // 0x2c232c: 0xae200aa8  sw          $zero, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2328) {
            ctx->pc = 0x2C3328u;
            goto label_2c3328;
        }
    }
    ctx->pc = 0x2C2330u;
label_2c2330:
    // 0x2c2330: 0x508003e8  beql        $a0, $zero, . + 4 + (0x3E8 << 2)
    ctx->pc = 0x2C2330u;
    {
        const bool branch_taken_0x2c2330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2330) {
            ctx->pc = 0x2C2334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2330u;
            // 0x2c2334: 0x8e230aa8  lw          $v1, 0xAA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32D4u;
            goto label_2c32d4;
        }
    }
    ctx->pc = 0x2C2338u;
    // 0x2c2338: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c233c:
    // 0x2c233c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2340: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2340u;
    {
        const bool branch_taken_0x2c2340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2340u;
        // 0x2c2344: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2340) {
            ctx->pc = 0x2C2354u;
            goto label_2c2354;
        }
    }
    ctx->pc = 0x2C2348u;
    // 0x2c2348: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c234c: 0x100003de  b           . + 4 + (0x3DE << 2)
    ctx->pc = 0x2C234Cu;
    {
        const bool branch_taken_0x2c234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C234Cu;
        // 0x2c2350: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c234c) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2354u;
label_2c2354:
    // 0x2c2354: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2354u;
    {
        const bool branch_taken_0x2c2354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2354u;
        // 0x2c2358: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2354) {
            ctx->pc = 0x2C2364u;
            goto label_2c2364;
        }
    }
    ctx->pc = 0x2C235Cu;
    // 0x2c235c: 0x100003da  b           . + 4 + (0x3DA << 2)
    ctx->pc = 0x2C235Cu;
    {
        const bool branch_taken_0x2c235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C235Cu;
        // 0x2c2360: 0xae200aa8  sw          $zero, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c235c) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2364u;
label_2c2364:
    // 0x2c2364: 0x100003d8  b           . + 4 + (0x3D8 << 2)
    ctx->pc = 0x2C2364u;
    {
        const bool branch_taken_0x2c2364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2364u;
        // 0x2c2368: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2364) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C236Cu;
label_2c236c:
    // 0x2c236c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c236cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c2370: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x2c2370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x2c2374: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c2374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c2378: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c2378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c237c: 0xae240aa8  sw          $a0, 0xAA8($s1)
    ctx->pc = 0x2c237cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 4));
    // 0x2c2380: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2C2380u;
    {
        const bool branch_taken_0x2c2380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2380u;
        // 0x2c2384: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2380) {
            ctx->pc = 0x2C2474u;
            goto label_2c2474;
        }
    }
    ctx->pc = 0x2C2388u;
label_2c2388:
    // 0x2c2388: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c2388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c238c: 0x8e2402a8  lw          $a0, 0x2A8($s1)
    ctx->pc = 0x2c238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2c2390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2394: 0xc099286  jal         func_264A18
    ctx->pc = 0x2C2394u;
    SET_GPR_U32(ctx, 31, 0x2C239Cu);
    ctx->pc = 0x2C2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2394u;
    // 0x2c2398: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A18u, 0x2C2394u, 0x2C239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C239Cu;
label_2c239c:
    // 0x2c239c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c239cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23a0: 0x1aa00034  blez        $s5, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C23A0u;
    {
        const bool branch_taken_0x2c23a0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2C23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23A0u;
        // 0x2c23a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23a0) {
            ctx->pc = 0x2C2474u;
            goto label_2c2474;
        }
    }
    ctx->pc = 0x2C23A8u;
    // 0x2c23a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c23ac: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2c23acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23b0: 0x24570920  addiu       $s7, $v0, 0x920
    ctx->pc = 0x2c23b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x2c23b4: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2c23b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2c23b8:
    // 0x2c23b8: 0xc0b04ca  jal         func_2C1328
    ctx->pc = 0x2C23B8u;
    SET_GPR_U32(ctx, 31, 0x2C23C0u);
    ctx->pc = 0x2C23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23B8u;
    // 0x2c23bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1328u, 0x2C23B8u, 0x2C23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23C0u;
label_2c23c0:
    // 0x2c23c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c23c4: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C23C4u;
    {
        const bool branch_taken_0x2c23c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23C4u;
        // 0x2c23c8: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23c4) {
            ctx->pc = 0x2C2464u;
            goto label_2c2464;
        }
    }
    ctx->pc = 0x2C23CCu;
    // 0x2c23cc: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x2c23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2c23d0: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x2c23d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c23d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c23d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c23d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c23d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2c23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c23e0: 0xc0b1a02  jal         func_2C6808
    ctx->pc = 0x2C23E0u;
    SET_GPR_U32(ctx, 31, 0x2C23E8u);
    ctx->pc = 0x2C23E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23E0u;
    // 0x2c23e4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6808u, 0x2C23E0u, 0x2C23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23E8u;
label_2c23e8:
    // 0x2c23e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C23E8u;
    {
        const bool branch_taken_0x2c23e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23E8u;
        // 0x2c23ec: 0x8f83a2ec  lw          $v1, -0x5D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23e8) {
            ctx->pc = 0x2C2464u;
            goto label_2c2464;
        }
    }
    ctx->pc = 0x2C23F0u;
    // 0x2c23f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2c23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c23f4: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2c23f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c23f8: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2c23f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c23fc: 0x962818  mult        $a1, $a0, $s6
    ctx->pc = 0x2c23fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c2400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2404: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2408: 0xb72021  addu        $a0, $a1, $s7
    ctx->pc = 0x2c2408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2c240c: 0xe6210aec  swc1        $f1, 0xAEC($s1)
    ctx->pc = 0x2c240cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c2410: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x2c2410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c2414: 0xe6240af0  swc1        $f4, 0xAF0($s1)
    ctx->pc = 0x2c2414u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c2418: 0xc4450014  lwc1        $f5, 0x14($v0)
    ctx->pc = 0x2c2418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c241c: 0xe6250af4  swc1        $f5, 0xAF4($s1)
    ctx->pc = 0x2c241cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c2420: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c2420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2424: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2c2424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2428: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x2c2428u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c242c: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x2c242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c2430: 0x46041581  sub.s       $f22, $f2, $f4
    ctx->pc = 0x2c2430u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c2434: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2438: 0x46051d01  sub.s       $f20, $f3, $f5
    ctx->pc = 0x2c2438u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2c243c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c243cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c2440: 0x4616b082  mul.s       $f2, $f22, $f22
    ctx->pc = 0x2c2440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2c2444: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x2c2444u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c2448: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c2448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c244c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c244cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c2450: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x2c2450u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c2454: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2c2454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2458: 0x0  nop
    ctx->pc = 0x2c2458u;
    // NOP
    // 0x2c245c: 0x4503ffc3  bc1tl       . + 4 + (-0x3D << 2)
    ctx->pc = 0x2C245Cu;
    {
        const bool branch_taken_0x2c245c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c245c) {
            ctx->pc = 0x2C2460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C245Cu;
            // 0x2c2460: 0x8e220a90  lw          $v0, 0xA90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C236Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c236c;
        }
    }
    ctx->pc = 0x2C2464u;
label_2c2464:
    // 0x2c2464: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c2464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c2468: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x2c2468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2c246c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2C246Cu;
    {
        const bool branch_taken_0x2c246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C246Cu;
        // 0x2c2470: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c246c) {
            ctx->pc = 0x2C23B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c23b8;
        }
    }
    ctx->pc = 0x2C2474u;
label_2c2474:
    // 0x2c2474: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
    // 0x2c2478: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c2478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c247c: 0x50620392  beql        $v1, $v0, . + 4 + (0x392 << 2)
    ctx->pc = 0x2C247Cu;
    {
        const bool branch_taken_0x2c247c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c247c) {
            ctx->pc = 0x2C2480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C247Cu;
            // 0x2c2480: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2484u;
    // 0x2c2484: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C2484u;
    SET_GPR_U32(ctx, 31, 0x2C248Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C2484u, 0x2C248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C248Cu;
label_2c248c:
    // 0x2c248c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C248Cu;
    {
        const bool branch_taken_0x2c248c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C248Cu;
        // 0x2c2490: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c248c) {
            ctx->pc = 0x2C24A0u;
            goto label_2c24a0;
        }
    }
    ctx->pc = 0x2C2494u;
    // 0x2c2494: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c2494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2498u;
    {
        const bool branch_taken_0x2c2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2498u;
        // 0x2c249c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2498) {
            ctx->pc = 0x2C24B4u;
            goto label_2c24b4;
        }
    }
    ctx->pc = 0x2C24A0u;
label_2c24a0:
    // 0x2c24a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c24a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c24a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c24a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c24a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c24ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c24acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c24b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c24b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c24b4:
    // 0x2c24b4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c24b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c24b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c24b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c24bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c24bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c24c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c24c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c24c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c24c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c24c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c24c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c24cc: 0x0  nop
    ctx->pc = 0x2c24ccu;
    // NOP
    // 0x2c24d0: 0x4501020e  bc1t        . + 4 + (0x20E << 2)
    ctx->pc = 0x2C24D0u;
    {
        const bool branch_taken_0x2c24d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24D0u;
        // 0x2c24d4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24d0) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C24D8u;
    // 0x2c24d8: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x2C24D8u;
    {
        const bool branch_taken_0x2c24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24D8u;
        // 0x2c24dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24d8) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C24E0u;
label_2c24e0:
    // 0x2c24e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c24e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24e4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C24E4u;
    SET_GPR_U32(ctx, 31, 0x2C24ECu);
    ctx->pc = 0x2C24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C24E4u;
    // 0x2c24e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C24E4u, 0x2C24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24ECu;
label_2c24ec:
    // 0x2c24ec: 0xc6200b28  lwc1        $f0, 0xB28($s1)
    ctx->pc = 0x2c24ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c24f0: 0xc6210aec  lwc1        $f1, 0xAEC($s1)
    ctx->pc = 0x2c24f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c24f4: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2c24f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2c24f8: 0xc6240af0  lwc1        $f4, 0xAF0($s1)
    ctx->pc = 0x2c24f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c24fc: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c24fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2500: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2c2500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2504: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x2c2504u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c2508: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x2c2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c250c: 0x46041581  sub.s       $f22, $f2, $f4
    ctx->pc = 0x2c250cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c2510: 0xc6210af4  lwc1        $f1, 0xAF4($s1)
    ctx->pc = 0x2c2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2514: 0xc784910c  lwc1        $f4, -0x6EF4($gp)
    ctx->pc = 0x2c2514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c2518: 0x46011d01  sub.s       $f20, $f3, $f1
    ctx->pc = 0x2c2518u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c251c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c251cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c2520: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2c2520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2c2524: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c2524u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c2528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c252c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c252cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c2530: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x2c2530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2534: 0x0  nop
    ctx->pc = 0x2c2534u;
    // NOP
    // 0x2c2538: 0x45000362  bc1f        . + 4 + (0x362 << 2)
    ctx->pc = 0x2C2538u;
    {
        const bool branch_taken_0x2c2538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2538u;
        // 0x2c253c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2538) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2540u;
    // 0x2c2540: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c2544: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c2544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c2548: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x2c2548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2c254c: 0x8e240ad4  lw          $a0, 0xAD4($s1)
    ctx->pc = 0x2c254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c2550: 0x1000035d  b           . + 4 + (0x35D << 2)
    ctx->pc = 0x2C2550u;
    {
        const bool branch_taken_0x2c2550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2550u;
        // 0x2c2554: 0xae230a90  sw          $v1, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2550) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2558u;
label_2c2558:
    // 0x2c2558: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x2c2558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c255c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2560: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c2560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c2564: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c2564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c2568: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x2c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x2c256c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2570: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c2570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2574: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c2574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2578: 0x0  nop
    ctx->pc = 0x2c2578u;
    // NOP
    // 0x2c257c: 0x450101e3  bc1t        . + 4 + (0x1E3 << 2)
    ctx->pc = 0x2C257Cu;
    {
        const bool branch_taken_0x2c257c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C257Cu;
        // 0x2c2580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c257c) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2584u;
    // 0x2c2584: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x2C2584u;
    {
        const bool branch_taken_0x2c2584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2584u;
        // 0x2c2588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2584) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C258Cu;
label_2c258c:
    // 0x2c258c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C258Cu;
    SET_GPR_U32(ctx, 31, 0x2C2594u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C258Cu, 0x2C2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2594u;
label_2c2594:
    // 0x2c2594: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2594u;
    {
        const bool branch_taken_0x2c2594 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2594u;
        // 0x2c2598: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2594) {
            ctx->pc = 0x2C25A8u;
            goto label_2c25a8;
        }
    }
    ctx->pc = 0x2C259Cu;
    // 0x2c259c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c259cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c25a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C25A0u;
    {
        const bool branch_taken_0x2c25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A0u;
        // 0x2c25a4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25a0) {
            ctx->pc = 0x2C25BCu;
            goto label_2c25bc;
        }
    }
    ctx->pc = 0x2C25A8u;
label_2c25a8:
    // 0x2c25a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c25a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c25ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c25acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c25b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c25b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c25b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c25b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c25b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c25b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c25bc:
    // 0x2c25bc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c25bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c25c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c25c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c25c4: 0xc7819110  lwc1        $f1, -0x6EF0($gp)
    ctx->pc = 0x2c25c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c25c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c25c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c25cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c25ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c25d0: 0x0  nop
    ctx->pc = 0x2c25d0u;
    // NOP
    // 0x2c25d4: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x2C25D4u;
    {
        const bool branch_taken_0x2c25d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c25d4) {
            ctx->pc = 0x2C25D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C25D4u;
            // 0x2c25d8: 0x8e330ae4  lw          $s3, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C264Cu;
            goto label_2c264c;
        }
    }
    ctx->pc = 0x2C25DCu;
    // 0x2c25dc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C25DCu;
    SET_GPR_U32(ctx, 31, 0x2C25E4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C25DCu, 0x2C25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25E4u;
label_2c25e4:
    // 0x2c25e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C25E4u;
    {
        const bool branch_taken_0x2c25e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25E4u;
        // 0x2c25e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25e4) {
            ctx->pc = 0x2C25F8u;
            goto label_2c25f8;
        }
    }
    ctx->pc = 0x2C25ECu;
    // 0x2c25ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c25ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c25f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C25F0u;
    {
        const bool branch_taken_0x2c25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25F0u;
        // 0x2c25f4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25f0) {
            ctx->pc = 0x2C260Cu;
            goto label_2c260c;
        }
    }
    ctx->pc = 0x2C25F8u;
label_2c25f8:
    // 0x2c25f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c25f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c25fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c25fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c2600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2604: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c2604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c2608: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c2608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c260c:
    // 0x2c260c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c2610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2614: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c2614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c2618: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c2618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c261c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c261cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2620: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c2620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2624: 0x0  nop
    ctx->pc = 0x2c2624u;
    // NOP
    // 0x2c2628: 0x450001b8  bc1f        . + 4 + (0x1B8 << 2)
    ctx->pc = 0x2C2628u;
    {
        const bool branch_taken_0x2c2628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2628u;
        // 0x2c262c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2628) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2630u;
    // 0x2c2630: 0xc6200b10  lwc1        $f0, 0xB10($s1)
    ctx->pc = 0x2c2630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2634: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c2634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2638: 0x0  nop
    ctx->pc = 0x2c2638u;
    // NOP
    // 0x2c263c: 0x450101b3  bc1t        . + 4 + (0x1B3 << 2)
    ctx->pc = 0x2C263Cu;
    {
        const bool branch_taken_0x2c263c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C263Cu;
        // 0x2c2640: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c263c) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2644u;
    // 0x2c2644: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x2C2644u;
    {
        const bool branch_taken_0x2c2644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2644u;
        // 0x2c2648: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2644) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C264Cu;
label_2c264c:
    // 0x2c264c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c2650: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c2650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c2654: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2654u;
    {
        const bool branch_taken_0x2c2654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2654u;
        // 0x2c2658: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2654) {
            ctx->pc = 0x2C2680u;
            goto label_2c2680;
        }
    }
    ctx->pc = 0x2C265Cu;
    // 0x2c265c: 0x8e640160  lw          $a0, 0x160($s3)
    ctx->pc = 0x2c265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x2c2660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c2660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2664: 0x8c820a9c  lw          $v0, 0xA9C($a0)
    ctx->pc = 0x2c2664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
    // 0x2c2668: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2668u;
    {
        const bool branch_taken_0x2c2668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c2668) {
            ctx->pc = 0x2C266Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2668u;
            // 0x2c266c: 0xc4a20034  lwc1        $f2, 0x34($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2684u;
            goto label_2c2684;
        }
    }
    ctx->pc = 0x2C2670u;
    // 0x2c2670: 0x8c830aa8  lw          $v1, 0xAA8($a0)
    ctx->pc = 0x2c2670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2728)));
    // 0x2c2674: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c2678: 0x106201a4  beq         $v1, $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x2C2678u;
    {
        const bool branch_taken_0x2c2678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2678u;
        // 0x2c267c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2678) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2680u;
label_2c2680:
    // 0x2c2680: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2c2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c2684:
    // 0x2c2684: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c2684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2688: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c2688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c268c: 0xc4a30038  lwc1        $f3, 0x38($a1)
    ctx->pc = 0x2c268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c2690: 0x46020581  sub.s       $f22, $f0, $f2
    ctx->pc = 0x2c2690u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c2694: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2c2694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2698: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c269c: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2c269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c26a0: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x2c26a0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c26a4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2c26a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2c26a8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C26A8u;
    SET_GPR_U32(ctx, 31, 0x2C26B0u);
    ctx->pc = 0x2C26ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26A8u;
    // 0x2c26ac: 0x46031501  sub.s       $f20, $f2, $f3 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C26A8u, 0x2C26B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26B0u;
label_2c26b0:
    // 0x2c26b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c26b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c26b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26b8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C26B8u;
    SET_GPR_U32(ctx, 31, 0x2C26C0u);
    ctx->pc = 0x2C26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26B8u;
    // 0x2c26bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C26B8u, 0x2C26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26C0u;
label_2c26c0:
    // 0x2c26c0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C26C0u;
    {
        const bool branch_taken_0x2c26c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26C0u;
        // 0x2c26c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26c0) {
            ctx->pc = 0x2C26D4u;
            goto label_2c26d4;
        }
    }
    ctx->pc = 0x2C26C8u;
    // 0x2c26c8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C26C8u;
    SET_GPR_U32(ctx, 31, 0x2C26D0u);
    ctx->pc = 0x2C26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26C8u;
    // 0x2c26cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C26C8u, 0x2C26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26D0u;
label_2c26d0:
    // 0x2c26d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c26d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c26d4:
    // 0x2c26d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2c26d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2c26d8: 0xdc259de0  ld          $a1, -0x6220($at)
    ctx->pc = 0x2c26d8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9DE0u));
    // 0x2c26dc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C26DCu;
    SET_GPR_U32(ctx, 31, 0x2C26E4u);
    ctx->pc = 0x2C26E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26DCu;
    // 0x2c26e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C26DCu, 0x2C26E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26E4u;
label_2c26e4:
    // 0x2c26e4: 0x1c400189  bgtz        $v0, . + 4 + (0x189 << 2)
    ctx->pc = 0x2C26E4u;
    {
        const bool branch_taken_0x2c26e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26E4u;
        // 0x2c26e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26e4) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C26ECu;
    // 0x2c26ec: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c26ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c26f0: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2c26f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2c26f4: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c26f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c26f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c26f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c26fc: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c26fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c2700: 0x0  nop
    ctx->pc = 0x2c2700u;
    // NOP
    // 0x2c2704: 0x0  nop
    ctx->pc = 0x2c2704u;
    // NOP
    // 0x2c2708: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c2708u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c270c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c270cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2710: 0x0  nop
    ctx->pc = 0x2c2710u;
    // NOP
    // 0x2c2714: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2714u;
    {
        const bool branch_taken_0x2c2714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2714) {
            ctx->pc = 0x2C2718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2714u;
            // 0x2c2718: 0x8e2a0178  lw          $t2, 0x178($s1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C272Cu;
            goto label_2c272c;
        }
    }
    ctx->pc = 0x2C271Cu;
    // 0x2c271c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C271Cu;
    SET_GPR_U32(ctx, 31, 0x2C2724u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C271Cu, 0x2C2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2724u;
label_2c2724:
    // 0x2c2724: 0x8e330ae4  lw          $s3, 0xAE4($s1)
    ctx->pc = 0x2c2724u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c2728: 0x8e2a0178  lw          $t2, 0x178($s1)
    ctx->pc = 0x2c2728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_2c272c:
    // 0x2c272c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2c272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2734: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c2734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2738: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c2738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c273c: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x2c273cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2c2740: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x2c2740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x2c2744: 0x0  nop
    ctx->pc = 0x2c2744u;
    // NOP
    // 0x2c2748: 0x0  nop
    ctx->pc = 0x2c2748u;
    // NOP
    // 0x2c274c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2c274cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2c2750: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c2754: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c2754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c2758: 0xc6650030  lwc1        $f5, 0x30($s3)
    ctx->pc = 0x2c2758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c275c: 0x3c0286a4  lui         $v0, 0x86A4
    ctx->pc = 0x2c275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34468 << 16));
    // 0x2c2760: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2c2760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c2764: 0x3442c2e1  ori         $v0, $v0, 0xC2E1
    ctx->pc = 0x2c2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49889);
    // 0x2c2768: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2c276c: 0x8f8bb234  lw          $t3, -0x4DCC($gp)
    ctx->pc = 0x2c276cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c2770: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c2770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2774: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x2c2774u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2c2778: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c2778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c277c: 0xc78c9114  lwc1        $f12, -0x6EEC($gp)
    ctx->pc = 0x2c277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2780: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x2c2780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2c2784: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2c2784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c2788: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c2788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c278c: 0x26260b04  addiu       $a2, $s1, 0xB04
    ctx->pc = 0x2c278cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2820));
    // 0x2c2790: 0x4602b0c2  mul.s       $f3, $f22, $f2
    ctx->pc = 0x2c2790u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x2c2794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2798: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2c2798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2c279c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2c279cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2c27a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c27a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c27a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c27a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c27a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27ac: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2c27acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2c27b0: 0xe6210b04  swc1        $f1, 0xB04($s1)
    ctx->pc = 0x2c27b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2820), bits); }
    // 0x2c27b4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c27b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c27b8: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2c27b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c27bc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c27bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c27c0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c27c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c27c4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2c27c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2c27c8: 0xe6230b08  swc1        $f3, 0xB08($s1)
    ctx->pc = 0x2c27c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2824), bits); }
    // 0x2c27cc: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2c27ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c27d0: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c27d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c27d4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c27d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c27d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c27d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c27dc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c27dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c27e0: 0xe6220b0c  swc1        $f2, 0xB0C($s1)
    ctx->pc = 0x2c27e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2828), bits); }
    // 0x2c27e4: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x2C27E4u;
    SET_GPR_U32(ctx, 31, 0x2C27ECu);
    ctx->pc = 0x2C27E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27E4u;
    // 0x2c27e8: 0xc56d0084  lwc1        $f13, 0x84($t3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x2C27E4u, 0x2C27ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27ECu;
label_2c27ec:
    // 0x2c27ec: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x2c27ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c27f0: 0xc6200b04  lwc1        $f0, 0xB04($s1)
    ctx->pc = 0x2c27f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c27f4: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2c27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c27f8: 0xc6210b08  lwc1        $f1, 0xB08($s1)
    ctx->pc = 0x2c27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c27fc: 0x46001541  sub.s       $f21, $f2, $f0
    ctx->pc = 0x2c27fcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c2800: 0xc6220b0c  lwc1        $f2, 0xB0C($s1)
    ctx->pc = 0x2c2800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2804: 0x46011d81  sub.s       $f22, $f3, $f1
    ctx->pc = 0x2c2804u;
    ctx->f[22] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c2808: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x2c2808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c280c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c280cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c2810: 0xc7839118  lwc1        $f3, -0x6EE8($gp)
    ctx->pc = 0x2c2810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c2814: 0x46022501  sub.s       $f20, $f4, $f2
    ctx->pc = 0x2c2814u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c2818: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2c2818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2c281c: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c281cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c2820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2824: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c2824u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c2828: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x2c2828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c282c: 0x0  nop
    ctx->pc = 0x2c282cu;
    // NOP
    // 0x2c2830: 0x45000135  bc1f        . + 4 + (0x135 << 2)
    ctx->pc = 0x2C2830u;
    {
        const bool branch_taken_0x2c2830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2830u;
        // 0x2c2834: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2830) {
            ctx->pc = 0x2C2D08u;
            goto label_2c2d08;
        }
    }
    ctx->pc = 0x2C2838u;
    // 0x2c2838: 0x0  nop
    ctx->pc = 0x2c2838u;
    // NOP
    // 0x2c283c: 0x0  nop
    ctx->pc = 0x2c283cu;
    // NOP
    // 0x2c2840: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c2840u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c2844: 0xae220aa8  sw          $v0, 0xAA8($s1)
    ctx->pc = 0x2c2844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
    // 0x2c2848: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c2848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c284c: 0x0  nop
    ctx->pc = 0x2c284cu;
    // NOP
    // 0x2c2850: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2850u;
    {
        const bool branch_taken_0x2c2850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2850u;
        // 0x2c2854: 0xae200b4c  sw          $zero, 0xB4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2850) {
            ctx->pc = 0x2C2860u;
            goto label_2c2860;
        }
    }
    ctx->pc = 0x2C2858u;
    // 0x2c2858: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C2858u;
    SET_GPR_U32(ctx, 31, 0x2C2860u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C2858u, 0x2C2860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2860u;
label_2c2860:
    // 0x2c2860: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x2C2860u;
    {
        const bool branch_taken_0x2c2860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2860u;
        // 0x2c2864: 0xe6200aac  swc1        $f0, 0xAAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2860) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2868u;
label_2c2868:
    // 0x2c2868: 0xc0b057e  jal         func_2C15F8
    ctx->pc = 0x2C2868u;
    SET_GPR_U32(ctx, 31, 0x2C2870u);
    ctx->pc = 0x2C286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2868u;
    // 0x2c286c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F8u, 0x2C2868u, 0x2C2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2870u;
label_2c2870:
    // 0x2c2870: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c2870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2874: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2878: 0x0  nop
    ctx->pc = 0x2c2878u;
    // NOP
    // 0x2c287c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2C287Cu;
    {
        const bool branch_taken_0x2c287c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c287c) {
            ctx->pc = 0x2C2880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C287Cu;
            // 0x2c2880: 0xc6200b2c  lwc1        $f0, 0xB2C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C289Cu;
            goto label_2c289c;
        }
    }
    ctx->pc = 0x2C2884u;
    // 0x2c2884: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c2888: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c2888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c288c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2c288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2c2890: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c2890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c2894: 0xae230a90  sw          $v1, 0xA90($s1)
    ctx->pc = 0x2c2894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
    // 0x2c2898: 0xc6200b2c  lwc1        $f0, 0xB2C($s1)
    ctx->pc = 0x2c2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c289c:
    // 0x2c289c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2c28a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c28a4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C28A4u;
    SET_GPR_U32(ctx, 31, 0x2C28ACu);
    ctx->pc = 0x2C28A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28A4u;
    // 0x2c28a8: 0xe6200b38  swc1        $f0, 0xB38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C28A4u, 0x2C28ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28ACu;
label_2c28ac:
    // 0x2c28ac: 0xc6220b0c  lwc1        $f2, 0xB0C($s1)
    ctx->pc = 0x2c28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c28b0: 0xc6230b04  lwc1        $f3, 0xB04($s1)
    ctx->pc = 0x2c28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c28b4: 0xc6200b08  lwc1        $f0, 0xB08($s1)
    ctx->pc = 0x2c28b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c28b8: 0xe6220af4  swc1        $f2, 0xAF4($s1)
    ctx->pc = 0x2c28b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
    // 0x2c28bc: 0xe6230aec  swc1        $f3, 0xAEC($s1)
    ctx->pc = 0x2c28bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c28c0: 0xe6200af0  swc1        $f0, 0xAF0($s1)
    ctx->pc = 0x2c28c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c28c4: 0xc784911c  lwc1        $f4, -0x6EE4($gp)
    ctx->pc = 0x2c28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c28c8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2c28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c28cc: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2c28ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c28d0: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x2c28d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c28d4: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x2c28d4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c28d8: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2c28d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2c28dc: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2c28dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c28e0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2c28e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c28e4: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x2c28e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c28e8: 0x0  nop
    ctx->pc = 0x2c28e8u;
    // NOP
    // 0x2c28ec: 0x45010107  bc1t        . + 4 + (0x107 << 2)
    ctx->pc = 0x2C28ECu;
    {
        const bool branch_taken_0x2c28ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28ECu;
        // 0x2c28f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28ec) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C28F4u;
    // 0x2c28f4: 0x8e221194  lw          $v0, 0x1194($s1)
    ctx->pc = 0x2c28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4500)));
    // 0x2c28f8: 0x14400104  bnez        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x2C28F8u;
    {
        const bool branch_taken_0x2c28f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28F8u;
        // 0x2c28fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28f8) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2900u;
    // 0x2c2900: 0xc62c0adc  lwc1        $f12, 0xADC($s1)
    ctx->pc = 0x2c2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2904: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C2904u;
    SET_GPR_U32(ctx, 31, 0x2C290Cu);
    ctx->pc = 0x2C2908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2904u;
    // 0x2c2908: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C2904u, 0x2C290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C290Cu;
label_2c290c:
    // 0x2c290c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c290cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2910: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c2910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2914: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2914u;
    SET_GPR_U32(ctx, 31, 0x2C291Cu);
    ctx->pc = 0x2C2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2914u;
    // 0x2c2918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2914u, 0x2C291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C291Cu;
label_2c291c:
    // 0x2c291c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C291Cu;
    {
        const bool branch_taken_0x2c291c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C291Cu;
        // 0x2c2920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c291c) {
            ctx->pc = 0x2C2930u;
            goto label_2c2930;
        }
    }
    ctx->pc = 0x2C2924u;
    // 0x2c2924: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C2924u;
    SET_GPR_U32(ctx, 31, 0x2C292Cu);
    ctx->pc = 0x2C2928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2924u;
    // 0x2c2928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C2924u, 0x2C292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C292Cu;
label_2c292c:
    // 0x2c292c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c292cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2930:
    // 0x2c2930: 0x34058068  ori         $a1, $zero, 0x8068
    ctx->pc = 0x2c2930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x2c2934: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c2934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c2938: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2938u;
    SET_GPR_U32(ctx, 31, 0x2C2940u);
    ctx->pc = 0x2C293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2938u;
    // 0x2c293c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2938u, 0x2C2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2940u;
label_2c2940:
    // 0x2c2940: 0x18400260  blez        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x2C2940u;
    {
        const bool branch_taken_0x2c2940 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2940u;
        // 0x2c2944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2940) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2948u;
    // 0x2c2948: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x2C2948u;
    {
        const bool branch_taken_0x2c2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2948u;
        // 0x2c294c: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2948) {
            ctx->pc = 0x2C2D10u;
            goto label_2c2d10;
        }
    }
    ctx->pc = 0x2C2950u;
label_2c2950:
    // 0x2c2950: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2c2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c2954: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2c2954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c2958: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2c2958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c295c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C295Cu;
    {
        const bool branch_taken_0x2c295c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C295Cu;
        // 0x2c2960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c295c) {
            ctx->pc = 0x2C2984u;
            goto label_2c2984;
        }
    }
    ctx->pc = 0x2C2964u;
    // 0x2c2964: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x2c2964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x2c2968: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2c2968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2c296c: 0x27a701a4  addiu       $a3, $sp, 0x1A4
    ctx->pc = 0x2c296cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x2c2970: 0x27a801a8  addiu       $t0, $sp, 0x1A8
    ctx->pc = 0x2c2970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2c2974: 0xc085564  jal         func_215590
    ctx->pc = 0x2C2974u;
    SET_GPR_U32(ctx, 31, 0x2C297Cu);
    ctx->pc = 0x2C2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2974u;
    // 0x2c2978: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215590u, 0x2C2974u, 0x2C297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C297Cu;
label_2c297c:
    // 0x2c297c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C297Cu;
    {
        const bool branch_taken_0x2c297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C297Cu;
        // 0x2c2980: 0xc64c0050  lwc1        $f12, 0x50($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c297c) {
            ctx->pc = 0x2C29A0u;
            goto label_2c29a0;
        }
    }
    ctx->pc = 0x2C2984u;
label_2c2984:
    // 0x2c2984: 0x24050263  addiu       $a1, $zero, 0x263
    ctx->pc = 0x2c2984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    // 0x2c2988: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2c2988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2c298c: 0x27a701a4  addiu       $a3, $sp, 0x1A4
    ctx->pc = 0x2c298cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x2c2990: 0x27a801a8  addiu       $t0, $sp, 0x1A8
    ctx->pc = 0x2c2990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2c2994: 0xc085564  jal         func_215590
    ctx->pc = 0x2C2994u;
    SET_GPR_U32(ctx, 31, 0x2C299Cu);
    ctx->pc = 0x2C2998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2994u;
    // 0x2c2998: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215590u, 0x2C2994u, 0x2C299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C299Cu;
label_2c299c:
    // 0x2c299c: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x2c299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c29a0:
    // 0x2c29a0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2c29a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c29a4: 0xc7819120  lwc1        $f1, -0x6EE0($gp)
    ctx->pc = 0x2c29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c29a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c29a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29ac: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c29acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c29b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c29b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c29b4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2c29b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c29b8: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2c29b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c29bc: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2c29bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c29c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c29c4: 0x0  nop
    ctx->pc = 0x2c29c4u;
    // NOP
    // 0x2c29c8: 0x0  nop
    ctx->pc = 0x2c29c8u;
    // NOP
    // 0x2c29cc: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2c29ccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x2c29d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2c29d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2c29d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c29d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c29d8: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C29D8u;
    SET_GPR_U32(ctx, 31, 0x2C29E0u);
    ctx->pc = 0x2C29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29D8u;
    // 0x2c29dc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C29D8u, 0x2C29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29E0u;
label_2c29e0:
    // 0x2c29e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c29e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29e4: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C29E4u;
    SET_GPR_U32(ctx, 31, 0x2C29ECu);
    ctx->pc = 0x2C29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29E4u;
    // 0x2c29e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C29E4u, 0x2C29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29ECu;
label_2c29ec:
    // 0x2c29ec: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2c29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c29f0: 0x3c0286a4  lui         $v0, 0x86A4
    ctx->pc = 0x2c29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34468 << 16));
    // 0x2c29f4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c29f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c29f8: 0x3442c2e1  ori         $v0, $v0, 0xC2E1
    ctx->pc = 0x2c29f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49889);
    // 0x2c29fc: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2c29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c2a00: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2c2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c2a04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2a08: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c2a0c: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x2c2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2c2a10: 0xc78c9124  lwc1        $f12, -0x6EDC($gp)
    ctx->pc = 0x2c2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2a14: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c2a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c2a18: 0x26260b04  addiu       $a2, $s1, 0xB04
    ctx->pc = 0x2c2a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2820));
    // 0x2c2a1c: 0xe6200b04  swc1        $f0, 0xB04($s1)
    ctx->pc = 0x2c2a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2820), bits); }
    // 0x2c2a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c2a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c2a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a2c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c2a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2a30: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c2a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2a34: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2c2a34u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2c2a38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c2a38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c2a3c: 0xe6210b08  swc1        $f1, 0xB08($s1)
    ctx->pc = 0x2c2a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2824), bits); }
    // 0x2c2a40: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2a44: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c2a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2a48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2a4c: 0xe6200b0c  swc1        $f0, 0xB0C($s1)
    ctx->pc = 0x2c2a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2828), bits); }
    // 0x2c2a50: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x2C2A50u;
    SET_GPR_U32(ctx, 31, 0x2C2A58u);
    ctx->pc = 0x2C2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A50u;
    // 0x2c2a54: 0xc46d0084  lwc1        $f13, 0x84($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x2C2A50u, 0x2C2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A58u;
label_2c2a58:
    // 0x2c2a58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c2a5c: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2C2A5Cu;
    {
        const bool branch_taken_0x2c2a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A5Cu;
        // 0x2c2a60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a5c) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2A64u;
    // 0x2c2a64: 0xc64d0050  lwc1        $f13, 0x50($s2)
    ctx->pc = 0x2c2a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c2a68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c2a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a6c: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2C2A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A74u);
    ctx->pc = 0x2C2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A6Cu;
    // 0x2c2a70: 0xc64c004c  lwc1        $f12, 0x4C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2C2A6Cu, 0x2C2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A74u;
label_2c2a74:
    // 0x2c2a74: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C2A74u;
    SET_GPR_U32(ctx, 31, 0x2C2A7Cu);
    ctx->pc = 0x2C2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A74u;
    // 0x2c2a78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C2A74u, 0x2C2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A7Cu;
label_2c2a7c:
    // 0x2c2a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a84: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2A84u;
    SET_GPR_U32(ctx, 31, 0x2C2A8Cu);
    ctx->pc = 0x2C2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A84u;
    // 0x2c2a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2A84u, 0x2C2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A8Cu;
label_2c2a8c:
    // 0x2c2a8c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2A8Cu;
    {
        const bool branch_taken_0x2c2a8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A8Cu;
        // 0x2c2a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a8c) {
            ctx->pc = 0x2C2AA0u;
            goto label_2c2aa0;
        }
    }
    ctx->pc = 0x2C2A94u;
    // 0x2c2a94: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C2A94u;
    SET_GPR_U32(ctx, 31, 0x2C2A9Cu);
    ctx->pc = 0x2C2A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A94u;
    // 0x2c2a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C2A94u, 0x2C2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A9Cu;
label_2c2a9c:
    // 0x2c2a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2aa0:
    // 0x2c2aa0: 0x3405805c  ori         $a1, $zero, 0x805C
    ctx->pc = 0x2c2aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32860);
    // 0x2c2aa4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c2aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c2aa8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2AA8u;
    SET_GPR_U32(ctx, 31, 0x2C2AB0u);
    ctx->pc = 0x2C2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AA8u;
    // 0x2c2aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2AA8u, 0x2C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AB0u;
label_2c2ab0:
    // 0x2c2ab0: 0x4410096  bgez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2C2AB0u;
    {
        const bool branch_taken_0x2c2ab0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AB0u;
        // 0x2c2ab4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ab0) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2AB8u;
    // 0x2c2ab8: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c2abc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c2ac0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2ac4: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x2c2ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x2c2ac8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c2ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c2acc: 0xae240aa8  sw          $a0, 0xAA8($s1)
    ctx->pc = 0x2c2accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 4));
    // 0x2c2ad0: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x2C2AD0u;
    {
        const bool branch_taken_0x2c2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AD0u;
        // 0x2c2ad4: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ad0) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2AD8u;
label_2c2ad8:
    // 0x2c2ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2adc: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2ADCu;
    SET_GPR_U32(ctx, 31, 0x2C2AE4u);
    ctx->pc = 0x2C2AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2ADCu;
    // 0x2c2ae0: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2ADCu, 0x2C2AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AE4u;
label_2c2ae4:
    // 0x2c2ae4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C2AE4u;
    {
        const bool branch_taken_0x2c2ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AE4u;
        // 0x2c2ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ae4) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2AECu;
    // 0x2c2aec: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2AECu;
    SET_GPR_U32(ctx, 31, 0x2C2AF4u);
    ctx->pc = 0x2C2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AECu;
    // 0x2c2af0: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2AECu, 0x2C2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AF4u;
label_2c2af4:
    // 0x2c2af4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C2AF4u;
    {
        const bool branch_taken_0x2c2af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AF4u;
        // 0x2c2af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2af4) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2AFCu;
    // 0x2c2afc: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2AFCu;
    SET_GPR_U32(ctx, 31, 0x2C2B04u);
    ctx->pc = 0x2C2B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AFCu;
    // 0x2c2b00: 0x24050262  addiu       $a1, $zero, 0x262 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2AFCu, 0x2C2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B04u;
label_2c2b04:
    // 0x2c2b04: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C2B04u;
    {
        const bool branch_taken_0x2c2b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B04u;
        // 0x2c2b08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b04) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2B0Cu;
    // 0x2c2b0c: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B14u);
    ctx->pc = 0x2C2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B0Cu;
    // 0x2c2b10: 0x24050263  addiu       $a1, $zero, 0x263 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2B0Cu, 0x2C2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B14u;
label_2c2b14:
    // 0x2c2b14: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C2B14u;
    {
        const bool branch_taken_0x2c2b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B14u;
        // 0x2c2b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b14) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2B1Cu;
    // 0x2c2b1c: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B24u);
    ctx->pc = 0x2C2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B1Cu;
    // 0x2c2b20: 0x24050264  addiu       $a1, $zero, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2B1Cu, 0x2C2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B24u;
label_2c2b24:
    // 0x2c2b24: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2B24u;
    {
        const bool branch_taken_0x2c2b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B24u;
        // 0x2c2b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b24) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2B2Cu;
    // 0x2c2b2c: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2B2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B34u);
    ctx->pc = 0x2C2B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B2Cu;
    // 0x2c2b30: 0x24050265  addiu       $a1, $zero, 0x265 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2B2Cu, 0x2C2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B34u;
label_2c2b34:
    // 0x2c2b34: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2B34u;
    {
        const bool branch_taken_0x2c2b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b34) {
            ctx->pc = 0x2C2B9Cu;
            goto label_2c2b9c;
        }
    }
    ctx->pc = 0x2C2B3Cu;
    // 0x2c2b3c: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c2b40: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2c2b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c2b44: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2c2b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2c2b48: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2c2b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2b4c: 0xae220a94  sw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
    // 0x2c2b50: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2c2b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2c2b54: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c2b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c2b58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c2b5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2B5Cu;
    {
        const bool branch_taken_0x2c2b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B5Cu;
        // 0x2c2b60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b5c) {
            ctx->pc = 0x2C2B80u;
            goto label_2c2b80;
        }
    }
    ctx->pc = 0x2C2B64u;
    // 0x2c2b64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c2b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2b68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2b6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c2b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c2b70: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C2B70u;
    SET_GPR_U32(ctx, 31, 0x2C2B78u);
    ctx->pc = 0x2C2B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B70u;
    // 0x2c2b74: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C2B70u, 0x2C2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B78u;
label_2c2b78:
    // 0x2c2b78: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x2C2B78u;
    {
        const bool branch_taken_0x2c2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B78u;
        // 0x2c2b7c: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b78) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2B80u;
label_2c2b80:
    // 0x2c2b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c2b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2b84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2b88: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c2b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c2b8c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B94u);
    ctx->pc = 0x2C2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B8Cu;
    // 0x2c2b90: 0x24050264  addiu       $a1, $zero, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C2B8Cu, 0x2C2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B94u;
label_2c2b94:
    // 0x2c2b94: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x2C2B94u;
    {
        const bool branch_taken_0x2c2b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B94u;
        // 0x2c2b98: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b94) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2B9Cu;
label_2c2b9c:
    // 0x2c2b9c: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C2B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C2BA4u);
    ctx->pc = 0x2C2BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B9Cu;
    // 0x2c2ba0: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C2B9Cu, 0x2C2BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BA4u;
label_2c2ba4:
    // 0x2c2ba4: 0x104001c7  beqz        $v0, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2C2BA4u;
    {
        const bool branch_taken_0x2c2ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BA4u;
        // 0x2c2ba8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ba4) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2BACu;
    // 0x2c2bac: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c2bb0: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2c2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2c2bb4: 0xae240aa8  sw          $a0, 0xAA8($s1)
    ctx->pc = 0x2c2bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 4));
    // 0x2c2bb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c2bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c2bbc: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c2bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c2bc0: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x2C2BC0u;
    {
        const bool branch_taken_0x2c2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BC0u;
        // 0x2c2bc4: 0xae220a94  sw          $v0, 0xA94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bc0) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2BC8u;
label_2c2bc8:
    // 0x2c2bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bcc: 0x240501bf  addiu       $a1, $zero, 0x1BF
    ctx->pc = 0x2c2bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x2c2bd0: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x2c2bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x2c2bd4: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2c2bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2c2bd8: 0x27a801b4  addiu       $t0, $sp, 0x1B4
    ctx->pc = 0x2c2bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x2c2bdc: 0xc085564  jal         func_215590
    ctx->pc = 0x2C2BDCu;
    SET_GPR_U32(ctx, 31, 0x2C2BE4u);
    ctx->pc = 0x2C2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BDCu;
    // 0x2c2be0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215590u, 0x2C2BDCu, 0x2C2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BE4u;
label_2c2be4:
    // 0x2c2be4: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x2c2be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2be8: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2c2be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c2bec: 0xc7819128  lwc1        $f1, -0x6ED8($gp)
    ctx->pc = 0x2c2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bf4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c2bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c2bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c2bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2bfc: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2c2bfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c2c00: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2c2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c04: 0xc7a101ac  lwc1        $f1, 0x1AC($sp)
    ctx->pc = 0x2c2c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2c08: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c2c0c: 0x0  nop
    ctx->pc = 0x2c2c0cu;
    // NOP
    // 0x2c2c10: 0x0  nop
    ctx->pc = 0x2c2c10u;
    // NOP
    // 0x2c2c14: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2c2c14u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x2c2c18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2c2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2c2c1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c2c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c2c20: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2C2C20u;
    SET_GPR_U32(ctx, 31, 0x2C2C28u);
    ctx->pc = 0x2C2C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C20u;
    // 0x2c2c24: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2C2C20u, 0x2C2C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C28u;
label_2c2c28:
    // 0x2c2c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c2c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2C2C2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2C34u);
    ctx->pc = 0x2C2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C2Cu;
    // 0x2c2c30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2C2C2Cu, 0x2C2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C34u;
label_2c2c34:
    // 0x2c2c34: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2c2c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2c38: 0x3c0286a4  lui         $v0, 0x86A4
    ctx->pc = 0x2c2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34468 << 16));
    // 0x2c2c3c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c2c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c40: 0x3442c2e1  ori         $v0, $v0, 0xC2E1
    ctx->pc = 0x2c2c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49889);
    // 0x2c2c44: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2c2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c2c48: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2c2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c2c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2c50: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2c2c54: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2c2c58: 0xc78c912c  lwc1        $f12, -0x6ED4($gp)
    ctx->pc = 0x2c2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2c5c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2c2c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c2c60: 0x26260b04  addiu       $a2, $s1, 0xB04
    ctx->pc = 0x2c2c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2820));
    // 0x2c2c64: 0xe6200b04  swc1        $f0, 0xB04($s1)
    ctx->pc = 0x2c2c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2820), bits); }
    // 0x2c2c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c2c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c2c70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c74: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c2c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c78: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2c7c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2c2c7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2c2c80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c2c80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c2c84: 0xe6210b08  swc1        $f1, 0xB08($s1)
    ctx->pc = 0x2c2c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2824), bits); }
    // 0x2c2c88: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c2c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c8c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c2c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2c90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2c94: 0xe6200b0c  swc1        $f0, 0xB0C($s1)
    ctx->pc = 0x2c2c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2828), bits); }
    // 0x2c2c98: 0xc09f430  jal         func_27D0C0
    ctx->pc = 0x2C2C98u;
    SET_GPR_U32(ctx, 31, 0x2C2CA0u);
    ctx->pc = 0x2C2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C98u;
    // 0x2c2c9c: 0xc46d0084  lwc1        $f13, 0x84($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D0C0u, 0x2C2C98u, 0x2C2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CA0u;
label_2c2ca0:
    // 0x2c2ca0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c2ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c2ca4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2CA4u;
    {
        const bool branch_taken_0x2c2ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CA4u;
        // 0x2c2ca8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ca4) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2CACu;
    // 0x2c2cac: 0xc64d0050  lwc1        $f13, 0x50($s2)
    ctx->pc = 0x2c2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c2cb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c2cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cb4: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x2C2CB4u;
    SET_GPR_U32(ctx, 31, 0x2C2CBCu);
    ctx->pc = 0x2C2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CB4u;
    // 0x2c2cb8: 0xc64c004c  lwc1        $f12, 0x4C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x2C2CB4u, 0x2C2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CBCu;
label_2c2cbc:
    // 0x2c2cbc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C2CBCu;
    SET_GPR_U32(ctx, 31, 0x2C2CC4u);
    ctx->pc = 0x2C2CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CBCu;
    // 0x2c2cc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C2CBCu, 0x2C2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CC4u;
label_2c2cc4:
    // 0x2c2cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ccc: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2CCCu;
    SET_GPR_U32(ctx, 31, 0x2C2CD4u);
    ctx->pc = 0x2C2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CCCu;
    // 0x2c2cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2CCCu, 0x2C2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CD4u;
label_2c2cd4:
    // 0x2c2cd4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2CD4u;
    {
        const bool branch_taken_0x2c2cd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CD4u;
        // 0x2c2cd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cd4) {
            ctx->pc = 0x2C2CE8u;
            goto label_2c2ce8;
        }
    }
    ctx->pc = 0x2C2CDCu;
    // 0x2c2cdc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C2CDCu;
    SET_GPR_U32(ctx, 31, 0x2C2CE4u);
    ctx->pc = 0x2C2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CDCu;
    // 0x2c2ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C2CDCu, 0x2C2CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CE4u;
label_2c2ce4:
    // 0x2c2ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ce8:
    // 0x2c2ce8: 0x3405805c  ori         $a1, $zero, 0x805C
    ctx->pc = 0x2c2ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32860);
    // 0x2c2cec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c2cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c2cf0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C2CF0u;
    SET_GPR_U32(ctx, 31, 0x2C2CF8u);
    ctx->pc = 0x2C2CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CF0u;
    // 0x2c2cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C2CF0u, 0x2C2CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CF8u;
label_2c2cf8:
    // 0x2c2cf8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2CF8u;
    {
        const bool branch_taken_0x2c2cf8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CF8u;
        // 0x2c2cfc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cf8) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2D00u;
    // 0x2c2d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2D00u;
    {
        const bool branch_taken_0x2c2d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D00u;
        // 0x2c2d04: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d00) {
            ctx->pc = 0x2C2D0Cu;
            goto label_2c2d0c;
        }
    }
    ctx->pc = 0x2C2D08u;
label_2c2d08:
    // 0x2c2d08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c2d0c:
    // 0x2c2d0c: 0x8e240ad4  lw          $a0, 0xAD4($s1)
    ctx->pc = 0x2c2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
label_2c2d10:
    // 0x2c2d10: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x2C2D10u;
    {
        const bool branch_taken_0x2c2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D10u;
        // 0x2c2d14: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d10) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2D18u;
label_2c2d18:
    // 0x2c2d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d1c: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D24u);
    ctx->pc = 0x2C2D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D1Cu;
    // 0x2c2d20: 0x240501bf  addiu       $a1, $zero, 0x1BF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2D1Cu, 0x2C2D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D24u;
label_2c2d24:
    // 0x2c2d24: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C2D24u;
    {
        const bool branch_taken_0x2c2d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D24u;
        // 0x2c2d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d24) {
            ctx->pc = 0x2C2DACu;
            goto label_2c2dac;
        }
    }
    ctx->pc = 0x2C2D2Cu;
    // 0x2c2d2c: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D34u);
    ctx->pc = 0x2C2D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D2Cu;
    // 0x2c2d30: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2D2Cu, 0x2C2D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D34u;
label_2c2d34:
    // 0x2c2d34: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2D34u;
    {
        const bool branch_taken_0x2c2d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D34u;
        // 0x2c2d38: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d34) {
            ctx->pc = 0x2C2DACu;
            goto label_2c2dac;
        }
    }
    ctx->pc = 0x2C2D3Cu;
    // 0x2c2d3c: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2c2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c2d40: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c2d44: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2c2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2c2d48: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2c2d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c2d4c: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x2c2d50: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2c2d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2c2d54: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2c2d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2d58: 0xae220a94  sw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
    // 0x2c2d5c: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c2d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c2d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c2d64: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c2d68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c2d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c2d6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2D6Cu;
    {
        const bool branch_taken_0x2c2d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D6Cu;
        // 0x2c2d70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d6c) {
            ctx->pc = 0x2C2D90u;
            goto label_2c2d90;
        }
    }
    ctx->pc = 0x2C2D74u;
    // 0x2c2d74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c2d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2d78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2d7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c2d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c2d80: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C2D80u;
    SET_GPR_U32(ctx, 31, 0x2C2D88u);
    ctx->pc = 0x2C2D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D80u;
    // 0x2c2d84: 0x240501bf  addiu       $a1, $zero, 0x1BF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C2D80u, 0x2C2D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D88u;
label_2c2d88:
    // 0x2c2d88: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x2C2D88u;
    {
        const bool branch_taken_0x2c2d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D88u;
        // 0x2c2d8c: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d88) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2D90u;
label_2c2d90:
    // 0x2c2d90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c2d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2d98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c2d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c2d9c: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C2D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C2DA4u);
    ctx->pc = 0x2C2DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D9Cu;
    // 0x2c2da0: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C2D9Cu, 0x2C2DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DA4u;
label_2c2da4:
    // 0x2c2da4: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x2C2DA4u;
    {
        const bool branch_taken_0x2c2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DA4u;
        // 0x2c2da8: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2da4) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2DACu;
label_2c2dac:
    // 0x2c2dac: 0xc0856c0  jal         func_215B00
    ctx->pc = 0x2C2DACu;
    SET_GPR_U32(ctx, 31, 0x2C2DB4u);
    ctx->pc = 0x2C2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DACu;
    // 0x2c2db0: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B00u, 0x2C2DACu, 0x2C2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DB4u;
label_2c2db4:
    // 0x2c2db4: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2C2DB4u;
    {
        const bool branch_taken_0x2c2db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DB4u;
        // 0x2c2db8: 0x2404feff  addiu       $a0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2db4) {
            ctx->pc = 0x2C32C4u;
            goto label_2c32c4;
        }
    }
    ctx->pc = 0x2C2DBCu;
    // 0x2c2dbc: 0x8e220a94  lw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2708)));
    // 0x2c2dc0: 0x8e230a90  lw          $v1, 0xA90($s1)
    ctx->pc = 0x2c2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c2dc4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2c2dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c2dc8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c2dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c2dcc: 0xae250aa8  sw          $a1, 0xAA8($s1)
    ctx->pc = 0x2c2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 5));
    // 0x2c2dd0: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x2c2dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2c2dd4: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c2dd8: 0xae220a94  sw          $v0, 0xA94($s1)
    ctx->pc = 0x2c2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 2));
    // 0x2c2ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2de0: 0xae230a90  sw          $v1, 0xA90($s1)
    ctx->pc = 0x2c2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 3));
    // 0x2c2de4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C2DE4u;
    SET_GPR_U32(ctx, 31, 0x2C2DECu);
    ctx->pc = 0x2C2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DE4u;
    // 0x2c2de8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C2DE4u, 0x2C2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DECu;
label_2c2dec:
    // 0x2c2dec: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2C2DECu;
    {
        const bool branch_taken_0x2c2dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DECu;
        // 0x2c2df0: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dec) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2DF4u;
label_2c2df4:
    // 0x2c2df4: 0xc6200b28  lwc1        $f0, 0xB28($s1)
    ctx->pc = 0x2c2df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2df8: 0x8e220ae4  lw          $v0, 0xAE4($s1)
    ctx->pc = 0x2c2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
    // 0x2c2dfc: 0xe6200b38  swc1        $f0, 0xB38($s1)
    ctx->pc = 0x2c2dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2872), bits); }
    // 0x2c2e00: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x2c2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x2c2e04: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c2e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2e08: 0xe6200aec  swc1        $f0, 0xAEC($s1)
    ctx->pc = 0x2c2e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2796), bits); }
    // 0x2c2e0c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2c2e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2e10: 0xe6210af0  swc1        $f1, 0xAF0($s1)
    ctx->pc = 0x2c2e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2800), bits); }
    // 0x2c2e14: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c2e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2e18: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C2E18u;
    {
        const bool branch_taken_0x2c2e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E18u;
        // 0x2c2e1c: 0xe6200af4  swc1        $f0, 0xAF4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e18) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2E20u;
    // 0x2c2e20: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c2e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2c2e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e28: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c2e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2e2c: 0x0  nop
    ctx->pc = 0x2c2e2cu;
    // NOP
    // 0x2c2e30: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2E30u;
    {
        const bool branch_taken_0x2c2e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E30u;
        // 0x2c2e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e30) {
            ctx->pc = 0x2C2E48u;
            goto label_2c2e48;
        }
    }
    ctx->pc = 0x2C2E38u;
    // 0x2c2e38: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C2E38u;
    SET_GPR_U32(ctx, 31, 0x2C2E40u);
    ctx->pc = 0x2C2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E38u;
    // 0x2c2e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C2E38u, 0x2C2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E40u;
label_2c2e40:
    // 0x2c2e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2E40u;
    {
        const bool branch_taken_0x2c2e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E40u;
        // 0x2c2e44: 0xc6210b4c  lwc1        $f1, 0xB4C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e40) {
            ctx->pc = 0x2C2E54u;
            goto label_2c2e54;
        }
    }
    ctx->pc = 0x2C2E48u;
label_2c2e48:
    // 0x2c2e48: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C2E48u;
    SET_GPR_U32(ctx, 31, 0x2C2E50u);
    ctx->pc = 0x2C2E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E48u;
    // 0x2c2e4c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C2E48u, 0x2C2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E50u;
label_2c2e50:
    // 0x2c2e50: 0xc6210b4c  lwc1        $f1, 0xB4C($s1)
    ctx->pc = 0x2c2e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c2e54:
    // 0x2c2e54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c2e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c2e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c2e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2e60: 0x0  nop
    ctx->pc = 0x2c2e60u;
    // NOP
    // 0x2c2e64: 0x45000118  bc1f        . + 4 + (0x118 << 2)
    ctx->pc = 0x2C2E64u;
    {
        const bool branch_taken_0x2c2e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E64u;
        // 0x2c2e68: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e64) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2E6Cu;
    // 0x2c2e6c: 0x50800119  beql        $a0, $zero, . + 4 + (0x119 << 2)
    ctx->pc = 0x2C2E6Cu;
    {
        const bool branch_taken_0x2c2e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e6c) {
            ctx->pc = 0x2C2E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2E6Cu;
            // 0x2c2e70: 0x8e230aa8  lw          $v1, 0xAA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32D4u;
            goto label_2c32d4;
        }
    }
    ctx->pc = 0x2C2E74u;
    // 0x2c2e74: 0x8e220a90  lw          $v0, 0xA90($s1)
    ctx->pc = 0x2c2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2704)));
    // 0x2c2e78: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c2e7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c2e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c2e80: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x2C2E80u;
    {
        const bool branch_taken_0x2c2e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E80u;
        // 0x2c2e84: 0xae220a90  sw          $v0, 0xA90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e80) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C2E88u;
label_2c2e88:
    // 0x2c2e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e8c: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2E8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2E94u);
    ctx->pc = 0x2C2E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E8Cu;
    // 0x2c2e90: 0x2405020e  addiu       $a1, $zero, 0x20E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2E8Cu, 0x2C2E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E94u;
label_2c2e94:
    // 0x2c2e94: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C2E94u;
    {
        const bool branch_taken_0x2c2e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e94) {
            ctx->pc = 0x2C2E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2E94u;
            // 0x2c2e98: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2EDCu;
            goto label_2c2edc;
        }
    }
    ctx->pc = 0x2C2E9Cu;
    // 0x2c2e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ea0: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2EA0u;
    SET_GPR_U32(ctx, 31, 0x2C2EA8u);
    ctx->pc = 0x2C2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2EA0u;
    // 0x2c2ea4: 0x2405020f  addiu       $a1, $zero, 0x20F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2EA0u, 0x2C2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2EA8u;
label_2c2ea8:
    // 0x2c2ea8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2EA8u;
    {
        const bool branch_taken_0x2c2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ea8) {
            ctx->pc = 0x2C2EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2EA8u;
            // 0x2c2eac: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2EDCu;
            goto label_2c2edc;
        }
    }
    ctx->pc = 0x2C2EB0u;
    // 0x2c2eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2eb4: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2EB4u;
    SET_GPR_U32(ctx, 31, 0x2C2EBCu);
    ctx->pc = 0x2C2EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2EB4u;
    // 0x2c2eb8: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2EB4u, 0x2C2EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2EBCu;
label_2c2ebc:
    // 0x2c2ebc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2EBCu;
    {
        const bool branch_taken_0x2c2ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ebc) {
            ctx->pc = 0x2C2EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2EBCu;
            // 0x2c2ec0: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2EDCu;
            goto label_2c2edc;
        }
    }
    ctx->pc = 0x2C2EC4u;
    // 0x2c2ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ec8: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2EC8u;
    SET_GPR_U32(ctx, 31, 0x2C2ED0u);
    ctx->pc = 0x2C2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2EC8u;
    // 0x2c2ecc: 0x24050211  addiu       $a1, $zero, 0x211 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2EC8u, 0x2C2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2ED0u;
label_2c2ed0:
    // 0x2c2ed0: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2C2ED0u;
    {
        const bool branch_taken_0x2c2ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ed0) {
            ctx->pc = 0x2C3164u;
            goto label_2c3164;
        }
    }
    ctx->pc = 0x2C2ED8u;
    // 0x2c2ed8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2c2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c2edc:
    // 0x2c2edc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c2edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c2ee0: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2C2EE0u;
    {
        const bool branch_taken_0x2c2ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE0u;
        // 0x2c2ee4: 0x27b300e0  addiu       $s3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ee0) {
            ctx->pc = 0x2C3164u;
            goto label_2c3164;
        }
    }
    ctx->pc = 0x2C2EE8u;
    // 0x2c2ee8: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x2c2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2c2eec: 0xc7809130  lwc1        $f0, -0x6ED0($gp)
    ctx->pc = 0x2c2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c2ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ef4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c2ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c2ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2efc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c2efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f00: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2c2f00u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2c2f04: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x2c2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2f08: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x2c2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c2f0c: 0x0  nop
    ctx->pc = 0x2c2f0cu;
    // NOP
    // 0x2c2f10: 0x0  nop
    ctx->pc = 0x2c2f10u;
    // NOP
    // 0x2c2f14: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2c2f14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2c2f18: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x2C2F18u;
    SET_GPR_U32(ctx, 31, 0x2C2F20u);
    ctx->pc = 0x2C2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F18u;
    // 0x2c2f1c: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x2C2F18u, 0x2C2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F20u;
label_2c2f20:
    // 0x2c2f20: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2c2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c2f24: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2c2f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c2f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f30: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c2f34: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2c2f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c2f38: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x2c2f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c2f3c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2c2f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2c2f40: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2C2F40u;
    SET_GPR_U32(ctx, 31, 0x2C2F48u);
    ctx->pc = 0x2C2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F40u;
    // 0x2c2f44: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2C2F40u, 0x2C2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F48u;
label_2c2f48:
    // 0x2c2f48: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x2c2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f50: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2c2f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2f54: 0x2405020f  addiu       $a1, $zero, 0x20F
    ctx->pc = 0x2c2f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x2c2f58: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x2c2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2f5c: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x2c2f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2c2f60: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x2c2f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2c2f64: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2F64u;
    SET_GPR_U32(ctx, 31, 0x2C2F6Cu);
    ctx->pc = 0x2C2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F64u;
    // 0x2c2f68: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2F64u, 0x2C2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F6Cu;
label_2c2f6c:
    // 0x2c2f6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2F6Cu;
    {
        const bool branch_taken_0x2c2f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f6c) {
            ctx->pc = 0x2C2F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2F6Cu;
            // 0x2c2f70: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F88u;
            goto label_2c2f88;
        }
    }
    ctx->pc = 0x2C2F74u;
    // 0x2c2f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f78: 0xc085608  jal         func_215820
    ctx->pc = 0x2C2F78u;
    SET_GPR_U32(ctx, 31, 0x2C2F80u);
    ctx->pc = 0x2C2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F78u;
    // 0x2c2f7c: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215820u, 0x2C2F78u, 0x2C2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F80u;
label_2c2f80:
    // 0x2c2f80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2F80u;
    {
        const bool branch_taken_0x2c2f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F80u;
        // 0x2c2f84: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f80) {
            ctx->pc = 0x2C2FB0u;
            goto label_2c2fb0;
        }
    }
    ctx->pc = 0x2C2F88u;
label_2c2f88:
    // 0x2c2f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f90: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2c2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c2f94: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2c2f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c2f98: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2c2f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c2f9c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2c2f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2c2fa0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2C2FA0u;
    SET_GPR_U32(ctx, 31, 0x2C2FA8u);
    ctx->pc = 0x2C2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2FA0u;
    // 0x2c2fa4: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2C2FA0u, 0x2C2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FA8u;
label_2c2fa8:
    // 0x2c2fa8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C2FA8u;
    {
        const bool branch_taken_0x2c2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FA8u;
        // 0x2c2fac: 0xc7a40160  lwc1        $f4, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fa8) {
            ctx->pc = 0x2C2FD4u;
            goto label_2c2fd4;
        }
    }
    ctx->pc = 0x2C2FB0u;
label_2c2fb0:
    // 0x2c2fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fb8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2c2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c2fbc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2c2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c2fc0: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c2fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c2fc4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2c2fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2c2fc8: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2C2FC8u;
    SET_GPR_U32(ctx, 31, 0x2C2FD0u);
    ctx->pc = 0x2C2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2FC8u;
    // 0x2c2fcc: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2C2FC8u, 0x2C2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FD0u;
label_2c2fd0:
    // 0x2c2fd0: 0xc7a40160  lwc1        $f4, 0x160($sp)
    ctx->pc = 0x2c2fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2c2fd4:
    // 0x2c2fd4: 0xc7a50164  lwc1        $f5, 0x164($sp)
    ctx->pc = 0x2c2fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c2fd8: 0xc7a60168  lwc1        $f6, 0x168($sp)
    ctx->pc = 0x2c2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c2fdc: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2c2fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2fe0: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x2c2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2fe4: 0xc7a30158  lwc1        $f3, 0x158($sp)
    ctx->pc = 0x2c2fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c2fe8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c2fe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c2fec: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c2fecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c2ff0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2c2ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2c2ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2ff8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2c2ff8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2c2ffc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3000: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c3000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c3004: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c3004u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c3008: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2c3008u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2c300c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2c300cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2c3010: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x2c3010u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2c3014: 0xe7a40170  swc1        $f4, 0x170($sp)
    ctx->pc = 0x2c3014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2c3018: 0xe7a50174  swc1        $f5, 0x174($sp)
    ctx->pc = 0x2c3018u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2c301c: 0xe7a60178  swc1        $f6, 0x178($sp)
    ctx->pc = 0x2c301cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2c3020: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c3020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3024: 0xc6200b68  lwc1        $f0, 0xB68($s1)
    ctx->pc = 0x2c3024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3028: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3028u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c302c: 0x0  nop
    ctx->pc = 0x2c302cu;
    // NOP
    // 0x2c3030: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3030u;
        // 0x2c3034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C305Cu;
            goto label_2c305c;
        }
    }
    ctx->pc = 0x2C3038u;
    // 0x2c3038: 0xc6200b6c  lwc1        $f0, 0xB6C($s1)
    ctx->pc = 0x2c3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c303c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c303cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3040: 0x0  nop
    ctx->pc = 0x2c3040u;
    // NOP
    // 0x2c3044: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3044u;
    {
        const bool branch_taken_0x2c3044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3044u;
        // 0x2c3048: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3044) {
            ctx->pc = 0x2C3060u;
            goto label_2c3060;
        }
    }
    ctx->pc = 0x2C304Cu;
    // 0x2c304c: 0xc6200b70  lwc1        $f0, 0xB70($s1)
    ctx->pc = 0x2c304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3050: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c3050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3054: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3054u;
    {
        const bool branch_taken_0x2c3054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3054) {
            ctx->pc = 0x2C3078u;
            goto label_2c3078;
        }
    }
    ctx->pc = 0x2C305Cu;
label_2c305c:
    // 0x2c305c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2c305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2c3060:
    // 0x2c3060: 0x26260b68  addiu       $a2, $s1, 0xB68
    ctx->pc = 0x2c3060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2920));
    // 0x2c3064: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2c3064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c3068: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x2c3068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c306c: 0xc09c594  jal         func_271650
    ctx->pc = 0x2C306Cu;
    SET_GPR_U32(ctx, 31, 0x2C3074u);
    ctx->pc = 0x2C3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C306Cu;
    // 0x2c3070: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271650u, 0x2C306Cu, 0x2C3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3074u;
label_2c3074:
    // 0x2c3074: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c3074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3078:
    // 0x2c3078: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C3078u;
    {
        const bool branch_taken_0x2c3078 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3078u;
        // 0x2c307c: 0xc7a30160  lwc1        $f3, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3078) {
            ctx->pc = 0x2C3144u;
            goto label_2c3144;
        }
    }
    ctx->pc = 0x2C3080u;
    // 0x2c3080: 0xc7a40164  lwc1        $f4, 0x164($sp)
    ctx->pc = 0x2c3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c3084: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2c3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3088: 0xc7a20174  lwc1        $f2, 0x174($sp)
    ctx->pc = 0x2c3088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c308c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c308cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c3090: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x2c3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3094: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c3094u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c3098: 0xc7a50168  lwc1        $f5, 0x168($sp)
    ctx->pc = 0x2c3098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c309c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2c309cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c30a0: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2c30a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2c30a4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2c30a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c30a8: 0xe7a20194  swc1        $f2, 0x194($sp)
    ctx->pc = 0x2c30a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x2c30ac: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x2c30acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c30b0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2c30b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c30b4: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x2c30b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2c30b8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2c30b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2c30bc: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x2c30bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c30c0: 0x0  nop
    ctx->pc = 0x2c30c0u;
    // NOP
    // 0x2c30c4: 0x0  nop
    ctx->pc = 0x2c30c4u;
    // NOP
    // 0x2c30c8: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2c30c8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c30cc: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2c30ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c30d0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C30D0u;
    {
        const bool branch_taken_0x2c30d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c30d0) {
            ctx->pc = 0x2C30E4u;
            goto label_2c30e4;
        }
    }
    ctx->pc = 0x2C30D8u;
    // 0x2c30d8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C30D8u;
    SET_GPR_U32(ctx, 31, 0x2C30E0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C30D8u, 0x2C30E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30E0u;
label_2c30e0:
    // 0x2c30e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c30e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c30e4:
    // 0x2c30e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c30e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c30e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c30e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c30ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c30ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30f0: 0xc7a30190  lwc1        $f3, 0x190($sp)
    ctx->pc = 0x2c30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c30f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c30f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30f8: 0x0  nop
    ctx->pc = 0x2c30f8u;
    // NOP
    // 0x2c30fc: 0x0  nop
    ctx->pc = 0x2c30fcu;
    // NOP
    // 0x2c3100: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2c3100u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c3104: 0xc7a20194  lwc1        $f2, 0x194($sp)
    ctx->pc = 0x2c3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3108: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x2c3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c310c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2c310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c3110: 0xc78c9134  lwc1        $f12, -0x6ECC($gp)
    ctx->pc = 0x2c3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c3114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c3114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3118: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x2c3118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c311c: 0x27a90190  addiu       $t1, $sp, 0x190
    ctx->pc = 0x2c311cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c3120: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c3120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3124: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c3124u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3128: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c312c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c312cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c3130: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c3130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c3134: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x2c3134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2c3138: 0xe7a30190  swc1        $f3, 0x190($sp)
    ctx->pc = 0x2c3138u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2c313c: 0xc09c666  jal         func_271998
    ctx->pc = 0x2C313Cu;
    SET_GPR_U32(ctx, 31, 0x2C3144u);
    ctx->pc = 0x2C3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C313Cu;
    // 0x2c3140: 0xe7a20194  swc1        $f2, 0x194($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271998u, 0x2C313Cu, 0x2C3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3144u;
label_2c3144:
    // 0x2c3144: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2c3144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3148: 0x8e240ad4  lw          $a0, 0xAD4($s1)
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x2c314c: 0xe6200b68  swc1        $f0, 0xB68($s1)
    ctx->pc = 0x2c314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2920), bits); }
    // 0x2c3150: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x2c3150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3154: 0xe6210b6c  swc1        $f1, 0xB6C($s1)
    ctx->pc = 0x2c3154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2924), bits); }
    // 0x2c3158: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x2c3158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c315c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2C315Cu;
    {
        const bool branch_taken_0x2c315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C315Cu;
        // 0x2c3160: 0xe6200b70  swc1        $f0, 0xB70($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c315c) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C3164u;
label_2c3164:
    // 0x2c3164: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2c3164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2c3168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c316c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2c316cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3170: 0x0  nop
    ctx->pc = 0x2c3170u;
    // NOP
    // 0x2c3174: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x2C3174u;
    {
        const bool branch_taken_0x2c3174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3174u;
        // 0x2c3178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3174) {
            ctx->pc = 0x2C32BCu;
            goto label_2c32bc;
        }
    }
    ctx->pc = 0x2C317Cu;
    // 0x2c317c: 0xc62c0adc  lwc1        $f12, 0xADC($s1)
    ctx->pc = 0x2c317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c3180: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2C3180u;
    SET_GPR_U32(ctx, 31, 0x2C3188u);
    ctx->pc = 0x2C3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3180u;
    // 0x2c3184: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2C3180u, 0x2C3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3188u;
label_2c3188:
    // 0x2c3188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c318c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c318cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3190: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C3190u;
    SET_GPR_U32(ctx, 31, 0x2C3198u);
    ctx->pc = 0x2C3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3190u;
    // 0x2c3194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C3190u, 0x2C3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3198u;
label_2c3198:
    // 0x2c3198: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3198u;
    {
        const bool branch_taken_0x2c3198 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3198u;
        // 0x2c319c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3198) {
            ctx->pc = 0x2C31ACu;
            goto label_2c31ac;
        }
    }
    ctx->pc = 0x2C31A0u;
    // 0x2c31a0: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2C31A0u;
    SET_GPR_U32(ctx, 31, 0x2C31A8u);
    ctx->pc = 0x2C31A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C31A0u;
    // 0x2c31a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2C31A0u, 0x2C31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31A8u;
label_2c31a8:
    // 0x2c31a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c31a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c31ac:
    // 0x2c31ac: 0x34058068  ori         $a1, $zero, 0x8068
    ctx->pc = 0x2c31acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x2c31b0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2c31b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2c31b4: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2C31B4u;
    SET_GPR_U32(ctx, 31, 0x2C31BCu);
    ctx->pc = 0x2C31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C31B4u;
    // 0x2c31b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2C31B4u, 0x2C31BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31BCu;
label_2c31bc:
    // 0x2c31bc: 0x441003f  bgez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C31BCu;
    {
        const bool branch_taken_0x2c31bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31BCu;
        // 0x2c31c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31bc) {
            ctx->pc = 0x2C32BCu;
            goto label_2c32bc;
        }
    }
    ctx->pc = 0x2C31C4u;
    // 0x2c31c4: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C31C4u;
    SET_GPR_U32(ctx, 31, 0x2C31CCu);
    ctx->pc = 0x2C31C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C31C4u;
    // 0x2c31c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C31C4u, 0x2C31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31CCu;
label_2c31cc:
    // 0x2c31cc: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2c31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2c31d0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C31D0u;
    {
        const bool branch_taken_0x2c31d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c31d0) {
            ctx->pc = 0x2C31F0u;
            goto label_2c31f0;
        }
    }
    ctx->pc = 0x2C31D8u;
    // 0x2c31d8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C31D8u;
    SET_GPR_U32(ctx, 31, 0x2C31E0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C31D8u, 0x2C31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31E0u;
label_2c31e0:
    // 0x2c31e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c31e4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2c31e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c31e8: 0xc081546  jal         func_205518
    ctx->pc = 0x2C31E8u;
    SET_GPR_U32(ctx, 31, 0x2C31F0u);
    ctx->pc = 0x2C31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C31E8u;
    // 0x2c31ec: 0x244400ab  addiu       $a0, $v0, 0xAB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 171));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2C31E8u, 0x2C31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31F0u;
label_2c31f0:
    // 0x2c31f0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C31F0u;
    SET_GPR_U32(ctx, 31, 0x2C31F8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C31F0u, 0x2C31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31F8u;
label_2c31f8:
    // 0x2c31f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C31F8u;
    {
        const bool branch_taken_0x2c31f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31F8u;
        // 0x2c31fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31f8) {
            ctx->pc = 0x2C320Cu;
            goto label_2c320c;
        }
    }
    ctx->pc = 0x2C3200u;
    // 0x2c3200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c3200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3204: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3204u;
    {
        const bool branch_taken_0x2c3204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3204u;
        // 0x2c3208: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3204) {
            ctx->pc = 0x2C3220u;
            goto label_2c3220;
        }
    }
    ctx->pc = 0x2C320Cu;
label_2c320c:
    // 0x2c320c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c3210: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c3210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c3214: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c3214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3218: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c3218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c321c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2c321cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2c3220:
    // 0x2c3220: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c3220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c3224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3228: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c322c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c322cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3230: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2c3230u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c3234: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2c3234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3238: 0x0  nop
    ctx->pc = 0x2c3238u;
    // NOP
    // 0x2c323c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C323Cu;
    {
        const bool branch_taken_0x2c323c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C323Cu;
        // 0x2c3240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c323c) {
            ctx->pc = 0x2C3260u;
            goto label_2c3260;
        }
    }
    ctx->pc = 0x2C3244u;
    // 0x2c3244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c324c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c324cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3250: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C3250u;
    SET_GPR_U32(ctx, 31, 0x2C3258u);
    ctx->pc = 0x2C3254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3250u;
    // 0x2c3254: 0x2405020e  addiu       $a1, $zero, 0x20E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C3250u, 0x2C3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3258u;
label_2c3258:
    // 0x2c3258: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C3258u;
    {
        const bool branch_taken_0x2c3258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3258u;
        // 0x2c325c: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3258) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C3260u;
label_2c3260:
    // 0x2c3260: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c3260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c3264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3268: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c3268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c326c: 0x0  nop
    ctx->pc = 0x2c326cu;
    // NOP
    // 0x2c3270: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3270u;
    {
        const bool branch_taken_0x2c3270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3270) {
            ctx->pc = 0x2C3274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3270u;
            // 0x2c3274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3294u;
            goto label_2c3294;
        }
    }
    ctx->pc = 0x2C3278u;
    // 0x2c3278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c327c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3280: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c3284: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C3284u;
    SET_GPR_U32(ctx, 31, 0x2C328Cu);
    ctx->pc = 0x2C3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3284u;
    // 0x2c3288: 0x2405020f  addiu       $a1, $zero, 0x20F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C3284u, 0x2C328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C328Cu;
label_2c328c:
    // 0x2c328c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C328Cu;
    {
        const bool branch_taken_0x2c328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C328Cu;
        // 0x2c3290: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c328c) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C3294u;
label_2c3294:
    // 0x2c3294: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c3294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c3298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c329c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c329cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c32a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c32a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c32a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c32a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c32a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c32a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c32ac: 0xc08535a  jal         func_214D68
    ctx->pc = 0x2C32ACu;
    SET_GPR_U32(ctx, 31, 0x2C32B4u);
    ctx->pc = 0x2C32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C32ACu;
    // 0x2c32b0: 0x24050211  addiu       $a1, $zero, 0x211 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D68u, 0x2C32ACu, 0x2C32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32B4u;
label_2c32b4:
    // 0x2c32b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C32B4u;
    {
        const bool branch_taken_0x2c32b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32B4u;
        // 0x2c32b8: 0x8e240ad4  lw          $a0, 0xAD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32b4) {
            ctx->pc = 0x2C32C8u;
            goto label_2c32c8;
        }
    }
    ctx->pc = 0x2C32BCu;
label_2c32bc:
    // 0x2c32bc: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C32BCu;
    SET_GPR_U32(ctx, 31, 0x2C32C4u);
    ctx->pc = 0x2C32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C32BCu;
    // 0x2c32c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C32BCu, 0x2C32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32C4u;
label_2c32c4:
    // 0x2c32c4: 0x8e240ad4  lw          $a0, 0xAD4($s1)
    ctx->pc = 0x2c32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2772)));
label_2c32c8:
    // 0x2c32c8: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C32C8u;
    {
        const bool branch_taken_0x2c32c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c32c8) {
            ctx->pc = 0x2C32CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C32C8u;
            // 0x2c32cc: 0x8e240ae4  lw          $a0, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32F4u;
            goto label_2c32f4;
        }
    }
    ctx->pc = 0x2C32D0u;
    // 0x2c32d0: 0x8e230aa8  lw          $v1, 0xAA8($s1)
    ctx->pc = 0x2c32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2728)));
label_2c32d4:
    // 0x2c32d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2c32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c32d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C32D8u;
    {
        const bool branch_taken_0x2c32d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32D8u;
        // 0x2c32dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32d8) {
            ctx->pc = 0x2C32F0u;
            goto label_2c32f0;
        }
    }
    ctx->pc = 0x2C32E0u;
    // 0x2c32e0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C32E0u;
    {
        const bool branch_taken_0x2c32e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c32e0) {
            ctx->pc = 0x2C32E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C32E0u;
            // 0x2c32e4: 0x8e240ae4  lw          $a0, 0xAE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C32F4u;
            goto label_2c32f4;
        }
    }
    ctx->pc = 0x2C32E8u;
    // 0x2c32e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C32E8u;
    {
        const bool branch_taken_0x2c32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32E8u;
        // 0x2c32ec: 0xae220aa8  sw          $v0, 0xAA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32e8) {
            ctx->pc = 0x2C3328u;
            goto label_2c3328;
        }
    }
    ctx->pc = 0x2C32F0u;
label_2c32f0:
    // 0x2c32f0: 0x8e240ae4  lw          $a0, 0xAE4($s1)
    ctx->pc = 0x2c32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2788)));
label_2c32f4:
    // 0x2c32f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c32f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c32fc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C32FCu;
    {
        const bool branch_taken_0x2c32fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32FCu;
        // 0x2c3300: 0xdfbf0240  ld          $ra, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32fc) {
            ctx->pc = 0x2C3330u;
            goto label_2c3330;
        }
    }
    ctx->pc = 0x2C3304u;
    // 0x2c3304: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c3304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c3308: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2c3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c330c: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x2c330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x2c3310: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3310u;
    {
        const bool branch_taken_0x2c3310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3310u;
        // 0x2c3314: 0xdfb70230  ld          $s7, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3310) {
            ctx->pc = 0x2C3334u;
            goto label_2c3334;
        }
    }
    ctx->pc = 0x2C3318u;
label_2c3318:
    // 0x2c3318: 0x8e230a9c  lw          $v1, 0xA9C($s1)
    ctx->pc = 0x2c3318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2716)));
    // 0x2c331c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2c331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c3320: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x2c3320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
    // 0x2c3324: 0xae230aa0  sw          $v1, 0xAA0($s1)
    ctx->pc = 0x2c3324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2720), GPR_U32(ctx, 3));
label_2c3328:
    // 0x2c3328: 0xae200b4c  sw          $zero, 0xB4C($s1)
    ctx->pc = 0x2c3328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2892), GPR_U32(ctx, 0));
    // 0x2c332c: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x2c332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_2c3330:
    // 0x2c3330: 0xdfb70230  ld          $s7, 0x230($sp)
    ctx->pc = 0x2c3330u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_2c3334:
    // 0x2c3334: 0xdfb60220  ld          $s6, 0x220($sp)
    ctx->pc = 0x2c3334u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c3338: 0xdfb50210  ld          $s5, 0x210($sp)
    ctx->pc = 0x2c3338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c333c: 0xdfb40200  ld          $s4, 0x200($sp)
    ctx->pc = 0x2c333cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c3340: 0xdfb301f0  ld          $s3, 0x1F0($sp)
    ctx->pc = 0x2c3340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c3344: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x2c3344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c3348: 0xdfb101d0  ld          $s1, 0x1D0($sp)
    ctx->pc = 0x2c3348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c334c: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x2c334cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c3350: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x2c3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c3354: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x2c3354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c3358: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x2c3358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c335c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C335Cu;
        // 0x2c3360: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C335Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3364u;
}
