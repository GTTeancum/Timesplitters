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

// Function: pagebackgroundGfx
// Address: 0x230688 - 0x230a84
void pagebackgroundGfx_0x230688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pagebackgroundGfx_0x230688");
#endif

    switch (ctx->pc) {
        case 0x2306c0u: goto label_2306c0;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306e4u: goto label_2306e4;
        case 0x230770u: goto label_230770;
        case 0x230778u: goto label_230778;
        case 0x230788u: goto label_230788;
        case 0x2307c4u: goto label_2307c4;
        case 0x230854u: goto label_230854;
        case 0x230884u: goto label_230884;
        case 0x2308b4u: goto label_2308b4;
        case 0x2308bcu: goto label_2308bc;
        case 0x230930u: goto label_230930;
        case 0x23094cu: goto label_23094c;
        case 0x230978u: goto label_230978;
        case 0x2309a8u: goto label_2309a8;
        case 0x2309e8u: goto label_2309e8;
        case 0x230a18u: goto label_230a18;
        case 0x230a3cu: goto label_230a3c;
        case 0x230a50u: goto label_230a50;
        case 0x230a58u: goto label_230a58;
        default: break;
    }

    ctx->pc = 0x230688u;

    // 0x230688: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x230688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23068c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x230690: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x230690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230694: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x230694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x230698: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x230698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x23069c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2306a0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2306a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2306a4: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x2306a8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2306a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2306ac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2306acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2306b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2306b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2306b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2306b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2306b8: 0xc08089c  jal         func_202270
    ctx->pc = 0x2306B8u;
    SET_GPR_U32(ctx, 31, 0x2306C0u);
    ctx->pc = 0x2306BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306B8u;
    // 0x2306bc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2306B8u, 0x2306C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306C0u;
label_2306c0:
    // 0x2306c0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2306c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2306c4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2306C4u;
    SET_GPR_U32(ctx, 31, 0x2306CCu);
    ctx->pc = 0x2306C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306C4u;
    // 0x2306c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2306C4u, 0x2306CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306CCu;
label_2306cc:
    // 0x2306cc: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x2306ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2306d0: 0x8ea499f0  lw          $a0, -0x6610($s5)
    ctx->pc = 0x2306d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x2306d4: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x2306d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2306d8: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x2306d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2306dc: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x2306DCu;
    SET_GPR_U32(ctx, 31, 0x2306E4u);
    ctx->pc = 0x2306E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306DCu;
    // 0x2306e0: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x2306DCu, 0x2306E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306E4u;
label_2306e4:
    // 0x2306e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2306e8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2306ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2306ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2306f0: 0x284200f0  slti        $v0, $v0, 0xF0
    ctx->pc = 0x2306f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x2306f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2306F4u;
    {
        const bool branch_taken_0x2306f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306F4u;
        // 0x2306f8: 0x246200f0  addiu       $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306f4) {
            ctx->pc = 0x230700u;
            goto label_230700;
        }
    }
    ctx->pc = 0x2306FCu;
    // 0x2306fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2306fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_230700:
    // 0x230700: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230704: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x230708: 0x268264e0  addiu       $v0, $s4, 0x64E0
    ctx->pc = 0x230708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25824));
    // 0x23070c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23070cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x230710: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x230710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x230714: 0x246350f0  addiu       $v1, $v1, 0x50F0
    ctx->pc = 0x230714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20720));
    // 0x230718: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x230718u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23071c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x23071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x230720: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230724: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x230724u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x230728: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x230728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23072c: 0x26423ed8  addiu       $v0, $s2, 0x3ED8
    ctx->pc = 0x23072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16088));
    // 0x230730: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230730u;
    {
        const bool branch_taken_0x230730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x230734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230730u;
        // 0x230734: 0x83300a  movz        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230730) {
            ctx->pc = 0x230754u;
            goto label_230754;
        }
    }
    ctx->pc = 0x230738u;
    // 0x230738: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x230738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23073c: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x23073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x230740: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230740u;
    {
        const bool branch_taken_0x230740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x230744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230740u;
        // 0x230744: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230740) {
            ctx->pc = 0x230754u;
            goto label_230754;
        }
    }
    ctx->pc = 0x230748u;
    // 0x230748: 0x24424e18  addiu       $v0, $v0, 0x4E18
    ctx->pc = 0x230748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19992));
    // 0x23074c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23074Cu;
    {
        const bool branch_taken_0x23074c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x230750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23074Cu;
        // 0x230750: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23074c) {
            ctx->pc = 0x23075Cu;
            goto label_23075c;
        }
    }
    ctx->pc = 0x230754u;
