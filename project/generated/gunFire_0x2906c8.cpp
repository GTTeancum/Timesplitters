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

// Function: gunFire
// Address: 0x2906c8 - 0x291070
void gunFire_0x2906c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunFire_0x2906c8");
#endif

    switch (ctx->pc) {
        case 0x29074cu: goto label_29074c;
        case 0x2909b0u: goto label_2909b0;
        case 0x2909e0u: goto label_2909e0;
        case 0x290ac0u: goto label_290ac0;
        case 0x290af4u: goto label_290af4;
        case 0x290b34u: goto label_290b34;
        case 0x290c38u: goto label_290c38;
        case 0x290c54u: goto label_290c54;
        case 0x290c98u: goto label_290c98;
        case 0x290cbcu: goto label_290cbc;
        case 0x290d14u: goto label_290d14;
        case 0x290d98u: goto label_290d98;
        case 0x290dd0u: goto label_290dd0;
        case 0x290e64u: goto label_290e64;
        case 0x290ebcu: goto label_290ebc;
        case 0x290ee8u: goto label_290ee8;
        case 0x290f14u: goto label_290f14;
        case 0x290f50u: goto label_290f50;
        case 0x290f70u: goto label_290f70;
        case 0x290fc8u: goto label_290fc8;
        default: break;
    }

    ctx->pc = 0x2906c8u;

    // 0x2906c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2906c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2906cc: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x2906ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2906d0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2906d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2906d4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2906d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2906d8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2906d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906dc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2906dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2906e0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2906e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2906e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2906e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2906e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906ec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2906ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2906f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2906f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2906f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2906f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2906f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2906fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290700: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x290700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x290704: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x290704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x290708: 0x24a56218  addiu       $a1, $a1, 0x6218
    ctx->pc = 0x290708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25112));
    // 0x29070c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x29070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x290710: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x290710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x290714: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x290714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x290718: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x290718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29071c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x29071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x290720: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x290720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x290724: 0x8e970160  lw          $s7, 0x160($s4)
    ctx->pc = 0x290724u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x290728: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x290728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x29072c: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x29072cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x290730: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290734: 0x24430034  addiu       $v1, $v0, 0x34
    ctx->pc = 0x290734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x290738: 0x245000bc  addiu       $s0, $v0, 0xBC
    ctx->pc = 0x290738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x29073c: 0x67800a  movz        $s0, $v1, $a3
    ctx->pc = 0x29073cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x290740: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x290740u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290744: 0xc0a2558  jal         func_289560
    ctx->pc = 0x290744u;
    SET_GPR_U32(ctx, 31, 0x29074Cu);
    ctx->pc = 0x290748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290744u;
    // 0x290748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289560u, 0x290744u, 0x29074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29074Cu;
label_29074c:
    // 0x29074c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29074cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290750: 0x26c2fffd  addiu       $v0, $s6, -0x3
    ctx->pc = 0x290750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967293));
    // 0x290754: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x290754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x290758: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290758u;
    {
        const bool branch_taken_0x290758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290758) {
            ctx->pc = 0x290780u;
            goto label_290780;
        }
    }
    ctx->pc = 0x290760u;
    // 0x290760: 0xaee00b60  sw          $zero, 0xB60($s7)
    ctx->pc = 0x290760u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2912), GPR_U32(ctx, 0));
    // 0x290764: 0xaef10b64  sw          $s1, 0xB64($s7)
    ctx->pc = 0x290764u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2916), GPR_U32(ctx, 17));
    // 0x290768: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x290768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29076c: 0xe6e00b68  swc1        $f0, 0xB68($s7)
    ctx->pc = 0x29076cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 2920), bits); }
    // 0x290770: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x290770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290774: 0xe6e10b6c  swc1        $f1, 0xB6C($s7)
    ctx->pc = 0x290774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 2924), bits); }
    // 0x290778: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x290778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29077c: 0xe6e00b70  swc1        $f0, 0xB70($s7)
    ctx->pc = 0x29077cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 2928), bits); }
