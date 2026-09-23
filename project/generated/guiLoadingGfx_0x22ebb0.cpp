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

// Function: guiLoadingGfx
// Address: 0x22ebb0 - 0x22ecdc
void guiLoadingGfx_0x22ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiLoadingGfx_0x22ebb0");
#endif

    switch (ctx->pc) {
        case 0x22ebdcu: goto label_22ebdc;
        case 0x22ebe8u: goto label_22ebe8;
        case 0x22ebf4u: goto label_22ebf4;
        case 0x22ec1cu: goto label_22ec1c;
        case 0x22ec30u: goto label_22ec30;
        case 0x22ec78u: goto label_22ec78;
        case 0x22ec94u: goto label_22ec94;
        case 0x22ec9cu: goto label_22ec9c;
        case 0x22eca4u: goto label_22eca4;
        case 0x22ecacu: goto label_22ecac;
        case 0x22ecb4u: goto label_22ecb4;
        default: break;
    }

    ctx->pc = 0x22ebb0u;

    // 0x22ebb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22ebb4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22ebb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22ebbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22ebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22ebc0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22ebc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22ebc8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22ebcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22ebd0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22ebd4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22EBD4u;
    SET_GPR_U32(ctx, 31, 0x22EBDCu);
    ctx->pc = 0x22EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBD4u;
    // 0x22ebd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22EBD4u, 0x22EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBDCu;
label_22ebdc:
    // 0x22ebdc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x22ebdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebe0: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x22EBE0u;
    SET_GPR_U32(ctx, 31, 0x22EBE8u);
    ctx->pc = 0x22EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBE0u;
    // 0x22ebe4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x22EBE0u, 0x22EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBE8u;
label_22ebe8:
    // 0x22ebe8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22ebe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebec: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x22EBECu;
    SET_GPR_U32(ctx, 31, 0x22EBF4u);
    ctx->pc = 0x22EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBECu;
    // 0x22ebf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x22EBECu, 0x22EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBF4u;
label_22ebf4:
    // 0x22ebf4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x22ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x22ebf8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x22ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x22ebfc: 0x24a52c18  addiu       $a1, $a1, 0x2C18
    ctx->pc = 0x22ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x22ec00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22ec00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22ec08: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ec0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22ec10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ec14: 0xc08089c  jal         func_202270
    ctx->pc = 0x22EC14u;
    SET_GPR_U32(ctx, 31, 0x22EC1Cu);
    ctx->pc = 0x22EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC14u;
    // 0x22ec18: 0x8c5205b0  lw          $s2, 0x5B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22EC14u, 0x22EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC1Cu;
label_22ec1c:
    // 0x22ec1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22ec1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ec20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec28: 0xc080aa2  jal         func_202A88
    ctx->pc = 0x22EC28u;
    SET_GPR_U32(ctx, 31, 0x22EC30u);
    ctx->pc = 0x22EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC28u;
    // 0x22ec2c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A88u, 0x22EC28u, 0x22EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC30u;
label_22ec30:
    // 0x22ec30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ec34: 0x24110280  addiu       $s1, $zero, 0x280
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x22ec38: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22ec3c: 0x241000e0  addiu       $s0, $zero, 0xE0
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x22ec40: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x22ec40u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22ec44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec48: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x22ec48u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22ec4c: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x22ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x22ec50: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x22ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x22ec54: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x22ec54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22ec58: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x22ec58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22ec5c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x22ec5cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x22ec60: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x22ec60u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x22ec64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec68: 0x2406027f  addiu       $a2, $zero, 0x27F
    ctx->pc = 0x22ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x22ec6c: 0x240700df  addiu       $a3, $zero, 0xDF
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x22ec70: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x22EC70u;
    SET_GPR_U32(ctx, 31, 0x22EC78u);
    ctx->pc = 0x22EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC70u;
    // 0x22ec74: 0x24082850  addiu       $t0, $zero, 0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x22EC70u, 0x22EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC78u;
label_22ec78:
    // 0x22ec78: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x22ec78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x22ec7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec88: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x22ec88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x22ec8c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x22EC8Cu;
    SET_GPR_U32(ctx, 31, 0x22EC94u);
    ctx->pc = 0x22EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC8Cu;
    // 0x22ec90: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x22EC8Cu, 0x22EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC94u;
label_22ec94:
    // 0x22ec94: 0xc08089c  jal         func_202270
    ctx->pc = 0x22EC94u;
    SET_GPR_U32(ctx, 31, 0x22EC9Cu);
    ctx->pc = 0x22EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC94u;
    // 0x22ec98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x22EC94u, 0x22EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC9Cu;
label_22ec9c:
    // 0x22ec9c: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x22EC9Cu;
    SET_GPR_U32(ctx, 31, 0x22ECA4u);
    ctx->pc = 0x22ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC9Cu;
    // 0x22eca0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x22EC9Cu, 0x22ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECA4u;
label_22eca4:
    // 0x22eca4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22ECA4u;
    SET_GPR_U32(ctx, 31, 0x22ECACu);
    ctx->pc = 0x22ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECA4u;
    // 0x22eca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22ECA4u, 0x22ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECACu;
label_22ecac:
    // 0x22ecac: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x22ECACu;
    SET_GPR_U32(ctx, 31, 0x22ECB4u);
    ctx->pc = 0x22ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECACu;
    // 0x22ecb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x22ECACu, 0x22ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECB4u;
label_22ecb4:
    // 0x22ecb4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22ecb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ecb8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22ecb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ecbc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22ecbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ecc0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22ecc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ecc4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22ecc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ecc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22ecc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eccc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22ecccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ecd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22ecd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x22ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECD4u;
        // 0x22ecd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ECDCu;
}
