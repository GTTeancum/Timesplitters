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

// Function: HitTestLineCylinder
// Address: 0x20a080 - 0x20a8d8
void HitTestLineCylinder_0x20a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestLineCylinder_0x20a080");
#endif

    switch (ctx->pc) {
        case 0x20a138u: goto label_20a138;
        case 0x20a210u: goto label_20a210;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a574u: goto label_20a574;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5bcu: goto label_20a5bc;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5e0u: goto label_20a5e0;
        case 0x20a5e8u: goto label_20a5e8;
        case 0x20a61cu: goto label_20a61c;
        case 0x20a628u: goto label_20a628;
        case 0x20a638u: goto label_20a638;
        case 0x20a640u: goto label_20a640;
        case 0x20a648u: goto label_20a648;
        case 0x20a67cu: goto label_20a67c;
        case 0x20a688u: goto label_20a688;
        case 0x20a694u: goto label_20a694;
        case 0x20a69cu: goto label_20a69c;
        default: break;
    }

    ctx->pc = 0x20a080u;

    // 0x20a080: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x20a084: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x20a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x20a088: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x20a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x20a08c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x20a08cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a090: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x20a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x20a094: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x20a094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a098: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x20a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x20a09c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x20a09cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0a0: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x20a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x20a0a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20a0a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0a8: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x20a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x20a0ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0b0: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x20a0b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x20a0b4: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x20a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x20a0b8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x20a0b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x20a0bc: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x20a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x20a0c0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x20a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x20a0c4: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x20a0c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x20a0c8: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x20a0c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x20a0cc: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x20a0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x20a0d0: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x20a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a0d4: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x20a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20a0d8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x20a0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a0dc: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x20a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a0e0: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x20a0e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x20a0e4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x20a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0e8: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x20a0e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x20a0ec: 0xc66b0008  lwc1        $f11, 0x8($s3)
    ctx->pc = 0x20a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a0f0: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x20a0f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20a0f4: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x20a0f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20a0f8: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x20a0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x20a0fc: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x20a0fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20a100: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x20a100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20a104: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x20a104u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20a108: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20a108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20a10c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x20a10cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x20a110: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x20a110u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x20a114: 0x0  nop
    ctx->pc = 0x20a114u;
    // NOP
    // 0x20a118: 0x0  nop
    ctx->pc = 0x20a118u;
    // NOP
    // 0x20a11c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x20a11cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x20a120: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x20a120u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a124: 0x0  nop
    ctx->pc = 0x20a124u;
    // NOP
    // 0x20a128: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x20A128u;
    {
        const bool branch_taken_0x20a128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A128u;
        // 0x20a12c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a128) {
            ctx->pc = 0x20A144u;
            goto label_20a144;
        }
    }
    ctx->pc = 0x20A130u;
    // 0x20a130: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x20A130u;
    SET_GPR_U32(ctx, 31, 0x20A138u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x20A130u, 0x20A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A138u;
label_20a138:
    // 0x20a138: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x20a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20a13c: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x20a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a140: 0xc66b0008  lwc1        $f11, 0x8($s3)
    ctx->pc = 0x20a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_20a144:
    // 0x20a144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a148: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x20a148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x20a14c: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x20a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20a150: 0x0  nop
    ctx->pc = 0x20a150u;
    // NOP
    // 0x20a154: 0x0  nop
    ctx->pc = 0x20a154u;
    // NOP
    // 0x20a158: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x20a158u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x20a15c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x20a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a160: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x20a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a164: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x20a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20a168: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x20a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a16c: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x20a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20a170: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x20a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20a174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20a174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20a178: 0xc6490004  lwc1        $f9, 0x4($s2)
    ctx->pc = 0x20a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20a17c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x20a17cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20a180: 0xc6480008  lwc1        $f8, 0x8($s2)
    ctx->pc = 0x20a180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20a184: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x20a184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x20a188: 0x46011282  mul.s       $f10, $f2, $f1
    ctx->pc = 0x20a188u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a18c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x20a18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20a190: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x20a190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x20a194: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x20a194u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20a198: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x20a198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x20a19c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x20a19cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20a1a0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x20a1a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x20a1a4: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x20a1a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x20a1a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x20a1a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x20a1ac: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x20a1acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x20a1b0: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x20a1b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x20a1b4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x20a1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20a1b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20a1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20a1bc: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x20a1bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20a1c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20a1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20a1c4: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x20a1c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x20a1c8: 0x460e39c1  sub.s       $f7, $f7, $f14
    ctx->pc = 0x20a1c8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[14]);
    // 0x20a1cc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x20a1ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x20a1d0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x20a1d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20a1d4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x20a1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20a1d8: 0x460d4a41  sub.s       $f9, $f9, $f13
    ctx->pc = 0x20a1d8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[13]);
    // 0x20a1dc: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x20a1dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a1e0: 0x460b4201  sub.s       $f8, $f8, $f11
    ctx->pc = 0x20a1e0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[11]);
    // 0x20a1e4: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x20a1e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x20a1e8: 0xe7a90004  swc1        $f9, 0x4($sp)
    ctx->pc = 0x20a1e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20a1ec: 0x0  nop
    ctx->pc = 0x20a1ecu;
    // NOP
    // 0x20a1f0: 0x0  nop
    ctx->pc = 0x20a1f0u;
    // NOP
    // 0x20a1f4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x20a1f4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x20a1f8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x20a1f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a1fc: 0x0  nop
    ctx->pc = 0x20a1fcu;
    // NOP
    // 0x20a200: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20A200u;
    {
        const bool branch_taken_0x20a200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A200u;
        // 0x20a204: 0xe7a80008  swc1        $f8, 0x8($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a200) {
            ctx->pc = 0x20A210u;
            goto label_20a210;
        }
    }
    ctx->pc = 0x20A208u;
    // 0x20a208: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x20A208u;
    SET_GPR_U32(ctx, 31, 0x20A210u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x20A208u, 0x20A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A210u;
label_20a210:
    // 0x20a210: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x20a210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x20a214: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x20a214u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x20a218: 0x46115832  c.eq.s      $f11, $f17
    ctx->pc = 0x20a218u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[11], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a21c: 0x0  nop
    ctx->pc = 0x20a21cu;
    // NOP
    // 0x20a220: 0x45000071  bc1f        . + 4 + (0x71 << 2)
    ctx->pc = 0x20A220u;
    {
        const bool branch_taken_0x20a220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A220u;
        // 0x20a224: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a220) {
            ctx->pc = 0x20A3E8u;
            goto label_20a3e8;
        }
    }
    ctx->pc = 0x20A228u;
    // 0x20a228: 0xc7ab0040  lwc1        $f11, 0x40($sp)
    ctx->pc = 0x20a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a22c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x20a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20a230: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x20a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a234: 0x460b1802  mul.s       $f0, $f3, $f11
    ctx->pc = 0x20a234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x20a238: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x20a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a23c: 0x460c2142  mul.s       $f5, $f4, $f12
    ctx->pc = 0x20a23cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x20a240: 0xc7aa0048  lwc1        $f10, 0x48($sp)
    ctx->pc = 0x20a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20a244: 0x460a1042  mul.s       $f1, $f2, $f10
    ctx->pc = 0x20a244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x20a248: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x20a248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x20a24c: 0x46010200  add.s       $f8, $f0, $f1
    ctx->pc = 0x20a24cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a250: 0x460b4142  mul.s       $f5, $f8, $f11
    ctx->pc = 0x20a250u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x20a254: 0x460c4002  mul.s       $f0, $f8, $f12
    ctx->pc = 0x20a254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x20a258: 0x460a4042  mul.s       $f1, $f8, $f10
    ctx->pc = 0x20a258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x20a25c: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x20a25cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x20a260: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x20a260u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x20a264: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x20a264u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x20a268: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x20a268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20a26c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x20a26cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20a270: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x20a270u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x20a274: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x20a274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20a278: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x20a278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20a27c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x20a27cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x20a280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a284: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x20a284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a288: 0x0  nop
    ctx->pc = 0x20a288u;
    // NOP
    // 0x20a28c: 0x45010167  bc1t        . + 4 + (0x167 << 2)
    ctx->pc = 0x20A28Cu;
    {
        const bool branch_taken_0x20a28c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A28Cu;
        // 0x20a290: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a28c) {
            ctx->pc = 0x20A82Cu;
            goto label_20a82c;
        }
    }
    ctx->pc = 0x20A294u;
    // 0x20a294: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A294u;
    {
        const bool branch_taken_0x20a294 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a294) {
            ctx->pc = 0x20A298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A294u;
            // 0x20a298: 0xc6a10004  lwc1        $f1, 0x4($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2A8u;
            goto label_20a2a8;
        }
    }
    ctx->pc = 0x20A29Cu;
    // 0x20a29c: 0x12c0017f  beqz        $s6, . + 4 + (0x17F << 2)
    ctx->pc = 0x20A29Cu;
    {
        const bool branch_taken_0x20a29c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A29Cu;
        // 0x20a2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a29c) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A2A4u;
    // 0x20a2a4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x20a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a2a8:
    // 0x20a2a8: 0x46006107  neg.s       $f4, $f12
    ctx->pc = 0x20a2a8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[12]);
    // 0x20a2ac: 0xc6490000  lwc1        $f9, 0x0($s2)
    ctx->pc = 0x20a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20a2b0: 0x460059c7  neg.s       $f7, $f11
    ctx->pc = 0x20a2b0u;
    ctx->f[7] = FPU_NEG_S(ctx->f[11]);
    // 0x20a2b4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x20a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a2b8: 0x46005147  neg.s       $f5, $f10
    ctx->pc = 0x20a2b8u;
    ctx->f[5] = FPU_NEG_S(ctx->f[10]);
    // 0x20a2bc: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x20a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a2c0: 0x46088836  c.le.s      $f17, $f8
    ctx->pc = 0x20a2c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a2c4: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x20a2c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x20a2c8: 0xc6a60008  lwc1        $f6, 0x8($s5)
    ctx->pc = 0x20a2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20a2cc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x20a2ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x20a2d0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2d4: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x20a2d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x20a2d8: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x20a2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x20a2dc: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x20a2dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20a2e0: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x20a2e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x20a2e4: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x20a2e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20a2e8: 0x46071042  mul.s       $f1, $f2, $f7
    ctx->pc = 0x20a2e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x20a2ec: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x20a2ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a2f0: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x20a2f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x20a2f4: 0x46004186  mov.s       $f6, $f8
    ctx->pc = 0x20a2f4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[8]);
    // 0x20a2f8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x20a2f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20a2fc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x20a2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x20a300: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20a304: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20A304u;
    {
        const bool branch_taken_0x20a304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A304u;
        // 0x20a308: 0x46050900  add.s       $f4, $f1, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a304) {
            ctx->pc = 0x20A310u;
            goto label_20a310;
        }
    }
    ctx->pc = 0x20A30Cu;
    // 0x20a30c: 0x46004187  neg.s       $f6, $f8
    ctx->pc = 0x20a30cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[8]);
