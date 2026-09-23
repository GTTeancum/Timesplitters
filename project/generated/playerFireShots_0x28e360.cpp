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

// Function: playerFireShots
// Address: 0x28e360 - 0x28f00c
void playerFireShots_0x28e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerFireShots_0x28e360");
#endif

    switch (ctx->pc) {
        case 0x28e3b8u: goto label_28e3b8;
        case 0x28e47cu: goto label_28e47c;
        case 0x28e4e0u: goto label_28e4e0;
        case 0x28e4e8u: goto label_28e4e8;
        case 0x28e5d8u: goto label_28e5d8;
        case 0x28e608u: goto label_28e608;
        case 0x28e618u: goto label_28e618;
        case 0x28e638u: goto label_28e638;
        case 0x28e648u: goto label_28e648;
        case 0x28e650u: goto label_28e650;
        case 0x28e718u: goto label_28e718;
        case 0x28e750u: goto label_28e750;
        case 0x28e760u: goto label_28e760;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e778u: goto label_28e778;
        case 0x28e784u: goto label_28e784;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e794u: goto label_28e794;
        case 0x28e7ccu: goto label_28e7cc;
        case 0x28e7dcu: goto label_28e7dc;
        case 0x28e7e8u: goto label_28e7e8;
        case 0x28e7f4u: goto label_28e7f4;
        case 0x28e800u: goto label_28e800;
        case 0x28e808u: goto label_28e808;
        case 0x28e810u: goto label_28e810;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e984u: goto label_28e984;
        case 0x28e998u: goto label_28e998;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28ea74u: goto label_28ea74;
        case 0x28ea84u: goto label_28ea84;
        case 0x28eaacu: goto label_28eaac;
        case 0x28eb84u: goto label_28eb84;
        case 0x28eb90u: goto label_28eb90;
        case 0x28ebd0u: goto label_28ebd0;
        case 0x28ebe0u: goto label_28ebe0;
        case 0x28ebf8u: goto label_28ebf8;
        case 0x28ec34u: goto label_28ec34;
        case 0x28ec4cu: goto label_28ec4c;
        case 0x28ec68u: goto label_28ec68;
        case 0x28ec70u: goto label_28ec70;
        case 0x28ecb4u: goto label_28ecb4;
        case 0x28ed90u: goto label_28ed90;
        case 0x28eee0u: goto label_28eee0;
        case 0x28ef0cu: goto label_28ef0c;
        case 0x28ef60u: goto label_28ef60;
        default: break;
    }

    ctx->pc = 0x28e360u;

    // 0x28e360: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x28e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x28e364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e368: 0xffb301b0  sd          $s3, 0x1B0($sp)
    ctx->pc = 0x28e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 19));
    // 0x28e36c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28e370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e374: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x28e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x28e378: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x28e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x28e37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e380: 0xffb701f0  sd          $s7, 0x1F0($sp)
    ctx->pc = 0x28e380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 23));
    // 0x28e384: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x28e384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e388: 0xffb601e0  sd          $s6, 0x1E0($sp)
    ctx->pc = 0x28e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 22));
    // 0x28e38c: 0xffb501d0  sd          $s5, 0x1D0($sp)
    ctx->pc = 0x28e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 21));
    // 0x28e390: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x28e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x28e394: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x28e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x28e398: 0xffb10190  sd          $s1, 0x190($sp)
    ctx->pc = 0x28e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 17));
    // 0x28e39c: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x28e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x28e3a0: 0xe7b70238  swc1        $f23, 0x238($sp)
    ctx->pc = 0x28e3a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x28e3a4: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x28e3a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x28e3a8: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x28e3a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x28e3ac: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x28e3acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x28e3b0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x28E3B0u;
    SET_GPR_U32(ctx, 31, 0x28E3B8u);
    ctx->pc = 0x28E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3B0u;
    // 0x28e3b4: 0xafa20178  sw          $v0, 0x178($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x28E3B0u, 0x28E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3B8u;
label_28e3b8:
    // 0x28e3b8: 0x12600305  beqz        $s3, . + 4 + (0x305 << 2)
    ctx->pc = 0x28E3B8u;
    {
        const bool branch_taken_0x28e3b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3B8u;
        // 0x28e3bc: 0xdfbf0210  ld          $ra, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3b8) {
            ctx->pc = 0x28EFD0u;
            goto label_28efd0;
        }
    }
    ctx->pc = 0x28E3C0u;
    // 0x28e3c0: 0x8e7700ac  lw          $s7, 0xAC($s3)
    ctx->pc = 0x28e3c0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x28e3c4: 0x52e00303  beql        $s7, $zero, . + 4 + (0x303 << 2)
    ctx->pc = 0x28E3C4u;
    {
        const bool branch_taken_0x28e3c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3c4) {
            ctx->pc = 0x28E3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E3C4u;
            // 0x28e3c8: 0xdfbe0200  ld          $fp, 0x200($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EFD4u;
            goto label_28efd4;
        }
    }
    ctx->pc = 0x28E3CCu;
    // 0x28e3cc: 0x8ef60040  lw          $s6, 0x40($s7)
    ctx->pc = 0x28e3ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x28e3d0: 0x52c00300  beql        $s6, $zero, . + 4 + (0x300 << 2)
    ctx->pc = 0x28E3D0u;
    {
        const bool branch_taken_0x28e3d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3d0) {
            ctx->pc = 0x28E3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E3D0u;
            // 0x28e3d4: 0xdfbe0200  ld          $fp, 0x200($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EFD4u;
            goto label_28efd4;
        }
    }
    ctx->pc = 0x28E3D8u;
    // 0x28e3d8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x28e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x28e3dc: 0x104002fd  beqz        $v0, . + 4 + (0x2FD << 2)
    ctx->pc = 0x28E3DCu;
    {
        const bool branch_taken_0x28e3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3DCu;
        // 0x28e3e0: 0xdfbe0200  ld          $fp, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3dc) {
            ctx->pc = 0x28EFD4u;
            goto label_28efd4;
        }
    }
    ctx->pc = 0x28E3E4u;
    // 0x28e3e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e3e8: 0x104002fa  beqz        $v0, . + 4 + (0x2FA << 2)
    ctx->pc = 0x28E3E8u;
    {
        const bool branch_taken_0x28e3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3e8) {
            ctx->pc = 0x28EFD4u;
            goto label_28efd4;
        }
    }
    ctx->pc = 0x28E3F0u;
    // 0x28e3f0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28e3f4: 0x506002f8  beql        $v1, $zero, . + 4 + (0x2F8 << 2)
    ctx->pc = 0x28E3F4u;
    {
        const bool branch_taken_0x28e3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3f4) {
            ctx->pc = 0x28E3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E3F4u;
            // 0x28e3f8: 0xdfb701f0  ld          $s7, 0x1F0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EFD8u;
            goto label_28efd8;
        }
    }
    ctx->pc = 0x28E3FCu;
    // 0x28e3fc: 0x8c690020  lw          $t1, 0x20($v1)
    ctx->pc = 0x28e3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28e400: 0x112002f4  beqz        $t1, . + 4 + (0x2F4 << 2)
    ctx->pc = 0x28E400u;
    {
        const bool branch_taken_0x28e400 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E400u;
        // 0x28e404: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e400) {
            ctx->pc = 0x28EFD4u;
            goto label_28efd4;
        }
    }
    ctx->pc = 0x28E408u;
    // 0x28e408: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x28e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28e40c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x28e40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28e410: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x28e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x28e414: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x28e414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28e418: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x28e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x28e41c: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x28e41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28e420: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x28e420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x28e424: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x28e424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x28e428: 0x95250124  lhu         $a1, 0x124($t1)
    ctx->pc = 0x28e428u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 292)));
    // 0x28e42c: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x28e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x28e430: 0x24636218  addiu       $v1, $v1, 0x6218
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x28e434: 0x83f021  addu        $fp, $a0, $v1
    ctx->pc = 0x28e434u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28e438: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x28e438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x28e43c: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x28e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x28e440: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x28e440u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x28e444: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x28e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x28e448: 0x27d400bc  addiu       $s4, $fp, 0xBC
    ctx->pc = 0x28e448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 188));
    // 0x28e44c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x28e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x28e450: 0x27c20034  addiu       $v0, $fp, 0x34
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 52));
    // 0x28e454: 0x8fc3016c  lw          $v1, 0x16C($fp)
    ctx->pc = 0x28e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 364)));
    // 0x28e458: 0x44a00a  movz        $s4, $v0, $a0
    ctx->pc = 0x28e458u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x28e45c: 0xafa80174  sw          $t0, 0x174($sp)
    ctx->pc = 0x28e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 8));
    // 0x28e460: 0x4600079  bltz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x28E460u;
    {
        const bool branch_taken_0x28e460 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E460u;
        // 0x28e464: 0xa5250124  sh          $a1, 0x124($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 292), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e460) {
            ctx->pc = 0x28E648u;
            goto label_28e648;
        }
    }
    ctx->pc = 0x28E468u;
    // 0x28e468: 0x8fc20180  lw          $v0, 0x180($fp)
    ctx->pc = 0x28e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 384)));
    // 0x28e46c: 0x4400076  bltz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x28E46Cu;
    {
        const bool branch_taken_0x28e46c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e46c) {
            ctx->pc = 0x28E648u;
            goto label_28e648;
        }
    }
    ctx->pc = 0x28E474u;
    // 0x28e474: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28E474u;
    SET_GPR_U32(ctx, 31, 0x28E47Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28E474u, 0x28E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E47Cu;
label_28e47c:
    // 0x28e47c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E47Cu;
    {
        const bool branch_taken_0x28e47c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E47Cu;
        // 0x28e480: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e47c) {
            ctx->pc = 0x28E490u;
            goto label_28e490;
        }
    }
    ctx->pc = 0x28E484u;
    // 0x28e484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e488: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E488u;
    {
        const bool branch_taken_0x28e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E488u;
        // 0x28e48c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e488) {
            ctx->pc = 0x28E4A4u;
            goto label_28e4a4;
        }
    }
    ctx->pc = 0x28E490u;
