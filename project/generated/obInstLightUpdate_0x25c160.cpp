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

// Function: obInstLightUpdate
// Address: 0x25c160 - 0x25d184
void obInstLightUpdate_0x25c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstLightUpdate_0x25c160");
#endif

    switch (ctx->pc) {
        case 0x25c208u: goto label_25c208;
        case 0x25c230u: goto label_25c230;
        case 0x25c250u: goto label_25c250;
        case 0x25c26cu: goto label_25c26c;
        case 0x25c294u: goto label_25c294;
        case 0x25c2bcu: goto label_25c2bc;
        case 0x25c2dcu: goto label_25c2dc;
        case 0x25c2f8u: goto label_25c2f8;
        case 0x25c320u: goto label_25c320;
        case 0x25c348u: goto label_25c348;
        case 0x25c368u: goto label_25c368;
        case 0x25c384u: goto label_25c384;
        case 0x25c3ccu: goto label_25c3cc;
        case 0x25c450u: goto label_25c450;
        case 0x25c4d0u: goto label_25c4d0;
        case 0x25c534u: goto label_25c534;
        case 0x25c5a8u: goto label_25c5a8;
        case 0x25c6d4u: goto label_25c6d4;
        case 0x25c6e4u: goto label_25c6e4;
        case 0x25c78cu: goto label_25c78c;
        case 0x25ca50u: goto label_25ca50;
        case 0x25cd48u: goto label_25cd48;
        case 0x25cd8cu: goto label_25cd8c;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd8u: goto label_25cfd8;
        default: break;
    }

    ctx->pc = 0x25c160u;

    // 0x25c160: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x25c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x25c164: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x25c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x25c168: 0xffbe0280  sd          $fp, 0x280($sp)
    ctx->pc = 0x25c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 30));
    // 0x25c16c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x25c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x25c170: 0xffb50250  sd          $s5, 0x250($sp)
    ctx->pc = 0x25c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 21));
    // 0x25c174: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x25c174u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c178: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x25c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
    // 0x25c17c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25c17cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c180: 0xffb70270  sd          $s7, 0x270($sp)
    ctx->pc = 0x25c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 23));
    // 0x25c184: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x25c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x25c188: 0xffb30230  sd          $s3, 0x230($sp)
    ctx->pc = 0x25c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 19));
    // 0x25c18c: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x25c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x25c190: 0xffb10210  sd          $s1, 0x210($sp)
    ctx->pc = 0x25c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
    // 0x25c194: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x25c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x25c198: 0xe7b702b8  swc1        $f23, 0x2B8($sp)
    ctx->pc = 0x25c198u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x25c19c: 0xe7b602b0  swc1        $f22, 0x2B0($sp)
    ctx->pc = 0x25c19cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x25c1a0: 0xe7b502a8  swc1        $f21, 0x2A8($sp)
    ctx->pc = 0x25c1a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x25c1a4: 0xe7b402a0  swc1        $f20, 0x2A0($sp)
    ctx->pc = 0x25c1a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x25c1a8: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x25c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x25c1ac: 0x8eb600f4  lw          $s6, 0xF4($s5)
    ctx->pc = 0x25c1acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x25c1b0: 0x1462010a  bne         $v1, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x25C1B0u;
    {
        const bool branch_taken_0x25c1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B0u;
        // 0x25c1b4: 0xafa001fc  sw          $zero, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1b0) {
            ctx->pc = 0x25C5DCu;
            goto label_25c5dc;
        }
    }
    ctx->pc = 0x25C1B8u;
    // 0x25c1b8: 0x8ec30240  lw          $v1, 0x240($s6)
    ctx->pc = 0x25c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 576)));
    // 0x25c1bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c1c0: 0x106203e0  beq         $v1, $v0, . + 4 + (0x3E0 << 2)
    ctx->pc = 0x25C1C0u;
    {
        const bool branch_taken_0x25c1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C0u;
        // 0x25c1c4: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1c0) {
            ctx->pc = 0x25D144u;
            goto label_25d144;
        }
    }
    ctx->pc = 0x25C1C8u;
    // 0x25c1c8: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x25c1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x25c1cc: 0x739818  mult        $s3, $v1, $s3
    ctx->pc = 0x25c1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x25c1d0: 0x26529030  addiu       $s2, $s2, -0x6FD0
    ctx->pc = 0x25c1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938672));
    // 0x25c1d4: 0xc7968348  lwc1        $f22, -0x7CB8($gp)
    ctx->pc = 0x25c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25c1d8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x25c1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x25c1dc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x25c1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x25c1e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25c1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x25c1e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25c1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25c1e8: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x25c1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x25c1ec: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x25c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c1f0: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c1f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c1f4: 0x0  nop
    ctx->pc = 0x25c1f4u;
    // NOP
    // 0x25c1f8: 0x0  nop
    ctx->pc = 0x25c1f8u;
    // NOP
    // 0x25c1fc: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c1fcu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c200: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x25C200u;
    SET_GPR_U32(ctx, 31, 0x25C208u);
    ctx->pc = 0x25C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C200u;
    // 0x25c204: 0x3c140036  lui         $s4, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x25C200u, 0x25C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C208u;
label_25c208:
    // 0x25c208: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c20c: 0x26949060  addiu       $s4, $s4, -0x6FA0
    ctx->pc = 0x25c20cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938720));
    // 0x25c210: 0x274b821  addu        $s7, $s3, $s4
    ctx->pc = 0x25c210u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x25c214: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x25c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c218: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c218u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c21c: 0x0  nop
    ctx->pc = 0x25c21cu;
    // NOP
    // 0x25c220: 0x0  nop
    ctx->pc = 0x25c220u;
    // NOP
    // 0x25c224: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c224u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c228: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C228u;
    SET_GPR_U32(ctx, 31, 0x25C230u);
    ctx->pc = 0x25C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C228u;
    // 0x25c22c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C228u, 0x25C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C230u;
label_25c230:
    // 0x25c230: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x25c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c234: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c238: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c238u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c23c: 0x0  nop
    ctx->pc = 0x25c23cu;
    // NOP
    // 0x25c240: 0x0  nop
    ctx->pc = 0x25c240u;
    // NOP
    // 0x25c244: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c244u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c248: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C248u;
    SET_GPR_U32(ctx, 31, 0x25C250u);
    ctx->pc = 0x25C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C248u;
    // 0x25c24c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C248u, 0x25C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C250u;
label_25c250:
    // 0x25c250: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x25c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c254: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c254u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c258: 0x0  nop
    ctx->pc = 0x25c258u;
    // NOP
    // 0x25c25c: 0x0  nop
    ctx->pc = 0x25c25cu;
    // NOP
    // 0x25c260: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c260u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c264: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x25C264u;
    SET_GPR_U32(ctx, 31, 0x25C26Cu);
    ctx->pc = 0x25C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C264u;
    // 0x25c268: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x25C264u, 0x25C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C26Cu;
label_25c26c:
    // 0x25c26c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x25c26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25c270: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25c270u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x25c274: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x25c274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x25c278: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x25c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c27c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c27cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c280: 0x0  nop
    ctx->pc = 0x25c280u;
    // NOP
    // 0x25c284: 0x0  nop
    ctx->pc = 0x25c284u;
    // NOP
    // 0x25c288: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c288u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c28c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x25C28Cu;
    SET_GPR_U32(ctx, 31, 0x25C294u);
    ctx->pc = 0x25C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C28Cu;
    // 0x25c290: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x25C28Cu, 0x25C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C294u;
label_25c294:
    // 0x25c294: 0x26900004  addiu       $s0, $s4, 0x4
    ctx->pc = 0x25c294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x25c298: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c29c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x25c29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x25c2a0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x25c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c2a4: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c2a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c2a8: 0x0  nop
    ctx->pc = 0x25c2a8u;
    // NOP
    // 0x25c2ac: 0x0  nop
    ctx->pc = 0x25c2acu;
    // NOP
    // 0x25c2b0: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c2b0u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c2b4: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C2B4u;
    SET_GPR_U32(ctx, 31, 0x25C2BCu);
    ctx->pc = 0x25C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2B4u;
    // 0x25c2b8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C2B4u, 0x25C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2BCu;
label_25c2bc:
    // 0x25c2bc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x25c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c2c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c2c4: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c2c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c2c8: 0x0  nop
    ctx->pc = 0x25c2c8u;
    // NOP
    // 0x25c2cc: 0x0  nop
    ctx->pc = 0x25c2ccu;
    // NOP
    // 0x25c2d0: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c2d0u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c2d4: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C2D4u;
    SET_GPR_U32(ctx, 31, 0x25C2DCu);
    ctx->pc = 0x25C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2D4u;
    // 0x25c2d8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C2D4u, 0x25C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2DCu;
