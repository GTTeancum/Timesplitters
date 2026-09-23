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

// Function: selectTarget
// Address: 0x2c5380 - 0x2c5e64
void selectTarget_0x2c5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("selectTarget_0x2c5380");
#endif

    switch (ctx->pc) {
        case 0x2c542cu: goto label_2c542c;
        case 0x2c546cu: goto label_2c546c;
        case 0x2c5498u: goto label_2c5498;
        case 0x2c5538u: goto label_2c5538;
        case 0x2c55f0u: goto label_2c55f0;
        case 0x2c5698u: goto label_2c5698;
        case 0x2c5728u: goto label_2c5728;
        case 0x2c57c0u: goto label_2c57c0;
        case 0x2c582cu: goto label_2c582c;
        case 0x2c5864u: goto label_2c5864;
        case 0x2c58b8u: goto label_2c58b8;
        case 0x2c5960u: goto label_2c5960;
        case 0x2c59c0u: goto label_2c59c0;
        case 0x2c59d0u: goto label_2c59d0;
        case 0x2c5a80u: goto label_2c5a80;
        case 0x2c5b08u: goto label_2c5b08;
        case 0x2c5b64u: goto label_2c5b64;
        case 0x2c5c20u: goto label_2c5c20;
        case 0x2c5c98u: goto label_2c5c98;
        case 0x2c5e2cu: goto label_2c5e2c;
        default: break;
    }

    ctx->pc = 0x2c5380u;

    // 0x2c5380: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2c5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x2c5384: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2c5384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2c5388: 0xffb301e0  sd          $s3, 0x1E0($sp)
    ctx->pc = 0x2c5388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 19));
    // 0x2c538c: 0x24c2c4a8  addiu       $v0, $a2, -0x3B58
    ctx->pc = 0x2c538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x2c5390: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x2c5390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x2c5394: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c5394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5398: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x2c5398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x2c539c: 0xffb70220  sd          $s7, 0x220($sp)
    ctx->pc = 0x2c539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 23));
    // 0x2c53a0: 0xffb60210  sd          $s6, 0x210($sp)
    ctx->pc = 0x2c53a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 22));
    // 0x2c53a4: 0xffb50200  sd          $s5, 0x200($sp)
    ctx->pc = 0x2c53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 21));
    // 0x2c53a8: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x2c53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x2c53ac: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x2c53acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x2c53b0: 0xffb101c0  sd          $s1, 0x1C0($sp)
    ctx->pc = 0x2c53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 17));
    // 0x2c53b4: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x2c53b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x2c53b8: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x2c53b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2c53bc: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x2c53bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2c53c0: 0x8e720160  lw          $s2, 0x160($s3)
    ctx->pc = 0x2c53c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x2c53c4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c53c8: 0x8e450ae4  lw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c53c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c53cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c53d0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2c53d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c53d4: 0x1040025d  beqz        $v0, . + 4 + (0x25D << 2)
    ctx->pc = 0x2C53D4u;
    {
        const bool branch_taken_0x2c53d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D4u;
        // 0x2c53d8: 0xae400ae4  sw          $zero, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53d4) {
            ctx->pc = 0x2C5D4Cu;
            goto label_2c5d4c;
        }
    }
    ctx->pc = 0x2C53DCu;
    // 0x2c53dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c53e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c53e4: 0x24429e40  addiu       $v0, $v0, -0x61C0
    ctx->pc = 0x2c53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
    // 0x2c53e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c53ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c53ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c53f0: 0x800008  jr          $a0
    ctx->pc = 0x2C53F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C53F8u: goto label_2c53f8;
            case 0x2C5458u: goto label_2c5458;
            case 0x2C5474u: goto label_2c5474;
            case 0x2C585Cu: goto label_2c585c;
            case 0x2C5A24u: goto label_2c5a24;
            case 0x2C5BC4u: goto label_2c5bc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C53F8u;
label_2c53f8:
    // 0x2c53f8: 0x8f82b4f4  lw          $v0, -0x4B0C($gp)
    ctx->pc = 0x2c53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2c53fc: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C53FCu;
    {
        const bool branch_taken_0x2c53fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53FCu;
        // 0x2c5400: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53fc) {
            ctx->pc = 0x2C5424u;
            goto label_2c5424;
        }
    }
    ctx->pc = 0x2C5404u;
    // 0x2c5404: 0x8f82b500  lw          $v0, -0x4B00($gp)
    ctx->pc = 0x2c5404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948096)));
    // 0x2c5408: 0x24632488  addiu       $v1, $v1, 0x2488
    ctx->pc = 0x2c5408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9352));
    // 0x2c540c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c540cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c5410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5414: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c5414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c5418: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c5418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c541c: 0x1000024e  b           . + 4 + (0x24E << 2)
    ctx->pc = 0x2C541Cu;
    {
        const bool branch_taken_0x2c541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C541Cu;
        // 0x2c5420: 0xae440ae4  sw          $a0, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c541c) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5424u;
label_2c5424:
    // 0x2c5424: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C5424u;
    SET_GPR_U32(ctx, 31, 0x2C542Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C5424u, 0x2C542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C542Cu;
label_2c542c:
    // 0x2c542c: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2c542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c5430: 0x2406071c  addiu       $a2, $zero, 0x71C
    ctx->pc = 0x2c5430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2c5434: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c5434u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c5438: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5438u;
    {
        const bool branch_taken_0x2c5438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5438) {
            ctx->pc = 0x2C543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5438u;
            // 0x2c543c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5440u;
            goto label_2c5440;
        }
    }
    ctx->pc = 0x2C5440u;
label_2c5440:
    // 0x2c5440: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2c5440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c5444: 0x2010  mfhi        $a0
    ctx->pc = 0x2c5444u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2c5448: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2c5448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c544c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c5450: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x2C5450u;
    {
        const bool branch_taken_0x2c5450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5450u;
        // 0x2c5454: 0x8c820180  lw          $v0, 0x180($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5450) {
            ctx->pc = 0x2C5BA4u;
            goto label_2c5ba4;
        }
    }
    ctx->pc = 0x2C5458u;
label_2c5458:
    // 0x2c5458: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2c5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c545c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5464: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C5464u;
    SET_GPR_U32(ctx, 31, 0x2C546Cu);
    ctx->pc = 0x2C5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5464u;
    // 0x2c5468: 0x8c450180  lw          $a1, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C5464u, 0x2C546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C546Cu;
label_2c546c:
    // 0x2c546c: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x2C546Cu;
    {
        const bool branch_taken_0x2c546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C546Cu;
        // 0x2c5470: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c546c) {
            ctx->pc = 0x2C5BA8u;
            goto label_2c5ba8;
        }
    }
    ctx->pc = 0x2C5474u;
label_2c5474:
    // 0x2c5474: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x2c5474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x2c5478: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C5478u;
    {
        const bool branch_taken_0x2c5478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5478u;
        // 0x2c547c: 0x8f86b4f0  lw          $a2, -0x4B10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5478) {
            ctx->pc = 0x2C54E8u;
            goto label_2c54e8;
        }
    }
    ctx->pc = 0x2C5480u;
    // 0x2c5480: 0x18c00234  blez        $a2, . + 4 + (0x234 << 2)
    ctx->pc = 0x2C5480u;
    {
        const bool branch_taken_0x2c5480 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2C5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5480u;
        // 0x2c5484: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5480) {
            ctx->pc = 0x2C5D54u;
            goto label_2c5d54;
        }
    }
    ctx->pc = 0x2C5488u;
    // 0x2c5488: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2c5488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c548c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x2c548cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x2c5490: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2c5490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2c5494: 0x0  nop
    ctx->pc = 0x2c5494u;
    // NOP
