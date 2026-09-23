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

// Function: mm_makepadinfo
// Address: 0x250300 - 0x250434
void mm_makepadinfo_0x250300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mm_makepadinfo_0x250300");
#endif

    switch (ctx->pc) {
        case 0x250368u: goto label_250368;
        case 0x2503b8u: goto label_2503b8;
        case 0x2503d4u: goto label_2503d4;
        default: break;
    }

    ctx->pc = 0x250300u;

    // 0x250300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x250300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x250304: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x250304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x250308: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x250308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25030c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25030cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250314: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x250314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x250318: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x250318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25031c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25031cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250320: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x250320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x250324: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x250324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250328: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x250328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25032c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x250330: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x250330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x250334: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x250334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250338: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x250338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25033c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x25033cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x250340: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x250340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250344: 0x8c750004  lw          $s5, 0x4($v1)
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250348: 0x2470000c  addiu       $s0, $v1, 0xC
    ctx->pc = 0x250348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x25034c: 0x1aa0002c  blez        $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x25034Cu;
    {
        const bool branch_taken_0x25034c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x250350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25034Cu;
        // 0x250350: 0xaf80b888  sw          $zero, -0x4778($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25034c) {
            ctx->pc = 0x250400u;
            goto label_250400;
        }
    }
    ctx->pc = 0x250354u;
    // 0x250354: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x250354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x250358: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x250358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25035c: 0x24574110  addiu       $s7, $v0, 0x4110
    ctx->pc = 0x25035cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16656));
    // 0x250360: 0x3c1601fc  lui         $s6, 0x1FC
    ctx->pc = 0x250360u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)508 << 16));
    // 0x250364: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x250364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_250368:
    // 0x250368: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x250368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25036c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25036Cu;
    {
        const bool branch_taken_0x25036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25036Cu;
        // 0x250370: 0x8f86b888  lw          $a2, -0x4778($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25036c) {
            ctx->pc = 0x2503E0u;
            goto label_2503e0;
        }
    }
    ctx->pc = 0x250374u;
    // 0x250374: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x250374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x250378: 0x26d14108  addiu       $s1, $s6, 0x4108
    ctx->pc = 0x250378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 16648));
    // 0x25037c: 0xd21018  mult        $v0, $a2, $s2
    ctx->pc = 0x25037cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x250380: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x250380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x250384: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x250384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x250388: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x250388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25038c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x25038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x250390: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x250390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250394: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x250394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x250398: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x250398u;
    {
        const bool branch_taken_0x250398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250398u;
        // 0x25039c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250398) {
            ctx->pc = 0x2503C8u;
            goto label_2503c8;
        }
    }
    ctx->pc = 0x2503A0u;
    // 0x2503a0: 0x240400eb  addiu       $a0, $zero, 0xEB
    ctx->pc = 0x2503a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x2503a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2503a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2503a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2503a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2503ac: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2503acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2503b0: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x2503B0u;
    SET_GPR_U32(ctx, 31, 0x2503B8u);
    ctx->pc = 0x2503B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503B0u;
    // 0x2503b4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x2503B0u, 0x2503B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503B8u;
label_2503b8:
    // 0x2503b8: 0x8f86b888  lw          $a2, -0x4778($gp)
    ctx->pc = 0x2503b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x2503bc: 0xd22018  mult        $a0, $a2, $s2
    ctx->pc = 0x2503bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2503c0: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x2503c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2503c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2503c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2503c8:
    // 0x2503c8: 0xd21018  mult        $v0, $a2, $s2
    ctx->pc = 0x2503c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2503cc: 0xc09410e  jal         func_250438
    ctx->pc = 0x2503CCu;
    SET_GPR_U32(ctx, 31, 0x2503D4u);
    ctx->pc = 0x2503D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503CCu;
    // 0x2503d0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250438u, 0x2503CCu, 0x2503D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503D4u;
label_2503d4:
    // 0x2503d4: 0x8f82b888  lw          $v0, -0x4778($gp)
    ctx->pc = 0x2503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x2503d8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2503d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2503dc: 0xaf86b888  sw          $a2, -0x4778($gp)
    ctx->pc = 0x2503dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949000), GPR_U32(ctx, 6));
label_2503e0:
    // 0x2503e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2503e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2503e4: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x2503e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2503e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2503E8u;
    {
        const bool branch_taken_0x2503e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503E8u;
        // 0x2503ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503e8) {
            ctx->pc = 0x250400u;
            goto label_250400;
        }
    }
    ctx->pc = 0x2503F0u;
    // 0x2503f0: 0x8f82b888  lw          $v0, -0x4778($gp)
    ctx->pc = 0x2503f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x2503f4: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x2503f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2503f8: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2503F8u;
    {
        const bool branch_taken_0x2503f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2503f8) {
            ctx->pc = 0x2503FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2503F8u;
            // 0x2503fc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250368;
        }
    }
    ctx->pc = 0x250400u;
label_250400:
    // 0x250400: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x250400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250404: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x250404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250408: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x250408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25040c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25040cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250410: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x250410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250414: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x250414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250418: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x250418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25041c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25041cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250424: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x250424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250428: 0xaf80a220  sw          $zero, -0x5DE0($gp)
    ctx->pc = 0x250428u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 0));
    // 0x25042c: 0x3e00008  jr          $ra
    ctx->pc = 0x25042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25042Cu;
        // 0x250430: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25042Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250434u;
}