label_25c2dc:
    // 0x25c2dc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x25c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c2e0: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c2e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c2e4: 0x0  nop
    ctx->pc = 0x25c2e4u;
    // NOP
    // 0x25c2e8: 0x0  nop
    ctx->pc = 0x25c2e8u;
    // NOP
    // 0x25c2ec: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c2ecu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c2f0: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x25C2F0u;
    SET_GPR_U32(ctx, 31, 0x25C2F8u);
    ctx->pc = 0x25C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2F0u;
    // 0x25c2f4: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x25C2F0u, 0x25C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2F8u;
label_25c2f8:
    // 0x25c2f8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x25c2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x25c2fc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25c2fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x25c300: 0x2729021  addu        $s2, $s3, $s2
    ctx->pc = 0x25c300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x25c304: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x25c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c308: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c308u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c30c: 0x0  nop
    ctx->pc = 0x25c30cu;
    // NOP
    // 0x25c310: 0x0  nop
    ctx->pc = 0x25c310u;
    // NOP
    // 0x25c314: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c314u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c318: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x25C318u;
    SET_GPR_U32(ctx, 31, 0x25C320u);
    ctx->pc = 0x25C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C318u;
    // 0x25c31c: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x25C318u, 0x25C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C320u;
label_25c320:
    // 0x25c320: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x25c320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x25c324: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c328: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x25c328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x25c32c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x25c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c330: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c330u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c334: 0x0  nop
    ctx->pc = 0x25c334u;
    // NOP
    // 0x25c338: 0x0  nop
    ctx->pc = 0x25c338u;
    // NOP
    // 0x25c33c: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c33cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c340: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C340u;
    SET_GPR_U32(ctx, 31, 0x25C348u);
    ctx->pc = 0x25C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C340u;
    // 0x25c344: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C340u, 0x25C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C348u;
label_25c348:
    // 0x25c348: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x25c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c34c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c350: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c350u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c354: 0x0  nop
    ctx->pc = 0x25c354u;
    // NOP
    // 0x25c358: 0x0  nop
    ctx->pc = 0x25c358u;
    // NOP
    // 0x25c35c: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c35cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c360: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C360u;
    SET_GPR_U32(ctx, 31, 0x25C368u);
    ctx->pc = 0x25C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C360u;
    // 0x25c364: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C360u, 0x25C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C368u;
label_25c368:
    // 0x25c368: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x25c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c36c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c36cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c370: 0x0  nop
    ctx->pc = 0x25c370u;
    // NOP
    // 0x25c374: 0x0  nop
    ctx->pc = 0x25c374u;
    // NOP
    // 0x25c378: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c378u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c37c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x25C37Cu;
    SET_GPR_U32(ctx, 31, 0x25C384u);
    ctx->pc = 0x25C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C37Cu;
    // 0x25c380: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x25C37Cu, 0x25C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C384u;
label_25c384:
    // 0x25c384: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x25c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c388: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25c388u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x25c38c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x25c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c390: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x25c390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x25c394: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x25c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c398: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x25c398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x25c39c: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x25c39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25c3a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25c3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25c3a4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x25c3a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25c3a8: 0x0  nop
    ctx->pc = 0x25c3a8u;
    // NOP
    // 0x25c3ac: 0x0  nop
    ctx->pc = 0x25c3acu;
    // NOP
    // 0x25c3b0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25c3b0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25c3b4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25c3b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c3b8: 0x0  nop
    ctx->pc = 0x25c3b8u;
    // NOP
    // 0x25c3bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C3BCu;
    {
        const bool branch_taken_0x25c3bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3BCu;
        // 0x25c3c0: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3bc) {
            ctx->pc = 0x25C3D8u;
            goto label_25c3d8;
        }
    }
    ctx->pc = 0x25C3C4u;
    // 0x25c3c4: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25C3C4u;
    SET_GPR_U32(ctx, 31, 0x25C3CCu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25C3C4u, 0x25C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3CCu;
label_25c3cc:
    // 0x25c3cc: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x25c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c3d0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x25c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c3d4: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x25c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25c3d8:
    // 0x25c3d8: 0xc7ab0010  lwc1        $f11, 0x10($sp)
    ctx->pc = 0x25c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25c3dc: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x25c3dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x25c3e0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x25c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c3e4: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x25c3e4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x25c3e8: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x25c3e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x25c3ec: 0xc7a90018  lwc1        $f9, 0x18($sp)
    ctx->pc = 0x25c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25c3f0: 0x460d68c2  mul.s       $f3, $f13, $f13
    ctx->pc = 0x25c3f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x25c3f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c3f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25c3fc: 0x46094902  mul.s       $f4, $f9, $f9
    ctx->pc = 0x25c3fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x25c400: 0x0  nop
    ctx->pc = 0x25c400u;
    // NOP
    // 0x25c404: 0x0  nop
    ctx->pc = 0x25c404u;
    // NOP
    // 0x25c408: 0x4600a183  div.s       $f6, $f20, $f0
    ctx->pc = 0x25c408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[0];
    // 0x25c40c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25c40cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25c410: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x25c410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x25c414: 0x46040b00  add.s       $f12, $f1, $f4
    ctx->pc = 0x25c414u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x25c418: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25c418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25c41c: 0x0  nop
    ctx->pc = 0x25c41cu;
    // NOP
    // 0x25c420: 0x0  nop
    ctx->pc = 0x25c420u;
    // NOP
    // 0x25c424: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x25c424u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x25c428: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x25c428u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x25c42c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x25c42cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25c430: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x25c430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25c434: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x25c434u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25c438: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x25c438u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c43c: 0x0  nop
    ctx->pc = 0x25c43cu;
    // NOP
    // 0x25c440: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25C440u;
    {
        const bool branch_taken_0x25c440 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C440u;
        // 0x25c444: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c440) {
            ctx->pc = 0x25C460u;
            goto label_25c460;
        }
    }
    ctx->pc = 0x25C448u;
    // 0x25c448: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25C448u;
    SET_GPR_U32(ctx, 31, 0x25C450u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25C448u, 0x25C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C450u;
label_25c450:
    // 0x25c450: 0xc7ab0010  lwc1        $f11, 0x10($sp)
    ctx->pc = 0x25c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25c454: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25c454u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x25c458: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x25c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25c45c: 0xc7a90018  lwc1        $f9, 0x18($sp)
    ctx->pc = 0x25c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25c460:
    // 0x25c460: 0xc7aa0020  lwc1        $f10, 0x20($sp)
    ctx->pc = 0x25c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25c464: 0x0  nop
    ctx->pc = 0x25c464u;
    // NOP
    // 0x25c468: 0x0  nop
    ctx->pc = 0x25c468u;
    // NOP
    // 0x25c46c: 0x4603a183  div.s       $f6, $f20, $f3
    ctx->pc = 0x25c46cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[3];
    // 0x25c470: 0xc7a80024  lwc1        $f8, 0x24($sp)
    ctx->pc = 0x25c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25c474: 0x460058c7  neg.s       $f3, $f11
    ctx->pc = 0x25c474u;
    ctx->f[3] = FPU_NEG_S(ctx->f[11]);
    // 0x25c478: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x25c478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x25c47c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x25c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c480: 0x46084102  mul.s       $f4, $f8, $f8
    ctx->pc = 0x25c480u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25c484: 0x46073942  mul.s       $f5, $f7, $f7
    ctx->pc = 0x25c484u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25c488: 0x46006887  neg.s       $f2, $f13
    ctx->pc = 0x25c488u;
    ctx->f[2] = FPU_NEG_S(ctx->f[13]);
    // 0x25c48c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x25c48cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x25c490: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x25c490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x25c494: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x25c494u;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
    // 0x25c498: 0x46050b00  add.s       $f12, $f1, $f5
    ctx->pc = 0x25c498u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x25c49c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x25c49cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25c4a0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x25c4a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25c4a4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25c4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25c4a8: 0x0  nop
    ctx->pc = 0x25c4a8u;
    // NOP
    // 0x25c4ac: 0x0  nop
    ctx->pc = 0x25c4acu;
    // NOP
    // 0x25c4b0: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x25c4b0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x25c4b4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x25c4b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25c4b8: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x25c4b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c4bc: 0x0  nop
    ctx->pc = 0x25c4bcu;
    // NOP
    // 0x25c4c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25C4C0u;
    {
        const bool branch_taken_0x25c4c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4C0u;
        // 0x25c4c4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4c0) {
            ctx->pc = 0x25C4E0u;
            goto label_25c4e0;
        }
    }
    ctx->pc = 0x25C4C8u;
    // 0x25c4c8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25C4C8u;
    SET_GPR_U32(ctx, 31, 0x25C4D0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25C4C8u, 0x25C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C4D0u;
label_25c4d0:
    // 0x25c4d0: 0xc7aa0020  lwc1        $f10, 0x20($sp)
    ctx->pc = 0x25c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25c4d4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25c4d4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x25c4d8: 0xc7a80024  lwc1        $f8, 0x24($sp)
    ctx->pc = 0x25c4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25c4dc: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x25c4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_25c4e0:
    // 0x25c4e0: 0x0  nop
    ctx->pc = 0x25c4e0u;
    // NOP
    // 0x25c4e4: 0x0  nop
    ctx->pc = 0x25c4e4u;
    // NOP
    // 0x25c4e8: 0x4603a183  div.s       $f6, $f20, $f3
    ctx->pc = 0x25c4e8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[3];
    // 0x25c4ec: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x25c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c4f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25c4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25c4f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25c4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25c4f8: 0x46005047  neg.s       $f1, $f10
    ctx->pc = 0x25c4f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[10]);
    // 0x25c4fc: 0x46004087  neg.s       $f2, $f8
    ctx->pc = 0x25c4fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[8]);
    // 0x25c500: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x25c500u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x25c504: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x25c504u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x25c508: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x25c508u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x25c50c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25c50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25c510: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x25c510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x25c514: 0x0  nop
    ctx->pc = 0x25c514u;
    // NOP
    // 0x25c518: 0x0  nop
    ctx->pc = 0x25c518u;
    // NOP
    // 0x25c51c: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x25c51cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[23];
    // 0x25c520: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x25c520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25c524: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25c528: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25c528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25c52c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x25C52Cu;
    SET_GPR_U32(ctx, 31, 0x25C534u);
    ctx->pc = 0x25C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C52Cu;
    // 0x25c530: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x25C52Cu, 0x25C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C534u;
