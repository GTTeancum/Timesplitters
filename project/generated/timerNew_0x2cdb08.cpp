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

// Function: timerNew
// Address: 0x2cdb08 - 0x2cdbbc
void timerNew_0x2cdb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timerNew_0x2cdb08");
#endif

    ctx->pc = 0x2cdb08u;

    // 0x2cdb08: 0x8f87b5a0  lw          $a3, -0x4A60($gp)
    ctx->pc = 0x2cdb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948256)));
    // 0x2cdb0c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2cdb0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb10: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2cdb10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb14: 0x28e2004b  slti        $v0, $a3, 0x4B
    ctx->pc = 0x2cdb14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)75) ? 1 : 0);
    // 0x2cdb18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDB18u;
    {
        const bool branch_taken_0x2cdb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB18u;
        // 0x2cdb1c: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb18) {
            ctx->pc = 0x2CDB28u;
            goto label_2cdb28;
        }
    }
    ctx->pc = 0x2CDB20u;
    // 0x2cdb20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB20u;
        // 0x2cdb24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDB28u;
label_2cdb28:
    // 0x2cdb28: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2cdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cdb2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2cdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2cdb30: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x2cdb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2cdb34: 0x24682638  addiu       $t0, $v1, 0x2638
    ctx->pc = 0x2cdb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 9784));
    // 0x2cdb38: 0x8f859da8  lw          $a1, -0x6258($gp)
    ctx->pc = 0x2cdb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x2cdb3c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x2cdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2cdb40: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2cdb44: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2cdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2cdb48: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cdb48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb50: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x2cdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x2cdb54: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2cdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2cdb58: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDB58u;
    {
        const bool branch_taken_0x2cdb58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB58u;
        // 0x2cdb5c: 0xac460014  sw          $a2, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb58) {
            ctx->pc = 0x2CDB74u;
            goto label_2cdb74;
        }
    }
    ctx->pc = 0x2CDB60u;
    // 0x2cdb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdb64: 0x1122000b  beq         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDB64u;
    {
        const bool branch_taken_0x2cdb64 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB64u;
        // 0x2cdb68: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb64) {
            ctx->pc = 0x2CDB94u;
            goto label_2cdb94;
        }
    }
    ctx->pc = 0x2CDB6Cu;
    // 0x2cdb6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CDB6Cu;
    {
        const bool branch_taken_0x2cdb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB6Cu;
        // 0x2cdb70: 0x25670001  addiu       $a3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb6c) {
            ctx->pc = 0x2CDBB0u;
            goto label_2cdbb0;
        }
    }
    ctx->pc = 0x2CDB74u;
label_2cdb74:
    // 0x2cdb74: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2cdb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2cdb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb7c: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2cdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2cdb80: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2cdb80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2cdb84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cdb84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cdb88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2cdb88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2cdb8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CDB8Cu;
    {
        const bool branch_taken_0x2cdb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB8Cu;
        // 0x2cdb90: 0x25670001  addiu       $a3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb8c) {
            ctx->pc = 0x2CDBB0u;
            goto label_2cdbb0;
        }
    }
    ctx->pc = 0x2CDB94u;
label_2cdb94:
    // 0x2cdb94: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2cdb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2cdb98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2cdb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdba0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2cdba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2cdba4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cdba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cdba8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2cdba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2cdbac: 0x25670001  addiu       $a3, $t3, 0x1
    ctx->pc = 0x2cdbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2cdbb0:
    // 0x2cdbb0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2cdbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBB4u;
        // 0x2cdbb8: 0xaf87b5a0  sw          $a3, -0x4A60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948256), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDBBCu;
}
