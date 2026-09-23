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

// Function: HitTestDistancePointToLineSquared
// Address: 0x20acf0 - 0x20adcc
void HitTestDistancePointToLineSquared_0x20acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestDistancePointToLineSquared_0x20acf0");
#endif

    ctx->pc = 0x20acf0u;

    // 0x20acf0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20acf4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20acf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20acf8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20acfc: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x20acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20ad00: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x20ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ad04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20ad04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20ad08: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x20ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20ad0c: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x20ad0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x20ad10: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x20ad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ad14: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x20ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20ad18: 0x46080942  mul.s       $f5, $f1, $f8
    ctx->pc = 0x20ad18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x20ad1c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x20ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20ad20: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x20ad20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x20ad24: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x20ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20ad28: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x20ad28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x20ad2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x20ad2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20ad30: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x20ad30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20ad34: 0x46061042  mul.s       $f1, $f2, $f6
    ctx->pc = 0x20ad34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x20ad38: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x20ad38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20ad3c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x20ad3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x20ad40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20ad40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20ad44: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x20ad44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x20ad48: 0x46070042  mul.s       $f1, $f0, $f7
    ctx->pc = 0x20ad48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x20ad4c: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x20ad4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x20ad50: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x20ad50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20ad54: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20ad54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20ad58: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AD58u;
    {
        const bool branch_taken_0x20ad58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD58u;
        // 0x20ad5c: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad58) {
            ctx->pc = 0x20AD80u;
            goto label_20ad80;
        }
    }
    ctx->pc = 0x20AD60u;
    // 0x20ad60: 0x46014800  add.s       $f0, $f9, $f1
    ctx->pc = 0x20ad60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x20ad64: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20ad68: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ad6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20ad6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20ad70: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x20ad70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20ad74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ad78: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x20ad78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x20ad7c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20ad80:
    // 0x20ad80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ad84: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x20ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ad88: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x20ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ad8c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x20ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20ad90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20ad90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20ad94: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x20ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ad98: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x20ad98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x20ad9c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x20ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ada0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20ada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20ada4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x20ada4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x20ada8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x20ada8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20adac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20adacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20adb0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20adb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20adb4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x20adb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20adb8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x20adb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20adbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20adbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20adc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20adc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20adc4: 0x3e00008  jr          $ra
    ctx->pc = 0x20ADC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADC4u;
        // 0x20adc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADCCu;
}