label_230754:
    // 0x230754: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x230754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230758: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_23075c:
    // 0x23075c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230760: 0x24426500  addiu       $v0, $v0, 0x6500
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25856));
    // 0x230764: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x230764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x230768: 0xc08aae4  jal         func_22AB90
    ctx->pc = 0x230768u;
    SET_GPR_U32(ctx, 31, 0x230770u);
    ctx->pc = 0x23076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230768u;
    // 0x23076c: 0xc2200b  movn        $a0, $a2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AB90u, 0x230768u, 0x230770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230770u;
label_230770:
    // 0x230770: 0xc08a96c  jal         func_22A5B0
    ctx->pc = 0x230770u;
    SET_GPR_U32(ctx, 31, 0x230778u);
    ctx->pc = 0x230774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230770u;
    // 0x230774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A5B0u, 0x230770u, 0x230778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230778u;
label_230778:
    // 0x230778: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x230778u;
    {
        const bool branch_taken_0x230778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230778u;
        // 0x23077c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230778) {
            ctx->pc = 0x230A5Cu;
            goto label_230a5c;
        }
    }
    ctx->pc = 0x230780u;
    // 0x230780: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x230780u;
    SET_GPR_U32(ctx, 31, 0x230788u);
    ctx->pc = 0x230784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230780u;
    // 0x230784: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x230780u, 0x230788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230788u;
label_230788:
    // 0x230788: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x230788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23078c: 0x26423ed8  addiu       $v0, $s2, 0x3ED8
    ctx->pc = 0x23078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16088));
    // 0x230790: 0x10a200ad  beq         $a1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x230790u;
    {
        const bool branch_taken_0x230790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x230794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230790u;
        // 0x230794: 0x3c160035  lui         $s6, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230790) {
            ctx->pc = 0x230A48u;
            goto label_230a48;
        }
    }
    ctx->pc = 0x230798u;
    // 0x230798: 0x26c24d08  addiu       $v0, $s6, 0x4D08
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19720));
    // 0x23079c: 0x10a20048  beq         $a1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x23079Cu;
    {
        const bool branch_taken_0x23079c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2307A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23079Cu;
        // 0x2307a0: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23079c) {
            ctx->pc = 0x2308C0u;
            goto label_2308c0;
        }
    }
    ctx->pc = 0x2307A4u;
    // 0x2307a4: 0x24426440  addiu       $v0, $v0, 0x6440
    ctx->pc = 0x2307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
    // 0x2307a8: 0x10a20045  beq         $a1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2307A8u;
    {
        const bool branch_taken_0x2307a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2307ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307A8u;
        // 0x2307ac: 0x268264e0  addiu       $v0, $s4, 0x64E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307a8) {
            ctx->pc = 0x2308C0u;
            goto label_2308c0;
        }
    }
    ctx->pc = 0x2307B0u;
    // 0x2307b0: 0x10a20044  beq         $a1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2307B0u;
    {
        const bool branch_taken_0x2307b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307B0u;
        // 0x2307b4: 0x26423ed8  addiu       $v0, $s2, 0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307b0) {
            ctx->pc = 0x2308C4u;
            goto label_2308c4;
        }
    }
    ctx->pc = 0x2307B8u;
    // 0x2307b8: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x2307b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2307bc: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x2307BCu;
    SET_GPR_U32(ctx, 31, 0x2307C4u);
    ctx->pc = 0x2307C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307BCu;
    // 0x2307c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x2307BCu, 0x2307C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307C4u;