label_28e490:
    // 0x28e490: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e49c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28e4a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28e4a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28e4a4:
    // 0x28e4a4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28e4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28e4a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e4b0: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x28e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x28e4b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e4b8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28e4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x28e4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e4c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e4c4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E4C4u;
    {
        const bool branch_taken_0x28e4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4C4u;
        // 0x28e4c8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4c4) {
            ctx->pc = 0x28E4D8u;
            goto label_28e4d8;
        }
    }
    ctx->pc = 0x28E4CCu;
    // 0x28e4cc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28e4d0: 0x5482002d  bnel        $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x28E4D0u;
    {
        const bool branch_taken_0x28e4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e4d0) {
            ctx->pc = 0x28E4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E4D0u;
            // 0x28e4d4: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E588u;
            goto label_28e588;
        }
    }
    ctx->pc = 0x28E4D8u;
label_28e4d8:
    // 0x28e4d8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28E4D8u;
    SET_GPR_U32(ctx, 31, 0x28E4E0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28E4D8u, 0x28E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4E0u;
label_28e4e0:
    // 0x28e4e0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28E4E0u;
    SET_GPR_U32(ctx, 31, 0x28E4E8u);
    ctx->pc = 0x28E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4E0u;
    // 0x28e4e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28E4E0u, 0x28E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4E8u;
label_28e4e8:
    // 0x28e4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28e4f0: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x28e4f0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x28e4f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28E4F4u;
    {
        const bool branch_taken_0x28e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4f4) {
            ctx->pc = 0x28E4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E4F4u;
            // 0x28e4f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E4FCu;
            goto label_28e4fc;
        }
    }
    ctx->pc = 0x28E4FCu;
label_28e4fc:
    // 0x28e4fc: 0x8010  mfhi        $s0
    ctx->pc = 0x28e4fcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x28e500: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E500u;
    {
        const bool branch_taken_0x28e500 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x28E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E500u;
        // 0x28e504: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e500) {
            ctx->pc = 0x28E514u;
            goto label_28e514;
        }
    }
    ctx->pc = 0x28E508u;
    // 0x28e508: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x28e508u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e50c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E50Cu;
    {
        const bool branch_taken_0x28e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E50Cu;
        // 0x28e510: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e50c) {
            ctx->pc = 0x28E528u;
            goto label_28e528;
        }
    }
    ctx->pc = 0x28E514u;
label_28e514:
    // 0x28e514: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x28e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x28e518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e51c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28e524: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28e524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28e528:
    // 0x28e528: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x28e528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x28e52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e530: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E530u;
    {
        const bool branch_taken_0x28e530 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E530u;
        // 0x28e534: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e530) {
            ctx->pc = 0x28E544u;
            goto label_28e544;
        }
    }
    ctx->pc = 0x28E538u;
    // 0x28e538: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28e538u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e53c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E53Cu;
    {
        const bool branch_taken_0x28e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E53Cu;
        // 0x28e540: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e53c) {
            ctx->pc = 0x28E55Cu;
            goto label_28e55c;
        }
    }
    ctx->pc = 0x28E544u;
label_28e544:
    // 0x28e544: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x28e544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x28e548: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e54c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e554: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28e558: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28e558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28e55c:
    // 0x28e55c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28e55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28e560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e564: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28e564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28e568: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e56c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e570: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x28e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x28e574: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e578: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28e578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28e57c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28e57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28e580: 0x46007500  add.s       $f20, $f14, $f0
    ctx->pc = 0x28e580u;
    ctx->f[20] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x28e584: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28e584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_28e588:
    // 0x28e588: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e58c: 0x8fc6016c  lw          $a2, 0x16C($fp)
    ctx->pc = 0x28e58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 364)));
    // 0x28e590: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x28e590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x28e594: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x28e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28e598: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x28e598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x28e59c: 0x8fc30180  lw          $v1, 0x180($fp)
    ctx->pc = 0x28e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 384)));
    // 0x28e5a0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x28e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28e5a4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x28e5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28e5a8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x28e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28e5ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e5b0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x28e5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x28e5b4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x28e5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5bc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x28e5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28e5c0: 0x8cb00048  lw          $s0, 0x48($a1)
    ctx->pc = 0x28e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x28e5c4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x28e5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x28e5c8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x28e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e5cc: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x28e5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e5d0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x28E5D0u;
    SET_GPR_U32(ctx, 31, 0x28E5D8u);
    ctx->pc = 0x28E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5D0u;
    // 0x28e5d4: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x28E5D0u, 0x28E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5D8u;
label_28e5d8:
    // 0x28e5d8: 0xc78e8ac0  lwc1        $f14, -0x7540($gp)
    ctx->pc = 0x28e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28e5dc: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x28e5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28e5e0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28e5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28e5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5ec: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x28e5ecu;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x28e5f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e5f4: 0x0  nop
    ctx->pc = 0x28e5f4u;
    // NOP
    // 0x28e5f8: 0x0  nop
    ctx->pc = 0x28e5f8u;
    // NOP
    // 0x28e5fc: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x28e5fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x28e600: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x28E600u;
    SET_GPR_U32(ctx, 31, 0x28E608u);
    ctx->pc = 0x28E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E600u;
    // 0x28e604: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x28E600u, 0x28E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E608u;
