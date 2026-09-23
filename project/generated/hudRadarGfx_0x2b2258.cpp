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

// Function: hudRadarGfx
// Address: 0x2b2258 - 0x2b2944
void hudRadarGfx_0x2b2258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudRadarGfx_0x2b2258");
#endif

    switch (ctx->pc) {
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b2448u: goto label_2b2448;
        case 0x2b24c4u: goto label_2b24c4;
        case 0x2b24f0u: goto label_2b24f0;
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25dcu: goto label_2b25dc;
        case 0x2b26a8u: goto label_2b26a8;
        case 0x2b2794u: goto label_2b2794;
        case 0x2b279cu: goto label_2b279c;
        case 0x2b27fcu: goto label_2b27fc;
        case 0x2b2808u: goto label_2b2808;
        case 0x2b28e4u: goto label_2b28e4;
        default: break;
    }

    ctx->pc = 0x2b2258u;

    // 0x2b2258: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x2b2258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x2b225c: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b2260: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x2b2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x2b2264: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x2b2264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x2b2268: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b2268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b226c: 0xe7b70268  swc1        $f23, 0x268($sp)
    ctx->pc = 0x2b226cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2b2270: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x2b2270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x2b2274: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x2b2274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x2b2278: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x2b2278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x2b227c: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x2b227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x2b2280: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x2b2280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x2b2284: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x2b2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x2b2288: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x2b2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x2b228c: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x2b228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x2b2290: 0xe7b90278  swc1        $f25, 0x278($sp)
    ctx->pc = 0x2b2290u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2b2294: 0xe7b80270  swc1        $f24, 0x270($sp)
    ctx->pc = 0x2b2294u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2b2298: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x2b2298u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2b229c: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x2b229cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2b22a0: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x2b22a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2b22a4: 0xc7818fac  lwc1        $f1, -0x7054($gp)
    ctx->pc = 0x2b22a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b22a8: 0xc4c00114  lwc1        $f0, 0x114($a2)
    ctx->pc = 0x2b22a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b22ac: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2b22acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2b22b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b22b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b22b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b22b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b22b8: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x2b22b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2b22bc: 0x8f87b59c  lw          $a3, -0x4A64($gp)
    ctx->pc = 0x2b22bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2b22c0: 0x0  nop
    ctx->pc = 0x2b22c0u;
    // NOP
    // 0x2b22c4: 0x0  nop
    ctx->pc = 0x2b22c4u;
    // NOP
    // 0x2b22c8: 0x460205c3  div.s       $f23, $f0, $f2
    ctx->pc = 0x2b22c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[23] = ctx->f[0] / ctx->f[2];
    // 0x2b22cc: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2b22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2b22d0: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B22D0u;
    {
        const bool branch_taken_0x2b22d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22D0u;
        // 0x2b22d4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22d0) {
            ctx->pc = 0x2B2410u;
            goto label_2b2410;
        }
    }
    ctx->pc = 0x2B22D8u;
    // 0x2b22d8: 0x3c1701ff  lui         $s7, 0x1FF
    ctx->pc = 0x2b22d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)511 << 16));
    // 0x2b22dc: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2b22dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
label_2b22e0:
    // 0x2b22e0: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2b22e4: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2b22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2b22e8: 0x2a2a018  mult        $s4, $s5, $v0
    ctx->pc = 0x2b22e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2b22ec: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2b22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b22f0: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x2b22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2b22f4: 0x12a40004  beq         $s5, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B22F4u;
    {
        const bool branch_taken_0x2b22f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22F4u;
        // 0x2b22f8: 0x8c450bcc  lw          $a1, 0xBCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22f4) {
            ctx->pc = 0x2B2308u;
            goto label_2b2308;
        }
    }
    ctx->pc = 0x2B22FCu;
    // 0x2b22fc: 0x8c420a9c  lw          $v0, 0xA9C($v0)
    ctx->pc = 0x2b22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x2b2300: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2300u;
    {
        const bool branch_taken_0x2b2300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2300) {
            ctx->pc = 0x2B2304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2300u;
            // 0x2b2304: 0xc4c10094  lwc1        $f1, 0x94($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2320u;
            goto label_2b2320;
        }
    }
    ctx->pc = 0x2B2308u;
