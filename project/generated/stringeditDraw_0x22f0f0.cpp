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

// Function: stringeditDraw
// Address: 0x22f0f0 - 0x22f81c
void stringeditDraw_0x22f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stringeditDraw_0x22f0f0");
#endif

    switch (ctx->pc) {
        case 0x22f12cu: goto label_22f12c;
        case 0x22f138u: goto label_22f138;
        case 0x22f198u: goto label_22f198;
        case 0x22f284u: goto label_22f284;
        case 0x22f2f0u: goto label_22f2f0;
        case 0x22f428u: goto label_22f428;
        case 0x22f464u: goto label_22f464;
        case 0x22f47cu: goto label_22f47c;
        case 0x22f4b4u: goto label_22f4b4;
        case 0x22f518u: goto label_22f518;
        case 0x22f570u: goto label_22f570;
        case 0x22f588u: goto label_22f588;
        case 0x22f5b0u: goto label_22f5b0;
        case 0x22f5e0u: goto label_22f5e0;
        case 0x22f628u: goto label_22f628;
        case 0x22f6a0u: goto label_22f6a0;
        case 0x22f6d4u: goto label_22f6d4;
        case 0x22f72cu: goto label_22f72c;
        case 0x22f748u: goto label_22f748;
        case 0x22f774u: goto label_22f774;
        case 0x22f7b0u: goto label_22f7b0;
        case 0x22f7b8u: goto label_22f7b8;
        case 0x22f7ecu: goto label_22f7ec;
        default: break;
    }

    ctx->pc = 0x22f0f0u;

    // 0x22f0f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x22f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x22f0f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x22f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x22f0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0fc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x22f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x22f100: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x22f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x22f104: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x22f104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f108: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x22f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x22f10c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f110: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x22f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x22f114: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x22f114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x22f118: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x22f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x22f11c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x22f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x22f120: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x22f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x22f124: 0xc08089c  jal         func_202270
    ctx->pc = 0x22F124u;
    SET_GPR_U32(ctx, 31, 0x22F12Cu);
    ctx->pc = 0x22F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F124u;
    // 0x22f128: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22F124u, 0x22F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F12Cu;
label_22f12c:
    // 0x22f12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f130: 0xc08bfb6  jal         func_22FED8
    ctx->pc = 0x22F130u;
    SET_GPR_U32(ctx, 31, 0x22F138u);
    ctx->pc = 0x22F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F130u;
    // 0x22f134: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED8u, 0x22F130u, 0x22F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F138u;
label_22f138:
    // 0x22f138: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22f13c: 0x8f84a034  lw          $a0, -0x5FCC($gp)
    ctx->pc = 0x22f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f140: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x22f140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x22f144: 0x8c4699f0  lw          $a2, -0x6610($v0)
    ctx->pc = 0x22f144u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3299F0u));
    // 0x22f148: 0x8c680014  lw          $t0, 0x14($v1)
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x329A04u));
    // 0x22f14c: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x22f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
    // 0x22f150: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f154: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x22f154u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x22f158: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x22f158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22f15c: 0x34422080  ori         $v0, $v0, 0x2080
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8320);
    // 0x22f160: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x22f160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22f164: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x22f164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22f168: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x22f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x22f16c: 0x105a021  addu        $s4, $t0, $a1
    ctx->pc = 0x22f16cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x22f170: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x22f170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x22f174: 0x35297f80  ori         $t1, $t1, 0x7F80
    ctx->pc = 0x22f174u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32640);
    // 0x22f178: 0x5e480a  movz        $t1, $v0, $fp
    ctx->pc = 0x22f178u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x22f17c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x22f17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x22f180: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x22f180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22f184: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22f184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f18c: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x22f18cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x22f190: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x22F190u;
    SET_GPR_U32(ctx, 31, 0x22F198u);
    ctx->pc = 0x22F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F190u;
    // 0x22f194: 0x2a63021  addu        $a2, $s5, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x22F190u, 0x22F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F198u;
