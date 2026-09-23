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

// Function: propLineTestRoom
// Address: 0x270430 - 0x27094c
void propLineTestRoom_0x270430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propLineTestRoom_0x270430");
#endif

    switch (ctx->pc) {
        case 0x270498u: goto label_270498;
        case 0x2704a8u: goto label_2704a8;
        case 0x270520u: goto label_270520;
        case 0x2705c8u: goto label_2705c8;
        case 0x270624u: goto label_270624;
        case 0x270668u: goto label_270668;
        case 0x2706a0u: goto label_2706a0;
        case 0x270700u: goto label_270700;
        case 0x2707b8u: goto label_2707b8;
        case 0x2707dcu: goto label_2707dc;
        case 0x270850u: goto label_270850;
        case 0x270860u: goto label_270860;
        default: break;
    }

    ctx->pc = 0x270430u;

    // 0x270430: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x270430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x270434: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x270434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x270438: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x270438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x27043c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x27043cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270440: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x270440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x270444: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x270444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270448: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x270448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27044c: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x27044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x270450: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x270450u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x270454: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x270454u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270458: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x270458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x27045c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270460: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x270460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x270464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270468: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x270468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x27046c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x27046cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x270470: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x270470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x270474: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x270474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x270478: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x270478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x27047c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x27047cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x270480: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x270480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x270484: 0xafa90084  sw          $t1, 0x84($sp)
    ctx->pc = 0x270484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 9));
    // 0x270488: 0xafaa0088  sw          $t2, 0x88($sp)
    ctx->pc = 0x270488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 10));
    // 0x27048c: 0xafab008c  sw          $t3, 0x8C($sp)
    ctx->pc = 0x27048cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 11));
    // 0x270490: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x270490u;
    SET_GPR_U32(ctx, 31, 0x270498u);
    ctx->pc = 0x270494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270490u;
    // 0x270494: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x270490u, 0x270498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270498u;
label_270498:
    // 0x270498: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x270498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27049c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704a0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2704A0u;
    SET_GPR_U32(ctx, 31, 0x2704A8u);
    ctx->pc = 0x2704A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704A0u;
    // 0x2704a4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2704A0u, 0x2704A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704A8u;
label_2704a8:
    // 0x2704a8: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x2704a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2704ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2704b0: 0xc6c40004  lwc1        $f4, 0x4($s6)
    ctx->pc = 0x2704b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2704b4: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x2704b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2704b8: 0xc6c60008  lwc1        $f6, 0x8($s6)
    ctx->pc = 0x2704b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2704bc: 0x460421c2  mul.s       $f7, $f4, $f4
    ctx->pc = 0x2704bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2704c0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2704c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2704c4: 0x46063202  mul.s       $f8, $f6, $f6
    ctx->pc = 0x2704c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2704c8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2704c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2704cc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2704ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2704d0: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2704d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2704d4: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2704d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2704d8: 0xc455f934  lwc1        $f21, -0x6CC($v0)
    ctx->pc = 0x2704d8u;
    { uint32_t bits = FAST_READ32(0x3AF934u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2704dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2704dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2704e0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2704e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2704e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2704e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2704e8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2704e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2704ec: 0x46082b00  add.s       $f12, $f5, $f8
    ctx->pc = 0x2704ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x2704f0: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2704f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2704f4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2704f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2704f8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2704f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2704fc: 0x0  nop
    ctx->pc = 0x2704fcu;
    // NOP
    // 0x270500: 0x0  nop
    ctx->pc = 0x270500u;
    // NOP
    // 0x270504: 0x460c0004  c1          0xC0004
    ctx->pc = 0x270504u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x270508: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x270508u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27050c: 0x0  nop
    ctx->pc = 0x27050cu;
    // NOP
    // 0x270510: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x270510u;
    {
        const bool branch_taken_0x270510 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270510u;
        // 0x270514: 0xe7a60028  swc1        $f6, 0x28($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270510) {
            ctx->pc = 0x270520u;
            goto label_270520;
        }
    }
    ctx->pc = 0x270518u;
    // 0x270518: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x270518u;
    SET_GPR_U32(ctx, 31, 0x270520u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x270518u, 0x270520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270520u;
label_270520:
    // 0x270520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270524: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270528: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x270528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27052c: 0x0  nop
    ctx->pc = 0x27052cu;
    // NOP
    // 0x270530: 0x0  nop
    ctx->pc = 0x270530u;
    // NOP
    // 0x270534: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x270534u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x270538: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x270538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27053c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270540: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x270540u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x270544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x270544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x270548: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x270548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27054c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x27054cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270550: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x270550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270554: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x270554u;
    {
        const bool branch_taken_0x270554 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x270558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270554u;
        // 0x270558: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270554) {
            ctx->pc = 0x27057Cu;
            goto label_27057c;
        }
    }
    ctx->pc = 0x27055Cu;
    // 0x27055c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x27055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270560: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x270560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270564: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x270564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270568: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x270568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27056c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27056cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270570: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x270570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270574: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x270574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x270578: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x270578u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27057c:
    // 0x27057c: 0x8f82a270  lw          $v0, -0x5D90($gp)
    ctx->pc = 0x27057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943344)));
    // 0x270580: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x270580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x270584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270588: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27058c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x270590: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x270590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x270594: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x270594u;
    {
        const bool branch_taken_0x270594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270594u;
        // 0x270598: 0x8fa30088  lw          $v1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270594) {
            ctx->pc = 0x270658u;
            goto label_270658;
        }
    }
    ctx->pc = 0x27059Cu;
    // 0x27059c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2705a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2705a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2705a4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2705A4u;
    {
        const bool branch_taken_0x2705a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705A4u;
        // 0x2705a8: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705a4) {
            ctx->pc = 0x27065Cu;
            goto label_27065c;
        }
    }
    ctx->pc = 0x2705ACu;
    // 0x2705ac: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2705acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2705b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2705b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705b4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2705b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705b8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2705b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705bc: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2705bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2705c0: 0xc098dda  jal         func_263768
    ctx->pc = 0x2705C0u;
    SET_GPR_U32(ctx, 31, 0x2705C8u);
    ctx->pc = 0x2705C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705C0u;
    // 0x2705c4: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263768u, 0x2705C0u, 0x2705C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705C8u;