label_25c534:
    // 0x25c534: 0xc7a80050  lwc1        $f8, 0x50($sp)
    ctx->pc = 0x25c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25c538: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x25c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c53c: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x25c53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25c540: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x25c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c544: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x25c544u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25c548: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25c54c: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x25c54cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x25c550: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25c554: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25c554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25c558: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25c558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25c55c: 0xc782a28c  lwc1        $f2, -0x5D74($gp)
    ctx->pc = 0x25c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c560: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x25c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x25c564: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x25c564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x25c568: 0x46040b00  add.s       $f12, $f1, $f4
    ctx->pc = 0x25c568u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x25c56c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x25c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x25c570: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x25c570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x25c574: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x25c574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25c578: 0x0  nop
    ctx->pc = 0x25c578u;
    // NOP
    // 0x25c57c: 0x0  nop
    ctx->pc = 0x25c57cu;
    // NOP
    // 0x25c580: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25c580u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25c584: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25c584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x25c588: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x25c588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x25c58c: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x25c58cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25c590: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25c590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c594: 0x0  nop
    ctx->pc = 0x25c594u;
    // NOP
    // 0x25c598: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C598u;
    {
        const bool branch_taken_0x25c598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C598u;
        // 0x25c59c: 0xe7a20094  swc1        $f2, 0x94($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c598) {
            ctx->pc = 0x25C5B4u;
            goto label_25c5b4;
        }
    }
    ctx->pc = 0x25C5A0u;
    // 0x25c5a0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25C5A0u;
    SET_GPR_U32(ctx, 31, 0x25C5A8u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25C5A0u, 0x25C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5A8u;
label_25c5a8:
    // 0x25c5a8: 0xc7a80050  lwc1        $f8, 0x50($sp)
    ctx->pc = 0x25c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25c5ac: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x25c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c5b0: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x25c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25c5b4:
    // 0x25c5b4: 0x0  nop
    ctx->pc = 0x25c5b4u;
    // NOP
    // 0x25c5b8: 0x0  nop
    ctx->pc = 0x25c5b8u;
    // NOP
    // 0x25c5bc: 0x4600a183  div.s       $f6, $f20, $f0
    ctx->pc = 0x25c5bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[0];
    // 0x25c5c0: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x25c5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x25c5c4: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x25c5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x25c5c8: 0x46063882  mul.s       $f2, $f7, $f6
    ctx->pc = 0x25c5c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x25c5cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25c5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25c5d0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25c5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25c5d4: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x25C5D4u;
    {
        const bool branch_taken_0x25c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5D4u;
        // 0x25c5d8: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5d4) {
            ctx->pc = 0x25CD48u;
            goto label_25cd48;
        }
    }
    ctx->pc = 0x25C5DCu;
label_25c5dc:
    // 0x25c5dc: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x25c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x25c5e0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x25c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x25c5e4: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x25c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x25c5e8: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x25c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x25c5ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25c5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5f0: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25C5F0u;
    {
        const bool branch_taken_0x25c5f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5F0u;
        // 0x25c5f4: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5f0) {
            ctx->pc = 0x25C62Cu;
            goto label_25c62c;
        }
    }
    ctx->pc = 0x25C5F8u;
    // 0x25c5f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x25c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x25c5fc: 0xc6c00030  lwc1        $f0, 0x30($s6)
    ctx->pc = 0x25c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c600: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x25c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c604: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25c604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25c608: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x25c608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x25c60c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x25c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c610: 0xc6c10034  lwc1        $f1, 0x34($s6)
    ctx->pc = 0x25c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c614: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25c614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25c618: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x25c618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x25c61c: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x25c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c620: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x25c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c624: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25C624u;
    {
        const bool branch_taken_0x25c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C624u;
        // 0x25c628: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c624) {
            ctx->pc = 0x25C688u;
            goto label_25c688;
        }
    }
    ctx->pc = 0x25C62Cu;
label_25c62c:
    // 0x25c62c: 0x2482ff37  addiu       $v0, $a0, -0xC9
    ctx->pc = 0x25c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967095));
    // 0x25c630: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x25c630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x25c634: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25C634u;
    {
        const bool branch_taken_0x25c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C634u;
        // 0x25c638: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c634) {
            ctx->pc = 0x25C674u;
            goto label_25c674;
        }
    }
    ctx->pc = 0x25C63Cu;
    // 0x25c63c: 0x3c03fffa  lui         $v1, 0xFFFA
    ctx->pc = 0x25c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65530 << 16));
    // 0x25c640: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x25c640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25c644: 0x34636b04  ori         $v1, $v1, 0x6B04
    ctx->pc = 0x25c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27396);
    // 0x25c648: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x25c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x25c64c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c650: 0xafa701fc  sw          $a3, 0x1FC($sp)
    ctx->pc = 0x25c650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 7));
    // 0x25c654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c658: 0x82f021  addu        $fp, $a0, $v0
    ctx->pc = 0x25c658u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25c65c: 0xc7c00098  lwc1        $f0, 0x98($fp)
    ctx->pc = 0x25c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c660: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x25c660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x25c664: 0xc7c1009c  lwc1        $f1, 0x9C($fp)
    ctx->pc = 0x25c664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c668: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x25c668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x25c66c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C66Cu;
    {
        const bool branch_taken_0x25c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C66Cu;
        // 0x25c670: 0xc7c000a0  lwc1        $f0, 0xA0($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c66c) {
            ctx->pc = 0x25C688u;
            goto label_25c688;
        }
    }
    ctx->pc = 0x25C674u;
label_25c674:
    // 0x25c674: 0xc6c00030  lwc1        $f0, 0x30($s6)
    ctx->pc = 0x25c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c678: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x25c678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x25c67c: 0xc6c10034  lwc1        $f1, 0x34($s6)
    ctx->pc = 0x25c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c680: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x25c680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x25c684: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x25c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c688:
    // 0x25c688: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25c68c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C68Cu;
    {
        const bool branch_taken_0x25c68c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C68Cu;
        // 0x25c690: 0xe7a001a8  swc1        $f0, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c68c) {
            ctx->pc = 0x25C6A8u;
            goto label_25c6a8;
        }
    }
    ctx->pc = 0x25C694u;
    // 0x25c694: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x25c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x25c698: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C698u;
    {
        const bool branch_taken_0x25c698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C698u;
        // 0x25c69c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c698) {
            ctx->pc = 0x25C6A8u;
            goto label_25c6a8;
        }
    }
    ctx->pc = 0x25C6A0u;
    // 0x25c6a0: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C6A0u;
    {
        const bool branch_taken_0x25c6a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25c6a0) {
            ctx->pc = 0x25C6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C6A0u;
            // 0x25c6a4: 0x27b001a0  addiu       $s0, $sp, 0x1A0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C6C0u;
            goto label_25c6c0;
        }
    }
    ctx->pc = 0x25C6A8u;