label_22f198:
    // 0x22f198: 0x8f88a034  lw          $t0, -0x5FCC($gp)
    ctx->pc = 0x22f198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f19c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x22f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f1a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f1a4: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x22f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x22f1a8: 0x8d070028  lw          $a3, 0x28($t0)
    ctx->pc = 0x22f1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x22f1ac: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x22f1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22f1b0: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x22f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x22f1b4: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x22f1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22f1b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x22f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22f1bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f1c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22f1c4: 0x90900000  lbu         $s0, 0x0($a0)
    ctx->pc = 0x22f1c4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f1c8: 0x282b821  addu        $s7, $s4, $v0
    ctx->pc = 0x22f1c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x22f1cc: 0x2a0200fc  slti        $v0, $s0, 0xFC
    ctx->pc = 0x22f1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x22f1d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22F1D0u;
    {
        const bool branch_taken_0x22f1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1D0u;
        // 0x22f1d4: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1d0) {
            ctx->pc = 0x22F218u;
            goto label_22f218;
        }
    }
    ctx->pc = 0x22F1D8u;
    // 0x22f1d8: 0x2602ff04  addiu       $v0, $s0, -0xFC
    ctx->pc = 0x22f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967044));
    // 0x22f1dc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22f1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f1e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x22f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x22f1e8: 0x24632f30  addiu       $v1, $v1, 0x2F30
    ctx->pc = 0x22f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12080));
    // 0x22f1ec: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x22f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x22f1f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f1f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f1f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f1fc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x22f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22f200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f204: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22f208: 0x600013  mtlo        $v1
    ctx->pc = 0x22f208u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x22f20c: 0x70a4b000  madd        $s6, $a1, $a0
    ctx->pc = 0x22f20cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x22f210: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F210u;
    {
        const bool branch_taken_0x22f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F210u;
        // 0x22f214: 0x443018  mult        $a2, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f210) {
            ctx->pc = 0x22F228u;
            goto label_22f228;
        }
    }
    ctx->pc = 0x22F218u;
label_22f218:
    // 0x22f218: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22f21c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22f220: 0x600013  mtlo        $v1
    ctx->pc = 0x22f220u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x22f224: 0x70e2b000  madd        $s6, $a3, $v0
    ctx->pc = 0x22f224u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_22f228:
    // 0x22f228: 0x8d07002c  lw          $a3, 0x2C($t0)
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x22f22c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f230: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x22f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x22f234: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x22f234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22f238: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x22f238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x22f23c: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x22f240: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22f240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22f244: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x22f244u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x22f248: 0x26e4000b  addiu       $a0, $s7, 0xB
    ctx->pc = 0x22f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 11));
    // 0x22f24c: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x22f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x22f250: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22f250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22f254: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x22f254u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x22f258: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22f258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x22f25c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f260: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x22f264: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22f268: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x22f268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x22f26c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x22f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x22f270: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x22f270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f274: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22f274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f278: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22f278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22f27c: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22F27Cu;
    SET_GPR_U32(ctx, 31, 0x22F284u);
    ctx->pc = 0x22F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F27Cu;
    // 0x22f280: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22F27Cu, 0x22F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F284u;
label_22f284:
    // 0x22f284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f288: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22f288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22f28c: 0x26a30014  addiu       $v1, $s5, 0x14
    ctx->pc = 0x22f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x22f290: 0x2685000a  addiu       $a1, $s4, 0xA
    ctx->pc = 0x22f290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
    // 0x22f294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22f294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f298: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f29c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F29Cu;
    {
        const bool branch_taken_0x22f29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F29Cu;
        // 0x22f2a0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f29c) {
            ctx->pc = 0x22F2B8u;
            goto label_22f2b8;
        }
    }
    ctx->pc = 0x22F2A4u;
    // 0x22f2a4: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f2a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f2ac: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x22f2b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F2B0u;
    {
        const bool branch_taken_0x22f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2B0u;
        // 0x22f2b4: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2b0) {
            ctx->pc = 0x22F2C4u;
            goto label_22f2c4;
        }
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f2bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f2c0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22f2c4:
    // 0x22f2c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22f2c8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22f2c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22f2cc: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x22f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22f2d0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x22f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x22f2d4: 0x2683fff2  addiu       $v1, $s4, -0xE
    ctx->pc = 0x22f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967282));
    // 0x22f2d8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x22f2dc: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x22f2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f2e0: 0x24522c18  addiu       $s2, $v0, 0x2C18
    ctx->pc = 0x22f2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x22f2e4: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x22f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x22f2e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2ec: 0x8f87a034  lw          $a3, -0x5FCC($gp)
    ctx->pc = 0x22f2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
