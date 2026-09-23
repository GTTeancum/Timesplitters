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

// Function: specialfxPlanetSpawnTick
// Address: 0x2ac7b0 - 0x2acabc
void specialfxPlanetSpawnTick_0x2ac7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxPlanetSpawnTick_0x2ac7b0");
#endif

    switch (ctx->pc) {
        case 0x2ac860u: goto label_2ac860;
        case 0x2ac86cu: goto label_2ac86c;
        case 0x2ac878u: goto label_2ac878;
        case 0x2ac884u: goto label_2ac884;
        case 0x2ac890u: goto label_2ac890;
        case 0x2ac898u: goto label_2ac898;
        case 0x2ac8d4u: goto label_2ac8d4;
        case 0x2ac8e0u: goto label_2ac8e0;
        case 0x2ac8ecu: goto label_2ac8ec;
        case 0x2ac8f8u: goto label_2ac8f8;
        case 0x2ac900u: goto label_2ac900;
        case 0x2ac928u: goto label_2ac928;
        case 0x2ac934u: goto label_2ac934;
        case 0x2ac940u: goto label_2ac940;
        case 0x2ac94cu: goto label_2ac94c;
        case 0x2ac954u: goto label_2ac954;
        case 0x2ac9a0u: goto label_2ac9a0;
        case 0x2aca00u: goto label_2aca00;
        case 0x2aca30u: goto label_2aca30;
        case 0x2aca44u: goto label_2aca44;
        case 0x2aca58u: goto label_2aca58;
        case 0x2aca80u: goto label_2aca80;
        default: break;
    }

    ctx->pc = 0x2ac7b0u;

    // 0x2ac7b0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2ac7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2ac7b4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ac7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ac7b8: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x2ac7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x2ac7bc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ac7bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac7c0: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2ac7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x2ac7c4: 0x2e22018  mult        $a0, $s7, $v0
    ctx->pc = 0x2ac7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ac7c8: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2ac7c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x2ac7cc: 0x27c5c268  addiu       $a1, $fp, -0x3D98
    ctx->pc = 0x2ac7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951528));
    // 0x2ac7d0: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2ac7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2ac7d4: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2ac7d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2ac7d8: 0x24a20038  addiu       $v0, $a1, 0x38
    ctx->pc = 0x2ac7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x2ac7dc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2ac7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2ac7e0: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x2ac7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x2ac7e4: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac7e8: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2ac7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2ac7ec: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2ac7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2ac7f0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2ac7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2ac7f4: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2ac7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2ac7f8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2ac7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2ac7fc: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2ac7fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2ac800: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2ac800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2ac804: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2ac804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac808: 0xc7808eec  lwc1        $f0, -0x7114($gp)
    ctx->pc = 0x2ac808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac80c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2ac80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ac810: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2AC810u;
    {
        const bool branch_taken_0x2ac810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC810u;
        // 0x2ac814: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac810) {
            ctx->pc = 0x2AC9A4u;
            goto label_2ac9a4;
        }
    }
    ctx->pc = 0x2AC818u;
    // 0x2ac818: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2ac818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2ac81c: 0xc7968ef0  lwc1        $f22, -0x7110($gp)
    ctx->pc = 0x2ac81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ac820: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x2ac820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac824: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x2ac828: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2ac828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ac82c: 0x26315c60  addiu       $s1, $s1, 0x5C60
    ctx->pc = 0x2ac82cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23648));
    // 0x2ac830: 0x0  nop
    ctx->pc = 0x2ac830u;
    // NOP
    // 0x2ac834: 0x0  nop
    ctx->pc = 0x2ac834u;
    // NOP
    // 0x2ac838: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x2ac838u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x2ac83c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ac83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ac840: 0xdc309748  ld          $s0, -0x68B8($at)
    ctx->pc = 0x2ac840u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3A9748u));
    // 0x2ac844: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2ac844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2ac848: 0xdc329750  ld          $s2, -0x68B0($at)
    ctx->pc = 0x2ac848u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x3A9750u));
    // 0x2ac84c: 0x3413ff80  ori         $s3, $zero, 0xFF80
    ctx->pc = 0x2ac84cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2ac850: 0x139bbc  dsll32      $s3, $s3, 14
    ctx->pc = 0x2ac850u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 14));
    // 0x2ac854: 0xc7948ef4  lwc1        $f20, -0x710C($gp)
    ctx->pc = 0x2ac854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac858: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AC858u;
    SET_GPR_U32(ctx, 31, 0x2AC860u);
    ctx->pc = 0x2AC85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC858u;
    // 0x2ac85c: 0x8c750160  lw          $s5, 0x160($v1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AC858u, 0x2AC860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC860u;