label_2c5498:
    // 0x2c5498: 0x24e223e8  addiu       $v0, $a3, 0x23E8
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 9192));
    // 0x2c549c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c54a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c54a4: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2c54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c54a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c54ac: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C54ACu;
    {
        const bool branch_taken_0x2c54ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54ACu;
        // 0x2c54b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54ac) {
            ctx->pc = 0x2C54D4u;
            goto label_2c54d4;
        }
    }
    ctx->pc = 0x2C54B4u;
    // 0x2c54b4: 0x8e430a90  lw          $v1, 0xA90($s2)
    ctx->pc = 0x2c54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c54b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c54bc: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x2c54bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x2c54c0: 0xae440ae4  sw          $a0, 0xAE4($s2)
    ctx->pc = 0x2c54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 4));
    // 0x2c54c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c54c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c54c8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2c54c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2c54cc: 0xae430a90  sw          $v1, 0xA90($s2)
    ctx->pc = 0x2c54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 3));
    // 0x2c54d0: 0x8f86b4f0  lw          $a2, -0x4B10($gp)
    ctx->pc = 0x2c54d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
label_2c54d4:
    // 0x2c54d4: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2c54d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c54d8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C54D8u;
    {
        const bool branch_taken_0x2c54d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54D8u;
        // 0x2c54dc: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54d8) {
            ctx->pc = 0x2C5498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5498;
        }
    }
    ctx->pc = 0x2C54E0u;
    // 0x2c54e0: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x2C54E0u;
    {
        const bool branch_taken_0x2c54e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54E0u;
        // 0x2c54e4: 0x8e460ae4  lw          $a2, 0xAE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54e0) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C54E8u;
label_2c54e8:
    // 0x2c54e8: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2c54ec: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c54f0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2c54f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54f4: 0x14c00054  bnez        $a2, . + 4 + (0x54 << 2)
    ctx->pc = 0x2C54F4u;
    {
        const bool branch_taken_0x2c54f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54F4u;
        // 0x2c54f8: 0xc625fd74  lwc1        $f5, -0x28C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294966644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54f4) {
            ctx->pc = 0x2C5648u;
            goto label_2c5648;
        }
    }
    ctx->pc = 0x2C54FCu;
    // 0x2c54fc: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2c54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c5500: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c5500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c5504: 0x24421ff8  addiu       $v0, $v0, 0x1FF8
    ctx->pc = 0x2c5504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x2c5508: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c5508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c550c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2c550cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2c5510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c5510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5514: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5518: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c5518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c551c: 0x1480004a  bnez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C551Cu;
    {
        const bool branch_taken_0x2c551c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C551Cu;
        // 0x2c5520: 0x8f87b4e8  lw          $a3, -0x4B18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c551c) {
            ctx->pc = 0x2C5648u;
            goto label_2c5648;
        }
    }
    ctx->pc = 0x2C5524u;
    // 0x2c5524: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2c5524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c5528: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C5528u;
    {
        const bool branch_taken_0x2c5528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5528u;
        // 0x2c552c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5528) {
            ctx->pc = 0x2C55E8u;
            goto label_2c55e8;
        }
    }
    ctx->pc = 0x2C5530u;
    // 0x2c5530: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x2c5530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x2c5534: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c5534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2c5538:
    // 0x2c5538: 0x24c32028  addiu       $v1, $a2, 0x2028
    ctx->pc = 0x2c5538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8232));
    // 0x2c553c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5544: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2c5544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c5548: 0x8ca30160  lw          $v1, 0x160($a1)
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2c554c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2c554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c5550: 0x54440022  bnel        $v0, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C5550u;
    {
        const bool branch_taken_0x2c5550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c5550) {
            ctx->pc = 0x2C5554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5550u;
            // 0x2c5554: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C55DCu;
            goto label_2c55dc;
        }
    }
    ctx->pc = 0x2C5558u;
    // 0x2c5558: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c5558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c555c: 0x5048001f  beql        $v0, $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C555Cu;
    {
        const bool branch_taken_0x2c555c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2c555c) {
            ctx->pc = 0x2C5560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C555Cu;
            // 0x2c5560: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C55DCu;
            goto label_2c55dc;
        }
    }
    ctx->pc = 0x2C5564u;
    // 0x2c5564: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2c5564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c5568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c556c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C556Cu;
    {
        const bool branch_taken_0x2c556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C556Cu;
        // 0x2c5570: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c556c) {
            ctx->pc = 0x2C55DCu;
            goto label_2c55dc;
        }
    }
    ctx->pc = 0x2C5574u;
    // 0x2c5574: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c5574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5578: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2c5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c557c: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x2c557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5580: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2c5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5584: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c5584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c5588: 0xc6640038  lwc1        $f4, 0x38($s3)
    ctx->pc = 0x2c5588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c558c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2c558cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c5590: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2c5590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5594: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5598: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2c5598u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2c559c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c559cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c55a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c55a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c55a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c55a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c55a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c55a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c55ac: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c55acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c55b0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C55B0u;
    {
        const bool branch_taken_0x2c55b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c55b0) {
            ctx->pc = 0x2C55DCu;
            goto label_2c55dc;
        }
    }
    ctx->pc = 0x2C55B8u;
    // 0x2c55b8: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c55bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c55c0: 0x3463ff7f  ori         $v1, $v1, 0xFF7F
    ctx->pc = 0x2c55c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65407);
    // 0x2c55c4: 0xae450ae4  sw          $a1, 0xAE4($s2)
    ctx->pc = 0x2c55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 5));
    // 0x2c55c8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2c55c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2c55cc: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2c55ccu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2c55d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c55d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c55d4: 0xae420a90  sw          $v0, 0xA90($s2)
    ctx->pc = 0x2c55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
    // 0x2c55d8: 0x8f87b4e8  lw          $a3, -0x4B18($gp)
    ctx->pc = 0x2c55d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
label_2c55dc:
    // 0x2c55dc: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x2c55dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c55e0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2C55E0u;
    {
        const bool branch_taken_0x2c55e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55E0u;
        // 0x2c55e4: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55e0) {
            ctx->pc = 0x2C5538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5538;
        }
    }
    ctx->pc = 0x2C55E8u;
label_2c55e8:
    // 0x2c55e8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C55E8u;
    SET_GPR_U32(ctx, 31, 0x2C55F0u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C55E8u, 0x2C55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55F0u;
label_2c55f0:
    // 0x2c55f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C55F0u;
    {
        const bool branch_taken_0x2c55f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55F0u;
        // 0x2c55f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55f0) {
            ctx->pc = 0x2C5604u;
            goto label_2c5604;
        }
    }
    ctx->pc = 0x2C55F8u;
    // 0x2c55f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c55f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c55fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C55FCu;
    {
        const bool branch_taken_0x2c55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55FCu;
        // 0x2c5600: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55fc) {
            ctx->pc = 0x2C5618u;
            goto label_2c5618;
        }
    }
    ctx->pc = 0x2C5604u;
