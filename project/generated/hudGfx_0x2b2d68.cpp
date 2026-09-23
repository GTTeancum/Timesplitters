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

// Function: hudGfx
// Address: 0x2b2d68 - 0x2b3594
void hudGfx_0x2b2d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudGfx_0x2b2d68");
#endif

    switch (ctx->pc) {
        case 0x2b2dd4u: goto label_2b2dd4;
        case 0x2b2de0u: goto label_2b2de0;
        case 0x2b2decu: goto label_2b2dec;
        case 0x2b2df8u: goto label_2b2df8;
        case 0x2b2e94u: goto label_2b2e94;
        case 0x2b2f18u: goto label_2b2f18;
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b3100u: goto label_2b3100;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3138u: goto label_2b3138;
        case 0x2b3170u: goto label_2b3170;
        case 0x2b3184u: goto label_2b3184;
        case 0x2b3190u: goto label_2b3190;
        case 0x2b31d8u: goto label_2b31d8;
        case 0x2b31e0u: goto label_2b31e0;
        case 0x2b31e8u: goto label_2b31e8;
        case 0x2b31f4u: goto label_2b31f4;
        case 0x2b32ccu: goto label_2b32cc;
        case 0x2b33b4u: goto label_2b33b4;
        case 0x2b33d0u: goto label_2b33d0;
        case 0x2b33ecu: goto label_2b33ec;
        case 0x2b3420u: goto label_2b3420;
        case 0x2b3458u: goto label_2b3458;
        case 0x2b3468u: goto label_2b3468;
        case 0x2b348cu: goto label_2b348c;
        case 0x2b3538u: goto label_2b3538;
        case 0x2b3554u: goto label_2b3554;
        case 0x2b355cu: goto label_2b355c;
        case 0x2b3564u: goto label_2b3564;
        default: break;
    }

    ctx->pc = 0x2b2d68u;

    // 0x2b2d68: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b2d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b2d6c: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b2d70: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2b2d74: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x2b2d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b2d78: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b2d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2b2d7c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2b2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2b2d80: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2b2d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2b2d84: 0x2463f838  addiu       $v1, $v1, -0x7C8
    ctx->pc = 0x2b2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965304));
    // 0x2b2d88: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2b2d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2b2d8c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2b2d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2b2d90: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2b2d94: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2b2d98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b2d9c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2b2da0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b2da4: 0x8f869f70  lw          $a2, -0x6090($gp)
    ctx->pc = 0x2b2da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2b2da8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b2dac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2b2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2db0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2b2db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b2db4: 0x10c401eb  beq         $a2, $a0, . + 4 + (0x1EB << 2)
    ctx->pc = 0x2B2DB4u;
    {
        const bool branch_taken_0x2b2db4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DB4u;
        // 0x2b2db8: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2db4) {
            ctx->pc = 0x2B3564u;
            goto label_2b3564;
        }
    }
    ctx->pc = 0x2B2DBCu;
    // 0x2b2dbc: 0x8f839dac  lw          $v1, -0x6254($gp)
    ctx->pc = 0x2b2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x2b2dc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2dc4: 0x146201e8  bne         $v1, $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2B2DC4u;
    {
        const bool branch_taken_0x2b2dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DC4u;
        // 0x2b2dc8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dc4) {
            ctx->pc = 0x2B3568u;
            goto label_2b3568;
        }
    }
    ctx->pc = 0x2B2DCCu;
    // 0x2b2dcc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2B2DCCu;
    SET_GPR_U32(ctx, 31, 0x2B2DD4u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2B2DCCu, 0x2B2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DD4u;
label_2b2dd4:
    // 0x2b2dd4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b2dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b2dd8: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B2DD8u;
    SET_GPR_U32(ctx, 31, 0x2B2DE0u);
    ctx->pc = 0x2B2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DD8u;
    // 0x2b2ddc: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B2DD8u, 0x2B2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DE0u;
label_2b2de0:
    // 0x2b2de0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b2de4: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2B2DE4u;
    SET_GPR_U32(ctx, 31, 0x2B2DECu);
    ctx->pc = 0x2B2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DE4u;
    // 0x2b2de8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2B2DE4u, 0x2B2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DECu;
label_2b2dec:
    // 0x2b2dec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2b2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2b2df0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2B2DF0u;
    SET_GPR_U32(ctx, 31, 0x2B2DF8u);
    ctx->pc = 0x2B2DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DF0u;
    // 0x2b2df4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2B2DF0u, 0x2B2DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DF8u;
label_2b2df8:
    // 0x2b2df8: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2b2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2b2dfc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2b2e00: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B2E00u;
    {
        const bool branch_taken_0x2b2e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E00u;
        // 0x2b2e04: 0x8e85010c  lw          $a1, 0x10C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e00) {
            ctx->pc = 0x2B2E98u;
            goto label_2b2e98;
        }
    }
    ctx->pc = 0x2B2E08u;
    // 0x2b2e08: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B2E08u;
    {
        const bool branch_taken_0x2b2e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E08u;
        // 0x2b2e0c: 0x2407012c  addiu       $a3, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e08) {
            ctx->pc = 0x2B2ED0u;
            goto label_2b2ed0;
        }
    }
    ctx->pc = 0x2B2E10u;
    // 0x2b2e10: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2b2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b2e14: 0x28a4012d  slti        $a0, $a1, 0x12D
    ctx->pc = 0x2b2e14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2b2e18: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2b2e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e1c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2b2e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2e20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b2e24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b2e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b2e28: 0xa4300b  movn        $a2, $a1, $a0
    ctx->pc = 0x2b2e28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x2b2e2c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2b2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2b2e30: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2b2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2b2e34: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2E34u;
    {
        const bool branch_taken_0x2b2e34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E34u;
        // 0x2b2e38: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e34) {
            ctx->pc = 0x2B2E48u;
            goto label_2b2e48;
        }
    }
    ctx->pc = 0x2B2E3Cu;
    // 0x2b2e3c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2b2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b2e40: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2b2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2b2e44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b2e48:
    // 0x2b2e48: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x2b2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2b2e4c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2b2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2b2e50: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2b2e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b2e54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2E54u;
    {
        const bool branch_taken_0x2b2e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e54) {
            ctx->pc = 0x2B2E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E54u;
            // 0x2b2e58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2E5Cu;
            goto label_2b2e5c;
        }
    }
    ctx->pc = 0x2B2E5Cu;
