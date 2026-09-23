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

// Function: drawRankingsTable
// Address: 0x20e5a0 - 0x20ec10
void drawRankingsTable_0x20e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawRankingsTable_0x20e5a0");
#endif

    switch (ctx->pc) {
        case 0x20e5fcu: goto label_20e5fc;
        case 0x20e620u: goto label_20e620;
        case 0x20e648u: goto label_20e648;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e754u: goto label_20e754;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e870u: goto label_20e870;
        case 0x20e930u: goto label_20e930;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb78u: goto label_20eb78;
        case 0x20ebe0u: goto label_20ebe0;
        default: break;
    }

    ctx->pc = 0x20e5a0u;

    // 0x20e5a0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x20e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x20e5a4: 0x8f8ab234  lw          $t2, -0x4DCC($gp)
    ctx->pc = 0x20e5a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20e5a8: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x20e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
    // 0x20e5ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e5b0: 0xffbe04d0  sd          $fp, 0x4D0($sp)
    ctx->pc = 0x20e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 30));
    // 0x20e5b4: 0xffb704c0  sd          $s7, 0x4C0($sp)
    ctx->pc = 0x20e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 23));
    // 0x20e5b8: 0xffb604b0  sd          $s6, 0x4B0($sp)
    ctx->pc = 0x20e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 22));
    // 0x20e5bc: 0xffb504a0  sd          $s5, 0x4A0($sp)
    ctx->pc = 0x20e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 21));
    // 0x20e5c0: 0xffb40490  sd          $s4, 0x490($sp)
    ctx->pc = 0x20e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 20));
    // 0x20e5c4: 0xffb30480  sd          $s3, 0x480($sp)
    ctx->pc = 0x20e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 19));
    // 0x20e5c8: 0xffb20470  sd          $s2, 0x470($sp)
    ctx->pc = 0x20e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 18));
    // 0x20e5cc: 0xffb10460  sd          $s1, 0x460($sp)
    ctx->pc = 0x20e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 17));
    // 0x20e5d0: 0xffb00450  sd          $s0, 0x450($sp)
    ctx->pc = 0x20e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 16));
    // 0x20e5d4: 0xafa40420  sw          $a0, 0x420($sp)
    ctx->pc = 0x20e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 4));
    // 0x20e5d8: 0x8d420180  lw          $v0, 0x180($t2)
    ctx->pc = 0x20e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 384)));
    // 0x20e5dc: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x20e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x20e5e0: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x20E5E0u;
    {
        const bool branch_taken_0x20e5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5E0u;
        // 0x20e5e4: 0xafa2042c  sw          $v0, 0x42C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5e0) {
            ctx->pc = 0x20E690u;
            goto label_20e690;
        }
    }
    ctx->pc = 0x20E5E8u;
    // 0x20e5e8: 0x27b203b0  addiu       $s2, $sp, 0x3B0
    ctx->pc = 0x20e5e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x20e5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e5f4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x20E5F4u;
    SET_GPR_U32(ctx, 31, 0x20E5FCu);
    ctx->pc = 0x20E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5F4u;
    // 0x20e5f8: 0x2406006d  addiu       $a2, $zero, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x20E5F4u, 0x20E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5FCu;
label_20e5fc:
    // 0x20e5fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e600: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x20e600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x20e604: 0x8f85b59c  lw          $a1, -0x4A64($gp)
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x20e608: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x20e60c: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x20E60Cu;
    {
        const bool branch_taken_0x20e60c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E60Cu;
        // 0x20e610: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e60c) {
            ctx->pc = 0x20E734u;
            goto label_20e734;
        }
    }
    ctx->pc = 0x20E614u;
    // 0x20e614: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x20e618: 0x27b60360  addiu       $s6, $sp, 0x360
    ctx->pc = 0x20e618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x20e61c: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_20e620:
    // 0x20e620: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x20e620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x20e624: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x20e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x20e628: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x20e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20e62c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x20e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x20e630: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20e630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e634: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E634u;
    {
        const bool branch_taken_0x20e634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e634) {
            ctx->pc = 0x20E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E634u;
            // 0x20e638: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E678u;
            goto label_20e678;
        }
    }
    ctx->pc = 0x20E63Cu;
    // 0x20e63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e640: 0xc0a241e  jal         func_289078
    ctx->pc = 0x20E640u;
    SET_GPR_U32(ctx, 31, 0x20E648u);
    ctx->pc = 0x20E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E640u;
    // 0x20e644: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x20E640u, 0x20E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E648u;