label_290780:
    // 0x290780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x290784: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x290784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290788: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x290788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29078c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x29078cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x290790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290794: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x290794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290798: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x290798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x29079c: 0xe6420108  swc1        $f2, 0x108($s2)
    ctx->pc = 0x29079cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
    // 0x2907a0: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2907a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2907a4: 0xe6420054  swc1        $f2, 0x54($s2)
    ctx->pc = 0x2907a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x2907a8: 0xe6420058  swc1        $f2, 0x58($s2)
    ctx->pc = 0x2907a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x2907ac: 0xe642005c  swc1        $f2, 0x5C($s2)
    ctx->pc = 0x2907acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x2907b0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2907b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2907b4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2907b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2907b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2907b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2907bc: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2907bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2907c0: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x2907c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x2907c4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2907c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2907c8: 0xae560068  sw          $s6, 0x68($s2)
    ctx->pc = 0x2907c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 22));
    // 0x2907cc: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2907ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2907d0: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x2907d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x2907d4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2907d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2907d8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2907dc: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x2907dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x2907e0: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2907e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x2907e4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2907e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2907e8: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x2907e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x2907ec: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2907ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2907f0: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x2907f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x2907f4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2907f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2907f8: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x2907f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x2907fc: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2907fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x290800: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x290800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x290804: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x290804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290808: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x290808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x29080c: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x29080cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x290810: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x290810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x290814: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x290814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x290818: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x290818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x29081c: 0xae430100  sw          $v1, 0x100($s2)
    ctx->pc = 0x29081cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 3));
    // 0x290820: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x290820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290824: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x290824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x290828: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x290828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x29082c: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x29082cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x290830: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x290830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x290834: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x290834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x290838: 0xae4400d8  sw          $a0, 0xD8($s2)
    ctx->pc = 0x290838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 4));
    // 0x29083c: 0xae5400dc  sw          $s4, 0xDC($s2)
    ctx->pc = 0x29083cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 20));
    // 0x290840: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x290840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x290844: 0xae4300e4  sw          $v1, 0xE4($s2)
    ctx->pc = 0x290844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
    // 0x290848: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x290848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x29084c: 0x16c40026  bne         $s6, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29084Cu;
    {
        const bool branch_taken_0x29084c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x290850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29084Cu;
        // 0x290850: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29084c) {
            ctx->pc = 0x2908E8u;
            goto label_2908e8;
        }
    }
    ctx->pc = 0x290854u;
    // 0x290854: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x290854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x290858: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x290858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29085c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x290860: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290860u;
    {
        const bool branch_taken_0x290860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290860) {
            ctx->pc = 0x290864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290860u;
            // 0x290864: 0xae56010c  sw          $s6, 0x10C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290868u;
            goto label_290868;
        }
    }
    ctx->pc = 0x290868u;
label_290868:
    // 0x290868: 0xc7c10010  lwc1        $f1, 0x10($fp)
    ctx->pc = 0x290868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29086c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x29086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x290870: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x290870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x290874: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x290874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x290878: 0xc7c00014  lwc1        $f0, 0x14($fp)
    ctx->pc = 0x290878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29087c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x29087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x290880: 0xc7c10018  lwc1        $f1, 0x18($fp)
    ctx->pc = 0x290880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290884: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x290884u;
    {
        const bool branch_taken_0x290884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x290888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290884u;
        // 0x290888: 0xe6410020  swc1        $f1, 0x20($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290884) {
            ctx->pc = 0x290900u;
            goto label_290900;
        }
    }
    ctx->pc = 0x29088Cu;
    // 0x29088c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290890: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290890u;
    {
        const bool branch_taken_0x290890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290890u;
        // 0x290894: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290890) {
            ctx->pc = 0x29089Cu;
            goto label_29089c;
        }
    }
    ctx->pc = 0x290898u;
    // 0x290898: 0xc7848b40  lwc1        $f4, -0x74C0($gp)
    ctx->pc = 0x290898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_29089c:
    // 0x29089c: 0xc7c00098  lwc1        $f0, 0x98($fp)
    ctx->pc = 0x29089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2908a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2908a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2908a4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2908a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2908a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2908a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2908ac: 0xc7838b44  lwc1        $f3, -0x74BC($gp)
    ctx->pc = 0x2908acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2908b0: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x2908b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2908b4: 0x0  nop
    ctx->pc = 0x2908b4u;
    // NOP
    // 0x2908b8: 0x0  nop
    ctx->pc = 0x2908b8u;
    // NOP
    // 0x2908bc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2908bcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2908c0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2908c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2908c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2908c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2908c8: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2908c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2908cc: 0x0  nop
    ctx->pc = 0x2908ccu;
    // NOP
    // 0x2908d0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2908D0u;
    {
        const bool branch_taken_0x2908d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2908D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908D0u;
        // 0x2908d4: 0xe6410048  swc1        $f1, 0x48($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908d0) {
            ctx->pc = 0x290900u;
            goto label_290900;
        }
    }
    ctx->pc = 0x2908D8u;
    // 0x2908d8: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2908d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x2908dc: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2908dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2908e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2908E0u;
    {
        const bool branch_taken_0x2908e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908E0u;
        // 0x2908e4: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e0) {
            ctx->pc = 0x290900u;
            goto label_290900;
        }
    }
    ctx->pc = 0x2908E8u;
