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

// Function: debugPrintStateInfo
// Address: 0x2cc778 - 0x2cc954
void debugPrintStateInfo_0x2cc778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugPrintStateInfo_0x2cc778");
#endif

    switch (ctx->pc) {
        case 0x2cc7b4u: goto label_2cc7b4;
        case 0x2cc7d8u: goto label_2cc7d8;
        case 0x2cc82cu: goto label_2cc82c;
        case 0x2cc844u: goto label_2cc844;
        case 0x2cc84cu: goto label_2cc84c;
        case 0x2cc858u: goto label_2cc858;
        case 0x2cc864u: goto label_2cc864;
        case 0x2cc870u: goto label_2cc870;
        case 0x2cc890u: goto label_2cc890;
        case 0x2cc8b0u: goto label_2cc8b0;
        case 0x2cc8e8u: goto label_2cc8e8;
        case 0x2cc900u: goto label_2cc900;
        case 0x2cc924u: goto label_2cc924;
        default: break;
    }

    ctx->pc = 0x2cc778u;

    // 0x2cc778: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2cc778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2cc77c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cc77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc780: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2cc780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x2cc784: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x2cc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x2cc788: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2cc788u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc78c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2cc78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2cc790: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2cc790u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc794: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x2cc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x2cc798: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2cc798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2cc79c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2cc79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2cc7a0: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2cc7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2cc7a4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2cc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2cc7a8: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2cc7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2cc7ac: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2CC7ACu;
    SET_GPR_U32(ctx, 31, 0x2CC7B4u);
    ctx->pc = 0x2CC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7ACu;
    // 0x2cc7b0: 0xffb00080  sd          $s0, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2CC7ACu, 0x2CC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7B4u;
label_2cc7b4:
    // 0x2cc7b4: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2cc7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc7b8: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x2cc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2cc7bc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2cc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2cc7c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2cc7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cc7c4: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2CC7C4u;
    {
        const bool branch_taken_0x2cc7c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7C4u;
        // 0x2cc7c8: 0x27b70070  addiu       $s7, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7c4) {
            ctx->pc = 0x2CC91Cu;
            goto label_2cc91c;
        }
    }
    ctx->pc = 0x2CC7CCu;
    // 0x2cc7cc: 0x27b60074  addiu       $s6, $sp, 0x74
    ctx->pc = 0x2cc7ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2cc7d0: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2cc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cc7d4: 0x0  nop
    ctx->pc = 0x2cc7d4u;
    // NOP
label_2cc7d8:
    // 0x2cc7d8: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2cc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cc7dc: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2cc7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cc7e0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2cc7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc7e4: 0x8e630a9c  lw          $v1, 0xA9C($s3)
    ctx->pc = 0x2cc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2716)));
    // 0x2cc7e8: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CC7E8u;
    {
        const bool branch_taken_0x2cc7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7E8u;
        // 0x2cc7ec: 0x8e740bcc  lw          $s4, 0xBCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7e8) {
            ctx->pc = 0x2CC908u;
            goto label_2cc908;
        }
    }
    ctx->pc = 0x2CC7F0u;
    // 0x2cc7f0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2cc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2cc7f4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CC7F4u;
    {
        const bool branch_taken_0x2cc7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7F4u;
        // 0x2cc7f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7f4) {
            ctx->pc = 0x2CC908u;
            goto label_2cc908;
        }
    }
    ctx->pc = 0x2CC7FCu;
    // 0x2cc7fc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2cc7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cc800: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x2cc800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cc804: 0x8e670aa8  lw          $a3, 0xAA8($s3)
    ctx->pc = 0x2cc804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2728)));
    // 0x2cc808: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2cc808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2cc80c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2cc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2cc810: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc814: 0x24659f78  addiu       $a1, $v1, -0x6088
    ctx->pc = 0x2cc814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942584));
    // 0x2cc818: 0x26680ab0  addiu       $t0, $s3, 0xAB0
    ctx->pc = 0x2cc818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2736));
    // 0x2cc81c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2cc81cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2cc820: 0x24420069  addiu       $v0, $v0, 0x69
    ctx->pc = 0x2cc820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 105));
    // 0x2cc824: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2CC824u;
    SET_GPR_U32(ctx, 31, 0x2CC82Cu);
    ctx->pc = 0x2CC828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC824u;
    // 0x2cc828: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2CC824u, 0x2CC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC82Cu;
label_2cc82c:
    // 0x2cc82c: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2cc82cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2cc830: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cc830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc834: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cc834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc838: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cc838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc83c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2CC83Cu;
    SET_GPR_U32(ctx, 31, 0x2CC844u);
    ctx->pc = 0x2CC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC83Cu;
    // 0x2cc840: 0x34e77f7f  ori         $a3, $a3, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2CC83Cu, 0x2CC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC844u;
label_2cc844:
    // 0x2cc844: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CC844u;
    SET_GPR_U32(ctx, 31, 0x2CC84Cu);
    ctx->pc = 0x2CC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC844u;
    // 0x2cc848: 0xc68c0030  lwc1        $f12, 0x30($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CC844u, 0x2CC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC84Cu;
