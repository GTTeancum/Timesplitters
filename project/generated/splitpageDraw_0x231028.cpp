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

// Function: splitpageDraw
// Address: 0x231028 - 0x2310d0
void splitpageDraw_0x231028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("splitpageDraw_0x231028");
#endif

    switch (ctx->pc) {
        case 0x231028u: goto label_231028;
        case 0x23102cu: goto label_23102c;
        case 0x231030u: goto label_231030;
        case 0x231034u: goto label_231034;
        case 0x231038u: goto label_231038;
        case 0x23103cu: goto label_23103c;
        case 0x231040u: goto label_231040;
        case 0x231044u: goto label_231044;
        case 0x231048u: goto label_231048;
        case 0x23104cu: goto label_23104c;
        case 0x231050u: goto label_231050;
        case 0x231054u: goto label_231054;
        case 0x231058u: goto label_231058;
        case 0x23105cu: goto label_23105c;
        case 0x231060u: goto label_231060;
        case 0x231064u: goto label_231064;
        case 0x231068u: goto label_231068;
        case 0x23106cu: goto label_23106c;
        case 0x231070u: goto label_231070;
        case 0x231074u: goto label_231074;
        case 0x231078u: goto label_231078;
        case 0x23107cu: goto label_23107c;
        case 0x231080u: goto label_231080;
        case 0x231084u: goto label_231084;
        case 0x231088u: goto label_231088;
        case 0x23108cu: goto label_23108c;
        case 0x231090u: goto label_231090;
        case 0x231094u: goto label_231094;
        case 0x231098u: goto label_231098;
        case 0x23109cu: goto label_23109c;
        case 0x2310a0u: goto label_2310a0;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310a8u: goto label_2310a8;
        case 0x2310acu: goto label_2310ac;
        case 0x2310b0u: goto label_2310b0;
        case 0x2310b4u: goto label_2310b4;
        case 0x2310b8u: goto label_2310b8;
        case 0x2310bcu: goto label_2310bc;
        case 0x2310c0u: goto label_2310c0;
        case 0x2310c4u: goto label_2310c4;
        case 0x2310c8u: goto label_2310c8;
        case 0x2310ccu: goto label_2310cc;
        default: break;
    }

    ctx->pc = 0x231028u;

label_231028:
    // 0x231028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23102c:
    // 0x23102c: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231030:
    // 0x231030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_231034:
    // 0x231034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_231038:
    // 0x231038: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x231038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23103c:
    // 0x23103c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_231040:
    // 0x231040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x231040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231044:
    // 0x231044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x231044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_231048:
    // 0x231048: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23104c:
    // 0x23104c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_231050:
    if (ctx->pc == 0x231050u) {
        ctx->pc = 0x231050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23104Cu;
        // 0x231050: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231054u;
        goto label_231054;
    }
    ctx->pc = 0x23104Cu;
    {
        const bool branch_taken_0x23104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23104Cu;
        // 0x231050: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23104c) {
            ctx->pc = 0x23108Cu;
            goto label_23108c;
        }
    }
    ctx->pc = 0x231054u;
label_231054:
    // 0x231054: 0x0  nop
    ctx->pc = 0x231054u;
    // NOP
label_231058:
    // 0x231058: 0xc08b2c8  jal         func_22CB20
label_23105c:
    if (ctx->pc == 0x23105Cu) {
        ctx->pc = 0x23105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231058u;
        // 0x23105c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231060u;
        goto label_231060;
    }
    ctx->pc = 0x231058u;
    SET_GPR_U32(ctx, 31, 0x231060u);
    ctx->pc = 0x23105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231058u;
    // 0x23105c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x231058u, 0x231060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231060u;
label_231060:
    // 0x231060: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x231060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231064:
    // 0x231064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231068:
    // 0x231068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x231068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23106c:
    // 0x23106c: 0xc08c32a  jal         func_230CA8