label_2307c4:
    // 0x2307c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2307c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2307c8: 0x5220003d  beql        $s1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2307C8u;
    {
        const bool branch_taken_0x2307c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2307c8) {
            ctx->pc = 0x2307CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2307C8u;
            // 0x2307cc: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2308C0u;
            goto label_2308c0;
        }
    }
    ctx->pc = 0x2307D0u;
    // 0x2307d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2307d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2307d4: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2307D4u;
    {
        const bool branch_taken_0x2307d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2307d4) {
            ctx->pc = 0x2307D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2307D4u;
            // 0x2307d8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2308C0u;
            goto label_2308c0;
        }
    }
    ctx->pc = 0x2307DCu;
    // 0x2307dc: 0x9448000a  lhu         $t0, 0xA($v0)
    ctx->pc = 0x2307dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2307e0: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x2307e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2307e4: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2307E4u;
    {
        const bool branch_taken_0x2307e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2307e4) {
            ctx->pc = 0x2307E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2307E4u;
            // 0x2307e8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2308C0u;
            goto label_2308c0;
        }
    }
    ctx->pc = 0x2307ECu;
    // 0x2307ec: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2307ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2307f0: 0x26b099f0  addiu       $s0, $s5, -0x6610
    ctx->pc = 0x2307f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2307f4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2307f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2307f8: 0x31080100  andi        $t0, $t0, 0x100
    ctx->pc = 0x2307f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
    // 0x2307fc: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x2307fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230800: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x230800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x230804: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x230808: 0x8ea799f0  lw          $a3, -0x6610($s5)
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x23080c: 0x68200b  movn        $a0, $v1, $t0
    ctx->pc = 0x23080cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x230810: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x230810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230814: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x230814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x230818: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x230818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23081c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x23081cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230820: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230824: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x230824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x230828: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x23082c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x230830: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x230830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x230834: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x230838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23083c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x23083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x230840: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230844: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x230844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x230848: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x230848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x23084c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x23084Cu;
    SET_GPR_U32(ctx, 31, 0x230854u);
    ctx->pc = 0x230850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23084Cu;
    // 0x230850: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x23084Cu, 0x230854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230854u;
label_230854:
    // 0x230854: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x230854u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x230858: 0x3c082828  lui         $t0, 0x2828
    ctx->pc = 0x230858u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10280 << 16));
    // 0x23085c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230860: 0x35085040  ori         $t0, $t0, 0x5040
    ctx->pc = 0x230860u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20544);
    // 0x230864: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x230868: 0x8ea499f0  lw          $a0, -0x6610($s5)
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x23086c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x230870: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x230870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x230874: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x230874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x230878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x230878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23087c: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x23087Cu;
    SET_GPR_U32(ctx, 31, 0x230884u);
    ctx->pc = 0x230880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23087Cu;
    // 0x230880: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x23087Cu, 0x230884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230884u;
label_230884:
    // 0x230884: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x230884u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x230888: 0x3c082828  lui         $t0, 0x2828
    ctx->pc = 0x230888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10280 << 16));
    // 0x23088c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230890: 0x35085040  ori         $t0, $t0, 0x5040
    ctx->pc = 0x230890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20544);
    // 0x230894: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x230894u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x230898: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x230898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23089c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23089cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2308a0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2308a4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2308a8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2308a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2308ac: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x2308ACu;
    SET_GPR_U32(ctx, 31, 0x2308B4u);
    ctx->pc = 0x2308B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308ACu;
    // 0x2308b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x2308ACu, 0x2308B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308B4u;
label_2308b4:
    // 0x2308b4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2308B4u;
    SET_GPR_U32(ctx, 31, 0x2308BCu);
    ctx->pc = 0x2308B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308B4u;
    // 0x2308b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2308B4u, 0x2308BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308BCu;
label_2308bc:
    // 0x2308bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2308c0:
    // 0x2308c0: 0x26423ed8  addiu       $v0, $s2, 0x3ED8
    ctx->pc = 0x2308c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16088));
