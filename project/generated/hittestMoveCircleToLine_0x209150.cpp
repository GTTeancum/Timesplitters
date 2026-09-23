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

// Function: hittestMoveCircleToLine
// Address: 0x209150 - 0x20949c
void hittestMoveCircleToLine_0x209150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestMoveCircleToLine_0x209150");
#endif

    switch (ctx->pc) {
        case 0x2091d8u: goto label_2091d8;
        case 0x2092e8u: goto label_2092e8;
        case 0x209310u: goto label_209310;
        case 0x209378u: goto label_209378;
        case 0x209428u: goto label_209428;
        default: break;
    }

    ctx->pc = 0x209150u;

    // 0x209150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x209150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x209154: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x209154u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x209158: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x209158u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20915c: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x20915cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x209160: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x209160u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x209164: 0x4617b802  mul.s       $f0, $f23, $f23
    ctx->pc = 0x209164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x209168: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x209168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x20916c: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x20916cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x209170: 0x46006746  mov.s       $f29, $f12
    ctx->pc = 0x209170u;
    ctx->f[29] = FPU_MOV_S(ctx->f[12]);
    // 0x209174: 0xe7bb0078  swc1        $f27, 0x78($sp)
    ctx->pc = 0x209174u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x209178: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x209178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20917c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20917cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209180: 0xe7bf0098  swc1        $f31, 0x98($sp)
    ctx->pc = 0x209180u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x209184: 0xe7be0090  swc1        $f30, 0x90($sp)
    ctx->pc = 0x209184u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x209188: 0x46009fc6  mov.s       $f31, $f19
    ctx->pc = 0x209188u;
    ctx->f[31] = FPU_MOV_S(ctx->f[19]);
    // 0x20918c: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x20918cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x209190: 0x46006f86  mov.s       $f30, $f13
    ctx->pc = 0x209190u;
    ctx->f[30] = FPU_MOV_S(ctx->f[13]);
    // 0x209194: 0x0  nop
    ctx->pc = 0x209194u;
    // NOP
    // 0x209198: 0x0  nop
    ctx->pc = 0x209198u;
    // NOP
    // 0x20919c: 0x460c06c4  c1          0xC06C4
    ctx->pc = 0x20919cu;
    ctx->f[27] = FPU_SQRT_S(ctx->f[12]);
    // 0x2091a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2091a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2091a4: 0xe7bc0080  swc1        $f28, 0x80($sp)
    ctx->pc = 0x2091a4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2091a8: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2091a8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x2091ac: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x2091acu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2091b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2091b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091b4: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x2091b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2091b8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2091b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2091bc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2091bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2091c0: 0x461bd832  c.eq.s      $f27, $f27
    ctx->pc = 0x2091c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[27], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2091c4: 0xe7b10010  swc1        $f17, 0x10($sp)
    ctx->pc = 0x2091c4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2091c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2091C8u;
    {
        const bool branch_taken_0x2091c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2091CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091C8u;
        // 0x2091cc: 0xe7b20014  swc1        $f18, 0x14($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091c8) {
            ctx->pc = 0x2091DCu;
            goto label_2091dc;
        }
    }
    ctx->pc = 0x2091D0u;
    // 0x2091d0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2091D0u;
    SET_GPR_U32(ctx, 31, 0x2091D8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2091D0u, 0x2091D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091D8u;
label_2091d8:
    // 0x2091d8: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x2091d8u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
label_2091dc:
    // 0x2091dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2091dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2091e0: 0x4602d832  c.eq.s      $f27, $f2
    ctx->pc = 0x2091e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[27], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2091e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2091e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2091e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2091ec: 0x4501009c  bc1t        . + 4 + (0x9C << 2)
    ctx->pc = 0x2091ECu;
    {
        const bool branch_taken_0x2091ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091ECu;
        // 0x2091f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091ec) {
            ctx->pc = 0x209460u;
            goto label_209460;
        }
    }
    ctx->pc = 0x2091F4u;
    // 0x2091f4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2091f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2091f8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2091f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2091fc: 0x4600fd41  sub.s       $f21, $f31, $f0
    ctx->pc = 0x2091fcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
    // 0x209200: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x209200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209204: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x209204u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20920c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20920cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209210: 0x0  nop
    ctx->pc = 0x209210u;
    // NOP
    // 0x209214: 0x0  nop
    ctx->pc = 0x209214u;
    // NOP
    // 0x209218: 0x461b0f03  div.s       $f28, $f1, $f27
    ctx->pc = 0x209218u;
    if (ctx->f[27] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[28] = ctx->f[1] / ctx->f[27];
    // 0x20921c: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x20921cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x209220: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x209220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x209224: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x209224u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209228: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x209228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20922c: 0x0  nop
    ctx->pc = 0x20922cu;
    // NOP
    // 0x209230: 0x45020075  bc1fl       . + 4 + (0x75 << 2)
    ctx->pc = 0x209230u;
    {
        const bool branch_taken_0x209230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209230) {
            ctx->pc = 0x209234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209230u;
            // 0x209234: 0x461cb3c2  mul.s       $f15, $f22, $f28 (Delay Slot)
            ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209408u;
            goto label_209408;
        }
    }
    ctx->pc = 0x209238u;
    // 0x209238: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x209238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x20923c: 0x4617a842  mul.s       $f1, $f21, $f23
    ctx->pc = 0x20923cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x209240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x209240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x209244: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x209244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209248: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20924c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20924cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209250: 0x45030084  bc1tl       . + 4 + (0x84 << 2)
    ctx->pc = 0x209250u;
    {
        const bool branch_taken_0x209250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209250) {
            ctx->pc = 0x209254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209250u;
            // 0x209254: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209464u;
            goto label_209464;
        }
    }
    ctx->pc = 0x209258u;
    // 0x209258: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x209258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20925c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x20925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209260: 0x4600ee41  sub.s       $f25, $f29, $f0
    ctx->pc = 0x209260u;
    ctx->f[25] = FPU_SUB_S(ctx->f[29], ctx->f[0]);
    // 0x209264: 0x4601f681  sub.s       $f26, $f30, $f1
    ctx->pc = 0x209264u;
    ctx->f[26] = FPU_SUB_S(ctx->f[30], ctx->f[1]);
    // 0x209268: 0x4619a002  mul.s       $f0, $f20, $f25
    ctx->pc = 0x209268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x20926c: 0x461aa842  mul.s       $f1, $f21, $f26
    ctx->pc = 0x20926cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
    // 0x209270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x209270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x209274: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x209274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209278: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x209278u;
    {
        const bool branch_taken_0x209278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209278) {
            ctx->pc = 0x209434u;
            goto label_209434;
        }
    }
    ctx->pc = 0x209280u;
    // 0x209280: 0x4615c842  mul.s       $f1, $f25, $f21
    ctx->pc = 0x209280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x209284: 0x4614d002  mul.s       $f0, $f26, $f20
    ctx->pc = 0x209284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[20]);
    // 0x209288: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x209288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20928c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x20928cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209290: 0x0  nop
    ctx->pc = 0x209290u;
    // NOP
    // 0x209294: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x209294u;
    {
        const bool branch_taken_0x209294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209294u;
        // 0x209298: 0xc7b10010  lwc1        $f17, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209294) {
            ctx->pc = 0x2092B8u;
            goto label_2092b8;
        }
    }
    ctx->pc = 0x20929Cu;
    // 0x20929c: 0x461cb3c2  mul.s       $f15, $f22, $f28
    ctx->pc = 0x20929cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[28]);
    // 0x2092a0: 0x461cbc02  mul.s       $f16, $f23, $f28
    ctx->pc = 0x2092a0u;
    ctx->f[16] = FPU_MUL_S(ctx->f[23], ctx->f[28]);
    // 0x2092a4: 0xc7b20014  lwc1        $f18, 0x14($sp)
    ctx->pc = 0x2092a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2092a8: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x2092a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x2092ac: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x2092acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    // 0x2092b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2092B0u;
    {
        const bool branch_taken_0x2092b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2092B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092B0u;
        // 0x2092b4: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092b0) {
            ctx->pc = 0x2092E0u;
            goto label_2092e0;
        }
    }
    ctx->pc = 0x2092B8u;
