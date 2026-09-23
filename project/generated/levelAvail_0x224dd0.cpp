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

// Function: levelAvail
// Address: 0x224dd0 - 0x224f20
void levelAvail_0x224dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("levelAvail_0x224dd0");
#endif

    switch (ctx->pc) {
        case 0x224e10u: goto label_224e10;
        case 0x224e30u: goto label_224e30;
        case 0x224e48u: goto label_224e48;
        case 0x224e60u: goto label_224e60;
        case 0x224e78u: goto label_224e78;
        case 0x224e90u: goto label_224e90;
        case 0x224ea8u: goto label_224ea8;
        case 0x224ec0u: goto label_224ec0;
        case 0x224ed8u: goto label_224ed8;
        case 0x224ef0u: goto label_224ef0;
        case 0x224f08u: goto label_224f08;
        default: break;
    }

    ctx->pc = 0x224dd0u;

    // 0x224dd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x224dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224dd8: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x224dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x224ddc: 0x2c620068  sltiu       $v0, $v1, 0x68
    ctx->pc = 0x224ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)104) ? 1 : 0);
    // 0x224de0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x224DE0u;
    {
        const bool branch_taken_0x224de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE0u;
        // 0x224de4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224de0) {
            ctx->pc = 0x224F10u;
            goto label_224f10;
        }
    }
    ctx->pc = 0x224DE8u;
    // 0x224de8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x224de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x224dec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224df0: 0x24420ba0  addiu       $v0, $v0, 0xBA0
    ctx->pc = 0x224df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2976));
    // 0x224df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224df8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224dfc: 0x800008  jr          $a0
    ctx->pc = 0x224DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224E04u: goto label_224e04;
            case 0x224E18u: goto label_224e18;
            case 0x224E20u: goto label_224e20;
            case 0x224E38u: goto label_224e38;
            case 0x224E50u: goto label_224e50;
            case 0x224E68u: goto label_224e68;
            case 0x224E80u: goto label_224e80;
            case 0x224E98u: goto label_224e98;
            case 0x224EB0u: goto label_224eb0;
            case 0x224EC8u: goto label_224ec8;
            case 0x224EE0u: goto label_224ee0;
            case 0x224EF8u: goto label_224ef8;
            case 0x224F10u: goto label_224f10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224E04u;
label_224e04:
    // 0x224e04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x224e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e08: 0xc089356  jal         func_224D58
    ctx->pc = 0x224E08u;
    SET_GPR_U32(ctx, 31, 0x224E10u);
    ctx->pc = 0x224E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E08u;
    // 0x224e0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224D58u, 0x224E08u, 0x224E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E10u;
label_224e10:
    // 0x224e10: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x224E10u;
    {
        const bool branch_taken_0x224e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E10u;
        // 0x224e14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e10) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224E18u;
label_224e18:
    // 0x224e18: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x224E18u;
    {
        const bool branch_taken_0x224e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E18u;
        // 0x224e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e18) {
            ctx->pc = 0x224F14u;
            goto label_224f14;
        }
    }
    ctx->pc = 0x224E20u;
label_224e20:
    // 0x224e20: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e28: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224E28u;
    SET_GPR_U32(ctx, 31, 0x224E30u);
    ctx->pc = 0x224E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E28u;
    // 0x224e2c: 0x24843748  addiu       $a0, $a0, 0x3748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224E28u, 0x224E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E30u;
