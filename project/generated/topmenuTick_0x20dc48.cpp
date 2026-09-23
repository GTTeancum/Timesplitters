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

// Function: topmenuTick
// Address: 0x20dc48 - 0x20dd54
void topmenuTick_0x20dc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("topmenuTick_0x20dc48");
#endif

    switch (ctx->pc) {
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd3cu: goto label_20dd3c;
        default: break;
    }

    ctx->pc = 0x20dc48u;

    // 0x20dc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20dc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20dc4c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20dc50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20dc54: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x20dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x20dc58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20dc5c: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x20dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x20dc60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20dc64: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x20dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x20dc68: 0x9786b458  lhu         $a2, -0x4BA8($gp)
    ctx->pc = 0x20dc68u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294947928)));
    // 0x20dc6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20dc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dc70: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x20dc70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x20dc74: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x20dc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20dc78: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x20dc78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20dc7c: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x20dc7cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20dc80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20dc84: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20DC84u;
    SET_GPR_U32(ctx, 31, 0x20DC8Cu);
    ctx->pc = 0x20DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC84u;
    // 0x20dc88: 0xa622000a  sh          $v0, 0xA($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20DC84u, 0x20DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC8Cu;
label_20dc8c:
    // 0x20dc8c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x20dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x20dc90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DC90u;
    {
        const bool branch_taken_0x20dc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC90u;
        // 0x20dc94: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc90) {
            ctx->pc = 0x20DCD8u;
            goto label_20dcd8;
        }
    }
    ctx->pc = 0x20DC98u;
    // 0x20dc98: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x20dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x20dc9c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x20dc9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20dca0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20dca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20dca4: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x20dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20dca8: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x20dca8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20dcac: 0x0  nop
    ctx->pc = 0x20dcacu;
    // NOP
label_20dcb0:
    // 0x20dcb0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20dcb4: 0xf0182a  slt         $v1, $a3, $s0
    ctx->pc = 0x20dcb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20dcb8: 0x103800a  movz        $s0, $t0, $v1
    ctx->pc = 0x20dcb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x20dcbc: 0x2051007  srav        $v0, $a1, $s0
    ctx->pc = 0x20dcbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x20dcc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20dcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20dcc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20DCC4u;
    {
        const bool branch_taken_0x20dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dcc4) {
            ctx->pc = 0x20DCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dcb0;
        }
    }
    ctx->pc = 0x20DCCCu;
    // 0x20dccc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20dcd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20DCD0u;
    {
        const bool branch_taken_0x20dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCD0u;
        // 0x20dcd4: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcd0) {
            ctx->pc = 0x20DD24u;
            goto label_20dd24;
        }
    }
    ctx->pc = 0x20DCD8u;
label_20dcd8:
    // 0x20dcd8: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20dcdc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20DCDCu;
    SET_GPR_U32(ctx, 31, 0x20DCE4u);
    ctx->pc = 0x20DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCDCu;
    // 0x20dce0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20DCDCu, 0x20DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCE4u;
label_20dce4:
    // 0x20dce4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x20dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x20dce8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20DCE8u;
    {
        const bool branch_taken_0x20dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dce8) {
            ctx->pc = 0x20DCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DCE8u;
            // 0x20dcec: 0x96260004  lhu         $a2, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DD2Cu;
            goto label_20dd2c;
        }
    }
    ctx->pc = 0x20DCF0u;
    // 0x20dcf0: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x20dcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x20dcf4: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x20dcf4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20dcf8: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x20dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20dcfc: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x20dcfcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_20dd00:
    // 0x20dd00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20dd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20dd04: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x20dd04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20dd08: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x20dd08u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x20dd0c: 0x2051007  srav        $v0, $a1, $s0
    ctx->pc = 0x20dd0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x20dd10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20dd14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20DD14u;
    {
        const bool branch_taken_0x20dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dd14) {
            ctx->pc = 0x20DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dd00;
        }
    }
    ctx->pc = 0x20DD1Cu;
    // 0x20dd1c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20dd20: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_20dd24:
    // 0x20dd24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20dd28: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_20dd2c:
    // 0x20dd2c: 0x10d00004  beq         $a2, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD2Cu;
    {
        const bool branch_taken_0x20dd2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x20DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD2Cu;
        // 0x20dd30: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd2c) {
            ctx->pc = 0x20DD40u;
            goto label_20dd40;
        }
    }
    ctx->pc = 0x20DD34u;
    // 0x20dd34: 0xc081546  jal         func_205518
    ctx->pc = 0x20DD34u;
    SET_GPR_U32(ctx, 31, 0x20DD3Cu);
    ctx->pc = 0x20DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD34u;
    // 0x20dd38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20DD34u, 0x20DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD3Cu;
label_20dd3c:
    // 0x20dd3c: 0xa6300004  sh          $s0, 0x4($s1)
    ctx->pc = 0x20dd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 16));
label_20dd40:
    // 0x20dd40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dd44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20dd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20dd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD4Cu;
        // 0x20dd50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DD54u;
}
