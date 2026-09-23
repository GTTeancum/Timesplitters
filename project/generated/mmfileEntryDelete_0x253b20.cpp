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

// Function: mmfileEntryDelete
// Address: 0x253b20 - 0x253b88
void mmfileEntryDelete_0x253b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileEntryDelete_0x253b20");
#endif

    switch (ctx->pc) {
        case 0x253b6cu: goto label_253b6c;
        default: break;
    }

    ctx->pc = 0x253b20u;

    // 0x253b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253b24: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x253b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x253b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253b2c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x253b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x253b30: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x253b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x253b34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x253B34u;
    {
        const bool branch_taken_0x253b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B34u;
        // 0x253b38: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b34) {
            ctx->pc = 0x253B7Cu;
            goto label_253b7c;
        }
    }
    ctx->pc = 0x253B3Cu;
    // 0x253b3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x253b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253b40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x253B40u;
    {
        const bool branch_taken_0x253b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B40u;
        // 0x253b44: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b40) {
            ctx->pc = 0x253B70u;
            goto label_253b70;
        }
    }
    ctx->pc = 0x253B48u;
    // 0x253b48: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x253b48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x253b4c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x253b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x253b50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x253b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x253b54: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x253b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x253b58: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x253b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x253b5c: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x253b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x253b60: 0x3012  mflo        $a2
    ctx->pc = 0x253b60u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x253b64: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x253B64u;
    SET_GPR_U32(ctx, 31, 0x253B6Cu);
    ctx->pc = 0x253B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B64u;
    // 0x253b68: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x253B64u, 0x253B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B6Cu;
label_253b6c:
    // 0x253b6c: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x253b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
label_253b70:
    // 0x253b70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x253b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x253b74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x253b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253b78: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x253b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_253b7c:
    // 0x253b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b80: 0x3e00008  jr          $ra
    ctx->pc = 0x253B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B80u;
        // 0x253b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253B88u;
}
