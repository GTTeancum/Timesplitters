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

// Function: waterPropTick
// Address: 0x278bb0 - 0x278d48
void waterPropTick_0x278bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waterPropTick_0x278bb0");
#endif

    switch (ctx->pc) {
        case 0x278c00u: goto label_278c00;
        case 0x278c10u: goto label_278c10;
        case 0x278c24u: goto label_278c24;
        case 0x278c60u: goto label_278c60;
        case 0x278c78u: goto label_278c78;
        case 0x278c94u: goto label_278c94;
        case 0x278cacu: goto label_278cac;
        case 0x278cc0u: goto label_278cc0;
        default: break;
    }

    ctx->pc = 0x278bb0u;

    // 0x278bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x278bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x278bb4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x278bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x278bb8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x278bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x278bbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x278bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x278bc0: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x278bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278bc4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x278bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x278bc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x278bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x278bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x278bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x278bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x278bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x278bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x278bdc: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x278bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x278be0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x278be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278be4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278be8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x278be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x278bec: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x278BECu;
    {
        const bool branch_taken_0x278bec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x278BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BECu;
        // 0x278bf0: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278bec) {
            ctx->pc = 0x278C48u;
            goto label_278c48;
        }
    }
    ctx->pc = 0x278BF4u;
    // 0x278bf4: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x278bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x278bf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bfc: 0x0  nop
    ctx->pc = 0x278bfcu;
    // NOP
label_278c00:
    // 0x278c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c08: 0xc09d194  jal         func_274650
    ctx->pc = 0x278C08u;
    SET_GPR_U32(ctx, 31, 0x278C10u);
    ctx->pc = 0x278C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C08u;
    // 0x278c0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x278C08u, 0x278C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C10u;
label_278c10:
    // 0x278c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c1c: 0xc09d194  jal         func_274650
    ctx->pc = 0x278C1Cu;
    SET_GPR_U32(ctx, 31, 0x278C24u);
    ctx->pc = 0x278C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C1Cu;
    // 0x278c20: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x278C1Cu, 0x278C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C24u;
label_278c24:
    // 0x278c24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x278c28: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x278c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x278c2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x278c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278c30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278c34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x278c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x278c38: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x278C38u;
    {
        const bool branch_taken_0x278c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278c38) {
            ctx->pc = 0x278C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C38u;
            // 0x278c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278c00;
        }
    }
    ctx->pc = 0x278C40u;
    // 0x278c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278C40u;
    {
        const bool branch_taken_0x278c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C40u;
        // 0x278c44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c40) {
            ctx->pc = 0x278C54u;
            goto label_278c54;
        }
    }
    ctx->pc = 0x278C48u;
label_278c48:
    // 0x278c48: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x278c48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x278c4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x278c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278c50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x278c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278c54:
    // 0x278c54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278c58: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x278C58u;
    {
        const bool branch_taken_0x278c58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x278C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C58u;
        // 0x278c5c: 0x8f839da8  lw          $v1, -0x6258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c58) {
            ctx->pc = 0x278CE0u;
            goto label_278ce0;
        }
    }
    ctx->pc = 0x278C60u;
label_278c60:
    // 0x278c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c70: 0xc09d11a  jal         func_274468
    ctx->pc = 0x278C70u;
    SET_GPR_U32(ctx, 31, 0x278C78u);
    ctx->pc = 0x278C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C70u;
    // 0x278c74: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x278C70u, 0x278C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C78u;
label_278c78:
    // 0x278c78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278C78u;
    {
        const bool branch_taken_0x278c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C78u;
        // 0x278c7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c78) {
            ctx->pc = 0x278C94u;
            goto label_278c94;
        }
    }
    ctx->pc = 0x278C80u;
    // 0x278c80: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x278c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x278c84: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x278c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278c88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c8c: 0xc09e222  jal         func_278888
    ctx->pc = 0x278C8Cu;
    SET_GPR_U32(ctx, 31, 0x278C94u);
    ctx->pc = 0x278C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C8Cu;
    // 0x278c90: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278888u, 0x278C8Cu, 0x278C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C94u;
label_278c94:
    // 0x278c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278ca0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x278ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278ca4: 0xc09d11a  jal         func_274468
    ctx->pc = 0x278CA4u;
    SET_GPR_U32(ctx, 31, 0x278CACu);
    ctx->pc = 0x278CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278CA4u;
    // 0x278ca8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x278CA4u, 0x278CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CACu;
label_278cac:
    // 0x278cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278CACu;
    {
        const bool branch_taken_0x278cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CACu;
        // 0x278cb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cac) {
            ctx->pc = 0x278CC0u;
            goto label_278cc0;
        }
    }
    ctx->pc = 0x278CB4u;
    // 0x278cb4: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x278cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x278cb8: 0xc09e266  jal         func_278998
    ctx->pc = 0x278CB8u;
    SET_GPR_U32(ctx, 31, 0x278CC0u);
    ctx->pc = 0x278CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278CB8u;
    // 0x278cbc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278998u, 0x278CB8u, 0x278CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CC0u;
label_278cc0:
    // 0x278cc0: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x278cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x278cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x278cc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x278cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278cd0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x278cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x278cd4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x278CD4u;
    {
        const bool branch_taken_0x278cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CD4u;
        // 0x278cd8: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cd4) {
            ctx->pc = 0x278C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278c60;
        }
    }
    ctx->pc = 0x278CDCu;
    // 0x278cdc: 0x8f839da8  lw          $v1, -0x6258($gp)
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
label_278ce0:
    // 0x278ce0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x278CE0u;
    {
        const bool branch_taken_0x278ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ce0) {
            ctx->pc = 0x278CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278CE0u;
            // 0x278ce4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278CE8u;
            goto label_278ce8;
        }
    }
    ctx->pc = 0x278CE8u;
label_278ce8:
    // 0x278ce8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x278ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278cec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x278cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278cf0: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x278cf0u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x278cf4: 0x268636e8  addiu       $a2, $s4, 0x36E8
    ctx->pc = 0x278cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 14056));
    // 0x278cf8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x278cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x278cfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x278cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278d00: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x278d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278d04: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x278d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278d08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x278d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278d0c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x278d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278d10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x278d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278d14: 0x1812  mflo        $v1
    ctx->pc = 0x278d14u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x278d18: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x278d18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x278d1c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x278d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x278d20: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x278d20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x278d24: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x278d28: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278d2c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x278d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x278d30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x278d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278d34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x278d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x278d38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278d3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x278d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x278d40: 0x3e00008  jr          $ra
    ctx->pc = 0x278D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D40u;
        // 0x278d44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278D48u;
}
