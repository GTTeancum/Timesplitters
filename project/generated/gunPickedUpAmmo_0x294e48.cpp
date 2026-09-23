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

// Function: gunPickedUpAmmo
// Address: 0x294e48 - 0x294f64
void gunPickedUpAmmo_0x294e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunPickedUpAmmo_0x294e48");
#endif

    switch (ctx->pc) {
        case 0x294ec0u: goto label_294ec0;
        default: break;
    }

    ctx->pc = 0x294e48u;

    // 0x294e48: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x294e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e4c: 0x8d020bcc  lw          $v0, 0xBCC($t0)
    ctx->pc = 0x294e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3020)));
    // 0x294e50: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x294e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x294e54: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x294E54u;
    {
        const bool branch_taken_0x294e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e54) {
            ctx->pc = 0x294F5Cu;
            goto label_294f5c;
        }
    }
    ctx->pc = 0x294E5Cu;
    // 0x294e5c: 0x14c0003f  bnez        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x294E5Cu;
    {
        const bool branch_taken_0x294e5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x294e5c) {
            ctx->pc = 0x294F5Cu;
            goto label_294f5c;
        }
    }
    ctx->pc = 0x294E64u;
    // 0x294e64: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x294e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x294e68: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x294E68u;
    {
        const bool branch_taken_0x294e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e68) {
            ctx->pc = 0x294F5Cu;
            goto label_294f5c;
        }
    }
    ctx->pc = 0x294E70u;
    // 0x294e70: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x294e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x294e74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294E74u;
    {
        const bool branch_taken_0x294e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E74u;
        // 0x294e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e74) {
            ctx->pc = 0x294E84u;
            goto label_294e84;
        }
    }
    ctx->pc = 0x294E7Cu;
    // 0x294e7c: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x294E7Cu;
    {
        const bool branch_taken_0x294e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x294e7c) {
            ctx->pc = 0x294F5Cu;
            goto label_294f5c;
        }
    }
    ctx->pc = 0x294E84u;
label_294e84:
    // 0x294e84: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x294e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x294e88: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x294e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x294e8c: 0x246d90f8  addiu       $t5, $v1, -0x6F08
    ctx->pc = 0x294e8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x294e90: 0x24586218  addiu       $t8, $v0, 0x6218
    ctx->pc = 0x294e90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x294e94: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x294e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294e98: 0x25030110  addiu       $v1, $t0, 0x110
    ctx->pc = 0x294e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 272));
    // 0x294e9c: 0x2502017c  addiu       $v0, $t0, 0x17C
    ctx->pc = 0x294e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 380));
    // 0x294ea0: 0x647821  addu        $t7, $v1, $a0
    ctx->pc = 0x294ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294ea4: 0x447021  addu        $t6, $v0, $a0
    ctx->pc = 0x294ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294ea8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x294ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294eac: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x294eacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294eb0: 0x240b0190  addiu       $t3, $zero, 0x190
    ctx->pc = 0x294eb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x294eb4: 0x25a70008  addiu       $a3, $t5, 0x8
    ctx->pc = 0x294eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x294eb8: 0x250901ec  addiu       $t1, $t0, 0x1EC
    ctx->pc = 0x294eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 492));
    // 0x294ebc: 0x0  nop
    ctx->pc = 0x294ebcu;
    // NOP
label_294ec0:
    // 0x294ec0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x294ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x294ec4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x294EC4u;
    {
        const bool branch_taken_0x294ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EC4u;
        // 0x294ec8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ec4) {
            ctx->pc = 0x294F48u;
            goto label_294f48;
        }
    }
    ctx->pc = 0x294ECCu;
    // 0x294ecc: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x294eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x294ed0: 0x104c0008  beq         $v0, $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x294ED0u;
    {
        const bool branch_taken_0x294ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x294ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294ED0u;
        // 0x294ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ed0) {
            ctx->pc = 0x294EF4u;
            goto label_294ef4;
        }
    }
    ctx->pc = 0x294ED8u;
    // 0x294ed8: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x294ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294edc: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x294edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x294ee0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x294ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294ee4: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294EE4u;
    {
        const bool branch_taken_0x294ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x294ee4) {
            ctx->pc = 0x294EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294EE4u;
            // 0x294ee8: 0x84e20004  lh          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294EF8u;
            goto label_294ef8;
        }
    }
    ctx->pc = 0x294EECu;
    // 0x294eec: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x294eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x294ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x294ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294ef4:
    // 0x294ef4: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x294ef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_294ef8:
    // 0x294ef8: 0x104c0007  beq         $v0, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x294EF8u;
    {
        const bool branch_taken_0x294ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x294EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EF8u;
        // 0x294efc: 0x4b1818  mult        $v1, $v0, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ef8) {
            ctx->pc = 0x294F18u;
            goto label_294f18;
        }
    }
    ctx->pc = 0x294F00u;
    // 0x294f00: 0x781021  addu        $v0, $v1, $t8
    ctx->pc = 0x294f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x294f04: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x294f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294f08: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294F08u;
    {
        const bool branch_taken_0x294f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x294f08) {
            ctx->pc = 0x294F18u;
            goto label_294f18;
        }
    }
    ctx->pc = 0x294F10u;
    // 0x294f10: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x294f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x294f14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x294f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294f18:
    // 0x294f18: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x294F18u;
    {
        const bool branch_taken_0x294f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f18) {
            ctx->pc = 0x294F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F18u;
            // 0x294f1c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F4Cu;
            goto label_294f4c;
        }
    }
    ctx->pc = 0x294F20u;
    // 0x294f20: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x294F20u;
    {
        const bool branch_taken_0x294f20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x294f20) {
            ctx->pc = 0x294F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F20u;
            // 0x294f24: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F4Cu;
            goto label_294f4c;
        }
    }
    ctx->pc = 0x294F28u;
    // 0x294f28: 0x8d020104  lw          $v0, 0x104($t0)
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x294f2c: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x294f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x294f30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x294f34: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x294f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x294f38: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x294f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294f3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x294f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x294f40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294F40u;
    {
        const bool branch_taken_0x294f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f40) {
            ctx->pc = 0x294F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F40u;
            // 0x294f44: 0xad0a0104  sw          $t2, 0x104($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 260), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F48u;
            goto label_294f48;
        }
    }
    ctx->pc = 0x294F48u;
label_294f48:
    // 0x294f48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x294f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_294f4c:
    // 0x294f4c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x294f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x294f50: 0x29420021  slti        $v0, $t2, 0x21
    ctx->pc = 0x294f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x294f54: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x294F54u;
    {
        const bool branch_taken_0x294f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F54u;
        // 0x294f58: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f54) {
            ctx->pc = 0x294EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294ec0;
        }
    }
    ctx->pc = 0x294F5Cu;
label_294f5c:
    // 0x294f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x294F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F64u;
}