label_20a310:
    // 0x20a310: 0x46048836  c.le.s      $f17, $f4
    ctx->pc = 0x20a310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a314: 0x0  nop
    ctx->pc = 0x20a314u;
    // NOP
    // 0x20a318: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x20A318u;
    {
        const bool branch_taken_0x20a318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a318) {
            ctx->pc = 0x20A31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A318u;
            // 0x20a31c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A334u;
            goto label_20a334;
        }
    }
    ctx->pc = 0x20A320u;
    // 0x20a320: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x20a320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a324: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x20A324u;
    {
        const bool branch_taken_0x20a324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a324) {
            ctx->pc = 0x20A340u;
            goto label_20a340;
        }
    }
    ctx->pc = 0x20A32Cu;
    // 0x20a32c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20A32Cu;
    {
        const bool branch_taken_0x20a32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a32c) {
            ctx->pc = 0x20A394u;
            goto label_20a394;
        }
    }
    ctx->pc = 0x20A334u;
label_20a334:
    // 0x20a334: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x20a334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a338: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x20A338u;
    {
        const bool branch_taken_0x20a338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a338) {
            ctx->pc = 0x20A394u;
            goto label_20a394;
        }
    }
    ctx->pc = 0x20A340u;
label_20a340:
    // 0x20a340: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x20A340u;
    {
        const bool branch_taken_0x20a340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a340) {
            ctx->pc = 0x20A374u;
            goto label_20a374;
        }
    }
    ctx->pc = 0x20A348u;
    // 0x20a348: 0x460b4042  mul.s       $f1, $f8, $f11
    ctx->pc = 0x20a348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x20a34c: 0x460c4082  mul.s       $f2, $f8, $f12
    ctx->pc = 0x20a34cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x20a350: 0x460a40c2  mul.s       $f3, $f8, $f10
    ctx->pc = 0x20a350u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x20a354: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x20a354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x20a358: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x20a358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x20a35c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x20a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a360: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20a360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20a364: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x20a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x20a368: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x20a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a36c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x20a36cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x20a370: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x20a370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_20a374:
    // 0x20a374: 0x12c00148  beqz        $s6, . + 4 + (0x148 << 2)
    ctx->pc = 0x20A374u;
    {
        const bool branch_taken_0x20a374 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A374u;
        // 0x20a378: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a374) {
            ctx->pc = 0x20A898u;
            goto label_20a898;
        }
    }
    ctx->pc = 0x20A37Cu;
    // 0x20a37c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x20a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a380: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x20a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a384: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x20a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x20a388: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x20a388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x20a38c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x20A38Cu;
    {
        const bool branch_taken_0x20a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A38Cu;
        // 0x20a390: 0xe6c20004  swc1        $f2, 0x4($s6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a38c) {
            ctx->pc = 0x20A898u;
            goto label_20a898;
        }
    }
    ctx->pc = 0x20A394u;
