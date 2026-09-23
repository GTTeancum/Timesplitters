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

// Function: lvGetPseudoRandomPadExtref
// Address: 0x228590 - 0x228be8
void lvGetPseudoRandomPadExtref_0x228590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetPseudoRandomPadExtref_0x228590");
#endif

    switch (ctx->pc) {
        case 0x228684u: goto label_228684;
        case 0x2286e0u: goto label_2286e0;
        case 0x2287d8u: goto label_2287d8;
        case 0x2288a4u: goto label_2288a4;
        case 0x228950u: goto label_228950;
        case 0x228a4cu: goto label_228a4c;
        case 0x228b1cu: goto label_228b1c;
        default: break;
    }

    ctx->pc = 0x228590u;

    // 0x228590: 0xc780a348  lwc1        $f0, -0x5CB8($gp)
    ctx->pc = 0x228590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228598: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x228598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22859c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22859cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2285a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2285a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2285a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2285a8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2285a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2285ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2285acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2285b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2285b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2285b4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2285b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2285b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2285b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285bc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2285bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2285c0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2285c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2285c4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2285c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2285c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2285c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2285cc: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x2285ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x2285d0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2285d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2285d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2285d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285d8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2285d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2285dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2285dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285e0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2285e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2285e4: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x2285e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x2285e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2285e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2285ec: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x2285ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x2285f0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2285f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2285f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2285F4u;
    {
        const bool branch_taken_0x2285f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285F4u;
        // 0x2285f8: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285f4) {
            ctx->pc = 0x22860Cu;
            goto label_22860c;
        }
    }
    ctx->pc = 0x2285FCu;
    // 0x2285fc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2285fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x228600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228608: 0x46000542  mul.s       $f21, $f0, $f0
    ctx->pc = 0x228608u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_22860c:
    // 0x22860c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x228610: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228614: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228614u;
    {
        const bool branch_taken_0x228614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228614u;
        // 0x228618: 0x3242ff00  andi        $v0, $s2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228614) {
            ctx->pc = 0x22862Cu;
            goto label_22862c;
        }
    }
    ctx->pc = 0x22861Cu;
    // 0x22861c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x228620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228628: 0x46000582  mul.s       $f22, $f0, $f0
    ctx->pc = 0x228628u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_22862c:
    // 0x22862c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x228630: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228634: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228634u;
    {
        const bool branch_taken_0x228634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228634u;
        // 0x228638: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228634) {
            ctx->pc = 0x228640u;
            goto label_228640;
        }
    }
    ctx->pc = 0x22863Cu;
    // 0x22863c: 0xc79480e0  lwc1        $f20, -0x7F20($gp)
    ctx->pc = 0x22863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_228640:
    // 0x228640: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228644: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228644u;
    {
        const bool branch_taken_0x228644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228644u;
        // 0x228648: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228644) {
            ctx->pc = 0x228650u;
            goto label_228650;
        }
    }
    ctx->pc = 0x22864Cu;
    // 0x22864c: 0xc79480e4  lwc1        $f20, -0x7F1C($gp)
    ctx->pc = 0x22864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_228650:
    // 0x228650: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228654: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228654u;
    {
        const bool branch_taken_0x228654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228654u;
        // 0x228658: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228654) {
            ctx->pc = 0x228660u;
            goto label_228660;
        }
    }
    ctx->pc = 0x22865Cu;
    // 0x22865c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22865cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_228660:
    // 0x228660: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228664: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228664u;
    {
        const bool branch_taken_0x228664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228664u;
        // 0x228668: 0x8f839f74  lw          $v1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228664) {
            ctx->pc = 0x228670u;
            goto label_228670;
        }
    }
    ctx->pc = 0x22866Cu;
    // 0x22866c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22866cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_228670:
    // 0x228670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228674: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x228674u;
    {
        const bool branch_taken_0x228674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228674) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x22867Cu;
    // 0x22867c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x22867Cu;
    SET_GPR_U32(ctx, 31, 0x228684u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x22867Cu, 0x228684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228684u;
label_228684:
    // 0x228684: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228684u;
    {
        const bool branch_taken_0x228684 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x228688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228684u;
        // 0x228688: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228684) {
            ctx->pc = 0x228698u;
            goto label_228698;
        }
    }
    ctx->pc = 0x22868Cu;
    // 0x22868c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22868cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x228690u;
    {
        const bool branch_taken_0x228690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228690u;
        // 0x228694: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228690) {
            ctx->pc = 0x2286ACu;
            goto label_2286ac;
        }
    }
    ctx->pc = 0x228698u;
