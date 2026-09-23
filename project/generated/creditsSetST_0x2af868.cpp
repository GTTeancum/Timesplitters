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

// Function: creditsSetST
// Address: 0x2af868 - 0x2afb98
void creditsSetST_0x2af868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsSetST_0x2af868");
#endif

    switch (ctx->pc) {
        case 0x2af980u: goto label_2af980;
        case 0x2af9e0u: goto label_2af9e0;
        default: break;
    }

    ctx->pc = 0x2af868u;

    // 0x2af868: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2af868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2af86c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2af86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2af870: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af874: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2af874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2af878: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2af878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2af87c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2af87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2af880: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2af880u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af884: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2af884u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af888: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2af888u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af88c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af890: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x2af890u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af894: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af898: 0xc444f720  lwc1        $f4, -0x8E0($v0)
    ctx->pc = 0x2af898u;
    { uint32_t bits = FAST_READ32(0x36F720u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2af89c: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x2af89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x2af8a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2af8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2af8a4: 0x2482120c  addiu       $v0, $a0, 0x120C
    ctx->pc = 0x2af8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4620));
    // 0x2af8a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2af8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af8ac: 0x24830900  addiu       $v1, $a0, 0x900
    ctx->pc = 0x2af8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2304));
    // 0x2af8b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2af8b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2af8b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af8b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2af8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af8bc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2af8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2af8c0: 0x248b0904  addiu       $t3, $a0, 0x904
    ctx->pc = 0x2af8c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 2308));
    // 0x2af8c4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2af8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2af8c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2af8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2af8cc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2af8ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2af8d0: 0x24820910  addiu       $v0, $a0, 0x910
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2320));
    // 0x2af8d4: 0x24830914  addiu       $v1, $a0, 0x914
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2324));
    // 0x2af8d8: 0x46001a06  mov.s       $f8, $f3
    ctx->pc = 0x2af8d8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[3]);
    // 0x2af8dc: 0x0  nop
    ctx->pc = 0x2af8dcu;
    // NOP
    // 0x2af8e0: 0x0  nop
    ctx->pc = 0x2af8e0u;
    // NOP
    // 0x2af8e4: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2af8e4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2af8e8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x2af8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x2af8ec: 0x0  nop
    ctx->pc = 0x2af8ecu;
    // NOP
    // 0x2af8f0: 0x0  nop
    ctx->pc = 0x2af8f0u;
    // NOP
    // 0x2af8f4: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x2af8f4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x2af8f8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2af8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2af8fc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2af8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2af900: 0x248b0920  addiu       $t3, $a0, 0x920
    ctx->pc = 0x2af900u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 2336));
    // 0x2af904: 0x24820924  addiu       $v0, $a0, 0x924
    ctx->pc = 0x2af904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2340));
    // 0x2af908: 0x24830930  addiu       $v1, $a0, 0x930
    ctx->pc = 0x2af908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2352));
    // 0x2af90c: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x2af90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x2af910: 0x3c0d00ff  lui         $t5, 0xFF
    ctx->pc = 0x2af910u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)255 << 16));
    // 0x2af914: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2af914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2af918: 0x248b0934  addiu       $t3, $a0, 0x934
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 2356));
    // 0x2af91c: 0x460019c1  sub.s       $f7, $f3, $f0
    ctx->pc = 0x2af91cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2af920: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2af920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2af924: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2af924u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2af928: 0x24831204  addiu       $v1, $a0, 0x1204
    ctx->pc = 0x2af928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4612));
    // 0x2af92c: 0x24821200  addiu       $v0, $a0, 0x1200
    ctx->pc = 0x2af92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
    // 0x2af930: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2af930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2af934: 0x24841208  addiu       $a0, $a0, 0x1208
    ctx->pc = 0x2af934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    // 0x2af938: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x2af938u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2af93c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2af93cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2af940: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2af940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2af944: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2af944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2af948: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2af948u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af94c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2af94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2af950: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x2af950u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2af954: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2af954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2af958: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x2af958u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x2af95c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2af95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2af960: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2af960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2af964: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2af964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2af968: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2af96c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2af96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2af970: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x2af970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
    // 0x2af974: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2af974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2af978: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x2af978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x2af97c: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2af97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2af980:
    // 0x2af980: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2af980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af984: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2af984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2af988: 0x240b0300  addiu       $t3, $zero, 0x300
    ctx->pc = 0x2af988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2af98c: 0x706bf018  mult1       $fp, $v1, $t3
    ctx->pc = 0x2af98cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x2af990: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af994: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2af994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af998: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2af998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2af99c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2af99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2af9a0: 0x2484f740  addiu       $a0, $a0, -0x8C0
    ctx->pc = 0x2af9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
    // 0x2af9a4: 0x445021  addu        $t2, $v0, $a0
    ctx->pc = 0x2af9a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af9a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2af9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2af9ac: 0x2484f708  addiu       $a0, $a0, -0x8F8
    ctx->pc = 0x2af9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965000));
    // 0x2af9b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2af9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af9b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2af9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af9b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af9bc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2af9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2af9c0: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2af9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2af9c4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2af9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2af9c8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af9c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2af9cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2af9ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2af9d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2af9d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2af9d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2af9d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2af9d8: 0x2ce00  sll         $t9, $v0, 24
    ctx->pc = 0x2af9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2af9dc: 0x37600  sll         $t6, $v1, 24
    ctx->pc = 0x2af9dcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2af9e0:
    // 0x2af9e0: 0x2ec001a  div         $zero, $s7, $t4
    ctx->pc = 0x2af9e0u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2af9e4: 0x72cc001a  div1        $zero, $s6, $t4
    ctx->pc = 0x2af9e4u;
    { int32_t divisor = GPR_S32(ctx, 12); int32_t dividend = GPR_S32(ctx, 22); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2af9e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2af9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af9ec: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x2af9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2af9f0: 0xb1180  sll         $v0, $t3, 6
    ctx->pc = 0x2af9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x2af9f4: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x2af9f4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af9f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af9fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afa00: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2afa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2afa04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2afa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afa08: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AFA08u;
    {
        const bool branch_taken_0x2afa08 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afa08) {
            ctx->pc = 0x2AFA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFA08u;
            // 0x2afa0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFA10u;
            goto label_2afa10;
        }
    }
    ctx->pc = 0x2AFA10u;