label_2908e8:
    // 0x2908e8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2908e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2908ec: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2908ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2908f0: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x2908f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2908f4: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x2908f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2908f8: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2908f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2908fc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2908fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_290900:
    // 0x290900: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290904: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x290904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290908: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x290908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29090c: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x29090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x290910: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x290910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290914: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x290914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290918: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x290918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x29091c: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x29091cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x290920: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x290920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x290924: 0x104001c5  beqz        $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x290924u;
    {
        const bool branch_taken_0x290924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290924u;
        // 0x290928: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290924) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x29092Cu;
    // 0x29092c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x290930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x290930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290934: 0x24428d70  addiu       $v0, $v0, -0x7290
    ctx->pc = 0x290934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x290938: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x290938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29093c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290940: 0x800008  jr          $a0
    ctx->pc = 0x290940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290948u: goto label_290948;
            case 0x2909E8u: goto label_2909e8;
            case 0x290AFCu: goto label_290afc;
            case 0x290B4Cu: goto label_290b4c;
            case 0x290C6Cu: goto label_290c6c;
            case 0x290D68u: goto label_290d68;
            case 0x290E3Cu: goto label_290e3c;
            case 0x290E84u: goto label_290e84;
            case 0x290F2Cu: goto label_290f2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290940u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290948u;
label_290948:
    // 0x290948: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29094c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29094cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290954: 0xc7818b48  lwc1        $f1, -0x74B8($gp)
    ctx->pc = 0x290954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290958: 0x8e480068  lw          $t0, 0x68($s2)
    ctx->pc = 0x290958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x29095c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x29095cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290960: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x290960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290964: 0x1502000b  bne         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290964u;
    {
        const bool branch_taken_0x290964 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x290968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290964u;
        // 0x290968: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290964) {
            ctx->pc = 0x290994u;
            goto label_290994;
        }
    }
    ctx->pc = 0x29096Cu;
    // 0x29096c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x290970: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x290970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x290974: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x290974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x290978: 0x26650048  addiu       $a1, $s3, 0x48
    ctx->pc = 0x290978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x29097c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x29097cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290980: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x290980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x290984: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x290984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290988: 0xe83804  sllv        $a3, $t0, $a3
    ctx->pc = 0x290988u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x29098c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29098Cu;
    {
        const bool branch_taken_0x29098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29098Cu;
        // 0x290990: 0x673823  subu        $a3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29098c) {
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x290994u;
label_290994:
    // 0x290994: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x290994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x290998: 0x26650048  addiu       $a1, $s3, 0x48
    ctx->pc = 0x290998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x29099c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x29099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2909a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2909a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909a4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2909a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2909a8:
    // 0x2909a8: 0xc0a606c  jal         func_2981B0
    ctx->pc = 0x2909A8u;
    SET_GPR_U32(ctx, 31, 0x2909B0u);
    ctx->pc = 0x2981B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2981B0u, 0x2909A8u, 0x2909B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909B0u;
label_2909b0:
    // 0x2909b0: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x2909b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x2909b4: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x2909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2909b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2909bc: 0x146201a0  bne         $v1, $v0, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2909BCu;
    {
        const bool branch_taken_0x2909bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2909C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909BCu;
        // 0x2909c0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909bc) {
            ctx->pc = 0x291040u;
            goto label_291040;
        }
    }
    ctx->pc = 0x2909C4u;
    // 0x2909c4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2909c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2909c8: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x2909c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2909cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2909ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909d0: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x2909d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x2909d4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2909d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2909d8: 0xc0a606c  jal         func_2981B0
    ctx->pc = 0x2909D8u;
    SET_GPR_U32(ctx, 31, 0x2909E0u);
    ctx->pc = 0x2909DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909D8u;
    // 0x2909dc: 0xe33804  sllv        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2981B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2981B0u, 0x2909D8u, 0x2909E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909E0u;
label_2909e0:
    // 0x2909e0: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x2909E0u;
    {
        const bool branch_taken_0x2909e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909E0u;
        // 0x2909e4: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909e0) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x2909E8u;
label_2909e8:
    // 0x2909e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2909e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2909ec: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2909ECu;
    {
        const bool branch_taken_0x2909ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2909F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909ECu;
        // 0x2909f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909ec) {
            ctx->pc = 0x290A1Cu;
            goto label_290a1c;
        }
    }
    ctx->pc = 0x2909F4u;
    // 0x2909f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2909f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2909f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2909f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2909fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2909fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a00: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x290a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x290a04: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x290a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x290a08: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x290a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290a0c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x290a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x290a10: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x290a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x290a14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x290A14u;
    {
        const bool branch_taken_0x290a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A14u;
        // 0x290a18: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a14) {
            ctx->pc = 0x290A6Cu;
            goto label_290a6c;
        }
    }
    ctx->pc = 0x290A1Cu;
label_290a1c:
    // 0x290a1c: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290A1Cu;
    {
        const bool branch_taken_0x290a1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A1Cu;
        // 0x290a20: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a1c) {
            ctx->pc = 0x290A4Cu;
            goto label_290a4c;
        }
    }
    ctx->pc = 0x290A24u;
    // 0x290a24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x290a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290a2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x290a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290a30: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x290a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x290a34: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x290a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x290a38: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x290a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290a3c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x290a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x290a40: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x290a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x290a44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x290A44u;
    {
        const bool branch_taken_0x290a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A44u;
        // 0x290a48: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a44) {
            ctx->pc = 0x290A6Cu;
            goto label_290a6c;
        }
    }
    ctx->pc = 0x290A4Cu;
