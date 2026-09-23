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

// Function: particleStreamTick
// Address: 0x29b410 - 0x29b890
void particleStreamTick_0x29b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleStreamTick_0x29b410");
#endif

    switch (ctx->pc) {
        case 0x29b5c0u: goto label_29b5c0;
        case 0x29b5f0u: goto label_29b5f0;
        case 0x29b64cu: goto label_29b64c;
        case 0x29b6b4u: goto label_29b6b4;
        case 0x29b730u: goto label_29b730;
        case 0x29b7d8u: goto label_29b7d8;
        default: break;
    }

    ctx->pc = 0x29b410u;

    // 0x29b410: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x29b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29b414: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29b418: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29b41c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29b420: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29b424: 0x246398c0  addiu       $v1, $v1, -0x6740
    ctx->pc = 0x29b424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940864));
    // 0x29b428: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29b42c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x29b42cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29b430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b434: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29b438: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b43c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x29b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x29b440: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x29b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x29b444: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29b448: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x29b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29b44c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29b450: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b454: 0xc62103a0  lwc1        $f1, 0x3A0($s1)
    ctx->pc = 0x29b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b458: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29b45c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x29b45cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x29b460: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x29b460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x29b464: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x29b464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29b468: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29b46c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x29b46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x29b470: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x29b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b474: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29b474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29b478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b47c: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x29b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x29b480: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x29b480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b484: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x29b484u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29b488: 0x26420063  addiu       $v0, $s2, 0x63
    ctx->pc = 0x29b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 99));
    // 0x29b48c: 0x0  nop
    ctx->pc = 0x29b48cu;
    // NOP
    // 0x29b490: 0x0  nop
    ctx->pc = 0x29b490u;
    // NOP
    // 0x29b494: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x29b494u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x29b498: 0x14c0001a  bnez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x29B498u;
    {
        const bool branch_taken_0x29b498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B498u;
        // 0x29b49c: 0x44280a  movz        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b498) {
            ctx->pc = 0x29B504u;
            goto label_29b504;
        }
    }
    ctx->pc = 0x29B4A0u;
    // 0x29b4a0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29b4a4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B4A4u;
    {
        const bool branch_taken_0x29b4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4A4u;
        // 0x29b4a8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4a4) {
            ctx->pc = 0x29B4CCu;
            goto label_29b4cc;
        }
    }
    ctx->pc = 0x29B4ACu;
    // 0x29b4ac: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x29b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b4b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29b4b4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x29b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b4b8: 0xc4400d04  lwc1        $f0, 0xD04($v0)
    ctx->pc = 0x29b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b4bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29b4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29b4c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29b4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b4c4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29B4C4u;
    {
        const bool branch_taken_0x29b4c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b4c4) {
            ctx->pc = 0x29B508u;
            goto label_29b508;
        }
    }
    ctx->pc = 0x29B4CCu;
label_29b4cc:
    // 0x29b4cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29b4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29b4d4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x29b4d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b4d8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29b4d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b4dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29b4dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b4e0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29b4e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b4e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29b4e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b4e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29b4e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b4ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b4ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b4f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29b4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b4f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b4f8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x29b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b4fc: 0x80a5ac2  j           func_296B08
    ctx->pc = 0x29B4FCu;
    ctx->pc = 0x29B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B4FCu;
    // 0x29b500: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B08u;
    particleFree_0x296b08(rdram, ctx, runtime); return;
    ctx->pc = 0x29B504u;
label_29b504:
    // 0x29b504: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29b504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29b508:
    // 0x29b508: 0xc781b460  lwc1        $f1, -0x4BA0($gp)
    ctx->pc = 0x29b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b50c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29b50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29b510: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29b510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29b514: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b518: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29b518u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29b51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29b520: 0x0  nop
    ctx->pc = 0x29b520u;
    // NOP
    // 0x29b524: 0x0  nop
    ctx->pc = 0x29b524u;
    // NOP
    // 0x29b528: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x29b528u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x29b52c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b530: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x29b530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29b534: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29b538: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29b538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29b53c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b540: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B540u;
    {
        const bool branch_taken_0x29b540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B540u;
        // 0x29b544: 0xe62003a0  swc1        $f0, 0x3A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b540) {
            ctx->pc = 0x29B54Cu;
            goto label_29b54c;
        }
    }
    ctx->pc = 0x29B548u;
    // 0x29b548: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29b548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_29b54c:
    // 0x29b54c: 0xc62103a0  lwc1        $f1, 0x3A0($s1)
    ctx->pc = 0x29b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b550: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29b554: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x29b554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29b558: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x29b558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29b55c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B55Cu;
    {
        const bool branch_taken_0x29b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B55Cu;
        // 0x29b560: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b55c) {
            ctx->pc = 0x29B57Cu;
            goto label_29b57c;
        }
    }
    ctx->pc = 0x29B564u;
    // 0x29b564: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29b568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b56c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x29b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x29b570: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29b570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29b574: 0xe62003a0  swc1        $f0, 0x3A0($s1)
    ctx->pc = 0x29b574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
    // 0x29b578: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29b578u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29b57c:
    // 0x29b57c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b57cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29b580: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x29b580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29b584: 0x0  nop
    ctx->pc = 0x29b584u;
    // NOP
    // 0x29b588: 0x12420087  beq         $s2, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x29B588u;
    {
        const bool branch_taken_0x29b588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B588u;
        // 0x29b58c: 0x26220d04  addiu       $v0, $s1, 0xD04 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b588) {
            ctx->pc = 0x29B7A8u;
            goto label_29b7a8;
        }
    }
    ctx->pc = 0x29B590u;
    // 0x29b590: 0x262303a4  addiu       $v1, $s1, 0x3A4
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 932));
    // 0x29b594: 0x26260e94  addiu       $a2, $s1, 0xE94
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3732));
    // 0x29b598: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29b598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29b59c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29b5a0: 0x263e03a8  addiu       $fp, $s1, 0x3A8
    ctx->pc = 0x29b5a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 936));
    // 0x29b5a4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x29b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x29b5a8: 0x263703ac  addiu       $s7, $s1, 0x3AC
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x29b5ac: 0x26360854  addiu       $s6, $s1, 0x854
    ctx->pc = 0x29b5acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2132));
    // 0x29b5b0: 0x26350858  addiu       $s5, $s1, 0x858
    ctx->pc = 0x29b5b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2136));
    // 0x29b5b4: 0x2634085c  addiu       $s4, $s1, 0x85C
    ctx->pc = 0x29b5b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 2140));
    // 0x29b5b8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x29b5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b5bc: 0x0  nop
    ctx->pc = 0x29b5bcu;
    // NOP
