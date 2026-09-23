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

// Function: blastringGfx
// Address: 0x2a72f0 - 0x2a7838
void blastringGfx_0x2a72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("blastringGfx_0x2a72f0");
#endif

    switch (ctx->pc) {
        case 0x2a7390u: goto label_2a7390;
        case 0x2a73b4u: goto label_2a73b4;
        case 0x2a73e8u: goto label_2a73e8;
        case 0x2a74d8u: goto label_2a74d8;
        case 0x2a7500u: goto label_2a7500;
        case 0x2a750cu: goto label_2a750c;
        case 0x2a7554u: goto label_2a7554;
        case 0x2a7560u: goto label_2a7560;
        case 0x2a7590u: goto label_2a7590;
        case 0x2a7600u: goto label_2a7600;
        case 0x2a7634u: goto label_2a7634;
        case 0x2a7644u: goto label_2a7644;
        case 0x2a7698u: goto label_2a7698;
        case 0x2a7700u: goto label_2a7700;
        case 0x2a77b0u: goto label_2a77b0;
        case 0x2a77e8u: goto label_2a77e8;
        default: break;
    }

    ctx->pc = 0x2a72f0u;

    // 0x2a72f0: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x2a72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x2a72f4: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2a72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2a72f8: 0xffb302c0  sd          $s3, 0x2C0($sp)
    ctx->pc = 0x2a72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 19));
    // 0x2a72fc: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x2a72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x2a7300: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a7300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7304: 0xffbe0310  sd          $fp, 0x310($sp)
    ctx->pc = 0x2a7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 30));
    // 0x2a7308: 0xffb70300  sd          $s7, 0x300($sp)
    ctx->pc = 0x2a7308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 23));
    // 0x2a730c: 0xffb602f0  sd          $s6, 0x2F0($sp)
    ctx->pc = 0x2a730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 22));
    // 0x2a7310: 0xffb502e0  sd          $s5, 0x2E0($sp)
    ctx->pc = 0x2a7310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 21));
    // 0x2a7314: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x2a7314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x2a7318: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2a7318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x2a731c: 0xffb102a0  sd          $s1, 0x2A0($sp)
    ctx->pc = 0x2a731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    // 0x2a7320: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x2a7320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x2a7324: 0xe7b70348  swc1        $f23, 0x348($sp)
    ctx->pc = 0x2a7324u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x2a7328: 0xe7b60340  swc1        $f22, 0x340($sp)
    ctx->pc = 0x2a7328u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x2a732c: 0xe7b50338  swc1        $f21, 0x338($sp)
    ctx->pc = 0x2a732cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
    // 0x2a7330: 0xe7b40330  swc1        $f20, 0x330($sp)
    ctx->pc = 0x2a7330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x2a7334: 0x8f83b328  lw          $v1, -0x4CD8($gp)
    ctx->pc = 0x2a7334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947624)));
    // 0x2a7338: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x2a7338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a733c: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2a733cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2a7340: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x2a7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7344: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x2a7344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x2a7348: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x2a7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a734c: 0x1860012a  blez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x2A734Cu;
    {
        const bool branch_taken_0x2a734c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A734Cu;
        // 0x2a7350: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a734c) {
            ctx->pc = 0x2A77F8u;
            goto label_2a77f8;
        }
    }
    ctx->pc = 0x2A7354u;
    // 0x2a7354: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x2a7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2a7358: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x2a7358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2a735c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2a735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2a7360: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x2a7360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x2a7364: 0xafa30274  sw          $v1, 0x274($sp)
    ctx->pc = 0x2a7364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
    // 0x2a7368: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2a7368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a736c: 0xafa4027c  sw          $a0, 0x27C($sp)
    ctx->pc = 0x2a736cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 4));
    // 0x2a7370: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x2a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2a7374: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2a7374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a7378: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x2a7378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a737c: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x2a737cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
    // 0x2a7380: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x2a7380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x2a7384: 0xafa30284  sw          $v1, 0x284($sp)
    ctx->pc = 0x2a7384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 3));
    // 0x2a7388: 0xafa40288  sw          $a0, 0x288($sp)
    ctx->pc = 0x2a7388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 4));
    // 0x2a738c: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x2a738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2a7390:
    // 0x2a7390: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2a7390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2a7394: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x2a7394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a7398: 0x24d1a5f0  addiu       $s1, $a2, -0x5A10
    ctx->pc = 0x2a7398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944240));
    // 0x2a739c: 0x2632fff8  addiu       $s2, $s1, -0x8
    ctx->pc = 0x2a739cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x2a73a0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a73a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a73a4: 0x2129021  addu        $s2, $s0, $s2
    ctx->pc = 0x2a73a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a73a8: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x2a73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a73ac: 0xc0ad70a  jal         func_2B5C28
    ctx->pc = 0x2A73ACu;
    SET_GPR_U32(ctx, 31, 0x2A73B4u);
    ctx->pc = 0x2A73B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A73ACu;
    // 0x2a73b0: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C28u, 0x2A73ACu, 0x2A73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A73B4u;
