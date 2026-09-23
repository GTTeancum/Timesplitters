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

// Function: _fpadd_parts
// Address: 0x2e2f40 - 0x2e3180
void _fpadd_parts_0x2e2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x2e2f40");
#endif

    switch (ctx->pc) {
        case 0x2e2f54u: goto label_2e2f54;
        case 0x2e2f68u: goto label_2e2f68;
        case 0x2e3020u: goto label_2e3020;
        case 0x2e3058u: goto label_2e3058;
        case 0x2e3108u: goto label_2e3108;
        default: break;
    }

    ctx->pc = 0x2e2f40u;

    // 0x2e2f40: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e2f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f44: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2e2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e2f48: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2e2f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e2f4c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2F4Cu;
    {
        const bool branch_taken_0x2e2f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f4c) {
            ctx->pc = 0x2E2F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2F4Cu;
            // 0x2e2f50: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2F5Cu;
            goto label_2e2f5c;
        }
    }
    ctx->pc = 0x2E2F54u;
label_2e2f54:
    // 0x2e2f54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F54u;
        // 0x2e2f58: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F5Cu;
label_2e2f5c:
    // 0x2e2f5c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2e2f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e2f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2F60u;
    {
        const bool branch_taken_0x2e2f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F60u;
        // 0x2e2f64: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f60) {
            ctx->pc = 0x2E2F70u;
            goto label_2e2f70;
        }
    }
    ctx->pc = 0x2E2F68u;
label_2e2f68:
    // 0x2e2f68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F68u;
        // 0x2e2f6c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F70u;
label_2e2f70:
    // 0x2e2f70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2F70u;
    {
        const bool branch_taken_0x2e2f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F70u;
        // 0x2e2f74: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f70) {
            ctx->pc = 0x2E2F98u;
            goto label_2e2f98;
        }
    }
    ctx->pc = 0x2E2F78u;
    // 0x2e2f78: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E2F78u;
    {
        const bool branch_taken_0x2e2f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f78) {
            ctx->pc = 0x2E2F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2f54;
        }
    }
    ctx->pc = 0x2E2F80u;
    // 0x2e2f80: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2e2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2f84: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2e2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e2f88: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E2F88u;
    {
        const bool branch_taken_0x2e2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F88u;
        // 0x2e2f8c: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f88) {
            ctx->pc = 0x2E2F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2f54;
        }
    }
    ctx->pc = 0x2E2F90u;
    // 0x2e2f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F90u;
        // 0x2e2f94: 0x24425368  addiu       $v0, $v0, 0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F98u;
label_2e2f98:
    // 0x2e2f98: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E2F98u;
    {
        const bool branch_taken_0x2e2f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F98u;
        // 0x2e2f9c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f98) {
            ctx->pc = 0x2E2F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2f68;
        }
    }
    ctx->pc = 0x2E2FA0u;
    // 0x2e2fa0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2FA0u;
    {
        const bool branch_taken_0x2e2fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FA0u;
        // 0x2e2fa4: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fa0) {
            ctx->pc = 0x2E2FDCu;
            goto label_2e2fdc;
        }
    }
    ctx->pc = 0x2E2FA8u;
    // 0x2e2fa8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E2FA8u;
    {
        const bool branch_taken_0x2e2fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FA8u;
        // 0x2e2fac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fa8) {
            ctx->pc = 0x2E2F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2f54;
        }
    }
    ctx->pc = 0x2E2FB0u;
    // 0x2e2fb0: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x2e2fb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e2fb4: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2e2fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2e2fb8: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x2e2fb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2e2fbc: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2e2fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2e2fc0: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x2e2fc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e2fc4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x2e2fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x2e2fc8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2e2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e2fcc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2e2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2fd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e2fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e2fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FD4u;
        // 0x2e2fd8: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2FDCu;
label_2e2fdc:
    // 0x2e2fdc: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E2FDCu;
    {
        const bool branch_taken_0x2e2fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FDCu;
        // 0x2e2fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fdc) {
            ctx->pc = 0x2E2F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2f68;
        }
    }
    ctx->pc = 0x2E2FE4u;
    // 0x2e2fe4: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x2e2fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2e2fe8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x2e2fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e2fec: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x2e2fecu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e2ff0: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x2e2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2e2ff4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e2ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2ff8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x2e2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2e2ffc: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2e2ffcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2e3000: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x2e3000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e3004: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3004u;
    {
        const bool branch_taken_0x2e3004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3004u;
        // 0x2e3008: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3004) {
            ctx->pc = 0x2E307Cu;
            goto label_2e307c;
        }
    }
    ctx->pc = 0x2E300Cu;
    // 0x2e300c: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2e300cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e3010: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E3010u;
    {
        const bool branch_taken_0x2e3010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3010u;
        // 0x2e3014: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3010) {
            ctx->pc = 0x2E3044u;
            goto label_2e3044;
        }
    }
    ctx->pc = 0x2E3018u;
    // 0x2e3018: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2e3018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e301c: 0x0  nop
    ctx->pc = 0x2e301cu;
    // NOP
label_2e3020:
    // 0x2e3020: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x2e3020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x2e3024: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e3024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e3028: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x2e3028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2e302c: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x2e302cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e3030: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2e3030u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3034: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3034u;
    {
        const bool branch_taken_0x2e3034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3034) {
            ctx->pc = 0x2E3020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3020;
        }
    }
    ctx->pc = 0x2E303Cu;
    // 0x2e303c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E303Cu;
    {
        const bool branch_taken_0x2e303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E303Cu;
        // 0x2e3040: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e303c) {
            ctx->pc = 0x2E304Cu;
            goto label_2e304c;
        }
    }
    ctx->pc = 0x2E3044u;
