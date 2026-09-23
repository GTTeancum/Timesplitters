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

// Function: calMatrices
// Address: 0x212e08 - 0x2143b0
void calMatrices_0x212e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calMatrices_0x212e08");
#endif

    switch (ctx->pc) {
        case 0x213008u: goto label_213008;
        case 0x213098u: goto label_213098;
        case 0x2130f8u: goto label_2130f8;
        case 0x213114u: goto label_213114;
        case 0x213188u: goto label_213188;
        case 0x213218u: goto label_213218;
        case 0x213278u: goto label_213278;
        case 0x2132d8u: goto label_2132d8;
        case 0x2132f4u: goto label_2132f4;
        case 0x213354u: goto label_213354;
        case 0x213438u: goto label_213438;
        case 0x213464u: goto label_213464;
        case 0x213480u: goto label_213480;
        case 0x2134d8u: goto label_2134d8;
        case 0x2134e8u: goto label_2134e8;
        case 0x213708u: goto label_213708;
        case 0x213734u: goto label_213734;
        case 0x213750u: goto label_213750;
        case 0x213770u: goto label_213770;
        case 0x21378cu: goto label_21378c;
        case 0x213820u: goto label_213820;
        case 0x213834u: goto label_213834;
        case 0x213848u: goto label_213848;
        case 0x213858u: goto label_213858;
        case 0x213a80u: goto label_213a80;
        case 0x213af4u: goto label_213af4;
        case 0x213b6cu: goto label_213b6c;
        case 0x213be8u: goto label_213be8;
        case 0x213c3cu: goto label_213c3c;
        case 0x213c60u: goto label_213c60;
        case 0x213c84u: goto label_213c84;
        case 0x213c98u: goto label_213c98;
        case 0x213cb0u: goto label_213cb0;
        case 0x213d4cu: goto label_213d4c;
        case 0x213d60u: goto label_213d60;
        case 0x213d94u: goto label_213d94;
        case 0x213da8u: goto label_213da8;
        case 0x213e48u: goto label_213e48;
        case 0x213e80u: goto label_213e80;
        case 0x213f18u: goto label_213f18;
        case 0x213f2cu: goto label_213f2c;
        case 0x213f6cu: goto label_213f6c;
        case 0x213f84u: goto label_213f84;
        case 0x213facu: goto label_213fac;
        case 0x213fbcu: goto label_213fbc;
        case 0x213fd0u: goto label_213fd0;
        case 0x214004u: goto label_214004;
        case 0x214028u: goto label_214028;
        case 0x214094u: goto label_214094;
        case 0x2140d8u: goto label_2140d8;
        case 0x214124u: goto label_214124;
        case 0x214144u: goto label_214144;
        case 0x21417cu: goto label_21417c;
        case 0x21419cu: goto label_21419c;
        case 0x2141d4u: goto label_2141d4;
        case 0x2141f4u: goto label_2141f4;
        case 0x214214u: goto label_214214;
        case 0x214260u: goto label_214260;
        case 0x214280u: goto label_214280;
        default: break;
    }

    ctx->pc = 0x212e08u;

    // 0x212e08: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x212e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x212e0c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x212e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x212e10: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x212e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x212e14: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x212e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x212e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e1c: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x212e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x212e20: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x212e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x212e24: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x212e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x212e28: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x212e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x212e2c: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x212e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x212e30: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x212e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x212e34: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x212e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x212e38: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x212e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x212e3c: 0xe7ba0300  swc1        $f26, 0x300($sp)
    ctx->pc = 0x212e3cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x212e40: 0xe7b902f8  swc1        $f25, 0x2F8($sp)
    ctx->pc = 0x212e40u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x212e44: 0xe7b802f0  swc1        $f24, 0x2F0($sp)
    ctx->pc = 0x212e44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x212e48: 0xe7b702e8  swc1        $f23, 0x2E8($sp)
    ctx->pc = 0x212e48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x212e4c: 0xe7b602e0  swc1        $f22, 0x2E0($sp)
    ctx->pc = 0x212e4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x212e50: 0xe7b502d8  swc1        $f21, 0x2D8($sp)
    ctx->pc = 0x212e50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x212e54: 0xe7b402d0  swc1        $f20, 0x2D0($sp)
    ctx->pc = 0x212e54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x212e58: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x212e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x212e5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x212e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x212e60: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x212E60u;
    {
        const bool branch_taken_0x212e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x212E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E60u;
        // 0x212e64: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e60) {
            ctx->pc = 0x212E74u;
            goto label_212e74;
        }
    }
    ctx->pc = 0x212E68u;
    // 0x212e68: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x212e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x212e6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x212E6Cu;
    {
        const bool branch_taken_0x212e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E6Cu;
        // 0x212e70: 0xc456000c  lwc1        $f22, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e6c) {
            ctx->pc = 0x212E7Cu;
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212E74u;
label_212e74:
    // 0x212e74: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x212e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x212e78: 0xc4560b18  lwc1        $f22, 0xB18($v0)
    ctx->pc = 0x212e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_212e7c:
    // 0x212e7c: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x212e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e80: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x212e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x212e84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212e88: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x212e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x212e8c: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x212e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212e90: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x212e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212e94: 0x0  nop
    ctx->pc = 0x212e94u;
    // NOP
    // 0x212e98: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x212E98u;
    {
        const bool branch_taken_0x212e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E98u;
        // 0x212e9c: 0x263200a0  addiu       $s2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e98) {
            ctx->pc = 0x212F80u;
            goto label_212f80;
        }
    }
    ctx->pc = 0x212EA0u;
    // 0x212ea0: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x212ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212ea4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x212ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x212ea8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212eac: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x212eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212eb0: 0x0  nop
    ctx->pc = 0x212eb0u;
    // NOP
    // 0x212eb4: 0x0  nop
    ctx->pc = 0x212eb4u;
    // NOP
    // 0x212eb8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x212eb8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x212ebc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212ec0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x212ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x212ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x212ec8: 0x0  nop
    ctx->pc = 0x212ec8u;
    // NOP
    // 0x212ecc: 0x0  nop
    ctx->pc = 0x212eccu;
    // NOP
    // 0x212ed0: 0x46040083  div.s       $f2, $f0, $f4
    ctx->pc = 0x212ed0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[4];
    // 0x212ed4: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x212ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x212ed8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x212ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212edc: 0x0  nop
    ctx->pc = 0x212edcu;
    // NOP
    // 0x212ee0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x212EE0u;
    {
        const bool branch_taken_0x212ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE0u;
        // 0x212ee4: 0xe62200e4  swc1        $f2, 0xE4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ee0) {
            ctx->pc = 0x212F80u;
            goto label_212f80;
        }
    }
    ctx->pc = 0x212EE8u;
    // 0x212ee8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x212ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x212eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212ef0: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x212ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x212ef4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x212ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212ef8: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x212ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212efc: 0xc62100b4  lwc1        $f1, 0xB4($s1)
    ctx->pc = 0x212efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212f00: 0xc62200b8  lwc1        $f2, 0xB8($s1)
    ctx->pc = 0x212f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212f04: 0xc62300bc  lwc1        $f3, 0xBC($s1)
    ctx->pc = 0x212f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212f08: 0xc62400a8  lwc1        $f4, 0xA8($s1)
    ctx->pc = 0x212f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212f0c: 0xc62500ac  lwc1        $f5, 0xAC($s1)
    ctx->pc = 0x212f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x212f10: 0xc62600b0  lwc1        $f6, 0xB0($s1)
    ctx->pc = 0x212f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x212f14: 0xc62700c0  lwc1        $f7, 0xC0($s1)
    ctx->pc = 0x212f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x212f18: 0xc62800c4  lwc1        $f8, 0xC4($s1)
    ctx->pc = 0x212f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x212f1c: 0xc62900c8  lwc1        $f9, 0xC8($s1)
    ctx->pc = 0x212f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x212f20: 0xc62a00cc  lwc1        $f10, 0xCC($s1)
    ctx->pc = 0x212f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x212f24: 0xc62b00d4  lwc1        $f11, 0xD4($s1)
    ctx->pc = 0x212f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x212f28: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x212f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x212f2c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x212f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x212f30: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x212f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x212f34: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x212f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x212f38: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x212f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x212f3c: 0xae2500dc  sw          $a1, 0xDC($s1)
    ctx->pc = 0x212f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 5));
    // 0x212f40: 0xe6210074  swc1        $f1, 0x74($s1)
    ctx->pc = 0x212f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x212f44: 0xe6220078  swc1        $f2, 0x78($s1)
    ctx->pc = 0x212f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x212f48: 0xe623007c  swc1        $f3, 0x7C($s1)
    ctx->pc = 0x212f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x212f4c: 0xe6240068  swc1        $f4, 0x68($s1)
    ctx->pc = 0x212f4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x212f50: 0xe625006c  swc1        $f5, 0x6C($s1)
    ctx->pc = 0x212f50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x212f54: 0xe6260070  swc1        $f6, 0x70($s1)
    ctx->pc = 0x212f54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x212f58: 0xe6270080  swc1        $f7, 0x80($s1)
    ctx->pc = 0x212f58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x212f5c: 0xe6280084  swc1        $f8, 0x84($s1)
    ctx->pc = 0x212f5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x212f60: 0xe6290088  swc1        $f9, 0x88($s1)
    ctx->pc = 0x212f60u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x212f64: 0xe62a008c  swc1        $f10, 0x8C($s1)
    ctx->pc = 0x212f64u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x212f68: 0xe62b0094  swc1        $f11, 0x94($s1)
    ctx->pc = 0x212f68u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x212f6c: 0xe62c00e0  swc1        $f12, 0xE0($s1)
    ctx->pc = 0x212f6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x212f70: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x212f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x212f74: 0xae260098  sw          $a2, 0x98($s1)
    ctx->pc = 0x212f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 6));
    // 0x212f78: 0xe62c00e8  swc1        $f12, 0xE8($s1)
    ctx->pc = 0x212f78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x212f7c: 0xe62c00e4  swc1        $f12, 0xE4($s1)
    ctx->pc = 0x212f7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_212f80:
    // 0x212f80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x212f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212f84: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x212f84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x212f88: 0x26a3ab60  addiu       $v1, $s5, -0x54A0
    ctx->pc = 0x212f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945632));
    // 0x212f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x212f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212f98: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x212f98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212f9c: 0xc6f50010  lwc1        $f21, 0x10($s7)
    ctx->pc = 0x212f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x212fa0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x212fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212fa4: 0x0  nop
    ctx->pc = 0x212fa4u;
    // NOP
    // 0x212fa8: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x212FA8u;
    {
        const bool branch_taken_0x212fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FA8u;
        // 0x212fac: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fa8) {
            ctx->pc = 0x213160u;
            goto label_213160;
        }
    }
    ctx->pc = 0x212FB0u;
    // 0x212fb0: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x212fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212fb4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x212fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x212fb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212fbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x212fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212fc0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x212fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212fc4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x212fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x212fc8: 0x0  nop
    ctx->pc = 0x212fc8u;
    // NOP
    // 0x212fcc: 0x0  nop
    ctx->pc = 0x212fccu;
    // NOP
    // 0x212fd0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x212fd0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x212fd4: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x212fd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212fdc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x212fdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x212fe0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x212FE0u;
    {
        const bool branch_taken_0x212fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FE0u;
        // 0x212fe4: 0xe6030004  swc1        $f3, 0x4($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fe0) {
            ctx->pc = 0x213030u;
            goto label_213030;
        }
    }
    ctx->pc = 0x212FE8u;
    // 0x212fe8: 0x4603a834  c.lt.s      $f21, $f3
    ctx->pc = 0x212fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212fec: 0x0  nop
    ctx->pc = 0x212fecu;
    // NOP
    // 0x212ff0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x212FF0u;
    {
        const bool branch_taken_0x212ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FF0u;
        // 0x212ff4: 0x27a20130  addiu       $v0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ff0) {
            ctx->pc = 0x21305Cu;
            goto label_21305c;
        }
    }
    ctx->pc = 0x212FF8u;
    // 0x212ff8: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x212ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x212ffc: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x212ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x213000: 0x27b30204  addiu       $s3, $sp, 0x204
    ctx->pc = 0x213000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x213004: 0x0  nop
    ctx->pc = 0x213004u;
    // NOP
