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

// Function: pickupPropTick
// Address: 0x26a330 - 0x26b0f0
void pickupPropTick_0x26a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pickupPropTick_0x26a330");
#endif

    switch (ctx->pc) {
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a534u: goto label_26a534;
        case 0x26a540u: goto label_26a540;
        case 0x26a550u: goto label_26a550;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a584u: goto label_26a584;
        case 0x26a5f0u: goto label_26a5f0;
        case 0x26a60cu: goto label_26a60c;
        case 0x26a640u: goto label_26a640;
        case 0x26a71cu: goto label_26a71c;
        case 0x26a780u: goto label_26a780;
        case 0x26a96cu: goto label_26a96c;
        case 0x26a9a4u: goto label_26a9a4;
        case 0x26a9f8u: goto label_26a9f8;
        case 0x26aa20u: goto label_26aa20;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab18u: goto label_26ab18;
        case 0x26ab28u: goto label_26ab28;
        case 0x26ab8cu: goto label_26ab8c;
        case 0x26aba0u: goto label_26aba0;
        case 0x26abecu: goto label_26abec;
        case 0x26ac58u: goto label_26ac58;
        case 0x26ac60u: goto label_26ac60;
        case 0x26ac84u: goto label_26ac84;
        case 0x26aca8u: goto label_26aca8;
        case 0x26acbcu: goto label_26acbc;
        case 0x26ad20u: goto label_26ad20;
        case 0x26ad90u: goto label_26ad90;
        case 0x26ad9cu: goto label_26ad9c;
        case 0x26add4u: goto label_26add4;
        case 0x26ade8u: goto label_26ade8;
        case 0x26adfcu: goto label_26adfc;
        case 0x26ae10u: goto label_26ae10;
        case 0x26ae28u: goto label_26ae28;
        case 0x26ae40u: goto label_26ae40;
        case 0x26ae84u: goto label_26ae84;
        case 0x26ae94u: goto label_26ae94;
        case 0x26aed8u: goto label_26aed8;
        case 0x26aee8u: goto label_26aee8;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af20u: goto label_26af20;
        case 0x26af34u: goto label_26af34;
        case 0x26af44u: goto label_26af44;
        case 0x26af84u: goto label_26af84;
        case 0x26afe4u: goto label_26afe4;
        case 0x26b000u: goto label_26b000;
        case 0x26b010u: goto label_26b010;
        case 0x26b04cu: goto label_26b04c;
        default: break;
    }

    ctx->pc = 0x26a330u;

    // 0x26a330: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26a334: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26a338: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26a33c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26a33cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a340: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x26a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x26a344: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x26a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x26a348: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x26a34c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26a350: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26a354: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26a358: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26a35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26a360: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x26a360u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x26a364: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x26a364u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x26a368: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x26a368u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x26a36c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x26a36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x26a370: 0x8ea201e8  lw          $v0, 0x1E8($s5)
    ctx->pc = 0x26a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 488)));
    // 0x26a374: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x26A374u;
    {
        const bool branch_taken_0x26a374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A374u;
        // 0x26a378: 0x8eb40160  lw          $s4, 0x160($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a374) {
            ctx->pc = 0x26A468u;
            goto label_26a468;
        }
    }
    ctx->pc = 0x26A37Cu;
    // 0x26a37c: 0x8ea201ec  lw          $v0, 0x1EC($s5)
    ctx->pc = 0x26a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 492)));
    // 0x26a380: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x26a384: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x26a384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x26a388: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a38c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a390: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26a394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26a398: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x26a398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a39c: 0x0  nop
    ctx->pc = 0x26a39cu;
    // NOP
    // 0x26a3a0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x26A3A0u;
    {
        const bool branch_taken_0x26a3a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3A0u;
        // 0x26a3a4: 0xaea201ec  sw          $v0, 0x1EC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3a0) {
            ctx->pc = 0x26A418u;
            goto label_26a418;
        }
    }
    ctx->pc = 0x26A3A8u;
    // 0x26a3a8: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x26a3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x26a3ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a3b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26a3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26a3b4: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x26a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x26a3b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a3bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26a3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26a3c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x26a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a3c4: 0x0  nop
    ctx->pc = 0x26a3c4u;
    // NOP
    // 0x26a3c8: 0x0  nop
    ctx->pc = 0x26a3c8u;
    // NOP
    // 0x26a3cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26a3ccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26a3d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a3d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26a3d4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x26a3d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x26a3d8: 0xc098ffc  jal         func_263FF0
    ctx->pc = 0x26A3D8u;
    SET_GPR_U32(ctx, 31, 0x26A3E0u);
    ctx->pc = 0x26A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A3D8u;
    // 0x26a3dc: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FF0u, 0x26A3D8u, 0x26A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3E0u;
label_26a3e0:
    // 0x26a3e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x26a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26a3e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a3e8: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A3E8u;
    {
        const bool branch_taken_0x26a3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a3e8) {
            ctx->pc = 0x26A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A3E8u;
            // 0x26a3ec: 0x8ea201ec  lw          $v0, 0x1EC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A41Cu;
            goto label_26a41c;
        }
    }
    ctx->pc = 0x26A3F0u;
    // 0x26a3f0: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x26a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x26a3f4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x26a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26a3f8: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x26a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26a3fc: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x26a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x26a400: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x26a400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26a404: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26a404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26a408: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26a408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26a40c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26a410: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a414: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x26a414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_26a418:
    // 0x26a418: 0x8ea201ec  lw          $v0, 0x1EC($s5)
    ctx->pc = 0x26a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 492)));
label_26a41c:
    // 0x26a41c: 0x5c400013  bgtzl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26A41Cu;
    {
        const bool branch_taken_0x26a41c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26a41c) {
            ctx->pc = 0x26A420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A41Cu;
            // 0x26a420: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A46Cu;
            goto label_26a46c;
        }
    }
    ctx->pc = 0x26A424u;
    // 0x26a424: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a428: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26a42c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x26a42cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a430: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a434: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26a434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a438: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26a438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a43c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26a43cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a440: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26a440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a444: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26a444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a448: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26a448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a44c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26a44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a450: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x26a450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26a454: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x26a454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26a458: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x26a458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a45c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x26a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a460: 0x809cd86  j           func_273618
    ctx->pc = 0x26A460u;
    ctx->pc = 0x26A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A460u;
    // 0x26a464: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273618u;
    pickupPropDelete_0x273618(rdram, ctx, runtime); return;
    ctx->pc = 0x26A468u;
label_26a468:
    // 0x26a468: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x26a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_26a46c:
    // 0x26a46c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a470: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x26A470u;
    {
        const bool branch_taken_0x26a470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A470u;
        // 0x26a474: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a470) {
            ctx->pc = 0x26A628u;
            goto label_26a628;
        }
    }
    ctx->pc = 0x26A478u;
    // 0x26a478: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26a47c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26a480: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x26a480u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x26a484: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A484u;
    {
        const bool branch_taken_0x26a484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x26a484) {
            ctx->pc = 0x26A488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A484u;
            // 0x26a488: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A4A0u;
            goto label_26a4a0;
        }
    }
    ctx->pc = 0x26A48Cu;
    // 0x26a48c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x26a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26a490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a494: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x26A494u;
    {
        const bool branch_taken_0x26a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A494u;
        // 0x26a498: 0x8f87b59c  lw          $a3, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a494) {
            ctx->pc = 0x26A62Cu;
            goto label_26a62c;
        }
    }
    ctx->pc = 0x26A49Cu;
    // 0x26a49c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x26a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_26a4a0:
    // 0x26a4a0: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x26a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x26a4a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A4A4u;
    {
        const bool branch_taken_0x26a4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A4u;
        // 0x26a4a8: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4a4) {
            ctx->pc = 0x26A4BCu;
            goto label_26a4bc;
        }
    }
    ctx->pc = 0x26A4ACu;
    // 0x26a4ac: 0xc09a7f2  jal         func_269FC8
    ctx->pc = 0x26A4ACu;
    SET_GPR_U32(ctx, 31, 0x26A4B4u);
    ctx->pc = 0x26A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A4ACu;
    // 0x26a4b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269FC8u, 0x26A4ACu, 0x26A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4B4u;
label_26a4b4:
    // 0x26a4b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26A4B4u;
    {
        const bool branch_taken_0x26a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4B4u;
        // 0x26a4b8: 0x8e830060  lw          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4b4) {
            ctx->pc = 0x26A4ECu;
            goto label_26a4ec;
        }
    }
    ctx->pc = 0x26A4BCu;
label_26a4bc:
    // 0x26a4bc: 0xc6a1004c  lwc1        $f1, 0x4C($s5)
    ctx->pc = 0x26a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a4c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26a4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26a4c4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x26a4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x26a4c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a4cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a4d0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x26a4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a4d4: 0x0  nop
    ctx->pc = 0x26a4d4u;
    // NOP
    // 0x26a4d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26A4D8u;
    {
        const bool branch_taken_0x26a4d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D8u;
        // 0x26a4dc: 0xe6a0004c  swc1        $f0, 0x4C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4d8) {
            ctx->pc = 0x26A4E8u;
            goto label_26a4e8;
        }
    }
    ctx->pc = 0x26A4E0u;
    // 0x26a4e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26a4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26a4e4: 0xe6a0004c  swc1        $f0, 0x4C($s5)
    ctx->pc = 0x26a4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
