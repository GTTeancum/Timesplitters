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

// Function: __umoddi3
// Address: 0x2e2830 - 0x2e2d70
void ps2___umoddi3_0x2e2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___umoddi3_0x2e2830");
#endif

    ctx->pc = 0x2e2830u;

    // 0x2e2830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2834: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x2e2834u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2e2838: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x2e2838u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2e283c: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x2e283cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e2840: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2e2840u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2e2844: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x2e2844u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e2848: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2e2848u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2e284c: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2E284Cu;
    {
        const bool branch_taken_0x2e284c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E284Cu;
        // 0x2e2850: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e284c) {
            ctx->pc = 0x2E2B1Cu;
            goto label_2e2b1c;
        }
    }
    ctx->pc = 0x2E2854u;
    // 0x2e2854: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x2e2854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2858: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2858u;
    {
        const bool branch_taken_0x2e2858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2858u;
        // 0x2e285c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2858) {
            ctx->pc = 0x2E28E8u;
            goto label_2e28e8;
        }
    }
    ctx->pc = 0x2E2860u;
    // 0x2e2860: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e2860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2864: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2864u;
    {
        const bool branch_taken_0x2e2864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2864u;
        // 0x2e2868: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2864) {
            ctx->pc = 0x2E2880u;
            goto label_2e2880;
        }
    }
    ctx->pc = 0x2E286Cu;
    // 0x2e286c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e286cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e2870: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e2870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e2874: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2874u;
    {
        const bool branch_taken_0x2e2874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2874u;
        // 0x2e2878: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2874) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E287Cu;
    // 0x2e287c: 0x0  nop
    ctx->pc = 0x2e287cu;
    // NOP
label_2e2880:
    // 0x2e2880: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e2880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e2884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2888: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e2888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e288c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e288cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2890: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e2890u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e2894: 0x0  nop
    ctx->pc = 0x2e2894u;
    // NOP
label_2e2898:
    // 0x2e2898: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e2898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e289c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e289cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e28a0: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x2e28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
    // 0x2e28a4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e28a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e28ac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e28acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e28b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e28b4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2e28b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e28b8: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E28B8u;
    {
        const bool branch_taken_0x2e28b8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28B8u;
        // 0x2e28bc: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28b8) {
            ctx->pc = 0x2E28D4u;
            goto label_2e28d4;
        }
    }
    ctx->pc = 0x2E28C0u;
    // 0x2e28c0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2e28c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e28c4: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2e28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e28c8: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2e28c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e28cc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e28ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e28d0: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2e28d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_2e28d4:
    // 0x2e28d4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e28d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e28d8: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2e28d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e28dc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2E28DCu;
    {
        const bool branch_taken_0x2e28dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28DCu;
        // 0x2e28e0: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28dc) {
            ctx->pc = 0x2E2A60u;
            goto label_2e2a60;
        }
    }
    ctx->pc = 0x2E28E4u;
    // 0x2e28e4: 0x0  nop
    ctx->pc = 0x2e28e4u;
    // NOP
label_2e28e8:
    // 0x2e28e8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E28E8u;
    {
        const bool branch_taken_0x2e28e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28E8u;
        // 0x2e28ec: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28e8) {
            ctx->pc = 0x2E2910u;
            goto label_2e2910;
        }
    }
    ctx->pc = 0x2E28F0u;
    // 0x2e28f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e28f4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E28F4u;
    {
        const bool branch_taken_0x2e28f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28f4) {
            ctx->pc = 0x2E28F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E28F4u;
            // 0x2e28f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28FCu;
            goto label_2e28fc;
        }
    }
    ctx->pc = 0x2E28FCu;
