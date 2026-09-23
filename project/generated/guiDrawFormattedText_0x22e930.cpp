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

// Function: guiDrawFormattedText
// Address: 0x22e930 - 0x22eadc
void guiDrawFormattedText_0x22e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiDrawFormattedText_0x22e930");
#endif

    switch (ctx->pc) {
        case 0x22e978u: goto label_22e978;
        case 0x22e980u: goto label_22e980;
        case 0x22e990u: goto label_22e990;
        case 0x22ea1cu: goto label_22ea1c;
        case 0x22ea4cu: goto label_22ea4c;
        case 0x22ea54u: goto label_22ea54;
        case 0x22ea9cu: goto label_22ea9c;
        default: break;
    }

    ctx->pc = 0x22e930u;

    // 0x22e930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22e934: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22e938: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22e93c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22e93cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e940: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x22e940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x22e944: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x22e944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e948: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22e94c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x22e94cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e950: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22e950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22e954: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22e954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e958: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22e95c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x22e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e960: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22e964: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22e964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e968: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22e968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22e96c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22e970: 0xc08089c  jal         func_202270
    ctx->pc = 0x22E970u;
    SET_GPR_U32(ctx, 31, 0x22E978u);
    ctx->pc = 0x22E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E970u;
    // 0x22e974: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22E970u, 0x22E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E978u;
label_22e978:
    // 0x22e978: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22e97c: 0x2b38021  addu        $s0, $s5, $s3
    ctx->pc = 0x22e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_22e980:
    // 0x22e980: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22e984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e988: 0xc0b9722  jal         func_2E5C88
    ctx->pc = 0x22E988u;
    SET_GPR_U32(ctx, 31, 0x22E990u);
    ctx->pc = 0x22E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E988u;
    // 0x22e98c: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5C88u, 0x22E988u, 0x22E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E990u;
label_22e990:
    // 0x22e990: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22e990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e994: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E994u;
    {
        const bool branch_taken_0x22e994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E994u;
        // 0x22e998: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e994) {
            ctx->pc = 0x22E9A0u;
            goto label_22e9a0;
        }
    }
    ctx->pc = 0x22E99Cu;
    // 0x22e99c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x22e99cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_22e9a0:
    // 0x22e9a0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x22e9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e9a4: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x22e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x22e9a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E9A8u;
    {
        const bool branch_taken_0x22e9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9A8u;
        // 0x22e9ac: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9a8) {
            ctx->pc = 0x22E9C4u;
            goto label_22e9c4;
        }
    }
    ctx->pc = 0x22E9B0u;
    // 0x22e9b0: 0x3c124078  lui         $s2, 0x4078
    ctx->pc = 0x22e9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16504 << 16));
    // 0x22e9b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22e9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22e9b8: 0x36527880  ori         $s2, $s2, 0x7880
    ctx->pc = 0x22e9b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30848);
    // 0x22e9bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22E9BCu;
    {
        const bool branch_taken_0x22e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9BCu;
        // 0x22e9c0: 0x24165080  addiu       $s6, $zero, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9bc) {
            ctx->pc = 0x22EA04u;
            goto label_22ea04;
        }
    }
    ctx->pc = 0x22E9C4u;
label_22e9c4:
    // 0x22e9c4: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22E9C4u;
    {
        const bool branch_taken_0x22e9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e9c4) {
            ctx->pc = 0x22E9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E9C4u;
            // 0x22e9c8: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EA0Cu;
            goto label_22ea0c;
        }
    }
    ctx->pc = 0x22E9CCu;
    // 0x22e9cc: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x22e9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22e9d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e9d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E9D4u;
    {
        const bool branch_taken_0x22e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9D4u;
        // 0x22e9d8: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9d4) {
            ctx->pc = 0x22E9ECu;
            goto label_22e9ec;
        }
    }
    ctx->pc = 0x22E9DCu;
    // 0x22e9dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22e9e0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x22e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x22e9e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22E9E4u;
    {
        const bool branch_taken_0x22e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9E4u;
        // 0x22e9e8: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9e4) {
            ctx->pc = 0x22E9F4u;
            goto label_22e9f4;
        }
    }
    ctx->pc = 0x22E9ECu;
