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

// Function: zoomtileGfx
// Address: 0x250d88 - 0x251068
void zoomtileGfx_0x250d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("zoomtileGfx_0x250d88");
#endif

    switch (ctx->pc) {
        case 0x250dbcu: goto label_250dbc;
        case 0x250e00u: goto label_250e00;
        case 0x250e08u: goto label_250e08;
        case 0x250e10u: goto label_250e10;
        case 0x250e1cu: goto label_250e1c;
        case 0x250e68u: goto label_250e68;
        case 0x250eacu: goto label_250eac;
        case 0x250ebcu: goto label_250ebc;
        case 0x250ec4u: goto label_250ec4;
        case 0x250ee4u: goto label_250ee4;
        case 0x250f00u: goto label_250f00;
        case 0x250f10u: goto label_250f10;
        case 0x250f18u: goto label_250f18;
        case 0x250f34u: goto label_250f34;
        case 0x250f3cu: goto label_250f3c;
        case 0x250f48u: goto label_250f48;
        case 0x250f64u: goto label_250f64;
        case 0x250f6cu: goto label_250f6c;
        case 0x250f88u: goto label_250f88;
        case 0x250f90u: goto label_250f90;
        case 0x250fa8u: goto label_250fa8;
        case 0x250fb8u: goto label_250fb8;
        case 0x250fe4u: goto label_250fe4;
        case 0x251010u: goto label_251010;
        case 0x251018u: goto label_251018;
        case 0x251020u: goto label_251020;
        default: break;
    }

    ctx->pc = 0x250d88u;

    // 0x250d88: 0x8f82a210  lw          $v0, -0x5DF0($gp)
    ctx->pc = 0x250d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x250d8c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x250d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x250d90: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x250d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x250d94: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x250d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x250d98: 0x2c420015  sltiu       $v0, $v0, 0x15
    ctx->pc = 0x250d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x250d9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x250d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x250da0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x250da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x250da4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x250da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250da8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x250da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x250dac: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x250DACu;
    {
        const bool branch_taken_0x250dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DACu;
        // 0x250db0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250dac) {
            ctx->pc = 0x251044u;
            goto label_251044;
        }
    }
    ctx->pc = 0x250DB4u;
    // 0x250db4: 0xc083146  jal         func_20C518
    ctx->pc = 0x250DB4u;
    SET_GPR_U32(ctx, 31, 0x250DBCu);
    ctx->pc = 0x20C518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C518u, 0x250DB4u, 0x250DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DBCu;
label_250dbc:
    // 0x250dbc: 0x8f83b880  lw          $v1, -0x4780($gp)
    ctx->pc = 0x250dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
    // 0x250dc0: 0x8f82b87c  lw          $v0, -0x4784($gp)
    ctx->pc = 0x250dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
    // 0x250dc4: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x250dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x250dc8: 0x8f84b874  lw          $a0, -0x478C($gp)
    ctx->pc = 0x250dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948980)));
    // 0x250dcc: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x250dccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x250dd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x250dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x250dd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x250dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x250dd8: 0x8f85b878  lw          $a1, -0x4788($gp)
    ctx->pc = 0x250dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x250ddc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x250ddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x250de0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x250de0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x250de4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x250de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250de8: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x250de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x250dec: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x250decu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250df0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x250df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x250df4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x250df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x250df8: 0xc083108  jal         func_20C420
    ctx->pc = 0x250DF8u;
    SET_GPR_U32(ctx, 31, 0x250E00u);
    ctx->pc = 0x250DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DF8u;
    // 0x250dfc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C420u, 0x250DF8u, 0x250E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E00u;
label_250e00:
    // 0x250e00: 0xc0831fa  jal         func_20C7E8
    ctx->pc = 0x250E00u;
    SET_GPR_U32(ctx, 31, 0x250E08u);
    ctx->pc = 0x20C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C7E8u, 0x250E00u, 0x250E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E08u;
label_250e08:
    // 0x250e08: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x250E08u;
    SET_GPR_U32(ctx, 31, 0x250E10u);
    ctx->pc = 0x250E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E08u;
    // 0x250e0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x250E08u, 0x250E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E10u;
label_250e10:
    // 0x250e10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x250e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e14: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x250E14u;
    SET_GPR_U32(ctx, 31, 0x250E1Cu);
    ctx->pc = 0x250E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E14u;
    // 0x250e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x250E14u, 0x250E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E1Cu;
