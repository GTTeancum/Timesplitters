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

// Function: setupcontrols_pageGfx
// Address: 0x20eef0 - 0x20f26c
void setupcontrols_pageGfx_0x20eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setupcontrols_pageGfx_0x20eef0");
#endif

    switch (ctx->pc) {
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef30u: goto label_20ef30;
        case 0x20f020u: goto label_20f020;
        case 0x20f058u: goto label_20f058;
        case 0x20f098u: goto label_20f098;
        case 0x20f140u: goto label_20f140;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f204u: goto label_20f204;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f23cu: goto label_20f23c;
        default: break;
    }

    ctx->pc = 0x20eef0u;

    // 0x20eef0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20eef4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20eef8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20eefc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ef00: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x20ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x20ef04: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x20ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x20ef08: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x20ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x20ef0c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x20ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x20ef10: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x20ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x20ef14: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x20ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x20ef18: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x20ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x20ef1c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x20ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x20ef20: 0xc08089c  jal         func_202270
    ctx->pc = 0x20EF20u;
    SET_GPR_U32(ctx, 31, 0x20EF28u);
    ctx->pc = 0x20EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF20u;
    // 0x20ef24: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20EF20u, 0x20EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF28u;
label_20ef28:
    // 0x20ef28: 0xc083b38  jal         func_20ECE0
    ctx->pc = 0x20EF28u;
    SET_GPR_U32(ctx, 31, 0x20EF30u);
    ctx->pc = 0x20EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF28u;
    // 0x20ef2c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ECE0u, 0x20EF28u, 0x20EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF30u;
label_20ef30:
    // 0x20ef30: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20ef34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20ef38: 0x2465a308  addiu       $a1, $v1, -0x5CF8
    ctx->pc = 0x20ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943496));
    // 0x20ef3c: 0x8c4899f0  lw          $t0, -0x6610($v0)
    ctx->pc = 0x20ef3cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3299F0u));
    // 0x20ef40: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20ef44: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x20ef48: 0x8c470058  lw          $a3, 0x58($v0)
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A48u));
    // 0x20ef4c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20ef50: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x20ef50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ef54: 0x2484a318  addiu       $a0, $a0, -0x5CE8
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943512));
    // 0x20ef58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299FCu));
    // 0x20ef5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20ef60: 0x90a2000c  lbu         $v0, 0xC($a1)
    ctx->pc = 0x20ef60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20ef64: 0x286301f4  slti        $v1, $v1, 0x1F4
    ctx->pc = 0x20ef64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x20ef68: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20ef6c: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20ef70: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20EF70u;
    {
        const bool branch_taken_0x20ef70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF70u;
        // 0x20ef74: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef70) {
            ctx->pc = 0x20EF7Cu;
            goto label_20ef7c;
        }
    }
    ctx->pc = 0x20EF78u;
    // 0x20ef78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ef7c:
    // 0x20ef7c: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x20ef7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x20ef80: 0x102a021  addu        $s4, $t0, $v0
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20ef84: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x20ef88: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20ef8c: 0x248399f0  addiu       $v1, $a0, -0x6610
    ctx->pc = 0x20ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x20ef90: 0x24a4a308  addiu       $a0, $a1, -0x5CF8
    ctx->pc = 0x20ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943496));
    // 0x20ef94: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x20ef94u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3299FCu));
    // 0x20ef98: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x20ef98u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x32A30Eu));
    // 0x20ef9c: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x20efa0: 0x28e601f4  slti        $a2, $a3, 0x1F4
    ctx->pc = 0x20efa0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x20efa4: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x20efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x20efa8: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x20efa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20efac: 0x8c680058  lw          $t0, 0x58($v1)
    ctx->pc = 0x20efacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20efb0: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x20efb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20efb4: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x20EFB4u;
    {
        const bool branch_taken_0x20efb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFB4u;
        // 0x20efb8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efb4) {
            ctx->pc = 0x20EFC0u;
            goto label_20efc0;
        }
    }
    ctx->pc = 0x20EFBCu;
    // 0x20efbc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20efc0:
    // 0x20efc0: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x20efc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x20efc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20efc8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x20efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20efcc: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x20efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x20efd0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x20efd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x20efd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20efd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EFD8u;
    {
        const bool branch_taken_0x20efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFD8u;
        // 0x20efdc: 0x8f839a9c  lw          $v1, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efd8) {
            ctx->pc = 0x20EFF0u;
            goto label_20eff0;
        }
    }
    ctx->pc = 0x20EFE0u;
    // 0x20efe0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20efe4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20efe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20EFE8u;
    {
        const bool branch_taken_0x20efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFE8u;
        // 0x20efec: 0x2f040  sll         $fp, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efe8) {
            ctx->pc = 0x20EFFCu;
            goto label_20effc;
        }
    }
    ctx->pc = 0x20EFF0u;
