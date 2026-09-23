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

// Function: r_addnewroutes
// Address: 0x266810 - 0x266a3c
void r_addnewroutes_0x266810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_addnewroutes_0x266810");
#endif

    switch (ctx->pc) {
        case 0x2668b0u: goto label_2668b0;
        case 0x266910u: goto label_266910;
        case 0x266920u: goto label_266920;
        case 0x266930u: goto label_266930;
        case 0x266948u: goto label_266948;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669e8u: goto label_2669e8;
        default: break;
    }

    ctx->pc = 0x266810u;

    // 0x266810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x266810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x266814: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x266818: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x266818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26681c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26681cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266820: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x266820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x266824: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x266824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x266828: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x266828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26682c: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x26682cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x266830: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x266830u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x266834: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x266834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x266838: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x266838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26683c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x26683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x266840: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x266840u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x266844: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x266844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x266848: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x266848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26684c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x266850: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x266850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x266854: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266858: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26685c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266860: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x266860u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x266864: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x266864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x266868: 0x8f86a350  lw          $a2, -0x5CB0($gp)
    ctx->pc = 0x266868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943568)));
    // 0x26686c: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x26686cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x266870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266874: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x266878: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26687c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266880: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x266880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x266884: 0x8c960008  lw          $s6, 0x8($a0)
    ctx->pc = 0x266884u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x266888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26688c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266890: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x266890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x266894: 0x1ac00059  blez        $s6, . + 4 + (0x59 << 2)
    ctx->pc = 0x266894u;
    {
        const bool branch_taken_0x266894 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x266898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266894u;
        // 0x266898: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266894) {
            ctx->pc = 0x2669FCu;
            goto label_2669fc;
        }
    }
    ctx->pc = 0x26689Cu;
    // 0x26689c: 0x3c0201fd  lui         $v0, 0x1FD
    ctx->pc = 0x26689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)509 << 16));
    // 0x2668a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2668a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2668a4: 0x2457a31c  addiu       $s7, $v0, -0x5CE4
    ctx->pc = 0x2668a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943516));
    // 0x2668a8: 0x3c1e01fd  lui         $fp, 0x1FD
    ctx->pc = 0x2668a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)509 << 16));
    // 0x2668ac: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2668acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2668b0:
    // 0x2668b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2668b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2668b4: 0x8f83a2f0  lw          $v1, -0x5D10($gp)
    ctx->pc = 0x2668b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2668b8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2668b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2668bc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2668bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2668c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2668c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2668c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2668c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2668c8: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x2668C8u;
    {
        const bool branch_taken_0x2668c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668c8) {
            ctx->pc = 0x2668CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2668C8u;
            // 0x2668cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2669ECu;
            goto label_2669ec;
        }
    }
    ctx->pc = 0x2668D0u;
    // 0x2668d0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2668d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2668d4: 0x54b50003  bnel        $a1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2668D4u;
    {
        const bool branch_taken_0x2668d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x2668d4) {
            ctx->pc = 0x2668D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2668D4u;
            // 0x2668d8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2668E4u;
            goto label_2668e4;
        }
    }
    ctx->pc = 0x2668DCu;
    // 0x2668dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2668DCu;
    {
        const bool branch_taken_0x2668dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668DCu;
        // 0x2668e0: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668dc) {
            ctx->pc = 0x2668FCu;
            goto label_2668fc;
        }
    }
    ctx->pc = 0x2668E4u;
label_2668e4:
    // 0x2668e4: 0x54550041  bnel        $v0, $s5, . + 4 + (0x41 << 2)
    ctx->pc = 0x2668E4u;
    {
        const bool branch_taken_0x2668e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2668e4) {
            ctx->pc = 0x2668E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2668E4u;
            // 0x2668e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2669ECu;
            goto label_2669ec;
        }
    }
    ctx->pc = 0x2668ECu;
    // 0x2668ec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2668ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2668f0: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2668F0u;
    {
        const bool branch_taken_0x2668f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2668f0) {
            ctx->pc = 0x2668F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2668F0u;
            // 0x2668f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2669ECu;
            goto label_2669ec;
        }
    }
    ctx->pc = 0x2668F8u;
    // 0x2668f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2668f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2668fc:
    // 0x2668fc: 0x8f82b8f4  lw          $v0, -0x470C($gp)
    ctx->pc = 0x2668fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949108)));
    // 0x266900: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x266900u;
    {
        const bool branch_taken_0x266900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x266904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266900u;
        // 0x266904: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266900) {
            ctx->pc = 0x266A00u;
            goto label_266a00;
        }
    }
    ctx->pc = 0x266908u;
    // 0x266908: 0xc0999fc  jal         func_2667F0
    ctx->pc = 0x266908u;
    SET_GPR_U32(ctx, 31, 0x266910u);
    ctx->pc = 0x2667F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2667F0u, 0x266908u, 0x266910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266910u;
label_266910:
    // 0x266910: 0x4600b540  add.s       $f21, $f22, $f0
    ctx->pc = 0x266910u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x266914: 0x8f85b8f4  lw          $a1, -0x470C($gp)
    ctx->pc = 0x266914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949108)));
    // 0x266918: 0xc0999da  jal         func_266768
    ctx->pc = 0x266918u;
    SET_GPR_U32(ctx, 31, 0x266920u);
    ctx->pc = 0x26691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266918u;
    // 0x26691c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266768u, 0x266918u, 0x266920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266920u;
label_266920:
    // 0x266920: 0x4600ad00  add.s       $f20, $f21, $f0
    ctx->pc = 0x266920u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x266924: 0x2784b8e0  addiu       $a0, $gp, -0x4720
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949088));
    // 0x266928: 0xc0999a0  jal         func_266680
    ctx->pc = 0x266928u;
    SET_GPR_U32(ctx, 31, 0x266930u);
    ctx->pc = 0x26692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266928u;
    // 0x26692c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266680u, 0x266928u, 0x266930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266930u;