label_20e648:
    // 0x20e648: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x20e64c: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x20e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x20e650: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x20e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x20e654: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x20e654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20e658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20e658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20e65c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20e660: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x20e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x20e664: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20e664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20e668: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x20e668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x20e66c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20e670: 0x8f85b59c  lw          $a1, -0x4A64($gp)
    ctx->pc = 0x20e670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x20e674: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20e678:
    // 0x20e678: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x20e678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x20e67c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20e67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e680: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x20E680u;
    {
        const bool branch_taken_0x20e680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E680u;
        // 0x20e684: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e680) {
            ctx->pc = 0x20E620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e620;
        }
    }
    ctx->pc = 0x20E688u;
    // 0x20e688: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20E688u;
    {
        const bool branch_taken_0x20e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E688u;
        // 0x20e68c: 0x2aa30013  slti        $v1, $s5, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e688) {
            ctx->pc = 0x20E73Cu;
            goto label_20e73c;
        }
    }
    ctx->pc = 0x20E690u;
label_20e690:
    // 0x20e690: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x20e690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x20e694: 0x8f88b59c  lw          $t0, -0x4A64($gp)
    ctx->pc = 0x20e694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x20e698: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x20e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x20e69c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20E69Cu;
    {
        const bool branch_taken_0x20e69c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E69Cu;
        // 0x20e6a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e69c) {
            ctx->pc = 0x20E728u;
            goto label_20e728;
        }
    }
    ctx->pc = 0x20E6A4u;
    // 0x20e6a4: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x20e6a8: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x20e6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20e6ac: 0x27b60360  addiu       $s6, $sp, 0x360
    ctx->pc = 0x20e6acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_20e6b0:
    // 0x20e6b0: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x20e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x20e6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e6b8: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x20e6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20e6bc: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x20e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x20e6c0: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20E6C0u;
    {
        const bool branch_taken_0x20e6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6C0u;
        // 0x20e6c4: 0x862821  addu        $a1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6c0) {
            ctx->pc = 0x20E6ECu;
            goto label_20e6ec;
        }
    }
    ctx->pc = 0x20E6C8u;
    // 0x20e6c8: 0x8fa30420  lw          $v1, 0x420($sp)
    ctx->pc = 0x20e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x20e6cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e6d0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20E6D0u;
    {
        const bool branch_taken_0x20e6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6D0u;
        // 0x20e6d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6d0) {
            ctx->pc = 0x20E6FCu;
            goto label_20e6fc;
        }
    }
    ctx->pc = 0x20E6D8u;
    // 0x20e6d8: 0x8fa4042c  lw          $a0, 0x42C($sp)
    ctx->pc = 0x20e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
    // 0x20e6dc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20e6e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20e6e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20E6E4u;
    {
        const bool branch_taken_0x20e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E4u;
        // 0x20e6e8: 0x84550020  lh          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6e4) {
            ctx->pc = 0x20E6FCu;
            goto label_20e6fc;
        }
    }
    ctx->pc = 0x20E6ECu;
label_20e6ec:
    // 0x20e6ec: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x20e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20e6f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20e6f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20e6f8: 0x84550020  lh          $s5, 0x20($v0)
    ctx->pc = 0x20e6f8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_20e6fc:
    // 0x20e6fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x20e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x20e700: 0x1282021  addu        $a0, $t1, $t0
    ctx->pc = 0x20e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x20e704: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x20e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x20e708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20e70c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x20e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20e710: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x20e710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x20e714: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x20e714u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20e718: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x20E718u;
    {
        const bool branch_taken_0x20e718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E718u;
        // 0x20e71c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e718) {
            ctx->pc = 0x20E6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e6b0;
        }
    }
    ctx->pc = 0x20E720u;
    // 0x20e720: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20E720u;
    {
        const bool branch_taken_0x20e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E720u;
        // 0x20e724: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e720) {
            ctx->pc = 0x20E738u;
            goto label_20e738;
        }
    }
    ctx->pc = 0x20E728u;
label_20e728:
    // 0x20e728: 0x27b60360  addiu       $s6, $sp, 0x360
    ctx->pc = 0x20e728u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x20e72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E72Cu;
    {
        const bool branch_taken_0x20e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E72Cu;
        // 0x20e730: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e72c) {
            ctx->pc = 0x20E738u;
            goto label_20e738;
        }
    }
    ctx->pc = 0x20E734u;
label_20e734:
    // 0x20e734: 0x27b60360  addiu       $s6, $sp, 0x360
    ctx->pc = 0x20e734u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_20e738:
    // 0x20e738: 0x2aa30013  slti        $v1, $s5, 0x13
    ctx->pc = 0x20e738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)19) ? 1 : 0);