label_2ac860:
    // 0x2ac860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac864: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC864u;
    SET_GPR_U32(ctx, 31, 0x2AC86Cu);
    ctx->pc = 0x2AC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC864u;
    // 0x2ac868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC864u, 0x2AC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC86Cu;
label_2ac86c:
    // 0x2ac86c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac870: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AC870u;
    SET_GPR_U32(ctx, 31, 0x2AC878u);
    ctx->pc = 0x2AC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC870u;
    // 0x2ac874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AC870u, 0x2AC878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC878u;
label_2ac878:
    // 0x2ac878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac87c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC87Cu;
    SET_GPR_U32(ctx, 31, 0x2AC884u);
    ctx->pc = 0x2AC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC87Cu;
    // 0x2ac880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC87Cu, 0x2AC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC884u;
label_2ac884:
    // 0x2ac884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac888: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AC888u;
    SET_GPR_U32(ctx, 31, 0x2AC890u);
    ctx->pc = 0x2AC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC888u;
    // 0x2ac88c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AC888u, 0x2AC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC890u;
label_2ac890:
    // 0x2ac890: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AC890u;
    SET_GPR_U32(ctx, 31, 0x2AC898u);
    ctx->pc = 0x2AC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC890u;
    // 0x2ac894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AC890u, 0x2AC898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC898u;
