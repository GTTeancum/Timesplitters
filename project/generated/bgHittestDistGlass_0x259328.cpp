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

// Function: bgHittestDistGlass
// Address: 0x259328 - 0x259780
void bgHittestDistGlass_0x259328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgHittestDistGlass_0x259328");
#endif

    switch (ctx->pc) {
        case 0x259704u: goto label_259704;
        default: break;
    }

    ctx->pc = 0x259328u;

    // 0x259328: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x259328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25932c: 0xc4e90000  lwc1        $f9, 0x0($a3)
    ctx->pc = 0x25932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x259330: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x259330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x259334: 0xe7bf00d8  swc1        $f31, 0xD8($sp)
    ctx->pc = 0x259334u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x259338: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x259338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25933c: 0xe7be00d0  swc1        $f30, 0xD0($sp)
    ctx->pc = 0x25933cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x259340: 0x460067c6  mov.s       $f31, $f12
    ctx->pc = 0x259340u;
    ctx->f[31] = FPU_MOV_S(ctx->f[12]);
    // 0x259344: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x259344u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x259348: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x259348u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25934c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x25934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x259350: 0xe7bd00c8  swc1        $f29, 0xC8($sp)
    ctx->pc = 0x259350u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x259354: 0xe7bc00c0  swc1        $f28, 0xC0($sp)
    ctx->pc = 0x259354u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x259358: 0xe7bb00b8  swc1        $f27, 0xB8($sp)
    ctx->pc = 0x259358u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x25935c: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x25935cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x259360: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x259360u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x259364: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x259364u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x259368: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x259368u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25936c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x25936cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x259370: 0xc4d80000  lwc1        $f24, 0x0($a2)
    ctx->pc = 0x259370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x259374: 0xc4da0008  lwc1        $f26, 0x8($a2)
    ctx->pc = 0x259374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x259378: 0xc4d90004  lwc1        $f25, 0x4($a2)
    ctx->pc = 0x259378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25937c: 0x46184c41  sub.s       $f17, $f9, $f24
    ctx->pc = 0x25937cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[9], ctx->f[24]);
    // 0x259380: 0xc4ed0008  lwc1        $f13, 0x8($a3)
    ctx->pc = 0x259380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x259384: 0xc5170008  lwc1        $f23, 0x8($t0)
    ctx->pc = 0x259384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x259388: 0xc4e80004  lwc1        $f8, 0x4($a3)
    ctx->pc = 0x259388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25938c: 0x461a6cc1  sub.s       $f19, $f13, $f26
    ctx->pc = 0x25938cu;
    ctx->f[19] = FPU_SUB_S(ctx->f[13], ctx->f[26]);
    // 0x259390: 0xc5150004  lwc1        $f21, 0x4($t0)
    ctx->pc = 0x259390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x259394: 0x461ab901  sub.s       $f4, $f23, $f26
    ctx->pc = 0x259394u;
    ctx->f[4] = FPU_SUB_S(ctx->f[23], ctx->f[26]);
    // 0x259398: 0xc5160000  lwc1        $f22, 0x0($t0)
    ctx->pc = 0x259398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25939c: 0x46194481  sub.s       $f18, $f8, $f25
    ctx->pc = 0x25939cu;
    ctx->f[18] = FPU_SUB_S(ctx->f[8], ctx->f[25]);
    // 0x2593a0: 0x4619a881  sub.s       $f2, $f21, $f25
    ctx->pc = 0x2593a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x2593a4: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x2593a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2593a8: 0x4618b041  sub.s       $f1, $f22, $f24
    ctx->pc = 0x2593a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x2593ac: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x2593acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2593b0: 0x46048982  mul.s       $f6, $f17, $f4
    ctx->pc = 0x2593b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[17], ctx->f[4]);
    // 0x2593b4: 0xc4ab0000  lwc1        $f11, 0x0($a1)
    ctx->pc = 0x2593b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2593b8: 0x46029802  mul.s       $f0, $f19, $f2
    ctx->pc = 0x2593b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[2]);
    // 0x2593bc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2593bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2593c0: 0x460198c2  mul.s       $f3, $f19, $f1
    ctx->pc = 0x2593c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x2593c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2593c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2593c8: 0x46049142  mul.s       $f5, $f18, $f4
    ctx->pc = 0x2593c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[18], ctx->f[4]);
    // 0x2593cc: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2593ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2593d0: 0x460289c2  mul.s       $f7, $f17, $f2
    ctx->pc = 0x2593d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[17], ctx->f[2]);
    // 0x2593d4: 0xe7b10000  swc1        $f17, 0x0($sp)
    ctx->pc = 0x2593d4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2593d8: 0x46061981  sub.s       $f6, $f3, $f6
    ctx->pc = 0x2593d8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2593dc: 0xe7b20004  swc1        $f18, 0x4($sp)
    ctx->pc = 0x2593dcu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2593e0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2593e0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2593e4: 0xe7b30008  swc1        $f19, 0x8($sp)
    ctx->pc = 0x2593e4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2593e8: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x2593e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x2593ec: 0x460a3082  mul.s       $f2, $f6, $f10
    ctx->pc = 0x2593ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2593f0: 0x460b2802  mul.s       $f0, $f5, $f11
    ctx->pc = 0x2593f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x2593f4: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x2593f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2593f8: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x2593f8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2593fc: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x2593fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x259400: 0x46182842  mul.s       $f1, $f5, $f24
    ctx->pc = 0x259400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x259404: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x259404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x259408: 0x460c38c2  mul.s       $f3, $f7, $f12
    ctx->pc = 0x259408u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x25940c: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x25940cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x259410: 0x46193082  mul.s       $f2, $f6, $f25
    ctx->pc = 0x259410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[25]);
    // 0x259414: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x259414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x259418: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x259418u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25941c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25941cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x259420: 0x461a3802  mul.s       $f0, $f7, $f26
    ctx->pc = 0x259420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[26]);
    // 0x259424: 0x461e1832  c.eq.s      $f3, $f30
    ctx->pc = 0x259424u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259428: 0x0  nop
    ctx->pc = 0x259428u;
    // NOP
    // 0x25942c: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
    ctx->pc = 0x25942Cu;
    {
        const bool branch_taken_0x25942c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25942Cu;
        // 0x259430: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25942c) {
            ctx->pc = 0x259698u;
            goto label_259698;
        }
    }
    ctx->pc = 0x259434u;
    // 0x259434: 0xc49c0000  lwc1        $f28, 0x0($a0)
    ctx->pc = 0x259434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x259438: 0xc49d0004  lwc1        $f29, 0x4($a0)
    ctx->pc = 0x259438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x25943c: 0x461c2802  mul.s       $f0, $f5, $f28
    ctx->pc = 0x25943cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[28]);
    // 0x259440: 0xc49b0008  lwc1        $f27, 0x8($a0)
    ctx->pc = 0x259440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x259444: 0x461d3042  mul.s       $f1, $f6, $f29
    ctx->pc = 0x259444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[29]);
    // 0x259448: 0x461b3882  mul.s       $f2, $f7, $f27
    ctx->pc = 0x259448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x25944c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25944cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x259450: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x259450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x259454: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x259454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x259458: 0x0  nop
    ctx->pc = 0x259458u;
    // NOP
    // 0x25945c: 0x0  nop
    ctx->pc = 0x25945cu;
    // NOP
    // 0x259460: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x259460u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[3];
    // 0x259464: 0x461e1034  c.lt.s      $f2, $f30
    ctx->pc = 0x259464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259468: 0x0  nop
    ctx->pc = 0x259468u;
    // NOP
    // 0x25946c: 0x450100b4  bc1t        . + 4 + (0xB4 << 2)
    ctx->pc = 0x25946Cu;
    {
        const bool branch_taken_0x25946c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25946Cu;
        // 0x259470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25946c) {
            ctx->pc = 0x259740u;
            goto label_259740;
        }
    }
    ctx->pc = 0x259474u;
    // 0x259474: 0x460c1002  mul.s       $f0, $f2, $f12
    ctx->pc = 0x259474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x259478: 0x460b1042  mul.s       $f1, $f2, $f11
    ctx->pc = 0x259478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x25947c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x25947cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x259480: 0x4600dc00  add.s       $f16, $f27, $f0
    ctx->pc = 0x259480u;
    ctx->f[16] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
    // 0x259484: 0x4601e380  add.s       $f14, $f28, $f1
    ctx->pc = 0x259484u;
    ctx->f[14] = FPU_ADD_S(ctx->f[28], ctx->f[1]);
    // 0x259488: 0x4602ebc0  add.s       $f15, $f29, $f2
    ctx->pc = 0x259488u;
    ctx->f[15] = FPU_ADD_S(ctx->f[29], ctx->f[2]);
    // 0x25948c: 0x4609b0c1  sub.s       $f3, $f22, $f9
    ctx->pc = 0x25948cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[9]);
    // 0x259490: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x259490u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x259494: 0x460db981  sub.s       $f6, $f23, $f13
    ctx->pc = 0x259494u;
    ctx->f[6] = FPU_SUB_S(ctx->f[23], ctx->f[13]);
    // 0x259498: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x259498u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25949c: 0x460eb301  sub.s       $f12, $f22, $f14
    ctx->pc = 0x25949cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[14]);
    // 0x2594a0: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x2594a0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2594a4: 0x4610b801  sub.s       $f0, $f23, $f16
    ctx->pc = 0x2594a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[16]);
    // 0x2594a8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2594a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2594ac: 0x4608aa81  sub.s       $f10, $f21, $f8
    ctx->pc = 0x2594acu;
    ctx->f[10] = FPU_SUB_S(ctx->f[21], ctx->f[8]);
    // 0x2594b0: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2594b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2594b4: 0x460faac1  sub.s       $f11, $f21, $f15
    ctx->pc = 0x2594b4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[21], ctx->f[15]);
    // 0x2594b8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2594b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2594bc: 0x46106841  sub.s       $f1, $f13, $f16
    ctx->pc = 0x2594bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[16]);
    // 0x2594c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2594c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2594c4: 0x460e4a41  sub.s       $f9, $f9, $f14
    ctx->pc = 0x2594c4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[14]);
    // 0x2594c8: 0xe7aa0004  swc1        $f10, 0x4($sp)
    ctx->pc = 0x2594c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2594cc: 0x460f41c1  sub.s       $f7, $f8, $f15
    ctx->pc = 0x2594ccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[15]);
    // 0x2594d0: 0xe7ab0014  swc1        $f11, 0x14($sp)
    ctx->pc = 0x2594d0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2594d4: 0x46001b42  mul.s       $f13, $f3, $f0
    ctx->pc = 0x2594d4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2594d8: 0x460c3102  mul.s       $f4, $f6, $f12
    ctx->pc = 0x2594d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x2594dc: 0x46099a02  mul.s       $f8, $f19, $f9
    ctx->pc = 0x2594dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[19], ctx->f[9]);
    // 0x2594e0: 0x46018882  mul.s       $f2, $f17, $f1
    ctx->pc = 0x2594e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x2594e4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2594e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2594e8: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x2594e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x2594ec: 0x46019042  mul.s       $f1, $f18, $f1
    ctx->pc = 0x2594ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x2594f0: 0x46079942  mul.s       $f5, $f19, $f7
    ctx->pc = 0x2594f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[19], ctx->f[7]);
    // 0x2594f4: 0x46024501  sub.s       $f20, $f8, $f2
    ctx->pc = 0x2594f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x2594f8: 0x460d2101  sub.s       $f4, $f4, $f13
    ctx->pc = 0x2594f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x2594fc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2594fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x259500: 0x46050a01  sub.s       $f8, $f1, $f5
    ctx->pc = 0x259500u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x259504: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x259504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x259508: 0x460789c2  mul.s       $f7, $f17, $f7
    ctx->pc = 0x259508u;
    ctx->f[7] = FPU_MUL_S(ctx->f[17], ctx->f[7]);
    // 0x25950c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x25950cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x259510: 0x46099242  mul.s       $f9, $f18, $f9
    ctx->pc = 0x259510u;
    ctx->f[9] = FPU_MUL_S(ctx->f[18], ctx->f[9]);
    // 0x259514: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x259514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x259518: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x259518u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x25951c: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x25951cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x259520: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x259520u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x259524: 0x46093a41  sub.s       $f9, $f7, $f9
    ctx->pc = 0x259524u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x259528: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x259528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x25952c: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x25952cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x259530: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x259530u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x259534: 0xe7a90038  swc1        $f9, 0x38($sp)
    ctx->pc = 0x259534u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x259538: 0x46034842  mul.s       $f1, $f9, $f3
    ctx->pc = 0x259538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x25953c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x25953cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x259540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x259540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x259544: 0x461e0034  c.lt.s      $f0, $f30
    ctx->pc = 0x259544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259548: 0x0  nop
    ctx->pc = 0x259548u;
    // NOP
    // 0x25954c: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x25954Cu;
    {
        const bool branch_taken_0x25954c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25954Cu;
        // 0x259550: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25954c) {
            ctx->pc = 0x259740u;
            goto label_259740;
        }
    }
    ctx->pc = 0x259554u;
    // 0x259554: 0xc52c0008  lwc1        $f12, 0x8($t1)
    ctx->pc = 0x259554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259558: 0xc52a0000  lwc1        $f10, 0x0($t1)
    ctx->pc = 0x259558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25955c: 0xc52b0004  lwc1        $f11, 0x4($t1)
    ctx->pc = 0x25955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x259560: 0x46176101  sub.s       $f4, $f12, $f23
    ctx->pc = 0x259560u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
    // 0x259564: 0x46165081  sub.s       $f2, $f10, $f22
    ctx->pc = 0x259564u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[22]);
    // 0x259568: 0x460e5181  sub.s       $f6, $f10, $f14
    ctx->pc = 0x259568u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[14]);
    // 0x25956c: 0x46106041  sub.s       $f1, $f12, $f16
    ctx->pc = 0x25956cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[16]);
    // 0x259570: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x259570u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x259574: 0x460f5801  sub.s       $f0, $f11, $f15
    ctx->pc = 0x259574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[15]);
    // 0x259578: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x259578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25957c: 0x46155941  sub.s       $f5, $f11, $f21
    ctx->pc = 0x25957cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[21]);
    // 0x259580: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x259580u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x259584: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x259584u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x259588: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x259588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25958c: 0x460620c2  mul.s       $f3, $f4, $f6
    ctx->pc = 0x25958cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x259590: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x259590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x259594: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x259594u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x259598: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x259598u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25959c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x25959cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2595a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2595a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2595a4: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x2595a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2595a8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2595a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2595ac: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2595acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2595b0: 0x4603a102  mul.s       $f4, $f20, $f3
    ctx->pc = 0x2595b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2595b4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2595b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2595b8: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x2595b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2595bc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2595bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2595c0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2595c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2595c4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2595c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2595c8: 0x46024842  mul.s       $f1, $f9, $f2
    ctx->pc = 0x2595c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2595cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2595ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2595d0: 0x461e0034  c.lt.s      $f0, $f30
    ctx->pc = 0x2595d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2595d4: 0x0  nop
    ctx->pc = 0x2595d4u;
    // NOP
    // 0x2595d8: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x2595D8u;
    {
        const bool branch_taken_0x2595d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2595DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595D8u;
        // 0x2595dc: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595d8) {
            ctx->pc = 0x259740u;
            goto label_259740;
        }
    }
    ctx->pc = 0x2595E0u;
    // 0x2595e0: 0x460ac081  sub.s       $f2, $f24, $f10
    ctx->pc = 0x2595e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[10]);
    // 0x2595e4: 0x460cd001  sub.s       $f0, $f26, $f12
    ctx->pc = 0x2595e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[12]);
    // 0x2595e8: 0x460ec181  sub.s       $f6, $f24, $f14
    ctx->pc = 0x2595e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[24], ctx->f[14]);
    // 0x2595ec: 0x4610d041  sub.s       $f1, $f26, $f16
    ctx->pc = 0x2595ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[16]);
    // 0x2595f0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2595f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2595f4: 0x460fc901  sub.s       $f4, $f25, $f15
    ctx->pc = 0x2595f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[25], ctx->f[15]);
    // 0x2595f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2595f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2595fc: 0x460bc941  sub.s       $f5, $f25, $f11
    ctx->pc = 0x2595fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[25], ctx->f[11]);
    // 0x259600: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x259600u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x259604: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x259604u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x259608: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x259608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25960c: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x25960cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x259610: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x259610u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x259614: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x259614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x259618: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x259618u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25961c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x25961cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x259620: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x259620u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x259624: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x259624u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x259628: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x259628u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25962c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x25962cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x259630: 0x4603a102  mul.s       $f4, $f20, $f3
    ctx->pc = 0x259630u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x259634: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x259634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x259638: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x259638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x25963c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x25963cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x259640: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x259640u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x259644: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x259644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x259648: 0x46024842  mul.s       $f1, $f9, $f2
    ctx->pc = 0x259648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x25964c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25964cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x259650: 0x461e0034  c.lt.s      $f0, $f30
    ctx->pc = 0x259650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259654: 0x0  nop
    ctx->pc = 0x259654u;
    // NOP
    // 0x259658: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x259658u;
    {
        const bool branch_taken_0x259658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259658u;
        // 0x25965c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259658) {
            ctx->pc = 0x259740u;
            goto label_259740;
        }
    }
    ctx->pc = 0x259660u;
    // 0x259660: 0x461c7001  sub.s       $f0, $f14, $f28
    ctx->pc = 0x259660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[28]);
    // 0x259664: 0x461d7841  sub.s       $f1, $f15, $f29
    ctx->pc = 0x259664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[29]);
    // 0x259668: 0x461b80c1  sub.s       $f3, $f16, $f27
    ctx->pc = 0x259668u;
    ctx->f[3] = FPU_SUB_S(ctx->f[16], ctx->f[27]);
    // 0x25966c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x25966cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x259670: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x259670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259674: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x259674u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259678: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x259678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25967c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x25967cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x259680: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x259680u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x259684: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x259684u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x259688: 0x4602f836  c.le.s      $f31, $f2
    ctx->pc = 0x259688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[31], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25968c: 0x0  nop
    ctx->pc = 0x25968cu;
    // NOP
    // 0x259690: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x259690u;
    {
        const bool branch_taken_0x259690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259690u;
        // 0x259694: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259690) {
            ctx->pc = 0x2596A0u;
            goto label_2596a0;
        }
    }
    ctx->pc = 0x259698u;