label_20e73c:
    // 0x20e73c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x20e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20e740: 0x43a80a  movz        $s5, $v0, $v1
    ctx->pc = 0x20e740u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x20e744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e748: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20e748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e74c: 0xc0ad23e  jal         func_2B48F8
    ctx->pc = 0x20E74Cu;
    SET_GPR_U32(ctx, 31, 0x20E754u);
    ctx->pc = 0x20E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E74Cu;
    // 0x20e750: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B48F8u, 0x20E74Cu, 0x20E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E754u;
label_20e754:
    // 0x20e754: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20e754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20e758: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e75c: 0xafa50424  sw          $a1, 0x424($sp)
    ctx->pc = 0x20e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 5));
    // 0x20e760: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20e764: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x20e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x20e768: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e76c: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x20e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
    // 0x20e770: 0x8fa20424  lw          $v0, 0x424($sp)
    ctx->pc = 0x20e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x20e774: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x20e774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20e778: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x20e778u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20e77c: 0xafa20424  sw          $v0, 0x424($sp)
    ctx->pc = 0x20e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 2));
    // 0x20e780: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20e780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e784: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x20e784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x20e788: 0x8fa30424  lw          $v1, 0x424($sp)
    ctx->pc = 0x20e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x20e78c: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x20e78cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x20e790: 0x14850010  bne         $a0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E790u;
    {
        const bool branch_taken_0x20e790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x20E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E790u;
        // 0x20e794: 0xafa30424  sw          $v1, 0x424($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e790) {
            ctx->pc = 0x20E7D4u;
            goto label_20e7d4;
        }
    }
    ctx->pc = 0x20E798u;
    // 0x20e798: 0x1aa0000e  blez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x20E798u;
    {
        const bool branch_taken_0x20e798 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x20E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E798u;
        // 0x20e79c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e798) {
            ctx->pc = 0x20E7D4u;
            goto label_20e7d4;
        }
    }
    ctx->pc = 0x20E7A0u;
    // 0x20e7a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20e7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e7a4: 0x0  nop
    ctx->pc = 0x20e7a4u;
    // NOP
label_20e7a8:
    // 0x20e7a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e7ac: 0x8fa5042c  lw          $a1, 0x42C($sp)
    ctx->pc = 0x20e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
    // 0x20e7b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20e7b4: 0x8fa20430  lw          $v0, 0x430($sp)
    ctx->pc = 0x20e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x20e7b8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x20e7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x20e7bc: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x20e7bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x20e7c0: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x20e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
    // 0x20e7c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20e7c8: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x20e7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x20e7cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20E7CCu;
    {
        const bool branch_taken_0x20e7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7CCu;
        // 0x20e7d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7cc) {
            ctx->pc = 0x20E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e7a8;
        }
    }
    ctx->pc = 0x20E7D4u;
label_20e7d4:
    // 0x20e7d4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20E7D4u;
    SET_GPR_U32(ctx, 31, 0x20E7DCu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20E7D4u, 0x20E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7DCu;
label_20e7dc:
    // 0x20e7dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20e7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20e7e0: 0xc08089c  jal         func_202270
    ctx->pc = 0x20E7E0u;
    SET_GPR_U32(ctx, 31, 0x20E7E8u);
    ctx->pc = 0x20E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7E0u;
    // 0x20e7e4: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20E7E0u, 0x20E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7E8u;
label_20e7e8:
    // 0x20e7e8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x20E7E8u;
    SET_GPR_U32(ctx, 31, 0x20E7F0u);
    ctx->pc = 0x20E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7E8u;
    // 0x20e7ec: 0xafa20428  sw          $v0, 0x428($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x20E7E8u, 0x20E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7F0u;
label_20e7f0:
    // 0x20e7f0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20e7f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e7f8: 0x24a499f0  addiu       $a0, $a1, -0x6610
    ctx->pc = 0x20e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x20e7fc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x20e7fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e800: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x20e800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x20e804: 0x240200f6  addiu       $v0, $zero, 0xF6
    ctx->pc = 0x20e804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x20e808: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x20e808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20e80c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x20e80cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x20e810: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20e810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20e814: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x20e814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x20e818: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x20e818u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20e81c: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x20e81cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20e820: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20e824: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20e828: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20e82c: 0xafa60434  sw          $a2, 0x434($sp)
    ctx->pc = 0x20e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 6));
    // 0x20e830: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x20e830u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x20e834: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E834u;
    {
        const bool branch_taken_0x20e834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E834u;
        // 0x20e838: 0xafa20438  sw          $v0, 0x438($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e834) {
            ctx->pc = 0x20E844u;
            goto label_20e844;
        }
    }
    ctx->pc = 0x20E83Cu;
    // 0x20e83c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E83Cu;
    {
        const bool branch_taken_0x20e83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E83Cu;
        // 0x20e840: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e83c) {
            ctx->pc = 0x20E848u;
            goto label_20e848;
        }
    }
    ctx->pc = 0x20E844u;
