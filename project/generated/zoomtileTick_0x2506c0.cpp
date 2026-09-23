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

// Function: zoomtileTick
// Address: 0x2506c0 - 0x250b34
void zoomtileTick_0x2506c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileTick_0x2506c0");
#endif

    switch (ctx->pc) {
        case 0x2507c4u: goto label_2507c4;
        case 0x250848u: goto label_250848;
        case 0x2508c4u: goto label_2508c4;
        case 0x250940u: goto label_250940;
        case 0x250a18u: goto label_250a18;
        default: break;
    }

    ctx->pc = 0x2506c0u;

    // 0x2506c0: 0x8f83a210  lw          $v1, -0x5DF0($gp)
    ctx->pc = 0x2506c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x2506c4: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2506c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2506c8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2506c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2506cc: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x2506ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2506d0: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x2506d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2506d4: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2506d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2506d8: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2506d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2506dc: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2506dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2506e0: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2506e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2506e4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2506e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2506e8: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2506e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2506ec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2506ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2506f0: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x2506F0u;
    {
        const bool branch_taken_0x2506f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506F0u;
        // 0x2506f4: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506f0) {
            ctx->pc = 0x250B04u;
            goto label_250b04;
        }
    }
    ctx->pc = 0x2506F8u;
    // 0x2506f8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2506f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2506fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250700: 0x24906588  addiu       $s0, $a0, 0x6588
    ctx->pc = 0x250700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 25992));
    // 0x250704: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x250704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x250708: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x250708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25070c: 0x24427250  addiu       $v0, $v0, 0x7250
    ctx->pc = 0x25070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29264));
    // 0x250710: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x250710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250718: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25071c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x250720: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x250720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250728: 0x8f86a208  lw          $a2, -0x5DF8($gp)
    ctx->pc = 0x250728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x25072c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25072cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x250730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x250730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250734: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x250734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x250738: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x250738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25073c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25073cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x250740: 0xac85008c  sw          $a1, 0x8C($a0)
    ctx->pc = 0x250740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
    // 0x250744: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x250744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x250748: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x250748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x25074c: 0xc782a218  lwc1        $f2, -0x5DE8($gp)
    ctx->pc = 0x25074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250750: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x250750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x250758: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x250758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x25075c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x25075cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x250760: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x250760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x250764: 0xc4940030  lwc1        $f20, 0x30($a0)
    ctx->pc = 0x250764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250768: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x250768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25076c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x25076cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x250770: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x250770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x250774: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x250774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x250778: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x250778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25077c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x25077cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x250780: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x250780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x250784: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x250784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250788: 0xe482004c  swc1        $f2, 0x4C($a0)
    ctx->pc = 0x250788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x25078c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x25078cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x250790: 0x10c000b6  beqz        $a2, . + 4 + (0xB6 << 2)
    ctx->pc = 0x250790u;
    {
        const bool branch_taken_0x250790 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x250794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250790u;
        // 0x250794: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250790) {
            ctx->pc = 0x250A6Cu;
            goto label_250a6c;
        }
    }
    ctx->pc = 0x250798u;
    // 0x250798: 0xc78c826c  lwc1        $f12, -0x7D94($gp)
    ctx->pc = 0x250798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25079c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2507a0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2507a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2507a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2507a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2507a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2507a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507ac: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x2507acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2507b0: 0x0  nop
    ctx->pc = 0x2507b0u;
    // NOP
    // 0x2507b4: 0x0  nop
    ctx->pc = 0x2507b4u;
    // NOP
    // 0x2507b8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2507b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2507bc: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2507BCu;
    SET_GPR_U32(ctx, 31, 0x2507C4u);
    ctx->pc = 0x2507C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507BCu;
    // 0x2507c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2507BCu, 0x2507C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507C4u;