label_20a394:
    // 0x20a394: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x20A394u;
    {
        const bool branch_taken_0x20a394 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A394u;
        // 0x20a398: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a394) {
            ctx->pc = 0x20A3D0u;
            goto label_20a3d0;
        }
    }
    ctx->pc = 0x20A39Cu;
    // 0x20a39c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x20a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a3a0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x20a3a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x20a3a4: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x20a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a3a8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x20a3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x20a3ac: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x20a3acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x20a3b0: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x20a3b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x20a3b4: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x20a3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x20a3b8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x20a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a3bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20a3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20a3c0: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x20a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x20a3c4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x20a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a3c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x20a3c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x20a3cc: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x20a3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_20a3d0:
    // 0x20a3d0: 0x12c00132  beqz        $s6, . + 4 + (0x132 << 2)
    ctx->pc = 0x20A3D0u;
    {
        const bool branch_taken_0x20a3d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3D0u;
        // 0x20a3d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3d0) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A3D8u;
    // 0x20a3d8: 0xe6ca0008  swc1        $f10, 0x8($s6)
    ctx->pc = 0x20a3d8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x20a3dc: 0xe6cb0000  swc1        $f11, 0x0($s6)
    ctx->pc = 0x20a3dcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x20a3e0: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x20A3E0u;
    {
        const bool branch_taken_0x20a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3E0u;
        // 0x20a3e4: 0xe6cc0004  swc1        $f12, 0x4($s6) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3e0) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A3E8u;
label_20a3e8:
    // 0x20a3e8: 0x0  nop
    ctx->pc = 0x20a3e8u;
    // NOP
    // 0x20a3ec: 0x0  nop
    ctx->pc = 0x20a3ecu;
    // NOP
    // 0x20a3f0: 0x460bb2c3  div.s       $f11, $f22, $f11
    ctx->pc = 0x20a3f0u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[11] = ctx->f[22] / ctx->f[11];
    // 0x20a3f4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20a3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a3f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x20a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a3fc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x20a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a400: 0xc7af0000  lwc1        $f15, 0x0($sp)
    ctx->pc = 0x20a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x20a404: 0xc7b00004  lwc1        $f16, 0x4($sp)
    ctx->pc = 0x20a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x20a408: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x20a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20a40c: 0x460b0b42  mul.s       $f13, $f1, $f11
    ctx->pc = 0x20a40cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x20a410: 0x460b0302  mul.s       $f12, $f0, $f11
    ctx->pc = 0x20a410u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x20a414: 0x460b1382  mul.s       $f14, $f2, $f11
    ctx->pc = 0x20a414u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x20a418: 0x460d8082  mul.s       $f2, $f16, $f13
    ctx->pc = 0x20a418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
    // 0x20a41c: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x20a41cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20a420: 0x460c7802  mul.s       $f0, $f15, $f12
    ctx->pc = 0x20a420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x20a424: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20a424u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20a428: 0x460e2842  mul.s       $f1, $f5, $f14
    ctx->pc = 0x20a428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x20a42c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20a42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20a430: 0x46010200  add.s       $f8, $f0, $f1
    ctx->pc = 0x20a430u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a434: 0x46088836  c.le.s      $f17, $f8
    ctx->pc = 0x20a434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a438: 0x0  nop
    ctx->pc = 0x20a438u;
    // NOP
    // 0x20a43c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20A43Cu;
    {
        const bool branch_taken_0x20a43c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A43Cu;
        // 0x20a440: 0xe7ae0018  swc1        $f14, 0x18($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a43c) {
            ctx->pc = 0x20A448u;
            goto label_20a448;
        }
    }
    ctx->pc = 0x20A444u;
    // 0x20a444: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x20a444u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
label_20a448:
    // 0x20a448: 0x46084502  mul.s       $f20, $f8, $f8
    ctx->pc = 0x20a448u;
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x20a44c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x20a44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a450: 0x0  nop
    ctx->pc = 0x20a450u;
    // NOP
    // 0x20a454: 0x45010111  bc1t        . + 4 + (0x111 << 2)
    ctx->pc = 0x20A454u;
    {
        const bool branch_taken_0x20a454 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A454u;
        // 0x20a458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a454) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A45Cu;
    // 0x20a45c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A45Cu;
    {
        const bool branch_taken_0x20a45c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A45Cu;
        // 0x20a460: 0xc7a60040  lwc1        $f6, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a45c) {
            ctx->pc = 0x20A46Cu;
            goto label_20a46c;
        }
    }
    ctx->pc = 0x20A464u;
    // 0x20a464: 0x12c0010d  beqz        $s6, . + 4 + (0x10D << 2)
    ctx->pc = 0x20A464u;
    {
        const bool branch_taken_0x20a464 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A464u;
        // 0x20a468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a464) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A46Cu;
label_20a46c:
    // 0x20a46c: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x20a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20a470: 0xc7a80048  lwc1        $f8, 0x48($sp)
    ctx->pc = 0x20a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20a474: 0x46067082  mul.s       $f2, $f14, $f6
    ctx->pc = 0x20a474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x20a478: 0x46077102  mul.s       $f4, $f14, $f7
    ctx->pc = 0x20a478u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x20a47c: 0x46086042  mul.s       $f1, $f12, $f8
    ctx->pc = 0x20a47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x20a480: 0x46086802  mul.s       $f0, $f13, $f8
    ctx->pc = 0x20a480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x20a484: 0x460760c2  mul.s       $f3, $f12, $f7
    ctx->pc = 0x20a484u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x20a488: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x20a488u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x20a48c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x20a48cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x20a490: 0x46066a82  mul.s       $f10, $f13, $f6
    ctx->pc = 0x20a490u;
    ctx->f[10] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x20a494: 0x46072902  mul.s       $f4, $f5, $f7
    ctx->pc = 0x20a494u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x20a498: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x20a498u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20a49c: 0x46062a42  mul.s       $f9, $f5, $f6
    ctx->pc = 0x20a49cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x20a4a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20a4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20a4a4: 0x46087942  mul.s       $f5, $f15, $f8
    ctx->pc = 0x20a4a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[8]);
    // 0x20a4a8: 0x46088042  mul.s       $f1, $f16, $f8
    ctx->pc = 0x20a4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
    // 0x20a4ac: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x20a4acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x20a4b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20a4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20a4b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20a4b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20a4b8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x20a4b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x20a4bc: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x20a4bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20a4c0: 0x46054a41  sub.s       $f9, $f9, $f5
    ctx->pc = 0x20a4c0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x20a4c4: 0x46077902  mul.s       $f4, $f15, $f7
    ctx->pc = 0x20a4c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x20a4c8: 0x46068142  mul.s       $f5, $f16, $f6
    ctx->pc = 0x20a4c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x20a4cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20a4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20a4d0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x20a4d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20a4d4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x20a4d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x20a4d8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x20a4d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x20a4dc: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x20a4dcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x20a4e0: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x20a4e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x20a4e4: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x20a4e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x20a4e8: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x20a4e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x20a4ec: 0x0  nop
    ctx->pc = 0x20a4ecu;
    // NOP
    // 0x20a4f0: 0x0  nop
    ctx->pc = 0x20a4f0u;
    // NOP
    // 0x20a4f4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x20a4f4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x20a4f8: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x20a4f8u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x20a4fc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x20a4fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x20a500: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x20a500u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x20a504: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x20a504u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
    // 0x20a508: 0xe7a60090  swc1        $f6, 0x90($sp)
    ctx->pc = 0x20a508u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x20a50c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x20a50cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x20a510: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x20a510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a514: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x20a514u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x20a518: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x20a518u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x20a51c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20A51Cu;
    {
        const bool branch_taken_0x20a51c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A51Cu;
        // 0x20a520: 0x460b0dc2  mul.s       $f23, $f1, $f11 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a51c) {
            ctx->pc = 0x20A52Cu;
            goto label_20a52c;
        }
    }
    ctx->pc = 0x20A524u;
    // 0x20a524: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x20A524u;
    SET_GPR_U32(ctx, 31, 0x20A52Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x20A524u, 0x20A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A52Cu;
label_20a52c:
    // 0x20a52c: 0x0  nop
    ctx->pc = 0x20a52cu;
    // NOP
    // 0x20a530: 0x0  nop
    ctx->pc = 0x20a530u;
    // NOP
    // 0x20a534: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x20a534u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x20a538: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x20a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a53c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x20a53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a540: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x20a540u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x20a544: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x20a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a548: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20a548u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a54c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20a54cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20a550: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a554: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x20a554u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a558: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x20a558u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x20a55c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20a55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20a560: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x20a560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20a564: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A564u;
    SET_GPR_U32(ctx, 31, 0x20A56Cu);
    ctx->pc = 0x20A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A564u;
    // 0x20a568: 0xe7a30034  swc1        $f3, 0x34($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A564u, 0x20A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A56Cu;
label_20a56c:
    // 0x20a56c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A56Cu;
    SET_GPR_U32(ctx, 31, 0x20A574u);
    ctx->pc = 0x20A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A56Cu;
    // 0x20a570: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A56Cu, 0x20A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A574u;
label_20a574:
    // 0x20a574: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x20A574u;
    SET_GPR_U32(ctx, 31, 0x20A57Cu);
    ctx->pc = 0x20A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A574u;
    // 0x20a578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x20A574u, 0x20A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A57Cu;
label_20a57c:
    // 0x20a57c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x20a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20a580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a584: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x20a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20a588: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a58c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x20a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a590: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20a590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20a594: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x20a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a598: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x20a598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x20a59c: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x20a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a5a0: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x20a5a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x20a5a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a5a8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A5A8u;
    SET_GPR_U32(ctx, 31, 0x20A5B0u);
    ctx->pc = 0x20A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5A8u;
    // 0x20a5ac: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A5A8u, 0x20A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5B0u;
label_20a5b0:
    // 0x20a5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5b4: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x20A5B4u;
    SET_GPR_U32(ctx, 31, 0x20A5BCu);
    ctx->pc = 0x20A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5B4u;
    // 0x20a5b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x20A5B4u, 0x20A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5BCu;
label_20a5bc:
    // 0x20a5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5c0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x20A5C0u;
    SET_GPR_U32(ctx, 31, 0x20A5C8u);
    ctx->pc = 0x20A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5C0u;
    // 0x20a5c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x20A5C0u, 0x20A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5C8u;
label_20a5c8:
    // 0x20a5c8: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20A5C8u;
    {
        const bool branch_taken_0x20a5c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20a5c8) {
            ctx->pc = 0x20A630u;
            goto label_20a630;
        }
    }
    ctx->pc = 0x20A5D0u;
    // 0x20a5d0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A5D0u;
    SET_GPR_U32(ctx, 31, 0x20A5D8u);
    ctx->pc = 0x20A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5D0u;
    // 0x20a5d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A5D0u, 0x20A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5D8u;