label_26a4e8:
    // 0x26a4e8: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x26a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_26a4ec:
    // 0x26a4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a4f0: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x26A4F0u;
    {
        const bool branch_taken_0x26a4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4F0u;
        // 0x26a4f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4f0) {
            ctx->pc = 0x26A624u;
            goto label_26a624;
        }
    }
    ctx->pc = 0x26A4F8u;
    // 0x26a4f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x26a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26a4fc: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26A4FCu;
    {
        const bool branch_taken_0x26a4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a4fc) {
            ctx->pc = 0x26A500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4FCu;
            // 0x26a500: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A5ACu;
            goto label_26a5ac;
        }
    }
    ctx->pc = 0x26A504u;
    // 0x26a504: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x26a508: 0x2442feaa  addiu       $v0, $v0, -0x156
    ctx->pc = 0x26a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966954));
    // 0x26a50c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x26a50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x26a510: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x26A510u;
    {
        const bool branch_taken_0x26a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a510) {
            ctx->pc = 0x26A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A510u;
            // 0x26a514: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A5ACu;
            goto label_26a5ac;
        }
    }
    ctx->pc = 0x26A518u;
    // 0x26a518: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x26a518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26a51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26a520: 0xc78c8410  lwc1        $f12, -0x7BF0($gp)
    ctx->pc = 0x26a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a524: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x26a524u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x26a528: 0x26315c60  addiu       $s1, $s1, 0x5C60
    ctx->pc = 0x26a528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23648));
    // 0x26a52c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x26A52Cu;
    SET_GPR_U32(ctx, 31, 0x26A534u);
    ctx->pc = 0x26A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A52Cu;
    // 0x26a530: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x26A52Cu, 0x26A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A534u;
label_26a534:
    // 0x26a534: 0xc68c0068  lwc1        $f12, 0x68($s4)
    ctx->pc = 0x26a534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a538: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x26A538u;
    SET_GPR_U32(ctx, 31, 0x26A540u);
    ctx->pc = 0x26A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A538u;
    // 0x26a53c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x26A538u, 0x26A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A540u;
label_26a540:
    // 0x26a540: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x26a540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x26a544: 0xdc257dd8  ld          $a1, 0x7DD8($at)
    ctx->pc = 0x26a544u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A7DD8u));
    // 0x26a548: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x26A548u;
    SET_GPR_U32(ctx, 31, 0x26A550u);
    ctx->pc = 0x26A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A548u;
    // 0x26a54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x26A548u, 0x26A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A550u;
label_26a550:
    // 0x26a550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a554: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x26A554u;
    SET_GPR_U32(ctx, 31, 0x26A55Cu);
    ctx->pc = 0x26A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A554u;
    // 0x26a558: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x26A554u, 0x26A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A55Cu;
label_26a55c:
    // 0x26a55c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x26a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x26a560: 0xdc257de0  ld          $a1, 0x7DE0($at)
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A7DE0u));
    // 0x26a564: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x26A564u;
    SET_GPR_U32(ctx, 31, 0x26A56Cu);
    ctx->pc = 0x26A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A564u;
    // 0x26a568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x26A564u, 0x26A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A56Cu;
label_26a56c:
    // 0x26a56c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26a56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26a570: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26a570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26a574: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x26A574u;
    SET_GPR_U32(ctx, 31, 0x26A57Cu);
    ctx->pc = 0x26A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A574u;
    // 0x26a578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x26A574u, 0x26A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A57Cu;
label_26a57c:
    // 0x26a57c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x26A57Cu;
    SET_GPR_U32(ctx, 31, 0x26A584u);
    ctx->pc = 0x26A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A57Cu;
    // 0x26a580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x26A57Cu, 0x26A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A584u;
label_26a584:
    // 0x26a584: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26a588: 0xc7828414  lwc1        $f2, -0x7BEC($gp)
    ctx->pc = 0x26a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a58c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a590: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a594: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26a598: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a59c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26a59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26a5a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26a5a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a5a4: 0xe6a10034  swc1        $f1, 0x34($s5)
    ctx->pc = 0x26a5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x26a5a8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26a5ac:
    // 0x26a5ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26a5b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26A5B0u;
    {
        const bool branch_taken_0x26a5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5B0u;
        // 0x26a5b4: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5b0) {
            ctx->pc = 0x26A628u;
            goto label_26a628;
        }
    }
    ctx->pc = 0x26A5B8u;
    // 0x26a5b8: 0xc6810064  lwc1        $f1, 0x64($s4)
    ctx->pc = 0x26a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26a5c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a5c8: 0x0  nop
    ctx->pc = 0x26a5c8u;
    // NOP
    // 0x26a5cc: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x26A5CCu;
    {
        const bool branch_taken_0x26a5cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5CCu;
        // 0x26a5d0: 0x8f87b59c  lw          $a3, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5cc) {
            ctx->pc = 0x26A62Cu;
            goto label_26a62c;
        }
    }
    ctx->pc = 0x26A5D4u;
    // 0x26a5d4: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x26a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x26a5d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26a5dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26a5e0: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A5E0u;
    {
        const bool branch_taken_0x26a5e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E0u;
        // 0x26a5e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5e0) {
            ctx->pc = 0x26A62Cu;
            goto label_26a62c;
        }
    }
    ctx->pc = 0x26A5E8u;
    // 0x26a5e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26a5ec: 0x0  nop
    ctx->pc = 0x26a5ecu;
    // NOP
label_26a5f0:
    // 0x26a5f0: 0xc68c0064  lwc1        $f12, 0x64($s4)
    ctx->pc = 0x26a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a5f4: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x26a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26a5f8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x26a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26a5fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26a600: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x26a600u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x26a604: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x26A604u;
    SET_GPR_U32(ctx, 31, 0x26A60Cu);
    ctx->pc = 0x26A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A604u;
    // 0x26a608: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x26A604u, 0x26A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A60Cu;
label_26a60c:
    // 0x26a60c: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x26a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x26a610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26a614: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a618: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26a618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26a61c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x26A61Cu;
    {
        const bool branch_taken_0x26a61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a61c) {
            ctx->pc = 0x26A620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A61Cu;
            // 0x26a620: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a5f0;
        }
    }
    ctx->pc = 0x26A624u;
label_26a624:
    // 0x26a624: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x26a624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_26a628:
    // 0x26a628: 0x8f87b59c  lw          $a3, -0x4A64($gp)
    ctx->pc = 0x26a628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_26a62c:
    // 0x26a62c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x26a62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a630: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x26a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x26a634: 0x1840029e  blez        $v0, . + 4 + (0x29E << 2)
    ctx->pc = 0x26A634u;
    {
        const bool branch_taken_0x26a634 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A634u;
        // 0x26a638: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a634) {
            ctx->pc = 0x26B0B0u;
            goto label_26b0b0;
        }
    }
    ctx->pc = 0x26A63Cu;
    // 0x26a63c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x26a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_26a640:
    // 0x26a640: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x26a640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x26a644: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x26a644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26a648: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x26a648u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a64c: 0x8ec30a9c  lw          $v1, 0xA9C($s6)
    ctx->pc = 0x26a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2716)));
    // 0x26a650: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x26a650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x26a654: 0x1440027f  bnez        $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x26A654u;
    {
        const bool branch_taken_0x26a654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A654u;
        // 0x26a658: 0x8ed30bcc  lw          $s3, 0xBCC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a654) {
            ctx->pc = 0x26B054u;
            goto label_26b054;
        }
    }
    ctx->pc = 0x26A65Cu;
    // 0x26a65c: 0x1060027d  beqz        $v1, . + 4 + (0x27D << 2)
    ctx->pc = 0x26A65Cu;
    {
        const bool branch_taken_0x26a65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A65Cu;
        // 0x26a660: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a65c) {
            ctx->pc = 0x26B054u;
            goto label_26b054;
        }
    }
    ctx->pc = 0x26A664u;
    // 0x26a664: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x26a664u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x26a668: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a66c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26a66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26a670: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x26a670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x26a674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a678: 0x54440288  bnel        $v0, $a0, . + 4 + (0x288 << 2)
    ctx->pc = 0x26A678u;
    {
        const bool branch_taken_0x26a678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26a678) {
            ctx->pc = 0x26A67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A678u;
            // 0x26a67c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B09Cu;
            goto label_26b09c;
        }
    }
    ctx->pc = 0x26A680u;
    // 0x26a680: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x26a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x26a684: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x26a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x26a688: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26a688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26a68c: 0x54400283  bnel        $v0, $zero, . + 4 + (0x283 << 2)
    ctx->pc = 0x26A68Cu;
    {
        const bool branch_taken_0x26a68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a68c) {
            ctx->pc = 0x26A690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A68Cu;
            // 0x26a690: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B09Cu;
            goto label_26b09c;
        }
    }
    ctx->pc = 0x26A694u;
    // 0x26a694: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x26a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x26a698: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x26a698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x26a69c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a6a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A6A0u;
    {
        const bool branch_taken_0x26a6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a6a0) {
            ctx->pc = 0x26A6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A6A0u;
            // 0x26a6a4: 0xc6750034  lwc1        $f21, 0x34($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A6C0u;
            goto label_26a6c0;
        }
    }
    ctx->pc = 0x26A6A8u;
    // 0x26a6a8: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x26a6a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26a6ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A6ACu;
    {
        const bool branch_taken_0x26a6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a6ac) {
            ctx->pc = 0x26A6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A6ACu;
            // 0x26a6b0: 0xc6750034  lwc1        $f21, 0x34($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A6C0u;
            goto label_26a6c0;
        }
    }
    ctx->pc = 0x26A6B4u;
    // 0x26a6b4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x26a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a6b8: 0xc7808418  lwc1        $f0, -0x7BE8($gp)
    ctx->pc = 0x26a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6bc: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x26a6bcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26a6c0:
    // 0x26a6c0: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x26a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a6c8: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x26a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a6cc: 0x8ea20160  lw          $v0, 0x160($s5)
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x26a6d0: 0x46000dc1  sub.s       $f23, $f1, $f0
    ctx->pc = 0x26a6d0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a6d4: 0xc6a20038  lwc1        $f2, 0x38($s5)
    ctx->pc = 0x26a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a6d8: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x26a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a6dc: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x26a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6e0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x26a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x26a6e4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A6E4u;
    {
        const bool branch_taken_0x26a6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6E4u;
        // 0x26a6e8: 0x46001581  sub.s       $f22, $f2, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6e4) {
            ctx->pc = 0x26A6F4u;
            goto label_26a6f4;
        }
    }
    ctx->pc = 0x26A6ECu;
    // 0x26a6ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A6ECu;
    {
        const bool branch_taken_0x26a6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6ECu;
        // 0x26a6f0: 0xc6a00034  lwc1        $f0, 0x34($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6ec) {
            ctx->pc = 0x26A6F8u;
            goto label_26a6f8;
        }
    }
    ctx->pc = 0x26A6F4u;
