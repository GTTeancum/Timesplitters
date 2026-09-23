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

// Function: particleNewGunSparks
// Address: 0x2971e0 - 0x297598
void particleNewGunSparks_0x2971e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewGunSparks_0x2971e0");
#endif

    switch (ctx->pc) {
        case 0x297238u: goto label_297238;
        case 0x297264u: goto label_297264;
        case 0x297298u: goto label_297298;
        case 0x2972a0u: goto label_2972a0;
        case 0x29730cu: goto label_29730c;
        case 0x29736cu: goto label_29736c;
        case 0x297494u: goto label_297494;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974f8u: goto label_2974f8;
        case 0x297504u: goto label_297504;
        case 0x297510u: goto label_297510;
        case 0x29751cu: goto label_29751c;
        case 0x297528u: goto label_297528;
        case 0x297530u: goto label_297530;
        case 0x297550u: goto label_297550;
        default: break;
    }

    ctx->pc = 0x2971e0u;

    // 0x2971e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2971e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2971e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2971e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2971e8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2971e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2971ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2971ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971f0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2971f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2971f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2971f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2971f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2971fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2971fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297200: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297204: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x297204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x297208: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x297208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29720c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29720cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297210: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x297210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x297214: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297218: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29721c: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x29721cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x297220: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x297220u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x297224: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x297224u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x297228: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x297228u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29722c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x29722cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x297230: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x297230u;
    SET_GPR_U32(ctx, 31, 0x297238u);
    ctx->pc = 0x297234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297230u;
    // 0x297234: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x297230u, 0x297238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297238u;
label_297238:
    // 0x297238: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x297238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29723c: 0xc7808ca4  lwc1        $f0, -0x735C($gp)
    ctx->pc = 0x29723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297240: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297248: 0xae900014  sw          $s0, 0x14($s4)
    ctx->pc = 0x297248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 16));
    // 0x29724c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x297250: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x297250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x297254: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x297254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x297258: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x297258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x29725c: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x29725Cu;
    SET_GPR_U32(ctx, 31, 0x297264u);
    ctx->pc = 0x297260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29725Cu;
    // 0x297260: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x29725Cu, 0x297264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297264u;
label_297264:
    // 0x297264: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x297264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297268: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x297268u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x29726c: 0xe68003a0  swc1        $f0, 0x3A0($s4)
    ctx->pc = 0x29726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 928), bits); }
    // 0x297270: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x297270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x297274: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x297274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297278: 0xe68003a4  swc1        $f0, 0x3A4($s4)
    ctx->pc = 0x297278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 932), bits); }
    // 0x29727c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x29727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297280: 0x1840005b  blez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x297280u;
    {
        const bool branch_taken_0x297280 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297280u;
        // 0x297284: 0xe68103a8  swc1        $f1, 0x3A8($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297280) {
            ctx->pc = 0x2973F0u;
            goto label_2973f0;
        }
    }
    ctx->pc = 0x297288u;
    // 0x297288: 0x269303ac  addiu       $s3, $s4, 0x3AC
    ctx->pc = 0x297288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 940));
    // 0x29728c: 0x269203b0  addiu       $s2, $s4, 0x3B0
    ctx->pc = 0x29728cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 944));
    // 0x297290: 0x269003b4  addiu       $s0, $s4, 0x3B4
    ctx->pc = 0x297290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 948));
    // 0x297294: 0x26970048  addiu       $s7, $s4, 0x48
    ctx->pc = 0x297294u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_297298:
    // 0x297298: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297298u;
    SET_GPR_U32(ctx, 31, 0x2972A0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297298u, 0x2972A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972A0u;
label_2972a0:
    // 0x2972a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2972a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2972a8: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2972a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2972ac: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2972ACu;
    {
        const bool branch_taken_0x2972ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2972B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972ACu;
        // 0x2972b0: 0x732821  addu        $a1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972ac) {
            ctx->pc = 0x2972C0u;
            goto label_2972c0;
        }
    }
    ctx->pc = 0x2972B4u;
    // 0x2972b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2972b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2972b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2972B8u;
    {
        const bool branch_taken_0x2972b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B8u;
        // 0x2972bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972b8) {
            ctx->pc = 0x2972D8u;
            goto label_2972d8;
        }
    }
    ctx->pc = 0x2972C0u;
label_2972c0:
    // 0x2972c0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2972c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2972c4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2972c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2972c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2972cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2972ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2972d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2972d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2972d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2972d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2972d8:
    // 0x2972d8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2972d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2972dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2972dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2972e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2972e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2972e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2972e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2972e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2972e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2972ec: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2972ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2972f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2972f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2972f4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2972f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2972f8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2972f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2972fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2972fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297300: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x297300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297304: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297304u;
    SET_GPR_U32(ctx, 31, 0x29730Cu);
    ctx->pc = 0x297308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297304u;
    // 0x297308: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297304u, 0x29730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29730Cu;