label_28e608:
    // 0x28e608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e60c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28e60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e610: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E610u;
    SET_GPR_U32(ctx, 31, 0x28E618u);
    ctx->pc = 0x28E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E610u;
    // 0x28e614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E610u, 0x28E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E618u;
label_28e618:
    // 0x28e618: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x28e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28e61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e620: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x28e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e624: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x28e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e628: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x28e628u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x28e62c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x28e62cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x28e630: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x28E630u;
    SET_GPR_U32(ctx, 31, 0x28E638u);
    ctx->pc = 0x28E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E630u;
    // 0x28e634: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x28E630u, 0x28E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E638u;
label_28e638:
    // 0x28e638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e63c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28e63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e640: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E640u;
    SET_GPR_U32(ctx, 31, 0x28E648u);
    ctx->pc = 0x28E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E640u;
    // 0x28e644: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E640u, 0x28E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E648u;
label_28e648:
    // 0x28e648: 0xc0a38d2  jal         func_28E348
    ctx->pc = 0x28E648u;
    SET_GPR_U32(ctx, 31, 0x28E650u);
    ctx->pc = 0x28E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E648u;
    // 0x28e64c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E348u, 0x28E648u, 0x28E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E650u;
label_28e650:
    // 0x28e650: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28e654: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28e658: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E658u;
    {
        const bool branch_taken_0x28e658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E658u;
        // 0x28e65c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e658) {
            ctx->pc = 0x28E668u;
            goto label_28e668;
        }
    }
    ctx->pc = 0x28E660u;
    // 0x28e660: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28E660u;
    {
        const bool branch_taken_0x28e660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e660) {
            ctx->pc = 0x28E664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E660u;
            // 0x28e664: 0x8e6600b8  lw          $a2, 0xB8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E6B0u;
            goto label_28e6b0;
        }
    }
    ctx->pc = 0x28E668u;
label_28e668:
    // 0x28e668: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x28e668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x28e66c: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E66Cu;
    {
        const bool branch_taken_0x28e66c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e66c) {
            ctx->pc = 0x28E670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E66Cu;
            // 0x28e670: 0x8e65000c  lw          $a1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E68Cu;
            goto label_28e68c;
        }
    }
    ctx->pc = 0x28E674u;
    // 0x28e674: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x28e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28e678: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x28e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28e67c: 0x94830124  lhu         $v1, 0x124($a0)
    ctx->pc = 0x28e67cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x28e680: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x28e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x28e684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E684u;
    {
        const bool branch_taken_0x28e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E684u;
        // 0x28e688: 0xa4830124  sh          $v1, 0x124($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e684) {
            ctx->pc = 0x28E6B0u;
            goto label_28e6b0;
        }
    }
    ctx->pc = 0x28E68Cu;
label_28e68c:
    // 0x28e68c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28e690: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x28e690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28e694: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28e694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e698: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x28e698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x28e69c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x28e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x28e6a0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x28e6a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x28e6a4: 0x94820124  lhu         $v0, 0x124($a0)
    ctx->pc = 0x28e6a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x28e6a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28e6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28e6ac: 0xa4820124  sh          $v0, 0x124($a0)
    ctx->pc = 0x28e6acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 2));
label_28e6b0:
    // 0x28e6b0: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x28e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x28e6b4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x28e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28e6b8: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x28e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x28e6bc: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x28e6c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28e6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28e6c4: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x28e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e6c8: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x28e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e6cc: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x28e6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x28e6d0: 0xc7818ac4  lwc1        $f1, -0x753C($gp)
    ctx->pc = 0x28e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e6d4: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x28e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e6d8: 0xc683003c  lwc1        $f3, 0x3C($s4)
    ctx->pc = 0x28e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e6dc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x28e6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e6e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28e6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28e6e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28e6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28e6e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e6ec: 0xae6200b8  sw          $v0, 0xB8($s3)
    ctx->pc = 0x28e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 2));
    // 0x28e6f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28e6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28e6f4: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x28e6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x28e6f8: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x28e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e6fc: 0xe6620078  swc1        $f2, 0x78($s3)
    ctx->pc = 0x28e6fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x28e700: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x28E700u;
    {
        const bool branch_taken_0x28e700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E700u;
        // 0x28e704: 0xe6610050  swc1        $f1, 0x50($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e700) {
            ctx->pc = 0x28E864u;
            goto label_28e864;
        }
    }
    ctx->pc = 0x28E708u;
    // 0x28e708: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x28e708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x28e70c: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x28e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x28e710: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28E710u;
    SET_GPR_U32(ctx, 31, 0x28E718u);
    ctx->pc = 0x28E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E710u;
    // 0x28e714: 0xae600064  sw          $zero, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28E710u, 0x28E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E718u;
label_28e718:
    // 0x28e718: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E718u;
    {
        const bool branch_taken_0x28e718 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E718u;
        // 0x28e71c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e718) {
            ctx->pc = 0x28E72Cu;
            goto label_28e72c;
        }
    }
    ctx->pc = 0x28E720u;
    // 0x28e720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E724u;
    {
        const bool branch_taken_0x28e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E724u;
        // 0x28e728: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e724) {
            ctx->pc = 0x28E740u;
            goto label_28e740;
        }
    }
    ctx->pc = 0x28E72Cu;
label_28e72c:
    // 0x28e72c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e73c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e740:
    // 0x28e740: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28e740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28e744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28e744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e748: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28E748u;
    SET_GPR_U32(ctx, 31, 0x28E750u);
    ctx->pc = 0x28E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E748u;
    // 0x28e74c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28E748u, 0x28E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E750u;
label_28e750:
    // 0x28e750: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28e750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28e754: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28e754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28e758: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x28E758u;
    SET_GPR_U32(ctx, 31, 0x28E760u);
    ctx->pc = 0x28E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E758u;
    // 0x28e75c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x28E758u, 0x28E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E760u;
label_28e760:
    // 0x28e760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e764: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x28E764u;
    SET_GPR_U32(ctx, 31, 0x28E76Cu);
    ctx->pc = 0x28E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E764u;
    // 0x28e768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x28E764u, 0x28E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E76Cu;
label_28e76c:
    // 0x28e76c: 0xc68c0060  lwc1        $f12, 0x60($s4)
    ctx->pc = 0x28e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e770: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28E770u;
    SET_GPR_U32(ctx, 31, 0x28E778u);
    ctx->pc = 0x28E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E770u;
    // 0x28e774: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28E770u, 0x28E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E778u;
label_28e778:
    // 0x28e778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e77c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x28E77Cu;
    SET_GPR_U32(ctx, 31, 0x28E784u);
    ctx->pc = 0x28E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E77Cu;
    // 0x28e780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28E77Cu, 0x28E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E784u;
label_28e784:
    // 0x28e784: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x28E784u;
    SET_GPR_U32(ctx, 31, 0x28E78Cu);
    ctx->pc = 0x28E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E784u;
    // 0x28e788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28E784u, 0x28E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E78Cu;
label_28e78c:
    // 0x28e78c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28E78Cu;
    SET_GPR_U32(ctx, 31, 0x28E794u);
    ctx->pc = 0x28E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E78Cu;
    // 0x28e790: 0xe6600068  swc1        $f0, 0x68($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28E78Cu, 0x28E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E794u;
label_28e794:
    // 0x28e794: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E794u;
    {
        const bool branch_taken_0x28e794 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E794u;
        // 0x28e798: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e794) {
            ctx->pc = 0x28E7A8u;
            goto label_28e7a8;
        }
    }
    ctx->pc = 0x28E79Cu;
    // 0x28e79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e7a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E7A0u;
    {
        const bool branch_taken_0x28e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A0u;
        // 0x28e7a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7a0) {
            ctx->pc = 0x28E7BCu;
            goto label_28e7bc;
        }
    }
    ctx->pc = 0x28E7A8u;