label_2507c4:
    // 0x2507c4: 0x8f82a210  lw          $v0, -0x5DF0($gp)
    ctx->pc = 0x2507c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x2507c8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2507c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2507cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2507ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2507d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2507d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2507d4: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2507d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2507d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2507d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2507dc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2507dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2507e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2507e4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2507e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2507e8: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x2507e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2507ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2507ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2507f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2507f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2507f4: 0x8f82b888  lw          $v0, -0x4778($gp)
    ctx->pc = 0x2507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x2507f8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2507f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2507fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2507fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x250800: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x250800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x250804: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x250804u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x250808: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x250808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25080c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25080cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x250810: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x250810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x250814: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x250814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x250818: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x250818u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25081c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x25081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x250820: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x250820u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x250824: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x250824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x250828: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x250828u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25082c: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x25082Cu;
    {
        const bool branch_taken_0x25082c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x250830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25082Cu;
        // 0x250830: 0xe7a40000  swc1        $f4, 0x0($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25082c) {
            ctx->pc = 0x2509D4u;
            goto label_2509d4;
        }
    }
    ctx->pc = 0x250834u;
    // 0x250834: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x250834u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x250838: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x250838u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x25083c: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x25083cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x250840: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x250840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x250844: 0x0  nop
    ctx->pc = 0x250844u;
    // NOP
label_250848:
    // 0x250848: 0x26834108  addiu       $v1, $s4, 0x4108
    ctx->pc = 0x250848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16648));
    // 0x25084c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x25084cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x250850: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x250850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250854: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x250854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x250858: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25085c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x25085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x250860: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x250860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x250864: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x250864u;
    {
        const bool branch_taken_0x250864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250864u;
        // 0x250868: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250864) {
            ctx->pc = 0x2509A0u;
            goto label_2509a0;
        }
    }
    ctx->pc = 0x25086Cu;
    // 0x25086c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x25086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250870: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x250874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x250874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25087c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x25087cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x250880: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x250880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250884: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x250884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x250888: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x250888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25088c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x25088cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x250890: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x250890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250894: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x250894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x250898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25089c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25089cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2508a0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2508a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2508a4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2508a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2508a8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2508a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2508ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2508acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2508b0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2508b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2508b4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2508b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2508b8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2508b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2508bc: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x2508BCu;
    SET_GPR_U32(ctx, 31, 0x2508C4u);
    ctx->pc = 0x2508C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2508BCu;
    // 0x2508c0: 0xe6220008  swc1        $f2, 0x8($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x2508BCu, 0x2508C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508C4u;
label_2508c4:
    // 0x2508c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2508c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2508c8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2508cc: 0xc781a218  lwc1        $f1, -0x5DE8($gp)
    ctx->pc = 0x2508ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2508d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2508d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2508d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2508d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2508d8: 0x8f84a220  lw          $a0, -0x5DE0($gp)
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x2508dc: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x2508dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2508e0: 0x1664000b  bne         $s3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2508E0u;
    {
        const bool branch_taken_0x2508e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x2508E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508E0u;
        // 0x2508e4: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508e0) {
            ctx->pc = 0x250910u;
            goto label_250910;
        }
    }
    ctx->pc = 0x2508E8u;
    // 0x2508e8: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2508ec: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x2508ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2508f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2508F0u;
    {
        const bool branch_taken_0x2508f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508f0) {
            ctx->pc = 0x2508F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2508F0u;
            // 0x2508f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2508F8u;
            goto label_2508f8;
        }
    }
    ctx->pc = 0x2508F8u;
label_2508f8:
    // 0x2508f8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2508f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2508fc: 0x1810  mfhi        $v1
    ctx->pc = 0x2508fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x250900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x250900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250908u;
    {
        const bool branch_taken_0x250908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250908u;
        // 0x25090c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250908) {
            ctx->pc = 0x25091Cu;
            goto label_25091c;
        }
    }
    ctx->pc = 0x250910u;