label_25c6a8:
    // 0x25c6a8: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x25c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c6b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c6b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25c6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25c6b8: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x25c6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x25c6bc: 0x27b001a0  addiu       $s0, $sp, 0x1A0
    ctx->pc = 0x25c6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_25c6c0:
    // 0x25c6c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6c8: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x25c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x25c6cc: 0xc0969f4  jal         func_25A7D0
    ctx->pc = 0x25C6CCu;
    SET_GPR_U32(ctx, 31, 0x25C6D4u);
    ctx->pc = 0x25C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C6CCu;
    // 0x25c6d0: 0x27a701f4  addiu       $a3, $sp, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7D0u, 0x25C6CCu, 0x25C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C6D4u;
label_25c6d4:
    // 0x25c6d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6dc: 0xc096f22  jal         func_25BC88
    ctx->pc = 0x25C6DCu;
    SET_GPR_U32(ctx, 31, 0x25C6E4u);
    ctx->pc = 0x25C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C6DCu;
    // 0x25c6e0: 0x27a601f8  addiu       $a2, $sp, 0x1F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC88u, 0x25C6DCu, 0x25C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C6E4u;
label_25c6e4:
    // 0x25c6e4: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x25c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x25c6e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c6ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C6ECu;
    {
        const bool branch_taken_0x25c6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6ECu;
        // 0x25c6f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6ec) {
            ctx->pc = 0x25C710u;
            goto label_25c710;
        }
    }
    ctx->pc = 0x25C6F4u;
    // 0x25c6f4: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x25c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x25c6f8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C6F8u;
    {
        const bool branch_taken_0x25c6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6F8u;
        // 0x25c6fc: 0x8fa301f4  lw          $v1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6f8) {
            ctx->pc = 0x25C714u;
            goto label_25c714;
        }
    }
    ctx->pc = 0x25C700u;
    // 0x25c700: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x25c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x25c704: 0xafa501f4  sw          $a1, 0x1F4($sp)
    ctx->pc = 0x25c704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 5));
    // 0x25c708: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x25c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x25c70c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25c70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c710:
    // 0x25c710: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x25c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_25c714:
    // 0x25c714: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c718: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C718u;
    {
        const bool branch_taken_0x25c718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c718) {
            ctx->pc = 0x25C71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C718u;
            // 0x25c71c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C720u;
    // 0x25c720: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x25c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x25c724: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C724u;
    {
        const bool branch_taken_0x25c724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x25c724) {
            ctx->pc = 0x25C728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C724u;
            // 0x25c728: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C72Cu;
    // 0x25c72c: 0xafa501f4  sw          $a1, 0x1F4($sp)
    ctx->pc = 0x25c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 5));
    // 0x25c730: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x25c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x25c734: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c738: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25c738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25c73c:
    // 0x25c73c: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x25C73Cu;
    {
        const bool branch_taken_0x25c73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c73c) {
            ctx->pc = 0x25C740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C73Cu;
            // 0x25c740: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C9DCu;
            goto label_25c9dc;
        }
    }
    ctx->pc = 0x25C744u;
    // 0x25c744: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x25c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c748: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x25c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x25c74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c750: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x25c750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c754: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25C754u;
    {
        const bool branch_taken_0x25c754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c754) {
            ctx->pc = 0x25C76Cu;
            goto label_25c76c;
        }
    }
    ctx->pc = 0x25C75Cu;
    // 0x25c75c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c760: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x25c760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x25c764: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25C764u;
    {
        const bool branch_taken_0x25c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C764u;
        // 0x25c768: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c764) {
            ctx->pc = 0x25C7B8u;
            goto label_25c7b8;
        }
    }
    ctx->pc = 0x25C76Cu;
label_25c76c:
    // 0x25c76c: 0x0  nop
    ctx->pc = 0x25c76cu;
    // NOP
    // 0x25c770: 0x0  nop
    ctx->pc = 0x25c770u;
    // NOP
    // 0x25c774: 0x460c0084  c1          0xC0084
    ctx->pc = 0x25c774u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x25c778: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x25c778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c77c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25C77Cu;
    {
        const bool branch_taken_0x25c77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c77c) {
            ctx->pc = 0x25C794u;
            goto label_25c794;
        }
    }
    ctx->pc = 0x25C784u;
    // 0x25c784: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25C784u;
    SET_GPR_U32(ctx, 31, 0x25C78Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25C784u, 0x25C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C78Cu;
label_25c78c:
    // 0x25c78c: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x25c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x25c790: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x25c790u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_25c794:
    // 0x25c794: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25c794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x25c798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c79c: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x25c79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x25c7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c7a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25c7a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25c7a8: 0x0  nop
    ctx->pc = 0x25c7a8u;
    // NOP
    // 0x25c7ac: 0x0  nop
    ctx->pc = 0x25c7acu;
    // NOP
    // 0x25c7b0: 0x46010443  div.s       $f17, $f0, $f1
    ctx->pc = 0x25c7b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[17] = ctx->f[0] / ctx->f[1];
    // 0x25c7b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25c7b8:
    // 0x25c7b8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x25c7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x25c7bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c7c0: 0x90430094  lbu         $v1, 0x94($v0)
    ctx->pc = 0x25c7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25c7c4: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x25c7c4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x25c7c8: 0x9046008f  lbu         $a2, 0x8F($v0)
    ctx->pc = 0x25c7c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 143)));
    // 0x25c7cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c7d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25c7d4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x25c7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25c7d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25c7dc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C7DCu;
    {
        const bool branch_taken_0x25c7dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7DCu;
        // 0x25c7e0: 0x46008c42  mul.s       $f17, $f17, $f0 (Delay Slot)
        ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7dc) {
            ctx->pc = 0x25C7F4u;
            goto label_25c7f4;
        }
    }
    ctx->pc = 0x25C7E4u;
    // 0x25c7e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25c7e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c7e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25c7ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C7ECu;
    {
        const bool branch_taken_0x25c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7ECu;
        // 0x25c7f0: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7ec) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C7F4u;
label_25c7f4:
    // 0x25c7f4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x25c7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x25c7f8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x25c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x25c7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25c800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25c800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25c808: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25c808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x25c80c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x25c80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_25c810:
    // 0x25c810: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c814: 0x9442008e  lhu         $v0, 0x8E($v0)
    ctx->pc = 0x25c814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x25c818: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25c818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c81c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C81Cu;
    {
        const bool branch_taken_0x25c81c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C81Cu;
        // 0x25c820: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c81c) {
            ctx->pc = 0x25C834u;
            goto label_25c834;
        }
    }
    ctx->pc = 0x25C824u;
    // 0x25c824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25c82c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C82Cu;
    {
        const bool branch_taken_0x25c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C82Cu;
        // 0x25c830: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c82c) {
            ctx->pc = 0x25C84Cu;
            goto label_25c84c;
        }
    }
    ctx->pc = 0x25C834u;
label_25c834:
    // 0x25c834: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25c834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25c838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25c83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25c83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25c844: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25c844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x25c848: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25c84c:
    // 0x25c84c: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x25c84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x25c850: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x25c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x25c854: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x25c854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25c858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25c858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c85c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C85Cu;
    {
        const bool branch_taken_0x25c85c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C85Cu;
        // 0x25c860: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c85c) {
            ctx->pc = 0x25C874u;
            goto label_25c874;
        }
    }
    ctx->pc = 0x25C864u;
    // 0x25c864: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x25c864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25c868: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25c868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25c86c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C86Cu;
    {
        const bool branch_taken_0x25c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C86Cu;
        // 0x25c870: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c86c) {
            ctx->pc = 0x25C88Cu;
            goto label_25c88c;
        }
    }
    ctx->pc = 0x25C874u;
