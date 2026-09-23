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

// Function: isRoomVisibleByAnyPlayer
// Address: 0x253fd0 - 0x254044
void isRoomVisibleByAnyPlayer_0x253fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isRoomVisibleByAnyPlayer_0x253fd0");
#endif

    switch (ctx->pc) {
        case 0x253fe8u: goto label_253fe8;
        default: break;
    }

    ctx->pc = 0x253fd0u;

    // 0x253fd0: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x253fd4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x253fd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253fd8: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x253FD8u;
    {
        const bool branch_taken_0x253fd8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x253FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FD8u;
        // 0x253fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fd8) {
            ctx->pc = 0x25403Cu;
            goto label_25403c;
        }
    }
    ctx->pc = 0x253FE0u;
    // 0x253fe0: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x253fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x253fe4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x253fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_253fe8:
    // 0x253fe8: 0x25057330  addiu       $a1, $t0, 0x7330
    ctx->pc = 0x253fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 29488));
    // 0x253fec: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x253fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253ff0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x253ff4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x253ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x253ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253ffc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x253ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254000: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x254000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x254004: 0x462000a  bltzl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x254004u;
    {
        const bool branch_taken_0x254004 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x254004) {
            ctx->pc = 0x254008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254004u;
            // 0x254008: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254030u;
            goto label_254030;
        }
    }
    ctx->pc = 0x25400Cu;
    // 0x25400c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254010: 0x28820280  slti        $v0, $a0, 0x280
    ctx->pc = 0x254010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x254014: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254014u;
    {
        const bool branch_taken_0x254014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254014u;
        // 0x254018: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254014) {
            ctx->pc = 0x25402Cu;
            goto label_25402c;
        }
    }
    ctx->pc = 0x25401Cu;
    // 0x25401c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25401Cu;
    {
        const bool branch_taken_0x25401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25401Cu;
        // 0x254020: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25401c) {
            ctx->pc = 0x254030u;
            goto label_254030;
        }
    }
    ctx->pc = 0x254024u;
    // 0x254024: 0x3e00008  jr          $ra
    ctx->pc = 0x254024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254024u;
        // 0x254028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25402Cu;
label_25402c:
    // 0x25402c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_254030:
    // 0x254030: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x254030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x254034: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x254034u;
    {
        const bool branch_taken_0x254034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254034u;
        // 0x254038: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254034) {
            ctx->pc = 0x253FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253fe8;
        }
    }
    ctx->pc = 0x25403Cu;
label_25403c:
    // 0x25403c: 0x3e00008  jr          $ra
    ctx->pc = 0x25403Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25403Cu;
        // 0x254040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25403Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254044u;
}
