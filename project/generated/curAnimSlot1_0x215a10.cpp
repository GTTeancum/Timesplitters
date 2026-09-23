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

// Function: curAnimSlot1
// Address: 0x215a10 - 0x215a84
void curAnimSlot1_0x215a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("curAnimSlot1_0x215a10");
#endif

    ctx->pc = 0x215a10u;

    // 0x215a10: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x215a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x215a14: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x215a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215a18: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x215A18u;
    {
        const bool branch_taken_0x215a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A18u;
        // 0x215a1c: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a18) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215A20u;
    // 0x215a20: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x215a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x215a24: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x215a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x215a28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x215A28u;
    {
        const bool branch_taken_0x215a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215a28) {
            ctx->pc = 0x215A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A28u;
            // 0x215a2c: 0x8c830158  lw          $v1, 0x158($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A44u;
            goto label_215a44;
        }
    }
    ctx->pc = 0x215A30u;
    // 0x215a30: 0x24a2ff8f  addiu       $v0, $a1, -0x71
    ctx->pc = 0x215a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967183));
    // 0x215a34: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x215a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x215a38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215A38u;
    {
        const bool branch_taken_0x215a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A38u;
        // 0x215a3c: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a38) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215A40u;
    // 0x215a40: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x215a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_215a44:
    // 0x215a44: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x215a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x215a48: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x215a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x215a4c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x215a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215a50: 0x24a2fe45  addiu       $v0, $a1, -0x1BB
    ctx->pc = 0x215a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
label_215a54:
    // 0x215a54: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x215a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x215a58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215A58u;
    {
        const bool branch_taken_0x215a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A58u;
        // 0x215a5c: 0x8c860020  lw          $a2, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a58) {
            ctx->pc = 0x215A74u;
            goto label_215a74;
        }
    }
    ctx->pc = 0x215A60u;
    // 0x215a60: 0x24a40026  addiu       $a0, $a1, 0x26
    ctx->pc = 0x215a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x215a64: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x215a68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x215a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x215a6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x215a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x215a70: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x215a70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_215a74:
    // 0x215a74: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x215a78: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x215a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x215a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x215A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A7Cu;
        // 0x215a80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215A84u;
}