label_25c874:
    // 0x25c874: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25c874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25c878: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25c87c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25c87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25c880: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25c880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25c884: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x25c884u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x25c888: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_25c88c:
    // 0x25c88c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25C88Cu;
    {
        const bool branch_taken_0x25c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C88Cu;
        // 0x25c890: 0xe7ac01b8  swc1        $f12, 0x1B8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c88c) {
            ctx->pc = 0x25C964u;
            goto label_25c964;
        }
    }
    ctx->pc = 0x25C894u;
    // 0x25c894: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c898: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x25c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c89c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x25c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c8a0: 0xc6a4002c  lwc1        $f4, 0x2C($s5)
    ctx->pc = 0x25c8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c8a4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x25c8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x25c8a8: 0xc6a80030  lwc1        $f8, 0x30($s5)
    ctx->pc = 0x25c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25c8ac: 0xc6ab0040  lwc1        $f11, 0x40($s5)
    ctx->pc = 0x25c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25c8b0: 0xc786834c  lwc1        $f6, -0x7CB4($gp)
    ctx->pc = 0x25c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25c8b4: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x25c8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x25c8b8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25c8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25c8bc: 0xc7a201b0  lwc1        $f2, 0x1B0($sp)
    ctx->pc = 0x25c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c8c0: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x25c8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c8c4: 0xc6a90044  lwc1        $f9, 0x44($s5)
    ctx->pc = 0x25c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25c8c8: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x25c8c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x25c8cc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x25c8ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x25c8d0: 0xc6aa0048  lwc1        $f10, 0x48($s5)
    ctx->pc = 0x25c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25c8d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x25c8d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25c8d8: 0xc7a501b4  lwc1        $f5, 0x1B4($sp)
    ctx->pc = 0x25c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c8dc: 0x460a6301  sub.s       $f12, $f12, $f10
    ctx->pc = 0x25c8dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[10]);
    // 0x25c8e0: 0xc7af01a0  lwc1        $f15, 0x1A0($sp)
    ctx->pc = 0x25c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25c8e4: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x25c8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x25c8e8: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x25c8e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x25c8ec: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x25c8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x25c8f0: 0xc7ae01a4  lwc1        $f14, 0x1A4($sp)
    ctx->pc = 0x25c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25c8f4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x25c8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c8f8: 0x46061342  mul.s       $f13, $f2, $f6
    ctx->pc = 0x25c8f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25c8fc: 0xc7a701a8  lwc1        $f7, 0x1A8($sp)
    ctx->pc = 0x25c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c900: 0x46066402  mul.s       $f16, $f12, $f6
    ctx->pc = 0x25c900u;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x25c904: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x25c904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x25c908: 0xe6a30028  swc1        $f3, 0x28($s5)
    ctx->pc = 0x25c908u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x25c90c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x25c90cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x25c910: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x25c910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x25c914: 0xe7a501c4  swc1        $f5, 0x1C4($sp)
    ctx->pc = 0x25c914u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x25c918: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x25c918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x25c91c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25c91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25c920: 0xe7ac01c8  swc1        $f12, 0x1C8($sp)
    ctx->pc = 0x25c920u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x25c924: 0xe6a4002c  swc1        $f4, 0x2C($s5)
    ctx->pc = 0x25c924u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x25c928: 0x460f18c1  sub.s       $f3, $f3, $f15
    ctx->pc = 0x25c928u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[15]);
    // 0x25c92c: 0x460e2101  sub.s       $f4, $f4, $f14
    ctx->pc = 0x25c92cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[14]);
    // 0x25c930: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x25c930u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x25c934: 0x460d5ac0  add.s       $f11, $f11, $f13
    ctx->pc = 0x25c934u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[13]);
    // 0x25c938: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x25c938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25c93c: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x25c93cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x25c940: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x25c940u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25c944: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x25c944u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x25c948: 0xe6a80030  swc1        $f8, 0x30($s5)
    ctx->pc = 0x25c948u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x25c94c: 0x46105280  add.s       $f10, $f10, $f16
    ctx->pc = 0x25c94cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[16]);
    // 0x25c950: 0xe6ab0040  swc1        $f11, 0x40($s5)
    ctx->pc = 0x25c950u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x25c954: 0xe6a90044  swc1        $f9, 0x44($s5)
    ctx->pc = 0x25c954u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x25c958: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x25c958u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25c95c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25C95Cu;
    {
        const bool branch_taken_0x25c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C95Cu;
        // 0x25c960: 0xe6aa0048  swc1        $f10, 0x48($s5) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c95c) {
            ctx->pc = 0x25C9ACu;
            goto label_25c9ac;
        }
    }
    ctx->pc = 0x25C964u;
label_25c964:
    // 0x25c964: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c968: 0xc7a201b0  lwc1        $f2, 0x1B0($sp)
    ctx->pc = 0x25c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c96c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x25c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c970: 0xc7a301b4  lwc1        $f3, 0x1B4($sp)
    ctx->pc = 0x25c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c974: 0xe6a10028  swc1        $f1, 0x28($s5)
    ctx->pc = 0x25c974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x25c978: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x25c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c97c: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x25c97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x25c980: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x25c980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c984: 0xe6a10030  swc1        $f1, 0x30($s5)
    ctx->pc = 0x25c984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x25c988: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25c988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c98c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25c98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25c990: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c994: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x25c994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25c998: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x25c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c99c: 0xe6a20040  swc1        $f2, 0x40($s5)
    ctx->pc = 0x25c99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x25c9a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x25c9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25c9a4: 0xe6a30044  swc1        $f3, 0x44($s5)
    ctx->pc = 0x25c9a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x25c9a8: 0xe6ac0048  swc1        $f12, 0x48($s5)
    ctx->pc = 0x25c9a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
label_25c9ac:
    // 0x25c9ac: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x25c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c9b0: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x25c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c9b4: 0xc6a20048  lwc1        $f2, 0x48($s5)
    ctx->pc = 0x25c9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c9b8: 0x46110002  mul.s       $f0, $f0, $f17
    ctx->pc = 0x25c9b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x25c9bc: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x25c9bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x25c9c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c9c4: 0x46111082  mul.s       $f2, $f2, $f17
    ctx->pc = 0x25c9c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[17]);
    // 0x25c9c8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25c9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25c9cc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x25c9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25c9d0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x25c9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25c9d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C9D4u;
    {
        const bool branch_taken_0x25c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9D4u;
        // 0x25c9d8: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9d4) {
            ctx->pc = 0x25C9F8u;
            goto label_25c9f8;
        }
    }
    ctx->pc = 0x25C9DCu;
label_25c9dc:
    // 0x25c9dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c9e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c9e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25c9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25c9e8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x25c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x25c9ec: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x25c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x25c9f0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x25c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x25c9f4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x25c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_25c9f8:
    // 0x25c9f8: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x25c9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x25c9fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ca00: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x25CA00u;
    {
        const bool branch_taken_0x25ca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca00) {
            ctx->pc = 0x25CA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CA00u;
            // 0x25ca04: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CCA0u;
            goto label_25cca0;
        }
    }
    ctx->pc = 0x25CA08u;
    // 0x25ca08: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x25ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ca0c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x25ca0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x25ca10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ca10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ca14: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x25ca14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ca18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25CA18u;
    {
        const bool branch_taken_0x25ca18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ca18) {
            ctx->pc = 0x25CA30u;
            goto label_25ca30;
        }
    }
    ctx->pc = 0x25CA20u;
    // 0x25ca20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ca20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ca24: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x25ca24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x25ca28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25CA28u;
    {
        const bool branch_taken_0x25ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca28) {
            ctx->pc = 0x25CA78u;
            goto label_25ca78;
        }
    }
    ctx->pc = 0x25CA30u;
label_25ca30:
    // 0x25ca30: 0x0  nop
    ctx->pc = 0x25ca30u;
    // NOP
    // 0x25ca34: 0x0  nop
    ctx->pc = 0x25ca34u;
    // NOP
    // 0x25ca38: 0x460c0084  c1          0xC0084
    ctx->pc = 0x25ca38u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x25ca3c: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x25ca3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ca40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25CA40u;
    {
        const bool branch_taken_0x25ca40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ca40) {
            ctx->pc = 0x25CA58u;
            goto label_25ca58;
        }
    }
    ctx->pc = 0x25CA48u;
    // 0x25ca48: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25CA48u;
    SET_GPR_U32(ctx, 31, 0x25CA50u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25CA48u, 0x25CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA50u;
label_25ca50:
    // 0x25ca50: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x25ca50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x25ca54: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x25ca54u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_25ca58:
    // 0x25ca58: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x25ca5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ca5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ca60: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x25ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x25ca64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ca64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ca68: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25ca68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25ca6c: 0x0  nop
    ctx->pc = 0x25ca6cu;
    // NOP
    // 0x25ca70: 0x0  nop
    ctx->pc = 0x25ca70u;
    // NOP
    // 0x25ca74: 0x46010443  div.s       $f17, $f0, $f1
    ctx->pc = 0x25ca74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[17] = ctx->f[0] / ctx->f[1];
label_25ca78:
    // 0x25ca78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ca7c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x25ca80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ca80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ca84: 0x90430094  lbu         $v1, 0x94($v0)
    ctx->pc = 0x25ca84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x25ca88: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x25ca88u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x25ca8c: 0x9045008f  lbu         $a1, 0x8F($v0)
    ctx->pc = 0x25ca8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 143)));
    // 0x25ca90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ca90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ca94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ca94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25ca98: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x25ca98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25ca9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25caa0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CAA0u;
    {
        const bool branch_taken_0x25caa0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAA0u;
        // 0x25caa4: 0x46008c42  mul.s       $f17, $f17, $f0 (Delay Slot)
        ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25caa0) {
            ctx->pc = 0x25CAB8u;
            goto label_25cab8;
        }
    }
    ctx->pc = 0x25CAA8u;
    // 0x25caa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25caa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25caac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25caacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cab0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CAB0u;
    {
        const bool branch_taken_0x25cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAB0u;
        // 0x25cab4: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cab0) {
            ctx->pc = 0x25CAD4u;
            goto label_25cad4;
        }
    }
    ctx->pc = 0x25CAB8u;