label_2c5604:
    // 0x2c5604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c5608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c560c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c560cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5610: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c5610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c5614: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c5614u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c5618:
    // 0x2c5618: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c561c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c561cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5620: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c5620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c5624: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5628: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c5628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c562c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c562cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5630: 0x0  nop
    ctx->pc = 0x2c5630u;
    // NOP
    // 0x2c5634: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5634u;
    {
        const bool branch_taken_0x2c5634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5634u;
        // 0x2c5638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5634) {
            ctx->pc = 0x2C5644u;
            goto label_2c5644;
        }
    }
    ctx->pc = 0x2C563Cu;
    // 0x2c563c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C563Cu;
    {
        const bool branch_taken_0x2c563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C563Cu;
        // 0x2c5640: 0xae400ae4  sw          $zero, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c563c) {
            ctx->pc = 0x2C5648u;
            goto label_2c5648;
        }
    }
    ctx->pc = 0x2C5644u;
label_2c5644:
    // 0x2c5644: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c5644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2c5648:
    // 0x2c5648: 0x14c001c5  bnez        $a2, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x2C5648u;
    {
        const bool branch_taken_0x2c5648 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5648u;
        // 0x2c564c: 0xc625fd74  lwc1        $f5, -0x28C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294966644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5648) {
            ctx->pc = 0x2C5D60u;
            goto label_2c5d60;
        }
    }
    ctx->pc = 0x2C5650u;
    // 0x2c5650: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2c5650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c5654: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c5654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c5658: 0x24421ff8  addiu       $v0, $v0, 0x1FF8
    ctx->pc = 0x2c5658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x2c565c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2c565cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5660: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2c5660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2c5664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c5664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5668: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c566c: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2c566cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2c5670: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C5670u;
    {
        const bool branch_taken_0x2c5670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5670u;
        // 0x2c5674: 0x8f899f74  lw          $t1, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5670) {
            ctx->pc = 0x2C5780u;
            goto label_2c5780;
        }
    }
    ctx->pc = 0x2C5678u;
    // 0x2c5678: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x2c5678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2c567c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2c567cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5680: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2c5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2c5684: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c5684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5688: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C5688u;
    {
        const bool branch_taken_0x2c5688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5688u;
        // 0x2c568c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5688) {
            ctx->pc = 0x2C5720u;
            goto label_2c5720;
        }
    }
    ctx->pc = 0x2C5690u;
    // 0x2c5690: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c5690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c5694: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2c5698:
    // 0x2c5698: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2c5698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c569c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x2c569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c56a0: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x2c56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x2c56a4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C56A4u;
    {
        const bool branch_taken_0x2c56a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56a4) {
            ctx->pc = 0x2C56A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C56A4u;
            // 0x2c56a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5710u;
            goto label_2c5710;
        }
    }
    ctx->pc = 0x2C56ACu;
    // 0x2c56ac: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x2c56acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c56b0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2c56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c56b4: 0x546a0016  bnel        $v1, $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C56B4u;
    {
        const bool branch_taken_0x2c56b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x2c56b4) {
            ctx->pc = 0x2C56B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C56B4u;
            // 0x2c56b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5710u;
            goto label_2c5710;
        }
    }
    ctx->pc = 0x2C56BCu;
    // 0x2c56bc: 0x8c820bcc  lw          $v0, 0xBCC($a0)
    ctx->pc = 0x2c56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3020)));
    // 0x2c56c0: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c56c4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c56c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c56c8: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x2c56c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c56cc: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2c56ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c56d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c56d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c56d4: 0xc6640038  lwc1        $f4, 0x38($s3)
    ctx->pc = 0x2c56d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c56d8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2c56d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c56dc: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2c56dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c56e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c56e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c56e4: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2c56e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2c56e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c56e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c56ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c56ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c56f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c56f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c56f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c56f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c56f8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c56f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c56fc: 0x0  nop
    ctx->pc = 0x2c56fcu;
    // NOP
    // 0x2c5700: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5700u;
    {
        const bool branch_taken_0x2c5700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5700) {
            ctx->pc = 0x2C5704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5700u;
            // 0x2c5704: 0xae420ae4  sw          $v0, 0xAE4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5720u;
            goto label_2c5720;
        }
    }
    ctx->pc = 0x2C5708u;
    // 0x2c5708: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5708u;
    {
        const bool branch_taken_0x2c5708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5708) {
            ctx->pc = 0x2C5720u;
            goto label_2c5720;
        }
    }
    ctx->pc = 0x2C5710u;
label_2c5710:
    // 0x2c5710: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2c5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2c5714: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5718: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2C5718u;
    {
        const bool branch_taken_0x2c5718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5718u;
        // 0x2c571c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5718) {
            ctx->pc = 0x2C5698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5698;
        }
    }
    ctx->pc = 0x2C5720u;
label_2c5720:
    // 0x2c5720: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C5720u;
    SET_GPR_U32(ctx, 31, 0x2C5728u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C5720u, 0x2C5728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5728u;
label_2c5728:
    // 0x2c5728: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5728u;
    {
        const bool branch_taken_0x2c5728 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5728u;
        // 0x2c572c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5728) {
            ctx->pc = 0x2C573Cu;
            goto label_2c573c;
        }
    }
    ctx->pc = 0x2C5730u;
    // 0x2c5730: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c5730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5734u;
    {
        const bool branch_taken_0x2c5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5734u;
        // 0x2c5738: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5734) {
            ctx->pc = 0x2C5750u;
            goto label_2c5750;
        }
    }
    ctx->pc = 0x2C573Cu;
label_2c573c:
    // 0x2c573c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c5740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5744: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c5744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5748: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c5748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c574c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c574cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c5750:
    // 0x2c5750: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c5750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c5754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5758: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c5758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c575c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c575cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5760: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c5760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c5764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5768: 0x0  nop
    ctx->pc = 0x2c5768u;
    // NOP
    // 0x2c576c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C576Cu;
    {
        const bool branch_taken_0x2c576c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C576Cu;
        // 0x2c5770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c576c) {
            ctx->pc = 0x2C577Cu;
            goto label_2c577c;
        }
    }
    ctx->pc = 0x2C5774u;
    // 0x2c5774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5774u;
    {
        const bool branch_taken_0x2c5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5774u;
        // 0x2c5778: 0xae400ae4  sw          $zero, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5774) {
            ctx->pc = 0x2C5780u;
            goto label_2c5780;
        }
    }
    ctx->pc = 0x2C577Cu;
label_2c577c:
    // 0x2c577c: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c577cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2c5780:
    // 0x2c5780: 0x54c00178  bnel        $a2, $zero, . + 4 + (0x178 << 2)
    ctx->pc = 0x2C5780u;
    {
        const bool branch_taken_0x2c5780 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5780) {
            ctx->pc = 0x2C5784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5780u;
            // 0x2c5784: 0xae400698  sw          $zero, 0x698($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D64u;
            goto label_2c5d64;
        }
    }
    ctx->pc = 0x2C5788u;
    // 0x2c5788: 0x8f909f74  lw          $s0, -0x608C($gp)
    ctx->pc = 0x2c5788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c578c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c578cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5790: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x2c5790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2c5794: 0x1101021  addu        $v0, $t0, $s0
    ctx->pc = 0x2c5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c5798: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c579c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C579Cu;
    {
        const bool branch_taken_0x2c579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C579Cu;
        // 0x2c57a0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c579c) {
            ctx->pc = 0x2C5854u;
            goto label_2c5854;
        }
    }
    ctx->pc = 0x2C57A4u;
    // 0x2c57a4: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c57a8: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x2c57a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c57ac: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x2c57acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2c57b0: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x2c57b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c57b4: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2c57b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c57b8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2c57b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c57bc: 0x0  nop
    ctx->pc = 0x2c57bcu;
    // NOP
