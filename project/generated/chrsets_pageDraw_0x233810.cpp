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

// Function: chrsets_pageDraw
// Address: 0x233810 - 0x234474
void chrsets_pageDraw_0x233810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrsets_pageDraw_0x233810");
#endif

    switch (ctx->pc) {
        case 0x233860u: goto label_233860;
        case 0x233894u: goto label_233894;
        case 0x2338c0u: goto label_2338c0;
        case 0x233944u: goto label_233944;
        case 0x23397cu: goto label_23397c;
        case 0x233988u: goto label_233988;
        case 0x2339c8u: goto label_2339c8;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a7cu: goto label_233a7c;
        case 0x233aecu: goto label_233aec;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b84u: goto label_233b84;
        case 0x233bd4u: goto label_233bd4;
        case 0x233c00u: goto label_233c00;
        case 0x233c34u: goto label_233c34;
        case 0x233c54u: goto label_233c54;
        case 0x233c74u: goto label_233c74;
        case 0x233cacu: goto label_233cac;
        case 0x233cd0u: goto label_233cd0;
        case 0x233ce8u: goto label_233ce8;
        case 0x233d00u: goto label_233d00;
        case 0x233d38u: goto label_233d38;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d74u: goto label_233d74;
        case 0x233d8cu: goto label_233d8c;
        case 0x233dacu: goto label_233dac;
        case 0x233df4u: goto label_233df4;
        case 0x233e28u: goto label_233e28;
        case 0x233e44u: goto label_233e44;
        case 0x233ec4u: goto label_233ec4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233f24u: goto label_233f24;
        case 0x233f38u: goto label_233f38;
        case 0x233f58u: goto label_233f58;
        case 0x233fb8u: goto label_233fb8;
        case 0x234014u: goto label_234014;
        case 0x23404cu: goto label_23404c;
        case 0x23406cu: goto label_23406c;
        case 0x234098u: goto label_234098;
        case 0x2340d8u: goto label_2340d8;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234178u: goto label_234178;
        case 0x2342a8u: goto label_2342a8;
        case 0x234360u: goto label_234360;
        case 0x23439cu: goto label_23439c;
        case 0x234408u: goto label_234408;
        case 0x23442cu: goto label_23442c;
        case 0x234434u: goto label_234434;
        default: break;
    }

    ctx->pc = 0x233810u;

    // 0x233810: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x233814: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x233814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x233818: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23381c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23381cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233820: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x233824: 0x3c106e6e  lui         $s0, 0x6E6E
    ctx->pc = 0x233824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28270 << 16));
    // 0x233828: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x233828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x23382c: 0x36106e80  ori         $s0, $s0, 0x6E80
    ctx->pc = 0x23382cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)28288);
    // 0x233830: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x233830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x233834: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x233834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x233838: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x233838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x23383c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x23383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x233840: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x233840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x233844: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x233844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x233848: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x233848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x23384c: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x23384cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x233850: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x233850u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x233854: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x233854u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x233858: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x233858u;
    SET_GPR_U32(ctx, 31, 0x233860u);
    ctx->pc = 0x23385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233858u;
    // 0x23385c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x233858u, 0x233860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233860u;
label_233860:
    // 0x233860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233864: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x233864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x233868: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x233868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23386c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233870: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x233870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233874: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233874u;
    {
        const bool branch_taken_0x233874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x233878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233874u;
        // 0x233878: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233874) {
            ctx->pc = 0x23389Cu;
            goto label_23389c;
        }
    }
    ctx->pc = 0x23387Cu;
    // 0x23387c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x23387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233880: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x233880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x233884: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x233888: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x233888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x23388c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x23388Cu;
    SET_GPR_U32(ctx, 31, 0x233894u);
    ctx->pc = 0x233890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23388Cu;
    // 0x233890: 0x24082040  addiu       $t0, $zero, 0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x23388Cu, 0x233894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233894u;
label_233894:
    // 0x233894: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x233894u;
    {
        const bool branch_taken_0x233894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233894u;
        // 0x233898: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233894) {
            ctx->pc = 0x2338C4u;
            goto label_2338c4;
        }
    }
    ctx->pc = 0x23389Cu;
label_23389c:
    // 0x23389c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2338a0: 0x1482002a  bne         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2338A0u;
    {
        const bool branch_taken_0x2338a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2338A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338A0u;
        // 0x2338a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338a0) {
            ctx->pc = 0x23394Cu;
            goto label_23394c;
        }
    }
    ctx->pc = 0x2338A8u;
    // 0x2338a8: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2338a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2338ac: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2338b0: 0x2406023f  addiu       $a2, $zero, 0x23F
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x2338b4: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2338b8: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x2338B8u;
    SET_GPR_U32(ctx, 31, 0x2338C0u);
    ctx->pc = 0x2338BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338B8u;
    // 0x2338bc: 0x24082040  addiu       $t0, $zero, 0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x2338B8u, 0x2338C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2338c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2338c4:
    // 0x2338c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2338c8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2338c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2338cc: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2338CCu;
    {
        const bool branch_taken_0x2338cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2338D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338CCu;
        // 0x2338d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338cc) {
            ctx->pc = 0x23394Cu;
            goto label_23394c;
        }
    }
    ctx->pc = 0x2338D4u;
    // 0x2338d4: 0x8f84b770  lw          $a0, -0x4890($gp)
    ctx->pc = 0x2338d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
    // 0x2338d8: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2338D8u;
    {
        const bool branch_taken_0x2338d8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2338DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338D8u;
        // 0x2338dc: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338d8) {
            ctx->pc = 0x2338F0u;
            goto label_2338f0;
        }
    }
    ctx->pc = 0x2338E0u;
    // 0x2338e0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2338e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2338e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2338e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2338e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2338E8u;
    {
        const bool branch_taken_0x2338e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338E8u;
        // 0x2338ec: 0x245701fd  addiu       $s7, $v0, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338e8) {
            ctx->pc = 0x2338F4u;
            goto label_2338f4;
        }
    }
    ctx->pc = 0x2338F0u;
label_2338f0:
    // 0x2338f0: 0x24170120  addiu       $s7, $zero, 0x120
    ctx->pc = 0x2338f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2338f4:
    // 0x2338f4: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x2338f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x2338f8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2338fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2338fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x233900: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233900u;
    {
        const bool branch_taken_0x233900 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x233904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233900u;
        // 0x233904: 0x2451003b  addiu       $s1, $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233900) {
            ctx->pc = 0x233920u;
            goto label_233920;
        }
    }
    ctx->pc = 0x233908u;
    // 0x233908: 0x8f82b77c  lw          $v0, -0x4884($gp)
    ctx->pc = 0x233908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x23390c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x233910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x233914: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x233914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x233918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x233918u;
    {
        const bool branch_taken_0x233918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233918u;
        // 0x23391c: 0x244200dd  addiu       $v0, $v0, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233918) {
            ctx->pc = 0x233924u;
            goto label_233924;
        }
    }
    ctx->pc = 0x233920u;
label_233920:
    // 0x233920: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x233920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_233924:
    // 0x233924: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x233924u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x233928: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23392c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233930: 0x2e63021  addu        $a2, $s7, $a2
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x233934: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x233934u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x233938: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x233938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23393c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x23393Cu;
    SET_GPR_U32(ctx, 31, 0x233944u);
    ctx->pc = 0x233940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23393Cu;
    // 0x233940: 0x24a7000a  addiu       $a3, $a1, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x23393Cu, 0x233944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233944u;