label_2b2308:
    // 0x2b2308: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b230c: 0x26e3a940  addiu       $v1, $s7, -0x56C0
    ctx->pc = 0x2b230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945088));
    // 0x2b2310: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2b2310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b2314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b2314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b2318: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2B2318u;
    {
        const bool branch_taken_0x2b2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2318u;
        // 0x2b231c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2318) {
            ctx->pc = 0x2B23F4u;
            goto label_2b23f4;
        }
    }
    ctx->pc = 0x2B2320u;
label_2b2320:
    // 0x2b2320: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2324: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x2b2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2328: 0x2a28018  mult        $s0, $s5, $v0
    ctx->pc = 0x2b2328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b232c: 0xc4c0008c  lwc1        $f0, 0x8C($a2)
    ctx->pc = 0x2b232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2330: 0x26f3a940  addiu       $s3, $s7, -0x56C0
    ctx->pc = 0x2b2330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945088));
    // 0x2b2334: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b2334u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b2338: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x2b2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b233c: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2b2340: 0x46001d41  sub.s       $f21, $f3, $f0
    ctx->pc = 0x2b2340u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b2344: 0x46001507  neg.s       $f20, $f2
    ctx->pc = 0x2b2344u;
    ctx->f[20] = FPU_NEG_S(ctx->f[2]);
    // 0x2b2348: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2b2348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2b234c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b234cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b2350: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2b2350u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b2354: 0x0  nop
    ctx->pc = 0x2b2354u;
    // NOP
    // 0x2b2358: 0x0  nop
    ctx->pc = 0x2b2358u;
    // NOP
    // 0x2b235c: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2b235cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b2360: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2b2360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2364: 0x0  nop
    ctx->pc = 0x2b2364u;
    // NOP
    // 0x2b2368: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2368u;
    {
        const bool branch_taken_0x2b2368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2368u;
        // 0x2b236c: 0x2029021  addu        $s2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2368) {
            ctx->pc = 0x2B237Cu;
            goto label_2b237c;
        }
    }
    ctx->pc = 0x2B2370u;
    // 0x2b2370: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B2370u;
    SET_GPR_U32(ctx, 31, 0x2B2378u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B2370u, 0x2B2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2378u;
label_2b2378:
    // 0x2b2378: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2b2378u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2b237c:
    // 0x2b237c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2b237cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2b2380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2384: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b2384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b2388: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b2388u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b238c: 0x0  nop
    ctx->pc = 0x2b238cu;
    // NOP
    // 0x2b2390: 0x0  nop
    ctx->pc = 0x2b2390u;
    // NOP
    // 0x2b2394: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2b2394u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2b2398: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2B2398u;
    SET_GPR_U32(ctx, 31, 0x2B23A0u);
    ctx->pc = 0x2B239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2398u;
    // 0x2b239c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2B2398u, 0x2B23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23A0u;
label_2b23a0:
    // 0x2b23a0: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x2b23a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x2b23a4: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2b23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2b23a8: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2b23a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2b23ac: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x2b23acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2b23b0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2b23b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b23b4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B23B4u;
    {
        const bool branch_taken_0x2b23b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23B4u;
        // 0x2b23b8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23b4) {
            ctx->pc = 0x2B23DCu;
            goto label_2b23dc;
        }
    }
    ctx->pc = 0x2B23BCu;
    // 0x2b23bc: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2b23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2b23c0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x2b23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2b23c4: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x2b23c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2b23c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2b23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b23cc: 0x8f87b59c  lw          $a3, -0x4A64($gp)
    ctx->pc = 0x2b23ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2b23d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b23d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B23D4u;
    {
        const bool branch_taken_0x2b23d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23D4u;
        // 0x2b23d8: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23d4) {
            ctx->pc = 0x2B23F4u;
            goto label_2b23f4;
        }
    }
    ctx->pc = 0x2B23DCu;