label_22f2f0:
    // 0x22f2f0: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x22f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x22f2f4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22f2f8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22f2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f2fc: 0x2c6200fc  sltiu       $v0, $v1, 0xFC
    ctx->pc = 0x22f2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)252) ? 1 : 0);
    // 0x22f300: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x22F300u;
    {
        const bool branch_taken_0x22f300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f300) {
            ctx->pc = 0x22F304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F300u;
            // 0x22f304: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F474u;
            goto label_22f474;
        }
    }
    ctx->pc = 0x22F308u;
    // 0x22f308: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x22f308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22f30c: 0x2442ff04  addiu       $v0, $v0, -0xFC
    ctx->pc = 0x22f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967044));
    // 0x22f310: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22f310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f314: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22f318: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x22f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x22f31c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x22f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f324: 0x56620064  bnel        $s3, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x22F324u;
    {
        const bool branch_taken_0x22f324 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f324) {
            ctx->pc = 0x22F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F324u;
            // 0x22f328: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F4B8u;
            goto label_22f4b8;
        }
    }
    ctx->pc = 0x22F32Cu;
    // 0x22f32c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22f330: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22f330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f334: 0x24632f30  addiu       $v1, $v1, 0x2F30
    ctx->pc = 0x22f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12080));
    // 0x22f338: 0x240600fd  addiu       $a2, $zero, 0xFD
    ctx->pc = 0x22f338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x22f33c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x22f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f344: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22f344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22f348: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x22f348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22f34c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f350: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22f350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22f354: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x22f354u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x22f358: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x22f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x22f35c: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x22f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x22f360: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f364: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22f368: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x22f36c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22f36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f370: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x22F370u;
    {
        const bool branch_taken_0x22f370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x22F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F370u;
        // 0x22f374: 0x286200fe  slti        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)254) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f370) {
            ctx->pc = 0x22F3C4u;
            goto label_22f3c4;
        }
    }
    ctx->pc = 0x22F378u;
    // 0x22f378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F378u;
    {
        const bool branch_taken_0x22f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F378u;
        // 0x22f37c: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f378) {
            ctx->pc = 0x22F390u;
            goto label_22f390;
        }
    }
    ctx->pc = 0x22F380u;
    // 0x22f380: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22F380u;
    {
        const bool branch_taken_0x22f380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F380u;
        // 0x22f384: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f380) {
            ctx->pc = 0x22F3DCu;
            goto label_22f3dc;
        }
    }
    ctx->pc = 0x22F388u;
    // 0x22f388: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22F388u;
    {
        const bool branch_taken_0x22f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f388) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F390u;
label_22f390:
    // 0x22f390: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x22f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x22f394: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F394u;
    {
        const bool branch_taken_0x22f394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F394u;
        // 0x22f398: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f394) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F39Cu;
    // 0x22f39c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F39Cu;
    {
        const bool branch_taken_0x22f39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F39Cu;
        // 0x22f3a0: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f39c) {
            ctx->pc = 0x22F410u;
            goto label_22f410;
        }
    }
    ctx->pc = 0x22F3A4u;
    // 0x22f3a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22F3A4u;
    {
        const bool branch_taken_0x22f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3a4) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F3ACu;
label_22f3ac:
    // 0x22f3ac: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x22f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x22f3b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f3b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f3bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22F3BCu;
    {
        const bool branch_taken_0x22f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x8c7107b0  lw          $s1, 0x7B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3bc) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F3C4u;
label_22f3c4:
    // 0x22f3c4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x22f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x22f3c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f3cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f3d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f3d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22F3D4u;
    {
        const bool branch_taken_0x22f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3D4u;
        // 0x22f3d8: 0x8c7107b4  lw          $s1, 0x7B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3d4) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x24842f40  addiu       $a0, $a0, 0x2F40
    ctx->pc = 0x22f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12096));
    // 0x22f3e0: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F3E0u;
    {
        const bool branch_taken_0x22f3e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3E0u;
        // 0x22f3e4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3e0) {
            ctx->pc = 0x22F3FCu;
            goto label_22f3fc;
        }
    }
    ctx->pc = 0x22F3E8u;
    // 0x22f3e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f3ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f3f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f3f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22F3F4u;
    {
        const bool branch_taken_0x22f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3F4u;
        // 0x22f3f8: 0x8c7107b8  lw          $s1, 0x7B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3f4) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F3FCu;
label_22f3fc:
    // 0x22f3fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f400: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f404: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F408u;
    {
        const bool branch_taken_0x22f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F408u;
        // 0x22f40c: 0x8c7107bc  lw          $s1, 0x7BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f408) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F410u;
label_22f410:
    // 0x22f410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f414: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f418: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f41c: 0x8c7107c0  lw          $s1, 0x7C0($v1)
    ctx->pc = 0x22f41cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1984)));