label_26a6f4:
    // 0x26a6f4: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x26a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a6f8:
    // 0x26a6f8: 0xc6a10200  lwc1        $f1, 0x200($s5)
    ctx->pc = 0x26a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a6fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a700: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x26a700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x26a704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a708: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A708u;
    {
        const bool branch_taken_0x26a708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A708u;
        // 0x26a70c: 0x46030501  sub.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a708) {
            ctx->pc = 0x26A720u;
            goto label_26a720;
        }
    }
    ctx->pc = 0x26A710u;
    // 0x26a710: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x26a714: 0xc09cc0e  jal         func_273038
    ctx->pc = 0x26A714u;
    SET_GPR_U32(ctx, 31, 0x26A71Cu);
    ctx->pc = 0x26A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A714u;
    // 0x26a718: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273038u, 0x26A714u, 0x26A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A71Cu;
label_26a71c:
    // 0x26a71c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x26a71cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_26a720:
    // 0x26a720: 0xc6a0020c  lwc1        $f0, 0x20C($s5)
    ctx->pc = 0x26a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a724: 0xc781841c  lwc1        $f1, -0x7BE4($gp)
    ctx->pc = 0x26a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a72c: 0x4600a081  sub.s       $f2, $f20, $f0
    ctx->pc = 0x26a72cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x26a730: 0x46151036  c.le.s      $f2, $f21
    ctx->pc = 0x26a730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a734: 0x0  nop
    ctx->pc = 0x26a734u;
    // NOP
    // 0x26a738: 0x45020248  bc1fl       . + 4 + (0x248 << 2)
    ctx->pc = 0x26A738u;
    {
        const bool branch_taken_0x26a738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a738) {
            ctx->pc = 0x26A73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A738u;
            // 0x26a73c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B05Cu;
            goto label_26b05c;
        }
    }
    ctx->pc = 0x26A740u;
    // 0x26a740: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x26a740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x26a744: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x26a744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a748: 0x0  nop
    ctx->pc = 0x26a748u;
    // NOP
    // 0x26a74c: 0x45020245  bc1fl       . + 4 + (0x245 << 2)
    ctx->pc = 0x26A74Cu;
    {
        const bool branch_taken_0x26a74c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a74c) {
            ctx->pc = 0x26A750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A74Cu;
            // 0x26a750: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B064u;
            goto label_26b064;
        }
    }
    ctx->pc = 0x26A754u;
    // 0x26a754: 0x4617b842  mul.s       $f1, $f23, $f23
    ctx->pc = 0x26a754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x26a758: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x26a758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x26a75c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x26a75cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a760: 0x0  nop
    ctx->pc = 0x26a760u;
    // NOP
    // 0x26a764: 0x0  nop
    ctx->pc = 0x26a764u;
    // NOP
    // 0x26a768: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x26a768u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x26a76c: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x26a76cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a770: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26A770u;
    {
        const bool branch_taken_0x26a770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a770) {
            ctx->pc = 0x26A784u;
            goto label_26a784;
        }
    }
    ctx->pc = 0x26A778u;
    // 0x26a778: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x26A778u;
    SET_GPR_U32(ctx, 31, 0x26A780u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x26A778u, 0x26A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A780u;
label_26a780:
    // 0x26a780: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x26a780u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_26a784:
    // 0x26a784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a78c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x26a78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a790: 0x0  nop
    ctx->pc = 0x26a790u;
    // NOP
    // 0x26a794: 0x45000235  bc1f        . + 4 + (0x235 << 2)
    ctx->pc = 0x26A794u;
    {
        const bool branch_taken_0x26a794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A794u;
        // 0x26a798: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a794) {
            ctx->pc = 0x26B06Cu;
            goto label_26b06c;
        }
    }
    ctx->pc = 0x26A79Cu;
    // 0x26a79c: 0x8ec30a94  lw          $v1, 0xA94($s6)
    ctx->pc = 0x26a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2708)));
    // 0x26a7a0: 0x10620235  beq         $v1, $v0, . + 4 + (0x235 << 2)
    ctx->pc = 0x26A7A0u;
    {
        const bool branch_taken_0x26a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7A0u;
        // 0x26a7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7a0) {
            ctx->pc = 0x26B078u;
            goto label_26b078;
        }
    }
    ctx->pc = 0x26A7A8u;
    // 0x26a7a8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x26a7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26a7ac: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x26a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x26a7b0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x26a7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x26a7b4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x26A7B4u;
    {
        const bool branch_taken_0x26a7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7B4u;
        // 0x26a7b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7b4) {
            ctx->pc = 0x26A854u;
            goto label_26a854;
        }
    }
    ctx->pc = 0x26A7BCu;
    // 0x26a7bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x26a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x26a7c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a7c4: 0x24427df0  addiu       $v0, $v0, 0x7DF0
    ctx->pc = 0x26a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32240));
    // 0x26a7c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a7cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a7d0: 0x800008  jr          $a0
    ctx->pc = 0x26A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A7D8u: goto label_26a7d8;
            case 0x26A81Cu: goto label_26a81c;
            case 0x26A840u: goto label_26a840;
            case 0x26A84Cu: goto label_26a84c;
            case 0x26A854u: goto label_26a854;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A7D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26A7D8u;
label_26a7d8:
    // 0x26a7d8: 0xc6610208  lwc1        $f1, 0x208($s3)
    ctx->pc = 0x26a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a7e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a7e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26a7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a7e8: 0x0  nop
    ctx->pc = 0x26a7e8u;
    // NOP
    // 0x26a7ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26A7ECu;
    {
        const bool branch_taken_0x26a7ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a7ec) {
            ctx->pc = 0x26A7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A7ECu;
            // 0x26a7f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A7F4u;
            goto label_26a7f4;
        }
    }
    ctx->pc = 0x26A7F4u;
label_26a7f4:
    // 0x26a7f4: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26a7f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x26a7f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26a7fc: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x26a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x26a800: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x26a804: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26A804u;
    {
        const bool branch_taken_0x26a804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A804u;
        // 0x26a808: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a804) {
            ctx->pc = 0x26A864u;
            goto label_26a864;
        }
    }
    ctx->pc = 0x26A80Cu;
    // 0x26a80c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x26a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26a810: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x26a810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26a814: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26A814u;
    {
        const bool branch_taken_0x26a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A814u;
        // 0x26a818: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a814) {
            ctx->pc = 0x26A864u;
            goto label_26a864;
        }
    }
    ctx->pc = 0x26A81Cu;
label_26a81c:
    // 0x26a81c: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x26a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a828: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26a828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a82c: 0x0  nop
    ctx->pc = 0x26a82cu;
    // NOP
    // 0x26a830: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x26A830u;
    {
        const bool branch_taken_0x26a830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A830u;
        // 0x26a834: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a830) {
            ctx->pc = 0x26A860u;
            goto label_26a860;
        }
    }
    ctx->pc = 0x26A838u;
    // 0x26a838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A838u;
    {
        const bool branch_taken_0x26a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A838u;
        // 0x26a83c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a838) {
            ctx->pc = 0x26A854u;
            goto label_26a854;
        }
    }
    ctx->pc = 0x26A840u;
label_26a840:
    // 0x26a840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A844u;
    {
        const bool branch_taken_0x26a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A844u;
        // 0x26a848: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a844) {
            ctx->pc = 0x26A854u;
            goto label_26a854;
        }
    }
    ctx->pc = 0x26A84Cu;