label_2c57c0:
    // 0x2c57c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c57c4: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C57C4u;
    {
        const bool branch_taken_0x2c57c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57C4u;
        // 0x2c57c8: 0x8f87b238  lw          $a3, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57c4) {
            ctx->pc = 0x2C583Cu;
            goto label_2c583c;
        }
    }
    ctx->pc = 0x2C57CCu;
    // 0x2c57cc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2c57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c57d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2c57d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57d4: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x2c57d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c57d8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c57dc: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C57DCu;
    {
        const bool branch_taken_0x2c57dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c57dc) {
            ctx->pc = 0x2C57E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C57DCu;
            // 0x2c57e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5840u;
            goto label_2c5840;
        }
    }
    ctx->pc = 0x2C57E4u;
    // 0x2c57e4: 0x8c820a9c  lw          $v0, 0xA9C($a0)
    ctx->pc = 0x2c57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
    // 0x2c57e8: 0x145e0007  bne         $v0, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C57E8u;
    {
        const bool branch_taken_0x2c57e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2C57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57E8u;
        // 0x2c57ec: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57e8) {
            ctx->pc = 0x2C5808u;
            goto label_2c5808;
        }
    }
    ctx->pc = 0x2C57F0u;
    // 0x2c57f0: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
    // 0x2c57f4: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C57F4u;
    {
        const bool branch_taken_0x2c57f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c57f4) {
            ctx->pc = 0x2C57F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C57F4u;
            // 0x2c57f8: 0x8c430a9c  lw          $v1, 0xA9C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C580Cu;
            goto label_2c580c;
        }
    }
    ctx->pc = 0x2C57FCu;
    // 0x2c57fc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2c57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c5800: 0x10570004  beq         $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5800u;
    {
        const bool branch_taken_0x2c5800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2C5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5800u;
        // 0x2c5804: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5800) {
            ctx->pc = 0x2C5814u;
            goto label_2c5814;
        }
    }
    ctx->pc = 0x2C5808u;
label_2c5808:
    // 0x2c5808: 0x8c430a9c  lw          $v1, 0xA9C($v0)
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
label_2c580c:
    // 0x2c580c: 0x5476000c  bnel        $v1, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x2C580Cu;
    {
        const bool branch_taken_0x2c580c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2c580c) {
            ctx->pc = 0x2C5810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C580Cu;
            // 0x2c5810: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5840u;
            goto label_2c5840;
        }
    }
    ctx->pc = 0x2C5814u;
label_2c5814:
    // 0x2c5814: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c5814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c5818: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2c5818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2c581c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C581Cu;
    {
        const bool branch_taken_0x2c581c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c581c) {
            ctx->pc = 0x2C5820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C581Cu;
            // 0x2c5820: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5840u;
            goto label_2c5840;
        }
    }
    ctx->pc = 0x2C5824u;
    // 0x2c5824: 0xc0b02e4  jal         func_2C0B90
    ctx->pc = 0x2C5824u;
    SET_GPR_U32(ctx, 31, 0x2C582Cu);
    ctx->pc = 0x2C5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5824u;
    // 0x2c5828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0B90u, 0x2C5824u, 0x2C582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C582Cu;
label_2c582c:
    // 0x2c582c: 0x14550176  bne         $v0, $s5, . + 4 + (0x176 << 2)
    ctx->pc = 0x2C582Cu;
    {
        const bool branch_taken_0x2c582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C582Cu;
        // 0x2c5830: 0xae4202ac  sw          $v0, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c582c) {
            ctx->pc = 0x2C5E08u;
            goto label_2c5e08;
        }
    }
    ctx->pc = 0x2C5834u;
    // 0x2c5834: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2c5834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c5838: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x2c5838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2c583c:
    // 0x2c583c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c583cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c5840:
    // 0x2c5840: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x2c5840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2c5844: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5848: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2C5848u;
    {
        const bool branch_taken_0x2c5848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5848u;
        // 0x2c584c: 0x26311210  addiu       $s1, $s1, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5848) {
            ctx->pc = 0x2C57C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c57c0;
        }
    }
    ctx->pc = 0x2C5850u;
    // 0x2c5850: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c5850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2c5854:
    // 0x2c5854: 0x54c00143  bnel        $a2, $zero, . + 4 + (0x143 << 2)
    ctx->pc = 0x2C5854u;
    {
        const bool branch_taken_0x2c5854 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5854) {
            ctx->pc = 0x2C5858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5854u;
            // 0x2c5858: 0xae400698  sw          $zero, 0x698($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D64u;
            goto label_2c5d64;
        }
    }
    ctx->pc = 0x2C585Cu;
label_2c585c:
    // 0x2c585c: 0xc0b1450  jal         func_2C5140
    ctx->pc = 0x2C585Cu;
    SET_GPR_U32(ctx, 31, 0x2C5864u);
    ctx->pc = 0x2C5860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C585Cu;
    // 0x2c5860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5140u, 0x2C585Cu, 0x2C5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5864u;
label_2c5864:
    // 0x2c5864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5868: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c586c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C586Cu;
    {
        const bool branch_taken_0x2c586c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C586Cu;
        // 0x2c5870: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c586c) {
            ctx->pc = 0x2C5884u;
            goto label_2c5884;
        }
    }
    ctx->pc = 0x2C5874u;
    // 0x2c5874: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c5874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c5878: 0xae420a9c  sw          $v0, 0xA9C($s2)
    ctx->pc = 0x2c5878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 2));
    // 0x2c587c: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x2C587Cu;
    {
        const bool branch_taken_0x2c587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C587Cu;
        // 0x2c5880: 0xae4402ac  sw          $a0, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c587c) {
            ctx->pc = 0x2C5E14u;
            goto label_2c5e14;
        }
    }
    ctx->pc = 0x2C5884u;
label_2c5884:
    // 0x2c5884: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x2c5884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2c5888: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c5888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c588c: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2c588cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c5890: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c5890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5894: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2c5894u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5898: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2c5898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c589c: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2c58a0: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C58A0u;
    {
        const bool branch_taken_0x2c58a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58A0u;
        // 0x2c58a4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58a0) {
            ctx->pc = 0x2C5944u;
            goto label_2c5944;
        }
    }
    ctx->pc = 0x2C58A8u;
    // 0x2c58a8: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c58a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c58ac: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2c58acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2c58b0: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c58b4: 0x0  nop
    ctx->pc = 0x2c58b4u;
    // NOP