label_213008:
    // 0x213008: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x213008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21300c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213010: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x213010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x213014: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x213014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x213018: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x213018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21301c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x21301cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x213020: 0x4501fff9  bc1t        . + 4 + (-0x7 << 2)
    ctx->pc = 0x213020u;
    {
        const bool branch_taken_0x213020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213020) {
            ctx->pc = 0x213008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213008;
        }
    }
    ctx->pc = 0x213028u;
    // 0x213028: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x213028u;
    {
        const bool branch_taken_0x213028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213028u;
        // 0x21302c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213028) {
            ctx->pc = 0x213084u;
            goto label_213084;
        }
    }
    ctx->pc = 0x213030u;
label_213030:
    // 0x213030: 0x4603a834  c.lt.s      $f21, $f3
    ctx->pc = 0x213030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213034: 0x0  nop
    ctx->pc = 0x213034u;
    // NOP
    // 0x213038: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x213038u;
    {
        const bool branch_taken_0x213038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213038u;
        // 0x21303c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213038) {
            ctx->pc = 0x213070u;
            goto label_213070;
        }
    }
    ctx->pc = 0x213040u;
    // 0x213040: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x213040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x213044: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x213044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x213048: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x213048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x21304c: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x21304cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x213050: 0x27b30204  addiu       $s3, $sp, 0x204
    ctx->pc = 0x213050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x213054: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213054u;
    {
        const bool branch_taken_0x213054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213054u;
        // 0x213058: 0xafa3022c  sw          $v1, 0x22C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213054) {
            ctx->pc = 0x213080u;
            goto label_213080;
        }
    }
    ctx->pc = 0x21305Cu;
label_21305c:
    // 0x21305c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x21305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x213060: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x213060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x213064: 0x27b30204  addiu       $s3, $sp, 0x204
    ctx->pc = 0x213064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x213068: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x213068u;
    {
        const bool branch_taken_0x213068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213068u;
        // 0x21306c: 0xafa5022c  sw          $a1, 0x22C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213068) {
            ctx->pc = 0x213080u;
            goto label_213080;
        }
    }
    ctx->pc = 0x213070u;
label_213070:
    // 0x213070: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x213070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x213074: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x213074u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x213078: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x213078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x21307c: 0x27b30204  addiu       $s3, $sp, 0x204
    ctx->pc = 0x21307cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_213080:
    // 0x213080: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x213080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213084:
    // 0x213084: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x213084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213088: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x213088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21308c: 0x0  nop
    ctx->pc = 0x21308cu;
    // NOP
    // 0x213090: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x213090u;
    {
        const bool branch_taken_0x213090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213090) {
            ctx->pc = 0x213094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213090u;
            // 0x213094: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2130C4u;
            goto label_2130c4;
        }
    }
    ctx->pc = 0x213098u;
label_213098:
    // 0x213098: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x213098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x21309c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21309cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2130a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2130a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2130a4: 0x0  nop
    ctx->pc = 0x2130a4u;
    // NOP
    // 0x2130a8: 0x0  nop
    ctx->pc = 0x2130a8u;
    // NOP
    // 0x2130ac: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2130ACu;
    {
        const bool branch_taken_0x2130ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2130ac) {
            ctx->pc = 0x213098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213098;
        }
    }
    ctx->pc = 0x2130B4u;
    // 0x2130b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2130b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2130b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2130b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2130bc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2130bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2130c0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2130c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2130c4:
    // 0x2130c4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2130C4u;
    {
        const bool branch_taken_0x2130c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130C4u;
        // 0x2130c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130c4) {
            ctx->pc = 0x213174u;
            goto label_213174;
        }
    }
    ctx->pc = 0x2130CCu;
    // 0x2130cc: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2130ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2130d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2130d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2130d4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2130D4u;
    {
        const bool branch_taken_0x2130d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130D4u;
        // 0x2130d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130d4) {
            ctx->pc = 0x213174u;
            goto label_213174;
        }
    }
    ctx->pc = 0x2130DCu;
    // 0x2130dc: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x2130dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2130e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2130e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2130e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2130e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2130ec: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x2130ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2130f0: 0xc0854a0  jal         func_215280
    ctx->pc = 0x2130F0u;
    SET_GPR_U32(ctx, 31, 0x2130F8u);
    ctx->pc = 0x2130F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130F0u;
    // 0x2130f4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x2130F0u, 0x2130F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130F8u;
label_2130f8:
    // 0x2130f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2130f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2130fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213108: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x213108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x21310c: 0xc0854a0  jal         func_215280
    ctx->pc = 0x21310Cu;
    SET_GPR_U32(ctx, 31, 0x213114u);
    ctx->pc = 0x213110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21310Cu;
    // 0x213110: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x21310Cu, 0x213114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213114u;
label_213114:
    // 0x213114: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x213114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213118: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x213118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21311c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x21311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213120: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x213120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213124: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x213124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213128: 0xc606001c  lwc1        $f6, 0x1C($s0)
    ctx->pc = 0x213128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21312c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x21312cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x213130: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x213130u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x213134: 0xc7a500f0  lwc1        $f5, 0xF0($sp)
    ctx->pc = 0x213134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213138: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x213138u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x21313c: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x21313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213140: 0xc7a400f8  lwc1        $f4, 0xF8($sp)
    ctx->pc = 0x213140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213144: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x213144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x213148: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x213148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21314c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x21314cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x213150: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x213150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x213154: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x213154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x213158: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x213158u;
    {
        const bool branch_taken_0x213158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213158u;
        // 0x21315c: 0xe602001c  swc1        $f2, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213158) {
            ctx->pc = 0x213170u;
            goto label_213170;
        }
    }
    ctx->pc = 0x213160u;
label_213160:
    // 0x213160: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x213160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x213164: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x213164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x213168: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x213168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
    // 0x21316c: 0x27b30204  addiu       $s3, $sp, 0x204
    ctx->pc = 0x21316cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_213170:
    // 0x213170: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x213170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213174:
    // 0x213174: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x213174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21317c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213180: 0xc085314  jal         func_214C50
    ctx->pc = 0x213180u;
    SET_GPR_U32(ctx, 31, 0x213188u);
    ctx->pc = 0x213184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213180u;
    // 0x213184: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C50u, 0x213180u, 0x213188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213188u;
label_213188:
    // 0x213188: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x213188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21318c: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x21318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213190: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x213190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213194: 0x0  nop
    ctx->pc = 0x213194u;
    // NOP
    // 0x213198: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x213198u;
    {
        const bool branch_taken_0x213198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213198u;
        // 0x21319c: 0x26a3ab60  addiu       $v1, $s5, -0x54A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213198) {
            ctx->pc = 0x213358u;
            goto label_213358;
        }
    }
    ctx->pc = 0x2131A0u;
    // 0x2131a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2131a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2131a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2131a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2131ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2131acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2131b0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x2131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x2131b4: 0xc4540010  lwc1        $f20, 0x10($v0)
    ctx->pc = 0x2131b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2131b8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2131b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2131bc: 0x0  nop
    ctx->pc = 0x2131bcu;
    // NOP
    // 0x2131c0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x2131C0u;
    {
        const bool branch_taken_0x2131c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131C0u;
        // 0x2131c4: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131c0) {
            ctx->pc = 0x213334u;
            goto label_213334;
        }
    }
    ctx->pc = 0x2131C8u;
    // 0x2131c8: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x2131c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2131cc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2131ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2131d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2131d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2131d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2131d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2131d8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2131d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2131dc: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2131dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2131e0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2131e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2131e4: 0x0  nop
    ctx->pc = 0x2131e4u;
    // NOP
    // 0x2131e8: 0x0  nop
    ctx->pc = 0x2131e8u;
    // NOP
    // 0x2131ec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2131ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2131f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2131f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2131f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2131f8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2131f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2131fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2131FCu;
    {
        const bool branch_taken_0x2131fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131FCu;
        // 0x213200: 0xe6430004  swc1        $f3, 0x4($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131fc) {
            ctx->pc = 0x213240u;
            goto label_213240;
        }
    }
    ctx->pc = 0x213204u;
    // 0x213204: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x213204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213208: 0x0  nop
    ctx->pc = 0x213208u;
    // NOP
    // 0x21320c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x21320Cu;
    {
        const bool branch_taken_0x21320c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21320Cu;
        // 0x213210: 0x27b40208  addiu       $s4, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21320c) {
            ctx->pc = 0x213258u;
            goto label_213258;
        }
    }
    ctx->pc = 0x213214u;
    // 0x213214: 0x27b3020c  addiu       $s3, $sp, 0x20C
    ctx->pc = 0x213214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_213218:
    // 0x213218: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x213218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21321c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213220: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x213220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x213224: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x213224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x213228: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x213228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21322c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x21322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x213230: 0x4501fff9  bc1t        . + 4 + (-0x7 << 2)
    ctx->pc = 0x213230u;
    {
        const bool branch_taken_0x213230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213230) {
            ctx->pc = 0x213218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213218;
        }
    }
    ctx->pc = 0x213238u;
    // 0x213238: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213238u;
    {
        const bool branch_taken_0x213238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213238u;
        // 0x21323c: 0xc6410004  lwc1        $f1, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213238) {
            ctx->pc = 0x213264u;
            goto label_213264;
        }
    }
    ctx->pc = 0x213240u;
label_213240:
    // 0x213240: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x213240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213244: 0x0  nop
    ctx->pc = 0x213244u;
    // NOP
    // 0x213248: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x213248u;
    {
        const bool branch_taken_0x213248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213248u;
        // 0x21324c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213248) {
            ctx->pc = 0x213258u;
            goto label_213258;
        }
    }
    ctx->pc = 0x213250u;
    // 0x213250: 0xe6550004  swc1        $f21, 0x4($s2)
    ctx->pc = 0x213250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x213254: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x213254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_213258:
    // 0x213258: 0x27b40208  addiu       $s4, $sp, 0x208
    ctx->pc = 0x213258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x21325c: 0x27b3020c  addiu       $s3, $sp, 0x20C
    ctx->pc = 0x21325cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x213260: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x213260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213264:
    // 0x213264: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x213264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213268: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x213268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21326c: 0x0  nop
    ctx->pc = 0x21326cu;
    // NOP
    // 0x213270: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x213270u;
    {
        const bool branch_taken_0x213270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213270) {
            ctx->pc = 0x213274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213270u;
            // 0x213274: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2132A4u;
            goto label_2132a4;
        }
    }
    ctx->pc = 0x213278u;