label_2e28fc:
    // 0x2e28fc: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x2e28fcu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e2900: 0x1012  mflo        $v0
    ctx->pc = 0x2e2900u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2904: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e2904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2908: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e2908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e290c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e290cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e2910:
    // 0x2e2910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2910u;
    {
        const bool branch_taken_0x2e2910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2910u;
        // 0x2e2914: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2910) {
            ctx->pc = 0x2E2928u;
            goto label_2e2928;
        }
    }
    ctx->pc = 0x2E2918u;
    // 0x2e2918: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2e2918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e291c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e2920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2920u;
    {
        const bool branch_taken_0x2e2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2920u;
        // 0x2e2924: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2920) {
            ctx->pc = 0x2E2940u;
            goto label_2e2940;
        }
    }
    ctx->pc = 0x2E2928u;
label_2e2928:
    // 0x2e2928: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e292c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2930: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e2930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e2934: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2e2934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2938: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e2938u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e293c: 0x0  nop
    ctx->pc = 0x2e293cu;
    // NOP
label_2e2940:
    // 0x2e2940: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e2940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e2944: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2e2944u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e2948: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x2e2948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
    // 0x2e294c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e294cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e2950: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e2950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e2954: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e2954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2958: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e2958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e295c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2e295cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e2960: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2960u;
    {
        const bool branch_taken_0x2e2960 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2960u;
        // 0x2e2964: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2960) {
            ctx->pc = 0x2E2978u;
            goto label_2e2978;
        }
    }
    ctx->pc = 0x2E2968u;
    // 0x2e2968: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x2e2968u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2e296c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e296cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e2970: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2E2970u;
    {
        const bool branch_taken_0x2e2970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2970u;
        // 0x2e2974: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2970) {
            ctx->pc = 0x2E2A54u;
            goto label_2e2a54;
        }
    }
    ctx->pc = 0x2E2978u;
label_2e2978:
    // 0x2e2978: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2e2978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e297c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2e297cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2980: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2e2980u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2984: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e2984u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2988: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2e2988u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e298c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2e298cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2990: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2e2990u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2e2994: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x2e2994u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e2998: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x2e2998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2e299c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e299cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e29a0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2e29a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2e29a4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E29A4u;
    {
        const bool branch_taken_0x2e29a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29a4) {
            ctx->pc = 0x2E29A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E29A4u;
            // 0x2e29a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E29ACu;
            goto label_2e29ac;
        }
    }
    ctx->pc = 0x2E29ACu;
label_2e29ac:
    // 0x2e29ac: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2e29acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e29b0: 0x1012  mflo        $v0
    ctx->pc = 0x2e29b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e29b4: 0x1810  mfhi        $v1
    ctx->pc = 0x2e29b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e29b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e29b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e29bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e29bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e29c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e29c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e29c4: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x2e29c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e29c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e29c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e29cc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e29ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e29d0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E29D0u;
    {
        const bool branch_taken_0x2e29d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29d0) {
            ctx->pc = 0x2E29D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E29D0u;
            // 0x2e29d4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E29FCu;
            goto label_2e29fc;
        }
    }
    ctx->pc = 0x2E29D8u;
    // 0x2e29d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e29dc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e29dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e29e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E29E0u;
    {
        const bool branch_taken_0x2e29e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e29e0) {
            ctx->pc = 0x2E29E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E29E0u;
            // 0x2e29e4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E29FCu;
            goto label_2e29fc;
        }
    }
    ctx->pc = 0x2E29E8u;
    // 0x2e29e8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e29e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e29ec: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E29ECu;
    {
        const bool branch_taken_0x2e29ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e29ec) {
            ctx->pc = 0x2E29F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E29ECu;
            // 0x2e29f0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E29F8u;
            goto label_2e29f8;
        }
    }
    ctx->pc = 0x2E29F4u;
    // 0x2e29f4: 0x0  nop
    ctx->pc = 0x2e29f4u;
    // NOP
label_2e29f8:
    // 0x2e29f8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e29fc:
    // 0x2e29fc: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2e29fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e2a00: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x2e2a00u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2a04: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2A04u;
    {
        const bool branch_taken_0x2e2a04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a04) {
            ctx->pc = 0x2E2A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A04u;
            // 0x2e2a08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A0Cu;
            goto label_2e2a0c;
        }
    }
    ctx->pc = 0x2E2A0Cu;