label_2b23dc:
    // 0x2b23dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b23e0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x2b23e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2b23e4: 0x8c43c384  lw          $v1, -0x3C7C($v0)
    ctx->pc = 0x2b23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C384u));
    // 0x2b23e8: 0x8f889f74  lw          $t0, -0x608C($gp)
    ctx->pc = 0x2b23e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2b23ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2b23ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2b23f0: 0x8f87b59c  lw          $a3, -0x4A64($gp)
    ctx->pc = 0x2b23f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2b23f4:
    // 0x2b23f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b23f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b23f8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2b23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2b23fc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2b23fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b2400: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2B2400u;
    {
        const bool branch_taken_0x2b2400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2400u;
        // 0x2b2404: 0x8f86b234  lw          $a2, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2400) {
            ctx->pc = 0x2B22E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b22e0;
        }
    }
    ctx->pc = 0x2B2408u;
    // 0x2b2408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2408u;
    {
        const bool branch_taken_0x2b2408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2408u;
        // 0x2b240c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2408) {
            ctx->pc = 0x2B2418u;
            goto label_2b2418;
        }
    }
    ctx->pc = 0x2B2410u;
label_2b2410:
    // 0x2b2410: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2b2410u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x2b2414: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2b2414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2b2418:
    // 0x2b2418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b241c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2b241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b2420: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2420u;
    {
        const bool branch_taken_0x2b2420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2420u;
        // 0x2b2424: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2420) {
            ctx->pc = 0x2B2430u;
            goto label_2b2430;
        }
    }
    ctx->pc = 0x2B2428u;
    // 0x2b2428: 0x14820041  bne         $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B2428u;
    {
        const bool branch_taken_0x2b2428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2428u;
        // 0x2b242c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2428) {
            ctx->pc = 0x2B2530u;
            goto label_2b2530;
        }
    }
    ctx->pc = 0x2B2430u;
label_2b2430:
    // 0x2b2430: 0x8f85b4e8  lw          $a1, -0x4B18($gp)
    ctx->pc = 0x2b2430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
    // 0x2b2434: 0x18a0003d  blez        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B2434u;
    {
        const bool branch_taken_0x2b2434 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2434u;
        // 0x2b2438: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2434) {
            ctx->pc = 0x2B252Cu;
            goto label_2b252c;
        }
    }
    ctx->pc = 0x2B243Cu;
    // 0x2b243c: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x2b243cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x2b2440: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2b2440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2b2444: 0x0  nop
    ctx->pc = 0x2b2444u;
    // NOP
label_2b2448:
    // 0x2b2448: 0x26c22028  addiu       $v0, $s6, 0x2028
    ctx->pc = 0x2b2448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8232));
    // 0x2b244c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2450: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2454: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b2454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b2458: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b2458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b245c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2B245Cu;
    {
        const bool branch_taken_0x2b245c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B245Cu;
        // 0x2b2460: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b245c) {
            ctx->pc = 0x2B251Cu;
            goto label_2b251c;
        }
    }
    ctx->pc = 0x2B2464u;
    // 0x2b2464: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b2464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2468: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x2b2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b246c: 0x2a28018  mult        $s0, $s5, $v0
    ctx->pc = 0x2b246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b2470: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x2b2470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2474: 0x3c1701ff  lui         $s7, 0x1FF
    ctx->pc = 0x2b2474u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)511 << 16));
    // 0x2b2478: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x2b2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b247c: 0x26f4a940  addiu       $s4, $s7, -0x56C0
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945088));
    // 0x2b2480: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b2480u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b2484: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x2b2484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2488: 0x26820004  addiu       $v0, $s4, 0x4
    ctx->pc = 0x2b2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2b248c: 0x46001d41  sub.s       $f21, $f3, $f0
    ctx->pc = 0x2b248cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b2490: 0x46001507  neg.s       $f20, $f2
    ctx->pc = 0x2b2490u;
    ctx->f[20] = FPU_NEG_S(ctx->f[2]);
    // 0x2b2494: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2b2494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2b2498: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b2498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b249c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2b249cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b24a0: 0x0  nop
    ctx->pc = 0x2b24a0u;
    // NOP
    // 0x2b24a4: 0x0  nop
    ctx->pc = 0x2b24a4u;
    // NOP
    // 0x2b24a8: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2b24a8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b24ac: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2b24acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b24b0: 0x0  nop
    ctx->pc = 0x2b24b0u;
    // NOP
    // 0x2b24b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B24B4u;
    {
        const bool branch_taken_0x2b24b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24B4u;
        // 0x2b24b8: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24b4) {
            ctx->pc = 0x2B24C8u;
            goto label_2b24c8;
        }
    }
    ctx->pc = 0x2B24BCu;
    // 0x2b24bc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B24BCu;
    SET_GPR_U32(ctx, 31, 0x2B24C4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B24BCu, 0x2B24C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24C4u;
label_2b24c4:
    // 0x2b24c4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2b24c4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2b24c8:
    // 0x2b24c8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2b24cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b24ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b24d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b24d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b24d4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b24d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b24d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b24d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b24dc: 0x0  nop
    ctx->pc = 0x2b24dcu;
    // NOP
    // 0x2b24e0: 0x0  nop
    ctx->pc = 0x2b24e0u;
    // NOP
    // 0x2b24e4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2b24e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2b24e8: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2B24E8u;
    SET_GPR_U32(ctx, 31, 0x2B24F0u);
    ctx->pc = 0x2B24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24E8u;
    // 0x2b24ec: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2B24E8u, 0x2B24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24F0u;
label_2b24f0:
    // 0x2b24f0: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x2b24f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2b24f4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x2b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x2b24f8: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x2b24f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x2b24fc: 0x34637f80  ori         $v1, $v1, 0x7F80
    ctx->pc = 0x2b24fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32640);
    // 0x2b2500: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x2b2500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2b2504: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x2b2504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2b2508: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x2b2508u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2b250c: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2b250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2b2510: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2b2510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2b2514: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b2514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b2518: 0x8f85b4e8  lw          $a1, -0x4B18($gp)
    ctx->pc = 0x2b2518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
