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

// Function: sceSifCallRpc
// Address: 0x2d2d08 - 0x2d2ebc
void sceSifCallRpc_0x2d2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifCallRpc_0x2d2d08");
#endif

    switch (ctx->pc) {
        case 0x2d2d60u: goto label_2d2d60;
        case 0x2d2dbcu: goto label_2d2dbc;
        case 0x2d2dd4u: goto label_2d2dd4;
        case 0x2d2e1cu: goto label_2d2e1c;
        case 0x2d2e3cu: goto label_2d2e3c;
        case 0x2d2e70u: goto label_2d2e70;
        case 0x2d2e80u: goto label_2d2e80;
        case 0x2d2e88u: goto label_2d2e88;
        default: break;
    }

    ctx->pc = 0x2d2d08u;

    // 0x2d2d08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d2d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d2d0c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2d2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2d2d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d14: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2d2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2d2d18: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2d2d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2d2d1c: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x2d2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x2d2d20: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2d2d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2d2d24: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2d2d24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d28: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2d2d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2d2d2c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d2d2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d30: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2d2d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2d2d34: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d2d34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d38: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2d2d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2d2d3c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d2d3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d40: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d2d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d2d44: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2d2d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d2d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d2d4c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2d2d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d50: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2d2d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2d2d54: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2d2d54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d58: 0xc0b49b6  jal         func_2D26D8
    ctx->pc = 0x2D2D58u;
    SET_GPR_U32(ctx, 31, 0x2D2D60u);
    ctx->pc = 0x2D2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2D58u;
    // 0x2d2d5c: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D26D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D26D8u, 0x2D2D58u, 0x2D2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D60u;
label_2d2d60:
    // 0x2d2d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d64: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D2D64u;
    {
        const bool branch_taken_0x2d2d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D64u;
        // 0x2d2d68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d64) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2D6Cu;
    // 0x2d2d6c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2d2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d2d70: 0x33c40002  andi        $a0, $fp, 0x2
    ctx->pc = 0x2d2d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2d2d74: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d2d78: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2d2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2d2d7c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2d2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2d2d80: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2d2d84: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x2d2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x2d2d88: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x2d2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x2d2d8c: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x2d2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x2d2d90: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x2d2d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x2d2d94: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x2d2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x2d2d98: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x2d2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x2d2d9c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2d2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2d2da0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2d2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x2d2da4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2DA4u;
    {
        const bool branch_taken_0x2d2da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DA4u;
        // 0x2d2da8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2da4) {
            ctx->pc = 0x2D2DD4u;
            goto label_2d2dd4;
        }
    }
    ctx->pc = 0x2D2DACu;
    // 0x2d2dac: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2DACu;
    {
        const bool branch_taken_0x2d2dac = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2D2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DACu;
        // 0x2d2db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dac) {
            ctx->pc = 0x2D2DBCu;
            goto label_2d2dbc;
        }
    }
    ctx->pc = 0x2D2DB4u;
    // 0x2d2db4: 0xc0b491c  jal         func_2D2470
    ctx->pc = 0x2D2DB4u;
    SET_GPR_U32(ctx, 31, 0x2D2DBCu);
    ctx->pc = 0x2D2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DB4u;
    // 0x2d2db8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2470u, 0x2D2DB4u, 0x2D2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DBCu;
label_2d2dbc:
    // 0x2d2dbc: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2DBCu;
    {
        const bool branch_taken_0x2d2dbc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2D2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DBCu;
        // 0x2d2dc0: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dbc) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2DC4u;
    // 0x2d2dc4: 0x12b20004  beq         $s5, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2DC4u;
    {
        const bool branch_taken_0x2d2dc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DC4u;
        // 0x2d2dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dc4) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2DCCu;
    // 0x2d2dcc: 0xc0b491c  jal         func_2D2470
    ctx->pc = 0x2D2DCCu;
    SET_GPR_U32(ctx, 31, 0x2D2DD4u);
    ctx->pc = 0x2D2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DCCu;
    // 0x2d2dd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2470u, 0x2D2DCCu, 0x2D2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DD4u;
label_2d2dd4:
    // 0x2d2dd4: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2d2dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_2d2dd8:
    // 0x2d2dd8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D2DD8u;
    {
        const bool branch_taken_0x2d2dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2dd8) {
            ctx->pc = 0x2D2DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2DD8u;
            // 0x2d2ddc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2E2Cu;
            goto label_2d2e2c;
        }
    }
    ctx->pc = 0x2D2DE0u;
    // 0x2d2de0: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2DE0u;
    {
        const bool branch_taken_0x2d2de0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DE0u;
        // 0x2d2de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2de0) {
            ctx->pc = 0x2D2DF0u;
            goto label_2d2df0;
        }
    }
    ctx->pc = 0x2D2DE8u;
    // 0x2d2de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2DE8u;
    {
        const bool branch_taken_0x2d2de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DE8u;
        // 0x2d2dec: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2de8) {
            ctx->pc = 0x2D2DF4u;
            goto label_2d2df4;
        }
    }
    ctx->pc = 0x2D2DF0u;