label_26a84c:
    // 0x26a84c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a854:
    // 0x26a854: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26a854u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x26a858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A858u;
    {
        const bool branch_taken_0x26a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A858u;
        // 0x26a85c: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a858) {
            ctx->pc = 0x26A864u;
            goto label_26a864;
        }
    }
    ctx->pc = 0x26A860u;
label_26a860:
    // 0x26a860: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x26a860u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
label_26a864:
    // 0x26a864: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x26a864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26a868: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A868u;
    {
        const bool branch_taken_0x26a868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A868u;
        // 0x26a86c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a868) {
            ctx->pc = 0x26A88Cu;
            goto label_26a88c;
        }
    }
    ctx->pc = 0x26A870u;
    // 0x26a870: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x26a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x26a874: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26a878: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x26a87c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26a87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26a880: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x26A880u;
    {
        const bool branch_taken_0x26a880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a880) {
            ctx->pc = 0x26A884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A880u;
            // 0x26a884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A888u;
    // 0x26a888: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x26a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_26a88c:
    // 0x26a88c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a890: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x26a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26a894: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A894u;
    {
        const bool branch_taken_0x26a894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A894u;
        // 0x26a898: 0x27c9c4a8  addiu       $t1, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a894) {
            ctx->pc = 0x26A8B8u;
            goto label_26a8b8;
        }
    }
    ctx->pc = 0x26A89Cu;
    // 0x26a89c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x26a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x26a8a0: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x26a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382010u));
    // 0x26a8a4: 0x16630005  bne         $s3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A8A4u;
    {
        const bool branch_taken_0x26a8a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8A4u;
        // 0x26a8a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8a4) {
            ctx->pc = 0x26A8BCu;
            goto label_26a8bc;
        }
    }
    ctx->pc = 0x26A8ACu;
    // 0x26a8ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a8b0:
    // 0x26a8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8b4: 0x27c9c4a8  addiu       $t1, $fp, -0x3B58
    ctx->pc = 0x26a8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_26a8b8:
    // 0x26a8b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26a8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a8bc:
    // 0x26a8bc: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x26a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x26a8c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26a8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26a8c4: 0x10a001a1  beqz        $a1, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x26A8C4u;
    {
        const bool branch_taken_0x26a8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8C4u;
        // 0x26a8c8: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8c4) {
            ctx->pc = 0x26AF4Cu;
            goto label_26af4c;
        }
    }
    ctx->pc = 0x26A8CCu;
    // 0x26a8cc: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x26a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x26a8d0: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A8D0u;
    {
        const bool branch_taken_0x26a8d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8D0u;
        // 0x26a8d4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8d0) {
            ctx->pc = 0x26A904u;
            goto label_26a904;
        }
    }
    ctx->pc = 0x26A8D8u;
    // 0x26a8d8: 0x8f85a2ec  lw          $a1, -0x5D14($gp)
    ctx->pc = 0x26a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x26a8dc: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x26a8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26a8e0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x26a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x26a8e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26a8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26a8e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a8ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26a8f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26a8f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a8f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x26a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x26a8fc: 0xae860040  sw          $a2, 0x40($s4)
    ctx->pc = 0x26a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 6));
    // 0x26a900: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x26a900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26a904:
    // 0x26a904: 0x10e8001a  beq         $a3, $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26A904u;
    {
        const bool branch_taken_0x26a904 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x26A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A904u;
        // 0x26a908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a904) {
            ctx->pc = 0x26A970u;
            goto label_26a970;
        }
    }
    ctx->pc = 0x26A90Cu;
    // 0x26a90c: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x26a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x26a910: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26A910u;
    {
        const bool branch_taken_0x26a910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A910u;
        // 0x26a914: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a910) {
            ctx->pc = 0x26A974u;
            goto label_26a974;
        }
    }
    ctx->pc = 0x26A918u;
    // 0x26a918: 0x8ea201e8  lw          $v0, 0x1E8($s5)
    ctx->pc = 0x26a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 488)));
    // 0x26a91c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26A91Cu;
    {
        const bool branch_taken_0x26a91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A91Cu;
        // 0x26a920: 0x2c620020  sltiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a91c) {
            ctx->pc = 0x26A978u;
            goto label_26a978;
        }
    }
    ctx->pc = 0x26A924u;
    // 0x26a924: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x26a924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26a928: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26a928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26a92c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26a92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26a930: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26a930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26a934: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x26a934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26a938: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x26a938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x26a93c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26a93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26a940: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26a944: 0xaea40010  sw          $a0, 0x10($s5)
    ctx->pc = 0x26a944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 4));
    // 0x26a948: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x26a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x26a94c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A94Cu;
    {
        const bool branch_taken_0x26a94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x26A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A94Cu;
        // 0x26a950: 0x3c060027  lui         $a2, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a94c) {
            ctx->pc = 0x26A96Cu;
            goto label_26a96c;
        }
    }
    ctx->pc = 0x26A954u;
    // 0x26a954: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x26a954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x26a958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a95c: 0x24c63ac0  addiu       $a2, $a2, 0x3AC0
    ctx->pc = 0x26a95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15040));
    // 0x26a960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a964: 0xc0b36c2  jal         func_2CDB08
    ctx->pc = 0x26A964u;
    SET_GPR_U32(ctx, 31, 0x26A96Cu);
    ctx->pc = 0x26A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A964u;
    // 0x26a968: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB08u, 0x26A964u, 0x26A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A96Cu;
label_26a96c:
    // 0x26a96c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x26a96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26a970:
    // 0x26a970: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x26a970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_26a974:
    // 0x26a974: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x26a974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_26a978:
    // 0x26a978: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x26A978u;
    {
        const bool branch_taken_0x26a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A978u;
        // 0x26a97c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a978) {
            ctx->pc = 0x26AF4Cu;
            goto label_26af4c;
        }
    }
    ctx->pc = 0x26A980u;
    // 0x26a980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a984: 0x24427e30  addiu       $v0, $v0, 0x7E30
    ctx->pc = 0x26a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32304));
    // 0x26a988: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a98c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a990: 0x800008  jr          $a0
    ctx->pc = 0x26A990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A998u: goto label_26a998;
            case 0x26AC68u: goto label_26ac68;
            case 0x26AE48u: goto label_26ae48;
            case 0x26AE9Cu: goto label_26ae9c;
            case 0x26AEF0u: goto label_26aef0;
            case 0x26AF4Cu: goto label_26af4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26A998u;
label_26a998:
    // 0x26a998: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a99c: 0xc09a7dc  jal         func_269F70
    ctx->pc = 0x26A99Cu;
    SET_GPR_U32(ctx, 31, 0x26A9A4u);
    ctx->pc = 0x26A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A99Cu;
    // 0x26a9a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269F70u, 0x26A99Cu, 0x26A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9A4u;
label_26a9a4:
    // 0x26a9a4: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26A9A4u;
    {
        const bool branch_taken_0x26a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9A4u;
        // 0x26a9a8: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9a4) {
            ctx->pc = 0x26ABA8u;
            goto label_26aba8;
        }
    }
    ctx->pc = 0x26A9ACu;
    // 0x26a9ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a9b0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x26a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26a9b4: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26A9B4u;
    {
        const bool branch_taken_0x26a9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9B4u;
        // 0x26a9b8: 0x8ea50010  lw          $a1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9b4) {
            ctx->pc = 0x26AA3Cu;
            goto label_26aa3c;
        }
    }
    ctx->pc = 0x26A9BCu;
    // 0x26a9bc: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x26a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x26a9c0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26A9C0u;
    {
        const bool branch_taken_0x26a9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9C0u;
        // 0x26a9c4: 0x34a20040  ori         $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9c0) {
            ctx->pc = 0x26AA40u;
            goto label_26aa40;
        }
    }
    ctx->pc = 0x26A9C8u;
    // 0x26a9c8: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x26a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26a9cc: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x26a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x26a9d0: 0x24842c18  addiu       $a0, $a0, 0x2C18
    ctx->pc = 0x26a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x26a9d4: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x26a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26a9d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a9dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26a9e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a9e8: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x26A9E8u;
    {
        const bool branch_taken_0x26a9e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9E8u;
        // 0x26a9ec: 0x8c7711d8  lw          $s7, 0x11D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9e8) {
            ctx->pc = 0x26AA3Cu;
            goto label_26aa3c;
        }
    }
    ctx->pc = 0x26A9F0u;
    // 0x26a9f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26a9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26a9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a9f8:
    // 0x26a9f8: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x26a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x26a9fc: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x26a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26aa00: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26aa04: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26aa08: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AA08u;
    {
        const bool branch_taken_0x26aa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x26aa08) {
            ctx->pc = 0x26AA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA08u;
            // 0x26aa0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA28u;
            goto label_26aa28;
        }
    }
    ctx->pc = 0x26AA10u;
    // 0x26aa10: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x26aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x26aa14: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26aa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa18: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x26AA18u;
    SET_GPR_U32(ctx, 31, 0x26AA20u);
    ctx->pc = 0x26AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA18u;
    // 0x26aa1c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x26AA18u, 0x26AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA20u;
