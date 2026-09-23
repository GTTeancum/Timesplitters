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

// Function: hudMessageDraw
// Address: 0x2b0a30 - 0x2b0e80
void hudMessageDraw_0x2b0a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudMessageDraw_0x2b0a30");
#endif

    switch (ctx->pc) {
        case 0x2b0a88u: goto label_2b0a88;
        case 0x2b0a90u: goto label_2b0a90;
        case 0x2b0aa4u: goto label_2b0aa4;
        case 0x2b0ad0u: goto label_2b0ad0;
        case 0x2b0b84u: goto label_2b0b84;
        case 0x2b0b94u: goto label_2b0b94;
        case 0x2b0ba0u: goto label_2b0ba0;
        case 0x2b0bb0u: goto label_2b0bb0;
        case 0x2b0bbcu: goto label_2b0bbc;
        case 0x2b0bc4u: goto label_2b0bc4;
        case 0x2b0c3cu: goto label_2b0c3c;
        case 0x2b0c4cu: goto label_2b0c4c;
        case 0x2b0c58u: goto label_2b0c58;
        case 0x2b0c68u: goto label_2b0c68;
        case 0x2b0c74u: goto label_2b0c74;
        case 0x2b0c7cu: goto label_2b0c7c;
        case 0x2b0cc0u: goto label_2b0cc0;
        case 0x2b0cd0u: goto label_2b0cd0;
        case 0x2b0ce0u: goto label_2b0ce0;
        case 0x2b0d00u: goto label_2b0d00;
        case 0x2b0d84u: goto label_2b0d84;
        case 0x2b0db8u: goto label_2b0db8;
        case 0x2b0dc4u: goto label_2b0dc4;
        case 0x2b0e08u: goto label_2b0e08;
        case 0x2b0e1cu: goto label_2b0e1c;
        default: break;
    }

    ctx->pc = 0x2b0a30u;

    // 0x2b0a30: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x2b0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x2b0a34: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b0a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b0a38: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b0a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b0a3c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b0a40: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b0a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b0a44: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x2b0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x2b0a48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b0a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b0a4c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b0a50: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b0a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b0a54: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2b0a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0a58: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b0a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b0a5c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b0a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b0a60: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b0a64: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b0a68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b0a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b0a6c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b0a70: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x2b0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2b0a74: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2B0A74u;
    {
        const bool branch_taken_0x2b0a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A74u;
        // 0x2b0a78: 0x2616011c  addiu       $s6, $s0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a74) {
            ctx->pc = 0x2B0E50u;
            goto label_2b0e50;
        }
    }
    ctx->pc = 0x2B0A7Cu;
    // 0x2b0a7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b0a80: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B0A80u;
    SET_GPR_U32(ctx, 31, 0x2B0A88u);
    ctx->pc = 0x2B0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A80u;
    // 0x2b0a84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B0A80u, 0x2B0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A88u;
label_2b0a88:
    // 0x2b0a88: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2B0A88u;
    SET_GPR_U32(ctx, 31, 0x2B0A90u);
    ctx->pc = 0x2B0A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A88u;
    // 0x2b0a8c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2B0A88u, 0x2B0A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A90u;
label_2b0a90:
    // 0x2b0a90: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b0a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b0a94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b0a98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0a9c: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B0A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B0AA4u);
    ctx->pc = 0x2B0AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A9Cu;
    // 0x2b0aa0: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B0A9Cu, 0x2B0AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AA4u;