label_20eff0:
    // 0x20eff0: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x20eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20eff4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20eff8: 0x3f040  sll         $fp, $v1, 1
    ctx->pc = 0x20eff8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20effc:
    // 0x20effc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20effcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f000: 0x2443a308  addiu       $v1, $v0, -0x5CF8
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x20f004: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x20f004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x32A30Au));
    // 0x20f008: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x20F008u;
    {
        const bool branch_taken_0x20f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F008u;
        // 0x20f00c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f008) {
            ctx->pc = 0x20F234u;
            goto label_20f234;
        }
    }
    ctx->pc = 0x20F010u;
    // 0x20f010: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f014: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x20f014u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x20f018: 0x283b821  addu        $s7, $s4, $v1
    ctx->pc = 0x20f018u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x20f01c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x20f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_20f020:
    // 0x20f020: 0x27e1021  addu        $v0, $s3, $fp
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x20f024: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x20f024u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20f028: 0x24085040  addiu       $t0, $zero, 0x5040
    ctx->pc = 0x20f028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20544));
    // 0x20f02c: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x20f02cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20f030: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20f034: 0x24052840  addiu       $a1, $zero, 0x2840
    ctx->pc = 0x20f034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x20f038: 0x26f0ffff  addiu       $s0, $s7, -0x1
    ctx->pc = 0x20f038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x20f03c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x20f03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x20f040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20f040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f044: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x20f044u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x20f048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f04c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f050: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x20F050u;
    SET_GPR_U32(ctx, 31, 0x20F058u);
    ctx->pc = 0x20F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F050u;
    // 0x20f054: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x20F050u, 0x20F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F058u;
label_20f058:
    // 0x20f058: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f05c: 0x96460008  lhu         $a2, 0x8($s2)
    ctx->pc = 0x20f05cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20f060: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x20f060u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20f064: 0x14c50017  bne         $a2, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20F064u;
    {
        const bool branch_taken_0x20f064 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x20F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F064u;
        // 0x20f068: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f064) {
            ctx->pc = 0x20F0C4u;
            goto label_20f0c4;
        }
    }
    ctx->pc = 0x20F06Cu;
    // 0x20f06c: 0x9382a02c  lbu         $v0, -0x5FD4($gp)
    ctx->pc = 0x20f06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x20f070: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x20f070u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x20f074: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x20f074u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x20f078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20f078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f07c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x20f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x20f080: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20f080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f084: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x20f084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x20f088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f08c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20f08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f090: 0xc08bab8  jal         func_22EAE0
    ctx->pc = 0x20F090u;
    SET_GPR_U32(ctx, 31, 0x20F098u);
    ctx->pc = 0x20F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F090u;
    // 0x20f094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EAE0u, 0x20F090u, 0x20F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F098u;
label_20f098:
    // 0x20f098: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20f09c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x20f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x20f0a0: 0x24a42e50  addiu       $a0, $a1, 0x2E50
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11856));
    // 0x20f0a4: 0x96460008  lhu         $a2, 0x8($s2)
    ctx->pc = 0x20f0a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20f0a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f0ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f0b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f0b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20f0b8: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x20f0b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20f0bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F0BCu;
    {
        const bool branch_taken_0x20f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0BCu;
        // 0x20f0c0: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0bc) {
            ctx->pc = 0x20F0DCu;
            goto label_20f0dc;
        }
    }
    ctx->pc = 0x20F0C4u;
label_20f0c4:
    // 0x20f0c4: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x20f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20f0c8: 0x24642e50  addiu       $a0, $v1, 0x2E50
    ctx->pc = 0x20f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11856));
    // 0x20f0cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f0d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f0d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f0d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20f0dc:
    // 0x20f0dc: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x20f0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x20f0e0: 0x8f82a01c  lw          $v0, -0x5FE4($gp)
    ctx->pc = 0x20f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x20f0e4: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x20f0e8: 0x8f84a020  lw          $a0, -0x5FE0($gp)
    ctx->pc = 0x20f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x20f0ec: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x20f0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20f0f0: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x20f0f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x20f0f4: 0x24055080  addiu       $a1, $zero, 0x5080
    ctx->pc = 0x20f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x20f0f8: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x20f0f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x20f0fc: 0x28c204de  slti        $v0, $a2, 0x4DE
    ctx->pc = 0x20f0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1246) ? 1 : 0);
    // 0x20f100: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20F100u;
    {
        const bool branch_taken_0x20f100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F100u;
        // 0x20f104: 0x83280b  movn        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f100) {
            ctx->pc = 0x20F148u;
            goto label_20f148;
        }
    }
    ctx->pc = 0x20F108u;
    // 0x20f108: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x20f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x20f10c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x20f110: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x20f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x20f114: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x20f114u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20f118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f11c: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x20f11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20f120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f124: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x20f124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f128: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f12c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f134: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x20f138: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20F138u;
    SET_GPR_U32(ctx, 31, 0x20F140u);
    ctx->pc = 0x20F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F138u;
    // 0x20f13c: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20F138u, 0x20F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F140u;
