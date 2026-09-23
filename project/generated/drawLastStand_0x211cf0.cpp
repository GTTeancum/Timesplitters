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

// Function: drawLastStand
// Address: 0x211cf0 - 0x212010
void drawLastStand_0x211cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawLastStand_0x211cf0");
#endif

    switch (ctx->pc) {
        case 0x211d1cu: goto label_211d1c;
        case 0x211d6cu: goto label_211d6c;
        case 0x211d98u: goto label_211d98;
        case 0x211e5cu: goto label_211e5c;
        case 0x211e88u: goto label_211e88;
        case 0x211ebcu: goto label_211ebc;
        case 0x211edcu: goto label_211edc;
        case 0x211f08u: goto label_211f08;
        case 0x211f40u: goto label_211f40;
        case 0x211f5cu: goto label_211f5c;
        case 0x211f74u: goto label_211f74;
        case 0x211fa0u: goto label_211fa0;
        default: break;
    }

    ctx->pc = 0x211cf0u;

    // 0x211cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x211cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x211cf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x211cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211cf8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x211cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x211cfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211d00: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x211d04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x211d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x211d08: 0x267299f0  addiu       $s2, $s3, -0x6610
    ctx->pc = 0x211d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x211d0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x211d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x211d10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x211d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x211d14: 0xc08089c  jal         func_202270
    ctx->pc = 0x211D14u;
    SET_GPR_U32(ctx, 31, 0x211D1Cu);
    ctx->pc = 0x211D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D14u;
    // 0x211d18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211D14u, 0x211D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D1Cu;
label_211d1c:
    // 0x211d1c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x211d20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211d24: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x211d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x211d28: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x211d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x211d2c: 0x8f849dac  lw          $a0, -0x6254($gp)
    ctx->pc = 0x211d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942124)));
    // 0x211d30: 0x24630026  addiu       $v1, $v1, 0x26
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    // 0x211d34: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x211d34u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x211d38: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x211d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x211d3c: 0x2471000e  addiu       $s1, $v1, 0xE
    ctx->pc = 0x211d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x211d40: 0x1486003d  bne         $a0, $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x211D40u;
    {
        const bool branch_taken_0x211d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x211D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D40u;
        // 0x211d44: 0x45880b  movn        $s1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d40) {
            ctx->pc = 0x211E38u;
            goto label_211e38;
        }
    }
    ctx->pc = 0x211D48u;
    // 0x211d48: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211d4c: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x211d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x211d50: 0x26642c18  addiu       $a0, $s3, 0x2C18
    ctx->pc = 0x211d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x211d54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211d58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211d60: 0x8c70072c  lw          $s0, 0x72C($v1)
    ctx->pc = 0x211d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1836)));
    // 0x211d64: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211D64u;
    SET_GPR_U32(ctx, 31, 0x211D6Cu);
    ctx->pc = 0x211D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D64u;
    // 0x211d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211D64u, 0x211D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D6Cu;
label_211d6c:
    // 0x211d6c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211d70: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x211d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x211d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211d78: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x211d78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x211d7c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211d7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211d80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d84: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d8c: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211d8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211d90: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211D90u;
    SET_GPR_U32(ctx, 31, 0x211D98u);
    ctx->pc = 0x211D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D90u;
    // 0x211d94: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211D90u, 0x211D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D98u;
label_211d98:
    // 0x211d98: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x211d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x211d9c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211da0: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x211da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x211da4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211da8: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x211da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x211dac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211DACu;
    {
        const bool branch_taken_0x211dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DACu;
        // 0x211db0: 0x473807  srav        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dac) {
            ctx->pc = 0x211DBCu;
            goto label_211dbc;
        }
    }
    ctx->pc = 0x211DB4u;
    // 0x211db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211DB4u;
    {
        const bool branch_taken_0x211db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DB4u;
        // 0x211db8: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211db4) {
            ctx->pc = 0x211DC0u;
            goto label_211dc0;
        }
    }
    ctx->pc = 0x211DBCu;