label_233944:
    // 0x233944: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x233944u;
    {
        const bool branch_taken_0x233944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233944u;
        // 0x233948: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233944) {
            ctx->pc = 0x233980u;
            goto label_233980;
        }
    }
    ctx->pc = 0x23394Cu;
label_23394c:
    // 0x23394c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23394Cu;
    {
        const bool branch_taken_0x23394c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23394Cu;
        // 0x233950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23394c) {
            ctx->pc = 0x233980u;
            goto label_233980;
        }
    }
    ctx->pc = 0x233954u;
    // 0x233954: 0x8f85b778  lw          $a1, -0x4888($gp)
    ctx->pc = 0x233954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x233958: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x233958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23395c: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x23395cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x233960: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x233960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233964: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x233964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x233968: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x233968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x23396c: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x23396cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x233970: 0x24a70045  addiu       $a3, $a1, 0x45
    ctx->pc = 0x233970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 69));
    // 0x233974: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x233974u;
    SET_GPR_U32(ctx, 31, 0x23397Cu);
    ctx->pc = 0x233978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233974u;
    // 0x233978: 0x24a5003b  addiu       $a1, $a1, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x233974u, 0x23397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23397Cu;
label_23397c:
    // 0x23397c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233980:
    // 0x233980: 0xc08089c  jal         func_202270
    ctx->pc = 0x233980u;
    SET_GPR_U32(ctx, 31, 0x233988u);
    ctx->pc = 0x233984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233980u;
    // 0x233984: 0x3c134040  lui         $s3, 0x4040 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16448 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x233980u, 0x233988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233988u;
label_233988:
    // 0x233988: 0x36734080  ori         $s3, $s3, 0x4080
    ctx->pc = 0x233988u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16512);
    // 0x23398c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23398cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233990: 0x24032040  addiu       $v1, $zero, 0x2040
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x233994: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x233994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x233998: 0x24150080  addiu       $s5, $zero, 0x80
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23399c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x23399cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2339a0: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2339a4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2339a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2339a8: 0x2406023f  addiu       $a2, $zero, 0x23F
    ctx->pc = 0x2339a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x2339ac: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2339acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2339b0: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x2339b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2339b4: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x2339b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x2339b8: 0x202980a  movz        $s3, $s0, $v0
    ctx->pc = 0x2339b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
    // 0x2339bc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2339bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339c0: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x2339C0u;
    SET_GPR_U32(ctx, 31, 0x2339C8u);
    ctx->pc = 0x2339C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339C0u;
    // 0x2339c4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x2339C0u, 0x2339C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339C8u;
label_2339c8:
    // 0x2339c8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2339c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2339cc: 0x8c623a58  lw          $v0, 0x3A58($v1)
    ctx->pc = 0x2339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A58u));
    // 0x2339d0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2339d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2339d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2339D4u;
    {
        const bool branch_taken_0x2339d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339D4u;
        // 0x2339d8: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339d4) {
            ctx->pc = 0x2339F8u;
            goto label_2339f8;
        }
    }
    ctx->pc = 0x2339DCu;
    // 0x2339dc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2339dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2339e0: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x2339e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2339e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2339ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2339f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2339F0u;
    {
        const bool branch_taken_0x2339f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339F0u;
        // 0x2339f4: 0x8c700688  lw          $s0, 0x688($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339f0) {
            ctx->pc = 0x233A10u;
            goto label_233a10;
        }
    }
    ctx->pc = 0x2339F8u;
label_2339f8:
    // 0x2339f8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2339fc: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x233a00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233a04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x233a08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x233a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233a0c: 0x8c70068c  lw          $s0, 0x68C($v1)
    ctx->pc = 0x233a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1676)));
label_233a10:
    // 0x233a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a14: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x233A14u;
    SET_GPR_U32(ctx, 31, 0x233A1Cu);
    ctx->pc = 0x233A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A14u;
    // 0x233a18: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x233A14u, 0x233A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A1Cu;
label_233a1c:
    // 0x233a1c: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x233a20: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x233a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x233a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a28: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x233a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233a2c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x233a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a30: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x233a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x233a34: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x233a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x233a38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233a3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x233a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a40: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x233a40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x233a44: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x233A44u;
    SET_GPR_U32(ctx, 31, 0x233A4Cu);
    ctx->pc = 0x233A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A44u;
    // 0x233a48: 0x24840120  addiu       $a0, $a0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x233A44u, 0x233A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A4Cu;
label_233a4c:
    // 0x233a4c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x233a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_233a50:
    // 0x233a50: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x233a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x233a54: 0x2829018  mult        $s2, $s4, $v0
    ctx->pc = 0x233a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x233a58: 0x2406023f  addiu       $a2, $zero, 0x23F
    ctx->pc = 0x233a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x233a5c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a60: 0x27d52a88  addiu       $s5, $fp, 0x2A88
    ctx->pc = 0x233a60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
    // 0x233a64: 0x14b100  sll         $s6, $s4, 4
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x233a68: 0x2d58021  addu        $s0, $s6, $s5
    ctx->pc = 0x233a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x233a6c: 0x2651003b  addiu       $s1, $s2, 0x3B
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 59));
    // 0x233a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a74: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x233A74u;
    SET_GPR_U32(ctx, 31, 0x233A7Cu);
    ctx->pc = 0x233A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A74u;
    // 0x233a78: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x233A74u, 0x233A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A7Cu;
label_233a7c:
    // 0x233a7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233a80: 0x44000dc  bltz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x233A80u;
    {
        const bool branch_taken_0x233a80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x233A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A80u;
        // 0x233a84: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a80) {
            ctx->pc = 0x233DF4u;
            goto label_233df4;
        }
    }
    ctx->pc = 0x233A88u;
    // 0x233a88: 0x8f849354  lw          $a0, -0x6CAC($gp)
    ctx->pc = 0x233a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x233a8c: 0x463018  mult        $a2, $v0, $a2
    ctx->pc = 0x233a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x233a90: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x233a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x233a94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x233a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x233a98: 0x24622c18  addiu       $v0, $v1, 0x2C18
    ctx->pc = 0x233a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x233a9c: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    ctx->pc = 0x233a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x233aa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x233aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233aa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x233aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233aa8: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x233aac: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x233aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x233ab0: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x233ab4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x233ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x233ab8: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x233ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x233abc: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x233abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233ac0: 0x3c072020  lui         $a3, 0x2020
    ctx->pc = 0x233ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8224 << 16));
    // 0x233ac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233ac8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x233ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x233acc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x233accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x233ad0: 0x34e72040  ori         $a3, $a3, 0x2040
    ctx->pc = 0x233ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8256);
    // 0x233ad4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x233ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233ad8: 0x269380b  movn        $a3, $s3, $t1
    ctx->pc = 0x233ad8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 19));
    // 0x233adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ae0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x233ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x233ae4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x233AE4u;
    SET_GPR_U32(ctx, 31, 0x233AECu);
    ctx->pc = 0x233AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AE4u;
    // 0x233ae8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x233AE4u, 0x233AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AECu;