label_29b5c0:
    // 0x29b5c0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x29b5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29b5c4: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x29b5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x29b5c8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x29b5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b5cc: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x29b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x29b5d0: 0x3d01821  addu        $v1, $fp, $s0
    ctx->pc = 0x29b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x29b5d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29b5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29b5d8: 0x2f02021  addu        $a0, $s7, $s0
    ctx->pc = 0x29b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x29b5dc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b5e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x29b5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29b5e4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x29b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b5e8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B5E8u;
    SET_GPR_U32(ctx, 31, 0x29B5F0u);
    ctx->pc = 0x29B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B5E8u;
    // 0x29b5ec: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B5E8u, 0x29B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B5F0u;
label_29b5f0:
    // 0x29b5f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B5F0u;
    {
        const bool branch_taken_0x29b5f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5F0u;
        // 0x29b5f4: 0x2d02021  addu        $a0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5f0) {
            ctx->pc = 0x29B604u;
            goto label_29b604;
        }
    }
    ctx->pc = 0x29B5F8u;
    // 0x29b5f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b5fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B5FCu;
    {
        const bool branch_taken_0x29b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5FCu;
        // 0x29b600: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5fc) {
            ctx->pc = 0x29B61Cu;
            goto label_29b61c;
        }
    }
    ctx->pc = 0x29B604u;
label_29b604:
    // 0x29b604: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29b604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29b608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b60c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b614: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29b614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29b618: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29b618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29b61c:
    // 0x29b61c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b624: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b628: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b62c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29b62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b630: 0xc6620038  lwc1        $f2, 0x38($s3)
    ctx->pc = 0x29b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b634: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x29b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b638: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29b638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29b63c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b640: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x29b640u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29b644: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B644u;
    SET_GPR_U32(ctx, 31, 0x29B64Cu);
    ctx->pc = 0x29B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B644u;
    // 0x29b648: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B644u, 0x29B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B64Cu;
label_29b64c:
    // 0x29b64c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b650: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b654: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x29b654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29b658: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B658u;
    {
        const bool branch_taken_0x29b658 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B658u;
        // 0x29b65c: 0x752821  addu        $a1, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b658) {
            ctx->pc = 0x29B66Cu;
            goto label_29b66c;
        }
    }
    ctx->pc = 0x29B660u;
    // 0x29b660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29b660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b664: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B664u;
    {
        const bool branch_taken_0x29b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B664u;
        // 0x29b668: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b664) {
            ctx->pc = 0x29B684u;
            goto label_29b684;
        }
    }
    ctx->pc = 0x29B66Cu;
label_29b66c:
    // 0x29b66c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x29b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x29b670: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x29b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29b674: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b67c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29b67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29b680: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29b680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29b684:
    // 0x29b684: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b68c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b690: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b694: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29b694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b698: 0xc662003c  lwc1        $f2, 0x3C($s3)
    ctx->pc = 0x29b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b69c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x29b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b6a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29b6a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29b6a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b6a8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x29b6a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29b6ac: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B6ACu;
    SET_GPR_U32(ctx, 31, 0x29B6B4u);
    ctx->pc = 0x29B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6ACu;
    // 0x29b6b0: 0xe4a20000  swc1        $f2, 0x0($a1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B6ACu, 0x29B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6B4u;