label_211dbc:
    // 0x211dbc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x211dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_211dc0:
    // 0x211dc0: 0x478821  addu        $s1, $v0, $a3
    ctx->pc = 0x211dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x211dc4: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x211dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x211dc8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x211dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211dcc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211DCCu;
    {
        const bool branch_taken_0x211dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DCCu;
        // 0x211dd0: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dcc) {
            ctx->pc = 0x211DECu;
            goto label_211dec;
        }
    }
    ctx->pc = 0x211DD4u;
    // 0x211dd4: 0x26642c18  addiu       $a0, $s3, 0x2C18
    ctx->pc = 0x211dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x211dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211ddc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211de4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211DE4u;
    {
        const bool branch_taken_0x211de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DE4u;
        // 0x211de8: 0x8c7011ac  lw          $s0, 0x11AC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211de4) {
            ctx->pc = 0x211E00u;
            goto label_211e00;
        }
    }
    ctx->pc = 0x211DECu;
label_211dec:
    // 0x211dec: 0x26642c18  addiu       $a0, $s3, 0x2C18
    ctx->pc = 0x211decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x211df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211df4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211df8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211dfc: 0x8c7011b0  lw          $s0, 0x11B0($v1)
    ctx->pc = 0x211dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4528)));
label_211e00:
    // 0x211e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e08: 0x8f88a01c  lw          $t0, -0x5FE4($gp)
    ctx->pc = 0x211e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x211e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e10: 0x8f89a020  lw          $t1, -0x5FE0($gp)
    ctx->pc = 0x211e10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x211e14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x211e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211e18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x211e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211e1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x211e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211e20: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x211e20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211e24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211e28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x211e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211e30: 0x808ba4c  j           func_22E930
    ctx->pc = 0x211E30u;
    ctx->pc = 0x211E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E30u;
    // 0x211e34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E930u;
    guiDrawFormattedText_0x22e930(rdram, ctx, runtime); return;
    ctx->pc = 0x211E38u;
label_211e38:
    // 0x211e38: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211e3c: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x211e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x211e40: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x211e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x211e44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211e48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211e4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211e50: 0x8c700730  lw          $s0, 0x730($v1)
    ctx->pc = 0x211e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x211e54: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211E54u;
    SET_GPR_U32(ctx, 31, 0x211E5Cu);
    ctx->pc = 0x211E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E54u;
    // 0x211e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211E54u, 0x211E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E5Cu;
label_211e5c:
    // 0x211e5c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211e60: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x211e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x211e64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211e68: 0x3c077f20  lui         $a3, 0x7F20
    ctx->pc = 0x211e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32544 << 16));
    // 0x211e6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211e6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211e70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e74: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e7c: 0x34e72080  ori         $a3, $a3, 0x2080
    ctx->pc = 0x211e7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8320);
    // 0x211e80: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211E80u;
    SET_GPR_U32(ctx, 31, 0x211E88u);
    ctx->pc = 0x211E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E80u;
    // 0x211e84: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211E80u, 0x211E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E88u;
label_211e88:
    // 0x211e88: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x211e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x211e8c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211e90: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x211e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x211e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211e98: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x211e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x211e9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211E9Cu;
    {
        const bool branch_taken_0x211e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E9Cu;
        // 0x211ea0: 0x473807  srav        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e9c) {
            ctx->pc = 0x211EACu;
            goto label_211eac;
        }
    }
    ctx->pc = 0x211EA4u;
    // 0x211ea4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211EA4u;
    {
        const bool branch_taken_0x211ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EA4u;
        // 0x211ea8: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ea4) {
            ctx->pc = 0x211EB0u;
            goto label_211eb0;
        }
    }
    ctx->pc = 0x211EACu;
label_211eac:
    // 0x211eac: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x211eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_211eb0:
    // 0x211eb0: 0x478821  addu        $s1, $v0, $a3
    ctx->pc = 0x211eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x211eb4: 0xc08089c  jal         func_202270
    ctx->pc = 0x211EB4u;
    SET_GPR_U32(ctx, 31, 0x211EBCu);
    ctx->pc = 0x211EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211EB4u;
    // 0x211eb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211EB4u, 0x211EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211EBCu;
label_211ebc:
    // 0x211ebc: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x211ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211ec0: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x211ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x211ec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211ec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211ed0: 0x8c50073c  lw          $s0, 0x73C($v0)
    ctx->pc = 0x211ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1852)));
    // 0x211ed4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211ED4u;
    SET_GPR_U32(ctx, 31, 0x211EDCu);
    ctx->pc = 0x211ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211ED4u;
    // 0x211ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211ED4u, 0x211EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211EDCu;
