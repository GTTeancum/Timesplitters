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

// Function: getSwingDirectionMultiplier
// Address: 0x2794a0 - 0x2796f4
void getSwingDirectionMultiplier_0x2794a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getSwingDirectionMultiplier_0x2794a0");
#endif

    switch (ctx->pc) {
        case 0x279510u: goto label_279510;
        case 0x2795a0u: goto label_2795a0;
        case 0x2795acu: goto label_2795ac;
        case 0x2795dcu: goto label_2795dc;
        default: break;
    }

    ctx->pc = 0x2794a0u;

    // 0x2794a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2794a4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2794a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2794a8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2794a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2794ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2794acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794b0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2794b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2794b4: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2794b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2794b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2794b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2794bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2794c0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2794c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2794c4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2794c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2794c8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2794c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2794cc: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2794ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2794d0: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2794d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2794d4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2794d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2794d8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2794d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2794dc: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2794dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2794e0: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2794e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2794e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2794e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2794e8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2794e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2794ec: 0x0  nop
    ctx->pc = 0x2794ecu;
    // NOP
    // 0x2794f0: 0x0  nop
    ctx->pc = 0x2794f0u;
    // NOP
    // 0x2794f4: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2794f4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2794f8: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2794f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2794fc: 0x0  nop
    ctx->pc = 0x2794fcu;
    // NOP
    // 0x279500: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x279500u;
    {
        const bool branch_taken_0x279500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279500u;
        // 0x279504: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279500) {
            ctx->pc = 0x279520u;
            goto label_279520;
        }
    }
    ctx->pc = 0x279508u;
    // 0x279508: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x279508u;
    SET_GPR_U32(ctx, 31, 0x279510u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x279508u, 0x279510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279510u;
label_279510:
    // 0x279510: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x279510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x279514: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x279514u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x279518: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x279518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27951c: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x27951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279520:
    // 0x279520: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x279520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x279524: 0x0  nop
    ctx->pc = 0x279524u;
    // NOP
    // 0x279528: 0x0  nop
    ctx->pc = 0x279528u;
    // NOP
    // 0x27952c: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x27952cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
    // 0x279530: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x279530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279534: 0x0  nop
    ctx->pc = 0x279534u;
    // NOP
    // 0x279538: 0x0  nop
    ctx->pc = 0x279538u;
    // NOP
    // 0x27953c: 0x46022843  div.s       $f1, $f5, $f2
    ctx->pc = 0x27953cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[1] = ctx->f[5] / ctx->f[2];
    // 0x279540: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x279540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x279544: 0x0  nop
    ctx->pc = 0x279544u;
    // NOP
    // 0x279548: 0x0  nop
    ctx->pc = 0x279548u;
    // NOP
    // 0x27954c: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x27954cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
    // 0x279550: 0xc79486c4  lwc1        $f20, -0x793C($gp)
    ctx->pc = 0x279550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x279554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279558: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27955c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27955cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x279560: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x279560u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x279564: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x279564u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x279568: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x279568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27956c: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x27956cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x279570: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x279570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x279574: 0x0  nop
    ctx->pc = 0x279574u;
    // NOP
    // 0x279578: 0x0  nop
    ctx->pc = 0x279578u;
    // NOP
    // 0x27957c: 0x46157383  div.s       $f14, $f14, $f21
    ctx->pc = 0x27957cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[21];
    // 0x279580: 0x0  nop
    ctx->pc = 0x279580u;
    // NOP
    // 0x279584: 0x0  nop
    ctx->pc = 0x279584u;
    // NOP
    // 0x279588: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x279588u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x27958c: 0x0  nop
    ctx->pc = 0x27958cu;
    // NOP
    // 0x279590: 0x0  nop
    ctx->pc = 0x279590u;
    // NOP
    // 0x279594: 0x46156b43  div.s       $f13, $f13, $f21
    ctx->pc = 0x279594u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
    // 0x279598: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x279598u;
    SET_GPR_U32(ctx, 31, 0x2795A0u);
    ctx->pc = 0x27959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279598u;
    // 0x27959c: 0xe7a20044  swc1        $f2, 0x44($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x279598u, 0x2795A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795A0u;
label_2795a0:
    // 0x2795a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2795a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2795a4: 0xc0ad568  jal         func_2B55A0
    ctx->pc = 0x2795A4u;
    SET_GPR_U32(ctx, 31, 0x2795ACu);
    ctx->pc = 0x2795A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795A4u;
    // 0x2795a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55A0u, 0x2795A4u, 0x2795ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795ACu;
label_2795ac:
    // 0x2795ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2795acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2795b0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2795b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2795b4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2795b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2795b8: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x2795b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2795bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2795bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2795c0: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2795c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2795c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2795c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2795c8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2795c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2795cc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2795ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2795d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2795d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2795d4: 0xc0b5eda  jal         func_2D7B68
    ctx->pc = 0x2795D4u;
    SET_GPR_U32(ctx, 31, 0x2795DCu);
    ctx->pc = 0x2795D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795D4u;
    // 0x2795d8: 0x460c0b00  add.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B68u, 0x2795D4u, 0x2795DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795DCu;
label_2795dc:
    // 0x2795dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2795dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2795e0: 0x0  nop
    ctx->pc = 0x2795e0u;
    // NOP
    // 0x2795e4: 0x0  nop
    ctx->pc = 0x2795e4u;
    // NOP
    // 0x2795e8: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x2795e8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x2795ec: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x2795ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2795f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2795F0u;
    {
        const bool branch_taken_0x2795f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2795f0) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x2795F8u;
    // 0x2795f8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2795f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2795fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2795fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279600: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x279600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_279604:
    // 0x279604: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x279604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x279608: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27960c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27960cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279610: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x279610u;
    {
        const bool branch_taken_0x279610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279610) {
            ctx->pc = 0x27962Cu;
            goto label_27962c;
        }
    }
    ctx->pc = 0x279618u;
    // 0x279618: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x279618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27961c: 0x0  nop
    ctx->pc = 0x27961cu;
    // NOP
    // 0x279620: 0x0  nop
    ctx->pc = 0x279620u;
    // NOP
    // 0x279624: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x279624u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x279628: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x279628u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_27962c:
    // 0x27962c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x27962cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279630: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x279630u;
    {
        const bool branch_taken_0x279630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279630) {
            ctx->pc = 0x279654u;
            goto label_279654;
        }
    }
    ctx->pc = 0x279638u;
    // 0x279638: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x279638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27963c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27963Cu;
    {
        const bool branch_taken_0x27963c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27963c) {
            ctx->pc = 0x279654u;
            goto label_279654;
        }
    }
    ctx->pc = 0x279644u;
    // 0x279644: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x279644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x279648: 0x0  nop
    ctx->pc = 0x279648u;
    // NOP
    // 0x27964c: 0x0  nop
    ctx->pc = 0x27964cu;
    // NOP
    // 0x279650: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x279650u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[1];