label_22e9ec:
    // 0x22e9ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22e9f0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22e9f4:
    // 0x22e9f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22e9f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22e9f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22e9fc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x22ea00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22ea04:
    // 0x22ea04: 0x2b38021  addu        $s0, $s5, $s3
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x22ea08: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22ea08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_22ea0c:
    // 0x22ea0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22EA0Cu;
    {
        const bool branch_taken_0x22ea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea0c) {
            ctx->pc = 0x22EA4Cu;
            goto label_22ea4c;
        }
    }
    ctx->pc = 0x22EA14u;
    // 0x22ea14: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x22EA14u;
    SET_GPR_U32(ctx, 31, 0x22EA1Cu);
    ctx->pc = 0x22EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA14u;
    // 0x22ea18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x22EA14u, 0x22EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA1Cu;
label_22ea1c:
    // 0x22ea1c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x22ea20: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x22ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22ea24: 0x24a599f0  addiu       $a1, $a1, -0x6610
    ctx->pc = 0x22ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x22ea28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ea2c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x22ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22ea30: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22ea30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22ea34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22ea34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea38: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x22ea38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea3c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22ea40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22ea40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea44: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22EA44u;
    SET_GPR_U32(ctx, 31, 0x22EA4Cu);
    ctx->pc = 0x22EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA44u;
    // 0x22ea48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22EA44u, 0x22EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA4Cu;
label_22ea4c:
    // 0x22ea4c: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x22EA4Cu;
    SET_GPR_U32(ctx, 31, 0x22EA54u);
    ctx->pc = 0x22EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA4Cu;
    // 0x22ea50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x22EA4Cu, 0x22EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA54u;
label_22ea54:
    // 0x22ea54: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x22ea54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22ea58: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x22ea58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x22ea5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22ea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22ea60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EA60u;
    {
        const bool branch_taken_0x22ea60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA60u;
        // 0x22ea64: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea60) {
            ctx->pc = 0x22EA7Cu;
            goto label_22ea7c;
        }
    }
    ctx->pc = 0x22EA68u;
    // 0x22ea68: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22ea6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22ea70: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22ea74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22EA74u;
    {
        const bool branch_taken_0x22ea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA74u;
        // 0x22ea78: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea74) {
            ctx->pc = 0x22EA88u;
            goto label_22ea88;
        }
    }
    ctx->pc = 0x22EA7Cu;
label_22ea7c:
    // 0x22ea7c: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x22ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x22ea80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22ea84: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x22ea84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_22ea88:
    // 0x22ea88: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EA88u;
    {
        const bool branch_taken_0x22ea88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA88u;
        // 0x22ea8c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea88) {
            ctx->pc = 0x22EA94u;
            goto label_22ea94;
        }
    }
    ctx->pc = 0x22EA90u;
    // 0x22ea90: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x22ea90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_22ea94:
    // 0x22ea94: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x22EA94u;
    SET_GPR_U32(ctx, 31, 0x22EA9Cu);
    ctx->pc = 0x22EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA94u;
    // 0x22ea98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x22EA94u, 0x22EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA9Cu;
label_22ea9c:
    // 0x22ea9c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x22ea9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22eaa0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x22EAA0u;
    {
        const bool branch_taken_0x22eaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAA0u;
        // 0x22eaa4: 0x2b38021  addu        $s0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eaa0) {
            ctx->pc = 0x22E980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e980;
        }
    }
    ctx->pc = 0x22EAA8u;
    // 0x22eaa8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eaac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22eab0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22eab0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22eab4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22eab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22eab8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22eab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22eabc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22eabcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22eac0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22eac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22eac4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22eac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eac8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22eac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eacc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22eaccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ead0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22ead0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ead4: 0x808089c  j           func_202270
    ctx->pc = 0x22EAD4u;
    ctx->pc = 0x22EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAD4u;
    // 0x22ead8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x22EADCu;
}