label_211edc:
    // 0x211edc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211ee0: 0x266599f0  addiu       $a1, $s3, -0x6610
    ctx->pc = 0x211ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x211ee4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x211ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x211ee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211eec: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211eecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211ef0: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x211ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x211ef4: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x211ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x211ef8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f00: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211F00u;
    SET_GPR_U32(ctx, 31, 0x211F08u);
    ctx->pc = 0x211F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F00u;
    // 0x211f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211F00u, 0x211F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F08u;
label_211f08:
    // 0x211f08: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211F10u;
    {
        const bool branch_taken_0x211f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F10u;
        // 0x211f14: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f10) {
            ctx->pc = 0x211F28u;
            goto label_211f28;
        }
    }
    ctx->pc = 0x211F18u;
    // 0x211f18: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x211f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x211f1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x211f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x211f20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211F20u;
    {
        const bool branch_taken_0x211f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F20u;
        // 0x211f24: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f20) {
            ctx->pc = 0x211F30u;
            goto label_211f30;
        }
    }
    ctx->pc = 0x211F28u;
label_211f28:
    // 0x211f28: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x211f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x211f2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x211f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_211f30:
    // 0x211f30: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x211f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211f34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x211f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211f38: 0xc08089c  jal         func_202270
    ctx->pc = 0x211F38u;
    SET_GPR_U32(ctx, 31, 0x211F40u);
    ctx->pc = 0x211F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F38u;
    // 0x211f3c: 0x267299f0  addiu       $s2, $s3, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211F38u, 0x211F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F40u;
label_211f40:
    // 0x211f40: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x211f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x211f44: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x211f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x211f48: 0x2484e510  addiu       $a0, $a0, -0x1AF0
    ctx->pc = 0x211f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960400));
    // 0x211f4c: 0x8ca20180  lw          $v0, 0x180($a1)
    ctx->pc = 0x211f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x211f50: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x211f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x211f54: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x211F54u;
    SET_GPR_U32(ctx, 31, 0x211F5Cu);
    ctx->pc = 0x211F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F54u;
    // 0x211f58: 0x8c6500f8  lw          $a1, 0xF8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x211F54u, 0x211F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F5Cu;
label_211f5c:
    // 0x211f5c: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x211f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x211f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f68: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x211f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x211f6c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211F6Cu;
    SET_GPR_U32(ctx, 31, 0x211F74u);
    ctx->pc = 0x211F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F6Cu;
    // 0x211f70: 0xa3839ab5  sb          $v1, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211F6Cu, 0x211F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F74u;
label_211f74:
    // 0x211f74: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211f78: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x211f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x211f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211f80: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x211f80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x211f84: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211f84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211f88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f8c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211f90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f94: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x211f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x211f98: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211F98u;
    SET_GPR_U32(ctx, 31, 0x211FA0u);
    ctx->pc = 0x211F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F98u;
    // 0x211f9c: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211F98u, 0x211FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FA0u;
label_211fa0:
    // 0x211fa0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211fa4: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x211fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x211fa8: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x211fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x211fac: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x211facu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    // 0x211fb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x211fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211fb4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x211FB4u;
    {
        const bool branch_taken_0x211fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FB4u;
        // 0x211fb8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fb4) {
            ctx->pc = 0x211FF4u;
            goto label_211ff4;
        }
    }
    ctx->pc = 0x211FBCu;
    // 0x211fbc: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x211fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x211fc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211FC0u;
    {
        const bool branch_taken_0x211fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FC0u;
        // 0x211fc4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fc0) {
            ctx->pc = 0x211FD0u;
            goto label_211fd0;
        }
    }
    ctx->pc = 0x211FC8u;
    // 0x211fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211FC8u;
    {
        const bool branch_taken_0x211fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FC8u;
        // 0x211fcc: 0x2444ffe2  addiu       $a0, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fc8) {
            ctx->pc = 0x211FD8u;
            goto label_211fd8;
        }
    }
    ctx->pc = 0x211FD0u;
label_211fd0:
    // 0x211fd0: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x211fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x211fd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x211fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_211fd8:
    // 0x211fd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x211fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211fdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x211fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211fe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x211fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211fec: 0x80841dc  j           func_210770
    ctx->pc = 0x211FECu;
    ctx->pc = 0x211FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FECu;
    // 0x211ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210770u;
    drawRetryQuit_0x210770(rdram, ctx, runtime); return;
    ctx->pc = 0x211FF4u;
label_211ff4:
    // 0x211ff4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x211ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211ff8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x211ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211ffc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x212000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212008: 0x3e00008  jr          $ra
    ctx->pc = 0x212008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212008u;
        // 0x21200c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212010u;
}