label_2092b8:
    // 0x2092b8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x2092b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2092bc: 0x0  nop
    ctx->pc = 0x2092bcu;
    // NOP
    // 0x2092c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2092C0u;
    {
        const bool branch_taken_0x2092c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2092C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092C0u;
        // 0x2092c4: 0xc7b200a0  lwc1        $f18, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092c0) {
            ctx->pc = 0x2092F0u;
            goto label_2092f0;
        }
    }
    ctx->pc = 0x2092C8u;
    // 0x2092c8: 0x461cb3c2  mul.s       $f15, $f22, $f28
    ctx->pc = 0x2092c8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[28]);
    // 0x2092cc: 0x461cbc02  mul.s       $f16, $f23, $f28
    ctx->pc = 0x2092ccu;
    ctx->f[16] = FPU_MUL_S(ctx->f[23], ctx->f[28]);
    // 0x2092d0: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x2092d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x2092d4: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x2092d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    // 0x2092d8: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x2092d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2092dc: 0x4600fc46  mov.s       $f17, $f31
    ctx->pc = 0x2092dcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[31]);
label_2092e0:
    // 0x2092e0: 0xc0823dc  jal         func_208F70
    ctx->pc = 0x2092E0u;
    SET_GPR_U32(ctx, 31, 0x2092E8u);
    ctx->pc = 0x2092E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092E0u;
    // 0x2092e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F70u, 0x2092E0u, 0x2092E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092E8u;
