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

// Function: copterDamage
// Address: 0x277860 - 0x277b00
void copterDamage_0x277860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copterDamage_0x277860");
#endif

    switch (ctx->pc) {
        case 0x277908u: goto label_277908;
        case 0x277914u: goto label_277914;
        case 0x277938u: goto label_277938;
        case 0x27795cu: goto label_27795c;
        case 0x277964u: goto label_277964;
        case 0x27796cu: goto label_27796c;
        case 0x2779ccu: goto label_2779cc;
        default: break;
    }

    ctx->pc = 0x277860u;

    // 0x277860: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x277860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x277864: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x277864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x277868: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x277868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x27786c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x27786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x277870: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x277870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x277874: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x277874u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x277878: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x277878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27787c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x27787cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x277880: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x277880u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x277884: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x277884u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x277888: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x277888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27788c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x277890: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x277890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x277894: 0x24478160  addiu       $a3, $v0, -0x7EA0
    ctx->pc = 0x277894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
    // 0x277898: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x277898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27789c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x27789cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2778a0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2778a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A8168u));
    // 0x2778a4: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x2778a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2778a8: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x2778a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2778ac: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2778acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x2778b0: 0xc794866c  lwc1        $f20, -0x7994($gp)
    ctx->pc = 0x2778b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2778b4: 0x8c920160  lw          $s2, 0x160($a0)
    ctx->pc = 0x2778b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2778b8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2778b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2778bc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2778bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2778c0: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x2778c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2778c4: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x2778c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2778c8: 0xc64e003c  lwc1        $f14, 0x3C($s2)
    ctx->pc = 0x2778c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2778cc: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2778ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2778d0: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x2778d0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x2778d4: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x2778d4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x2778d8: 0x0  nop
    ctx->pc = 0x2778d8u;
    // NOP
    // 0x2778dc: 0x0  nop
    ctx->pc = 0x2778dcu;
    // NOP
    // 0x2778e0: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x2778e0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x2778e4: 0x0  nop
    ctx->pc = 0x2778e4u;
    // NOP
    // 0x2778e8: 0x0  nop
    ctx->pc = 0x2778e8u;
    // NOP
    // 0x2778ec: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x2778ecu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[22];
    // 0x2778f0: 0x0  nop
    ctx->pc = 0x2778f0u;
    // NOP
    // 0x2778f4: 0x0  nop
    ctx->pc = 0x2778f4u;
    // NOP
    // 0x2778f8: 0x46167383  div.s       $f14, $f14, $f22
    ctx->pc = 0x2778f8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[22];
    // 0x2778fc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2778fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x277900: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x277900u;
    SET_GPR_U32(ctx, 31, 0x277908u);
    ctx->pc = 0x277904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277900u;
    // 0x277904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x277900u, 0x277908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277908u;
label_277908:
    // 0x277908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x277908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27790c: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x27790Cu;
    SET_GPR_U32(ctx, 31, 0x277914u);
    ctx->pc = 0x277910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27790Cu;
    // 0x277910: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x27790Cu, 0x277914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277914u;
label_277914:
    // 0x277914: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x277914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277918: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x277918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27791c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27791cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x277920: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x277920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277924: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x277924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x277928: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x277928u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x27792c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27792cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x277930: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x277930u;
    SET_GPR_U32(ctx, 31, 0x277938u);
    ctx->pc = 0x277934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277930u;
    // 0x277934: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x277930u, 0x277938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277938u;
label_277938:
    // 0x277938: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x277938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27793c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x27793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277940: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x277940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x277944: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x277944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277948: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x277948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27794c: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x27794cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x277950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x277950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x277954: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x277954u;
    SET_GPR_U32(ctx, 31, 0x27795Cu);
    ctx->pc = 0x277958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277954u;
    // 0x277958: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x277954u, 0x27795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27795Cu;
label_27795c:
    // 0x27795c: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x27795Cu;
    SET_GPR_U32(ctx, 31, 0x277964u);
    ctx->pc = 0x277960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27795Cu;
    // 0x277960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x27795Cu, 0x277964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277964u;
label_277964:
    // 0x277964: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x277964u;
    SET_GPR_U32(ctx, 31, 0x27796Cu);
    ctx->pc = 0x277968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277964u;
    // 0x277968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x277964u, 0x27796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27796Cu;
label_27796c:
    // 0x27796c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x27796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x277970: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x277970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x277974: 0x0  nop
    ctx->pc = 0x277974u;
    // NOP
    // 0x277978: 0x0  nop
    ctx->pc = 0x277978u;
    // NOP
    // 0x27797c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x27797cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x277980: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x277980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x277984: 0x0  nop
    ctx->pc = 0x277984u;
    // NOP
    // 0x277988: 0x0  nop
    ctx->pc = 0x277988u;
    // NOP
    // 0x27798c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x27798cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x277990: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x277990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277994: 0x0  nop
    ctx->pc = 0x277994u;
    // NOP
    // 0x277998: 0x0  nop
    ctx->pc = 0x277998u;
    // NOP
    // 0x27799c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x27799cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x2779a0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2779a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2779a4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2779a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2779a8: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x2779a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2779ac: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2779acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2779b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2779b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2779b4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2779b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2779b8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2779b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2779bc: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2779bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2779c0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2779c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2779c4: 0xc0b5eda  jal         func_2D7B68
    ctx->pc = 0x2779C4u;
    SET_GPR_U32(ctx, 31, 0x2779CCu);
    ctx->pc = 0x2779C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779C4u;
    // 0x2779c8: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B68u, 0x2779C4u, 0x2779CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779CCu;