label_20a5d8:
    // 0x20a5d8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A5D8u;
    SET_GPR_U32(ctx, 31, 0x20A5E0u);
    ctx->pc = 0x20A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5D8u;
    // 0x20a5dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A5D8u, 0x20A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5E0u;
label_20a5e0:
    // 0x20a5e0: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x20A5E0u;
    SET_GPR_U32(ctx, 31, 0x20A5E8u);
    ctx->pc = 0x20A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5E0u;
    // 0x20a5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x20A5E0u, 0x20A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5E8u;
label_20a5e8:
    // 0x20a5e8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x20a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a5ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20a5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x20a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a5f4: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x20a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a5f8: 0xc6350004  lwc1        $f21, 0x4($s1)
    ctx->pc = 0x20a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a5fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x20a5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20a600: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x20a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a604: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x20a604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x20a608: 0xc6360008  lwc1        $f22, 0x8($s1)
    ctx->pc = 0x20a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20a60c: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x20a60cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x20a610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a614: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A614u;
    SET_GPR_U32(ctx, 31, 0x20A61Cu);
    ctx->pc = 0x20A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A614u;
    // 0x20a618: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A614u, 0x20A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A61Cu;
label_20a61c:
    // 0x20a61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a620: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x20A620u;
    SET_GPR_U32(ctx, 31, 0x20A628u);
    ctx->pc = 0x20A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A620u;
    // 0x20a624: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x20A620u, 0x20A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A628u;
