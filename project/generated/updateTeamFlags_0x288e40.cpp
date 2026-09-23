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

// Function: updateTeamFlags
// Address: 0x288e40 - 0x288f68
void updateTeamFlags_0x288e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateTeamFlags_0x288e40");
#endif

    switch (ctx->pc) {
        case 0x288e70u: goto label_288e70;
        case 0x288eb0u: goto label_288eb0;
        case 0x288f00u: goto label_288f00;
        case 0x288f38u: goto label_288f38;
        default: break;
    }

    ctx->pc = 0x288e40u;

    // 0x288e40: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x288e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x288e44: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x288e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x288e48: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x288e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x288e4c: 0x14c00024  bnez        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x288E4Cu;
    {
        const bool branch_taken_0x288e4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x288E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E4Cu;
        // 0x288e50: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e4c) {
            ctx->pc = 0x288EE0u;
            goto label_288ee0;
        }
    }
    ctx->pc = 0x288E54u;
    // 0x288e54: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x288E54u;
    {
        const bool branch_taken_0x288e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x288E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E54u;
        // 0x288e58: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e54) {
            ctx->pc = 0x288EA0u;
            goto label_288ea0;
        }
    }
    ctx->pc = 0x288E5Cu;
    // 0x288e5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x288e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e60: 0x24441ff8  addiu       $a0, $v0, 0x1FF8
    ctx->pc = 0x288e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x288e64: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x288e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x288e68: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x288e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x288e6c: 0x0  nop
    ctx->pc = 0x288e6cu;
    // NOP
label_288e70:
    // 0x288e70: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288E70u;
    {
        const bool branch_taken_0x288e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x288E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E70u;
        // 0x288e74: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e70) {
            ctx->pc = 0x288E80u;
            goto label_288e80;
        }
    }
    ctx->pc = 0x288E78u;
    // 0x288e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288E78u;
    {
        const bool branch_taken_0x288e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E78u;
        // 0x288e7c: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e78) {
            ctx->pc = 0x288E84u;
            goto label_288e84;
        }
    }
    ctx->pc = 0x288E80u;
label_288e80:
    // 0x288e80: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x288e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_288e84:
    // 0x288e84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x288e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x288e88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288e8c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x288e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x288e90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288E90u;
    {
        const bool branch_taken_0x288e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E90u;
        // 0x288e94: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e90) {
            ctx->pc = 0x288E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288e70;
        }
    }
    ctx->pc = 0x288E98u;
    // 0x288e98: 0x3e00008  jr          $ra
    ctx->pc = 0x288E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288EA0u;
label_288ea0:
    // 0x288ea0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x288ea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ea4: 0x24441ff8  addiu       $a0, $v0, 0x1FF8
    ctx->pc = 0x288ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x288ea8: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x288ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x288eac: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x288eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_288eb0:
    // 0x288eb0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288EB0u;
    {
        const bool branch_taken_0x288eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x288EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EB0u;
        // 0x288eb4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288eb0) {
            ctx->pc = 0x288EC0u;
            goto label_288ec0;
        }
    }
    ctx->pc = 0x288EB8u;
    // 0x288eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288EB8u;
    {
        const bool branch_taken_0x288eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EB8u;
        // 0x288ebc: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288eb8) {
            ctx->pc = 0x288EC4u;
            goto label_288ec4;
        }
    }
    ctx->pc = 0x288EC0u;
label_288ec0:
    // 0x288ec0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x288ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_288ec4:
    // 0x288ec4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x288ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x288ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288ecc: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x288eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x288ed0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288ED0u;
    {
        const bool branch_taken_0x288ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288ED0u;
        // 0x288ed4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ed0) {
            ctx->pc = 0x288EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288eb0;
        }
    }
    ctx->pc = 0x288ED8u;
    // 0x288ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x288ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288EE0u;
label_288ee0:
    // 0x288ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288ee4: 0x14c2001e  bne         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x288EE4u;
    {
        const bool branch_taken_0x288ee4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x288ee4) {
            ctx->pc = 0x288F60u;
            goto label_288f60;
        }
    }
    ctx->pc = 0x288EECu;
    // 0x288eec: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x288EECu;
    {
        const bool branch_taken_0x288eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x288EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EECu;
        // 0x288ef0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288eec) {
            ctx->pc = 0x288F30u;
            goto label_288f30;
        }
    }
    ctx->pc = 0x288EF4u;
    // 0x288ef4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ef8: 0x24441ff8  addiu       $a0, $v0, 0x1FF8
    ctx->pc = 0x288ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
    // 0x288efc: 0x0  nop
    ctx->pc = 0x288efcu;
    // NOP
label_288f00:
    // 0x288f00: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288F00u;
    {
        const bool branch_taken_0x288f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x288F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F00u;
        // 0x288f04: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f00) {
            ctx->pc = 0x288F10u;
            goto label_288f10;
        }
    }
    ctx->pc = 0x288F08u;
    // 0x288f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288F08u;
    {
        const bool branch_taken_0x288f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F08u;
        // 0x288f0c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f08) {
            ctx->pc = 0x288F14u;
            goto label_288f14;
        }
    }
    ctx->pc = 0x288F10u;
label_288f10:
    // 0x288f10: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x288f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_288f14:
    // 0x288f14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x288f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x288f18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288f1c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x288f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x288f20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288F20u;
    {
        const bool branch_taken_0x288f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F20u;
        // 0x288f24: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f20) {
            ctx->pc = 0x288F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288f00;
        }
    }
    ctx->pc = 0x288F28u;
    // 0x288f28: 0x3e00008  jr          $ra
    ctx->pc = 0x288F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288F30u;
label_288f30:
    // 0x288f30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x288f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f34: 0x24441ff8  addiu       $a0, $v0, 0x1FF8
    ctx->pc = 0x288f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8184));
label_288f38:
    // 0x288f38: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288F38u;
    {
        const bool branch_taken_0x288f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x288F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F38u;
        // 0x288f3c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f38) {
            ctx->pc = 0x288F48u;
            goto label_288f48;
        }
    }
    ctx->pc = 0x288F40u;
    // 0x288f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288F40u;
    {
        const bool branch_taken_0x288f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F40u;
        // 0x288f44: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f40) {
            ctx->pc = 0x288F4Cu;
            goto label_288f4c;
        }
    }
    ctx->pc = 0x288F48u;
label_288f48:
    // 0x288f48: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x288f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_288f4c:
    // 0x288f4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x288f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x288f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288f54: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x288f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x288f58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288F58u;
    {
        const bool branch_taken_0x288f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F58u;
        // 0x288f5c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f58) {
            ctx->pc = 0x288F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288f38;
        }
    }
    ctx->pc = 0x288F60u;
label_288f60:
    // 0x288f60: 0x3e00008  jr          $ra
    ctx->pc = 0x288F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288F68u;
}