label_228698:
    // 0x228698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22869c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2286a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2286a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2286a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2286a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2286a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2286a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2286ac:
    // 0x2286ac: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2286acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2286b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2286b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2286b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2286b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2286b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2286b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2286bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2286bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2286c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2286c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2286c4: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
    ctx->pc = 0x2286C4u;
    {
        const bool branch_taken_0x2286c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2286c4) {
            ctx->pc = 0x22893Cu;
            goto label_22893c;
        }
    }
    ctx->pc = 0x2286CCu;
label_2286cc:
    // 0x2286cc: 0x1a800137  blez        $s4, . + 4 + (0x137 << 2)
    ctx->pc = 0x2286CCu;
    {
        const bool branch_taken_0x2286cc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2286D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286CCu;
        // 0x2286d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286cc) {
            ctx->pc = 0x228BACu;
            goto label_228bac;
        }
    }
    ctx->pc = 0x2286D4u;
    // 0x2286d4: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x2286d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2286d8: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x2286d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2286dc: 0x0  nop
    ctx->pc = 0x2286dcu;
    // NOP
label_2286e0:
    // 0x2286e0: 0x32070001  andi        $a3, $s0, 0x1
    ctx->pc = 0x2286e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2286e4: 0x101023  negu        $v0, $s0
    ctx->pc = 0x2286e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2286e8: 0x8f85a348  lw          $a1, -0x5CB8($gp)
    ctx->pc = 0x2286e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x2286ec: 0x8c8302a8  lw          $v1, 0x2A8($a0)
    ctx->pc = 0x2286ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x2286f0: 0x207100b  movn        $v0, $s0, $a3
    ctx->pc = 0x2286f0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x2286f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2286f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2286f8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x2286f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2286fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2286fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228700: 0x8f88a2ec  lw          $t0, -0x5D14($gp)
    ctx->pc = 0x228700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x228704: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x228704u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x228708: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x228708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22870c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x22870cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x228710: 0xc541008c  lwc1        $f1, 0x8C($t2)
    ctx->pc = 0x228710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228714: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x228714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x228718: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x228718u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22871c: 0xa6180a  movz        $v1, $a1, $a2
    ctx->pc = 0x22871cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x228720: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x228720u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228724: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x228724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x228728: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x228728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22872c: 0x1039821  addu        $s3, $t0, $v1
    ctx->pc = 0x22872cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x228730: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x228730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228734: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x228734u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x228738: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x228738u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22873c: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x22873cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x228740: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x228740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228744: 0xc5400090  lwc1        $f0, 0x90($t2)
    ctx->pc = 0x228744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228748: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x228748u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22874c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x22874cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228750: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x228750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x228754: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x228754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228758: 0xc5400094  lwc1        $f0, 0x94($t2)
    ctx->pc = 0x228758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22875c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22875cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x228760: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x228760u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x228764: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x228764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x228768: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x228768u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x22876c: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x22876cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228770: 0x0  nop
    ctx->pc = 0x228770u;
    // NOP
    // 0x228774: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x228774u;
    {
        const bool branch_taken_0x228774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228774u;
        // 0x228778: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228774) {
            ctx->pc = 0x228780u;
            goto label_228780;
        }
    }
    ctx->pc = 0x22877Cu;
    // 0x22877c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22877cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228780:
    // 0x228780: 0x52200068  beql        $s1, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x228780u;
    {
        const bool branch_taken_0x228780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x228780) {
            ctx->pc = 0x228784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228780u;
            // 0x228784: 0x291800b  movn        $s0, $s4, $s1 (Delay Slot)
            if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228924u;
            goto label_228924;
        }
    }
    ctx->pc = 0x228788u;
    // 0x228788: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x228788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22878c: 0x0  nop
    ctx->pc = 0x22878cu;
    // NOP
    // 0x228790: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228790u;
    {
        const bool branch_taken_0x228790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228790) {
            ctx->pc = 0x228794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228790u;
            // 0x228794: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228798u;
            goto label_228798;
        }
    }
    ctx->pc = 0x228798u;