label_20a628:
    // 0x20a628: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20A628u;
    {
        const bool branch_taken_0x20a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a628) {
            ctx->pc = 0x20A694u;
            goto label_20a694;
        }
    }
    ctx->pc = 0x20A630u;
label_20a630:
    // 0x20a630: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A630u;
    SET_GPR_U32(ctx, 31, 0x20A638u);
    ctx->pc = 0x20A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A630u;
    // 0x20a634: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A630u, 0x20A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A638u;
label_20a638:
    // 0x20a638: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A638u;
    SET_GPR_U32(ctx, 31, 0x20A640u);
    ctx->pc = 0x20A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A638u;
    // 0x20a63c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A638u, 0x20A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A640u;
label_20a640:
    // 0x20a640: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x20A640u;
    SET_GPR_U32(ctx, 31, 0x20A648u);
    ctx->pc = 0x20A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A640u;
    // 0x20a644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x20A640u, 0x20A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A648u;
label_20a648:
    // 0x20a648: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x20a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a64c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20a64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a650: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x20a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a654: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x20a654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a658: 0xc6350004  lwc1        $f21, 0x4($s1)
    ctx->pc = 0x20a658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a65c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x20a65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20a660: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x20a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a664: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x20a664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x20a668: 0xc6360008  lwc1        $f22, 0x8($s1)
    ctx->pc = 0x20a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20a66c: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x20a66cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x20a670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a674: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x20A674u;
    SET_GPR_U32(ctx, 31, 0x20A67Cu);
    ctx->pc = 0x20A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A674u;
    // 0x20a678: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x20A674u, 0x20A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A67Cu;
