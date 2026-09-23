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

// Function: mmfileGetFreeBlock
// Address: 0x253a08 - 0x253a98
void mmfileGetFreeBlock_0x253a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileGetFreeBlock_0x253a08");
#endif

    switch (ctx->pc) {
        case 0x253a20u: goto label_253a20;
        case 0x253a38u: goto label_253a38;
        case 0x253a70u: goto label_253a70;
        default: break;
    }

    ctx->pc = 0x253a08u;

    // 0x253a08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x253a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x253a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a10: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x253a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x253a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x253a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a18: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x253A18u;
    SET_GPR_U32(ctx, 31, 0x253A20u);
    ctx->pc = 0x253A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A18u;
    // 0x253a1c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x253A18u, 0x253A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A20u;
label_253a20:
    // 0x253a20: 0x8f86a22c  lw          $a2, -0x5DD4($gp)
    ctx->pc = 0x253a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x253a24: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x253a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x253a28: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x253A28u;
    {
        const bool branch_taken_0x253a28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x253A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A28u;
        // 0x253a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a28) {
            ctx->pc = 0x253A5Cu;
            goto label_253a5c;
        }
    }
    ctx->pc = 0x253A30u;
    // 0x253a30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x253a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253a34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253a38:
    // 0x253a38: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x253a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x253a3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x253a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x253a40: 0x94440030  lhu         $a0, 0x30($v0)
    ctx->pc = 0x253a40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x253a44: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x253a48: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x253a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x253a4c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x253a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x253a50: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x253a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253a54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x253A54u;
    {
        const bool branch_taken_0x253a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A54u;
        // 0x253a58: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a54) {
            ctx->pc = 0x253A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253a38;
        }
    }
    ctx->pc = 0x253A5Cu;
label_253a5c:
    // 0x253a5c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x253a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253a60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253A60u;
    {
        const bool branch_taken_0x253a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A60u;
        // 0x253a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a60) {
            ctx->pc = 0x253A88u;
            goto label_253a88;
        }
    }
    ctx->pc = 0x253A68u;
    // 0x253a68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x253a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x253a6c: 0x0  nop
    ctx->pc = 0x253a6cu;
    // NOP
label_253a70:
    // 0x253a70: 0x28a20064  slti        $v0, $a1, 0x64
    ctx->pc = 0x253a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x253a74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253A74u;
    {
        const bool branch_taken_0x253a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A74u;
        // 0x253a78: 0x3a51021  addu        $v0, $sp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a74) {
            ctx->pc = 0x253A88u;
            goto label_253a88;
        }
    }
    ctx->pc = 0x253A7Cu;
    // 0x253a7c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x253a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253a80: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x253A80u;
    {
        const bool branch_taken_0x253a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x253a80) {
            ctx->pc = 0x253A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A80u;
            // 0x253a84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253a70;
        }
    }
    ctx->pc = 0x253A88u;
label_253a88:
    // 0x253a88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x253a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253a8c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x253a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a90: 0x3e00008  jr          $ra
    ctx->pc = 0x253A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A90u;
        // 0x253a94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253A98u;
}