label_2b251c:
    // 0x2b251c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b251cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b2520: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x2b2520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2b2524: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2B2524u;
    {
        const bool branch_taken_0x2b2524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2524u;
        // 0x2b2528: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2524) {
            ctx->pc = 0x2B2448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2448;
        }
    }
    ctx->pc = 0x2B252Cu;
label_2b252c:
    // 0x2b252c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2b252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2b2530:
    // 0x2b2530: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b2530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b2534: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2b2534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b2538: 0x14640033  bne         $v1, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B2538u;
    {
        const bool branch_taken_0x2b2538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2538u;
        // 0x2b253c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2538) {
            ctx->pc = 0x2B2608u;
            goto label_2b2608;
        }
    }
    ctx->pc = 0x2B2540u;
    // 0x2b2540: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b2540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b2544: 0x8c442010  lw          $a0, 0x2010($v0)
    ctx->pc = 0x2b2544u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x382010u));
    // 0x2b2548: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B2548u;
    {
        const bool branch_taken_0x2b2548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2548u;
        // 0x2b254c: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2548) {
            ctx->pc = 0x2B2604u;
            goto label_2b2604;
        }
    }
    ctx->pc = 0x2B2550u;
    // 0x2b2550: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b2550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2554: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x2b2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2558: 0x2a28018  mult        $s0, $s5, $v0
    ctx->pc = 0x2b2558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b255c: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x2b255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2560: 0x3c1701ff  lui         $s7, 0x1FF
    ctx->pc = 0x2b2560u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)511 << 16));
    // 0x2b2564: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x2b2564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2568: 0x26f2a940  addiu       $s2, $s7, -0x56C0
    ctx->pc = 0x2b2568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945088));
    // 0x2b256c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b256cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b2570: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x2b2570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2574: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2b2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b2578: 0x46001d41  sub.s       $f21, $f3, $f0
    ctx->pc = 0x2b2578u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b257c: 0x46001507  neg.s       $f20, $f2
    ctx->pc = 0x2b257cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[2]);
    // 0x2b2580: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2b2580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2b2584: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b2584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2b2588: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2b2588u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b258c: 0x0  nop
    ctx->pc = 0x2b258cu;
    // NOP
    // 0x2b2590: 0x0  nop
    ctx->pc = 0x2b2590u;
    // NOP
    // 0x2b2594: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2b2594u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b2598: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2b2598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b259c: 0x0  nop
    ctx->pc = 0x2b259cu;
    // NOP
    // 0x2b25a0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B25A0u;
    {
        const bool branch_taken_0x2b25a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25A0u;
        // 0x2b25a4: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25a0) {
            ctx->pc = 0x2B25B4u;
            goto label_2b25b4;
        }
    }
    ctx->pc = 0x2B25A8u;
    // 0x2b25a8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B25A8u;
    SET_GPR_U32(ctx, 31, 0x2B25B0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B25A8u, 0x2B25B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25B0u;
label_2b25b0:
    // 0x2b25b0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2b25b0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2b25b4:
    // 0x2b25b4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2b25b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2b25b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b25b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b25bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b25c0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b25c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b25c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b25c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b25c8: 0x0  nop
    ctx->pc = 0x2b25c8u;
    // NOP
    // 0x2b25cc: 0x0  nop
    ctx->pc = 0x2b25ccu;
    // NOP
    // 0x2b25d0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2b25d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2b25d4: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x2B25D4u;
    SET_GPR_U32(ctx, 31, 0x2B25DCu);
    ctx->pc = 0x2B25D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25D4u;
    // 0x2b25d8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x2B25D4u, 0x2B25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25DCu;
label_2b25dc:
    // 0x2b25dc: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x2b25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2b25e0: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x2b25e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x2b25e4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x2b25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x2b25e8: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x2b25e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2b25ec: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x2b25ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2b25f0: 0x34637f80  ori         $v1, $v1, 0x7F80
    ctx->pc = 0x2b25f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32640);
    // 0x2b25f4: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x2b25f4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2b25f8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2b25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b25fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b25fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b2600: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2b2600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2b2604:
    // 0x2b2604: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b2604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2b2608:
    // 0x2b2608: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2b2608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2b260c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2b260cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2b2610: 0x244499f0  addiu       $a0, $v0, -0x6610
    ctx->pc = 0x2b2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2b2614: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2b2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2b2618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2618u;
    {
        const bool branch_taken_0x2b2618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2618u;
        // 0x2b261c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2618) {
            ctx->pc = 0x2B2628u;
            goto label_2b2628;
        }
    }
    ctx->pc = 0x2B2620u;
    // 0x2b2620: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2b2620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2b2624: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2b2624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2b2628:
    // 0x2b2628: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b2628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b262c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2b262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b2630: 0x24655c60  addiu       $a1, $v1, 0x5C60
    ctx->pc = 0x2b2630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2b2634: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b2634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b2638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b263c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b2640: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x2b2640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2b2644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b2648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b264c: 0x4600c582  mul.s       $f22, $f24, $f0
    ctx->pc = 0x2b264cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2b2650: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2b2650u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2b2654: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b2654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b2658: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b2658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b265c: 0xc7858fb0  lwc1        $f5, -0x7050($gp)
    ctx->pc = 0x2b265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b2660: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2b2660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2b2664: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2b2664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2b2668: 0x46160d40  add.s       $f21, $f1, $f22
    ctx->pc = 0x2b2668u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x2b266c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2b266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2b2670: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b2670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b2674: 0x46181501  sub.s       $f20, $f2, $f24
    ctx->pc = 0x2b2674u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[24]);
    // 0x2b2678: 0xc7838fb4  lwc1        $f3, -0x704C($gp)
    ctx->pc = 0x2b2678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b267c: 0x4616b640  add.s       $f25, $f22, $f22
    ctx->pc = 0x2b267cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x2b2680: 0x3c0141b4  lui         $at, 0x41B4
    ctx->pc = 0x2b2680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16820 << 16));
    // 0x2b2684: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b2684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b2688: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b268c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b268cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b2690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2694: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2698: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2b2698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b269c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2b269cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b26a0: 0x3484007f  ori         $a0, $a0, 0x7F
    ctx->pc = 0x2b26a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)127);
    // 0x2b26a4: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2b26a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_2b26a8:
    // 0x2b26a8: 0x4605b802  mul.s       $f0, $f23, $f5
    ctx->pc = 0x2b26a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[5]);
    // 0x2b26ac: 0x0  nop
    ctx->pc = 0x2b26acu;
    // NOP
    // 0x2b26b0: 0x0  nop
    ctx->pc = 0x2b26b0u;
    // NOP
    // 0x2b26b4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2b26b4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2b26b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b26b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b26bc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2b26bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2b26c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b26c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b26c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b26c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b26c8: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2b26cc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b26d0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2b26d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2b26d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b26d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b26dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b26e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b26e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b26e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b26e8: 0x1649000f  bne         $s2, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B26E8u;
    {
        const bool branch_taken_0x2b26e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 9));
        ctx->pc = 0x2B26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26E8u;
        // 0x2b26ec: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26e8) {
            ctx->pc = 0x2B2728u;
            goto label_2b2728;
        }
    }
    ctx->pc = 0x2B26F0u;
    // 0x2b26f0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2b26f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b26f4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2b26f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b26f8: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x2b26f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b26fc: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x2b26fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b2700: 0x6baa0027  ldl         $t2, 0x27($sp)
    ctx->pc = 0x2b2700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2b2704: 0x6faa0020  ldr         $t2, 0x20($sp)
    ctx->pc = 0x2b2704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2b2708: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2b2708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b270c: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2b270cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2710: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x2b2710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2714: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x2b2714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2718: 0xb22a0017  sdl         $t2, 0x17($s1)
    ctx->pc = 0x2b2718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b271c: 0xb62a0010  sdr         $t2, 0x10($s1)
    ctx->pc = 0x2b271cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2720: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B2720u;
    {
        const bool branch_taken_0x2b2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2720u;
        // 0x2b2724: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2720) {
            ctx->pc = 0x2B2774u;
            goto label_2b2774;
        }
    }
    ctx->pc = 0x2B2728u;