label_224e30:
    // 0x224e30: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x224E30u;
    {
        const bool branch_taken_0x224e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E30u;
        // 0x224e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e30) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224E38u;
label_224e38:
    // 0x224e38: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e40: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224E40u;
    SET_GPR_U32(ctx, 31, 0x224E48u);
    ctx->pc = 0x224E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E40u;
    // 0x224e44: 0x24843758  addiu       $a0, $a0, 0x3758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224E40u, 0x224E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E48u;
label_224e48:
    // 0x224e48: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x224E48u;
    {
        const bool branch_taken_0x224e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E48u;
        // 0x224e4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e48) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224E50u;
label_224e50:
    // 0x224e50: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e58: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224E58u;
    SET_GPR_U32(ctx, 31, 0x224E60u);
    ctx->pc = 0x224E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E58u;
    // 0x224e5c: 0x24843768  addiu       $a0, $a0, 0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224E58u, 0x224E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E60u;
label_224e60:
    // 0x224e60: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x224E60u;
    {
        const bool branch_taken_0x224e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E60u;
        // 0x224e64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e60) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224E68u;
label_224e68:
    // 0x224e68: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e70: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224E70u;
    SET_GPR_U32(ctx, 31, 0x224E78u);
    ctx->pc = 0x224E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E70u;
    // 0x224e74: 0x24843778  addiu       $a0, $a0, 0x3778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224E70u, 0x224E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E78u;
label_224e78:
    // 0x224e78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x224E78u;
    {
        const bool branch_taken_0x224e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E78u;
        // 0x224e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e78) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224E80u;
label_224e80:
    // 0x224e80: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e88: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224E88u;
    SET_GPR_U32(ctx, 31, 0x224E90u);
    ctx->pc = 0x224E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E88u;
    // 0x224e8c: 0x24843788  addiu       $a0, $a0, 0x3788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224E88u, 0x224E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E90u;
label_224e90:
    // 0x224e90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x224E90u;
    {
        const bool branch_taken_0x224e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E90u;
        // 0x224e94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e90) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224E98u;
label_224e98:
    // 0x224e98: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ea0: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224EA0u;
    SET_GPR_U32(ctx, 31, 0x224EA8u);
    ctx->pc = 0x224EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EA0u;
    // 0x224ea4: 0x24843798  addiu       $a0, $a0, 0x3798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224EA0u, 0x224EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EA8u;
label_224ea8:
    // 0x224ea8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x224EA8u;
    {
        const bool branch_taken_0x224ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EA8u;
        // 0x224eac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ea8) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224EB0u;
label_224eb0:
    // 0x224eb0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eb8: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224EB8u;
    SET_GPR_U32(ctx, 31, 0x224EC0u);
    ctx->pc = 0x224EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EB8u;
    // 0x224ebc: 0x248437a8  addiu       $a0, $a0, 0x37A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224EB8u, 0x224EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EC0u;
label_224ec0:
    // 0x224ec0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x224EC0u;
    {
        const bool branch_taken_0x224ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EC0u;
        // 0x224ec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ec0) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224EC8u;
label_224ec8:
    // 0x224ec8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ed0: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224ED0u;
    SET_GPR_U32(ctx, 31, 0x224ED8u);
    ctx->pc = 0x224ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224ED0u;
    // 0x224ed4: 0x248437b8  addiu       $a0, $a0, 0x37B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224ED0u, 0x224ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224ED8u;
label_224ed8:
    // 0x224ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x224ED8u;
    {
        const bool branch_taken_0x224ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ED8u;
        // 0x224edc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ed8) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224EE0u;
label_224ee0:
    // 0x224ee0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224ee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ee8: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224EE8u;
    SET_GPR_U32(ctx, 31, 0x224EF0u);
    ctx->pc = 0x224EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EE8u;
    // 0x224eec: 0x248437c8  addiu       $a0, $a0, 0x37C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224EE8u, 0x224EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EF0u;
label_224ef0:
    // 0x224ef0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x224EF0u;
    {
        const bool branch_taken_0x224ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EF0u;
        // 0x224ef4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ef0) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224EF8u;
label_224ef8:
    // 0x224ef8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x224ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x224efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f00: 0xc08946a  jal         func_2251A8
    ctx->pc = 0x224F00u;
    SET_GPR_U32(ctx, 31, 0x224F08u);
    ctx->pc = 0x224F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F00u;
    // 0x224f04: 0x248437d8  addiu       $a0, $a0, 0x37D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251A8u, 0x224F00u, 0x224F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F08u;
label_224f08:
    // 0x224f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x224F08u;
    {
        const bool branch_taken_0x224f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F08u;
        // 0x224f0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f08) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224F10u;
label_224f10:
    // 0x224f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224f14:
    // 0x224f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224f18:
    // 0x224f18: 0x3e00008  jr          $ra
    ctx->pc = 0x224F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F18u;
        // 0x224f1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F20u;
}