label_2c58b8:
    // 0x2c58b8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2c58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c58bc: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2c58bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c58c0: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c58c4: 0x8ca30a94  lw          $v1, 0xA94($a1)
    ctx->pc = 0x2c58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2708)));
    // 0x2c58c8: 0x50640017  beql        $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C58C8u;
    {
        const bool branch_taken_0x2c58c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c58c8) {
            ctx->pc = 0x2C58CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C58C8u;
            // 0x2c58cc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5928u;
            goto label_2c5928;
        }
    }
    ctx->pc = 0x2C58D0u;
    // 0x2c58d0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2c58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c58d4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c58d8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C58D8u;
    {
        const bool branch_taken_0x2c58d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58D8u;
        // 0x2c58dc: 0x206102a  slt         $v0, $s0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58d8) {
            ctx->pc = 0x2C5924u;
            goto label_2c5924;
        }
    }
    ctx->pc = 0x2C58E0u;
    // 0x2c58e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C58E0u;
    {
        const bool branch_taken_0x2c58e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58E0u;
        // 0x2c58e4: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58e0) {
            ctx->pc = 0x2C5910u;
            goto label_2c5910;
        }
    }
    ctx->pc = 0x2C58E8u;
    // 0x2c58e8: 0x8f83b230  lw          $v1, -0x4DD0($gp)
    ctx->pc = 0x2c58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2c58ec: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2c58ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c58f0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c58f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2c58f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c58f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c58f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c58fc: 0xc4400370  lwc1        $f0, 0x370($v0)
    ctx->pc = 0x2c58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5904: 0x0  nop
    ctx->pc = 0x2c5904u;
    // NOP
    // 0x2c5908: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5908u;
    {
        const bool branch_taken_0x2c5908 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5908u;
        // 0x2c590c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5908) {
            ctx->pc = 0x2C5928u;
            goto label_2c5928;
        }
    }
    ctx->pc = 0x2C5910u;
label_2c5910:
    // 0x2c5910: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2c5910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2c5914: 0x8ca20bcc  lw          $v0, 0xBCC($a1)
    ctx->pc = 0x2c5914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3020)));
    // 0x2c5918: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c591c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c591cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c5920: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c5920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c5924:
    // 0x2c5924: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c5924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c5928:
    // 0x2c5928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c5928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c592c: 0x1661021  addu        $v0, $t3, $a2
    ctx->pc = 0x2c592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x2c5930: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5934: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2C5934u;
    {
        const bool branch_taken_0x2c5934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5934u;
        // 0x2c5938: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5934) {
            ctx->pc = 0x2C58B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c58b8;
        }
    }
    ctx->pc = 0x2C593Cu;
    // 0x2c593c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C593Cu;
    {
        const bool branch_taken_0x2c593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C593Cu;
        // 0x2c5940: 0xc535fd74  lwc1        $f21, -0x28C($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294966644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c593c) {
            ctx->pc = 0x2C594Cu;
            goto label_2c594c;
        }
    }
    ctx->pc = 0x2C5944u;
label_2c5944:
    // 0x2c5944: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2c5944u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2c5948: 0xc535fd74  lwc1        $f21, -0x28C($t1)
    ctx->pc = 0x2c5948u;
    { uint32_t bits = FAST_READ32(0x3AFD74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c594c:
    // 0x2c594c: 0x59400031  blezl       $t2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C594Cu;
    {
        const bool branch_taken_0x2c594c = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x2c594c) {
            ctx->pc = 0x2C5950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C594Cu;
            // 0x2c5950: 0x8e460ae4  lw          $a2, 0xAE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5A14u;
            goto label_2c5a14;
        }
    }
    ctx->pc = 0x2C5954u;
    // 0x2c5954: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2c5954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5958: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2c5958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c595c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2c595cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c5960:
    // 0x2c5960: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5964: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c5964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5968: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c5968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c596c: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x2c596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5970: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2c5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c5974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c5978: 0xc6640038  lwc1        $f4, 0x38($s3)
    ctx->pc = 0x2c5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c597c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2c597cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c5980: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2c5980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5984: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5988: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2c5988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2c598c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c598cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c5990: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c5990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c5994: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5998: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c5998u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c599c: 0x0  nop
    ctx->pc = 0x2c599cu;
    // NOP
    // 0x2c59a0: 0x0  nop
    ctx->pc = 0x2c59a0u;
    // NOP
    // 0x2c59a4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c59a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c59a8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c59a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c59ac: 0x0  nop
    ctx->pc = 0x2c59acu;
    // NOP
    // 0x2c59b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C59B0u;
    {
        const bool branch_taken_0x2c59b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c59b0) {
            ctx->pc = 0x2C59B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C59B0u;
            // 0x2c59b4: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C59C8u;
            goto label_2c59c8;
        }
    }
    ctx->pc = 0x2C59B8u;
    // 0x2c59b8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C59B8u;
    SET_GPR_U32(ctx, 31, 0x2C59C0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C59B8u, 0x2C59C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59C0u;
label_2c59c0:
    // 0x2c59c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c59c4: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2c59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
label_2c59c8:
    // 0x2c59c8: 0xc0a23da  jal         func_288F68
    ctx->pc = 0x2C59C8u;
    SET_GPR_U32(ctx, 31, 0x2C59D0u);
    ctx->pc = 0x2C59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C59C8u;
    // 0x2c59cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F68u, 0x2C59C8u, 0x2C59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59D0u;
label_2c59d0:
    // 0x2c59d0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2c59d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c59d4: 0x42180b  movn        $v1, $v0, $v0
    ctx->pc = 0x2c59d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2c59d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c59d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c59dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c59dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c59e0: 0x0  nop
    ctx->pc = 0x2c59e0u;
    // NOP
    // 0x2c59e4: 0x0  nop
    ctx->pc = 0x2c59e4u;
    // NOP
    // 0x2c59e8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2c59e8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2c59ec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c59ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c59f0: 0x0  nop
    ctx->pc = 0x2c59f0u;
    // NOP
    // 0x2c59f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C59F4u;
    {
        const bool branch_taken_0x2c59f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59F4u;
        // 0x2c59f8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59f4) {
            ctx->pc = 0x2C5A08u;
            goto label_2c5a08;
        }
    }
    ctx->pc = 0x2C59FCu;
    // 0x2c59fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5a00: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c5a00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5a04: 0xae420ae4  sw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 2));
label_2c5a08:
    // 0x2c5a08: 0x1600ffd5  bnez        $s0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2C5A08u;
    {
        const bool branch_taken_0x2c5a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A08u;
        // 0x2c5a0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a08) {
            ctx->pc = 0x2C5960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5960;
        }
    }
    ctx->pc = 0x2C5A10u;
    // 0x2c5a10: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2c5a14:
    // 0x2c5a14: 0x10c00103  beqz        $a2, . + 4 + (0x103 << 2)
    ctx->pc = 0x2C5A14u;
    {
        const bool branch_taken_0x2c5a14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A14u;
        // 0x2c5a18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a14) {
            ctx->pc = 0x2C5E24u;
            goto label_2c5e24;
        }
    }
    ctx->pc = 0x2C5A1Cu;
    // 0x2c5a1c: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2C5A1Cu;
    {
        const bool branch_taken_0x2c5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a1c) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5A24u;