label_290a4c:
    // 0x290a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x290a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290a54: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x290a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x290a58: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x290a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x290a5c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x290a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x290a60: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x290a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290a64: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x290a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x290a68: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x290a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_290a6c:
    // 0x290a6c: 0x8e490068  lw          $t1, 0x68($s2)
    ctx->pc = 0x290a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x290a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290a74: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290A74u;
    {
        const bool branch_taken_0x290a74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x290A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A74u;
        // 0x290a78: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a74) {
            ctx->pc = 0x290AA4u;
            goto label_290aa4;
        }
    }
    ctx->pc = 0x290A7Cu;
    // 0x290a7c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x290a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x290a80: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x290a84: 0x26660048  addiu       $a2, $s3, 0x48
    ctx->pc = 0x290a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x290a88: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x290a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290a8c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x290a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x290a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x290a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a98: 0x1094004  sllv        $t0, $t1, $t0
    ctx->pc = 0x290a98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 8) & 0x1F));
    // 0x290a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290A9Cu;
    {
        const bool branch_taken_0x290a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A9Cu;
        // 0x290aa0: 0x684023  subu        $t0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a9c) {
            ctx->pc = 0x290AB8u;
            goto label_290ab8;
        }
    }
    ctx->pc = 0x290AA4u;
label_290aa4:
    // 0x290aa4: 0x26660048  addiu       $a2, $s3, 0x48
    ctx->pc = 0x290aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x290aa8: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x290aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x290aac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x290aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ab0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x290ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ab4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x290ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_290ab8:
    // 0x290ab8: 0xc0a5fea  jal         func_297FA8
    ctx->pc = 0x290AB8u;
    SET_GPR_U32(ctx, 31, 0x290AC0u);
    ctx->pc = 0x297FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FA8u, 0x290AB8u, 0x290AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AC0u;
label_290ac0:
    // 0x290ac0: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x290ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x290ac4: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x290ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x290ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290acc: 0x1462015c  bne         $v1, $v0, . + 4 + (0x15C << 2)
    ctx->pc = 0x290ACCu;
    {
        const bool branch_taken_0x290acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ACCu;
        // 0x290ad0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290acc) {
            ctx->pc = 0x291040u;
            goto label_291040;
        }
    }
    ctx->pc = 0x290AD4u;
    // 0x290ad4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x290ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x290ad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x290ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290adc: 0x27c60010  addiu       $a2, $fp, 0x10
    ctx->pc = 0x290adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x290ae0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x290ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ae4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x290ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290ae8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x290ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x290aec: 0xc0a5fea  jal         func_297FA8
    ctx->pc = 0x290AECu;
    SET_GPR_U32(ctx, 31, 0x290AF4u);
    ctx->pc = 0x290AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AECu;
    // 0x290af0: 0x1034004  sllv        $t0, $v1, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FA8u, 0x290AECu, 0x290AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AF4u;
label_290af4:
    // 0x290af4: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x290AF4u;
    {
        const bool branch_taken_0x290af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AF4u;
        // 0x290af8: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290af4) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x290AFCu;
label_290afc:
    // 0x290afc: 0xc7818b4c  lwc1        $f1, -0x74B4($gp)
    ctx->pc = 0x290afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b00: 0x240400df  addiu       $a0, $zero, 0xDF
    ctx->pc = 0x290b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x290b04: 0xc7808b50  lwc1        $f0, -0x74B0($gp)
    ctx->pc = 0x290b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b08: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x290b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290b0c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x290b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290b10: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x290b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290b14: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x290b18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290b1c: 0xc68f004c  lwc1        $f15, 0x4C($s4)
    ctx->pc = 0x290b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x290b20: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290b24: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x290b24u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x290b28: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290b2c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290B2Cu;
    SET_GPR_U32(ctx, 31, 0x290B34u);
    ctx->pc = 0x290B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B2Cu;
    // 0x290b30: 0xc66d004c  lwc1        $f13, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290B2Cu, 0x290B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B34u;
label_290b34:
    // 0x290b34: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290b38: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x290b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x290b3c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x290b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x290b40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x290b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x290b44: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x290B44u;
    {
        const bool branch_taken_0x290b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B44u;
        // 0x290b48: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b44) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x290B4Cu;
label_290b4c:
    // 0x290b4c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x290b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x290b50: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x290B50u;
    {
        const bool branch_taken_0x290b50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x290B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B50u;
        // 0x290b54: 0x28a2000c  slti        $v0, $a1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b50) {
            ctx->pc = 0x290BA8u;
            goto label_290ba8;
        }
    }
    ctx->pc = 0x290B58u;
    // 0x290b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290B58u;
    {
        const bool branch_taken_0x290b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B58u;
        // 0x290b5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b58) {
            ctx->pc = 0x290B70u;
            goto label_290b70;
        }
    }
    ctx->pc = 0x290B60u;
    // 0x290b60: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290B60u;
    {
        const bool branch_taken_0x290b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x290B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B60u;
        // 0x290b64: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b60) {
            ctx->pc = 0x290B8Cu;
            goto label_290b8c;
        }
    }
    ctx->pc = 0x290B68u;
    // 0x290b68: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x290B68u;
    {
        const bool branch_taken_0x290b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b68) {
            ctx->pc = 0x290BECu;
            goto label_290bec;
        }
    }
    ctx->pc = 0x290B70u;
label_290b70:
    // 0x290b70: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x290b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x290b74: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x290B74u;
    {
        const bool branch_taken_0x290b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x290B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B74u;
        // 0x290b78: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b74) {
            ctx->pc = 0x290BC0u;
            goto label_290bc0;
        }
    }
    ctx->pc = 0x290B7Cu;
    // 0x290b7c: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x290B7Cu;
    {
        const bool branch_taken_0x290b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x290B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B7Cu;
        // 0x290b80: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b7c) {
            ctx->pc = 0x290BD8u;
            goto label_290bd8;
        }
    }
    ctx->pc = 0x290B84u;
    // 0x290b84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x290B84u;
    {
        const bool branch_taken_0x290b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b84) {
            ctx->pc = 0x290BECu;
            goto label_290bec;
        }
    }
    ctx->pc = 0x290B8Cu;