label_2b0aa4:
    // 0x2b0aa4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b0aa8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b0aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0aac: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x2b0aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2b0ab0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B0AB0u;
    {
        const bool branch_taken_0x2b0ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AB0u;
        // 0x2b0ab4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ab0) {
            ctx->pc = 0x2B0AF8u;
            goto label_2b0af8;
        }
    }
    ctx->pc = 0x2B0AB8u;
    // 0x2b0ab8: 0x8e0a015c  lw          $t2, 0x15C($s0)
    ctx->pc = 0x2b0ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2b0abc: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2b0abcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x2b0ac0: 0x93869ab5  lbu         $a2, -0x654B($gp)
    ctx->pc = 0x2b0ac0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b0ac4: 0x8f889a9c  lw          $t0, -0x6564($gp)
    ctx->pc = 0x2b0ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b0ac8: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x2b0ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2b0acc: 0x0  nop
    ctx->pc = 0x2b0accu;
    // NOP
label_2b0ad0:
    // 0x2b0ad0: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x2b0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2b0ad4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b0ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0ad8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b0adc: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x2b0adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2b0ae0: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x2b0ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x2b0ae4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2b0ae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0ae8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B0AE8u;
    {
        const bool branch_taken_0x2b0ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AE8u;
        // 0x2b0aec: 0xa2480a  movz        $t1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ae8) {
            ctx->pc = 0x2B0AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0ad0;
        }
    }
    ctx->pc = 0x2B0AF0u;
    // 0x2b0af0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0AF0u;
    {
        const bool branch_taken_0x2b0af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AF0u;
        // 0x2b0af4: 0x266299f0  addiu       $v0, $s3, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0af0) {
            ctx->pc = 0x2B0B0Cu;
            goto label_2b0b0c;
        }
    }
    ctx->pc = 0x2B0AF8u;
label_2b0af8:
    // 0x2b0af8: 0x8e0a015c  lw          $t2, 0x15C($s0)
    ctx->pc = 0x2b0af8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2b0afc: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2b0afcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x2b0b00: 0x93869ab5  lbu         $a2, -0x654B($gp)
    ctx->pc = 0x2b0b00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b0b04: 0x8f889a9c  lw          $t0, -0x6564($gp)
    ctx->pc = 0x2b0b04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b0b08: 0x266299f0  addiu       $v0, $s3, -0x6610
    ctx->pc = 0x2b0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
label_2b0b0c:
    // 0x2b0b0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b0b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b0b10: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2b0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b0b14: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x2b0b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b0b18: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2b0b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b0b1c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2b0b1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0b20: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b0b24: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2b0b24u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2b0b28: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2b0b28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2b0b2c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B2Cu;
    {
        const bool branch_taken_0x2b0b2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B2Cu;
        // 0x2b0b30: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b2c) {
            ctx->pc = 0x2B0B40u;
            goto label_2b0b40;
        }
    }
    ctx->pc = 0x2B0B34u;
    // 0x2b0b34: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x2b0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2b0b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0B38u;
    {
        const bool branch_taken_0x2b0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B38u;
        // 0x2b0b3c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b38) {
            ctx->pc = 0x2B0B44u;
            goto label_2b0b44;
        }
    }
    ctx->pc = 0x2B0B40u;
label_2b0b40:
    // 0x2b0b40: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x2b0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_2b0b44:
    // 0x2b0b44: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x2b0b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b0b48: 0xa2a023  subu        $s4, $a1, $v0
    ctx->pc = 0x2b0b48u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b0b4c: 0x2942001e  slti        $v0, $t2, 0x1E
    ctx->pc = 0x2b0b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b0b50: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B0B50u;
    {
        const bool branch_taken_0x2b0b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B50u;
        // 0x2b0b54: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b50) {
            ctx->pc = 0x2B0C00u;
            goto label_2b0c00;
        }
    }
    ctx->pc = 0x2B0B58u;
    // 0x2b0b58: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2b0b58u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0b60: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0b64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b0b68: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x2b0b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2b0b6c: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x2b0b6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x2b0b70: 0x0  nop
    ctx->pc = 0x2b0b70u;
    // NOP
    // 0x2b0b74: 0x0  nop
    ctx->pc = 0x2b0b74u;
    // NOP
    // 0x2b0b78: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2b0b78u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x2b0b7c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B0B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B84u);
    ctx->pc = 0x2B0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B7Cu;
    // 0x2b0b80: 0x26105c60  addiu       $s0, $s0, 0x5C60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B0B7Cu, 0x2B0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B84u;