label_2e3044:
    // 0x2e3044: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2e3044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3048: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2e3048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2e304c:
    // 0x2e304c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E304Cu;
    {
        const bool branch_taken_0x2e304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e304c) {
            ctx->pc = 0x2E30A0u;
            goto label_2e30a0;
        }
    }
    ctx->pc = 0x2E3054u;
    // 0x2e3054: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2e3058:
    // 0x2e3058: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x2e3058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x2e305c: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x2e305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2e3060: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x2e3060u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3064: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e3064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e3068: 0x0  nop
    ctx->pc = 0x2e3068u;
    // NOP
    // 0x2e306c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E306Cu;
    {
        const bool branch_taken_0x2e306c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e306c) {
            ctx->pc = 0x2E3058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3058;
        }
    }
    ctx->pc = 0x2E3074u;
    // 0x2e3074: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E3074u;
    {
        const bool branch_taken_0x2e3074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3074u;
        // 0x2e3078: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3074) {
            ctx->pc = 0x2E30A0u;
            goto label_2e30a0;
        }
    }
    ctx->pc = 0x2E307Cu;
label_2e307c:
    // 0x2e307c: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2e307cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e3080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3080u;
    {
        const bool branch_taken_0x2e3080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3080u;
        // 0x2e3084: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3080) {
            ctx->pc = 0x2E3094u;
            goto label_2e3094;
        }
    }
    ctx->pc = 0x2E3088u;
    // 0x2e3088: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e3088u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e308c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E308Cu;
    {
        const bool branch_taken_0x2e308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E308Cu;
        // 0x2e3090: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e308c) {
            ctx->pc = 0x2E30A0u;
            goto label_2e30a0;
        }
    }
    ctx->pc = 0x2E3094u;
label_2e3094:
    // 0x2e3094: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e3094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3098: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2e3098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e309c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e309cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e30a0:
    // 0x2e30a0: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E30A0u;
    {
        const bool branch_taken_0x2e30a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30A0u;
        // 0x2e30a4: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30a0) {
            ctx->pc = 0x2E3134u;
            goto label_2e3134;
        }
    }
    ctx->pc = 0x2E30A8u;
    // 0x2e30a8: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E30A8u;
    {
        const bool branch_taken_0x2e30a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30A8u;
        // 0x2e30ac: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30a8) {
            ctx->pc = 0x2E30B4u;
            goto label_2e30b4;
        }
    }
    ctx->pc = 0x2E30B0u;
    // 0x2e30b0: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x2e30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_2e30b4:
    // 0x2e30b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E30B4u;
    {
        const bool branch_taken_0x2e30b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30B4u;
        // 0x2e30b8: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30b4) {
            ctx->pc = 0x2E30CCu;
            goto label_2e30cc;
        }
    }
    ctx->pc = 0x2E30BCu;
    // 0x2e30bc: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2e30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2e30c0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2e30c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x2e30c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E30C4u;
    {
        const bool branch_taken_0x2e30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30C4u;
        // 0x2e30c8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30c4) {
            ctx->pc = 0x2E30DCu;
            goto label_2e30dc;
        }
    }
    ctx->pc = 0x2E30CCu;
label_2e30cc:
    // 0x2e30cc: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2e30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2e30d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e30d4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2e30d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2e30d8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2e30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2e30dc:
    // 0x2e30dc: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x2e30dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2e30e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e30e4: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x2e30e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x2e30e8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2e30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2e30ec: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x2e30ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x2e30f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e30f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e30f4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E30F4u;
    {
        const bool branch_taken_0x2e30f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30F4u;
        // 0x2e30f8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30f4) {
            ctx->pc = 0x2E3144u;
            goto label_2e3144;
        }
    }
    ctx->pc = 0x2E30FCu;
    // 0x2e30fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e30fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3100: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x2e3100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x2e3104: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x2e3104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_2e3108:
    // 0x2e3108: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e3108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e310c: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x2e310cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x2e3110: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x2e3110u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x2e3114: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x2e3114u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x2e3118: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e311c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2e311cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3120: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2e3120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2e3124: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E3124u;
    {
        const bool branch_taken_0x2e3124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3124u;
        // 0x2e3128: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3124) {
            ctx->pc = 0x2E3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3108;
        }
    }
    ctx->pc = 0x2E312Cu;
    // 0x2e312c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E312Cu;
    {
        const bool branch_taken_0x2e312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E312Cu;
        // 0x2e3130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e312c) {
            ctx->pc = 0x2E3144u;
            goto label_2e3144;
        }
    }
    ctx->pc = 0x2E3134u;
label_2e3134:
    // 0x2e3134: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x2e3134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x2e3138: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2e3138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2e313c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e313cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3140: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2e3140u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_2e3144:
    // 0x2e3144: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e3144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3148: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e314c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2e314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2e3150: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2e3150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e3154: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3154u;
    {
        const bool branch_taken_0x2e3154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3154u;
        // 0x2e3158: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3154) {
            ctx->pc = 0x2E3178u;
            goto label_2e3178;
        }
    }
    ctx->pc = 0x2E315Cu;
    // 0x2e315c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2e3160: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x2e3160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x2e3164: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2e3164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e3168: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e316c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e3170: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2e3170u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2e3174: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2e3174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2e3178:
    // 0x2e3178: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3178u;
        // 0x2e317c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3180u;
}