label_250e1c:
    // 0x250e1c: 0x8f83a208  lw          $v1, -0x5DF8($gp)
    ctx->pc = 0x250e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x250e20: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x250e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x250e24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x250E24u;
    {
        const bool branch_taken_0x250e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E24u;
        // 0x250e28: 0x8f82a20c  lw          $v0, -0x5DF4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e24) {
            ctx->pc = 0x250E3Cu;
            goto label_250e3c;
        }
    }
    ctx->pc = 0x250E2Cu;
    // 0x250e2c: 0x8f84a0dc  lw          $a0, -0x5F24($gp)
    ctx->pc = 0x250e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x250e30: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x250e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x250e34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250E34u;
    {
        const bool branch_taken_0x250e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E34u;
        // 0x250e38: 0x839023  subu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e34) {
            ctx->pc = 0x250E40u;
            goto label_250e40;
        }
    }
    ctx->pc = 0x250E3Cu;
label_250e3c:
    // 0x250e3c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x250e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_250e40:
    // 0x250e40: 0x8f85a210  lw          $a1, -0x5DF0($gp)
    ctx->pc = 0x250e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x250e44: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x250e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x250e48: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x250e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x250e4c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x250e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x250e50: 0x24427940  addiu       $v0, $v0, 0x7940
    ctx->pc = 0x250e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
    // 0x250e54: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x250e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250e58: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x250e5c: 0x18600048  blez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x250E5Cu;
    {
        const bool branch_taken_0x250e5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x250E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E5Cu;
        // 0x250e60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e5c) {
            ctx->pc = 0x250F80u;
            goto label_250f80;
        }
    }
    ctx->pc = 0x250E64u;
    // 0x250e64: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x250e64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
label_250e68:
    // 0x250e68: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x250e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x250e6c: 0x26917250  addiu       $s1, $s4, 0x7250
    ctx->pc = 0x250e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 29264));
    // 0x250e70: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x250e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x250e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250e78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x250e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250e7c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x250e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x250e80: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x250e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x250e84: 0x12120020  beq         $s0, $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x250E84u;
    {
        const bool branch_taken_0x250e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x250E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E84u;
        // 0x250e88: 0xa4430124  sh          $v1, 0x124($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 292), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e84) {
            ctx->pc = 0x250F08u;
            goto label_250f08;
        }
    }
    ctx->pc = 0x250E8Cu;
    // 0x250e8c: 0x8f82a208  lw          $v0, -0x5DF8($gp)
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x250e90: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x250e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x250e94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x250E94u;
    {
        const bool branch_taken_0x250e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E94u;
        // 0x250e98: 0x212102a  slt         $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e94) {
            ctx->pc = 0x250EDCu;
            goto label_250edc;
        }
    }
    ctx->pc = 0x250E9Cu;
    // 0x250e9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250E9Cu;
    {
        const bool branch_taken_0x250e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250e9c) {
            ctx->pc = 0x250EB4u;
            goto label_250eb4;
        }
    }
    ctx->pc = 0x250EA4u;
    // 0x250ea4: 0xc0adfa8  jal         func_2B7EA0
    ctx->pc = 0x250EA4u;
    SET_GPR_U32(ctx, 31, 0x250EACu);
    ctx->pc = 0x250EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EA4u;
    // 0x250ea8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA0u, 0x250EA4u, 0x250EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EACu;
label_250eac:
    // 0x250eac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250EACu;
    {
        const bool branch_taken_0x250eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250eac) {
            ctx->pc = 0x250EBCu;
            goto label_250ebc;
        }
    }
    ctx->pc = 0x250EB4u;
label_250eb4:
    // 0x250eb4: 0xc0adfa8  jal         func_2B7EA0
    ctx->pc = 0x250EB4u;
    SET_GPR_U32(ctx, 31, 0x250EBCu);
    ctx->pc = 0x250EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EB4u;
    // 0x250eb8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA0u, 0x250EB4u, 0x250EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EBCu;
label_250ebc:
    // 0x250ebc: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x250EBCu;
    SET_GPR_U32(ctx, 31, 0x250EC4u);
    ctx->pc = 0x250EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EBCu;
    // 0x250ec0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x250EBCu, 0x250EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EC4u;
label_250ec4:
    // 0x250ec4: 0x8f83a210  lw          $v1, -0x5DF0($gp)
    ctx->pc = 0x250ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x250ec8: 0x26847250  addiu       $a0, $s4, 0x7250
    ctx->pc = 0x250ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29264));
    // 0x250ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ed0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x250ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250ed4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x250ED4u;
    {
        const bool branch_taken_0x250ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ED4u;
        // 0x250ed8: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ed4) {
            ctx->pc = 0x250EF4u;
            goto label_250ef4;
        }
    }
    ctx->pc = 0x250EDCu;