label_2a73b4:
    // 0x2a73b4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2a73b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a73b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2a73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a73bc: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x2a73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a73c0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2a73c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2a73c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a73c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a73c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a73c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a73cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a73ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a73d0: 0x0  nop
    ctx->pc = 0x2a73d0u;
    // NOP
    // 0x2a73d4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2A73D4u;
    {
        const bool branch_taken_0x2a73d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73D4u;
        // 0x2a73d8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73d4) {
            ctx->pc = 0x2A7424u;
            goto label_2a7424;
        }
    }
    ctx->pc = 0x2A73DCu;
    // 0x2a73dc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2a73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a73e0: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x2a73e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a73e4: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x2a73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
label_2a73e8:
    // 0x2a73e8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2a73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a73ec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a73ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a73f0: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2a73f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a73f4: 0x2482a5d8  addiu       $v0, $a0, -0x5A28
    ctx->pc = 0x2a73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944216));
    // 0x2a73f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2a73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a73fc: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2a73fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x2a7400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7404: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a7404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7408: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a7408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a740c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a740cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7410: 0x0  nop
    ctx->pc = 0x2a7410u;
    // NOP
    // 0x2a7414: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x2A7414u;
    {
        const bool branch_taken_0x2a7414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7414u;
        // 0x2a7418: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7414) {
            ctx->pc = 0x2A73E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a73e8;
        }
    }
    ctx->pc = 0x2A741Cu;
    // 0x2a741c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A741Cu;
    {
        const bool branch_taken_0x2a741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A741Cu;
        // 0x2a7420: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a741c) {
            ctx->pc = 0x2A7434u;
            goto label_2a7434;
        }
    }
    ctx->pc = 0x2A7424u;
label_2a7424:
    // 0x2a7424: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x2a7424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a7428: 0xc783b468  lwc1        $f3, -0x4B98($gp)
    ctx->pc = 0x2a7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a742c: 0xafa60278  sw          $a2, 0x278($sp)
    ctx->pc = 0x2a742cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 6));
    // 0x2a7430: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2a7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2a7434:
    // 0x2a7434: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a7434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a7438: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a7438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a743c: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x2a743cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a7440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7444: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a7444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7448: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a7448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a744c: 0x0  nop
    ctx->pc = 0x2a744cu;
    // NOP
    // 0x2a7450: 0x0  nop
    ctx->pc = 0x2a7450u;
    // NOP
    // 0x2a7454: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x2a7454u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[1];
    // 0x2a7458: 0x2444a5d8  addiu       $a0, $v0, -0x5A28
    ctx->pc = 0x2a7458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x2a745c: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x2a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2a7460: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a7464: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7468: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2a7468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a746c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a746cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7470: 0x0  nop
    ctx->pc = 0x2a7470u;
    // NOP
    // 0x2a7474: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7474u;
    {
        const bool branch_taken_0x2a7474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7474u;
        // 0x2a7478: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7474) {
            ctx->pc = 0x2A7480u;
            goto label_2a7480;
        }
    }
    ctx->pc = 0x2A747Cu;
    // 0x2a747c: 0xaf80b328  sw          $zero, -0x4CD8($gp)
    ctx->pc = 0x2a747cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947624), GPR_U32(ctx, 0));