label_266930:
    // 0x266930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266934: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x266934u;
    {
        const bool branch_taken_0x266934 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x266938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266934u;
        // 0x266938: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266934) {
            ctx->pc = 0x26695Cu;
            goto label_26695c;
        }
    }
    ctx->pc = 0x26693Cu;
    // 0x26693c: 0x2784b8e8  addiu       $a0, $gp, -0x4718
    ctx->pc = 0x26693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949096));
    // 0x266940: 0xc0999a0  jal         func_266680
    ctx->pc = 0x266940u;
    SET_GPR_U32(ctx, 31, 0x266948u);
    ctx->pc = 0x266944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266940u;
    // 0x266944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266680u, 0x266940u, 0x266948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266948u;
label_266948:
    // 0x266948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26694c: 0x4a00020  bltz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26694Cu;
    {
        const bool branch_taken_0x26694c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x266950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26694Cu;
        // 0x266950: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26694c) {
            ctx->pc = 0x2669D0u;
            goto label_2669d0;
        }
    }
    ctx->pc = 0x266954u;
    // 0x266954: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x266954u;
    {
        const bool branch_taken_0x266954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266954u;
        // 0x266958: 0x771021  addu        $v0, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266954) {
            ctx->pc = 0x266980u;
            goto label_266980;
        }
    }
    ctx->pc = 0x26695Cu;
label_26695c:
    // 0x26695c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x26695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x266960: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266964: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266968: 0x0  nop
    ctx->pc = 0x266968u;
    // NOP
    // 0x26696c: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x26696Cu;
    {
        const bool branch_taken_0x26696c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26696c) {
            ctx->pc = 0x266970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26696Cu;
            // 0x266970: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2669ECu;
            goto label_2669ec;
        }
    }
    ctx->pc = 0x266974u;
    // 0x266974: 0x2784b8e0  addiu       $a0, $gp, -0x4720
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949088));
    // 0x266978: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x266978u;
    {
        const bool branch_taken_0x266978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266978) {
            ctx->pc = 0x2669A8u;
            goto label_2669a8;
        }
    }
    ctx->pc = 0x266980u;
label_266980:
    // 0x266980: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266984: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x266984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266988: 0x0  nop
    ctx->pc = 0x266988u;
    // NOP
    // 0x26698c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26698Cu;
    {
        const bool branch_taken_0x26698c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26698Cu;
        // 0x266990: 0x27c4a310  addiu       $a0, $fp, -0x5CF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26698c) {
            ctx->pc = 0x2669E8u;
            goto label_2669e8;
        }
    }
    ctx->pc = 0x266994u;
    // 0x266994: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266998: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x266998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26699c: 0x54700013  bnel        $v1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26699Cu;
    {
        const bool branch_taken_0x26699c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x26699c) {
            ctx->pc = 0x2669A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26699Cu;
            // 0x2669a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2669ECu;
            goto label_2669ec;
        }
    }
    ctx->pc = 0x2669A4u;
    // 0x2669a4: 0x2784b8e8  addiu       $a0, $gp, -0x4718
    ctx->pc = 0x2669a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949096));
label_2669a8:
    // 0x2669a8: 0xc0999b0  jal         func_2666C0
    ctx->pc = 0x2669A8u;
    SET_GPR_U32(ctx, 31, 0x2669B0u);
    ctx->pc = 0x2669ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669A8u;
    // 0x2669ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2666C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2666C0u, 0x2669A8u, 0x2669B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669B0u;
label_2669b0:
    // 0x2669b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2669b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2669b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2669b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2669b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2669b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2669bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2669bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2669c0: 0xc099972  jal         func_2665C8
    ctx->pc = 0x2669C0u;
    SET_GPR_U32(ctx, 31, 0x2669C8u);
    ctx->pc = 0x2669C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669C0u;
    // 0x2669c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2665C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2665C8u, 0x2669C0u, 0x2669C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669C8u;
label_2669c8:
    // 0x2669c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2669C8u;
    {
        const bool branch_taken_0x2669c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669C8u;
        // 0x2669cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669c8) {
            ctx->pc = 0x2669F0u;
            goto label_2669f0;
        }
    }
    ctx->pc = 0x2669D0u;
label_2669d0:
    // 0x2669d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2669d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2669d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2669d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2669d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2669d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2669dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2669dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2669e0: 0xc099972  jal         func_2665C8
    ctx->pc = 0x2669E0u;
    SET_GPR_U32(ctx, 31, 0x2669E8u);
    ctx->pc = 0x2669E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669E0u;
    // 0x2669e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2665C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2665C8u, 0x2669E0u, 0x2669E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669E8u;
label_2669e8:
    // 0x2669e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2669e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2669ec:
    // 0x2669ec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2669ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2669f0:
    // 0x2669f0: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x2669f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2669f4: 0x5440ffae  bnel        $v0, $zero, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2669F4u;
    {
        const bool branch_taken_0x2669f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2669f4) {
            ctx->pc = 0x2669F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2669F4u;
            // 0x2669f8: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2668B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2668b0;
        }
    }
    ctx->pc = 0x2669FCu;
label_2669fc:
    // 0x2669fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2669fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_266a00:
    // 0x266a00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x266a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x266a04: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x266a04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x266a08: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x266a08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266a0c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x266a0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266a10: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x266a10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266a14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x266a14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266a18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x266a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266a1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x266a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266a20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x266a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266a28: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x266a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x266a2c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x266a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x266a30: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x266a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266a34: 0x3e00008  jr          $ra
    ctx->pc = 0x266A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A34u;
        // 0x266a38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266A3Cu;
}