label_2e2a0c:
    // 0x2e2a0c: 0x1012  mflo        $v0
    ctx->pc = 0x2e2a0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2a10: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2a10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2a14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2a18: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2a1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2a1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2a20: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x2e2a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2a24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2a28: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2a2c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2A2Cu;
    {
        const bool branch_taken_0x2e2a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a2c) {
            ctx->pc = 0x2E2A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A2Cu;
            // 0x2e2a30: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A54u;
            goto label_2e2a54;
        }
    }
    ctx->pc = 0x2E2A34u;
    // 0x2e2a34: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e2a38: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e2a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2a3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2A3Cu;
    {
        const bool branch_taken_0x2e2a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A3Cu;
        // 0x2e2a40: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a3c) {
            ctx->pc = 0x2E2A54u;
            goto label_2e2a54;
        }
    }
    ctx->pc = 0x2E2A44u;
    // 0x2e2a44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2a48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2A48u;
    {
        const bool branch_taken_0x2e2a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a48) {
            ctx->pc = 0x2E2A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A48u;
            // 0x2e2a4c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A50u;
            goto label_2e2a50;
        }
    }
    ctx->pc = 0x2E2A50u;
label_2e2a50:
    // 0x2e2a50: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x2e2a50u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e2a54:
    // 0x2e2a54: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2e2a54u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2e2a58: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e2a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a5c: 0x0  nop
    ctx->pc = 0x2e2a5cu;
    // NOP
label_2e2a60:
    // 0x2e2a60: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2e2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2e2a64: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2A64u;
    {
        const bool branch_taken_0x2e2a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a64) {
            ctx->pc = 0x2E2A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A64u;
            // 0x2e2a68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A6Cu;
            goto label_2e2a6c;
        }
    }
    ctx->pc = 0x2E2A6Cu;
label_2e2a6c:
    // 0x2e2a6c: 0x1012  mflo        $v0
    ctx->pc = 0x2e2a6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2a70: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2a70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2a74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2a78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2a7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2a7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2a80: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x2e2a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2a84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2a88: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2a8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2A8Cu;
    {
        const bool branch_taken_0x2e2a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a8c) {
            ctx->pc = 0x2E2A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A8Cu;
            // 0x2e2a90: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AB4u;
            goto label_2e2ab4;
        }
    }
    ctx->pc = 0x2E2A94u;
    // 0x2e2a94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e2a98: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e2a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2a9c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2A9Cu;
    {
        const bool branch_taken_0x2e2a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a9c) {
            ctx->pc = 0x2E2AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A9Cu;
            // 0x2e2aa0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AB4u;
            goto label_2e2ab4;
        }
    }
    ctx->pc = 0x2E2AA4u;
    // 0x2e2aa4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2aa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2AA8u;
    {
        const bool branch_taken_0x2e2aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2aa8) {
            ctx->pc = 0x2E2AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2AA8u;
            // 0x2e2aac: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AB0u;
            goto label_2e2ab0;
        }
    }
    ctx->pc = 0x2E2AB0u;
label_2e2ab0:
    // 0x2e2ab0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2e2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e2ab4:
    // 0x2e2ab4: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2e2ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2e2ab8: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2e2ab8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2abc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2ABCu;
    {
        const bool branch_taken_0x2e2abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2abc) {
            ctx->pc = 0x2E2AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2ABCu;
            // 0x2e2ac0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AC4u;
            goto label_2e2ac4;
        }
    }
    ctx->pc = 0x2E2AC4u;