label_2a7480:
    // 0x2a7480: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a7480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a7484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7488: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x2a7488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2a748c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2a748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a7490: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2a7490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7498: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a749c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2a749cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a74a0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a74a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74a4: 0x3c0141b4  lui         $at, 0x41B4
    ctx->pc = 0x2a74a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16820 << 16));
    // 0x2a74a8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a74a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a74ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a74acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a74b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a74b4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x2a74b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a74b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a74b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74bc: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x2a74bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a74c0: 0x8fb30280  lw          $s3, 0x280($sp)
    ctx->pc = 0x2a74c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a74c4: 0x8fb60270  lw          $s6, 0x270($sp)
    ctx->pc = 0x2a74c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2a74c8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a74c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a74cc: 0x8fb50274  lw          $s5, 0x274($sp)
    ctx->pc = 0x2a74ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x2a74d0: 0x8fb4027c  lw          $s4, 0x27C($sp)
    ctx->pc = 0x2a74d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x2a74d4: 0x0  nop
    ctx->pc = 0x2a74d4u;
    // NOP
label_2a74d8:
    // 0x2a74d8: 0xc7948e30  lwc1        $f20, -0x71D0($gp)
    ctx->pc = 0x2a74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a74dc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a74dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a74e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a74e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a74e4: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x2a74e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2a74e8: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x2a74e8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2a74ec: 0x0  nop
    ctx->pc = 0x2a74ecu;
    // NOP
    // 0x2a74f0: 0x0  nop
    ctx->pc = 0x2a74f0u;
    // NOP
    // 0x2a74f4: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2a74f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2a74f8: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2A74F8u;
    SET_GPR_U32(ctx, 31, 0x2A7500u);
    ctx->pc = 0x2A74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A74F8u;
    // 0x2a74fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2A74F8u, 0x2A7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7500u;
label_2a7500:
    // 0x2a7500: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2a7500u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2a7504: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2A7504u;
    SET_GPR_U32(ctx, 31, 0x2A750Cu);
    ctx->pc = 0x2A7508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7504u;
    // 0x2a7508: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2A7504u, 0x2A750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A750Cu;
label_2a750c:
    // 0x2a750c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a750cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a7510: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2a7510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7514: 0x2463a5d8  addiu       $v1, $v1, -0x5A28
    ctx->pc = 0x2a7514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944216));
    // 0x2a7518: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x2a7518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x2a751c: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x2a751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2a7520: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2a7520u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7524: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a7524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7528: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2a7528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2a752c: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x2a752cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x2a7530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7534: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a7534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a7538: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x2a7538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x2a753c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2a753cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2a7540: 0xe7a30228  swc1        $f3, 0x228($sp)
    ctx->pc = 0x2a7540u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2a7544: 0xe7a10220  swc1        $f1, 0x220($sp)
    ctx->pc = 0x2a7544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2a7548: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2a7548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2a754c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2A754Cu;
    SET_GPR_U32(ctx, 31, 0x2A7554u);
    ctx->pc = 0x2A7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A754Cu;
    // 0x2a7550: 0xe7a20210  swc1        $f2, 0x210($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2A754Cu, 0x2A7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7554u;
label_2a7554:
    // 0x2a7554: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x2a7554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x2a7558: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x2A7558u;
    SET_GPR_U32(ctx, 31, 0x2A7560u);
    ctx->pc = 0x2A755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7558u;
    // 0x2a755c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x2A7558u, 0x2A7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7560u;
label_2a7560:
    // 0x2a7560: 0x2301818  mult        $v1, $s1, $s0
    ctx->pc = 0x2a7560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a7564: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x2a7564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a7568: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a756c: 0x26280002  addiu       $t0, $s1, 0x2
    ctx->pc = 0x2a756cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2a7570: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a7570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7574: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a7574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7578: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a7578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a757c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2a757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a7580: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x2a7580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2a7584: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a7584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a7588: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a758c: 0x0  nop
    ctx->pc = 0x2a758cu;
    // NOP