label_259698:
    // 0x259698: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x259698u;
    {
        const bool branch_taken_0x259698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259698u;
        // 0x25969c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259698) {
            ctx->pc = 0x259740u;
            goto label_259740;
        }
    }
    ctx->pc = 0x2596A0u;
label_2596a0:
    // 0x2596a0: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2596A0u;
    {
        const bool branch_taken_0x2596a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2596a0) {
            ctx->pc = 0x2596B4u;
            goto label_2596b4;
        }
    }
    ctx->pc = 0x2596A8u;
    // 0x2596a8: 0xe5500008  swc1        $f16, 0x8($t2)
    ctx->pc = 0x2596a8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2596ac: 0xe54e0000  swc1        $f14, 0x0($t2)
    ctx->pc = 0x2596acu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2596b0: 0xe54f0004  swc1        $f15, 0x4($t2)
    ctx->pc = 0x2596b0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_2596b4:
    // 0x2596b4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2596B4u;
    {
        const bool branch_taken_0x2596b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596B4u;
        // 0x2596b8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596b4) {
            ctx->pc = 0x25973Cu;
            goto label_25973c;
        }
    }
    ctx->pc = 0x2596BCu;
    // 0x2596bc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2596bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2596c0: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2596c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2596c4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2596c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2596c8: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2596c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2596cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2596ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2596d0: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2596d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2596d4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2596d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2596d8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2596d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2596dc: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x2596dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2596e0: 0x0  nop
    ctx->pc = 0x2596e0u;
    // NOP
    // 0x2596e4: 0x0  nop
    ctx->pc = 0x2596e4u;
    // NOP
    // 0x2596e8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2596e8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2596ec: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2596ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2596f0: 0x0  nop
    ctx->pc = 0x2596f0u;
    // NOP
    // 0x2596f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2596F4u;
    {
        const bool branch_taken_0x2596f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F4u;
        // 0x2596f8: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596f4) {
            ctx->pc = 0x259704u;
            goto label_259704;
        }
    }
    ctx->pc = 0x2596FCu;
    // 0x2596fc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2596FCu;
    SET_GPR_U32(ctx, 31, 0x259704u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2596FCu, 0x259704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259704u;
label_259704:
    // 0x259704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25970c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x25970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259710: 0x0  nop
    ctx->pc = 0x259710u;
    // NOP
    // 0x259714: 0x0  nop
    ctx->pc = 0x259714u;
    // NOP
    // 0x259718: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x259718u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x25971c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x25971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259720: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x259720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259724: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x259724u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x259728: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x259728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25972c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x25972cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x259730: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x259730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x259734: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x259734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x259738: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x259738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_25973c:
    // 0x25973c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259740:
    // 0x259740: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x259740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259744: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x259744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259748: 0xc7bf00d8  lwc1        $f31, 0xD8($sp)
    ctx->pc = 0x259748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x25974c: 0xc7be00d0  lwc1        $f30, 0xD0($sp)
    ctx->pc = 0x25974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x259750: 0xc7bd00c8  lwc1        $f29, 0xC8($sp)
    ctx->pc = 0x259750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x259754: 0xc7bc00c0  lwc1        $f28, 0xC0($sp)
    ctx->pc = 0x259754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x259758: 0xc7bb00b8  lwc1        $f27, 0xB8($sp)
    ctx->pc = 0x259758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x25975c: 0xc7ba00b0  lwc1        $f26, 0xB0($sp)
    ctx->pc = 0x25975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x259760: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x259760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x259764: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x259764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x259768: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x259768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25976c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x25976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x259770: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x259770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x259774: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x259774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259778: 0x3e00008  jr          $ra
    ctx->pc = 0x259778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259778u;
        // 0x25977c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259780u;
}