label_279654:
    // 0x279654: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x279654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x279658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27965c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x27965cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279660: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x279660u;
    {
        const bool branch_taken_0x279660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279660) {
            ctx->pc = 0x279698u;
            goto label_279698;
        }
    }
    ctx->pc = 0x279668u;
    // 0x279668: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x279668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x27966c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27966cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279670: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x279670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279674: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x279674u;
    {
        const bool branch_taken_0x279674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279674) {
            ctx->pc = 0x2796A0u;
            goto label_2796a0;
        }
    }
    ctx->pc = 0x27967Cu;
    // 0x27967c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x27967cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x279680: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x279680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x279684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279688: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x279688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27968c: 0x0  nop
    ctx->pc = 0x27968cu;
    // NOP
    // 0x279690: 0x0  nop
    ctx->pc = 0x279690u;
    // NOP
    // 0x279694: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x279694u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[1];
label_279698:
    // 0x279698: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x279698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x27969c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27969cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2796a0:
    // 0x2796a0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2796a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2796a4: 0x0  nop
    ctx->pc = 0x2796a4u;
    // NOP
    // 0x2796a8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2796A8u;
    {
        const bool branch_taken_0x2796a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2796a8) {
            ctx->pc = 0x2796ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2796A8u;
            // 0x2796ac: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2796D0u;
            goto label_2796d0;
        }
    }
    ctx->pc = 0x2796B0u;
    // 0x2796b0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2796b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2796b4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2796b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2796b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2796b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2796bc: 0x0  nop
    ctx->pc = 0x2796bcu;
    // NOP
    // 0x2796c0: 0x0  nop
    ctx->pc = 0x2796c0u;
    // NOP
    // 0x2796c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2796c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2796c8: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x2796c8u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x2796cc: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x2796ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_2796d0:
    // 0x2796d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2796d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2796d4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2796d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2796d8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2796d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2796dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2796dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2796e0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2796e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2796e4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2796e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2796e8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2796e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2796ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2796ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2796F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796ECu;
        // 0x2796f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2796ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2796F4u;
}