label_25cab8:
    // 0x25cab8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x25cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25cabc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x25cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x25cac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25cac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25cac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cacc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25caccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x25cad0: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x25cad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_25cad4:
    // 0x25cad4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25cad8: 0x9442008e  lhu         $v0, 0x8E($v0)
    ctx->pc = 0x25cad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x25cadc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25cae0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CAE0u;
    {
        const bool branch_taken_0x25cae0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAE0u;
        // 0x25cae4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cae0) {
            ctx->pc = 0x25CAF8u;
            goto label_25caf8;
        }
    }
    ctx->pc = 0x25CAE8u;
    // 0x25cae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25cae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25caec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25caecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25caf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25CAF0u;
    {
        const bool branch_taken_0x25caf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAF0u;
        // 0x25caf4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25caf0) {
            ctx->pc = 0x25CB10u;
            goto label_25cb10;
        }
    }
    ctx->pc = 0x25CAF8u;
label_25caf8:
    // 0x25caf8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25cafc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25cafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25cb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25cb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cb04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25cb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25cb08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25cb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x25cb0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25cb10:
    // 0x25cb10: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x25cb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x25cb14: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x25cb18: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x25cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25cb1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25cb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25cb20: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CB20u;
    {
        const bool branch_taken_0x25cb20 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB20u;
        // 0x25cb24: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb20) {
            ctx->pc = 0x25CB38u;
            goto label_25cb38;
        }
    }
    ctx->pc = 0x25CB28u;
    // 0x25cb28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x25cb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25cb2c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25cb2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25cb30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25CB30u;
    {
        const bool branch_taken_0x25cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB30u;
        // 0x25cb34: 0x8ea20024  lw          $v0, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb30) {
            ctx->pc = 0x25CB50u;
            goto label_25cb50;
        }
    }
    ctx->pc = 0x25CB38u;
label_25cb38:
    // 0x25cb38: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25cb3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25cb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25cb40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25cb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25cb44: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25cb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25cb48: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x25cb48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x25cb4c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x25cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_25cb50:
    // 0x25cb50: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25CB50u;
    {
        const bool branch_taken_0x25cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB50u;
        // 0x25cb54: 0xe7ac01b8  swc1        $f12, 0x1B8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb50) {
            ctx->pc = 0x25CC28u;
            goto label_25cc28;
        }
    }
    ctx->pc = 0x25CB58u;
    // 0x25cb58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25cb5c: 0xc6a30034  lwc1        $f3, 0x34($s5)
    ctx->pc = 0x25cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25cb60: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x25cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cb64: 0xc6a40038  lwc1        $f4, 0x38($s5)
    ctx->pc = 0x25cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25cb68: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x25cb68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x25cb6c: 0xc6a8003c  lwc1        $f8, 0x3C($s5)
    ctx->pc = 0x25cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25cb70: 0xc6ab004c  lwc1        $f11, 0x4C($s5)
    ctx->pc = 0x25cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25cb74: 0xc7868350  lwc1        $f6, -0x7CB0($gp)
    ctx->pc = 0x25cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25cb78: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x25cb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x25cb7c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25cb7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25cb80: 0xc7a201b0  lwc1        $f2, 0x1B0($sp)
    ctx->pc = 0x25cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cb84: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x25cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cb88: 0xc6a90050  lwc1        $f9, 0x50($s5)
    ctx->pc = 0x25cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25cb8c: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x25cb8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x25cb90: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x25cb90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x25cb94: 0xc6aa0054  lwc1        $f10, 0x54($s5)
    ctx->pc = 0x25cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25cb98: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x25cb98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25cb9c: 0xc7a501b4  lwc1        $f5, 0x1B4($sp)
    ctx->pc = 0x25cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25cba0: 0x460a6301  sub.s       $f12, $f12, $f10
    ctx->pc = 0x25cba0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[10]);
    // 0x25cba4: 0xc7af01a0  lwc1        $f15, 0x1A0($sp)
    ctx->pc = 0x25cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25cba8: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x25cba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x25cbac: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x25cbacu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x25cbb0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x25cbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x25cbb4: 0xc7ae01a4  lwc1        $f14, 0x1A4($sp)
    ctx->pc = 0x25cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25cbb8: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x25cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cbbc: 0x46061342  mul.s       $f13, $f2, $f6
    ctx->pc = 0x25cbbcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25cbc0: 0xc7a701a8  lwc1        $f7, 0x1A8($sp)
    ctx->pc = 0x25cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25cbc4: 0x46066402  mul.s       $f16, $f12, $f6
    ctx->pc = 0x25cbc4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x25cbc8: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x25cbc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x25cbcc: 0xe6a30034  swc1        $f3, 0x34($s5)
    ctx->pc = 0x25cbccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x25cbd0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x25cbd0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x25cbd4: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x25cbd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x25cbd8: 0xe7a501d4  swc1        $f5, 0x1D4($sp)
    ctx->pc = 0x25cbd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x25cbdc: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x25cbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x25cbe0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x25cbe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25cbe4: 0xe7ac01d8  swc1        $f12, 0x1D8($sp)
    ctx->pc = 0x25cbe4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x25cbe8: 0xe6a40038  swc1        $f4, 0x38($s5)
    ctx->pc = 0x25cbe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x25cbec: 0x460f18c1  sub.s       $f3, $f3, $f15
    ctx->pc = 0x25cbecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[15]);
    // 0x25cbf0: 0x460e2101  sub.s       $f4, $f4, $f14
    ctx->pc = 0x25cbf0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[14]);
    // 0x25cbf4: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x25cbf4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x25cbf8: 0x460d5ac0  add.s       $f11, $f11, $f13
    ctx->pc = 0x25cbf8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[13]);
    // 0x25cbfc: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x25cbfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25cc00: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x25cc00u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x25cc04: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x25cc04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25cc08: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x25cc08u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x25cc0c: 0xe6a8003c  swc1        $f8, 0x3C($s5)
    ctx->pc = 0x25cc0cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x25cc10: 0x46105280  add.s       $f10, $f10, $f16
    ctx->pc = 0x25cc10u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[16]);
    // 0x25cc14: 0xe6ab004c  swc1        $f11, 0x4C($s5)
    ctx->pc = 0x25cc14u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x25cc18: 0xe6a90050  swc1        $f9, 0x50($s5)
    ctx->pc = 0x25cc18u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x25cc1c: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x25cc1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25cc20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25CC20u;
    {
        const bool branch_taken_0x25cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC20u;
        // 0x25cc24: 0xe6aa0054  swc1        $f10, 0x54($s5) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc20) {
            ctx->pc = 0x25CC70u;
            goto label_25cc70;
        }
    }
    ctx->pc = 0x25CC28u;
label_25cc28:
    // 0x25cc28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25cc2c: 0xc7a201b0  lwc1        $f2, 0x1B0($sp)
    ctx->pc = 0x25cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cc30: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x25cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cc34: 0xc7a301b4  lwc1        $f3, 0x1B4($sp)
    ctx->pc = 0x25cc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25cc38: 0xe6a10034  swc1        $f1, 0x34($s5)
    ctx->pc = 0x25cc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x25cc3c: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x25cc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc40: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x25cc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x25cc44: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x25cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cc48: 0xe6a1003c  swc1        $f1, 0x3C($s5)
    ctx->pc = 0x25cc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x25cc4c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc50: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25cc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25cc54: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x25cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cc58: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x25cc58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25cc5c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x25cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc60: 0xe6a2004c  swc1        $f2, 0x4C($s5)
    ctx->pc = 0x25cc60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x25cc64: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25cc68: 0xe6a30050  swc1        $f3, 0x50($s5)
    ctx->pc = 0x25cc68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x25cc6c: 0xe6ac0054  swc1        $f12, 0x54($s5)
    ctx->pc = 0x25cc6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
label_25cc70:
    // 0x25cc70: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x25cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc74: 0xc6a10050  lwc1        $f1, 0x50($s5)
    ctx->pc = 0x25cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cc78: 0xc6a20054  lwc1        $f2, 0x54($s5)
    ctx->pc = 0x25cc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cc7c: 0x46110002  mul.s       $f0, $f0, $f17
    ctx->pc = 0x25cc7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x25cc80: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x25cc80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x25cc84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25cc88: 0x46111082  mul.s       $f2, $f2, $f17
    ctx->pc = 0x25cc88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[17]);
    // 0x25cc8c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25cc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25cc90: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x25cc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25cc94: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x25cc94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25cc98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CC98u;
    {
        const bool branch_taken_0x25cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC98u;
        // 0x25cc9c: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc98) {
            ctx->pc = 0x25CCBCu;
            goto label_25ccbc;
        }
    }
    ctx->pc = 0x25CCA0u;