label_2b0b84:
    // 0x2b0b84: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2b0b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2b0b88: 0xdc259a18  ld          $a1, -0x65E8($at)
    ctx->pc = 0x2b0b88u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9A18u));
    // 0x2b0b8c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B94u);
    ctx->pc = 0x2B0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B8Cu;
    // 0x2b0b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0B8Cu, 0x2B0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B94u;
label_2b0b94:
    // 0x2b0b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b98: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0B98u;
    SET_GPR_U32(ctx, 31, 0x2B0BA0u);
    ctx->pc = 0x2B0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B98u;
    // 0x2b0b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0B98u, 0x2B0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BA0u;
label_2b0ba0:
    // 0x2b0ba0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2b0ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2b0ba4: 0xdc259a20  ld          $a1, -0x65E0($at)
    ctx->pc = 0x2b0ba4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9A20u));
    // 0x2b0ba8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0BA8u;
    SET_GPR_U32(ctx, 31, 0x2B0BB0u);
    ctx->pc = 0x2B0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BA8u;
    // 0x2b0bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0BA8u, 0x2B0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BB0u;
label_2b0bb0:
    // 0x2b0bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0bb4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2B0BB4u;
    SET_GPR_U32(ctx, 31, 0x2B0BBCu);
    ctx->pc = 0x2B0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BB4u;
    // 0x2b0bb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2B0BB4u, 0x2B0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BBCu;
label_2b0bbc:
    // 0x2b0bbc: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2B0BBCu;
    SET_GPR_U32(ctx, 31, 0x2B0BC4u);
    ctx->pc = 0x2B0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BBCu;
    // 0x2b0bc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2B0BBCu, 0x2B0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BC4u;
label_2b0bc4:
    // 0x2b0bc4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b0bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b0bc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b0bcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0bd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0bd4: 0x266399f0  addiu       $v1, $s3, -0x6610
    ctx->pc = 0x2b0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x2b0bd8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b0bdc: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2b0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0be0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b0be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0be4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0be8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b0be8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b0bec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b0becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0bf0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0bf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b0bf4: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x2b0bf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x2b0bf8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2B0BF8u;
    {
        const bool branch_taken_0x2b0bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0bf8) {
            ctx->pc = 0x2B0CB8u;
            goto label_2b0cb8;
        }
    }
    ctx->pc = 0x2B0C00u;
label_2b0c00:
    // 0x2b0c00: 0x2544ff6a  addiu       $a0, $t2, -0x96
    ctx->pc = 0x2b0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967146));
    // 0x2b0c04: 0x2c82001e  sltiu       $v0, $a0, 0x1E
    ctx->pc = 0x2b0c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b0c08: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B0C08u;
    {
        const bool branch_taken_0x2b0c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C08u;
        // 0x2b0c0c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c08) {
            ctx->pc = 0x2B0CB8u;
            goto label_2b0cb8;
        }
    }
    ctx->pc = 0x2B0C10u;
    // 0x2b0c10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b0c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0c18: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0c1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b0c20: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x2b0c20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2b0c24: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x2b0c24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x2b0c28: 0x0  nop
    ctx->pc = 0x2b0c28u;
    // NOP
    // 0x2b0c2c: 0x0  nop
    ctx->pc = 0x2b0c2cu;
    // NOP
    // 0x2b0c30: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2b0c30u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x2b0c34: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B0C34u;
    SET_GPR_U32(ctx, 31, 0x2B0C3Cu);
    ctx->pc = 0x2B0C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C34u;
    // 0x2b0c38: 0x26105c60  addiu       $s0, $s0, 0x5C60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B0C34u, 0x2B0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C3Cu;
