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

// Function: lvPreload
// Address: 0x225d98 - 0x225e98
void lvPreload_0x225d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvPreload_0x225d98");
#endif

    switch (ctx->pc) {
        case 0x225da8u: goto label_225da8;
        case 0x225ddcu: goto label_225ddc;
        case 0x225decu: goto label_225dec;
        case 0x225dfcu: goto label_225dfc;
        case 0x225e0cu: goto label_225e0c;
        case 0x225e1cu: goto label_225e1c;
        case 0x225e24u: goto label_225e24;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e34u: goto label_225e34;
        case 0x225e3cu: goto label_225e3c;
        case 0x225e44u: goto label_225e44;
        case 0x225e4cu: goto label_225e4c;
        case 0x225e54u: goto label_225e54;
        case 0x225e5cu: goto label_225e5c;
        case 0x225e64u: goto label_225e64;
        case 0x225e6cu: goto label_225e6c;
        case 0x225e74u: goto label_225e74;
        case 0x225e7cu: goto label_225e7c;
        case 0x225e84u: goto label_225e84;
        case 0x225e8cu: goto label_225e8c;
        default: break;
    }

    ctx->pc = 0x225d98u;

    // 0x225d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225da0: 0xc0807ea  jal         func_201FA8
    ctx->pc = 0x225DA0u;
    SET_GPR_U32(ctx, 31, 0x225DA8u);
    ctx->pc = 0x201FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201FA8u, 0x225DA0u, 0x225DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DA8u;
label_225da8:
    // 0x225da8: 0x8f829f70  lw          $v0, -0x6090($gp)
    ctx->pc = 0x225da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x225dac: 0x2444ff9b  addiu       $a0, $v0, -0x65
    ctx->pc = 0x225dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967195));
    // 0x225db0: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x225db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x225db4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x225DB4u;
    {
        const bool branch_taken_0x225db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DB4u;
        // 0x225db8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225db4) {
            ctx->pc = 0x225E14u;
            goto label_225e14;
        }
    }
    ctx->pc = 0x225DBCu;
    // 0x225dbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x225dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225dc0: 0x24420dc0  addiu       $v0, $v0, 0xDC0
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x225dc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x225dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225dc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225dcc: 0x800008  jr          $a0
    ctx->pc = 0x225DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225DD4u: goto label_225dd4;
            case 0x225DE4u: goto label_225de4;
            case 0x225DF4u: goto label_225df4;
            case 0x225E04u: goto label_225e04;
            case 0x225E8Cu: goto label_225e8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x225DD4u;
label_225dd4:
    // 0x225dd4: 0xc090428  jal         func_2410A0
    ctx->pc = 0x225DD4u;
    SET_GPR_U32(ctx, 31, 0x225DDCu);
    ctx->pc = 0x2410A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2410A0u, 0x225DD4u, 0x225DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DDCu;
label_225ddc:
    // 0x225ddc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x225DDCu;
    {
        const bool branch_taken_0x225ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DDCu;
        // 0x225de0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ddc) {
            ctx->pc = 0x225E90u;
            goto label_225e90;
        }
    }
    ctx->pc = 0x225DE4u;
label_225de4:
    // 0x225de4: 0xc0920f8  jal         func_2483E0
    ctx->pc = 0x225DE4u;
    SET_GPR_U32(ctx, 31, 0x225DECu);
    ctx->pc = 0x2483E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2483E0u, 0x225DE4u, 0x225DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DECu;
label_225dec:
    // 0x225dec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x225DECu;
    {
        const bool branch_taken_0x225dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DECu;
        // 0x225df0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225dec) {
            ctx->pc = 0x225E90u;
            goto label_225e90;
        }
    }
    ctx->pc = 0x225DF4u;
label_225df4:
    // 0x225df4: 0xc08a830  jal         func_22A0C0
    ctx->pc = 0x225DF4u;
    SET_GPR_U32(ctx, 31, 0x225DFCu);
    ctx->pc = 0x22A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A0C0u, 0x225DF4u, 0x225DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DFCu;
label_225dfc:
    // 0x225dfc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x225DFCu;
    {
        const bool branch_taken_0x225dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DFCu;
        // 0x225e00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225dfc) {
            ctx->pc = 0x225E90u;
            goto label_225e90;
        }
    }
    ctx->pc = 0x225E04u;
label_225e04:
    // 0x225e04: 0xc0ab97c  jal         func_2AE5F0
    ctx->pc = 0x225E04u;
    SET_GPR_U32(ctx, 31, 0x225E0Cu);
    ctx->pc = 0x2AE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE5F0u, 0x225E04u, 0x225E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E0Cu;
label_225e0c:
    // 0x225e0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x225E0Cu;
    {
        const bool branch_taken_0x225e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E0Cu;
        // 0x225e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e0c) {
            ctx->pc = 0x225E90u;
            goto label_225e90;
        }
    }
    ctx->pc = 0x225E14u;
