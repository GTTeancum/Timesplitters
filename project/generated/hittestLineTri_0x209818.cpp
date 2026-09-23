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

// Function: hittestLineTri
// Address: 0x209818 - 0x209b08
void hittestLineTri_0x209818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestLineTri_0x209818");
#endif

    ctx->pc = 0x209818u;

    // 0x209818: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x209818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20981c: 0xc4e90000  lwc1        $f9, 0x0($a3)
    ctx->pc = 0x20981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x209820: 0xe7bb0098  swc1        $f27, 0x98($sp)
    ctx->pc = 0x209820u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x209824: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x209824u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x209828: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x209828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x20982c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x20982cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x209830: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x209830u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x209834: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x209834u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x209838: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x209838u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x20983c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x20983cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x209840: 0xc4d60004  lwc1        $f22, 0x4($a2)
    ctx->pc = 0x209840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x209844: 0xc4d80008  lwc1        $f24, 0x8($a2)
    ctx->pc = 0x209844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x209848: 0xc4ee0008  lwc1        $f14, 0x8($a3)
    ctx->pc = 0x209848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20984c: 0xc51a0008  lwc1        $f26, 0x8($t0)
    ctx->pc = 0x20984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x209850: 0xc4ed0004  lwc1        $f13, 0x4($a3)
    ctx->pc = 0x209850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x209854: 0x46187501  sub.s       $f20, $f14, $f24
    ctx->pc = 0x209854u;
    ctx->f[20] = FPU_SUB_S(ctx->f[14], ctx->f[24]);
    // 0x209858: 0xc5170004  lwc1        $f23, 0x4($t0)
    ctx->pc = 0x209858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20985c: 0x4618d101  sub.s       $f4, $f26, $f24
    ctx->pc = 0x20985cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[26], ctx->f[24]);
    // 0x209860: 0xc4d50000  lwc1        $f21, 0x0($a2)
    ctx->pc = 0x209860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209864: 0x46166cc1  sub.s       $f19, $f13, $f22
    ctx->pc = 0x209864u;
    ctx->f[19] = FPU_SUB_S(ctx->f[13], ctx->f[22]);
    // 0x209868: 0xc5190000  lwc1        $f25, 0x0($t0)
    ctx->pc = 0x209868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20986c: 0x4616b801  sub.s       $f0, $f23, $f22
    ctx->pc = 0x20986cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x209870: 0x46154c81  sub.s       $f18, $f9, $f21
    ctx->pc = 0x209870u;
    ctx->f[18] = FPU_SUB_S(ctx->f[9], ctx->f[21]);
    // 0x209874: 0xc4b00008  lwc1        $f16, 0x8($a1)
    ctx->pc = 0x209874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x209878: 0x4615c881  sub.s       $f2, $f25, $f21
    ctx->pc = 0x209878u;
    ctx->f[2] = FPU_SUB_S(ctx->f[25], ctx->f[21]);
    // 0x20987c: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x20987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209880: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x209880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x209884: 0xc4af0000  lwc1        $f15, 0x0($a1)
    ctx->pc = 0x209884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x209888: 0x460491c2  mul.s       $f7, $f18, $f4
    ctx->pc = 0x209888u;
    ctx->f[7] = FPU_MUL_S(ctx->f[18], ctx->f[4]);
    // 0x20988c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x20988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x209890: 0x4602a0c2  mul.s       $f3, $f20, $f2
    ctx->pc = 0x209890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x209894: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x209894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209898: 0x46049942  mul.s       $f5, $f19, $f4
    ctx->pc = 0x209898u;
    ctx->f[5] = FPU_MUL_S(ctx->f[19], ctx->f[4]);
    // 0x20989c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x20989cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2098a0: 0x46009182  mul.s       $f6, $f18, $f0
    ctx->pc = 0x2098a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x2098a4: 0xe7b20000  swc1        $f18, 0x0($sp)
    ctx->pc = 0x2098a4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2098a8: 0x460719c1  sub.s       $f7, $f3, $f7
    ctx->pc = 0x2098a8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2098ac: 0xe7b30004  swc1        $f19, 0x4($sp)
    ctx->pc = 0x2098acu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2098b0: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2098b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2098b4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x2098b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2098b8: 0x46029882  mul.s       $f2, $f19, $f2
    ctx->pc = 0x2098b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[19], ctx->f[2]);
    // 0x2098bc: 0x460c38c2  mul.s       $f3, $f7, $f12
    ctx->pc = 0x2098bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x2098c0: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x2098c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2098c4: 0x460f2802  mul.s       $f0, $f5, $f15
    ctx->pc = 0x2098c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x2098c8: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2098c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2098cc: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2098ccu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2098d0: 0x46152842  mul.s       $f1, $f5, $f21
    ctx->pc = 0x2098d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x2098d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2098d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2098d8: 0x46103102  mul.s       $f4, $f6, $f16
    ctx->pc = 0x2098d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
    // 0x2098dc: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x2098dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2098e0: 0x46163882  mul.s       $f2, $f7, $f22
    ctx->pc = 0x2098e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[22]);
    // 0x2098e4: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x2098e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x2098e8: 0x460400c0  add.s       $f3, $f0, $f4
    ctx->pc = 0x2098e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2098ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2098ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2098f0: 0x46183002  mul.s       $f0, $f6, $f24
    ctx->pc = 0x2098f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x2098f4: 0x461b1832  c.eq.s      $f3, $f27
    ctx->pc = 0x2098f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2098f8: 0x0  nop
    ctx->pc = 0x2098f8u;
    // NOP
    // 0x2098fc: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x2098FCu;
    {
        const bool branch_taken_0x2098fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098FCu;
        // 0x209900: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098fc) {
            ctx->pc = 0x209AA4u;
            goto label_209aa4;
        }
    }
    ctx->pc = 0x209904u;
    // 0x209904: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x209904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x209908: 0xc48b0004  lwc1        $f11, 0x4($a0)
    ctx->pc = 0x209908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20990c: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x20990cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x209910: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x209910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x209914: 0x460b3842  mul.s       $f1, $f7, $f11
    ctx->pc = 0x209914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x209918: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x209918u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x20991c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20991cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209920: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x209920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x209924: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x209924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x209928: 0x0  nop
    ctx->pc = 0x209928u;
    // NOP
    // 0x20992c: 0x0  nop
    ctx->pc = 0x20992cu;
    // NOP
    // 0x209930: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x209930u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[3];
    // 0x209934: 0x461b1034  c.lt.s      $f2, $f27
    ctx->pc = 0x209934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209938: 0x0  nop
    ctx->pc = 0x209938u;
    // NOP
    // 0x20993c: 0x45010068  bc1t        . + 4 + (0x68 << 2)
    ctx->pc = 0x20993Cu;
    {
        const bool branch_taken_0x20993c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20993c) {
            ctx->pc = 0x209AE0u;
            goto label_209ae0;
        }
    }
    ctx->pc = 0x209944u;
    // 0x209944: 0x46101002  mul.s       $f0, $f2, $f16
    ctx->pc = 0x209944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x209948: 0x460f1042  mul.s       $f1, $f2, $f15
    ctx->pc = 0x209948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x20994c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x20994cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x209950: 0x46004440  add.s       $f17, $f8, $f0
    ctx->pc = 0x209950u;
    ctx->f[17] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x209954: 0x460153c0  add.s       $f15, $f10, $f1
    ctx->pc = 0x209954u;
    ctx->f[15] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x209958: 0x46025c00  add.s       $f16, $f11, $f2
    ctx->pc = 0x209958u;
    ctx->f[16] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x20995c: 0x4609c8c1  sub.s       $f3, $f25, $f9
    ctx->pc = 0x20995cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[25], ctx->f[9]);
    // 0x209960: 0xe7b10038  swc1        $f17, 0x38($sp)
    ctx->pc = 0x209960u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x209964: 0x460ed181  sub.s       $f6, $f26, $f14
    ctx->pc = 0x209964u;
    ctx->f[6] = FPU_SUB_S(ctx->f[26], ctx->f[14]);
    // 0x209968: 0xe7af0030  swc1        $f15, 0x30($sp)
    ctx->pc = 0x209968u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20996c: 0x460fcb01  sub.s       $f12, $f25, $f15
    ctx->pc = 0x20996cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[25], ctx->f[15]);
    // 0x209970: 0xe7b00034  swc1        $f16, 0x34($sp)
    ctx->pc = 0x209970u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x209974: 0x4611d001  sub.s       $f0, $f26, $f17
    ctx->pc = 0x209974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[17]);
    // 0x209978: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x209978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20997c: 0x460dba81  sub.s       $f10, $f23, $f13
    ctx->pc = 0x20997cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[23], ctx->f[13]);
    // 0x209980: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x209980u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x209984: 0x4610bac1  sub.s       $f11, $f23, $f16
    ctx->pc = 0x209984u;
    ctx->f[11] = FPU_SUB_S(ctx->f[23], ctx->f[16]);
    // 0x209988: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x209988u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20998c: 0x46117041  sub.s       $f1, $f14, $f17
    ctx->pc = 0x20998cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
    // 0x209990: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x209990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x209994: 0x460f4a41  sub.s       $f9, $f9, $f15
    ctx->pc = 0x209994u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[15]);
    // 0x209998: 0xe7aa0004  swc1        $f10, 0x4($sp)
    ctx->pc = 0x209998u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20999c: 0x461069c1  sub.s       $f7, $f13, $f16
    ctx->pc = 0x20999cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[16]);
    // 0x2099a0: 0xe7ab0014  swc1        $f11, 0x14($sp)
    ctx->pc = 0x2099a0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2099a4: 0x46001b42  mul.s       $f13, $f3, $f0
    ctx->pc = 0x2099a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2099a8: 0x460c3102  mul.s       $f4, $f6, $f12
    ctx->pc = 0x2099a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x2099ac: 0x4609a202  mul.s       $f8, $f20, $f9
    ctx->pc = 0x2099acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x2099b0: 0x46019082  mul.s       $f2, $f18, $f1
    ctx->pc = 0x2099b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x2099b4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2099b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2099b8: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x2099b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x2099bc: 0x46019842  mul.s       $f1, $f19, $f1
    ctx->pc = 0x2099bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x2099c0: 0x4607a142  mul.s       $f5, $f20, $f7
    ctx->pc = 0x2099c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x2099c4: 0x46024381  sub.s       $f14, $f8, $f2
    ctx->pc = 0x2099c4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x2099c8: 0x460d2101  sub.s       $f4, $f4, $f13
    ctx->pc = 0x2099c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x2099cc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2099ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2099d0: 0x46050a01  sub.s       $f8, $f1, $f5
    ctx->pc = 0x2099d0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2099d4: 0xe7ae0044  swc1        $f14, 0x44($sp)
    ctx->pc = 0x2099d4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2099d8: 0x460791c2  mul.s       $f7, $f18, $f7
    ctx->pc = 0x2099d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[18], ctx->f[7]);
    // 0x2099dc: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x2099dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2099e0: 0x46099a42  mul.s       $f9, $f19, $f9
    ctx->pc = 0x2099e0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[19], ctx->f[9]);
    // 0x2099e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2099e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2099e8: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x2099e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x2099ec: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x2099ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2099f0: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x2099f0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x2099f4: 0x46093a41  sub.s       $f9, $f7, $f9
    ctx->pc = 0x2099f4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x2099f8: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2099f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2099fc: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x2099fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x209a00: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x209a00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x209a04: 0xe7a90048  swc1        $f9, 0x48($sp)
    ctx->pc = 0x209a04u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x209a08: 0x46034842  mul.s       $f1, $f9, $f3
    ctx->pc = 0x209a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x209a0c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x209a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x209a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209a14: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x209a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209a18: 0x0  nop
    ctx->pc = 0x209a18u;
    // NOP
    // 0x209a1c: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x209A1Cu;
    {
        const bool branch_taken_0x209a1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A1Cu;
        // 0x209a20: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a1c) {
            ctx->pc = 0x209AE0u;
            goto label_209ae0;
        }
    }
    ctx->pc = 0x209A24u;
    // 0x209a24: 0x4619a881  sub.s       $f2, $f21, $f25
    ctx->pc = 0x209a24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[25]);
    // 0x209a28: 0x461ac001  sub.s       $f0, $f24, $f26
    ctx->pc = 0x209a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[26]);
    // 0x209a2c: 0x460fa981  sub.s       $f6, $f21, $f15
    ctx->pc = 0x209a2cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[21], ctx->f[15]);
    // 0x209a30: 0x4611c041  sub.s       $f1, $f24, $f17
    ctx->pc = 0x209a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[17]);
    // 0x209a34: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x209a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209a38: 0x4610b101  sub.s       $f4, $f22, $f16
    ctx->pc = 0x209a38u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[16]);
    // 0x209a3c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x209a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x209a40: 0x4617b141  sub.s       $f5, $f22, $f23
    ctx->pc = 0x209a40u;
    ctx->f[5] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x209a44: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x209a44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209a48: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x209a48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x209a4c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x209a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x209a50: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x209a50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x209a54: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x209a54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x209a58: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x209a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x209a5c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x209a5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x209a60: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x209a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x209a64: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x209a64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x209a68: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x209a68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x209a6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x209a6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209a70: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x209a70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x209a74: 0x46037102  mul.s       $f4, $f14, $f3
    ctx->pc = 0x209a74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x209a78: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x209a78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x209a7c: 0x46014002  mul.s       $f0, $f8, $f1
    ctx->pc = 0x209a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x209a80: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x209a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x209a84: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x209a84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x209a88: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x209a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x209a8c: 0x46024842  mul.s       $f1, $f9, $f2
    ctx->pc = 0x209a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x209a90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209a94: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x209a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209a98: 0x0  nop
    ctx->pc = 0x209a98u;
    // NOP
    // 0x209a9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x209A9Cu;
    {
        const bool branch_taken_0x209a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A9Cu;
        // 0x209aa0: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a9c) {
            ctx->pc = 0x209AACu;
            goto label_209aac;
        }
    }
    ctx->pc = 0x209AA4u;
