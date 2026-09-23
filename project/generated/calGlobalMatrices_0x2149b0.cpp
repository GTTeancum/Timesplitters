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

// Function: calGlobalMatrices
// Address: 0x2149b0 - 0x214a84
void calGlobalMatrices_0x2149b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calGlobalMatrices_0x2149b0");
#endif

    switch (ctx->pc) {
        case 0x2149d8u: goto label_2149d8;
        case 0x214a2cu: goto label_214a2c;
        case 0x214a50u: goto label_214a50;
        default: break;
    }

    ctx->pc = 0x2149b0u;

label_2149b0:
    // 0x2149b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2149b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2149b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2149b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2149b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2149b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2149bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2149bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2149c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2149c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2149c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2149c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2149cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2149ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2149d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2149d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2149d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2149d8:
    // 0x2149d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2149d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2149dc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2149dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2149e0: 0x2252018  mult        $a0, $s1, $a1
    ctx->pc = 0x2149e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2149e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2149e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2149e8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2149e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2149ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2149ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2149f0: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2149f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2149f4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2149f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2149F8u;
    {
        const bool branch_taken_0x2149f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149F8u;
        // 0x2149fc: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149f8) {
            ctx->pc = 0x214A30u;
            goto label_214a30;
        }
    }
    ctx->pc = 0x214A00u;
    // 0x214a00: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x214A00u;
    {
        const bool branch_taken_0x214a00 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x214A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A00u;
        // 0x214a04: 0xe52018  mult        $a0, $a3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a00) {
            ctx->pc = 0x214A2Cu;
            goto label_214a2c;
        }
    }
    ctx->pc = 0x214A08u;
    // 0x214a08: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x214a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x214a0c: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x214a0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x214a10: 0x80450001  lb          $a1, 0x1($v0)
    ctx->pc = 0x214a10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x214a14: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x214a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x214a18: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x214a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x214a1c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x214a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x214a20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x214a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a24: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x214A24u;
    SET_GPR_U32(ctx, 31, 0x214A2Cu);
    ctx->pc = 0x214A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A24u;
    // 0x214a28: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x214A24u, 0x214A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A2Cu;
label_214a2c:
    // 0x214a2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214a30:
    // 0x214a30: 0x82060003  lb          $a2, 0x3($s0)
    ctx->pc = 0x214a30u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x214a34: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x214A34u;
    {
        const bool branch_taken_0x214a34 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x214A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A34u;
        // 0x214a38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a34) {
            ctx->pc = 0x214A50u;
            goto label_214a50;
        }
    }
    ctx->pc = 0x214A3Cu;
    // 0x214a3c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x214a3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214a40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214A40u;
    {
        const bool branch_taken_0x214a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A40u;
        // 0x214a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a40) {
            ctx->pc = 0x214A50u;
            goto label_214a50;
        }
    }
    ctx->pc = 0x214A48u;
    // 0x214a48: 0xc08526c  jal         func_2149B0
    ctx->pc = 0x214A48u;
    SET_GPR_U32(ctx, 31, 0x214A50u);
    ctx->pc = 0x214A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A48u;
    // 0x214a4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2149B0u;
    goto label_2149b0;
    ctx->pc = 0x214A50u;
label_214a50:
    // 0x214a50: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x214a50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214a54: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x214A54u;
    {
        const bool branch_taken_0x214a54 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x214A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A54u;
        // 0x214a58: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a54) {
            ctx->pc = 0x214A64u;
            goto label_214a64;
        }
    }
    ctx->pc = 0x214A5Cu;
    // 0x214a5c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x214A5Cu;
    {
        const bool branch_taken_0x214a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A5Cu;
        // 0x214a60: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a5c) {
            ctx->pc = 0x2149D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2149d8;
        }
    }
    ctx->pc = 0x214A64u;
label_214a64:
    // 0x214a64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x214a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214a68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x214a68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214a6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x214a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214a70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214a74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x214A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A7Cu;
        // 0x214a80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214A84u;
}