label_2c5a24:
    // 0x2c5a24: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c5a28: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x2c5a2c: 0x25641ff8  addiu       $a0, $t3, 0x1FF8
    ctx->pc = 0x2c5a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 8184));
    // 0x2c5a30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5a34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5a38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5a3c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2c5a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2c5a40: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C5A40u;
    {
        const bool branch_taken_0x2c5a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A40u;
        // 0x2c5a44: 0x3c140038  lui         $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a40) {
            ctx->pc = 0x2C5BB0u;
            goto label_2c5bb0;
        }
    }
    ctx->pc = 0x2C5A48u;
    // 0x2c5a48: 0x8e822010  lw          $v0, 0x2010($s4)
    ctx->pc = 0x2c5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8208)));
    // 0x2c5a4c: 0x14a20056  bne         $a1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2C5A4Cu;
    {
        const bool branch_taken_0x2c5a4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A4Cu;
        // 0x2c5a50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a4c) {
            ctx->pc = 0x2C5BA8u;
            goto label_2c5ba8;
        }
    }
    ctx->pc = 0x2C5A54u;
    // 0x2c5a54: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2c5a54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c5a58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c5a58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a5c: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x2c5a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2c5a60: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2c5a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a64: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2c5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2c5a68: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C5A68u;
    {
        const bool branch_taken_0x2c5a68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A68u;
        // 0x2c5a6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a68) {
            ctx->pc = 0x2C5AE4u;
            goto label_2c5ae4;
        }
    }
    ctx->pc = 0x2C5A70u;
    // 0x2c5a70: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c5a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c5a74: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2c5a74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2c5a78: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2c5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c5a7c: 0x0  nop
    ctx->pc = 0x2c5a7cu;
    // NOP
label_2c5a80:
    // 0x2c5a80: 0x25641ff8  addiu       $a0, $t3, 0x1FF8
    ctx->pc = 0x2c5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 8184));
    // 0x2c5a84: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x2c5a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c5a88: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x2c5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c5a8c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2c5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c5a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5a94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5a98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5a9c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2c5a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c5aa0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5AA0u;
    {
        const bool branch_taken_0x2c5aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AA0u;
        // 0x2c5aa4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5aa0) {
            ctx->pc = 0x2C5ACCu;
            goto label_2c5acc;
        }
    }
    ctx->pc = 0x2C5AA8u;
    // 0x2c5aa8: 0x8ca20a94  lw          $v0, 0xA94($a1)
    ctx->pc = 0x2c5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2708)));
    // 0x2c5aac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c5aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c5ab0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5AB0u;
    {
        const bool branch_taken_0x2c5ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ab0) {
            ctx->pc = 0x2C5ACCu;
            goto label_2c5acc;
        }
    }
    ctx->pc = 0x2C5AB8u;
    // 0x2c5ab8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2c5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2c5abc: 0x8ca20bcc  lw          $v0, 0xBCC($a1)
    ctx->pc = 0x2c5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3020)));
    // 0x2c5ac0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2c5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c5ac4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c5ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c5ac8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c5acc:
    // 0x2c5acc: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2c5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2c5ad0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5ad4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C5AD4u;
    {
        const bool branch_taken_0x2c5ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AD4u;
        // 0x2c5ad8: 0x24031210  addiu       $v1, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ad4) {
            ctx->pc = 0x2C5A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5a80;
        }
    }
    ctx->pc = 0x2C5ADCu;
    // 0x2c5adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5ADCu;
    {
        const bool branch_taken_0x2c5adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5ADCu;
        // 0x2c5ae0: 0xc535fd78  lwc1        $f21, -0x288($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294966648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5adc) {
            ctx->pc = 0x2C5AECu;
            goto label_2c5aec;
        }
    }
    ctx->pc = 0x2C5AE4u;
label_2c5ae4:
    // 0x2c5ae4: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2c5ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2c5ae8: 0xc535fd78  lwc1        $f21, -0x288($t1)
    ctx->pc = 0x2c5ae8u;
    { uint32_t bits = FAST_READ32(0x3AFD78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c5aec:
    // 0x2c5aec: 0x5940002a  blezl       $t2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C5AECu;
    {
        const bool branch_taken_0x2c5aec = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x2c5aec) {
            ctx->pc = 0x2C5AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5AECu;
            // 0x2c5af0: 0x8e460ae4  lw          $a2, 0xAE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5B98u;
            goto label_2c5b98;
        }
    }
    ctx->pc = 0x2C5AF4u;
    // 0x2c5af4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5af8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c5af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c5afc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2c5afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b00: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2c5b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b04: 0x0  nop
    ctx->pc = 0x2c5b04u;
    // NOP
label_2c5b08:
    // 0x2c5b08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5b0c: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5b10: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c5b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5b14: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x2c5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5b18: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2c5b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5b1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c5b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c5b20: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x2c5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5b24: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2c5b24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c5b28: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c5b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5b2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5b30: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c5b30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c5b34: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c5b34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c5b38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c5b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c5b3c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5b40: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c5b40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5b44: 0x0  nop
    ctx->pc = 0x2c5b44u;
    // NOP
    // 0x2c5b48: 0x0  nop
    ctx->pc = 0x2c5b48u;
    // NOP
    // 0x2c5b4c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2c5b4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c5b50: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2c5b50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5b54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5B54u;
    {
        const bool branch_taken_0x2c5b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5b54) {
            ctx->pc = 0x2C5B64u;
            goto label_2c5b64;
        }
    }
    ctx->pc = 0x2C5B5Cu;
    // 0x2c5b5c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C5B5Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B64u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C5B5Cu, 0x2C5B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B64u;
label_2c5b64:
    // 0x2c5b64: 0x0  nop
    ctx->pc = 0x2c5b64u;
    // NOP
    // 0x2c5b68: 0x0  nop
    ctx->pc = 0x2c5b68u;
    // NOP
    // 0x2c5b6c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2c5b6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2c5b70: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2c5b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5b74: 0x0  nop
    ctx->pc = 0x2c5b74u;
    // NOP
    // 0x2c5b78: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5B78u;
    {
        const bool branch_taken_0x2c5b78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B78u;
        // 0x2c5b7c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b78) {
            ctx->pc = 0x2C5B8Cu;
            goto label_2c5b8c;
        }
    }
    ctx->pc = 0x2C5B80u;
    // 0x2c5b80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5b84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c5b84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5b88: 0xae420ae4  sw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 2));
label_2c5b8c:
    // 0x2c5b8c: 0x1600ffde  bnez        $s0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2C5B8Cu;
    {
        const bool branch_taken_0x2c5b8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B8Cu;
        // 0x2c5b90: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b8c) {
            ctx->pc = 0x2C5B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5b08;
        }
    }
    ctx->pc = 0x2C5B94u;
    // 0x2c5b94: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c5b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2c5b98:
    // 0x2c5b98: 0x54c00072  bnel        $a2, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x2C5B98u;
    {
        const bool branch_taken_0x2c5b98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5b98) {
            ctx->pc = 0x2C5B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5B98u;
            // 0x2c5b9c: 0xae400698  sw          $zero, 0x698($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D64u;
            goto label_2c5d64;
        }
    }
    ctx->pc = 0x2C5BA0u;
    // 0x2c5ba0: 0x8e822010  lw          $v0, 0x2010($s4)
    ctx->pc = 0x2c5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8208)));