label_213278:
    // 0x213278: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x213278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x21327c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21327cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213280: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x213280u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x213284: 0x0  nop
    ctx->pc = 0x213284u;
    // NOP
    // 0x213288: 0x0  nop
    ctx->pc = 0x213288u;
    // NOP
    // 0x21328c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x21328Cu;
    {
        const bool branch_taken_0x21328c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21328c) {
            ctx->pc = 0x213278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213278;
        }
    }
    ctx->pc = 0x213294u;
    // 0x213294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213298: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x213298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x21329c: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x21329cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x2132a0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2132a4:
    // 0x2132a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2132A4u;
    {
        const bool branch_taken_0x2132a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132A4u;
        // 0x2132a8: 0x8fa30210  lw          $v1, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132a4) {
            ctx->pc = 0x21333Cu;
            goto label_21333c;
        }
    }
    ctx->pc = 0x2132ACu;
    // 0x2132ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2132acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2132b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2132b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2132b4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2132B4u;
    {
        const bool branch_taken_0x2132b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132B4u;
        // 0x2132b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132b4) {
            ctx->pc = 0x21333Cu;
            goto label_21333c;
        }
    }
    ctx->pc = 0x2132BCu;
    // 0x2132bc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2132bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2132c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2132c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2132c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132c8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2132c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2132cc: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x2132ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2132d0: 0xc0854a0  jal         func_215280
    ctx->pc = 0x2132D0u;
    SET_GPR_U32(ctx, 31, 0x2132D8u);
    ctx->pc = 0x2132D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132D0u;
    // 0x2132d4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x2132D0u, 0x2132D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132D8u;
label_2132d8:
    // 0x2132d8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2132dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2132dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2132e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2132e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132e8: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2132e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2132ec: 0xc0854a0  jal         func_215280
    ctx->pc = 0x2132ECu;
    SET_GPR_U32(ctx, 31, 0x2132F4u);
    ctx->pc = 0x2132F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132ECu;
    // 0x2132f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x2132ECu, 0x2132F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132F4u;
label_2132f4:
    // 0x2132f4: 0xc7a40110  lwc1        $f4, 0x110($sp)
    ctx->pc = 0x2132f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2132f8: 0xc7a50114  lwc1        $f5, 0x114($sp)
    ctx->pc = 0x2132f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2132fc: 0xc7a30118  lwc1        $f3, 0x118($sp)
    ctx->pc = 0x2132fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213300: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x213300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213304: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x213304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213308: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x213308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21330c: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x21330cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x213310: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x213310u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x213314: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x213314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x213318: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x213318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x21331c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x21331cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x213320: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x213320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x213324: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x213324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x213328: 0xe6420018  swc1        $f2, 0x18($s2)
    ctx->pc = 0x213328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x21332c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21332Cu;
    {
        const bool branch_taken_0x21332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21332Cu;
        // 0x213330: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21332c) {
            ctx->pc = 0x21333Cu;
            goto label_21333c;
        }
    }
    ctx->pc = 0x213334u;
label_213334:
    // 0x213334: 0x27b40208  addiu       $s4, $sp, 0x208
    ctx->pc = 0x213334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x213338: 0x27b3020c  addiu       $s3, $sp, 0x20C
    ctx->pc = 0x213338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_21333c:
    // 0x21333c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21333cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213340: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x213340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213344: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x213344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21334c: 0xc085314  jal         func_214C50
    ctx->pc = 0x21334Cu;
    SET_GPR_U32(ctx, 31, 0x213354u);
    ctx->pc = 0x213350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21334Cu;
    // 0x213350: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C50u, 0x21334Cu, 0x213354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213354u;
label_213354:
    // 0x213354: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x213354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213358:
    // 0x213358: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x21335c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x21335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x213360: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x213360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x213364: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x213364u;
    {
        const bool branch_taken_0x213364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x213368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213364u;
        // 0x213368: 0x8f849f74  lw          $a0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213364) {
            ctx->pc = 0x213394u;
            goto label_213394;
        }
    }
    ctx->pc = 0x21336Cu;
    // 0x21336c: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x21336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x213370: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x213370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213374: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x213374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x213378: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x213378u;
    {
        const bool branch_taken_0x213378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213378) {
            ctx->pc = 0x21337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213378u;
            // 0x21337c: 0x8efe0008  lw          $fp, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213398u;
            goto label_213398;
        }
    }
    ctx->pc = 0x213380u;
    // 0x213380: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x213380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x213384: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x213388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x213388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21338c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21338Cu;
    {
        const bool branch_taken_0x21338c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21338Cu;
        // 0x213390: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21338c) {
            ctx->pc = 0x213398u;
            goto label_213398;
        }
    }
    ctx->pc = 0x213394u;
label_213394:
    // 0x213394: 0x8efe0008  lw          $fp, 0x8($s7)
    ctx->pc = 0x213394u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_213398:
    // 0x213398: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21339c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x21339cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2133a0: 0x0  nop
    ctx->pc = 0x2133a0u;
    // NOP
    // 0x2133a4: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
    ctx->pc = 0x2133A4u;
    {
        const bool branch_taken_0x2133a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133A4u;
        // 0x2133a8: 0x8fa70200  lw          $a3, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133a4) {
            ctx->pc = 0x2135D0u;
            goto label_2135d0;
        }
    }
    ctx->pc = 0x2133ACu;
    // 0x2133ac: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x2133acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2133b0: 0x10e30019  beq         $a3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2133B0u;
    {
        const bool branch_taken_0x2133b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2133B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133B0u;
        // 0x2133b4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133b0) {
            ctx->pc = 0x213418u;
            goto label_213418;
        }
    }
    ctx->pc = 0x2133B8u;
    // 0x2133b8: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x2133b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2133bc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2133bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2133c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2133c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2133c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2133c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2133c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2133c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2133cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2133ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2133d0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2133d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2133d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2133d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2133d8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2133d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2133dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2133dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2133e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2133e4: 0x0  nop
    ctx->pc = 0x2133e4u;
    // NOP
    // 0x2133e8: 0x0  nop
    ctx->pc = 0x2133e8u;
    // NOP
    // 0x2133ec: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2133ecu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x2133f0: 0x0  nop
    ctx->pc = 0x2133f0u;
    // NOP
    // 0x2133f4: 0x0  nop
    ctx->pc = 0x2133f4u;
    // NOP
    // 0x2133f8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2133f8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2133fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2133fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x213400: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x213400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213404: 0x0  nop
    ctx->pc = 0x213404u;
    // NOP
    // 0x213408: 0x0  nop
    ctx->pc = 0x213408u;
    // NOP
    // 0x21340c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x21340cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x213410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213410u;
    {
        const bool branch_taken_0x213410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213410u;
        // 0x213414: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213410) {
            ctx->pc = 0x213420u;
            goto label_213420;
        }
    }
    ctx->pc = 0x213418u;
label_213418:
    // 0x213418: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x213418u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21341c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21341cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213420:
    // 0x213420: 0x5bc00179  blezl       $fp, . + 4 + (0x179 << 2)
    ctx->pc = 0x213420u;
    {
        const bool branch_taken_0x213420 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x213420) {
            ctx->pc = 0x213424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213420u;
            // 0x213424: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A08u;
            goto label_213a08;
        }
    }
    ctx->pc = 0x213428u;
    // 0x213428: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x213428u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21342c: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x21342cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x213430: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x213430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x213434: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x213434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_213438:
    // 0x213438: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x213438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x21343c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x213440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213444: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x213444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213448: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x213448u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21344c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21344cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213450: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x213450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213454: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x213454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x213458: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x213458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21345c: 0xc0854a0  jal         func_215280
    ctx->pc = 0x21345Cu;
    SET_GPR_U32(ctx, 31, 0x213464u);
    ctx->pc = 0x213460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21345Cu;
    // 0x213460: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x21345Cu, 0x213464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213464u;
label_213464:
    // 0x213464: 0x8fa70204  lw          $a3, 0x204($sp)
    ctx->pc = 0x213464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x213468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21346c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21346cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213470: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x213470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213474: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x213474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213478: 0xc0854a0  jal         func_215280
    ctx->pc = 0x213478u;
    SET_GPR_U32(ctx, 31, 0x213480u);
    ctx->pc = 0x21347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213478u;
    // 0x21347c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x213478u, 0x213480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213480u;
label_213480:
    // 0x213480: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x213480u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x213484: 0xc7a7007c  lwc1        $f7, 0x7C($sp)
    ctx->pc = 0x213484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x213488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21348c: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x21348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x213490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213494: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x213494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213498: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213498u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21349c: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x21349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2134a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2134a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134a4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2134a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2134a8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2134a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2134ac: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2134acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2134b0: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x2134b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2134b4: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x2134b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2134b8: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2134b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2134bc: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2134bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2134c0: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2134c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2134c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2134c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2134c8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2134c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2134cc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2134ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2134d0: 0xc0ad020  jal         func_2B4080
    ctx->pc = 0x2134D0u;
    SET_GPR_U32(ctx, 31, 0x2134D8u);
    ctx->pc = 0x2134D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134D0u;
    // 0x2134d4: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4080u, 0x2134D0u, 0x2134D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134D8u;
label_2134d8:
    // 0x2134d8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2134d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2134dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2134dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134e0: 0xc0acfe4  jal         func_2B3F90
    ctx->pc = 0x2134E0u;
    SET_GPR_U32(ctx, 31, 0x2134E8u);
    ctx->pc = 0x2134E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134E0u;
    // 0x2134e4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F90u, 0x2134E0u, 0x2134E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134E8u;
label_2134e8:
    // 0x2134e8: 0x56600028  bnel        $s3, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2134E8u;
    {
        const bool branch_taken_0x2134e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2134e8) {
            ctx->pc = 0x2134ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2134E8u;
            // 0x2134ec: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21358Cu;
            goto label_21358c;
        }
    }
    ctx->pc = 0x2134F0u;
    // 0x2134f0: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2134f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2134f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2134f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2134f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2134F8u;
    {
        const bool branch_taken_0x2134f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134F8u;
        // 0x2134fc: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134f8) {
            ctx->pc = 0x21355Cu;
            goto label_21355c;
        }
    }
    ctx->pc = 0x213500u;
    // 0x213500: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x213500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213504: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x213504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213508: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x213508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21350c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x21350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213510: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x213510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213514: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x213514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x213518: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x213518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x21351c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213520: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x213520u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x213524: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x213524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213528: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x213528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x21352c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x21352cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x213530: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x213530u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x213534: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x213534u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x213538: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x213538u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x21353c: 0xe6230068  swc1        $f3, 0x68($s1)
    ctx->pc = 0x21353cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x213540: 0xe624006c  swc1        $f4, 0x6C($s1)
    ctx->pc = 0x213540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x213544: 0xe6250070  swc1        $f5, 0x70($s1)
    ctx->pc = 0x213544u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x213548: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x213548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x21354c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213550: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x213550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213554: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213554u;
    {
        const bool branch_taken_0x213554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213554u;
        // 0x213558: 0xe4600034  swc1        $f0, 0x34($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213554) {
            ctx->pc = 0x213580u;
            goto label_213580;
        }
    }
    ctx->pc = 0x21355Cu;
label_21355c:
    // 0x21355c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213560: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x213560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x213564: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x213564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213568: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x213568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21356c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213570: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x213570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x213574: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x213574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213578: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x213578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21357c: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x21357cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_213580:
    // 0x213580: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213584: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x213584u;
    {
        const bool branch_taken_0x213584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213584u;
        // 0x213588: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213584) {
            ctx->pc = 0x2135B8u;
            goto label_2135b8;
        }
    }
    ctx->pc = 0x21358Cu;
label_21358c:
    // 0x21358c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x21358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213590: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x213594: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x213594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x213598: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x213598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21359c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2135a0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2135a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2135a4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2135a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2135a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2135a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2135ac: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2135acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2135b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2135b4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2135b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2135b8:
    // 0x2135b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2135b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2135bc: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x2135bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2135c0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x2135C0u;
    {
        const bool branch_taken_0x2135c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2135C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135C0u;
        // 0x2135c4: 0x8fa70200  lw          $a3, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135c0) {
            ctx->pc = 0x213438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213438;
        }
    }
    ctx->pc = 0x2135C8u;
    // 0x2135c8: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2135C8u;
    {
        const bool branch_taken_0x2135c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135C8u;
        // 0x2135cc: 0x8e2600f4  lw          $a2, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135c8) {
            ctx->pc = 0x213A04u;
            goto label_213a04;
        }
    }
    ctx->pc = 0x2135D0u;