label_2b2e5c:
    // 0x2b2e5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2b2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2e60: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2b2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2e64: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b2e68: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2b2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2b2e6c: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x2b2e6cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b2e70: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2b2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2b2e74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b2e78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b2e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b2e7c: 0x1012  mflo        $v0
    ctx->pc = 0x2b2e7cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b2e80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b2e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2e84: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b2e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2b2e88: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2b2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2b2e8c: 0xc0aca52  jal         func_2B2948
    ctx->pc = 0x2B2E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B2E94u);
    ctx->pc = 0x2B2E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E8Cu;
    // 0x2b2e90: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2948u, 0x2B2E8Cu, 0x2B2E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E94u;
label_2b2e94:
    // 0x2b2e94: 0x8e85010c  lw          $a1, 0x10C($s4)
    ctx->pc = 0x2b2e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_2b2e98:
    // 0x2b2e98: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2E98u;
    {
        const bool branch_taken_0x2b2e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e98) {
            ctx->pc = 0x2B2E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E98u;
            // 0x2b2e9c: 0x8f84b234  lw          $a0, -0x4DCC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2ED4u;
            goto label_2b2ed4;
        }
    }
    ctx->pc = 0x2B2EA0u;
    // 0x2b2ea0: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x2b2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x2b2ea4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2b2ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2b2ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2EA8u;
    {
        const bool branch_taken_0x2b2ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA8u;
        // 0x2b2eac: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ea8) {
            ctx->pc = 0x2B2EBCu;
            goto label_2b2ebc;
        }
    }
    ctx->pc = 0x2B2EB0u;
    // 0x2b2eb0: 0xae850108  sw          $a1, 0x108($s4)
    ctx->pc = 0x2b2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 5));
    // 0x2b2eb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B2EB4u;
    {
        const bool branch_taken_0x2b2eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EB4u;
        // 0x2b2eb8: 0xae820104  sw          $v0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2eb4) {
            ctx->pc = 0x2B2EECu;
            goto label_2b2eec;
        }
    }
    ctx->pc = 0x2B2EBCu;
label_2b2ebc:
    // 0x2b2ebc: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x2b2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x2b2ec0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2EC0u;
    {
        const bool branch_taken_0x2b2ec0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EC0u;
        // 0x2b2ec4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ec0) {
            ctx->pc = 0x2B2EECu;
            goto label_2b2eec;
        }
    }
    ctx->pc = 0x2B2EC8u;
    // 0x2b2ec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2EC8u;
    {
        const bool branch_taken_0x2b2ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EC8u;
        // 0x2b2ecc: 0xae820104  sw          $v0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ec8) {
            ctx->pc = 0x2B2EECu;
            goto label_2b2eec;
        }
    }
    ctx->pc = 0x2B2ED0u;
label_2b2ed0:
    // 0x2b2ed0: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2b2ed4:
    // 0x2b2ed4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2ed8: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x2b2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
    // 0x2b2edc: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x2b2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2b2ee0: 0xae850108  sw          $a1, 0x108($s4)
    ctx->pc = 0x2b2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 5));
    // 0x2b2ee4: 0xc4600208  lwc1        $f0, 0x208($v1)
    ctx->pc = 0x2b2ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2ee8: 0xe6800100  swc1        $f0, 0x100($s4)
    ctx->pc = 0x2b2ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
label_2b2eec:
    // 0x2b2eec: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2b2eecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x2b2ef0: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2b2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2b2ef4: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x2b2ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2b2ef8: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x2b2ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x2b2efc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B2EFCu;
    {
        const bool branch_taken_0x2b2efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EFCu;
        // 0x2b2f00: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2efc) {
            ctx->pc = 0x2B2F98u;
            goto label_2b2f98;
        }
    }
    ctx->pc = 0x2B2F04u;
    // 0x2b2f04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2f08: 0x14600192  bnez        $v1, . + 4 + (0x192 << 2)
    ctx->pc = 0x2B2F08u;
    {
        const bool branch_taken_0x2b2f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f08) {
            ctx->pc = 0x2B3554u;
            goto label_2b3554;
        }
    }
    ctx->pc = 0x2B2F10u;
    // 0x2b2f10: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B2F10u;
    SET_GPR_U32(ctx, 31, 0x2B2F18u);
    ctx->pc = 0x2B2F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F10u;
    // 0x2b2f14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B2F10u, 0x2B2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F18u;
label_2b2f18:
    // 0x2b2f18: 0x8f84b428  lw          $a0, -0x4BD8($gp)
    ctx->pc = 0x2b2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947880)));
    // 0x2b2f1c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2b2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b2f20: 0x8f85b460  lw          $a1, -0x4BA0($gp)
    ctx->pc = 0x2b2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2b2f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2F28u;
    {
        const bool branch_taken_0x2b2f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f28) {
            ctx->pc = 0x2B2F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2F28u;
            // 0x2b2f2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2F30u;
            goto label_2b2f30;
        }
    }
    ctx->pc = 0x2B2F30u;