label_29b6b4:
    // 0x29b6b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b6bc: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x29b6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29b6c0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B6C0u;
    {
        const bool branch_taken_0x29b6c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6C0u;
        // 0x29b6c4: 0x742821  addu        $a1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6c0) {
            ctx->pc = 0x29B6D4u;
            goto label_29b6d4;
        }
    }
    ctx->pc = 0x29B6C8u;
    // 0x29b6c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x29b6c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b6cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B6CCu;
    {
        const bool branch_taken_0x29b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6CCu;
        // 0x29b6d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6cc) {
            ctx->pc = 0x29B6ECu;
            goto label_29b6ec;
        }
    }
    ctx->pc = 0x29B6D4u;
label_29b6d4:
    // 0x29b6d4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x29b6d8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x29b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29b6dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b6e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29b6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29b6e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29b6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29b6ec:
    // 0x29b6ec: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b6f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b6f4: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29b6f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b6fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b700: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x29b700u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b704: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x29b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b708: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x29b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b70c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x29b70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b710: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x29b710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x29b714: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x29b718: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29b718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29b71c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b71cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b720: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x29b720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x29b724: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x29b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b728: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x29B728u;
    SET_GPR_U32(ctx, 31, 0x29B730u);
    ctx->pc = 0x29B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B728u;
    // 0x29b72c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x29B728u, 0x29B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B730u;
label_29b730:
    // 0x29b730: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x29b730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b734: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B734u;
    {
        const bool branch_taken_0x29b734 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B734u;
        // 0x29b738: 0xf02021  addu        $a0, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b734) {
            ctx->pc = 0x29B748u;
            goto label_29b748;
        }
    }
    ctx->pc = 0x29B73Cu;
    // 0x29b73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b740: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B740u;
    {
        const bool branch_taken_0x29b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B740u;
        // 0x29b744: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b740) {
            ctx->pc = 0x29B760u;
            goto label_29b760;
        }
    }
    ctx->pc = 0x29B748u;
label_29b748:
    // 0x29b748: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29b74c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29b758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29b75c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29b75cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29b760:
    // 0x29b760: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x29b764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b768: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b76c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b770: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b774: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x29b774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29b778: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29b778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b77c: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x29b77cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x29b780: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x29b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b784: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x29b784u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x29b788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29b788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b78c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x29b78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29b790: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x29b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b794: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29b798: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29b798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29b79c: 0x0  nop
    ctx->pc = 0x29b79cu;
    // NOP
    // 0x29b7a0: 0x1642ff87  bne         $s2, $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x29B7A0u;
    {
        const bool branch_taken_0x29b7a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7A0u;
        // 0x29b7a4: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7a0) {
            ctx->pc = 0x29B5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b5c0;
        }
    }
    ctx->pc = 0x29B7A8u;
label_29b7a8:
    // 0x29b7a8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29b7ac: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29B7ACu;
    {
        const bool branch_taken_0x29b7ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7ACu;
        // 0x29b7b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7ac) {
            ctx->pc = 0x29B85Cu;
            goto label_29b85c;
        }
    }
    ctx->pc = 0x29B7B4u;
    // 0x29b7b4: 0x262203a4  addiu       $v0, $s1, 0x3A4
    ctx->pc = 0x29b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 932));
    // 0x29b7b8: 0x263e03a8  addiu       $fp, $s1, 0x3A8
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 936));
    // 0x29b7bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x29b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x29b7c0: 0x263703ac  addiu       $s7, $s1, 0x3AC
    ctx->pc = 0x29b7c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x29b7c4: 0x26360854  addiu       $s6, $s1, 0x854
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2132));
    // 0x29b7c8: 0x26350858  addiu       $s5, $s1, 0x858
    ctx->pc = 0x29b7c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2136));
    // 0x29b7cc: 0x2634085c  addiu       $s4, $s1, 0x85C
    ctx->pc = 0x29b7ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 2140));
    // 0x29b7d0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29b7d4: 0x0  nop
    ctx->pc = 0x29b7d4u;
    // NOP
label_29b7d8:
    // 0x29b7d8: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x29b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b7dc: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x29b7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29b7e0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x29b7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29b7e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29b7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29b7e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x29b7ec: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x29b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x29b7f0: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x29b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x29b7f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29b7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b7f8: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b7fc: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x29b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x29b800: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x29b800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x29b804: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b804u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b808: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x29b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x29b80c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29b80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29b810: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b814: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b818: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29b818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29b81c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b820: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x29b820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29b824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b828: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b82c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29b82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29b830: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b834: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x29b834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29b838: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x29b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b83c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b840: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29b840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29b844: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b848: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x29b848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29b84c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29b850: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x29b850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b854: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x29B854u;
    {
        const bool branch_taken_0x29b854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B854u;
        // 0x29b858: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b854) {
            ctx->pc = 0x29B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b7d8;
        }
    }
    ctx->pc = 0x29B85Cu;
label_29b85c:
    // 0x29b85c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29b860: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x29b860u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b864: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29b864u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b868: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29b868u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b86c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29b86cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b870: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29b870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b874: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29b874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b878: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b87c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29b87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b884: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x29b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b888: 0x3e00008  jr          $ra
    ctx->pc = 0x29B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B888u;
        // 0x29b88c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B890u;
}
