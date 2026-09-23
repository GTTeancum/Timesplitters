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

// Function: bgPortalCalcPos
// Address: 0x258108 - 0x2586bc
void bgPortalCalcPos_0x258108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgPortalCalcPos_0x258108");
#endif

    switch (ctx->pc) {
        case 0x2582d8u: goto label_2582d8;
        case 0x258398u: goto label_258398;
        case 0x2583c4u: goto label_2583c4;
        case 0x2583ccu: goto label_2583cc;
        case 0x25844cu: goto label_25844c;
        case 0x258468u: goto label_258468;
        case 0x258484u: goto label_258484;
        case 0x2584a0u: goto label_2584a0;
        case 0x2584bcu: goto label_2584bc;
        case 0x2584e8u: goto label_2584e8;
        default: break;
    }

    ctx->pc = 0x258108u;

    // 0x258108: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x25810c: 0x8f87b234  lw          $a3, -0x4DCC($gp)
    ctx->pc = 0x25810cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x258110: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x258110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x258114: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x258114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x258118: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x258118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x25811c: 0x24ca7330  addiu       $t2, $a2, 0x7330
    ctx->pc = 0x25811cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 29488));
    // 0x258120: 0xffbe0220  sd          $fp, 0x220($sp)
    ctx->pc = 0x258120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 30));
    // 0x258124: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x258124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x258128: 0xffb70210  sd          $s7, 0x210($sp)
    ctx->pc = 0x258128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 23));
    // 0x25812c: 0xffb60200  sd          $s6, 0x200($sp)
    ctx->pc = 0x25812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 22));
    // 0x258130: 0xffb501f0  sd          $s5, 0x1F0($sp)
    ctx->pc = 0x258130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 21));
    // 0x258134: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x258134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x258138: 0xffb301d0  sd          $s3, 0x1D0($sp)
    ctx->pc = 0x258138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 19));
    // 0x25813c: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x25813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
    // 0x258140: 0xffb101b0  sd          $s1, 0x1B0($sp)
    ctx->pc = 0x258140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 17));
    // 0x258144: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x258144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x258148: 0xe7b50248  swc1        $f21, 0x248($sp)
    ctx->pc = 0x258148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x25814c: 0xe7b40240  swc1        $f20, 0x240($sp)
    ctx->pc = 0x25814cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x258150: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x258150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x258154: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x258154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x258158: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x258158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25815c: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x25815cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x258160: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x258160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x258164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258168: 0xc24818  mult        $t1, $a2, $v0
    ctx->pc = 0x258168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x25816c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x25816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x258170: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x258170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258174: 0x8f82a240  lw          $v0, -0x5DC0($gp)
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x258178: 0xafa50184  sw          $a1, 0x184($sp)
    ctx->pc = 0x258178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
    // 0x25817c: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x25817cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x258180: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x258180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258184: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x258184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x258188: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x258188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25818c: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x25818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
    // 0x258190: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x258190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258194: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x258194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x258198: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258198u;
    {
        const bool branch_taken_0x258198 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258198u;
        // 0x25819c: 0xafa4018c  sw          $a0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258198) {
            ctx->pc = 0x2581A8u;
            goto label_2581a8;
        }
    }
    ctx->pc = 0x2581A0u;
    // 0x2581a0: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x2581A0u;
    {
        const bool branch_taken_0x2581a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581A0u;
        // 0x2581a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581a0) {
            ctx->pc = 0x258684u;
            goto label_258684;
        }
    }
    ctx->pc = 0x2581A8u;
