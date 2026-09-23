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

// Function: enemyRestart
// Address: 0x2b9d70 - 0x2ba03c
void enemyRestart_0x2b9d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyRestart_0x2b9d70");
#endif

    switch (ctx->pc) {
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9fb0u: goto label_2b9fb0;
        default: break;
    }

    ctx->pc = 0x2b9d70u;

    // 0x2b9d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9d74: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2b9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2b9d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9d7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b9d80: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B9D80u;
    {
        const bool branch_taken_0x2b9d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D80u;
        // 0x2b9d84: 0xaf80b4c8  sw          $zero, -0x4B38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d80) {
            ctx->pc = 0x2B9DACu;
            goto label_2b9dac;
        }
    }
    ctx->pc = 0x2B9D88u;
    // 0x2b9d88: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2b9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2b9d8c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9D8Cu;
    {
        const bool branch_taken_0x2b9d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D8Cu;
        // 0x2b9d90: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d8c) {
            ctx->pc = 0x2B9DACu;
            goto label_2b9dac;
        }
    }
    ctx->pc = 0x2B9D94u;
    // 0x2b9d94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9D94u;
    {
        const bool branch_taken_0x2b9d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D94u;
        // 0x2b9d98: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d94) {
            ctx->pc = 0x2B9DACu;
            goto label_2b9dac;
        }
    }
    ctx->pc = 0x2B9D9Cu;
    // 0x2b9d9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9D9Cu;
    {
        const bool branch_taken_0x2b9d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D9Cu;
        // 0x2b9da0: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d9c) {
            ctx->pc = 0x2B9DACu;
            goto label_2b9dac;
        }
    }
    ctx->pc = 0x2B9DA4u;
    // 0x2b9da4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9DA4u;
    {
        const bool branch_taken_0x2b9da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DA4u;
        // 0x2b9da8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9da4) {
            ctx->pc = 0x2B9DB4u;
            goto label_2b9db4;
        }
    }
    ctx->pc = 0x2B9DACu;
label_2b9dac:
    // 0x2b9dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9DACu;
    {
        const bool branch_taken_0x2b9dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DACu;
        // 0x2b9db0: 0xaf80b59c  sw          $zero, -0x4A64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9dac) {
            ctx->pc = 0x2B9DBCu;
            goto label_2b9dbc;
        }
    }
    ctx->pc = 0x2B9DB4u;
label_2b9db4:
    // 0x2b9db4: 0x8c42c4b0  lw          $v0, -0x3B50($v0)
    ctx->pc = 0x2b9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952112)));
    // 0x2b9db8: 0xaf82b59c  sw          $v0, -0x4A64($gp)
    ctx->pc = 0x2b9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948252), GPR_U32(ctx, 2));
label_2b9dbc:
    // 0x2b9dbc: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2b9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2b9dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9dc4: 0x2484df00  addiu       $a0, $a0, -0x2100
    ctx->pc = 0x2b9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958848));
    // 0x2b9dc8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9DC8u;
    SET_GPR_U32(ctx, 31, 0x2B9DD0u);
    ctx->pc = 0x2B9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DC8u;
    // 0x2b9dcc: 0x24060320  addiu       $a2, $zero, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9DC8u, 0x2B9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DD0u;
label_2b9dd0:
    // 0x2b9dd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9dd4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9dd8: 0xaf83b4d8  sw          $v1, -0x4B28($gp)
    ctx->pc = 0x2b9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948056), GPR_U32(ctx, 3));
    // 0x2b9ddc: 0x24842208  addiu       $a0, $a0, 0x2208
    ctx->pc = 0x2b9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8712));
    // 0x2b9de0: 0xaf80b4cc  sw          $zero, -0x4B34($gp)
    ctx->pc = 0x2b9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948044), GPR_U32(ctx, 0));
    // 0x2b9de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9de8: 0xaf80b4d0  sw          $zero, -0x4B30($gp)
    ctx->pc = 0x2b9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948048), GPR_U32(ctx, 0));
    // 0x2b9dec: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x2b9decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2b9df0: 0xaf80b4d4  sw          $zero, -0x4B2C($gp)
    ctx->pc = 0x2b9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948052), GPR_U32(ctx, 0));
    // 0x2b9df4: 0xaf80b4dc  sw          $zero, -0x4B24($gp)
    ctx->pc = 0x2b9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948060), GPR_U32(ctx, 0));
    // 0x2b9df8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9DF8u;
    SET_GPR_U32(ctx, 31, 0x2B9E00u);
    ctx->pc = 0x2B9DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DF8u;
    // 0x2b9dfc: 0xaf80b4e0  sw          $zero, -0x4B20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948064), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9DF8u, 0x2B9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E00u;
