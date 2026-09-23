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

// Function: drawEscortCompleted
// Address: 0x211aa8 - 0x211ce4
void drawEscortCompleted_0x211aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawEscortCompleted_0x211aa8");
#endif

    switch (ctx->pc) {
        case 0x211ae4u: goto label_211ae4;
        case 0x211af4u: goto label_211af4;
        case 0x211afcu: goto label_211afc;
        case 0x211b98u: goto label_211b98;
        case 0x211bc0u: goto label_211bc0;
        case 0x211c40u: goto label_211c40;
        case 0x211c48u: goto label_211c48;
        case 0x211c74u: goto label_211c74;
        case 0x211cb0u: goto label_211cb0;
        default: break;
    }

    ctx->pc = 0x211aa8u;

    // 0x211aa8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x211aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x211aac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x211aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x211ab0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x211ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x211ab4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x211ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x211ab8: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x211abc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x211abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x211ac0: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x211ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211ac8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x211ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x211acc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211ad0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x211ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x211ad4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x211ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x211ad8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211adc: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211ADCu;
    SET_GPR_U32(ctx, 31, 0x211AE4u);
    ctx->pc = 0x211AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211ADCu;
    // 0x211ae0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211ADCu, 0x211AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AE4u;
label_211ae4:
    // 0x211ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211ae8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x211ae8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x211aec: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x211AECu;
    SET_GPR_U32(ctx, 31, 0x211AF4u);
    ctx->pc = 0x211AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AECu;
    // 0x211af0: 0x3800b  movn        $s0, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x211AECu, 0x211AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AF4u;
label_211af4:
    // 0x211af4: 0xc08089c  jal         func_202270
    ctx->pc = 0x211AF4u;
    SET_GPR_U32(ctx, 31, 0x211AFCu);
    ctx->pc = 0x211AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AF4u;
    // 0x211af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211AF4u, 0x211AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AFCu;
label_211afc:
    // 0x211afc: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x211afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211b00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x211b00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b04: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x211b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x211b08: 0x26e6c4a8  addiu       $a2, $s7, -0x3B58
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x211b0c: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x211b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x211b10: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x211b14: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x211b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x211b18: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x211b1c: 0x24420026  addiu       $v0, $v0, 0x26
    ctx->pc = 0x211b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x211b20: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x211b20u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x211b24: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x211b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x211b28: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x211b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x211b2c: 0x2453000a  addiu       $s3, $v0, 0xA
    ctx->pc = 0x211b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x211b30: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x211B30u;
    {
        const bool branch_taken_0x211b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B30u;
        // 0x211b34: 0x85980b  movn        $s3, $a0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b30) {
            ctx->pc = 0x211B64u;
            goto label_211b64;
        }
    }
    ctx->pc = 0x211B38u;
    // 0x211b38: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211b3c: 0x3c16002f  lui         $s6, 0x2F
    ctx->pc = 0x211b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)47 << 16));
    // 0x211b40: 0x26c32c18  addiu       $v1, $s6, 0x2C18
    ctx->pc = 0x211b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 11288));
    // 0x211b44: 0x3c124078  lui         $s2, 0x4078
    ctx->pc = 0x211b44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16504 << 16));
    // 0x211b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211b4c: 0x36527880  ori         $s2, $s2, 0x7880
    ctx->pc = 0x211b4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30848);
    // 0x211b50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211b54: 0x24145080  addiu       $s4, $zero, 0x5080
    ctx->pc = 0x211b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x211b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211b5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x211B5Cu;
    {
        const bool branch_taken_0x211b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B5Cu;
        // 0x211b60: 0x8c71071c  lw          $s1, 0x71C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b5c) {
            ctx->pc = 0x211B8Cu;
            goto label_211b8c;
        }
    }
    ctx->pc = 0x211B64u;
label_211b64:
    // 0x211b64: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x211b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x211b68: 0x3c16002f  lui         $s6, 0x2F
    ctx->pc = 0x211b68u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)47 << 16));
    // 0x211b6c: 0x26c32c18  addiu       $v1, $s6, 0x2C18
    ctx->pc = 0x211b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 11288));
    // 0x211b70: 0x3c127f20  lui         $s2, 0x7F20
    ctx->pc = 0x211b70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32544 << 16));
    // 0x211b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211b78: 0x36522080  ori         $s2, $s2, 0x2080
    ctx->pc = 0x211b78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8320);
    // 0x211b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211b80: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x211b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x211b84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211b88: 0x8c710720  lw          $s1, 0x720($v1)
    ctx->pc = 0x211b88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1824)));
label_211b8c:
    // 0x211b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b90: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211B90u;
    SET_GPR_U32(ctx, 31, 0x211B98u);
    ctx->pc = 0x211B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B90u;
    // 0x211b94: 0x26b099f0  addiu       $s0, $s5, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211B90u, 0x211B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B98u;
label_211b98:
    // 0x211b98: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211b9c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x211b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x211ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211ba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x211ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ba8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211ba8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211bac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x211bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211bb0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211bb4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x211bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211bb8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211BB8u;
    SET_GPR_U32(ctx, 31, 0x211BC0u);
    ctx->pc = 0x211BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BB8u;
    // 0x211bbc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211BB8u, 0x211BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BC0u;