label_2581a8:
    // 0x2581a8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2581a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2581ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2581acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2581b0: 0x244499f0  addiu       $a0, $v0, -0x6610
    ctx->pc = 0x2581b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2581b4: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x2581b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2581b8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2581b8u;
    { uint32_t bits = FAST_READ32(0x3299F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2581bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2581bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2581c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2581c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2581c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2581c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2581c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2581c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2581cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2581ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2581d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2581d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2581d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2581d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2581d8: 0xc485001c  lwc1        $f5, 0x1C($a0)
    ctx->pc = 0x2581d8u;
    { uint32_t bits = FAST_READ32(0x329A0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2581dc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2581dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2581e0: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2581e0u;
    { uint32_t bits = FAST_READ32(0x329A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2581e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2581e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2581e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2581e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2581ec: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x2581ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2581f0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2581f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2581f4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2581f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2581f8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2581f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2581fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2581fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258200: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x258200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x258204: 0x0  nop
    ctx->pc = 0x258204u;
    // NOP
    // 0x258208: 0x0  nop
    ctx->pc = 0x258208u;
    // NOP
    // 0x25820c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x25820cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x258210: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x258210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x258214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x258214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x258218: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x258218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25821c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25821cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258224: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x258224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x258228: 0xe781b898  swc1        $f1, -0x4768($gp)
    ctx->pc = 0x258228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949016), bits); }
    // 0x25822c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x25822cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x258230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258234: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x258234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x258238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x258238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25823c: 0x0  nop
    ctx->pc = 0x25823cu;
    // NOP
    // 0x258240: 0x0  nop
    ctx->pc = 0x258240u;
    // NOP
    // 0x258244: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x258244u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x258248: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x258248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x25824c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x258250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258254: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x258254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x258258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x258258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25825c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25825cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x258260: 0xe780b8a0  swc1        $f0, -0x4760($gp)
    ctx->pc = 0x258260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949024), bits); }
    // 0x258264: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x258264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x258268: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x258268u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x25826c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25826cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258270: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x258270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x258274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x258274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258278: 0x0  nop
    ctx->pc = 0x258278u;
    // NOP
    // 0x25827c: 0x0  nop
    ctx->pc = 0x25827cu;
    // NOP
    // 0x258280: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x258280u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x258284: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x258284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x258288: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x258288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25828c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x258290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x258294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258298: 0xe781b89c  swc1        $f1, -0x4764($gp)
    ctx->pc = 0x258298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949020), bits); }
    // 0x25829c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x25829cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2582a0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2582a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2582a4: 0x0  nop
    ctx->pc = 0x2582a4u;
    // NOP
    // 0x2582a8: 0x0  nop
    ctx->pc = 0x2582a8u;
    // NOP
    // 0x2582ac: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2582acu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2582b0: 0x18c000f3  blez        $a2, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2582B0u;
    {
        const bool branch_taken_0x2582b0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2582B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B0u;
        // 0x2582b4: 0xe780b8a4  swc1        $f0, -0x475C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582b0) {
            ctx->pc = 0x258680u;
            goto label_258680;
        }
    }
    ctx->pc = 0x2582B8u;
    // 0x2582b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2582b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2582bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2582bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2582c0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2582c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582c4: 0xafa90194  sw          $t1, 0x194($sp)
    ctx->pc = 0x2582c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 9));
    // 0x2582c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2582c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2582cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2582ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2582d0: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x2582d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2582d4: 0x0  nop
    ctx->pc = 0x2582d4u;
    // NOP
label_2582d8:
    // 0x2582d8: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x2582d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2582dc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2582dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2582e0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2582e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2582e4: 0x8f86a244  lw          $a2, -0x5DBC($gp)
    ctx->pc = 0x2582e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x2582e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2582e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2582ec: 0x8f85a230  lw          $a1, -0x5DD0($gp)
    ctx->pc = 0x2582ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x2582f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2582f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2582f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2582f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2582f8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2582f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2582fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2582fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x258300: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x258300u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258304: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x258304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x258308: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x258308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25830c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x25830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x258310: 0x50a40001  beql        $a1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x258310u;
    {
        const bool branch_taken_0x258310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x258310) {
            ctx->pc = 0x258314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258310u;
            // 0x258314: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258318u;
            goto label_258318;
        }
    }
    ctx->pc = 0x258318u;