label_2135d0:
    // 0x2135d0: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x2135d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2135d4: 0x10e30019  beq         $a3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2135D4u;
    {
        const bool branch_taken_0x2135d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2135D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135D4u;
        // 0x2135d8: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135d4) {
            ctx->pc = 0x21363Cu;
            goto label_21363c;
        }
    }
    ctx->pc = 0x2135DCu;
    // 0x2135dc: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x2135dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2135e0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2135e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2135e4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2135e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2135e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2135e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2135ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2135ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2135f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2135f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2135f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2135f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2135f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2135f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2135fc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2135fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213600: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x213600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213608: 0x0  nop
    ctx->pc = 0x213608u;
    // NOP
    // 0x21360c: 0x0  nop
    ctx->pc = 0x21360cu;
    // NOP
    // 0x213610: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x213610u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x213614: 0x0  nop
    ctx->pc = 0x213614u;
    // NOP
    // 0x213618: 0x0  nop
    ctx->pc = 0x213618u;
    // NOP
    // 0x21361c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x21361cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x213620: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x213620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x213624: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x213624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213628: 0x0  nop
    ctx->pc = 0x213628u;
    // NOP
    // 0x21362c: 0x0  nop
    ctx->pc = 0x21362cu;
    // NOP
    // 0x213630: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x213630u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x213634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213634u;
    {
        const bool branch_taken_0x213634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213634u;
        // 0x213638: 0x8fa20208  lw          $v0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213634) {
            ctx->pc = 0x213644u;
            goto label_213644;
        }
    }
    ctx->pc = 0x21363Cu;
label_21363c:
    // 0x21363c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x21363cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x213640: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x213640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_213644:
    // 0x213644: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x213644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x213648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21364c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x21364Cu;
    {
        const bool branch_taken_0x21364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x213650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21364Cu;
        // 0x213650: 0x8fa50210  lw          $a1, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21364c) {
            ctx->pc = 0x2136B8u;
            goto label_2136b8;
        }
    }
    ctx->pc = 0x213654u;
    // 0x213654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x213654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x213658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21365c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x21365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x213660: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x213660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213664: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x213664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x213668: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x213668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21366c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x213670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x213674: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x213674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213678: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x213678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21367c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213684: 0x0  nop
    ctx->pc = 0x213684u;
    // NOP
    // 0x213688: 0x0  nop
    ctx->pc = 0x213688u;
    // NOP
    // 0x21368c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x21368cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x213690: 0x0  nop
    ctx->pc = 0x213690u;
    // NOP
    // 0x213694: 0x0  nop
    ctx->pc = 0x213694u;
    // NOP
    // 0x213698: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x213698u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x21369c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x21369cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2136a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2136a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2136a4: 0x0  nop
    ctx->pc = 0x2136a4u;
    // NOP
    // 0x2136a8: 0x0  nop
    ctx->pc = 0x2136a8u;
    // NOP
    // 0x2136ac: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x2136acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x2136b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2136B0u;
    {
        const bool branch_taken_0x2136b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136B0u;
        // 0x2136b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136b0) {
            ctx->pc = 0x2136C0u;
            goto label_2136c0;
        }
    }
    ctx->pc = 0x2136B8u;
label_2136b8:
    // 0x2136b8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2136b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2136bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2136bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2136c0:
    // 0x2136c0: 0x1bc000d0  blez        $fp, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2136C0u;
    {
        const bool branch_taken_0x2136c0 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x2136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C0u;
        // 0x2136c4: 0x27a200b0  addiu       $v0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136c0) {
            ctx->pc = 0x213A04u;
            goto label_213a04;
        }
    }
    ctx->pc = 0x2136C8u;
    // 0x2136c8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2136c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2136cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2136ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2136d0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x2136d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x2136d4: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x2136d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
    // 0x2136d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2136d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2136dc: 0xafa5021c  sw          $a1, 0x21C($sp)
    ctx->pc = 0x2136dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 5));
    // 0x2136e0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2136e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2136e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2136e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2136e8: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x2136e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2136ec: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x2136ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2136f0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2136f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2136f4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2136f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2136f8: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2136f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x2136fc: 0xafa30218  sw          $v1, 0x218($sp)
    ctx->pc = 0x2136fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
    // 0x213700: 0xafa50220  sw          $a1, 0x220($sp)
    ctx->pc = 0x213700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 5));
    // 0x213704: 0x0  nop
    ctx->pc = 0x213704u;
    // NOP
label_213708:
    // 0x213708: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x213708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x21370c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21370cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x213710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213714: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x213714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213718: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21371c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21371cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213720: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x213720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213724: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x213724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x213728: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x213728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21372c: 0xc0854a0  jal         func_215280
    ctx->pc = 0x21372Cu;
    SET_GPR_U32(ctx, 31, 0x213734u);
    ctx->pc = 0x213730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21372Cu;
    // 0x213730: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x21372Cu, 0x213734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213734u;
label_213734:
    // 0x213734: 0x8fa70204  lw          $a3, 0x204($sp)
    ctx->pc = 0x213734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x213738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21373c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x213740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213744: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x213744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213748: 0xc0854a0  jal         func_215280
    ctx->pc = 0x213748u;
    SET_GPR_U32(ctx, 31, 0x213750u);
    ctx->pc = 0x21374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213748u;
    // 0x21374c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x213748u, 0x213750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213750u;
label_213750:
    // 0x213750: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x213750u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x213754: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x213754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x213758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21375c: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x21375cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x213760: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x213760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213764: 0x8fa80224  lw          $t0, 0x224($sp)
    ctx->pc = 0x213764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x213768: 0xc0854a0  jal         func_215280
    ctx->pc = 0x213768u;
    SET_GPR_U32(ctx, 31, 0x213770u);
    ctx->pc = 0x21376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213768u;
    // 0x21376c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x213768u, 0x213770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213770u;
label_213770:
    // 0x213770: 0x8fa7020c  lw          $a3, 0x20C($sp)
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x213774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213778: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x213778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x21377c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213780: 0x8fa80228  lw          $t0, 0x228($sp)
    ctx->pc = 0x213780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x213784: 0xc0854a0  jal         func_215280
    ctx->pc = 0x213784u;
    SET_GPR_U32(ctx, 31, 0x21378Cu);
    ctx->pc = 0x213788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213784u;
    // 0x213788: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215280u, 0x213784u, 0x21378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21378Cu;
label_21378c:
    // 0x21378c: 0xc7b0007c  lwc1        $f16, 0x7C($sp)
    ctx->pc = 0x21378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x213790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213794: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x213794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x213798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21379c: 0xc7ae0084  lwc1        $f14, 0x84($sp)
    ctx->pc = 0x21379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2137a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2137a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2137a4: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x2137a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2137a8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2137a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2137ac: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2137acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2137b0: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2137b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2137b4: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x2137b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2137b8: 0xc7a400bc  lwc1        $f4, 0xBC($sp)
    ctx->pc = 0x2137b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2137bc: 0xc7a500c0  lwc1        $f5, 0xC0($sp)
    ctx->pc = 0x2137bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2137c0: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x2137c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2137c4: 0xc7a700c8  lwc1        $f7, 0xC8($sp)
    ctx->pc = 0x2137c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2137c8: 0xc7a800dc  lwc1        $f8, 0xDC($sp)
    ctx->pc = 0x2137c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2137cc: 0xc7a900e0  lwc1        $f9, 0xE0($sp)
    ctx->pc = 0x2137ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2137d0: 0xc7aa00e4  lwc1        $f10, 0xE4($sp)
    ctx->pc = 0x2137d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2137d4: 0xc7ab00e8  lwc1        $f11, 0xE8($sp)
    ctx->pc = 0x2137d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2137d8: 0x8fa6021c  lw          $a2, 0x21C($sp)
    ctx->pc = 0x2137d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x2137dc: 0xe7b00010  swc1        $f16, 0x10($sp)
    ctx->pc = 0x2137dcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2137e0: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x2137e0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2137e4: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x2137e4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2137e8: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x2137e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2137ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2137ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2137f0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2137f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2137f4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2137f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2137f8: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2137f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2137fc: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2137fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x213800: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x213800u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x213804: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x213804u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x213808: 0xe7a7003c  swc1        $f7, 0x3C($sp)
    ctx->pc = 0x213808u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x21380c: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x21380cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x213810: 0xe7a90044  swc1        $f9, 0x44($sp)
    ctx->pc = 0x213810u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x213814: 0xe7aa0048  swc1        $f10, 0x48($sp)
    ctx->pc = 0x213814u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x213818: 0xc0ad020  jal         func_2B4080
    ctx->pc = 0x213818u;
    SET_GPR_U32(ctx, 31, 0x213820u);
    ctx->pc = 0x21381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213818u;
    // 0x21381c: 0xe7ab004c  swc1        $f11, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4080u, 0x213818u, 0x213820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213820u;
label_213820:
    // 0x213820: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x213824: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x213824u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x213828: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x213828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x21382c: 0xc0ad020  jal         func_2B4080
    ctx->pc = 0x21382Cu;
    SET_GPR_U32(ctx, 31, 0x213834u);
    ctx->pc = 0x213830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21382Cu;
    // 0x213830: 0x8fa60220  lw          $a2, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4080u, 0x21382Cu, 0x213834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213834u;
label_213834:
    // 0x213834: 0xc62c00e4  lwc1        $f12, 0xE4($s1)
    ctx->pc = 0x213834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213838: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x213838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21383c: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x21383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x213840: 0xc0ad020  jal         func_2B4080
    ctx->pc = 0x213840u;
    SET_GPR_U32(ctx, 31, 0x213848u);
    ctx->pc = 0x213844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213840u;
    // 0x213844: 0x8fa50220  lw          $a1, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4080u, 0x213840u, 0x213848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213848u;
label_213848:
    // 0x213848: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x213848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21384c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213850: 0xc0acfe4  jal         func_2B3F90
    ctx->pc = 0x213850u;
    SET_GPR_U32(ctx, 31, 0x213858u);
    ctx->pc = 0x213854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213850u;
    // 0x213854: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F90u, 0x213850u, 0x213858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213858u;