label_228798:
    // 0x228798: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x228798u;
    {
        const bool branch_taken_0x228798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228798u;
        // 0x22879c: 0x3c021c00  lui         $v0, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228798) {
            ctx->pc = 0x228920u;
            goto label_228920;
        }
    }
    ctx->pc = 0x2287A0u;
    // 0x2287a0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2287a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2287a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2287A4u;
    {
        const bool branch_taken_0x2287a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2287a4) {
            ctx->pc = 0x228848u;
            goto label_228848;
        }
    }
    ctx->pc = 0x2287ACu;
    // 0x2287ac: 0x0  nop
    ctx->pc = 0x2287acu;
    // NOP
    // 0x2287b0: 0x0  nop
    ctx->pc = 0x2287b0u;
    // NOP
    // 0x2287b4: 0x460c0104  c1          0xC0104
    ctx->pc = 0x2287b4u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[12]);
    // 0x2287b8: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2287b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2287bc: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2287bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2287c0: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x2287c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2287c4: 0x0  nop
    ctx->pc = 0x2287c4u;
    // NOP
    // 0x2287c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2287C8u;
    {
        const bool branch_taken_0x2287c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2287CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C8u;
        // 0x2287cc: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287c8) {
            ctx->pc = 0x2287E0u;
            goto label_2287e0;
        }
    }
    ctx->pc = 0x2287D0u;
    // 0x2287d0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2287D0u;
    SET_GPR_U32(ctx, 31, 0x2287D8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2287D0u, 0x2287D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287D8u;
label_2287d8:
    // 0x2287d8: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2287dc: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2287dcu;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_2287e0:
    // 0x2287e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2287e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2287e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2287e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2287e8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2287e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2287ec: 0x0  nop
    ctx->pc = 0x2287ecu;
    // NOP
    // 0x2287f0: 0x0  nop
    ctx->pc = 0x2287f0u;
    // NOP
    // 0x2287f4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2287f4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2287f8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2287f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2287fc: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2287fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228800: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x228800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x228804: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x228804u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x228808: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x228808u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22880c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x22880cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228810: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x228810u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x228814: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x228814u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228818: 0xc54000bc  lwc1        $f0, 0xBC($t2)
    ctx->pc = 0x228818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22881c: 0xc54500c0  lwc1        $f5, 0xC0($t2)
    ctx->pc = 0x22881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228820: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x228820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x228824: 0xc54200c4  lwc1        $f2, 0xC4($t2)
    ctx->pc = 0x228824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228828: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x228828u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x22882c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x22882cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x228830: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x228830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x228834: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x228834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x228838: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x228838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22883c: 0x0  nop
    ctx->pc = 0x22883cu;
    // NOP
    // 0x228840: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228840u;
    {
        const bool branch_taken_0x228840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228840) {
            ctx->pc = 0x228844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228840u;
            // 0x228844: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228848u;
            goto label_228848;
        }
    }
    ctx->pc = 0x228848u;