label_2092e8:
    // 0x2092e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2092E8u;
    {
        const bool branch_taken_0x2092e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092e8) {
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x2092F0u;
label_2092f0:
    // 0x2092f0: 0x0  nop
    ctx->pc = 0x2092f0u;
    // NOP
    // 0x2092f4: 0x0  nop
    ctx->pc = 0x2092f4u;
    // NOP
    // 0x2092f8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2092f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2092fc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2092fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209300: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x209300u;
    {
        const bool branch_taken_0x209300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209300) {
            ctx->pc = 0x209310u;
            goto label_209310;
        }
    }
    ctx->pc = 0x209308u;
    // 0x209308: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x209308u;
    SET_GPR_U32(ctx, 31, 0x209310u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x209308u, 0x209310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209310u;
label_209310:
    // 0x209310: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209314: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x209318: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x209318u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x20931c: 0x0  nop
    ctx->pc = 0x20931cu;
    // NOP
    // 0x209320: 0x0  nop
    ctx->pc = 0x209320u;
    // NOP
    // 0x209324: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x209324u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x209328: 0x4600a102  mul.s       $f4, $f20, $f0
    ctx->pc = 0x209328u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20932c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20932Cu;
    {
        const bool branch_taken_0x20932c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20932Cu;
        // 0x209330: 0x46000942  mul.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20932c) {
            ctx->pc = 0x20933Cu;
            goto label_20933c;
        }
    }
    ctx->pc = 0x209334u;
    // 0x209334: 0xe6050004  swc1        $f5, 0x4($s0)
    ctx->pc = 0x209334u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x209338: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x209338u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20933c:
    // 0x20933c: 0x4616e840  add.s       $f1, $f29, $f22
    ctx->pc = 0x20933cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[29], ctx->f[22]);
    // 0x209340: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x209340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209344: 0x4617f000  add.s       $f0, $f30, $f23
    ctx->pc = 0x209344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[30], ctx->f[23]);
    // 0x209348: 0x461920c2  mul.s       $f3, $f4, $f25
    ctx->pc = 0x209348u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[25]);
    // 0x20934c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x20934cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x209350: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x209350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209354: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x209354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x209358: 0x461a2882  mul.s       $f2, $f5, $f26
    ctx->pc = 0x209358u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[26]);
    // 0x20935c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x20935cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x209360: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x209360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x209364: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x209364u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x209368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20936c: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x20936cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209370: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x209370u;
    {
        const bool branch_taken_0x209370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209370) {
            ctx->pc = 0x209388u;
            goto label_209388;
        }
    }
    ctx->pc = 0x209378u;
label_209378:
    // 0x209378: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x209378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20937c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20937cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209380: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x209380u;
    {
        const bool branch_taken_0x209380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209380u;
        // 0x209384: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209380) {
            ctx->pc = 0x209460u;
            goto label_209460;
        }
    }
    ctx->pc = 0x209388u;
