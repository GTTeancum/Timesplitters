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

// Function: botsetAvail
// Address: 0x224f20 - 0x22500c
void botsetAvail_0x224f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("botsetAvail_0x224f20");
#endif

    switch (ctx->pc) {
        case 0x224f64u: goto label_224f64;
        case 0x224f7cu: goto label_224f7c;
        case 0x224f94u: goto label_224f94;
        case 0x224facu: goto label_224fac;
        case 0x224fc4u: goto label_224fc4;
        case 0x224fdcu: goto label_224fdc;
        case 0x224ff4u: goto label_224ff4;
        default: break;
    }

    ctx->pc = 0x224f20u;

    // 0x224f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224f24: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x224f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x224f28: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x224F28u;
    {
        const bool branch_taken_0x224f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F28u;
        // 0x224f2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f28) {
            ctx->pc = 0x224FFCu;
            goto label_224ffc;
        }
    }
    ctx->pc = 0x224F30u;
    // 0x224f30: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x224f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x224f34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x224f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x224f38: 0x24420d40  addiu       $v0, $v0, 0xD40
    ctx->pc = 0x224f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
    // 0x224f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224f40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224f44: 0x800008  jr          $a0
    ctx->pc = 0x224F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224F4Cu: goto label_224f4c;
            case 0x224F54u: goto label_224f54;
            case 0x224F6Cu: goto label_224f6c;
            case 0x224F84u: goto label_224f84;
            case 0x224F9Cu: goto label_224f9c;
            case 0x224FB4u: goto label_224fb4;
            case 0x224FCCu: goto label_224fcc;
            case 0x224FE4u: goto label_224fe4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224F4Cu;
label_224f4c:
    // 0x224f4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x224F4Cu;
    {
        const bool branch_taken_0x224f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F4Cu;
        // 0x224f50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f4c) {
            ctx->pc = 0x225000u;
            goto label_225000;
        }
    }
    ctx->pc = 0x224F54u;
label_224f54:
    // 0x224f54: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f5c: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224F5Cu;
    SET_GPR_U32(ctx, 31, 0x224F64u);
    ctx->pc = 0x224F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F5Cu;
    // 0x224f60: 0x248437e8  addiu       $a0, $a0, 0x37E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224F5Cu, 0x224F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F64u;
label_224f64:
    // 0x224f64: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x224F64u;
    {
        const bool branch_taken_0x224f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F64u;
        // 0x224f68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f64) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224F6Cu;
label_224f6c:
    // 0x224f6c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f74: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224F74u;
    SET_GPR_U32(ctx, 31, 0x224F7Cu);
    ctx->pc = 0x224F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F74u;
    // 0x224f78: 0x248437f8  addiu       $a0, $a0, 0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224F74u, 0x224F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F7Cu;
label_224f7c:
    // 0x224f7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x224F7Cu;
    {
        const bool branch_taken_0x224f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F7Cu;
        // 0x224f80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f7c) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224F84u;
label_224f84:
    // 0x224f84: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f8c: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224F8Cu;
    SET_GPR_U32(ctx, 31, 0x224F94u);
    ctx->pc = 0x224F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F8Cu;
    // 0x224f90: 0x24843808  addiu       $a0, $a0, 0x3808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224F8Cu, 0x224F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F94u;
label_224f94:
    // 0x224f94: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x224F94u;
    {
        const bool branch_taken_0x224f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F94u;
        // 0x224f98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f94) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224F9Cu;
label_224f9c:
    // 0x224f9c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fa4: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224FA4u;
    SET_GPR_U32(ctx, 31, 0x224FACu);
    ctx->pc = 0x224FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FA4u;
    // 0x224fa8: 0x24843818  addiu       $a0, $a0, 0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224FA4u, 0x224FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FACu;
label_224fac:
    // 0x224fac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x224FACu;
    {
        const bool branch_taken_0x224fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FACu;
        // 0x224fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fac) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224FB4u;
label_224fb4:
    // 0x224fb4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fbc: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224FBCu;
    SET_GPR_U32(ctx, 31, 0x224FC4u);
    ctx->pc = 0x224FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FBCu;
    // 0x224fc0: 0x24843828  addiu       $a0, $a0, 0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224FBCu, 0x224FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FC4u;
label_224fc4:
    // 0x224fc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x224FC4u;
    {
        const bool branch_taken_0x224fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FC4u;
        // 0x224fc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fc4) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224FCCu;
label_224fcc:
    // 0x224fcc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fd4: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224FD4u;
    SET_GPR_U32(ctx, 31, 0x224FDCu);
    ctx->pc = 0x224FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FD4u;
    // 0x224fd8: 0x24843838  addiu       $a0, $a0, 0x3838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224FD4u, 0x224FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FDCu;
label_224fdc:
    // 0x224fdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x224FDCu;
    {
        const bool branch_taken_0x224fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FDCu;
        // 0x224fe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fdc) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224FE4u;
label_224fe4:
    // 0x224fe4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fec: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224FECu;
    SET_GPR_U32(ctx, 31, 0x224FF4u);
    ctx->pc = 0x224FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FECu;
    // 0x224ff0: 0x24843848  addiu       $a0, $a0, 0x3848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224FECu, 0x224FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FF4u;
label_224ff4:
    // 0x224ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x224FF4u;
    {
        const bool branch_taken_0x224ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FF4u;
        // 0x224ff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ff4) {
            ctx->pc = 0x225004u;
            goto label_225004;
        }
    }
    ctx->pc = 0x224FFCu;
label_224ffc:
    // 0x224ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225000:
    // 0x225000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225004:
    // 0x225004: 0x3e00008  jr          $ra
    ctx->pc = 0x225004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225004u;
        // 0x225008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22500Cu;
}