label_2308c4:
    // 0x2308c4: 0x10a20060  beq         $a1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2308C4u;
    {
        const bool branch_taken_0x2308c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2308C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308C4u;
        // 0x2308c8: 0x26c24d08  addiu       $v0, $s6, 0x4D08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308c4) {
            ctx->pc = 0x230A48u;
            goto label_230a48;
        }
    }
    ctx->pc = 0x2308CCu;
    // 0x2308cc: 0x10a2005e  beq         $a1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2308CCu;
    {
        const bool branch_taken_0x2308cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2308D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308CCu;
        // 0x2308d0: 0x268264e0  addiu       $v0, $s4, 0x64E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308cc) {
            ctx->pc = 0x230A48u;
            goto label_230a48;
        }
    }
    ctx->pc = 0x2308D4u;
    // 0x2308d4: 0x10a2005c  beq         $a1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2308D4u;
    {
        const bool branch_taken_0x2308d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2308D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308D4u;
        // 0x2308d8: 0x3c1001fc  lui         $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308d4) {
            ctx->pc = 0x230A48u;
            goto label_230a48;
        }
    }
    ctx->pc = 0x2308DCu;
    // 0x2308dc: 0x82021388  lb          $v0, 0x1388($s0)
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5000)));
    // 0x2308e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2308E0u;
    {
        const bool branch_taken_0x2308e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E0u;
        // 0x2308e4: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308e0) {
            ctx->pc = 0x23094Cu;
            goto label_23094c;
        }
    }
    ctx->pc = 0x2308E8u;
    // 0x2308e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2308e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2308ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2308ECu;
    {
        const bool branch_taken_0x2308ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308ECu;
        // 0x2308f0: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308ec) {
            ctx->pc = 0x230904u;
            goto label_230904;
        }
    }
    ctx->pc = 0x2308F4u;
    // 0x2308f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2308f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2308f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2308f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2308fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2308FCu;
    {
        const bool branch_taken_0x2308fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308FCu;
        // 0x230900: 0x2447000c  addiu       $a3, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308fc) {
            ctx->pc = 0x230910u;
            goto label_230910;
        }
    }
    ctx->pc = 0x230904u;
label_230904:
    // 0x230904: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x230904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x230908: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x230908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23090c: 0x2467000c  addiu       $a3, $v1, 0xC
    ctx->pc = 0x23090cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_230910:
    // 0x230910: 0x3c08000a  lui         $t0, 0xA
    ctx->pc = 0x230910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)10 << 16));
    // 0x230914: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230918: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x230918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23091c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x23091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x230920: 0x35081480  ori         $t0, $t0, 0x1480
    ctx->pc = 0x230920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5248);
    // 0x230924: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x230924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x230928: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x230928u;
    SET_GPR_U32(ctx, 31, 0x230930u);
    ctx->pc = 0x23092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230928u;
    // 0x23092c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x230928u, 0x230930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230930u;
label_230930:
    // 0x230930: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x230934: 0x26061388  addiu       $a2, $s0, 0x1388
    ctx->pc = 0x230934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5000));
    // 0x230938: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x230938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23093c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x230940: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x230940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x230944: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x230944u;
    SET_GPR_U32(ctx, 31, 0x23094Cu);
    ctx->pc = 0x230948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230944u;
    // 0x230948: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x230944u, 0x23094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23094Cu;
label_23094c:
    // 0x23094c: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x230950: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x230950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x230954: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x230954u;
    {
        const bool branch_taken_0x230954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230954u;
        // 0x230958: 0x3c1101fc  lui         $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230954) {
            ctx->pc = 0x230A48u;
            goto label_230a48;
        }
    }
    ctx->pc = 0x23095Cu;
    // 0x23095c: 0x262211f8  addiu       $v0, $s1, 0x11F8
    ctx->pc = 0x23095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
    // 0x230960: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x230960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230964: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x230964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x230968: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230968u;
    {
        const bool branch_taken_0x230968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230968u;
        // 0x23096c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230968) {
            ctx->pc = 0x230990u;
            goto label_230990;
        }
    }
    ctx->pc = 0x230970u;
    // 0x230970: 0xc089584  jal         func_225610
    ctx->pc = 0x230970u;
    SET_GPR_U32(ctx, 31, 0x230978u);
    ctx->pc = 0x225610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225610u, 0x230970u, 0x230978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230978u;
label_230978:
    // 0x230978: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x230978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x23097c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230980: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230980u;
    {
        const bool branch_taken_0x230980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230980u;
        // 0x230984: 0x262211f8  addiu       $v0, $s1, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230980) {
            ctx->pc = 0x230990u;
            goto label_230990;
        }
    }
    ctx->pc = 0x230988u;
    // 0x230988: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x230988u;
    {
        const bool branch_taken_0x230988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230988u;
        // 0x23098c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230988) {
            ctx->pc = 0x2309B4u;
            goto label_2309b4;
        }
    }
    ctx->pc = 0x230990u;