label_2b2728:
    // 0x2b2728: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b2728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b272c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2b272cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2b2730: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b2730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b2734: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2b2734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2b2738: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2b2738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x2b273c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b273cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b2740: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2744: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x2b2744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x2b2748: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x2b2748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x2b274c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b274cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b2750: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x2b2750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x2b2754: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b2754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b2758: 0x460001e4  .word       0x460001E4                   # cvt.w.s     $f7, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x2b275c: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x2b275cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b2760: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b2760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b2764: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b2768: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b2768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b276c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b276cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b2770: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b2770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b2774:
    // 0x2b2774: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x2b2774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2b2778: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2B2778u;
    {
        const bool branch_taken_0x2b2778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2778u;
        // 0x2b277c: 0x4602bdc0  add.s       $f23, $f23, $f2 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2778) {
            ctx->pc = 0x2B26A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b26a8;
        }
    }
    ctx->pc = 0x2B2780u;
    // 0x2b2780: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b2780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2784: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2b2784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b2788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b278c: 0xc0ae284  jal         func_2B8A10
    ctx->pc = 0x2B278Cu;
    SET_GPR_U32(ctx, 31, 0x2B2794u);
    ctx->pc = 0x2B2790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B278Cu;
    // 0x2b2790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x2B278Cu, 0x2B2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2794u;