label_233aec:
    // 0x233aec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233af0: 0x44000c0  bltz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x233AF0u;
    {
        const bool branch_taken_0x233af0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x233AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AF0u;
        // 0x233af4: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233af0) {
            ctx->pc = 0x233DF4u;
            goto label_233df4;
        }
    }
    ctx->pc = 0x233AF8u;
    // 0x233af8: 0x8c823838  lw          $v0, 0x3838($a0)
    ctx->pc = 0x233af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14392)));
    // 0x233afc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x233AFCu;
    {
        const bool branch_taken_0x233afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AFCu;
        // 0x233b00: 0x26b00004  addiu       $s0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233afc) {
            ctx->pc = 0x233B84u;
            goto label_233b84;
        }
    }
    ctx->pc = 0x233B04u;
    // 0x233b04: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x233b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x233b08: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x233b0c: 0x2463c380  addiu       $v1, $v1, -0x3C80
    ctx->pc = 0x233b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951808));
    // 0x233b10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233b14: 0x240401fe  addiu       $a0, $zero, 0x1FE
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x233b18: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x233b1c: 0x24060212  addiu       $a2, $zero, 0x212
    ctx->pc = 0x233b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x233b20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x233b24: 0x26470045  addiu       $a3, $s2, 0x45
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 69));
    // 0x233b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233b2c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x233b30: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x233b34: 0xc08ba2c  jal         func_22E8B0
    ctx->pc = 0x233B34u;
    SET_GPR_U32(ctx, 31, 0x233B3Cu);
    ctx->pc = 0x233B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B34u;
    // 0x233b38: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E8B0u, 0x233B34u, 0x233B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B3Cu;
label_233b3c:
    // 0x233b3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233b40: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x233b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x233b44: 0x24a211f8  addiu       $v0, $a1, 0x11F8
    ctx->pc = 0x233b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x233b48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x233b4c: 0x9043003c  lbu         $v1, 0x3C($v0)
    ctx->pc = 0x233b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x233b50: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x233B50u;
    {
        const bool branch_taken_0x233b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B50u;
        // 0x233b54: 0x27c22a88  addiu       $v0, $fp, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b50) {
            ctx->pc = 0x233B88u;
            goto label_233b88;
        }
    }
    ctx->pc = 0x233B58u;
    // 0x233b58: 0x9385a02c  lbu         $a1, -0x5FD4($gp)
    ctx->pc = 0x233b58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x233b5c: 0x2642003d  addiu       $v0, $s2, 0x3D
    ctx->pc = 0x233b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 61));
    // 0x233b60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233b64: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233b68: 0xc78c81a8  lwc1        $f12, -0x7E58($gp)
    ctx->pc = 0x233b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233b6c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x233b70: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x233b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x233b74: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x233b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x233b78: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x233b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x233b7c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233B7Cu;
    SET_GPR_U32(ctx, 31, 0x233B84u);
    ctx->pc = 0x233B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B7Cu;
    // 0x233b80: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233B7Cu, 0x233B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B84u;
label_233b84:
    // 0x233b84: 0x27c22a88  addiu       $v0, $fp, 0x2A88
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
label_233b88:
    // 0x233b88: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x233b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x233b8c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x233b90: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x233b94: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x233B94u;
    {
        const bool branch_taken_0x233b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B94u;
        // 0x233b98: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b94) {
            ctx->pc = 0x233DACu;
            goto label_233dac;
        }
    }
    ctx->pc = 0x233B9Cu;
    // 0x233b9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233ba0: 0x24421ba0  addiu       $v0, $v0, 0x1BA0
    ctx->pc = 0x233ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7072));
    // 0x233ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233ba8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x233ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233bac: 0x800008  jr          $a0
    ctx->pc = 0x233BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233BB4u: goto label_233bb4;
            case 0x233BDCu: goto label_233bdc;
            case 0x233C14u: goto label_233c14;
            case 0x233C7Cu: goto label_233c7c;
            case 0x233D08u: goto label_233d08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233BACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x233BB4u;
label_233bb4:
    // 0x233bb4: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x233bb8: 0x3c058050  lui         $a1, 0x8050
    ctx->pc = 0x233bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32848 << 16));
    // 0x233bbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233bc0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233bc4: 0xc78c81ac  lwc1        $f12, -0x7E54($gp)
    ctx->pc = 0x233bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233bc8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233bcc: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233BCCu;
    SET_GPR_U32(ctx, 31, 0x233BD4u);
    ctx->pc = 0x233BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BCCu;
    // 0x233bd0: 0x34a52880  ori         $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233BCCu, 0x233BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BD4u;
label_233bd4:
    // 0x233bd4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x233BD4u;
    {
        const bool branch_taken_0x233bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD4u;
        // 0x233bd8: 0x27c22a88  addiu       $v0, $fp, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bd4) {
            ctx->pc = 0x233DB0u;
            goto label_233db0;
        }
    }
    ctx->pc = 0x233BDCu;
label_233bdc:
    // 0x233bdc: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x233bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x233be0: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x233be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233be4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x233be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233be8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x233be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x233bec: 0x3c056050  lui         $a1, 0x6050
    ctx->pc = 0x233becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24656 << 16));
    // 0x233bf0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233bf4: 0x34a54080  ori         $a1, $a1, 0x4080
    ctx->pc = 0x233bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16512);
    // 0x233bf8: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233BF8u;
    SET_GPR_U32(ctx, 31, 0x233C00u);
    ctx->pc = 0x233BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BF8u;
    // 0x233bfc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233BF8u, 0x233C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C00u;
label_233c00:
    // 0x233c00: 0x3c056050  lui         $a1, 0x6050
    ctx->pc = 0x233c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24656 << 16));
    // 0x233c04: 0x3c014408  lui         $at, 0x4408
    ctx->pc = 0x233c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17416 << 16));
    // 0x233c08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233c0c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x233C0Cu;
    {
        const bool branch_taken_0x233c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C0Cu;
        // 0x233c10: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c0c) {
            ctx->pc = 0x233CF4u;
            goto label_233cf4;
        }
    }
    ctx->pc = 0x233C14u;
label_233c14:
    // 0x233c14: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x233c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x233c18: 0xc78c81b4  lwc1        $f12, -0x7E4C($gp)
    ctx->pc = 0x233c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233c1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233c20: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233c24: 0x3c056060  lui         $a1, 0x6060
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24672 << 16));
    // 0x233c28: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233c2c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233C2Cu;
    SET_GPR_U32(ctx, 31, 0x233C34u);
    ctx->pc = 0x233C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C2Cu;
    // 0x233c30: 0x34a56080  ori         $a1, $a1, 0x6080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233C2Cu, 0x233C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C34u;
label_233c34:
    // 0x233c34: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x233c38: 0xc78c81b8  lwc1        $f12, -0x7E48($gp)
    ctx->pc = 0x233c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233c3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233c40: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233c44: 0x3c056060  lui         $a1, 0x6060
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24672 << 16));
    // 0x233c48: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233c4c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233C4Cu;
    SET_GPR_U32(ctx, 31, 0x233C54u);
    ctx->pc = 0x233C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C4Cu;
    // 0x233c50: 0x34a56080  ori         $a1, $a1, 0x6080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233C4Cu, 0x233C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C54u;
