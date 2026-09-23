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

// Function: taxiDamage
// Address: 0x2775c0 - 0x277860
void taxiDamage_0x2775c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("taxiDamage_0x2775c0");
#endif

    switch (ctx->pc) {
        case 0x277668u: goto label_277668;
        case 0x277674u: goto label_277674;
        case 0x277698u: goto label_277698;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776ccu: goto label_2776cc;
        case 0x27772cu: goto label_27772c;
        default: break;
    }

    ctx->pc = 0x2775c0u;

    // 0x2775c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2775c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2775c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2775c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2775c8: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2775c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2775cc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2775ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2775d0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2775d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2775d4: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x2775d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2775d8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2775d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775dc: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2775dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2775e0: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2775e0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2775e4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2775e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2775e8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2775e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2775ec: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2775ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2775f0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2775f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2775f4: 0x24478160  addiu       $a3, $v0, -0x7EA0
    ctx->pc = 0x2775f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
    // 0x2775f8: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2775f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2775fc: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2775fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x277600: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x277600u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A8168u));
    // 0x277604: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x277604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277608: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x277608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27760c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x27760cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x277610: 0xc7948668  lwc1        $f20, -0x7998($gp)
    ctx->pc = 0x277610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277614: 0x8c920160  lw          $s2, 0x160($a0)
    ctx->pc = 0x277614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x277618: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x277618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27761c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27761cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x277620: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x277620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277624: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x277624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277628: 0xc64e003c  lwc1        $f14, 0x3C($s2)
    ctx->pc = 0x277628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27762c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x27762cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x277630: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x277630u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x277634: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x277634u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x277638: 0x0  nop
    ctx->pc = 0x277638u;
    // NOP
    // 0x27763c: 0x0  nop
    ctx->pc = 0x27763cu;
    // NOP
    // 0x277640: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x277640u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x277644: 0x0  nop
    ctx->pc = 0x277644u;
    // NOP
    // 0x277648: 0x0  nop
    ctx->pc = 0x277648u;
    // NOP
    // 0x27764c: 0x46166b43  div.s       $f13, $f13, $f22
    ctx->pc = 0x27764cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[22];
    // 0x277650: 0x0  nop
    ctx->pc = 0x277650u;
    // NOP
    // 0x277654: 0x0  nop
    ctx->pc = 0x277654u;
    // NOP
    // 0x277658: 0x46167383  div.s       $f14, $f14, $f22
    ctx->pc = 0x277658u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[22];
    // 0x27765c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27765cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x277660: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x277660u;
    SET_GPR_U32(ctx, 31, 0x277668u);
    ctx->pc = 0x277664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277660u;
    // 0x277664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x277660u, 0x277668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277668u;
label_277668:
    // 0x277668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x277668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27766c: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x27766Cu;
    SET_GPR_U32(ctx, 31, 0x277674u);
    ctx->pc = 0x277670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27766Cu;
    // 0x277670: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x27766Cu, 0x277674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277674u;
label_277674:
    // 0x277674: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x277674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277678: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x277678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27767c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27767cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x277680: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x277680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x277684: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x277684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x277688: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x277688u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x27768c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27768cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x277690: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x277690u;
    SET_GPR_U32(ctx, 31, 0x277698u);
    ctx->pc = 0x277694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277690u;
    // 0x277694: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x277690u, 0x277698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277698u;
label_277698:
    // 0x277698: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x277698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27769c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x27769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2776a0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2776a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2776a4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x2776a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2776a8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2776a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2776ac: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2776acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2776b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2776b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2776b4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2776B4u;
    SET_GPR_U32(ctx, 31, 0x2776BCu);
    ctx->pc = 0x2776B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776B4u;
    // 0x2776b8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2776B4u, 0x2776BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776BCu;
label_2776bc:
    // 0x2776bc: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x2776BCu;
    SET_GPR_U32(ctx, 31, 0x2776C4u);
    ctx->pc = 0x2776C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776BCu;
    // 0x2776c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x2776BCu, 0x2776C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776C4u;
label_2776c4:
    // 0x2776c4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2776C4u;
    SET_GPR_U32(ctx, 31, 0x2776CCu);
    ctx->pc = 0x2776C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776C4u;
    // 0x2776c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2776C4u, 0x2776CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776CCu;
