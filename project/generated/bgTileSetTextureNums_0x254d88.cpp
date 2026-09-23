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

// Function: bgTileSetTextureNums
// Address: 0x254d88 - 0x254e60
void bgTileSetTextureNums_0x254d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTileSetTextureNums_0x254d88");
#endif

    switch (ctx->pc) {
        case 0x254db8u: goto label_254db8;
        case 0x254dd4u: goto label_254dd4;
        case 0x254df8u: goto label_254df8;
        default: break;
    }

    ctx->pc = 0x254d88u;

    // 0x254d88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254d8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x254d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x254d90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x254d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x254d94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x254d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x254d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x254d9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x254d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x254da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254da4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x254da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x254da8: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x254DA8u;
    {
        const bool branch_taken_0x254da8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DA8u;
        // 0x254dac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254da8) {
            ctx->pc = 0x254E44u;
            goto label_254e44;
        }
    }
    ctx->pc = 0x254DB0u;
    // 0x254db0: 0x2413002c  addiu       $s3, $zero, 0x2C
    ctx->pc = 0x254db0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x254db4: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x254db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_254db8:
    // 0x254db8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x254db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x254dbc: 0x8f85a23c  lw          $a1, -0x5DC4($gp)
    ctx->pc = 0x254dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x254dc0: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x254dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x254dc4: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x254dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x254dc8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x254dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x254dcc: 0xc098088  jal         func_260220
    ctx->pc = 0x254DCCu;
    SET_GPR_U32(ctx, 31, 0x254DD4u);
    ctx->pc = 0x254DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DCCu;
    // 0x254dd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260220u, 0x254DCCu, 0x254DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DD4u;
label_254dd4:
    // 0x254dd4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x254dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x254dd8: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x254DD8u;
    {
        const bool branch_taken_0x254dd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DD8u;
        // 0x254ddc: 0x26290001  addiu       $t1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dd8) {
            ctx->pc = 0x254E30u;
            goto label_254e30;
        }
    }
    ctx->pc = 0x254DE0u;
    // 0x254de0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x254de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x254de4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254DE4u;
    {
        const bool branch_taken_0x254de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DE4u;
        // 0x254de8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254de4) {
            ctx->pc = 0x254E30u;
            goto label_254e30;
        }
    }
    ctx->pc = 0x254DECu;
    // 0x254dec: 0x26290001  addiu       $t1, $s1, 0x1
    ctx->pc = 0x254decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x254df0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x254df0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254df4: 0x0  nop
    ctx->pc = 0x254df4u;
    // NOP
label_254df8:
    // 0x254df8: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x254df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x254dfc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x254dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x254e00: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x254e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254e04: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x254e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x254e08: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x254e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x254e0c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x254e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x254e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x254e14: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x254e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x254e18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254e1c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x254e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x254e20: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x254E20u;
    {
        const bool branch_taken_0x254e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x254E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E20u;
        // 0x254e24: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e20) {
            ctx->pc = 0x254DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254df8;
        }
    }
    ctx->pc = 0x254E28u;
    // 0x254e28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254E28u;
    {
        const bool branch_taken_0x254e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E28u;
        // 0x254e2c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e28) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254E30u;
label_254e30:
    // 0x254e30: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x254e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_254e34:
    // 0x254e34: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x254e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e38: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x254e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254e3c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x254E3Cu;
    {
        const bool branch_taken_0x254e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E3Cu;
        // 0x254e40: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e3c) {
            ctx->pc = 0x254DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254db8;
        }
    }
    ctx->pc = 0x254E44u;
label_254e44:
    // 0x254e44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x254e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254e48: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x254e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254e4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x254e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254e50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x254e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254e58: 0x3e00008  jr          $ra
    ctx->pc = 0x254E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E58u;
        // 0x254e5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E60u;
}
