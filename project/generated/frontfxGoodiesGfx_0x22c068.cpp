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

// Function: frontfxGoodiesGfx
// Address: 0x22c068 - 0x22c1cc
void frontfxGoodiesGfx_0x22c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxGoodiesGfx_0x22c068");
#endif

    switch (ctx->pc) {
        case 0x22c0a0u: goto label_22c0a0;
        case 0x22c0b0u: goto label_22c0b0;
        case 0x22c108u: goto label_22c108;
        case 0x22c12cu: goto label_22c12c;
        case 0x22c140u: goto label_22c140;
        case 0x22c198u: goto label_22c198;
        default: break;
    }

    ctx->pc = 0x22c068u;

    // 0x22c068: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22c068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22c06c: 0x8f849f98  lw          $a0, -0x6068($gp)
    ctx->pc = 0x22c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
    // 0x22c070: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22c070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22c074: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22c078: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22c078u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c07c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22c080: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22c080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c084: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22c088: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x22c088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22c08c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22c090: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22c094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22c094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c098: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22C098u;
    SET_GPR_U32(ctx, 31, 0x22C0A0u);
    ctx->pc = 0x22C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C098u;
    // 0x22c09c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22C098u, 0x22C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0A0u;
label_22c0a0:
    // 0x22c0a0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22c0a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0a8: 0x24522b40  addiu       $s2, $v0, 0x2B40
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11072));
    // 0x22c0ac: 0x8f859f98  lw          $a1, -0x6068($gp)
    ctx->pc = 0x22c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
label_22c0b0:
    // 0x22c0b0: 0x1322021  addu        $a0, $t1, $s2
    ctx->pc = 0x22c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x22c0b4: 0x8f86b498  lw          $a2, -0x4B68($gp)
    ctx->pc = 0x22c0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22c0b8: 0x111600  sll         $v0, $s1, 24
    ctx->pc = 0x22c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x22c0bc: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x22c0bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22c0c0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22c0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c0c4: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x22c0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22c0c8: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x22c0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x22c0cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c0d0: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x22c0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x22c0d4: 0x25240040  addiu       $a0, $t1, 0x40
    ctx->pc = 0x22c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x22c0d8: 0x25260041  addiu       $a2, $t1, 0x41
    ctx->pc = 0x22c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 65));
    // 0x22c0dc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x22c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x22c0e0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x22c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x22c0e4: 0x94ab0002  lhu         $t3, 0x2($a1)
    ctx->pc = 0x22c0e4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22c0e8: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x22c0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x22c0ec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22c0f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22c0f4: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x22c0f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x22c0f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c0f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0fc: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x22c0fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22c100: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22C100u;
    SET_GPR_U32(ctx, 31, 0x22C108u);
    ctx->pc = 0x22C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C100u;
    // 0x22c104: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22C100u, 0x22C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C108u;
label_22c108:
    // 0x22c108: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x22c108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c10c: 0x29220100  slti        $v0, $t1, 0x100
    ctx->pc = 0x22c10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x22c110: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x22C110u;
    {
        const bool branch_taken_0x22c110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C110u;
        // 0x22c114: 0x8f859f98  lw          $a1, -0x6068($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c110) {
            ctx->pc = 0x22C0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c0b0;
        }
    }
    ctx->pc = 0x22C118u;
    // 0x22c118: 0x8f849f9c  lw          $a0, -0x6064($gp)
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
    // 0x22c11c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22c11cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22c120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c124: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22C124u;
    SET_GPR_U32(ctx, 31, 0x22C12Cu);
    ctx->pc = 0x22C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C124u;
    // 0x22c128: 0x24130028  addiu       $s3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22C124u, 0x22C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C12Cu;
label_22c12c:
    // 0x22c12c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22c130: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c134: 0x24522b40  addiu       $s2, $v0, 0x2B40
    ctx->pc = 0x22c134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11072));
    // 0x22c138: 0x8f859f9c  lw          $a1, -0x6064($gp)
    ctx->pc = 0x22c138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
    // 0x22c13c: 0x0  nop
    ctx->pc = 0x22c13cu;
    // NOP
label_22c140:
    // 0x22c140: 0x1322021  addu        $a0, $t1, $s2
    ctx->pc = 0x22c140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x22c144: 0x8f86b498  lw          $a2, -0x4B68($gp)
    ctx->pc = 0x22c144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22c148: 0x111600  sll         $v0, $s1, 24
    ctx->pc = 0x22c148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x22c14c: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x22c14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22c150: 0x90830100  lbu         $v1, 0x100($a0)
    ctx->pc = 0x22c150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x22c154: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x22c154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22c158: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x22c158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x22c15c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c160: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x22c160u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x22c164: 0x25240140  addiu       $a0, $t1, 0x140
    ctx->pc = 0x22c164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 320));
    // 0x22c168: 0x25260141  addiu       $a2, $t1, 0x141
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 321));
    // 0x22c16c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x22c170: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x22c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x22c174: 0x94ab0002  lhu         $t3, 0x2($a1)
    ctx->pc = 0x22c174u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22c178: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x22c178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x22c17c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22c180: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22c180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22c184: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x22c184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x22c188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22c188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c18c: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x22c18cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22c190: 0xc0ae302  jal         func_2B8C08
    ctx->pc = 0x22C190u;
    SET_GPR_U32(ctx, 31, 0x22C198u);
    ctx->pc = 0x22C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C190u;
    // 0x22c194: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8C08u, 0x22C190u, 0x22C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C198u;
label_22c198:
    // 0x22c198: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x22c198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c19c: 0x29220100  slti        $v0, $t1, 0x100
    ctx->pc = 0x22c19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x22c1a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x22C1A0u;
    {
        const bool branch_taken_0x22c1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1A0u;
        // 0x22c1a4: 0x8f859f9c  lw          $a1, -0x6064($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1a0) {
            ctx->pc = 0x22C140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c140;
        }
    }
    ctx->pc = 0x22C1A8u;
    // 0x22c1a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c1ac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22c1acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c1b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22c1b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c1b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22c1b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c1b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22c1b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c1bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22c1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c1c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22c1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1C4u;
        // 0x22c1c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C1CCu;
}