label_26aa20:
    // 0x26aa20: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x26aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x26aa24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26aa24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26aa28:
    // 0x26aa28: 0x2652071c  addiu       $s2, $s2, 0x71C
    ctx->pc = 0x26aa28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    // 0x26aa2c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x26aa2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26aa30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x26AA30u;
    {
        const bool branch_taken_0x26aa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA30u;
        // 0x26aa34: 0x26311210  addiu       $s1, $s1, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa30) {
            ctx->pc = 0x26A9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a9f8;
        }
    }
    ctx->pc = 0x26AA38u;
    // 0x26aa38: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x26aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_26aa3c:
    // 0x26aa3c: 0x34a20040  ori         $v0, $a1, 0x40
    ctx->pc = 0x26aa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
label_26aa40:
    // 0x26aa40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26aa44: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x26aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x26aa48: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x26aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x26aa4c: 0xae830044  sw          $v1, 0x44($s4)
    ctx->pc = 0x26aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
    // 0x26aa50: 0x34c6fffd  ori         $a2, $a2, 0xFFFD
    ctx->pc = 0x26aa50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65533);
    // 0x26aa54: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x26aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26aa58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa5c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26aa60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26aa64: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x26aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x26aa68: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x26aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x26aa6c: 0xaed501e4  sw          $s5, 0x1E4($s6)
    ctx->pc = 0x26aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 484), GPR_U32(ctx, 21));
    // 0x26aa70: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x26aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x26aa74: 0xc09c0b6  jal         func_2702D8
    ctx->pc = 0x26AA74u;
    SET_GPR_U32(ctx, 31, 0x26AA7Cu);
    ctx->pc = 0x26AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA74u;
    // 0x26aa78: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D8u, 0x26AA74u, 0x26AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA7Cu;
label_26aa7c:
    // 0x26aa7c: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x26aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x26aa80: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26aa84: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26aa88: 0x14440021  bne         $v0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26AA88u;
    {
        const bool branch_taken_0x26aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x26AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA88u;
        // 0x26aa8c: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa88) {
            ctx->pc = 0x26AB10u;
            goto label_26ab10;
        }
    }
    ctx->pc = 0x26AA90u;
    // 0x26aa90: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x26aa94: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x26aa98: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x26aa98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x26aa9c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x26AA9Cu;
    {
        const bool branch_taken_0x26aa9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA9Cu;
        // 0x26aaa0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa9c) {
            ctx->pc = 0x26AB18u;
            goto label_26ab18;
        }
    }
    ctx->pc = 0x26AAA4u;
    // 0x26aaa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26aaa8: 0x24427eb0  addiu       $v0, $v0, 0x7EB0
    ctx->pc = 0x26aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32432));
    // 0x26aaac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26aab0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aab4: 0x800008  jr          $a0
    ctx->pc = 0x26AAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AABCu: goto label_26aabc;
            case 0x26AAC4u: goto label_26aac4;
            case 0x26AACCu: goto label_26aacc;
            case 0x26AAD4u: goto label_26aad4;
            case 0x26AADCu: goto label_26aadc;
            case 0x26AAE4u: goto label_26aae4;
            case 0x26AAECu: goto label_26aaec;
            case 0x26AAF4u: goto label_26aaf4;
            case 0x26AAFCu: goto label_26aafc;
            case 0x26AB18u: goto label_26ab18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AAB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AABCu;
label_26aabc:
    // 0x26aabc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26AABCu;
    {
        const bool branch_taken_0x26aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AABCu;
        // 0x26aac0: 0x240400df  addiu       $a0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aabc) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AAC4u;
label_26aac4:
    // 0x26aac4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26AAC4u;
    {
        const bool branch_taken_0x26aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAC4u;
        // 0x26aac8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aac4) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AACCu;
label_26aacc:
    // 0x26aacc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26AACCu;
    {
        const bool branch_taken_0x26aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AACCu;
        // 0x26aad0: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aacc) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AAD4u;
label_26aad4:
    // 0x26aad4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26AAD4u;
    {
        const bool branch_taken_0x26aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAD4u;
        // 0x26aad8: 0x240400e2  addiu       $a0, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aad4) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AADCu;
label_26aadc:
    // 0x26aadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26AADCu;
    {
        const bool branch_taken_0x26aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AADCu;
        // 0x26aae0: 0x240400e3  addiu       $a0, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aadc) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AAE4u;
label_26aae4:
    // 0x26aae4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26AAE4u;
    {
        const bool branch_taken_0x26aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAE4u;
        // 0x26aae8: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aae4) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AAECu;
label_26aaec:
    // 0x26aaec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26AAECu;
    {
        const bool branch_taken_0x26aaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAECu;
        // 0x26aaf0: 0x240400e5  addiu       $a0, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaec) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AAF4u;
label_26aaf4:
    // 0x26aaf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26AAF4u;
    {
        const bool branch_taken_0x26aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAF4u;
        // 0x26aaf8: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaf4) {
            ctx->pc = 0x26AB00u;
            goto label_26ab00;
        }
    }
    ctx->pc = 0x26AAFCu;
label_26aafc:
    // 0x26aafc: 0x240400e7  addiu       $a0, $zero, 0xE7
    ctx->pc = 0x26aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_26ab00:
    // 0x26ab00: 0xc081546  jal         func_205518
    ctx->pc = 0x26AB00u;
    SET_GPR_U32(ctx, 31, 0x26AB08u);
    ctx->pc = 0x26AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB00u;
    // 0x26ab04: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26AB00u, 0x26AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB08u;
label_26ab08:
    // 0x26ab08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26AB08u;
    {
        const bool branch_taken_0x26ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB08u;
        // 0x26ab0c: 0x8ec501e4  lw          $a1, 0x1E4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab08) {
            ctx->pc = 0x26AB1Cu;
            goto label_26ab1c;
        }
    }
    ctx->pc = 0x26AB10u;
label_26ab10:
    // 0x26ab10: 0xc081546  jal         func_205518
    ctx->pc = 0x26AB10u;
    SET_GPR_U32(ctx, 31, 0x26AB18u);
    ctx->pc = 0x26AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB10u;
    // 0x26ab14: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26AB10u, 0x26AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB18u;
label_26ab18:
    // 0x26ab18: 0x8ec501e4  lw          $a1, 0x1E4($s6)
    ctx->pc = 0x26ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 484)));
label_26ab1c:
    // 0x26ab1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab20: 0xc0a2390  jal         func_288E40
    ctx->pc = 0x26AB20u;
    SET_GPR_U32(ctx, 31, 0x26AB28u);
    ctx->pc = 0x26AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB20u;
    // 0x26ab24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288E40u, 0x26AB20u, 0x26AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB28u;
label_26ab28:
    // 0x26ab28: 0x8ec20bcc  lw          $v0, 0xBCC($s6)
    ctx->pc = 0x26ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3020)));
    // 0x26ab2c: 0x8e640164  lw          $a0, 0x164($s3)
    ctx->pc = 0x26ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x26ab30: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x26ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab34: 0xe6a00234  swc1        $f0, 0x234($s5)
    ctx->pc = 0x26ab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 564), bits); }
    // 0x26ab38: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x26ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ab3c: 0xe6a10238  swc1        $f1, 0x238($s5)
    ctx->pc = 0x26ab3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 568), bits); }
    // 0x26ab40: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x26ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab44: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26AB44u;
    {
        const bool branch_taken_0x26ab44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB44u;
        // 0x26ab48: 0xe6a0023c  swc1        $f0, 0x23C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab44) {
            ctx->pc = 0x26AB8Cu;
            goto label_26ab8c;
        }
    }
    ctx->pc = 0x26AB4Cu;
    // 0x26ab4c: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x26ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x26ab50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ab54: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x26ab54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26ab58: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AB58u;
    {
        const bool branch_taken_0x26ab58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB58u;
        // 0x26ab5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab58) {
            ctx->pc = 0x26AB68u;
            goto label_26ab68;
        }
    }
    ctx->pc = 0x26AB60u;
    // 0x26ab60: 0x54a2000b  bnel        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26AB60u;
    {
        const bool branch_taken_0x26ab60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ab60) {
            ctx->pc = 0x26AB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AB60u;
            // 0x26ab64: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AB90u;
            goto label_26ab90;
        }
    }
    ctx->pc = 0x26AB68u;
label_26ab68:
    // 0x26ab68: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x26ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26ab6c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x26ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x26ab70: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x26ab74: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x26ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ab78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26ab7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26ab80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ab84: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x26AB84u;
    SET_GPR_U32(ctx, 31, 0x26AB8Cu);
    ctx->pc = 0x26AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB84u;
    // 0x26ab88: 0x8c6511dc  lw          $a1, 0x11DC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4572)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x26AB84u, 0x26AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB8Cu;
label_26ab8c:
    // 0x26ab8c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x26ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_26ab90:
    // 0x26ab90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26ab94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ab98: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26AB98u;
    SET_GPR_U32(ctx, 31, 0x26ABA0u);
    ctx->pc = 0x26AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB98u;
    // 0x26ab9c: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26AB98u, 0x26ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABA0u;
