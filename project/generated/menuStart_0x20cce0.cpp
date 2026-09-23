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

// Function: menuStart
// Address: 0x20cce0 - 0x20cda0
void menuStart_0x20cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuStart_0x20cce0");
#endif

    switch (ctx->pc) {
        case 0x20ccf4u: goto label_20ccf4;
        case 0x20cd14u: goto label_20cd14;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd60u: goto label_20cd60;
        case 0x20cd88u: goto label_20cd88;
        default: break;
    }

    ctx->pc = 0x20cce0u;

    // 0x20cce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20cce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ccec: 0xc0836ca  jal         func_20DB28
    ctx->pc = 0x20CCECu;
    SET_GPR_U32(ctx, 31, 0x20CCF4u);
    ctx->pc = 0x20CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCECu;
    // 0x20ccf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB28u, 0x20CCECu, 0x20CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCF4u;
label_20ccf4:
    // 0x20ccf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ccf8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CCF8u;
    {
        const bool branch_taken_0x20ccf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCF8u;
        // 0x20ccfc: 0x8f849c60  lw          $a0, -0x63A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccf8) {
            ctx->pc = 0x20CD18u;
            goto label_20cd18;
        }
    }
    ctx->pc = 0x20CD00u;
    // 0x20cd00: 0x8f829c70  lw          $v0, -0x6390($gp)
    ctx->pc = 0x20cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941808)));
    // 0x20cd04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CD04u;
    {
        const bool branch_taken_0x20cd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD04u;
        // 0x20cd08: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd04) {
            ctx->pc = 0x20CD1Cu;
            goto label_20cd1c;
        }
    }
    ctx->pc = 0x20CD0Cu;
    // 0x20cd0c: 0xc083250  jal         func_20C940
    ctx->pc = 0x20CD0Cu;
    SET_GPR_U32(ctx, 31, 0x20CD14u);
    ctx->pc = 0x20C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C940u, 0x20CD0Cu, 0x20CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD14u;
label_20cd14:
    // 0x20cd14: 0x8f849c60  lw          $a0, -0x63A0($gp)
    ctx->pc = 0x20cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941792)));
label_20cd18:
    // 0x20cd18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_20cd1c:
    // 0x20cd1c: 0x24639a50  addiu       $v1, $v1, -0x65B0
    ctx->pc = 0x20cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941264));
    // 0x20cd20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd24: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20cd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cd2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20cd30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x20cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x20cd34: 0xaf849c60  sw          $a0, -0x63A0($gp)
    ctx->pc = 0x20cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941792), GPR_U32(ctx, 4));
    // 0x20cd38: 0xaf859c68  sw          $a1, -0x6398($gp)
    ctx->pc = 0x20cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941800), GPR_U32(ctx, 5));
    // 0x20cd3c: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x20cd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20cd40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20CD40u;
    {
        const bool branch_taken_0x20cd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD40u;
        // 0x20cd44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd40) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CD48u;
    // 0x20cd48: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x20cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x20cd4c: 0x0  nop
    ctx->pc = 0x20cd4cu;
    // NOP
label_20cd50:
    // 0x20cd50: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20cd54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20cd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20cd58: 0xc08330a  jal         func_20CC28
    ctx->pc = 0x20CD58u;
    SET_GPR_U32(ctx, 31, 0x20CD60u);
    ctx->pc = 0x20CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD58u;
    // 0x20cd5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CC28u, 0x20CD58u, 0x20CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD60u;
label_20cd60:
    // 0x20cd60: 0x8f859c68  lw          $a1, -0x6398($gp)
    ctx->pc = 0x20cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20cd64: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x20cd64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20cd68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20cd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20cd6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20CD6Cu;
    {
        const bool branch_taken_0x20cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD6Cu;
        // 0x20cd70: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd6c) {
            ctx->pc = 0x20CD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cd50;
        }
    }
    ctx->pc = 0x20CD74u;
label_20cd74:
    // 0x20cd74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x20cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20cd78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CD78u;
    {
        const bool branch_taken_0x20cd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD78u;
        // 0x20cd7c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd78) {
            ctx->pc = 0x20CD8Cu;
            goto label_20cd8c;
        }
    }
    ctx->pc = 0x20CD80u;
    // 0x20cd80: 0xc08326a  jal         func_20C9A8
    ctx->pc = 0x20CD80u;
    SET_GPR_U32(ctx, 31, 0x20CD88u);
    ctx->pc = 0x20C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C9A8u, 0x20CD80u, 0x20CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD88u;
label_20cd88:
    // 0x20cd88: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20cd8c:
    // 0x20cd8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20cd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cd90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cd94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20cd94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cd98: 0x8080ea2  j           func_203A88
    ctx->pc = 0x20CD98u;
    ctx->pc = 0x20CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD98u;
    // 0x20cd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x20CDA0u;
}