label_2705c8:
    // 0x2705c8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2705C8u;
    {
        const bool branch_taken_0x2705c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705C8u;
        // 0x2705cc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705c8) {
            ctx->pc = 0x270658u;
            goto label_270658;
        }
    }
    ctx->pc = 0x2705D0u;
    // 0x2705d0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2705d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2705d4: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x2705d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2705d8: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2705d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2705dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2705dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2705e0: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x2705e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2705e4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2705e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2705e8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2705e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2705ec: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2705ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2705f0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2705f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2705f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2705f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2705f8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2705f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2705fc: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x2705fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270600: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x270600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270604: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x270604u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x270608: 0x46001d00  add.s       $f20, $f3, $f0
    ctx->pc = 0x270608u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27060c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x27060cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270610: 0x0  nop
    ctx->pc = 0x270610u;
    // NOP
    // 0x270614: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x270614u;
    {
        const bool branch_taken_0x270614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270614u;
        // 0x270618: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270614) {
            ctx->pc = 0x270658u;
            goto label_270658;
        }
    }
    ctx->pc = 0x27061Cu;
    // 0x27061c: 0xc098dbc  jal         func_2636F0
    ctx->pc = 0x27061Cu;
    SET_GPR_U32(ctx, 31, 0x270624u);
    ctx->pc = 0x270620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27061Cu;
    // 0x270620: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2636F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2636F0u, 0x27061Cu, 0x270624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270624u;
label_270624:
    // 0x270624: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x270624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x270628: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x270628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27062c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x27062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270630: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x270630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270634: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x270634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270638: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x270638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27063c: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x27063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x270640: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x270640u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270644: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x270644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270648: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x270648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27064c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x27064cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270650: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x270650u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x270654: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x270654u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_270658:
    // 0x270658: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_27065c:
    // 0x27065c: 0x34840070  ori         $a0, $a0, 0x70
    ctx->pc = 0x27065cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)112);
    // 0x270660: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x270660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x270664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x270664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270668:
    // 0x270668: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x270668u;
    {
        const bool branch_taken_0x270668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x270668) {
            ctx->pc = 0x27066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270668u;
            // 0x27066c: 0x3c0201fd  lui         $v0, 0x1FD (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270680u;
            goto label_270680;
        }
    }
    ctx->pc = 0x270670u;
    // 0x270670: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x270670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x270674: 0x8f94b8f8  lw          $s4, -0x4708($gp)
    ctx->pc = 0x270674u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x270678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270678u;
    {
        const bool branch_taken_0x270678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270678u;
        // 0x27067c: 0x24422f60  addiu       $v0, $v0, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270678) {
            ctx->pc = 0x270688u;
            goto label_270688;
        }
    }
    ctx->pc = 0x270680u;