label_2c5ba4:
    // 0x2c5ba4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c5ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5ba8:
    // 0x2c5ba8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2C5BA8u;
    {
        const bool branch_taken_0x2c5ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BA8u;
        // 0x2c5bac: 0xae420ae4  sw          $v0, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ba8) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5BB0u;
label_2c5bb0:
    // 0x2c5bb0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c5bb4: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x2c5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382010u));
    // 0x2c5bb8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2c5bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bbc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2C5BBCu;
    {
        const bool branch_taken_0x2c5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BBCu;
        // 0x2c5bc0: 0xae430ae4  sw          $v1, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bbc) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5BC4u;
label_2c5bc4:
    // 0x2c5bc4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c5bc8: 0x8c44202c  lw          $a0, 0x202C($v0)
    ctx->pc = 0x2c5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38202Cu));
    // 0x2c5bcc: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x2c5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c5bd0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2c5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2c5bd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2c5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c5bd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5BD8u;
    {
        const bool branch_taken_0x2c5bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BD8u;
        // 0x2c5bdc: 0x8f8ab59c  lw          $t2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bd8) {
            ctx->pc = 0x2C5C04u;
            goto label_2c5c04;
        }
    }
    ctx->pc = 0x2C5BE0u;
    // 0x2c5be0: 0x8e420a90  lw          $v0, 0xA90($s2)
    ctx->pc = 0x2c5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2704)));
    // 0x2c5be4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c5be8: 0x3463ff7f  ori         $v1, $v1, 0xFF7F
    ctx->pc = 0x2c5be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65407);
    // 0x2c5bec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c5becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bf0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2c5bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2c5bf4: 0xae440ae4  sw          $a0, 0xAE4($s2)
    ctx->pc = 0x2c5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 4));
    // 0x2c5bf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c5bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c5bfc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2C5BFCu;
    {
        const bool branch_taken_0x2c5bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BFCu;
        // 0x2c5c00: 0xae420a90  sw          $v0, 0xA90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bfc) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5C04u;
label_2c5c04:
    // 0x2c5c04: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2c5c04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c5c08: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x2c5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2c5c0c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5C0Cu;
    {
        const bool branch_taken_0x2c5c0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C0Cu;
        // 0x2c5c10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c0c) {
            ctx->pc = 0x2C5C4Cu;
            goto label_2c5c4c;
        }
    }
    ctx->pc = 0x2C5C14u;
    // 0x2c5c14: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c5c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c5c18: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c5c1c: 0x0  nop
    ctx->pc = 0x2c5c1cu;
    // NOP
label_2c5c20:
    // 0x2c5c20: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2c5c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c5c24: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2c5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c5c28: 0x8c4301e4  lw          $v1, 0x1E4($v0)
    ctx->pc = 0x2c5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x2c5c2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5C2Cu;
    {
        const bool branch_taken_0x2c5c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C2Cu;
        // 0x2c5c30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c2c) {
            ctx->pc = 0x2C5C3Cu;
            goto label_2c5c3c;
        }
    }
    ctx->pc = 0x2C5C34u;
    // 0x2c5c34: 0x8c420bcc  lw          $v0, 0xBCC($v0)
    ctx->pc = 0x2c5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x2c5c38: 0xae420ae4  sw          $v0, 0xAE4($s2)
    ctx->pc = 0x2c5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 2));
label_2c5c3c:
    // 0x2c5c3c: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x2c5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2c5c40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5c44: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C5C44u;
    {
        const bool branch_taken_0x2c5c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C44u;
        // 0x2c5c48: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c44) {
            ctx->pc = 0x2C5C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5c20;
        }
    }
    ctx->pc = 0x2C5C4Cu;
label_2c5c4c:
    // 0x2c5c4c: 0x24c3c4a8  addiu       $v1, $a2, -0x3B58
    ctx->pc = 0x2c5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952104));
    // 0x2c5c50: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2c5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2c5c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c5c58: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C5C58u;
    {
        const bool branch_taken_0x2c5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C58u;
        // 0x2c5c5c: 0x8e460ae4  lw          $a2, 0xAE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c58) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5C60u;
    // 0x2c5c60: 0x10c0006f  beqz        $a2, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C5C60u;
    {
        const bool branch_taken_0x2c5c60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C60u;
        // 0x2c5c64: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c60) {
            ctx->pc = 0x2C5E20u;
            goto label_2c5e20;
        }
    }
    ctx->pc = 0x2C5C68u;
    // 0x2c5c68: 0x8cc30160  lw          $v1, 0x160($a2)
    ctx->pc = 0x2c5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x2c5c6c: 0x8e4b0018  lw          $t3, 0x18($s2)
    ctx->pc = 0x2c5c6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c5c70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2c5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c5c74: 0x144b0038  bne         $v0, $t3, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C5C74u;
    {
        const bool branch_taken_0x2c5c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x2C5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C74u;
        // 0x2c5c78: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c74) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5C7Cu;
    // 0x2c5c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c5c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c80: 0xc445fd74  lwc1        $f5, -0x28C($v0)
    ctx->pc = 0x2c5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c5c84: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x2c5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2c5c88: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C5C88u;
    {
        const bool branch_taken_0x2c5c88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C88u;
        // 0x2c5c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c88) {
            ctx->pc = 0x2C5D38u;
            goto label_2c5d38;
        }
    }
    ctx->pc = 0x2C5C90u;
    // 0x2c5c90: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c5c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c5c94: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2c5c98:
    // 0x2c5c98: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2c5c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c5c9c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x2c5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c5ca0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c5ca4: 0x506b0020  beql        $v1, $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C5CA4u;
    {
        const bool branch_taken_0x2c5ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c5ca4) {
            ctx->pc = 0x2C5CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CA4u;
            // 0x2c5ca8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D28u;
            goto label_2c5d28;
        }
    }
    ctx->pc = 0x2C5CACu;
    // 0x2c5cac: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x2c5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2c5cb0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2c5cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2c5cb4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C5CB4u;
    {
        const bool branch_taken_0x2c5cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cb4) {
            ctx->pc = 0x2C5CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CB4u;
            // 0x2c5cb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D28u;
            goto label_2c5d28;
        }
    }
    ctx->pc = 0x2C5CBCu;
    // 0x2c5cbc: 0x8c850ae4  lw          $a1, 0xAE4($a0)
    ctx->pc = 0x2c5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2788)));
    // 0x2c5cc0: 0x54ac0019  bnel        $a1, $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C5CC0u;
    {
        const bool branch_taken_0x2c5cc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        if (branch_taken_0x2c5cc0) {
            ctx->pc = 0x2C5CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CC0u;
            // 0x2c5cc4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D28u;
            goto label_2c5d28;
        }
    }
    ctx->pc = 0x2C5CC8u;
    // 0x2c5cc8: 0x8c830a9c  lw          $v1, 0xA9C($a0)
    ctx->pc = 0x2c5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
    // 0x2c5ccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5cd0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5CD0u;
    {
        const bool branch_taken_0x2c5cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CD0u;
        // 0x2c5cd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cd0) {
            ctx->pc = 0x2C5D28u;
            goto label_2c5d28;
        }
    }
    ctx->pc = 0x2C5CD8u;
    // 0x2c5cd8: 0x8c820bcc  lw          $v0, 0xBCC($a0)
    ctx->pc = 0x2c5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3020)));
    // 0x2c5cdc: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2c5cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5ce0: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x2c5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5ce4: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2c5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5ce8: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x2c5ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5cec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c5cecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c5cf0: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2c5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5cf4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c5cf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c5cf8: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x2c5cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5cfc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5d00: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c5d00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c5d04: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c5d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c5d08: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c5d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c5d0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5d10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5d14: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2c5d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5d18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5D18u;
    {
        const bool branch_taken_0x2c5d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5d18) {
            ctx->pc = 0x2C5D28u;
            goto label_2c5d28;
        }
    }
    ctx->pc = 0x2C5D20u;
    // 0x2c5d20: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2c5d20u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5d24: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c5d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d28:
    // 0x2c5d28: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x2c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2c5d2c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c5d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5d30: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C5D30u;
    {
        const bool branch_taken_0x2c5d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D30u;
        // 0x2c5d34: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d30) {
            ctx->pc = 0x2C5C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5c98;
        }
    }
    ctx->pc = 0x2C5D38u;