label_2b9e00:
    // 0x2b9e00: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9e04: 0xaf80b4e4  sw          $zero, -0x4B1C($gp)
    ctx->pc = 0x2b9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948068), GPR_U32(ctx, 0));
    // 0x2b9e08: 0x24842028  addiu       $a0, $a0, 0x2028
    ctx->pc = 0x2b9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8232));
    // 0x2b9e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e10: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9E10u;
    SET_GPR_U32(ctx, 31, 0x2B9E18u);
    ctx->pc = 0x2B9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E10u;
    // 0x2b9e14: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9E10u, 0x2B9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E18u;
label_2b9e18:
    // 0x2b9e18: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9e1c: 0xaf80b4e8  sw          $zero, -0x4B18($gp)
    ctx->pc = 0x2b9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948072), GPR_U32(ctx, 0));
    // 0x2b9e20: 0x24842320  addiu       $a0, $a0, 0x2320
    ctx->pc = 0x2b9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8992));
    // 0x2b9e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e28: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9E28u;
    SET_GPR_U32(ctx, 31, 0x2B9E30u);
    ctx->pc = 0x2B9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E28u;
    // 0x2b9e2c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9E28u, 0x2B9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E30u;
label_2b9e30:
    // 0x2b9e30: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9e34: 0xaf80b4ec  sw          $zero, -0x4B14($gp)
    ctx->pc = 0x2b9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948076), GPR_U32(ctx, 0));
    // 0x2b9e38: 0x248423e8  addiu       $a0, $a0, 0x23E8
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9192));
    // 0x2b9e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e40: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9E40u;
    SET_GPR_U32(ctx, 31, 0x2B9E48u);
    ctx->pc = 0x2B9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E40u;
    // 0x2b9e44: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9E40u, 0x2B9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E48u;
label_2b9e48:
    // 0x2b9e48: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9e4c: 0xaf80b4f0  sw          $zero, -0x4B10($gp)
    ctx->pc = 0x2b9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948080), GPR_U32(ctx, 0));
    // 0x2b9e50: 0x24842488  addiu       $a0, $a0, 0x2488
    ctx->pc = 0x2b9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9352));
    // 0x2b9e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e58: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9E58u;
    SET_GPR_U32(ctx, 31, 0x2B9E60u);
    ctx->pc = 0x2B9E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E58u;
    // 0x2b9e5c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9E58u, 0x2B9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E60u;
label_2b9e60:
    // 0x2b9e60: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9e64: 0xaf80b4f4  sw          $zero, -0x4B0C($gp)
    ctx->pc = 0x2b9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948084), GPR_U32(ctx, 0));
    // 0x2b9e68: 0x24842010  addiu       $a0, $a0, 0x2010
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8208));
    // 0x2b9e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e70: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9E70u;
    SET_GPR_U32(ctx, 31, 0x2B9E78u);
    ctx->pc = 0x2B9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E70u;
    // 0x2b9e74: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9E70u, 0x2B9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E78u;
label_2b9e78:
    // 0x2b9e78: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b9e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b9e7c: 0xaf80b4f8  sw          $zero, -0x4B08($gp)
    ctx->pc = 0x2b9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948088), GPR_U32(ctx, 0));
    // 0x2b9e80: 0x248424d8  addiu       $a0, $a0, 0x24D8
    ctx->pc = 0x2b9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9432));
    // 0x2b9e84: 0xaf80b4fc  sw          $zero, -0x4B04($gp)
    ctx->pc = 0x2b9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948092), GPR_U32(ctx, 0));
    // 0x2b9e88: 0xaf80b500  sw          $zero, -0x4B00($gp)
    ctx->pc = 0x2b9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948096), GPR_U32(ctx, 0));
    // 0x2b9e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e90: 0xaf80b504  sw          $zero, -0x4AFC($gp)
    ctx->pc = 0x2b9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948100), GPR_U32(ctx, 0));
    // 0x2b9e94: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2b9e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2b9e98: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2B9E98u;
    SET_GPR_U32(ctx, 31, 0x2B9EA0u);
    ctx->pc = 0x2B9E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E98u;
    // 0x2b9e9c: 0xaf80b508  sw          $zero, -0x4AF8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2B9E98u, 0x2B9EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EA0u;