label_213858:
    // 0x213858: 0x1660004e  bnez        $s3, . + 4 + (0x4E << 2)
    ctx->pc = 0x213858u;
    {
        const bool branch_taken_0x213858 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213858u;
        // 0x21385c: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213858) {
            ctx->pc = 0x213994u;
            goto label_213994;
        }
    }
    ctx->pc = 0x213860u;
    // 0x213860: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x213864: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x213864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x213868: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x213868u;
    {
        const bool branch_taken_0x213868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213868u;
        // 0x21386c: 0xc7a20074  lwc1        $f2, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213868) {
            ctx->pc = 0x213934u;
            goto label_213934;
        }
    }
    ctx->pc = 0x213870u;
    // 0x213870: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x213870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213874: 0xc7a900b4  lwc1        $f9, 0xB4($sp)
    ctx->pc = 0x213874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x213878: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x213878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21387c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21387cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213880: 0xc7a80070  lwc1        $f8, 0x70($sp)
    ctx->pc = 0x213880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x213884: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x213884u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x213888: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x213888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21388c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21388cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213890: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x213890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213894: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x213894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213898: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x213898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x21389c: 0xc7aa0078  lwc1        $f10, 0x78($sp)
    ctx->pc = 0x21389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2138a0: 0x460012c0  add.s       $f11, $f2, $f0
    ctx->pc = 0x2138a0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2138a4: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2138a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2138a8: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x2138a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x2138ac: 0xc7a700b8  lwc1        $f7, 0xB8($sp)
    ctx->pc = 0x2138acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2138b0: 0x46014800  add.s       $f0, $f9, $f1
    ctx->pc = 0x2138b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2138b4: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2138b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2138b8: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x2138b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2138bc: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x2138bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2138c0: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x2138c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x2138c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2138c8: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x2138c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x2138cc: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2138ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2138d0: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2138d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x2138d4: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x2138d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2138d8: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x2138d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x2138dc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2138dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2138e0: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x2138e0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x2138e4: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2138e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2138e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2138e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2138ec: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2138ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2138f0: 0x46035140  add.s       $f5, $f10, $f3
    ctx->pc = 0x2138f0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x2138f4: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x2138f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x2138f8: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2138f8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2138fc: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x2138fcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x213900: 0xe6250070  swc1        $f5, 0x70($s1)
    ctx->pc = 0x213900u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x213904: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x213904u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x213908: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x213908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x21390c: 0xe62700b0  swc1        $f7, 0xB0($s1)
    ctx->pc = 0x21390cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x213910: 0xe6230068  swc1        $f3, 0x68($s1)
    ctx->pc = 0x213910u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x213914: 0xe62600a8  swc1        $f6, 0xA8($s1)
    ctx->pc = 0x213914u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x213918: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x213918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x21391c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213920: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x213920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213924: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x213924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x213928: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21392c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21392Cu;
    {
        const bool branch_taken_0x21392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21392Cu;
        // 0x213930: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21392c) {
            ctx->pc = 0x2139F0u;
            goto label_2139f0;
        }
    }
    ctx->pc = 0x213934u;
label_213934:
    // 0x213934: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x213934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213938: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x213938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21393c: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x21393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213940: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x213940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213944: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x213944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x213948: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21394c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x21394cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x213950: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x213950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213954: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x213954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x213958: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x213958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x21395c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x21395cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x213960: 0x46001ac0  add.s       $f11, $f3, $f0
    ctx->pc = 0x213960u;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x213964: 0xc62200e4  lwc1        $f2, 0xE4($s1)
    ctx->pc = 0x213964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213968: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x213968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21396c: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x21396cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x213970: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x213970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x213974: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x213974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x213978: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21397c: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x21397cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x213980: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x213980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x213984: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213988: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x213988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21398c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21398Cu;
    {
        const bool branch_taken_0x21398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21398Cu;
        // 0x213990: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21398c) {
            ctx->pc = 0x2139F0u;
            goto label_2139f0;
        }
    }
    ctx->pc = 0x213994u;
label_213994:
    // 0x213994: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x213994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213998: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x213998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21399c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x21399cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2139a0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2139a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2139a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2139a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2139a8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2139a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2139ac: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2139acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2139b0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2139b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2139b4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2139b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2139b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2139bc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2139bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2139c0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2139c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2139c4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2139c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2139c8: 0x460122c0  add.s       $f11, $f4, $f1
    ctx->pc = 0x2139c8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2139cc: 0xe4430030  swc1        $f3, 0x30($v0)
    ctx->pc = 0x2139ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2139d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2139d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2139d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2139d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2139d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2139dc: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2139dcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2139e0: 0xe46b0034  swc1        $f11, 0x34($v1)
    ctx->pc = 0x2139e0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2139e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2139e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2139e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2139e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2139ec: 0xe4450038  swc1        $f5, 0x38($v0)
    ctx->pc = 0x2139ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2139f0:
    // 0x2139f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2139f4: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x2139f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2139f8: 0x1440ff43  bnez        $v0, . + 4 + (-0xBD << 2)
    ctx->pc = 0x2139F8u;
    {
        const bool branch_taken_0x2139f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2139FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139F8u;
        // 0x2139fc: 0x8fa70200  lw          $a3, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139f8) {
            ctx->pc = 0x213708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213708;
        }
    }
    ctx->pc = 0x213A00u;
    // 0x213a00: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_213a04:
    // 0x213a04: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x213a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_213a08:
    // 0x213a08: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x213a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x213a0c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213A0Cu;
    {
        const bool branch_taken_0x213a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x213a0c) {
            ctx->pc = 0x213A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213A0Cu;
            // 0x213a10: 0x8cc20160  lw          $v0, 0x160($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A24u;
            goto label_213a24;
        }
    }
    ctx->pc = 0x213A14u;
    // 0x213a14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213a18: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213a1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213A1Cu;
    {
        const bool branch_taken_0x213a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A1Cu;
        // 0x213a20: 0x8e22009c  lw          $v0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a1c) {
            ctx->pc = 0x213A40u;
            goto label_213a40;
        }
    }
    ctx->pc = 0x213A24u;
label_213a24:
    // 0x213a24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213a28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213a2c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213a30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x213a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x213a34: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x213A34u;
    {
        const bool branch_taken_0x213a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x213A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A34u;
        // 0x213a38: 0x8e22009c  lw          $v0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a34) {
            ctx->pc = 0x213A40u;
            goto label_213a40;
        }
    }
    ctx->pc = 0x213A3Cu;
    // 0x213a3c: 0xc7958034  lwc1        $f21, -0x7FCC($gp)
    ctx->pc = 0x213a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_213a40:
    // 0x213a40: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x213A40u;
    {
        const bool branch_taken_0x213a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213a40) {
            ctx->pc = 0x213A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213A40u;
            // 0x213a44: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213AB4u;
            goto label_213ab4;
        }
    }
    ctx->pc = 0x213A48u;
    // 0x213a48: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x213a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213a4c: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x213a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213a50: 0x0  nop
    ctx->pc = 0x213a50u;
    // NOP
    // 0x213a54: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x213A54u;
    {
        const bool branch_taken_0x213a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213a54) {
            ctx->pc = 0x213A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213A54u;
            // 0x213a58: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213AB4u;
            goto label_213ab4;
        }
    }
    ctx->pc = 0x213A5Cu;
    // 0x213a5c: 0x0  nop
    ctx->pc = 0x213a5cu;
    // NOP
    // 0x213a60: 0x0  nop
    ctx->pc = 0x213a60u;
    // NOP
    // 0x213a64: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x213a64u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x213a68: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x213a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213a70: 0xc62c0094  lwc1        $f12, 0x94($s1)
    ctx->pc = 0x213a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213a74: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x213a74u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213a78: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213A78u;
    SET_GPR_U32(ctx, 31, 0x213A80u);
    ctx->pc = 0x213A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A78u;
    // 0x213a7c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213A78u, 0x213A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A80u;
label_213a80:
    // 0x213a80: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213a84: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x213a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x213a88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213a8c: 0xc4c10054  lwc1        $f1, 0x54($a2)
    ctx->pc = 0x213a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213a90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213a94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x213a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213a98: 0x0  nop
    ctx->pc = 0x213a98u;
    // NOP
    // 0x213a9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x213A9Cu;
    {
        const bool branch_taken_0x213a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A9Cu;
        // 0x213aa0: 0xe4c00054  swc1        $f0, 0x54($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a9c) {
            ctx->pc = 0x213AACu;
            goto label_213aac;
        }
    }
    ctx->pc = 0x213AA4u;
    // 0x213aa4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x213aa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213aa8: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x213aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_213aac:
    // 0x213aac: 0xe6340094  swc1        $f20, 0x94($s1)
    ctx->pc = 0x213aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x213ab0: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_213ab4:
    // 0x213ab4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x213AB4u;
    {
        const bool branch_taken_0x213ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213ab4) {
            ctx->pc = 0x213AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213AB4u;
            // 0x213ab8: 0x8e23009c  lw          $v1, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213B28u;
            goto label_213b28;
        }
    }
    ctx->pc = 0x213ABCu;
    // 0x213abc: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x213abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213ac0: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x213ac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213ac4: 0x0  nop
    ctx->pc = 0x213ac4u;
    // NOP
    // 0x213ac8: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x213AC8u;
    {
        const bool branch_taken_0x213ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213ac8) {
            ctx->pc = 0x213ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213AC8u;
            // 0x213acc: 0x8e23009c  lw          $v1, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213B28u;
            goto label_213b28;
        }
    }
    ctx->pc = 0x213AD0u;
    // 0x213ad0: 0x0  nop
    ctx->pc = 0x213ad0u;
    // NOP
    // 0x213ad4: 0x0  nop
    ctx->pc = 0x213ad4u;
    // NOP
    // 0x213ad8: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x213ad8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x213adc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x213adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x213ae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ae4: 0xc62c00d4  lwc1        $f12, 0xD4($s1)
    ctx->pc = 0x213ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213ae8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x213ae8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213aec: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213AECu;
    SET_GPR_U32(ctx, 31, 0x213AF4u);
    ctx->pc = 0x213AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AECu;
    // 0x213af0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213AECu, 0x213AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AF4u;
label_213af4:
    // 0x213af4: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213af8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x213af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x213afc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213b00: 0xc4c10054  lwc1        $f1, 0x54($a2)
    ctx->pc = 0x213b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213b04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213b08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x213b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b0c: 0x0  nop
    ctx->pc = 0x213b0cu;
    // NOP
    // 0x213b10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x213B10u;
    {
        const bool branch_taken_0x213b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B10u;
        // 0x213b14: 0xe4c00054  swc1        $f0, 0x54($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b10) {
            ctx->pc = 0x213B20u;
            goto label_213b20;
        }
    }
    ctx->pc = 0x213B18u;
    // 0x213b18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x213b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213b1c: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x213b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_213b20:
    // 0x213b20: 0xe63400d4  swc1        $f20, 0xD4($s1)
    ctx->pc = 0x213b20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x213b24: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x213b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_213b28:
    // 0x213b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213b2c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x213B2Cu;
    {
        const bool branch_taken_0x213b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x213b2c) {
            ctx->pc = 0x213B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213B2Cu;
            // 0x213b30: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213BA8u;
            goto label_213ba8;
        }
    }
    ctx->pc = 0x213B34u;
    // 0x213b34: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x213b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213b38: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x213b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b3c: 0x0  nop
    ctx->pc = 0x213b3cu;
    // NOP
    // 0x213b40: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x213B40u;
    {
        const bool branch_taken_0x213b40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213b40) {
            ctx->pc = 0x213B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213B40u;
            // 0x213b44: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213BA8u;
            goto label_213ba8;
        }
    }
    ctx->pc = 0x213B48u;
    // 0x213b48: 0x0  nop
    ctx->pc = 0x213b48u;
    // NOP
    // 0x213b4c: 0x0  nop
    ctx->pc = 0x213b4cu;
    // NOP
    // 0x213b50: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x213b50u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x213b54: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x213b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x213b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213b5c: 0xc62c0094  lwc1        $f12, 0x94($s1)
    ctx->pc = 0x213b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213b60: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x213b60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213b64: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213B64u;
    SET_GPR_U32(ctx, 31, 0x213B6Cu);
    ctx->pc = 0x213B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B64u;
    // 0x213b68: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213B64u, 0x213B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B6Cu;