label_2d2df0:
    // 0x2d2df0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d2df4:
    // 0x2d2df4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2df8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2dfc: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x2d2dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d2e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d2e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e04: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2d2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2d2e08: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d2e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e0c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d2e0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e10: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x2d2e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x2d2e14: 0xc0b48b4  jal         func_2D22D0
    ctx->pc = 0x2D2E14u;
    SET_GPR_U32(ctx, 31, 0x2D2E1Cu);
    ctx->pc = 0x2D2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E14u;
    // 0x2d2e18: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22D0u, 0x2D2E14u, 0x2D2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E1Cu;
label_2d2e1c:
    // 0x2d2e1c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D2E1Cu;
    {
        const bool branch_taken_0x2d2e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E1Cu;
        // 0x2d2e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e1c) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2E24u;
    // 0x2d2e24: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D2E24u;
    {
        const bool branch_taken_0x2d2e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E24u;
        // 0x2d2e28: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e24) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2E2Cu;
label_2d2e2c:
    // 0x2d2e2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d2e30: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2d2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2d2e34: 0xc0b4048  jal         func_2D0120
    ctx->pc = 0x2D2E34u;
    SET_GPR_U32(ctx, 31, 0x2D2E3Cu);
    ctx->pc = 0x2D2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E34u;
    // 0x2d2e38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0120u, 0x2D2E34u, 0x2D2E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E3Cu;
label_2d2e3c:
    // 0x2d2e3c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2E3Cu;
    {
        const bool branch_taken_0x2d2e3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E3Cu;
        // 0x2d2e40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e3c) {
            ctx->pc = 0x2D2E4Cu;
            goto label_2d2e4c;
        }
    }
    ctx->pc = 0x2D2E44u;
    // 0x2d2e44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2E44u;
    {
        const bool branch_taken_0x2d2e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E44u;
        // 0x2d2e48: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e44) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2E4Cu;
label_2d2e4c:
    // 0x2d2e4c: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x2d2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x2d2e50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d2e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e58: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d2e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e5c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x2d2e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d2e60: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d2e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e64: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x2d2e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x2d2e68: 0xc0b48b4  jal         func_2D22D0
    ctx->pc = 0x2D2E68u;
    SET_GPR_U32(ctx, 31, 0x2D2E70u);
    ctx->pc = 0x2D2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E68u;
    // 0x2d2e6c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22D0u, 0x2D2E68u, 0x2D2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E70u;
label_2d2e70:
    // 0x2d2e70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2E70u;
    {
        const bool branch_taken_0x2d2e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E70u;
        // 0x2d2e74: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e70) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2E78u;
    // 0x2d2e78: 0xc0b4058  jal         func_2D0160
    ctx->pc = 0x2D2E78u;
    SET_GPR_U32(ctx, 31, 0x2D2E80u);
    ctx->pc = 0x2D2E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E78u;
    // 0x2d2e7c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0160u, 0x2D2E78u, 0x2D2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E80u;
label_2d2e80:
    // 0x2d2e80: 0xc0b404c  jal         func_2D0130
    ctx->pc = 0x2D2E80u;
    SET_GPR_U32(ctx, 31, 0x2D2E88u);
    ctx->pc = 0x2D2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E80u;
    // 0x2d2e84: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0130u, 0x2D2E80u, 0x2D2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E88u;
label_2d2e88:
    // 0x2d2e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2e8c:
    // 0x2d2e8c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2d2e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d2e90: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2d2e90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d2e94: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2d2e94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d2e98: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2d2e98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2e9c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2d2e9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2ea0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2d2ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2ea4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2d2ea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2ea8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d2ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2eac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2d2eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2eb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d2eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EB4u;
        // 0x2d2eb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2EBCu;
}