label_228848:
    // 0x228848: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x228848u;
    {
        const bool branch_taken_0x228848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228848u;
        // 0x22884c: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228848) {
            ctx->pc = 0x228920u;
            goto label_228920;
        }
    }
    ctx->pc = 0x228850u;
    // 0x228850: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228854: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x228854u;
    {
        const bool branch_taken_0x228854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228854u;
        // 0x228858: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228854) {
            ctx->pc = 0x228920u;
            goto label_228920;
        }
    }
    ctx->pc = 0x22885Cu;
    // 0x22885c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228860: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x228860u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x228864: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x228864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228868: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x228868u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22886c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x22886cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228870: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x228870u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x228874: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x228874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228878: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x228878u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x22887c: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x22887cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x228880: 0x0  nop
    ctx->pc = 0x228880u;
    // NOP
    // 0x228884: 0x0  nop
    ctx->pc = 0x228884u;
    // NOP
    // 0x228888: 0x460c0084  c1          0xC0084
    ctx->pc = 0x228888u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x22888c: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x22888cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228890: 0x0  nop
    ctx->pc = 0x228890u;
    // NOP
    // 0x228894: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x228894u;
    {
        const bool branch_taken_0x228894 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228894u;
        // 0x228898: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228894) {
            ctx->pc = 0x2288ACu;
            goto label_2288ac;
        }
    }
    ctx->pc = 0x22889Cu;
    // 0x22889c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x22889Cu;
    SET_GPR_U32(ctx, 31, 0x2288A4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x22889Cu, 0x2288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288A4u;
label_2288a4:
    // 0x2288a4: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x2288a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2288a8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2288a8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2288ac:
    // 0x2288ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2288acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2288b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2288b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2288b4: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2288b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2288b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2288b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288bc: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x2288bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2288c0: 0x0  nop
    ctx->pc = 0x2288c0u;
    // NOP
    // 0x2288c4: 0x0  nop
    ctx->pc = 0x2288c4u;
    // NOP
    // 0x2288c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2288c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2288cc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2288ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2288d0: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2288d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2288d4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x2288d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2288d8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2288d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2288dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2288dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2288e0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2288e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2288e4: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2288e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2288e8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2288e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2288ec: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2288ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2288f0: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x2288f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2288f4: 0xc44500c0  lwc1        $f5, 0xC0($v0)
    ctx->pc = 0x2288f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2288f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2288f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2288fc: 0xc44200c4  lwc1        $f2, 0xC4($v0)
    ctx->pc = 0x2288fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228900: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x228900u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x228904: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x228904u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x228908: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x22890c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x22890cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x228910: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x228910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228914: 0x0  nop
    ctx->pc = 0x228914u;
    // NOP
    // 0x228918: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228918u;
    {
        const bool branch_taken_0x228918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228918) {
            ctx->pc = 0x22891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228918u;
            // 0x22891c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228920u;
            goto label_228920;
        }
    }
    ctx->pc = 0x228920u;
label_228920:
    // 0x228920: 0x291800b  movn        $s0, $s4, $s1
    ctx->pc = 0x228920u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_228924:
    // 0x228924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x228928: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x228928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22892c: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x22892Cu;
    {
        const bool branch_taken_0x22892c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22892Cu;
        // 0x228930: 0x8f84b238  lw          $a0, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22892c) {
            ctx->pc = 0x2286E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2286e0;
        }
    }
    ctx->pc = 0x228934u;
    // 0x228934: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x228934u;
    {
        const bool branch_taken_0x228934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228934u;
        // 0x228938: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228934) {
            ctx->pc = 0x228BB0u;
            goto label_228bb0;
        }
    }
    ctx->pc = 0x22893Cu;
label_22893c:
    // 0x22893c: 0x1a80009b  blez        $s4, . + 4 + (0x9B << 2)
    ctx->pc = 0x22893Cu;
    {
        const bool branch_taken_0x22893c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x228940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22893Cu;
        // 0x228940: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22893c) {
            ctx->pc = 0x228BACu;
            goto label_228bac;
        }
    }
    ctx->pc = 0x228944u;
    // 0x228944: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x228944u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x228948: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x228948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x22894c: 0x0  nop
    ctx->pc = 0x22894cu;
    // NOP