label_213b6c:
    // 0x213b6c: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213b70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x213b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213b74: 0xc4c10054  lwc1        $f1, 0x54($a2)
    ctx->pc = 0x213b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213b78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x213b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x213b7c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x213b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b80: 0x0  nop
    ctx->pc = 0x213b80u;
    // NOP
    // 0x213b84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x213B84u;
    {
        const bool branch_taken_0x213b84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B84u;
        // 0x213b88: 0xe4c10054  swc1        $f1, 0x54($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b84) {
            ctx->pc = 0x213B9Cu;
            goto label_213b9c;
        }
    }
    ctx->pc = 0x213B8Cu;
    // 0x213b8c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x213b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x213b90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213b94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213b98: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x213b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_213b9c:
    // 0x213b9c: 0xe6340094  swc1        $f20, 0x94($s1)
    ctx->pc = 0x213b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x213ba0: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x213ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x213ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213ba8:
    // 0x213ba8: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x213BA8u;
    {
        const bool branch_taken_0x213ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x213ba8) {
            ctx->pc = 0x213BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213BA8u;
            // 0x213bac: 0xc4c100c8  lwc1        $f1, 0xC8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C20u;
            goto label_213c20;
        }
    }
    ctx->pc = 0x213BB0u;
    // 0x213bb0: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x213bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213bb4: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x213bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213bb8: 0x0  nop
    ctx->pc = 0x213bb8u;
    // NOP
    // 0x213bbc: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x213BBCu;
    {
        const bool branch_taken_0x213bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213bbc) {
            ctx->pc = 0x213BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213BBCu;
            // 0x213bc0: 0xc4c100c8  lwc1        $f1, 0xC8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C20u;
            goto label_213c20;
        }
    }
    ctx->pc = 0x213BC4u;
    // 0x213bc4: 0x0  nop
    ctx->pc = 0x213bc4u;
    // NOP
    // 0x213bc8: 0x0  nop
    ctx->pc = 0x213bc8u;
    // NOP
    // 0x213bcc: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x213bccu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x213bd0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x213bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x213bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213bd8: 0xc62c00d4  lwc1        $f12, 0xD4($s1)
    ctx->pc = 0x213bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213bdc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x213bdcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213be0: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213BE0u;
    SET_GPR_U32(ctx, 31, 0x213BE8u);
    ctx->pc = 0x213BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BE0u;
    // 0x213be4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213BE0u, 0x213BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BE8u;
label_213be8:
    // 0x213be8: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213bec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x213becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213bf0: 0xc4c10054  lwc1        $f1, 0x54($a2)
    ctx->pc = 0x213bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213bf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x213bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x213bf8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x213bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213bfc: 0x0  nop
    ctx->pc = 0x213bfcu;
    // NOP
    // 0x213c00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x213C00u;
    {
        const bool branch_taken_0x213c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C00u;
        // 0x213c04: 0xe4c10054  swc1        $f1, 0x54($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c00) {
            ctx->pc = 0x213C18u;
            goto label_213c18;
        }
    }
    ctx->pc = 0x213C08u;
    // 0x213c08: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x213c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x213c0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213c10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213c14: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x213c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_213c18:
    // 0x213c18: 0xe63400d4  swc1        $f20, 0xD4($s1)
    ctx->pc = 0x213c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x213c1c: 0xc4c100c8  lwc1        $f1, 0xC8($a2)
    ctx->pc = 0x213c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213c20:
    // 0x213c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c28: 0x0  nop
    ctx->pc = 0x213c28u;
    // NOP
    // 0x213c2c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x213C2Cu;
    {
        const bool branch_taken_0x213c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213c2c) {
            ctx->pc = 0x213C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213C2Cu;
            // 0x213c30: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C88u;
            goto label_213c88;
        }
    }
    ctx->pc = 0x213C34u;
    // 0x213c34: 0xc0856d4  jal         func_215B50
    ctx->pc = 0x213C34u;
    SET_GPR_U32(ctx, 31, 0x213C3Cu);
    ctx->pc = 0x213C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C34u;
    // 0x213c38: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B50u, 0x213C34u, 0x213C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C3Cu;
label_213c3c:
    // 0x213c3c: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213c40: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x213c44: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213C44u;
    {
        const bool branch_taken_0x213c44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x213C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C44u;
        // 0x213c48: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c44) {
            ctx->pc = 0x213C64u;
            goto label_213c64;
        }
    }
    ctx->pc = 0x213C4Cu;
    // 0x213c4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x213c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213c50: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x213c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x213c54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x213c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x213c58: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x213C58u;
    SET_GPR_U32(ctx, 31, 0x213C60u);
    ctx->pc = 0x213C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C58u;
    // 0x213c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x213C58u, 0x213C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C60u;
label_213c60:
    // 0x213c60: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_213c64:
    // 0x213c64: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x213c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x213c68: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213C68u;
    {
        const bool branch_taken_0x213c68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x213C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C68u;
        // 0x213c6c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c68) {
            ctx->pc = 0x213C84u;
            goto label_213c84;
        }
    }
    ctx->pc = 0x213C70u;
    // 0x213c70: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x213c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213c74: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x213c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x213c78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x213c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x213c7c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x213C7Cu;
    SET_GPR_U32(ctx, 31, 0x213C84u);
    ctx->pc = 0x213C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C7Cu;
    // 0x213c80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x213C7Cu, 0x213C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C84u;
label_213c84:
    // 0x213c84: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x213c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_213c88:
    // 0x213c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c90: 0xc08526c  jal         func_2149B0
    ctx->pc = 0x213C90u;
    SET_GPR_U32(ctx, 31, 0x213C98u);
    ctx->pc = 0x213C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C90u;
    // 0x213c94: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149B0u, 0x213C90u, 0x213C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C98u;
label_213c98:
    // 0x213c98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213ca0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ca8: 0xc0852a2  jal         func_214A88
    ctx->pc = 0x213CA8u;
    SET_GPR_U32(ctx, 31, 0x213CB0u);
    ctx->pc = 0x213CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CA8u;
    // 0x213cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A88u, 0x213CA8u, 0x213CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CB0u;
label_213cb0:
    // 0x213cb0: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x213cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213cb4: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x213cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x213cb8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x213cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x213cbc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x213cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x213cc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x213cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cc4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213CC4u;
    {
        const bool branch_taken_0x213cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x213CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CC4u;
        // 0x213cc8: 0x8c67000c  lw          $a3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cc4) {
            ctx->pc = 0x213CDCu;
            goto label_213cdc;
        }
    }
    ctx->pc = 0x213CCCu;
    // 0x213ccc: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x213cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x213cd0: 0xc45a0008  lwc1        $f26, 0x8($v0)
    ctx->pc = 0x213cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x213cd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x213CD4u;
    {
        const bool branch_taken_0x213cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CD4u;
        // 0x213cd8: 0xc4550004  lwc1        $f21, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cd4) {
            ctx->pc = 0x213CE8u;
            goto label_213ce8;
        }
    }
    ctx->pc = 0x213CDCu;
label_213cdc:
    // 0x213cdc: 0x8cd40160  lw          $s4, 0x160($a2)
    ctx->pc = 0x213cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x213ce0: 0xc6950b98  lwc1        $f21, 0xB98($s4)
    ctx->pc = 0x213ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x213ce4: 0xc69a0b9c  lwc1        $f26, 0xB9C($s4)
    ctx->pc = 0x213ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_213ce8:
    // 0x213ce8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x213ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x213cec: 0x286200c9  slti        $v0, $v1, 0xC9
    ctx->pc = 0x213cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x213cf0: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x213CF0u;
    {
        const bool branch_taken_0x213cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213cf0) {
            ctx->pc = 0x213CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213CF0u;
            // 0x213cf4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E9Cu;
            goto label_213e9c;
        }
    }
    ctx->pc = 0x213CF8u;
    // 0x213cf8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x213cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x213cfc: 0x244200c9  addiu       $v0, $v0, 0xC9
    ctx->pc = 0x213cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 201));
    // 0x213d00: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x213d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213d04: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x213D04u;
    {
        const bool branch_taken_0x213d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D04u;
        // 0x213d08: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d04) {
            ctx->pc = 0x213E98u;
            goto label_213e98;
        }
    }
    ctx->pc = 0x213D0Cu;
    // 0x213d0c: 0xc7978038  lwc1        $f23, -0x7FC8($gp)
    ctx->pc = 0x213d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x213d10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213d14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d18: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x213d18u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x213d1c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x213d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x213d20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x213d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x213d24: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x213d24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213d28: 0xc4cd0050  lwc1        $f13, 0x50($a2)
    ctx->pc = 0x213d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x213d2c: 0x0  nop
    ctx->pc = 0x213d2cu;
    // NOP
    // 0x213d30: 0x0  nop
    ctx->pc = 0x213d30u;
    // NOP
    // 0x213d34: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x213d34u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[22];
    // 0x213d38: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x213d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213d3c: 0xc4cc004c  lwc1        $f12, 0x4C($a2)
    ctx->pc = 0x213d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213d40: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x213d40u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213d44: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213D44u;
    SET_GPR_U32(ctx, 31, 0x213D4Cu);
    ctx->pc = 0x213D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D44u;
    // 0x213d48: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213D44u, 0x213D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D4Cu;
label_213d4c:
    // 0x213d4c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x213d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213d50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x213d50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x213d54: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x213d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x213d58: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213D58u;
    SET_GPR_U32(ctx, 31, 0x213D60u);
    ctx->pc = 0x213D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D58u;
    // 0x213d5c: 0xc44d0050  lwc1        $f13, 0x50($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213D58u, 0x213D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D60u;
label_213d60:
    // 0x213d60: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x213d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x213d64: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x213d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x213d68: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x213d68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x213d6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x213d6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x213d70: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x213d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x213d74: 0x0  nop
    ctx->pc = 0x213d74u;
    // NOP
    // 0x213d78: 0x0  nop
    ctx->pc = 0x213d78u;
    // NOP
    // 0x213d7c: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x213d7cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x213d80: 0x0  nop
    ctx->pc = 0x213d80u;
    // NOP
    // 0x213d84: 0x0  nop
    ctx->pc = 0x213d84u;
    // NOP
    // 0x213d88: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x213d88u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[22];
    // 0x213d8c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x213D8Cu;
    SET_GPR_U32(ctx, 31, 0x213D94u);
    ctx->pc = 0x213D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D8Cu;
    // 0x213d90: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x213D8Cu, 0x213D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D94u;
label_213d94:
    // 0x213d94: 0x1aa000d5  blez        $s5, . + 4 + (0xD5 << 2)
    ctx->pc = 0x213D94u;
    {
        const bool branch_taken_0x213d94 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x213D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D94u;
        // 0x213d98: 0x24160018  addiu       $s6, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d94) {
            ctx->pc = 0x2140ECu;
            goto label_2140ec;
        }
    }
    ctx->pc = 0x213D9Cu;
    // 0x213d9c: 0xc794803c  lwc1        $f20, -0x7FC4($gp)
    ctx->pc = 0x213d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x213da0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x213da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x213da4: 0x0  nop
    ctx->pc = 0x213da4u;
    // NOP
