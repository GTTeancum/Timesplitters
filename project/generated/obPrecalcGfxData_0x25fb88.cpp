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

// Function: obPrecalcGfxData
// Address: 0x25fb88 - 0x25fc90
void obPrecalcGfxData_0x25fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obPrecalcGfxData_0x25fb88");
#endif

    switch (ctx->pc) {
        case 0x25fbc4u: goto label_25fbc4;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc28u: goto label_25fc28;
        case 0x25fc34u: goto label_25fc34;
        case 0x25fc44u: goto label_25fc44;
        case 0x25fc54u: goto label_25fc54;
        case 0x25fc68u: goto label_25fc68;
        default: break;
    }

    ctx->pc = 0x25fb88u;

    // 0x25fb88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fb90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25fb94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25fb98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25fb98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25fba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fba4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25fba8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x25fba8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x25fbac: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x25fbacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x25fbb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fbb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fbb8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fbbc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FBBCu;
    SET_GPR_U32(ctx, 31, 0x25FBC4u);
    ctx->pc = 0x25FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBBCu;
    // 0x25fbc0: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FBBCu, 0x25FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBC4u;
label_25fbc4:
    // 0x25fbc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fbc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fbcc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x25fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x25fbd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fbd4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fbd8: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FBD8u;
    SET_GPR_U32(ctx, 31, 0x25FBE0u);
    ctx->pc = 0x25FBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBD8u;
    // 0x25fbdc: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FBD8u, 0x25FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBE0u;
label_25fbe0:
    // 0x25fbe0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fbe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fbe8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x25fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x25fbec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fbf0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fbf4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FBF4u;
    SET_GPR_U32(ctx, 31, 0x25FBFCu);
    ctx->pc = 0x25FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBF4u;
    // 0x25fbf8: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FBF4u, 0x25FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBFCu;
label_25fbfc:
    // 0x25fbfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fc00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fc04: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x25fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x25fc08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fc0c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25fc10: 0xc08070e  jal         func_201C38
    ctx->pc = 0x25FC10u;
    SET_GPR_U32(ctx, 31, 0x25FC18u);
    ctx->pc = 0x25FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC10u;
    // 0x25fc14: 0x902024  and         $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x25FC10u, 0x25FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC18u;
label_25fc18:
    // 0x25fc18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fc1c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x25FC1Cu;
    {
        const bool branch_taken_0x25fc1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC1Cu;
        // 0x25fc20: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc1c) {
            ctx->pc = 0x25FC78u;
            goto label_25fc78;
        }
    }
    ctx->pc = 0x25FC24u;
    // 0x25fc24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25fc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25fc28:
    // 0x25fc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc2c: 0xc097bb0  jal         func_25EEC0
    ctx->pc = 0x25FC2Cu;
    SET_GPR_U32(ctx, 31, 0x25FC34u);
    ctx->pc = 0x25FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC2Cu;
    // 0x25fc30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEC0u, 0x25FC2Cu, 0x25FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC34u;
label_25fc34:
    // 0x25fc34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25fc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc3c: 0xc097bb0  jal         func_25EEC0
    ctx->pc = 0x25FC3Cu;
    SET_GPR_U32(ctx, 31, 0x25FC44u);
    ctx->pc = 0x25FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC3Cu;
    // 0x25fc40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEC0u, 0x25FC3Cu, 0x25FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC44u;
label_25fc44:
    // 0x25fc44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25fc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc4c: 0xc097d02  jal         func_25F408
    ctx->pc = 0x25FC4Cu;
    SET_GPR_U32(ctx, 31, 0x25FC54u);
    ctx->pc = 0x25FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC4Cu;
    // 0x25fc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F408u, 0x25FC4Cu, 0x25FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC54u;
label_25fc54:
    // 0x25fc54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fc60: 0xc097d02  jal         func_25F408
    ctx->pc = 0x25FC60u;
    SET_GPR_U32(ctx, 31, 0x25FC68u);
    ctx->pc = 0x25FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC60u;
    // 0x25fc64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F408u, 0x25FC60u, 0x25FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC68u;
label_25fc68:
    // 0x25fc68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fc6c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x25fc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25fc70: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x25FC70u;
    {
        const bool branch_taken_0x25fc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC70u;
        // 0x25fc74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc70) {
            ctx->pc = 0x25FC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fc28;
        }
    }
    ctx->pc = 0x25FC78u;
label_25fc78:
    // 0x25fc78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25fc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fc7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25fc7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fc80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25fc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fc84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fc88: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC88u;
        // 0x25fc8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FC90u;
}
