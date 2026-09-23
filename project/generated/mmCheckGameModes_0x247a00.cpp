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

// Function: mmCheckGameModes
// Address: 0x247a00 - 0x247c34
void mmCheckGameModes_0x247a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCheckGameModes_0x247a00");
#endif

    switch (ctx->pc) {
        case 0x247a58u: goto label_247a58;
        case 0x247a78u: goto label_247a78;
        case 0x247ad0u: goto label_247ad0;
        case 0x247adcu: goto label_247adc;
        case 0x247ae8u: goto label_247ae8;
        case 0x247b48u: goto label_247b48;
        case 0x247c00u: goto label_247c00;
        default: break;
    }

    ctx->pc = 0x247a00u;

    // 0x247a00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x247a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x247a04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x247a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x247a08: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x247a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x247a0c: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x247a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x247a10: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x247a10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a14: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x247a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x247a18: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x247a18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a1c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x247a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x247a20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x247a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a24: 0x8f86a12c  lw          $a2, -0x5ED4($gp)
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x247a28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x247a28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a2c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x247a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x247a30: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x247a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x247a34: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x247a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x247a38: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x247a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x247a3c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x247a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x247a40: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x247a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x247a44: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x247A44u;
    {
        const bool branch_taken_0x247a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A44u;
        // 0x247a48: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a44) {
            ctx->pc = 0x247AC0u;
            goto label_247ac0;
        }
    }
    ctx->pc = 0x247A4Cu;
    // 0x247a4c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x247a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247a50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x247a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x247a54: 0x0  nop
    ctx->pc = 0x247a54u;
    // NOP
label_247a58:
    // 0x247a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a5c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x247A5Cu;
    {
        const bool branch_taken_0x247a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A5Cu;
        // 0x247a60: 0x8cc30038  lw          $v1, 0x38($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a5c) {
            ctx->pc = 0x247AACu;
            goto label_247aac;
        }
    }
    ctx->pc = 0x247A64u;
    // 0x247a64: 0x8cc50034  lw          $a1, 0x34($a2)
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x247a68: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x247A68u;
    {
        const bool branch_taken_0x247a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x247a68) {
            ctx->pc = 0x247AACu;
            goto label_247aac;
        }
    }
    ctx->pc = 0x247A70u;
    // 0x247a70: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x247a70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x247a74: 0x0  nop
    ctx->pc = 0x247a74u;
    // NOP
label_247a78:
    // 0x247a78: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x247a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x247a7c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247A7Cu;
    {
        const bool branch_taken_0x247a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x247A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A7Cu;
        // 0x247a80: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a7c) {
            ctx->pc = 0x247A94u;
            goto label_247a94;
        }
    }
    ctx->pc = 0x247A84u;
    // 0x247a84: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247A84u;
    {
        const bool branch_taken_0x247a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x247a84) {
            ctx->pc = 0x247A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247A84u;
            // 0x247a88: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A98u;
            goto label_247a98;
        }
    }
    ctx->pc = 0x247A8Cu;
    // 0x247a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247A8Cu;
    {
        const bool branch_taken_0x247a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A8Cu;
        // 0x247a90: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a8c) {
            ctx->pc = 0x247A9Cu;
            goto label_247a9c;
        }
    }
    ctx->pc = 0x247A94u;
label_247a94:
    // 0x247a94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x247a94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_247a98:
    // 0x247a98: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x247a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_247a9c:
    // 0x247a9c: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x247A9Cu;
    {
        const bool branch_taken_0x247a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x247a9c) {
            ctx->pc = 0x247AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247A9Cu;
            // 0x247aa0: 0x94a40002  lhu         $a0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247a78;
        }
    }
    ctx->pc = 0x247AA4u;
    // 0x247aa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x247AA4u;
    {
        const bool branch_taken_0x247aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AA4u;
        // 0x247aa8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aa4) {
            ctx->pc = 0x247AB0u;
            goto label_247ab0;
        }
    }
    ctx->pc = 0x247AACu;