label_2b2f30:
    // 0x2b2f30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b2f34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b2f38: 0x8c469a48  lw          $a2, -0x65B8($v0)
    ctx->pc = 0x2b2f38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x329A48u));
    // 0x2b2f3c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2b2f3cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b2f40: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2b2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b2f44: 0xc22007  srav        $a0, $v0, $a2
    ctx->pc = 0x2b2f44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2b2f48: 0x2810  mfhi        $a1
    ctx->pc = 0x2b2f48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2b2f4c: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x2b2f4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b2f50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B2F50u;
    {
        const bool branch_taken_0x2b2f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F50u;
        // 0x2b2f54: 0xaf85b428  sw          $a1, -0x4BD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947880), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f50) {
            ctx->pc = 0x2B2F88u;
            goto label_2b2f88;
        }
    }
    ctx->pc = 0x2B2F58u;
    // 0x2b2f58: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2b2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b2f5c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2b2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2b2f60: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x2b2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x2b2f64: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x2b2f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x2b2f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2f6c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b2f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b2f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2f74: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x2b2f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x2b2f78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2f7c: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x2b2f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x2b2f80: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B2F80u;
    SET_GPR_U32(ctx, 31, 0x2B2F88u);
    ctx->pc = 0x2B2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F80u;
    // 0x2b2f84: 0x8c660cbc  lw          $a2, 0xCBC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B2F80u, 0x2B2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F88u;
label_2b2f88:
    // 0x2b2f88: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B2F88u;
    SET_GPR_U32(ctx, 31, 0x2B2F90u);
    ctx->pc = 0x2B2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F88u;
    // 0x2b2f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B2F88u, 0x2B2F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F90u;
label_2b2f90:
    // 0x2b2f90: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x2B2F90u;
    {
        const bool branch_taken_0x2b2f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f90) {
            ctx->pc = 0x2B3554u;
            goto label_2b3554;
        }
    }
    ctx->pc = 0x2B2F98u;
label_2b2f98:
    // 0x2b2f98: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2b2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2b2f9c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b2fa0: 0x1460016c  bnez        $v1, . + 4 + (0x16C << 2)
    ctx->pc = 0x2B2FA0u;
    {
        const bool branch_taken_0x2b2fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA0u;
        // 0x2b2fa4: 0x3c150033  lui         $s5, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fa0) {
            ctx->pc = 0x2B3554u;
            goto label_2b3554;
        }
    }
    ctx->pc = 0x2B2FA8u;
    // 0x2b2fa8: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x2b2fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x2b2fac: 0x26b099f0  addiu       $s0, $s5, -0x6610
    ctx->pc = 0x2b2facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2b2fb0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b2fb4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2b2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b2fb8: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x2b2fbc: 0x2451001a  addiu       $s1, $v0, 0x1A
    ctx->pc = 0x2b2fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x2b2fc0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B2FC0u;
    {
        const bool branch_taken_0x2b2fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FC0u;
        // 0x2b2fc4: 0x64880b  movn        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fc0) {
            ctx->pc = 0x2B2FF4u;
            goto label_2b2ff4;
        }
    }
    ctx->pc = 0x2B2FC8u;
    // 0x2b2fc8: 0xc087cc6  jal         func_21F318
    ctx->pc = 0x2B2FC8u;
    SET_GPR_U32(ctx, 31, 0x2B2FD0u);
    ctx->pc = 0x21F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F318u, 0x2B2FC8u, 0x2B2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FD0u;
label_2b2fd0:
    // 0x2b2fd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2FD0u;
    {
        const bool branch_taken_0x2b2fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fd0) {
            ctx->pc = 0x2B2FF4u;
            goto label_2b2ff4;
        }
    }
    ctx->pc = 0x2B2FD8u;
    // 0x2b2fd8: 0xc0ac5e0  jal         func_2B1780
    ctx->pc = 0x2B2FD8u;
    SET_GPR_U32(ctx, 31, 0x2B2FE0u);
    ctx->pc = 0x2B2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FD8u;
    // 0x2b2fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1780u, 0x2B2FD8u, 0x2B2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FE0u;
label_2b2fe0:
    // 0x2b2fe0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b2fe4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2fe8: 0x26240016  addiu       $a0, $s1, 0x16
    ctx->pc = 0x2b2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x2b2fec: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b2ff0: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x2b2ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b2ff4:
    // 0x2b2ff4: 0xc08730c  jal         func_21CC30
    ctx->pc = 0x2B2FF4u;
    SET_GPR_U32(ctx, 31, 0x2B2FFCu);
    ctx->pc = 0x21CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CC30u, 0x2B2FF4u, 0x2B2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FFCu;
label_2b2ffc:
    // 0x2b2ffc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B2FFCu;
    {
        const bool branch_taken_0x2b2ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FFCu;
        // 0x2b3000: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ffc) {
            ctx->pc = 0x2B30E8u;
            goto label_2b30e8;
        }
    }
    ctx->pc = 0x2B3004u;
    // 0x2b3004: 0x8e900114  lw          $s0, 0x114($s4)
    ctx->pc = 0x2b3004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2b3008: 0xc0ac566  jal         func_2B1598
    ctx->pc = 0x2B3008u;
    SET_GPR_U32(ctx, 31, 0x2B3010u);
    ctx->pc = 0x2B300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3008u;
    // 0x2b300c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1598u, 0x2B3008u, 0x2B3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3010u;