label_2b0c3c:
    // 0x2b0c3c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2b0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2b0c40: 0xdc259a28  ld          $a1, -0x65D8($at)
    ctx->pc = 0x2b0c40u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9A28u));
    // 0x2b0c44: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0C44u;
    SET_GPR_U32(ctx, 31, 0x2B0C4Cu);
    ctx->pc = 0x2B0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C44u;
    // 0x2b0c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0C44u, 0x2B0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C4Cu;
label_2b0c4c:
    // 0x2b0c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c50: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0C50u;
    SET_GPR_U32(ctx, 31, 0x2B0C58u);
    ctx->pc = 0x2B0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C50u;
    // 0x2b0c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0C50u, 0x2B0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C58u;
label_2b0c58:
    // 0x2b0c58: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2b0c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2b0c5c: 0xdc259a30  ld          $a1, -0x65D0($at)
    ctx->pc = 0x2b0c5cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9A30u));
    // 0x2b0c60: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0C60u;
    SET_GPR_U32(ctx, 31, 0x2B0C68u);
    ctx->pc = 0x2B0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C60u;
    // 0x2b0c64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0C60u, 0x2B0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C68u;
label_2b0c68:
    // 0x2b0c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c6c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2B0C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B0C74u);
    ctx->pc = 0x2B0C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C6Cu;
    // 0x2b0c70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2B0C6Cu, 0x2B0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C74u;
label_2b0c74:
    // 0x2b0c74: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2B0C74u;
    SET_GPR_U32(ctx, 31, 0x2B0C7Cu);
    ctx->pc = 0x2B0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C74u;
    // 0x2b0c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2B0C74u, 0x2B0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C7Cu;
label_2b0c7c:
    // 0x2b0c7c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2b0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2b0c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b0c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b0c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0c88: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2b0c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2b0c8c: 0x266399f0  addiu       $v1, $s3, -0x6610
    ctx->pc = 0x2b0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x2b0c90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0c94: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2b0c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0c98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b0c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0c9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b0ca0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b0ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0ca4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b0ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b0ca8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b0ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b0cac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b0cacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b0cb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0cb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0cb4: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x2b0cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_2b0cb8:
    // 0x2b0cb8: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2B0CB8u;
    SET_GPR_U32(ctx, 31, 0x2B0CC0u);
    ctx->pc = 0x2B0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CB8u;
    // 0x2b0cbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2B0CB8u, 0x2B0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CC0u;
label_2b0cc0:
    // 0x2b0cc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b0cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0cc4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b0cc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0cc8: 0x2d28821  addu        $s1, $s6, $s2
    ctx->pc = 0x2b0cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x2b0ccc: 0x0  nop
    ctx->pc = 0x2b0cccu;
    // NOP
label_2b0cd0:
    // 0x2b0cd0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2b0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b0cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0cd8: 0xc0b9722  jal         func_2E5C88
    ctx->pc = 0x2B0CD8u;
    SET_GPR_U32(ctx, 31, 0x2B0CE0u);
    ctx->pc = 0x2B0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CD8u;
    // 0x2b0cdc: 0x3c106480  lui         $s0, 0x6480 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)25728 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5C88u, 0x2B0CD8u, 0x2B0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CE0u;
label_2b0ce0:
    // 0x2b0ce0: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x2b0ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    // 0x2b0ce4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b0ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ce8: 0x36106480  ori         $s0, $s0, 0x6480
    ctx->pc = 0x2b0ce8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)25728);
    // 0x2b0cec: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x2b0cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2b0cf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0CF0u;
    {
        const bool branch_taken_0x2b0cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CF0u;
        // 0x2b0cf4: 0x36730060  ori         $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cf0) {
            ctx->pc = 0x2B0D00u;
            goto label_2b0d00;
        }
    }
    ctx->pc = 0x2B0CF8u;
    // 0x2b0cf8: 0xc0b8690  jal         func_2E1A40
    ctx->pc = 0x2B0CF8u;
    SET_GPR_U32(ctx, 31, 0x2B0D00u);
    ctx->pc = 0x2B0CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CF8u;
    // 0x2b0cfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1A40u, 0x2B0CF8u, 0x2B0D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D00u;