label_270680:
    // 0x270680: 0x8f94b8fc  lw          $s4, -0x4704($gp)
    ctx->pc = 0x270680u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x270684: 0x24423410  addiu       $v0, $v0, 0x3410
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13328));
label_270688:
    // 0x270688: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x270688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x27068c: 0x1a80008a  blez        $s4, . + 4 + (0x8A << 2)
    ctx->pc = 0x27068Cu;
    {
        const bool branch_taken_0x27068c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x270690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27068Cu;
        // 0x270690: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27068c) {
            ctx->pc = 0x2708B8u;
            goto label_2708b8;
        }
    }
    ctx->pc = 0x270694u;
    // 0x270694: 0x24970001  addiu       $s7, $a0, 0x1
    ctx->pc = 0x270694u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x270698: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x270698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x27069c: 0x0  nop
    ctx->pc = 0x27069cu;
    // NOP
label_2706a0:
    // 0x2706a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2706a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2706a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2706a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2706a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2706a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2706ac: 0x1200007b  beqz        $s0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2706ACu;
    {
        const bool branch_taken_0x2706ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706ACu;
        // 0x2706b0: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706ac) {
            ctx->pc = 0x27089Cu;
            goto label_27089c;
        }
    }
    ctx->pc = 0x2706B4u;
    // 0x2706b4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2706b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2706b8: 0x11020004  beq         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2706B8u;
    {
        const bool branch_taken_0x2706b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2706BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706B8u;
        // 0x2706bc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706b8) {
            ctx->pc = 0x2706CCu;
            goto label_2706cc;
        }
    }
    ctx->pc = 0x2706C0u;
    // 0x2706c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2706c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2706c4: 0x55020017  bnel        $t0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2706C4u;
    {
        const bool branch_taken_0x2706c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2706c4) {
            ctx->pc = 0x2706C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706C4u;
            // 0x2706c8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270724u;
            goto label_270724;
        }
    }
    ctx->pc = 0x2706CCu;
label_2706cc:
    // 0x2706cc: 0x8e0700b8  lw          $a3, 0xB8($s0)
    ctx->pc = 0x2706ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2706d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2706d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706d4: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2706D4u;
    {
        const bool branch_taken_0x2706d4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2706D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706D4u;
        // 0x2706d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706d4) {
            ctx->pc = 0x270738u;
            goto label_270738;
        }
    }
    ctx->pc = 0x2706DCu;
    // 0x2706dc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2706dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2706e0: 0x14550005  bne         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2706E0u;
    {
        const bool branch_taken_0x2706e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2706E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E0u;
        // 0x2706e4: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706e0) {
            ctx->pc = 0x2706F8u;
            goto label_2706f8;
        }
    }
    ctx->pc = 0x2706E8u;
    // 0x2706e8: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2706e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2706ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2706ECu;
    {
        const bool branch_taken_0x2706ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706ECu;
        // 0x2706f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706ec) {
            ctx->pc = 0x270740u;
            goto label_270740;
        }
    }
    ctx->pc = 0x2706F4u;
    // 0x2706f4: 0x0  nop
    ctx->pc = 0x2706f4u;
    // NOP
label_2706f8:
    // 0x2706f8: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2706fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2706fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_270700:
    // 0x270700: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x270700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x270704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x270704u;
    {
        const bool branch_taken_0x270704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270704u;
        // 0x270708: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270704) {
            ctx->pc = 0x270740u;
            goto label_270740;
        }
    }
    ctx->pc = 0x27070Cu;
    // 0x27070c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x270710: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x270714: 0x1475fffa  bne         $v1, $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270714u;
    {
        const bool branch_taken_0x270714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x270718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270714u;
        // 0x270718: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270714) {
            ctx->pc = 0x270700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270700;
        }
    }
    ctx->pc = 0x27071Cu;
    // 0x27071c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27071Cu;
    {
        const bool branch_taken_0x27071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27071Cu;
        // 0x270720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27071c) {
            ctx->pc = 0x270740u;
            goto label_270740;
        }
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x270724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270728: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x270728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27072c: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x27072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
    // 0x270730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270730u;
    {
        const bool branch_taken_0x270730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270730u;
        // 0x270734: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270730) {
            ctx->pc = 0x270740u;
            goto label_270740;
        }
    }
    ctx->pc = 0x270738u;