label_2b3010:
    // 0x2b3010: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B3010u;
    {
        const bool branch_taken_0x2b3010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3010u;
        // 0x2b3014: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3010) {
            ctx->pc = 0x2B306Cu;
            goto label_2b306c;
        }
    }
    ctx->pc = 0x2B3018u;
    // 0x2b3018: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x2b3018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2b301c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B301Cu;
    {
        const bool branch_taken_0x2b301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B301Cu;
        // 0x2b3020: 0x2052018  mult        $a0, $s0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b301c) {
            ctx->pc = 0x2B303Cu;
            goto label_2b303c;
        }
    }
    ctx->pc = 0x2B3024u;
    // 0x2b3024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3028: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2b3028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b302c: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x2b302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x2b3030: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2b3030u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2b3034: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B3034u;
    {
        const bool branch_taken_0x2b3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3034u;
        // 0x2b3038: 0x29143  sra         $s2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3034) {
            ctx->pc = 0x2B306Cu;
            goto label_2b306c;
        }
    }
    ctx->pc = 0x2B303Cu;
label_2b303c:
    // 0x2b303c: 0x8e830118  lw          $v1, 0x118($s4)
    ctx->pc = 0x2b303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x2b3040: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x2b3040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2b3044: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2b3044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3048: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3048u;
    {
        const bool branch_taken_0x2b3048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3048u;
        // 0x2b304c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3048) {
            ctx->pc = 0x2B306Cu;
            goto label_2b306c;
        }
    }
    ctx->pc = 0x2B3050u;
    // 0x2b3050: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2b3050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b3054: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b3054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3058: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2b3058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b305c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2b305cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b3060: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x2b3060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x2b3064: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2b3064u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2b3068: 0x29143  sra         $s2, $v0, 5
    ctx->pc = 0x2b3068u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 5));
label_2b306c:
    // 0x2b306c: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B306Cu;
    {
        const bool branch_taken_0x2b306c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B306Cu;
        // 0x2b3070: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b306c) {
            ctx->pc = 0x2B3088u;
            goto label_2b3088;
        }
    }
    ctx->pc = 0x2B3074u;
    // 0x2b3074: 0x2453023  subu        $a2, $s2, $a1
    ctx->pc = 0x2b3074u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2b3078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b307c: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2b307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2b3080: 0xc0ac56e  jal         func_2B15B8
    ctx->pc = 0x2B3080u;
    SET_GPR_U32(ctx, 31, 0x2B3088u);
    ctx->pc = 0x2B3084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3080u;
    // 0x2b3084: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B15B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B15B8u, 0x2B3080u, 0x2B3088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3088u;
label_2b3088:
    // 0x2b3088: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2b3088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2b308c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2b308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b3090: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2b3090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b3094: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3094u;
    {
        const bool branch_taken_0x2b3094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3094u;
        // 0x2b3098: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3094) {
            ctx->pc = 0x2B30B8u;
            goto label_2b30b8;
        }
    }
    ctx->pc = 0x2B309Cu;
    // 0x2b309c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b309cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b30a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b30a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b30a4: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2b30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2b30a8: 0xc0ac640  jal         func_2B1900
    ctx->pc = 0x2B30A8u;
    SET_GPR_U32(ctx, 31, 0x2B30B0u);
    ctx->pc = 0x2B30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30A8u;
    // 0x2b30ac: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1900u, 0x2B30A8u, 0x2B30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30B0u;
label_2b30b0:
    // 0x2b30b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B30B0u;
    {
        const bool branch_taken_0x2b30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30B0u;
        // 0x2b30b4: 0x26a399f0  addiu       $v1, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30b0) {
            ctx->pc = 0x2B30D0u;
            goto label_2b30d0;
        }
    }
    ctx->pc = 0x2B30B8u;
label_2b30b8:
    // 0x2b30b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b30b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b30bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b30bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b30c0: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2b30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2b30c4: 0xc0ac66e  jal         func_2B19B8
    ctx->pc = 0x2B30C4u;
    SET_GPR_U32(ctx, 31, 0x2B30CCu);
    ctx->pc = 0x2B30C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30C4u;
    // 0x2b30c8: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19B8u, 0x2B30C4u, 0x2B30CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30CCu;
label_2b30cc:
    // 0x2b30cc: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x2b30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
label_2b30d0:
    // 0x2b30d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b30d4: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2b30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b30d8: 0x26250016  addiu       $a1, $s1, 0x16
    ctx->pc = 0x2b30d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x2b30dc: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2b30dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b30e0: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x2b30e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b30e4: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x2b30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
label_2b30e8:
    // 0x2b30e8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b30ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2b30f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B30F0u;
    {
        const bool branch_taken_0x2b30f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30f0) {
            ctx->pc = 0x2B311Cu;
            goto label_2b311c;
        }
    }
    ctx->pc = 0x2B30F8u;
    // 0x2b30f8: 0xc0ac616  jal         func_2B1858
    ctx->pc = 0x2B30F8u;
    SET_GPR_U32(ctx, 31, 0x2B3100u);
    ctx->pc = 0x2B30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30F8u;
    // 0x2b30fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1858u, 0x2B30F8u, 0x2B3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3100u;
label_2b3100:
    // 0x2b3100: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3100u;
    {
        const bool branch_taken_0x2b3100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3100u;
        // 0x2b3104: 0x26a399f0  addiu       $v1, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3100) {
            ctx->pc = 0x2B311Cu;
            goto label_2b311c;
        }
    }
    ctx->pc = 0x2B3108u;
    // 0x2b3108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b310c: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2b310cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b3110: 0x26250016  addiu       $a1, $s1, 0x16
    ctx->pc = 0x2b3110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x2b3114: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2b3114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b3118: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x2b3118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b311c:
    // 0x2b311c: 0xc0ac6b0  jal         func_2B1AC0
    ctx->pc = 0x2B311Cu;
    SET_GPR_U32(ctx, 31, 0x2B3124u);
    ctx->pc = 0x2B3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B311Cu;
    // 0x2b3120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1AC0u, 0x2B311Cu, 0x2B3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3124u;