label_28e7a8:
    // 0x28e7a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e7ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e7b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e7b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e7bc:
    // 0x28e7bc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28e7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28e7c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28e7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e7c4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28E7C4u;
    SET_GPR_U32(ctx, 31, 0x28E7CCu);
    ctx->pc = 0x28E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7C4u;
    // 0x28e7c8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28E7C4u, 0x28E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7CCu;
label_28e7cc:
    // 0x28e7cc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28e7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28e7d0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28e7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28e7d4: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x28E7D4u;
    SET_GPR_U32(ctx, 31, 0x28E7DCu);
    ctx->pc = 0x28E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7D4u;
    // 0x28e7d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x28E7D4u, 0x28E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7DCu;
label_28e7dc:
    // 0x28e7dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7e0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x28E7E0u;
    SET_GPR_U32(ctx, 31, 0x28E7E8u);
    ctx->pc = 0x28E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7E0u;
    // 0x28e7e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x28E7E0u, 0x28E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7E8u;
label_28e7e8:
    // 0x28e7e8: 0xc68c0060  lwc1        $f12, 0x60($s4)
    ctx->pc = 0x28e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e7ec: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x28E7ECu;
    SET_GPR_U32(ctx, 31, 0x28E7F4u);
    ctx->pc = 0x28E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7ECu;
    // 0x28e7f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x28E7ECu, 0x28E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7F4u;
label_28e7f4:
    // 0x28e7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7f8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x28E7F8u;
    SET_GPR_U32(ctx, 31, 0x28E800u);
    ctx->pc = 0x28E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7F8u;
    // 0x28e7fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x28E7F8u, 0x28E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E800u;
label_28e800:
    // 0x28e800: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x28E800u;
    SET_GPR_U32(ctx, 31, 0x28E808u);
    ctx->pc = 0x28E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E800u;
    // 0x28e804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x28E800u, 0x28E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E808u;
label_28e808:
    // 0x28e808: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28E808u;
    SET_GPR_U32(ctx, 31, 0x28E810u);
    ctx->pc = 0x28E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E808u;
    // 0x28e80c: 0xe660006c  swc1        $f0, 0x6C($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28E808u, 0x28E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E810u;
label_28e810:
    // 0x28e810: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E810u;
    {
        const bool branch_taken_0x28e810 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E810u;
        // 0x28e814: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e810) {
            ctx->pc = 0x28E824u;
            goto label_28e824;
        }
    }
    ctx->pc = 0x28E818u;
    // 0x28e818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e81c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E81Cu;
    {
        const bool branch_taken_0x28e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E81Cu;
        // 0x28e820: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e81c) {
            ctx->pc = 0x28E838u;
            goto label_28e838;
        }
    }
    ctx->pc = 0x28E824u;
label_28e824:
    // 0x28e824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28e82c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e830: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28e834: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28e834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28e838:
    // 0x28e838: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28e838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28e83c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e840: 0xc7828ac8  lwc1        $f2, -0x7538($gp)
    ctx->pc = 0x28e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e844: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e848: 0xc6830060  lwc1        $f3, 0x60($s4)
    ctx->pc = 0x28e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e84c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28e84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28e850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e854: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28e854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28e858: 0xe6610074  swc1        $f1, 0x74($s3)
    ctx->pc = 0x28e858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x28e85c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28e85cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28e860: 0xe6600070  swc1        $f0, 0x70($s3)
    ctx->pc = 0x28e860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
label_28e864:
    // 0x28e864: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x28e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e868: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x28e868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28e86c: 0xc7958acc  lwc1        $f21, -0x7534($gp)
    ctx->pc = 0x28e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e874: 0xe66000bc  swc1        $f0, 0xBC($s3)
    ctx->pc = 0x28e874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 188), bits); }
    // 0x28e878: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28e878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28e87c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28e87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28e880: 0xc6cc0048  lwc1        $f12, 0x48($s6)
    ctx->pc = 0x28e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e884: 0xc6cd004c  lwc1        $f13, 0x4C($s6)
    ctx->pc = 0x28e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e888: 0xc6ce0058  lwc1        $f14, 0x58($s6)
    ctx->pc = 0x28e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28e88c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x28e88cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x28e890: 0x46156b42  mul.s       $f13, $f13, $f21
    ctx->pc = 0x28e890u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x28e894: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x28e894u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x28e898: 0x0  nop
    ctx->pc = 0x28e898u;
    // NOP
    // 0x28e89c: 0x0  nop
    ctx->pc = 0x28e89cu;
    // NOP
    // 0x28e8a0: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x28e8a0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x28e8a4: 0x0  nop
    ctx->pc = 0x28e8a4u;
    // NOP
    // 0x28e8a8: 0x0  nop
    ctx->pc = 0x28e8a8u;
    // NOP
    // 0x28e8ac: 0x46146b43  div.s       $f13, $f13, $f20
    ctx->pc = 0x28e8acu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[20];
    // 0x28e8b0: 0x0  nop
    ctx->pc = 0x28e8b0u;
    // NOP
    // 0x28e8b4: 0x0  nop
    ctx->pc = 0x28e8b4u;
    // NOP
    // 0x28e8b8: 0x46147383  div.s       $f14, $f14, $f20
    ctx->pc = 0x28e8b8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[20];
    // 0x28e8bc: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x28E8BCu;
    SET_GPR_U32(ctx, 31, 0x28E8C4u);
    ctx->pc = 0x28E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8BCu;
    // 0x28e8c0: 0x8fb10178  lw          $s1, 0x178($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x28E8BCu, 0x28E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8C4u;
label_28e8c4:
    // 0x28e8c4: 0xc6620044  lwc1        $f2, 0x44($s3)
    ctx->pc = 0x28e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8cc: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x28e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e8d0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28e8d4: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x28e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e8d8: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x28e8d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x28e8dc: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x28e8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x28e8e0: 0xc0ad568  jal         func_2B55A0
    ctx->pc = 0x28E8E0u;
    SET_GPR_U32(ctx, 31, 0x28E8E8u);
    ctx->pc = 0x28E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8E0u;
    // 0x28e8e4: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B55A0u, 0x28E8E0u, 0x28E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8E8u;
label_28e8e8:
    // 0x28e8e8: 0xc6c10030  lwc1        $f1, 0x30($s6)
    ctx->pc = 0x28e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e8ec: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x28e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e8f0: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x28e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e8f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28e8f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28e8f8: 0xc7a30108  lwc1        $f3, 0x108($sp)
    ctx->pc = 0x28e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e8fc: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28e900: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x28e900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x28e904: 0xc6c00034  lwc1        $f0, 0x34($s6)
    ctx->pc = 0x28e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e908: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28e908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28e90c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x28e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x28e910: 0xc6c10038  lwc1        $f1, 0x38($s6)
    ctx->pc = 0x28e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e914: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x28e914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x28e918: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x28e918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x28e91c: 0x80620007  lb          $v0, 0x7($v1)
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x28e920: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28E920u;
    {
        const bool branch_taken_0x28e920 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28e920) {
            ctx->pc = 0x28E924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E920u;
            // 0x28e924: 0x8c710048  lw          $s1, 0x48($v1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E928u;
            goto label_28e928;
        }
    }
    ctx->pc = 0x28E928u;