label_2776cc:
    // 0x2776cc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2776ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2776d0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2776d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2776d4: 0x0  nop
    ctx->pc = 0x2776d4u;
    // NOP
    // 0x2776d8: 0x0  nop
    ctx->pc = 0x2776d8u;
    // NOP
    // 0x2776dc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2776dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2776e0: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2776e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2776e4: 0x0  nop
    ctx->pc = 0x2776e4u;
    // NOP
    // 0x2776e8: 0x0  nop
    ctx->pc = 0x2776e8u;
    // NOP
    // 0x2776ec: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2776ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2776f0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x2776f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2776f4: 0x0  nop
    ctx->pc = 0x2776f4u;
    // NOP
    // 0x2776f8: 0x0  nop
    ctx->pc = 0x2776f8u;
    // NOP
    // 0x2776fc: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x2776fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x277700: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x277700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277704: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x277704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277708: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x277708u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x27770c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x27770cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x277710: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x277710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x277714: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x277714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x277718: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x277718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27771c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x27771cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x277720: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x277720u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x277724: 0xc0b5eda  jal         func_2D7B68
    ctx->pc = 0x277724u;
    SET_GPR_U32(ctx, 31, 0x27772Cu);
    ctx->pc = 0x277728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277724u;
    // 0x277728: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B68u, 0x277724u, 0x27772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27772Cu;
label_27772c:
    // 0x27772c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x27772cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x277730: 0x0  nop
    ctx->pc = 0x277730u;
    // NOP
    // 0x277734: 0x0  nop
    ctx->pc = 0x277734u;
    // NOP
    // 0x277738: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x277738u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x27773c: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x27773cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277740: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x277740u;
    {
        const bool branch_taken_0x277740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277740) {
            ctx->pc = 0x277754u;
            goto label_277754;
        }
    }
    ctx->pc = 0x277748u;
    // 0x277748: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x277748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27774c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27774cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277750: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x277750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_277754:
    // 0x277754: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x277754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x277758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27775c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27775cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277760: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x277760u;
    {
        const bool branch_taken_0x277760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277760) {
            ctx->pc = 0x27777Cu;
            goto label_27777c;
        }
    }
    ctx->pc = 0x277768u;
    // 0x277768: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x277768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27776c: 0x0  nop
    ctx->pc = 0x27776cu;
    // NOP
    // 0x277770: 0x0  nop
    ctx->pc = 0x277770u;
    // NOP
    // 0x277774: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x277774u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x277778: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x277778u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
label_27777c:
    // 0x27777c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x27777cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277780: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x277780u;
    {
        const bool branch_taken_0x277780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277780) {
            ctx->pc = 0x2777A4u;
            goto label_2777a4;
        }
    }
    ctx->pc = 0x277788u;
    // 0x277788: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x277788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27778c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27778Cu;
    {
        const bool branch_taken_0x27778c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27778c) {
            ctx->pc = 0x2777A4u;
            goto label_2777a4;
        }
    }
    ctx->pc = 0x277794u;
    // 0x277794: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x277794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x277798: 0x0  nop
    ctx->pc = 0x277798u;
    // NOP
    // 0x27779c: 0x0  nop
    ctx->pc = 0x27779cu;
    // NOP
    // 0x2777a0: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2777a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
label_2777a4:
    // 0x2777a4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2777a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2777a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2777ac: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2777acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2777b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2777B0u;
    {
        const bool branch_taken_0x2777b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2777b0) {
            ctx->pc = 0x2777E8u;
            goto label_2777e8;
        }
    }
    ctx->pc = 0x2777B8u;
    // 0x2777b8: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x2777b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x2777bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2777bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2777c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2777c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2777c4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2777C4u;
    {
        const bool branch_taken_0x2777c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2777c4) {
            ctx->pc = 0x2777F0u;
            goto label_2777f0;
        }
    }
    ctx->pc = 0x2777CCu;
    // 0x2777cc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2777ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2777d0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2777d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2777d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2777d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2777d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2777d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2777dc: 0x0  nop
    ctx->pc = 0x2777dcu;
    // NOP
    // 0x2777e0: 0x0  nop
    ctx->pc = 0x2777e0u;
    // NOP
    // 0x2777e4: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2777e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
label_2777e8:
    // 0x2777e8: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x2777e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x2777ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2777ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2777f0:
    // 0x2777f0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2777f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2777f4: 0x0  nop
    ctx->pc = 0x2777f4u;
    // NOP
    // 0x2777f8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2777F8u;
    {
        const bool branch_taken_0x2777f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2777f8) {
            ctx->pc = 0x2777FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2777F8u;
            // 0x2777fc: 0x4615b802  mul.s       $f0, $f23, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277820u;
            goto label_277820;
        }
    }
    ctx->pc = 0x277800u;
    // 0x277800: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x277800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x277804: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x277808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27780c: 0x0  nop
    ctx->pc = 0x27780cu;
    // NOP
    // 0x277810: 0x0  nop
    ctx->pc = 0x277810u;
    // NOP
    // 0x277814: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x277814u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x277818: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x277818u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x27781c: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x27781cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_277820:
    // 0x277820: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x277824: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x277824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x277828: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x277828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27782c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277830: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x277830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x277834: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x277834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277838: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x277838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27783c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x27783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x277840: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x277840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x277844: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x277844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x277848: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x277848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27784c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x27784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277850: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x277850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x277854: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x277854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277858: 0x3e00008  jr          $ra
    ctx->pc = 0x277858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277858u;
        // 0x27785c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277860u;
}