label_2a7590:
    // 0x2a7590: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7594: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2a7594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2a7598: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a759c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a75a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a75a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a75a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a75a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a75a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a75ac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a75acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a75b0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2a75b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a75b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a75b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a75b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a75bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a75bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a75c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a75c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a75c4: 0x4e1fff2  bgez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A75C4u;
    {
        const bool branch_taken_0x2a75c4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2A75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75C4u;
        // 0x2a75c8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75c4) {
            ctx->pc = 0x2A7590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7590;
        }
    }
    ctx->pc = 0x2A75CCu;
    // 0x2a75cc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2a75ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75d0: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x2a75d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2a75d4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2A75D4u;
    {
        const bool branch_taken_0x2a75d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75D4u;
        // 0x2a75d8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75d4) {
            ctx->pc = 0x2A74D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a74d8;
        }
    }
    ctx->pc = 0x2A75DCu;
    // 0x2a75dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a75e0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2a75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a75e4: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x2a75e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a75e8: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x2a75e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a75ec: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x2a75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2a75f0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2a75f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a75f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a75f8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x2a75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2a75fc: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x2a75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_2a7600:
    // 0x2a7600: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7604: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2a7604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2a7608: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a7608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a760c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a7610: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a7610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a7614: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7618: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a7618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a761c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2a761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a7620: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A7620u;
    {
        const bool branch_taken_0x2a7620 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7620u;
        // 0x2a7624: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7620) {
            ctx->pc = 0x2A7600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7600;
        }
    }
    ctx->pc = 0x2A7628u;
    // 0x2a7628: 0x24040790  addiu       $a0, $zero, 0x790
    ctx->pc = 0x2a7628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x2a762c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A762Cu;
    SET_GPR_U32(ctx, 31, 0x2A7634u);
    ctx->pc = 0x2A7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A762Cu;
    // 0x2a7630: 0x3c111e7f  lui         $s1, 0x1E7F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)7807 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A762Cu, 0x2A7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7634u;
label_2a7634:
    // 0x2a7634: 0x36312824  ori         $s1, $s1, 0x2824
    ctx->pc = 0x2a7634u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)10276);
    // 0x2a7638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a763c: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x2A763Cu;
    SET_GPR_U32(ctx, 31, 0x2A7644u);
    ctx->pc = 0x2A7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A763Cu;
    // 0x2a7640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x2A763Cu, 0x2A7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7644u;
label_2a7644:
    // 0x2a7644: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2a7644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a7648: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a7648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a764c: 0x3c026c14  lui         $v0, 0x6C14
    ctx->pc = 0x2a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27668 << 16));
    // 0x2a7650: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2a7650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x2a7654: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x2a7654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7658: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a7658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a765c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a765cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a7660: 0x3c073026  lui         $a3, 0x3026
    ctx->pc = 0x2a7660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12326 << 16));
    // 0x2a7664: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a7668: 0x34098004  ori         $t1, $zero, 0x8004
    ctx->pc = 0x2a7668u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2a766c: 0x24080412  addiu       $t0, $zero, 0x412
    ctx->pc = 0x2a766cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x2a7670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7674: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2a7674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2a7678: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2a7678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a767c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2a767cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a7680: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2a7680u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a7684: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a7684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a7688: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a7688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2a768c: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x2a768cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x2a7690: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a7690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7694: 0x0  nop
    ctx->pc = 0x2a7694u;
    // NOP
label_2a7698:
    // 0x2a7698: 0x38c20013  xori        $v0, $a2, 0x13
    ctx->pc = 0x2a7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)19);
    // 0x2a769c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a76a0: 0x122180a  movz        $v1, $t1, $v0
    ctx->pc = 0x2a76a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x2a76a4: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x2a76a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x2a76a8: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x2a76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x2a76ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a76acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a76b0: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2a76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2a76b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2a76b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a76b8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2a76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2a76bc: 0x28c20014  slti        $v0, $a2, 0x14
    ctx->pc = 0x2a76bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2a76c0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2a76c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a76c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A76C4u;
    {
        const bool branch_taken_0x2a76c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76C4u;
        // 0x2a76c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76c4) {
            ctx->pc = 0x2A7698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7698;
        }
    }
    ctx->pc = 0x2A76CCu;
    // 0x2a76cc: 0x3c026c50  lui         $v0, 0x6C50
    ctx->pc = 0x2a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27728 << 16));
    // 0x2a76d0: 0x8fa60288  lw          $a2, 0x288($sp)
    ctx->pc = 0x2a76d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x2a76d4: 0x34428018  ori         $v0, $v0, 0x8018
    ctx->pc = 0x2a76d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32792);
    // 0x2a76d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a76d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a76dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a76dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a76e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a76e4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2a76e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2a76e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a76ec: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2a76ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2a76f0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2a76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a76f4: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x2a76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x2a76f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a76f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76fc: 0x0  nop
    ctx->pc = 0x2a76fcu;
    // NOP
