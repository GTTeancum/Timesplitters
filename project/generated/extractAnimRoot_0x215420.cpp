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

// Function: extractAnimRoot
// Address: 0x215420 - 0x21558c
void extractAnimRoot_0x215420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("extractAnimRoot_0x215420");
#endif

    ctx->pc = 0x215420u;

    // 0x215420: 0x8c8c0020  lw          $t4, 0x20($a0)
    ctx->pc = 0x215420u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x215424: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x215428: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x21542c: 0x2529ab60  addiu       $t1, $t1, -0x54A0
    ctx->pc = 0x21542cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945632));
    // 0x215430: 0x8d820060  lw          $v0, 0x60($t4)
    ctx->pc = 0x215430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x215434: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x215434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215438: 0xc4620b18  lwc1        $f2, 0xB18($v1)
    ctx->pc = 0x215438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21543c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x21543cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215448: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x215448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21544c: 0x1103000f  beq         $t0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21544Cu;
    {
        const bool branch_taken_0x21544c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x215450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21544Cu;
        // 0x215450: 0x8c490000  lw          $t1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21544c) {
            ctx->pc = 0x21548Cu;
            goto label_21548c;
        }
    }
    ctx->pc = 0x215454u;
    // 0x215454: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x215454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x215458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215458u;
    {
        const bool branch_taken_0x215458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215458u;
        // 0x21545c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215458) {
            ctx->pc = 0x215470u;
            goto label_215470;
        }
    }
    ctx->pc = 0x215460u;
    // 0x215460: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215460u;
    {
        const bool branch_taken_0x215460 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x215464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215460u;
        // 0x215464: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215460) {
            ctx->pc = 0x215480u;
            goto label_215480;
        }
    }
    ctx->pc = 0x215468u;
    // 0x215468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x215468u;
    {
        const bool branch_taken_0x215468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215468) {
            ctx->pc = 0x21548Cu;
            goto label_21548c;
        }
    }
    ctx->pc = 0x215470u;
label_215470:
    // 0x215470: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215470u;
    {
        const bool branch_taken_0x215470 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x215474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215470u;
        // 0x215474: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215470) {
            ctx->pc = 0x215488u;
            goto label_215488;
        }
    }
    ctx->pc = 0x215478u;
    // 0x215478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215478u;
    {
        const bool branch_taken_0x215478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215478) {
            ctx->pc = 0x21548Cu;
            goto label_21548c;
        }
    }
    ctx->pc = 0x215480u;
label_215480:
    // 0x215480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215480u;
    {
        const bool branch_taken_0x215480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215480u;
        // 0x215484: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215480) {
            ctx->pc = 0x21548Cu;
            goto label_21548c;
        }
    }
    ctx->pc = 0x215488u;
label_215488:
    // 0x215488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x215488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21548c:
    // 0x21548c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x21548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215494: 0x8d250020  lw          $a1, 0x20($t1)
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x215498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21549c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2154a0: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2154A0u;
    {
        const bool branch_taken_0x2154a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154A0u;
        // 0x2154a4: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154a0) {
            ctx->pc = 0x2154DCu;
            goto label_2154dc;
        }
    }
    ctx->pc = 0x2154A8u;
    // 0x2154a8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2154a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2154ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2154ACu;
    {
        const bool branch_taken_0x2154ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ACu;
        // 0x2154b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ac) {
            ctx->pc = 0x2154C4u;
            goto label_2154c4;
        }
    }
    ctx->pc = 0x2154B4u;
    // 0x2154b4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2154B4u;
    {
        const bool branch_taken_0x2154b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2154b4) {
            ctx->pc = 0x2154B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154B4u;
            // 0x2154b8: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2154E0u;
            goto label_2154e0;
        }
    }
    ctx->pc = 0x2154BCu;
    // 0x2154bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2154BCu;
    {
        const bool branch_taken_0x2154bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154BCu;
        // 0x2154c0: 0x8d820058  lw          $v0, 0x58($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154bc) {
            ctx->pc = 0x215558u;
            goto label_215558;
        }
    }
    ctx->pc = 0x2154C4u;
label_2154c4:
    // 0x2154c4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2154C4u;
    {
        const bool branch_taken_0x2154c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C4u;
        // 0x2154c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154c4) {
            ctx->pc = 0x2154F8u;
            goto label_2154f8;
        }
    }
    ctx->pc = 0x2154CCu;
    // 0x2154cc: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2154CCu;
    {
        const bool branch_taken_0x2154cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2154cc) {
            ctx->pc = 0x2154D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2154CCu;
            // 0x2154d0: 0x8d220004  lw          $v0, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215528u;
            goto label_215528;
        }
    }
    ctx->pc = 0x2154D4u;
    // 0x2154d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2154D4u;
    {
        const bool branch_taken_0x2154d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154D4u;
        // 0x2154d8: 0x8d820058  lw          $v0, 0x58($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154d4) {
            ctx->pc = 0x215558u;
            goto label_215558;
        }
    }
    ctx->pc = 0x2154DCu;
label_2154dc:
    // 0x2154dc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2154dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2154e0:
    // 0x2154e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2154e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2154e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2154e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2154e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2154e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2154ec: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2154ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2154f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2154F0u;
    {
        const bool branch_taken_0x2154f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F0u;
        // 0x2154f4: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f0) {
            ctx->pc = 0x215554u;
            goto label_215554;
        }
    }
    ctx->pc = 0x2154F8u;
label_2154f8:
    // 0x2154f8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2154f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2154fc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2154fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x215500: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x215500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215504: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x215504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x215508: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x215508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x21550c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x21550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215510: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x215510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215514: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x215518: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x215518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x21551c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x215520: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x215520u;
    {
        const bool branch_taken_0x215520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215520u;
        // 0x215524: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215520) {
            ctx->pc = 0x215550u;
            goto label_215550;
        }
    }
    ctx->pc = 0x215528u;
label_215528:
    // 0x215528: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x21552c: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x21552cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x215530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x215534: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x215534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x215538: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21553c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x21553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215540: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x215544: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x215544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x215548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21554c: 0xc460ffe4  lwc1        $f0, -0x1C($v1)
    ctx->pc = 0x21554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215550:
    // 0x215550: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x215550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_215554:
    // 0x215554: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x215554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
label_215558:
    // 0x215558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x215558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21555c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x215560: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x215560) {
            ctx->pc = 0x215564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215560u;
            // 0x215564: 0xc5400000  lwc1        $f0, 0x0($t2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x215568u;
    // 0x215568: 0xc780804c  lwc1        $f0, -0x7FB4($gp)
    ctx->pc = 0x215568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21556c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x21556cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x215570: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x215570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215574:
    // 0x215574: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x215574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x215578: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x215578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x21557c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x21557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215580: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x215580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x215584: 0x3e00008  jr          $ra
    ctx->pc = 0x215584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215584u;
        // 0x215588: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21558Cu;
}