label_209388:
    // 0x209388: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x209388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20938c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x20938Cu;
    {
        const bool branch_taken_0x20938c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20938c) {
            ctx->pc = 0x2093D0u;
            goto label_2093d0;
        }
    }
    ctx->pc = 0x209394u;
    // 0x209394: 0x4603c036  c.le.s      $f24, $f3
    ctx->pc = 0x209394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209398: 0x0  nop
    ctx->pc = 0x209398u;
    // NOP
    // 0x20939c: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x20939Cu;
    {
        const bool branch_taken_0x20939c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20939c) {
            ctx->pc = 0x2093A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20939Cu;
            // 0x2093a0: 0x4600d806  mov.s       $f0, $f27 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[27]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x2093A4u;
    // 0x2093a4: 0x4600c047  neg.s       $f1, $f24
    ctx->pc = 0x2093a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[24]);
    // 0x2093a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2093a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093ac: 0x0  nop
    ctx->pc = 0x2093acu;
    // NOP
    // 0x2093b0: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x2093B0u;
    {
        const bool branch_taken_0x2093b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093b0) {
            ctx->pc = 0x2093B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093B0u;
            // 0x2093b4: 0x4600d806  mov.s       $f0, $f27 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[27]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x2093B8u;
    // 0x2093b8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2093b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093bc: 0x4500ffee  bc1f        . + 4 + (-0x12 << 2)
    ctx->pc = 0x2093BCu;
    {
        const bool branch_taken_0x2093bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093bc) {
            ctx->pc = 0x209378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209378;
        }
    }
    ctx->pc = 0x2093C4u;
    // 0x2093c4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2093c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2093c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2093C8u;
    {
        const bool branch_taken_0x2093c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C8u;
        // 0x2093cc: 0x46180001  sub.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093c8) {
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x2093D0u;
label_2093d0:
    // 0x2093d0: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x2093d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093d4: 0x0  nop
    ctx->pc = 0x2093d4u;
    // NOP
    // 0x2093d8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2093D8u;
    {
        const bool branch_taken_0x2093d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2093DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D8u;
        // 0x2093dc: 0x4600d806  mov.s       $f0, $f27 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093d8) {
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x2093E0u;
    // 0x2093e0: 0x4600c007  neg.s       $f0, $f24
    ctx->pc = 0x2093e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
    // 0x2093e4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2093e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093e8: 0x0  nop
    ctx->pc = 0x2093e8u;
    // NOP
    // 0x2093ec: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2093ECu;
    {
        const bool branch_taken_0x2093ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2093F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093ECu;
        // 0x2093f0: 0x4600d806  mov.s       $f0, $f27 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093ec) {
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x2093F4u;
    // 0x2093f4: 0x4603c036  c.le.s      $f24, $f3
    ctx->pc = 0x2093f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093f8: 0x4500ffdf  bc1f        . + 4 + (-0x21 << 2)
    ctx->pc = 0x2093F8u;
    {
        const bool branch_taken_0x2093f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093f8) {
            ctx->pc = 0x209378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209378;
        }
    }
    ctx->pc = 0x209400u;
    // 0x209400: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x209400u;
    {
        const bool branch_taken_0x209400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209400u;
        // 0x209404: 0x46181801  sub.s       $f0, $f3, $f24 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209400) {
            ctx->pc = 0x209428u;
            goto label_209428;
        }
    }
    ctx->pc = 0x209408u;
label_209408:
    // 0x209408: 0xc7b200a0  lwc1        $f18, 0xA0($sp)
    ctx->pc = 0x209408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x20940c: 0x461cbc02  mul.s       $f16, $f23, $f28
    ctx->pc = 0x20940cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[23], ctx->f[28]);
    // 0x209410: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x209410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x209414: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x209414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    // 0x209418: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x209418u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x20941c: 0x4600fc46  mov.s       $f17, $f31
    ctx->pc = 0x20941cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[31]);
    // 0x209420: 0xc0823dc  jal         func_208F70
    ctx->pc = 0x209420u;
    SET_GPR_U32(ctx, 31, 0x209428u);
    ctx->pc = 0x209424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209420u;
    // 0x209424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208F70u, 0x209420u, 0x209428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209428u;
label_209428:
    // 0x209428: 0x4600d836  c.le.s      $f27, $f0
    ctx->pc = 0x209428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[27], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20942c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20942Cu;
    {
        const bool branch_taken_0x20942c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20942c) {
            ctx->pc = 0x209444u;
            goto label_209444;
        }
    }
    ctx->pc = 0x209434u;
label_209434:
    // 0x209434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20943c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20943Cu;
    {
        const bool branch_taken_0x20943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20943Cu;
        // 0x209440: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20943c) {
            ctx->pc = 0x209460u;
            goto label_209460;
        }
    }
    ctx->pc = 0x209444u;
label_209444:
    // 0x209444: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x209444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209448: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x209448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20944c: 0x0  nop
    ctx->pc = 0x20944cu;
    // NOP
    // 0x209450: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x209450u;
    {
        const bool branch_taken_0x209450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209450) {
            ctx->pc = 0x209454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209450u;
            // 0x209454: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20945Cu;
            goto label_20945c;
        }
    }
    ctx->pc = 0x209458u;
    // 0x209458: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x209458u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_20945c:
    // 0x20945c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_209460:
    // 0x209460: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x209460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_209464:
    // 0x209464: 0xc7bf0098  lwc1        $f31, 0x98($sp)
    ctx->pc = 0x209464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x209468: 0xc7be0090  lwc1        $f30, 0x90($sp)
    ctx->pc = 0x209468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x20946c: 0xc7bd0088  lwc1        $f29, 0x88($sp)
    ctx->pc = 0x20946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x209470: 0xc7bc0080  lwc1        $f28, 0x80($sp)
    ctx->pc = 0x209470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x209474: 0xc7bb0078  lwc1        $f27, 0x78($sp)
    ctx->pc = 0x209474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x209478: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x209478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x20947c: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x20947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x209480: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x209480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x209484: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x209484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x209488: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x209488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20948c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x20948cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209490: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x209490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209494: 0x3e00008  jr          $ra
    ctx->pc = 0x209494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209494u;
        // 0x209498: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20949Cu;
}