label_29730c:
    // 0x29730c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297310: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297314: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x297314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297318: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297318u;
    {
        const bool branch_taken_0x297318 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297318u;
        // 0x29731c: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297318) {
            ctx->pc = 0x29732Cu;
            goto label_29732c;
        }
    }
    ctx->pc = 0x297320u;
    // 0x297320: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x297320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297324: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297324u;
    {
        const bool branch_taken_0x297324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297324u;
        // 0x297328: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297324) {
            ctx->pc = 0x297344u;
            goto label_297344;
        }
    }
    ctx->pc = 0x29732Cu;
label_29732c:
    // 0x29732c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x29732cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297330: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297334: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29733c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29733cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297340: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x297340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_297344:
    // 0x297344: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29734c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x297350: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297354: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x297354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297358: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x297358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29735c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29735cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x297360: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x297360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297364: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297364u;
    SET_GPR_U32(ctx, 31, 0x29736Cu);
    ctx->pc = 0x297368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297364u;
    // 0x297368: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297364u, 0x29736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29736Cu;
label_29736c:
    // 0x29736c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297370: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x297370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297374: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x297374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297378: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297378u;
    {
        const bool branch_taken_0x297378 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297378u;
        // 0x29737c: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297378) {
            ctx->pc = 0x29738Cu;
            goto label_29738c;
        }
    }
    ctx->pc = 0x297380u;
    // 0x297380: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x297380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297384u;
    {
        const bool branch_taken_0x297384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297384u;
        // 0x297388: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297384) {
            ctx->pc = 0x2973A4u;
            goto label_2973a4;
        }
    }
    ctx->pc = 0x29738Cu;
label_29738c:
    // 0x29738c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x29738cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297390: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29739c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29739cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2973a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2973a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2973a4:
    // 0x2973a4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2973a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2973a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2973a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2973ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2973acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2973b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2973b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2973b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2973b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2973b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2973bc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2973c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2973c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2973c4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2973c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2973c8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2973c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2973cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2973ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2973d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2973d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2973d4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2973d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2973d8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2973dc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2973dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2973e0: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2973E0u;
    {
        const bool branch_taken_0x2973e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2973e0) {
            ctx->pc = 0x297298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297298;
        }
    }
    ctx->pc = 0x2973E8u;
    // 0x2973e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2973E8u;
    {
        const bool branch_taken_0x2973e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973E8u;
        // 0x2973ec: 0xc6b40000  lwc1        $f20, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973e8) {
            ctx->pc = 0x2973F8u;
            goto label_2973f8;
        }
    }
    ctx->pc = 0x2973F0u;
label_2973f0:
    // 0x2973f0: 0x26970048  addiu       $s7, $s4, 0x48
    ctx->pc = 0x2973f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x2973f4: 0xc6b40000  lwc1        $f20, 0x0($s5)
    ctx->pc = 0x2973f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2973f8:
    // 0x2973f8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2973f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2973fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2973fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x297400: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x297400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x297404: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x297404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297408: 0x4616a0c0  add.s       $f3, $f20, $f22
    ctx->pc = 0x297408u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x29740c: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x29740cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x297410: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x297410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x297414: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297418: 0x46160d40  add.s       $f21, $f1, $f22
    ctx->pc = 0x297418u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x29741c: 0xc7808ca8  lwc1        $f0, -0x7358($gp)
    ctx->pc = 0x29741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297420: 0x46190840  add.s       $f1, $f1, $f25
    ctx->pc = 0x297420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
    // 0x297424: 0xc6d80004  lwc1        $f24, 0x4($s6)
    ctx->pc = 0x297424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x297428: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x297428u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x29742c: 0xc6d70000  lwc1        $f23, 0x0($s6)
    ctx->pc = 0x29742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x297430: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x297430u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x297434: 0xc7848cac  lwc1        $f4, -0x7354($gp)
    ctx->pc = 0x297434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x297438: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x297438u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29743c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29743cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x297440: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297444: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x297444u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x297448: 0xc6cc0008  lwc1        $f12, 0x8($s6)
    ctx->pc = 0x297448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29744c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29744cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297450: 0x3411ffa0  ori         $s1, $zero, 0xFFA0
    ctx->pc = 0x297450u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65440);
    // 0x297454: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x297454u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x297458: 0x4615c540  add.s       $f21, $f24, $f21
    ctx->pc = 0x297458u;
    ctx->f[21] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x29745c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x29745cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x297460: 0xdc329018  ld          $s2, -0x6FE8($at)
    ctx->pc = 0x297460u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x3A9018u));
    // 0x297464: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x297464u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x297468: 0x3413ffc0  ori         $s3, $zero, 0xFFC0
    ctx->pc = 0x297468u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x29746c: 0x139bbc  dsll32      $s3, $s3, 14
    ctx->pc = 0x29746cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 14));
    // 0x297470: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x297470u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x297474: 0x4601c600  add.s       $f24, $f24, $f1
    ctx->pc = 0x297474u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x297478: 0x4604ad40  add.s       $f21, $f21, $f4
    ctx->pc = 0x297478u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[4]);
    // 0x29747c: 0x4603bdc0  add.s       $f23, $f23, $f3
    ctx->pc = 0x29747cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    // 0x297480: 0x4602c600  add.s       $f24, $f24, $f2
    ctx->pc = 0x297480u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x297484: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x297484u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x297488: 0x4602bdc1  sub.s       $f23, $f23, $f2
    ctx->pc = 0x297488u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x29748c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29748Cu;
    SET_GPR_U32(ctx, 31, 0x297494u);
    ctx->pc = 0x297490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29748Cu;
    // 0x297490: 0x4602ad41  sub.s       $f21, $f21, $f2 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29748Cu, 0x297494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297494u;