label_230990:
    // 0x230990: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230994: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x230998: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230998u;
    {
        const bool branch_taken_0x230998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x230998) {
            ctx->pc = 0x2309B4u;
            goto label_2309b4;
        }
    }
    ctx->pc = 0x2309A0u;
    // 0x2309a0: 0xc08956c  jal         func_2255B0
    ctx->pc = 0x2309A0u;
    SET_GPR_U32(ctx, 31, 0x2309A8u);
    ctx->pc = 0x2255B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255B0u, 0x2309A0u, 0x2309A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309A8u;
label_2309a8:
    // 0x2309a8: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2309a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2309ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2309acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2309b0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2309b0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2309b4:
    // 0x2309b4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2309B4u;
    {
        const bool branch_taken_0x2309b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309B4u;
        // 0x2309b8: 0x93849ab5  lbu         $a0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309b4) {
            ctx->pc = 0x230A48u;
            goto label_230a48;
        }
    }
    ctx->pc = 0x2309BCu;
    // 0x2309bc: 0x3c124078  lui         $s2, 0x4078
    ctx->pc = 0x2309bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16504 << 16));
    // 0x2309c0: 0x8f83b45c  lw          $v1, -0x4BA4($gp)
    ctx->pc = 0x2309c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x2309c4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2309c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2309c8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x2309c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2309cc: 0x34427f80  ori         $v0, $v0, 0x7F80
    ctx->pc = 0x2309ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32640);
    // 0x2309d0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2309d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2309d4: 0xa3849ab5  sb          $a0, -0x654B($gp)
    ctx->pc = 0x2309d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 4));
    // 0x2309d8: 0x36527880  ori         $s2, $s2, 0x7880
    ctx->pc = 0x2309d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30848);
    // 0x2309dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2309e0: 0xc08089c  jal         func_202270
    ctx->pc = 0x2309E0u;
    SET_GPR_U32(ctx, 31, 0x2309E8u);
    ctx->pc = 0x2309E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309E0u;
    // 0x2309e4: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2309E0u, 0x2309E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309E8u;
label_2309e8:
    // 0x2309e8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2309ec: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2309f0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2309f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2309f4: 0x26a499f0  addiu       $a0, $s5, -0x6610
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2309f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2309fc: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x2309fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x230a00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230a04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230a08: 0x2631ff91  addiu       $s1, $s1, -0x6F
    ctx->pc = 0x230a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967185));
    // 0x230a0c: 0x8c90065c  lw          $s0, 0x65C($a0)
    ctx->pc = 0x230a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x230a10: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x230A10u;
    SET_GPR_U32(ctx, 31, 0x230A18u);
    ctx->pc = 0x230A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A10u;
    // 0x230a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x230A10u, 0x230A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A18u;
label_230a18:
    // 0x230a18: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x230a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x230a1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230a24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x230a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a28: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x230a28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x230a2c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x230a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x230a30: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x230a34: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x230A34u;
    SET_GPR_U32(ctx, 31, 0x230A3Cu);
    ctx->pc = 0x230A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A34u;
    // 0x230a38: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x230A34u, 0x230A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A3Cu;
label_230a3c:
    // 0x230a3c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x230a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x230a40: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x230a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x230a44: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x230a44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
label_230a48:
    // 0x230a48: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x230A48u;
    SET_GPR_U32(ctx, 31, 0x230A50u);
    ctx->pc = 0x230A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A48u;
    // 0x230a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x230A48u, 0x230A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A50u;
label_230a50:
    // 0x230a50: 0xc08089c  jal         func_202270
    ctx->pc = 0x230A50u;
    SET_GPR_U32(ctx, 31, 0x230A58u);
    ctx->pc = 0x230A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A50u;
    // 0x230a54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x230A50u, 0x230A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A58u;
label_230a58:
    // 0x230a58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x230a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_230a5c:
    // 0x230a5c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x230a5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230a60: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x230a60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230a64: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x230a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230a68: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x230a68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230a6c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x230a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230a70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x230a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230a74: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x230a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230a78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x230a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x230A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A7Cu;
        // 0x230a80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A84u;
}