label_28e928:
    // 0x28e928: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28e928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e92c: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x28e92cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28e930: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28e930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e934: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28e934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28e938: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x28e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e93c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28e93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28e940: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x28e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e944: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28e944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28e948: 0xc6cf004c  lwc1        $f15, 0x4C($s6)
    ctx->pc = 0x28e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28e94c: 0xc6cc0030  lwc1        $f12, 0x30($s6)
    ctx->pc = 0x28e94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e950: 0x46157bc2  mul.s       $f15, $f15, $f21
    ctx->pc = 0x28e950u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x28e954: 0xc6cd0034  lwc1        $f13, 0x34($s6)
    ctx->pc = 0x28e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28e958: 0x0  nop
    ctx->pc = 0x28e958u;
    // NOP
    // 0x28e95c: 0x0  nop
    ctx->pc = 0x28e95cu;
    // NOP
    // 0x28e960: 0x46147bc3  div.s       $f15, $f15, $f20
    ctx->pc = 0x28e960u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[20];
    // 0x28e964: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x28E964u;
    SET_GPR_U32(ctx, 31, 0x28E96Cu);
    ctx->pc = 0x28E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E964u;
    // 0x28e968: 0xc6ce0038  lwc1        $f14, 0x38($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x28E964u, 0x28E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E96Cu;
label_28e96c:
    // 0x28e96c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x28e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x28e970: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x28e970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28e974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e978: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e97c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E97Cu;
    SET_GPR_U32(ctx, 31, 0x28E984u);
    ctx->pc = 0x28E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E97Cu;
    // 0x28e980: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E97Cu, 0x28E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E984u;
label_28e984:
    // 0x28e984: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x28e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28e988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28e988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e98c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x28e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e990: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x28E990u;
    SET_GPR_U32(ctx, 31, 0x28E998u);
    ctx->pc = 0x28E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E990u;
    // 0x28e994: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x28E990u, 0x28E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E998u;
label_28e998:
    // 0x28e998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e99c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28e99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9a0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x28E9A0u;
    SET_GPR_U32(ctx, 31, 0x28E9A8u);
    ctx->pc = 0x28E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E9A0u;
    // 0x28e9a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x28E9A0u, 0x28E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9A8u;
label_28e9a8:
    // 0x28e9a8: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x28e9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28e9ac: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x28e9b0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x28e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9b4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x28e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28e9b8: 0xe6e00048  swc1        $f0, 0x48($s7)
    ctx->pc = 0x28e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 72), bits); }
    // 0x28e9bc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x28e9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e9c0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x28e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x28e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28e9c8: 0xe6e0004c  swc1        $f0, 0x4C($s7)
    ctx->pc = 0x28e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 76), bits); }
    // 0x28e9cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28e9ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e9d0: 0x8fc40154  lw          $a0, 0x154($fp)
    ctx->pc = 0x28e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 340)));
    // 0x28e9d4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x28e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9d8: 0xe6e00050  swc1        $f0, 0x50($s7)
    ctx->pc = 0x28e9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 80), bits); }
    // 0x28e9dc: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x28e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x28e9e0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E9E0u;
    {
        const bool branch_taken_0x28e9e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9E0u;
        // 0x28e9e4: 0xafa80174  sw          $t0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9e0) {
            ctx->pc = 0x28E9FCu;
            goto label_28e9fc;
        }
    }
    ctx->pc = 0x28E9E8u;
    // 0x28e9e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e9ec: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x28e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x28e9f0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28e9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e9f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E9F4u;
    {
        const bool branch_taken_0x28e9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9F4u;
        // 0x28e9f8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9f4) {
            ctx->pc = 0x28EA00u;
            goto label_28ea00;
        }
    }
    ctx->pc = 0x28E9FCu;
label_28e9fc:
    // 0x28e9fc: 0x8fb10178  lw          $s1, 0x178($sp)
    ctx->pc = 0x28e9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_28ea00:
    // 0x28ea00: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea04: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28ea08: 0xc7948ad0  lwc1        $f20, -0x7530($gp)
    ctx->pc = 0x28ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28ea0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28ea10: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28ea10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x28ea14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x28ea14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28ea18: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x28ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea1c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28ea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28ea20: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x28ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea24: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28ea24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28ea28: 0xc64f0048  lwc1        $f15, 0x48($s2)
    ctx->pc = 0x28ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28ea2c: 0xc650004c  lwc1        $f16, 0x4C($s2)
    ctx->pc = 0x28ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x28ea30: 0xc6510058  lwc1        $f17, 0x58($s2)
    ctx->pc = 0x28ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28ea34: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x28ea34u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x28ea38: 0x46148402  mul.s       $f16, $f16, $f20
    ctx->pc = 0x28ea38u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[20]);
    // 0x28ea3c: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x28ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28ea40: 0x46148c42  mul.s       $f17, $f17, $f20
    ctx->pc = 0x28ea40u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[20]);
    // 0x28ea44: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x28ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28ea48: 0x0  nop
    ctx->pc = 0x28ea48u;
    // NOP
    // 0x28ea4c: 0x0  nop
    ctx->pc = 0x28ea4cu;
    // NOP
    // 0x28ea50: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x28ea50u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x28ea54: 0x0  nop
    ctx->pc = 0x28ea54u;
    // NOP
    // 0x28ea58: 0x0  nop
    ctx->pc = 0x28ea58u;
    // NOP
    // 0x28ea5c: 0x46158403  div.s       $f16, $f16, $f21
    ctx->pc = 0x28ea5cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[21];
    // 0x28ea60: 0x0  nop
    ctx->pc = 0x28ea60u;
    // NOP
    // 0x28ea64: 0x0  nop
    ctx->pc = 0x28ea64u;
    // NOP
    // 0x28ea68: 0x46158c43  div.s       $f17, $f17, $f21
    ctx->pc = 0x28ea68u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[21];
    // 0x28ea6c: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x28EA6Cu;
    SET_GPR_U32(ctx, 31, 0x28EA74u);
    ctx->pc = 0x28EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA6Cu;
    // 0x28ea70: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x28EA6Cu, 0x28EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA74u;
label_28ea74:
    // 0x28ea74: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x28ea74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ea78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28ea7c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x28EA7Cu;
    SET_GPR_U32(ctx, 31, 0x28EA84u);
    ctx->pc = 0x28EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA7Cu;
    // 0x28ea80: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28EA7Cu, 0x28EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA84u;
label_28ea84:
    // 0x28ea84: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28ea88: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x28ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x28ea8c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea90: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea94: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x28ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ea98: 0x8c4406ec  lw          $a0, 0x6EC($v0)
    ctx->pc = 0x28ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    // 0x28ea9c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x28ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x28eaa0: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x28eaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x28eaa4: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x28EAA4u;
    SET_GPR_U32(ctx, 31, 0x28EAACu);
    ctx->pc = 0x28EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EAA4u;
    // 0x28eaa8: 0xe6620018  swc1        $f2, 0x18($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x28EAA4u, 0x28EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAACu;
