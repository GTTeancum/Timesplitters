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

// Function: waterPropNew
// Address: 0x278aa0 - 0x278bac
void waterPropNew_0x278aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waterPropNew_0x278aa0");
#endif

    switch (ctx->pc) {
        case 0x278ac0u: goto label_278ac0;
        case 0x278b30u: goto label_278b30;
        case 0x278b48u: goto label_278b48;
        case 0x278b58u: goto label_278b58;
        case 0x278b80u: goto label_278b80;
        case 0x278b8cu: goto label_278b8c;
        default: break;
    }

    ctx->pc = 0x278aa0u;

    // 0x278aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278aac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x278aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x278ab0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x278ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x278ab4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x278ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x278ab8: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x278AB8u;
    SET_GPR_U32(ctx, 31, 0x278AC0u);
    ctx->pc = 0x278ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AB8u;
    // 0x278abc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x278AB8u, 0x278AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AC0u;
label_278ac0:
    // 0x278ac0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x278ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ac4: 0x2404013c  addiu       $a0, $zero, 0x13C
    ctx->pc = 0x278ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x278ac8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x278ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x278acc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x278accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x278ad0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278ad4: 0x1204000f  beq         $s0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x278AD4u;
    {
        const bool branch_taken_0x278ad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x278AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AD4u;
        // 0x278ad8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ad4) {
            ctx->pc = 0x278B14u;
            goto label_278b14;
        }
    }
    ctx->pc = 0x278ADCu;
    // 0x278adc: 0x2a02013d  slti        $v0, $s0, 0x13D
    ctx->pc = 0x278adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)317) ? 1 : 0);
    // 0x278ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278AE0u;
    {
        const bool branch_taken_0x278ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AE0u;
        // 0x278ae4: 0x2402013b  addiu       $v0, $zero, 0x13B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ae0) {
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x278AE8u;
    // 0x278ae8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x278AE8u;
    {
        const bool branch_taken_0x278ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x278AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AE8u;
        // 0x278aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ae8) {
            ctx->pc = 0x278B0Cu;
            goto label_278b0c;
        }
    }
    ctx->pc = 0x278AF0u;
    // 0x278af0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x278AF0u;
    {
        const bool branch_taken_0x278af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278af0) {
            ctx->pc = 0x278B28u;
            goto label_278b28;
        }
    }
    ctx->pc = 0x278AF8u;
label_278af8:
    // 0x278af8: 0x2402013d  addiu       $v0, $zero, 0x13D
    ctx->pc = 0x278af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
    // 0x278afc: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278AFCu;
    {
        const bool branch_taken_0x278afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x278B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AFCu;
        // 0x278b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278afc) {
            ctx->pc = 0x278B1Cu;
            goto label_278b1c;
        }
    }
    ctx->pc = 0x278B04u;
    // 0x278b04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278B04u;
    {
        const bool branch_taken_0x278b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b04) {
            ctx->pc = 0x278B28u;
            goto label_278b28;
        }
    }
    ctx->pc = 0x278B0Cu;
label_278b0c:
    // 0x278b0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278B0Cu;
    {
        const bool branch_taken_0x278b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B0Cu;
        // 0x278b10: 0x240200d1  addiu       $v0, $zero, 0xD1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b0c) {
            ctx->pc = 0x278B20u;
            goto label_278b20;
        }
    }
    ctx->pc = 0x278B14u;
label_278b14:
    // 0x278b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278B14u;
    {
        const bool branch_taken_0x278b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B14u;
        // 0x278b18: 0x240200d1  addiu       $v0, $zero, 0xD1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b14) {
            ctx->pc = 0x278B20u;
            goto label_278b20;
        }
    }
    ctx->pc = 0x278B1Cu;
label_278b1c:
    // 0x278b1c: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x278b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_278b20:
    // 0x278b20: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x278b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x278b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278b28:
    // 0x278b28: 0xc09d0f2  jal         func_2743C8
    ctx->pc = 0x278B28u;
    SET_GPR_U32(ctx, 31, 0x278B30u);
    ctx->pc = 0x278B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B28u;
    // 0x278b2c: 0x2413000f  addiu       $s3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743C8u, 0x278B28u, 0x278B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B30u;
label_278b30:
    // 0x278b30: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x278b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x278b34: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x278b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x278b38: 0xaf80b188  sw          $zero, -0x4E78($gp)
    ctx->pc = 0x278b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947208), GPR_U32(ctx, 0));
    // 0x278b3c: 0x245036e8  addiu       $s0, $v0, 0x36E8
    ctx->pc = 0x278b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14056));
    // 0x278b40: 0xaf80b18c  sw          $zero, -0x4E74($gp)
    ctx->pc = 0x278b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947212), GPR_U32(ctx, 0));
    // 0x278b44: 0x24721868  addiu       $s2, $v1, 0x1868
    ctx->pc = 0x278b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6248));
label_278b48:
    // 0x278b48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x278b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x278b4c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x278b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x278b50: 0xc08718c  jal         func_21C630
    ctx->pc = 0x278B50u;
    SET_GPR_U32(ctx, 31, 0x278B58u);
    ctx->pc = 0x278B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B50u;
    // 0x278b54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x278B50u, 0x278B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B58u;
label_278b58:
    // 0x278b58: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x278b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x278b5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x278b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x278b60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x278b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x278b64: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x278b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x278b68: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x278b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x278b6c: 0x661fff6  bgez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x278B6Cu;
    {
        const bool branch_taken_0x278b6c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x278B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B6Cu;
        // 0x278b70: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b6c) {
            ctx->pc = 0x278B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278b48;
        }
    }
    ctx->pc = 0x278B74u;
    // 0x278b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b78: 0xc09e100  jal         func_278400
    ctx->pc = 0x278B78u;
    SET_GPR_U32(ctx, 31, 0x278B80u);
    ctx->pc = 0x278B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B78u;
    // 0x278b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278400u, 0x278B78u, 0x278B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B80u;
label_278b80:
    // 0x278b80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b84: 0xc09e100  jal         func_278400
    ctx->pc = 0x278B84u;
    SET_GPR_U32(ctx, 31, 0x278B8Cu);
    ctx->pc = 0x278B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B84u;
    // 0x278b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278400u, 0x278B84u, 0x278B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B8Cu;
label_278b8c:
    // 0x278b8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x278b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x278b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278b94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x278b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278b98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x278b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278b9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x278b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x278BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BA4u;
        // 0x278ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278BACu;
}