label_2e2ac4:
    // 0x2e2ac4: 0x1012  mflo        $v0
    ctx->pc = 0x2e2ac4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2ac8: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2ac8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2acc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2ad0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2ad4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2ad8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x2e2ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2e2adc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2ae0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2e2ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e2ae4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2AE4u;
    {
        const bool branch_taken_0x2e2ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ae4) {
            ctx->pc = 0x2E2B04u;
            goto label_2e2b04;
        }
    }
    ctx->pc = 0x2E2AECu;
    // 0x2e2aec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2e2af0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2e2af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2af4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2AF4u;
    {
        const bool branch_taken_0x2e2af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2AF4u;
        // 0x2e2af8: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2af4) {
            ctx->pc = 0x2E2B04u;
            goto label_2e2b04;
        }
    }
    ctx->pc = 0x2E2AFCu;
    // 0x2e2afc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2AFCu;
    {
        const bool branch_taken_0x2e2afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2afc) {
            ctx->pc = 0x2E2B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2AFCu;
            // 0x2e2b00: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B04u;
            goto label_2e2b04;
        }
    }
    ctx->pc = 0x2E2B04u;
label_2e2b04:
    // 0x2e2b04: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x2E2B04u;
    {
        const bool branch_taken_0x2e2b04 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B04u;
        // 0x2e2b08: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b04) {
            ctx->pc = 0x2E2D64u;
            goto label_2e2d64;
        }
    }
    ctx->pc = 0x2E2B0Cu;
    // 0x2e2b0c: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x2e2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e2b14: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2E2B14u;
    {
        const bool branch_taken_0x2e2b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B14u;
        // 0x2e2b18: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b14) {
            ctx->pc = 0x2E2D60u;
            goto label_2e2d60;
        }
    }
    ctx->pc = 0x2E2B1Cu;
label_2e2b1c:
    // 0x2e2b1c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x2e2b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2b20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2B20u;
    {
        const bool branch_taken_0x2e2b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B20u;
        // 0x2e2b24: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b20) {
            ctx->pc = 0x2E2B3Cu;
            goto label_2e2b3c;
        }
    }
    ctx->pc = 0x2E2B28u;
    // 0x2e2b28: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2e2b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e2b2c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x2e2b2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e2b30: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x2e2b30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x2e2b34: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E2B34u;
    {
        const bool branch_taken_0x2e2b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B34u;
        // 0x2e2b38: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b34) {
            ctx->pc = 0x2E2D64u;
            goto label_2e2d64;
        }
    }
    ctx->pc = 0x2E2B3Cu;
label_2e2b3c:
    // 0x2e2b3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e2b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e2b40: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e2b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2b44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2B44u;
    {
        const bool branch_taken_0x2e2b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B44u;
        // 0x2e2b48: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b44) {
            ctx->pc = 0x2E2B60u;
            goto label_2e2b60;
        }
    }
    ctx->pc = 0x2E2B4Cu;
    // 0x2e2b4c: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2e2b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2e2b50: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e2b54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2B54u;
    {
        const bool branch_taken_0x2e2b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B54u;
        // 0x2e2b58: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b54) {
            ctx->pc = 0x2E2B78u;
            goto label_2e2b78;
        }
    }
    ctx->pc = 0x2E2B5Cu;
    // 0x2e2b5c: 0x0  nop
    ctx->pc = 0x2e2b5cu;
    // NOP
label_2e2b60:
    // 0x2e2b60: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2e2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e2b64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2b68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e2b6c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2e2b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2b70: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2e2b70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2e2b74: 0x0  nop
    ctx->pc = 0x2e2b74u;
    // NOP
label_2e2b78:
    // 0x2e2b78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e2b7c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2e2b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e2b80: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
    // 0x2e2b84: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e2b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e2b88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e2b8c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e2b8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2b90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e2b94: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x2e2b94u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e2b98: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E2B98u;
    {
        const bool branch_taken_0x2e2b98 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B98u;
        // 0x2e2b9c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b98) {
            ctx->pc = 0x2E2BE0u;
            goto label_2e2be0;
        }
    }
    ctx->pc = 0x2E2BA0u;
    // 0x2e2ba0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2e2ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2e2ba4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2BA4u;
    {
        const bool branch_taken_0x2e2ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BA4u;
        // 0x2e2ba8: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ba4) {
            ctx->pc = 0x2E2BB8u;
            goto label_2e2bb8;
        }
    }
    ctx->pc = 0x2E2BACu;
    // 0x2e2bac: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x2e2bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e2bb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2BB0u;
    {
        const bool branch_taken_0x2e2bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2bb0) {
            ctx->pc = 0x2E2BC8u;
            goto label_2e2bc8;
        }
    }
    ctx->pc = 0x2E2BB8u;