label_22f420:
    // 0x22f420: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22F420u;
    SET_GPR_U32(ctx, 31, 0x22F428u);
    ctx->pc = 0x22F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F420u;
    // 0x22f424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22F420u, 0x22F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F428u;
label_22f428:
    // 0x22f428: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x22f428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22f42c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f434: 0x3c07407f  lui         $a3, 0x407F
    ctx->pc = 0x22f434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16511 << 16));
    // 0x22f438: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x22f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f43c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22f43cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22f440: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x22f440u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f444: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x22f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x22f448: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x22f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x22f44c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22f450: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f454: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22f454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22f458: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22f458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f45c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x22F45Cu;
    SET_GPR_U32(ctx, 31, 0x22F464u);
    ctx->pc = 0x22F460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F45Cu;
    // 0x22f460: 0x34e74080  ori         $a3, $a3, 0x4080 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x22F45Cu, 0x22F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F464u;
label_22f464:
    // 0x22f464: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22f464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22f468: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x22f468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x22f46c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22F46Cu;
    {
        const bool branch_taken_0x22f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F46Cu;
        // 0x22f470: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f46c) {
            ctx->pc = 0x22F4B4u;
            goto label_22f4b4;
        }
    }
    ctx->pc = 0x22F474u;
label_22f474:
    // 0x22f474: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22F474u;
    SET_GPR_U32(ctx, 31, 0x22F47Cu);
    ctx->pc = 0x22F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F474u;
    // 0x22f478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22F474u, 0x22F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F47Cu;
label_22f47c:
    // 0x22f47c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x22f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22f480: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f488: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x22f488u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x22f48c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22f48cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22f490: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x22f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f494: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x22f494u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f498: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x22f498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x22f49c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22f4a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22f4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4a4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22f4a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f4ac: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x22F4ACu;
    SET_GPR_U32(ctx, 31, 0x22F4B4u);
    ctx->pc = 0x22F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4ACu;
    // 0x22f4b0: 0x34e76480  ori         $a3, $a3, 0x6480 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x22F4ACu, 0x22F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4B4u;
label_22f4b4:
    // 0x22f4b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22f4b8:
    // 0x22f4b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22f4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22f4bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x22f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f4c0: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x22f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x22f4c4: 0x16630007  bne         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F4C4u;
    {
        const bool branch_taken_0x22f4c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4C4u;
        // 0x22f4c8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4c4) {
            ctx->pc = 0x22F4E4u;
            goto label_22f4e4;
        }
    }
    ctx->pc = 0x22F4CCu;
    // 0x22f4cc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x22f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f4d0: 0x2482ff10  addiu       $v0, $a0, -0xF0
    ctx->pc = 0x22f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967056));
    // 0x22f4d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22f4d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4dc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x22f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x22f4e0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x22f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_22f4e4:
    // 0x22f4e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22f4e8: 0x2e020037  sltiu       $v0, $s0, 0x37
    ctx->pc = 0x22f4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)55) ? 1 : 0);
    // 0x22f4ec: 0x5440ff80  bnel        $v0, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x22F4ECu;
    {
        const bool branch_taken_0x22f4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f4ec) {
            ctx->pc = 0x22F4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F4ECu;
            // 0x22f4f0: 0x8f87a034  lw          $a3, -0x5FCC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f2f0;
        }
    }
    ctx->pc = 0x22F4F4u;
    // 0x22f4f4: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F4F4u;
    {
        const bool branch_taken_0x22f4f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4F4u;
        // 0x22f4f8: 0x8fa6002c  lw          $a2, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4f4) {
            ctx->pc = 0x22F518u;
            goto label_22f518;
        }
    }
    ctx->pc = 0x22F4FCu;
    // 0x22f4fc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x22f4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x22f500: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x22f500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22f504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f508: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22f508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f50c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f510: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x22F510u;
    SET_GPR_U32(ctx, 31, 0x22F518u);
    ctx->pc = 0x22F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F510u;
    // 0x22f514: 0x35297f80  ori         $t1, $t1, 0x7F80 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x22F510u, 0x22F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F518u;