label_2ac898:
    // 0x2ac898: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ac898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ac89c: 0xc7828ef8  lwc1        $f2, -0x7108($gp)
    ctx->pc = 0x2ac89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac8a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac8a4: 0xc7818efc  lwc1        $f1, -0x7104($gp)
    ctx->pc = 0x2ac8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac8a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ac8ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ac8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac8b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac8b8: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x2ac8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x2ac8bc: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2ac8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ac8c0: 0x0  nop
    ctx->pc = 0x2ac8c0u;
    // NOP
    // 0x2ac8c4: 0x0  nop
    ctx->pc = 0x2ac8c4u;
    // NOP
    // 0x2ac8c8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x2ac8c8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x2ac8cc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AC8CCu;
    SET_GPR_U32(ctx, 31, 0x2AC8D4u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AC8CCu, 0x2AC8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8D4u;
label_2ac8d4:
    // 0x2ac8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8d8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC8D8u;
    SET_GPR_U32(ctx, 31, 0x2AC8E0u);
    ctx->pc = 0x2AC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8D8u;
    // 0x2ac8dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC8D8u, 0x2AC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8E0u;
label_2ac8e0:
    // 0x2ac8e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8e4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC8E4u;
    SET_GPR_U32(ctx, 31, 0x2AC8ECu);
    ctx->pc = 0x2AC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8E4u;
    // 0x2ac8e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC8E4u, 0x2AC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8ECu;
label_2ac8ec:
    // 0x2ac8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8f0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AC8F0u;
    SET_GPR_U32(ctx, 31, 0x2AC8F8u);
    ctx->pc = 0x2AC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8F0u;
    // 0x2ac8f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AC8F0u, 0x2AC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8F8u;
label_2ac8f8:
    // 0x2ac8f8: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AC8F8u;
    SET_GPR_U32(ctx, 31, 0x2AC900u);
    ctx->pc = 0x2AC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8F8u;
    // 0x2ac8fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AC8F8u, 0x2AC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC900u;
label_2ac900:
    // 0x2ac900: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ac900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ac904: 0xc7818f00  lwc1        $f1, -0x7100($gp)
    ctx->pc = 0x2ac904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac90c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ac90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ac910: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac914: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ac914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2ac918: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x2ac918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x2ac91c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2ac91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ac920: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AC920u;
    SET_GPR_U32(ctx, 31, 0x2AC928u);
    ctx->pc = 0x2AC924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC920u;
    // 0x2ac924: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AC920u, 0x2AC928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC928u;
label_2ac928:
    // 0x2ac928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac92c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC92Cu;
    SET_GPR_U32(ctx, 31, 0x2AC934u);
    ctx->pc = 0x2AC930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC92Cu;
    // 0x2ac930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC92Cu, 0x2AC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC934u;
label_2ac934:
    // 0x2ac934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac938: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AC938u;
    SET_GPR_U32(ctx, 31, 0x2AC940u);
    ctx->pc = 0x2AC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC938u;
    // 0x2ac93c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AC938u, 0x2AC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC940u;
label_2ac940:
    // 0x2ac940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac944: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2AC944u;
    SET_GPR_U32(ctx, 31, 0x2AC94Cu);
    ctx->pc = 0x2AC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC944u;
    // 0x2ac948: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2AC944u, 0x2AC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC94Cu;
label_2ac94c:
    // 0x2ac94c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2AC94Cu;
    SET_GPR_U32(ctx, 31, 0x2AC954u);
    ctx->pc = 0x2AC950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC94Cu;
    // 0x2ac950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2AC94Cu, 0x2AC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC954u;
label_2ac954:
    // 0x2ac954: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ac954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ac958: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ac958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac95c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac960: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ac960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ac964: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ac964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac968: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ac968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2ac96c: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x2ac96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x2ac970: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2ac970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac974: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ac974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac978: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC978u;
    {
        const bool branch_taken_0x2ac978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac978) {
            ctx->pc = 0x2AC988u;
            goto label_2ac988;
        }
    }
    ctx->pc = 0x2AC980u;
    // 0x2ac980: 0xe6a1002c  swc1        $f1, 0x2C($s5)
    ctx->pc = 0x2ac980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x2ac984: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2ac984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ac988:
    // 0x2ac988: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2ac988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac98c: 0x0  nop
    ctx->pc = 0x2ac98cu;
    // NOP
    // 0x2ac990: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC990u;
    {
        const bool branch_taken_0x2ac990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC990u;
        // 0x2ac994: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac990) {
            ctx->pc = 0x2AC9A8u;
            goto label_2ac9a8;
        }
    }
    ctx->pc = 0x2AC998u;
    // 0x2ac998: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2AC998u;
    SET_GPR_U32(ctx, 31, 0x2AC9A0u);
    ctx->pc = 0x2AC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC998u;
    // 0x2ac99c: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2AC998u, 0x2AC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9A0u;