label_247aac:
    // 0x247aac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x247aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_247ab0:
    // 0x247ab0: 0x54c0ffe9  bnel        $a2, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x247AB0u;
    {
        const bool branch_taken_0x247ab0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x247ab0) {
            ctx->pc = 0x247AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247AB0u;
            // 0x247ab4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247a58;
        }
    }
    ctx->pc = 0x247AB8u;
    // 0x247ab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247AB8u;
    {
        const bool branch_taken_0x247ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AB8u;
        // 0x247abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ab8) {
            ctx->pc = 0x247AC8u;
            goto label_247ac8;
        }
    }
    ctx->pc = 0x247AC0u;
label_247ac0:
    // 0x247ac0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x247ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247ac8:
    // 0x247ac8: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x247ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247acc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x247accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247ad0:
    // 0x247ad0: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x247ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x247ad4: 0xc092334  jal         func_248CD0
    ctx->pc = 0x247AD4u;
    SET_GPR_U32(ctx, 31, 0x247ADCu);
    ctx->pc = 0x247AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AD4u;
    // 0x247ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x247AD4u, 0x247ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247ADCu;
label_247adc:
    // 0x247adc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x247adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x247ae0: 0xc092334  jal         func_248CD0
    ctx->pc = 0x247AE0u;
    SET_GPR_U32(ctx, 31, 0x247AE8u);
    ctx->pc = 0x247AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AE0u;
    // 0x247ae4: 0x26240005  addiu       $a0, $s1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CD0u, 0x247AE0u, 0x247AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AE8u;
label_247ae8:
    // 0x247ae8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x247ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247aec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x247aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x247af0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x247af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x247af4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x247af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x247af8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x247AF8u;
    {
        const bool branch_taken_0x247af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AF8u;
        // 0x247afc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247af8) {
            ctx->pc = 0x247AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247ad0;
        }
    }
    ctx->pc = 0x247B00u;
    // 0x247b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247b04: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247B04u;
    {
        const bool branch_taken_0x247b04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x247B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B04u;
        // 0x247b08: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b04) {
            ctx->pc = 0x247B18u;
            goto label_247b18;
        }
    }
    ctx->pc = 0x247B0Cu;
    // 0x247b0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x247b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247b10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x247B10u;
    {
        const bool branch_taken_0x247b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B10u;
        // 0x247b14: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b10) {
            ctx->pc = 0x247B38u;
            goto label_247b38;
        }
    }
    ctx->pc = 0x247B18u;
label_247b18:
    // 0x247b18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247B18u;
    {
        const bool branch_taken_0x247b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B18u;
        // 0x247b1c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b18) {
            ctx->pc = 0x247B38u;
            goto label_247b38;
        }
    }
    ctx->pc = 0x247B20u;
    // 0x247b20: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x247b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x247b24: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x247b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x247b28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247b30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x247b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247b34: 0x8c9e0e50  lw          $fp, 0xE50($a0)
    ctx->pc = 0x247b34u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3664)));
label_247b38:
    // 0x247b38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x247b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b44: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x247b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247b48:
    // 0x247b48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x247b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x247b4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247B4Cu;
    {
        const bool branch_taken_0x247b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B4Cu;
        // 0x247b50: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b4c) {
            ctx->pc = 0x247B5Cu;
            goto label_247b5c;
        }
    }
    ctx->pc = 0x247B54u;
    // 0x247b54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x247b58: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x247b58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_247b5c:
    // 0x247b5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x247b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x247b60: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x247b64: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x247B64u;
    {
        const bool branch_taken_0x247b64 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x247B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B64u;
        // 0x247b68: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b64) {
            ctx->pc = 0x247B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247b48;
        }
    }
    ctx->pc = 0x247B6Cu;
    // 0x247b6c: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x247b6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x247b70: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x247B70u;
    {
        const bool branch_taken_0x247b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x247B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B70u;
        // 0x247b74: 0x32e20002  andi        $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b70) {
            ctx->pc = 0x247B88u;
            goto label_247b88;
        }
    }
    ctx->pc = 0x247B78u;
    // 0x247b78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x247b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x247b80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x247B80u;
    {
        const bool branch_taken_0x247b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B80u;
        // 0x247b84: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b80) {
            ctx->pc = 0x247BA8u;
            goto label_247ba8;
        }
    }
    ctx->pc = 0x247B88u;
