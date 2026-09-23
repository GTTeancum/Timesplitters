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

// Function: countBots
// Address: 0x235590 - 0x235604
void countBots_0x235590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("countBots_0x235590");
#endif

    switch (ctx->pc) {
        case 0x2355a8u: goto label_2355a8;
        default: break;
    }

    ctx->pc = 0x235590u;

    // 0x235590: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x235590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x235594: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x235594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x235598: 0x24491234  addiu       $t1, $v0, 0x1234
    ctx->pc = 0x235598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4660));
    // 0x23559c: 0x24672a88  addiu       $a3, $v1, 0x2A88
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 10888));
    // 0x2355a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2355a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355a4: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2355a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2355a8:
    // 0x2355a8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2355ac: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2355ACu;
    {
        const bool branch_taken_0x2355ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2355ac) {
            ctx->pc = 0x2355B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2355ACu;
            // 0x2355b0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2355F4u;
            goto label_2355f4;
        }
    }
    ctx->pc = 0x2355B4u;
    // 0x2355b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2355b8: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2355B8u;
    {
        const bool branch_taken_0x2355b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2355b8) {
            ctx->pc = 0x2355BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2355B8u;
            // 0x2355bc: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2355F4u;
            goto label_2355f4;
        }
    }
    ctx->pc = 0x2355C0u;
    // 0x2355c0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2355c4: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x2355c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2355c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2355c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2355cc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2355CCu;
    {
        const bool branch_taken_0x2355cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2355cc) {
            ctx->pc = 0x2355D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2355CCu;
            // 0x2355d0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2355F4u;
            goto label_2355f4;
        }
    }
    ctx->pc = 0x2355D4u;
    // 0x2355d4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2355D4u;
    {
        const bool branch_taken_0x2355d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2355D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D4u;
        // 0x2355d8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355d4) {
            ctx->pc = 0x2355E4u;
            goto label_2355e4;
        }
    }
    ctx->pc = 0x2355DCu;
    // 0x2355dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2355DCu;
    {
        const bool branch_taken_0x2355dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2355E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355DCu;
        // 0x2355e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355dc) {
            ctx->pc = 0x2355F0u;
            goto label_2355f0;
        }
    }
    ctx->pc = 0x2355E4u;
label_2355e4:
    // 0x2355e4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2355e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2355e8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2355e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2355ec: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2355ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_2355f0:
    // 0x2355f0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2355f4:
    // 0x2355f4: 0x501ffec  bgez        $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2355F4u;
    {
        const bool branch_taken_0x2355f4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2355F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355F4u;
        // 0x2355f8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355f4) {
            ctx->pc = 0x2355A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2355a8;
        }
    }
    ctx->pc = 0x2355FCu;
    // 0x2355fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2355FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2355FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235604u;
}
