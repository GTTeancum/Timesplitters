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

// Function: curAnimSlot2
// Address: 0x215a88 - 0x215afc
void curAnimSlot2_0x215a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("curAnimSlot2_0x215a88");
#endif

    ctx->pc = 0x215a88u;

    // 0x215a88: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x215a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x215a8c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x215a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215a90: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x215A90u;
    {
        const bool branch_taken_0x215a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A90u;
        // 0x215a94: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a90) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x215A98u;
    // 0x215a98: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x215a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x215a9c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x215a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x215aa0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x215AA0u;
    {
        const bool branch_taken_0x215aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215aa0) {
            ctx->pc = 0x215AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215AA0u;
            // 0x215aa4: 0x8c830158  lw          $v1, 0x158($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215ABCu;
            goto label_215abc;
        }
    }
    ctx->pc = 0x215AA8u;
    // 0x215aa8: 0x24a2ff8f  addiu       $v0, $a1, -0x71
    ctx->pc = 0x215aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967183));
    // 0x215aac: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x215aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x215ab0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215AB0u;
    {
        const bool branch_taken_0x215ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AB0u;
        // 0x215ab4: 0x24a2fe45  addiu       $v0, $a1, -0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ab0) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x215AB8u;
    // 0x215ab8: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x215ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_215abc:
    // 0x215abc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x215abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x215ac0: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x215ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x215ac4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x215ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215ac8: 0x24a2fe45  addiu       $v0, $a1, -0x1BB
    ctx->pc = 0x215ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966853));
label_215acc:
    // 0x215acc: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x215accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x215ad0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215AD0u;
    {
        const bool branch_taken_0x215ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AD0u;
        // 0x215ad4: 0x8c860020  lw          $a2, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ad0) {
            ctx->pc = 0x215AECu;
            goto label_215aec;
        }
    }
    ctx->pc = 0x215AD8u;
    // 0x215ad8: 0x24a40026  addiu       $a0, $a1, 0x26
    ctx->pc = 0x215ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x215adc: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x215adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x215ae0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x215ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x215ae4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x215ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x215ae8: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x215ae8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_215aec:
    // 0x215aec: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x215aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x215af0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x215af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x215af4: 0x3e00008  jr          $ra
    ctx->pc = 0x215AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AF4u;
        // 0x215af8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215AFCu;
}
