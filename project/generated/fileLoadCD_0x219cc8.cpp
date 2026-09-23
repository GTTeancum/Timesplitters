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

// Function: fileLoadCD
// Address: 0x219cc8 - 0x219f0c
void fileLoadCD_0x219cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileLoadCD_0x219cc8");
#endif

    switch (ctx->pc) {
        case 0x219d20u: goto label_219d20;
        case 0x219d30u: goto label_219d30;
        case 0x219d50u: goto label_219d50;
        case 0x219d58u: goto label_219d58;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d78u: goto label_219d78;
        case 0x219d80u: goto label_219d80;
        case 0x219d88u: goto label_219d88;
        case 0x219d90u: goto label_219d90;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dd4u: goto label_219dd4;
        case 0x219e08u: goto label_219e08;
        case 0x219e10u: goto label_219e10;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e30u: goto label_219e30;
        case 0x219e38u: goto label_219e38;
        case 0x219e40u: goto label_219e40;
        case 0x219e48u: goto label_219e48;
        case 0x219e74u: goto label_219e74;
        case 0x219e8cu: goto label_219e8c;
        case 0x219ea4u: goto label_219ea4;
        default: break;
    }

    ctx->pc = 0x219cc8u;

    // 0x219cc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x219ccc: 0x30c207ff  andi        $v0, $a2, 0x7FF
    ctx->pc = 0x219cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x219cd0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x219cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x219cd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x219cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x219cd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cdc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x219cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x219ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219ce4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219ce8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x219ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cec: 0x682c3  sra         $s0, $a2, 11
    ctx->pc = 0x219cecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 11));
    // 0x219cf0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x219cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x219cf4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x219cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x219cf8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x219cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x219cfc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x219cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x219d00: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x219d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x219d04: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x219d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x219d08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x219d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x219d0c: 0xa382b6a1  sb          $v0, -0x495F($gp)
    ctx->pc = 0x219d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948513), (uint8_t)GPR_U32(ctx, 2));
    // 0x219d10: 0xa380b6a0  sb          $zero, -0x4960($gp)
    ctx->pc = 0x219d10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948512), (uint8_t)GPR_U32(ctx, 0));
    // 0x219d14: 0xa380b6a2  sb          $zero, -0x495E($gp)
    ctx->pc = 0x219d14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948514), (uint8_t)GPR_U32(ctx, 0));
    // 0x219d18: 0xc0b40e8  jal         func_2D03A0
    ctx->pc = 0x219D18u;
    SET_GPR_U32(ctx, 31, 0x219D20u);
    ctx->pc = 0x219D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D18u;
    // 0x219d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03A0u, 0x219D18u, 0x219D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D20u;
label_219d20:
    // 0x219d20: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x219D20u;
    {
        const bool branch_taken_0x219d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D20u;
        // 0x219d24: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d20) {
            ctx->pc = 0x219DF0u;
            goto label_219df0;
        }
    }
    ctx->pc = 0x219D28u;
    // 0x219d28: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x219d28u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x219d2c: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x219d2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
label_219d30:
    // 0x219d30: 0x2a022801  slti        $v0, $s0, 0x2801
    ctx->pc = 0x219d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10241) ? 1 : 0);
    // 0x219d34: 0x24112800  addiu       $s1, $zero, 0x2800
    ctx->pc = 0x219d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x219d38: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x219d38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x219d3c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x219d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219d40: 0x211b023  subu        $s6, $s0, $s1
    ctx->pc = 0x219d40u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x219d44: 0x251a821  addu        $s5, $s2, $s1
    ctx->pc = 0x219d44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x219d48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219D48u;
    {
        const bool branch_taken_0x219d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D48u;
        // 0x219d4c: 0x1182c0  sll         $s0, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d48) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D50u;
label_219d50:
    // 0x219d50: 0xc0b7fba  jal         func_2DFEE8
    ctx->pc = 0x219D50u;
    SET_GPR_U32(ctx, 31, 0x219D58u);
    ctx->pc = 0x2DFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEE8u, 0x219D50u, 0x219D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D58u;
label_219d58:
    // 0x219d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d5c: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x219D5Cu;
    SET_GPR_U32(ctx, 31, 0x219D64u);
    ctx->pc = 0x219D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D5Cu;
    // 0x219d60: 0x26e406c8  addiu       $a0, $s7, 0x6C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x219D5Cu, 0x219D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D64u;
label_219d64:
    // 0x219d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219d68:
    // 0x219d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d6c: 0x2787b6a0  addiu       $a3, $gp, -0x4960
    ctx->pc = 0x219d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948512));
    // 0x219d70: 0xc0b7b40  jal         func_2DED00
    ctx->pc = 0x219D70u;
    SET_GPR_U32(ctx, 31, 0x219D78u);
    ctx->pc = 0x219D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D70u;
    // 0x219d74: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DED00u, 0x219D70u, 0x219D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D78u;