label_290b8c:
    // 0x290b8c: 0xc7808b54  lwc1        $f0, -0x74AC($gp)
    ctx->pc = 0x290b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b90: 0xc7818b58  lwc1        $f1, -0x74A8($gp)
    ctx->pc = 0x290b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x290b98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x290b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290b9c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x290b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290ba0: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x290ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290ba4: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x290ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_290ba8:
    // 0x290ba8: 0xc7818b5c  lwc1        $f1, -0x74A4($gp)
    ctx->pc = 0x290ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bac: 0xc7808b60  lwc1        $f0, -0x74A0($gp)
    ctx->pc = 0x290bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bb0: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x290bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290bb4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x290bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290bb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x290BB8u;
    {
        const bool branch_taken_0x290bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BB8u;
        // 0x290bbc: 0xe6410010  swc1        $f1, 0x10($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bb8) {
            ctx->pc = 0x290BE8u;
            goto label_290be8;
        }
    }
    ctx->pc = 0x290BC0u;
label_290bc0:
    // 0x290bc0: 0xc7818b64  lwc1        $f1, -0x749C($gp)
    ctx->pc = 0x290bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290bc4: 0xc7808b68  lwc1        $f0, -0x7498($gp)
    ctx->pc = 0x290bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bc8: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x290bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290bcc: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x290bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290bd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290BD0u;
    {
        const bool branch_taken_0x290bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD0u;
        // 0x290bd4: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bd0) {
            ctx->pc = 0x290BE8u;
            goto label_290be8;
        }
    }
    ctx->pc = 0x290BD8u;
label_290bd8:
    // 0x290bd8: 0xc7808b6c  lwc1        $f0, -0x7494($gp)
    ctx->pc = 0x290bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bdc: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x290bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290be0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x290be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290be4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x290be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_290be8:
    // 0x290be8: 0x28c2000d  slti        $v0, $a2, 0xD
    ctx->pc = 0x290be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
label_290bec:
    // 0x290bec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290BECu;
    {
        const bool branch_taken_0x290bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BECu;
        // 0x290bf0: 0x28a2000b  slti        $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bec) {
            ctx->pc = 0x290C0Cu;
            goto label_290c0c;
        }
    }
    ctx->pc = 0x290BF4u;
    // 0x290bf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290BF4u;
    {
        const bool branch_taken_0x290bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BF4u;
        // 0x290bf8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bf4) {
            ctx->pc = 0x290C20u;
            goto label_290c20;
        }
    }
    ctx->pc = 0x290BFCu;
    // 0x290bfc: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x290BFCu;
    {
        const bool branch_taken_0x290bfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x290C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BFCu;
        // 0x290c00: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bfc) {
            ctx->pc = 0x290C18u;
            goto label_290c18;
        }
    }
    ctx->pc = 0x290C04u;
    // 0x290c04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x290C04u;
    {
        const bool branch_taken_0x290c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C04u;
        // 0x290c08: 0xc66e0050  lwc1        $f14, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c04) {
            ctx->pc = 0x290C28u;
            goto label_290c28;
        }
    }
    ctx->pc = 0x290C0Cu;
label_290c0c:
    // 0x290c0c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x290c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x290c10: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C10u;
    {
        const bool branch_taken_0x290c10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x290C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C10u;
        // 0x290c14: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c10) {
            ctx->pc = 0x290C24u;
            goto label_290c24;
        }
    }
    ctx->pc = 0x290C18u;
label_290c18:
    // 0x290c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290C18u;
    {
        const bool branch_taken_0x290c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C18u;
        // 0x290c1c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c18) {
            ctx->pc = 0x290C24u;
            goto label_290c24;
        }
    }
    ctx->pc = 0x290C20u;
label_290c20:
    // 0x290c20: 0x240400e1  addiu       $a0, $zero, 0xE1
    ctx->pc = 0x290c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_290c24:
    // 0x290c24: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_290c28:
    // 0x290c28: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290c2c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x290c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x290c30: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290C30u;
    SET_GPR_U32(ctx, 31, 0x290C38u);
    ctx->pc = 0x290C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C30u;
    // 0x290c34: 0xc66d004c  lwc1        $f13, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290C30u, 0x290C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C38u;
label_290c38:
    // 0x290c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c3c: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x290c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x290c40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x290c44: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x290c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x290c48: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x290c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x290c4c: 0xc09c0c6  jal         func_270318
    ctx->pc = 0x290C4Cu;
    SET_GPR_U32(ctx, 31, 0x290C54u);
    ctx->pc = 0x290C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C4Cu;
    // 0x290c50: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270318u, 0x290C4Cu, 0x290C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C54u;