label_250edc:
    // 0x250edc: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x250EDCu;
    SET_GPR_U32(ctx, 31, 0x250EE4u);
    ctx->pc = 0x250EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EDCu;
    // 0x250ee0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x250EDCu, 0x250EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EE4u;
label_250ee4:
    // 0x250ee4: 0x8f83a210  lw          $v1, -0x5DF0($gp)
    ctx->pc = 0x250ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x250ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x250eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250ef0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x250ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_250ef4:
    // 0x250ef4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250ef8: 0xc098a98  jal         func_262A60
    ctx->pc = 0x250EF8u;
    SET_GPR_U32(ctx, 31, 0x250F00u);
    ctx->pc = 0x250EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EF8u;
    // 0x250efc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x250EF8u, 0x250F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F00u;
label_250f00:
    // 0x250f00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x250F00u;
    {
        const bool branch_taken_0x250f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F00u;
        // 0x250f04: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f00) {
            ctx->pc = 0x250F70u;
            goto label_250f70;
        }
    }
    ctx->pc = 0x250F08u;
label_250f08:
    // 0x250f08: 0xc0adfa8  jal         func_2B7EA0
    ctx->pc = 0x250F08u;
    SET_GPR_U32(ctx, 31, 0x250F10u);
    ctx->pc = 0x250F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F08u;
    // 0x250f0c: 0x9384a02d  lbu         $a0, -0x5FD3($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942765)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA0u, 0x250F08u, 0x250F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F10u;
label_250f10:
    // 0x250f10: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x250F10u;
    SET_GPR_U32(ctx, 31, 0x250F18u);
    ctx->pc = 0x250F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F10u;
    // 0x250f14: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x250F10u, 0x250F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F18u;
label_250f18:
    // 0x250f18: 0x8f83a210  lw          $v1, -0x5DF0($gp)
    ctx->pc = 0x250f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x250f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x250f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250f24: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x250f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x250f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250f2c: 0xc098a98  jal         func_262A60
    ctx->pc = 0x250F2Cu;
    SET_GPR_U32(ctx, 31, 0x250F34u);
    ctx->pc = 0x250F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F2Cu;
    // 0x250f30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x250F2Cu, 0x250F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F34u;
label_250f34:
    // 0x250f34: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x250F34u;
    SET_GPR_U32(ctx, 31, 0x250F3Cu);
    ctx->pc = 0x250F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F34u;
    // 0x250f38: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x250F34u, 0x250F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F3Cu;
label_250f3c:
    // 0x250f3c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x250f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x250f40: 0xc0ae0c6  jal         func_2B8318
    ctx->pc = 0x250F40u;
    SET_GPR_U32(ctx, 31, 0x250F48u);
    ctx->pc = 0x250F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F40u;
    // 0x250f44: 0x348400ff  ori         $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8318u, 0x250F40u, 0x250F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F48u;
label_250f48:
    // 0x250f48: 0x8f82a210  lw          $v0, -0x5DF0($gp)
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
    // 0x250f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x250f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x250f54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x250f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x250f58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x250f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250f5c: 0xc098a98  jal         func_262A60
    ctx->pc = 0x250F5Cu;
    SET_GPR_U32(ctx, 31, 0x250F64u);
    ctx->pc = 0x250F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F5Cu;
    // 0x250f60: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x250F5Cu, 0x250F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F64u;
label_250f64:
    // 0x250f64: 0xc0ae0c6  jal         func_2B8318
    ctx->pc = 0x250F64u;
    SET_GPR_U32(ctx, 31, 0x250F6Cu);
    ctx->pc = 0x250F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F64u;
    // 0x250f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8318u, 0x250F64u, 0x250F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F6Cu;
label_250f6c:
    // 0x250f6c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x250f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_250f70:
    // 0x250f70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x250f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x250f74: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x250f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250f78: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x250F78u;
    {
        const bool branch_taken_0x250f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F78u;
        // 0x250f7c: 0x8f85a210  lw          $a1, -0x5DF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f78) {
            ctx->pc = 0x250E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250e68;
        }
    }
    ctx->pc = 0x250F80u;
label_250f80:
    // 0x250f80: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x250F80u;
    SET_GPR_U32(ctx, 31, 0x250F88u);
    ctx->pc = 0x250F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F80u;
    // 0x250f84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x250F80u, 0x250F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F88u;