label_2b9ea0:
    // 0x2b9ea0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b9ea4: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x2b9ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2b9ea8: 0x24421ff8  addiu       $v0, $v0, 0x1FF8
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x2b9eac: 0xaf80b9bc  sw          $zero, -0x4644($gp)
    ctx->pc = 0x2b9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949308), GPR_U32(ctx, 0));
    // 0x2b9eb0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b9eb4: 0xaf80b4c8  sw          $zero, -0x4B38($gp)
    ctx->pc = 0x2b9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948040), GPR_U32(ctx, 0));
    // 0x2b9eb8: 0xaf80b9b8  sw          $zero, -0x4648($gp)
    ctx->pc = 0x2b9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949304), GPR_U32(ctx, 0));
    // 0x2b9ebc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9ec0: 0x8f82b59c  lw          $v0, -0x4A64($gp)
    ctx->pc = 0x2b9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2b9ec4: 0x0  nop
    ctx->pc = 0x2b9ec4u;
    // NOP
label_2b9ec8:
    // 0x2b9ec8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b9ecc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2b9eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2b9ed0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b9ed4: 0x0  nop
    ctx->pc = 0x2b9ed4u;
    // NOP
    // 0x2b9ed8: 0x0  nop
    ctx->pc = 0x2b9ed8u;
    // NOP
    // 0x2b9edc: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B9EDCu;
    {
        const bool branch_taken_0x2b9edc = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x2b9edc) {
            ctx->pc = 0x2B9EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9ec8;
        }
    }
    ctx->pc = 0x2B9EE4u;
    // 0x2b9ee4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b9ee8: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B9EE8u;
    {
        const bool branch_taken_0x2b9ee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ee8) {
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9EF0u;
    // 0x2b9ef0: 0x8f89b238  lw          $t1, -0x4DC8($gp)
    ctx->pc = 0x2b9ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2b9ef4: 0x0  nop
    ctx->pc = 0x2b9ef4u;
    // NOP
label_2b9ef8:
    // 0x2b9ef8: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2b9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2b9efc: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x2b9efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b9f00: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2b9f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b9f04: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2b9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b9f08: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2b9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b9f0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b9f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f10: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x2b9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x2b9f14: 0xac6001b8  sw          $zero, 0x1B8($v1)
    ctx->pc = 0x2b9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 0));
    // 0x2b9f18: 0x24420268  addiu       $v0, $v0, 0x268
    ctx->pc = 0x2b9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    // 0x2b9f1c: 0xac60014c  sw          $zero, 0x14C($v1)
    ctx->pc = 0x2b9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 0));
    // 0x2b9f20: 0xac6001e4  sw          $zero, 0x1E4($v1)
    ctx->pc = 0x2b9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 484), GPR_U32(ctx, 0));
    // 0x2b9f24: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x2b9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
label_2b9f28:
    // 0x2b9f28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b9f2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b9f30: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2b9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2b9f34: 0x0  nop
    ctx->pc = 0x2b9f34u;
    // NOP
    // 0x2b9f38: 0x0  nop
    ctx->pc = 0x2b9f38u;
    // NOP
    // 0x2b9f3c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B9F3Cu;
    {
        const bool branch_taken_0x2b9f3c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2b9f3c) {
            ctx->pc = 0x2B9F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9f28;
        }
    }
    ctx->pc = 0x2B9F44u;
    // 0x2b9f44: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2b9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2b9f48: 0x8f84b59c  lw          $a0, -0x4A64($gp)
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2b9f4c: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x2b9f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b9f50: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2b9f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2b9f54: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2b9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2b9f58: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2b9f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f5c: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x2b9f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
    // 0x2b9f60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b9f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9f64: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b9f68: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2b9f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b9f6c: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x2b9f6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b9f70: 0x8c620a90  lw          $v0, 0xA90($v1)
    ctx->pc = 0x2b9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2704)));
    // 0x2b9f74: 0xac6711ac  sw          $a3, 0x11AC($v1)
    ctx->pc = 0x2b9f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4524), GPR_U32(ctx, 7));
    // 0x2b9f78: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b9f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b9f7c: 0xac6011a4  sw          $zero, 0x11A4($v1)
    ctx->pc = 0x2b9f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4516), GPR_U32(ctx, 0));
    // 0x2b9f80: 0xac620a90  sw          $v0, 0xA90($v1)
    ctx->pc = 0x2b9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2704), GPR_U32(ctx, 2));
    // 0x2b9f84: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2B9F84u;
    {
        const bool branch_taken_0x2b9f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F84u;
        // 0x2b9f88: 0xac6011a8  sw          $zero, 0x11A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f84) {
            ctx->pc = 0x2B9EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9ef8;
        }
    }
    ctx->pc = 0x2B9F8Cu;