label_219d78:
    // 0x219d78: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x219D78u;
    {
        const bool branch_taken_0x219d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d78) {
            ctx->pc = 0x219D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219d50;
        }
    }
    ctx->pc = 0x219D80u;
label_219d80:
    // 0x219d80: 0xc0b7d6e  jal         func_2DF5B8
    ctx->pc = 0x219D80u;
    SET_GPR_U32(ctx, 31, 0x219D88u);
    ctx->pc = 0x219D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D80u;
    // 0x219d84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5B8u, 0x219D80u, 0x219D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D88u;
label_219d88:
    // 0x219d88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x219D88u;
    {
        const bool branch_taken_0x219d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D88u;
        // 0x219d8c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d88) {
            ctx->pc = 0x219DB4u;
            goto label_219db4;
        }
    }
    ctx->pc = 0x219D90u;
label_219d90:
    // 0x219d90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x219d94: 0x0  nop
    ctx->pc = 0x219d94u;
    // NOP
    // 0x219d98: 0x0  nop
    ctx->pc = 0x219d98u;
    // NOP
    // 0x219d9c: 0x0  nop
    ctx->pc = 0x219d9cu;
    // NOP
    // 0x219da0: 0x0  nop
    ctx->pc = 0x219da0u;
    // NOP
    // 0x219da4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219DA4u;
    {
        const bool branch_taken_0x219da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x219da4) {
            ctx->pc = 0x219D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219d90;
        }
    }
    ctx->pc = 0x219DACu;
    // 0x219dac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x219DACu;
    {
        const bool branch_taken_0x219dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219dac) {
            ctx->pc = 0x219D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219d80;
        }
    }
    ctx->pc = 0x219DB4u;
label_219db4:
    // 0x219db4: 0xc0b7fba  jal         func_2DFEE8
    ctx->pc = 0x219DB4u;
    SET_GPR_U32(ctx, 31, 0x219DBCu);
    ctx->pc = 0x2DFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEE8u, 0x219DB4u, 0x219DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DBCu;
label_219dbc:
    // 0x219dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219DBCu;
    {
        const bool branch_taken_0x219dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219dbc) {
            ctx->pc = 0x219DCCu;
            goto label_219dcc;
        }
    }
    ctx->pc = 0x219DC4u;
    // 0x219dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219DC4u;
    {
        const bool branch_taken_0x219dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DC4u;
        // 0x219dc8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dc4) {
            ctx->pc = 0x219DD4u;
            goto label_219dd4;
        }
    }
    ctx->pc = 0x219DCCu;
label_219dcc:
    // 0x219dcc: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x219DCCu;
    SET_GPR_U32(ctx, 31, 0x219DD4u);
    ctx->pc = 0x219DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DCCu;
    // 0x219dd0: 0x27c406e8  addiu       $a0, $fp, 0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x219DCCu, 0x219DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DD4u;
label_219dd4:
    // 0x219dd4: 0x5680ffe4  bnel        $s4, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x219DD4u;
    {
        const bool branch_taken_0x219dd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x219dd4) {
            ctx->pc = 0x219DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219DD4u;
            // 0x219dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219d68;
        }
    }
    ctx->pc = 0x219DDCu;
    // 0x219ddc: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x219de0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x219de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219de4: 0x1600ffd2  bnez        $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x219DE4u;
    {
        const bool branch_taken_0x219de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DE4u;
        // 0x219de8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219de4) {
            ctx->pc = 0x219D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219d30;
        }
    }
    ctx->pc = 0x219DECu;
    // 0x219dec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_219df0:
    // 0x219df0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x219DF0u;
    {
        const bool branch_taken_0x219df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF0u;
        // 0x219df4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219df0) {
            ctx->pc = 0x219EDCu;
            goto label_219edc;
        }
    }
    ctx->pc = 0x219DF8u;
    // 0x219df8: 0x3c1101fb  lui         $s1, 0x1FB
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)507 << 16));
    // 0x219dfc: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x219dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x219e00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219E00u;
    {
        const bool branch_taken_0x219e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E00u;
        // 0x219e04: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e00) {
            ctx->pc = 0x219E1Cu;
            goto label_219e1c;
        }
    }
    ctx->pc = 0x219E08u;
label_219e08:
    // 0x219e08: 0xc0b7fba  jal         func_2DFEE8
    ctx->pc = 0x219E08u;
    SET_GPR_U32(ctx, 31, 0x219E10u);
    ctx->pc = 0x2DFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEE8u, 0x219E08u, 0x219E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E10u;
label_219e10:
    // 0x219e10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e14: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x219E14u;
    SET_GPR_U32(ctx, 31, 0x219E1Cu);
    ctx->pc = 0x219E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E14u;
    // 0x219e18: 0x268406c8  addiu       $a0, $s4, 0x6C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x219E14u, 0x219E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E1Cu;