label_2c5d38:
    // 0x2c5d38: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5D38u;
    {
        const bool branch_taken_0x2c5d38 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d38) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5D40u;
    // 0x2c5d40: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c5d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5D44u;
    {
        const bool branch_taken_0x2c5d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D44u;
        // 0x2c5d48: 0xae480ae4  sw          $t0, 0xAE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2788), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d44) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5D4Cu;
label_2c5d4c:
    // 0x2c5d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5D4Cu;
    {
        const bool branch_taken_0x2c5d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D4Cu;
        // 0x2c5d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d4c) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5D54u;
label_2c5d54:
    // 0x2c5d54: 0x8e460ae4  lw          $a2, 0xAE4($s2)
    ctx->pc = 0x2c5d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2788)));
label_2c5d58:
    // 0x2c5d58: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C5D58u;
    {
        const bool branch_taken_0x2c5d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D58u;
        // 0x2c5d5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d58) {
            ctx->pc = 0x2C5E24u;
            goto label_2c5e24;
        }
    }
    ctx->pc = 0x2C5D60u;
label_2c5d60:
    // 0x2c5d60: 0xae400698  sw          $zero, 0x698($s2)
    ctx->pc = 0x2c5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 0));
label_2c5d64:
    // 0x2c5d64: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c5d68: 0xae400a84  sw          $zero, 0xA84($s2)
    ctx->pc = 0x2c5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2692), GPR_U32(ctx, 0));
    // 0x2c5d6c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c5d70: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5D70u;
    {
        const bool branch_taken_0x2c5d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D70u;
        // 0x2c5d74: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d70) {
            ctx->pc = 0x2C5DACu;
            goto label_2c5dac;
        }
    }
    ctx->pc = 0x2C5D78u;
    // 0x2c5d78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5D78u;
    {
        const bool branch_taken_0x2c5d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D78u;
        // 0x2c5d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d78) {
            ctx->pc = 0x2C5D90u;
            goto label_2c5d90;
        }
    }
    ctx->pc = 0x2C5D80u;
    // 0x2c5d80: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5D80u;
    {
        const bool branch_taken_0x2c5d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D80u;
        // 0x2c5d84: 0x8f82b500  lw          $v0, -0x4B00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d80) {
            ctx->pc = 0x2C5DE4u;
            goto label_2c5de4;
        }
    }
    ctx->pc = 0x2C5D88u;
    // 0x2c5d88: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5D88u;
    {
        const bool branch_taken_0x2c5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D88u;
        // 0x2c5d8c: 0x8e430a9c  lw          $v1, 0xA9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d88) {
            ctx->pc = 0x2C5E00u;
            goto label_2c5e00;
        }
    }
    ctx->pc = 0x2C5D90u;
label_2c5d90:
    // 0x2c5d90: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c5d94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5D94u;
    {
        const bool branch_taken_0x2c5d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D94u;
        // 0x2c5d98: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d94) {
            ctx->pc = 0x2C5DC8u;
            goto label_2c5dc8;
        }
    }
    ctx->pc = 0x2C5D9Cu;
    // 0x2c5d9c: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5D9Cu;
    {
        const bool branch_taken_0x2c5d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5d9c) {
            ctx->pc = 0x2C5DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5D9Cu;
            // 0x2c5da0: 0x8cc20160  lw          $v0, 0x160($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DD8u;
            goto label_2c5dd8;
        }
    }
    ctx->pc = 0x2C5DA4u;
    // 0x2c5da4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C5DA4u;
    {
        const bool branch_taken_0x2c5da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DA4u;
        // 0x2c5da8: 0x8e430a9c  lw          $v1, 0xA9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5da4) {
            ctx->pc = 0x2C5E00u;
            goto label_2c5e00;
        }
    }
    ctx->pc = 0x2C5DACu;
label_2c5dac:
    // 0x2c5dac: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x2c5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x2c5db0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2c5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2c5db4: 0x8c4402a8  lw          $a0, 0x2A8($v0)
    ctx->pc = 0x2c5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x2c5db8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c5dbc: 0xae4402ac  sw          $a0, 0x2AC($s2)
    ctx->pc = 0x2c5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 4));
    // 0x2c5dc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C5DC0u;
    {
        const bool branch_taken_0x2c5dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DC0u;
        // 0x2c5dc4: 0x2c630002  sltiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dc0) {
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5DC8u;
label_2c5dc8:
    // 0x2c5dc8: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x2c5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x2c5dcc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c5dd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C5DD0u;
    {
        const bool branch_taken_0x2c5dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DD0u;
        // 0x2c5dd4: 0xae4302ac  sw          $v1, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dd0) {
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5DD8u;
label_2c5dd8:
    // 0x2c5dd8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2c5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2c5ddc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5DDCu;
    {
        const bool branch_taken_0x2c5ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DDCu;
        // 0x2c5de0: 0xae4302ac  sw          $v1, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ddc) {
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5DE4u;
label_2c5de4:
    // 0x2c5de4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c5de8: 0x24632488  addiu       $v1, $v1, 0x2488
    ctx->pc = 0x2c5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9352));
    // 0x2c5dec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c5decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c5df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5df4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5df8: 0xae4402ac  sw          $a0, 0x2AC($s2)
    ctx->pc = 0x2c5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 4));
label_2c5dfc:
    // 0x2c5dfc: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
label_2c5e00:
    // 0x2c5e00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5E00u;
    {
        const bool branch_taken_0x2c5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E00u;
        // 0x2c5e04: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e00) {
            ctx->pc = 0x2C5E10u;
            goto label_2c5e10;
        }
    }
    ctx->pc = 0x2C5E08u;
label_2c5e08:
    // 0x2c5e08: 0x8e430a9c  lw          $v1, 0xA9C($s2)
    ctx->pc = 0x2c5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x2c5e0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c5e10:
    // 0x2c5e10: 0xae420a9c  sw          $v0, 0xA9C($s2)
    ctx->pc = 0x2c5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 2));
label_2c5e14:
    // 0x2c5e14: 0xae430aa0  sw          $v1, 0xAA0($s2)
    ctx->pc = 0x2c5e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 3));
    // 0x2c5e18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5E18u;
    {
        const bool branch_taken_0x2c5e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E18u;
        // 0x2c5e1c: 0xae400b4c  sw          $zero, 0xB4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e18) {
            ctx->pc = 0x2C5E2Cu;
            goto label_2c5e2c;
        }
    }
    ctx->pc = 0x2C5E20u;
label_2c5e20:
    // 0x2c5e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c5e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e24:
    // 0x2c5e24: 0xc0b20be  jal         func_2C82F8
    ctx->pc = 0x2C5E24u;
    SET_GPR_U32(ctx, 31, 0x2C5E2Cu);
    ctx->pc = 0x2C5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E24u;
    // 0x2c5e28: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C82F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C82F8u, 0x2C5E24u, 0x2C5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E2Cu;
label_2c5e2c:
    // 0x2c5e2c: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x2c5e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c5e30: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x2c5e30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c5e34: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x2c5e34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c5e38: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x2c5e38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c5e3c: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x2c5e3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c5e40: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x2c5e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c5e44: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x2c5e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c5e48: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x2c5e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c5e4c: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x2c5e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c5e50: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x2c5e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2c5e54: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x2c5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5e58: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x2c5e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E5Cu;
        // 0x2c5e60: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5E64u;
}