label_290c54:
    // 0x290c54: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x290c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x290c58: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x290c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x290c5c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x290c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x290c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290c64: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x290C64u;
    {
        const bool branch_taken_0x290c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C64u;
        // 0x290c68: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c64) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x290C6Cu;
label_290c6c:
    // 0x290c6c: 0xc7818b70  lwc1        $f1, -0x7490($gp)
    ctx->pc = 0x290c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c70: 0x240400e8  addiu       $a0, $zero, 0xE8
    ctx->pc = 0x290c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x290c74: 0xc7808b74  lwc1        $f0, -0x748C($gp)
    ctx->pc = 0x290c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c78: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x290c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290c7c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x290c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290c80: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x290c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290c84: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x290c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x290c88: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290c8c: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290c90: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290C90u;
    SET_GPR_U32(ctx, 31, 0x290C98u);
    ctx->pc = 0x290C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C90u;
    // 0x290c94: 0xc66d004c  lwc1        $f13, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290C90u, 0x290C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C98u;
label_290c98:
    // 0x290c98: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x290c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290c9c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290ca0: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x290ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x290ca4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x290ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290ca8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x290ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x290cac: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x290cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x290cb0: 0xac45008c  sw          $a1, 0x8C($v0)
    ctx->pc = 0x290cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
    // 0x290cb4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x290CB4u;
    SET_GPR_U32(ctx, 31, 0x290CBCu);
    ctx->pc = 0x290CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CB4u;
    // 0x290cb8: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x290CB4u, 0x290CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CBCu;
label_290cbc:
    // 0x290cbc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290CBCu;
    {
        const bool branch_taken_0x290cbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x290CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CBCu;
        // 0x290cc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cbc) {
            ctx->pc = 0x290CD0u;
            goto label_290cd0;
        }
    }
    ctx->pc = 0x290CC4u;
    // 0x290cc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290cc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290CC8u;
    {
        const bool branch_taken_0x290cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CC8u;
        // 0x290ccc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cc8) {
            ctx->pc = 0x290CE4u;
            goto label_290ce4;
        }
    }
    ctx->pc = 0x290CD0u;
label_290cd0:
    // 0x290cd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x290cd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290cdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290ce0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290ce4:
    // 0x290ce4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x290ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290cec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x290cf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x290cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290cf8: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x290cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x290cfc: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x290cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x290d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x290d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x290d08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290d0c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x290D0Cu;
    SET_GPR_U32(ctx, 31, 0x290D14u);
    ctx->pc = 0x290D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D0Cu;
    // 0x290d10: 0xe640003c  swc1        $f0, 0x3C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x290D0Cu, 0x290D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D14u;
label_290d14:
    // 0x290d14: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290D14u;
    {
        const bool branch_taken_0x290d14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x290D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D14u;
        // 0x290d18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d14) {
            ctx->pc = 0x290D28u;
            goto label_290d28;
        }
    }
    ctx->pc = 0x290D1Cu;
    // 0x290d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290D20u;
    {
        const bool branch_taken_0x290d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D20u;
        // 0x290d24: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d20) {
            ctx->pc = 0x290D3Cu;
            goto label_290d3c;
        }
    }
    ctx->pc = 0x290D28u;
label_290d28:
    // 0x290d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x290d2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290d38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290d38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290d3c:
    // 0x290d3c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x290d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x290d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290d44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x290d48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x290d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290d4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290d50: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x290d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x290d54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290d58: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x290d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x290d5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290d60: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x290D60u;
    {
        const bool branch_taken_0x290d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D60u;
        // 0x290d64: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d60) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x290D68u;
label_290d68:
    // 0x290d68: 0xc7818b78  lwc1        $f1, -0x7488($gp)
    ctx->pc = 0x290d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290d6c: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x290d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x290d70: 0xc7808b7c  lwc1        $f0, -0x7484($gp)
    ctx->pc = 0x290d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d74: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x290d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290d78: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x290d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290d7c: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x290d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290d80: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x290d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x290d84: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290d88: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290d8c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x290d8cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x290d90: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290D90u;
    SET_GPR_U32(ctx, 31, 0x290D98u);
    ctx->pc = 0x290D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D90u;
    // 0x290d94: 0xc66d004c  lwc1        $f13, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290D90u, 0x290D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D98u;
label_290d98:
    // 0x290d98: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290d9c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x290d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x290da0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x290da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290da4: 0x26e711c0  addiu       $a3, $s7, 0x11C0
    ctx->pc = 0x290da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4544));
    // 0x290da8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x290da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x290dac: 0xac45008c  sw          $a1, 0x8C($v0)
    ctx->pc = 0x290dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
    // 0x290db0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x290db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x290db4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x290db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290db8: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x290db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x290dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290dc4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x290dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290dcc: 0x0  nop
    ctx->pc = 0x290dccu;
    // NOP