label_2b2794:
    // 0x2b2794: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2B2794u;
    SET_GPR_U32(ctx, 31, 0x2B279Cu);
    ctx->pc = 0x2B2798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2794u;
    // 0x2b2798: 0x8f84b9a4  lw          $a0, -0x465C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B2794u, 0x2B279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B279Cu;
label_2b279c:
    // 0x2b279c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b27a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b27a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b27a4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2b27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2b27a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b27ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b27acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b27b0: 0x34427f80  ori         $v0, $v0, 0x7F80
    ctx->pc = 0x2b27b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
    // 0x2b27b4: 0x4601a080  add.s       $f2, $f20, $f1
    ctx->pc = 0x2b27b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2b27b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b27bc: 0x4600a8c0  add.s       $f3, $f21, $f0
    ctx->pc = 0x2b27bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2b27c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b27c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b27c4: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x2b27c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2b27c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b27c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b27cc: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2b27ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2b27d0: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x2b27d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b27d4: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b27d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2b27d8: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x2b27d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b27dc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b27dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b27e0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2b27e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b27e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b27e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b27e8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2b27e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b27ec: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b27ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b27f0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b27f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b27f4: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x2B27F4u;
    SET_GPR_U32(ctx, 31, 0x2B27FCu);
    ctx->pc = 0x2B27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27F4u;
    // 0x2b27f8: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x2B27F4u, 0x2B27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B27FCu;