label_233c54:
    // 0x233c54: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x233c58: 0x3c056060  lui         $a1, 0x6060
    ctx->pc = 0x233c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24672 << 16));
    // 0x233c5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233c60: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233c64: 0xc78c81bc  lwc1        $f12, -0x7E44($gp)
    ctx->pc = 0x233c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233c68: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233c6c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233C6Cu;
    SET_GPR_U32(ctx, 31, 0x233C74u);
    ctx->pc = 0x233C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C6Cu;
    // 0x233c70: 0x34a56080  ori         $a1, $a1, 0x6080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233C6Cu, 0x233C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C74u;
label_233c74:
    // 0x233c74: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x233C74u;
    {
        const bool branch_taken_0x233c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C74u;
        // 0x233c78: 0x27c22a88  addiu       $v0, $fp, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c74) {
            ctx->pc = 0x233DB0u;
            goto label_233db0;
        }
    }
    ctx->pc = 0x233C7Cu;
label_233c7c:
    // 0x233c7c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x233c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x233c80: 0xc79481c0  lwc1        $f20, -0x7E40($gp)
    ctx->pc = 0x233c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233c84: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x233c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x233c88: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x233c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x233c8c: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233c90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233c94: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233c98: 0x34a54080  ori         $a1, $a1, 0x4080
    ctx->pc = 0x233c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16512);
    // 0x233c9c: 0x3c014408  lui         $at, 0x4408
    ctx->pc = 0x233c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17416 << 16));
    // 0x233ca0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x233ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x233ca4: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233CA4u;
    SET_GPR_U32(ctx, 31, 0x233CACu);
    ctx->pc = 0x233CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CA4u;
    // 0x233ca8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233CA4u, 0x233CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CACu;
label_233cac:
    // 0x233cac: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x233cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x233cb0: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233cb4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x233cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x233cb8: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x233cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x233cbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233cbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233cc0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233cc4: 0x34a54080  ori         $a1, $a1, 0x4080
    ctx->pc = 0x233cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16512);
    // 0x233cc8: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233CC8u;
    SET_GPR_U32(ctx, 31, 0x233CD0u);
    ctx->pc = 0x233CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CC8u;
    // 0x233ccc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233CC8u, 0x233CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CD0u;
label_233cd0:
    // 0x233cd0: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233cd4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x233cd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x233cd8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x233cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x233cdc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233ce0: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233CE0u;
    SET_GPR_U32(ctx, 31, 0x233CE8u);
    ctx->pc = 0x233CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CE0u;
    // 0x233ce4: 0x34a54080  ori         $a1, $a1, 0x4080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233CE0u, 0x233CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CE8u;
label_233ce8:
    // 0x233ce8: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233cec: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x233cecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x233cf0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x233cf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_233cf4:
    // 0x233cf4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233cf8: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233CF8u;
    SET_GPR_U32(ctx, 31, 0x233D00u);
    ctx->pc = 0x233CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CF8u;
    // 0x233cfc: 0x34a54080  ori         $a1, $a1, 0x4080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233CF8u, 0x233D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D00u;
label_233d00:
    // 0x233d00: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x233D00u;
    {
        const bool branch_taken_0x233d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D00u;
        // 0x233d04: 0x27c22a88  addiu       $v0, $fp, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d00) {
            ctx->pc = 0x233DB0u;
            goto label_233db0;
        }
    }
    ctx->pc = 0x233D08u;
label_233d08:
    // 0x233d08: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x233d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x233d0c: 0xc79481c4  lwc1        $f20, -0x7E3C($gp)
    ctx->pc = 0x233d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233d10: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x233d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x233d14: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x233d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x233d18: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233d1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233d20: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233d24: 0x34a52080  ori         $a1, $a1, 0x2080
    ctx->pc = 0x233d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8320);
    // 0x233d28: 0x3c014408  lui         $at, 0x4408
    ctx->pc = 0x233d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17416 << 16));
    // 0x233d2c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x233d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x233d30: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233D30u;
    SET_GPR_U32(ctx, 31, 0x233D38u);
    ctx->pc = 0x233D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D30u;
    // 0x233d34: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233D30u, 0x233D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D38u;
label_233d38:
    // 0x233d38: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x233d3c: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233d40: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x233d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x233d44: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x233d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x233d48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233d48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233d4c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233d50: 0x34a52080  ori         $a1, $a1, 0x2080
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8320);
    // 0x233d54: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233D54u;
    SET_GPR_U32(ctx, 31, 0x233D5Cu);
    ctx->pc = 0x233D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D54u;
    // 0x233d58: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233D54u, 0x233D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D5Cu;
label_233d5c:
    // 0x233d5c: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233d60: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x233d60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x233d64: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x233d64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x233d68: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233d6c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233D6Cu;
    SET_GPR_U32(ctx, 31, 0x233D74u);
    ctx->pc = 0x233D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D6Cu;
    // 0x233d70: 0x34a52080  ori         $a1, $a1, 0x2080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233D6Cu, 0x233D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D74u;
label_233d74:
    // 0x233d74: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233d78: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x233d78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x233d7c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x233d7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x233d80: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233d84: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233D84u;
    SET_GPR_U32(ctx, 31, 0x233D8Cu);
    ctx->pc = 0x233D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D84u;
    // 0x233d88: 0x34a52080  ori         $a1, $a1, 0x2080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233D84u, 0x233D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D8Cu;
label_233d8c:
    // 0x233d8c: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x233d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x233d90: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x233d94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233d98: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233d9c: 0xc78c81c8  lwc1        $f12, -0x7E38($gp)
    ctx->pc = 0x233d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x233da0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x233da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x233da4: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233DA4u;
    SET_GPR_U32(ctx, 31, 0x233DACu);
    ctx->pc = 0x233DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DA4u;
    // 0x233da8: 0x34a52080  ori         $a1, $a1, 0x2080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233DA4u, 0x233DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0x27c22a88  addiu       $v0, $fp, 0x2A88
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
label_233db0:
    // 0x233db0: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x233db4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x233db8: 0x2417022b  addiu       $s7, $zero, 0x22B
    ctx->pc = 0x233db8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    // 0x233dbc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x233dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x233dc0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x233dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x233dc4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x233dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x233dc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x233dcc: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x233dd0: 0x44976000  mtc1        $s7, $f12
    ctx->pc = 0x233dd0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233dd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x233dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x233dd8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x233dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x233ddc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233de0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x233de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x233de4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x233de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x233de8: 0x66200a  movz        $a0, $v1, $a2
    ctx->pc = 0x233de8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x233dec: 0xc08b952  jal         func_22E548
    ctx->pc = 0x233DECu;
    SET_GPR_U32(ctx, 31, 0x233DF4u);
    ctx->pc = 0x233DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DECu;
    // 0x233df0: 0x46280a  movz        $a1, $v0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x233DECu, 0x233DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DF4u;