label_2b3124:
    // 0x2b3124: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x2b3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2b3128: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B3128u;
    {
        const bool branch_taken_0x2b3128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3128u;
        // 0x2b312c: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3128) {
            ctx->pc = 0x2B31ECu;
            goto label_2b31ec;
        }
    }
    ctx->pc = 0x2B3130u;
    // 0x2b3130: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B3130u;
    SET_GPR_U32(ctx, 31, 0x2B3138u);
    ctx->pc = 0x2B3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3130u;
    // 0x2b3134: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B3130u, 0x2B3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3138u;
label_2b3138:
    // 0x2b3138: 0x8e900110  lw          $s0, 0x110($s4)
    ctx->pc = 0x2b3138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2b313c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x2b313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2b3140: 0x3c11407f  lui         $s1, 0x407F
    ctx->pc = 0x2b3140u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16511 << 16));
    // 0x2b3144: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b3144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3148: 0x1081c0  sll         $s0, $s0, 7
    ctx->pc = 0x2b3148u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2b314c: 0x36317f00  ori         $s1, $s1, 0x7F00
    ctx->pc = 0x2b314cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32512);
    // 0x2b3150: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x2b3150u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b3154: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3154u;
    {
        const bool branch_taken_0x2b3154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3154) {
            ctx->pc = 0x2B3158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3154u;
            // 0x2b3158: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B315Cu;
            goto label_2b315c;
        }
    }
    ctx->pc = 0x2B315Cu;
label_2b315c:
    // 0x2b315c: 0x8012  mflo        $s0
    ctx->pc = 0x2b315cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2b3160: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x2b3160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2b3164: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x2b3164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2b3168: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2B3168u;
    SET_GPR_U32(ctx, 31, 0x2B3170u);
    ctx->pc = 0x2B316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3168u;
    // 0x2b316c: 0x36105000  ori         $s0, $s0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2B3168u, 0x2B3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3170u;
label_2b3170:
    // 0x2b3170: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b3170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b3174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b3174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3178: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b317c: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B317Cu;
    SET_GPR_U32(ctx, 31, 0x2B3184u);
    ctx->pc = 0x2B3180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B317Cu;
    // 0x2b3180: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B317Cu, 0x2B3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3184u;
label_2b3184:
    // 0x2b3184: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b3184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3188: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B3188u;
    SET_GPR_U32(ctx, 31, 0x2B3190u);
    ctx->pc = 0x2B318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3188u;
    // 0x2b318c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B3188u, 0x2B3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3190u;
label_2b3190:
    // 0x2b3190: 0x26a799f0  addiu       $a3, $s5, -0x6610
    ctx->pc = 0x2b3190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2b3194: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b3194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3198: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x2b3198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2b319c: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x2b319cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2b31a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2b31a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b31a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2b31a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b31a8: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2b31a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b31ac: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x2b31acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b31b0: 0x64280b  movn        $a1, $v1, $a0
    ctx->pc = 0x2b31b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2b31b4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2b31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2b31b8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2b31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b31bc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2b31bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2b31c0: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x2b31c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2b31c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b31c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b31c8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2b31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b31cc: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2b31ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b31d0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B31D0u;
    SET_GPR_U32(ctx, 31, 0x2B31D8u);
    ctx->pc = 0x2B31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31D0u;
    // 0x2b31d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B31D0u, 0x2B31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31D8u;
label_2b31d8:
    // 0x2b31d8: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B31D8u;
    SET_GPR_U32(ctx, 31, 0x2B31E0u);
    ctx->pc = 0x2B31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31D8u;
    // 0x2b31dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B31D8u, 0x2B31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31E0u;
label_2b31e0:
    // 0x2b31e0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B31E0u;
    SET_GPR_U32(ctx, 31, 0x2B31E8u);
    ctx->pc = 0x2B31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31E0u;
    // 0x2b31e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B31E0u, 0x2B31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31E8u;
label_2b31e8:
    // 0x2b31e8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2b31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2b31ec:
    // 0x2b31ec: 0xc0ac28c  jal         func_2B0A30
    ctx->pc = 0x2B31ECu;
    SET_GPR_U32(ctx, 31, 0x2B31F4u);
    ctx->pc = 0x2B31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31ECu;
    // 0x2b31f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0A30u, 0x2B31ECu, 0x2B31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31F4u;