label_22f518:
    // 0x22f518: 0x8f84a034  lw          $a0, -0x5FCC($gp)
    ctx->pc = 0x22f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f51c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x22f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22f520: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x22f520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f524: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x22F524u;
    {
        const bool branch_taken_0x22f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F524u;
        // 0x22f528: 0x2683ffe6  addiu       $v1, $s4, -0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f524) {
            ctx->pc = 0x22F5E8u;
            goto label_22f5e8;
        }
    }
    ctx->pc = 0x22F52Cu;
    // 0x22f52c: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x22f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22f530: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x22f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22f534: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x22f538: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x22f538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22f53c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x22f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22f540: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x22f540u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22f544: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22f548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f54c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22f54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f550: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22f550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22f554: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x22f554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x22f558: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x22f55c: 0x24a7000a  addiu       $a3, $a1, 0xA
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x22f560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22f560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f564: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22f564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22f568: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22F568u;
    SET_GPR_U32(ctx, 31, 0x22F570u);
    ctx->pc = 0x22F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F568u;
    // 0x22f56c: 0x863021  addu        $a2, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22F568u, 0x22F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F570u;
label_22f570:
    // 0x22f570: 0x8f82a034  lw          $v0, -0x5FCC($gp)
    ctx->pc = 0x22f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f574: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22f578: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F578u;
    {
        const bool branch_taken_0x22f578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F578u;
        // 0x22f57c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f578) {
            ctx->pc = 0x22F58Cu;
            goto label_22f58c;
        }
    }
    ctx->pc = 0x22F580u;
    // 0x22f580: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22F580u;
    SET_GPR_U32(ctx, 31, 0x22F588u);
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22F580u, 0x22F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F588u;
label_22f588:
    // 0x22f588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f58c:
    // 0x22f58c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F58Cu;
    {
        const bool branch_taken_0x22f58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F58Cu;
        // 0x22f590: 0x8f82a034  lw          $v0, -0x5FCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f58c) {
            ctx->pc = 0x22F5B0u;
            goto label_22f5b0;
        }
    }
    ctx->pc = 0x22F594u;
    // 0x22f594: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x22f594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x22f598: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f59c: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x22f59cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x22f5a0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22f5a4: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x22f5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x22f5a8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22F5A8u;
    SET_GPR_U32(ctx, 31, 0x22F5B0u);
    ctx->pc = 0x22F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F5A8u;
    // 0x22f5ac: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22F5A8u, 0x22F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5B0u;
label_22f5b0:
    // 0x22f5b0: 0x13c00070  beqz        $fp, . + 4 + (0x70 << 2)
    ctx->pc = 0x22F5B0u;
    {
        const bool branch_taken_0x22f5b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5B0u;
        // 0x22f5b4: 0x8f82b45c  lw          $v0, -0x4BA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5b0) {
            ctx->pc = 0x22F774u;
            goto label_22f774;
        }
    }
    ctx->pc = 0x22F5B8u;
    // 0x22f5b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22f5bc: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x22F5BCu;
    {
        const bool branch_taken_0x22f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5BCu;
        // 0x22f5c0: 0x3c074078  lui         $a3, 0x4078 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5bc) {
            ctx->pc = 0x22F774u;
            goto label_22f774;
        }
    }
    ctx->pc = 0x22F5C4u;
    // 0x22f5c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f5c8: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x22f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f5cc: 0x2786a030  addiu       $a2, $gp, -0x5FD0
    ctx->pc = 0x22f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942768));
    // 0x22f5d0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x22f5d4: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x22f5d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x22f5d8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22F5D8u;
    SET_GPR_U32(ctx, 31, 0x22F5E0u);
    ctx->pc = 0x22F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F5D8u;
    // 0x22f5dc: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22F5D8u, 0x22F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5E0u;
label_22f5e0:
    // 0x22f5e0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x22F5E0u;
    {
        const bool branch_taken_0x22f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5E0u;
        // 0x22f5e4: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5e0) {
            ctx->pc = 0x22F778u;
            goto label_22f778;
        }
    }
    ctx->pc = 0x22F5E8u;