label_20e844:
    // 0x20e844: 0x24820026  addiu       $v0, $a0, 0x26
    ctx->pc = 0x20e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
label_20e848:
    // 0x20e848: 0xe29821  addu        $s3, $a3, $v0
    ctx->pc = 0x20e848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20e84c: 0x8fb20424  lw          $s2, 0x424($sp)
    ctx->pc = 0x20e84cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x20e850: 0x124000e1  beqz        $s2, . + 4 + (0xE1 << 2)
    ctx->pc = 0x20E850u;
    {
        const bool branch_taken_0x20e850 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E850u;
        // 0x20e854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e850) {
            ctx->pc = 0x20EBD8u;
            goto label_20ebd8;
        }
    }
    ctx->pc = 0x20E858u;
    // 0x20e858: 0x1aa000df  blez        $s5, . + 4 + (0xDF << 2)
    ctx->pc = 0x20E858u;
    {
        const bool branch_taken_0x20e858 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x20E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E858u;
        // 0x20e85c: 0x8fa20420  lw          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e858) {
            ctx->pc = 0x20EBD8u;
            goto label_20ebd8;
        }
    }
    ctx->pc = 0x20E860u;
    // 0x20e860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20e864: 0xafa20444  sw          $v0, 0x444($sp)
    ctx->pc = 0x20e864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 2));
    // 0x20e868: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20e86c: 0x0  nop
    ctx->pc = 0x20e86cu;
    // NOP
label_20e870:
    // 0x20e870: 0x8fa40444  lw          $a0, 0x444($sp)
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
    // 0x20e874: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x20e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x20e878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e87c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x20e87cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20e880: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20e880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20e884: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E884u;
    {
        const bool branch_taken_0x20e884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E884u;
        // 0x20e888: 0xafa5043c  sw          $a1, 0x43C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e884) {
            ctx->pc = 0x20E898u;
            goto label_20e898;
        }
    }
    ctx->pc = 0x20E88Cu;
    // 0x20e88c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e890: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x20E890u;
    {
        const bool branch_taken_0x20e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E890u;
        // 0x20e894: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e890) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20E898u;
label_20e898:
    // 0x20e898: 0x8fa30430  lw          $v1, 0x430($sp)
    ctx->pc = 0x20e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x20e89c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x20e89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20e8a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E8A0u;
    {
        const bool branch_taken_0x20e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A0u;
        // 0x20e8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a0) {
            ctx->pc = 0x20E8B0u;
            goto label_20e8b0;
        }
    }
    ctx->pc = 0x20E8A8u;
    // 0x20e8a8: 0x124200c6  beq         $s2, $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x20E8A8u;
    {
        const bool branch_taken_0x20e8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a8) {
            ctx->pc = 0x20EBC4u;
            goto label_20ebc4;
        }
    }
    ctx->pc = 0x20E8B0u;
label_20e8b0:
    // 0x20e8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e8b4: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E8B4u;
    {
        const bool branch_taken_0x20e8b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B4u;
        // 0x20e8b8: 0x93829ab5  lbu         $v0, -0x654B($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8b4) {
            ctx->pc = 0x20E8E8u;
            goto label_20e8e8;
        }
    }
    ctx->pc = 0x20E8BCu;
    // 0x20e8bc: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x20e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x20e8c0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x20e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20e8c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20e8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20e8c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E8C8u;
    {
        const bool branch_taken_0x20e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8C8u;
        // 0x20e8cc: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8c8) {
            ctx->pc = 0x20E8E4u;
            goto label_20e8e4;
        }
    }
    ctx->pc = 0x20E8D0u;
    // 0x20e8d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e8d4: 0x24a299f0  addiu       $v0, $a1, -0x6610
    ctx->pc = 0x20e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x20e8d8: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x20e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x20e8dc: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x20e8dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x20e8e0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x20e8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20e8e4:
    // 0x20e8e4: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x20e8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
