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

// Function: IsFileInDir
// Address: 0x2b37b0 - 0x2b391c
void IsFileInDir_0x2b37b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsFileInDir_0x2b37b0");
#endif

    switch (ctx->pc) {
        case 0x2b3800u: goto label_2b3800;
        case 0x2b3828u: goto label_2b3828;
        case 0x2b3840u: goto label_2b3840;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3888u: goto label_2b3888;
        case 0x2b3898u: goto label_2b3898;
        default: break;
    }

    ctx->pc = 0x2b37b0u;

    // 0x2b37b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b37b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b37b4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b37b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b37b8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b37b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b37bc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2b37bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b37c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b37c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b37c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b37c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b37c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b37c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b37cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b37ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b37d0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b37d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b37d4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b37d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b37d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b37d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b37dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b37dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b37e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b37e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b37e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b37e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b37e8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2b37e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b37ec: 0x18a0003e  blez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B37ECu;
    {
        const bool branch_taken_0x2b37ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37ECu;
        // 0x2b37f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37ec) {
            ctx->pc = 0x2B38E8u;
            goto label_2b38e8;
        }
    }
    ctx->pc = 0x2B37F4u;
    // 0x2b37f4: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x2b37f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x2b37f8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2b37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b37fc: 0x0  nop
    ctx->pc = 0x2b37fcu;
    // NOP
label_2b3800:
    // 0x2b3800: 0x27c4fdc0  addiu       $a0, $fp, -0x240
    ctx->pc = 0x2b3800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966720));
    // 0x2b3804: 0x749821  addu        $s3, $v1, $s4
    ctx->pc = 0x2b3804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2b3808: 0x2662fff0  addiu       $v0, $s3, -0x10
    ctx->pc = 0x2b3808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x2b380c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x2b380cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2b3810: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2b3810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b3814: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2b3814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3818: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2B3818u;
    {
        const bool branch_taken_0x2b3818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3818u;
        // 0x2b381c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3818) {
            ctx->pc = 0x2B38D8u;
            goto label_2b38d8;
        }
    }
    ctx->pc = 0x2B3820u;
    // 0x2b3820: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2b3820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3824: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x2b3824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_2b3828:
    // 0x2b3828: 0x26450021  addiu       $a1, $s2, 0x21
    ctx->pc = 0x2b3828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
    // 0x2b382c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b3830: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x2b3830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b3834: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2b3834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2b3838: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3838u;
    {
        const bool branch_taken_0x2b3838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3838u;
        // 0x2b383c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3838) {
            ctx->pc = 0x2B3860u;
            goto label_2b3860;
        }
    }
    ctx->pc = 0x2B3840u;
label_2b3840:
    // 0x2b3840: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x2b3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2b3844: 0x3a72021  addu        $a0, $sp, $a3
    ctx->pc = 0x2b3844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2b3848: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b3848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b384c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b3850: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b3850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b3854: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2b3854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2b3858: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B3858u;
    {
        const bool branch_taken_0x2b3858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3858u;
        // 0x2b385c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3858) {
            ctx->pc = 0x2B3840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3840;
        }
    }
    ctx->pc = 0x2B3860u;
label_2b3860:
    // 0x2b3860: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2b3864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b3864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3868: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2b3868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b386c: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x2B386Cu;
    SET_GPR_U32(ctx, 31, 0x2B3874u);
    ctx->pc = 0x2B3870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B386Cu;
    // 0x2b3870: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x2B386Cu, 0x2B3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3874u;
label_2b3874:
    // 0x2b3874: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3874u;
    {
        const bool branch_taken_0x2b3874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3874) {
            ctx->pc = 0x2B3878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3874u;
            // 0x2b3878: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B38BCu;
            goto label_2b38bc;
        }
    }
    ctx->pc = 0x2B387Cu;
    // 0x2b387c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3880: 0xc0ace48  jal         func_2B3920
    ctx->pc = 0x2B3880u;
    SET_GPR_U32(ctx, 31, 0x2B3888u);
    ctx->pc = 0x2B3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3880u;
    // 0x2b3884: 0x26450002  addiu       $a1, $s2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3920u, 0x2B3880u, 0x2B3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3888u;
label_2b3888:
    // 0x2b3888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b388c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3890: 0xc0ace48  jal         func_2B3920
    ctx->pc = 0x2B3890u;
    SET_GPR_U32(ctx, 31, 0x2B3898u);
    ctx->pc = 0x2B3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3890u;
    // 0x2b3894: 0x2645000a  addiu       $a1, $s2, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3920u, 0x2B3890u, 0x2B3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3898u;
label_2b3898:
    // 0x2b3898: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2b3898u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2b389c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2b389cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2b38a0: 0x21d78  dsll        $v1, $v0, 21
    ctx->pc = 0x2b38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 21);
    // 0x2b38a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b38a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b38a8: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x2b38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x2b38ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b38acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b38b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b38b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b38b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B38B4u;
    {
        const bool branch_taken_0x2b38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38B4u;
        // 0x2b38b8: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38b4) {
            ctx->pc = 0x2B38ECu;
            goto label_2b38ec;
        }
    }
    ctx->pc = 0x2B38BCu;
label_2b38bc:
    // 0x2b38bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2b38bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b38c0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2b38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2b38c4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2b38c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38c8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b38c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b38cc: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2B38CCu;
    {
        const bool branch_taken_0x2b38cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b38cc) {
            ctx->pc = 0x2B38D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B38CCu;
            // 0x2b38d0: 0x92030020  lbu         $v1, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3828;
        }
    }
    ctx->pc = 0x2B38D4u;
    // 0x2b38d4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2b38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b38d8:
    // 0x2b38d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b38d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b38dc: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x2b38dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2b38e0: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2B38E0u;
    {
        const bool branch_taken_0x2b38e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b38e0) {
            ctx->pc = 0x2B38E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B38E0u;
            // 0x2b38e4: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3800;
        }
    }
    ctx->pc = 0x2B38E8u;
label_2b38e8:
    // 0x2b38e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b38e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b38ec:
    // 0x2b38ec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b38ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b38f0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b38f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b38f4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b38f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b38f8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b38f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b38fc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b38fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3900: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b3900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3904: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b3904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b3908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b390c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b390cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3914: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3914u;
        // 0x2b3918: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B391Cu;
}