label_25cca0:
    // 0x25cca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cca8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25cca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25ccac: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x25ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x25ccb0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x25ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x25ccb4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x25ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x25ccb8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x25ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_25ccbc:
    // 0x25ccbc: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25CCBCu;
    {
        const bool branch_taken_0x25ccbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCBCu;
        // 0x25ccc0: 0xc7a001a0  lwc1        $f0, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ccbc) {
            ctx->pc = 0x25CD1Cu;
            goto label_25cd1c;
        }
    }
    ctx->pc = 0x25CCC4u;
    // 0x25ccc4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x25ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ccc8: 0xc7a301a4  lwc1        $f3, 0x1A4($sp)
    ctx->pc = 0x25ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25cccc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25ccccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25ccd0: 0xc7a401a8  lwc1        $f4, 0x1A8($sp)
    ctx->pc = 0x25ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ccd4: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x25ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ccd8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25ccd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ccdc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x25ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cce0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x25cce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x25cce4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25cce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25cce8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x25cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ccec: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x25ccecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x25ccf0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x25ccf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25ccf4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x25ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ccf8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25ccf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25ccfc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x25ccfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25cd00: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x25cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cd04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25cd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25cd08: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x25cd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x25cd0c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x25cd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cd10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25cd10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25cd14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25CD14u;
    {
        const bool branch_taken_0x25cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD14u;
        // 0x25cd18: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd14) {
            ctx->pc = 0x25CD3Cu;
            goto label_25cd3c;
        }
    }
    ctx->pc = 0x25CD1Cu;
label_25cd1c:
    // 0x25cd1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cd20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cd24: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x25cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x25cd28: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25cd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25cd2c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x25cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x25cd30: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x25cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25cd34: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x25cd38: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x25cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_25cd3c:
    // 0x25cd3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25cd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd40: 0xc096ab8  jal         func_25AAE0
    ctx->pc = 0x25CD40u;
    SET_GPR_U32(ctx, 31, 0x25CD48u);
    ctx->pc = 0x25CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD40u;
    // 0x25cd44: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AAE0u, 0x25CD40u, 0x25CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD48u;
label_25cd48:
    // 0x25cd48: 0xc7a80030  lwc1        $f8, 0x30($sp)
    ctx->pc = 0x25cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25cd4c: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x25cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25cd50: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x25cd50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25cd54: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x25cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25cd58: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x25cd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25cd5c: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x25cd5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x25cd60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25cd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25cd64: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x25cd64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25cd68: 0x0  nop
    ctx->pc = 0x25cd68u;
    // NOP
    // 0x25cd6c: 0x0  nop
    ctx->pc = 0x25cd6cu;
    // NOP
    // 0x25cd70: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x25cd70u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x25cd74: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x25cd74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cd78: 0x0  nop
    ctx->pc = 0x25cd78u;
    // NOP
    // 0x25cd7c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25CD7Cu;
    {
        const bool branch_taken_0x25cd7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD7Cu;
        // 0x25cd80: 0xc7aa0040  lwc1        $f10, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd7c) {
            ctx->pc = 0x25CDA0u;
            goto label_25cda0;
        }
    }
    ctx->pc = 0x25CD84u;
    // 0x25cd84: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25CD84u;
    SET_GPR_U32(ctx, 31, 0x25CD8Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25CD84u, 0x25CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD8Cu;
label_25cd8c:
    // 0x25cd8c: 0xc7a80030  lwc1        $f8, 0x30($sp)
    ctx->pc = 0x25cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25cd90: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x25cd90u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x25cd94: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x25cd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25cd98: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x25cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25cd9c: 0xc7aa0040  lwc1        $f10, 0x40($sp)
    ctx->pc = 0x25cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_25cda0:
    // 0x25cda0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x25cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25cda4: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x25cda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x25cda8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cdac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25cdb0: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x25cdb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x25cdb4: 0xc7a90048  lwc1        $f9, 0x48($sp)
    ctx->pc = 0x25cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25cdb8: 0x0  nop
    ctx->pc = 0x25cdb8u;
    // NOP
    // 0x25cdbc: 0x0  nop
    ctx->pc = 0x25cdbcu;
    // NOP
    // 0x25cdc0: 0x4603a183  div.s       $f6, $f20, $f3
    ctx->pc = 0x25cdc0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[3];
    // 0x25cdc4: 0x46094842  mul.s       $f1, $f9, $f9
    ctx->pc = 0x25cdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x25cdc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25cdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25cdcc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x25cdccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25cdd0: 0x46062882  mul.s       $f2, $f5, $f6
    ctx->pc = 0x25cdd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x25cdd4: 0x46064002  mul.s       $f0, $f8, $f6
    ctx->pc = 0x25cdd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x25cdd8: 0x0  nop
    ctx->pc = 0x25cdd8u;
    // NOP
    // 0x25cddc: 0x0  nop
    ctx->pc = 0x25cddcu;
    // NOP
    // 0x25cde0: 0x460c0144  c1          0xC0144
    ctx->pc = 0x25cde0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[12]);
    // 0x25cde4: 0x46063842  mul.s       $f1, $f7, $f6
    ctx->pc = 0x25cde4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x25cde8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x25cde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25cdec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25cdf0: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x25cdf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cdf4: 0x0  nop
    ctx->pc = 0x25cdf4u;
    // NOP
    // 0x25cdf8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25CDF8u;
    {
        const bool branch_taken_0x25cdf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDF8u;
        // 0x25cdfc: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cdf8) {
            ctx->pc = 0x25CE18u;
            goto label_25ce18;
        }
    }
    ctx->pc = 0x25CE00u;
    // 0x25ce00: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25CE00u;
    SET_GPR_U32(ctx, 31, 0x25CE08u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25CE00u, 0x25CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE08u;
label_25ce08:
    // 0x25ce08: 0xc7aa0040  lwc1        $f10, 0x40($sp)
    ctx->pc = 0x25ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25ce0c: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x25ce0cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x25ce10: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x25ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ce14: 0xc7a90048  lwc1        $f9, 0x48($sp)
    ctx->pc = 0x25ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_25ce18:
    // 0x25ce18: 0xc7a80050  lwc1        $f8, 0x50($sp)
    ctx->pc = 0x25ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25ce1c: 0x0  nop
    ctx->pc = 0x25ce1cu;
    // NOP
    // 0x25ce20: 0x0  nop
    ctx->pc = 0x25ce20u;
    // NOP
    // 0x25ce24: 0x4605a183  div.s       $f6, $f20, $f5
    ctx->pc = 0x25ce24u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[5];
    // 0x25ce28: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x25ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25ce2c: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x25ce2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25ce30: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x25ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25ce34: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x25ce34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x25ce38: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x25ce38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x25ce3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25ce3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25ce40: 0x460648c2  mul.s       $f3, $f9, $f6
    ctx->pc = 0x25ce40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x25ce44: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x25ce44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x25ce48: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x25ce48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25ce4c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x25ce4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x25ce50: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x25ce50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25ce54: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x25ce54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25ce58: 0x0  nop
    ctx->pc = 0x25ce58u;
    // NOP
    // 0x25ce5c: 0x0  nop
    ctx->pc = 0x25ce5cu;
    // NOP
    // 0x25ce60: 0x460c0004  c1          0xC0004
    ctx->pc = 0x25ce60u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x25ce64: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x25ce64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ce68: 0x0  nop
    ctx->pc = 0x25ce68u;
    // NOP
    // 0x25ce6c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25CE6Cu;
    {
        const bool branch_taken_0x25ce6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE6Cu;
        // 0x25ce70: 0xe7a40044  swc1        $f4, 0x44($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce6c) {
            ctx->pc = 0x25CE88u;
            goto label_25ce88;
        }
    }
    ctx->pc = 0x25CE74u;
    // 0x25ce74: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x25CE74u;
    SET_GPR_U32(ctx, 31, 0x25CE7Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x25CE74u, 0x25CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE7Cu;
label_25ce7c:
    // 0x25ce7c: 0xc7a80050  lwc1        $f8, 0x50($sp)
    ctx->pc = 0x25ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25ce80: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x25ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25ce84: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x25ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25ce88:
    // 0x25ce88: 0x0  nop
    ctx->pc = 0x25ce88u;
    // NOP
    // 0x25ce8c: 0x0  nop
    ctx->pc = 0x25ce8cu;
    // NOP
    // 0x25ce90: 0x4600a183  div.s       $f6, $f20, $f0
    ctx->pc = 0x25ce90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[6] = ctx->f[20] / ctx->f[0];
    // 0x25ce94: 0xc7838354  lwc1        $f3, -0x7CAC($gp)
    ctx->pc = 0x25ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ce98: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x25ce9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25ce9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25cea0: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x25cea0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25cea4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cea8: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x25cea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x25ceac: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x25ceacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x25ceb0: 0x46063882  mul.s       $f2, $f7, $f6
    ctx->pc = 0x25ceb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x25ceb4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25ceb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25ceb8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x25ceb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25cebc: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x25cebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25cec0: 0xc6cf004c  lwc1        $f15, 0x4C($s6)
    ctx->pc = 0x25cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x25cec4: 0xc6ce0038  lwc1        $f14, 0x38($s6)
    ctx->pc = 0x25cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25cec8: 0x46037bc2  mul.s       $f15, $f15, $f3
    ctx->pc = 0x25cec8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x25cecc: 0xc6cc0030  lwc1        $f12, 0x30($s6)
    ctx->pc = 0x25ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ced0: 0x0  nop
    ctx->pc = 0x25ced0u;
    // NOP
    // 0x25ced4: 0x0  nop
    ctx->pc = 0x25ced4u;
    // NOP
    // 0x25ced8: 0x46047bc3  div.s       $f15, $f15, $f4
    ctx->pc = 0x25ced8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[4];
    // 0x25cedc: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x25CEDCu;
    SET_GPR_U32(ctx, 31, 0x25CEE4u);
    ctx->pc = 0x25CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEDCu;
    // 0x25cee0: 0xc6cd0034  lwc1        $f13, 0x34($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x25CEDCu, 0x25CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEE4u;
label_25cee4:
    // 0x25cee4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x25cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25cee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ceec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x25ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25cef0: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x25cef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25cef4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x25cef4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x25cef8: 0x18600065  blez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x25CEF8u;
    {
        const bool branch_taken_0x25cef8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEF8u;
        // 0x25cefc: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cef8) {
            ctx->pc = 0x25D090u;
            goto label_25d090;
        }
    }
    ctx->pc = 0x25CF00u;
    // 0x25cf00: 0x27b60160  addiu       $s6, $sp, 0x160
    ctx->pc = 0x25cf00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x25cf04: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x25cf04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25cf08: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x25cf08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x25cf0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25cf0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cf10:
    // 0x25cf10: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x25cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cf14: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x25cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cf18: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x25cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cf1c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x25cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25cf20: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x25cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25cf24: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x25cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25cf28: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x25cf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25cf2c: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x25cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25cf30: 0xc7a80058  lwc1        $f8, 0x58($sp)
    ctx->pc = 0x25cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25cf34: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x25cf34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x25cf38: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x25cf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x25cf3c: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x25cf3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x25cf40: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x25cf40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x25cf44: 0xe7a301c0  swc1        $f3, 0x1C0($sp)
    ctx->pc = 0x25cf44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x25cf48: 0xe7a401c4  swc1        $f4, 0x1C4($sp)
    ctx->pc = 0x25cf48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x25cf4c: 0xe7a501c8  swc1        $f5, 0x1C8($sp)
    ctx->pc = 0x25cf4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x25cf50: 0xe7a601e0  swc1        $f6, 0x1E0($sp)
    ctx->pc = 0x25cf50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x25cf54: 0xe7a701e4  swc1        $f7, 0x1E4($sp)
    ctx->pc = 0x25cf54u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x25cf58: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x25CF58u;
    {
        const bool branch_taken_0x25cf58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF58u;
        // 0x25cf5c: 0xe7a801e8  swc1        $f8, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf58) {
            ctx->pc = 0x25CFD8u;
            goto label_25cfd8;
        }
    }
    ctx->pc = 0x25CF60u;
    // 0x25cf60: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x25cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x25cf64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25CF64u;
    {
        const bool branch_taken_0x25cf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF64u;
        // 0x25cf68: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf64) {
            ctx->pc = 0x25CF98u;
            goto label_25cf98;
        }
    }
    ctx->pc = 0x25CF6Cu;
    // 0x25cf6c: 0x8fc506ec  lw          $a1, 0x6EC($fp)
    ctx->pc = 0x25cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1772)));
    // 0x25cf70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25cf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf74: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x25CF74u;
    SET_GPR_U32(ctx, 31, 0x25CF7Cu);
    ctx->pc = 0x25CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF74u;
    // 0x25cf78: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x25CF74u, 0x25CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF7Cu;