label_233df4:
    // 0x233df4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x233df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x233df8: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x233df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x233dfc: 0x1440ff14  bnez        $v0, . + 4 + (-0xEC << 2)
    ctx->pc = 0x233DFCu;
    {
        const bool branch_taken_0x233dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DFCu;
        // 0x233e00: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dfc) {
            ctx->pc = 0x233A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a50;
        }
    }
    ctx->pc = 0x233E04u;
    // 0x233e04: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x233e08: 0x8c623838  lw          $v0, 0x3838($v1)
    ctx->pc = 0x233e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353838u));
    // 0x233e0c: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x233e0cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x233e10: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x233e10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x233e14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x233E14u;
    {
        const bool branch_taken_0x233e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E14u;
        // 0x233e18: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e14) {
            ctx->pc = 0x233E54u;
            goto label_233e54;
        }
    }
    ctx->pc = 0x233E1Cu;
    // 0x233e1c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x233e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x233e20: 0x244301fd  addiu       $v1, $v0, 0x1FD
    ctx->pc = 0x233e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 509));
    // 0x233e24: 0x0  nop
    ctx->pc = 0x233e24u;
    // NOP
label_233e28:
    // 0x233e28: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x233e28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e2c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x233e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233e30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x233e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x233e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e38: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x233e3c: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x233E3Cu;
    SET_GPR_U32(ctx, 31, 0x233E44u);
    ctx->pc = 0x233E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E3Cu;
    // 0x233e40: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x233E3Cu, 0x233E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E44u;
label_233e44:
    // 0x233e44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x233e48: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x233e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x233e4c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x233E4Cu;
    {
        const bool branch_taken_0x233e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E4Cu;
        // 0x233e50: 0x26e30016  addiu       $v1, $s7, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e4c) {
            ctx->pc = 0x233E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233e28;
        }
    }
    ctx->pc = 0x233E54u;
label_233e54:
    // 0x233e54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233e58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233e5c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x233e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233e60: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x233E60u;
    {
        const bool branch_taken_0x233e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E60u;
        // 0x233e64: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e60) {
            ctx->pc = 0x233E90u;
            goto label_233e90;
        }
    }
    ctx->pc = 0x233E68u;
    // 0x233e68: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x233e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x233e6c: 0x3c134040  lui         $s3, 0x4040
    ctx->pc = 0x233e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16448 << 16));
    // 0x233e70: 0x8c443a58  lw          $a0, 0x3A58($v0)
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x353A58u));
    // 0x233e74: 0x3c032020  lui         $v1, 0x2020
    ctx->pc = 0x233e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8224 << 16));
    // 0x233e78: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x233e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x233e7c: 0x36734080  ori         $s3, $s3, 0x4080
    ctx->pc = 0x233e7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16512);
    // 0x233e80: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x233e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x233e84: 0x34632040  ori         $v1, $v1, 0x2040
    ctx->pc = 0x233e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8256);
    // 0x233e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233E88u;
    {
        const bool branch_taken_0x233e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E88u;
        // 0x233e8c: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e88) {
            ctx->pc = 0x233E98u;
            goto label_233e98;
        }
    }
    ctx->pc = 0x233E90u;
label_233e90:
    // 0x233e90: 0x3c136e6e  lui         $s3, 0x6E6E
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28270 << 16));
    // 0x233e94: 0x36736e80  ori         $s3, $s3, 0x6E80
    ctx->pc = 0x233e94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)28288);
label_233e98:
    // 0x233e98: 0x38a30002  xori        $v1, $a1, 0x2
    ctx->pc = 0x233e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x233e9c: 0x24022040  addiu       $v0, $zero, 0x2040
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x233ea0: 0x24150080  addiu       $s5, $zero, 0x80
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x233ea4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x233ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233ea8: 0x43a80a  movz        $s5, $v0, $v1
    ctx->pc = 0x233ea8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x233eac: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x233eb0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x233eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233eb4: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x233eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x233eb8: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x233eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x233ebc: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x233EBCu;
    SET_GPR_U32(ctx, 31, 0x233EC4u);
    ctx->pc = 0x233EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EBCu;
    // 0x233ec0: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x233EBCu, 0x233EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EC4u;
label_233ec4:
    // 0x233ec4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x233ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ec8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x233ecc: 0x24110042  addiu       $s1, $zero, 0x42
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x233ed0: 0x24622c18  addiu       $v0, $v1, 0x2C18
    ctx->pc = 0x233ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x233ed4: 0x2412003b  addiu       $s2, $zero, 0x3B
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233ed8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x233edc: 0x2416002c  addiu       $s6, $zero, 0x2C
    ctx->pc = 0x233edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x233ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233ee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233eec: 0x8c500684  lw          $s0, 0x684($v0)
    ctx->pc = 0x233eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1668)));
    // 0x233ef0: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x233EF0u;
    SET_GPR_U32(ctx, 31, 0x233EF8u);
    ctx->pc = 0x233EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EF0u;
    // 0x233ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x233EF0u, 0x233EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EF8u;
label_233ef8:
    // 0x233ef8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x233efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f00: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233f04: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x233f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f08: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x233f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x233f0c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x233f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x233f10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x233f14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x233f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f18: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x233f1c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x233F1Cu;
    SET_GPR_U32(ctx, 31, 0x233F24u);
    ctx->pc = 0x233F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F1Cu;
    // 0x233f20: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x233F1Cu, 0x233F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F24u;
label_233f24:
    // 0x233f24: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x233f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x233f28: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x233f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x233f2c: 0x245550e0  addiu       $s5, $v0, 0x50E0
    ctx->pc = 0x233f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
    // 0x233f30: 0x24702b48  addiu       $s0, $v1, 0x2B48
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11080));
    // 0x233f34: 0x0  nop
    ctx->pc = 0x233f34u;
    // NOP
label_233f38:
    // 0x233f38: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x233f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x233f3c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233f40: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x233f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x233f44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f48: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x233f4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x233f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f50: 0xc0ae226  jal         func_2B8898
    ctx->pc = 0x233F50u;
    SET_GPR_U32(ctx, 31, 0x233F58u);
    ctx->pc = 0x233F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F50u;
    // 0x233f54: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8898u, 0x233F50u, 0x233F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F58u;
label_233f58:
    // 0x233f58: 0x8f83b774  lw          $v1, -0x488C($gp)
    ctx->pc = 0x233f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
    // 0x233f5c: 0x8f82b760  lw          $v0, -0x48A0($gp)
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
    // 0x233f60: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x233f64: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x233f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x233f68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x233F68u;
    {
        const bool branch_taken_0x233f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F68u;
        // 0x233f6c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f68) {
            ctx->pc = 0x233FB8u;
            goto label_233fb8;
        }
    }
    ctx->pc = 0x233F70u;
    // 0x233f70: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x233f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x233f74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x233f78: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x233f7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233f80: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x233f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233f88: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x233f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x233f8c: 0xd61018  mult        $v0, $a2, $s6
    ctx->pc = 0x233f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x233f90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x233f94: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x233f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233f98: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x233f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x233f9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x233f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fa0: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x233fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x233fa4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x233fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x233fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233fac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x233fb0: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x233FB0u;
    SET_GPR_U32(ctx, 31, 0x233FB8u);
    ctx->pc = 0x233FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FB0u;
    // 0x233fb4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x233FB0u, 0x233FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FB8u;