label_26aba0:
    // 0x26aba0: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x26ABA0u;
    {
        const bool branch_taken_0x26aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABA0u;
        // 0x26aba4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aba0) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26ABA8u;
label_26aba8:
    // 0x26aba8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26abac: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x26abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26abb0: 0x1464013f  bne         $v1, $a0, . + 4 + (0x13F << 2)
    ctx->pc = 0x26ABB0u;
    {
        const bool branch_taken_0x26abb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABB0u;
        // 0x26abb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abb0) {
            ctx->pc = 0x26B0B0u;
            goto label_26b0b0;
        }
    }
    ctx->pc = 0x26ABB8u;
    // 0x26abb8: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x26abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x26abbc: 0x1062013d  beq         $v1, $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x26ABBCu;
    {
        const bool branch_taken_0x26abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABBCu;
        // 0x26abc0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abbc) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26ABC4u;
    // 0x26abc4: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x26abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x26abc8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26abcc: 0x1462013a  bne         $v1, $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26ABCCu;
    {
        const bool branch_taken_0x26abcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABCCu;
        // 0x26abd0: 0xdfbe0080  ld          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abcc) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26ABD4u;
    // 0x26abd4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26abd8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x26abdc: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x26ABDCu;
    {
        const bool branch_taken_0x26abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABDCu;
        // 0x26abe0: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abdc) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26ABE4u;
    // 0x26abe4: 0xc081546  jal         func_205518
    ctx->pc = 0x26ABE4u;
    SET_GPR_U32(ctx, 31, 0x26ABECu);
    ctx->pc = 0x26ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ABE4u;
    // 0x26abe8: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26ABE4u, 0x26ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABECu;
label_26abec:
    // 0x26abec: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26abf0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26abf4: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x26abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x26abf8: 0x3463ffbf  ori         $v1, $v1, 0xFFBF
    ctx->pc = 0x26abf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65471);
    // 0x26abfc: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x26abfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x26ac00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ac04: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x26ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x26ac08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac0c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x26ac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ac10: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26ac14: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x26ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x26ac18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ac1c: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ac20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26ac20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26ac24: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x26ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x26ac28: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x26ac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x26ac2c: 0xae850044  sw          $a1, 0x44($s4)
    ctx->pc = 0x26ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 5));
    // 0x26ac30: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ac34: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x26ac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x26ac38: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ac3c: 0xe6a10074  swc1        $f1, 0x74($s5)
    ctx->pc = 0x26ac3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    // 0x26ac40: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ac44: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x26ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
    // 0x26ac48: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x26ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
    // 0x26ac4c: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x26ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x26ac50: 0xc09ad0c  jal         func_26B430
    ctx->pc = 0x26AC50u;
    SET_GPR_U32(ctx, 31, 0x26AC58u);
    ctx->pc = 0x26AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC50u;
    // 0x26ac54: 0xe6a00078  swc1        $f0, 0x78($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B430u, 0x26AC50u, 0x26AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC58u;
label_26ac58:
    // 0x26ac58: 0xc09ceb0  jal         func_273AC0
    ctx->pc = 0x26AC58u;
    SET_GPR_U32(ctx, 31, 0x26AC60u);
    ctx->pc = 0x26AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC58u;
    // 0x26ac5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273AC0u, 0x26AC58u, 0x26AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC60u;
label_26ac60:
    // 0x26ac60: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x26AC60u;
    {
        const bool branch_taken_0x26ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC60u;
        // 0x26ac64: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac60) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AC68u;
label_26ac68:
    // 0x26ac68: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x26ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26ac6c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x26ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26ac70: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x26ac70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26ac74: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x26AC74u;
    {
        const bool branch_taken_0x26ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC74u;
        // 0x26ac78: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac74) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AC7Cu;
    // 0x26ac7c: 0xc089e58  jal         func_227960
    ctx->pc = 0x26AC7Cu;
    SET_GPR_U32(ctx, 31, 0x26AC84u);
    ctx->pc = 0x227960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227960u, 0x26AC7Cu, 0x26AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC84u;
label_26ac84:
    // 0x26ac84: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x26AC84u;
    {
        const bool branch_taken_0x26ac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC84u;
        // 0x26ac88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac84) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AC8Cu;
    // 0x26ac8c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x26ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26ac90: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x26ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26ac94: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x26ac94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26ac98: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x26AC98u;
    {
        const bool branch_taken_0x26ac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac98) {
            ctx->pc = 0x26AC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AC98u;
            // 0x26ac9c: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AE2Cu;
            goto label_26ae2c;
        }
    }
    ctx->pc = 0x26ACA0u;
    // 0x26aca0: 0xc089e58  jal         func_227960
    ctx->pc = 0x26ACA0u;
    SET_GPR_U32(ctx, 31, 0x26ACA8u);
    ctx->pc = 0x227960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227960u, 0x26ACA0u, 0x26ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACA8u;
label_26aca8:
    // 0x26aca8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26ACA8u;
    {
        const bool branch_taken_0x26aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACA8u;
        // 0x26acac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aca8) {
            ctx->pc = 0x26AE28u;
            goto label_26ae28;
        }
    }
    ctx->pc = 0x26ACB0u;
    // 0x26acb0: 0x8e85002c  lw          $a1, 0x2C($s4)
    ctx->pc = 0x26acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x26acb4: 0xc0a52b2  jal         func_294AC8
    ctx->pc = 0x26ACB4u;
    SET_GPR_U32(ctx, 31, 0x26ACBCu);
    ctx->pc = 0x26ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACB4u;
    // 0x26acb8: 0x8e860030  lw          $a2, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AC8u, 0x26ACB4u, 0x26ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACBCu;
label_26acbc:
    // 0x26acbc: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x26acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x26acc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26acc4: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26ACC4u;
    {
        const bool branch_taken_0x26acc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACC4u;
        // 0x26acc8: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acc4) {
            ctx->pc = 0x26ACF0u;
            goto label_26acf0;
        }
    }
    ctx->pc = 0x26ACCCu;
    // 0x26accc: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x26acccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26acd0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x26acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x26acd4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x26acd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26acd8: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x26acdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ace0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x26ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x26ace4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26ace4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26ace8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26ACE8u;
    {
        const bool branch_taken_0x26ace8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACE8u;
        // 0x26acec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ace8) {
            ctx->pc = 0x26AD00u;
            goto label_26ad00;
        }
    }
    ctx->pc = 0x26ACF0u;
label_26acf0:
    // 0x26acf0: 0x54c0004e  bnel        $a2, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x26ACF0u;
    {
        const bool branch_taken_0x26acf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x26acf0) {
            ctx->pc = 0x26ACF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ACF0u;
            // 0x26acf4: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AE2Cu;
            goto label_26ae2c;
        }
    }
    ctx->pc = 0x26ACF8u;
    // 0x26acf8: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x26acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26acfc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x26acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_26ad00:
    // 0x26ad00: 0x26c301e8  addiu       $v1, $s6, 0x1E8
    ctx->pc = 0x26ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 488));
    // 0x26ad04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ad08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ad0c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x26ad0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ad10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad14: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26ad18: 0xc0a53da  jal         func_294F68
    ctx->pc = 0x26AD18u;
    SET_GPR_U32(ctx, 31, 0x26AD20u);
    ctx->pc = 0x26AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD18u;
    // 0x26ad1c: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F68u, 0x26AD18u, 0x26AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD20u;
label_26ad20:
    // 0x26ad20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AD20u;
    {
        const bool branch_taken_0x26ad20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad20) {
            ctx->pc = 0x26AD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AD20u;
            // 0x26ad24: 0x8e620164  lw          $v0, 0x164($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AD34u;
            goto label_26ad34;
        }
    }
    ctx->pc = 0x26AD28u;
    // 0x26ad28: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26ad2c: 0xaec20104  sw          $v0, 0x104($s6)
    ctx->pc = 0x26ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 260), GPR_U32(ctx, 2));
    // 0x26ad30: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x26ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_26ad34:
    // 0x26ad34: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x26AD34u;
    {
        const bool branch_taken_0x26ad34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad34) {
            ctx->pc = 0x26AD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AD34u;
            // 0x26ad38: 0x8ec60104  lw          $a2, 0x104($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AE14u;
            goto label_26ae14;
        }
    }
    ctx->pc = 0x26AD3Cu;
    // 0x26ad3c: 0x56000018  bnel        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x26AD3Cu;
    {
        const bool branch_taken_0x26ad3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ad3c) {
            ctx->pc = 0x26AD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AD3Cu;
            // 0x26ad40: 0x8ec20104  lw          $v0, 0x104($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ADA0u;
            goto label_26ada0;
        }
    }
    ctx->pc = 0x26AD44u;
    // 0x26ad44: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x26ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26ad48: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x26ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x26ad4c: 0x8f859354  lw          $a1, -0x6CAC($gp)
    ctx->pc = 0x26ad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x26ad50: 0x246390f8  addiu       $v1, $v1, -0x6F08
    ctx->pc = 0x26ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x26ad54: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x26ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x26ad58: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x26ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x26ad5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ad60: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x26ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x26ad64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26ad68: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x26ad68u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x26ad6c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x26ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26ad70: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x26ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x26ad74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26ad78: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x26ad78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26ad7c: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26ad80: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x26ad80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26ad84: 0x8c4511e0  lw          $a1, 0x11E0($v0)
    ctx->pc = 0x26ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4576)));
    // 0x26ad88: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x26AD88u;
    SET_GPR_U32(ctx, 31, 0x26AD90u);
    ctx->pc = 0x26AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD88u;
    // 0x26ad8c: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x26AD88u, 0x26AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD90u;