label_2b31f4:
    // 0x2b31f4: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b31f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b31fc: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x2b31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x2b3200: 0x10430099  beq         $v0, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2B3200u;
    {
        const bool branch_taken_0x2b3200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3200u;
        // 0x2b3204: 0x26a299f0  addiu       $v0, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3200) {
            ctx->pc = 0x2B3468u;
            goto label_2b3468;
        }
    }
    ctx->pc = 0x2B3208u;
    // 0x2b3208: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x2b3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2b320c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2b320cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2b3210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3214: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2b3214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b3218: 0x8c650160  lw          $a1, 0x160($v1)
    ctx->pc = 0x2b3218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2b321c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2b321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b3220: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2b3220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b3224: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x2b3224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2b3228: 0xc4ac000c  lwc1        $f12, 0xC($a1)
    ctx->pc = 0x2b3228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b322c: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2b322cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b3230: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x2b3230u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b3234: 0x688807  srav        $s1, $t0, $v1
    ctx->pc = 0x2b3234u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b3238: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b3238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b323c: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x2b323cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2b3240: 0x8ea599f0  lw          $a1, -0x6610($s5)
    ctx->pc = 0x2b3240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x2b3244: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x2b3244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b3248: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x2b3248u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2b324c: 0xc7b007  srav        $s6, $a3, $a2
    ctx->pc = 0x2b324cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x2b3250: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b3254: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b3254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b3258: 0xa49821  addu        $s3, $a1, $a0
    ctx->pc = 0x2b3258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b325c: 0x8e83010c  lw          $v1, 0x10C($s4)
    ctx->pc = 0x2b325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
    // 0x2b3260: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x2b3260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2b3264: 0xa3a90002  sb          $t1, 0x2($sp)
    ctx->pc = 0x2b3264u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2b3268: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2b3268u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b326c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2b326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2b3270: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x2b3270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x2b3274: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2b3274u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3278: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3278u;
    {
        const bool branch_taken_0x2b3278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3278u;
        // 0x2b327c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3278) {
            ctx->pc = 0x2B3288u;
            goto label_2b3288;
        }
    }
    ctx->pc = 0x2B3280u;
    // 0x2b3280: 0x2402009f  addiu       $v0, $zero, 0x9F
    ctx->pc = 0x2b3280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x2b3284: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x2b3284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_2b3288:
    // 0x2b3288: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x2b3288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b328c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b328cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3290: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x2b3290u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b3294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3298: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2b3298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2b329c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b32a0: 0x93a60003  lbu         $a2, 0x3($sp)
    ctx->pc = 0x2b32a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2b32a4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2b32a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2b32a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b32ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b32acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b32b0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b32b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2b32b4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2b32b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2b32b8: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x2b32b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2b32bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b32bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b32c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b32c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b32c4: 0xc0acb04  jal         func_2B2C10
    ctx->pc = 0x2B32C4u;
    SET_GPR_U32(ctx, 31, 0x2B32CCu);
    ctx->pc = 0x2B32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B32C4u;
    // 0x2b32c8: 0x2409007f  addiu       $t1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C10u, 0x2B32C4u, 0x2B32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32CCu;
label_2b32cc:
    // 0x2b32cc: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b32ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b32d0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2b32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b32d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b32d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b32d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b32d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32dc: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2b32e0: 0xc44c0208  lwc1        $f12, 0x208($v0)
    ctx->pc = 0x2b32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b32e4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2b32e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b32e8: 0x0  nop
    ctx->pc = 0x2b32e8u;
    // NOP
    // 0x2b32ec: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2B32ECu;
    {
        const bool branch_taken_0x2b32ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32ECu;
        // 0x2b32f0: 0x718021  addu        $s0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32ec) {
            ctx->pc = 0x2B3318u;
            goto label_2b3318;
        }
    }
    ctx->pc = 0x2B32F4u;
    // 0x2b32f4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2b32f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2b32f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b32f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b32fc: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2b32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b3300: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2b3300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3304: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b3304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3308: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b330c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b330cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b3310: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B3310u;
    {
        const bool branch_taken_0x2b3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3310u;
        // 0x2b3314: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3310) {
            ctx->pc = 0x2B333Cu;
            goto label_2b333c;
        }
    }
    ctx->pc = 0x2B3318u;
label_2b3318:
    // 0x2b3318: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2b3318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2b331c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b331cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3320: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2b3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b3324: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2b3324u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3328: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x2b3328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b332c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b332cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b3330: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b3334: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b3334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b3338: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2b3338u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b333c:
    // 0x2b333c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b3340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3344: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2b3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b3348: 0x8e830108  lw          $v1, 0x108($s4)
    ctx->pc = 0x2b3348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x2b334c: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x2b334cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3350: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x2b3350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3354: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b3354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b3358: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b335c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b335cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b3360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3360u;
    {
        const bool branch_taken_0x2b3360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3360u;
        // 0x2b3364: 0xa3a20002  sb          $v0, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3360) {
            ctx->pc = 0x2B3370u;
            goto label_2b3370;
        }
    }
    ctx->pc = 0x2B3368u;
    // 0x2b3368: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2b3368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b336c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x2b336cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_2b3370:
    // 0x2b3370: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x2b3370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3378: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x2b3378u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2b337c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3380: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2b3380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2b3384: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b3384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b3388: 0x93a60003  lbu         $a2, 0x3($sp)
    ctx->pc = 0x2b3388u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2b338c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2b338cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2b3390: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b3390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b3394: 0x82890104  lb          $t1, 0x104($s4)
    ctx->pc = 0x2b3394u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x2b3398: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b3398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2b339c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2b339cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2b33a0: 0xc68d0100  lwc1        $f13, 0x100($s4)
    ctx->pc = 0x2b33a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b33a4: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x2b33a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2b33a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b33a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33ac: 0xc0acb04  jal         func_2B2C10
    ctx->pc = 0x2B33ACu;
    SET_GPR_U32(ctx, 31, 0x2B33B4u);
    ctx->pc = 0x2B33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33ACu;
    // 0x2b33b0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C10u, 0x2B33ACu, 0x2B33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33B4u;
label_2b33b4:
    // 0x2b33b4: 0x27c3c4a8  addiu       $v1, $fp, -0x3B58
    ctx->pc = 0x2b33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2b33b8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b33bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b33bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b33c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B33C0u;
    {
        const bool branch_taken_0x2b33c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33C0u;
        // 0x2b33c4: 0x8f84b234  lw          $a0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33c0) {
            ctx->pc = 0x2B33D8u;
            goto label_2b33d8;
        }
    }
    ctx->pc = 0x2B33C8u;
    // 0x2b33c8: 0xc0ac896  jal         func_2B2258
    ctx->pc = 0x2B33C8u;
    SET_GPR_U32(ctx, 31, 0x2B33D0u);
    ctx->pc = 0x2B2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2258u, 0x2B33C8u, 0x2B33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33D0u;
