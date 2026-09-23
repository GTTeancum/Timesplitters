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

// Function: decalRemoveDecalsFromProp
// Address: 0x2a4b10 - 0x2a4bc0
void decalRemoveDecalsFromProp_0x2a4b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalRemoveDecalsFromProp_0x2a4b10");
#endif

    switch (ctx->pc) {
        case 0x2a4b38u: goto label_2a4b38;
        case 0x2a4b5cu: goto label_2a4b5c;
        case 0x2a4b88u: goto label_2a4b88;
        default: break;
    }

    ctx->pc = 0x2a4b10u;

    // 0x2a4b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a4b14: 0x8f86b310  lw          $a2, -0x4CF0($gp)
    ctx->pc = 0x2a4b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947600)));
    // 0x2a4b18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a4b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a4b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4b28: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A4B28u;
    {
        const bool branch_taken_0x2a4b28 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B28u;
        // 0x2a4b2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b28) {
            ctx->pc = 0x2A4B74u;
            goto label_2a4b74;
        }
    }
    ctx->pc = 0x2A4B30u;
    // 0x2a4b30: 0x8f84b300  lw          $a0, -0x4D00($gp)
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947584)));
    // 0x2a4b34: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2a4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2a4b38:
    // 0x2a4b38: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2a4b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a4b3c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2a4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a4b40: 0x8ca300d8  lw          $v1, 0xD8($a1)
    ctx->pc = 0x2a4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x2a4b44: 0x54710008  bnel        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4B44u;
    {
        const bool branch_taken_0x2a4b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2a4b44) {
            ctx->pc = 0x2A4B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B44u;
            // 0x2a4b48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B68u;
            goto label_2a4b68;
        }
    }
    ctx->pc = 0x2A4B4Cu;
    // 0x2a4b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4b50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b54: 0xc0a8c72  jal         func_2A31C8
    ctx->pc = 0x2A4B54u;
    SET_GPR_U32(ctx, 31, 0x2A4B5Cu);
    ctx->pc = 0x2A4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B54u;
    // 0x2a4b58: 0xaca200cc  sw          $v0, 0xCC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A31C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A31C8u, 0x2A4B54u, 0x2A4B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B5Cu;
label_2a4b5c:
    // 0x2a4b5c: 0x8f86b310  lw          $a2, -0x4CF0($gp)
    ctx->pc = 0x2a4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947600)));
    // 0x2a4b60: 0x8f84b300  lw          $a0, -0x4D00($gp)
    ctx->pc = 0x2a4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947584)));
    // 0x2a4b64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a4b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a4b68:
    // 0x2a4b68: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2a4b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a4b6c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A4B6Cu;
    {
        const bool branch_taken_0x2a4b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B6Cu;
        // 0x2a4b70: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b6c) {
            ctx->pc = 0x2A4B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4b38;
        }
    }
    ctx->pc = 0x2A4B74u;
label_2a4b74:
    // 0x2a4b74: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2a4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2a4b78: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x2a4b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a4b7c: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x2a4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x2a4b80: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2a4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a4b84: 0x0  nop
    ctx->pc = 0x2a4b84u;
    // NOP
label_2a4b88:
    // 0x2a4b88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4b8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4B8Cu;
    {
        const bool branch_taken_0x2a4b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b8c) {
            ctx->pc = 0x2A4B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B8Cu;
            // 0x2a4b90: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4BA4u;
            goto label_2a4ba4;
        }
    }
    ctx->pc = 0x2A4B94u;
    // 0x2a4b94: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2a4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2a4b98: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4B98u;
    {
        const bool branch_taken_0x2a4b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2a4b98) {
            ctx->pc = 0x2A4B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B98u;
            // 0x2a4b9c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4BA0u;
            goto label_2a4ba0;
        }
    }
    ctx->pc = 0x2A4BA0u;
label_2a4ba0:
    // 0x2a4ba0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a4ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2a4ba4:
    // 0x2a4ba4: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A4BA4u;
    {
        const bool branch_taken_0x2a4ba4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BA4u;
        // 0x2a4ba8: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ba4) {
            ctx->pc = 0x2A4B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4b88;
        }
    }
    ctx->pc = 0x2A4BACu;
    // 0x2a4bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4bb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a4bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BB8u;
        // 0x2a4bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4BC0u;
}