label_2e2bb8:
    // 0x2e2bb8: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x2e2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2e2bbc: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2e2bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2bc0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2e2bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e2bc4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2e2bc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2bc8:
    // 0x2e2bc8: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E2BC8u;
    {
        const bool branch_taken_0x2e2bc8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BC8u;
        // 0x2e2bcc: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bc8) {
            ctx->pc = 0x2E2D64u;
            goto label_2e2d64;
        }
    }
    ctx->pc = 0x2E2BD0u;
    // 0x2e2bd0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2e2bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2e2bd4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x2e2bd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e2bd8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2E2BD8u;
    {
        const bool branch_taken_0x2e2bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BD8u;
        // 0x2e2bdc: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bd8) {
            ctx->pc = 0x2E2D60u;
            goto label_2e2d60;
        }
    }
    ctx->pc = 0x2E2BE0u;
label_2e2be0:
    // 0x2e2be0: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x2e2be0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2be4: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x2e2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2be8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2e2be8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2bec: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2e2becu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2bf0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2e2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2bf4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e2bf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2bf8: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x2e2bf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2e2bfc: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2e2bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2c00: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2e2c00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2c04: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x2e2c04u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2e2c08: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2e2c08u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2e2c0c: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x2e2c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2e2c10: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2e2c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2e2c14: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2C14u;
    {
        const bool branch_taken_0x2e2c14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c14) {
            ctx->pc = 0x2E2C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C14u;
            // 0x2e2c18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C1Cu;
            goto label_2e2c1c;
        }
    }
    ctx->pc = 0x2E2C1Cu;
label_2e2c1c:
    // 0x2e2c1c: 0x1012  mflo        $v0
    ctx->pc = 0x2e2c1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2c20: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2c20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2c24: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2e2c24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2c2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2c30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2c30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2c34: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x2e2c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e2c38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2c3c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e2c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2c40: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2C40u;
    {
        const bool branch_taken_0x2e2c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c40) {
            ctx->pc = 0x2E2C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C40u;
            // 0x2e2c44: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C74u;
            goto label_2e2c74;
        }
    }
    ctx->pc = 0x2E2C48u;
    // 0x2e2c48: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e2c4c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2e2c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2c50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2C50u;
    {
        const bool branch_taken_0x2e2c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C50u;
        // 0x2e2c54: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c50) {
            ctx->pc = 0x2E2C70u;
            goto label_2e2c70;
        }
    }
    ctx->pc = 0x2E2C58u;
    // 0x2e2c58: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2e2c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2c5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C5Cu;
    {
        const bool branch_taken_0x2e2c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c5c) {
            ctx->pc = 0x2E2C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C5Cu;
            // 0x2e2c60: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C74u;
            goto label_2e2c74;
        }
    }
    ctx->pc = 0x2E2C64u;
    // 0x2e2c64: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2e2c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2e2c68: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e2c6c: 0x0  nop
    ctx->pc = 0x2e2c6cu;
    // NOP
label_2e2c70:
    // 0x2e2c70: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2e2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2e2c74:
    // 0x2e2c74: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2C74u;
    {
        const bool branch_taken_0x2e2c74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c74) {
            ctx->pc = 0x2E2C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C74u;
            // 0x2e2c78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C7Cu;
            goto label_2e2c7c;
        }
    }
    ctx->pc = 0x2E2C7Cu;