label_228950:
    // 0x228950: 0x32070001  andi        $a3, $s0, 0x1
    ctx->pc = 0x228950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x228954: 0x101023  negu        $v0, $s0
    ctx->pc = 0x228954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x228958: 0x8f85a348  lw          $a1, -0x5CB8($gp)
    ctx->pc = 0x228958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x22895c: 0x8c8314b8  lw          $v1, 0x14B8($a0)
    ctx->pc = 0x22895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5304)));
    // 0x228960: 0x207100b  movn        $v0, $s0, $a3
    ctx->pc = 0x228960u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x228964: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228968: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x228968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22896c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228970: 0x8f89a2ec  lw          $t1, -0x5D14($gp)
    ctx->pc = 0x228970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x228974: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x228974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x228978: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x228978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22897c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x22897cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x228980: 0x2547071c  addiu       $a3, $t2, 0x71C
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1820));
    // 0x228984: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x228984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x228988: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x228988u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22898c: 0xa6180a  movz        $v1, $a1, $a2
    ctx->pc = 0x22898cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x228990: 0xc4e1008c  lwc1        $f1, 0x8C($a3)
    ctx->pc = 0x228990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228994: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x228994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x228998: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22899c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22899cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2289a0: 0x1239821  addu        $s3, $t1, $v1
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2289a4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2289a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2289a8: 0x46010141  sub.s       $f5, $f0, $f1
    ctx->pc = 0x2289a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2289ac: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2289acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2289b0: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x2289b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2289b4: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2289b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2289b8: 0xc4e00090  lwc1        $f0, 0x90($a3)
    ctx->pc = 0x2289b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2289bc: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x2289bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2289c0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2289c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2289c4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2289c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2289c8: 0xc4e20094  lwc1        $f2, 0x94($a3)
    ctx->pc = 0x2289c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2289cc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2289ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2289d0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2289d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2289d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2289d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2289d8: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2289d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2289dc: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x2289dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2289e0: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x2289e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2289e4: 0x0  nop
    ctx->pc = 0x2289e4u;
    // NOP
    // 0x2289e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2289E8u;
    {
        const bool branch_taken_0x2289e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2289ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289E8u;
        // 0x2289ec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289e8) {
            ctx->pc = 0x2289F4u;
            goto label_2289f4;
        }
    }
    ctx->pc = 0x2289F0u;
    // 0x2289f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2289f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2289f4:
    // 0x2289f4: 0x52200069  beql        $s1, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x2289F4u;
    {
        const bool branch_taken_0x2289f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2289f4) {
            ctx->pc = 0x2289F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2289F4u;
            // 0x2289f8: 0x291800b  movn        $s0, $s4, $s1 (Delay Slot)
            if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228B9Cu;
            goto label_228b9c;
        }
    }
    ctx->pc = 0x2289FCu;
    // 0x2289fc: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x2289fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228a00: 0x0  nop
    ctx->pc = 0x228a00u;
    // NOP
    // 0x228a04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228A04u;
    {
        const bool branch_taken_0x228a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228a04) {
            ctx->pc = 0x228A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228A04u;
            // 0x228a08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228A0Cu;
            goto label_228a0c;
        }
    }
    ctx->pc = 0x228A0Cu;
label_228a0c:
    // 0x228a0c: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x228A0Cu;
    {
        const bool branch_taken_0x228a0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A0Cu;
        // 0x228a10: 0x3c021c00  lui         $v0, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a0c) {
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228A14u;
    // 0x228a14: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228a18: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x228A18u;
    {
        const bool branch_taken_0x228a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a18) {
            ctx->pc = 0x228AC0u;
            goto label_228ac0;
        }
    }
    ctx->pc = 0x228A20u;
    // 0x228a20: 0x0  nop
    ctx->pc = 0x228a20u;
    // NOP
    // 0x228a24: 0x0  nop
    ctx->pc = 0x228a24u;
    // NOP
    // 0x228a28: 0x460c0084  c1          0xC0084
    ctx->pc = 0x228a28u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x228a2c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x228a2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228a30: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x228a30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228a34: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x228a34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228a38: 0x0  nop
    ctx->pc = 0x228a38u;
    // NOP
    // 0x228a3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x228A3Cu;
    {
        const bool branch_taken_0x228a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A3Cu;
        // 0x228a40: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a3c) {
            ctx->pc = 0x228A54u;
            goto label_228a54;
        }
    }
    ctx->pc = 0x228A44u;
    // 0x228a44: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x228A44u;
    SET_GPR_U32(ctx, 31, 0x228A4Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x228A44u, 0x228A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A4Cu;
label_228a4c:
    // 0x228a4c: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x228a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x228a50: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x228a50u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_228a54:
    // 0x228a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228a58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228a5c: 0x2542071c  addiu       $v0, $t2, 0x71C
    ctx->pc = 0x228a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1820));
    // 0x228a60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x228a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228a64: 0x0  nop
    ctx->pc = 0x228a64u;
    // NOP
    // 0x228a68: 0x0  nop
    ctx->pc = 0x228a68u;
    // NOP
    // 0x228a6c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x228a6cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x228a70: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x228a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228a74: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x228a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228a78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228a7c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x228a7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x228a80: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x228a80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x228a84: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x228a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228a88: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x228a88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x228a8c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x228a8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228a90: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x228a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228a94: 0xc44500c0  lwc1        $f5, 0xC0($v0)
    ctx->pc = 0x228a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228a98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228a9c: 0xc44200c4  lwc1        $f2, 0xC4($v0)
    ctx->pc = 0x228a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228aa0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x228aa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x228aa4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x228aa4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x228aa8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x228aac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x228aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x228ab0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x228ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228ab4: 0x0  nop
    ctx->pc = 0x228ab4u;
    // NOP
    // 0x228ab8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228AB8u;
    {
        const bool branch_taken_0x228ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228ab8) {
            ctx->pc = 0x228ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228AB8u;
            // 0x228abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228AC0u;
            goto label_228ac0;
        }
    }
    ctx->pc = 0x228AC0u;