label_219e1c:
    // 0x219e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219e20:
    // 0x219e20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219e24: 0x2787b6a0  addiu       $a3, $gp, -0x4960
    ctx->pc = 0x219e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948512));
    // 0x219e28: 0xc0b7b40  jal         func_2DED00
    ctx->pc = 0x219E28u;
    SET_GPR_U32(ctx, 31, 0x219E30u);
    ctx->pc = 0x219E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E28u;
    // 0x219e2c: 0x26264440  addiu       $a2, $s1, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DED00u, 0x219E28u, 0x219E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E30u;
label_219e30:
    // 0x219e30: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x219E30u;
    {
        const bool branch_taken_0x219e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e30) {
            ctx->pc = 0x219E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219e08;
        }
    }
    ctx->pc = 0x219E38u;
label_219e38:
    // 0x219e38: 0xc0b7d6e  jal         func_2DF5B8
    ctx->pc = 0x219E38u;
    SET_GPR_U32(ctx, 31, 0x219E40u);
    ctx->pc = 0x219E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E38u;
    // 0x219e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5B8u, 0x219E38u, 0x219E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E40u;
label_219e40:
    // 0x219e40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x219E40u;
    {
        const bool branch_taken_0x219e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E40u;
        // 0x219e44: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e40) {
            ctx->pc = 0x219E6Cu;
            goto label_219e6c;
        }
    }
    ctx->pc = 0x219E48u;
label_219e48:
    // 0x219e48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x219e4c: 0x0  nop
    ctx->pc = 0x219e4cu;
    // NOP
    // 0x219e50: 0x0  nop
    ctx->pc = 0x219e50u;
    // NOP
    // 0x219e54: 0x0  nop
    ctx->pc = 0x219e54u;
    // NOP
    // 0x219e58: 0x0  nop
    ctx->pc = 0x219e58u;
    // NOP
    // 0x219e5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219E5Cu;
    {
        const bool branch_taken_0x219e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e5c) {
            ctx->pc = 0x219E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219e48;
        }
    }
    ctx->pc = 0x219E64u;
    // 0x219e64: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x219E64u;
    {
        const bool branch_taken_0x219e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e64) {
            ctx->pc = 0x219E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219e38;
        }
    }
    ctx->pc = 0x219E6Cu;
label_219e6c:
    // 0x219e6c: 0xc0b7fba  jal         func_2DFEE8
    ctx->pc = 0x219E6Cu;
    SET_GPR_U32(ctx, 31, 0x219E74u);
    ctx->pc = 0x2DFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEE8u, 0x219E6Cu, 0x219E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E74u;
label_219e74:
    // 0x219e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219E74u;
    {
        const bool branch_taken_0x219e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e74) {
            ctx->pc = 0x219E84u;
            goto label_219e84;
        }
    }
    ctx->pc = 0x219E7Cu;
    // 0x219e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219E7Cu;
    {
        const bool branch_taken_0x219e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E7Cu;
        // 0x219e80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e7c) {
            ctx->pc = 0x219E8Cu;
            goto label_219e8c;
        }
    }
    ctx->pc = 0x219E84u;
label_219e84:
    // 0x219e84: 0xc0b4760  jal         func_2D1D80
    ctx->pc = 0x219E84u;
    SET_GPR_U32(ctx, 31, 0x219E8Cu);
    ctx->pc = 0x219E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E84u;
    // 0x219e88: 0x26a406f8  addiu       $a0, $s5, 0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D80u, 0x219E84u, 0x219E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E8Cu;
label_219e8c:
    // 0x219e8c: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x219E8Cu;
    {
        const bool branch_taken_0x219e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e8c) {
            ctx->pc = 0x219E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219e20;
        }
    }
    ctx->pc = 0x219E94u;
    // 0x219e94: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x219e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219e98: 0x26244440  addiu       $a0, $s1, 0x4440
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17472));
    // 0x219e9c: 0xc0b91c2  jal         func_2E4708
    ctx->pc = 0x219E9Cu;
    SET_GPR_U32(ctx, 31, 0x219EA4u);
    ctx->pc = 0x219EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E9Cu;
    // 0x219ea0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4708u, 0x219E9Cu, 0x219EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EA4u;
label_219ea4:
    // 0x219ea4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ea8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x219ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219eac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x219eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x219eb0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x219eb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219eb4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x219eb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219eb8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x219eb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219ebc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x219ebcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219ec0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x219ec0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219ec4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x219ec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219ec8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x219ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219ecc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x219eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219ed0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ed4: 0x80b491c  j           func_2D2470
    ctx->pc = 0x219ED4u;
    ctx->pc = 0x219ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219ED4u;
    // 0x219ed8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2470u;
    sceSifWriteBackDCache_0x2d2470(rdram, ctx, runtime); return;
    ctx->pc = 0x219EDCu;
label_219edc:
    // 0x219edc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x219edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x219ee0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x219ee0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219ee4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x219ee4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219ee8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x219ee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219eec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x219eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x219ef0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x219ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219ef4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x219ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219ef8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x219ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219efc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x219efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219f00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219f04: 0x3e00008  jr          $ra
    ctx->pc = 0x219F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F04u;
        // 0x219f08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F0Cu;
}
