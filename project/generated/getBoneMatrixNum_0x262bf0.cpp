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

// Function: getBoneMatrixNum
// Address: 0x262bf0 - 0x262cbc
void getBoneMatrixNum_0x262bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getBoneMatrixNum_0x262bf0");
#endif

    switch (ctx->pc) {
        case 0x262c18u: goto label_262c18;
        default: break;
    }

    ctx->pc = 0x262bf0u;

    // 0x262bf0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x262bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bf4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x262bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x262bf8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x262bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x262bfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262bfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x262c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c04: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x262c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x262c08: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x262C08u;
    {
        const bool branch_taken_0x262c08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x262C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C08u;
        // 0x262c0c: 0x1225823  subu        $t3, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c08) {
            ctx->pc = 0x262CB4u;
            goto label_262cb4;
        }
    }
    ctx->pc = 0x262C10u;
    // 0x262c10: 0x8caa0020  lw          $t2, 0x20($a1)
    ctx->pc = 0x262c10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x262c14: 0x0  nop
    ctx->pc = 0x262c14u;
    // NOP
label_262c18:
    // 0x262c18: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x262c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x262c1c: 0x2d03000c  sltiu       $v1, $t0, 0xC
    ctx->pc = 0x262c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x262c20: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x262c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x262c24: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x262C24u;
    {
        const bool branch_taken_0x262c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C24u;
        // 0x262c28: 0x8b3021  addu        $a2, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c24) {
            ctx->pc = 0x262C8Cu;
            goto label_262c8c;
        }
    }
    ctx->pc = 0x262C2Cu;
    // 0x262c2c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x262c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x262c30: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x262c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x262c34: 0x244226e0  addiu       $v0, $v0, 0x26E0
    ctx->pc = 0x262c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9952));
    // 0x262c38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x262c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262c3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x262c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262c40: 0x800008  jr          $a0
    ctx->pc = 0x262C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262C48u: goto label_262c48;
            case 0x262C54u: goto label_262c54;
            case 0x262C60u: goto label_262c60;
            case 0x262C6Cu: goto label_262c6c;
            case 0x262C78u: goto label_262c78;
            case 0x262C84u: goto label_262c84;
            case 0x262C8Cu: goto label_262c8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262C40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262C48u;
label_262c48:
    // 0x262c48: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x262c48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x262c4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x262C4Cu;
    {
        const bool branch_taken_0x262c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C4Cu;
        // 0x262c50: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c4c) {
            ctx->pc = 0x262C8Cu;
            goto label_262c8c;
        }
    }
    ctx->pc = 0x262C54u;
label_262c54:
    // 0x262c54: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x262c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x262c58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x262C58u;
    {
        const bool branch_taken_0x262c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C58u;
        // 0x262c5c: 0xaca2001c  sw          $v0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c58) {
            ctx->pc = 0x262C8Cu;
            goto label_262c8c;
        }
    }
    ctx->pc = 0x262C60u;
label_262c60:
    // 0x262c60: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x262c60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x262c64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x262C64u;
    {
        const bool branch_taken_0x262c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C64u;
        // 0x262c68: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c64) {
            ctx->pc = 0x262C8Cu;
            goto label_262c8c;
        }
    }
    ctx->pc = 0x262C6Cu;
label_262c6c:
    // 0x262c6c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x262c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x262c70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x262C70u;
    {
        const bool branch_taken_0x262c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C70u;
        // 0x262c74: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c70) {
            ctx->pc = 0x262C8Cu;
            goto label_262c8c;
        }
    }
    ctx->pc = 0x262C78u;
label_262c78:
    // 0x262c78: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x262c7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262C7Cu;
    {
        const bool branch_taken_0x262c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C7Cu;
        // 0x262c80: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c7c) {
            ctx->pc = 0x262C8Cu;
            goto label_262c8c;
        }
    }
    ctx->pc = 0x262C84u;
label_262c84:
    // 0x262c84: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x262c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x262c88: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x262c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_262c8c:
    // 0x262c8c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x262c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x262c90: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x262c94: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x262c98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x262c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x262c9c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x262c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x262ca0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262ca4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x262ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x262ca8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x262ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x262cac: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x262CACu;
    {
        const bool branch_taken_0x262cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CACu;
        // 0x262cb0: 0x83400a  movz        $t0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cac) {
            ctx->pc = 0x262C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262c18;
        }
    }
    ctx->pc = 0x262CB4u;
label_262cb4:
    // 0x262cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x262CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262CBCu;
}