label_250910:
    // 0x250910: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x250910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x250914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250918: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x250918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25091c:
    // 0x25091c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x25091cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x250920: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x250920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250924: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x250924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250928: 0x0  nop
    ctx->pc = 0x250928u;
    // NOP
    // 0x25092c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x25092Cu;
    {
        const bool branch_taken_0x25092c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25092Cu;
        // 0x250930: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25092c) {
            ctx->pc = 0x250964u;
            goto label_250964;
        }
    }
    ctx->pc = 0x250934u;
    // 0x250934: 0x8f87b888  lw          $a3, -0x4778($gp)
    ctx->pc = 0x250934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x250938: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x250938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25093c: 0x0  nop
    ctx->pc = 0x25093cu;
    // NOP
label_250940:
    // 0x250940: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x250940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250944: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x250944u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x250948: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x250948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25094c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25094cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250950: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x250950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x250954: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x250954u;
    {
        const bool branch_taken_0x250954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250954) {
            ctx->pc = 0x250940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250940;
        }
    }
    ctx->pc = 0x25095Cu;
    // 0x25095c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25095Cu;
    {
        const bool branch_taken_0x25095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25095Cu;
        // 0x250960: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25095c) {
            ctx->pc = 0x250970u;
            goto label_250970;
        }
    }
    ctx->pc = 0x250964u;
label_250964:
    // 0x250964: 0x8f87b888  lw          $a3, -0x4778($gp)
    ctx->pc = 0x250964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x250968: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x250968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25096c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_250970:
    // 0x250970: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x250970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250974: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x250974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x250978: 0x26844108  addiu       $a0, $s4, 0x4108
    ctx->pc = 0x250978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16648));
    // 0x25097c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250980: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x250980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x250984: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x250984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250988: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x250988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25098c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x25098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250990: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x250990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x250994: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x250994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x250998u;
    {
        const bool branch_taken_0x250998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250998u;
        // 0x25099c: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250998) {
            ctx->pc = 0x2509BCu;
            goto label_2509bc;
        }
    }
    ctx->pc = 0x2509A0u;
label_2509a0:
    // 0x2509a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2509a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2509a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2509a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2509a8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2509a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2509ac: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x2509acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2509b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2509b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2509b4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2509b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2509b8: 0x8f87b888  lw          $a3, -0x4778($gp)
    ctx->pc = 0x2509b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
label_2509bc:
    // 0x2509bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2509bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509c0: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x2509c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2509c4: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2509C4u;
    {
        const bool branch_taken_0x2509c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2509C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509C4u;
        // 0x2509c8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509c4) {
            ctx->pc = 0x250848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250848;
        }
    }
    ctx->pc = 0x2509CCu;
    // 0x2509cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2509CCu;
    {
        const bool branch_taken_0x2509cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509CCu;
        // 0x2509d0: 0x8f85a220  lw          $a1, -0x5DE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509cc) {
            ctx->pc = 0x2509E0u;
            goto label_2509e0;
        }
    }
    ctx->pc = 0x2509D4u;
label_2509d4:
    // 0x2509d4: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x2509d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x2509d8: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x2509d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x2509dc: 0x8f85a220  lw          $a1, -0x5DE0($gp)
    ctx->pc = 0x2509dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