label_20f140:
    // 0x20f140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20F140u;
    {
        const bool branch_taken_0x20f140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F140u;
        // 0x20f144: 0x9642000a  lhu         $v0, 0xA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f140) {
            ctx->pc = 0x20F160u;
            goto label_20f160;
        }
    }
    ctx->pc = 0x20F148u;
label_20f148:
    // 0x20f148: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20f14c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x20f14cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f150: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20f150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f154: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x20F154u;
    SET_GPR_U32(ctx, 31, 0x20F15Cu);
    ctx->pc = 0x20F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F154u;
    // 0x20f158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x20F154u, 0x20F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F15Cu;
label_20f15c:
    // 0x20f15c: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x20f15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_20f160:
    // 0x20f160: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20f164: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F164u;
    {
        const bool branch_taken_0x20f164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F164u;
        // 0x20f168: 0x26e3ffe0  addiu       $v1, $s7, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f164) {
            ctx->pc = 0x20F18Cu;
            goto label_20f18c;
        }
    }
    ctx->pc = 0x20F16Cu;
    // 0x20f16c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x20f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f170: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x20f174: 0x41023  negu        $v0, $a0
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x20f178: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x20f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x20f17c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20f180: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x20f180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x20f184: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x20f184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x20f188: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x20f188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_20f18c:
    // 0x20f18c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20f190: 0x24a299f0  addiu       $v0, $a1, -0x6610
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x20f194: 0x94a399f0  lhu         $v1, -0x6610($a1)
    ctx->pc = 0x20f194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3299F0u));
    // 0x20f198: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A04u));
    // 0x20f19c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x20f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x20f1a0: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x20f1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x20f1a4: 0x2642823  subu        $a1, $s3, $a0
    ctx->pc = 0x20f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x20f1a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x20f1ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20f1b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F1B0u;
    {
        const bool branch_taken_0x20f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1B0u;
        // 0x20f1b4: 0x32403  sra         $a0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1b0) {
            ctx->pc = 0x20F1C8u;
            goto label_20f1c8;
        }
    }
    ctx->pc = 0x20F1B8u;
    // 0x20f1b8: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x20f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20f1bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20f1c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20F1C0u;
    {
        const bool branch_taken_0x20f1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1C0u;
        // 0x20f1c4: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1c0) {
            ctx->pc = 0x20F1D0u;
            goto label_20f1d0;
        }
    }
    ctx->pc = 0x20F1C8u;
label_20f1c8:
    // 0x20f1c8: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x20f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x20f1cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20f1d0:
    // 0x20f1d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20f1d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20f1d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20f1dc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x20f1dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20f1e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20f1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20f1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20f1f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20f1f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1fc: 0xc08b3b0  jal         func_22CEC0
    ctx->pc = 0x20F1FCu;
    SET_GPR_U32(ctx, 31, 0x20F204u);
    ctx->pc = 0x20F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1FCu;
    // 0x20f200: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEC0u, 0x20F1FCu, 0x20F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F204u;
label_20f204:
    // 0x20f204: 0x21e9821  addu        $s3, $s0, $fp
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x20f208: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x20f208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x20f20c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f210: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x20f210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x20f214: 0xc08b48c  jal         func_22D230
    ctx->pc = 0x20F214u;
    SET_GPR_U32(ctx, 31, 0x20F21Cu);
    ctx->pc = 0x20F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F214u;
    // 0x20f218: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D230u, 0x20F214u, 0x20F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F21Cu;
label_20f21c:
    // 0x20f21c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f220: 0x2443a308  addiu       $v1, $v0, -0x5CF8
    ctx->pc = 0x20f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x20f224: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x20f224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x32A30Au));
    // 0x20f228: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20f228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20f22c: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x20F22Cu;
    {
        const bool branch_taken_0x20f22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F22Cu;
        // 0x20f230: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f22c) {
            ctx->pc = 0x20F020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f020;
        }
    }
    ctx->pc = 0x20F234u;
label_20f234:
    // 0x20f234: 0xc08089c  jal         func_202270
    ctx->pc = 0x20F234u;
    SET_GPR_U32(ctx, 31, 0x20F23Cu);
    ctx->pc = 0x20F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F234u;
    // 0x20f238: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x20F234u, 0x20F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F23Cu;
label_20f23c:
    // 0x20f23c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x20f23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20f240: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x20f240u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20f244: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x20f244u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20f248: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x20f248u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20f24c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x20f24cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20f250: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x20f250u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20f254: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x20f254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20f258: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x20f258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f25c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x20f25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f260: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x20f260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f264: 0x3e00008  jr          $ra
    ctx->pc = 0x20F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F264u;
        // 0x20f268: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F26Cu;
}
