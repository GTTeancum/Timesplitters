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

// Function: __pack_d
// Address: 0x2e2d70 - 0x2e2e9c
void ps2___pack_d_0x2e2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x2e2d70");
#endif

    ctx->pc = 0x2e2d70u;

    // 0x2e2d70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e2d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d78: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2e2d78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2d7c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e2d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e2d80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2D80u;
    {
        const bool branch_taken_0x2e2d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D80u;
        // 0x2e2d84: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d80) {
            ctx->pc = 0x2E2D9Cu;
            goto label_2e2d9c;
        }
    }
    ctx->pc = 0x2E2D88u;
    // 0x2e2d88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e2d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e2d8c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2e2d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2e2d90: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x2e2d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x2e2d94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2E2D94u;
    {
        const bool branch_taken_0x2e2d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D94u;
        // 0x2e2d98: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d94) {
            ctx->pc = 0x2E2E40u;
            goto label_2e2e40;
        }
    }
    ctx->pc = 0x2E2D9Cu;
label_2e2d9c:
    // 0x2e2d9c: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2e2d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2e2da0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2DA0u;
    {
        const bool branch_taken_0x2e2da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2da0) {
            ctx->pc = 0x2E2DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2DA0u;
            // 0x2e2da4: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2DFCu;
            goto label_2e2dfc;
        }
    }
    ctx->pc = 0x2E2DA8u;
    // 0x2e2da8: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e2da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e2dac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2DACu;
    {
        const bool branch_taken_0x2e2dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dac) {
            ctx->pc = 0x2E2DBCu;
            goto label_2e2dbc;
        }
    }
    ctx->pc = 0x2E2DB4u;
    // 0x2e2db4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E2DB4u;
    {
        const bool branch_taken_0x2e2db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DB4u;
        // 0x2e2db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2db4) {
            ctx->pc = 0x2E2E40u;
            goto label_2e2e40;
        }
    }
    ctx->pc = 0x2E2DBCu;
label_2e2dbc:
    // 0x2e2dbc: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E2DBCu;
    {
        const bool branch_taken_0x2e2dbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dbc) {
            ctx->pc = 0x2E2E40u;
            goto label_2e2e40;
        }
    }
    ctx->pc = 0x2E2DC4u;
    // 0x2e2dc4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e2dc8: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x2e2dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x2e2dcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2DCCu;
    {
        const bool branch_taken_0x2e2dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DCCu;
        // 0x2e2dd0: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2dcc) {
            ctx->pc = 0x2E2DECu;
            goto label_2e2dec;
        }
    }
    ctx->pc = 0x2E2DD4u;
    // 0x2e2dd4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2dd8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2e2dd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2e2ddc: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2DDCu;
    {
        const bool branch_taken_0x2e2ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DDCu;
        // 0x2e2de0: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ddc) {
            ctx->pc = 0x2E2E3Cu;
            goto label_2e2e3c;
        }
    }
    ctx->pc = 0x2E2DE4u;
    // 0x2e2de4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E2DE4u;
    {
        const bool branch_taken_0x2e2de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DE4u;
        // 0x2e2de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2de4) {
            ctx->pc = 0x2E2E3Cu;
            goto label_2e2e3c;
        }
    }
    ctx->pc = 0x2E2DECu;
label_2e2dec:
    // 0x2e2dec: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x2e2decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2e2df0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2DF0u;
    {
        const bool branch_taken_0x2e2df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DF0u;
        // 0x2e2df4: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2df0) {
            ctx->pc = 0x2E2E04u;
            goto label_2e2e04;
        }
    }
    ctx->pc = 0x2E2DF8u;
    // 0x2e2df8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x2e2df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_2e2dfc:
    // 0x2e2dfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2DFCu;
    {
        const bool branch_taken_0x2e2dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DFCu;
        // 0x2e2e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2dfc) {
            ctx->pc = 0x2E2E40u;
            goto label_2e2e40;
        }
    }
    ctx->pc = 0x2E2E04u;
label_2e2e04:
    // 0x2e2e04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e2e08: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2e2e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e2e0c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2E0Cu;
    {
        const bool branch_taken_0x2e2e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2e0c) {
            ctx->pc = 0x2E2E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E0Cu;
            // 0x2e2e10: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E20u;
            goto label_2e2e20;
        }
    }
    ctx->pc = 0x2E2E14u;
    // 0x2e2e14: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x2e2e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x2e2e18: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x2e2e18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x2e2e1c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2e2e1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2e2e20:
    // 0x2e2e20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2e24: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2e2e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2e2e28: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e2e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e2e2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2E2Cu;
    {
        const bool branch_taken_0x2e2e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e2c) {
            ctx->pc = 0x2E2E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E2Cu;
            // 0x2e2e30: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E40u;
            goto label_2e2e40;
        }
    }
    ctx->pc = 0x2E2E34u;
    // 0x2e2e34: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x2e2e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x2e2e38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2e2e3c:
    // 0x2e2e3c: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x2e2e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_2e2e40:
    // 0x2e2e40: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x2e2e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x2e2e44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e2e48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2e4c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2e2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2e2e50: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2e2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2e2e54: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2e2e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e2e58: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2e2e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e2e5c: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x2e2e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x2e2e60: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2e2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2e2e64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2e68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2e6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2e70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2e74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2e78: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x2e2e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x2e2e7c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2e2e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2e2e80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2e84: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2e2e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x2e2e88: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2e2e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e2e8c: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x2e2e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x2e2e90: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2e2e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e2e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E94u;
        // 0x2e2e98: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2E9Cu;
}
