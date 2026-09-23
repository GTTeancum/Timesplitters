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

// Function: lvGetSTORYSetup
// Address: 0x227af0 - 0x227b8c
void lvGetSTORYSetup_0x227af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetSTORYSetup_0x227af0");
#endif

    ctx->pc = 0x227af0u;

    // 0x227af0: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x227af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x227af4: 0x2c620068  sltiu       $v0, $v1, 0x68
    ctx->pc = 0x227af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)104) ? 1 : 0);
    // 0x227af8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x227AF8u;
    {
        const bool branch_taken_0x227af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AF8u;
        // 0x227afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227af8) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B00u;
    // 0x227b00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x227b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x227b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227b08: 0x244212d0  addiu       $v0, $v0, 0x12D0
    ctx->pc = 0x227b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
    // 0x227b0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227b10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227b14: 0x800008  jr          $a0
    ctx->pc = 0x227B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227B1Cu: goto label_227b1c;
            case 0x227B28u: goto label_227b28;
            case 0x227B34u: goto label_227b34;
            case 0x227B40u: goto label_227b40;
            case 0x227B4Cu: goto label_227b4c;
            case 0x227B58u: goto label_227b58;
            case 0x227B64u: goto label_227b64;
            case 0x227B70u: goto label_227b70;
            case 0x227B7Cu: goto label_227b7c;
            case 0x227B84u: goto label_227b84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227B1Cu;
label_227b1c:
    // 0x227b1c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227b20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x227B20u;
    {
        const bool branch_taken_0x227b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B20u;
        // 0x227b24: 0x2445a3d8  addiu       $a1, $v0, -0x5C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b20) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B28u;
label_227b28:
    // 0x227b28: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227b2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x227B2Cu;
    {
        const bool branch_taken_0x227b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B2Cu;
        // 0x227b30: 0x2445be50  addiu       $a1, $v0, -0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b2c) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B34u;
label_227b34:
    // 0x227b34: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227b38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x227B38u;
    {
        const bool branch_taken_0x227b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B38u;
        // 0x227b3c: 0x24458498  addiu       $a1, $v0, -0x7B68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b38) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B40u;
label_227b40:
    // 0x227b40: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227b44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x227B44u;
    {
        const bool branch_taken_0x227b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B44u;
        // 0x227b48: 0x2445ec48  addiu       $a1, $v0, -0x13B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b44) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B4Cu;
label_227b4c:
    // 0x227b4c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227b50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x227B50u;
    {
        const bool branch_taken_0x227b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B50u;
        // 0x227b54: 0x2445d740  addiu       $a1, $v0, -0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b50) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B58u;
label_227b58:
    // 0x227b58: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227b5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x227B5Cu;
    {
        const bool branch_taken_0x227b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B5Cu;
        // 0x227b60: 0x2445a198  addiu       $a1, $v0, -0x5E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b5c) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B64u;
label_227b64:
    // 0x227b64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227b68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x227B68u;
    {
        const bool branch_taken_0x227b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B68u;
        // 0x227b6c: 0x24456070  addiu       $a1, $v0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b68) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B70u;
label_227b70:
    // 0x227b70: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227b74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227B74u;
    {
        const bool branch_taken_0x227b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B74u;
        // 0x227b78: 0x2445c480  addiu       $a1, $v0, -0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b74) {
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B7Cu;
label_227b7c:
    // 0x227b7c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x227b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x227b80: 0x24451160  addiu       $a1, $v0, 0x1160
    ctx->pc = 0x227b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4448));
label_227b84:
    // 0x227b84: 0x3e00008  jr          $ra
    ctx->pc = 0x227B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B84u;
        // 0x227b88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B8Cu;
}