label_25cf7c:
    // 0x25cf7c: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x25cf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x25cf80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25cf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf88: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x25CF88u;
    SET_GPR_U32(ctx, 31, 0x25CF90u);
    ctx->pc = 0x25CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF88u;
    // 0x25cf8c: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x25CF88u, 0x25CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF90u;
label_25cf90:
    // 0x25cf90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25CF90u;
    {
        const bool branch_taken_0x25cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF90u;
        // 0x25cf94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf90) {
            ctx->pc = 0x25CFACu;
            goto label_25cfac;
        }
    }
    ctx->pc = 0x25CF98u;
label_25cf98:
    // 0x25cf98: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x25cf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x25cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfa0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x25CFA0u;
    SET_GPR_U32(ctx, 31, 0x25CFA8u);
    ctx->pc = 0x25CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFA0u;
    // 0x25cfa4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x25CFA0u, 0x25CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFA8u;
label_25cfa8:
    // 0x25cfa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cfac:
    // 0x25cfac: 0xc0b57d8  jal         func_2D5F60
    ctx->pc = 0x25CFACu;
    SET_GPR_U32(ctx, 31, 0x25CFB4u);
    ctx->pc = 0x25CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFACu;
    // 0x25cfb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5F60u, 0x25CFACu, 0x25CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFB4u;
label_25cfb4:
    // 0x25cfb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfb8: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x25CFB8u;
    SET_GPR_U32(ctx, 31, 0x25CFC0u);
    ctx->pc = 0x25CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFB8u;
    // 0x25cfbc: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x25CFB8u, 0x25CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFC0u;
label_25cfc0:
    // 0x25cfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfc4: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x25CFC4u;
    SET_GPR_U32(ctx, 31, 0x25CFCCu);
    ctx->pc = 0x25CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFC4u;
    // 0x25cfc8: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x25CFC4u, 0x25CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFCCu;
label_25cfcc:
    // 0x25cfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfd0: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x25CFD0u;
    SET_GPR_U32(ctx, 31, 0x25CFD8u);
    ctx->pc = 0x25CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFD0u;
    // 0x25cfd4: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x25CFD0u, 0x25CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFD8u;
label_25cfd8:
    // 0x25cfd8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x25cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x25cfdc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x25cfdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x25cfe0: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x25cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cfe4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25cfe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cfec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25cfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cff0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25cff4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x25cff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x25cff8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25cffc: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x25cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d000: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d004: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d008: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x25d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d00c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d010: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d014: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d018: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d01c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x25d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d020: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d024: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d028: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x25d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d02c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d030: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d034: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x25d034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d038: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d03c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d040: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d044: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d048: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x25d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d04c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d050: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d054: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x25d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d058: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d05c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d060: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x25d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d064: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d068: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d06c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d070: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d074: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d078: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d07c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d080: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d084: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25d084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25d088: 0x1660ffa1  bnez        $s3, . + 4 + (-0x5F << 2)
    ctx->pc = 0x25D088u;
    {
        const bool branch_taken_0x25d088 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D088u;
        // 0x25d08c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d088) {
            ctx->pc = 0x25CF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cf10;
        }
    }
    ctx->pc = 0x25D090u;
label_25d090:
    // 0x25d090: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x25d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d094: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x25d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x25d098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d09c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d0a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0a8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x25d0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0b4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x25d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d0c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0c8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x25d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0d4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x25d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0e0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d0f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d0f4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x25d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d0fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d100: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x25d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d104: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d108: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d10c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x25d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d110: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d114: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d118: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d11c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d120: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x25d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d124: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d128: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d12c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x25d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d130: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d134: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25d138: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x25d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d13c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25d13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25d140: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25d144:
    // 0x25d144: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x25d144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x25d148: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x25d148u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x25d14c: 0xdfb70270  ld          $s7, 0x270($sp)
    ctx->pc = 0x25d14cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x25d150: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x25d150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25d154: 0xdfb50250  ld          $s5, 0x250($sp)
    ctx->pc = 0x25d154u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x25d158: 0xdfb40240  ld          $s4, 0x240($sp)
    ctx->pc = 0x25d158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x25d15c: 0xdfb30230  ld          $s3, 0x230($sp)
    ctx->pc = 0x25d15cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x25d160: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x25d160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x25d164: 0xdfb10210  ld          $s1, 0x210($sp)
    ctx->pc = 0x25d164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x25d168: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x25d168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x25d16c: 0xc7b702b8  lwc1        $f23, 0x2B8($sp)
    ctx->pc = 0x25d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25d170: 0xc7b602b0  lwc1        $f22, 0x2B0($sp)
    ctx->pc = 0x25d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25d174: 0xc7b502a8  lwc1        $f21, 0x2A8($sp)
    ctx->pc = 0x25d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d178: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x25d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d17c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D17Cu;
        // 0x25d180: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D184u;
}