label_2779cc:
    // 0x2779cc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2779ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2779d0: 0x0  nop
    ctx->pc = 0x2779d0u;
    // NOP
    // 0x2779d4: 0x0  nop
    ctx->pc = 0x2779d4u;
    // NOP
    // 0x2779d8: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x2779d8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x2779dc: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x2779dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2779e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2779E0u;
    {
        const bool branch_taken_0x2779e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2779e0) {
            ctx->pc = 0x2779F4u;
            goto label_2779f4;
        }
    }
    ctx->pc = 0x2779E8u;
    // 0x2779e8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2779e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2779ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2779ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2779f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2779f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2779f4:
    // 0x2779f4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2779f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2779f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2779f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2779fc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2779fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277a00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x277A00u;
    {
        const bool branch_taken_0x277a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a00) {
            ctx->pc = 0x277A1Cu;
            goto label_277a1c;
        }
    }
    ctx->pc = 0x277A08u;
    // 0x277a08: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x277a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x277a0c: 0x0  nop
    ctx->pc = 0x277a0cu;
    // NOP
    // 0x277a10: 0x0  nop
    ctx->pc = 0x277a10u;
    // NOP
    // 0x277a14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x277a14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x277a18: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x277a18u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
label_277a1c:
    // 0x277a1c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x277a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277a20: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x277A20u;
    {
        const bool branch_taken_0x277a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a20) {
            ctx->pc = 0x277A44u;
            goto label_277a44;
        }
    }
    ctx->pc = 0x277A28u;
    // 0x277a28: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x277a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277a2c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x277A2Cu;
    {
        const bool branch_taken_0x277a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a2c) {
            ctx->pc = 0x277A44u;
            goto label_277a44;
        }
    }
    ctx->pc = 0x277A34u;
    // 0x277a34: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x277a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x277a38: 0x0  nop
    ctx->pc = 0x277a38u;
    // NOP
    // 0x277a3c: 0x0  nop
    ctx->pc = 0x277a3cu;
    // NOP
    // 0x277a40: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x277a40u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
label_277a44:
    // 0x277a44: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x277a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x277a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277a4c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x277a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277a50: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x277A50u;
    {
        const bool branch_taken_0x277a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a50) {
            ctx->pc = 0x277A88u;
            goto label_277a88;
        }
    }
    ctx->pc = 0x277A58u;
    // 0x277a58: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x277a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x277a5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277a60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x277a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277a64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x277A64u;
    {
        const bool branch_taken_0x277a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a64) {
            ctx->pc = 0x277A90u;
            goto label_277a90;
        }
    }
    ctx->pc = 0x277A6Cu;
    // 0x277a6c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x277a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x277a70: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x277a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x277a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277a78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x277a7c: 0x0  nop
    ctx->pc = 0x277a7cu;
    // NOP
    // 0x277a80: 0x0  nop
    ctx->pc = 0x277a80u;
    // NOP
    // 0x277a84: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x277a84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
label_277a88:
    // 0x277a88: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x277a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x277a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277a90:
    // 0x277a90: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x277a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277a94: 0x0  nop
    ctx->pc = 0x277a94u;
    // NOP
    // 0x277a98: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x277A98u;
    {
        const bool branch_taken_0x277a98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a98) {
            ctx->pc = 0x277A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277A98u;
            // 0x277a9c: 0x4615b802  mul.s       $f0, $f23, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277AC0u;
            goto label_277ac0;
        }
    }
    ctx->pc = 0x277AA0u;
    // 0x277aa0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x277aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x277aa4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x277aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x277aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277aac: 0x0  nop
    ctx->pc = 0x277aacu;
    // NOP
    // 0x277ab0: 0x0  nop
    ctx->pc = 0x277ab0u;
    // NOP
    // 0x277ab4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x277ab4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x277ab8: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x277ab8u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x277abc: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x277abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_277ac0:
    // 0x277ac0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x277ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x277ac4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x277ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x277ac8: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x277ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277acc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x277accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277ad0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x277ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x277ad4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x277ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277ad8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x277ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277adc: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x277adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x277ae0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x277ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x277ae4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x277ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x277ae8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x277ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x277aec: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x277aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277af0: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x277af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x277af4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x277af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277af8: 0x3e00008  jr          $ra
    ctx->pc = 0x277AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AF8u;
        // 0x277afc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277B00u;
}