label_213da8:
    // 0x213da8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x213da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x213dac: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x213dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x213db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x213db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213db4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x213db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213db8: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x213db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x213dbc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x213dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x213dc0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x213DC0u;
    {
        const bool branch_taken_0x213dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DC0u;
        // 0x213dc4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dc0) {
            ctx->pc = 0x213E80u;
            goto label_213e80;
        }
    }
    ctx->pc = 0x213DC8u;
    // 0x213dc8: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x213dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213dcc: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x213dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x213dd0: 0x80440001  lb          $a0, 0x1($v0)
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x213dd4: 0x482002b  bltzl       $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x213DD4u;
    {
        const bool branch_taken_0x213dd4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x213dd4) {
            ctx->pc = 0x213DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213DD4u;
            // 0x213dd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E84u;
            goto label_213e84;
        }
    }
    ctx->pc = 0x213DDCu;
    // 0x213ddc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x213ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213de0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x213de4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x213de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213de8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x213DE8u;
    {
        const bool branch_taken_0x213de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213de8) {
            ctx->pc = 0x213DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213DE8u;
            // 0x213dec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E84u;
            goto label_213e84;
        }
    }
    ctx->pc = 0x213DF0u;
    // 0x213df0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213df4: 0x48180  sll         $s0, $a0, 6
    ctx->pc = 0x213df4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x213df8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x213df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x213dfc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x213dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e00: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x213e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x213e04: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x213E04u;
    {
        const bool branch_taken_0x213e04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E04u;
        // 0x213e08: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e04) {
            ctx->pc = 0x213E30u;
            goto label_213e30;
        }
    }
    ctx->pc = 0x213E0Cu;
    // 0x213e0c: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x213e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x213e10: 0x54560008  bnel        $v0, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x213E10u;
    {
        const bool branch_taken_0x213e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x213e10) {
            ctx->pc = 0x213E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213E10u;
            // 0x213e14: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E34u;
            goto label_213e34;
        }
    }
    ctx->pc = 0x213E18u;
    // 0x213e18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213e1c: 0xc7819d50  lwc1        $f1, -0x62B0($gp)
    ctx->pc = 0x213e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213e20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x213e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x213e24: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x213e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x213e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x213e2c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x213e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_213e30:
    // 0x213e30: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x213e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_213e34:
    // 0x213e34: 0x27b20170  addiu       $s2, $sp, 0x170
    ctx->pc = 0x213e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x213e38: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x213e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x213e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e40: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x213E40u;
    SET_GPR_U32(ctx, 31, 0x213E48u);
    ctx->pc = 0x213E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E40u;
    // 0x213e44: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x213E40u, 0x213E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E48u;
label_213e48:
    // 0x213e48: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x213e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e4c: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x213e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x213e50: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x213E50u;
    {
        const bool branch_taken_0x213e50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E50u;
        // 0x213e54: 0xe7a101a4  swc1        $f1, 0x1A4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e50) {
            ctx->pc = 0x213E70u;
            goto label_213e70;
        }
    }
    ctx->pc = 0x213E58u;
    // 0x213e58: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x213e58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x213e5c: 0x54560005  bnel        $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E5Cu;
    {
        const bool branch_taken_0x213e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x213e5c) {
            ctx->pc = 0x213E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213E5Cu;
            // 0x213e60: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E74u;
            goto label_213e74;
        }
    }
    ctx->pc = 0x213E64u;
    // 0x213e64: 0xc7809d50  lwc1        $f0, -0x62B0($gp)
    ctx->pc = 0x213e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213e6c: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x213e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_213e70:
    // 0x213e70: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x213e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_213e74:
    // 0x213e74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e78: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x213E78u;
    SET_GPR_U32(ctx, 31, 0x213E80u);
    ctx->pc = 0x213E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E78u;
    // 0x213e7c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x213E78u, 0x213E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E80u;
label_213e80:
    // 0x213e80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x213e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_213e84:
    // 0x213e84: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x213e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x213e88: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x213E88u;
    {
        const bool branch_taken_0x213e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213e88) {
            ctx->pc = 0x213E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213E88u;
            // 0x213e8c: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213da8;
        }
    }
    ctx->pc = 0x213E90u;
    // 0x213e90: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x213E90u;
    {
        const bool branch_taken_0x213e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E90u;
        // 0x213e94: 0x8f869f54  lw          $a2, -0x60AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e90) {
            ctx->pc = 0x2140F0u;
            goto label_2140f0;
        }
    }
    ctx->pc = 0x213E98u;
label_213e98:
    // 0x213e98: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x213e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_213e9c:
    // 0x213e9c: 0x79180  sll         $s2, $a3, 6
    ctx->pc = 0x213e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x213ea0: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x213ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x213ea4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x213ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x213ea8: 0xc7978040  lwc1        $f23, -0x7FC0($gp)
    ctx->pc = 0x213ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x213eac: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x213eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213eb0: 0x4617ad82  mul.s       $f22, $f21, $f23
    ctx->pc = 0x213eb0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x213eb4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x213eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x213eb8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x213eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x213ebc: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x213ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x213ec0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x213ec4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213ec8: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x213ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213ecc: 0x0  nop
    ctx->pc = 0x213eccu;
    // NOP
    // 0x213ed0: 0x0  nop
    ctx->pc = 0x213ed0u;
    // NOP
    // 0x213ed4: 0x4618b583  div.s       $f22, $f22, $f24
    ctx->pc = 0x213ed4u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[24];
    // 0x213ed8: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x213ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x213edc: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x213edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213ee0: 0xe7a101f8  swc1        $f1, 0x1F8($sp)
    ctx->pc = 0x213ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x213ee4: 0x4615b542  mul.s       $f21, $f22, $f21
    ctx->pc = 0x213ee4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x213ee8: 0xe4790030  swc1        $f25, 0x30($v1)
    ctx->pc = 0x213ee8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x213eec: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x213eecu;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
    // 0x213ef0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x213ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213ef4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x213ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x213ef8: 0xe4590034  swc1        $f25, 0x34($v0)
    ctx->pc = 0x213ef8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x213efc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x213efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213f00: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x213f04: 0xe4790038  swc1        $f25, 0x38($v1)
    ctx->pc = 0x213f04u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x213f08: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x213f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213f0c: 0xc44d0050  lwc1        $f13, 0x50($v0)
    ctx->pc = 0x213f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x213f10: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213F10u;
    SET_GPR_U32(ctx, 31, 0x213F18u);
    ctx->pc = 0x213F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F10u;
    // 0x213f14: 0xc44c004c  lwc1        $f12, 0x4C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213F10u, 0x213F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F18u;
label_213f18:
    // 0x213f18: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x213f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213f1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x213f1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x213f20: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x213f20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x213f24: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213F24u;
    SET_GPR_U32(ctx, 31, 0x213F2Cu);
    ctx->pc = 0x213F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F24u;
    // 0x213f28: 0xc44d0050  lwc1        $f13, 0x50($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213F24u, 0x213F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F2Cu;
label_213f2c:
    // 0x213f2c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x213f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x213f30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213f34: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x213f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x213f38: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x213f38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x213f3c: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x213f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x213f40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x213f40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x213f44: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x213f44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x213f48: 0x0  nop
    ctx->pc = 0x213f48u;
    // NOP
    // 0x213f4c: 0x0  nop
    ctx->pc = 0x213f4cu;
    // NOP
    // 0x213f50: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x213f50u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x213f54: 0x0  nop
    ctx->pc = 0x213f54u;
    // NOP
    // 0x213f58: 0x0  nop
    ctx->pc = 0x213f58u;
    // NOP
    // 0x213f5c: 0x4618a503  div.s       $f20, $f20, $f24
    ctx->pc = 0x213f5cu;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[24];
    // 0x213f60: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x213f60u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x213f64: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x213F64u;
    SET_GPR_U32(ctx, 31, 0x213F6Cu);
    ctx->pc = 0x213F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F64u;
    // 0x213f68: 0x460da342  mul.s       $f13, $f20, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x213F64u, 0x213F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F6Cu;
label_213f6c:
    // 0x213f6c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213f70: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x213f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x213f74: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x213f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f7c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x213F7Cu;
    SET_GPR_U32(ctx, 31, 0x213F84u);
    ctx->pc = 0x213F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F7Cu;
    // 0x213f80: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x213F7Cu, 0x213F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F84u;
label_213f84:
    // 0x213f84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f8c: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x213f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213f90: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x213f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213f94: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x213f98: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x213f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213f9c: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x213f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x213fa0: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x213fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x213fa4: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x213FA4u;
    SET_GPR_U32(ctx, 31, 0x213FACu);
    ctx->pc = 0x213FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FA4u;
    // 0x213fa8: 0xe7a201a8  swc1        $f2, 0x1A8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x213FA4u, 0x213FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FACu;
label_213fac:
    // 0x213fac: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x213facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213fb0: 0xc44d0050  lwc1        $f13, 0x50($v0)
    ctx->pc = 0x213fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x213fb4: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213FB4u;
    SET_GPR_U32(ctx, 31, 0x213FBCu);
    ctx->pc = 0x213FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FB4u;
    // 0x213fb8: 0xc44c004c  lwc1        $f12, 0x4C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213FB4u, 0x213FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FBCu;
label_213fbc:
    // 0x213fbc: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x213fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x213fc0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x213fc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x213fc4: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x213fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x213fc8: 0xc0a138e  jal         func_284E38
    ctx->pc = 0x213FC8u;
    SET_GPR_U32(ctx, 31, 0x213FD0u);
    ctx->pc = 0x213FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FC8u;
    // 0x213fcc: 0xc44d0050  lwc1        $f13, 0x50($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E38u, 0x213FC8u, 0x213FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FD0u;
label_213fd0:
    // 0x213fd0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x213fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x213fd4: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x213fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x213fd8: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x213fd8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x213fdc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x213fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x213fe0: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x213fe0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x213fe4: 0x0  nop
    ctx->pc = 0x213fe4u;
    // NOP
    // 0x213fe8: 0x0  nop
    ctx->pc = 0x213fe8u;
    // NOP
    // 0x213fec: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x213fecu;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x213ff0: 0x0  nop
    ctx->pc = 0x213ff0u;
    // NOP
    // 0x213ff4: 0x0  nop
    ctx->pc = 0x213ff4u;
    // NOP
    // 0x213ff8: 0x4618a503  div.s       $f20, $f20, $f24
    ctx->pc = 0x213ff8u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[24];
    // 0x213ffc: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x213FFCu;
    SET_GPR_U32(ctx, 31, 0x214004u);
    ctx->pc = 0x214000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FFCu;
    // 0x214000: 0x4600a341  sub.s       $f13, $f20, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x213FFCu, 0x214004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214004u;
label_214004:
    // 0x214004: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x214004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x214008: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x214008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21400c: 0x8c730010  lw          $s3, 0x10($v1)
    ctx->pc = 0x21400cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x214010: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x214010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x214014: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x214014u;
    {
        const bool branch_taken_0x214014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214014) {
            ctx->pc = 0x214018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214014u;
            // 0x214018: 0x8f869f54  lw          $a2, -0x60AC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2140F0u;
            goto label_2140f0;
        }
    }
    ctx->pc = 0x21401Cu;
    // 0x21401c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x21401cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214020: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214024: 0x0  nop
    ctx->pc = 0x214024u;
    // NOP
label_214028:
    // 0x214028: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x214028u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x21402c: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x21402cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x214030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x214030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214034: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x214034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x214038: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x214038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21403c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x21403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x214040: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x214040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214044: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x214044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214048: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21404c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x21404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x214050: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x214050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214054: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x214058: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x214058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21405c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x21405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214060: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x214060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214064: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x214068: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x214068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x21406c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214070: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x214070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x214074: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x214074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x214078: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x214078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21407c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x21407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214080: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x214084: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x214084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x214088: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x214088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21408c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x21408Cu;
    SET_GPR_U32(ctx, 31, 0x214094u);
    ctx->pc = 0x214090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21408Cu;
    // 0x214090: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x21408Cu, 0x214094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214094u;
label_214094:
    // 0x214094: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x214094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214098: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x214098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21409c: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x21409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2140a0: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2140a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2140a4: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x2140a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2140a8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2140a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140ac: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2140acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2140b0: 0xc7a301a8  lwc1        $f3, 0x1A8($sp)
    ctx->pc = 0x2140b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2140b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2140b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2140b8: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2140b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2140bc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2140bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2140c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2140c4: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x2140c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x2140c8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2140c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140cc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2140ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2140d0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2140D0u;
    SET_GPR_U32(ctx, 31, 0x2140D8u);
    ctx->pc = 0x2140D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140D0u;
    // 0x2140d4: 0xe7a301a8  swc1        $f3, 0x1A8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2140D0u, 0x2140D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140D8u;