label_2b9f8c:
    // 0x2b9f8c: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x2B9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F94u);
    ctx->pc = 0x2B9F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F8Cu;
    // 0x2b9f90: 0x8f849f70  lw          $a0, -0x6090($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x2B9F8Cu, 0x2B9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F94u;
label_2b9f94:
    // 0x2b9f94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f98: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B9F98u;
    {
        const bool branch_taken_0x2b9f98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F98u;
        // 0x2b9f9c: 0xaf86b4fc  sw          $a2, -0x4B04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948092), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f98) {
            ctx->pc = 0x2B9FECu;
            goto label_2b9fec;
        }
    }
    ctx->pc = 0x2B9FA0u;
    // 0x2b9fa0: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x2b9fa4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9FA4u;
    {
        const bool branch_taken_0x2b9fa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA4u;
        // 0x2b9fa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fa4) {
            ctx->pc = 0x2B9FECu;
            goto label_2b9fec;
        }
    }
    ctx->pc = 0x2B9FACu;
    // 0x2b9fac: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x2b9facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2b9fb0:
    // 0x2b9fb0: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2b9fb4: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2b9fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b9fb8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b9fbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b9fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b9fc4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2b9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b9fc8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2b9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2b9fcc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b9fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b9fd0: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2b9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2b9fd4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x2b9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x2b9fd8: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2b9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2b9fdc: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x2b9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x2b9fe0: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2b9fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b9fe4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B9FE4u;
    {
        const bool branch_taken_0x2b9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FE4u;
        // 0x2b9fe8: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fe4) {
            ctx->pc = 0x2B9FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9fb0;
        }
    }
    ctx->pc = 0x2B9FECu;
label_2b9fec:
    // 0x2b9fec: 0xc7808fe0  lwc1        $f0, -0x7020($gp)
    ctx->pc = 0x2b9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9ff4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b9ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9ffc: 0xaf82b9e8  sw          $v0, -0x4618($gp)
    ctx->pc = 0x2b9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949352), GPR_U32(ctx, 2));
    // 0x2ba000: 0xe780b9dc  swc1        $f0, -0x4624($gp)
    ctx->pc = 0x2ba000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), bits); }
    // 0x2ba004: 0xaf83b9ec  sw          $v1, -0x4614($gp)
    ctx->pc = 0x2ba004u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 3));
    // 0x2ba008: 0xaf80b9f0  sw          $zero, -0x4610($gp)
    ctx->pc = 0x2ba008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 0));
    // 0x2ba00c: 0xaf80b9c0  sw          $zero, -0x4640($gp)
    ctx->pc = 0x2ba00cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 0));
    // 0x2ba010: 0xaf80b9f4  sw          $zero, -0x460C($gp)
    ctx->pc = 0x2ba010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949364), GPR_U32(ctx, 0));
    // 0x2ba014: 0xaf80b9c4  sw          $zero, -0x463C($gp)
    ctx->pc = 0x2ba014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949316), GPR_U32(ctx, 0));
    // 0x2ba018: 0xaf80b9c8  sw          $zero, -0x4638($gp)
    ctx->pc = 0x2ba018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949320), GPR_U32(ctx, 0));
    // 0x2ba01c: 0xaf80b9cc  sw          $zero, -0x4634($gp)
    ctx->pc = 0x2ba01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949324), GPR_U32(ctx, 0));
    // 0x2ba020: 0xe780b9d0  swc1        $f0, -0x4630($gp)
    ctx->pc = 0x2ba020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949328), bits); }
    // 0x2ba024: 0xaf80b9d4  sw          $zero, -0x462C($gp)
    ctx->pc = 0x2ba024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949332), GPR_U32(ctx, 0));
    // 0x2ba028: 0xaf80b9d8  sw          $zero, -0x4628($gp)
    ctx->pc = 0x2ba028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949336), GPR_U32(ctx, 0));
    // 0x2ba02c: 0xaf80b9e0  sw          $zero, -0x4620($gp)
    ctx->pc = 0x2ba02cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949344), GPR_U32(ctx, 0));
    // 0x2ba030: 0xaf80b9e4  sw          $zero, -0x461C($gp)
    ctx->pc = 0x2ba030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949348), GPR_U32(ctx, 0));
    // 0x2ba034: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA034u;
        // 0x2ba038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA03Cu;
}