label_2b27fc:
    // 0x2b27fc: 0x1aa0003d  blez        $s5, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B27FCu;
    {
        const bool branch_taken_0x2b27fc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27FCu;
        // 0x2b2800: 0x3c1701ff  lui         $s7, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27fc) {
            ctx->pc = 0x2B28F4u;
            goto label_2b28f4;
        }
    }
    ctx->pc = 0x2B2804u;
    // 0x2b2804: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b2804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b2808:
    // 0x2b2808: 0x26e4a940  addiu       $a0, $s7, -0x56C0
    ctx->pc = 0x2b2808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945088));
    // 0x2b280c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2b280cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b2810: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2b2810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b2814: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2b2814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b2818: 0x11000032  beqz        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B2818u;
    {
        const bool branch_taken_0x2b2818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2818u;
        // 0x2b281c: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2818) {
            ctx->pc = 0x2B28E4u;
            goto label_2b28e4;
        }
    }
    ctx->pc = 0x2B2820u;
    // 0x2b2820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2824: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2b2824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b2828: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2b2828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b282c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2b282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b2830: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x2b2830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2834: 0x0  nop
    ctx->pc = 0x2b2834u;
    // NOP
    // 0x2b2838: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2838u;
    {
        const bool branch_taken_0x2b2838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2838) {
            ctx->pc = 0x2B283Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2838u;
            // 0x2b283c: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2854u;
            goto label_2b2854;
        }
    }
    ctx->pc = 0x2B2840u;
    // 0x2b2840: 0x3c085050  lui         $t0, 0x5050
    ctx->pc = 0x2b2840u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20560 << 16));
    // 0x2b2844: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x2b2844u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b2848: 0x3508507f  ori         $t0, $t0, 0x507F
    ctx->pc = 0x2b2848u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20607);
    // 0x2b284c: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x2b284cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x2b2850: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2b2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b2854:
    // 0x2b2854: 0xc7818fb8  lwc1        $f1, -0x7048($gp)
    ctx->pc = 0x2b2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b285c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2860: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b2860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b2864: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b2864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b2868: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b2868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b286c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b286cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b2870: 0x24495c60  addiu       $t1, $v0, 0x5C60
    ctx->pc = 0x2b2870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x2b2874: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b2874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b2878: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b2878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b287c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2880: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2b2880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b2884: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2b2884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b2888: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b2888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b288c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b288cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2890: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b2890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b2894: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x2b2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2b2898: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b289c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2b289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2b28a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b28a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b28a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2b28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b28ac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2b28acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2b28b0: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2b28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b28b4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x2b28b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b28b8: 0x46046b42  mul.s       $f13, $f13, $f4
    ctx->pc = 0x2b28b8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x2b28bc: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x2b28bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b28c0: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x2b28c0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x2b28c4: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x2b28c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x2b28c8: 0x460dab40  add.s       $f13, $f21, $f13
    ctx->pc = 0x2b28c8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    // 0x2b28cc: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2b28ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2b28d0: 0x46056bc0  add.s       $f15, $f13, $f5
    ctx->pc = 0x2b28d0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[5]);
    // 0x2b28d4: 0x46036380  add.s       $f14, $f12, $f3
    ctx->pc = 0x2b28d4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x2b28d8: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x2b28d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x2b28dc: 0xc0ae37e  jal         func_2B8DF8
    ctx->pc = 0x2B28DCu;
    SET_GPR_U32(ctx, 31, 0x2B28E4u);
    ctx->pc = 0x2B28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B28DCu;
    // 0x2b28e0: 0x46056b41  sub.s       $f13, $f13, $f5 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8DF8u, 0x2B28DCu, 0x2B28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28E4u;
label_2b28e4:
    // 0x2b28e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b28e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b28e8: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x2b28e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2b28ec: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2B28ECu;
    {
        const bool branch_taken_0x2b28ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28ECu;
        // 0x2b28f0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28ec) {
            ctx->pc = 0x2B2808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2808;
        }
    }
    ctx->pc = 0x2B28F4u;
label_2b28f4:
    // 0x2b28f4: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b28f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b28f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b28f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b28fc: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x2b28fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2b2900: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x2b2900u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2b2904: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x2b2904u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2b2908: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x2b2908u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2b290c: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x2b290cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2b2910: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x2b2910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2b2914: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x2b2914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2b2918: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x2b2918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2b291c: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x2b291cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2b2920: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x2b2920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2b2924: 0xc7b90278  lwc1        $f25, 0x278($sp)
    ctx->pc = 0x2b2924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b2928: 0xc7b80270  lwc1        $f24, 0x270($sp)
    ctx->pc = 0x2b2928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b292c: 0xc7b70268  lwc1        $f23, 0x268($sp)
    ctx->pc = 0x2b292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b2930: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x2b2930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b2934: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x2b2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b2938: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x2b2938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b293c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B293Cu;
        // 0x2b2940: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B293Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2944u;
}
