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

// Function: enemyAIChineseHandler1
// Address: 0x2cbf00 - 0x2cbfb0
void enemyAIChineseHandler1_0x2cbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAIChineseHandler1_0x2cbf00");
#endif

    switch (ctx->pc) {
        case 0x2cbf28u: goto label_2cbf28;
        case 0x2cbf70u: goto label_2cbf70;
        case 0x2cbf78u: goto label_2cbf78;
        case 0x2cbf94u: goto label_2cbf94;
        case 0x2cbf9cu: goto label_2cbf9c;
        default: break;
    }

    ctx->pc = 0x2cbf00u;

    // 0x2cbf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbf04: 0x8f829f78  lw          $v0, -0x6088($gp)
    ctx->pc = 0x2cbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
    // 0x2cbf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cbf0c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CBF0Cu;
    {
        const bool branch_taken_0x2cbf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF0Cu;
        // 0x2cbf10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf0c) {
            ctx->pc = 0x2CBFA0u;
            goto label_2cbfa0;
        }
    }
    ctx->pc = 0x2CBF14u;
    // 0x2cbf14: 0x8f899f74  lw          $t1, -0x608C($gp)
    ctx->pc = 0x2cbf14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cbf18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf1c: 0x1920000b  blez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CBF1Cu;
    {
        const bool branch_taken_0x2cbf1c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2CBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF1Cu;
        // 0x2cbf20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf1c) {
            ctx->pc = 0x2CBF4Cu;
            goto label_2cbf4c;
        }
    }
    ctx->pc = 0x2CBF24u;
    // 0x2cbf24: 0x8f88b238  lw          $t0, -0x4DC8($gp)
    ctx->pc = 0x2cbf24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_2cbf28:
    // 0x2cbf28: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cbf2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbf30: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x2cbf30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cbf34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cbf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cbf38: 0xc9202a  slt         $a0, $a2, $t1
    ctx->pc = 0x2cbf38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cbf3c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2cbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cbf40: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x2cbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2cbf44: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CBF44u;
    {
        const bool branch_taken_0x2cbf44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF44u;
        // 0x2cbf48: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf44) {
            ctx->pc = 0x2CBF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbf28;
        }
    }
    ctx->pc = 0x2CBF4Cu;
label_2cbf4c:
    // 0x2cbf4c: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CBF4Cu;
    {
        const bool branch_taken_0x2cbf4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF4Cu;
        // 0x2cbf50: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf4c) {
            ctx->pc = 0x2CBFA0u;
            goto label_2cbfa0;
        }
    }
    ctx->pc = 0x2CBF54u;
    // 0x2cbf54: 0x2450c4a8  addiu       $s0, $v0, -0x3B58
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2cbf58: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2cbf5c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBF5Cu;
    {
        const bool branch_taken_0x2cbf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf5c) {
            ctx->pc = 0x2CBF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF5Cu;
            // 0x2cbf60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF80u;
            goto label_2cbf80;
        }
    }
    ctx->pc = 0x2CBF64u;
    // 0x2cbf64: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2cbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2cbf68: 0xc095e10  jal         func_257840
    ctx->pc = 0x2CBF68u;
    SET_GPR_U32(ctx, 31, 0x2CBF70u);
    ctx->pc = 0x2CBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF68u;
    // 0x2cbf6c: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257840u, 0x2CBF68u, 0x2CBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF70u;
label_2cbf70:
    // 0x2cbf70: 0xc09b058  jal         func_26C160
    ctx->pc = 0x2CBF70u;
    SET_GPR_U32(ctx, 31, 0x2CBF78u);
    ctx->pc = 0x2CBF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF70u;
    // 0x2cbf74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C160u, 0x2CBF70u, 0x2CBF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF78u;
label_2cbf78:
    // 0x2cbf78: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2cbf7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2cbf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbf80:
    // 0x2cbf80: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBF80u;
    {
        const bool branch_taken_0x2cbf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2cbf80) {
            ctx->pc = 0x2CBF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF80u;
            // 0x2cbf84: 0xaf909f78  sw          $s0, -0x6088($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBFA0u;
            goto label_2cbfa0;
        }
    }
    ctx->pc = 0x2CBF88u;
    // 0x2cbf88: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2cbf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2cbf8c: 0xc095e10  jal         func_257840
    ctx->pc = 0x2CBF8Cu;
    SET_GPR_U32(ctx, 31, 0x2CBF94u);
    ctx->pc = 0x2CBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF8Cu;
    // 0x2cbf90: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257840u, 0x2CBF8Cu, 0x2CBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF94u;
label_2cbf94:
    // 0x2cbf94: 0xc09b058  jal         func_26C160
    ctx->pc = 0x2CBF94u;
    SET_GPR_U32(ctx, 31, 0x2CBF9Cu);
    ctx->pc = 0x2CBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF94u;
    // 0x2cbf98: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C160u, 0x2CBF94u, 0x2CBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF9Cu;
label_2cbf9c:
    // 0x2cbf9c: 0xaf909f78  sw          $s0, -0x6088($gp)
    ctx->pc = 0x2cbf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 16));
label_2cbfa0:
    // 0x2cbfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbfa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFA8u;
        // 0x2cbfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFB0u;
}