label_26ad90:
    // 0x26ad90: 0x8e640164  lw          $a0, 0x164($s3)
    ctx->pc = 0x26ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x26ad94: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x26AD94u;
    SET_GPR_U32(ctx, 31, 0x26AD9Cu);
    ctx->pc = 0x26AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD94u;
    // 0x26ad98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x26AD94u, 0x26AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD9Cu;
label_26ad9c:
    // 0x26ad9c: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x26ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
label_26ada0:
    // 0x26ada0: 0x2444fff9  addiu       $a0, $v0, -0x7
    ctx->pc = 0x26ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x26ada4: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x26ada4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x26ada8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26ADA8u;
    {
        const bool branch_taken_0x26ada8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADA8u;
        // 0x26adac: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ada8) {
            ctx->pc = 0x26AE04u;
            goto label_26ae04;
        }
    }
    ctx->pc = 0x26ADB0u;
    // 0x26adb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26adb4: 0x24427f20  addiu       $v0, $v0, 0x7F20
    ctx->pc = 0x26adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32544));
    // 0x26adb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26adbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26adc0: 0x800008  jr          $a0
    ctx->pc = 0x26ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ADC8u: goto label_26adc8;
            case 0x26ADDCu: goto label_26addc;
            case 0x26ADF0u: goto label_26adf0;
            case 0x26AE04u: goto label_26ae04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ADC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26ADC8u;
label_26adc8:
    // 0x26adc8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x26adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x26adcc: 0xc081546  jal         func_205518
    ctx->pc = 0x26ADCCu;
    SET_GPR_U32(ctx, 31, 0x26ADD4u);
    ctx->pc = 0x26ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADCCu;
    // 0x26add0: 0x24040086  addiu       $a0, $zero, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26ADCCu, 0x26ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADD4u;
label_26add4:
    // 0x26add4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26ADD4u;
    {
        const bool branch_taken_0x26add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADD4u;
        // 0x26add8: 0x8ec60104  lw          $a2, 0x104($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26add4) {
            ctx->pc = 0x26AE14u;
            goto label_26ae14;
        }
    }
    ctx->pc = 0x26ADDCu;
label_26addc:
    // 0x26addc: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x26addcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x26ade0: 0xc081546  jal         func_205518
    ctx->pc = 0x26ADE0u;
    SET_GPR_U32(ctx, 31, 0x26ADE8u);
    ctx->pc = 0x26ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADE0u;
    // 0x26ade4: 0x240400b7  addiu       $a0, $zero, 0xB7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26ADE0u, 0x26ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADE8u;
label_26ade8:
    // 0x26ade8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26ADE8u;
    {
        const bool branch_taken_0x26ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADE8u;
        // 0x26adec: 0x8ec60104  lw          $a2, 0x104($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ade8) {
            ctx->pc = 0x26AE14u;
            goto label_26ae14;
        }
    }
    ctx->pc = 0x26ADF0u;
label_26adf0:
    // 0x26adf0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x26adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x26adf4: 0xc081546  jal         func_205518
    ctx->pc = 0x26ADF4u;
    SET_GPR_U32(ctx, 31, 0x26ADFCu);
    ctx->pc = 0x26ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADF4u;
    // 0x26adf8: 0x24040087  addiu       $a0, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26ADF4u, 0x26ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADFCu;
label_26adfc:
    // 0x26adfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26ADFCu;
    {
        const bool branch_taken_0x26adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADFCu;
        // 0x26ae00: 0x8ec60104  lw          $a2, 0x104($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adfc) {
            ctx->pc = 0x26AE14u;
            goto label_26ae14;
        }
    }
    ctx->pc = 0x26AE04u;
label_26ae04:
    // 0x26ae04: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x26ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x26ae08: 0xc081546  jal         func_205518
    ctx->pc = 0x26AE08u;
    SET_GPR_U32(ctx, 31, 0x26AE10u);
    ctx->pc = 0x26AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE08u;
    // 0x26ae0c: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26AE08u, 0x26AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE10u;
label_26ae10:
    // 0x26ae10: 0x8ec60104  lw          $a2, 0x104($s6)
    ctx->pc = 0x26ae10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
label_26ae14:
    // 0x26ae14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ae18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26ae1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ae20: 0xc08906a  jal         func_2241A8
    ctx->pc = 0x26AE20u;
    SET_GPR_U32(ctx, 31, 0x26AE28u);
    ctx->pc = 0x26AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE20u;
    // 0x26ae24: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2241A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2241A8u, 0x26AE20u, 0x26AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE28u;
label_26ae28:
    // 0x26ae28: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x26ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_26ae2c:
    // 0x26ae2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ae30: 0x106200a0  beq         $v1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26AE30u;
    {
        const bool branch_taken_0x26ae30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE30u;
        // 0x26ae34: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae30) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AE38u;
    // 0x26ae38: 0xc09cd86  jal         func_273618
    ctx->pc = 0x26AE38u;
    SET_GPR_U32(ctx, 31, 0x26AE40u);
    ctx->pc = 0x26AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE38u;
    // 0x26ae3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273618u, 0x26AE38u, 0x26AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE40u;
label_26ae40:
    // 0x26ae40: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x26AE40u;
    {
        const bool branch_taken_0x26ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE40u;
        // 0x26ae44: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae40) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AE48u;
label_26ae48:
    // 0x26ae48: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x26ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ae4c: 0xc6600208  lwc1        $f0, 0x208($s3)
    ctx->pc = 0x26ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ae50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ae50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26ae54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26ae54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26ae58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ae58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ae5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26ae5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ae60: 0x0  nop
    ctx->pc = 0x26ae60u;
    // NOP
    // 0x26ae64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26AE64u;
    {
        const bool branch_taken_0x26ae64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE64u;
        // 0x26ae68: 0xe6600208  swc1        $f0, 0x208($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae64) {
            ctx->pc = 0x26AE70u;
            goto label_26ae70;
        }
    }
    ctx->pc = 0x26AE6Cu;
    // 0x26ae6c: 0xe6740208  swc1        $f20, 0x208($s3)
    ctx->pc = 0x26ae6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 520), bits); }
label_26ae70:
    // 0x26ae70: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x26ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x26ae74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AE74u;
    {
        const bool branch_taken_0x26ae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE74u;
        // 0x26ae78: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae74) {
            ctx->pc = 0x26AE84u;
            goto label_26ae84;
        }
    }
    ctx->pc = 0x26AE7Cu;
    // 0x26ae7c: 0xc081546  jal         func_205518
    ctx->pc = 0x26AE7Cu;
    SET_GPR_U32(ctx, 31, 0x26AE84u);
    ctx->pc = 0x26AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE7Cu;
    // 0x26ae80: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26AE7Cu, 0x26AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE84u;
label_26ae84:
    // 0x26ae84: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x26ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26ae88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26ae88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26ae8c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26AE8Cu;
    SET_GPR_U32(ctx, 31, 0x26AE94u);
    ctx->pc = 0x26AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE8Cu;
    // 0x26ae90: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26AE8Cu, 0x26AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE94u;
label_26ae94:
    // 0x26ae94: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x26AE94u;
    {
        const bool branch_taken_0x26ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE94u;
        // 0x26ae98: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae94) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AE9Cu;
label_26ae9c:
    // 0x26ae9c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x26ae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aea0: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x26aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26aea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26aea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26aea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26aeac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26aeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26aeb0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26aeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aeb4: 0x0  nop
    ctx->pc = 0x26aeb4u;
    // NOP
    // 0x26aeb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26AEB8u;
    {
        const bool branch_taken_0x26aeb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEB8u;
        // 0x26aebc: 0xe6c0000c  swc1        $f0, 0xC($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aeb8) {
            ctx->pc = 0x26AEC4u;
            goto label_26aec4;
        }
    }
    ctx->pc = 0x26AEC0u;
    // 0x26aec0: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x26aec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_26aec4:
    // 0x26aec4: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x26aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x26aec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AEC8u;
    {
        const bool branch_taken_0x26aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEC8u;
        // 0x26aecc: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aec8) {
            ctx->pc = 0x26AED8u;
            goto label_26aed8;
        }
    }
    ctx->pc = 0x26AED0u;
    // 0x26aed0: 0xc081546  jal         func_205518
    ctx->pc = 0x26AED0u;
    SET_GPR_U32(ctx, 31, 0x26AED8u);
    ctx->pc = 0x26AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AED0u;
    // 0x26aed4: 0x240400b9  addiu       $a0, $zero, 0xB9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26AED0u, 0x26AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AED8u;
label_26aed8:
    // 0x26aed8: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x26aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26aedc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26aedcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26aee0: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26AEE0u;
    SET_GPR_U32(ctx, 31, 0x26AEE8u);
    ctx->pc = 0x26AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AEE0u;
    // 0x26aee4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26AEE0u, 0x26AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEE8u;