label_2140d8:
    // 0x2140d8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2140d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2140dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2140e0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2140e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2140e4: 0x5040ffd0  beql        $v0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2140E4u;
    {
        const bool branch_taken_0x2140e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2140e4) {
            ctx->pc = 0x2140E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2140E4u;
            // 0x2140e8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214028;
        }
    }
    ctx->pc = 0x2140ECu;
label_2140ec:
    // 0x2140ec: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x2140ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
label_2140f0:
    // 0x2140f0: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x2140f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2140f4: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2140f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2140f8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2140f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2140fc: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2140fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x214100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214104: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x214104u;
    {
        const bool branch_taken_0x214104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214104u;
        // 0x214108: 0x27b001b0  addiu       $s0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214104) {
            ctx->pc = 0x214150u;
            goto label_214150;
        }
    }
    ctx->pc = 0x21410Cu;
    // 0x21410c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21410cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x214110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214118: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x214118u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21411c: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x21411Cu;
    SET_GPR_U32(ctx, 31, 0x214124u);
    ctx->pc = 0x214120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21411Cu;
    // 0x214120: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x21411Cu, 0x214124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214124u;
label_214124:
    // 0x214124: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x214124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x214128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21412c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x21412cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214130: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x214130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x214134: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214138: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21413c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x21413Cu;
    SET_GPR_U32(ctx, 31, 0x214144u);
    ctx->pc = 0x214140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21413Cu;
    // 0x214140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x21413Cu, 0x214144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214144u;
label_214144:
    // 0x214144: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x214144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x214148: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x214148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x21414c: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x21414cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
label_214150:
    // 0x214150: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x214150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x214154: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x214154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x214158: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21415c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21415Cu;
    {
        const bool branch_taken_0x21415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21415Cu;
        // 0x214160: 0x27b001b0  addiu       $s0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21415c) {
            ctx->pc = 0x2141ACu;
            goto label_2141ac;
        }
    }
    ctx->pc = 0x214164u;
    // 0x214164: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x214164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x214168: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21416c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214170: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x214170u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x214174: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x214174u;
    SET_GPR_U32(ctx, 31, 0x21417Cu);
    ctx->pc = 0x214178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214174u;
    // 0x214178: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x214174u, 0x21417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21417Cu;
label_21417c:
    // 0x21417c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x21417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x214180: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214184: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x214184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214188: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21418c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214190: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x214190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214194: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x214194u;
    SET_GPR_U32(ctx, 31, 0x21419Cu);
    ctx->pc = 0x214198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214194u;
    // 0x214198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x214194u, 0x21419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21419Cu;
label_21419c:
    // 0x21419c: 0x8f869f54  lw          $a2, -0x60AC($gp)
    ctx->pc = 0x21419cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2141a0: 0x8f859f4c  lw          $a1, -0x60B4($gp)
    ctx->pc = 0x2141a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2141a4: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x2141a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2141a8: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2141a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2141ac:
    // 0x2141ac: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x2141acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2141b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2141b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2141b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2141B4u;
    {
        const bool branch_taken_0x2141b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2141B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141B4u;
        // 0x2141b8: 0x27b001b0  addiu       $s0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141b4) {
            ctx->pc = 0x214214u;
            goto label_214214;
        }
    }
    ctx->pc = 0x2141BCu;
    // 0x2141bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2141bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2141c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2141c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2141c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2141c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2141c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2141cc: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x2141CCu;
    SET_GPR_U32(ctx, 31, 0x2141D4u);
    ctx->pc = 0x2141D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2141CCu;
    // 0x2141d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x2141CCu, 0x2141D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141D4u;
label_2141d4:
    // 0x2141d4: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2141d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2141d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2141d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2141dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2141e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2141e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2141e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2141e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2141e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2141ec: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2141ECu;
    SET_GPR_U32(ctx, 31, 0x2141F4u);
    ctx->pc = 0x2141F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2141ECu;
    // 0x2141f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2141ECu, 0x2141F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141F4u;
label_2141f4:
    // 0x2141f4: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2141f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2141f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2141f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2141fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x214200: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x214204: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214208: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21420c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x21420Cu;
    SET_GPR_U32(ctx, 31, 0x214214u);
    ctx->pc = 0x214210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21420Cu;
    // 0x214210: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x21420Cu, 0x214214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214214u;
label_214214:
    // 0x214214: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x214214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x214218: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x214218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21421c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x21421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214220: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x214220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x214224: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x214224u;
    {
        const bool branch_taken_0x214224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214224u;
        // 0x214228: 0x8f829f54  lw          $v0, -0x60AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214224) {
            ctx->pc = 0x214248u;
            goto label_214248;
        }
    }
    ctx->pc = 0x21422Cu;
    // 0x21422c: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x214230: 0x8f849f50  lw          $a0, -0x60B0($gp)
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x214234: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x214234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x214238: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x214238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21423c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214240: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x214240u;
    {
        const bool branch_taken_0x214240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214240) {
            ctx->pc = 0x214244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214240u;
            // 0x214244: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214284u;
            goto label_214284;
        }
    }
    ctx->pc = 0x214248u;
label_214248:
    // 0x214248: 0xc78c8044  lwc1        $f12, -0x7FBC($gp)
    ctx->pc = 0x214248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21424c: 0x27b001b0  addiu       $s0, $sp, 0x1B0
    ctx->pc = 0x21424cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x214250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214254: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x214254u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x214258: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x214258u;
    SET_GPR_U32(ctx, 31, 0x214260u);
    ctx->pc = 0x21425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214258u;
    // 0x21425c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x214258u, 0x214260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214260u;
label_214260:
    // 0x214260: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x214264: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214268: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21426c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x21426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x214270: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x214274: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x214274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214278: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x214278u;
    SET_GPR_U32(ctx, 31, 0x214280u);
    ctx->pc = 0x21427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214278u;
    // 0x21427c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x214278u, 0x214280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214280u;
label_214280:
    // 0x214280: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x214280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_214284:
    // 0x214284: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x214284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x214288: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x214288u;
    {
        const bool branch_taken_0x214288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214288) {
            ctx->pc = 0x21428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214288u;
            // 0x21428c: 0xae2000c8  sw          $zero, 0xC8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214350u;
            goto label_214350;
        }
    }
    ctx->pc = 0x214290u;
    // 0x214290: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x214290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214294: 0xc6280068  lwc1        $f8, 0x68($s1)
    ctx->pc = 0x214294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x214298: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x214298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21429c: 0x46004381  sub.s       $f14, $f8, $f0
    ctx->pc = 0x21429cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2142a0: 0xc6270070  lwc1        $f7, 0x70($s1)
    ctx->pc = 0x2142a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2142a4: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x2142a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2142a8: 0xc62600a8  lwc1        $f6, 0xA8($s1)
    ctx->pc = 0x2142a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2142ac: 0x46013b01  sub.s       $f12, $f7, $f1
    ctx->pc = 0x2142acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2142b0: 0xc629006c  lwc1        $f9, 0x6C($s1)
    ctx->pc = 0x2142b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2142b4: 0x460032c1  sub.s       $f11, $f6, $f0
    ctx->pc = 0x2142b4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2142b8: 0xc6220078  lwc1        $f2, 0x78($s1)
    ctx->pc = 0x2142b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2142bc: 0xc62500ac  lwc1        $f5, 0xAC($s1)
    ctx->pc = 0x2142bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2142c0: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x2142c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2142c4: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x2142c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x2142c8: 0xc62400b0  lwc1        $f4, 0xB0($s1)
    ctx->pc = 0x2142c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2142cc: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x2142ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2142d0: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x2142d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2142d4: 0xc62300e0  lwc1        $f3, 0xE0($s1)
    ctx->pc = 0x2142d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2142d8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2142d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2142dc: 0x46002281  sub.s       $f10, $f4, $f0
    ctx->pc = 0x2142dcu;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2142e0: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2142e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2142e4: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x2142e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2142e8: 0xe6280074  swc1        $f8, 0x74($s1)
    ctx->pc = 0x2142e8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2142ec: 0xe6290078  swc1        $f9, 0x78($s1)
    ctx->pc = 0x2142ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2142f0: 0xe627007c  swc1        $f7, 0x7C($s1)
    ctx->pc = 0x2142f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x2142f4: 0xe62100c4  swc1        $f1, 0xC4($s1)
    ctx->pc = 0x2142f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x2142f8: 0xe62600b4  swc1        $f6, 0xB4($s1)
    ctx->pc = 0x2142f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x2142fc: 0xe62500b8  swc1        $f5, 0xB8($s1)
    ctx->pc = 0x2142fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x214300: 0xe62400bc  swc1        $f4, 0xBC($s1)
    ctx->pc = 0x214300u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x214304: 0xe62e0080  swc1        $f14, 0x80($s1)
    ctx->pc = 0x214304u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x214308: 0xe62c0088  swc1        $f12, 0x88($s1)
    ctx->pc = 0x214308u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x21430c: 0xe62b00c0  swc1        $f11, 0xC0($s1)
    ctx->pc = 0x21430cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x214310: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x214310u;
    {
        const bool branch_taken_0x214310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214310u;
        // 0x214314: 0xe62a00c8  swc1        $f10, 0xC8($s1) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214310) {
            ctx->pc = 0x214364u;
            goto label_214364;
        }
    }
    ctx->pc = 0x214318u;
    // 0x214318: 0xc62200e4  lwc1        $f2, 0xE4($s1)
    ctx->pc = 0x214318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21431c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214324: 0x460a10c2  mul.s       $f3, $f2, $f10
    ctx->pc = 0x214324u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x214328: 0xe62d0084  swc1        $f13, 0x84($s1)
    ctx->pc = 0x214328u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x21432c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21432cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x214330: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x214330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x214334: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x214334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x214338: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x214338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x21433c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x21433cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x214340: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x214340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x214344: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x214344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x214348: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214348u;
    {
        const bool branch_taken_0x214348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214348u;
        // 0x21434c: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214348) {
            ctx->pc = 0x214364u;
            goto label_214364;
        }
    }
    ctx->pc = 0x214350u;
label_214350:
    // 0x214350: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x214350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x214354: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x214354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x214358: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x214358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x21435c: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x21435cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x214360: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x214360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_214364:
    // 0x214364: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x214364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x214368: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x214368u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x21436c: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x21436cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x214370: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x214370u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x214374: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x214374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x214378: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x214378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x21437c: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x21437cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x214380: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x214380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x214384: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x214384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x214388: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x214388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x21438c: 0xc7ba0300  lwc1        $f26, 0x300($sp)
    ctx->pc = 0x21438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x214390: 0xc7b902f8  lwc1        $f25, 0x2F8($sp)
    ctx->pc = 0x214390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x214394: 0xc7b802f0  lwc1        $f24, 0x2F0($sp)
    ctx->pc = 0x214394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x214398: 0xc7b702e8  lwc1        $f23, 0x2E8($sp)
    ctx->pc = 0x214398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21439c: 0xc7b602e0  lwc1        $f22, 0x2E0($sp)
    ctx->pc = 0x21439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2143a0: 0xc7b502d8  lwc1        $f21, 0x2D8($sp)
    ctx->pc = 0x2143a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2143a4: 0xc7b402d0  lwc1        $f20, 0x2D0($sp)
    ctx->pc = 0x2143a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2143a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2143A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2143ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143A8u;
        // 0x2143ac: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2143A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2143B0u;
}