label_258318:
    // 0x258318: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x258318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25831c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x25831cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x258320: 0xbe2818  mult        $a1, $a1, $fp
    ctx->pc = 0x258320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x258324: 0x24c67330  addiu       $a2, $a2, 0x7330
    ctx->pc = 0x258324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29488));
    // 0x258328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25832c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x25832cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x258330: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x258330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x258334: 0xaf83b8a8  sw          $v1, -0x4758($gp)
    ctx->pc = 0x258334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949032), GPR_U32(ctx, 3));
    // 0x258338: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x258338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25833c: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x25833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x258340: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x258340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x258344: 0xaf9eb8ac  sw          $fp, -0x4754($gp)
    ctx->pc = 0x258344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949036), GPR_U32(ctx, 30));
    // 0x258348: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x258348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25834c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258350: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x258350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258354: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x258354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x258358: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x258358u;
    {
        const bool branch_taken_0x258358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258358u;
        // 0x25835c: 0x25160001  addiu       $s6, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258358) {
            ctx->pc = 0x25866Cu;
            goto label_25866c;
        }
    }
    ctx->pc = 0x258360u;
    // 0x258360: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x258364: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x258368: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x258368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25836c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x25836cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x258370: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x258370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x258374: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x258374u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258378: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x258378u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x25837c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25837cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258380: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x258380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x258384: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x258384u;
    {
        const bool branch_taken_0x258384 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x258388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258384u;
        // 0x258388: 0xae440020  sw          $a0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258384) {
            ctx->pc = 0x2583FCu;
            goto label_2583fc;
        }
    }
    ctx->pc = 0x25838Cu;
    // 0x25838c: 0x25160001  addiu       $s6, $t0, 0x1
    ctx->pc = 0x25838cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x258390: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x258390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258394: 0x0  nop
    ctx->pc = 0x258394u;
    // NOP
label_258398:
    // 0x258398: 0x23e1018  mult        $v0, $s1, $fp
    ctx->pc = 0x258398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25839c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2583a0: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x2583a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2583a4: 0x8f90b8a8  lw          $s0, -0x4758($gp)
    ctx->pc = 0x2583a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949032)));
    // 0x2583a8: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x2583a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2583ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2583acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2583b0: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2583b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2583b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2583b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2583b8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2583b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2583bc: 0xc0ad53e  jal         func_2B54F8
    ctx->pc = 0x2583BCu;
    SET_GPR_U32(ctx, 31, 0x2583C4u);
    ctx->pc = 0x2583C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583BCu;
    // 0x2583c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54F8u, 0x2583BCu, 0x2583C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583C4u;
label_2583c4:
    // 0x2583c4: 0xc095f8e  jal         func_257E38
    ctx->pc = 0x2583C4u;
    SET_GPR_U32(ctx, 31, 0x2583CCu);
    ctx->pc = 0x2583C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583C4u;
    // 0x2583c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E38u, 0x2583C4u, 0x2583CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583CCu;
label_2583cc:
    // 0x2583cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2583ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2583d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2583d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2583d4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2583d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2583d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2583d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2583dc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2583dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2583e0: 0x2a3a824  and         $s5, $s5, $v1
    ctx->pc = 0x2583e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x2583e4: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x2583e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2583e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2583e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2583ec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2583ECu;
    {
        const bool branch_taken_0x2583ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2583F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583ECu;
        // 0x2583f0: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583ec) {
            ctx->pc = 0x258398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258398;
        }
    }
    ctx->pc = 0x2583F4u;
    // 0x2583f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2583F4u;
    {
        const bool branch_taken_0x2583f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583F4u;
        // 0x2583f8: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583f4) {
            ctx->pc = 0x258404u;
            goto label_258404;
        }
    }
    ctx->pc = 0x2583FCu;
