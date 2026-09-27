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

// Function: __kernel_sinf
// Address: 0x2dbb20 - 0x2dbc24
void ps2___kernel_sinf_0x2dbb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_sinf_0x2dbb20");
#endif

    ctx->pc = 0x2dbb20u;

    // 0x2dbb20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dbb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb24: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2dbb24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dbb28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb2c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2dbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2dbb30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dbb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dbb34: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x2dbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x2dbb38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2dbb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2dbb3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dbb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dbb40: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2dbb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dbb44: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DBB44u;
    {
        const bool branch_taken_0x2dbb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb44) {
            ctx->pc = 0x2DBB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBB44u;
            // 0x2dbb48: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBB68u;
            goto label_2dbb68;
        }
    }
    ctx->pc = 0x2DBB4Cu;
    // 0x2dbb4c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dbb4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dbb50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dbb50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dbb54: 0x0  nop
    ctx->pc = 0x2dbb54u;
    // NOP
    // 0x2dbb58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBB58u;
    {
        const bool branch_taken_0x2dbb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb58) {
            ctx->pc = 0x2DBB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBB58u;
            // 0x2dbb5c: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBB68u;
            goto label_2dbb68;
        }
    }
    ctx->pc = 0x2DBB60u;
    // 0x2dbb60: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB60u;
        // 0x2dbb64: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB68u;
label_2dbb68:
    // 0x2dbb68: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x2dbb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x2dbb6c: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x2dbb6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x2dbb70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbb74: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x2dbb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x2dbb78: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x2dbb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x2dbb7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbb80: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x2dbb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x2dbb84: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x2dbb84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x2dbb88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dbb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dbb8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2dbb8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2dbb90: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x2dbb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x2dbb94: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x2dbb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x2dbb98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dbb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dbb9c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x2dbb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x2dbba0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2dbba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x2dbba4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2dbba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2dbba8: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x2dbba8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x2dbbac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dbbacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dbbb0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2dbbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2dbbb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2dbbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2dbbb8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2dbbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2dbbbc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2dbbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2dbbc0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2dbbc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2dbbc4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DBBC4u;
    {
        const bool branch_taken_0x2dbbc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBC4u;
        // 0x2dbbc8: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbc4) {
            ctx->pc = 0x2DBBECu;
            goto label_2dbbec;
        }
    }
    ctx->pc = 0x2DBBCCu;
    // 0x2dbbcc: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x2dbbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2dbbd0: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x2dbbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x2dbbd4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2dbbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2dbbd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbbdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dbbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dbbe0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2dbbe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2dbbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBE4u;
        // 0x2dbbe8: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBBECu;
label_2dbbec:
    // 0x2dbbec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dbbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dbbf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dbbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbbf4: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x2dbbf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2dbbf8: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x2dbbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x2dbbfc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2dbbfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2dbc00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dbc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbc04: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2dbc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2dbc08: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2dbc08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2dbc0c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dbc0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dbc10: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2dbc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2dbc14: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2dbc14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2dbc18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dbc18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dbc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC1Cu;
        // 0x2dbc20: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBC24u;
}