label_209aa4:
    // 0x209aa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x209AA4u;
    {
        const bool branch_taken_0x209aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AA4u;
        // 0x209aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209aa4) {
            ctx->pc = 0x209AE0u;
            goto label_209ae0;
        }
    }
    ctx->pc = 0x209AACu;
label_209aac:
    // 0x209aac: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209AACu;
    {
        const bool branch_taken_0x209aac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x209aac) {
            ctx->pc = 0x209AC0u;
            goto label_209ac0;
        }
    }
    ctx->pc = 0x209AB4u;
    // 0x209ab4: 0xe5310008  swc1        $f17, 0x8($t1)
    ctx->pc = 0x209ab4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x209ab8: 0xe52f0000  swc1        $f15, 0x0($t1)
    ctx->pc = 0x209ab8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x209abc: 0xe5300004  swc1        $f16, 0x4($t1)
    ctx->pc = 0x209abcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_209ac0:
    // 0x209ac0: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x209AC0u;
    {
        const bool branch_taken_0x209ac0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x209AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AC0u;
        // 0x209ac4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ac0) {
            ctx->pc = 0x209ADCu;
            goto label_209adc;
        }
    }
    ctx->pc = 0x209AC8u;
    // 0x209ac8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x209ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209acc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x209accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209ad0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x209ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x209ad4: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x209ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x209ad8: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x209ad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_209adc:
    // 0x209adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ae0:
    // 0x209ae0: 0xc7bb0098  lwc1        $f27, 0x98($sp)
    ctx->pc = 0x209ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x209ae4: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x209ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x209ae8: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x209ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x209aec: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x209aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x209af0: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x209af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x209af4: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x209af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x209af8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x209af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209afc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x209afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209b00: 0x3e00008  jr          $ra
    ctx->pc = 0x209B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B00u;
        // 0x209b04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209B08u;
}