label_225e14:
    // 0x225e14: 0xc0a5a36  jal         func_2968D8
    ctx->pc = 0x225E14u;
    SET_GPR_U32(ctx, 31, 0x225E1Cu);
    ctx->pc = 0x2968D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968D8u, 0x225E14u, 0x225E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E1Cu;
label_225e1c:
    // 0x225e1c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x225E1Cu;
    SET_GPR_U32(ctx, 31, 0x225E24u);
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x225E1Cu, 0x225E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E24u;
label_225e24:
    // 0x225e24: 0xc0aa004  jal         func_2A8010
    ctx->pc = 0x225E24u;
    SET_GPR_U32(ctx, 31, 0x225E2Cu);
    ctx->pc = 0x2A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8010u, 0x225E24u, 0x225E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E2Cu;
label_225e2c:
    // 0x225e2c: 0xc0aa18a  jal         func_2A8628
    ctx->pc = 0x225E2Cu;
    SET_GPR_U32(ctx, 31, 0x225E34u);
    ctx->pc = 0x2A8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8628u, 0x225E2Cu, 0x225E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E34u;
label_225e34:
    // 0x225e34: 0xc0aa5b8  jal         func_2A96E0
    ctx->pc = 0x225E34u;
    SET_GPR_U32(ctx, 31, 0x225E3Cu);
    ctx->pc = 0x2A96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96E0u, 0x225E34u, 0x225E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E3Cu;
label_225e3c:
    // 0x225e3c: 0xc09dec0  jal         func_277B00
    ctx->pc = 0x225E3Cu;
    SET_GPR_U32(ctx, 31, 0x225E44u);
    ctx->pc = 0x277B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B00u, 0x225E3Cu, 0x225E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E44u;
label_225e44:
    // 0x225e44: 0xc0a996e  jal         func_2A65B8
    ctx->pc = 0x225E44u;
    SET_GPR_U32(ctx, 31, 0x225E4Cu);
    ctx->pc = 0x2A65B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65B8u, 0x225E44u, 0x225E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E4Cu;
label_225e4c:
    // 0x225e4c: 0xc09fd36  jal         func_27F4D8
    ctx->pc = 0x225E4Cu;
    SET_GPR_U32(ctx, 31, 0x225E54u);
    ctx->pc = 0x27F4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4D8u, 0x225E4Cu, 0x225E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E54u;
label_225e54:
    // 0x225e54: 0xc09587a  jal         func_2561E8
    ctx->pc = 0x225E54u;
    SET_GPR_U32(ctx, 31, 0x225E5Cu);
    ctx->pc = 0x2561E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2561E8u, 0x225E54u, 0x225E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E5Cu;
label_225e5c:
    // 0x225e5c: 0xc09904c  jal         func_264130
    ctx->pc = 0x225E5Cu;
    SET_GPR_U32(ctx, 31, 0x225E64u);
    ctx->pc = 0x264130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264130u, 0x225E5Cu, 0x225E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E64u;
label_225e64:
    // 0x225e64: 0xc0ac14c  jal         func_2B0530
    ctx->pc = 0x225E64u;
    SET_GPR_U32(ctx, 31, 0x225E6Cu);
    ctx->pc = 0x2B0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0530u, 0x225E64u, 0x225E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E6Cu;
label_225e6c:
    // 0x225e6c: 0xc0a3518  jal         func_28D460
    ctx->pc = 0x225E6Cu;
    SET_GPR_U32(ctx, 31, 0x225E74u);
    ctx->pc = 0x28D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D460u, 0x225E6Cu, 0x225E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E74u;
label_225e74:
    // 0x225e74: 0xc0ae812  jal         func_2BA048
    ctx->pc = 0x225E74u;
    SET_GPR_U32(ctx, 31, 0x225E7Cu);
    ctx->pc = 0x2BA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA048u, 0x225E74u, 0x225E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E7Cu;
label_225e7c:
    // 0x225e7c: 0xc084928  jal         func_2124A0
    ctx->pc = 0x225E7Cu;
    SET_GPR_U32(ctx, 31, 0x225E84u);
    ctx->pc = 0x2124A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124A0u, 0x225E7Cu, 0x225E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E84u;
label_225e84:
    // 0x225e84: 0xc09ca9e  jal         func_272A78
    ctx->pc = 0x225E84u;
    SET_GPR_U32(ctx, 31, 0x225E8Cu);
    ctx->pc = 0x272A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A78u, 0x225E84u, 0x225E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E8Cu;
label_225e8c:
    // 0x225e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225e90:
    // 0x225e90: 0x808a39c  j           func_228E70
    ctx->pc = 0x225E90u;
    ctx->pc = 0x225E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E90u;
    // 0x225e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228E70u;
    lvLevelSetupPreload_0x228e70(rdram, ctx, runtime); return;
    ctx->pc = 0x225E98u;
}