label_231070:
    if (ctx->pc == 0x231070u) {
        ctx->pc = 0x231070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23106Cu;
        // 0x231070: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231074u;
        goto label_231074;
    }
    ctx->pc = 0x23106Cu;
    SET_GPR_U32(ctx, 31, 0x231074u);
    ctx->pc = 0x231070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23106Cu;
    // 0x231070: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23106Cu, 0x231074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231074u;
label_231074:
    // 0x231074: 0xc08b34c  jal         func_22CD30
label_231078:
    if (ctx->pc == 0x231078u) {
        ctx->pc = 0x23107Cu;
        goto label_23107c;
    }
    ctx->pc = 0x231074u;
    SET_GPR_U32(ctx, 31, 0x23107Cu);
    ctx->pc = 0x22CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD30u, 0x231074u, 0x23107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23107Cu;
label_23107c:
    // 0x23107c: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231080:
    // 0x231080: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x231080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231084:
    // 0x231084: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_231088:
    if (ctx->pc == 0x231088u) {
        ctx->pc = 0x23108Cu;
        goto label_23108c;
    }
    ctx->pc = 0x231084u;
    {
        const bool branch_taken_0x231084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231084) {
            ctx->pc = 0x231058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231058;
        }
    }
    ctx->pc = 0x23108Cu;
label_23108c:
    // 0x23108c: 0xc08b2c8  jal         func_22CB20
label_231090:
    if (ctx->pc == 0x231090u) {
        ctx->pc = 0x231090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23108Cu;
        // 0x231090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231094u;
        goto label_231094;
    }
    ctx->pc = 0x23108Cu;
    SET_GPR_U32(ctx, 31, 0x231094u);
    ctx->pc = 0x231090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23108Cu;
    // 0x231090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x23108Cu, 0x231094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231094u;
label_231094:
    // 0x231094: 0x8f85b730  lw          $a1, -0x48D0($gp)
    ctx->pc = 0x231094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
label_231098:
    // 0x231098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23109c:
    // 0x23109c: 0xc08c32a  jal         func_230CA8
label_2310a0:
    if (ctx->pc == 0x2310A0u) {
        ctx->pc = 0x2310A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23109Cu;
        // 0x2310a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310A4u;
        goto label_2310a4;
    }
    ctx->pc = 0x23109Cu;
    SET_GPR_U32(ctx, 31, 0x2310A4u);
    ctx->pc = 0x2310A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23109Cu;
    // 0x2310a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CA8u, 0x23109Cu, 0x2310A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2310a8:
    // 0x2310a8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2310ac:
    if (ctx->pc == 0x2310ACu) {
        ctx->pc = 0x2310ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310A8u;
        // 0x2310ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310B0u;
        goto label_2310b0;
    }
    ctx->pc = 0x2310A8u;
    {
        const bool branch_taken_0x2310a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310A8u;
        // 0x2310ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310a8) {
            ctx->pc = 0x2310BCu;
            goto label_2310bc;
        }
    }
    ctx->pc = 0x2310B0u;
label_2310b0:
    // 0x2310b0: 0xa0f809  jalr        $a1
label_2310b4:
    if (ctx->pc == 0x2310B4u) {
        ctx->pc = 0x2310B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310B0u;
        // 0x2310b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310B8u;
        goto label_2310b8;
    }
    ctx->pc = 0x2310B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2310B8u);
        ctx->pc = 0x2310B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310B0u;
        // 0x2310b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2310B0u, 0x2310B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2310B8u;
label_2310b8:
    // 0x2310b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2310b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2310bc:
    // 0x2310bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2310bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2310c0:
    // 0x2310c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2310c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2310c4:
    // 0x2310c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2310c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2310c8:
    // 0x2310c8: 0x3e00008  jr          $ra
label_2310cc:
    if (ctx->pc == 0x2310CCu) {
        ctx->pc = 0x2310CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310C8u;
        // 0x2310cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310D0u;
        goto label_fallthrough_0x2310c8;
    }
    ctx->pc = 0x2310C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2310CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310C8u;
        // 0x2310cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2310C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2310c8:
    ctx->pc = 0x2310D0u;
}
