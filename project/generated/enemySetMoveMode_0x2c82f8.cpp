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

// Function: enemySetMoveMode
// Address: 0x2c82f8 - 0x2c8404
void enemySetMoveMode_0x2c82f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemySetMoveMode_0x2c82f8");
#endif

    ctx->pc = 0x2c82f8u;

    // 0x2c82f8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2c82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c82fc: 0x10a2002e  beq         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C82FCu;
    {
        const bool branch_taken_0x2c82fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82FCu;
        // 0x2c8300: 0x8c840160  lw          $a0, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82fc) {
            ctx->pc = 0x2C83B8u;
            goto label_2c83b8;
        }
    }
    ctx->pc = 0x2C8304u;
    // 0x2c8304: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x2c8304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2c8308: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C8308u;
    {
        const bool branch_taken_0x2c8308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8308u;
        // 0x2c830c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8308) {
            ctx->pc = 0x2C8348u;
            goto label_2c8348;
        }
    }
    ctx->pc = 0x2C8310u;
    // 0x2c8310: 0x50a20020  beql        $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C8310u;
    {
        const bool branch_taken_0x2c8310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8310) {
            ctx->pc = 0x2C8314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8310u;
            // 0x2c8314: 0x8c820a94  lw          $v0, 0xA94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8394u;
            goto label_2c8394;
        }
    }
    ctx->pc = 0x2C8318u;
    // 0x2c8318: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x2c8318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c831c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C831Cu;
    {
        const bool branch_taken_0x2c831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C831Cu;
        // 0x2c8320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c831c) {
            ctx->pc = 0x2C8334u;
            goto label_2c8334;
        }
    }
    ctx->pc = 0x2C8324u;
    // 0x2c8324: 0x50a20018  beql        $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C8324u;
    {
        const bool branch_taken_0x2c8324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8324) {
            ctx->pc = 0x2C8328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8324u;
            // 0x2c8328: 0x8c820a94  lw          $v0, 0xA94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8388u;
            goto label_2c8388;
        }
    }
    ctx->pc = 0x2C832Cu;
    // 0x2c832c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C832Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8334u;
label_2c8334:
    // 0x2c8334: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c8338: 0x50a2001c  beql        $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C8338u;
    {
        const bool branch_taken_0x2c8338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8338) {
            ctx->pc = 0x2C833Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8338u;
            // 0x2c833c: 0x8c820a94  lw          $v0, 0xA94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C83ACu;
            goto label_2c83ac;
        }
    }
    ctx->pc = 0x2C8340u;
    // 0x2c8340: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8348u;
label_2c8348:
    // 0x2c8348: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c834c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C834Cu;
    {
        const bool branch_taken_0x2c834c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C834Cu;
        // 0x2c8350: 0x28a20201  slti        $v0, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c834c) {
            ctx->pc = 0x2C83D8u;
            goto label_2c83d8;
        }
    }
    ctx->pc = 0x2C8354u;
    // 0x2c8354: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8354u;
    {
        const bool branch_taken_0x2c8354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8354u;
        // 0x2c8358: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8354) {
            ctx->pc = 0x2C836Cu;
            goto label_2c836c;
        }
    }
    ctx->pc = 0x2C835Cu;
    // 0x2c835c: 0x50a2001b  beql        $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C835Cu;
    {
        const bool branch_taken_0x2c835c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c835c) {
            ctx->pc = 0x2C8360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C835Cu;
            // 0x2c8360: 0x8c820a94  lw          $v0, 0xA94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C83CCu;
            goto label_2c83cc;
        }
    }
    ctx->pc = 0x2C8364u;
    // 0x2c8364: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C836Cu;
label_2c836c:
    // 0x2c836c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2c836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2c8370: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C8370u;
    {
        const bool branch_taken_0x2c8370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8370u;
        // 0x2c8374: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8370) {
            ctx->pc = 0x2C83ECu;
            goto label_2c83ec;
        }
    }
    ctx->pc = 0x2C8378u;
    // 0x2c8378: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8378u;
    {
        const bool branch_taken_0x2c8378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8378) {
            ctx->pc = 0x2C837Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8378u;
            // 0x2c837c: 0x8c820a94  lw          $v0, 0xA94($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C83A0u;
            goto label_2c83a0;
        }
    }
    ctx->pc = 0x2C8380u;
    // 0x2c8380: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8388u;
label_2c8388:
    // 0x2c8388: 0x2403f173  addiu       $v1, $zero, -0xE8D
    ctx->pc = 0x2c8388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963571));
    // 0x2c838c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C838Cu;
    {
        const bool branch_taken_0x2c838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C838Cu;
        // 0x2c8390: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c838c) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C8394u;
label_2c8394:
    // 0x2c8394: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2c8394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2c8398: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8398u;
    {
        const bool branch_taken_0x2c8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8398u;
        // 0x2c839c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8398) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C83A0u;
label_2c83a0:
    // 0x2c83a0: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2c83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2c83a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C83A4u;
    {
        const bool branch_taken_0x2c83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83A4u;
        // 0x2c83a8: 0x34420800  ori         $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83a4) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C83ACu;
label_2c83ac:
    // 0x2c83ac: 0x2403f17e  addiu       $v1, $zero, -0xE82
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963582));
    // 0x2c83b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C83B0u;
    {
        const bool branch_taken_0x2c83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83B0u;
        // 0x2c83b4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83b0) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C83B8u;
label_2c83b8:
    // 0x2c83b8: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x2c83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2c83bc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2c83bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2c83c0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2c83c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2c83c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C83C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83C4u;
        // 0x2c83c8: 0xac820a94  sw          $v0, 0xA94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C83C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C83CCu;
label_2c83cc:
    // 0x2c83cc: 0x2403f1f6  addiu       $v1, $zero, -0xE0A
    ctx->pc = 0x2c83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963702));
    // 0x2c83d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C83D0u;
    {
        const bool branch_taken_0x2c83d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83D0u;
        // 0x2c83d4: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83d0) {
            ctx->pc = 0x2C83F8u;
            goto label_2c83f8;
        }
    }
    ctx->pc = 0x2C83D8u;
label_2c83d8:
    // 0x2c83d8: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x2c83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2c83dc: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2c83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2c83e0: 0xac820a98  sw          $v0, 0xA98($a0)
    ctx->pc = 0x2c83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2712), GPR_U32(ctx, 2));
    // 0x2c83e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C83E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E4u;
        // 0x2c83e8: 0xac830a94  sw          $v1, 0xA94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C83E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C83ECu;
label_2c83ec:
    // 0x2c83ec: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x2c83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x2c83f0: 0x2403f5f2  addiu       $v1, $zero, -0xA0E
    ctx->pc = 0x2c83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964722));
    // 0x2c83f4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2c83f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_2c83f8:
    // 0x2c83f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c83fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C83FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83FCu;
        // 0x2c8400: 0xac820a94  sw          $v0, 0xA94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C83FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8404u;
}