label_247b88:
    // 0x247b88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247B88u;
    {
        const bool branch_taken_0x247b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B88u;
        // 0x247b8c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b88) {
            ctx->pc = 0x247BA8u;
            goto label_247ba8;
        }
    }
    ctx->pc = 0x247B90u;
    // 0x247b90: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x247b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x247b94: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x247b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x247b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247ba0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x247ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247ba4: 0x8c9e0e58  lw          $fp, 0xE58($a0)
    ctx->pc = 0x247ba4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3672)));
label_247ba8:
    // 0x247ba8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x247BA8u;
    {
        const bool branch_taken_0x247ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x247BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BA8u;
        // 0x247bac: 0x32e20010  andi        $v0, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ba8) {
            ctx->pc = 0x247BC8u;
            goto label_247bc8;
        }
    }
    ctx->pc = 0x247BB0u;
    // 0x247bb0: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x247BB0u;
    {
        const bool branch_taken_0x247bb0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x247BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BB0u;
        // 0x247bb4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bb0) {
            ctx->pc = 0x247BC4u;
            goto label_247bc4;
        }
    }
    ctx->pc = 0x247BB8u;
    // 0x247bb8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x247bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x247bbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x247BBCu;
    {
        const bool branch_taken_0x247bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BBCu;
        // 0x247bc0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bbc) {
            ctx->pc = 0x247BE8u;
            goto label_247be8;
        }
    }
    ctx->pc = 0x247BC4u;
label_247bc4:
    // 0x247bc4: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x247bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_247bc8:
    // 0x247bc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247BC8u;
    {
        const bool branch_taken_0x247bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BC8u;
        // 0x247bcc: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bc8) {
            ctx->pc = 0x247BE8u;
            goto label_247be8;
        }
    }
    ctx->pc = 0x247BD0u;
    // 0x247bd0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x247bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x247bd4: 0x24632c18  addiu       $v1, $v1, 0x2C18
    ctx->pc = 0x247bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x247bd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247bdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x247be0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x247be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247be4: 0x8c9e0e54  lw          $fp, 0xE54($a0)
    ctx->pc = 0x247be4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3668)));
label_247be8:
    // 0x247be8: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x247BE8u;
    {
        const bool branch_taken_0x247be8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x247BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BE8u;
        // 0x247bec: 0x3c056464  lui         $a1, 0x6464 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25700 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247be8) {
            ctx->pc = 0x247C00u;
            goto label_247c00;
        }
    }
    ctx->pc = 0x247BF0u;
    // 0x247bf0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x247bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bf4: 0x34a5647f  ori         $a1, $a1, 0x647F
    ctx->pc = 0x247bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25727);
    // 0x247bf8: 0xc0932a0  jal         func_24CA80
    ctx->pc = 0x247BF8u;
    SET_GPR_U32(ctx, 31, 0x247C00u);
    ctx->pc = 0x247BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BF8u;
    // 0x247bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA80u, 0x247BF8u, 0x247C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C00u;
label_247c00:
    // 0x247c00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247c04: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x247c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x247c08: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x247c08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x247c0c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x247c0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x247c10: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x247c10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x247c14: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x247c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x247c18: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x247c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247c1c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x247c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247c20: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x247c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247c24: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x247c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247c28: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x247c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x247C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C2Cu;
        // 0x247c30: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247C34u;
}
