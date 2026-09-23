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

// Function: drawBotSet
// Address: 0x235cc8 - 0x235ddc
void drawBotSet_0x235cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawBotSet_0x235cc8");
#endif

    switch (ctx->pc) {
        case 0x235ce8u: goto label_235ce8;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d54u: goto label_235d54;
        case 0x235d64u: goto label_235d64;
        case 0x235d94u: goto label_235d94;
        case 0x235da8u: goto label_235da8;
        case 0x235dbcu: goto label_235dbc;
        default: break;
    }

    ctx->pc = 0x235cc8u;

    // 0x235cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235ccc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x235cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x235cd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235cd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235cdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ce0: 0xc08d564  jal         func_235590
    ctx->pc = 0x235CE0u;
    SET_GPR_U32(ctx, 31, 0x235CE8u);
    ctx->pc = 0x235CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CE0u;
    // 0x235ce4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x235CE0u, 0x235CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CE8u;
label_235ce8:
    // 0x235ce8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235CE8u;
    {
        const bool branch_taken_0x235ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CE8u;
        // 0x235cec: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ce8) {
            ctx->pc = 0x235D0Cu;
            goto label_235d0c;
        }
    }
    ctx->pc = 0x235CF0u;
    // 0x235cf0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x235cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x235cf4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x235cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x235cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x235cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235d00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x235d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235d04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235D04u;
    {
        const bool branch_taken_0x235d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D04u;
        // 0x235d08: 0x8c9005a8  lw          $s0, 0x5A8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d04) {
            ctx->pc = 0x235D24u;
            goto label_235d24;
        }
    }
    ctx->pc = 0x235D0Cu;
label_235d0c:
    // 0x235d0c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x235d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x235d10: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x235d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x235d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x235d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235d1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x235d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235d20: 0x8c9005ac  lw          $s0, 0x5AC($a0)
    ctx->pc = 0x235d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1452)));
label_235d24:
    // 0x235d24: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x235d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x235d28: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x235d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x235d2c: 0x8c431228  lw          $v1, 0x1228($v0)
    ctx->pc = 0x235d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC1228u));
    // 0x235d30: 0x10640025  beq         $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x235D30u;
    {
        const bool branch_taken_0x235d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x235D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D30u;
        // 0x235d34: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d30) {
            ctx->pc = 0x235DC8u;
            goto label_235dc8;
        }
    }
    ctx->pc = 0x235D38u;
    // 0x235d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d3c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x235d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x235d40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x235d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d44: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x235D44u;
    SET_GPR_U32(ctx, 31, 0x235D4Cu);
    ctx->pc = 0x235D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D44u;
    // 0x235d48: 0x8f88a020  lw          $t0, -0x5FE0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x235D44u, 0x235D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D4Cu;
label_235d4c:
    // 0x235d4c: 0xc08d564  jal         func_235590
    ctx->pc = 0x235D4Cu;
    SET_GPR_U32(ctx, 31, 0x235D54u);
    ctx->pc = 0x235D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D4Cu;
    // 0x235d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x235D4Cu, 0x235D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D54u;
label_235d54:
    // 0x235d54: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x235D54u;
    {
        const bool branch_taken_0x235d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D54u;
        // 0x235d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d54) {
            ctx->pc = 0x235DC8u;
            goto label_235dc8;
        }
    }
    ctx->pc = 0x235D5Cu;
    // 0x235d5c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x235D5Cu;
    SET_GPR_U32(ctx, 31, 0x235D64u);
    ctx->pc = 0x235D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D5Cu;
    // 0x235d60: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x235D5Cu, 0x235D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D64u;
label_235d64:
    // 0x235d64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x235d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235d68: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x235d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x235d6c: 0x8c853838  lw          $a1, 0x3838($a0)
    ctx->pc = 0x235d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x353838u));
    // 0x235d70: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x235d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x235d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235d78: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x235D78u;
    {
        const bool branch_taken_0x235d78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x235D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D78u;
        // 0x235d7c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d78) {
            ctx->pc = 0x235D9Cu;
            goto label_235d9c;
        }
    }
    ctx->pc = 0x235D80u;
    // 0x235d80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x235d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d8c: 0xc08d6c0  jal         func_235B00
    ctx->pc = 0x235D8Cu;
    SET_GPR_U32(ctx, 31, 0x235D94u);
    ctx->pc = 0x235D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D8Cu;
    // 0x235d90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B00u, 0x235D8Cu, 0x235D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D94u;
label_235d94:
    // 0x235d94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x235D94u;
    {
        const bool branch_taken_0x235d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D94u;
        // 0x235d98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d94) {
            ctx->pc = 0x235DCCu;
            goto label_235dcc;
        }
    }
    ctx->pc = 0x235D9Cu;
label_235d9c:
    // 0x235d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x235d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235da0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x235da4: 0x0  nop
    ctx->pc = 0x235da4u;
    // NOP
label_235da8:
    // 0x235da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x235da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235db0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235db4: 0xc08d6c0  jal         func_235B00
    ctx->pc = 0x235DB4u;
    SET_GPR_U32(ctx, 31, 0x235DBCu);
    ctx->pc = 0x235DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DB4u;
    // 0x235db8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B00u, 0x235DB4u, 0x235DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DBCu;
label_235dbc:
    // 0x235dbc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x235dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x235dc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x235DC0u;
    {
        const bool branch_taken_0x235dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC0u;
        // 0x235dc4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dc0) {
            ctx->pc = 0x235DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235da8;
        }
    }
    ctx->pc = 0x235DC8u;
label_235dc8:
    // 0x235dc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235dcc:
    // 0x235dcc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x235dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235dd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x235DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD4u;
        // 0x235dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235DDCu;
}