label_250f88:
    // 0x250f88: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x250F88u;
    SET_GPR_U32(ctx, 31, 0x250F90u);
    ctx->pc = 0x250F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F88u;
    // 0x250f8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x250F88u, 0x250F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F90u;
label_250f90:
    // 0x250f90: 0x8f83a208  lw          $v1, -0x5DF8($gp)
    ctx->pc = 0x250f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x250f94: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x250f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x250f98: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x250F98u;
    {
        const bool branch_taken_0x250f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F98u;
        // 0x250f9c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f98) {
            ctx->pc = 0x251010u;
            goto label_251010;
        }
    }
    ctx->pc = 0x250FA0u;
    // 0x250fa0: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x250FA0u;
    SET_GPR_U32(ctx, 31, 0x250FA8u);
    ctx->pc = 0x250FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FA0u;
    // 0x250fa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x250FA0u, 0x250FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FA8u;
label_250fa8:
    // 0x250fa8: 0x8f84b888  lw          $a0, -0x4778($gp)
    ctx->pc = 0x250fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x250fac: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x250FACu;
    {
        const bool branch_taken_0x250fac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x250FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FACu;
        // 0x250fb0: 0x3c1101fc  lui         $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fac) {
            ctx->pc = 0x250FF8u;
            goto label_250ff8;
        }
    }
    ctx->pc = 0x250FB4u;
    // 0x250fb4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x250fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_250fb8:
    // 0x250fb8: 0x26234108  addiu       $v1, $s1, 0x4108
    ctx->pc = 0x250fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16648));
    // 0x250fbc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x250fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x250fc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250fc4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x250fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250fc8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x250fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x250fcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x250fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x250fd0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x250FD0u;
    {
        const bool branch_taken_0x250fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fd0) {
            ctx->pc = 0x250FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250FD0u;
            // 0x250fd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250FECu;
            goto label_250fec;
        }
    }
    ctx->pc = 0x250FD8u;
    // 0x250fd8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x250fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x250fdc: 0xc098a98  jal         func_262A60
    ctx->pc = 0x250FDCu;
    SET_GPR_U32(ctx, 31, 0x250FE4u);
    ctx->pc = 0x250FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FDCu;
    // 0x250fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x250FDCu, 0x250FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FE4u;
label_250fe4:
    // 0x250fe4: 0x8f84b888  lw          $a0, -0x4778($gp)
    ctx->pc = 0x250fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949000)));
    // 0x250fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x250fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_250fec:
    // 0x250fec: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x250fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x250ff0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x250FF0u;
    {
        const bool branch_taken_0x250ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FF0u;
        // 0x250ff4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ff0) {
            ctx->pc = 0x250FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250fb8;
        }
    }
    ctx->pc = 0x250FF8u;
label_250ff8:
    // 0x250ff8: 0x8f82a220  lw          $v0, -0x5DE0($gp)
    ctx->pc = 0x250ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x250ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250FFCu;
    {
        const bool branch_taken_0x250ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FFCu;
        // 0x251000: 0x8f82a228  lw          $v0, -0x5DD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ffc) {
            ctx->pc = 0x251010u;
            goto label_251010;
        }
    }
    ctx->pc = 0x251004u;
    // 0x251004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251008: 0xc098a98  jal         func_262A60
    ctx->pc = 0x251008u;
    SET_GPR_U32(ctx, 31, 0x251010u);
    ctx->pc = 0x25100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251008u;
    // 0x25100c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x251008u, 0x251010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251010u;
label_251010:
    // 0x251010: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x251010u;
    SET_GPR_U32(ctx, 31, 0x251018u);
    ctx->pc = 0x251014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251010u;
    // 0x251014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x251010u, 0x251018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251018u;
label_251018:
    // 0x251018: 0xc083174  jal         func_20C5D0
    ctx->pc = 0x251018u;
    SET_GPR_U32(ctx, 31, 0x251020u);
    ctx->pc = 0x20C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5D0u, 0x251018u, 0x251020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251020u;
label_251020:
    // 0x251020: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251024: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x251024u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251028: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x251028u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25102c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25102cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25103c: 0x80831fa  j           func_20C7E8
    ctx->pc = 0x25103Cu;
    ctx->pc = 0x251040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25103Cu;
    // 0x251040: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C7E8u;
    windowGfx_0x20c7e8(rdram, ctx, runtime); return;
    ctx->pc = 0x251044u;
label_251044:
    // 0x251044: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251048: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x251048u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25104c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25104cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251050: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x251050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251054: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25105c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25105cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251060: 0x3e00008  jr          $ra
    ctx->pc = 0x251060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251060u;
        // 0x251064: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251068u;
}