label_20e8e8:
    // 0x20e8e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e8ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E8ECu;
    {
        const bool branch_taken_0x20e8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8ECu;
        // 0x20e8f0: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8ec) {
            ctx->pc = 0x20E904u;
            goto label_20e904;
        }
    }
    ctx->pc = 0x20E8F4u;
    // 0x20e8f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20e8f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20e8f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20e8fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20E8FCu;
    {
        const bool branch_taken_0x20e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8FCu;
        // 0x20e900: 0x2623821  addu        $a3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8fc) {
            ctx->pc = 0x20E910u;
            goto label_20e910;
        }
    }
    ctx->pc = 0x20E904u;
label_20e904:
    // 0x20e904: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x20e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20e908: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20e908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20e90c: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x20e90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20e910:
    // 0x20e910: 0x8fa2043c  lw          $v0, 0x43C($sp)
    ctx->pc = 0x20e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
    // 0x20e914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20e914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e918: 0x8fa40434  lw          $a0, 0x434($sp)
    ctx->pc = 0x20e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
    // 0x20e91c: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x20e91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20e920: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x20e920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20e924: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x20e924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20e928: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x20E928u;
    SET_GPR_U32(ctx, 31, 0x20E930u);
    ctx->pc = 0x20E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E928u;
    // 0x20e92c: 0x8fa60438  lw          $a2, 0x438($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x20E928u, 0x20E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E930u;
label_20e930:
    // 0x20e930: 0x8fa4043c  lw          $a0, 0x43C($sp)
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
    // 0x20e934: 0x8fa5042c  lw          $a1, 0x42C($sp)
    ctx->pc = 0x20e934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
    // 0x20e938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e93c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20e940: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20E940u;
    {
        const bool branch_taken_0x20e940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E940u;
        // 0x20e944: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e940) {
            ctx->pc = 0x20E9ACu;
            goto label_20e9ac;
        }
    }
    ctx->pc = 0x20E948u;
    // 0x20e948: 0x8fa30444  lw          $v1, 0x444($sp)
    ctx->pc = 0x20e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
    // 0x20e94c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x20e94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20e950: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20E950u;
    {
        const bool branch_taken_0x20e950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E950u;
        // 0x20e954: 0x3c117f1e  lui         $s1, 0x7F1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32542 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e950) {
            ctx->pc = 0x20E98Cu;
            goto label_20e98c;
        }
    }
    ctx->pc = 0x20E958u;
    // 0x20e958: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x20e95c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e960: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e964: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E964u;
    {
        const bool branch_taken_0x20e964 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E964u;
        // 0x20e968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e964) {
            ctx->pc = 0x20E98Cu;
            goto label_20e98c;
        }
    }
    ctx->pc = 0x20E96Cu;
    // 0x20e96c: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20E96Cu;
    {
        const bool branch_taken_0x20e96c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E96Cu;
        // 0x20e970: 0x3c114078  lui         $s1, 0x4078 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e96c) {
            ctx->pc = 0x20E99Cu;
            goto label_20e99c;
        }
    }
    ctx->pc = 0x20E974u;
    // 0x20e974: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x20e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x20e978: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x20e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20e97c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20e97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20e980: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E980u;
    {
        const bool branch_taken_0x20e980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E980u;
        // 0x20e984: 0x24025080  addiu       $v0, $zero, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e980) {
            ctx->pc = 0x20E9A0u;
            goto label_20e9a0;
        }
    }
    ctx->pc = 0x20E988u;
    // 0x20e988: 0x3c117f1e  lui         $s1, 0x7F1E
    ctx->pc = 0x20e988u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32542 << 16));
label_20e98c:
    // 0x20e98c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x20e990: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x20e990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x20e994: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E994u;
    {
        const bool branch_taken_0x20e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E994u;
        // 0x20e998: 0x36311e80  ori         $s1, $s1, 0x1E80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7808);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e994) {
            ctx->pc = 0x20E9B8u;
            goto label_20e9b8;
        }
    }
    ctx->pc = 0x20E99Cu;
label_20e99c:
    // 0x20e99c: 0x24025080  addiu       $v0, $zero, 0x5080
    ctx->pc = 0x20e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
label_20e9a0:
    // 0x20e9a0: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x20e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
    // 0x20e9a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20E9A4u;
    {
        const bool branch_taken_0x20e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9A4u;
        // 0x20e9a8: 0x36317880  ori         $s1, $s1, 0x7880 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)30848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9a4) {
            ctx->pc = 0x20E9B8u;
            goto label_20e9b8;
        }
    }
    ctx->pc = 0x20E9ACu;