label_2e2c7c:
    // 0x2e2c7c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2e2c7cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e2c80: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2e2c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e2c84: 0x1012  mflo        $v0
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e2c88: 0x1810  mfhi        $v1
    ctx->pc = 0x2e2c88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e2c8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e2c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2c94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2c98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e2c98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e2c9c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x2e2c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2e2ca0: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2e2ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2ca4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2e2ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2ca8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2CA8u;
    {
        const bool branch_taken_0x2e2ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CA8u;
        // 0x2e2cac: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ca8) {
            ctx->pc = 0x2E2CD8u;
            goto label_2e2cd8;
        }
    }
    ctx->pc = 0x2E2CB0u;
    // 0x2e2cb0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2e2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2e2cb4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2e2cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e2cb8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2CB8u;
    {
        const bool branch_taken_0x2e2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CB8u;
        // 0x2e2cbc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cb8) {
            ctx->pc = 0x2E2CD4u;
            goto label_2e2cd4;
        }
    }
    ctx->pc = 0x2E2CC0u;
    // 0x2e2cc0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2e2cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2CC4u;
    {
        const bool branch_taken_0x2e2cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CC4u;
        // 0x2e2cc8: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cc4) {
            ctx->pc = 0x2E2CD8u;
            goto label_2e2cd8;
        }
    }
    ctx->pc = 0x2E2CCCu;
    // 0x2e2ccc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e2cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e2cd0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2e2cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2e2cd4:
    // 0x2e2cd4: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x2e2cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_2e2cd8:
    // 0x2e2cd8: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2e2cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e2cdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2ce0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e2ce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e2ce4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2e2ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ce8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e2ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e2cec: 0x480019  multu       $v0, $t0
    ctx->pc = 0x2e2cecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e2cf0: 0x3810  mfhi        $a3
    ctx->pc = 0x2e2cf0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2e2cf4: 0x3012  mflo        $a2
    ctx->pc = 0x2e2cf4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2e2cf8: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x2e2cf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e2cfc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2CFCu;
    {
        const bool branch_taken_0x2e2cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CFCu;
        // 0x2e2d00: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cfc) {
            ctx->pc = 0x2E2D18u;
            goto label_2e2d18;
        }
    }
    ctx->pc = 0x2E2D04u;
    // 0x2e2d04: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2D04u;
    {
        const bool branch_taken_0x2e2d04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x2E2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D04u;
        // 0x2e2d08: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d04) {
            ctx->pc = 0x2E2D28u;
            goto label_2e2d28;
        }
    }
    ctx->pc = 0x2E2D0Cu;
    // 0x2e2d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2D0Cu;
    {
        const bool branch_taken_0x2e2d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d0c) {
            ctx->pc = 0x2E2D28u;
            goto label_2e2d28;
        }
    }
    ctx->pc = 0x2E2D14u;
    // 0x2e2d14: 0x0  nop
    ctx->pc = 0x2e2d14u;
    // NOP
label_2e2d18:
    // 0x2e2d18: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x2e2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2e2d1c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2e2d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2d20: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2e2d20u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e2d24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e2d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2d28:
    // 0x2e2d28: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2D28u;
    {
        const bool branch_taken_0x2e2d28 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D28u;
        // 0x2e2d2c: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d28) {
            ctx->pc = 0x2E2D64u;
            goto label_2e2d64;
        }
    }
    ctx->pc = 0x2E2D30u;
    // 0x2e2d30: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x2e2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e2d34: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2e2d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2d38: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2e2d38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e2d3c: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x2e2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2e2d40: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x2e2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2d44: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x2e2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2e2d48: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2e2d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2e2d4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e2d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e2d50: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2e2d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2e2d54: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x2e2d54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2e2d58: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x2e2d58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x2e2d5c: 0x0  nop
    ctx->pc = 0x2e2d5cu;
    // NOP
label_2e2d60:
    // 0x2e2d60: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x2e2d60u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_2e2d64:
    // 0x2e2d64: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2e2d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D68u;
        // 0x2e2d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D70u;
}