label_2b33d0:
    // 0x2b33d0: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x2b33d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b33d4: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2b33d8:
    // 0x2b33d8: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2b33dc: 0x24840198  addiu       $a0, $a0, 0x198
    ctx->pc = 0x2b33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
    // 0x2b33e0: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2b33e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2b33e4: 0xc0a50f8  jal         func_2943E0
    ctx->pc = 0x2B33E4u;
    SET_GPR_U32(ctx, 31, 0x2B33ECu);
    ctx->pc = 0x2B33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33E4u;
    // 0x2b33e8: 0x24a5010c  addiu       $a1, $a1, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2943E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943E0u, 0x2B33E4u, 0x2B33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33ECu;
label_2b33ec:
    // 0x2b33ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B33ECu;
    {
        const bool branch_taken_0x2b33ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33ECu;
        // 0x2b33f0: 0x8f85b234  lw          $a1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33ec) {
            ctx->pc = 0x2B3420u;
            goto label_2b3420;
        }
    }
    ctx->pc = 0x2B33F4u;
    // 0x2b33f4: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x2b33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2b33f8: 0x8ea699f0  lw          $a2, -0x6610($s5)
    ctx->pc = 0x2b33f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
    // 0x2b33fc: 0x8ca70180  lw          $a3, 0x180($a1)
    ctx->pc = 0x2b33fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x2b3400: 0x24c2003c  addiu       $v0, $a2, 0x3C
    ctx->pc = 0x2b3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
    // 0x2b3404: 0x8c680058  lw          $t0, 0x58($v1)
    ctx->pc = 0x2b3404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2b3408: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x2b3408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2b340c: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x2b340cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x2b3410: 0x24a50198  addiu       $a1, $a1, 0x198
    ctx->pc = 0x2b3410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
    // 0x2b3414: 0x48300b  movn        $a2, $v0, $t0
    ctx->pc = 0x2b3414u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2b3418: 0xc0ac708  jal         func_2B1C20
    ctx->pc = 0x2B3418u;
    SET_GPR_U32(ctx, 31, 0x2B3420u);
    ctx->pc = 0x2B341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3418u;
    // 0x2b341c: 0x2484010c  addiu       $a0, $a0, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C20u, 0x2B3418u, 0x2B3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3420u;
label_2b3420:
    // 0x2b3420: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2b3420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2b3424: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x2b3424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
    // 0x2b3428: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3428u;
    {
        const bool branch_taken_0x2b3428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3428u;
        // 0x2b342c: 0x26a399f0  addiu       $v1, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3428) {
            ctx->pc = 0x2B345Cu;
            goto label_2b345c;
        }
    }
    ctx->pc = 0x2B3430u;
    // 0x2b3430: 0x8ca20180  lw          $v0, 0x180($a1)
    ctx->pc = 0x2b3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x2b3434: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2b3434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b3438: 0x24a50258  addiu       $a1, $a1, 0x258
    ctx->pc = 0x2b3438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 600));
    // 0x2b343c: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2b343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2b3440: 0x24c2ffc4  addiu       $v0, $a2, -0x3C
    ctx->pc = 0x2b3440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967236));
    // 0x2b3444: 0x8c670058  lw          $a3, 0x58($v1)
    ctx->pc = 0x2b3444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2b3448: 0x24c6ffb0  addiu       $a2, $a2, -0x50
    ctx->pc = 0x2b3448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
    // 0x2b344c: 0x24840178  addiu       $a0, $a0, 0x178
    ctx->pc = 0x2b344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
    // 0x2b3450: 0xc0ac708  jal         func_2B1C20
    ctx->pc = 0x2B3450u;
    SET_GPR_U32(ctx, 31, 0x2B3458u);
    ctx->pc = 0x2B3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3450u;
    // 0x2b3454: 0x47300b  movn        $a2, $v0, $a3 (Delay Slot)
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C20u, 0x2B3450u, 0x2B3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3458u;
label_2b3458:
    // 0x2b3458: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x2b3458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2b345c:
    // 0x2b345c: 0x8ca40180  lw          $a0, 0x180($a1)
    ctx->pc = 0x2b345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x2b3460: 0xc0ac7a6  jal         func_2B1E98
    ctx->pc = 0x2B3460u;
    SET_GPR_U32(ctx, 31, 0x2B3468u);
    ctx->pc = 0x2B3464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3460u;
    // 0x2b3464: 0x26e50003  addiu       $a1, $s7, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1E98u, 0x2B3460u, 0x2B3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3468u;
label_2b3468:
    // 0x2b3468: 0x27c2c4a8  addiu       $v0, $fp, -0x3B58
    ctx->pc = 0x2b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952104));
    // 0x2b346c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b3470: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2b3470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b3474: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3474u;
    {
        const bool branch_taken_0x2b3474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3474u;
        // 0x2b3478: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3474) {
            ctx->pc = 0x2B3494u;
            goto label_2b3494;
        }
    }
    ctx->pc = 0x2B347Cu;
    // 0x2b347c: 0x14820035  bne         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2B347Cu;
    {
        const bool branch_taken_0x2b347c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b347c) {
            ctx->pc = 0x2B3554u;
            goto label_2b3554;
        }
    }
    ctx->pc = 0x2B3484u;
    // 0x2b3484: 0xc0ac460  jal         func_2B1180
    ctx->pc = 0x2B3484u;
    SET_GPR_U32(ctx, 31, 0x2B348Cu);
    ctx->pc = 0x2B1180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1180u, 0x2B3484u, 0x2B348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B348Cu;