label_22f5e8:
    // 0x22f5e8: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22f5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22f5ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f5f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F5F0u;
    {
        const bool branch_taken_0x22f5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5F0u;
        // 0x22f5f4: 0x8c910014  lw          $s1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5f0) {
            ctx->pc = 0x22F60Cu;
            goto label_22f60c;
        }
    }
    ctx->pc = 0x22F5F8u;
    // 0x22f5f8: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f5fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22f600: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22f604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F604u;
    {
        const bool branch_taken_0x22f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F604u;
        // 0x22f608: 0xa28018  mult        $s0, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f604) {
            ctx->pc = 0x22F618u;
            goto label_22f618;
        }
    }
    ctx->pc = 0x22F60Cu;
label_22f60c:
    // 0x22f60c: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f610: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f614: 0xa38018  mult        $s0, $a1, $v1
    ctx->pc = 0x22f614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_22f618:
    // 0x22f618: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22f61c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x22f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22f620: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x22F620u;
    SET_GPR_U32(ctx, 31, 0x22F628u);
    ctx->pc = 0x22F624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F620u;
    // 0x22f624: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x22F620u, 0x22F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F628u;
label_22f628:
    // 0x22f628: 0x8f85a034  lw          $a1, -0x5FCC($gp)
    ctx->pc = 0x22f628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f62c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x22f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x22f630: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x22f630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22f634: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22f638: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x22f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22f63c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22f63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22f640: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x22f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
    // 0x22f644: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x22f648: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22f64c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F64Cu;
    {
        const bool branch_taken_0x22f64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F64Cu;
        // 0x22f650: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f64c) {
            ctx->pc = 0x22F668u;
            goto label_22f668;
        }
    }
    ctx->pc = 0x22F654u;
    // 0x22f654: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f658: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x22f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22f65c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F660u;
    {
        const bool branch_taken_0x22f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F660u;
        // 0x22f664: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f660) {
            ctx->pc = 0x22F674u;
            goto label_22f674;
        }
    }
    ctx->pc = 0x22F668u;
label_22f668:
    // 0x22f668: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f66c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x22f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22f670: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22f670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22f674:
    // 0x22f674: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x22f674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22f678: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x22f678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f67c: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x22f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
    // 0x22f680: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x22f680u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x22f684: 0x34422080  ori         $v0, $v0, 0x2080
    ctx->pc = 0x22f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8320);
    // 0x22f688: 0x35297f80  ori         $t1, $t1, 0x7F80
    ctx->pc = 0x22f688u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32640);
    // 0x22f68c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f690: 0x5e480a  movz        $t1, $v0, $fp
    ctx->pc = 0x22f690u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x22f694: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x22f694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f698: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x22F698u;
    SET_GPR_U32(ctx, 31, 0x22F6A0u);
    ctx->pc = 0x22F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F698u;
    // 0x22f69c: 0x24082880  addiu       $t0, $zero, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x22F698u, 0x22F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6A0u;
label_22f6a0:
    // 0x22f6a0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f6a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f6a8: 0x8f83a034  lw          $v1, -0x5FCC($gp)
    ctx->pc = 0x22f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f6ac: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x22f6b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22f6b4: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x22f6b8: 0x8c660038  lw          $a2, 0x38($v1)
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x22f6bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6c0: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x22f6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x22f6c4: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x22f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x22f6c8: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x22f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    // 0x22f6cc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22F6CCu;
    SET_GPR_U32(ctx, 31, 0x22F6D4u);
    ctx->pc = 0x22F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6CCu;
    // 0x22f6d0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22F6CCu, 0x22F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6D4u;
label_22f6d4:
    // 0x22f6d4: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22f6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22f6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f6dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F6DCu;
    {
        const bool branch_taken_0x22f6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6DCu;
        // 0x22f6e0: 0x8f849a9c  lw          $a0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6dc) {
            ctx->pc = 0x22F6F8u;
            goto label_22f6f8;
        }
    }
    ctx->pc = 0x22F6E4u;
    // 0x22f6e4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x22f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f6e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22f6ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22f6ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22f6f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F6F0u;
    {
        const bool branch_taken_0x22f6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6F0u;
        // 0x22f6f4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6f0) {
            ctx->pc = 0x22F708u;
            goto label_22f708;
        }
    }
    ctx->pc = 0x22F6F8u;