label_2cc84c:
    // 0x2cc84c: 0xc68c0034  lwc1        $f12, 0x34($s4)
    ctx->pc = 0x2cc84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cc850: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CC850u;
    SET_GPR_U32(ctx, 31, 0x2CC858u);
    ctx->pc = 0x2CC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC850u;
    // 0x2cc854: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CC850u, 0x2CC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC858u;
label_2cc858:
    // 0x2cc858: 0xc68c0038  lwc1        $f12, 0x38($s4)
    ctx->pc = 0x2cc858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cc85c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CC85Cu;
    SET_GPR_U32(ctx, 31, 0x2CC864u);
    ctx->pc = 0x2CC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC85Cu;
    // 0x2cc860: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CC85Cu, 0x2CC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC864u;
label_2cc864:
    // 0x2cc864: 0xc68c0050  lwc1        $f12, 0x50($s4)
    ctx->pc = 0x2cc864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cc868: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2CC868u;
    SET_GPR_U32(ctx, 31, 0x2CC870u);
    ctx->pc = 0x2CC86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC868u;
    // 0x2cc86c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2CC868u, 0x2CC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC870u;
label_2cc870:
    // 0x2cc870: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2cc870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc874: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cc874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc878: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cc878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cc87c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cc87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc880: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cc880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc888: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2CC888u;
    SET_GPR_U32(ctx, 31, 0x2CC890u);
    ctx->pc = 0x2CC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC888u;
    // 0x2cc88c: 0x24459f88  addiu       $a1, $v0, -0x6078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2CC888u, 0x2CC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC890u;
label_2cc890:
    // 0x2cc890: 0x240300c3  addiu       $v1, $zero, 0xC3
    ctx->pc = 0x2cc890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x2cc894: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2cc894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2cc898: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2cc898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2cc89c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cc89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cc8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8a8: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2CC8A8u;
    SET_GPR_U32(ctx, 31, 0x2CC8B0u);
    ctx->pc = 0x2CC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8A8u;
    // 0x2cc8ac: 0x34e77f7f  ori         $a3, $a3, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2CC8A8u, 0x2CC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8B0u;
label_2cc8b0:
    // 0x2cc8b0: 0x2402018b  addiu       $v0, $zero, 0x18B
    ctx->pc = 0x2cc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
    // 0x2cc8b4: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x2cc8b8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2cc8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2cc8bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cc8c4: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2cc8c8: 0x24459fa0  addiu       $a1, $v0, -0x6060
    ctx->pc = 0x2cc8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942624));
    // 0x2cc8cc: 0x8e6a02ac  lw          $t2, 0x2AC($s3)
    ctx->pc = 0x2cc8ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
    // 0x2cc8d0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2cc8d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2cc8d4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x2cc8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2cc8d8: 0x8e680ad4  lw          $t0, 0xAD4($s3)
    ctx->pc = 0x2cc8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2772)));
    // 0x2cc8dc: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x2cc8dcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2cc8e0: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x2CC8E0u;
    SET_GPR_U32(ctx, 31, 0x2CC8E8u);
    ctx->pc = 0x2CC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8E0u;
    // 0x2cc8e4: 0x8e6902a8  lw          $t1, 0x2A8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x2CC8E0u, 0x2CC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8E8u;
label_2cc8e8:
    // 0x2cc8e8: 0x3c077f7f  lui         $a3, 0x7F7F
    ctx->pc = 0x2cc8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32639 << 16));
    // 0x2cc8ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cc8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cc8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cc8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8f8: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2CC8F8u;
    SET_GPR_U32(ctx, 31, 0x2CC900u);
    ctx->pc = 0x2CC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8F8u;
    // 0x2cc8fc: 0x34e77f7f  ori         $a3, $a3, 0x7F7F (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32639);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2CC8F8u, 0x2CC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC900u;
label_2cc900:
    // 0x2cc900: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x2cc900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cc904: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_2cc908:
    // 0x2cc908: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2cc90c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2cc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cc910: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2cc910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cc914: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2CC914u;
    {
        const bool branch_taken_0x2cc914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC914u;
        // 0x2cc918: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc914) {
            ctx->pc = 0x2CC7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc7d8;
        }
    }
    ctx->pc = 0x2CC91Cu;
label_2cc91c:
    // 0x2cc91c: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2CC91Cu;
    SET_GPR_U32(ctx, 31, 0x2CC924u);
    ctx->pc = 0x2CC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC91Cu;
    // 0x2cc920: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2CC91Cu, 0x2CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC924u;
label_2cc924:
    // 0x2cc924: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2cc924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cc928: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x2cc928u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cc92c: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x2cc92cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cc930: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x2cc930u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cc934: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x2cc934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cc938: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2cc938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cc93c: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2cc93cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cc940: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2cc940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cc944: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2cc944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cc948: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2cc948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cc94c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC94Cu;
        // 0x2cc950: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC954u;
}