label_28eaac:
    // 0x28eaac: 0x8fc40168  lw          $a0, 0x168($fp)
    ctx->pc = 0x28eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 360)));
    // 0x28eab0: 0x4800051  bltz        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x28EAB0u;
    {
        const bool branch_taken_0x28eab0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAB0u;
        // 0x28eab4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eab0) {
            ctx->pc = 0x28EBF8u;
            goto label_28ebf8;
        }
    }
    ctx->pc = 0x28EAB8u;
    // 0x28eab8: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x28eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x28eabc: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x28eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28eac0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x28eac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28eac4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x28eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eac8: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x28eac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x28eacc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x28eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ead0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28ead0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28ead4: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x28ead4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x28ead8: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x28ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eadc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x28eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eae0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28eae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28eae4: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x28eae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x28eae8: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x28eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eaec: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x28eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eaf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28eaf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28eaf4: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x28eaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x28eaf8: 0x6ba60167  ldl         $a2, 0x167($sp)
    ctx->pc = 0x28eaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28eafc: 0x6fa60160  ldr         $a2, 0x160($sp)
    ctx->pc = 0x28eafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28eb00: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x28eb00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x28eb04: 0xb3a60157  sdl         $a2, 0x157($sp)
    ctx->pc = 0x28eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb08: 0xb7a60150  sdr         $a2, 0x150($sp)
    ctx->pc = 0x28eb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb0c: 0xafa70158  sw          $a3, 0x158($sp)
    ctx->pc = 0x28eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 7));
    // 0x28eb10: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x28eb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28eb14: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x28eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28eb18: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x28eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x28eb1c: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x28eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28eb20: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x28eb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eb24: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x28eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28eb28: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28eb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb2c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28eb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28eb30: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x28eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb34: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28eb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28eb38: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x28eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb3c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x28eb3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28eb40: 0xc4b10058  lwc1        $f17, 0x58($a1)
    ctx->pc = 0x28eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28eb44: 0xc4af0048  lwc1        $f15, 0x48($a1)
    ctx->pc = 0x28eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28eb48: 0xc4b0004c  lwc1        $f16, 0x4C($a1)
    ctx->pc = 0x28eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x28eb4c: 0x46148c42  mul.s       $f17, $f17, $f20
    ctx->pc = 0x28eb4cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[20]);
    // 0x28eb50: 0x46147bc2  mul.s       $f15, $f15, $f20
    ctx->pc = 0x28eb50u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    // 0x28eb54: 0x46148402  mul.s       $f16, $f16, $f20
    ctx->pc = 0x28eb54u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[20]);
    // 0x28eb58: 0x0  nop
    ctx->pc = 0x28eb58u;
    // NOP
    // 0x28eb5c: 0x0  nop
    ctx->pc = 0x28eb5cu;
    // NOP
    // 0x28eb60: 0x46158c43  div.s       $f17, $f17, $f21
    ctx->pc = 0x28eb60u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[21];
    // 0x28eb64: 0x0  nop
    ctx->pc = 0x28eb64u;
    // NOP
    // 0x28eb68: 0x0  nop
    ctx->pc = 0x28eb68u;
    // NOP
    // 0x28eb6c: 0x46157bc3  div.s       $f15, $f15, $f21
    ctx->pc = 0x28eb6cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[21];
    // 0x28eb70: 0x0  nop
    ctx->pc = 0x28eb70u;
    // NOP
    // 0x28eb74: 0x0  nop
    ctx->pc = 0x28eb74u;
    // NOP
    // 0x28eb78: 0x46158403  div.s       $f16, $f16, $f21
    ctx->pc = 0x28eb78u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[21];
    // 0x28eb7c: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x28EB7Cu;
    SET_GPR_U32(ctx, 31, 0x28EB84u);
    ctx->pc = 0x28EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB7Cu;
    // 0x28eb80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x28EB7Cu, 0x28EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB84u;
label_28eb84:
    // 0x28eb84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28eb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb88: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x28EB88u;
    SET_GPR_U32(ctx, 31, 0x28EB90u);
    ctx->pc = 0x28EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB88u;
    // 0x28eb8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x28EB88u, 0x28EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB90u;
label_28eb90:
    // 0x28eb90: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x28eb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28eb94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb98: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb9c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eba0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x28eba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x28eba4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x28eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28eba8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x28eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ebac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28ebacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28ebb0: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x28ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ebb4: 0x8c4406ec  lw          $a0, 0x6EC($v0)
    ctx->pc = 0x28ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    // 0x28ebb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28ebb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28ebbc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x28ebbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28ebc0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x28ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ebc4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28ebc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28ebc8: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x28EBC8u;
    SET_GPR_U32(ctx, 31, 0x28EBD0u);
    ctx->pc = 0x28EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBC8u;
    // 0x28ebcc: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x28EBC8u, 0x28EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBD0u;
label_28ebd0:
    // 0x28ebd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28ebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ebd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebd8: 0xc0a5c78  jal         func_2971E0
    ctx->pc = 0x28EBD8u;
    SET_GPR_U32(ctx, 31, 0x28EBE0u);
    ctx->pc = 0x28EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBD8u;
    // 0x28ebdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2971E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2971E0u, 0x28EBD8u, 0x28EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBE0u;
label_28ebe0:
    // 0x28ebe0: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x28ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28ebe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ebe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ebf0: 0xc0a5b90  jal         func_296E40
    ctx->pc = 0x28EBF0u;
    SET_GPR_U32(ctx, 31, 0x28EBF8u);
    ctx->pc = 0x28EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBF0u;
    // 0x28ebf4: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E40u, 0x28EBF0u, 0x28EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBF8u;
label_28ebf8:
    // 0x28ebf8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x28ebf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28ebfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28ec00: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EC00u;
    {
        const bool branch_taken_0x28ec00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC00u;
        // 0x28ec04: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec00) {
            ctx->pc = 0x28EC18u;
            goto label_28ec18;
        }
    }
    ctx->pc = 0x28EC08u;
    // 0x28ec08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28ec08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ec0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ec10: 0x3a420009  xori        $v0, $s2, 0x9
    ctx->pc = 0x28ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)9);
    // 0x28ec14: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x28ec14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_28ec18:
    // 0x28ec18: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x28ec18u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28ec1c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x28ec1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x28ec20: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x28ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x28ec24: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28ec28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ec28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec2c: 0xc088f98  jal         func_223E60
    ctx->pc = 0x28EC2Cu;
    SET_GPR_U32(ctx, 31, 0x28EC34u);
    ctx->pc = 0x28EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC2Cu;
    // 0x28ec30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E60u, 0x28EC2Cu, 0x28EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC34u;
label_28ec34:
    // 0x28ec34: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28ec38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28ec38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28ec3c: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x28ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x28ec40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec44: 0xc08906a  jal         func_2241A8
    ctx->pc = 0x28EC44u;
    SET_GPR_U32(ctx, 31, 0x28EC4Cu);
    ctx->pc = 0x28EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC44u;
    // 0x28ec48: 0x8ce60104  lw          $a2, 0x104($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2241A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2241A8u, 0x28EC44u, 0x28EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC4Cu;
label_28ec4c:
    // 0x28ec4c: 0x522000a8  beql        $s1, $zero, . + 4 + (0xA8 << 2)
    ctx->pc = 0x28EC4Cu;
    {
        const bool branch_taken_0x28ec4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ec4c) {
            ctx->pc = 0x28EC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EC4Cu;
            // 0x28ec50: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EEF0u;
            goto label_28eef0;
        }
    }
    ctx->pc = 0x28EC54u;
    // 0x28ec54: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x28ec54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x28ec58: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x28ec58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x28ec5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ec60: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28ec60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x28ec64: 0x0  nop
    ctx->pc = 0x28ec64u;
    // NOP
label_28ec68:
    // 0x28ec68: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28EC68u;
    SET_GPR_U32(ctx, 31, 0x28EC70u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28EC68u, 0x28EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC70u;
label_28ec70:
    // 0x28ec70: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EC70u;
    {
        const bool branch_taken_0x28ec70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC70u;
        // 0x28ec74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec70) {
            ctx->pc = 0x28EC88u;
            goto label_28ec88;
        }
    }
    ctx->pc = 0x28EC78u;
    // 0x28ec78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ec80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EC80u;
    {
        const bool branch_taken_0x28ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC80u;
        // 0x28ec84: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec80) {
            ctx->pc = 0x28ECA0u;
            goto label_28eca0;
        }
    }
    ctx->pc = 0x28EC88u;
label_28ec88:
    // 0x28ec88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ec8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ec90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ec98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ec98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28ec9c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x28ec9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_28eca0:
    // 0x28eca0: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x28eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eca4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28eca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28eca8: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x28eca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x28ecac: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28ECACu;
    SET_GPR_U32(ctx, 31, 0x28ECB4u);
    ctx->pc = 0x28ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ECACu;
    // 0x28ecb0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28ECACu, 0x28ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECB4u;
