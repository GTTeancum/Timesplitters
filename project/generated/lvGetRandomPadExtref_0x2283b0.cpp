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

// Function: lvGetRandomPadExtref
// Address: 0x2283b0 - 0x22858c
void lvGetRandomPadExtref_0x2283b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetRandomPadExtref_0x2283b0");
#endif

    switch (ctx->pc) {
        case 0x228460u: goto label_228460;
        case 0x228468u: goto label_228468;
        default: break;
    }

    ctx->pc = 0x2283b0u;

    // 0x2283b0: 0xc780a348  lwc1        $f0, -0x5CB8($gp)
    ctx->pc = 0x2283b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2283b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2283b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2283b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2283bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2283bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2283c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2283c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2283c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2283c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2283c8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2283c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2283cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2283ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2283d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2283d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2283d4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2283d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2283d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2283d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2283dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2283dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2283e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2283e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2283e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283e8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2283e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2283ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2283ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283f0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2283f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2283f4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2283f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2283f8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2283f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2283fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2283fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x228400: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x228400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x228404: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x228404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x228408: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x228408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22840c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22840Cu;
    {
        const bool branch_taken_0x22840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22840Cu;
        // 0x228410: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22840c) {
            ctx->pc = 0x228424u;
            goto label_228424;
        }
    }
    ctx->pc = 0x228414u;
    // 0x228414: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x228414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x228418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22841c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22841cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228420: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x228420u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_228424:
    // 0x228424: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x228424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x228428: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22842c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22842Cu;
    {
        const bool branch_taken_0x22842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22842Cu;
        // 0x228430: 0x3082ff00  andi        $v0, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22842c) {
            ctx->pc = 0x228444u;
            goto label_228444;
        }
    }
    ctx->pc = 0x228434u;
    // 0x228434: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x228434u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x228438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22843c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22843cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228440: 0x46000542  mul.s       $f21, $f0, $f0
    ctx->pc = 0x228440u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_228444:
    // 0x228444: 0x1a400043  blez        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x228444u;
    {
        const bool branch_taken_0x228444 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x228448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228444u;
        // 0x228448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228444) {
            ctx->pc = 0x228554u;
            goto label_228554;
        }
    }
    ctx->pc = 0x22844Cu;
    // 0x22844c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x22844cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x228450: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x228450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x228454: 0x2414001c  addiu       $s4, $zero, 0x1C
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x228458: 0x24130064  addiu       $s3, $zero, 0x64
    ctx->pc = 0x228458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22845c: 0x0  nop
    ctx->pc = 0x22845cu;
    // NOP
label_228460:
    // 0x228460: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x228460u;
    SET_GPR_U32(ctx, 31, 0x228468u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x228460u, 0x228468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228468u;
label_228468:
    // 0x228468: 0xc782a348  lwc1        $f2, -0x5CB8($gp)
    ctx->pc = 0x228468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22846c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22846cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x228470: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228470u;
    {
        const bool branch_taken_0x228470 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x228474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228470u;
        // 0x228474: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228470) {
            ctx->pc = 0x228488u;
            goto label_228488;
        }
    }
    ctx->pc = 0x228478u;
    // 0x228478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22847c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22847cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228480: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x228480u;
    {
        const bool branch_taken_0x228480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228480u;
        // 0x228484: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228480) {
            ctx->pc = 0x2284A0u;
            goto label_2284a0;
        }
    }
    ctx->pc = 0x228488u;
label_228488:
    // 0x228488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22848c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x228490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228498: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x228498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x22849c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x22849cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2284a0:
    // 0x2284a0: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2284a4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2284a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2284a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2284a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2284ac: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2284acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2284b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2284b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2284b4: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x2284b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2284b8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2284b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2284bc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2284bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2284c0: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2284c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2284c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2284c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2284c8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2284c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2284cc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2284ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2284d0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2284d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2284d4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2284d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2284d8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2284d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2284dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2284dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2284e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2284e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2284e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2284e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2284e8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2284e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2284ec: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2284ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2284f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2284f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2284f4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2284f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2284f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2284f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2284fc: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x2284fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228500: 0x0  nop
    ctx->pc = 0x228500u;
    // NOP
    // 0x228504: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x228504u;
    {
        const bool branch_taken_0x228504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228504u;
        // 0x228508: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228504) {
            ctx->pc = 0x228510u;
            goto label_228510;
        }
    }
    ctx->pc = 0x22850Cu;
    // 0x22850c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22850cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228510:
    // 0x228510: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x228510u;
    {
        const bool branch_taken_0x228510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x228514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228510u;
        // 0x228514: 0x8f829f70  lw          $v0, -0x6090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228510) {
            ctx->pc = 0x22852Cu;
            goto label_22852c;
        }
    }
    ctx->pc = 0x228518u;
    // 0x228518: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x228518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22851c: 0x0  nop
    ctx->pc = 0x22851cu;
    // NOP
    // 0x228520: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x228520u;
    {
        const bool branch_taken_0x228520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228520) {
            ctx->pc = 0x228524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228520u;
            // 0x228524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22852Cu;
            goto label_22852c;
        }
    }
    ctx->pc = 0x228528u;
    // 0x228528: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
label_22852c:
    // 0x22852c: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x22852Cu;
    {
        const bool branch_taken_0x22852c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x228530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22852Cu;
        // 0x228530: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22852c) {
            ctx->pc = 0x228540u;
            goto label_228540;
        }
    }
    ctx->pc = 0x228534u;
    // 0x228534: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x228534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x228538: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x228538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22853c: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x22853cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_228540:
    // 0x228540: 0x245800b  movn        $s0, $s2, $a1
    ctx->pc = 0x228540u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x228544: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x228548: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x228548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22854c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x22854Cu;
    {
        const bool branch_taken_0x22854c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22854c) {
            ctx->pc = 0x228460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228460;
        }
    }
    ctx->pc = 0x228554u;
label_228554:
    // 0x228554: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x228554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228558: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228558u;
    {
        const bool branch_taken_0x228558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228558) {
            ctx->pc = 0x22855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228558u;
            // 0x22855c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228560u;
            goto label_228560;
        }
    }
    ctx->pc = 0x228560u;
label_228560:
    // 0x228560: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x228560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228564: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x228564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228568: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x228568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22856c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22856cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228570: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x228570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228574: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x228574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228578: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x228578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22857c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x22857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228580: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x228580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228584: 0x3e00008  jr          $ra
    ctx->pc = 0x228584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228584u;
        // 0x228588: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22858Cu;
}