label_2afa10:
    // 0x2afa10: 0x0  nop
    ctx->pc = 0x2afa10u;
    // NOP
    // 0x2afa14: 0x0  nop
    ctx->pc = 0x2afa14u;
    // NOP
    // 0x2afa18: 0x46060103  div.s       $f4, $f0, $f6
    ctx->pc = 0x2afa18u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[6];
    // 0x2afa1c: 0x827821  addu        $t7, $a0, $v0
    ctx->pc = 0x2afa1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2afa20: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2afa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2afa24: 0x82c021  addu        $t8, $a0, $v0
    ctx->pc = 0x2afa24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2afa28: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2afa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2afa2c: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x2afa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2afa30: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2afa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afa34: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2afa34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2afa38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2afa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2afa3c: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x2afa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2afa40: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2afa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2afa44: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2afa44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2afa48: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2afa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2afa4c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x2afa4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2afa50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2afa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afa54: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x2afa54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2afa58: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2afa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2afa5c: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2afa5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2afa60: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2afa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afa64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2afa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2afa68: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x2afa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2afa6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2afa6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afa70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2afa70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2afa74: 0x8fab0018  lw          $t3, 0x18($sp)
    ctx->pc = 0x2afa74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afa78: 0x2810  mfhi        $a1
    ctx->pc = 0x2afa78u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2afa7c: 0x70003010  mfhi1       $a2
    ctx->pc = 0x2afa7cu;
    SET_GPR_U64(ctx, 6, ctx->hi1);
    // 0x2afa80: 0x0  nop
    ctx->pc = 0x2afa80u;
    // NOP
    // 0x2afa84: 0x0  nop
    ctx->pc = 0x2afa84u;
    // NOP
    // 0x2afa88: 0x46060943  div.s       $f5, $f1, $f6
    ctx->pc = 0x2afa88u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[6];
    // 0x2afa8c: 0x162a021  addu        $s4, $t3, $v0
    ctx->pc = 0x2afa8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2afa90: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2afa90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2afa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2afa98: 0x8fab001c  lw          $t3, 0x1C($sp)
    ctx->pc = 0x2afa98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2afa9c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2afa9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afaa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2afaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2afaa4: 0x162a821  addu        $s5, $t3, $v0
    ctx->pc = 0x2afaa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2afaa8: 0x0  nop
    ctx->pc = 0x2afaa8u;
    // NOP
    // 0x2afaac: 0x0  nop
    ctx->pc = 0x2afaacu;
    // NOP
    // 0x2afab0: 0x46060083  div.s       $f2, $f0, $f6
    ctx->pc = 0x2afab0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[6];
    // 0x2afab4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2afab4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afab8: 0x0  nop
    ctx->pc = 0x2afab8u;
    // NOP
    // 0x2afabc: 0x0  nop
    ctx->pc = 0x2afabcu;
    // NOP
    // 0x2afac0: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2afac0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x2afac4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2afac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2afac8: 0x0  nop
    ctx->pc = 0x2afac8u;
    // NOP
    // 0x2afacc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFACCu;
    {
        const bool branch_taken_0x2afacc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFACCu;
        // 0x2afad0: 0x2964000c  slti        $a0, $t3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afacc) {
            ctx->pc = 0x2AFAD8u;
            goto label_2afad8;
        }
    }
    ctx->pc = 0x2AFAD4u;
    // 0x2afad4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2afad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_2afad8:
    // 0x2afad8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2afad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afadc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2afadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2afae0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2afae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2afae4: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x2afae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x2afae8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2afae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2afaec: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x2afaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x2afaf0: 0xe7020000  swc1        $f2, 0x0($t8)
    ctx->pc = 0x2afaf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2afaf4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2afaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2afaf8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2afaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afafc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2afafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2afb00: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2afb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2afb04: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x2afb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x2afb08: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2afb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2afb0c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2afb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2afb10: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2afb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2afb14: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2afb14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2afb18: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2afb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afb1c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2afb20: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2afb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2afb24: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x2afb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x2afb28: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x2afb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x2afb2c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2afb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2afb30: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2afb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2afb34: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2afb34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2afb38: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2afb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afb3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afb40: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2afb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2afb44: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x2afb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x2afb48: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x2afb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x2afb4c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2afb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2afb50: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x2afb50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2afb54: 0x1480ffa2  bnez        $a0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2AFB54u;
    {
        const bool branch_taken_0x2afb54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB54u;
        // 0x2afb58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb54) {
            ctx->pc = 0x2AF9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af9e0;
        }
    }
    ctx->pc = 0x2AFB5Cu;
    // 0x2afb5c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2afb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2afb60: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2afb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2afb64: 0x5440ff86  bnel        $v0, $zero, . + 4 + (-0x7A << 2)
    ctx->pc = 0x2AFB64u;
    {
        const bool branch_taken_0x2afb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afb64) {
            ctx->pc = 0x2AFB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFB64u;
            // 0x2afb68: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af980;
        }
    }
    ctx->pc = 0x2AFB6Cu;
    // 0x2afb6c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2afb6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2afb70: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2afb70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2afb74: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2afb74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2afb78: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2afb78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2afb7c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2afb7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2afb80: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2afb80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afb84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2afb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afb88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2afb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afb8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2afb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB90u;
        // 0x2afb94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFB98u;
}