label_290dd0:
    // 0x290dd0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x290DD0u;
    {
        const bool branch_taken_0x290dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290dd0) {
            ctx->pc = 0x290DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290DD0u;
            // 0x290dd4: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290DF8u;
            goto label_290df8;
        }
    }
    ctx->pc = 0x290DD8u;
    // 0x290dd8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x290dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ddc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x290ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290de0: 0x0  nop
    ctx->pc = 0x290de0u;
    // NOP
    // 0x290de4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x290DE4u;
    {
        const bool branch_taken_0x290de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290de4) {
            ctx->pc = 0x290DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290DE4u;
            // 0x290de8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E00u;
            goto label_290e00;
        }
    }
    ctx->pc = 0x290DECu;
    // 0x290dec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x290decu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x290df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290DF0u;
    {
        const bool branch_taken_0x290df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DF0u;
        // 0x290df4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df0) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290DF8u;
label_290df8:
    // 0x290df8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290dfc:
    // 0x290dfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x290dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_290e00:
    // 0x290e00: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x290e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x290e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290E04u;
    {
        const bool branch_taken_0x290e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E04u;
        // 0x290e08: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e04) {
            ctx->pc = 0x290E14u;
            goto label_290e14;
        }
    }
    ctx->pc = 0x290E0Cu;
    // 0x290e0c: 0x50a0fff0  beql        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x290E0Cu;
    {
        const bool branch_taken_0x290e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e0c) {
            ctx->pc = 0x290E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E0Cu;
            // 0x290e10: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290dd0;
        }
    }
    ctx->pc = 0x290E14u;
label_290e14:
    // 0x290e14: 0x14a0008a  bnez        $a1, . + 4 + (0x8A << 2)
    ctx->pc = 0x290E14u;
    {
        const bool branch_taken_0x290e14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x290E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E14u;
        // 0x290e18: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e14) {
            ctx->pc = 0x291040u;
            goto label_291040;
        }
    }
    ctx->pc = 0x290E1Cu;
    // 0x290e1c: 0x4c00088  bltz        $a2, . + 4 + (0x88 << 2)
    ctx->pc = 0x290E1Cu;
    {
        const bool branch_taken_0x290e1c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x290E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E1Cu;
        // 0x290e20: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e1c) {
            ctx->pc = 0x291040u;
            goto label_291040;
        }
    }
    ctx->pc = 0x290E24u;
    // 0x290e24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x290e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290e28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x290e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x290e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x290e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290e30: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x290e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x290e34: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x290E34u;
    {
        const bool branch_taken_0x290e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E34u;
        // 0x290e38: 0xac64006c  sw          $a0, 0x6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e34) {
            ctx->pc = 0x291040u;
            goto label_291040;
        }
    }
    ctx->pc = 0x290E3Cu;
label_290e3c:
    // 0x290e3c: 0xc7808b80  lwc1        $f0, -0x7480($gp)
    ctx->pc = 0x290e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e40: 0x240400e7  addiu       $a0, $zero, 0xE7
    ctx->pc = 0x290e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x290e44: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x290e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x290e48: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x290e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290e4c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x290e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290e50: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x290e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290e54: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290e58: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290e5c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290E5Cu;
    SET_GPR_U32(ctx, 31, 0x290E64u);
    ctx->pc = 0x290E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E5Cu;
    // 0x290e60: 0xc66d004c  lwc1        $f13, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290E5Cu, 0x290E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E64u;
label_290e64:
    // 0x290e64: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290e68: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x290e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x290e6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x290e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290e70: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x290e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x290e74: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x290e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x290e78: 0xac44008c  sw          $a0, 0x8C($v0)
    ctx->pc = 0x290e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 4));
    // 0x290e7c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x290E7Cu;
    {
        const bool branch_taken_0x290e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E7Cu;
        // 0x290e80: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e7c) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x290E84u;
label_290e84:
    // 0x290e84: 0xc7818b84  lwc1        $f1, -0x747C($gp)
    ctx->pc = 0x290e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290e88: 0x240400e3  addiu       $a0, $zero, 0xE3
    ctx->pc = 0x290e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x290e8c: 0xc7808b88  lwc1        $f0, -0x7478($gp)
    ctx->pc = 0x290e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e90: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x290e94: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x290e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x290e98: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x290e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290e9c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x290e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x290ea0: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x290ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x290ea4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x290ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x290ea8: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290eac: 0xc66d004c  lwc1        $f13, 0x4C($s3)
    ctx->pc = 0x290eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290eb0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x290eb0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x290eb4: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290EB4u;
    SET_GPR_U32(ctx, 31, 0x290EBCu);
    ctx->pc = 0x290EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EB4u;
    // 0x290eb8: 0xc66e0050  lwc1        $f14, 0x50($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290EB4u, 0x290EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290EBCu;
label_290ebc:
    // 0x290ebc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290ec0: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x290ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x290ec4: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ec8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x290ec8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x290ecc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x290eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x290ed0: 0xc66d004c  lwc1        $f13, 0x4C($s3)
    ctx->pc = 0x290ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290ed4: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290ed8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x290ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x290edc: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x290edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x290ee0: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290EE0u;
    SET_GPR_U32(ctx, 31, 0x290EE8u);
    ctx->pc = 0x290EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EE0u;
    // 0x290ee4: 0xac50008c  sw          $s0, 0x8C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290EE0u, 0x290EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290EE8u;
label_290ee8:
    // 0x290ee8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290eec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x290eecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x290ef0: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290ef4: 0x240400e5  addiu       $a0, $zero, 0xE5
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x290ef8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x290ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x290efc: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290f00: 0xc66d004c  lwc1        $f13, 0x4C($s3)
    ctx->pc = 0x290f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290f04: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x290f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x290f08: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x290f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    // 0x290f0c: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290F0Cu;
    SET_GPR_U32(ctx, 31, 0x290F14u);
    ctx->pc = 0x290F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F0Cu;
    // 0x290f10: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290F0Cu, 0x290F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F14u;
label_290f14:
    // 0x290f14: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290f18: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x290f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
    // 0x290f1c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x290f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x290f20: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x290f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x290f24: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x290F24u;
    {
        const bool branch_taken_0x290f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F24u;
        // 0x290f28: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f24) {
            ctx->pc = 0x29103Cu;
            goto label_29103c;
        }
    }
    ctx->pc = 0x290F2Cu;