label_2b0d00:
    // 0x2b0d00: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B0D00u;
    {
        const bool branch_taken_0x2b0d00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d00) {
            ctx->pc = 0x2B0D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D00u;
            // 0x2b0d04: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D08u;
            goto label_2b0d08;
        }
    }
    ctx->pc = 0x2B0D08u;
label_2b0d08:
    // 0x2b0d08: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2b0d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0d0c: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2b0d10: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0D10u;
    {
        const bool branch_taken_0x2b0d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D10u;
        // 0x2b0d14: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d10) {
            ctx->pc = 0x2B0D2Cu;
            goto label_2b0d2c;
        }
    }
    ctx->pc = 0x2B0D18u;
    // 0x2b0d18: 0x3c104078  lui         $s0, 0x4078
    ctx->pc = 0x2b0d18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16504 << 16));
    // 0x2b0d1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b0d20: 0x36107880  ori         $s0, $s0, 0x7880
    ctx->pc = 0x2b0d20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30848);
    // 0x2b0d24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B0D24u;
    {
        const bool branch_taken_0x2b0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D24u;
        // 0x2b0d28: 0x24135080  addiu       $s3, $zero, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d24) {
            ctx->pc = 0x2B0D6Cu;
            goto label_2b0d6c;
        }
    }
    ctx->pc = 0x2B0D2Cu;
label_2b0d2c:
    // 0x2b0d2c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B0D2Cu;
    {
        const bool branch_taken_0x2b0d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0d2c) {
            ctx->pc = 0x2B0D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D2Cu;
            // 0x2b0d30: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D74u;
            goto label_2b0d74;
        }
    }
    ctx->pc = 0x2B0D34u;
    // 0x2b0d34: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x2b0d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b0d38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0d3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0D3Cu;
    {
        const bool branch_taken_0x2b0d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D3Cu;
        // 0x2b0d40: 0x8f829a9c  lw          $v0, -0x6564($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d3c) {
            ctx->pc = 0x2B0D54u;
            goto label_2b0d54;
        }
    }
    ctx->pc = 0x2B0D44u;
    // 0x2b0d44: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b0d48: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2b0d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2b0d4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0D4Cu;
    {
        const bool branch_taken_0x2b0d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D4Cu;
        // 0x2b0d50: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d4c) {
            ctx->pc = 0x2B0D5Cu;
            goto label_2b0d5c;
        }
    }
    ctx->pc = 0x2B0D54u;
label_2b0d54:
    // 0x2b0d54: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b0d58: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2b0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2b0d5c:
    // 0x2b0d5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b0d60: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b0d60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b0d64: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2b0d64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2b0d68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b0d6c:
    // 0x2b0d6c: 0x2d28821  addu        $s1, $s6, $s2
    ctx->pc = 0x2b0d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x2b0d70: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2b0d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0d74:
    // 0x2b0d74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B0D74u;
    {
        const bool branch_taken_0x2b0d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D74u;
        // 0x2b0d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d74) {
            ctx->pc = 0x2B0DBCu;
            goto label_2b0dbc;
        }
    }
    ctx->pc = 0x2B0D7Cu;
    // 0x2b0d7c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2B0D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D84u);
    ctx->pc = 0x2B0D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D7Cu;
    // 0x2b0d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2B0D7Cu, 0x2B0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D84u;
label_2b0d84:
    // 0x2b0d84: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2b0d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2b0d88: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2b0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2b0d8c: 0x24a599f0  addiu       $a1, $a1, -0x6610
    ctx->pc = 0x2b0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x2b0d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0d94: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b0d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0d98: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b0d98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b0d9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b0d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0da0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2b0da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0da4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2b0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b0da8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b0da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0dac: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x2b0dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2b0db0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x2B0DB0u;
    SET_GPR_U32(ctx, 31, 0x2B0DB8u);
    ctx->pc = 0x2B0DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DB0u;
    // 0x2b0db4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x2B0DB0u, 0x2B0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DB8u;