label_2b348c:
    // 0x2b348c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2B348Cu;
    {
        const bool branch_taken_0x2b348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b348c) {
            ctx->pc = 0x2B3554u;
            goto label_2b3554;
        }
    }
    ctx->pc = 0x2B3494u;
label_2b3494:
    // 0x2b3494: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2b3494u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2b3498: 0x8e422010  lw          $v0, 0x2010($s2)
    ctx->pc = 0x2b3498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382010u));
    // 0x2b349c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2B349Cu;
    {
        const bool branch_taken_0x2b349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B349Cu;
        // 0x2b34a0: 0x8f829f74  lw          $v0, -0x608C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b349c) {
            ctx->pc = 0x2B3554u;
            goto label_2b3554;
        }
    }
    ctx->pc = 0x2B34A4u;
    // 0x2b34a4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b34a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b34a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B34A8u;
    {
        const bool branch_taken_0x2b34a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34A8u;
        // 0x2b34ac: 0x8ea399f0  lw          $v1, -0x6610($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34a8) {
            ctx->pc = 0x2B34C4u;
            goto label_2b34c4;
        }
    }
    ctx->pc = 0x2B34B0u;
    // 0x2b34b0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2b34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b34b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B34B4u;
    {
        const bool branch_taken_0x2b34b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34B4u;
        // 0x2b34b8: 0x26a299f0  addiu       $v0, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34b4) {
            ctx->pc = 0x2B34CCu;
            goto label_2b34cc;
        }
    }
    ctx->pc = 0x2B34BCu;
    // 0x2b34bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B34BCu;
    {
        const bool branch_taken_0x2b34bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34BCu;
        // 0x2b34c0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34bc) {
            ctx->pc = 0x2B34DCu;
            goto label_2b34dc;
        }
    }
    ctx->pc = 0x2B34C4u;
label_2b34c4:
    // 0x2b34c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B34C4u;
    {
        const bool branch_taken_0x2b34c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34C4u;
        // 0x2b34c8: 0x26a299f0  addiu       $v0, $s5, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34c4) {
            ctx->pc = 0x2B34D8u;
            goto label_2b34d8;
        }
    }
    ctx->pc = 0x2B34CCu;
label_2b34cc:
    // 0x2b34cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b34d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B34D0u;
    {
        const bool branch_taken_0x2b34d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34D0u;
        // 0x2b34d4: 0x2471ffba  addiu       $s1, $v1, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34d0) {
            ctx->pc = 0x2B34E8u;
            goto label_2b34e8;
        }
    }
    ctx->pc = 0x2B34D8u;
label_2b34d8:
    // 0x2b34d8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2b34dc:
    // 0x2b34dc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2b34dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2b34e0: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x2b34e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b34e4: 0x2471003e  addiu       $s1, $v1, 0x3E
    ctx->pc = 0x2b34e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
label_2b34e8:
    // 0x2b34e8: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2b34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2b34ec: 0x26a499f0  addiu       $a0, $s5, -0x6610
    ctx->pc = 0x2b34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x2b34f0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2b34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2b34f4: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x2b34f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b34f8: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2b34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2b34fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b3500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3504: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x2b3504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b3508: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b3508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b350c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x2b350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x2b3510: 0x2610001a  addiu       $s0, $s0, 0x1A
    ctx->pc = 0x2b3510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
    // 0x2b3514: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2b3514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2b3518: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x2b3518u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2b351c: 0x8cc40ca0  lw          $a0, 0xCA0($a2)
    ctx->pc = 0x2b351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3232)));
    // 0x2b3520: 0x8c69c384  lw          $t1, -0x3C7C($v1)
    ctx->pc = 0x2b3520u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951812)));
    // 0x2b3524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b3528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b352c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b352cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3530: 0xc0ac3f0  jal         func_2B0FC0
    ctx->pc = 0x2B3530u;
    SET_GPR_U32(ctx, 31, 0x2B3538u);
    ctx->pc = 0x2B3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3530u;
    // 0x2b3534: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0FC0u, 0x2B3530u, 0x2B3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3538u;
label_2b3538:
    // 0x2b3538: 0x8e422010  lw          $v0, 0x2010($s2)
    ctx->pc = 0x2b3538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8208)));
    // 0x2b353c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3540: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x2b3540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2b3544: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x2b3544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2b3548: 0xc44c0208  lwc1        $f12, 0x208($v0)
    ctx->pc = 0x2b3548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b354c: 0xc0ac4ca  jal         func_2B1328
    ctx->pc = 0x2B354Cu;
    SET_GPR_U32(ctx, 31, 0x2B3554u);
    ctx->pc = 0x2B3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B354Cu;
    // 0x2b3550: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1328u, 0x2B354Cu, 0x2B3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3554u;
label_2b3554:
    // 0x2b3554: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B3554u;
    SET_GPR_U32(ctx, 31, 0x2B355Cu);
    ctx->pc = 0x2B3558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3554u;
    // 0x2b3558: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B3554u, 0x2B355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B355Cu;
label_2b355c:
    // 0x2b355c: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2B355Cu;
    SET_GPR_U32(ctx, 31, 0x2B3564u);
    ctx->pc = 0x2B3560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B355Cu;
    // 0x2b3560: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2B355Cu, 0x2B3564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3564u;
label_2b3564:
    // 0x2b3564: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b3564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b3568:
    // 0x2b3568: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2b3568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b356c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2b356cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b3570: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2b3570u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b3574: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b3574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b3578: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b3578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b357c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b357cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3580: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b3580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3584: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b3584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3588: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b3588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b358c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B358Cu;
        // 0x2b3590: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3594u;
}