label_290f2c:
    // 0x290f2c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x290f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x290f30: 0x240400e9  addiu       $a0, $zero, 0xE9
    ctx->pc = 0x290f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x290f34: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x290f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x290f38: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x290f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x290f3c: 0xc64f000c  lwc1        $f15, 0xC($s2)
    ctx->pc = 0x290f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x290f40: 0xc66e0050  lwc1        $f14, 0x50($s3)
    ctx->pc = 0x290f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x290f44: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x290f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290f48: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x290F48u;
    SET_GPR_U32(ctx, 31, 0x290F50u);
    ctx->pc = 0x290F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F48u;
    // 0x290f4c: 0xc66d004c  lwc1        $f13, 0x4C($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x290F48u, 0x290F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F50u;
label_290f50:
    // 0x290f50: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x290f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290f54: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x290f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x290f58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x290f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290f5c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x290f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x290f60: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x290f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x290f64: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x290f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x290f68: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x290F68u;
    SET_GPR_U32(ctx, 31, 0x290F70u);
    ctx->pc = 0x290F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F68u;
    // 0x290f6c: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x290F68u, 0x290F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F70u;
label_290f70:
    // 0x290f70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F70u;
    {
        const bool branch_taken_0x290f70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x290F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F70u;
        // 0x290f74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f70) {
            ctx->pc = 0x290F84u;
            goto label_290f84;
        }
    }
    ctx->pc = 0x290F78u;
    // 0x290f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290F7Cu;
    {
        const bool branch_taken_0x290f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F7Cu;
        // 0x290f80: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f7c) {
            ctx->pc = 0x290F98u;
            goto label_290f98;
        }
    }
    ctx->pc = 0x290F84u;
label_290f84:
    // 0x290f84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x290f88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290f8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290f90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290f94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290f98:
    // 0x290f98: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x290f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x290f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290fa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x290fa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x290fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x290fa8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290fac: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x290facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x290fb0: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x290fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x290fb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290fb8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x290fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x290fbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290fc0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x290FC0u;
    SET_GPR_U32(ctx, 31, 0x290FC8u);
    ctx->pc = 0x290FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FC0u;
    // 0x290fc4: 0xe640003c  swc1        $f0, 0x3C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x290FC0u, 0x290FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FC8u;
label_290fc8:
    // 0x290fc8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290FC8u;
    {
        const bool branch_taken_0x290fc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x290FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FC8u;
        // 0x290fcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fc8) {
            ctx->pc = 0x290FDCu;
            goto label_290fdc;
        }
    }
    ctx->pc = 0x290FD0u;
    // 0x290fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290fd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290FD4u;
    {
        const bool branch_taken_0x290fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FD4u;
        // 0x290fd8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fd4) {
            ctx->pc = 0x290FF0u;
            goto label_290ff0;
        }
    }
    ctx->pc = 0x290FDCu;
label_290fdc:
    // 0x290fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x290fe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290fe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290fe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290fec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290ff0:
    // 0x290ff0: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x290ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x290ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290ff8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x290ffc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x290ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x291000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291004: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x291004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x291008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29100c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29100cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x291010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x291010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x291014: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x291014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x291018: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29101c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29101Cu;
    {
        const bool branch_taken_0x29101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29101Cu;
        // 0x291020: 0xc6400034  lwc1        $f0, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29101c) {
            ctx->pc = 0x291030u;
            goto label_291030;
        }
    }
    ctx->pc = 0x291024u;
    // 0x291024: 0xc7818b8c  lwc1        $f1, -0x7474($gp)
    ctx->pc = 0x291024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291028u;
    {
        const bool branch_taken_0x291028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291028u;
        // 0x29102c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291028) {
            ctx->pc = 0x291038u;
            goto label_291038;
        }
    }
    ctx->pc = 0x291030u;
label_291030:
    // 0x291030: 0xc7818b90  lwc1        $f1, -0x7470($gp)
    ctx->pc = 0x291030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_291038:
    // 0x291038: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x291038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_29103c:
    // 0x29103c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29103cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_291040:
    // 0x291040: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x291040u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x291044: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x291044u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x291048: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x291048u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29104c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29104cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291050: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x291050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291054: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x291054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291058: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x291058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29105c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29105cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291060: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x291060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291064: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x291064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291068: 0x3e00008  jr          $ra
    ctx->pc = 0x291068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291068u;
        // 0x29106c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291070u;
}
