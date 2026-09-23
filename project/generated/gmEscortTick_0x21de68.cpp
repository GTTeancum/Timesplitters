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

// Function: gmEscortTick
// Address: 0x21de68 - 0x21df58
void gmEscortTick_0x21de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmEscortTick_0x21de68");
#endif

    switch (ctx->pc) {
        case 0x21dea0u: goto label_21dea0;
        case 0x21deb8u: goto label_21deb8;
        case 0x21ded0u: goto label_21ded0;
        case 0x21ded8u: goto label_21ded8;
        case 0x21df00u: goto label_21df00;
        case 0x21df08u: goto label_21df08;
        default: break;
    }

    ctx->pc = 0x21de68u;

    // 0x21de68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21de68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21de6c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x21de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x21de70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21de74: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21de78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21de78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21de7c: 0x3c122000  lui         $s2, 0x2000
    ctx->pc = 0x21de7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    // 0x21de80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21de80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21de84: 0x2471c4a8  addiu       $s1, $v1, -0x3B58
    ctx->pc = 0x21de84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x21de88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21de8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21de8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de90: 0x8c442010  lw          $a0, 0x2010($v0)
    ctx->pc = 0x21de90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x382010u));
    // 0x21de94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21de98: 0x8c930160  lw          $s3, 0x160($a0)
    ctx->pc = 0x21de98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x21de9c: 0x0  nop
    ctx->pc = 0x21de9cu;
    // NOP
label_21dea0:
    // 0x21dea0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x21dea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21dea4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21DEA4u;
    {
        const bool branch_taken_0x21dea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dea4) {
            ctx->pc = 0x21DED0u;
            goto label_21ded0;
        }
    }
    ctx->pc = 0x21DEACu;
    // 0x21deac: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x21deacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21deb0: 0xc0a241e  jal         func_289078
    ctx->pc = 0x21DEB0u;
    SET_GPR_U32(ctx, 31, 0x21DEB8u);
    ctx->pc = 0x21DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEB0u;
    // 0x21deb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289078u, 0x21DEB0u, 0x21DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEB8u;
label_21deb8:
    // 0x21deb8: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21DEB8u;
    {
        const bool branch_taken_0x21deb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEB8u;
        // 0x21debc: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21deb8) {
            ctx->pc = 0x21DEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dea0;
        }
    }
    ctx->pc = 0x21DEC0u;
    // 0x21dec0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x21dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21dec4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x21dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x21dec8: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21DEC8u;
    SET_GPR_U32(ctx, 31, 0x21DED0u);
    ctx->pc = 0x21DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEC8u;
    // 0x21decc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21DEC8u, 0x21DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DED0u;
label_21ded0:
    // 0x21ded0: 0xc08778a  jal         func_21DE28
    ctx->pc = 0x21DED0u;
    SET_GPR_U32(ctx, 31, 0x21DED8u);
    ctx->pc = 0x21DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DE28u, 0x21DED0u, 0x21DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DED8u;
label_21ded8:
    // 0x21ded8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21DED8u;
    {
        const bool branch_taken_0x21ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DED8u;
        // 0x21dedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ded8) {
            ctx->pc = 0x21DF00u;
            goto label_21df00;
        }
    }
    ctx->pc = 0x21DEE0u;
    // 0x21dee0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21dee4: 0xae6200f8  sw          $v0, 0xF8($s3)
    ctx->pc = 0x21dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 2));
    // 0x21dee8: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x21dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x21deec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21def0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21def4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21def4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x21def8: 0xc0874d2  jal         func_21D348
    ctx->pc = 0x21DEF8u;
    SET_GPR_U32(ctx, 31, 0x21DF00u);
    ctx->pc = 0x21DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEF8u;
    // 0x21defc: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D348u, 0x21DEF8u, 0x21DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF00u;
label_21df00:
    // 0x21df00: 0xc087332  jal         func_21CCC8
    ctx->pc = 0x21DF00u;
    SET_GPR_U32(ctx, 31, 0x21DF08u);
    ctx->pc = 0x21CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCC8u, 0x21DF00u, 0x21DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF08u;
label_21df08:
    // 0x21df08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21DF08u;
    {
        const bool branch_taken_0x21df08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF08u;
        // 0x21df0c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df08) {
            ctx->pc = 0x21DF40u;
            goto label_21df40;
        }
    }
    ctx->pc = 0x21DF10u;
    // 0x21df10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21df14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21df14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21df18: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x21df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x21df1c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21df20: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21df20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21df24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21df28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21df28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21df2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21df2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21df30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21df30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df34: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x21df34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32C4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32C4F8u, _value); } while (0);
    // 0x21df38: 0x80874d2  j           func_21D348
    ctx->pc = 0x21DF38u;
    ctx->pc = 0x21DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF38u;
    // 0x21df3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x21DF40u;
label_21df40:
    // 0x21df40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21df40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21df44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21df44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21df48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21df48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21df4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21df4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df50: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF50u;
        // 0x21df54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DF58u;
}