label_20e9ac:
    // 0x20e9ac: 0x3c117f7f  lui         $s1, 0x7F7F
    ctx->pc = 0x20e9acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32639 << 16));
    // 0x20e9b0: 0xafa30440  sw          $v1, 0x440($sp)
    ctx->pc = 0x20e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 3));
    // 0x20e9b4: 0x36317f80  ori         $s1, $s1, 0x7F80
    ctx->pc = 0x20e9b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32640);
label_20e9b8:
    // 0x20e9b8: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20E9B8u;
    {
        const bool branch_taken_0x20e9b8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x20E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B8u;
        // 0x20e9bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9b8) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20E9C0u;
    // 0x20e9c0: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20e9c4: 0x2de4021  addu        $t0, $s6, $fp
    ctx->pc = 0x20e9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x20e9c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20e9cc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20e9d0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x20e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x20e9d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e9d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20e9dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e9e0: 0x14440018  bne         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20E9E0u;
    {
        const bool branch_taken_0x20e9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9E0u;
        // 0x20e9e4: 0x8fa20434  lw          $v0, 0x434($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9e0) {
            ctx->pc = 0x20EA44u;
            goto label_20ea44;
        }
    }
    ctx->pc = 0x20E9E8u;
    // 0x20e9e8: 0x8fa40434  lw          $a0, 0x434($sp)
    ctx->pc = 0x20e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
    // 0x20e9ec: 0x2657ffff  addiu       $s7, $s2, -0x1
    ctx->pc = 0x20e9ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20e9f0: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20e9f4: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x20e9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_20e9f8:
    // 0x20e9f8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20e9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9fc: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x20E9FCu;
    {
        const bool branch_taken_0x20e9fc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x20EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9FCu;
        // 0x20ea00: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9fc) {
            ctx->pc = 0x20EA50u;
            goto label_20ea50;
        }
    }
    ctx->pc = 0x20EA04u;
    // 0x20ea04: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x20ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20ea08: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x20ea08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea0c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20ea10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ea14: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x20ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x20ea18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ea1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ea20: 0x1085fff5  beq         $a0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x20EA20u;
    {
        const bool branch_taken_0x20ea20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x20EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA20u;
        // 0x20ea24: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea20) {
            ctx->pc = 0x20E9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e9f8;
        }
    }
    ctx->pc = 0x20EA28u;
    // 0x20ea28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20EA28u;
    {
        const bool branch_taken_0x20ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA28u;
        // 0x20ea2c: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea28) {
            ctx->pc = 0x20EA58u;
            goto label_20ea58;
        }
    }
    ctx->pc = 0x20EA30u;
label_20ea30:
    // 0x20ea30: 0x8fa50434  lw          $a1, 0x434($sp)
    ctx->pc = 0x20ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
    // 0x20ea34: 0x2657ffff  addiu       $s7, $s2, -0x1
    ctx->pc = 0x20ea34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20ea38: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x20ea38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20ea3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20EA3Cu;
    {
        const bool branch_taken_0x20ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA3Cu;
        // 0x20ea40: 0x24b20004  addiu       $s2, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea3c) {
            ctx->pc = 0x20EA50u;
            goto label_20ea50;
        }
    }
    ctx->pc = 0x20EA44u;
label_20ea44:
    // 0x20ea44: 0x2657ffff  addiu       $s7, $s2, -0x1
    ctx->pc = 0x20ea44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20ea48: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x20ea48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20ea4c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x20ea4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_20ea50:
    // 0x20ea50: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20ea54: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x20ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_20ea58:
    // 0x20ea58: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20EA58u;
    SET_GPR_U32(ctx, 31, 0x20EA60u);
    ctx->pc = 0x20EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA58u;
    // 0x20ea5c: 0x2464e510  addiu       $a0, $v1, -0x1AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20EA58u, 0x20EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA60u;
label_20ea60:
    // 0x20ea60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ea60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea64: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20EA64u;
    SET_GPR_U32(ctx, 31, 0x20EA6Cu);
    ctx->pc = 0x20EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA64u;
    // 0x20ea68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20EA64u, 0x20EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA6Cu;
label_20ea6c:
    // 0x20ea6c: 0x8fa40434  lw          $a0, 0x434($sp)
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
    // 0x20ea70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ea70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea74: 0x8fa80440  lw          $t0, 0x440($sp)
    ctx->pc = 0x20ea74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x20ea78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20ea78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea7c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x20ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20ea80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20ea80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea84: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20EA84u;
    SET_GPR_U32(ctx, 31, 0x20EA8Cu);
    ctx->pc = 0x20EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA84u;
    // 0x20ea88: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20EA84u, 0x20EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA8Cu;
