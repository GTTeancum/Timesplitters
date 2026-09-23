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

// Function: matrixAlign
// Address: 0x262f80 - 0x263078
void matrixAlign_0x262f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixAlign_0x262f80");
#endif

    switch (ctx->pc) {
        case 0x262fa8u: goto label_262fa8;
        case 0x262ff8u: goto label_262ff8;
        case 0x263050u: goto label_263050;
        default: break;
    }

    ctx->pc = 0x262f80u;

label_262f80:
    // 0x262f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x262f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x262f84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x262f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262f88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262f8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x262f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x262f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262f94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x262f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x262f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x262f9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x262f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262fa4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_262fa8:
    // 0x262fa8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x262fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x262fac: 0xc42818  mult        $a1, $a2, $a0
    ctx->pc = 0x262facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x262fb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x262fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262fb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262fb8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x262fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262fbc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x262fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262fc0: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x262fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x262fc4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262fc8: 0x10660018  beq         $v1, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x262FC8u;
    {
        const bool branch_taken_0x262fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x262FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FC8u;
        // 0x262fcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fc8) {
            ctx->pc = 0x26302Cu;
            goto label_26302c;
        }
    }
    ctx->pc = 0x262FD0u;
    // 0x262fd0: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x262FD0u;
    {
        const bool branch_taken_0x262fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x262fd0) {
            ctx->pc = 0x262FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262FD0u;
            // 0x262fd4: 0x82060003  lb          $a2, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263030u;
            goto label_263030;
        }
    }
    ctx->pc = 0x262FD8u;
    // 0x262fd8: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x262fd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x262fdc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x262fe0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x262fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x262fe4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x262fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x262fe8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x262fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x262fec: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x262fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262ff0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x262FF0u;
    SET_GPR_U32(ctx, 31, 0x262FF8u);
    ctx->pc = 0x262FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262FF0u;
    // 0x262ff4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x262FF0u, 0x262FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262FF8u;
label_262ff8:
    // 0x262ff8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x262ff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262ffc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x262FFCu;
    {
        const bool branch_taken_0x262ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ffc) {
            ctx->pc = 0x263000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262FFCu;
            // 0x263000: 0x82060003  lb          $a2, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263030u;
            goto label_263030;
        }
    }
    ctx->pc = 0x263004u;
    // 0x263004: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x263004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x263008: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x263008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26300c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26300cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263010: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x263010u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x263014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263018: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26301c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26301cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x263020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x263020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x263024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x263024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263028: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x263028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_26302c:
    // 0x26302c: 0x82060003  lb          $a2, 0x3($s0)
    ctx->pc = 0x26302cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_263030:
    // 0x263030: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x263030u;
    {
        const bool branch_taken_0x263030 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x263034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263030u;
        // 0x263034: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263030) {
            ctx->pc = 0x263050u;
            goto label_263050;
        }
    }
    ctx->pc = 0x263038u;
    // 0x263038: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x263038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26303c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26303Cu;
    {
        const bool branch_taken_0x26303c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26303Cu;
        // 0x263040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26303c) {
            ctx->pc = 0x263050u;
            goto label_263050;
        }
    }
    ctx->pc = 0x263044u;
    // 0x263044: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x263044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263048: 0xc098be0  jal         func_262F80
    ctx->pc = 0x263048u;
    SET_GPR_U32(ctx, 31, 0x263050u);
    ctx->pc = 0x26304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263048u;
    // 0x26304c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262F80u;
    goto label_262f80;
    ctx->pc = 0x263050u;
label_263050:
    // 0x263050: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x263050u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x263054: 0x4c3ffd4  bgezl       $a2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x263054u;
    {
        const bool branch_taken_0x263054 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x263054) {
            ctx->pc = 0x263058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263054u;
            // 0x263058: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262fa8;
        }
    }
    ctx->pc = 0x26305Cu;
    // 0x26305c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26305cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263060: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x263060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x263064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x263068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26306c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26306cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263070: 0x3e00008  jr          $ra
    ctx->pc = 0x263070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263070u;
        // 0x263074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263078u;
}
