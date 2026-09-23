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

// Function: ipFishEye
// Address: 0x2962d0 - 0x2965ec
void ipFishEye_0x2962d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipFishEye_0x2962d0");
#endif

    switch (ctx->pc) {
        case 0x296340u: goto label_296340;
        case 0x29634cu: goto label_29634c;
        case 0x296354u: goto label_296354;
        case 0x296380u: goto label_296380;
        case 0x2963bcu: goto label_2963bc;
        case 0x2963e4u: goto label_2963e4;
        case 0x296420u: goto label_296420;
        case 0x29645cu: goto label_29645c;
        case 0x296498u: goto label_296498;
        case 0x2964b0u: goto label_2964b0;
        case 0x2964c0u: goto label_2964c0;
        case 0x2964d0u: goto label_2964d0;
        case 0x2964e4u: goto label_2964e4;
        case 0x2964f0u: goto label_2964f0;
        case 0x2964fcu: goto label_2964fc;
        case 0x296508u: goto label_296508;
        case 0x296510u: goto label_296510;
        case 0x296520u: goto label_296520;
        case 0x296528u: goto label_296528;
        case 0x296560u: goto label_296560;
        case 0x2965a4u: goto label_2965a4;
        default: break;
    }

    ctx->pc = 0x2962d0u;

    // 0x2962d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2962d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2962d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2962d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2962d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2962d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2962dc: 0xc7818c88  lwc1        $f1, -0x7378($gp)
    ctx->pc = 0x2962dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2962e0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x2962e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2962e4: 0xc7828c8c  lwc1        $f2, -0x7374($gp)
    ctx->pc = 0x2962e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2962e8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2962e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2962ec: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2962ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2962f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2962f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2962f4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2962f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2962f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2962f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2962fc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2962fcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x296300: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x296300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x296304: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x296304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x296308: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x296308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29630c: 0x46020500  add.s       $f20, $f0, $f2
    ctx->pc = 0x29630cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x296310: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x296310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x296314: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x296314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x296318: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x296318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29631c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x296320: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x296324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296324u;
    {
        const bool branch_taken_0x296324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296324u;
        // 0x296328: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296324) {
            ctx->pc = 0x296338u;
            goto label_296338;
        }
    }
    ctx->pc = 0x29632Cu;
    // 0x29632c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29632cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x296330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296334: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x296334u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_296338:
    // 0x296338: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x296338u;
    SET_GPR_U32(ctx, 31, 0x296340u);
    ctx->pc = 0x29633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296338u;
    // 0x29633c: 0x3c150033  lui         $s5, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x296338u, 0x296340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296340u;
label_296340:
    // 0x296340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296344: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x296344u;
    SET_GPR_U32(ctx, 31, 0x29634Cu);
    ctx->pc = 0x296348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296344u;
    // 0x296348: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x296344u, 0x29634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29634Cu;
label_29634c:
    // 0x29634c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x29634Cu;
    SET_GPR_U32(ctx, 31, 0x296354u);
    ctx->pc = 0x296350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29634Cu;
    // 0x296350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x29634Cu, 0x296354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296354u;
label_296354:
    // 0x296354: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x296354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x296358: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x296358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29635c: 0x8c720014  lw          $s2, 0x14($v1)
    ctx->pc = 0x29635cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x296360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296364: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x296364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296368: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x296368u;
    {
        const bool branch_taken_0x296368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296368u;
        // 0x29636c: 0x3c147f7f  lui         $s4, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296368) {
            ctx->pc = 0x296474u;
            goto label_296474;
        }
    }
    ctx->pc = 0x296370u;
    // 0x296370: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x296370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x296374: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x296374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x296378: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x296378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29637c: 0x36947f7f  ori         $s4, $s4, 0x7F7F
    ctx->pc = 0x29637cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32639);
label_296380:
    // 0x296380: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x296380u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296384: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x296384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x296388: 0xc7818c90  lwc1        $f1, -0x7370($gp)
    ctx->pc = 0x296388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29638c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x29638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296394: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x296394u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x296398: 0x0  nop
    ctx->pc = 0x296398u;
    // NOP
    // 0x29639c: 0x0  nop
    ctx->pc = 0x29639cu;
    // NOP
    // 0x2963a0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2963a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2963a4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2963a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2963a8: 0x0  nop
    ctx->pc = 0x2963a8u;
    // NOP
    // 0x2963ac: 0x0  nop
    ctx->pc = 0x2963acu;
    // NOP
    // 0x2963b0: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x2963b0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x2963b4: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2963B4u;
    SET_GPR_U32(ctx, 31, 0x2963BCu);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2963B4u, 0x2963BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963BCu;