label_2ac9a0:
    // 0x2ac9a0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2ac9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2ac9a4:
    // 0x2ac9a4: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ac9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ac9a8:
    // 0x2ac9a8: 0x27d3c268  addiu       $s3, $fp, -0x3D98
    ctx->pc = 0x2ac9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951528));
    // 0x2ac9ac: 0x2e39018  mult        $s2, $s7, $v1
    ctx->pc = 0x2ac9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2ac9b0: 0x26620048  addiu       $v0, $s3, 0x48
    ctx->pc = 0x2ac9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x2ac9b4: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2ac9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ac9b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ac9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ac9bc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AC9BCu;
    {
        const bool branch_taken_0x2ac9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9BCu;
        // 0x2ac9c0: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9bc) {
            ctx->pc = 0x2ACA58u;
            goto label_2aca58;
        }
    }
    ctx->pc = 0x2AC9C4u;
    // 0x2ac9c4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2ac9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2ac9c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac9cc: 0xc7818f04  lwc1        $f1, -0x70FC($gp)
    ctx->pc = 0x2ac9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac9d0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ac9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac9d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ac9d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ac9d8: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2ac9d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2ac9dc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ac9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ac9e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ac9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9e8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2ac9e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ac9ec: 0x0  nop
    ctx->pc = 0x2ac9ecu;
    // NOP
    // 0x2ac9f0: 0x0  nop
    ctx->pc = 0x2ac9f0u;
    // NOP
    // 0x2ac9f4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2ac9f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ac9f8: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2AC9F8u;
    SET_GPR_U32(ctx, 31, 0x2ACA00u);
    ctx->pc = 0x2AC9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9F8u;
    // 0x2ac9fc: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2AC9F8u, 0x2ACA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA00u;
label_2aca00:
    // 0x2aca00: 0xc78c8f08  lwc1        $f12, -0x70F8($gp)
    ctx->pc = 0x2aca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aca04: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2aca04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2aca08: 0xc78d8f0c  lwc1        $f13, -0x70F4($gp)
    ctx->pc = 0x2aca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aca0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca10: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2aca10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2aca14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aca14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aca18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aca18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aca1c: 0x460dab42  mul.s       $f13, $f21, $f13
    ctx->pc = 0x2aca1cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[13]);
    // 0x2aca20: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2aca20u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2aca24: 0x460d0341  sub.s       $f13, $f0, $f13
    ctx->pc = 0x2aca24u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2aca28: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x2ACA28u;
    SET_GPR_U32(ctx, 31, 0x2ACA30u);
    ctx->pc = 0x2ACA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA28u;
    // 0x2aca2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x2ACA28u, 0x2ACA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA30u;
label_2aca30:
    // 0x2aca30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aca34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aca34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca38: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2aca38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2aca3c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2ACA3Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA44u);
    ctx->pc = 0x2ACA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA3Cu;
    // 0x2aca40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2ACA3Cu, 0x2ACA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA44u;
label_2aca44:
    // 0x2aca44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aca48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2aca48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca4c: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2aca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2aca50: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2ACA50u;
    SET_GPR_U32(ctx, 31, 0x2ACA58u);
    ctx->pc = 0x2ACA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA50u;
    // 0x2aca54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2ACA50u, 0x2ACA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA58u;
label_2aca58:
    // 0x2aca58: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2aca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2aca5c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2aca5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2aca60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aca60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aca64: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2aca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aca68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aca68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aca6c: 0x0  nop
    ctx->pc = 0x2aca6cu;
    // NOP
    // 0x2aca70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACA70u;
    {
        const bool branch_taken_0x2aca70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA70u;
        // 0x2aca74: 0xdfbf0110  ld          $ra, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca70) {
            ctx->pc = 0x2ACA84u;
            goto label_2aca84;
        }
    }
    ctx->pc = 0x2ACA78u;
    // 0x2aca78: 0xc0aabb6  jal         func_2AAED8
    ctx->pc = 0x2ACA78u;
    SET_GPR_U32(ctx, 31, 0x2ACA80u);
    ctx->pc = 0x2ACA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA78u;
    // 0x2aca7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAED8u, 0x2ACA78u, 0x2ACA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA80u;
label_2aca80:
    // 0x2aca80: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2aca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2aca84:
    // 0x2aca84: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x2aca84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2aca88: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x2aca88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2aca8c: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x2aca8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2aca90: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x2aca90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2aca94: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2aca94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2aca98: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2aca98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2aca9c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2aca9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2acaa0: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2acaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2acaa4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2acaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2acaa8: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2acaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2acaac: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2acaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2acab0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2acab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAB4u;
        // 0x2acab8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACABCu;
}