label_22f6f8:
    // 0x22f6f8: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22f6fc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x22f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f700: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x22f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22f708:
    // 0x22f708: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x22f708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x22f70c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f710: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x22f710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x22f714: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x22f714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f718: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x22f718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22f71c: 0xb03821  addu        $a3, $a1, $s0
    ctx->pc = 0x22f71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x22f720: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22f724: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22F724u;
    SET_GPR_U32(ctx, 31, 0x22F72Cu);
    ctx->pc = 0x22F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F724u;
    // 0x22f728: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22F724u, 0x22F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F72Cu;
label_22f72c:
    // 0x22f72c: 0x8f82a034  lw          $v0, -0x5FCC($gp)
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f730: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x22f734: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f738: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x22f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x22f73c: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x22f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22f740: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x22F740u;
    SET_GPR_U32(ctx, 31, 0x22F748u);
    ctx->pc = 0x22F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F740u;
    // 0x22f744: 0x34e77880  ori         $a3, $a3, 0x7880 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x22F740u, 0x22F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F748u;
label_22f748:
    // 0x22f748: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x22F748u;
    {
        const bool branch_taken_0x22f748 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F748u;
        // 0x22f74c: 0x8f82b454  lw          $v0, -0x4BAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f748) {
            ctx->pc = 0x22F774u;
            goto label_22f774;
        }
    }
    ctx->pc = 0x22F750u;
    // 0x22f750: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22f754: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F754u;
    {
        const bool branch_taken_0x22f754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F754u;
        // 0x22f758: 0x3c074078  lui         $a3, 0x4078 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f754) {
            ctx->pc = 0x22F774u;
            goto label_22f774;
        }
    }
    ctx->pc = 0x22F75Cu;
    // 0x22f75c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f760: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x22f760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22f764: 0x2786a030  addiu       $a2, $gp, -0x5FD0
    ctx->pc = 0x22f764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942768));
    // 0x22f768: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x22f768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x22f76c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22F76Cu;
    SET_GPR_U32(ctx, 31, 0x22F774u);
    ctx->pc = 0x22F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F76Cu;
    // 0x22f770: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22F76Cu, 0x22F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F774u;
label_22f774:
    // 0x22f774: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x22f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_22f778:
    // 0x22f778: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x22f77c: 0x24832c18  addiu       $v1, $a0, 0x2C18
    ctx->pc = 0x22f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x22f780: 0x8f86a034  lw          $a2, -0x5FCC($gp)
    ctx->pc = 0x22f780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22f78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f790: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22f794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f798: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x22f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x22f79c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x22f7a0: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x22f7a4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x22f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22f7a8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22F7A8u;
    SET_GPR_U32(ctx, 31, 0x22F7B0u);
    ctx->pc = 0x22F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7A8u;
    // 0x22f7ac: 0x8c6607c4  lw          $a2, 0x7C4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22F7A8u, 0x22F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7B0u;
label_22f7b0:
    // 0x22f7b0: 0xc08089c  jal         func_202270
    ctx->pc = 0x22F7B0u;
    SET_GPR_U32(ctx, 31, 0x22F7B8u);
    ctx->pc = 0x22F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7B0u;
    // 0x22f7b4: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22F7B0u, 0x22F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7B8u;
label_22f7b8:
    // 0x22f7b8: 0x17c0000d  bnez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7B8u;
        // 0x22f7bc: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F7F0u;
            goto label_22f7f0;
        }
    }
    ctx->pc = 0x22F7C0u;
    // 0x22f7c0: 0x8f82a034  lw          $v0, -0x5FCC($gp)
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22f7c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22f7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22f7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7cc: 0x24082860  addiu       $t0, $zero, 0x2860
    ctx->pc = 0x22f7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10336));
    // 0x22f7d0: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x22f7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f7d4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x22f7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22f7d8: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x22f7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x22f7dc: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x22f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x22f7e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x22f7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x22f7e4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22F7E4u;
    SET_GPR_U32(ctx, 31, 0x22F7ECu);
    ctx->pc = 0x22F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7E4u;
    // 0x22f7e8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22F7E4u, 0x22F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7ECu;
label_22f7ec:
    // 0x22f7ec: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x22f7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_22f7f0:
    // 0x22f7f0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x22f7f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22f7f4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x22f7f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22f7f8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x22f7f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22f7fc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x22f7fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f800: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x22f800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f804: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x22f804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f808: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x22f808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f80c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x22f80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f810: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x22f810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f814: 0x3e00008  jr          $ra
    ctx->pc = 0x22F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F814u;
        // 0x22f818: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F81Cu;
}