label_270738:
    // 0x270738: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x270738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27073c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x27073cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_270740:
    // 0x270740: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x270740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x270744: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x270744u;
    {
        const bool branch_taken_0x270744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270744u;
        // 0x270748: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270744) {
            ctx->pc = 0x2708A4u;
            goto label_2708a4;
        }
    }
    ctx->pc = 0x27074Cu;
    // 0x27074c: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x27074Cu;
    {
        const bool branch_taken_0x27074c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x270750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27074Cu;
        // 0x270750: 0x8fa30088  lw          $v1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27074c) {
            ctx->pc = 0x2708A0u;
            goto label_2708a0;
        }
    }
    ctx->pc = 0x270754u;
    // 0x270754: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x270754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x270758: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x270758u;
    {
        const bool branch_taken_0x270758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270758u;
        // 0x27075c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270758) {
            ctx->pc = 0x2708A4u;
            goto label_2708a4;
        }
    }
    ctx->pc = 0x270760u;
    // 0x270760: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x270760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x270764: 0x15040016  bne         $t0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x270764u;
    {
        const bool branch_taken_0x270764 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x270768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270764u;
        // 0x270768: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270764) {
            ctx->pc = 0x2707C0u;
            goto label_2707c0;
        }
    }
    ctx->pc = 0x27076Cu;
    // 0x27076c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x27076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x270770: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x270770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x270774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270774u;
    {
        const bool branch_taken_0x270774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270774u;
        // 0x270778: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270774) {
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x27077Cu;
    // 0x27077c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x27077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x270780: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x270780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
    // 0x270784: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x270784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x270788: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x270788u;
    {
        const bool branch_taken_0x270788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270788u;
        // 0x27078c: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270788) {
            ctx->pc = 0x2707E4u;
            goto label_2707e4;
        }
    }
    ctx->pc = 0x270790u;
label_270790:
    // 0x270790: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x270790u;
    {
        const bool branch_taken_0x270790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270790u;
        // 0x270794: 0x8fab008c  lw          $t3, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270790) {
            ctx->pc = 0x2707E4u;
            goto label_2707e4;
        }
    }
    ctx->pc = 0x270798u;
    // 0x270798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27079c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27079cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2707a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2707a4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2707a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2707a8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2707a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707ac: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2707acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2707b0: 0xc0a19c0  jal         func_286700
    ctx->pc = 0x2707B0u;
    SET_GPR_U32(ctx, 31, 0x2707B8u);
    ctx->pc = 0x2707B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707B0u;
    // 0x2707b4: 0x27aa0050  addiu       $t2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286700u, 0x2707B0u, 0x2707B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707B8u;
label_2707b8:
    // 0x2707b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2707B8u;
    {
        const bool branch_taken_0x2707b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707B8u;
        // 0x2707bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707b8) {
            ctx->pc = 0x2707E0u;
            goto label_2707e0;
        }
    }
    ctx->pc = 0x2707C0u;
label_2707c0:
    // 0x2707c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2707c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2707c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2707c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707c8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2707c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707cc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2707ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707d0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2707d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2707d4: 0xc098dda  jal         func_263768
    ctx->pc = 0x2707D4u;
    SET_GPR_U32(ctx, 31, 0x2707DCu);
    ctx->pc = 0x2707D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707D4u;
    // 0x2707d8: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263768u, 0x2707D4u, 0x2707DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707DCu;
label_2707dc:
    // 0x2707dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2707dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2707e0:
    // 0x2707e0: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x2707e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_2707e4:
    // 0x2707e4: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2707E4u;
    {
        const bool branch_taken_0x2707e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707E4u;
        // 0x2707e8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707e4) {
            ctx->pc = 0x2708A0u;
            goto label_2708a0;
        }
    }
    ctx->pc = 0x2707ECu;
    // 0x2707ec: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2707ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2707f0: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x2707f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2707f4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2707f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2707f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2707f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2707fc: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x2707fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x270800: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x270800u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x270804: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x270804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270808: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x270808u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27080c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x27080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x270810: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x270810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x270814: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x270814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x270818: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x270818u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27081c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x27081cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270820: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x270820u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x270824: 0x46001d00  add.s       $f20, $f3, $f0
    ctx->pc = 0x270824u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x270828: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x270828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27082c: 0x0  nop
    ctx->pc = 0x27082cu;
    // NOP
    // 0x270830: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x270830u;
    {
        const bool branch_taken_0x270830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270830u;
        // 0x270834: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270830) {
            ctx->pc = 0x2708A0u;
            goto label_2708a0;
        }
    }
    ctx->pc = 0x270838u;
    // 0x270838: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x270838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27083c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x270840: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270840u;
    {
        const bool branch_taken_0x270840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x270840) {
            ctx->pc = 0x270858u;
            goto label_270858;
        }
    }
    ctx->pc = 0x270848u;
    // 0x270848: 0xc0a1414  jal         func_285050
    ctx->pc = 0x270848u;
    SET_GPR_U32(ctx, 31, 0x270850u);
    ctx->pc = 0x285050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285050u, 0x270848u, 0x270850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270850u;