label_2963bc:
    // 0x2963bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2963bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2963c0: 0x0  nop
    ctx->pc = 0x2963c0u;
    // NOP
    // 0x2963c4: 0x0  nop
    ctx->pc = 0x2963c4u;
    // NOP
    // 0x2963c8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2963c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2963cc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2963ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2963d0: 0x0  nop
    ctx->pc = 0x2963d0u;
    // NOP
    // 0x2963d4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2963D4u;
    {
        const bool branch_taken_0x2963d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2963d4) {
            ctx->pc = 0x2963D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2963D4u;
            // 0x2963d8: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2963E8u;
            goto label_2963e8;
        }
    }
    ctx->pc = 0x2963DCu;
    // 0x2963dc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2963DCu;
    SET_GPR_U32(ctx, 31, 0x2963E4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2963DCu, 0x2963E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963E4u;
label_2963e4:
    // 0x2963e4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2963e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2963e8:
    // 0x2963e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2963e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2963ec: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x2963ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2963f0: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x2963f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2963f4: 0x8ec499f0  lw          $a0, -0x6610($s6)
    ctx->pc = 0x2963f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941168)));
    // 0x2963f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2963fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2963fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296400: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x296400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x296404: 0x124900  sll         $t1, $s2, 4
    ctx->pc = 0x296404u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x296408: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x296408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x29640c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x29640cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x296410: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x296410u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x296414: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x296414u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x296418: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296418u;
    SET_GPR_U32(ctx, 31, 0x296420u);
    ctx->pc = 0x29641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296418u;
    // 0x29641c: 0x115900  sll         $t3, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296418u, 0x296420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296420u;
label_296420:
    // 0x296420: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x296420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x296424: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296428: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x296428u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x29642c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29642cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296430: 0x8ec499f0  lw          $a0, -0x6610($s6)
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941168)));
    // 0x296434: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x296438: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x296438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x29643c: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x29643cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x296440: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x296444: 0x1505023  subu        $t2, $t2, $s0
    ctx->pc = 0x296444u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x296448: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x296448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x29644c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x29644cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x296450: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x296454: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296454u;
    SET_GPR_U32(ctx, 31, 0x29645Cu);
    ctx->pc = 0x296458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296454u;
    // 0x296458: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296454u, 0x29645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29645Cu;
label_29645c:
    // 0x29645c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x29645cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296460: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x296460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x296464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296468: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x296468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29646c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x29646Cu;
    {
        const bool branch_taken_0x29646c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29646Cu;
        // 0x296470: 0x26a399f0  addiu       $v1, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29646c) {
            ctx->pc = 0x296380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296380;
        }
    }
    ctx->pc = 0x296474u;
label_296474:
    // 0x296474: 0x8eb299f0  lw          $s2, -0x6610($s5)
    ctx->pc = 0x296474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x296478: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29647c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296480: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x296480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296484: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x296484u;
    {
        const bool branch_taken_0x296484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296484u;
        // 0x296488: 0x3c147f7f  lui         $s4, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296484) {
            ctx->pc = 0x2965B8u;
            goto label_2965b8;
        }
    }
    ctx->pc = 0x29648Cu;
    // 0x29648c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x29648cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296490: 0x36947f7f  ori         $s4, $s4, 0x7F7F
    ctx->pc = 0x296490u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32639);
    // 0x296494: 0x8ea299f0  lw          $v0, -0x6610($s5)
    ctx->pc = 0x296494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
label_296498:
    // 0x296498: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x296498u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x29649c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2964a0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2964a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2964a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2964a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2964a8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2964A8u;
    SET_GPR_U32(ctx, 31, 0x2964B0u);
    ctx->pc = 0x2964ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964A8u;
    // 0x2964ac: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2964A8u, 0x2964B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964B0u;
label_2964b0:
    // 0x2964b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2964b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2964b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964b8: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2964B8u;
    SET_GPR_U32(ctx, 31, 0x2964C0u);
    ctx->pc = 0x2964BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964B8u;
    // 0x2964bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2964B8u, 0x2964C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964C0u;
label_2964c0:
    // 0x2964c0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2964C0u;
    {
        const bool branch_taken_0x2964c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2964C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2964C0u;
        // 0x2964c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964c0) {
            ctx->pc = 0x2964D4u;
            goto label_2964d4;
        }
    }
    ctx->pc = 0x2964C8u;
    // 0x2964c8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2964C8u;
    SET_GPR_U32(ctx, 31, 0x2964D0u);
    ctx->pc = 0x2964CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964C8u;
    // 0x2964cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2964C8u, 0x2964D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964D0u;