label_233fb8:
    // 0x233fb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x233fbc: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x233fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x233fc0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x233FC0u;
    {
        const bool branch_taken_0x233fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FC0u;
        // 0x233fc4: 0x2652000b  addiu       $s2, $s2, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fc0) {
            ctx->pc = 0x233F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233f38;
        }
    }
    ctx->pc = 0x233FC8u;
    // 0x233fc8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x233fcc: 0x247211f8  addiu       $s2, $v1, 0x11F8
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4600));
    // 0x233fd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x233fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x233fd4: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC1228u));
    // 0x233fd8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x233FD8u;
    {
        const bool branch_taken_0x233fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FD8u;
        // 0x233fdc: 0x241100aa  addiu       $s1, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fd8) {
            ctx->pc = 0x2340B0u;
            goto label_2340b0;
        }
    }
    ctx->pc = 0x233FE0u;
    // 0x233fe0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x233fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x233fe4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x233fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x233fe8: 0x2610c380  addiu       $s0, $s0, -0x3C80
    ctx->pc = 0x233fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951808));
    // 0x233fec: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x233fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x233ff0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x233ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x233ff4: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x233ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x32C384u));
    // 0x233ff8: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x233ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x233ffc: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x233ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x234000: 0x24060139  addiu       $a2, $zero, 0x139
    ctx->pc = 0x234000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    // 0x234004: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x234004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x234008: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x234008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23400c: 0xc08ba2c  jal         func_22E8B0
    ctx->pc = 0x23400Cu;
    SET_GPR_U32(ctx, 31, 0x234014u);
    ctx->pc = 0x234010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23400Cu;
    // 0x234010: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E8B0u, 0x23400Cu, 0x234014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234014u;
label_234014:
    // 0x234014: 0x241701b4  addiu       $s7, $zero, 0x1B4
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x234018: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x234018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23401c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x23401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x234020: 0x24912c18  addiu       $s1, $a0, 0x2C18
    ctx->pc = 0x234020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x234024: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x234024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x234028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23402c: 0x24040144  addiu       $a0, $zero, 0x144
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x234030: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x234030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x234034: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x234034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x234038: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23403c: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x23403cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x234040: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x234044: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x234044u;
    SET_GPR_U32(ctx, 31, 0x23404Cu);
    ctx->pc = 0x234048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234044u;
    // 0x234048: 0x8c6606a4  lw          $a2, 0x6A4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x234044u, 0x23404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23404Cu;
label_23404c:
    // 0x23404c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x23404cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x234050: 0x240401b5  addiu       $a0, $zero, 0x1B5
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x234054: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x234058: 0x240601c9  addiu       $a2, $zero, 0x1C9
    ctx->pc = 0x234058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 457));
    // 0x23405c: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x234060: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x234064: 0xc08ba2c  jal         func_22E8B0
    ctx->pc = 0x234064u;
    SET_GPR_U32(ctx, 31, 0x23406Cu);
    ctx->pc = 0x234068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234064u;
    // 0x234068: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E8B0u, 0x234064u, 0x23406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23406Cu;
label_23406c:
    // 0x23406c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x234070: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x234070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x234074: 0x240401d4  addiu       $a0, $zero, 0x1D4
    ctx->pc = 0x234074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    // 0x234078: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x234078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x23407c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x234080: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x234080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x234084: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x234084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x234088: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x23408c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234090: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x234090u;
    SET_GPR_U32(ctx, 31, 0x234098u);
    ctx->pc = 0x234094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234090u;
    // 0x234094: 0x8c4606a8  lw          $a2, 0x6A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x234090u, 0x234098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234098u;
label_234098:
    // 0x234098: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x234098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x23409c: 0x8f849a9c  lw          $a0, -0x6564($gp)
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2340a0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2340a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2340a4: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x2340a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x2340a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2340a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2340ac: 0x247100aa  addiu       $s1, $v1, 0xAA
    ctx->pc = 0x2340acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 170));
label_2340b0:
    // 0x2340b0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2340b4: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2340b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340b8: 0x244a2a88  addiu       $t2, $v0, 0x2A88
    ctx->pc = 0x2340b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 10888));
    // 0x2340bc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2340bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2340c0: 0x25490004  addiu       $t1, $t2, 0x4
    ctx->pc = 0x2340c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2340c4: 0x24682c18  addiu       $t0, $v1, 0x2C18
    ctx->pc = 0x2340c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2340c8: 0x256c003c  addiu       $t4, $t3, 0x3C
    ctx->pc = 0x2340c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 60));
    // 0x2340cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2340ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2340d0: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2340d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2340d4: 0x28c1021  addu        $v0, $s4, $t4
    ctx->pc = 0x2340d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
label_2340d8:
    // 0x2340d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2340d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2340dc: 0x54600029  bnel        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2340DCu;
    {
        const bool branch_taken_0x2340dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2340dc) {
            ctx->pc = 0x2340E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2340DCu;
            // 0x2340e0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234184u;
            goto label_234184;
        }
    }
    ctx->pc = 0x2340E4u;
    // 0x2340e4: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x2340e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2340e8: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2340E8u;
    {
        const bool branch_taken_0x2340e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2340ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340E8u;
        // 0x2340ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340e8) {
            ctx->pc = 0x234100u;
            goto label_234100;
        }
    }
    ctx->pc = 0x2340F0u;
    // 0x2340f0: 0x8fc22a88  lw          $v0, 0x2A88($fp)
    ctx->pc = 0x2340f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10888)));
    // 0x2340f4: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2340F4u;
    {
        const bool branch_taken_0x2340f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2340F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340F4u;
        // 0x2340f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340f4) {
            ctx->pc = 0x234130u;
            goto label_234130;
        }
    }
    ctx->pc = 0x2340FCu;
    // 0x2340fc: 0x0  nop
    ctx->pc = 0x2340fcu;
    // NOP
label_234100:
    // 0x234100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_234104:
    // 0x234104: 0x28c5000a  slti        $a1, $a2, 0xA
    ctx->pc = 0x234104u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x234108: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x234108u;
    {
        const bool branch_taken_0x234108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234108u;
        // 0x23410c: 0x62100  sll         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234108) {
            ctx->pc = 0x234180u;
            goto label_234180;
        }
    }
    ctx->pc = 0x234110u;
    // 0x234110: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x234114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234118: 0x1474fff9  bne         $v1, $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x234118u;
    {
        const bool branch_taken_0x234118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x23411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234118u;
        // 0x23411c: 0x27c72a88  addiu       $a3, $fp, 0x2A88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 10888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234118) {
            ctx->pc = 0x234100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234100;
        }
    }
    ctx->pc = 0x234120u;
    // 0x234120: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x234120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x234124: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234128: 0x460fff6  bltz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x234128u;
    {
        const bool branch_taken_0x234128 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x23412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234128u;
        // 0x23412c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234128) {
            ctx->pc = 0x234104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234104;
        }
    }
    ctx->pc = 0x234130u;
label_234130:
    // 0x234130: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x234130u;
    {
        const bool branch_taken_0x234130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x234130) {
            ctx->pc = 0x234134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234130u;
            // 0x234134: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234184u;
            goto label_234184;
        }
    }
    ctx->pc = 0x234138u;
    // 0x234138: 0x8d620030  lw          $v0, 0x30($t3)
    ctx->pc = 0x234138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x23413c: 0x144d0006  bne         $v0, $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x23413Cu;
    {
        const bool branch_taken_0x23413c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x234140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23413Cu;
        // 0x234140: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23413c) {
            ctx->pc = 0x234158u;
            goto label_234158;
        }
    }
    ctx->pc = 0x234144u;
    // 0x234144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234148: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x234148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23414c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234150: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234150u;
    {
        const bool branch_taken_0x234150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234150u;
        // 0x234154: 0x8c7006ac  lw          $s0, 0x6AC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234150) {
            ctx->pc = 0x234168u;
            goto label_234168;
        }
    }
    ctx->pc = 0x234158u;