label_20a67c:
    // 0x20a67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a680: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x20A680u;
    SET_GPR_U32(ctx, 31, 0x20A688u);
    ctx->pc = 0x20A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A680u;
    // 0x20a684: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x20A680u, 0x20A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A688u;
label_20a688:
    // 0x20a688: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a68c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x20A68Cu;
    SET_GPR_U32(ctx, 31, 0x20A694u);
    ctx->pc = 0x20A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A68Cu;
    // 0x20a690: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x20A68Cu, 0x20A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A694u;
label_20a694:
    // 0x20a694: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x20A694u;
    SET_GPR_U32(ctx, 31, 0x20A69Cu);
    ctx->pc = 0x20A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A694u;
    // 0x20a698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x20A694u, 0x20A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A69Cu;
label_20a69c:
    // 0x20a69c: 0x4600b881  sub.s       $f2, $f23, $f0
    ctx->pc = 0x20a69cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x20a6a0: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x20a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20a6a4: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x20a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20a6a8: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x20a6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x20a6ac: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x20a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20a6b0: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x20a6b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x20a6b4: 0xc6aa0000  lwc1        $f10, 0x0($s5)
    ctx->pc = 0x20a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20a6b8: 0x46151042  mul.s       $f1, $f2, $f21
    ctx->pc = 0x20a6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x20a6bc: 0xc6a90004  lwc1        $f9, 0x4($s5)
    ctx->pc = 0x20a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20a6c0: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x20a6c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x20a6c4: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x20a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a6c8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x20a6c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x20a6cc: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x20a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a6d0: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x20a6d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x20a6d4: 0xc7ab0094  lwc1        $f11, 0x94($sp)
    ctx->pc = 0x20a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a6d8: 0x46150202  mul.s       $f8, $f0, $f21
    ctx->pc = 0x20a6d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x20a6dc: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x20a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20a6e0: 0x461401c2  mul.s       $f7, $f0, $f20
    ctx->pc = 0x20a6e0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x20a6e4: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x20a6e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20a6e8: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x20a6e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x20a6ec: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x20a6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x20a6f0: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x20a6f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x20a6f4: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x20a6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x20a6f8: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x20a6f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x20a6fc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x20a6fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20a700: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x20a700u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x20a704: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x20a704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x20a708: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20a708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x20a70c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x20a70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x20a710: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x20a710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x20a714: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x20a714u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x20a718: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x20a718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20a71c: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x20a71cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x20a720: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x20a720u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x20a724: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x20a724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x20a728: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x20a728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x20a72c: 0x460a2101  sub.s       $f4, $f4, $f10
    ctx->pc = 0x20a72cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x20a730: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x20a730u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x20a734: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x20a734u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x20a738: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x20a738u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x20a73c: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x20a73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x20a740: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x20a740u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20a744: 0x460c3181  sub.s       $f6, $f6, $f12
    ctx->pc = 0x20a744u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x20a748: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x20a748u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x20a74c: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x20a74cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x20a750: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x20a750u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x20a754: 0x46021a00  add.s       $f8, $f3, $f2
    ctx->pc = 0x20a754u;
    ctx->f[8] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x20a758: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x20a758u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x20a75c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x20a75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x20a760: 0x460e3182  mul.s       $f6, $f6, $f14
    ctx->pc = 0x20a760u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x20a764: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x20a764u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x20a768: 0x460f4034  c.lt.s      $f8, $f15
    ctx->pc = 0x20a768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a76c: 0x0  nop
    ctx->pc = 0x20a76cu;
    // NOP
    // 0x20a770: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20A770u;
    {
        const bool branch_taken_0x20a770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A770u;
        // 0x20a774: 0x46062000  add.s       $f0, $f4, $f6 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a770) {
            ctx->pc = 0x20A788u;
            goto label_20a788;
        }
    }
    ctx->pc = 0x20A778u;
    // 0x20a778: 0x460f0034  c.lt.s      $f0, $f15
    ctx->pc = 0x20a778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a77c: 0x0  nop
    ctx->pc = 0x20a77cu;
    // NOP
    // 0x20a780: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x20A780u;
    {
        const bool branch_taken_0x20a780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A780u;
        // 0x20a784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a780) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A788u;
label_20a788:
    // 0x20a788: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x20a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a78c: 0xc6660004  lwc1        $f6, 0x4($s3)
    ctx->pc = 0x20a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20a790: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x20a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20a794: 0xc7af0054  lwc1        $f15, 0x54($sp)
    ctx->pc = 0x20a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x20a798: 0x460071c1  sub.s       $f7, $f14, $f0
    ctx->pc = 0x20a798u;
    ctx->f[7] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x20a79c: 0xc6690008  lwc1        $f9, 0x8($s3)
    ctx->pc = 0x20a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20a7a0: 0x46067a01  sub.s       $f8, $f15, $f6
    ctx->pc = 0x20a7a0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[15], ctx->f[6]);
    // 0x20a7a4: 0xc7ab0040  lwc1        $f11, 0x40($sp)
    ctx->pc = 0x20a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a7a8: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x20a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a7ac: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x20a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a7b0: 0x460b3902  mul.s       $f4, $f7, $f11
    ctx->pc = 0x20a7b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x20a7b4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x20a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a7b8: 0x460c4042  mul.s       $f1, $f8, $f12
    ctx->pc = 0x20a7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x20a7bc: 0x46096941  sub.s       $f5, $f13, $f9
    ctx->pc = 0x20a7bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[9]);
    // 0x20a7c0: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x20a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a7c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x20a7c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x20a7c8: 0xc7aa0048  lwc1        $f10, 0x48($sp)
    ctx->pc = 0x20a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20a7cc: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x20a7ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x20a7d0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x20a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a7d4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x20a7d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x20a7d8: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x20a7d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x20a7dc: 0x460a2982  mul.s       $f6, $f5, $f10
    ctx->pc = 0x20a7dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x20a7e0: 0xe7a80074  swc1        $f8, 0x74($sp)
    ctx->pc = 0x20a7e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x20a7e4: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x20a7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x20a7e8: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x20a7e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20a7ec: 0x460b1042  mul.s       $f1, $f2, $f11
    ctx->pc = 0x20a7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x20a7f0: 0xe7a70070  swc1        $f7, 0x70($sp)
    ctx->pc = 0x20a7f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x20a7f4: 0x460c1942  mul.s       $f5, $f3, $f12
    ctx->pc = 0x20a7f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x20a7f8: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x20a7f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x20a7fc: 0x46062200  add.s       $f8, $f4, $f6
    ctx->pc = 0x20a7fcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x20a800: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x20a800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x20a804: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20a804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a808: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x20a808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x20a80c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x20a80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x20a810: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x20a810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a814: 0x0  nop
    ctx->pc = 0x20a814u;
    // NOP
    // 0x20a818: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20A818u;
    {
        const bool branch_taken_0x20a818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A818u;
        // 0x20a81c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a818) {
            ctx->pc = 0x20A834u;
            goto label_20a834;
        }
    }
    ctx->pc = 0x20A820u;
    // 0x20a820: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20a820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a824: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20A824u;
    {
        const bool branch_taken_0x20a824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a824) {
            ctx->pc = 0x20A834u;
            goto label_20a834;
        }
    }
    ctx->pc = 0x20A82Cu;