label_2583fc:
    // 0x2583fc: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2583fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258400: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x258400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_258404:
    // 0x258404: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258408: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x258408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25840c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258410: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x258410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x258414: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x258414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x258418: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x258418u;
    {
        const bool branch_taken_0x258418 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258418u;
        // 0x25841c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258418) {
            ctx->pc = 0x25842Cu;
            goto label_25842c;
        }
    }
    ctx->pc = 0x258420u;
    // 0x258420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x258420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258424: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x258424u;
    {
        const bool branch_taken_0x258424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258424u;
        // 0x258428: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258424) {
            ctx->pc = 0x25866Cu;
            goto label_25866c;
        }
    }
    ctx->pc = 0x25842Cu;
label_25842c:
    // 0x25842c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x25842cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x258430: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x258430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x258434: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x258434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x258438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25843c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25843cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x258440: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x258440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258444: 0xc095fc8  jal         func_257F20
    ctx->pc = 0x258444u;
    SET_GPR_U32(ctx, 31, 0x25844Cu);
    ctx->pc = 0x258448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258444u;
    // 0x258448: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F20u, 0x258444u, 0x25844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25844Cu;
label_25844c:
    // 0x25844c: 0xc78db898  lwc1        $f13, -0x4768($gp)
    ctx->pc = 0x25844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258454: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x258454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258458: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x258458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25845c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25845cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258460: 0xc095fc8  jal         func_257F20
    ctx->pc = 0x258460u;
    SET_GPR_U32(ctx, 31, 0x258468u);
    ctx->pc = 0x258464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258460u;
    // 0x258464: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F20u, 0x258460u, 0x258468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258468u;
label_258468:
    // 0x258468: 0xc78db89c  lwc1        $f13, -0x4764($gp)
    ctx->pc = 0x258468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25846c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x258470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x258474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x258478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x258478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25847c: 0xc095fc8  jal         func_257F20
    ctx->pc = 0x25847Cu;
    SET_GPR_U32(ctx, 31, 0x258484u);
    ctx->pc = 0x258480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25847Cu;
    // 0x258480: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F20u, 0x25847Cu, 0x258484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258484u;
label_258484:
    // 0x258484: 0xc78db8a0  lwc1        $f13, -0x4760($gp)
    ctx->pc = 0x258484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25848c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258490: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x258490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x258494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x258494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258498: 0xc095fc8  jal         func_257F20
    ctx->pc = 0x258498u;
    SET_GPR_U32(ctx, 31, 0x2584A0u);
    ctx->pc = 0x25849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258498u;
    // 0x25849c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F20u, 0x258498u, 0x2584A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584A0u;
label_2584a0:
    // 0x2584a0: 0xc78db8a4  lwc1        $f13, -0x475C($gp)
    ctx->pc = 0x2584a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2584a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2584a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2584a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2584acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2584b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2584b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2584b4: 0xc095fc8  jal         func_257F20
    ctx->pc = 0x2584B4u;
    SET_GPR_U32(ctx, 31, 0x2584BCu);
    ctx->pc = 0x2584B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2584B4u;
    // 0x2584b8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F20u, 0x2584B4u, 0x2584BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584BCu;
label_2584bc:
    // 0x2584bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2584bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2584c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2584C0u;
    {
        const bool branch_taken_0x2584c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2584C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584C0u;
        // 0x2584c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584c0) {
            ctx->pc = 0x2584D0u;
            goto label_2584d0;
        }
    }
    ctx->pc = 0x2584C8u;
    // 0x2584c8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2584C8u;
    {
        const bool branch_taken_0x2584c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584C8u;
        // 0x2584cc: 0xae44002c  sw          $a0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584c8) {
            ctx->pc = 0x25866Cu;
            goto label_25866c;
        }
    }
    ctx->pc = 0x2584D0u;
label_2584d0:
    // 0x2584d0: 0x1840003c  blez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2584D0u;
    {
        const bool branch_taken_0x2584d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2584D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584D0u;
        // 0x2584d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584d0) {
            ctx->pc = 0x2585C4u;
            goto label_2585c4;
        }
    }
    ctx->pc = 0x2584D8u;
    // 0x2584d8: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2584d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2584dc: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x2584dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2584e0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2584e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2584e4: 0x0  nop
    ctx->pc = 0x2584e4u;
    // NOP