label_2b0db8:
    // 0x2b0db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dbc:
    // 0x2b0dbc: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2B0DBCu;
    SET_GPR_U32(ctx, 31, 0x2B0DC4u);
    ctx->pc = 0x2B0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DBCu;
    // 0x2b0dc0: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2B0DBCu, 0x2B0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DC4u;
label_2b0dc4:
    // 0x2b0dc4: 0x93839ab5  lbu         $v1, -0x654B($gp)
    ctx->pc = 0x2b0dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x2b0dc8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b0dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b0dcc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0DCCu;
    {
        const bool branch_taken_0x2b0dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DCCu;
        // 0x2b0dd0: 0x2029021  addu        $s2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0dcc) {
            ctx->pc = 0x2B0DE8u;
            goto label_2b0de8;
        }
    }
    ctx->pc = 0x2B0DD4u;
    // 0x2b0dd4: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x2b0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b0dd8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b0ddc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b0ddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b0de0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0DE0u;
    {
        const bool branch_taken_0x2b0de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DE0u;
        // 0x2b0de4: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0de0) {
            ctx->pc = 0x2B0DF4u;
            goto label_2b0df4;
        }
    }
    ctx->pc = 0x2B0DE8u;
label_2b0de8:
    // 0x2b0de8: 0x8f829a9c  lw          $v0, -0x6564($gp)
    ctx->pc = 0x2b0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2b0dec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2b0decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b0df0: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2b0df0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2b0df4:
    // 0x2b0df4: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0DF4u;
    {
        const bool branch_taken_0x2b0df4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DF4u;
        // 0x2b0df8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0df4) {
            ctx->pc = 0x2B0E00u;
            goto label_2b0e00;
        }
    }
    ctx->pc = 0x2B0DFCu;
    // 0x2b0dfc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2b0dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b0e00:
    // 0x2b0e00: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x2B0E00u;
    SET_GPR_U32(ctx, 31, 0x2B0E08u);
    ctx->pc = 0x2B0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E00u;
    // 0x2b0e04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x2B0E00u, 0x2B0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E08u;
label_2b0e08:
    // 0x2b0e08: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b0e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0e0c: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2B0E0Cu;
    {
        const bool branch_taken_0x2b0e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E0Cu;
        // 0x2b0e10: 0x2d28821  addu        $s1, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e0c) {
            ctx->pc = 0x2B0CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0cd0;
        }
    }
    ctx->pc = 0x2B0E14u;
    // 0x2b0e14: 0xc08089c  jal         func_202270
    ctx->pc = 0x2B0E14u;
    SET_GPR_U32(ctx, 31, 0x2B0E1Cu);
    ctx->pc = 0x2B0E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E14u;
    // 0x2b0e18: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2B0E14u, 0x2B0E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E1Cu;
label_2b0e1c:
    // 0x2b0e1c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2b0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b0e20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b0e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b0e24: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b0e24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b0e28: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b0e28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b0e2c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b0e2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b0e30: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b0e30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0e34: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b0e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0e38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b0e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0e3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b0e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0e40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b0e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0e44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b0e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0e48: 0x80adf7c  j           func_2B7DF0
    ctx->pc = 0x2B0E48u;
    ctx->pc = 0x2B0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E48u;
    // 0x2b0e4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    dlSetDitherMatrix_0x2b7df0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B0E50u;
label_2b0e50:
    // 0x2b0e50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b0e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b0e54: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b0e54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b0e58: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b0e58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b0e5c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b0e5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b0e60: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b0e60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0e64: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b0e64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0e68: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b0e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0e6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b0e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0e70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b0e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0e74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b0e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E78u;
        // 0x2b0e7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0E80u;
}