label_20ea8c:
    // 0x20ea8c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20ea90: 0x24a3c4a8  addiu       $v1, $a1, -0x3B58
    ctx->pc = 0x20ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952104));
    // 0x20ea94: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x20ea98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ea9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20EA9Cu;
    {
        const bool branch_taken_0x20ea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA9Cu;
        // 0x20eaa0: 0x8fa30420  lw          $v1, 0x420($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea9c) {
            ctx->pc = 0x20EAC4u;
            goto label_20eac4;
        }
    }
    ctx->pc = 0x20EAA4u;
    // 0x20eaa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eaa8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20EAA8u;
    {
        const bool branch_taken_0x20eaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAA8u;
        // 0x20eaac: 0x8fa2043c  lw          $v0, 0x43C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaa8) {
            ctx->pc = 0x20EAC8u;
            goto label_20eac8;
        }
    }
    ctx->pc = 0x20EAB0u;
    // 0x20eab0: 0x8fa5043c  lw          $a1, 0x43C($sp)
    ctx->pc = 0x20eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
    // 0x20eab4: 0xc087252  jal         func_21C948
    ctx->pc = 0x20EAB4u;
    SET_GPR_U32(ctx, 31, 0x20EABCu);
    ctx->pc = 0x20EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAB4u;
    // 0x20eab8: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C948u, 0x20EAB4u, 0x20EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EABCu;
label_20eabc:
    // 0x20eabc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20EABCu;
    {
        const bool branch_taken_0x20eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EABCu;
        // 0x20eac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eabc) {
            ctx->pc = 0x20EACCu;
            goto label_20eacc;
        }
    }
    ctx->pc = 0x20EAC4u;
label_20eac4:
    // 0x20eac4: 0x8fa2043c  lw          $v0, 0x43C($sp)
    ctx->pc = 0x20eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
label_20eac8:
    // 0x20eac8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x20eac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20eacc:
    // 0x20eacc: 0x8fa80440  lw          $t0, 0x440($sp)
    ctx->pc = 0x20eaccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x20ead0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ead4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ead4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ead8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20ead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eadc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20EADCu;
    SET_GPR_U32(ctx, 31, 0x20EAE4u);
    ctx->pc = 0x20EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EADCu;
    // 0x20eae0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20EADCu, 0x20EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAE4u;
label_20eae4:
    // 0x20eae4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20eae8: 0x2462c4a8  addiu       $v0, $v1, -0x3B58
    ctx->pc = 0x20eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x20eaec: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x20eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x20eaf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eaf4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20EAF4u;
    {
        const bool branch_taken_0x20eaf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAF4u;
        // 0x20eaf8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaf4) {
            ctx->pc = 0x20EB2Cu;
            goto label_20eb2c;
        }
    }
    ctx->pc = 0x20EAFCu;
    // 0x20eafc: 0x8fa50420  lw          $a1, 0x420($sp)
    ctx->pc = 0x20eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x20eb00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eb04: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20EB04u;
    {
        const bool branch_taken_0x20eb04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB04u;
        // 0x20eb08: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb04) {
            ctx->pc = 0x20EB2Cu;
            goto label_20eb2c;
        }
    }
    ctx->pc = 0x20EB0Cu;
    // 0x20eb0c: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20EB0Cu;
    {
        const bool branch_taken_0x20eb0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x20EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB0Cu;
        // 0x20eb10: 0x2de1021  addu        $v0, $s6, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb0c) {
            ctx->pc = 0x20EB28u;
            goto label_20eb28;
        }
    }
    ctx->pc = 0x20EB14u;
    // 0x20eb14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20eb18: 0xc087284  jal         func_21CA10
    ctx->pc = 0x20EB18u;
    SET_GPR_U32(ctx, 31, 0x20EB20u);
    ctx->pc = 0x20EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB18u;
    // 0x20eb1c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA10u, 0x20EB18u, 0x20EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB20u;
label_20eb20:
    // 0x20eb20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20EB20u;
    {
        const bool branch_taken_0x20eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB20u;
        // 0x20eb24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb20) {
            ctx->pc = 0x20EB44u;
            goto label_20eb44;
        }
    }
    ctx->pc = 0x20EB28u;
label_20eb28:
    // 0x20eb28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_20eb2c:
    // 0x20eb2c: 0x2de1821  addu        $v1, $s6, $fp
    ctx->pc = 0x20eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x20eb30: 0x2444e510  addiu       $a0, $v0, -0x1AF0
    ctx->pc = 0x20eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x20eb34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20eb38: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20EB38u;
    SET_GPR_U32(ctx, 31, 0x20EB40u);
    ctx->pc = 0x20EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB38u;
    // 0x20eb3c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20EB38u, 0x20EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB40u;
