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

// Function: propEditMove
// Address: 0x27c2b0 - 0x27c400
void propEditMove_0x27c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propEditMove_0x27c2b0");
#endif

    switch (ctx->pc) {
        case 0x27c358u: goto label_27c358;
        case 0x27c3c0u: goto label_27c3c0;
        default: break;
    }

    ctx->pc = 0x27c2b0u;

    // 0x27c2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27c2b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x27c2b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27c2bc: 0x34a5ffdf  ori         $a1, $a1, 0xFFDF
    ctx->pc = 0x27c2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65503);
    // 0x27c2c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27c2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c2c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27c2cc: 0x8f88b234  lw          $t0, -0x4DCC($gp)
    ctx->pc = 0x27c2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27c2d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27c2d4: 0x8d030180  lw          $v1, 0x180($t0)
    ctx->pc = 0x27c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 384)));
    // 0x27c2d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x27c2dc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x27c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x27c2e0: 0x8c710160  lw          $s1, 0x160($v1)
    ctx->pc = 0x27c2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x27c2e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x27c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27c2e8: 0x8e24014c  lw          $a0, 0x14C($s1)
    ctx->pc = 0x27c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x27c2ec: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x27c2f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C2F0u;
    {
        const bool branch_taken_0x27c2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2F0u;
        // 0x27c2f4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2f0) {
            ctx->pc = 0x27C304u;
            goto label_27c304;
        }
    }
    ctx->pc = 0x27C2F8u;
    // 0x27c2f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27c2fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27c2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x27c300: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x27c300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_27c304:
    // 0x27c304: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x27c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x27c308: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C308u;
    {
        const bool branch_taken_0x27c308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c308) {
            ctx->pc = 0x27C30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C308u;
            // 0x27c30c: 0x8d020180  lw          $v0, 0x180($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C320u;
            goto label_27c320;
        }
    }
    ctx->pc = 0x27C310u;
    // 0x27c310: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x27c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27c314: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27c314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x27c318: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x27c318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x27c31c: 0x8d020180  lw          $v0, 0x180($t0)
    ctx->pc = 0x27c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 384)));
label_27c320:
    // 0x27c320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c324: 0x8d04031c  lw          $a0, 0x31C($t0)
    ctx->pc = 0x27c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 796)));
    // 0x27c328: 0x2509034c  addiu       $t1, $t0, 0x34C
    ctx->pc = 0x27c328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 844));
    // 0x27c32c: 0x8c460160  lw          $a2, 0x160($v0)
    ctx->pc = 0x27c32cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x27c330: 0x25050098  addiu       $a1, $t0, 0x98
    ctx->pc = 0x27c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 152));
    // 0x27c334: 0x64200a  movz        $a0, $v1, $a0
    ctx->pc = 0x27c334u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x27c338: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27c338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27c33c: 0x24c60ba0  addiu       $a2, $a2, 0xBA0
    ctx->pc = 0x27c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2976));
    // 0x27c340: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27c340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27c344: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27c344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c348: 0x25080340  addiu       $t0, $t0, 0x340
    ctx->pc = 0x27c348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 832));
    // 0x27c34c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27c34cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c350: 0xc09640e  jal         func_259038
    ctx->pc = 0x27C350u;
    SET_GPR_U32(ctx, 31, 0x27C358u);
    ctx->pc = 0x27C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C350u;
    // 0x27c354: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x27C350u, 0x27C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C358u;
label_27c358:
    // 0x27c358: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x27c358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x27c35c: 0x8e25014c  lw          $a1, 0x14C($s1)
    ctx->pc = 0x27c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x27c360: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x27c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x27c364: 0xac82033c  sw          $v0, 0x33C($a0)
    ctx->pc = 0x27c364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 2));
    // 0x27c368: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x27c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27c36c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x27c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x27c370: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C370u;
    {
        const bool branch_taken_0x27c370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C370u;
        // 0x27c374: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c370) {
            ctx->pc = 0x27C384u;
            goto label_27c384;
        }
    }
    ctx->pc = 0x27C378u;
    // 0x27c378: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x27c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27c37c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x27c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x27c380: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x27c380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_27c384:
    // 0x27c384: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x27c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x27c388: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C388u;
    {
        const bool branch_taken_0x27c388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c388) {
            ctx->pc = 0x27C38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C388u;
            // 0x27c38c: 0xc4800340  lwc1        $f0, 0x340($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C3A0u;
            goto label_27c3a0;
        }
    }
    ctx->pc = 0x27C390u;
    // 0x27c390: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x27c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27c394: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x27c394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x27c398: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x27c398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x27c39c: 0xc4800340  lwc1        $f0, 0x340($a0)
    ctx->pc = 0x27c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3a0:
    // 0x27c3a0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x27c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27c3a4: 0xc4810344  lwc1        $f1, 0x344($a0)
    ctx->pc = 0x27c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c3a8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x27c3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x27c3ac: 0xc4800348  lwc1        $f0, 0x348($a0)
    ctx->pc = 0x27c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c3b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x27c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27c3b4: 0xc48d0354  lwc1        $f13, 0x354($a0)
    ctx->pc = 0x27c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27c3b8: 0xc0b5f5a  jal         func_2D7D68
    ctx->pc = 0x27C3B8u;
    SET_GPR_U32(ctx, 31, 0x27C3C0u);
    ctx->pc = 0x27C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3B8u;
    // 0x27c3bc: 0xc48c034c  lwc1        $f12, 0x34C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D68u, 0x27C3B8u, 0x27C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3C0u;
label_27c3c0:
    // 0x27c3c0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27c3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27c3c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27c3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c3c8: 0xc78287b4  lwc1        $f2, -0x784C($gp)
    ctx->pc = 0x27c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c3cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c3d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x27c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27c3d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27c3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c3d8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x27c3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x27c3dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27c3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c3e0: 0x0  nop
    ctx->pc = 0x27c3e0u;
    // NOP
    // 0x27c3e4: 0x0  nop
    ctx->pc = 0x27c3e4u;
    // NOP
    // 0x27c3e8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27c3e8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x27c3ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x27c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x27c3f0: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x27c3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x27c3f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27c3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27C3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3F8u;
        // 0x27c3fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C400u;
}