label_211bc0:
    // 0x211bc0: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x211bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x211bc4: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211bc8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x211bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x211bcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211bd0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x211bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x211bd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211BD4u;
    {
        const bool branch_taken_0x211bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BD4u;
        // 0x211bd8: 0x442007  srav        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bd4) {
            ctx->pc = 0x211BE4u;
            goto label_211be4;
        }
    }
    ctx->pc = 0x211BDCu;
    // 0x211bdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211BDCu;
    {
        const bool branch_taken_0x211bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BDCu;
        // 0x211be0: 0x26620002  addiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bdc) {
            ctx->pc = 0x211BE8u;
            goto label_211be8;
        }
    }
    ctx->pc = 0x211BE4u;
label_211be4:
    // 0x211be4: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x211be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_211be8:
    // 0x211be8: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211bec: 0x26e2c4a8  addiu       $v0, $s7, -0x3B58
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952104));
    // 0x211bf0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x211bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x211bf4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x211bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x211bf8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x211bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x211bfc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x211BFCu;
    {
        const bool branch_taken_0x211bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BFCu;
        // 0x211c00: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bfc) {
            ctx->pc = 0x211C80u;
            goto label_211c80;
        }
    }
    ctx->pc = 0x211C04u;
    // 0x211c04: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x211c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x211c08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x211c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211c0c: 0x8c622010  lw          $v0, 0x2010($v1)
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382010u));
    // 0x211c10: 0xc4400208  lwc1        $f0, 0x208($v0)
    ctx->pc = 0x211c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211c14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x211c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211c18: 0x0  nop
    ctx->pc = 0x211c18u;
    // NOP
    // 0x211c1c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x211C1Cu;
    {
        const bool branch_taken_0x211c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C1Cu;
        // 0x211c20: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c1c) {
            ctx->pc = 0x211C7Cu;
            goto label_211c7c;
        }
    }
    ctx->pc = 0x211C24u;
    // 0x211c24: 0x26c52c18  addiu       $a1, $s6, 0x2C18
    ctx->pc = 0x211c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 11288));
    // 0x211c28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x211c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211c2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211c30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x211c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x211c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211c38: 0xc08089c  jal         func_202270
    ctx->pc = 0x211C38u;
    SET_GPR_U32(ctx, 31, 0x211C40u);
    ctx->pc = 0x211C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C38u;
    // 0x211c3c: 0x8c710728  lw          $s1, 0x728($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x211C38u, 0x211C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C40u;
label_211c40:
    // 0x211c40: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x211C40u;
    SET_GPR_U32(ctx, 31, 0x211C48u);
    ctx->pc = 0x211C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C40u;
    // 0x211c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x211C40u, 0x211C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C48u;
label_211c48:
    // 0x211c48: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x211c4c: 0x26a599f0  addiu       $a1, $s5, -0x6610
    ctx->pc = 0x211c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211c50: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x211c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x211c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211c58: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211c58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x211c5c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x211c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x211c60: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x211c60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x211c64: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x211c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211c68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x211c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c6c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x211C6Cu;
    SET_GPR_U32(ctx, 31, 0x211C74u);
    ctx->pc = 0x211C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C6Cu;
    // 0x211c70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x211C6Cu, 0x211C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C74u;
label_211c74:
    // 0x211c74: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x211c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x211c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_211c7c:
    // 0x211c7c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_211c80:
    // 0x211c80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211c84: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x211C84u;
    {
        const bool branch_taken_0x211c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C84u;
        // 0x211c88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c84) {
            ctx->pc = 0x211CB4u;
            goto label_211cb4;
        }
    }
    ctx->pc = 0x211C8Cu;
    // 0x211c8c: 0x26a399f0  addiu       $v1, $s5, -0x6610
    ctx->pc = 0x211c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941168));
    // 0x211c90: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x211c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x211c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C94u;
    {
        const bool branch_taken_0x211c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C94u;
        // 0x211c98: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c94) {
            ctx->pc = 0x211CA4u;
            goto label_211ca4;
        }
    }
    ctx->pc = 0x211C9Cu;
    // 0x211c9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211C9Cu;
    {
        const bool branch_taken_0x211c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C9Cu;
        // 0x211ca0: 0x2444ffe2  addiu       $a0, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c9c) {
            ctx->pc = 0x211CA8u;
            goto label_211ca8;
        }
    }
    ctx->pc = 0x211CA4u;
label_211ca4:
    // 0x211ca4: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
label_211ca8:
    // 0x211ca8: 0xc0841dc  jal         func_210770
    ctx->pc = 0x211CA8u;
    SET_GPR_U32(ctx, 31, 0x211CB0u);
    ctx->pc = 0x210770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210770u, 0x211CA8u, 0x211CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211CB0u;
label_211cb0:
    // 0x211cb0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x211cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_211cb4:
    // 0x211cb4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x211cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211cb8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x211cb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211cbc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x211cbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211cc0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x211cc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211cc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x211cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211cc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x211cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211ccc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x211cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211cd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211cd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x211cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211cdc: 0x808089c  j           func_202270
    ctx->pc = 0x211CDCu;
    ctx->pc = 0x211CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211CDCu;
    // 0x211ce0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x211CE4u;
}