label_2a7700:
    // 0x2a7700: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a7700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7704: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2a7704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a7708: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2a7708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2a770c: 0xe4a1fffc  swc1        $f1, -0x4($a1)
    ctx->pc = 0x2a770cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x2a7710: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7714: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a7718: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2a7718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a771c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2a771cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a7720: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a7720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a7724: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2a7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7728: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a7728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a772c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2a772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7730: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a7730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a7734: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x2a7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7738: 0xe4430018  swc1        $f3, 0x18($v0)
    ctx->pc = 0x2a7738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a773c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x2a773cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a7740: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2a7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7744: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a7744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2a7748: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2a7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a774c: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x2a774cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2a7750: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2a7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7754: 0xe4430028  swc1        $f3, 0x28($v0)
    ctx->pc = 0x2a7754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2a7758: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2a7758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a775c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2a775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7760: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2a7760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2a7764: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x2a7764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2a7768: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2a7768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a776c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2a7770: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2a7770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2a7774: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2a7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7778: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2a7778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2a777c: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x2a777cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2a7780: 0xe4a30038  swc1        $f3, 0x38($a1)
    ctx->pc = 0x2a7780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x2a7784: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2a7784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2a7788: 0x641ffdd  bgez        $s2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2A7788u;
    {
        const bool branch_taken_0x2a7788 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2A778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7788u;
        // 0x2a778c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7788) {
            ctx->pc = 0x2A7700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7700;
        }
    }
    ctx->pc = 0x2A7790u;
    // 0x2a7790: 0x3c026e50  lui         $v0, 0x6E50
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28240 << 16));
    // 0x2a7794: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2a7794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2a7798: 0x3442c058  ori         $v0, $v0, 0xC058
    ctx->pc = 0x2a7798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49240);
    // 0x2a779c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a77a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2a77a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a77a4: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2a77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a77a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a77a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77ac: 0x0  nop
    ctx->pc = 0x2a77acu;
    // NOP
label_2a77b0:
    // 0x2a77b0: 0xac51fffc  sw          $s1, -0x4($v0)
    ctx->pc = 0x2a77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 17));
    // 0x2a77b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2a77b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a77b8: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x2a77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x2a77bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a77bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a77c0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2a77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2a77c4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2a77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2a77c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a77cc: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A77CCu;
    {
        const bool branch_taken_0x2a77cc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2A77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77CCu;
        // 0x2a77d0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77cc) {
            ctx->pc = 0x2A77B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a77b0;
        }
    }
    ctx->pc = 0x2A77D4u;
    // 0x2a77d4: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x2a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x2a77d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a77dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a77e0: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x2A77E0u;
    SET_GPR_U32(ctx, 31, 0x2A77E8u);
    ctx->pc = 0x2A77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A77E0u;
    // 0x2a77e4: 0x8fb30278  lw          $s3, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x2A77E0u, 0x2A77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77E8u;
label_2a77e8:
    // 0x2a77e8: 0x8f82b328  lw          $v0, -0x4CD8($gp)
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947624)));
    // 0x2a77ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2a77ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a77f0: 0x1440fee7  bnez        $v0, . + 4 + (-0x119 << 2)
    ctx->pc = 0x2A77F0u;
    {
        const bool branch_taken_0x2a77f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77F0u;
        // 0x2a77f4: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77f0) {
            ctx->pc = 0x2A7390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7390;
        }
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x2a77f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a77fc: 0xdfbe0310  ld          $fp, 0x310($sp)
    ctx->pc = 0x2a77fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a7800: 0xdfb70300  ld          $s7, 0x300($sp)
    ctx->pc = 0x2a7800u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a7804: 0xdfb602f0  ld          $s6, 0x2F0($sp)
    ctx->pc = 0x2a7804u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a7808: 0xdfb502e0  ld          $s5, 0x2E0($sp)
    ctx->pc = 0x2a7808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2a780c: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x2a780cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2a7810: 0xdfb302c0  ld          $s3, 0x2C0($sp)
    ctx->pc = 0x2a7810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2a7814: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2a7814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a7818: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x2a7818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2a781c: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x2a781cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2a7820: 0xc7b70348  lwc1        $f23, 0x348($sp)
    ctx->pc = 0x2a7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a7824: 0xc7b60340  lwc1        $f22, 0x340($sp)
    ctx->pc = 0x2a7824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a7828: 0xc7b50338  lwc1        $f21, 0x338($sp)
    ctx->pc = 0x2a7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a782c: 0xc7b40330  lwc1        $f20, 0x330($sp)
    ctx->pc = 0x2a782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7830: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7830u;
        // 0x2a7834: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7838u;
}