label_26aee8:
    // 0x26aee8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x26AEE8u;
    {
        const bool branch_taken_0x26aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEE8u;
        // 0x26aeec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aee8) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AEF0u;
label_26aef0:
    // 0x26aef0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x26aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26aef4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26aef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aef8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x26aef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26aefc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x26aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26af00: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x26af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x26af04: 0xc0a52b2  jal         func_294AC8
    ctx->pc = 0x26AF04u;
    SET_GPR_U32(ctx, 31, 0x26AF0Cu);
    ctx->pc = 0x26AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF04u;
    // 0x26af08: 0x8c50026c  lw          $s0, 0x26C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AC8u, 0x26AF04u, 0x26AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF0Cu;
label_26af0c:
    // 0x26af0c: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x26af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x26af10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AF10u;
    {
        const bool branch_taken_0x26af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF10u;
        // 0x26af14: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af10) {
            ctx->pc = 0x26AF20u;
            goto label_26af20;
        }
    }
    ctx->pc = 0x26AF18u;
    // 0x26af18: 0xc081546  jal         func_205518
    ctx->pc = 0x26AF18u;
    SET_GPR_U32(ctx, 31, 0x26AF20u);
    ctx->pc = 0x26AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF18u;
    // 0x26af1c: 0x240400b7  addiu       $a0, $zero, 0xB7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x26AF18u, 0x26AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF20u;
label_26af20:
    // 0x26af20: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x26af20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26af24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26af24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26af28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26af28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26af2c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x26AF2Cu;
    SET_GPR_U32(ctx, 31, 0x26AF34u);
    ctx->pc = 0x26AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF2Cu;
    // 0x26af30: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x26AF2Cu, 0x26AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF34u;
label_26af34:
    // 0x26af34: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x26af34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26af38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af3c: 0xc0a5392  jal         func_294E48
    ctx->pc = 0x26AF3Cu;
    SET_GPR_U32(ctx, 31, 0x26AF44u);
    ctx->pc = 0x26AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF3Cu;
    // 0x26af40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E48u, 0x26AF3Cu, 0x26AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF44u;
label_26af44:
    // 0x26af44: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x26AF44u;
    {
        const bool branch_taken_0x26af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF44u;
        // 0x26af48: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af44) {
            ctx->pc = 0x26B0B4u;
            goto label_26b0b4;
        }
    }
    ctx->pc = 0x26AF4Cu;
label_26af4c:
    // 0x26af4c: 0x5200004d  beql        $s0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x26AF4Cu;
    {
        const bool branch_taken_0x26af4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af4c) {
            ctx->pc = 0x26AF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AF4Cu;
            // 0x26af50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B084u;
            goto label_26b084;
        }
    }
    ctx->pc = 0x26AF54u;
    // 0x26af54: 0x8ed001e4  lw          $s0, 0x1E4($s6)
    ctx->pc = 0x26af54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 484)));
    // 0x26af58: 0x5200004c  beql        $s0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x26AF58u;
    {
        const bool branch_taken_0x26af58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af58) {
            ctx->pc = 0x26AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AF58u;
            // 0x26af5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B08Cu;
            goto label_26b08c;
        }
    }
    ctx->pc = 0x26AF60u;
    // 0x26af60: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x26af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x26af64: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26af68: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x26AF68u;
    {
        const bool branch_taken_0x26af68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF68u;
        // 0x26af6c: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af68) {
            ctx->pc = 0x26B094u;
            goto label_26b094;
        }
    }
    ctx->pc = 0x26AF70u;
    // 0x26af70: 0x8e170160  lw          $s7, 0x160($s0)
    ctx->pc = 0x26af70u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x26af74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26af78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af7c: 0xc09ac3c  jal         func_26B0F0
    ctx->pc = 0x26AF7Cu;
    SET_GPR_U32(ctx, 31, 0x26AF84u);
    ctx->pc = 0x26AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF7Cu;
    // 0x26af80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B0F0u, 0x26AF7Cu, 0x26AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF84u;
label_26af84:
    // 0x26af84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26af84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af88: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x26af88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26af8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26af90: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x26af90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x26af94: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x26af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x26af98: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x26af98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26af9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26af9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26afa0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x26afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x26afa4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x26afa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x26afa8: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x26afa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26afac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26afb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26afb4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x26afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x26afb8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x26afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x26afbc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x26afbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afc0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x26afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x26afc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afc8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x26afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x26afcc: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x26afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26afd0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x26afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x26afd4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x26afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x26afd8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x26afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x26afdc: 0xc09829e  jal         func_260A78
    ctx->pc = 0x26AFDCu;
    SET_GPR_U32(ctx, 31, 0x26AFE4u);
    ctx->pc = 0x26AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AFDCu;
    // 0x26afe0: 0xa4e00124  sh          $zero, 0x124($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 292), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A78u, 0x26AFDCu, 0x26AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFE4u;
label_26afe4:
    // 0x26afe4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26afe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26afec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26aff0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26AFF0u;
    {
        const bool branch_taken_0x26aff0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFF0u;
        // 0x26aff4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aff0) {
            ctx->pc = 0x26B030u;
            goto label_26b030;
        }
    }
    ctx->pc = 0x26AFF8u;
    // 0x26aff8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26affc: 0x0  nop
    ctx->pc = 0x26affcu;
    // NOP
label_26b000:
    // 0x26b000: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x26b000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x26b004: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x26b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26b008: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26B008u;
    SET_GPR_U32(ctx, 31, 0x26B010u);
    ctx->pc = 0x26B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B008u;
    // 0x26b00c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26B008u, 0x26B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B010u;
label_26b010:
    // 0x26b010: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26b014: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b018: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b01c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x26b01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26b020: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x26B020u;
    {
        const bool branch_taken_0x26b020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b020) {
            ctx->pc = 0x26B024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B020u;
            // 0x26b024: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b000;
        }
    }
    ctx->pc = 0x26B028u;
    // 0x26b028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B028u;
    {
        const bool branch_taken_0x26b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B028u;
        // 0x26b02c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b028) {
            ctx->pc = 0x26B034u;
            goto label_26b034;
        }
    }
    ctx->pc = 0x26B030u;
label_26b030:
    // 0x26b030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b034:
    // 0x26b034: 0xaec001e4  sw          $zero, 0x1E4($s6)
    ctx->pc = 0x26b034u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 484), GPR_U32(ctx, 0));
    // 0x26b038: 0xaee20044  sw          $v0, 0x44($s7)
    ctx->pc = 0x26b038u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 2));
    // 0x26b03c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b044: 0xc0a2390  jal         func_288E40
    ctx->pc = 0x26B044u;
    SET_GPR_U32(ctx, 31, 0x26B04Cu);
    ctx->pc = 0x26B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B044u;
    // 0x26b048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288E40u, 0x26B044u, 0x26B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B04Cu;
label_26b04c:
    // 0x26b04c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26B04Cu;
    {
        const bool branch_taken_0x26b04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B04Cu;
        // 0x26b050: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b04c) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B054u;
label_26b054:
    // 0x26b054: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B054u;
    {
        const bool branch_taken_0x26b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B054u;
        // 0x26b058: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b054) {
            ctx->pc = 0x26B09Cu;
            goto label_26b09c;
        }
    }
    ctx->pc = 0x26B05Cu;
label_26b05c:
    // 0x26b05c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26B05Cu;
    {
        const bool branch_taken_0x26b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B05Cu;
        // 0x26b060: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b05c) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B064u;
label_26b064:
    // 0x26b064: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26B064u;
    {
        const bool branch_taken_0x26b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B064u;
        // 0x26b068: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b064) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B06Cu;
label_26b06c:
    // 0x26b06c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26b06cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26b070: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26B070u;
    {
        const bool branch_taken_0x26b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B070u;
        // 0x26b074: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b070) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B078u;
label_26b078:
    // 0x26b078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26b078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26b07c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B07Cu;
    {
        const bool branch_taken_0x26b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B07Cu;
        // 0x26b080: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b07c) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B084u;
label_26b084:
    // 0x26b084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26B084u;
    {
        const bool branch_taken_0x26b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B084u;
        // 0x26b088: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b084) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B08Cu;
label_26b08c:
    // 0x26b08c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B08Cu;
    {
        const bool branch_taken_0x26b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B08Cu;
        // 0x26b090: 0x8f869f74  lw          $a2, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b08c) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26B094u;
label_26b094:
    // 0x26b094: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26b094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26b098:
    // 0x26b098: 0x8f87b59c  lw          $a3, -0x4A64($gp)
    ctx->pc = 0x26b098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_26b09c:
    // 0x26b09c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x26b09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0a0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x26b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x26b0a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26b0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26b0a8: 0x1440fd65  bnez        $v0, . + 4 + (-0x29B << 2)
    ctx->pc = 0x26B0A8u;
    {
        const bool branch_taken_0x26b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0A8u;
        // 0x26b0ac: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0a8) {
            ctx->pc = 0x26A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a640;
        }
    }
    ctx->pc = 0x26B0B0u;
label_26b0b0:
    // 0x26b0b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26b0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26b0b4:
    // 0x26b0b4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x26b0b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26b0b8:
    // 0x26b0b8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x26b0b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b0bc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26b0bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b0c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26b0c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b0c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26b0c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b0c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26b0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b0cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26b0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b0d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26b0d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b0d8: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x26b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26b0dc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x26b0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26b0e0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x26b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26b0e4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x26b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x26B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0E8u;
        // 0x26b0ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B0F0u;
}