label_2584e8:
    // 0x2584e8: 0xc6e60010  lwc1        $f6, 0x10($s7)
    ctx->pc = 0x2584e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2584ec: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2584ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2584f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2584f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2584f4: 0xc6e50024  lwc1        $f5, 0x24($s7)
    ctx->pc = 0x2584f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2584f8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2584f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2584fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2584fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258500: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x258500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258504: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x258504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x258508: 0xc6e4001c  lwc1        $f4, 0x1C($s7)
    ctx->pc = 0x258508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25850c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x25850cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x258510: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x258510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x258514: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x258514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258518: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x258518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x25851c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258520: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x258520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x258524: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x258524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258528: 0x0  nop
    ctx->pc = 0x258528u;
    // NOP
    // 0x25852c: 0x0  nop
    ctx->pc = 0x25852cu;
    // NOP
    // 0x258530: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x258530u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x258534: 0x0  nop
    ctx->pc = 0x258534u;
    // NOP
    // 0x258538: 0x0  nop
    ctx->pc = 0x258538u;
    // NOP
    // 0x25853c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x25853cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x258540: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x258540u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x258544: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x258544u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x258548: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x258548u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x25854c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x25854cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x258550: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x258550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x258554: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x258554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x258558: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x258558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25855c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25855cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x258560: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x258560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258564: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x258564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x258568: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25856c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25856Cu;
    {
        const bool branch_taken_0x25856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25856c) {
            ctx->pc = 0x258570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25856Cu;
            // 0x258570: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258574u;
            goto label_258574;
        }
    }
    ctx->pc = 0x258574u;
label_258574:
    // 0x258574: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x258574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258578: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x258578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x25857c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25857cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258580: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258580u;
    {
        const bool branch_taken_0x258580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258580) {
            ctx->pc = 0x258584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258580u;
            // 0x258584: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258588u;
            goto label_258588;
        }
    }
    ctx->pc = 0x258588u;
label_258588:
    // 0x258588: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x258588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25858c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x25858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x258590: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x258590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x258594: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258594u;
    {
        const bool branch_taken_0x258594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258594) {
            ctx->pc = 0x258598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258594u;
            // 0x258598: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25859Cu;
            goto label_25859c;
        }
    }
    ctx->pc = 0x25859Cu;
label_25859c:
    // 0x25859c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2585a0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2585a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2585a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2585a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2585A8u;
    {
        const bool branch_taken_0x2585a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2585a8) {
            ctx->pc = 0x2585ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2585A8u;
            // 0x2585ac: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2585B0u;
            goto label_2585b0;
        }
    }
    ctx->pc = 0x2585B0u;
label_2585b0:
    // 0x2585b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2585b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2585b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2585b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2585b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2585b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2585bc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2585BCu;
    {
        const bool branch_taken_0x2585bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2585C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585BCu;
        // 0x2585c0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585bc) {
            ctx->pc = 0x2584E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2584e8;
        }
    }
    ctx->pc = 0x2585C4u;