label_20eb40:
    // 0x20eb40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20eb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20eb44:
    // 0x20eb44: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x20eb44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x20eb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x20eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x20eb50: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20EB50u;
    SET_GPR_U32(ctx, 31, 0x20EB58u);
    ctx->pc = 0x20EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB50u;
    // 0x20eb54: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20EB50u, 0x20EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB58u;
label_20eb58:
    // 0x20eb58: 0x8fa30438  lw          $v1, 0x438($sp)
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x20eb5c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20eb60: 0x8fa80440  lw          $t0, 0x440($sp)
    ctx->pc = 0x20eb60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x20eb64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20eb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb68: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x20eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20eb6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20eb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb70: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20EB70u;
    SET_GPR_U32(ctx, 31, 0x20EB78u);
    ctx->pc = 0x20EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB70u;
    // 0x20eb74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20EB70u, 0x20EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB78u;
label_20eb78:
    // 0x20eb78: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20eb7c: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x20eb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x20eb80: 0x248299f0  addiu       $v0, $a0, -0x6610
    ctx->pc = 0x20eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x20eb84: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x20eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x20eb88: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x20eb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x20eb8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eb90: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20eb94: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x20eb94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x20eb98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EB98u;
    {
        const bool branch_taken_0x20eb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB98u;
        // 0x20eb9c: 0xa3839ab5  sb          $v1, -0x654B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb98) {
            ctx->pc = 0x20EBB0u;
            goto label_20ebb0;
        }
    }
    ctx->pc = 0x20EBA0u;
    // 0x20eba0: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x20eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20eba4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20eba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20EBA8u;
    {
        const bool branch_taken_0x20eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBA8u;
        // 0x20ebac: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eba8) {
            ctx->pc = 0x20EBB8u;
            goto label_20ebb8;
        }
    }
    ctx->pc = 0x20EBB0u;
label_20ebb0:
    // 0x20ebb0: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x20ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20ebb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20ebb8:
    // 0x20ebb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20ebbc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20ebc0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x20ebc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20ebc4:
    // 0x20ebc4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EBC4u;
    {
        const bool branch_taken_0x20ebc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBC4u;
        // 0x20ebc8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebc4) {
            ctx->pc = 0x20EBD8u;
            goto label_20ebd8;
        }
    }
    ctx->pc = 0x20EBCCu;
    // 0x20ebcc: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x20ebccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x20ebd0: 0x1440ff27  bnez        $v0, . + 4 + (-0xD9 << 2)
    ctx->pc = 0x20EBD0u;
    {
        const bool branch_taken_0x20ebd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD0u;
        // 0x20ebd4: 0x10f080  sll         $fp, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebd0) {
            ctx->pc = 0x20E870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e870;
        }
    }
    ctx->pc = 0x20EBD8u;
label_20ebd8:
    // 0x20ebd8: 0xc08089c  jal         func_202270
    ctx->pc = 0x20EBD8u;
    SET_GPR_U32(ctx, 31, 0x20EBE0u);
    ctx->pc = 0x20EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD8u;
    // 0x20ebdc: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20EBD8u, 0x20EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBE0u;
label_20ebe0:
    // 0x20ebe0: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x20ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x20ebe4: 0xdfbe04d0  ld          $fp, 0x4D0($sp)
    ctx->pc = 0x20ebe4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x20ebe8: 0xdfb704c0  ld          $s7, 0x4C0($sp)
    ctx->pc = 0x20ebe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x20ebec: 0xdfb604b0  ld          $s6, 0x4B0($sp)
    ctx->pc = 0x20ebecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x20ebf0: 0xdfb504a0  ld          $s5, 0x4A0($sp)
    ctx->pc = 0x20ebf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x20ebf4: 0xdfb40490  ld          $s4, 0x490($sp)
    ctx->pc = 0x20ebf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x20ebf8: 0xdfb30480  ld          $s3, 0x480($sp)
    ctx->pc = 0x20ebf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x20ebfc: 0xdfb20470  ld          $s2, 0x470($sp)
    ctx->pc = 0x20ebfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x20ec00: 0xdfb10460  ld          $s1, 0x460($sp)
    ctx->pc = 0x20ec00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x20ec04: 0xdfb00450  ld          $s0, 0x450($sp)
    ctx->pc = 0x20ec04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x20ec08: 0x3e00008  jr          $ra
    ctx->pc = 0x20EC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC08u;
        // 0x20ec0c: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EC10u;
}
