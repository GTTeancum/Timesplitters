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

// Function: story_pageTick
// Address: 0x2119c8 - 0x211aa4
void story_pageTick_0x2119c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("story_pageTick_0x2119c8");
#endif

    switch (ctx->pc) {
        case 0x211a6cu: goto label_211a6c;
        case 0x211a88u: goto label_211a88;
        default: break;
    }

    ctx->pc = 0x2119c8u;

    // 0x2119c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2119c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2119cc: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x2119ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2119d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2119d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2119d4: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x2119d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2119d8: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x2119dc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2119dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2119e0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2119e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2119e4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2119E4u;
    {
        const bool branch_taken_0x2119e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119E4u;
        // 0x2119e8: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119e4) {
            ctx->pc = 0x2119FCu;
            goto label_2119fc;
        }
    }
    ctx->pc = 0x2119ECu;
    // 0x2119ec: 0x8c820844  lw          $v0, 0x844($a0)
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2116)));
    // 0x2119f0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2119f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2119f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2119F4u;
    {
        const bool branch_taken_0x2119f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119F4u;
        // 0x2119f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119f4) {
            ctx->pc = 0x211A00u;
            goto label_211a00;
        }
    }
    ctx->pc = 0x2119FCu;
label_2119fc:
    // 0x2119fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211a00:
    // 0x211a00: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x211A00u;
    {
        const bool branch_taken_0x211a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a00) {
            ctx->pc = 0x211A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A00u;
            // 0x211a04: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A40u;
            goto label_211a40;
        }
    }
    ctx->pc = 0x211A08u;
    // 0x211a08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x211A08u;
    {
        const bool branch_taken_0x211a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A08u;
        // 0x211a0c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a08) {
            ctx->pc = 0x211A3Cu;
            goto label_211a3c;
        }
    }
    ctx->pc = 0x211A10u;
    // 0x211a10: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x211a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x211a14: 0x2444c4a8  addiu       $a0, $v0, -0x3B58
    ctx->pc = 0x211a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x211a18: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x211a1c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x211a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x211a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211A20u;
    {
        const bool branch_taken_0x211a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A20u;
        // 0x211a24: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a20) {
            ctx->pc = 0x211A40u;
            goto label_211a40;
        }
    }
    ctx->pc = 0x211A28u;
    // 0x211a28: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x211a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x211a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a30: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x211a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x211a34: 0x80874d2  j           func_21D348
    ctx->pc = 0x211A34u;
    ctx->pc = 0x211A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A34u;
    // 0x211a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x211A3Cu;
label_211a3c:
    // 0x211a3c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x211a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_211a40:
    // 0x211a40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211a44: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x211A44u;
    {
        const bool branch_taken_0x211a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A44u;
        // 0x211a48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a44) {
            ctx->pc = 0x211A9Cu;
            goto label_211a9c;
        }
    }
    ctx->pc = 0x211A4Cu;
    // 0x211a4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211a50: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x211a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x211a54: 0x8c43c4f8  lw          $v1, -0x3B08($v0)
    ctx->pc = 0x211a54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x211a58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x211a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x211a5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x211A5Cu;
    {
        const bool branch_taken_0x211a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a5c) {
            ctx->pc = 0x211A9Cu;
            goto label_211a9c;
        }
    }
    ctx->pc = 0x211A64u;
    // 0x211a64: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x211A64u;
    SET_GPR_U32(ctx, 31, 0x211A6Cu);
    ctx->pc = 0x211A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A64u;
    // 0x211a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x211A64u, 0x211A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A6Cu;
label_211a6c:
    // 0x211a6c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x211a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x211a70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211A70u;
    {
        const bool branch_taken_0x211a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A70u;
        // 0x211a74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a70) {
            ctx->pc = 0x211A80u;
            goto label_211a80;
        }
    }
    ctx->pc = 0x211A78u;
    // 0x211a78: 0x80874c8  j           func_21D320
    ctx->pc = 0x211A78u;
    ctx->pc = 0x211A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A78u;
    // 0x211a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D320u;
    gameLevelRestart_0x21d320(rdram, ctx, runtime); return;
    ctx->pc = 0x211A80u;
label_211a80:
    // 0x211a80: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x211A80u;
    SET_GPR_U32(ctx, 31, 0x211A88u);
    ctx->pc = 0x211A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A80u;
    // 0x211a84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x211A80u, 0x211A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A88u;
label_211a88:
    // 0x211a88: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x211a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x211a8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211A8Cu;
    {
        const bool branch_taken_0x211a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A8Cu;
        // 0x211a90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a8c) {
            ctx->pc = 0x211A9Cu;
            goto label_211a9c;
        }
    }
    ctx->pc = 0x211A94u;
    // 0x211a94: 0x80874ce  j           func_21D338
    ctx->pc = 0x211A94u;
    ctx->pc = 0x211A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A94u;
    // 0x211a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D338u;
    gameLevelQuit_0x21d338(rdram, ctx, runtime); return;
    ctx->pc = 0x211A9Cu;
label_211a9c:
    // 0x211a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x211A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A9Cu;
        // 0x211aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211AA4u;
}