label_2585c4:
    // 0x2585c4: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x2585c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2585c8: 0x4e00028  bltz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2585C8u;
    {
        const bool branch_taken_0x2585c8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2585CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585C8u;
        // 0x2585cc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585c8) {
            ctx->pc = 0x25866Cu;
            goto label_25866c;
        }
    }
    ctx->pc = 0x2585D0u;
    // 0x2585d0: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2585d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2585d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2585D4u;
    {
        const bool branch_taken_0x2585d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2585D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D4u;
        // 0x2585d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585d4) {
            ctx->pc = 0x258618u;
            goto label_258618;
        }
    }
    ctx->pc = 0x2585DCu;
    // 0x2585dc: 0x8e480024  lw          $t0, 0x24($s2)
    ctx->pc = 0x2585dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2585e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2585e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2585e4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x2585e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2585e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2585E8u;
    {
        const bool branch_taken_0x2585e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2585ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585E8u;
        // 0x2585ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585e8) {
            ctx->pc = 0x258618u;
            goto label_258618;
        }
    }
    ctx->pc = 0x2585F0u;
    // 0x2585f0: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2585f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2585f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2585f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2585f8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2585f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2585fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2585FCu;
    {
        const bool branch_taken_0x2585fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585FCu;
        // 0x258600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585fc) {
            ctx->pc = 0x258618u;
            goto label_258618;
        }
    }
    ctx->pc = 0x258604u;
    // 0x258604: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x258604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x258608: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x258608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25860c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x25860cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x258610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258610u;
    {
        const bool branch_taken_0x258610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258610u;
        // 0x258614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258610) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258618u;
label_258618:
    // 0x258618: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x258618u;
    {
        const bool branch_taken_0x258618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258618u;
        // 0x25861c: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258618) {
            ctx->pc = 0x25866Cu;
            goto label_25866c;
        }
    }
    ctx->pc = 0x258620u;
label_258620:
    // 0x258620: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x258620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258624u;
    {
        const bool branch_taken_0x258624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258624u;
        // 0x258628: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258624) {
            ctx->pc = 0x258638u;
            goto label_258638;
        }
    }
    ctx->pc = 0x25862Cu;
    // 0x25862c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x25862cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x258630: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x258630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x258634: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x258634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_258638:
    // 0x258638: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258638u;
    {
        const bool branch_taken_0x258638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258638) {
            ctx->pc = 0x25863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258638u;
            // 0x25863c: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258640u;
            goto label_258640;
        }
    }
    ctx->pc = 0x258640u;
label_258640:
    // 0x258640: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x258640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258644: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x258644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x258648: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258648u;
    {
        const bool branch_taken_0x258648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258648) {
            ctx->pc = 0x25864Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258648u;
            // 0x25864c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258650u;
            goto label_258650;
        }
    }
    ctx->pc = 0x258650u;
label_258650:
    // 0x258650: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x258650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x258654: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x258654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x258658: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258658u;
    {
        const bool branch_taken_0x258658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258658) {
            ctx->pc = 0x25865Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258658u;
            // 0x25865c: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258660u;
            goto label_258660;
        }
    }
    ctx->pc = 0x258660u;
label_258660:
    // 0x258660: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x258660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x258664: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258668: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x258668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_25866c:
    // 0x25866c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x25866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x258670: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x258670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258674: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x258674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258678: 0x1440ff17  bnez        $v0, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x258678u;
    {
        const bool branch_taken_0x258678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258678u;
        // 0x25867c: 0x8f87b234  lw          $a3, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258678) {
            ctx->pc = 0x2582D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2582d8;
        }
    }
    ctx->pc = 0x258680u;
label_258680:
    // 0x258680: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x258680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_258684:
    // 0x258684: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x258684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x258688: 0xdfbe0220  ld          $fp, 0x220($sp)
    ctx->pc = 0x258688u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x25868c: 0xdfb70210  ld          $s7, 0x210($sp)
    ctx->pc = 0x25868cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x258690: 0xdfb60200  ld          $s6, 0x200($sp)
    ctx->pc = 0x258690u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x258694: 0xdfb501f0  ld          $s5, 0x1F0($sp)
    ctx->pc = 0x258694u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x258698: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x258698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x25869c: 0xdfb301d0  ld          $s3, 0x1D0($sp)
    ctx->pc = 0x25869cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2586a0: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x2586a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2586a4: 0xdfb101b0  ld          $s1, 0x1B0($sp)
    ctx->pc = 0x2586a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2586a8: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x2586a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2586ac: 0xc7b50248  lwc1        $f21, 0x248($sp)
    ctx->pc = 0x2586acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2586b0: 0xc7b40240  lwc1        $f20, 0x240($sp)
    ctx->pc = 0x2586b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2586b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2586B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2586B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586B4u;
        // 0x2586b8: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2586BCu;
}