label_270850:
    // 0x270850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270850u;
    {
        const bool branch_taken_0x270850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270850u;
        // 0x270854: 0xc7a50040  lwc1        $f5, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270850) {
            ctx->pc = 0x270864u;
            goto label_270864;
        }
    }
    ctx->pc = 0x270858u;
label_270858:
    // 0x270858: 0xc098dbc  jal         func_2636F0
    ctx->pc = 0x270858u;
    SET_GPR_U32(ctx, 31, 0x270860u);
    ctx->pc = 0x2636F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2636F0u, 0x270858u, 0x270860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270860u;
label_270860:
    // 0x270860: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x270860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_270864:
    // 0x270864: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x270864u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x270868: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x270868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27086c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x27086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270870: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x270870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270874: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x270874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270878: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x270878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27087c: 0xafb10090  sw          $s1, 0x90($sp)
    ctx->pc = 0x27087cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 17));
    // 0x270880: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x270880u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270884: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x270884u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270888: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x270888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27088c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27088cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270890: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x270890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x270894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x270894u;
    {
        const bool branch_taken_0x270894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270894u;
        // 0x270898: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270894) {
            ctx->pc = 0x2708A0u;
            goto label_2708a0;
        }
    }
    ctx->pc = 0x27089Cu;
label_27089c:
    // 0x27089c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x27089cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2708a0:
    // 0x2708a0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2708a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2708a4:
    // 0x2708a4: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2708a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2708a8: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x2708A8u;
    {
        const bool branch_taken_0x2708a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A8u;
        // 0x2708ac: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708a8) {
            ctx->pc = 0x2706A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2706a0;
        }
    }
    ctx->pc = 0x2708B0u;
    // 0x2708b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2708B0u;
    {
        const bool branch_taken_0x2708b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708B0u;
        // 0x2708b4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708b0) {
            ctx->pc = 0x2708C0u;
            goto label_2708c0;
        }
    }
    ctx->pc = 0x2708B8u;
label_2708b8:
    // 0x2708b8: 0x24970001  addiu       $s7, $a0, 0x1
    ctx->pc = 0x2708b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2708bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2708bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2708c0:
    // 0x2708c0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2708c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2708c4: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2708C4u;
    {
        const bool branch_taken_0x2708c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2708C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708C4u;
        // 0x2708c8: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708c4) {
            ctx->pc = 0x270668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270668;
        }
    }
    ctx->pc = 0x2708CCu;
    // 0x2708cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2708CCu;
    {
        const bool branch_taken_0x2708cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708CCu;
        // 0x2708d0: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708cc) {
            ctx->pc = 0x270914u;
            goto label_270914;
        }
    }
    ctx->pc = 0x2708D4u;
    // 0x2708d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708D4u;
    {
        const bool branch_taken_0x2708d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708D4u;
        // 0x2708d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708d4) {
            ctx->pc = 0x2708F0u;
            goto label_2708f0;
        }
    }
    ctx->pc = 0x2708DCu;
    // 0x2708dc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2708dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2708e0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2708e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2708e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2708e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2708e8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2708e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2708ec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2708ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2708f0:
    // 0x2708f0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2708f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2708f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708F4u;
    {
        const bool branch_taken_0x2708f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708F4u;
        // 0x2708f8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708f4) {
            ctx->pc = 0x270910u;
            goto label_270910;
        }
    }
    ctx->pc = 0x2708FCu;
    // 0x2708fc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2708fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270900: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x270900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270904: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x270904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x270908: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x270908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x27090c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x27090cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_270910:
    // 0x270910: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_270914:
    // 0x270914: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x270914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x270918: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x270918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27091c: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x27091cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x270920: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x270920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x270924: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x270924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x270928: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x270928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27092c: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x27092cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x270930: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x270930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x270934: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x270934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x270938: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x270938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27093c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x27093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x270940: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x270940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270944: 0x3e00008  jr          $ra
    ctx->pc = 0x270944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270944u;
        // 0x270948: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27094Cu;
}
