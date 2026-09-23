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

// Function: mmCenterFlyingObj
// Address: 0x245ba8 - 0x245c80
void mmCenterFlyingObj_0x245ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCenterFlyingObj_0x245ba8");
#endif

    switch (ctx->pc) {
        case 0x245bd8u: goto label_245bd8;
        case 0x245c58u: goto label_245c58;
        default: break;
    }

    ctx->pc = 0x245ba8u;

    // 0x245ba8: 0x8f8ea0f8  lw          $t6, -0x5F08($gp)
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245bac: 0x11c00032  beqz        $t6, . + 4 + (0x32 << 2)
    ctx->pc = 0x245BACu;
    {
        const bool branch_taken_0x245bac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BACu;
        // 0x245bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bac) {
            ctx->pc = 0x245C78u;
            goto label_245c78;
        }
    }
    ctx->pc = 0x245BB4u;
    // 0x245bb4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x245bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x245bb8: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x245BB8u;
    {
        const bool branch_taken_0x245bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x245BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB8u;
        // 0x245bbc: 0x3c0b7fff  lui         $t3, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bb8) {
            ctx->pc = 0x245C78u;
            goto label_245c78;
        }
    }
    ctx->pc = 0x245BC0u;
    // 0x245bc0: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x245bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x245bc4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x245bc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x245bc8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x245bc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x245bcc: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x245bccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x245bd0: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x245bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x245bd4: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x245bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_245bd8:
    // 0x245bd8: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x245bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x245bdc: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x245bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x245be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245be4: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x245be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x245be8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x245be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x245bec: 0xaa302a  slt         $a2, $a1, $t2
    ctx->pc = 0x245becu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x245bf0: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x245bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x245bf4: 0x8b402a  slt         $t0, $a0, $t3
    ctx->pc = 0x245bf4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x245bf8: 0xa6500b  movn        $t2, $a1, $a2
    ctx->pc = 0x245bf8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x245bfc: 0x88580b  movn        $t3, $a0, $t0
    ctx->pc = 0x245bfcu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
    // 0x245c00: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x245c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x245c04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x245c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x245c08: 0x31d40  sll         $v1, $v1, 21
    ctx->pc = 0x245c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
    // 0x245c0c: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x245c10: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x245c14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x245c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x245c18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245c1c: 0x1a4182a  slt         $v1, $t5, $a0
    ctx->pc = 0x245c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x245c20: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x245c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245c24: 0x83680b  movn        $t5, $a0, $v1
    ctx->pc = 0x245c24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 4));
    // 0x245c28: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x245C28u;
    {
        const bool branch_taken_0x245c28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x245C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C28u;
        // 0x245c2c: 0xa2600b  movn        $t4, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c28) {
            ctx->pc = 0x245BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245bd8;
        }
    }
    ctx->pc = 0x245C30u;
    // 0x245c30: 0x1ab1821  addu        $v1, $t5, $t3
    ctx->pc = 0x245c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x245c34: 0x3c04ffe0  lui         $a0, 0xFFE0
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65504 << 16));
    // 0x245c38: 0x18a1021  addu        $v0, $t4, $t2
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x245c3c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x245c40: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x245c40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x245c44: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x245c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x245c48: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x245c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245c4c: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x245C4Cu;
    {
        const bool branch_taken_0x245c4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C4Cu;
        // 0x245c50: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c4c) {
            ctx->pc = 0x245C78u;
            goto label_245c78;
        }
    }
    ctx->pc = 0x245C54u;
    // 0x245c54: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x245c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_245c58:
    // 0x245c58: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x245c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x245c5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x245c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245c60: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x245c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x245c64: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x245c64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x245c68: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x245c68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x245c6c: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x245c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x245c70: 0x5520fff9  bnel        $t1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x245C70u;
    {
        const bool branch_taken_0x245c70 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c70) {
            ctx->pc = 0x245C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C70u;
            // 0x245c74: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245c58;
        }
    }
    ctx->pc = 0x245C78u;
label_245c78:
    // 0x245c78: 0x3e00008  jr          $ra
    ctx->pc = 0x245C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245C80u;
}