label_20a82c:
    // 0x20a82c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20A82Cu;
    {
        const bool branch_taken_0x20a82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A82Cu;
        // 0x20a830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a82c) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A834u;
label_20a834:
    // 0x20a834: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A834u;
    {
        const bool branch_taken_0x20a834 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a834) {
            ctx->pc = 0x20A848u;
            goto label_20a848;
        }
    }
    ctx->pc = 0x20A83Cu;
    // 0x20a83c: 0xe68d0008  swc1        $f13, 0x8($s4)
    ctx->pc = 0x20a83cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x20a840: 0xe68e0000  swc1        $f14, 0x0($s4)
    ctx->pc = 0x20a840u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x20a844: 0xe68f0004  swc1        $f15, 0x4($s4)
    ctx->pc = 0x20a844u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_20a848:
    // 0x20a848: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x20A848u;
    {
        const bool branch_taken_0x20a848 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A848u;
        // 0x20a84c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a848) {
            ctx->pc = 0x20A89Cu;
            goto label_20a89c;
        }
    }
    ctx->pc = 0x20A850u;
    // 0x20a850: 0x460a4142  mul.s       $f5, $f8, $f10
    ctx->pc = 0x20a850u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x20a854: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x20a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a858: 0x460b4102  mul.s       $f4, $f8, $f11
    ctx->pc = 0x20a858u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x20a85c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x20a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a860: 0x460c40c2  mul.s       $f3, $f8, $f12
    ctx->pc = 0x20a860u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x20a864: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x20a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a868: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x20a868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x20a86c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x20a86cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x20a870: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x20a870u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x20a874: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x20a874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x20a878: 0x46006901  sub.s       $f4, $f13, $f0
    ctx->pc = 0x20a878u;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x20a87c: 0x460170c1  sub.s       $f3, $f14, $f1
    ctx->pc = 0x20a87cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x20a880: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x20a880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20a884: 0x46027801  sub.s       $f0, $f15, $f2
    ctx->pc = 0x20a884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[2]);
    // 0x20a888: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x20a888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x20a88c: 0xe6c40008  swc1        $f4, 0x8($s6)
    ctx->pc = 0x20a88cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x20a890: 0xe6c30000  swc1        $f3, 0x0($s6)
    ctx->pc = 0x20a890u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x20a894: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x20a894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_20a898:
    // 0x20a898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a89c:
    // 0x20a89c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x20a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20a8a0: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x20a8a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x20a8a4: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x20a8a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20a8a8: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x20a8a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20a8ac: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x20a8acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20a8b0: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x20a8b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20a8b4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x20a8b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20a8b8: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x20a8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20a8bc: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x20a8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20a8c0: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x20a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20a8c4: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x20a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20a8c8: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x20a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a8cc: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x20a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D0u;
        // 0x20a8d4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A8D8u;
}