label_234158:
    // 0x234158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23415c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x234160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234164: 0x8c7006b0  lw          $s0, 0x6B0($v1)
    ctx->pc = 0x234164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_234168:
    // 0x234168: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x234168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23416c: 0x24040124  addiu       $a0, $zero, 0x124
    ctx->pc = 0x23416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x234170: 0xc08d870  jal         func_2361C0
    ctx->pc = 0x234170u;
    SET_GPR_U32(ctx, 31, 0x234178u);
    ctx->pc = 0x234174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234170u;
    // 0x234174: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2361C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2361C0u, 0x234170u, 0x234178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234178u;
label_234178:
    // 0x234178: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x234178u;
    {
        const bool branch_taken_0x234178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234178u;
        // 0x23417c: 0x8f86b780  lw          $a2, -0x4880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234178) {
            ctx->pc = 0x234194u;
            goto label_234194;
        }
    }
    ctx->pc = 0x234180u;
label_234180:
    // 0x234180: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x234180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_234184:
    // 0x234184: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x234184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x234188: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x234188u;
    {
        const bool branch_taken_0x234188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234188u;
        // 0x23418c: 0x28c1021  addu        $v0, $s4, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234188) {
            ctx->pc = 0x2340D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2340d8;
        }
    }
    ctx->pc = 0x234190u;
    // 0x234190: 0x8f86b780  lw          $a2, -0x4880($gp)
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
label_234194:
    // 0x234194: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x234194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x234198: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234198u;
    {
        const bool branch_taken_0x234198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234198u;
        // 0x23419c: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234198) {
            ctx->pc = 0x2341B4u;
            goto label_2341b4;
        }
    }
    ctx->pc = 0x2341A0u;
    // 0x2341a0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2341a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2341a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2341a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2341ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2341ACu;
    {
        const bool branch_taken_0x2341ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341ACu;
        // 0x2341b0: 0x34530080  ori         $s3, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341ac) {
            ctx->pc = 0x2341D4u;
            goto label_2341d4;
        }
    }
    ctx->pc = 0x2341B4u;
label_2341b4:
    // 0x2341b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2341b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341b8: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2341bc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2341bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2341c0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2341c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2341c4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2341c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2341c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2341c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2341cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2341ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2341d0: 0x439825  or          $s3, $v0, $v1
    ctx->pc = 0x2341d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2341d4:
    // 0x2341d4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2341d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2341d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2341dc: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x2341dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2341e0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2341e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2341e4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2341E4u;
    {
        const bool branch_taken_0x2341e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2341E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341E4u;
        // 0x2341e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341e4) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x2341ECu;
    // 0x2341ec: 0x8f85b770  lw          $a1, -0x4890($gp)
    ctx->pc = 0x2341ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
    // 0x2341f0: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2341F0u;
    {
        const bool branch_taken_0x2341f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2341F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F0u;
        // 0x2341f4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341f0) {
            ctx->pc = 0x234208u;
            goto label_234208;
        }
    }
    ctx->pc = 0x2341F8u;
    // 0x2341f8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2341f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2341fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2341fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x234200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234200u;
    {
        const bool branch_taken_0x234200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234200u;
        // 0x234204: 0x245701fd  addiu       $s7, $v0, 0x1FD (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 509));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234200) {
            ctx->pc = 0x23420Cu;
            goto label_23420c;
        }
    }
    ctx->pc = 0x234208u;
label_234208:
    // 0x234208: 0x24170120  addiu       $s7, $zero, 0x120
    ctx->pc = 0x234208u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_23420c:
    // 0x23420c: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x23420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234210: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x234214: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x234214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x234218: 0x1ca00007  bgtz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x234218u;
    {
        const bool branch_taken_0x234218 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234218u;
        // 0x23421c: 0x2451003b  addiu       $s1, $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234218) {
            ctx->pc = 0x234238u;
            goto label_234238;
        }
    }
    ctx->pc = 0x234220u;
    // 0x234220: 0x8f82b77c  lw          $v0, -0x4884($gp)
    ctx->pc = 0x234220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x234224: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x234224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x234228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23422c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x23422cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x234230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234230u;
    {
        const bool branch_taken_0x234230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234230u;
        // 0x234234: 0x244200dd  addiu       $v0, $v0, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234230) {
            ctx->pc = 0x23423Cu;
            goto label_23423c;
        }
    }
    ctx->pc = 0x234238u;
label_234238:
    // 0x234238: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23423c:
    // 0x23423c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x234240: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x234240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x234244: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x234244u;
    {
        const bool branch_taken_0x234244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234244u;
        // 0x234248: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234244) {
            ctx->pc = 0x234274u;
            goto label_234274;
        }
    }
    ctx->pc = 0x23424Cu;
label_23424c:
    // 0x23424c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23424Cu;
    {
        const bool branch_taken_0x23424c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23424Cu;
        // 0x234250: 0x2482fffe  addiu       $v0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23424c) {
            ctx->pc = 0x234278u;
            goto label_234278;
        }
    }
    ctx->pc = 0x234254u;
    // 0x234254: 0x8f82b778  lw          $v0, -0x4888($gp)
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
    // 0x234258: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23425c: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x23425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x234260: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x234260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x234264: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x234264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x234268: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x234268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x23426c: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x23426cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x234270: 0x2451003b  addiu       $s1, $v0, 0x3B
    ctx->pc = 0x234270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 59));
label_234274:
    // 0x234274: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x234274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_234278:
    // 0x234278: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x234278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23427c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23427Cu;
    {
        const bool branch_taken_0x23427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23427Cu;
        // 0x234280: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23427c) {
            ctx->pc = 0x2342ACu;
            goto label_2342ac;
        }
    }
    ctx->pc = 0x234284u;
    // 0x234284: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x234284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23428c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x234290: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x234294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234298: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23429c: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2342a0: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x2342A0u;
    SET_GPR_U32(ctx, 31, 0x2342A8u);
    ctx->pc = 0x2342A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2342A0u;
    // 0x2342a4: 0x2e23021  addu        $a2, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x2342A0u, 0x2342A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2342A8u;
label_2342a8:
    // 0x2342a8: 0x8f86b780  lw          $a2, -0x4880($gp)
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
label_2342ac:
    // 0x2342ac: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2342acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2342b0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2342B0u;
    {
        const bool branch_taken_0x2342b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342B0u;
        // 0x2342b4: 0x8f83b768  lw          $v1, -0x4898($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342b0) {
            ctx->pc = 0x2343A4u;
            goto label_2343a4;
        }
    }
    ctx->pc = 0x2342B8u;
    // 0x2342b8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2342B8u;
    {
        const bool branch_taken_0x2342b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342B8u;
        // 0x2342bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342b8) {
            ctx->pc = 0x2342E8u;
            goto label_2342e8;
        }
    }
    ctx->pc = 0x2342C0u;
    // 0x2342c0: 0x8f82b764  lw          $v0, -0x489C($gp)
    ctx->pc = 0x2342c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948708)));
    // 0x2342c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2342c8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2342cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2342d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2342d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2342d4: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x2342d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2342d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2342d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2342dc: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x2342dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x2342e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2342E0u;
    {
        const bool branch_taken_0x2342e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342E0u;
        // 0x2342e4: 0x2451003b  addiu       $s1, $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342e0) {
            ctx->pc = 0x234324u;
            goto label_234324;
        }
    }
    ctx->pc = 0x2342E8u;