label_2509e0:
    // 0x2509e0: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2509E0u;
    {
        const bool branch_taken_0x2509e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509E0u;
        // 0x2509e4: 0x8f84a228  lw          $a0, -0x5DD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509e0) {
            ctx->pc = 0x250A54u;
            goto label_250a54;
        }
    }
    ctx->pc = 0x2509E8u;
    // 0x2509e8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2509e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2509ec: 0xc780a218  lwc1        $f0, -0x5DE8($gp)
    ctx->pc = 0x2509ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2509f0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2509f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2509f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2509f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2509f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2509f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2509fc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2509fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x250a00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x250a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a04: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x250a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x250a08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x250a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x250a0c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x250A0Cu;
    {
        const bool branch_taken_0x250a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A0Cu;
        // 0x250a10: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a0c) {
            ctx->pc = 0x250A38u;
            goto label_250a38;
        }
    }
    ctx->pc = 0x250A14u;
    // 0x250a14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x250a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250a18:
    // 0x250a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x250a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x250a1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x250a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a20: 0x0  nop
    ctx->pc = 0x250a20u;
    // NOP
    // 0x250a24: 0x0  nop
    ctx->pc = 0x250a24u;
    // NOP
    // 0x250a28: 0x0  nop
    ctx->pc = 0x250a28u;
    // NOP
    // 0x250a2c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x250A2Cu;
    {
        const bool branch_taken_0x250a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250a2c) {
            ctx->pc = 0x250A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250a18;
        }
    }
    ctx->pc = 0x250A34u;
    // 0x250a34: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x250a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_250a38:
    // 0x250a38: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x250a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a3c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x250a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x250a40: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x250a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250a44: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x250a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x250a48: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x250a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x250A4Cu;
    {
        const bool branch_taken_0x250a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A4Cu;
        // 0x250a50: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a4c) {
            ctx->pc = 0x250A74u;
            goto label_250a74;
        }
    }
    ctx->pc = 0x250A54u;
label_250a54:
    // 0x250a54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x250a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x250a58: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x250a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x250a5c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x250a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x250a60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x250a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x250a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250A64u;
    {
        const bool branch_taken_0x250a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A64u;
        // 0x250a68: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a64) {
            ctx->pc = 0x250A74u;
            goto label_250a74;
        }
    }
    ctx->pc = 0x250A6Cu;
label_250a6c:
    // 0x250a6c: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x250a6cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x250a70: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x250a70u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_250a74:
    // 0x250a74: 0xc780a21c  lwc1        $f0, -0x5DE4($gp)
    ctx->pc = 0x250a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a78: 0x26c43ff0  addiu       $a0, $s6, 0x3FF0
    ctx->pc = 0x250a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16368));
    // 0x250a7c: 0xc7818270  lwc1        $f1, -0x7D90($gp)
    ctx->pc = 0x250a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250a80: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x250a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x250a84: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x250a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x250a88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x250a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250a8c: 0x26e55c60  addiu       $a1, $s7, 0x5C60
    ctx->pc = 0x250a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23648));
    // 0x250a90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x250a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x250a94: 0xc7838274  lwc1        $f3, -0x7D8C($gp)
    ctx->pc = 0x250a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250a98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x250a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x250a9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250aa0: 0xaec03ff0  sw          $zero, 0x3FF0($s6)
    ctx->pc = 0x250aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16368), GPR_U32(ctx, 0));
    // 0x250aa4: 0x0  nop
    ctx->pc = 0x250aa4u;
    // NOP
    // 0x250aa8: 0x0  nop
    ctx->pc = 0x250aa8u;
    // NOP
    // 0x250aac: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x250aacu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x250ab0: 0xc784a214  lwc1        $f4, -0x5DEC($gp)
    ctx->pc = 0x250ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x250ab4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x250ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x250ab8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x250ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x250abc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x250abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x250ac0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x250ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x250ac4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x250ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x250ac8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x250ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x250acc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x250accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250ad0: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x250ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x250ad4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x250ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x250ad8: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x250ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x250adc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x250adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x250ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x250ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250ae4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x250ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x250ae8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x250ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x250aec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x250aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250af0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x250af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250af4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x250af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x250af8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x250af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x250afc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x250afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x250b00: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x250b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_250b04:
    // 0x250b04: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x250b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x250b08: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x250b08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250b0c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x250b0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x250b10: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x250b10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x250b14: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x250b14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250b18: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x250b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250b1c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x250b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250b20: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x250b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250b24: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x250b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250b28: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x250b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x250B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B2Cu;
        // 0x250b30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B34u;
}