label_228ac0:
    // 0x228ac0: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x228AC0u;
    {
        const bool branch_taken_0x228ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AC0u;
        // 0x228ac4: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ac0) {
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228AC8u;
    // 0x228ac8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x228ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x228acc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x228ACCu;
    {
        const bool branch_taken_0x228acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228ACCu;
        // 0x228ad0: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228acc) {
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228AD4u;
    // 0x228ad4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x228ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ad8: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x228ad8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x228adc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x228adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ae0: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x228ae0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x228ae4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x228ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228ae8: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x228ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x228aec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x228aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228af0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x228af0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x228af4: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x228af4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x228af8: 0x0  nop
    ctx->pc = 0x228af8u;
    // NOP
    // 0x228afc: 0x0  nop
    ctx->pc = 0x228afcu;
    // NOP
    // 0x228b00: 0x460c0084  c1          0xC0084
    ctx->pc = 0x228b00u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x228b04: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x228b04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b08: 0x0  nop
    ctx->pc = 0x228b08u;
    // NOP
    // 0x228b0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x228B0Cu;
    {
        const bool branch_taken_0x228b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B0Cu;
        // 0x228b10: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b0c) {
            ctx->pc = 0x228B24u;
            goto label_228b24;
        }
    }
    ctx->pc = 0x228B14u;
    // 0x228b14: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x228B14u;
    SET_GPR_U32(ctx, 31, 0x228B1Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x228B14u, 0x228B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B1Cu;
label_228b1c:
    // 0x228b1c: 0x8f8ab230  lw          $t2, -0x4DD0($gp)
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x228b20: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x228b20u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_228b24:
    // 0x228b24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228b28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228b2c: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x228b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x228b30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x228b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b34: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x228b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x228b38: 0x0  nop
    ctx->pc = 0x228b38u;
    // NOP
    // 0x228b3c: 0x0  nop
    ctx->pc = 0x228b3cu;
    // NOP
    // 0x228b40: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x228b40u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x228b44: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x228b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228b48: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x228b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228b4c: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x228b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x228b50: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x228b50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x228b54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228b58: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x228b58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x228b5c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x228b5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x228b60: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x228b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228b64: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x228b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228b68: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x228b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b6c: 0xc44500c0  lwc1        $f5, 0xC0($v0)
    ctx->pc = 0x228b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228b74: 0xc44200c4  lwc1        $f2, 0xC4($v0)
    ctx->pc = 0x228b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228b78: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x228b78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x228b7c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x228b7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x228b80: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x228b84: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x228b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x228b88: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x228b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b8c: 0x0  nop
    ctx->pc = 0x228b8cu;
    // NOP
    // 0x228b90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x228B90u;
    {
        const bool branch_taken_0x228b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b90) {
            ctx->pc = 0x228B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228B90u;
            // 0x228b94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228B98u;
label_228b98:
    // 0x228b98: 0x291800b  movn        $s0, $s4, $s1
    ctx->pc = 0x228b98u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_228b9c:
    // 0x228b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x228ba0: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x228ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x228ba4: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x228BA4u;
    {
        const bool branch_taken_0x228ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BA4u;
        // 0x228ba8: 0x8f84b238  lw          $a0, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ba4) {
            ctx->pc = 0x228950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228950;
        }
    }
    ctx->pc = 0x228BACu;
label_228bac:
    // 0x228bac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x228bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228bb0:
    // 0x228bb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228BB0u;
    {
        const bool branch_taken_0x228bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228bb0) {
            ctx->pc = 0x228BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228BB0u;
            // 0x228bb4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228BB8u;
            goto label_228bb8;
        }
    }
    ctx->pc = 0x228BB8u;
label_228bb8:
    // 0x228bb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x228bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228bbc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x228bbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228bc0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x228bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228bc4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x228bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228bc8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x228bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228bcc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x228bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228bd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x228bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228bd4: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x228bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x228bd8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x228bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228bdc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x228bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228be0: 0x3e00008  jr          $ra
    ctx->pc = 0x228BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BE0u;
        // 0x228be4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228BE8u;
}