label_2342e8:
    // 0x2342e8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2342E8u;
    {
        const bool branch_taken_0x2342e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2342ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342E8u;
        // 0x2342ec: 0x9389a02c  lbu         $t1, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342e8) {
            ctx->pc = 0x234328u;
            goto label_234328;
        }
    }
    ctx->pc = 0x2342F0u;
    // 0x2342f0: 0x8f82b77c  lw          $v0, -0x4884($gp)
    ctx->pc = 0x2342f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
    // 0x2342f4: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2342f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2342f8: 0x8f83b764  lw          $v1, -0x489C($gp)
    ctx->pc = 0x2342f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948708)));
    // 0x2342fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2342fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x234300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234304: 0x24170120  addiu       $s7, $zero, 0x120
    ctx->pc = 0x234304u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x234308: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x234308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23430c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23430cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x234310: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x234310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x234314: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x234314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x234318: 0x244200dd  addiu       $v0, $v0, 0xDD
    ctx->pc = 0x234318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 221));
    // 0x23431c: 0x2471003b  addiu       $s1, $v1, 0x3B
    ctx->pc = 0x23431cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 59));
    // 0x234320: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x234320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_234324:
    // 0x234324: 0x9389a02c  lbu         $t1, -0x5FD4($gp)
    ctx->pc = 0x234324u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
label_234328:
    // 0x234328: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x234328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23432c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x23432cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x234330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x234334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234338: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x234338u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x23433c: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x23433cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x234340: 0x2253821  addu        $a3, $s1, $a1
    ctx->pc = 0x234340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x234344: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x234344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x234348: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x234348u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x23434c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x23434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x234350: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x234350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x234354: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x234354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x234358: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x234358u;
    SET_GPR_U32(ctx, 31, 0x234360u);
    ctx->pc = 0x23435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234358u;
    // 0x23435c: 0x35290080  ori         $t1, $t1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x234358u, 0x234360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234360u;
label_234360:
    // 0x234360: 0x8f82b76c  lw          $v0, -0x4894($gp)
    ctx->pc = 0x234360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948716)));
    // 0x234364: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x234364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x234368: 0x9385a02c  lbu         $a1, -0x5FD4($gp)
    ctx->pc = 0x234368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x23436c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234370: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x234370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x234374: 0x3c014384  lui         $at, 0x4384
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17284 << 16));
    // 0x234378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23437c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x23437cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x234380: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x234384: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x234384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x234388: 0x2451003d  addiu       $s1, $v0, 0x3D
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
    // 0x23438c: 0x44916800  mtc1        $s1, $f13
    ctx->pc = 0x23438cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234390: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x234390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x234394: 0xc08b952  jal         func_22E548
    ctx->pc = 0x234394u;
    SET_GPR_U32(ctx, 31, 0x23439Cu);
    ctx->pc = 0x234398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234394u;
    // 0x234398: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x234394u, 0x23439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23439Cu;
label_23439c:
    // 0x23439c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x23439Cu;
    {
        const bool branch_taken_0x23439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23439c) {
            ctx->pc = 0x23442Cu;
            goto label_23442c;
        }
    }
    ctx->pc = 0x2343A4u;
label_2343a4:
    // 0x2343a4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2343a8: 0x8c623a58  lw          $v0, 0x3A58($v1)
    ctx->pc = 0x2343a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A58u));
    // 0x2343ac: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2343acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2343b0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2343B0u;
    {
        const bool branch_taken_0x2343b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2343B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343B0u;
        // 0x2343b4: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343b0) {
            ctx->pc = 0x23442Cu;
            goto label_23442c;
        }
    }
    ctx->pc = 0x2343B8u;
    // 0x2343b8: 0x8f84b760  lw          $a0, -0x48A0($gp)
    ctx->pc = 0x2343b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
    // 0x2343bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2343bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343c0: 0x8f86b774  lw          $a2, -0x488C($gp)
    ctx->pc = 0x2343c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
    // 0x2343c4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x2343c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2343c8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2343c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2343cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2343ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2343d0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2343d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2343d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2343d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2343d8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2343d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2343dc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2343dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2343e0: 0x2884000b  slti        $a0, $a0, 0xB
    ctx->pc = 0x2343e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2343e4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2343E4u;
    {
        const bool branch_taken_0x2343e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343E4u;
        // 0x2343e8: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343e4) {
            ctx->pc = 0x23440Cu;
            goto label_23440c;
        }
    }
    ctx->pc = 0x2343ECu;
    // 0x2343ec: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x2343f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2343f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2343f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2343f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2343f8: 0x3c01431f  lui         $at, 0x431F
    ctx->pc = 0x2343f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17183 << 16));
    // 0x2343fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2343fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234400: 0xc08b952  jal         func_22E548
    ctx->pc = 0x234400u;
    SET_GPR_U32(ctx, 31, 0x234408u);
    ctx->pc = 0x234404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234400u;
    // 0x234404: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x234400u, 0x234408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234408u;
label_234408:
    // 0x234408: 0x8f86b774  lw          $a2, -0x488C($gp)
    ctx->pc = 0x234408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
label_23440c:
    // 0x23440c: 0x18c00007  blez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23440Cu;
    {
        const bool branch_taken_0x23440c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x234410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23440Cu;
        // 0x234410: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23440c) {
            ctx->pc = 0x23442Cu;
            goto label_23442c;
        }
    }
    ctx->pc = 0x234414u;
    // 0x234414: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x234414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x234418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23441c: 0x3c014274  lui         $at, 0x4274
    ctx->pc = 0x23441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17012 << 16));
    // 0x234420: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x234420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x234424: 0xc08b952  jal         func_22E548
    ctx->pc = 0x234424u;
    SET_GPR_U32(ctx, 31, 0x23442Cu);
    ctx->pc = 0x234428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234424u;
    // 0x234428: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x234424u, 0x23442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23442Cu;
label_23442c:
    // 0x23442c: 0xc08089c  jal         func_202270
    ctx->pc = 0x23442Cu;
    SET_GPR_U32(ctx, 31, 0x234434u);
    ctx->pc = 0x234430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23442Cu;
    // 0x234430: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23442Cu, 0x234434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234434u;
label_234434:
    // 0x234434: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x234434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x234438: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x234438u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23443c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x23443cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x234440: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x234440u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x234444: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x234444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234448: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x234448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23444c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x23444cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234450: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x234450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234454: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x234454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234458: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x234458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23445c: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x23445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x234460: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x234460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x234464: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x234464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x234468: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x234468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23446c: 0x3e00008  jr          $ra
    ctx->pc = 0x23446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23446Cu;
        // 0x234470: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234474u;
}
