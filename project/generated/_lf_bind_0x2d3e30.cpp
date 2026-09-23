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

// Function: _lf_bind
// Address: 0x2d3e30 - 0x2d3ed4
void _lf_bind_0x2d3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_bind_0x2d3e30");
#endif

    switch (ctx->pc) {
        case 0x2d3e58u: goto label_2d3e58;
        case 0x2d3e6cu: goto label_2d3e6c;
        case 0x2d3e98u: goto label_2d3e98;
        default: break;
    }

    ctx->pc = 0x2d3e30u;

    // 0x2d3e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3e34: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2d3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2d3e38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d3e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d3e3c: 0x8c622e6c  lw          $v0, 0x2E6C($v1)
    ctx->pc = 0x2d3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x382E6Cu));
    // 0x2d3e40: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2d3e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d3e48: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D3E48u;
    {
        const bool branch_taken_0x2d3e48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E48u;
        // 0x2d3e4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e48) {
            ctx->pc = 0x2D3EBCu;
            goto label_2d3ebc;
        }
    }
    ctx->pc = 0x2D3E50u;
    // 0x2d3e50: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2d3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2d3e54: 0x24500b80  addiu       $s0, $v0, 0xB80
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2944));
label_2d3e58:
    // 0x2d3e58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d3e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e60: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x2d3e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x2d3e64: 0xc0b4ad6  jal         func_2D2B58
    ctx->pc = 0x2D3E64u;
    SET_GPR_U32(ctx, 31, 0x2D3E6Cu);
    ctx->pc = 0x2D3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E64u;
    // 0x2d3e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B58u, 0x2D3E64u, 0x2D3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E6Cu;
label_2d3e6c:
    // 0x2d3e6c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3E6Cu;
    {
        const bool branch_taken_0x2d3e6c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d3e6c) {
            ctx->pc = 0x2D3E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3E6Cu;
            // 0x2d3e70: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3E7Cu;
            goto label_2d3e7c;
        }
    }
    ctx->pc = 0x2D3E74u;
    // 0x2d3e74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3E74u;
    {
        const bool branch_taken_0x2d3e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E74u;
        // 0x2d3e78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e74) {
            ctx->pc = 0x2D3EC0u;
            goto label_2d3ec0;
        }
    }
    ctx->pc = 0x2D3E7Cu;
label_2d3e7c:
    // 0x2d3e7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3E7Cu;
    {
        const bool branch_taken_0x2d3e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E7Cu;
        // 0x2d3e80: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e7c) {
            ctx->pc = 0x2D3E8Cu;
            goto label_2d3e8c;
        }
    }
    ctx->pc = 0x2D3E84u;
    // 0x2d3e84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D3E84u;
    {
        const bool branch_taken_0x2d3e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E84u;
        // 0x2d3e88: 0xae202e6c  sw          $zero, 0x2E6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11884), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e84) {
            ctx->pc = 0x2D3EBCu;
            goto label_2d3ebc;
        }
    }
    ctx->pc = 0x2D3E8Cu;
label_2d3e8c:
    // 0x2d3e8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3e90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3e94: 0x0  nop
    ctx->pc = 0x2d3e94u;
    // NOP
label_2d3e98:
    // 0x2d3e98: 0x0  nop
    ctx->pc = 0x2d3e98u;
    // NOP
    // 0x2d3e9c: 0x0  nop
    ctx->pc = 0x2d3e9cu;
    // NOP
    // 0x2d3ea0: 0x0  nop
    ctx->pc = 0x2d3ea0u;
    // NOP
    // 0x2d3ea4: 0x0  nop
    ctx->pc = 0x2d3ea4u;
    // NOP
    // 0x2d3ea8: 0x0  nop
    ctx->pc = 0x2d3ea8u;
    // NOP
    // 0x2d3eac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D3EACu;
    {
        const bool branch_taken_0x2d3eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EACu;
        // 0x2d3eb0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eac) {
            ctx->pc = 0x2D3E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3e98;
        }
    }
    ctx->pc = 0x2D3EB4u;
    // 0x2d3eb4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D3EB4u;
    {
        const bool branch_taken_0x2d3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3eb4) {
            ctx->pc = 0x2D3E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3e58;
        }
    }
    ctx->pc = 0x2D3EBCu;
label_2d3ebc:
    // 0x2d3ebc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3ec0:
    // 0x2d3ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3ec4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d3ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3ECCu;
        // 0x2d3ed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3ED4u;
}