label_28ecb4:
    // 0x28ecb4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ECB4u;
    {
        const bool branch_taken_0x28ecb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECB4u;
        // 0x28ecb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecb4) {
            ctx->pc = 0x28ECCCu;
            goto label_28eccc;
        }
    }
    ctx->pc = 0x28ECBCu;
    // 0x28ecbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ecbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ecc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ecc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28ECC4u;
    {
        const bool branch_taken_0x28ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECC4u;
        // 0x28ecc8: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecc4) {
            ctx->pc = 0x28ECE4u;
            goto label_28ece4;
        }
    }
    ctx->pc = 0x28ECCCu;
label_28eccc:
    // 0x28eccc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ecd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ecd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ecd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ecd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ecd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ecd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ecdc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ecdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28ece0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x28ece0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_28ece4:
    // 0x28ece4: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x28ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28ece8: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x28ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ecec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x28ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x28ecf0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ecf4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ecf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28ecf8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28ecfc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x28ecfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x28ed00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28ED00u;
    {
        const bool branch_taken_0x28ed00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED00u;
        // 0x28ed04: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed00) {
            ctx->pc = 0x28ED20u;
            goto label_28ed20;
        }
    }
    ctx->pc = 0x28ED08u;
    // 0x28ed08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed0c: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ED0Cu;
    {
        const bool branch_taken_0x28ed0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ed0c) {
            ctx->pc = 0x28ED10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED0Cu;
            // 0x28ed10: 0x8c82033c  lw          $v0, 0x33C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 828)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ED24u;
            goto label_28ed24;
        }
    }
    ctx->pc = 0x28ED14u;
    // 0x28ed14: 0xc7808ad4  lwc1        $f0, -0x752C($gp)
    ctx->pc = 0x28ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ed18: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28ed18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28ed1c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x28ed1cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_28ed20:
    // 0x28ed20: 0x8c82033c  lw          $v0, 0x33C($a0)
    ctx->pc = 0x28ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 828)));
label_28ed24:
    // 0x28ed24: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x28ED24u;
    {
        const bool branch_taken_0x28ed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed24) {
            ctx->pc = 0x28ED28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED24u;
            // 0x28ed28: 0xc46200f0  lwc1        $f2, 0xF0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EE28u;
            goto label_28ee28;
        }
    }
    ctx->pc = 0x28ED2Cu;
    // 0x28ed2c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x28ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ed30: 0xc4620340  lwc1        $f2, 0x340($v1)
    ctx->pc = 0x28ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ed34: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x28ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ed38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28ed38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28ed3c: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x28ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ed40: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28ed40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28ed44: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x28ed44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28ed48: 0xc4600344  lwc1        $f0, 0x344($v1)
    ctx->pc = 0x28ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ed4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28ed4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28ed50: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28ed50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28ed54: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28ed54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28ed58: 0xc4610348  lwc1        $f1, 0x348($v1)
    ctx->pc = 0x28ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ed5c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28ed5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x28ed60: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28ed60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28ed64: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x28ed64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28ed68: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x28ed68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28ed6c: 0x0  nop
    ctx->pc = 0x28ed6cu;
    // NOP
    // 0x28ed70: 0x0  nop
    ctx->pc = 0x28ed70u;
    // NOP
    // 0x28ed74: 0x460c0004  c1          0xC0004
    ctx->pc = 0x28ed74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x28ed78: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x28ed78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ed7c: 0x0  nop
    ctx->pc = 0x28ed7cu;
    // NOP
    // 0x28ed80: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x28ED80u;
    {
        const bool branch_taken_0x28ed80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED80u;
        // 0x28ed84: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed80) {
            ctx->pc = 0x28ED94u;
            goto label_28ed94;
        }
    }
    ctx->pc = 0x28ED88u;
    // 0x28ed88: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x28ED88u;
    SET_GPR_U32(ctx, 31, 0x28ED90u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x28ED88u, 0x28ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED90u;
label_28ed90:
    // 0x28ed90: 0x8f83b234  lw          $v1, -0x4DCC($gp)
    ctx->pc = 0x28ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_28ed94:
    // 0x28ed94: 0x0  nop
    ctx->pc = 0x28ed94u;
    // NOP
    // 0x28ed98: 0x0  nop
    ctx->pc = 0x28ed98u;
    // NOP
    // 0x28ed9c: 0x4600b103  div.s       $f4, $f22, $f0
    ctx->pc = 0x28ed9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[4] = ctx->f[22] / ctx->f[0];
    // 0x28eda0: 0xc46500f0  lwc1        $f5, 0xF0($v1)
    ctx->pc = 0x28eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28eda4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eda8: 0x4605a942  mul.s       $f5, $f21, $f5
    ctx->pc = 0x28eda8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
    // 0x28edac: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x28edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28edb0: 0xc686001c  lwc1        $f6, 0x1C($s4)
    ctx->pc = 0x28edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28edb4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x28edb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28edb8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28edbc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x28edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28edc0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28edc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28edc4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28edc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28edc8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x28edc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x28edcc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x28edccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x28edd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28edd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28edd4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x28edd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x28edd8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28edd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28eddc: 0xc46100f4  lwc1        $f1, 0xF4($v1)
    ctx->pc = 0x28eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ede0: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x28ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ede4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x28ede4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28ede8: 0xc684001c  lwc1        $f4, 0x1C($s4)
    ctx->pc = 0x28ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28edec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x28edecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28edf0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28edf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28edf4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28edf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28edf8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28edf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28edfc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x28edfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28ee00: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x28ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee04: 0xc46100ec  lwc1        $f1, 0xEC($v1)
    ctx->pc = 0x28ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee08: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x28ee08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28ee0c: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x28ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ee10: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x28ee10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28ee14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28ee14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28ee18: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x28ee18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x28ee1c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x28ee1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28ee20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28EE20u;
    {
        const bool branch_taken_0x28ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE20u;
        // 0x28ee24: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee20) {
            ctx->pc = 0x28EEA0u;
            goto label_28eea0;
        }
    }
    ctx->pc = 0x28EE28u;
label_28ee28:
    // 0x28ee28: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x28ee28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28ee2c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x28ee2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x28ee30: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x28ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee34: 0xc5000ba0  lwc1        $f0, 0xBA0($t0)
    ctx->pc = 0x28ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 2976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee38: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x28ee38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28ee3c: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x28ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ee40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28ee40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28ee44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28ee44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28ee48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28ee48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28ee4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28ee4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28ee50: 0xc46200f4  lwc1        $f2, 0xF4($v1)
    ctx->pc = 0x28ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ee54: 0xc5000ba4  lwc1        $f0, 0xBA4($t0)
    ctx->pc = 0x28ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 2980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee58: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x28ee58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x28ee5c: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x28ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee60: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x28ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ee64: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x28ee64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28ee68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28ee68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28ee6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28ee6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28ee70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28ee70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28ee74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28ee74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28ee78: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x28ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ee7c: 0xc46200ec  lwc1        $f2, 0xEC($v1)
    ctx->pc = 0x28ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ee80: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x28ee80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28ee84: 0xc5000ba8  lwc1        $f0, 0xBA8($t0)
    ctx->pc = 0x28ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 2984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ee88: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x28ee88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28ee8c: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x28ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ee90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28ee90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28ee94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28ee94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28ee98: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28ee98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28ee9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28ee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28eea0:
    // 0x28eea0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28eea4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EEA4u;
    {
        const bool branch_taken_0x28eea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEA4u;
        // 0x28eea8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eea4) {
            ctx->pc = 0x28EEB8u;
            goto label_28eeb8;
        }
    }
    ctx->pc = 0x28EEACu;
    // 0x28eeac: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28eeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28eeb0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EEB0u;
    {
        const bool branch_taken_0x28eeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eeb0) {
            ctx->pc = 0x28EEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EEB0u;
            // 0x28eeb4: 0x8e6400a8  lw          $a0, 0xA8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EEC0u;
            goto label_28eec0;
        }
    }
    ctx->pc = 0x28EEB8u;