label_297494:
    // 0x297494: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x297494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29749c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x29749Cu;
    SET_GPR_U32(ctx, 31, 0x2974A4u);
    ctx->pc = 0x2974A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29749Cu;
    // 0x2974a0: 0x46166300  add.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x29749Cu, 0x2974A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974A4u;
label_2974a4:
    // 0x2974a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2974a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974a8: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2974A8u;
    SET_GPR_U32(ctx, 31, 0x2974B0u);
    ctx->pc = 0x2974ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974A8u;
    // 0x2974ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2974A8u, 0x2974B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974B0u;
label_2974b0:
    // 0x2974b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2974b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974b4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2974B4u;
    SET_GPR_U32(ctx, 31, 0x2974BCu);
    ctx->pc = 0x2974B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974B4u;
    // 0x2974b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2974B4u, 0x2974BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974BCu;
label_2974bc:
    // 0x2974bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2974bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974c0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2974C0u;
    SET_GPR_U32(ctx, 31, 0x2974C8u);
    ctx->pc = 0x2974C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974C0u;
    // 0x2974c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2974C0u, 0x2974C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974C8u;
label_2974c8:
    // 0x2974c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2974c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974cc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2974CCu;
    SET_GPR_U32(ctx, 31, 0x2974D4u);
    ctx->pc = 0x2974D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974CCu;
    // 0x2974d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2974CCu, 0x2974D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974D4u;
label_2974d4:
    // 0x2974d4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2974D4u;
    SET_GPR_U32(ctx, 31, 0x2974DCu);
    ctx->pc = 0x2974D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974D4u;
    // 0x2974d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2974D4u, 0x2974DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974DCu;
label_2974dc:
    // 0x2974dc: 0xc6cc0008  lwc1        $f12, 0x8($s6)
    ctx->pc = 0x2974dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2974e0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2974E0u;
    SET_GPR_U32(ctx, 31, 0x2974E8u);
    ctx->pc = 0x2974E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974E0u;
    // 0x2974e4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2974E0u, 0x2974E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974E8u;
label_2974e8:
    // 0x2974e8: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x2974e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2974ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2974ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974f0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2974F0u;
    SET_GPR_U32(ctx, 31, 0x2974F8u);
    ctx->pc = 0x2974F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974F0u;
    // 0x2974f4: 0x46196300  add.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2974F0u, 0x2974F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974F8u;
label_2974f8:
    // 0x2974f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2974f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974fc: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2974FCu;
    SET_GPR_U32(ctx, 31, 0x297504u);
    ctx->pc = 0x297500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974FCu;
    // 0x297500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2974FCu, 0x297504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297504u;
label_297504:
    // 0x297504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x297504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297508: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x297508u;
    SET_GPR_U32(ctx, 31, 0x297510u);
    ctx->pc = 0x29750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297508u;
    // 0x29750c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x297508u, 0x297510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297510u;
label_297510:
    // 0x297510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297514: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x297514u;
    SET_GPR_U32(ctx, 31, 0x29751Cu);
    ctx->pc = 0x297518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297514u;
    // 0x297518: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x297514u, 0x29751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29751Cu;
label_29751c:
    // 0x29751c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297520: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x297520u;
    SET_GPR_U32(ctx, 31, 0x297528u);
    ctx->pc = 0x297524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297520u;
    // 0x297524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x297520u, 0x297528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297528u;
label_297528:
    // 0x297528: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x297528u;
    SET_GPR_U32(ctx, 31, 0x297530u);
    ctx->pc = 0x29752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297528u;
    // 0x29752c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x297528u, 0x297530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297530u;
label_297530:
    // 0x297530: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x297530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297534: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x297534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x297538: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x297538u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29753c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x29753cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x297540: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x297540u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x297544: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x297544u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x297548: 0xc095046  jal         func_254118
    ctx->pc = 0x297548u;
    SET_GPR_U32(ctx, 31, 0x297550u);
    ctx->pc = 0x29754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297548u;
    // 0x29754c: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254118u, 0x297548u, 0x297550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297550u;
label_297550:
    // 0x297550: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297554: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x297554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297558: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x297558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29755c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29755cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297560: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x297560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297564: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x297564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297568: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x297568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29756c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29756cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297570: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297578: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x297578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29757c: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x29757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x297580: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x297580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x297584: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x297584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x297588: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x297588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29758c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x29758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297590: 0x3e00008  jr          $ra
    ctx->pc = 0x297590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297590u;
        // 0x297594: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297598u;
}