label_2964d0:
    // 0x2964d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2964d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2964d4:
    // 0x2964d4: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x2964d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2964d8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2964d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2964dc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2964DCu;
    SET_GPR_U32(ctx, 31, 0x2964E4u);
    ctx->pc = 0x2964E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964DCu;
    // 0x2964e0: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2964DCu, 0x2964E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964E4u;
label_2964e4:
    // 0x2964e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2964e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964e8: 0xc0b8d3a  jal         func_2E34E8
    ctx->pc = 0x2964E8u;
    SET_GPR_U32(ctx, 31, 0x2964F0u);
    ctx->pc = 0x2964ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964E8u;
    // 0x2964ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E34E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E34E8u, 0x2964E8u, 0x2964F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964F0u;
label_2964f0:
    // 0x2964f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2964f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964f4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2964F4u;
    SET_GPR_U32(ctx, 31, 0x2964FCu);
    ctx->pc = 0x2964F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2964F4u;
    // 0x2964f8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2964F4u, 0x2964FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2964FCu;
label_2964fc:
    // 0x2964fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2964fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296500: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x296500u;
    SET_GPR_U32(ctx, 31, 0x296508u);
    ctx->pc = 0x296504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296500u;
    // 0x296504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x296500u, 0x296508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296508u;
label_296508:
    // 0x296508: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x296508u;
    SET_GPR_U32(ctx, 31, 0x296510u);
    ctx->pc = 0x29650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296508u;
    // 0x29650c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x296508u, 0x296510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296510u;
label_296510:
    // 0x296510: 0xc6740024  lwc1        $f20, 0x24($s3)
    ctx->pc = 0x296510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296514: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x296514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x296518: 0xc0b5eda  jal         func_2D7B68
    ctx->pc = 0x296518u;
    SET_GPR_U32(ctx, 31, 0x296520u);
    ctx->pc = 0x29651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296518u;
    // 0x29651c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B68u, 0x296518u, 0x296520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296520u;
label_296520:
    // 0x296520: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x296520u;
    SET_GPR_U32(ctx, 31, 0x296528u);
    ctx->pc = 0x296524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296520u;
    // 0x296524: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x296520u, 0x296528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296528u;
label_296528:
    // 0x296528: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x29652c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x29652cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x296530: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x296530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x296534: 0x124100  sll         $t0, $s2, 4
    ctx->pc = 0x296534u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x296538: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x29653c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x296540: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x296544: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x296544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x296548: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x296548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x29654c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x29654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296550: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x296550u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x296554: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x296554u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x296558: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x296558u;
    SET_GPR_U32(ctx, 31, 0x296560u);
    ctx->pc = 0x29655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296558u;
    // 0x29655c: 0x75900  sll         $t3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x296558u, 0x296560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296560u;
label_296560:
    // 0x296560: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x296560u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x296564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296568: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x29656c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29656cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296570: 0x8e6b0018  lw          $t3, 0x18($s3)
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x296574: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x296574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x296578: 0x8e690014  lw          $t1, 0x14($s3)
    ctx->pc = 0x296578u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x29657c: 0xb03821  addu        $a3, $a1, $s0
    ctx->pc = 0x29657cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x296580: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x296580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x296584: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x296584u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x296588: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x29658c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x29658cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x296590: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x296590u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x296594: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x296594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x296598: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x296598u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x29659c: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x29659Cu;
    SET_GPR_U32(ctx, 31, 0x2965A4u);
    ctx->pc = 0x2965A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29659Cu;
    // 0x2965a0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x29659Cu, 0x2965A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2965A4u;
label_2965a4:
    // 0x2965a4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2965a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2965a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2965a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2965ac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2965acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2965b0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2965B0u;
    {
        const bool branch_taken_0x2965b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2965B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965B0u;
        // 0x2965b4: 0x8ea299f0  lw          $v0, -0x6610($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965b0) {
            ctx->pc = 0x296498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296498;
        }
    }
    ctx->pc = 0x2965B8u;
label_2965b8:
    // 0x2965b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2965b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2965bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2965bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2965c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2965c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2965c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2965c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2965c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2965c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2965cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2965ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2965d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2965d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2965d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2965d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2965d8: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2965d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2965dc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2965dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2965e0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2965e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2965e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2965E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2965E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2965E4u;
        // 0x2965e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2965E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2965ECu;
}