label_28eeb8:
    // 0x28eeb8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28eeb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eebc: 0x8e6400a8  lw          $a0, 0xA8($s3)
    ctx->pc = 0x28eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_28eec0:
    // 0x28eec0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28eec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eec4: 0x8e6500ac  lw          $a1, 0xAC($s3)
    ctx->pc = 0x28eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x28eec8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x28eec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eecc: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x28eeccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x28eed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28eed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28eed4: 0x8e6900b0  lw          $t1, 0xB0($s3)
    ctx->pc = 0x28eed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x28eed8: 0xc0a41b2  jal         func_2906C8
    ctx->pc = 0x28EED8u;
    SET_GPR_U32(ctx, 31, 0x28EEE0u);
    ctx->pc = 0x28EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EED8u;
    // 0x28eedc: 0x8e6a00b4  lw          $t2, 0xB4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906C8u, 0x28EED8u, 0x28EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEE0u;
label_28eee0:
    // 0x28eee0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x28eee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28eee4: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x28EEE4u;
    {
        const bool branch_taken_0x28eee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28eee4) {
            ctx->pc = 0x28EC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ec68;
        }
    }
    ctx->pc = 0x28EEECu;
    // 0x28eeec: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28eef0:
    // 0x28eef0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x28eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28eef4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28EEF4u;
    {
        const bool branch_taken_0x28eef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEF4u;
        // 0x28eef8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eef4) {
            ctx->pc = 0x28EF10u;
            goto label_28ef10;
        }
    }
    ctx->pc = 0x28EEFCu;
    // 0x28eefc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x28eefcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ef00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef04: 0xc0a37ca  jal         func_28DF28
    ctx->pc = 0x28EF04u;
    SET_GPR_U32(ctx, 31, 0x28EF0Cu);
    ctx->pc = 0x28EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF04u;
    // 0x28ef08: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DF28u, 0x28EF04u, 0x28EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF0Cu;
label_28ef0c:
    // 0x28ef0c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28ef10:
    // 0x28ef10: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28ef14: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28EF14u;
    {
        const bool branch_taken_0x28ef14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ef14) {
            ctx->pc = 0x28EF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EF14u;
            // 0x28ef18: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF54u;
            goto label_28ef54;
        }
    }
    ctx->pc = 0x28EF1Cu;
    // 0x28ef1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28ef20: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x28ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28ef24: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28EF24u;
    {
        const bool branch_taken_0x28ef24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ef24) {
            ctx->pc = 0x28EF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EF24u;
            // 0x28ef28: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF54u;
            goto label_28ef54;
        }
    }
    ctx->pc = 0x28EF2Cu;
    // 0x28ef2c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x28ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x28ef30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28EF30u;
    {
        const bool branch_taken_0x28ef30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ef30) {
            ctx->pc = 0x28EF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EF30u;
            // 0x28ef34: 0x8e650034  lw          $a1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EF54u;
            goto label_28ef54;
        }
    }
    ctx->pc = 0x28EF38u;
    // 0x28ef38: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x28ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ef3c: 0xc7808ad8  lwc1        $f0, -0x7528($gp)
    ctx->pc = 0x28ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28ef40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ef44: 0x0  nop
    ctx->pc = 0x28ef44u;
    // NOP
    // 0x28ef48: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x28EF48u;
    {
        const bool branch_taken_0x28ef48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF48u;
        // 0x28ef4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef48) {
            ctx->pc = 0x28EF64u;
            goto label_28ef64;
        }
    }
    ctx->pc = 0x28EF50u;
    // 0x28ef50: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x28ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28ef54:
    // 0x28ef54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef58: 0xc0a379a  jal         func_28DE68
    ctx->pc = 0x28EF58u;
    SET_GPR_U32(ctx, 31, 0x28EF60u);
    ctx->pc = 0x28EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF58u;
    // 0x28ef5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE68u, 0x28EF58u, 0x28EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF60u;
label_28ef60:
    // 0x28ef60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ef64:
    // 0x28ef64: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x28ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x28ef68: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x28ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
    // 0x28ef6c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x28ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x28ef70: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x28ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28ef74: 0x8ca20a94  lw          $v0, 0xA94($a1)
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2708)));
    // 0x28ef78: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x28ef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x28ef7c: 0xaca20a94  sw          $v0, 0xA94($a1)
    ctx->pc = 0x28ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2708), GPR_U32(ctx, 2));
    // 0x28ef80: 0xac830318  sw          $v1, 0x318($a0)
    ctx->pc = 0x28ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 3));
    // 0x28ef84: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28ef88: 0x2462fff2  addiu       $v0, $v1, -0xE
    ctx->pc = 0x28ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
    // 0x28ef8c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x28ef8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x28ef90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EF90u;
    {
        const bool branch_taken_0x28ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF90u;
        // 0x28ef94: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef90) {
            ctx->pc = 0x28EFA8u;
            goto label_28efa8;
        }
    }
    ctx->pc = 0x28EF98u;
    // 0x28ef98: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x28ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x28ef9c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EF9Cu;
    {
        const bool branch_taken_0x28ef9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF9Cu;
        // 0x28efa0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef9c) {
            ctx->pc = 0x28EFBCu;
            goto label_28efbc;
        }
    }
    ctx->pc = 0x28EFA4u;
    // 0x28efa4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28efa8:
    // 0x28efa8: 0xc7808adc  lwc1        $f0, -0x7524($gp)
    ctx->pc = 0x28efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28efac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28efacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x28efb0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x28efb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x28efb4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28efb8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x28efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_28efbc:
    // 0x28efbc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EFBCu;
    {
        const bool branch_taken_0x28efbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFBCu;
        // 0x28efc0: 0xdfbf0210  ld          $ra, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efbc) {
            ctx->pc = 0x28EFD0u;
            goto label_28efd0;
        }
    }
    ctx->pc = 0x28EFC4u;
    // 0x28efc4: 0xc7808ae0  lwc1        $f0, -0x7520($gp)
    ctx->pc = 0x28efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28efc8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x28efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x28efcc: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x28efccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_28efd0:
    // 0x28efd0: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x28efd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_28efd4:
    // 0x28efd4: 0xdfb701f0  ld          $s7, 0x1F0($sp)
    ctx->pc = 0x28efd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_28efd8:
    // 0x28efd8: 0xdfb601e0  ld          $s6, 0x1E0($sp)
    ctx->pc = 0x28efd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x28efdc: 0xdfb501d0  ld          $s5, 0x1D0($sp)
    ctx->pc = 0x28efdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x28efe0: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x28efe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x28efe4: 0xdfb301b0  ld          $s3, 0x1B0($sp)
    ctx->pc = 0x28efe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x28efe8: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x28efe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x28efec: 0xdfb10190  ld          $s1, 0x190($sp)
    ctx->pc = 0x28efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28eff0: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x28eff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28eff4: 0xc7b70238  lwc1        $f23, 0x238($sp)
    ctx->pc = 0x28eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28eff8: 0xc7b60230  lwc1        $f22, 0x230($sp)
    ctx->pc = 0x28eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28effc: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x28effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28f000: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x28f000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f004: 0x3e00008  jr          $ra
    ctx->pc = 0x28F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F004u;
        // 0x28f008: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F00Cu;
}
